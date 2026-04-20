-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LogGrab = {}
function LogGrab.prerequisitesPresent(v0)
  return true
end
function LogGrab.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("LogGrab")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.logGrab.grab(?)#componentJoint", "Component joint index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.logGrab.grab(?)#dampingFactor", "Damping factor", 20)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.logGrab.grab(?)#axis", "Grab axis", 1)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.logGrab.grab(?)#rotationOffsetThreshold", "Rotation offset threshold", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.logGrab.grab(?)#rotationOffsetTime", "Rotation offset time until mount", 1000)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.logGrab#jointNode", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.logGrab#jointRoot", "Joint root node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.logGrab#lockAllAxis", "Lock all axis", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.logGrab.trigger#node", "Trigger node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function LogGrab.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "logGrabTriggerCallback", LogGrab.logGrabTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "updateLogGrabState", LogGrab.updateLogGrabState)
  SpecializationUtil.registerFunction(vehicleType, "mountSplitShape", LogGrab.mountSplitShape)
  SpecializationUtil.registerFunction(vehicleType, "unmountSplitShape", LogGrab.unmountSplitShape)
end
function LogGrab.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", LogGrab.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", LogGrab.removeNodeObjectMapping)
end
function LogGrab.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", LogGrab)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", LogGrab)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", LogGrab)
end
function LogGrab:onLoad(savegame)
  if self.isServer then
    self.spec_logGrab.grabs = {}
    while true do
      v4 = string.format("vehicle.logGrab.grab(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = v6:getValue(v4 .. "#componentJoint")
      v6 = v6:getValue(v4 .. "#dampingFactor", 20)
      v6 = v6:getValue(v4 .. "#axis", 1)
      {componentJoint = v6, dampingFactor = v6, axis = v6, direction = {0, 0, 0}}.direction[{componentJoint = v6, dampingFactor = v6, axis = v6, direction = {0, 0, 0}}.axis] = 1
      if self.componentJoints[{componentJoint = v6, dampingFactor = v6, axis = v6, direction = {0, 0, 0}}.componentJoint] ~= nil then
        v11 = unpack({componentJoint = v6, dampingFactor = v6, axis = v6, direction = {0, 0, 0}}.direction)
        v8 = localDirectionToLocal(...)
      end
      v7 = v7:getValue(v4 .. "#rotationOffsetThreshold", 10)
      v5.rotationOffsetThreshold = v7
      v7 = v7:getValue(v4 .. "#rotationOffsetTime", 1000)
      v5.rotationOffsetTime = v7
      v5.rotationOffsetTimer = 0
      v5.rotationChangedTimer = 0
      v5.currentOffset = 0
      table.insert(v2.grabs, v5)
    end
    v4 = v4:getValue("vehicle.logGrab#jointNode", nil, self.components, self.i3dMappings)
    v2.jointNode = v4
    v4 = v4:getValue("vehicle.logGrab#jointRoot", nil, self.components, self.i3dMappings)
    v2.jointRoot = v4
    v4 = v4:getValue("vehicle.logGrab#lockAllAxis", false)
    v2.lockAllAxis = v4
    v4 = v4:getValue("vehicle.logGrab.trigger#node", nil, self.components, self.i3dMappings)
    v2.triggerNode = v4
    if v2.triggerNode ~= nil then
      addTrigger(v2.triggerNode, "logGrabTriggerCallback", self)
    end
    v2.pendingDynamicMountShapes = {}
    v2.dynamicMountedShapes = {}
    v2.jointLimitsOpen = false
  end
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", LogGrab)
  end
end
function LogGrab:onDelete()
  if self.spec_logGrab.triggerNode ~= nil then
    removeTrigger(self.spec_logGrab.triggerNode)
  end
end
function LogGrab:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v10, v11 in ipairs(self.spec_logGrab.grabs) do
    local v12 = self:updateLogGrabState(v11, dt)
    if not not v12 then
      continue
    end
  end
  for v10, v11 in pairs(v5.pendingDynamicMountShapes) do
    v12 = entityExists(v10)
    if not not v12 then
      continue
    end
    v5.pendingDynamicMountShapes[v10] = nil
  end
  if v6 then
    for v10, v11 in pairs(v5.pendingDynamicMountShapes) do
      if not (v5.dynamicMountedShapes[v10] == nil) then
        continue
      end
      local v12, v13 = self:mountSplitShape(v10)
      if not (v12 ~= nil) then
        continue
      end
      v5.dynamicMountedShapes[v10] = {jointIndex = v12, jointTransform = v13}
      v5.pendingDynamicMountShapes[v10] = nil
    end
    -- if v5.jointLimitsOpen then goto L190 end
    v7 = next(v5.dynamicMountedShapes)
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L190
    v5.jointLimitsOpen = true
    for v10, v11 in ipairs(v5.grabs) do
      if not (self.componentJoints[v11.componentJoint] ~= nil) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 96, target 113)
      setJointRotationLimitSpring(self.componentJoints[v11.componentJoint].jointIndex, 1 - 1, self.componentJoints[v11.componentJoint].rotLimitSpring[1], self.componentJoints[v11.componentJoint].rotLimitDamping[1] * v11.dampingFactor)
      -- TODO: structure LOP_FORNLOOP (pc 112, target 97)
    end
    return
  end
  for v10, v11 in pairs(v5.dynamicMountedShapes) do
    self:unmountSplitShape(v10, v11.jointIndex, v11.jointTransform, false)
  end
  if v5.jointLimitsOpen then
    v5.jointLimitsOpen = false
    for v10, v11 in ipairs(v5.grabs) do
      if not (self.componentJoints[v11.componentJoint] ~= nil) then
        continue
      end
      setJointRotationLimitSpring(self.componentJoints[v11.componentJoint].jointIndex, 0, self.componentJoints[v11.componentJoint].rotLimitSpring[1], self.componentJoints[v11.componentJoint].rotLimitDamping[1])
      setJointRotationLimitSpring(self.componentJoints[v11.componentJoint].jointIndex, 1, self.componentJoints[v11.componentJoint].rotLimitSpring[2], self.componentJoints[v11.componentJoint].rotLimitDamping[2])
      setJointRotationLimitSpring(self.componentJoints[v11.componentJoint].jointIndex, 2, self.componentJoints[v11.componentJoint].rotLimitSpring[3], self.componentJoints[v11.componentJoint].rotLimitDamping[3])
    end
  end
end
function LogGrab:updateLogGrabState(grab, dt)
  if self.componentJoints[grab.componentJoint] ~= nil then
    local v8 = unpack(grab.direction)
    local v5, v6, v7 = localDirectionToLocal(...)
    if grab.axis == 1 then
    elseif grab.axis == 2 then
    else
      if grab.axis == 3 then
      end
    end
    local v9 = math.abs(v8)
    if grab.rotationOffsetThreshold < v9 then
      if grab.rotationOffsetTime < grab.rotationOffsetTimer then
        return true
      end
      grab.rotationOffsetTimer = grab.rotationOffsetTimer + dt
    elseif 0 < grab.rotationOffsetTimer then
      local v9, v10, v11 = getRotation(v3.jointNode)
      if grab.lastRotation ~= nil then
        -- if v9 + v10 + v11 == v1.lastRotation then goto L102 end
        grab.rotationOffsetTimer = 0
        grab.rotationChangedTimer = 750
        grab.lastRotation = nil
      else
        local v13 = math.max(grab.rotationChangedTimer - dt)
        grab.rotationChangedTimer = v13
        if grab.rotationChangedTimer <= 0 then
          grab.lastRotation = v9 + v10 + v11
          return true
        end
        grab.rotationOffsetTimer = 0
        grab.lastRotation = nil
      end
    end
    grab.currentOffset = v8
  end
  return false
end
function LogGrab:mountSplitShape(shapeId)
  local constr = JointConstructor.new()
  constr:setActors(self.spec_logGrab.jointRoot, shapeId)
  local jointTransform = createTransformGroup("dynamicMountJoint")
  link(self.spec_logGrab.jointNode, jointTransform)
  constr:setJointTransforms(jointTransform, jointTransform)
  constr:setRotationLimit(0, 0, 0)
  constr:setRotationLimit(1, 0, 0)
  constr:setRotationLimit(2, 0, 0)
  if not self.spec_logGrab.lockAllAxis then
    constr:setTranslationLimit(1, false, 0, 0)
    constr:setTranslationLimit(2, false, 0, 0)
    constr:setEnableCollision(true)
  end
  constr:setRotationLimitSpring(7500, 1500, 7500, 1500, 7500, 1500)
  constr:setTranslationLimitSpring(7500, 1500, 7500, 1500, 7500, 1500)
  v5:publish(MessageType.TREE_SHAPE_MOUNTED, shapeId, self)
  local v5 = constr:finalize()
  return v5, jointTransform
end
function LogGrab:unmountSplitShape(shapeId, jointIndex, jointTransform, isDeleting)
  removeJoint(jointIndex)
  delete(jointTransform)
  self.spec_logGrab.dynamicMountedShapes[shapeId] = nil
  if isDeleting ~= nil and isDeleting then
    self.spec_logGrab.pendingDynamicMountShapes[shapeId] = nil
    return
  end
  v5.pendingDynamicMountShapes[shapeId] = true
end
function LogGrab:logGrabTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter then
    local v8 = getSplitType(otherActorId)
    -- cmp-jump LOP_JUMPXEQKN R8 aux=0x3 -> L68
    v8 = getRigidBodyType(otherActorId)
    if v8 ~= RigidBodyType.DYNAMIC then
      -- if v8 ~= RigidBodyType.KINEMATIC then goto L68 end
    end
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L68
    v7.pendingDynamicMountShapes[otherActorId] = true
    return
  end
  if onLeave then
    v8 = getSplitType(otherActorId)
    if v8 ~= 0 then
      if v7.pendingDynamicMountShapes[otherActorId] ~= nil then
        v7.pendingDynamicMountShapes[otherActorId] = nil
        return
      end
      if v7.dynamicMountedShapes[otherActorId] ~= nil then
        self:unmountSplitShape(otherActorId, v7.dynamicMountedShapes[otherActorId].jointIndex, v7.dynamicMountedShapes[otherActorId].jointTransform, true)
      end
    end
  end
end
function LogGrab:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_logGrab.logGrabTrigger ~= nil and self.spec_logGrab.logGrabTrigger.triggerNode ~= nil then
    list[self.spec_logGrab.logGrabTrigger.triggerNode] = self
  end
end
function LogGrab:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_logGrab.logGrabTrigger ~= nil and self.spec_logGrab.logGrabTrigger.triggerNode ~= nil then
    list[self.spec_logGrab.logGrabTrigger.triggerNode] = nil
  end
end
function LogGrab:updateDebugValues(values)
  if self.isServer then
    for v6, v7 in ipairs(self.spec_logGrab.grabs) do
      local v11 = string.format("grab (%d):", v6)
      local v14 = math.abs(v7.currentOffset)
      local v13 = math.deg(...)
      v14 = math.deg(v7.rotationOffsetThreshold)
      v11 = string.format("current: %.2fdeg / threshold: %.2fdeg  (timer: %d)", v13, v14, v7.rotationOffsetTimer)
      table.insert(values, {name = v11, value = v11})
    end
    for v6, v7 in pairs(dt.dynamicMountedShapes) do
      local v8 = entityExists(v6)
      if not v8 then
        continue
      end
      local v12 = getName(v6)
      v11 = tostring(...)
      table.insert(values, {name = "mounted: ", value = v11})
    end
    for v6, v7 in pairs(dt.pendingDynamicMountShapes) do
      v8 = entityExists(v6)
      if not v8 then
        continue
      end
      v12 = getName(v6)
      v11 = tostring(...)
      table.insert(values, {name = "pending: ", value = v11})
    end
  end
end
