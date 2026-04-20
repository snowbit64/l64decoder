-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SupportVehicle = {}
function SupportVehicle.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AttacherJoints, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Mountable, v0)
  end
  return v1
end
function SupportVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SupportVehicle")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.supportVehicle#filename", "Path to support vehicle xml")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.supportVehicle#attacherJointIndex", "Attacher joint index on support vehicle", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.supportVehicle#inputAttacherJointIndex", "Input attacher joint index on own vehicle", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.supportVehicle#terrainOffset", "Spawn Offset from terrain for the support vehicle", 0.2)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.supportVehicle#spawnOffset", "Tool will be moved this distance away in X direction of the attacher joint", 0.75)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.supportVehicle.configuration(?)#name", "Configuration name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.supportVehicle.configuration(?)#id", "Configuration id")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SupportVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "addSupportVehicle", SupportVehicle.addSupportVehicle)
  SpecializationUtil.registerFunction(vehicleType, "enableSupportVehicle", SupportVehicle.enableSupportVehicle)
  SpecializationUtil.registerFunction(vehicleType, "removeSupportVehicle", SupportVehicle.removeSupportVehicle)
end
function SupportVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowMultipleAttachments", SupportVehicle.getAllowMultipleAttachments)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "resolveMultipleAttachments", SupportVehicle.resolveMultipleAttachments)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShowAttachableMapHotspot", SupportVehicle.getShowAttachableMapHotspot)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsReadyToFinishDetachProcess", SupportVehicle.getIsReadyToFinishDetachProcess)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "startDetachProcess", SupportVehicle.startDetachProcess)
end
function SupportVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SupportVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", SupportVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SupportVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetach", SupportVehicle)
end
function SupportVehicle:onLoad(savegame)
  local v3 = v3:getValue("vehicle.supportVehicle" .. "#attacherJointIndex", 1)
  self.spec_supportVehicle.attacherJointIndex = v3
  v3 = v3:getValue("vehicle.supportVehicle" .. "#inputAttacherJointIndex", 1)
  self.spec_supportVehicle.inputAttacherJointIndex = v3
  v3 = v3:getValue("vehicle.supportVehicle" .. "#terrainOffset", 0.2)
  self.spec_supportVehicle.terrainOffset = v3
  v3 = v3:getValue("vehicle.supportVehicle" .. "#spawnOffset", 0.75)
  self.spec_supportVehicle.spawnOffset = v3
  self.spec_supportVehicle.heightChecks = {}
  v3 = v3:getValue("vehicle.supportVehicle" .. "#filename")
  if v3 ~= nil then
    local v4 = Utils.getFilename(v3, self.customEnvironment)
    self.spec_supportVehicle.filename = v4
    v4 = v4:getItemByXMLFilename(self.spec_supportVehicle.filename)
    if v4 ~= nil then
      self.spec_supportVehicle.storeItem = v4
      local v5 = StoreItemUtil.getSizeValues(v4.xmlFilename, "vehicle", v4.rotation)
      table.insert(self.spec_supportVehicle.heightChecks, {v5.width / 2 + v5.widthOffset, v5.length / 2 + v5.lengthOffset})
      table.insert(self.spec_supportVehicle.heightChecks, {-v5.width / 2 + v5.widthOffset, v5.length / 2 + v5.lengthOffset})
      table.insert(self.spec_supportVehicle.heightChecks, {v5.width / 2 + v5.widthOffset, -v5.length / 2 + v5.lengthOffset})
      table.insert(self.spec_supportVehicle.heightChecks, {-v5.width / 2 + v5.widthOffset, -v5.length / 2 + v5.lengthOffset})
    else
      Logging.xmlWarning(self.xmlFile, "Unable to find support vehicle '%s'.", v3)
      self.spec_supportVehicle.filename = nil
    end
  end
  v2.configurations = {}
  while true do
    v5 = string.format("%s.configuration(%d)", "vehicle.supportVehicle", v4)
    v6 = v6:hasProperty(v5)
    if not v6 then
      break
    end
    v6 = v6:getValue(v5 .. "#name")
    v7 = v7:getValue(v5 .. "#id")
    if v6 ~= nil and v7 ~= nil then
      v2.configurations[v6] = v7
    end
  end
  v2.firstRun = true
  v2.loadedSupportVehicle = nil
  v2.isLoadingSupportVehicle = false
  if self.isServer then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L274
  end
  SpecializationUtil.removeEventListener(self, "onDelete", SupportVehicle)
  SpecializationUtil.removeEventListener(self, "onUpdate", SupportVehicle)
  SpecializationUtil.removeEventListener(self, "onPostDetach", SupportVehicle)
end
function SupportVehicle:onDelete()
  if not self.isReconfigurating then
    self:removeSupportVehicle()
  end
end
function SupportVehicle:onPostDetach(attacherVehicle, implement)
  self:enableSupportVehicle()
end
function SupportVehicle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_supportVehicle.firstRun and not g_currentMission.isReloadingVehicles then
    local v6 = self:getAttacherVehicle()
    if v6 == nil then
      self:addSupportVehicle(false)
    elseif self.spec_supportVehicle.supportVehicle == nil then
      v6 = self:getAttacherVehicle()
      if v6.configFileName == self.spec_supportVehicle.filename then
        self.spec_supportVehicle.supportVehicle = v6
        v7:setIsSupportVehicle()
        self:setReducedComponentMass(true)
      end
    end
    v5.firstRun = false
  end
end
function SupportVehicle:addSupportVehicle(dt)
  if self.spec_supportVehicle.storeItem ~= nil and self.spec_supportVehicle.supportVehicle == nil and not self.spec_supportVehicle.isLoadingSupportVehicle and self.spec_supportVehicle.loadedSupportVehicle == nil then
    local isActiveForInputIgnoreSelection = self:getInputAttacherJointByJointDescIndex(self.spec_supportVehicle.inputAttacherJointIndex)
    if isActiveForInputIgnoreSelection ~= nil then
      local isSelected, v5, v6 = getWorldTranslation(isActiveForInputIgnoreSelection.node)
      if dt == true then
        local v7, v8, v9 = localDirectionToWorld(isActiveForInputIgnoreSelection.node, 1, 0, 0)
      end
      v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, isSelected, 0, v6)
      v7, v8, v9 = localRotationToWorld(isActiveForInputIgnoreSelection.node, -math.pi, 0, -math.pi)
      isActiveForInput.isLoadingSupportVehicle = true
      local v17 = self:getActiveFarm()
      VehicleLoadingUtil.loadVehicle(isActiveForInput.storeItem.xmlFilename, {x = isSelected, y = v7 + isActiveForInput.terrainOffset, z = v6, xRot = v7, yRot = v8, zRot = v9}, true, 0, Vehicle.PROPERTY_STATE_NONE, v17, isActiveForInput.configurations, nil, SupportVehicle.supportVehicleLoaded, self, {dt})
    end
  end
end
function SupportVehicle:supportVehicleLoaded(vehicle, vehicleLoadState, asyncCallbackArguments)
  if vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_OK and vehicle ~= nil then
    if not self.isDeleted then
      self.spec_supportVehicle.loadedSupportVehicle = vehicle
      -- cmp-jump LOP_JUMPXEQKB R5 aux=0x1 -> L23
      self:enableSupportVehicle()
    else
      vehicle:delete()
    end
  end
  isSelected.isLoadingSupportVehicle = false
end
function SupportVehicle:enableSupportVehicle()
  if self.spec_supportVehicle.loadedSupportVehicle ~= nil then
    self.spec_supportVehicle.loadedSupportVehicle = nil
    self.spec_supportVehicle.loadedSupportVehicle:setIsSupportVehicle()
    self:setReducedComponentMass(true)
    local isActiveForInputIgnoreSelection = self:getInputAttacherJointByJointDescIndex(self.spec_supportVehicle.inputAttacherJointIndex)
    if isActiveForInputIgnoreSelection ~= nil and self.spec_supportVehicle.loadedSupportVehicle.getAttacherJointByJointDescIndex ~= nil then
      local v6 = self.spec_supportVehicle.loadedSupportVehicle:getAttacherJointByJointDescIndex(self.spec_supportVehicle.attacherJointIndex)
      if v6 ~= nil then
        local v7, v8, v9 = getWorldTranslation(self.spec_supportVehicle.loadedSupportVehicle.rootNode)
        local v10, v11, v12 = getWorldRotation(self.spec_supportVehicle.loadedSupportVehicle.rootNode)
        local v13, v14, v15 = localDirectionToWorld(self.spec_supportVehicle.loadedSupportVehicle.rootNode, v6.jointOrigOffsetComponent[1], 0, v6.jointOrigOffsetComponent[3])
        local v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v7 - v13, 0, v9 - v15)
        local v16 = math.max(v18 + self.spec_supportVehicle.terrainOffset, v8 - v14)
        self.spec_supportVehicle.loadedSupportVehicle:removeFromPhysics()
        self.spec_supportVehicle.loadedSupportVehicle:setAbsolutePosition(v7 - v13, v16, v9 - v15, v10, v11, v12)
        self.spec_supportVehicle.loadedSupportVehicle:addToPhysics()
        v18 = unpack(isActiveForInputIgnoreSelection.jointOrigOffsetComponent)
        local v16, v17, v18 = localToWorld(...)
        v18 = unpack(isActiveForInputIgnoreSelection.jointOrigRotOffsetComponent)
        v16, v17, v18 = localRotationToWorld(...)
        self:removeFromPhysics()
        self:setAbsolutePosition(v16, v17, v18, v16, v17, v18)
        self:addToPhysics()
        self.spec_supportVehicle.loadedSupportVehicle:attachImplement(self, self.spec_supportVehicle.inputAttacherJointIndex, self.spec_supportVehicle.attacherJointIndex, true, nil, nil, true)
        v16:updateSelectableObjects()
        v16:setSelectedVehicle(self)
        self.spec_supportVehicle.supportVehicle = self.spec_supportVehicle.loadedSupportVehicle
        return
      end
    end
    isActiveForInput:delete()
  end
end
function SupportVehicle:removeSupportVehicle()
  if self.spec_supportVehicle.supportVehicle ~= nil and not self.spec_supportVehicle.supportVehicle.isDeleted then
    isActiveForInput:delete()
  end
  dt.supportVehicle = nil
  if self.isServer and self.components ~= nil then
    self:setReducedComponentMass(false)
  end
end
function SupportVehicle.getAllowMultipleAttachments(v0, dt)
  return true
end
function SupportVehicle:resolveMultipleAttachments(superFunc)
  if self.isServer then
    if self.spec_supportVehicle.filename ~= nil then
      self:removeSupportVehicle()
    else
      local attacherVehicle = self:getAttacherVehicle()
      if attacherVehicle ~= nil then
        attacherVehicle:detachImplementByObject(self)
      end
    end
  end
  superFunc(self)
end
function SupportVehicle:getShowAttachableMapHotspot(dt)
  if self.spec_supportVehicle.supportVehicle ~= nil then
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getAttacherVehicle()
    if isActiveForInputIgnoreSelection ~= nil then
    end
    return true
  end
  return dt(self)
end
function SupportVehicle:getIsReadyToFinishDetachProcess(dt)
  local isActiveForInputIgnoreSelection = dt(self)
  if isActiveForInputIgnoreSelection and not not self.spec_supportVehicle.isLoadingSupportVehicle and self.spec_supportVehicle.loadedSupportVehicle == nil then
  end
  return isActiveForInputIgnoreSelection
end
function SupportVehicle:startDetachProcess(dt)
  if not self.isDeleting then
    self:addSupportVehicle(true)
  end
  return dt(self)
end
