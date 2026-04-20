-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutFullscreenMobile = {}
local v0 = Class(IngameMapLayoutFullscreenMobile, IngameMapLayout)
function IngameMapLayoutFullscreenMobile.new()
  local v1 = v1:superClass()
  local v0 = v1.new(u0)
  v0.mapCenterX = 0.5
  v0.mapCenterY = 0.5
  v0.zoomFactor = 1
  v0.width = 1
  v0.height = 1
  return v0
end
function IngameMapLayoutFullscreenMobile.delete(v0)
end
function IngameMapLayoutFullscreenMobile.createComponents(v0, v1, v2)
end
function IngameMapLayoutFullscreenMobile.storeScaledValues(v0, v1, v2)
end
function IngameMapLayoutFullscreenMobile.drawBefore(v0)
end
function IngameMapLayoutFullscreenMobile.drawAfter(v0)
end
function IngameMapLayoutFullscreenMobile:getMapSize()
  return self.height * self.zoomFactor / g_screenAspectRatio, self.height * self.zoomFactor
end
function IngameMapLayoutFullscreenMobile:getMapPosition()
  local v1, v2 = self:getMapSize()
  return self.mapCenterX - v1 * 0.5, self.mapCenterY - v2 * 0.5
end
function IngameMapLayoutFullscreenMobile:setMapCenter(v1, v2)
  self.mapCenterX = v1
  self.mapCenterY = v2
end
function IngameMapLayoutFullscreenMobile:setMapWidth(v1)
  self.width = v1
  self.height = v1 * g_screenAspectRatio
end
function IngameMapLayoutFullscreenMobile:setMapZoom(v1)
  self.zoomFactor = v1
end
function IngameMapLayoutFullscreenMobile.getIconZoom(v0)
  return 1
end
function IngameMapLayoutFullscreenMobile.getBlinkPlayerArrow(v0)
  return true
end
function IngameMapLayoutFullscreenMobile:getMapObjectPosition(v1, v2, v3, v4, v5, v6)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  return v1 * v7 + v9 - v3 * 0.5, (1 - v2) * v8 + v10 - v4 * 0.5, v5, true
end
