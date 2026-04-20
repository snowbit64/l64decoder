-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionPhysicsObject = {}
local MissionPhysicsObject_mt = Class(MissionPhysicsObject, MountableObject)
InitStaticObjectClass(MissionPhysicsObject, "MissionPhysicsObject", ObjectIds.OBJECT_MISSION_PHYSICS_OBJECT)
function MissionPhysicsObject.new(isServer, isClient, customMt)
  if customMt == nil then
  end
  local v4 = MountableObject.new(isServer, isClient, v3)
  v4.forcedClipDistance = 80
  v4.meshNodes = {}
  v4.sharedLoadRequestId = nil
  return v4
end
function MissionPhysicsObject:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function MissionPhysicsObject:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  if self.nodeId == 0 then
    self:createNode(v3)
  end
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection)
end
function MissionPhysicsObject:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
  streamWriteString(...)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
end
function MissionPhysicsObject:createNode(i3dFilename)
  self.i3dFilename = i3dFilename
  local v2, v3 = v2:loadSharedI3DFile(i3dFilename, false, false)
  self.sharedLoadRequestId = v3
  local v4 = getChildAt(v2, 0)
  local v6 = getRootNode()
  link(v6, v4)
  delete(v2)
  self:setNodeId(v4)
end
function MissionPhysicsObject:setNodeId(nodeId)
  local v3 = v3:superClass()
  v3.setNodeId(self, nodeId)
  local v4 = getUserAttribute(nodeId, "meshNode")
  local v2 = I3DUtil.indexToObject(...)
  if v2 ~= nil then
    self.meshNodes = {v2}
  end
end
function MissionPhysicsObject:load(i3dFilename, x, y, z, rx, ry, rz)
  self.i3dFilename = i3dFilename
  self:createNode(i3dFilename)
  setTranslation(self.nodeId, x, y, z)
  setRotation(self.nodeId, rx, ry, rz)
  return true
end
function MissionPhysicsObject:loadFromMemory(nodeId, i3dFilename)
  self.i3dFilename = i3dFilename
  self:setNodeId(nodeId)
end
function MissionPhysicsObject.getSupportsTensionBelts(v0)
  return true
end
function MissionPhysicsObject:getTensionBeltNodeId()
  return self.nodeId
end
function MissionPhysicsObject:getMeshNodes()
  return self.meshNodes
end
