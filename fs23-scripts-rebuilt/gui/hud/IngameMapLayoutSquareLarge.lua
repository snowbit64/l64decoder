-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutSquareLarge = {}
local IngameMapLayoutSquareLarge_mt = Class(IngameMapLayoutSquareLarge, IngameMapLayout)
function IngameMapLayoutSquareLarge.new()
  local v1 = v1:superClass()
  return v1.new(u0)
end
function IngameMapLayoutSquareLarge:delete()
  delete(self.overlayMask)
  self.overlayMask = nil
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function IngameMapLayoutSquareLarge:createComponents(element, hudAtlasPath)
  local v3 = createOverlayTextureFromFile("dataS/menu/hud/minimap_mask_square.png")
  self.overlayMask = v3
  local v4 = unpack(IngameMapLayoutSquareLarge.SIZE.SELF)
  v3, v4 = getNormalizedScreenValues(...)
  local v7 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX, g_safeFrameOffsetY, v3, v4)
  local v10 = GuiUtils.getUVs(IngameMapLayoutSquareLarge.UV.BACKGROUND)
  v7:setUVs(...)
  v7:setColor(0, 0, 0, 0.75)
  local v8 = HUDElement.new(v7)
  self.backgroundElement = v8
end
function IngameMapLayoutSquareLarge:storeScaledValues(element, uiScale)
  v3:setScale(uiScale, uiScale)
  local v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquareLarge.POSITION.MAP)
  self.mapOffsetX = v3
  self.mapOffsetY = v4
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquareLarge.SIZE.MAP)
  self.mapSizeX = v3
  self.mapSizeY = v4
  self.mapPosX = g_safeFrameOffsetX + self.mapOffsetX
  self.mapPosY = g_safeFrameOffsetY + self.mapOffsetY
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutSquareLarge.TEXT_SIZE.COORDINATES)
  self.coordinateFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquareLarge.POSITION.COORDINATES)
  self.coordOffsetX = v3
  self.coordOffsetY = v4
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutSquare.TEXT_SIZE.LATENCY)
  self.latencyFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquare.POSITION.LATENCY)
  self.latencyOffsetX = v3
  self.latencyOffsetY = v4
end
function IngameMapLayoutSquareLarge:drawBefore()
  v1:draw()
  set2DMaskFromTexture(self.overlayMask, true, self.mapPosX, self.mapPosY, self.mapSizeX, self.mapSizeY)
end
function IngameMapLayoutSquareLarge.drawAfter(v0)
  set2DMaskFromTexture(0, true, 0, 0, 0, 0)
end
function IngameMapLayoutSquareLarge:drawCoordinates(text)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(false)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX / 2 + 1 / g_screenWidth, self.mapPosY + self.coordOffsetY - 1 / g_screenHeight, self.coordinateFontSize, text)
  local v5 = unpack(IngameMap.COLOR.COORDINATES_TEXT)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX / 2, self.mapPosY + self.coordOffsetY, self.coordinateFontSize, text)
end
function IngameMapLayoutSquareLarge:drawLatency(text, color)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX + self.latencyOffsetX + 1 / g_screenWidth, self.mapPosY + self.latencyOffsetY - 1 / g_screenHeight, self.latencyFontSize, text)
  local v6 = unpack(color)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX + self.latencyOffsetX, self.mapPosY + self.latencyOffsetY, self.latencyFontSize, text)
end
function IngameMapLayoutSquareLarge:getMapPosition()
  return -self.mapSizeX / 2 + self.mapPosX, -self.mapSizeY / 2 + self.mapPosY
end
function IngameMapLayoutSquareLarge:getMapSize()
  return self.mapSizeX * 2, self.mapSizeY * 2
end
function IngameMapLayoutSquareLarge.getMapAlpha(v0)
  return 0.7
end
function IngameMapLayoutSquareLarge.getShowsToggleAction(v0)
  return false
end
function IngameMapLayoutSquareLarge.getShowsToggleActionText(v0)
  return true
end
function IngameMapLayoutSquareLarge.getShowSmallIconVariation(v0)
  return true
end
function IngameMapLayoutSquareLarge.getIconZoom(v0)
  return 0.75
end
function IngameMapLayoutSquareLarge:getHeight()
  return self.mapSizeY
end
function IngameMapLayoutSquareLarge:getMapObjectPosition(objectU, objectV, width, height, rot, persistent)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  return objectU * v7 + v9 - width * 0.5, (1 - objectV) * v8 + v10 - height * 0.5, rot, true
end
IngameMapLayoutSquareLarge.SIZE = {SELF = {700, 700}, MAP = {680, 680}}
IngameMapLayoutSquareLarge.TEXT_SIZE = {COORDINATES = 14, LATENCY = 14}
IngameMapLayoutSquareLarge.POSITION = {MAP = {10, 10}, COORDINATES = {0, 4}, LATENCY = {-4, 4}}
IngameMapLayoutSquareLarge.UV = {BACKGROUND = {435, 350, 10, 10}}
