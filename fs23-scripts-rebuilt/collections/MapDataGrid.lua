-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapDataGrid = {}
local MapDataGrid_mt = Class(MapDataGrid, DataGrid)
function MapDataGrid.new(mapSize, blocksPerRowColumn, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.blocksPerRowColumn = blocksPerRowColumn
  v3.mapSize = mapSize
  v3.blockSize = v3.mapSize / v3.blocksPerRowColumn
  return v3
end
function MapDataGrid:getValueAtWorldPos(worldX, worldZ)
  local v3, v4 = self:getRowColumnFromWorldPos(worldX, worldZ)
  local v5 = self:getValue(v3, v4)
  return v5, v3, v4
end
function MapDataGrid:setValueAtWorldPos(worldX, worldZ, value)
  local v4, v5 = self:getRowColumnFromWorldPos(worldX, worldZ)
  self:setValue(v4, v5, value)
end
function MapDataGrid:getRowColumnFromWorldPos(worldX, worldZ)
  local v8 = math.ceil(self.blocksPerRowColumn * (worldZ + self.mapSize * 0.5) / self.mapSize)
  local v7 = MathUtil.clamp(v8, 1, self.blocksPerRowColumn)
  local v9 = math.ceil(self.blocksPerRowColumn * (worldX + self.mapSize * 0.5) / self.mapSize)
  v8 = MathUtil.clamp(v9, 1, self.blocksPerRowColumn)
  return v7, v8
end
function MapDataGrid:getBoundaries(row, column)
  return (column - 1) * self.blockSize - self.mapSize * 0.5, column * self.blockSize - self.mapSize * 0.5, (row - 1) * self.blockSize - self.mapSize * 0.5, row * self.blockSize - self.mapSize * 0.5
end
