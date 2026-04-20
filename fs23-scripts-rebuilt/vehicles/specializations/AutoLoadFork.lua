-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoLoadFork = {BLOCK_REMOUNT_TIME = 1000}
function AutoLoadFork.prerequisitesPresent(v0)
  return true
end
function AutoLoadFork.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AutoLoadFork")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadFork#triggerNode", "Trigger to detect the pallets")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadFork#jointNode", "Node to join the pallets to")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.autoLoadFork.liftAnimation#name", "Lift animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoadFork.liftAnimation#speedScale", "Animation speed scale")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).autoLoadFork#liftAnimationTime", "Current state of lift animation")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).autoLoadFork.mountedObject(?)#vehicleSaveId", "Vehicle save id")
  Bale.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).autoLoadFork.mountedObject(?).bale")
end
function AutoLoadFork.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "onAutoLoadForkTriggerCallback", AutoLoadFork.onAutoLoadForkTriggerCallback)
  SpecializationUtil.registerFunction(v0, "getCanUnloadFork", AutoLoadFork.getCanUnloadFork)
  SpecializationUtil.registerFunction(v0, "getIsForkUnloadingAllowed", AutoLoadFork.getIsForkUnloadingAllowed)
  SpecializationUtil.registerFunction(v0, "doUnloadFork", AutoLoadFork.doUnloadFork)
  SpecializationUtil.registerFunction(v0, "onUnmountObject", AutoLoadFork.onUnmountObject)
  SpecializationUtil.registerFunction(v0, "mountObjectToFork", AutoLoadFork.mountObjectToFork)
end
function AutoLoadFork.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "addToPhysics", AutoLoadFork.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(v0, "removeFromPhysics", AutoLoadFork.removeFromPhysics)
end
function AutoLoadFork.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onPostLoad", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onDelete", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onUpdate", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onDeactivate", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onRootVehicleChanged", AutoLoadFork)
  SpecializationUtil.registerEventListener(v0, "onRegisterActionEvents", AutoLoadFork)
end
function AutoLoadFork:onLoad(v1)
  if self.isServer then
    local v3 = v3:getValue("vehicle.autoLoadFork#triggerNode", nil, self.components, self.i3dMappings)
    self.spec_autoLoadFork.triggerNode = v3
    if self.spec_autoLoadFork.triggerNode ~= nil then
      addTrigger(self.spec_autoLoadFork.triggerNode, "onAutoLoadForkTriggerCallback", self)
    end
  end
  v3 = v3:getValue("vehicle.autoLoadFork#jointNode", nil, self.components, self.i3dMappings)
  v2.jointNode = v3
  v2.remountDistance = 0
  v2.mountedObjects = {}
  v2.unmountedObjects = {}
  v2.liftAnimation = {}
  local v4 = v4:getValue("vehicle.autoLoadFork.liftAnimation#name")
  v2.liftAnimation.name = v4
  v4 = v4:getValue("vehicle.autoLoadFork.liftAnimation#speedScale", 1)
  v2.liftAnimation.speedScale = v4
end
function AutoLoadFork:onPostLoad(v1)
  if v1 ~= nil and not v1.resetVehicles then
    if self.spec_autoLoadFork.liftAnimation.name ~= nil then
      local v4 = v1.xmlFile:getValue(v1.key .. ".autoLoadFork#liftAnimationTime")
      if v4 ~= nil then
        self:setAnimationTime(self.spec_autoLoadFork.liftAnimation.name, v4, true, false)
      end
    end
    v4 = string.format("%s.autoLoadFork.mountedObject", v1.key)
    v2.pendingVehicles = {}
    v3:iterate(v4, function(self, v1)
      local v2 = v2:getValue(v1 .. "#vehicleSaveId")
      if v2 ~= nil then
        table.insert(u1.pendingVehicles, {vehicleId = v2})
        return
      end
      local v3 = v3:hasProperty(v1 .. ".bale")
      if v3 then
        v3 = Bale.new(u2.isServer, u2.isClient)
        local v4 = v3:loadFromXMLFile(u0, v1 .. ".bale", false)
        if v4 then
          v3:register()
          v4:mountObjectToFork(v3)
          return
        end
        Logging.xmlWarning(u0, "Could not load autoLoadFork bale for '%s'", v1)
        v3:delete()
      end
    end)
  end
end
function AutoLoadFork:onDelete()
  if self.isServer then
    for v5, v6 in pairs(self.spec_autoLoadFork.mountedObjects) do
      local v7 = NetworkUtil.getObject(v6)
      if not (v7 ~= nil) then
        continue
      end
      v7:unmountKinematic()
    end
  end
  if v1.triggerNode ~= nil then
    removeTrigger(v1.triggerNode)
  end
end
function AutoLoadFork:onUpdate(v1, v2, v3, v4)
  if self.isServer then
    if self.spec_autoLoadFork.pendingVehicles ~= nil then
      for v9, v10 in ipairs(self.spec_autoLoadFork.pendingVehicles) do
        if not (g_currentMission.savegameIdToVehicle[v10.vehicleId] ~= nil) then
          continue
        end
        self:mountObjectToFork(g_currentMission.savegameIdToVehicle[v10.vehicleId])
      end
      v5.pendingVehicles = nil
    end
    if 0 < v5.remountDistance then
      v7 = math.max(0, v5.remountDistance - self.lastMovedDistance)
      v5.remountDistance = v7
    end
  end
end
function AutoLoadFork:onDeactivate()
  if self.isServer then
    self.spec_autoLoadFork.remountDistance = 0
  end
end
function AutoLoadFork:saveToXMLFile(v1, v2, v3)
  if self.spec_autoLoadFork.liftAnimation.name ~= nil then
    local v8 = self:getAnimationTime(self.spec_autoLoadFork.liftAnimation.name)
    v1:setValue(...)
  end
  for v9, v10 in pairs(v4.mountedObjects) do
    local v11 = NetworkUtil.getObject(v10)
    if not (v11 ~= nil) then
      continue
    end
    local v12 = string.format("%s.mountedObject(%d)", v2, v5)
    local v13 = v11:isa(Vehicle)
    if v13 then
      v1:setValue(v12 .. "#vehicleSaveId", v11.currentSavegameId)
    else
      v13 = v11:isa(Bale)
      if v13 then
        v11:saveToXMLFile(v1, v12 .. ".bale")
      end
    end
  end
end
function AutoLoadFork:onRegisterActionEvents(v1, v2)
  if self.isClient then
    self:clearActionEventsTable(self.spec_autoLoadFork.actionEvents)
    if v2 then
      local v4, v5 = self:addActionEvent(self.spec_autoLoadFork.actionEvents, InputAction.UNLOAD_FORK, self, AutoLoadFork.actionEventUnloadFork, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
    end
  end
end
function AutoLoadFork:onRootVehicleChanged(v1)
  if v1.actionController ~= nil then
    if self.spec_autoLoadFork.controlledAction ~= nil then
      v4:updateParent(v1.actionController)
      return
    end
    local v4 = v3:registerAction("forkLifting", nil, 4)
    v2.controlledAction = v4
    v4:setCallback(self, AutoLoadFork.actionControllerEvent)
    v4:setActionIcons("LOADER_LOWER", "LOADER_LIFT", false)
    return
  end
  if v2.controlledAction ~= nil then
    v4:remove()
    v2.controlledAction = nil
  end
end
function AutoLoadFork:actionControllerEvent(v1)
  if self.spec_autoLoadFork.liftAnimation.name ~= nil then
    local v7 = self:getAnimationTime(self.spec_autoLoadFork.liftAnimation.name)
    self:playAnimation(...)
  end
  return true
end
function AutoLoadFork:onDeleteMountedObject(v1)
  -- TODO: structure LOP_FORNPREP (pc 7, target 39)
  if self.spec_autoLoadFork.mountedObjects[#self.spec_autoLoadFork.mountedObjects] == v1.id then
    table.remove(self.spec_autoLoadFork.mountedObjects, #self.spec_autoLoadFork.mountedObjects)
    table.insert(self.spec_autoLoadFork.unmountedObjects, {objectId = v1.id, time = g_time})
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 38, target 8)
end
function AutoLoadFork:onAutoLoadForkTriggerCallback(v1, v2, v3, v4, v5, v6)
  local v7 = v7:getNodeObject(v2)
  if v7 ~= nil then
    if not v7.isPallet then
      local v8 = v7:isa(Bale)
      -- if not v8 then goto L142 end
    end
    if v3 then
      -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000009 -> L142
      -- if v0.spec_autoLoadFork.remountDistance > 0 then goto L142 end
      -- TODO: structure LOP_FORNPREP (pc 35, target 45)
      if self.spec_autoLoadFork.mountedObjects[1] == v7.id then
        return
      end
      -- TODO: structure LOP_FORNLOOP (pc 44, target 36)
      -- TODO: structure LOP_FORNPREP (pc 50, target 91)
      if v8.unmountedObjects[#v8.unmountedObjects].objectId == v7.id then
        -- if g_time >= v8.unmountedObjects[#v8.unmountedObjects].time + AutoLoadFork.BLOCK_REMOUNT_TIME then goto L90 end
        return
      elseif v8.unmountedObjects[#v8.unmountedObjects].time + AutoLoadFork.BLOCK_REMOUNT_TIME < g_time then
        table.remove(v8.unmountedObjects, #v8.unmountedObjects)
      end
      -- TODO: structure LOP_FORNLOOP (pc 90, target 51)
      self:mountObjectToFork(v7)
      return
    end
    if v4 then
      -- TODO: structure LOP_FORNPREP (pc 102, target 142)
      if v8.mountedObjects[#v8.mountedObjects] == v7.id then
        v7:removeDeleteListener(self, AutoLoadFork.onDeleteMountedObject)
        table.remove(v8.mountedObjects, #v8.mountedObjects)
        table.insert(v8.unmountedObjects, {objectId = v7.id, time = g_time})
        return
      end
      -- TODO: structure LOP_FORNLOOP (pc 141, target 103)
    end
  end
end
function AutoLoadFork:mountObjectToFork(v1)
  if v1.isPallet then
  else
    local v7 = v1:isa(Bale)
    if v7 then
    end
  end
  if v1.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then
    v1:unmountKinematic()
  end
  v1:mountKinematic(self, v2.jointNode, 0, v4, v5, 0, v6, 0)
  table.insert(v2.mountedObjects, v1.id)
  v1:addDeleteListener(self, AutoLoadFork.onDeleteMountedObject)
end
function AutoLoadFork:getCanUnloadFork()
  if 0 >= #self.spec_autoLoadFork.mountedObjects then
  end
  return true
end
function AutoLoadFork.getIsForkUnloadingAllowed(v0)
  return true
end
function AutoLoadFork:doUnloadFork()
  -- TODO: structure LOP_FORNPREP (pc 7, target 51)
  local v6 = NetworkUtil.getObject(self.spec_autoLoadFork.mountedObjects[#self.spec_autoLoadFork.mountedObjects])
  if v6 ~= nil then
    v6:unmountKinematic()
    v6:removeDeleteListener(self, AutoLoadFork.onDeleteMountedObject)
    table.remove(self.spec_autoLoadFork.mountedObjects, #self.spec_autoLoadFork.mountedObjects)
    table.insert(self.spec_autoLoadFork.unmountedObjects, {objectId = v6.id, time = g_time})
  end
  -- TODO: structure LOP_FORNLOOP (pc 50, target 8)
end
function AutoLoadFork:actionEventUnloadFork(v1, v2, v3, v4)
  self:doUnloadFork()
end
function AutoLoadFork:onUnmountObject(v1)
  self.spec_autoLoadFork.remountDistance = 5
  -- TODO: structure LOP_FORNPREP (pc 10, target 50)
  if self.spec_autoLoadFork.mountedObjects[#self.spec_autoLoadFork.mountedObjects] == v1.id then
    v1:removeDeleteListener(self, AutoLoadFork.onDeleteMountedObject)
    table.remove(self.spec_autoLoadFork.mountedObjects, #self.spec_autoLoadFork.mountedObjects)
    table.insert(self.spec_autoLoadFork.unmountedObjects, {objectId = v1.id, time = g_time})
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 49, target 11)
end
function AutoLoadFork:addToPhysics(v1)
  local v2 = v1(self)
  if not v2 then
    return false
  end
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 16, target 34)
    local v7 = NetworkUtil.getObject(self.spec_autoLoadFork.mountedObjects[#self.spec_autoLoadFork.mountedObjects])
    if v7 ~= nil and v7.addToPhysics ~= nil then
      v7:addToPhysics()
    end
    -- TODO: structure LOP_FORNLOOP (pc 33, target 17)
  end
  return true
end
function AutoLoadFork:removeFromPhysics(v1)
  local v2 = v1(self)
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 13, target 31)
    local v8 = NetworkUtil.getObject(self.spec_autoLoadFork.mountedObjects[#self.spec_autoLoadFork.mountedObjects])
    if v8 ~= nil and v8.removeFromPhysics ~= nil then
      v8:removeFromPhysics()
    end
    -- TODO: structure LOP_FORNLOOP (pc 30, target 14)
  end
  return v2
end
