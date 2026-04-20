-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Cone = {}
local Cone_mt = Class(Cone)
InitObjectClass(Cone, "Cone")
function Cone.onCreate(nodeId)
  log("Not implemented!")
end
function Cone.new(v0, v1, v2)
  local v3 = setmetatable({}, u0)
  v3.isServer = v1
  v3.isClient = v2
  v3.isDeleted = false
  registerObjectClassName(v3, "Cone")
  return v3
end
function Cone:delete()
  unregisterObjectClassName(self)
  self.isDeleted = true
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
end
function Cone:readStream(streamId, connection)
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
end
function Cone:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v5 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
    streamWriteString(...)
  end
end
function Cone:load(i3dFilename)
  self:create(i3dFilename)
  local v2 = calcDistanceFrom(self.nodeId, self.coneId)
  self.ballYOffset = v2
  self.lostBall = false
end
function Cone:create(i3dFilename)
  self.i3dFilename = i3dFilename
  local v2, v3 = Utils.getModNameAndBaseDirectory(i3dFilename)
  self.customEnvironment = v2
  self.baseDirectory = v3
  v2, v3 = v2:loadSharedI3DFile(i3dFilename, false, false)
  self.sharedLoadRequestId = v3
  local v4 = getChildAt(v2, 0)
  local v5 = getChildAt(v2, 1)
  local v7 = getRootNode()
  link(v7, v4)
  v7 = getRootNode()
  link(v7, v5)
  delete(v2)
  self.coneId = v4
  self.nodeId = v5
  self:deactivate()
end
function Cone:link(parentNode)
  link(parentNode, self.coneId)
  link(parentNode, self.nodeId)
end
function Cone:setPosition(x, y, z)
  setWorldTranslation(self.coneId, x, y, z)
  setWorldTranslation(self.nodeId, x, y + self.ballYOffset, z)
  self.lastPosition = {x, y, z}
end
function Cone:deactivate()
  if self.isServer then
    removeFromPhysics(self.coneId)
    removeFromPhysics(self.nodeId)
  end
  self.isActive = false
end
function Cone:activate()
  if self.isServer then
    addToPhysics(self.coneId)
    addToPhysics(self.nodeId)
  end
  self.isActive = true
end
function Cone:update(dt)
  if self.isServer and self.isActive then
    local v2 = self:hasLostBall()
    self.lostBall = v2
    if self.lostBall then
      local v2, v3, v4 = getWorldTranslation(self.nodeId)
      local v5 = self:getTerrainHeightWithProps(v2, v4)
      if v3 + 1 < v5 then
        setTranslation(self.nodeId, v2, v5 + 1.1, v3)
      end
    end
  end
end
function Cone:getTerrainHeightWithProps(x, z)
  local terrainY = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  self.groundY = -1
  raycastClosest(x, terrainY + 1, z, 0, -1, 0, "groundRaycastCallback", 5, self, 63)
  return math.max(terrainY, self.groundY)
end
function Cone:groundRaycastCallback(hitObjectId, x, y, z, distance)
  if hitObjectId ~= nil then
    local objectType = getRigidBodyType(hitObjectId)
    if objectType ~= RigidBodyType.DYNAMIC and objectType ~= RigidBodyType.KINEMATIC then
      self.groundY = y
      return false
    end
  end
  return true
end
function Cone:hasLostBall()
  if self.lostBall then
    return true
  end
  local v1, v2, v3 = getWorldTranslation(self.nodeId)
  local v4, v5, v6 = unpack(self.lastPosition)
  local v8 = math.abs(v2 - v5 + self.ballYOffset)
  if 0.5 >= v8 then
  end
  return true
end
function Cone:reset()
  self.lostBall = false
  self:deactivate()
  setRotation(self.nodeId, 0, 0, 0)
  setRotation(self.coneId, 0, 0, 0)
  local v3 = unpack(self.lastPosition)
  self:setPosition(...)
  self:activate()
end
