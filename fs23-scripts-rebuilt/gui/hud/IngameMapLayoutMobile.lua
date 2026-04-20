-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutMobile = {}
local IngameMapLayoutMobile_mt = Class(IngameMapLayoutMobile, IngameMapLayoutSquare)
function IngameMapLayoutMobile.new()
  local v1 = v1:superClass()
  local v0 = v1.new(u0)
  v0.mapOffsetX = 0
  return v0
end
function IngameMapLayoutMobile:storeScaledValues(element, uiScale)
  local v3 = element:scalePixelToScreenVector(IngameMapLayoutMobile.POSITION.MAP)
  self.mapPosX = v3
  local v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutMobile.SIZE.MAP)
  self.mapSizeX = v3
  self.mapSizeY = v4
  self.mapPosY = IngameMapMobile.HEIGHT_FACTOR - self.mapSizeY * 0.5
end
function IngameMapLayoutMobile:setPlayerPosition(x, z, yRot)
  self.playerU = x
  self.playerV = 1 - z
  self.playerRot = yRot
end
function IngameMapLayoutMobile:getMapPosition()
  local v1, v2 = self:getMapSize()
  local v14 = math.min(self.mapPosX + self.mapOffsetX + self.mapSizeX * 0.5 - self.playerU * v1, self.mapPosX + self.mapOffsetX)
  local v13 = math.max(v14, self.mapPosX + self.mapOffsetX + self.mapSizeX - v1)
  v14 = math.min(self.mapPosY + self.mapSizeY * 0.5 - self.playerV * v2, self.mapPosY)
  v13 = math.max(v14, self.mapPosY + self.mapSizeY - v2)
  return v13, v13
end
function IngameMapLayoutMobile.getShowsToggleAction(v0)
  return false
end
function IngameMapLayoutMobile.getShowsToggleActionText(v0)
  return true
end
function IngameMapLayoutMobile.getIconZoom(v0)
  return 1.25
end
function IngameMapLayoutMobile.getMapAlpha(v0)
  return 0.85
end
function IngameMapLayoutMobile:setOffset(x)
  self.mapOffsetX = x
end
function IngameMapLayoutMobile:drawBefore()
  set2DMaskFromTexture(self.overlayMask, true, self.mapPosX + self.mapOffsetX, self.mapPosY, self.mapSizeX, self.mapSizeY)
end
function IngameMapLayoutMobile:setWorldSize(worldSizeX, worldSizeZ)
  self.worldSizeFactor = 1.1
end
function IngameMapLayoutMobile:getMapObjectPosition(objectU, objectV, width, height, rot, persistent)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  if persistent then
    local v17 = MathUtil.clamp(v9 + objectU * v7 - width * 0.5, self.mapPosX + self.mapOffsetX, self.mapPosX + self.mapOffsetX + self.mapSizeX - width)
    v17 = MathUtil.clamp(v10 + (1 - objectV) * v8 - height * 0.5, self.mapPosY, self.mapPosY + self.mapSizeY - height)
  end
  if v13 >= v15 - width and v15 + self.mapSizeX + width >= v13 and v14 >= v16 - height then
    -- if v16 + v0.mapSizeY + v4 >= v14 then goto L67 end
  end
  return 0, 0, 0, false
  return v13, v14, rot, true
end
IngameMapLayoutMobile.SIZE = {MAP = {464, 470}}
IngameMapLayoutMobile.POSITION = {MAP = {2, 306}}
