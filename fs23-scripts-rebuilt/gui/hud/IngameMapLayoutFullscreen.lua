-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutFullscreen = {}
local IngameMapLayoutFullscreen_mt = Class(IngameMapLayoutFullscreen, IngameMapLayout)
function IngameMapLayoutFullscreen.new()
  local v1 = v1:superClass()
  local v0 = v1.new(u0)
  v0.mapCenterX = 0.5
  v0.mapCenterY = 0.5
  v0.zoomFactor = 1
  return v0
end
function IngameMapLayoutFullscreen.delete(v0)
end
function IngameMapLayoutFullscreen.createComponents(v0, v1, v2)
end
function IngameMapLayoutFullscreen.storeScaledValues(v0, v1, v2)
end
function IngameMapLayoutFullscreen.drawBefore(v0)
end
function IngameMapLayoutFullscreen.drawAfter(v0)
end
function IngameMapLayoutFullscreen:getMapSize()
  return 2 * self.zoomFactor / g_screenAspectRatio, 2 * self.zoomFactor
end
function IngameMapLayoutFullscreen:getMapPosition()
  local v1, v2 = self:getMapSize()
  return self.mapCenterX - v1 * 0.5, self.mapCenterY - v2 * 0.5
end
function IngameMapLayoutFullscreen:setMapCenter(x, y)
  self.mapCenterX = x
  self.mapCenterY = y
end
function IngameMapLayoutFullscreen:setMapZoom(zoomFactor)
  self.zoomFactor = zoomFactor
end
function IngameMapLayoutFullscreen:getIconZoom()
  return 0.25 + self.zoomFactor * 0.25
end
function IngameMapLayoutFullscreen.getBlinkPlayerArrow(v0)
  return true
end
function IngameMapLayoutFullscreen:getMapObjectPosition(objectU, objectV, width, height, rot, persistent)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  return objectU * v7 + v9 - width * 0.5, (1 - objectV) * v8 + v10 - height * 0.5, rot, true
end
