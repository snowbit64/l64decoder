-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreePlantEvent = {}
local TreePlantEvent_mt = Class(TreePlantEvent, Event)
InitStaticEventClass(TreePlantEvent, "TreePlantEvent", EventIds.EVENT_TREE_PLANT)
function TreePlantEvent.emptyNew()
  return Event.new(u0)
end
function TreePlantEvent.new(treeType, x, y, z, rx, ry, rz, growthState, splitShapeFileId, isGrowing, price, farmId)
  local v12 = TreePlantEvent.emptyNew()
  v12.treeType = treeType
  v12.x = x
  v12.y = y
  v12.z = z
  v12.rx = rx
  v12.ry = ry
  v12.rz = rz
  v12.growthState = growthState
  v12.splitShapeFileId = splitShapeFileId
  v12.isGrowing = isGrowing
  v12.price = price or 0
  v12.farmId = farmId or 0
  return v12
end
function TreePlantEvent.readStream(v0, v1, v2)
  local v3 = streamReadInt32(v1)
  local v4 = streamReadFloat32(v1)
  local v5 = streamReadFloat32(v1)
  local v6 = streamReadFloat32(v1)
  local v7 = streamReadFloat32(v1)
  local v8 = streamReadFloat32(v1)
  local v9 = streamReadFloat32(v1)
  local v10 = v2:getIsServer()
  if not v10 then
    v10 = streamReadFloat32(v1)
    local v11 = streamReadBool(v1)
    local v12 = streamReadInt32(v1)
    local v13 = streamReadUInt8(v1)
    v14:plantTree(v3, v4, v5, v6, v7, v8, v9, v10, nil, v11)
    -- if 0 >= v12 then goto L119 end
    v14:addMoney(-v12, v13, MoneyType.SHOP_PROPERTY_BUY, true)
    return
  end
  v10 = streamReadInt8(v1)
  v11 = streamReadInt32(v1)
  v12 = v12:getTreeTypeDescFromIndex(v3)
  if v12 ~= nil then
    local v13, v14 = v13:loadTreeNode(v12, v4, v5, v6, v7, v8, v9, v10, -1)
    setSplitShapesFileIdMapping(v14, v11)
    v15:addClientTree(v11, v13)
  end
end
function TreePlantEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.treeType)
  streamWriteFloat32(streamId, self.x)
  streamWriteFloat32(streamId, self.y)
  streamWriteFloat32(streamId, self.z)
  streamWriteFloat32(streamId, self.rx)
  streamWriteFloat32(streamId, self.ry)
  streamWriteFloat32(streamId, self.rz)
  local v3 = connection:getIsServer()
  if v3 then
    streamWriteFloat32(streamId, self.growthState)
    streamWriteBool(streamId, self.isGrowing)
    streamWriteInt32(streamId, self.price)
    streamWriteUInt8(streamId, self.farmId)
    return
  end
  v3 = v3:getTreeTypeDescFromIndex(self.treeType)
  local v9 = table.getn(v3.treeFilenames)
  local v5 = math.floor(self.growthState * (v9 - 1))
  streamWriteInt8(streamId, v5 + 1)
  streamWriteInt32(streamId, self.splitShapeFileId)
end
function TreePlantEvent.run(v0, v1)
  print("Error: TreePlantEvent is not allowed to be executed on a local client")
end
