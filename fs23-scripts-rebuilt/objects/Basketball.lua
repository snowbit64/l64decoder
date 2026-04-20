-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Basketball = {}
local Basketball_mt = Class(Basketball, PhysicsObject)
InitStaticObjectClass(Basketball, "Basketball", ObjectIds.OBJECT_BASKETBALL)
function Basketball.onCreate(v0, v1)
  if g_server == nil then
  end
  if g_client == nil then
  end
  local v2 = v2(v3, true)
  local v3, v4, v5 = getWorldTranslation(v1)
  local v6, v7, v8 = getWorldRotation(v1)
  local v10 = getUserAttribute(v1, "filename")
  local v9 = Utils.getNoNil(v10, "$data/objects/basketball/basketball.i3d")
  v10 = Utils.getFilename(v9, g_currentMission.loadingMapBaseDirectory)
  v10 = v2:load(v10, v3, v4, v5, v6, v7, v8)
  if v10 then
    v10:add(v2)
    v2:register(true)
    return
  end
  v2:delete()
end
function Basketball.new(isServer, isClient, customMt)
  if customMt == nil then
  end
  local v4 = PhysicsObject.new(isServer, isClient, v3)
  v4.forcedClipDistance = 150
  v4.sharedLoadRequestId = nil
  registerObjectClassName(v4, "Basketball")
  return v4
end
function Basketball:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  unregisterObjectClassName(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function Basketball:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    if self.nodeId == 0 then
      self:createNode(v3)
    end
    local v5 = v5:superClass()
    v5.readStream(self, streamId, connection)
  end
end
function Basketball:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v5 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
    streamWriteString(...)
    local v4 = v4:superClass()
    v4.writeStream(self, streamId, connection)
  end
end
function Basketball:createNode(i3dFilename)
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
function Basketball:load(i3dFilename, x, y, z, rx, ry, rz)
  self.i3dFilename = i3dFilename
  local v8, v9 = Utils.getModNameAndBaseDirectory(i3dFilename)
  self.customEnvironment = v8
  self.baseDirectory = v9
  self:createNode(i3dFilename)
  setTranslation(self.nodeId, x, y, z)
  setRotation(self.nodeId, rx, ry, rz)
  return true
end
