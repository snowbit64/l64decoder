-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoLoader = {}
function AutoLoader.prerequisitesPresent(v0)
  return true
end
function AutoLoader.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AutoLoader")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoader.areas.area(?)#node", "Area root node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoader.areas.area(?).trigger(?)#node", "Trigger node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.autoLoader.areas.area(?).trigger(?)#alwaysActive", "Sets a trigger always active")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoader.areas.area(?)#length", "Area length")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoader.areas.area(?)#width", "Area width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoader.areas.area(?)#height", "Area height (only used for collision checks)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoader.areas.area(?)#spacing", "Area spacing")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#mountPosX", "Mount position x")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#mountPosZ", "Mount position z")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#mountSizeX", "Mount size x")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#mountSizeZ", "Mount size z")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#mountAreaIndex", "Mount area index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).autoLoader.mountedObject(?)#vehicleSaveId", "Vehicle save id")
  Bale.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).autoLoader.mountedObject(?).bale")
end
function AutoLoader.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "autoLoaderPickupTriggerCallback", AutoLoader.autoLoaderPickupTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "autoLoaderOverlapCallback", AutoLoader.autoLoaderOverlapCallback)
  SpecializationUtil.registerFunction(vehicleType, "getIsValidAutoLoaderObject", AutoLoader.getIsValidAutoLoaderObject)
  SpecializationUtil.registerFunction(vehicleType, "getIsAutoLoadingAllowed", AutoLoader.getIsAutoLoadingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "onUnmountObject", AutoLoader.onUnmountObject)
end
function AutoLoader.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDynamicMountTimeToMount", AutoLoader.getDynamicMountTimeToMount)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", AutoLoader.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", AutoLoader.removeFromPhysics)
end
function AutoLoader.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AutoLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AutoLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AutoLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AutoLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", AutoLoader)
end
function AutoLoader:onLoad(savegame)
  if self.isServer then
    self.spec_autoLoader.collsionMask = CollisionFlag.VEHICLE + CollisionFlag.DYNAMIC_OBJECT
    self.spec_autoLoader.pendingObjects = {}
    self.spec_autoLoader.mountedObjects = {}
    self.spec_autoLoader.triggerToAreas = {}
    self.spec_autoLoader.alwaysActiveTriggers = {}
    self.spec_autoLoader.skippedObjects = {}
    v3:iterate("vehicle.autoLoader.areas.area", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      local v3 = v3:getValue(savegame .. "#length", 6)
      local v4 = v4:getValue(savegame .. "#width", 2.5)
      local v5 = v5:getValue(savegame .. "#height", 4)
      local v6 = v6:getValue(savegame .. "#spacing", 0.1)
      if v2 ~= nil then
        if u1.areas == nil then
          u1.areas = {}
        end
        local v8 = PlacementGrid2D.new(v2, v4, v3, v6, PlacementGrid2D.MODE_SIDES)
        v8:iterate(savegame .. ".trigger", function(self, savegame)
          local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
          if u1.triggerToAreas[v2] == nil then
            addTrigger(v2, "autoLoaderPickupTriggerCallback", u0)
            u1.triggerToAreas[v2] = {}
          end
          local v3 = v3:getValue(savegame .. "#alwaysActive")
          if v3 then
            u1.alwaysActiveTriggers[v2] = true
          end
          table.insert(u1.triggerToAreas[v2], u2)
        end)
        table.insert(u1.areas, {node = v2, index = #u1.areas + 1, width = v4, length = v3, height = v5, spacing = v6, grid = v8})
      end
    end)
  end
  v2.isAutoLoadingActive = false
  local v3 = v3:getText("autoLoader_warningNoSpace")
  v2.warningNoSpace = v3
  v3 = v3:getText("autoLoader_warningTooLarge")
  v2.warningTooLarge = v3
end
function AutoLoader:onPostLoad(v1)
  if v1 ~= nil and not v1.resetVehicles then
    local v4 = string.format("%s.autoLoader.mountedObject", v1.key)
    self.spec_autoLoader.pendingVehicles = {}
    v1.xmlFile:iterate(v4, function(self, v1)
      local v2 = v2:getValue(v1 .. "#mountPosX")
      local v3 = v3:getValue(v1 .. "#mountPosZ")
      local v4 = v4:getValue(v1 .. "#mountSizeX")
      local v5 = v5:getValue(v1 .. "#mountSizeZ")
      local v6 = v6:getValue(v1 .. "#mountAreaIndex")
      local v7 = v7:getValue(v1 .. "#vehicleSaveId")
      if u1.areas[v6] ~= nil then
        if v7 ~= nil then
          table.insert(u1.pendingVehicles, {posX = v2, posZ = v3, sizeX = v4, sizeZ = v5, area = u1.areas[v6], vehicleId = v7})
          return
        end
        local v9 = v9:hasProperty(v1 .. ".bale")
        if v9 then
          v9 = Bale.new(u2.isServer, u2.isClient)
          local v10 = v9:loadFromXMLFile(u0, v1 .. ".bale", false)
          if v10 then
            v9:register()
            v10 = v9:autoLoad(u2, v8.node, v2, v3, v4, v5)
            -- if not v10 then goto L151 end
            u1.mountedObjects[v9] = {v2, v3, v4, v5, v8.index}
            u1.pendingObjects[v9] = nil
            v11:blockAreaLocal(v2, v3, v4, v5)
            return
          end
          Logging.xmlWarning(u0, "Could not load autoLoader bale for '%s'", v1)
          v9:delete()
        end
      end
    end)
  end
end
function AutoLoader:onDelete()
  if self.isServer then
    for v5, v6 in pairs(self.spec_autoLoader.pendingObjects) do
      v5:removeDeleteListener(self, AutoLoader.onDeletePendingObject)
    end
    for v5, v6 in pairs(v1.mountedObjects) do
      v5:unmountKinematic()
    end
    if v1.areas ~= nil then
      for v5, v6 in ipairs(v1.areas) do
        v7:delete()
      end
    end
    if v1.triggerToAreas ~= nil then
      for v5, v6 in pairs(v1.triggerToAreas) do
        removeTrigger(v5)
      end
    end
  end
  v1.skippedObjects = nil
  v1.pendingObjects = nil
  v1.mountedObjects = nil
end
function AutoLoader:saveToXMLFile(v1, v2, v3)
  for v9, v10 in pairs(self.spec_autoLoader.mountedObjects) do
    local v11 = string.format("%s.mountedObject(%d)", v2, v5)
    v1:setValue(v11 .. "#mountPosX", v10[1])
    v1:setValue(v11 .. "#mountPosZ", v10[2])
    v1:setValue(v11 .. "#mountSizeX", v10[3])
    v1:setValue(v11 .. "#mountSizeZ", v10[4])
    v1:setValue(v11 .. "#mountAreaIndex", v10[5])
    local v12 = v9:isa(Vehicle)
    if v12 then
      v1:setValue(v11 .. "#vehicleSaveId", v9.currentSavegameId)
    else
      v12 = v9:isa(Bale)
      if v12 then
        v9:saveToXMLFile(v1, v11 .. ".bale")
      end
    end
  end
end
function AutoLoader:onUpdate(v1, v2, v3, v4)
  if self.isServer and self.spec_autoLoader.areas ~= nil then
    for v9, v10 in pairs(self.spec_autoLoader.skippedObjects) do
      if 0 < v10 - v1 then
        -- if v10 - v1 then goto L24 end
      end
      v11[v9] = nil
    end
    if v5.pendingVehicles ~= nil then
      for v9, v10 in ipairs(v5.pendingVehicles) do
        if not (g_currentMission.savegameIdToVehicle[v10.vehicleId] ~= nil) then
          continue
        end
        local v18 = g_currentMission.savegameIdToVehicle[v10.vehicleId]:autoLoad(self, v10.area.node, v10.posX, v10.posZ, v10.sizeX, v10.sizeZ)
        if not v18 then
          continue
        end
        v5.mountedObjects[g_currentMission.savegameIdToVehicle[v10.vehicleId]] = {v10.posX, v10.posZ, v10.sizeX, v10.sizeZ, v10.area.index}
        v5.pendingObjects[g_currentMission.savegameIdToVehicle[v10.vehicleId]] = nil
        g_currentMission.savegameIdToVehicle[v10.vehicleId]:removeDeleteListener(self, AutoLoader.onDeletePendingObject)
        v19:blockAreaLocal(v10.posX, v10.posZ, v10.sizeX, v10.sizeZ)
      end
      v5.pendingVehicles = nil
    end
    if v5.needGridUpdate then
      v5.needGridUpdate = false
      for v9, v10 in ipairs(v5.areas) do
        v11:reset()
        for v14, v15 in pairs(v5.mountedObjects) do
          local v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27 = v14:getAutoLoadBoundingBox()
          v28:blockAreaByBoundingBox(v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27)
        end
      end
    end
    for v11, v12 in pairs(v5.pendingObjects) do
      if not v11.isDeleted then
        if not v5.isAutoLoadingActive then
          -- cmp-jump LOP_JUMPXEQKB R13 aux=0x80000001 -> L324
        end
        v13 = v11:getAutoLoadIsAllowed()
        if v13 then
          v13, v14, v15 = v11:getAutoLoadSize()
          for v20, v21 in ipairs(v5.triggerToAreas[v12]) do
            if v13 <= v21.width then
              -- if v14 > v21.height then goto L321 end
              -- if v15 > v21.length then goto L321 end
              -- TODO: structure LOP_FORNPREP (pc 201, target 319)
              v26, v27 = v26:getFreePosition(v13, v15)
              if v26 ~= nil then
                local v28, v29, v30 = localToWorld(v21.node, v26 + v13 * 0.5, v14 * 0.5, v27 + v15 * 0.5)
                local v31, v32, v33 = getWorldRotation(v21.node)
                v5.isAreaBlocked = false
                v5.currentPendingObject = v11
                overlapBox(v28, v29, v30, v31, v32, v33, v13 * 0.5, v14 * 0.5, v15 * 0.5, "autoLoaderOverlapCallback", self, v5.collsionMask, true, false, true, false)
                v5.currentPendingObject = nil
                if not v5.isAreaBlocked then
                  local v34 = v11:autoLoad(self, v21.node, v26, v27, v13, v15)
                  -- if not v34 then goto L318 end
                  v5.mountedObjects[v11] = {v26, v27, v13, v15, v21.index}
                  v5.pendingObjects[v11] = nil
                  v11:removeDeleteListener(self, AutoLoader.onDeletePendingObject)
                  v35:blockAreaLocal(v26, v27, v13, v15)
                  -- goto L319  (LOP_JUMP +13)
                  -- goto L318  (LOP_JUMP +11)
                end
                v34:blockAreaLocal(v26, v27, v13, v15)
              else
              end
              -- TODO: structure LOP_FORNLOOP (pc 318, target 202)
              if not not v22 then
                break
              end
            else
            end
          end
        end
        if v7 and v5.warningNoSpace ~= nil then
          v13:showBlinkingWarning(v5.warningNoSpace, 2000)
          continue
        end
        if not v6 then
          continue
        end
        if not (v5.warningTooLarge ~= nil) then
          continue
        end
        v13:showBlinkingWarning(v5.warningTooLarge, 2000)
      else
        v5.pendingObjects[v11] = true
      end
    end
    if Platform.gameplay.automaticVehicleControl and v5.isAutoLoadingActive then
      v8:playControlledActions()
    end
  end
end
function AutoLoader:onDraw()
  if self.spec_autoLoader.areas ~= nil then
    for v5, v6 in ipairs(self.spec_autoLoader.areas) do
      v7:drawDebug()
    end
  end
end
function AutoLoader:addToPhysics(v1)
  local v2 = v1(self)
  if not v2 then
    return false
  end
  if self.isServer then
    for v6, v7 in pairs(self.spec_autoLoader.mountedObjects) do
      if not (v6.addToPhysics ~= nil) then
        continue
      end
      v6:addToPhysics()
    end
  end
  return true
end
function AutoLoader:removeFromPhysics(v1)
  local v2 = v1(self)
  if self.isServer then
    for v7, v8 in pairs(self.spec_autoLoader.mountedObjects) do
      if not (v7.removeFromPhysics ~= nil) then
        continue
      end
      v7:removeFromPhysics()
    end
  end
  return v2
end
function AutoLoader:onUnmountObject(v1)
  self.spec_autoLoader.skippedObjects[v1] = 3000
  self.spec_autoLoader.mountedObjects[v1] = nil
  self.spec_autoLoader.needGridUpdate = true
  self:raiseActive()
end
function AutoLoader:getIsValidAutoLoaderObject(v1)
  if v1 == nil then
    return false
  end
  if v1 == self then
    return false
  end
  if self.spec_autoLoader.mountedObjects[v1] ~= nil then
    return false
  end
  local v3 = v1:isa(Vehicle)
  if not v3 then
    v3 = v1:isa(Bale)
    if not v3 then
      return false
    end
  end
  if v1.getAutoLoadIsSupported ~= nil then
    v3 = v1:getAutoLoadIsSupported()
    -- if v3 then goto L41 end
  end
  return false
  local v5 = self:getActiveFarm()
  v3 = v3:canFarmAccess(v5, v1)
  if not v3 then
    return false
  end
  return true
end
function AutoLoader:autoLoaderPickupTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter then
    local v8 = v8:getNodeObject(otherActorId)
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x4 -> L90
    local v9 = self:getIsAutoLoadingAllowed()
    -- if not v9 then goto L90 end
    if v8 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L90
    end
    if v7.skippedObjects[v8] ~= nil and v7.alwaysActiveTriggers[triggerId] ~= true then
    end
    local v10 = self:getIsValidAutoLoaderObject(v8)
    -- if not v10 then goto L90 end
    -- if v7.pendingObjects[v8] == v1 then goto L90 end
    -- if v9 then goto L90 end
    v7.pendingObjects[v8] = triggerId
    v8:addDeleteListener(self, AutoLoader.onDeletePendingObject)
    v7.needGridUpdate = true
    self:raiseActive()
    return
  end
  if onLeave then
    v8 = v8:getNodeObject(otherActorId)
    if v8 ~= nil and v7.pendingObjects[v8] ~= nil then
      v7.pendingObjects[v8] = nil
      v8:removeDeleteListener(self, AutoLoader.onDeletePendingObject)
    end
  end
end
function AutoLoader:autoLoaderOverlapCallback(transformId)
  if transformId ~= 0 then
    local v2 = getHasClassId(transformId, ClassIds.SHAPE)
    if v2 then
      v2 = getHasTrigger(transformId)
      if not v2 then
        v2 = v2:getNodeObject(transformId)
        if v2 ~= self and self.spec_autoLoader.mountedObjects[v2] == nil and self.spec_autoLoader.currentPendingObject ~= v2 then
          self.spec_autoLoader.isAreaBlocked = true
          return false
        end
      end
    end
  end
  return true
end
function AutoLoader:getIsAutoLoadingAllowed()
  local v1, v2, v3 = getWorldTranslation(self.components[1].node)
  local v4, v5, v6 = localToWorld(self.components[1].node, 0, 1, 0)
  if v5 - v2 < 0.5 then
    return false
  end
  return true
end
function AutoLoader:getDynamicMountTimeToMount(superFunc)
  local v3 = self:getIsAutoLoadingAllowed()
  if v3 then
    return -1
  end
  return math.huge
end
function AutoLoader:onRootVehicleChanged(v1)
  if v1.actionController ~= nil then
    if self.spec_autoLoader.controlledAction ~= nil then
      v4:updateParent(v1.actionController)
      return
    end
    local v4 = v3:registerAction("autoLoaderLoad", nil, 4)
    v2.controlledAction = v4
    v4:setCallback(self, AutoLoader.actionControllerEvent)
    v4:setIsAvailableFunction(function()
      local v1 = next(u0.spec_autoLoader.pendingObjects)
      if v1 == nil then
      end
      return true
    end)
    v4:setActionIcons("AUTO_LOAD", "AUTO_LOAD", false)
    return
  end
  if v2.controlledAction ~= nil then
    v4:remove()
    v2.controlledAction = nil
  end
end
function AutoLoader:actionControllerEvent(v1)
  if v1 < 0 then
    self.spec_autoLoader.isAutoLoadingActive = false
  else
    self.spec_autoLoader.isAutoLoadingActive = true
  end
  return true
end
function AutoLoader:onDeletePendingObject(v1)
  self.spec_autoLoader.pendingObjects[v1] = nil
end
