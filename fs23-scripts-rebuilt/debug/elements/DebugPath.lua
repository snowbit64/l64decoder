-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugPath = {}
local DebugPath_mt = Class(DebugPath)
function DebugPath.new(color, alignToGround, autoAddOffset, solid, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  if not color then
  end
  v5.color = v6
  v5.points = {}
  v5.isVisible = true
  local v6 = Utils.getNoNil(alignToGround, false)
  v5.alignToGround = v6
  v5.autoAddOffset = autoAddOffset
  v6 = Utils.getNoNil(solid, true)
  v5.solid = v6
  return v5
end
function DebugPath.delete(v0)
end
function DebugPath.update(v0, v1)
end
function DebugPath:draw(forcedY)
  if self.isVisible then
    local v2, v3, v4 = unpack(self.color)
    for v8, v9 in ipairs(self.points) do
      if not (self.points[v8 + 1] ~= nil) then
        continue
      end
      if self.alignToGround then
        local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v9[1], 0, v9[3])
        v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.points[v8 + 1][1], 0, self.points[v8 + 1][3])
      end
      drawDebugLine(v11, forcedY or v12, v13, v2, v3, v4, v14, forcedY or v15, v16, v2, v3, v4, self.solid)
    end
  end
end
function DebugPath:addPoint(x, y, z)
  if self.autoAddOffset ~= nil and self.points[#self.points] ~= nil then
    local v6 = MathUtil.vector3Length(self.points[#self.points][1] - x, self.points[#self.points][2] - y, self.points[#self.points][3] - z)
    if v6 < self.autoAddOffset then
    end
  end
  if v4 then
    table.insert(self.points, {x, y, z})
  end
  return self
end
function DebugPath:setVisible(isVisible)
  self.isVisible = isVisible
end
function DebugPath:clear()
  self.points = {}
end
function DebugPath:setColor(r, g, b)
  if not r then
  end
  v4[1] = v5
  if not g then
  end
  v4[2] = v5
  if not b then
  end
  v4[3] = v5
  return self
end
