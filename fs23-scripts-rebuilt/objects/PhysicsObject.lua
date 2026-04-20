-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PhysicsObject = {}
local PhysicsObject_mt = Class(PhysicsObject, Object)
InitStaticObjectClass(PhysicsObject, "PhysicsObject", ObjectIds.OBJECT_PHYSICS_OBJECT)
function PhysicsObject.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.nodeId = 0
  local v4 = InterpolationTime.new(1.2)
  v3.networkTimeInterpolator = v4
  v3.forcedClipDistance = 60
  v4 = v3:getNextDirtyFlag()
  v3.physicsObjectDirtyFlag = v4
  v3.isDeleted = false
  return v3
end
function PhysicsObject:delete()
  if self.nodeId ~= 0 then
    self:removeChildrenFromNodeObject(self.nodeId)
    delete(self.nodeId)
  end
  self.nodeId = 0
  self.isDeleted = true
  local v2 = v2:superClass()
  v2.delete(self)
end
function PhysicsObject.getAllowsAutoDelete(v0)
  return true
end
function PhysicsObject:loadOnCreate(nodeId)
  self:setNodeId(nodeId)
  if not self.isServer then
    self:onGhostRemove()
  end
end
function PhysicsObject:setNodeId(nodeId)
  self.nodeId = nodeId
  local v4 = self:getDefaultRigidBodyType()
  setRigidBodyType(...)
  addToPhysics(self.nodeId)
  local v2, v3, v4 = getTranslation(self.nodeId)
  local v5, v6, v7 = getRotation(self.nodeId)
  self.sendPosX = v2
  self.sendPosY = v3
  self.sendPosZ = v4
  self.sendRotX = v5
  self.sendRotY = v6
  self.sendRotZ = v7
  if not self.isServer then
    local v8, v9, v10, v11 = mathEulerToQuaternion(v5, v6, v7)
    local v12 = InterpolatorPosition.new(v2, v3, v4)
    self.positionInterpolator = v12
    v12 = InterpolatorQuaternion.new(v8, v9, v10, v11)
    self.quaternionInterpolator = v12
  end
  self:addChildenToNodeObject(self.nodeId)
end
function PhysicsObject:readStream(streamId, connection, objectId)
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection, objectId)
  if self.nodeId == 0 then
  end
  assert(true)
  local v4 = connection:getIsServer()
  if v4 then
    local v6 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleXZPosCompressionParams)
    local v7 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleYPosCompressionParams)
    local v8 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleXZPosCompressionParams)
    local v9 = NetworkUtil.readCompressedAngle(streamId)
    local v10 = NetworkUtil.readCompressedAngle(streamId)
    local v11 = NetworkUtil.readCompressedAngle(streamId)
    local v12, v13, v14, v15 = mathEulerToQuaternion(v9, v10, v11)
    self:setWorldPositionQuaternion(v6, v7, v8, v12, v13, v14, v15, true)
    v16:reset()
  end
end
function PhysicsObject:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v3, v4, v5 = getWorldTranslation(self.nodeId)
    local v6, v7, v8 = getWorldRotation(self.nodeId)
    NetworkUtil.writeCompressedWorldPosition(streamId, v3, g_currentMission.vehicleXZPosCompressionParams)
    NetworkUtil.writeCompressedWorldPosition(streamId, v4, g_currentMission.vehicleYPosCompressionParams)
    NetworkUtil.writeCompressedWorldPosition(streamId, v5, g_currentMission.vehicleXZPosCompressionParams)
    NetworkUtil.writeCompressedAngle(streamId, v6)
    NetworkUtil.writeCompressedAngle(streamId, v7)
    NetworkUtil.writeCompressedAngle(streamId, v8)
  end
end
function PhysicsObject:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v6 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleXZPosCompressionParams)
      local v7 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleYPosCompressionParams)
      local v8 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleXZPosCompressionParams)
      local v9 = NetworkUtil.readCompressedAngle(streamId)
      local v10 = NetworkUtil.readCompressedAngle(streamId)
      local v11 = NetworkUtil.readCompressedAngle(streamId)
      local v12, v13, v14, v15 = mathEulerToQuaternion(v9, v10, v11)
      v16:setTargetPosition(v6, v7, v8)
      v16:setTargetQuaternion(v12, v13, v14, v15)
      v16:startNewPhaseNetwork()
    end
  end
end
function PhysicsObject:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.physicsObjectDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      NetworkUtil.writeCompressedWorldPosition(streamId, self.sendPosX, g_currentMission.vehicleXZPosCompressionParams)
      NetworkUtil.writeCompressedWorldPosition(streamId, self.sendPosY, g_currentMission.vehicleYPosCompressionParams)
      NetworkUtil.writeCompressedWorldPosition(streamId, self.sendPosZ, g_currentMission.vehicleXZPosCompressionParams)
      NetworkUtil.writeCompressedAngle(streamId, self.sendRotX)
      NetworkUtil.writeCompressedAngle(streamId, self.sendRotY)
      NetworkUtil.writeCompressedAngle(streamId, self.sendRotZ)
    end
  end
end
function PhysicsObject:update(dt)
  if not self.isServer then
    v2:update(dt)
    local v2 = v2:getAlpha()
    local v3, v4, v5 = v3:getInterpolatedValues(v2)
    local v6, v7, v8, v9 = v6:getInterpolatedValues(v2)
    self:setWorldPositionQuaternion(v3, v4, v5, v6, v7, v8, v9, false)
    local v10 = v10:isInterpolating()
    -- if not v10 then goto L56 end
    self:raiseActive()
    return
  end
  v2 = getIsSleeping(self.nodeId)
  if not v2 then
    self:raiseActive()
  end
end
function PhysicsObject:updateMove()
  local v1, v2, v3 = getWorldTranslation(self.nodeId)
  local v4, v5, v6 = getWorldRotation(self.nodeId)
  local v8 = math.abs(self.sendPosX - v1)
  if 0.005 >= v8 then
    v8 = math.abs(self.sendPosY - v2)
    if 0.005 >= v8 then
      v8 = math.abs(self.sendPosZ - v3)
      if 0.005 >= v8 then
        v8 = math.abs(self.sendRotX - v4)
        if 0.02 >= v8 then
          v8 = math.abs(self.sendRotY - v5)
          if 0.02 >= v8 then
            v8 = math.abs(self.sendRotZ - v6)
            if 0.02 >= v8 then
            end
          end
        end
      end
    end
  end
  if v7 then
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
    self.sendPosX = v1
    self.sendPosY = v2
    self.sendPosZ = v3
    self.sendRotX = v4
    self.sendRotY = v5
    self.sendRotZ = v6
  end
  return v7
end
function PhysicsObject:updateTick(dt)
  if self.isServer then
    self:updateMove()
  end
end
function PhysicsObject:testScope(x, y, z, coeff)
  local v5, v6, v7 = getWorldTranslation(self.nodeId)
  local v11 = getClipDistance(self.nodeId)
  local v9 = math.min(v11 * coeff, self.forcedClipDistance)
  if (v5 - x) * (v5 - x) + (v6 - y) * (v6 - y) + (v7 - z) * (v7 - z) < v9 * v9 then
    return true
  end
  return false
end
function PhysicsObject:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  local v8, v9, v10 = getWorldTranslation(self.nodeId)
  local v11 = math.sqrt((v8 - x) * (v8 - x) + (v9 - y) * (v9 - y) + (v10 - z) * (v10 - z))
  local v14 = getClipDistance(self.nodeId)
  local v12 = math.min(v14 * coeff, self.forcedClipDistance)
  return (1 - v11 / v12) * 0.8 + 0.5 * skipCount * 0.2
end
function PhysicsObject:onGhostRemove()
  setVisibility(self.nodeId, false)
  removeFromPhysics(self.nodeId)
end
function PhysicsObject:onGhostAdd()
  setVisibility(self.nodeId, true)
  addToPhysics(self.nodeId)
end
function PhysicsObject:wakeUp()
  I3DUtil.wakeUpObject(self.nodeId)
end
function PhysicsObject:addToPhysics()
  addToPhysics(self.nodeId)
end
function PhysicsObject:removeFromPhysics()
  removeFromPhysics(self.nodeId)
end
function PhysicsObject:setWorldPositionQuaternion(x, y, z, quatX, quatY, quatZ, quatW, changeInterp)
  setWorldTranslation(self.nodeId, x, y, z)
  setWorldQuaternion(self.nodeId, quatX, quatY, quatZ, quatW)
  if changeInterp then
    if not self.isServer then
      v9:setPosition(x, y, z)
      v9:setQuaternion(quatX, quatY, quatZ, quatW)
      return
    end
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
    self.sendPosX = x
    self.sendPosY = y
    self.sendPosZ = z
    local v9, v10, v11 = getWorldRotation(self.nodeId)
    self.sendRotX = v9
    self.sendRotY = v10
    self.sendRotZ = v11
  end
end
function PhysicsObject:setLocalPositionQuaternion(x, y, z, quatX, quatY, quatZ, quatW, changeInterp)
  setTranslation(self.nodeId, x, y, z)
  setQuaternion(self.nodeId, quatX, quatY, quatZ, quatW)
  if changeInterp then
    if not self.isServer then
      local v11 = getWorldTranslation(self.nodeId)
      v9:setPosition(...)
      v11 = getWorldQuaternion(self.nodeId)
      v9:setQuaternion(...)
      return
    end
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
    local v9, v10, v11 = getWorldTranslation(self.nodeId)
    self.sendPosX = v9
    self.sendPosY = v10
    self.sendPosZ = v11
    v9, v10, v11 = getWorldRotation(self.nodeId)
    self.sendRotX = v9
    self.sendRotY = v10
    self.sendRotZ = v11
  end
end
function PhysicsObject:getDefaultRigidBodyType()
  if self.isServer then
    return RigidBodyType.DYNAMIC
  end
  return RigidBodyType.KINEMATIC
end
function PhysicsObject:removeChildrenFromNodeObject(nodeId)
  local v5 = getNumOfChildren(nodeId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  local v7 = getChildAt(nodeId, 0)
  self:removeChildrenFromNodeObject(...)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  local rigidBodyType = getRigidBodyType(nodeId)
  if rigidBodyType ~= RigidBodyType.NONE then
    v3:removeNodeObject(nodeId, self)
    if self.isServer then
      removeWakeUpReport(nodeId)
    end
  end
end
function PhysicsObject:addChildenToNodeObject(nodeId)
  local v5 = getNumOfChildren(nodeId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  local v7 = getChildAt(nodeId, 0)
  self:addChildenToNodeObject(...)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  local rigidBodyType = getRigidBodyType(nodeId)
  if rigidBodyType ~= RigidBodyType.NONE then
    v3:addNodeObject(nodeId, self)
    if self.isServer then
      addWakeUpReport(nodeId, "onPhysicObjectWakeUpCallback", self)
    end
  end
end
function PhysicsObject:onPhysicObjectWakeUpCallback(id)
  self:raiseActive()
end
