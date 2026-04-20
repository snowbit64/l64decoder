-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DensityMapSyncer = {}
local DensityMapSyncer_mt = Class(DensityMapSyncer)
function DensityMapSyncer.new(terrainRootNode, cellSizeInPixels, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.cellSize = cellSizeInPixels
  v3.updateListeners = {}
  v3.densityMapSizes = {}
  local v4 = createDensityMapSyncer("DensityMapSyncer", terrainRootNode, v3.cellSize)
  v3.syncerId = v4
  return v3
end
function DensityMapSyncer:delete()
  if self.syncerId ~= nil then
    delete(self.syncerId)
  end
end
function DensityMapSyncer:addDensityMap(densityMapId)
  if self.syncerId ~= nil then
    addDensityMapSyncerDensityMap(self.syncerId, densityMapId)
  end
end
function DensityMapSyncer:addConnection(streamId)
  if self.syncerId ~= nil then
    addDensityMapSyncerConnection(self.syncerId, streamId)
  end
end
function DensityMapSyncer:removeConnection(streamId)
  if self.syncerId ~= nil then
    removeDensityMapSyncerConnection(self.syncerId, streamId)
  end
end
function DensityMapSyncer:writeUpdateStream(connection, maxPacketSize, x, y, z, viewCoeff, networkDebug)
  if self.syncerId ~= nil then
    local v8 = streamGetWriteOffset(connection.streamId)
    if networkDebug then
      streamWriteInt32(connection.streamId, 0)
    end
    writeDensityMapSyncerServerUpdateToStream(self.syncerId, connection.streamId, connection.streamId, x, y, z, viewCoeff, maxPacketSize, connection.lastSeqSent)
    local v9 = streamGetWriteOffset(connection.streamId)
    v11:addPacketSize(connection, NetworkNode.PACKET_DENSITY_MAPS, (v9 - v8) / 8)
    if networkDebug then
      streamSetWriteOffset(connection.streamId, v8)
      streamWriteInt32(connection.streamId, v9 - v8 + 32)
      streamSetWriteOffset(connection.streamId, v9)
    end
    return v10
  end
  return 0
end
function DensityMapSyncer:readUpdateStream(connection, networkDebug)
  if self.syncerId ~= nil then
    if networkDebug then
      local v5 = streamGetReadOffset(connection.streamId)
      v5 = streamReadInt32(connection.streamId)
    end
    readDensityMapSyncerServerUpdateFromStream(self.syncerId, connection.streamId, g_clientInterpDelay, g_packetPhysicsNetworkTime, g_client.tickDuration)
    if networkDebug then
      v5:checkObjectUpdateDebugReadSize(connection.streamId, v4, v3, "densitymapsyncer")
    end
  end
end
function DensityMapSyncer:onPacketLost(connection, packetId)
  if self.syncerId ~= nil then
    setDensityMapSyncerLostPacket(self.syncerId, connection.streamId, packetId)
  end
end
function DensityMapSyncer:activateFruitUpdateCallback(fruitTypeIndex)
  local v2 = v2:getFruitTypeByIndex(fruitTypeIndex)
  if v2.terrainDataPlaneId == nil then
    return nil
  end
  if self.updateListeners[v2.foliageTransformGroupId] == nil then
    self.updateListeners[v2.foliageTransformGroupId] = {}
    local v5 = getDensityMapSize(v2.terrainDataPlaneId)
    self.densityMapSizes[v2.foliageTransformGroupId] = v5
    setDensityMapSyncerCellChangedCallback(self.syncerId, v2.foliageTransformGroupId, "onCellUpdate", self)
  end
  return v3
end
function DensityMapSyncer:onCellUpdate(densityMapId, cellX, cellZ)
  if self.updateListeners[densityMapId] == nil then
    return
  end
  local cellId = self:getCellId(densityMapId, cellX, cellZ)
  if v4[cellId] ~= nil then
    for v10, v11 in pairs(v4[cellId]) do
      v10:onDensityMapSyncerUpdate(densityMapId, cellX, cellZ, cellId)
    end
  end
end
function DensityMapSyncer:getCellId(densityMapId, cellX, cellZ)
  return cellX * self.densityMapSizes[densityMapId] / self.cellSize + cellZ
end
function DensityMapSyncer:addCellUpdateListener(listener, densityMapId, cellX, cellZ)
  local cellId = self:getCellId(densityMapId, cellX, cellZ)
  if self.updateListeners[densityMapId] == nil then
    return nil
  end
  if v6[cellId] == nil then
    v6[cellId] = {}
    setEnableDensityMapSyncerCellChangedCallback(self.syncerId, densityMapId, cellX, cellZ, true)
  end
  if v7[listener] == nil then
    v7[listener] = 0
  end
  v7[listener] = v7[listener] + 1
  return cellId
end
function DensityMapSyncer:removeCellUpdateListener(listener, densityMapId, cellX, cellZ)
  local cellId = self:getCellId(densityMapId, cellX, cellZ)
  if self.updateListeners[densityMapId] == nil then
    return false
  end
  if v6[cellId] == nil then
    return false
  end
  if v7[listener] == nil then
    return false
  end
  v7[listener] = v7[listener] - 1
  if v7[listener] == 0 then
    v7[listener] = nil
  end
  local v8 = next(v7)
  if v8 == nil then
    v6[cellId] = nil
    setEnableDensityMapSyncerCellChangedCallback(self.syncerId, densityMapId, cellX, cellZ, false)
  end
  return true
end
function DensityMapSyncer:getFruitCellIndicesAtWorldPosition(fruitTypeIndex, x, z)
  local v4 = v4:getFruitTypeByIndex(fruitTypeIndex)
  if v4.terrainDataPlaneId == nil then
    return nil
  end
  local v6, v7 = getDensityMapSyncerCellIndicesAtWorldPosition(self.syncerId, v4.terrainDataPlaneId, x, z)
  return v6, v7
end
