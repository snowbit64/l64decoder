-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutCircle = {}
local IngameMapLayoutCircle_mt = Class(IngameMapLayoutCircle, IngameMapLayout)
function IngameMapLayoutCircle.new()
  local v1 = v1:superClass()
  return v1.new(u0)
end
function IngameMapLayoutCircle:delete()
  delete(self.overlayMask)
  self.overlayMask = nil
  v1:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function IngameMapLayoutCircle:createComponents(element, hudAtlasPath)
  local v3 = createOverlayTextureFromFile("dataS/menu/hud/minimap_mask.png")
  self.overlayMask = v3
  local v4 = unpack(IngameMapLayoutCircle.SIZE.SELF)
  v3, v4 = getNormalizedScreenValues(...)
  local v7 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX, g_safeFrameOffsetY, v3, v4)
  local v10 = GuiUtils.getUVs(IngameMapLayoutCircle.UV.BACKGROUND)
  v7:setUVs(...)
  v7:setColor(0, 0, 0, 0.75)
  local v8 = HUDElement.new(v7)
  self.backgroundElement = v8
  local v9 = unpack(IngameMapLayoutCircle.SIZE.UNREAD_MESSAGES_BG)
  v8, v9 = getNormalizedScreenValues(...)
  v9 = unpack(IngameMapLayoutCircle.POSITION.UNREAD_MESSAGES_BG)
  v8, v9 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX + v8, g_safeFrameOffsetY + v9, v8, v9)
  local v12 = GuiUtils.getUVs(IngameMapLayoutCircle.UV.UNREAD_MESSAGES_BG)
  v10:setUVs(...)
  v10:setColor(0, 0, 0, 0.75)
  v10 = HUDElement.new(v10)
  self.unreadMessagesElement = v10
  local v11 = unpack(IngameMapLayoutCircle.SIZE.UNREAD_MESSAGES)
  v10, v11 = getNormalizedScreenValues(...)
  v11 = unpack(IngameMapLayoutCircle.POSITION.UNREAD_MESSAGES)
  v10, v11 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, g_safeFrameOffsetX + v10, g_safeFrameOffsetY + v11, v10, v11)
  v12 = GuiUtils.getUVs(IngameMapLayoutCircle.UV.UNREAD_MESSAGES)
  v10:setUVs(...)
  v10:setColor(1, 1, 1, 1)
  v12 = HUDElement.new(v10)
  v10:addChild(...)
  v11 = unpack(IngameMapLayoutCircle.SIZE.NORTH_ARROW)
  v10, v11 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, 0.5, 0.5, v10, v11)
  v12 = GuiUtils.getUVs(IngameMapLayoutCircle.UV.NORTH_ARROW)
  v10:setUVs(...)
  v10:setColor(0.5, 0.5, 0.5, 0.9)
  v10 = HUDElement.new(v10)
  self.northElement = v10
  v10, v11 = v10:normalizeUVPivot(IngameMapLayoutCircle.PIVOT.NORTH_ARROW, IngameMapLayoutCircle.SIZE.NORTH_ARROW, IngameMapLayoutCircle.UV.NORTH_ARROW)
  v12:setRotationPivot(v10, v11)
end
function IngameMapLayoutCircle:storeScaledValues(element, uiScale)
  v3:setScale(uiScale, uiScale)
  local v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutCircle.POSITION.MAP)
  self.mapOffsetX = v3
  self.mapOffsetY = v4
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutCircle.SIZE.MAP)
  self.mapSizeX = v3
  self.mapSizeY = v4
  self.mapPosX = g_safeFrameOffsetX + self.mapOffsetX
  self.mapPosY = g_safeFrameOffsetY + self.mapOffsetY
  v3 = element:scalePixelToScreenHeight(HUDElement.TEXT_SIZE.DEFAULT_TEXT)
  self.fontSize = v3
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutCircle.TEXT_SIZE.COORDINATES)
  self.coordinateFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutCircle.POSITION.COORDINATES)
  self.coordOffsetX = v3
  self.coordOffsetY = v4
  v3 = element:scalePixelToScreenHeight(IngameMapLayoutCircle.TEXT_SIZE.LATENCY)
  self.latencyFontSize = v3
  v3, v4 = element:scalePixelToScreenVector(IngameMapLayoutCircle.POSITION.LATENCY)
  self.latencyOffsetX = v3
  self.latencyOffsetY = v4
end
function IngameMapLayoutCircle:drawBefore()
  set2DMaskFromTexture(self.overlayMask, true, self.mapPosX, self.mapPosY, self.mapSizeX, self.mapSizeY)
end
function IngameMapLayoutCircle:drawAfter()
  set2DMaskFromTexture(0, true, 0, 0, 0, 0)
  v1:draw()
  if self.hasMessages then
    v1:draw()
  end
  self:drawNorthArrow(-self.playerRot + math.pi / 2)
end
function IngameMapLayoutCircle:drawCoordinates(text)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(false)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX / 2 + 1 / g_screenWidth, self.mapPosY + self.coordOffsetY - 1 / g_screenHeight, self.coordinateFontSize, text)
  local v5 = unpack(IngameMap.COLOR.COORDINATES_TEXT)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX / 2, self.mapPosY + self.coordOffsetY, self.coordinateFontSize, text)
end
function IngameMapLayoutCircle:drawLatency(text, color)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextColor(0, 0, 0, 1)
  renderText(self.mapPosX + self.mapSizeX / 2 + self.latencyOffsetX + 1 / g_screenWidth, self.mapPosY + self.mapSizeY + self.latencyOffsetY - 1 / g_screenHeight, self.latencyFontSize, text)
  local v6 = unpack(color)
  setTextColor(...)
  renderText(self.mapPosX + self.mapSizeX / 2 + self.latencyOffsetX, self.mapPosY + self.mapSizeY + self.latencyOffsetY, self.latencyFontSize, text)
end
function IngameMapLayoutCircle:drawNorthArrow(rotation)
  local v4, v5 = v4:getRotationPivot()
  local cosRot = math.cos(rotation)
  local sinRot = math.sin(rotation)
  v12:setPosition(self.mapPosX + self.mapSizeX / 2 + cosRot * self.mapSizeX / 2 - v4, self.mapPosY + self.mapSizeY / 2 + sinRot * self.mapSizeY / 2 - v5)
  v12:setRotation(rotation - u0)
  v12:draw()
end
function IngameMapLayoutCircle:setPlayerPosition(x, z, yRot)
  self.playerU = x * 0.5 + 0.25
  self.playerV = (1 - z) * 0.5 + 0.25
  self.playerRot = yRot
end
function IngameMapLayoutCircle:setPlayerVelocity(speed)
  local v2 = MathUtil.clamp(speed / 50, 0, 1)
  self.velocityZoomFactor = v2
end
function IngameMapLayoutCircle:setWorldSize(worldSizeX, worldSizeZ)
  self.worldSizeFactor = worldSizeX / 2048
end
function IngameMapLayoutCircle:setHasUnreadMessages(hasMessages)
  self.hasMessages = hasMessages
end
function IngameMapLayoutCircle:getMapPosition()
  local v1, v2 = self:getMapSize()
  return self.mapPosX + self.mapSizeX / 2 - self.playerU * v1, self.mapPosY + self.mapSizeY / 2 - self.playerV * v2
end
function IngameMapLayoutCircle:getMapPivot()
  local v1, v2 = self:getMapSize()
  return self.playerU * v1, self.playerV * v2
end
function IngameMapLayoutCircle:getMapRotation()
  return -self.playerRot
end
function IngameMapLayoutCircle:getMapSize()
  return (1 - 0.25 * self.velocityZoomFactor) * self.worldSizeFactor, (1 - 0.25 * self.velocityZoomFactor) * self.worldSizeFactor * g_screenAspectRatio
end
function IngameMapLayoutCircle.getMapAlpha(v0)
  return 0.7
end
function IngameMapLayoutCircle.getShowsToggleAction(v0)
  return false
end
function IngameMapLayoutCircle.getShowSmallIconVariation(v0)
  return true
end
function IngameMapLayoutCircle.getShowsToggleActionText(v0)
  return true
end
function IngameMapLayoutCircle.getIconZoom(v0)
  return 0.5
end
function IngameMapLayoutCircle:getHeight()
  return self.mapSizeY
end
function IngameMapLayoutCircle:rotateWithMap(x, y, rot, lockToBorder)
  local angle = self:getMapRotation()
  local v6 = math.sin(angle)
  local v7 = math.cos(angle)
  if lockToBorder then
    local v12 = math.sqrt(((x - self.mapPosX + self.mapSizeX / 2) * g_screenAspectRatio * v7 - (y - self.mapPosY + self.mapSizeY / 2) * v6) * ((x - self.mapPosX + self.mapSizeX / 2) * g_screenAspectRatio * v7 - (y - self.mapPosY + self.mapSizeY / 2) * v6) + ((x - self.mapPosX + self.mapSizeX / 2) * g_screenAspectRatio * v6 + (y - self.mapPosY + self.mapSizeY / 2) * v7) * ((x - self.mapPosX + self.mapSizeX / 2) * g_screenAspectRatio * v6 + (y - self.mapPosY + self.mapSizeY / 2) * v7))
    local v14 = math.min(self.mapSizeY / 2 / v12, 1)
  end
  return v10 / g_screenAspectRatio + v8, v11 * 1 + v9, rot + angle
end
function IngameMapLayoutCircle:getMapObjectPosition(objectU, objectV, width, height, rot, persistent)
  local v7, v8 = self:getMapSize()
  local v9, v10 = self:getMapPosition()
  local v13, v14, v15 = self:rotateWithMap(objectU * v7 + v9, (1 - objectV) * v8 + v10, rot, persistent)
  if v13 - width * 0.5 >= self.mapPosX - 2 * width and self.mapPosX + self.mapSizeX + 2 * width >= v13 - width * 0.5 and v14 - height * 0.5 >= self.mapPosY - 2 * height then
    -- if v0.mapPosY + v0.mapSizeY + 2 * v4 >= v14 - v4 * 0.5 then goto L65 end
  end
  return 0, 0, 0, false
  return v11, v12, rot, true
end
IngameMapLayoutCircle.SIZE = {SELF = {256, 256}, MAP = {236, 236}, UNREAD_MESSAGES = {32, 32}, UNREAD_MESSAGES_BG = {38, 38}, NORTH_ARROW = {9, 7}}
IngameMapLayoutCircle.TEXT_SIZE = {LATENCY = 10, COORDINATES = 14}
IngameMapLayoutCircle.POSITION = {MAP = {10, 10}, COORDINATES = {0, 12}, LATENCY = {0, -12}, UNREAD_MESSAGES = {3, 221}, UNREAD_MESSAGES_BG = {0, 218}, NORTH_ARROW = {0, 100}}
IngameMapLayoutCircle.PIVOT = {NORTH_ARROW = {5, 0}}
IngameMapLayoutCircle.UV = {BACKGROUND = {48, 291, 256, 256}, UNREAD_MESSAGES = {377, 331, 32, 32}, UNREAD_MESSAGES_BG = {472, 331, 44, 44}, NORTH_ARROW = {480, 296, 9, 7}}
