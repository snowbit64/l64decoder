-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutSquare = {}
local IngameMapLayoutSquare_mt = Class(IngameMapLayoutSquare, IngameMapLayout)
function IngameMapLayoutSquare.new(customMt)
  local v2 = v2:superClass()
  if not customMt then
  end
  return v1(v2)
end
function IngameMapLayoutSquare:delete()
  delete(self.overlayMask)
  self.overlayMask = nil
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function IngameMapLayoutSquare:createComponents(element, hudAtlasPath)
  local v3 = createOverlayTextureFromFile("dataS/menu/hud/minimap_mask_square.png")
  self.overlayMask = v3
  local v4 = unpack(IngameMapLayoutSquare.SIZE.SELF)
  v3, v4 = getNormalizedScreenValues(...)
  local v7 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX, g_safeFrameOffsetY, v3, v4)
  local v10 = GuiUtils.getUVs(IngameMapLayoutSquare.UV.BACKGROUND)
  v7:setUVs(...)
  v7:setColor(0, 0, 0, 0.75)
  local v8 = HUDElement.new(v7)
  self.backgroundElement = v8
  local v9 = unpack(IngameMapLayoutSquare.SIZE.UNREAD_MESSAGES_BG)
  v8, v9 = getNormalizedScreenValues(...)
  v9 = unpack(IngameMapLayoutSquare.POSITION.UNREAD_MESSAGES_BG)
  v8, v9 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX + v8, g_safeFrameOffsetY + v9, v8, v9)
  local v12 = GuiUtils.getUVs(IngameMapLayoutSquare.UV.UNREAD_MESSAGES_BG)
  v10:setUVs(...)
  v10:setColor(0, 0, 0, 0.75)
  v10 = HUDElement.new(v10)
  self.unreadMessagesElement = v10
  local v11 = unpack(IngameMapLayoutSquare.SIZE.UNREAD_MESSAGES)
  v10, v11 = getNormalizedScreenValues(...)
  v11 = unpack(IngameMapLayoutSquare.POSITION.UNREAD_MESSAGES)
  v10, v11 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX + v10, g_safeFrameOffsetY + v11, v10, v11)
  v12 = GuiUtils.getUVs(IngameMapLayoutSquare.UV.UNREAD_MESSAGES)
  v10:setUVs(...)
  v10:setColor(1, 1, 1, 1)
  v12 = HUDElement.new(v10)
  v10:addChild(...)
end
function IngameMapLayoutSquare:storeScaledValues(element, uiScale)
  v3:setScale(uiScale, uiScale)
  local v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquare.POSITION.MAP)
  self.mapOffsetX = v3
  self.mapOffsetY = v4
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquare.SIZE.MAP)
  self.mapSizeX = v3
  self.mapSizeY = v4
  self.mapPosX = g_safeFrameOffsetX + self.mapOffsetX
  self.mapPosY = g_safeFrameOffsetY + self.mapOffsetY
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutSquare.TEXT_SIZE.COORDINATES)
  self.coordinateFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquare.POSITION.COORDINATES)
  self.coordOffsetX = v3
  self.coordOffsetY = v4
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutSquare.TEXT_SIZE.LATENCY)
  self.latencyFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutSquare.POSITION.LATENCY)
  self.latencyOffsetX = v3
  self.latencyOffsetY = v4
end
function IngameMapLayoutSquare:drawBefore()
  v1:draw()
  set2DMaskFromTexture(self.overlayMask, true, self.mapPosX, self.mapPosY, self.mapSizeX, self.mapSizeY)
end
function IngameMapLayoutSquare:drawAfter()
  set2DMaskFromTexture(0, true, 0, 0, 0, 0)
  if self.hasMessages then
    v1:draw()
  end
end
function IngameMapLayoutSquare:drawCoordinates(text)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(false)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX / 2 + 1 / g_screenWidth, self.mapPosY + self.coordOffsetY - 1 / g_screenHeight, self.coordinateFontSize, text)
  local v5 = unpack(IngameMap.COLOR.COORDINATES_TEXT)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX / 2, self.mapPosY + self.coordOffsetY, self.coordinateFontSize, text)
end
function IngameMapLayoutSquare:drawLatency(text, color)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX + self.latencyOffsetX + 1 / g_screenWidth, self.mapPosY + self.latencyOffsetY - 1 / g_screenHeight, self.latencyFontSize, text)
  local v6 = unpack(color)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX + self.latencyOffsetX, self.mapPosY + self.latencyOffsetY, self.latencyFontSize, text)
end
function IngameMapLayoutSquare:setPlayerPosition(x, z, yRot)
  self.playerU = x * 0.5 + 0.25
  self.playerV = (1 - z) * 0.5 + 0.25
  self.playerRot = yRot
end
function IngameMapLayoutSquare:setPlayerVelocity(speed)
  local v2 = MathUtil.clamp(speed / 50, 0, 1)
  self.velocityZoomFactor = v2
end
function IngameMapLayoutSquare:setWorldSize(worldSizeX, worldSizeZ)
  self.worldSizeFactor = worldSizeX / 2048
end
function IngameMapLayoutSquare:setHasUnreadMessages(hasMessages)
  self.hasMessages = hasMessages
end
function IngameMapLayoutSquare:getMapPosition()
  local v1, v2 = self:getMapSize()
  return self.mapPosX + self.mapSizeX / 2 - self.playerU * v1, self.mapPosY + self.mapSizeY / 2 - self.playerV * v2
end
function IngameMapLayoutSquare:getMapSize()
  return (1 - 0.25 * self.velocityZoomFactor) * self.worldSizeFactor, (1 - 0.25 * self.velocityZoomFactor) * self.worldSizeFactor * g_screenAspectRatio
end
function IngameMapLayoutSquare.getMapAlpha(v0)
  return 0.7
end
function IngameMapLayoutSquare.getShowsToggleAction(v0)
  return false
end
function IngameMapLayoutSquare.getShowsToggleActionText(v0)
  return true
end
function IngameMapLayoutSquare.getShowSmallIconVariation(v0)
  return true
end
function IngameMapLayoutSquare.getIconZoom(v0)
  return 0.5
end
function IngameMapLayoutSquare:getHeight()
  return self.mapSizeY
end
function IngameMapLayoutSquare:getMapObjectPosition(objectU, objectV, width, height, rot, persistent)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  if persistent then
    local v13 = MathUtil.clamp(objectU * v7 + v9 - width * 0.5, self.mapPosX - width * 0.5, self.mapPosX + self.mapSizeX - width * 0.5)
    v13 = MathUtil.clamp((1 - objectV) * v8 + v10 - height * 0.5, self.mapPosY - height * 0.5, self.mapPosY + self.mapSizeY - height * 0.5)
  end
  if v11 >= self.mapPosX - width and self.mapPosX + self.mapSizeX + width >= v11 and v12 >= self.mapPosY - height then
    -- if v0.mapPosY + v0.mapSizeY + v4 >= v12 then goto L80 end
  end
  return 0, 0, 0, false
  return v11, v12, rot, true
end
IngameMapLayoutSquare.SIZE = {SELF = {256, 256}, MAP = {236, 236}, UNREAD_MESSAGES = {32, 32}, UNREAD_MESSAGES_BG = {38, 38}}
IngameMapLayoutSquare.TEXT_SIZE = {COORDINATES = 14, LATENCY = 14}
IngameMapLayoutSquare.POSITION = {MAP = {10, 10}, COORDINATES = {0, 4}, LATENCY = {-4, 4}, UNREAD_MESSAGES = {3, 262}, UNREAD_MESSAGES_BG = {0, 259}}
IngameMapLayoutSquare.UV = {BACKGROUND = {435, 350, 10, 10}, UNREAD_MESSAGES = {377, 331, 32, 32}, UNREAD_MESSAGES_BG = {472, 331, 44, 44}}
