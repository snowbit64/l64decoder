-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DynamicDataGrid = {}
local DynamicDataGrid_mt = Class(DynamicDataGrid)
function DynamicDataGrid.new(size, tileSize, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.tileSize = tileSize or 1
  v3.size = size or 20
  local v5 = math.floor(v3.size / v3.tileSize)
  v3.numRows = v5 + 1
  v3.grid = {}
  -- TODO: structure LOP_FORNPREP (pc 34, target 60)
  -- TODO: structure LOP_FORNPREP (pc 41, target 51)
  table.insert({}, {})
  -- TODO: structure LOP_FORNLOOP (pc 50, target 42)
  table.insert(v3.grid, {})
  -- TODO: structure LOP_FORNLOOP (pc 59, target 35)
  v3.lastPosition = {x = 0, z = 0}
  v3.lastIndices = nil
  v3.yOffset = 0.05
  return v3
end
function DynamicDataGrid:delete()
  self.grid = nil
end
function DynamicDataGrid:drawDebug(areaColorFunction, cellFunction)
  if self.lastIndices ~= nil then
    local v6 = math.floor(self.numRows * 0.5)
    local v7 = math.floor(self.numRows * 0.5)
    for v8, v9 in ipairs(self.grid) do
      for v14, v15 in ipairs(v9) do
        if areaColorFunction ~= nil then
          local v22, v23, v24, v25 = areaColorFunction(v15)
          local v27 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3, 0, v10)
          local v28 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3 + self.tileSize, 0, v10)
          local v29 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3, 0, v10 + self.tileSize)
          local v30 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3 + self.tileSize, 0, v10 + self.tileSize)
          drawDebugTriangle(v3, v27 + self.yOffset, v10, v3, v29 + self.yOffset, v10 + self.tileSize, v3 + self.tileSize, v28 + self.yOffset, v10, v22, v23, v24, v25, false)
          drawDebugTriangle(v3 + self.tileSize, v28 + self.yOffset, v10, v3, v29 + self.yOffset, v10 + self.tileSize, v3 + self.tileSize, v30 + self.yOffset, v10 + self.tileSize, v22, v23, v24, v25, false)
        end
        if cellFunction ~= nil then
          cellFunction(v15, v16 + self.tileSize * 0.5, v17 + self.tileSize * 0.5)
        end
      end
    end
  end
end
function DynamicDataGrid:getCellData(offsetX, offsetZ)
  local v4 = math.floor(self.numRows * 0.5)
  return self.grid[v4 + 1 + (offsetX or 0)][v4 + 1 + (offsetZ or 0)], self.lastIndices.x + self.tileSize * 0.5 + self.tileSize * (offsetX or 0), self.lastIndices.z + self.tileSize * 0.5 + self.tileSize * (offsetZ or 0)
end
function DynamicDataGrid:getCellAtWorldPosition(worldX, worldZ)
  local v3, v4 = self:getIndicesByWorldPosition(worldX, worldZ)
  local v8 = math.floor(self.numRows * 0.5)
  if self.grid[v8 + 1 + (v3 - self.lastIndices.x) / self.tileSize] ~= nil then
    return self.grid[v8 + 1 + (v3 - self.lastIndices.x) / self.tileSize][v8 + 1 + (v4 - self.lastIndices.z) / self.tileSize]
  end
  return nil
end
function DynamicDataGrid:setWorldPosition(x, z)
  local v3, v4 = self:getIndicesByWorldPosition(x, z)
  if self.lastIndices == nil then
    self.lastIndices = {x = v3, z = v4}
  end
  self.lastPosition.x = x
  self.lastPosition.z = z
  if (v3 - self.lastIndices.x) / self.tileSize ~= 0 then
    local v7 = MathUtil.sign((v3 - self.lastIndices.x) / self.tileSize)
    local v12 = math.abs((v3 - self.lastIndices.x) / self.tileSize)
    local v11 = math.min(v12, self.numRows)
    -- TODO: structure LOP_FORNPREP (pc 61, target 112)
    if v7 < 0 then
    end
    local v13 = table.remove(self.grid, v12)
    for v17, v18 in ipairs(v13) do
      for v22, v23 in pairs(v18) do
        v18[v22] = nil
      end
    end
    if v11 == nil then
      table.insert(self.grid, v13)
    else
      table.insert(self.grid, v11, v13)
    end
    -- TODO: structure LOP_FORNLOOP (pc 111, target 62)
    self.lastIndices.x = v3
  end
  if v6 ~= 0 then
    v7 = MathUtil.sign(v6)
    v12 = math.abs(v6)
    v11 = math.min(v12, self.numRows)
    -- TODO: structure LOP_FORNPREP (pc 137, target 187)
    for v13 = 1, self.numRows do
      if v7 < 0 then
      end
      v17 = table.remove(self.grid[v13], v15)
      for v21, v22 in pairs(v17) do
        v17[v21] = nil
      end
      if v14 == nil then
        table.insert(v16, v17)
      else
        table.insert(v16, v14, v17)
      end
      -- TODO: structure LOP_FORNLOOP (pc 185, target 143)
    end
    self.lastIndices.z = v4
  end
end
function DynamicDataGrid:getIndicesByWorldPosition(x, z)
  local v4 = math.floor(x / self.tileSize)
  local v5 = math.floor(z / self.tileSize)
  return v4 * self.tileSize, v5 * self.tileSize
end
