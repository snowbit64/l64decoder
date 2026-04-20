-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedReceivingHopper = {}
function ExtendedReceivingHopper.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(ReceivingHopper, v0)
  end
  return v1
end
function ExtendedReceivingHopper.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ExtendedReceivingHopper")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.receivingHopper.additionalSpawnPlace(?)#node", "Node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ExtendedReceivingHopper.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getCanSpawnNextBoxExt", ExtendedReceivingHopper.getCanSpawnNextBoxExt)
  SpecializationUtil.registerFunction(vehicleType, "createBoxExt", ExtendedReceivingHopper.createBoxExt)
end
function ExtendedReceivingHopper.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanSpawnNextBox", ExtendedReceivingHopper.getCanSpawnNextBox)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "createBox", ExtendedReceivingHopper.createBox)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", ExtendedReceivingHopper.loadDischargeNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischarge", ExtendedReceivingHopper.handleDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setDischargeEffectActive", ExtendedReceivingHopper.setDischargeEffectActive)
end
function ExtendedReceivingHopper.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ExtendedReceivingHopper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ExtendedReceivingHopper)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", ExtendedReceivingHopper)
end
function ExtendedReceivingHopper:onLoad(savegame)
  self.spec_extendedReceivingHopper = self["spec_" .. u0 .. ".extendedReceivingHopper"]
  self.spec_extendedReceivingHopper.spawnPlaces = {}
  while true do
    v4 = string.format("vehicle.receivingHopper.additionalSpawnPlace(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = v6:getValue(v4 .. "#node", "0>", self.components, self.i3dMappings)
    if {node = v6}.node ~= nil then
      table.insert(v2.spawnPlaces, {node = v6})
    end
  end
  v2.activeSpawnNode = 0
  v2.numSpawnNodes = #v2.spawnPlaces
  self.spec_receivingHopper.lastDischargeTime = 0
  self.spec_attachable.requiresExternalPower = false
end
function ExtendedReceivingHopper:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_receivingHopper.createBoxes then
    local v6 = self:getDischargeState()
    if v6 == Dischargeable.DISCHARGE_STATE_OFF and 1000 < g_time - self.spec_receivingHopper.lastDischargeTime then
      v6 = self:getCanSpawnNextBoxExt()
      if v6 then
        self:createBoxExt()
      end
      if #self.spec_dischargeable.dischargeNodes < self.spec_dischargeable.currentDischargeNode.index + 1 then
      end
      if v8 ~= v6 then
        self:setCurrentDischargeNodeIndex(v8)
      end
    end
  end
end
function ExtendedReceivingHopper:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if self.isServer and fillLevelDelta < 0 then
    local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
    if 0 < fillLevel and fillLevel < 0.00001 then
      local v10 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v10, fillUnitIndex, -math.huge, fillTypeIndex, toolType, nil)
    end
  end
end
function ExtendedReceivingHopper:getCanSpawnNextBox(superFunc)
  if self.spec_receivingHopper.creatingBox then
    return false
  end
  if v2.activeSpawnNode == 0 then
    local v4 = self:getFillUnitFillType(v3.fillUnitIndex)
    if v3.boxes[v4] ~= nil then
      if v3.lastBox ~= nil then
        local v5 = v5:getFillUnitFreeCapacity(1)
        if 0 < v5 then
          return false
        end
      end
      v5 = Utils.getFilename(v3.boxes[v4], self.baseDirectory)
      local v6 = StoreItemUtil.getSizeValues(v5, "vehicle", 0, {})
      local v7, v8, v9 = getWorldTranslation(v3.spawnPlace)
      local v10, v11, v12 = getWorldRotation(v3.spawnPlace)
      v3.foundObjectAtSpawnPlace = false
      overlapBox(v7, v8 + 0.5, v9, v10, v11, v12, v6.width * 0.5, 0.5, v6.length * 0.5, "collisionTestCallback", self, 5468288, true, true, true)
      return not v3.foundObjectAtSpawnPlace
    end
  end
  return false
end
function ExtendedReceivingHopper:createBox(superFunc)
  self.spec_extendedReceivingHopper.activeSpawnNode = self.spec_extendedReceivingHopper.activeSpawnNode + 1
  superFunc(self)
end
function ExtendedReceivingHopper:loadDischargeNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  if self.isClient then
    v5 = v5:loadAnimations(self.xmlFile, key .. ".animationNodes", self.components, self, self.i3dMappings)
    entry.animationNodes = v5
  end
  return true
end
function ExtendedReceivingHopper:handleDischarge(superFunc, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if dischargedLiters ~= 0 then
    self.spec_receivingHopper.lastDischargeTime = g_time
  end
  superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
end
function ExtendedReceivingHopper.setDischargeEffectActive(v0, v1, v2, v3, v4)
  if v3 then
    v5:startAnimations(v2.animationNodes)
  else
    v5:stopAnimations(v2.animationNodes)
  end
  v1(v0, v2, v3, v4)
end
function ExtendedReceivingHopper:getCanSpawnNextBoxExt()
  if self.spec_receivingHopper.creatingBox then
    return false
  end
  if 0 < v1.activeSpawnNode and v1.spawnPlaces[v1.activeSpawnNode] ~= nil then
    local v4 = self:getFillUnitFillType(v2.fillUnitIndex)
    if v2.boxes[v4] ~= nil then
      if v2.lastBox ~= nil then
        local v5 = v5:getFillUnitFreeCapacity(1)
        if 0 < v5 then
          return false
        end
      end
      v5 = Utils.getFilename(v2.boxes[v4], self.baseDirectory)
      local v6 = StoreItemUtil.getSizeValues(v5, "vehicle", 0, {})
      local v7, v8, v9 = getWorldTranslation(v3.node)
      local v10, v11, v12 = getWorldRotation(v3.node)
      v2.foundObjectAtSpawnPlace = false
      overlapBox(v7, v8 + 0.5, v9, v10, v11, v12, v6.width * 0.5, 0.5, v6.length * 0.5, "collisionTestCallback", self, 5468288, true, true, true)
      return not v2.foundObjectAtSpawnPlace
    end
  end
  return false
end
function ExtendedReceivingHopper:createBoxExt()
  if self.isServer and self.spec_receivingHopper.createBoxes and self.spec_extendedReceivingHopper.spawnPlaces[self.spec_extendedReceivingHopper.activeSpawnNode] ~= nil then
    local v4 = self:getFillUnitFillType(self.spec_receivingHopper.fillUnitIndex)
    if self.spec_receivingHopper.boxes[v4] ~= nil then
      local v5, v6, v7 = getWorldTranslation(self.spec_extendedReceivingHopper.spawnPlaces[self.spec_extendedReceivingHopper.activeSpawnNode].node)
      local v8, v9, v10 = localDirectionToWorld(self.spec_extendedReceivingHopper.spawnPlaces[self.spec_extendedReceivingHopper.activeSpawnNode].node, 0, 0, 1)
      local v11 = MathUtil.getYRotationFromDirection(v8, v10)
      local v12 = Utils.getFilename(self.spec_receivingHopper.boxes[v4], self.baseDirectory)
      self.spec_receivingHopper.creatingBox = true
      local v20 = self:getOwnerFarmId()
      VehicleLoadingUtil.loadVehicle(v12, {x = v5, z = v7, yRot = v11}, true, 0, Vehicle.PROPERTY_STATE_OWNED, v20, nil, nil, self.onCreateBoxFinished, self)
    end
  end
  v1.activeSpawnNode = v1.activeSpawnNode + 1
  if v1.numSpawnNodes < v1.activeSpawnNode then
    v1.activeSpawnNode = 0
  end
end
