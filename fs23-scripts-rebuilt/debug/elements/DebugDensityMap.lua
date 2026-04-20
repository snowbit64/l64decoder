-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugDensityMap = {}
local DebugDensityMap_mt = Class(DebugDensityMap)
function DebugDensityMap.new(densityMap, firstChannel, numChannels, radius, yOffset, colors, customMt)
  if not customMt then
  end
  local v7 = v7(size, v9)
  local size = getDensityMapSize(densityMap)
  v7.resolution = g_currentMission.terrainSize / size
  v7.firsChannel = firstChannel
  v7.numChannels = numChannels
  v7.colors = colors
  v7.radius = radius
  v7.yOffset = yOffset or 0.1
  local v9 = DensityMapModifier.new(densityMap, firstChannel, numChannels, g_currentMission.terrainNode)
  v7.modifier = v9
  v9 = DensityMapFilter.new(v7.modifier)
  v7.filter = v9
  return v7
end
function DebugDensityMap.delete(v0)
end
function DebugDensityMap.update(v0, v1)
end
function DebugDensityMap:draw()
  local v4 = math.ceil(self.radius / self.resolution - self.resolution * 0.5)
  if self.centerX == nil then
    local v11 = getCamera()
    local v10, v11, v12 = getWorldTranslation(...)
  end
  local v9 = math.floor(v7 / self.resolution)
  v9 = math.floor(v8 / self.resolution)
  -- TODO: structure LOP_FORNPREP (pc 56, target 205)
  for v16 = 1, v4 do
    v29:setParallelogramWorldCoords(v7 + (v13 - v4 * 0.5) * v1 + v9, v8 + (v16 - v4 * 0.5) * v1 + v10, v7 + (v13 + 1 - v4 * 0.5) * v1 - v9, v8 + (v16 - v4 * 0.5) * v1 + v10, v7 + (v13 - v4 * 0.5) * v1 + v9, v8 + (v16 + 1 - v4 * 0.5) * v1 - v10, DensityCoordType.POINT_POINT_POINT)
    for v31 = 0, 2 ^ self.numChannels - 1 do
      v32:setValueCompareParams(DensityValueCompareType.EQUAL, v31)
      local v32, v33, v34 = v32:executeGet(self.filter)
      if 0 < v33 then
        if v2[v31] ~= nil then
          self:drawDebugAreaRectangleFilled(v17 + v1 * 0.1 - v5, v18 + v1 * 0.1 - v6, v19 - v1 * 0.1 - v5, v20 + v1 * 0.1 - v6, v21 + v1 * 0.1 - v5, v22 - v1 * 0.1 - v6, v2[v31][1], v2[v31][2], v2[v31][3], v2[v31][4])
        end
        local v45 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, (v35 + v37) * 0.5, 0, (v36 + v40) * 0.5)
        local v49 = tostring(v31)
        Utils.renderTextAtWorldPosition((v35 + v37) * 0.5, v45 + self.yOffset, (v36 + v40) * 0.5, v49, 0.012, 0, {1, 1, 1, 1})
      else
        -- TODO: structure LOP_FORNLOOP (pc 202, target 114)
      end
    end
  end
end
function DebugDensityMap:setCenter(x, z)
  self.centerX = x
  self.centerZ = z
end
function DebugDensityMap:drawDebugAreaRectangleFilled(x, z, x1, z1, x2, z2, r, g, b, a)
  local v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  local v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z1)
  local v16 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x2, 0, z2)
  local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x1, 0, z2)
  drawDebugTriangle(x, v14 + self.yOffset, z, x2, v16 + self.yOffset, z2, x1, v15 + self.yOffset, z1, r, g, b, a, false)
  drawDebugTriangle(x1, v15 + self.yOffset, z1, x2, v16 + self.yOffset, z2, x1, v17 + self.yOffset, z2, r, g, b, a, false)
end
