-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PolygonChain = {}
local PolygonChain_mt = Class(PolygonChain)
function PolygonChain.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  v1.controlNodes = {}
  return v1
end
function PolygonChain:delete()
  self.controlNodes = nil
end
function PolygonChain:addControlNode(node)
  table.insert(self.controlNodes, node)
end
function PolygonChain:drawDebug(r, g, b)
  for v10, v11 in ipairs(self.controlNodes) do
    local v12, v13, v14 = getWorldTranslation(v11)
    DebugUtil.drawDebugNode(v11, nil, nil)
    if v4 ~= nil then
      drawDebugLine(v4, v5, v6, r, g, b, v12, v13, v14, r, g, b)
    end
  end
end
function PolygonChain:getClosestPoint(x, y, z)
  for v14, v15 in ipairs(self.controlNodes) do
    local v16, v17, v18 = getWorldTranslation(v15)
    if v8 ~= nil then
      local v19, v20, v21 = MathUtil.getClosestPointOnLineSegment(v8, v9, v10, v16, v17, v18, x, y, z)
      local v22 = MathUtil.vector3Length(x - v19, y - v20, z - v21)
      if v22 < v4 then
      end
    end
  end
  return v5, v6, v7
end
