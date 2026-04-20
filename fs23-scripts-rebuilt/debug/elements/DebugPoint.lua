-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugPoint = {}
local DebugPoint_mt = Class(DebugPoint)
function DebugPoint.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.x = 0
  v1.y = 0
  v1.z = 0
  v1.color = {r = 1, g = 1, b = 1, a = 1}
  v1.solid = false
  v1.alignToGround = false
  v1.hideWhenGuiIsOpen = false
  v1.clipDistance = 2000
  return v1
end
function DebugPoint.delete(v0)
end
function DebugPoint.update(v0, v1)
end
function DebugPoint:draw()
  if self.hideWhenGuiIsOpen then
    local v1 = v1:getIsGuiVisible()
    if v1 then
      return
    end
  end
  v1 = DebugUtil.isPositionInCameraRange(self.x, self.y, self.z, self.clipDistance)
  if not v1 then
    return
  end
  drawDebugPoint(self.x, self.y, self.z, self.color.r, self.color.g, self.color.b, self.color.a, self.solid)
end
function DebugPoint:createWithNode(node, alignToGround, solid, hideWhenGUIOpen, clipDistance)
  local v6, v7, v8 = getWorldTranslation(node)
  return self:createWithWorldPosAndDir(v6, v7, v8, alignToGround, solid, hideWhenGUIOpen, clipDistance)
end
function DebugPoint:createWithWorldPos(x, y, z, alignToGround, solid, hideWhenGUIOpen, clipDistance)
  if alignToGround and g_currentMission.terrainRootNode ~= nil then
    local v8 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  end
  self.x = x
  self.y = y
  self.z = z
  v8 = Utils.getNoNil(solid, self.solid)
  self.solid = v8
  v8 = Utils.getNoNil(hideWhenGUIOpen, self.hideWhenGuiIsOpen)
  self.hideWhenGuiIsOpen = v8
  v8 = Utils.getNoNil(clipDistance, self.clipDistance)
  self.clipDistance = v8
  return self
end
function DebugPoint:setColor(r, g, b, a)
  if not r then
  end
  v5.r = v6
  if not g then
  end
  v5.g = v6
  if not b then
  end
  v5.b = v6
  if not a then
  end
  v5.a = v6
  return self
end
function DebugPoint:setClipDistance(clipDistance)
  self.clipDistance = clipDistance
  return self
end
