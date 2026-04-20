-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SideNotification = {}
local SideNotification_mt = Class(SideNotification, HUDDisplayElement)
SideNotification.MAX_NOTIFICATIONS = 5
SideNotification.FADE_DURATION = 500
function SideNotification.new(customMt, hudAtlasPath)
  local v3 = v3:superClass()
  if not customMt then
  end
  local v2 = v2(v3, v4, v5)
  v3 = v2:createBackground(hudAtlasPath)
  v2.overlay = v3
  v2.notificationQueue = {}
  v2.textSize = 0
  v2.textOffsetY = 0
  v2.lineOffset = 0
  v2.notificationMarginX = 0
  v2.notificationMarginY = 0
  return v2
end
function SideNotification:addNotification(text, color, displayDuration)
  table.insert(self.notificationQueue, {text = text, color = color, duration = displayDuration, startDuration = displayDuration})
  self:updateSizeAndPositions()
end
function SideNotification:update(dt)
  local v5 = math.min(#self.notificationQueue, SideNotification.MAX_NOTIFICATIONS)
  -- TODO: structure LOP_FORNPREP (pc 15, target 44)
  if self.notificationQueue[v5].duration <= 0 then
    table.remove(self.notificationQueue, v5)
  else
    local v7 = math.max(0, self.notificationQueue[v5].duration - dt)
    self.notificationQueue[v5].duration = v7
  end
  -- TODO: structure LOP_FORNLOOP (pc 43, target 16)
  if v2 then
    self:updateSizeAndPositions()
  end
end
function SideNotification:draw()
  local v1 = self:getVisible()
  if v1 and 0 < #self.notificationQueue then
    local v2 = v2:superClass()
    v2.draw(self)
    v1, v2 = self:getPosition()
    local v5 = self:getWidth()
    local v4 = self:getHeight()
    local v9, v10, v11, v12 = self:getColor()
    local v16 = math.min(#self.notificationQueue, SideNotification.MAX_NOTIFICATIONS)
    -- TODO: structure LOP_FORNPREP (pc 66, target 171)
    if self.notificationQueue[1].startDuration - self.notificationQueue[1].duration < SideNotification.FADE_DURATION then
    elseif self.notificationQueue[1].duration < SideNotification.FADE_DURATION then
    end
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_RIGHT)
    setTextColor(0, 0, 0, v12 * v17)
    renderText(v7 + v5, v8 - v6 + self.textOffsetY, self.textSize, v16.text)
    setTextColor(v16.color[1], v16.color[2], v16.color[3], v16.color[4] * v12 * v17)
    renderText(v7, v8 + self.textOffsetY, self.textSize, v16.text)
    -- TODO: structure LOP_FORNLOOP (pc 170, target 67)
    setTextColor(1, 1, 1, 1)
  end
end
function SideNotification.getBackgroundPosition(uiScale)
  local v2 = unpack(SideNotification.POSITION.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  return 1 - g_safeFrameOffsetX + v1 * uiScale, 1 - g_safeFrameOffsetY + v2 * uiScale
end
function SideNotification:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale)
  self:updateSizeAndPositions()
end
function SideNotification:updateSizeAndPositions()
  local numLines = math.min(#self.notificationQueue, SideNotification.MAX_NOTIFICATIONS)
  local width = self:getWidth()
  self:setDimension(width, numLines * self.textSize + (numLines - 1) * self.lineOffset + self.notificationMarginY * 2)
  local v5 = self:getScale()
  local v4, v5 = SideNotification.getBackgroundPosition(...)
  local v7 = self:getHeight()
  self:setPosition(v4 - width, v5 - v7)
  self:storeScaledValues()
end
function SideNotification:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(SideNotification.TEXT_SIZE.DEFAULT_NOTIFICATION)
  self.textSize = v1
  self.textOffsetY = self.textSize * 0.15
  self.lineOffset = self.textSize * 0.3
  local v1, v2 = self:scalePixelToScreenVector(SideNotification.SIZE.NOTIFICATION_MARGIN)
  self.notificationMarginX = v1
  self.notificationMarginY = v2
end
function SideNotification.createBackground(v0, v1)
  local v2, v3 = SideNotification.getBackgroundPosition(1)
  local v5 = unpack(SideNotification.SIZE.SELF)
  local v4, v5 = getNormalizedScreenValues(...)
  local v6 = Overlay.new(v1, v2 - v4, v3 - v5, v4, v5)
  local v9 = GuiUtils.getUVs(SideNotification.UV.DEFAULT_BACKGROUND)
  v6:setUVs(...)
  v9 = unpack(SideNotification.COLOR.DEFAULT_BACKGROUND)
  v6:setColor(...)
  return v6
end
function SideNotification.createComponents(v0, v1)
end
SideNotification.UV = {DEFAULT_BACKGROUND = {16, 840, 152, 1}}
SideNotification.POSITION = {SELF = {0, -80}}
SideNotification.SIZE = {SELF = {264, 144}, NOTIFICATION_MARGIN = {6, 12}}
SideNotification.COLOR = {DEFAULT_BACKGROUND = {1, 1, 1, 1}}
SideNotification.TEXT_SIZE = {DEFAULT_NOTIFICATION = 21}
