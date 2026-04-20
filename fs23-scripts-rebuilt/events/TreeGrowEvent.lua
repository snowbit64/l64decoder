-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreeGrowEvent = {}
local TreeGrowEvent_mt = Class(TreeGrowEvent, Event)
InitStaticEventClass(TreeGrowEvent, "TreeGrowEvent", EventIds.EVENT_TREE_GROW)
function TreeGrowEvent.emptyNew()
  return Event.new(u0)
end
function TreeGrowEvent.new(treeType, x, y, z, rx, ry, rz, growthState, splitShapeFileId, oldSplitShapeFileId)
  local v10 = TreeGrowEvent.emptyNew()
  v10.treeType = treeType
  v10.x = x
  v10.y = y
  v10.z = z
  v10.rx = rx
  v10.ry = ry
  v10.rz = rz
  v10.growthState = growthState
  v10.splitShapeFileId = splitShapeFileId
  v10.oldSplitShapeFileId = oldSplitShapeFileId
  return v10
end
function TreeGrowEvent.readStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if v3 then
    v3 = streamReadInt32(v1)
    local v4 = streamReadFloat32(v1)
    local v5 = streamReadFloat32(v1)
    local v6 = streamReadFloat32(v1)
    local v7 = streamReadFloat32(v1)
    local v8 = streamReadFloat32(v1)
    local v9 = streamReadFloat32(v1)
    local v10 = streamReadInt8(v1)
    local v11 = streamReadInt32(v1)
    local v12 = streamReadInt32(v1)
    local v13 = v13:getClientTree(v12)
    if v13 ~= nil then
      delete(v13)
      v14:removeClientTree(v11)
    end
    local v14 = v14:getTreeTypeDescFromIndex(v3)
    if v14 ~= nil then
      local v15, v16 = v15:loadTreeNode(v14, v4, v5, v6, v7, v8, v9, v10, -1)
      setSplitShapesFileIdMapping(v16, v11)
      v17:addClientTree(v11, v15)
    end
  end
end
function TreeGrowEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteInt32(streamId, self.treeType)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
    streamWriteFloat32(streamId, self.rx)
    streamWriteFloat32(streamId, self.ry)
    streamWriteFloat32(streamId, self.rz)
    v3 = v3:getTreeTypeDescFromIndex(self.treeType)
    local v9 = table.getn(v3.treeFilenames)
    local v5 = math.floor(self.growthState * (v9 - 1))
    streamWriteInt8(streamId, v5 + 1)
    streamWriteInt32(streamId, self.splitShapeFileId)
    streamWriteInt32(streamId, self.oldSplitShapeFileId)
  end
end
function TreeGrowEvent.run(v0, v1)
  print("Error: TreeGrowEvent is not allowed to be executed on a local client")
end
