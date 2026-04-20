-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DogBall = {RESET_DISTANCE = 100}
local DogBall_mt = Class(DogBall, PhysicsObject)
InitStaticObjectClass(DogBall, "DogBall", ObjectIds.OBJECT_DOGBALL)
function DogBall.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.forcedClipDistance = 150
  registerObjectClassName(v3, "DogBall")
  v3.sharedLoadRequestId = nil
  return v3
end
function DogBall:delete()
  self.isDeleted = true
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
  end
  unregisterObjectClassName(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function DogBall:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    if self.i3dFilename ~= nil then
    end
    if true then
      self:load(v3, 0, 0, 0, 0, 0, 0)
    end
  end
  v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
end
function DogBall:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v5 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
    streamWriteString(...)
  end
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
end
function DogBall:createNode(i3dFilename)
  self.i3dFilename = i3dFilename
  local v2, v3 = Utils.getModNameAndBaseDirectory(i3dFilename)
  self.customEnvironment = v2
  self.baseDirectory = v3
  v2, v3 = v2:loadSharedI3DFile(i3dFilename, false, false)
  self.sharedLoadRequestId = v3
  local v4 = getChildAt(v2, 0)
  local v6 = getRootNode()
  link(v6, v4)
  delete(v2)
  self:setNodeId(v4)
end
function DogBall:getTerrainHeightWithProps(x, z)
  local terrainY = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  self.groundY = -1
  raycastClosest(x, terrainY + 1, z, 0, -1, 0, "groundRaycastCallback", 5, self, 63)
  return math.max(terrainY, self.groundY)
end
function DogBall:groundRaycastCallback(hitObjectId, x, y, z, distance)
  if hitObjectId ~= nil then
    local objectType = getRigidBodyType(hitObjectId)
    if objectType ~= RigidBodyType.DYNAMIC and objectType ~= RigidBodyType.KINEMATIC then
      self.groundY = y
      return false
    end
  end
  return true
end
function DogBall:updateTick(dt)
  if self.isServer then
    local v2, v3, v4 = getWorldTranslation(self.nodeId)
    local v5 = self:getTerrainHeightWithProps(v2, v4)
    if v3 + 1 < v5 then
      self:reset()
    end
    v5 = getParent(self.nodeId)
    if v5 ~= 0 then
      local v6 = getRootNode()
      if v5 ~= v6 then
        -- if v5 ~= g_currentMission.terrainRootNode then goto L65 end
      end
      v6 = MathUtil.vector3LengthSq(v2 - self.spawnPos[1], v3 - self.spawnPos[2], v4 - self.spawnPos[3])
      -- if DogBall.RESET_DISTANCE * DogBall.RESET_DISTANCE >= v6 then goto L94 end
      self:reset()
    else
      v6 = MathUtil.vector3LengthSq(v2 - self.throwPos[1], v3 - self.throwPos[2], v4 - self.throwPos[3])
      if DogBall.RESET_DISTANCE * DogBall.RESET_DISTANCE < v6 then
        self:reset()
      end
    end
  end
  v3 = v3:superClass()
  v3.updateTick(self, dt)
end
function DogBall:load(i3dFilename, x, y, z, rx, ry, rz)
  self:createNode(i3dFilename)
  setTranslation(self.nodeId, x, y, z)
  setRotation(self.nodeId, rx, ry, rz)
  if self.isServer then
    self.spawnPos = {x, y, z}
    self.throwPos = {x, y, z}
    self.startRot = {rx, ry, rz}
  end
  return true
end
function DogBall:reset()
  if self.isServer then
    removeFromPhysics(self.nodeId)
    local v3 = unpack(self.spawnPos)
    setTranslation(...)
    v3 = unpack(self.startRot)
    setRotation(...)
    addToPhysics(self.nodeId)
  end
end
