-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MountableObject = {MOUNT_TYPE_NONE = 1, MOUNT_TYPE_DEFAULT = 2, MOUNT_TYPE_KINEMATIC = 3, MOUNT_TYPE_DYNAMIC = 4, FORCE_LIMIT_UPDATE_TIME = 1000, FORCE_LIMIT_RAYCAST_DISTANCE = 20}
local MountableObject_mt = Class(MountableObject, PhysicsObject)
InitStaticObjectClass(MountableObject, "MountableObject", ObjectIds.OBJECT_MOUNTABLE_OBJECT)
function MountableObject.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.dynamicMountSingleAxisFreeX = false
  v3.dynamicMountSingleAxisFreeY = false
  v3.dynamicMountType = MountableObject.MOUNT_TYPE_NONE
  v3.forceLimitUpdate = {raycastActive = false, timer = 0, lastDistance = 0, nextMountingDistance = 0, additionalMass = 0}
  v3.lastMoveTime = -100000
  v3.mountStateChangeListeners = {}
  return v3
end
function MountableObject:delete()
  if self.dynamicMountTriggerId ~= nil then
    removeTrigger(self.dynamicMountTriggerId)
  end
  if self.dynamicMountJointIndex ~= nil then
    removeJointBreakReport(self.dynamicMountJointIndex)
    removeJoint(self.dynamicMountJointIndex)
  end
  if self.dynamicMountObject ~= nil then
    v1:removeDynamicMountedObject(self, true)
  end
  if self.mountObject ~= nil then
    if self.mountObject.removeMountedObject ~= nil then
      v1:removeMountedObject(self, true)
    end
    if self.mountObject.onUnmountObject ~= nil then
      v1:onUnmountObject(self)
    end
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function MountableObject:getAllowsAutoDelete()
  if self.mountObject == nil then
    local v2 = v2:superClass()
    local v1 = v2.getAllowsAutoDelete(self)
  end
  return v1
end
function MountableObject:testScope(x, y, z, coeff)
  if self.mountObject ~= nil then
    return v5:testScope(x, y, z, coeff)
  end
  if self.dynamicMountObject ~= nil then
    v5 = v5:testScope(x, y, z, coeff)
    return v5
  end
  local v6 = v6:superClass()
  v5 = v6.testScope(self, x, y, z, coeff)
  return v5
end
function MountableObject:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  if self.mountObject ~= nil then
    return v8:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  end
  if self.dynamicMountObject ~= nil then
    v8 = v8:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
    return v8
  end
  local v9 = v9:superClass()
  v8 = v9.getUpdatePriority(self, skipCount, x, y, z, coeff, connection, isGuiVisible)
  return v8
end
function MountableObject:updateTick(dt)
  if self.isServer then
    local v2 = self:updateMove()
    if v2 then
      self.lastMoveTime = g_currentMission.time
    end
    if self.dynamicMountObjectTriggerCount ~= nil and self.dynamicMountObjectTriggerCount <= 0 then
      if self.dynamicMountJointNodeDynamicRefNode ~= nil then
        local v2, v3, v4 = localToLocal(self.dynamicMountJointNodeDynamic, self.dynamicMountJointNodeDynamicRefNode, 0, 0, 0)
        if self.dynamicMountJointNodeDynamicMountOffset < v4 then
          self.dynamicMountJointNodeDynamicMountOffset = nil
          self.dynamicMountJointNodeDynamicRefNode = nil
          self:unmountDynamic()
          self.dynamicMountObjectTriggerCount = nil
          -- goto L61  (LOP_JUMP +10)
        end
        self:raiseActive()
      else
        self:unmountDynamic()
        self.dynamicMountObjectTriggerCount = nil
      end
    end
    if self.dynamicMountJointIndex ~= nil then
      self:updateDynamicMountJointForceLimit(dt)
    end
  end
end
function MountableObject:mount(object, node, x, y, z, rx, ry, rz)
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_DYNAMIC then
    self:unmountDynamic()
  elseif self.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then
    self:unmountKinematic()
  end
  self:unmountDynamic(true)
  if self.mountObject == nil then
    removeFromPhysics(self.nodeId)
  end
  link(node, self.nodeId)
  local v9, v10, v11, v12 = mathEulerToQuaternion(rx, ry, rz)
  self:setLocalPositionQuaternion(x, y, z, v9, v10, v11, v12, true)
  self.mountObject = object
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_DEFAULT, object)
end
function MountableObject:unmount()
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.mountObject ~= nil then
    self.mountObject = nil
    local object, node, x = getWorldTranslation(self.nodeId)
    local y, z, rx, ry = getWorldQuaternion(self.nodeId)
    local v9 = getRootNode()
    link(v9, self.nodeId)
    self:setWorldPositionQuaternion(object, node, x, y, z, rx, ry, true)
    addToPhysics(self.nodeId)
    return true
  end
  return false
end
function MountableObject:mountKinematic(object, node, x, y, z, rx, ry, rz)
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_DEFAULT then
    self:unmount()
  elseif self.dynamicMountType == MountableObject.MOUNT_TYPE_DYNAMIC then
    self:unmountDynamic()
  end
  self:unmountDynamic(true)
  removeFromPhysics(self.nodeId)
  link(node, self.nodeId)
  local v9, v10, v11, v12 = mathEulerToQuaternion(rx, ry, rz)
  self:setLocalPositionQuaternion(x, y, z, v9, v10, v11, v12, true)
  addToPhysics(self.nodeId)
  if self.isServer then
    setRigidBodyType(self.nodeId, RigidBodyType.KINEMATIC)
  end
  if object.components ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 79, target 104)
    local v16 = getRigidBodyType(object.components[1].node)
    if v16 == RigidBodyType.DYNAMIC then
      setPairCollision(object.components[1].node, self.nodeId, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 103, target 80)
  end
  self.mountObject = object
  self.mountJointNode = node
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_KINEMATIC, object)
end
function MountableObject:unmountKinematic()
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.mountObject ~= nil then
    if self.mountObject.onUnmountObject ~= nil then
      node:onUnmountObject(self)
    end
    self.mountObject = nil
    self.mountJointNode = nil
    local node, x, y = getWorldTranslation(self.nodeId)
    local z, rx, ry, rz = getWorldQuaternion(self.nodeId)
    removeFromPhysics(self.nodeId)
    local v10 = getRootNode()
    link(v10, self.nodeId)
    self:setWorldPositionQuaternion(node, x, y, z, rx, ry, rz, true)
    addToPhysics(self.nodeId)
    if self.isServer then
      local v11 = self:getDefaultRigidBodyType()
      setRigidBodyType(...)
    end
    if object ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 88, target 109)
      local v12 = getRigidBodyType(object[1].node)
      if v12 == RigidBodyType.DYNAMIC then
        setPairCollision(object[1].node, self.nodeId, true)
      end
      -- TODO: structure LOP_FORNLOOP (pc 108, target 89)
    end
    return true
  end
  return false
end
function MountableObject:mountDynamic(object, objectActorId, jointNode, mountType, forceAcceleration)
  assert(self.isServer)
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_DEFAULT then
    self:unmount()
  elseif self.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then
    self:unmountKinematic()
  end
  local rx = self:getSupportsMountDynamic()
  if rx then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L39
  end
  return false
  rx = object:getOwnerFarmId()
  if rx ~= nil then
    local rz = object:getOwnerFarmId()
    rx = rx:canFarmAccess(rz, self)
    if not rx then
      return false
    end
  end
  if self.dynamicMountTriggerId ~= nil then
    if mountType == DynamicMountUtil.TYPE_FORK then
      local v13 = getCenterOfMass(self.nodeId)
      local v11 = localToWorld(...)
      local v9, v10, v11 = worldToLocal(...)
      local v14 = getParent(self.dynamicMountJointNodeDynamic)
      local v12, v13, v14 = localToLocal(jointNode, v14, 0, 0, v11)
    else
      v11 = getParent(self.dynamicMountJointNodeDynamic)
      v9, v10, v11 = localToLocal(jointNode, v11, 0, 0, 0)
    end
    setTranslation(self.dynamicMountJointNodeDynamic, rx, ry, rz)
    v13 = getParent(self.dynamicMountJointNodeDynamic)
    v11 = localRotationToLocal(jointNode, v13, 0, 0, 0)
    setRotation(...)
    v10, v11, v12 = localToLocal(self.dynamicMountJointNodeDynamic, jointNode, 0, 0, 0)
    self.dynamicMountJointNodeDynamicMountOffset = v12
    self.dynamicMountJointNodeDynamicRefNode = jointNode
  end
  self.mountBaseForceAcceleration = forceAcceleration
  rx = self:getMass()
  self.mountBaseMass = rx
  rx = DynamicMountUtil.mountDynamic(self, self.nodeId, object, objectActorId, jointNode, mountType, forceAcceleration * self.dynamicMountForceLimitScale, self.dynamicMountJointNodeDynamic)
  if rx then
    self:setDynamicMountType(MountableObject.MOUNT_TYPE_DYNAMIC, object)
    return true
  end
  return false
end
function MountableObject:unmountDynamic(isDelete)
  DynamicMountUtil.unmountDynamic(self, isDelete)
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.isServer then
    self.lastMoveTime = g_currentMission.time
  end
end
function MountableObject.getSupportsMountDynamic(v0)
  return true
end
function MountableObject.getAdditionalMountingDistance(v0)
  return 0
end
function MountableObject:addToPhysics()
  local objectActorId = objectActorId:superClass()
  objectActorId.addToPhysics(self)
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC and self.mountObject ~= nil and self.mountObject.components ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 30, target 55)
    local forceAcceleration = getRigidBodyType(self.mountObject.components[1].node)
    if forceAcceleration == RigidBodyType.DYNAMIC then
      setPairCollision(self.mountObject.components[1].node, self.nodeId, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 54, target 31)
  end
end
function MountableObject.removeFromPhysics(v0)
  local objectActorId = objectActorId:superClass()
  objectActorId.removeFromPhysics(v0)
end
function MountableObject:updateDynamicMountJointForceLimit(dt)
  if not self.forceLimitUpdate.raycastActive then
    self.forceLimitUpdate.timer = self.forceLimitUpdate.timer - dt
    if self.forceLimitUpdate.timer <= 0 then
      self.forceLimitUpdate.raycastActive = true
      self.forceLimitUpdate.timer = MountableObject.FORCE_LIMIT_UPDATE_TIME
      self.forceLimitUpdate.lastDistance = 0
      self.forceLimitUpdate.lastObject = nil
      local jointNode = self:getAdditionalMountingDistance()
      self.forceLimitUpdate.nextMountingDistance = jointNode
      self.forceLimitUpdate.additionalMass = 0
      local objectActorId, jointNode, mountType = getWorldTranslation(self.nodeId)
      raycastAll(objectActorId, jointNode, mountType, 0, 1, 0, "additionalMountingMassRaycastCallback", MountableObject.FORCE_LIMIT_RAYCAST_DISTANCE, self, CollisionFlag.DYNAMIC_OBJECT, false, true)
    end
  end
end
function MountableObject.getAdditionalMountingMass(v0)
  return 0
end
function MountableObject:additionalMountingMassRaycastCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  self.forceLimitUpdate.raycastActive = false
  if g_currentMission.nodeToObject[hitObjectId] ~= self and g_currentMission.nodeToObject[hitObjectId] ~= nil then
    local v13 = g_currentMission.nodeToObject[hitObjectId]:isa(MountableObject)
    if v13 and self.getAdditionalMountingDistance ~= nil and g_currentMission.nodeToObject[hitObjectId] ~= self.forceLimitUpdate.lastObject then
      local v14 = math.abs(distance - self.forceLimitUpdate.lastDistance - self.forceLimitUpdate.nextMountingDistance)
      if v14 < 0.25 then
        self.forceLimitUpdate.lastDistance = distance
        local v15 = self:getAdditionalMountingDistance()
        self.forceLimitUpdate.nextMountingDistance = v15
        local v17 = g_currentMission.nodeToObject[hitObjectId]:getMass()
        self.forceLimitUpdate.additionalMass = self.forceLimitUpdate.additionalMass + v17
        self.forceLimitUpdate.lastObject = g_currentMission.nodeToObject[hitObjectId]
      end
    end
  end
  if isLast and self.dynamicMountJointIndex ~= nil then
    setJointLinearDrive(self.dynamicMountJointIndex, 2, false, true, 0, 0, self.mountBaseMass * self.mountBaseForceAcceleration * (self.forceLimitUpdate.additionalMass + self.mountBaseMass) / self.mountBaseMass, 0, 0)
  end
end
function MountableObject:setNodeId(nodeId)
  local jointNode = jointNode:superClass()
  jointNode.setNodeId(self, nodeId)
  if self.isServer then
    local mountType = getUserAttribute(nodeId, "dynamicMountTriggerIndex")
    local objectActorId = I3DUtil.indexToObject(...)
    if objectActorId ~= nil then
      mountType = getUserAttribute(nodeId, "dynamicMountTriggerForceAcceleration")
      jointNode = tonumber(...)
      local forceAcceleration = getUserAttribute(nodeId, "dynamicMountForceLimitScale")
      mountType = tonumber(...)
      local rx = getUserAttribute(nodeId, "dynamicMountSingleAxisFreeY")
      if rx ~= true then
      end
      local ry = getUserAttribute(nodeId, "dynamicMountSingleAxisFreeX")
      if ry ~= true then
      end
      self:setMountableObjectAttributes(objectActorId, jointNode, mountType, forceAcceleration, true)
    end
    if self.dynamicMountJointNodeDynamic == nil then
      jointNode = createTransformGroup("dynamicMountJointNodeDynamic")
      self.dynamicMountJointNodeDynamic = jointNode
      link(self.nodeId, self.dynamicMountJointNodeDynamic)
    end
  end
end
function MountableObject:setWorldPositionQuaternion(x, y, z, quatX, quatY, quatZ, quatW, changeInterp)
  if not self.isServer then
    -- if v0.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then goto L54 end
    -- if v0.dynamicMountType == MountableObject.MOUNT_TYPE_DEFAULT then goto L54 end
    local v10 = v10:superClass()
    v10.setWorldPositionQuaternion(self, x, y, z, quatX, quatY, quatZ, quatW, changeInterp)
    return
  end
  v10 = v10:superClass()
  v10.setWorldPositionQuaternion(self, x, y, z, quatX, quatY, quatZ, quatW, changeInterp)
end
function MountableObject:setMountableObjectAttributes(triggerId, forceAcceleration, forceLimitScale, axisFreeY, axisFreeX)
  if self.isServer then
    if self.dynamicMountTriggerId == nil then
      self.dynamicMountTriggerId = triggerId
      if self.dynamicMountTriggerId ~= nil then
        addTrigger(self.dynamicMountTriggerId, "dynamicMountTriggerCallback", self)
      end
    end
    self.dynamicMountTriggerForceAcceleration = forceAcceleration or 4
    self.dynamicMountForceLimitScale = forceLimitScale or 1
    self.dynamicMountSingleAxisFreeY = axisFreeY
    self.dynamicMountSingleAxisFreeX = axisFreeX
  end
end
function MountableObject:dynamicMountTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if g_currentMission.nodeToObject[otherActorId] ~= nil then
    local rz = g_currentMission.nodeToObject[otherActorId]:isa(Vehicle)
    if rz then
    end
  end
  if onEnter then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L133
    if ry ~= nil and ry.spec_dynamicMountAttacher ~= nil then
      local v11, v12 = ry:getDynamicMountAttacherSettingsByNode(otherShapeId)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L133
    if self.dynamicMountObjectActorId == nil then
      self:mountDynamic(ry, otherActorId, rz.dynamicMountAttacherNode, v9, self.dynamicMountTriggerForceAcceleration * v10)
      self.dynamicMountObjectTriggerCount = 1
      return
    end
    if otherActorId ~= self.dynamicMountObjectActorId and self.dynamicMountObjectTriggerCount == nil then
      self:unmountDynamic()
      self:mountDynamic(ry, otherActorId, rz.dynamicMountAttacherNode, v9, self.dynamicMountTriggerForceAcceleration * v10)
      self.dynamicMountObjectTriggerCount = 1
      return
    end
    -- if v2 ~= v0.dynamicMountObjectActorId then goto L133 end
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L133
    self.dynamicMountObjectTriggerCount = self.dynamicMountObjectTriggerCount + 1
    return
  end
  if onLeave and otherActorId == self.dynamicMountObjectActorId and self.dynamicMountObjectTriggerCount ~= nil then
    self.dynamicMountObjectTriggerCount = self.dynamicMountObjectTriggerCount - 1
    if self.dynamicMountObjectTriggerCount <= 0 then
      if self.dynamicMountTriggerId == nil then
        self:unmountDynamic()
        self.dynamicMountObjectTriggerCount = nil
        return
      end
      self:raiseActive()
    end
  end
end
function MountableObject:onDynamicMountJointBreak(jointIndex, breakingImpulse)
  if jointIndex == self.dynamicMountJointIndex then
    self:unmountDynamic()
  end
  return false
end
function MountableObject.getMeshNodes(v0)
  return nil
end
function MountableObject:setDynamicMountType(mountState, mountObject)
  if mountState ~= self.dynamicMountType then
    self.dynamicMountType = mountState
    for rx, ry in ipairs(self.mountStateChangeListeners) do
      local rz = type(ry.callbackFunc)
      if rz == "string" then
        ry.object[ry.callbackFunc](ry.object, self, mountState, mountObject)
      else
        rz = type(ry.callbackFunc)
        if not (rz == "function") then
          continue
        end
        ry.callbackFunc(ry.object, self, mountState, mountObject)
      end
    end
  end
end
function MountableObject:addMountStateChangeListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for rx, ry in ipairs(self.mountStateChangeListeners) do
    if not (ry.object == object) then
      continue
    end
    if not (ry.callbackFunc == callbackFunc) then
      continue
    end
    return
  end
  table.insert(self.mountStateChangeListeners, {object = object, callbackFunc = callbackFunc})
end
function MountableObject:removeMountStateChangeListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for ry, rz in ipairs(self.mountStateChangeListeners) do
    if not (rz.object == object) then
      continue
    end
    if not (rz.callbackFunc == callbackFunc) then
      continue
    end
  end
  if 0 < jointNode then
    table.remove(self.mountStateChangeListeners, jointNode)
  end
end
