-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AchievementMessage = {}
local AchievementMessage_mt = Class(AchievementMessage, HUDDisplayElement)
function AchievementMessage.new(hudAtlasPath, inputManager, guiSoundPlayer, contextActionDisplay)
  AchievementMessage.initializeDisplayComponentValues()
  local backgroundOverlay = AchievementMessage.createBackground()
  local v6 = v6:superClass()
  local v5 = v6.new(backgroundOverlay, nil, u0)
  v5.inputManager = inputManager
  v5.guiSoundPlayer = guiSoundPlayer
  v5.contextActionDisplay = contextActionDisplay
  v5.messages = {}
  v5.currentMessage = nil
  v5.message = ""
  v5.queueShow = false
  v5.time = 0
  v5.playedSample = false
  v5.labelTextOffsetX = 0
  v5.labelTextOffsetY = 0
  v5.labelTextSize = 0
  v5.titleTextOffsetX = 0
  v5.titleTextOffsetY = 0
  v5.titleTextSize = 0
  v5.messageTextOffsetX = 0
  v5.messageTextOffsetY = 0
  v5.messageTextSize = 0
  v5:createComponents(hudAtlasPath)
  return v5
end
function AchievementMessage:onMenuVisibilityChange(isVisible)
  self.isMenuVisible = isVisible
end
function AchievementMessage:showMessage(title, description, iconFilename, iconUVs, duration)
  if g_dedicatedServer ~= nil then
    return
  end
  table.insert(self.messages, {title = title, description = description, iconFilename = iconFilename, iconUVs = iconUVs, duration = duration})
  if self.currentMessage == nil then
    self:nextMessage()
  end
end
function AchievementMessage:nextMessage()
  if self.currentMessage == nil and 0 < #self.messages then
    self.title = self.messages[1].title
    self.message = self.messages[1].description
    v2:setImage(self.messages[1].iconFilename)
    v2:setUVs(self.messages[1].iconUVs)
    self.visibleTime = self.messages[1].duration
    self.time = 0
    self.playedSample = false
    self.queueShow = true
    table.remove(self.messages, 1)
    self.currentMessage = self.messages[1]
  end
end
function AchievementMessage:getAllowDisplay()
  if self.isMenuVisible then
    return false
  end
  local v1 = v1:getIsGuiVisible()
  if v1 then
    return false
  end
  if self.contextActionDisplay ~= nil then
    v1 = v1:getVisible()
    if v1 then
      return false
    end
  end
  return true
end
function AchievementMessage:update(dt)
  local v2 = self:getAllowDisplay()
  if v2 then
    if self.queueShow then
      self:beginShowMessage()
      self.queueShow = false
    end
    v2 = self:getVisible()
    if v2 then
      local v3 = v3:superClass()
      v3.update(self, dt)
      if not self.playedSample then
        v2:playSample(GuiSoundPlayer.SOUND_SAMPLES.ACHIEVEMENT)
        self.playedSample = true
      end
      self.time = self.time + dt
      if self.visibleTime < self.time then
        v2 = v2:getFinished()
        if v2 then
          self:hideMessage()
          self.time = 0
        end
      end
    end
  end
end
function AchievementMessage:beginShowMessage()
  self:animateShow()
  local v1, v2 = v1:registerActionEvent(InputAction.SKIP_MESSAGE_BOX, self, self.hideMessage, false, true, false, true)
  v3:setActionEventTextVisibility(v2, false)
  local v3, v4 = v3:registerActionEvent(InputAction.MENU_ACCEPT, self, self.hideMessage, false, true, false, true)
  v3:setActionEventTextVisibility(v4, false)
end
function AchievementMessage:hideMessage()
  local v1 = v1:getFinished()
  if v1 then
    self:animateHide()
  end
  v1:removeActionEventsByTarget(self)
end
function AchievementMessage:onAnimateVisibilityFinished(isVisible)
  local v3 = v3:superClass()
  v3.onAnimateVisibilityFinished(self, isVisible)
  if not isVisible then
    self.currentMessage = nil
    self:nextMessage()
  end
end
function AchievementMessage:draw()
  local v1 = self:getVisible()
  if v1 then
    v1 = self:getAllowDisplay()
    if v1 then
      local v2 = v2:superClass()
      v2.draw(self)
      v1, v2 = self:getPosition()
      local v4 = self:getHeight()
      local v5 = v5:getText("message_achievementUnlocked")
      v4 = utf8ToUpper(...)
      setTextAlignment(RenderText.ALIGN_LEFT)
      setTextBold(false)
      local v6 = unpack(AchievementMessage.COLOR.ACHIEVEMENT_TEXT)
      setTextColor(...)
      renderText(v1 + self.labelTextOffsetX, v2 + v4 + self.labelTextOffsetY, self.labelTextSize, v4)
      setTextBold(true)
      v6 = unpack(AchievementMessage.COLOR.TITLE_TEXT)
      setTextColor(...)
      renderText(v1 + self.titleTextOffsetX, v2 + v4 + self.titleTextOffsetY, self.titleTextSize, self.title)
      setTextBold(false)
      v6 = unpack(AchievementMessage.COLOR.MESSAGE_TEXT)
      setTextColor(...)
      setTextWrapWidth(self.messageTextWidth)
      renderText(v1 + self.messageTextOffsetX, v2 + v4 + self.messageTextOffsetY, self.messageTextSize, self.message)
      setTextWrapWidth(0)
      setTextLineBounds(0, 0)
    end
  end
end
function AchievementMessage:storeScaledValues()
  local v1, v2 = self:scalePixelToScreenVector(AchievementMessage.POSITION.ACHIEVEMENT_TEXT)
  self.labelTextOffsetX = v1
  self.labelTextOffsetY = v2
  v1 = self:scalePixelToScreenHeight(AchievementMessage.TEXT_SIZE.ACHIEVEMENT)
  self.labelTextSize = v1
  v1, v2 = self:scalePixelToScreenVector(AchievementMessage.POSITION.TITLE_TEXT)
  self.titleTextOffsetX = v1
  self.titleTextOffsetY = v2
  v1 = self:scalePixelToScreenHeight(AchievementMessage.TEXT_SIZE.TITLE)
  self.titleTextSize = v1
  v1, v2 = self:scalePixelToScreenVector(AchievementMessage.POSITION.MESSAGE_TEXT)
  self.messageTextOffsetX = v1
  self.messageTextOffsetY = v2
  v1 = self:scalePixelToScreenHeight(AchievementMessage.TEXT_SIZE.MESSAGE)
  self.messageTextSize = v1
  v1 = self:scalePixelToScreenWidth(AchievementMessage.SIZE.MESSAGE[1])
  self.messageTextWidth = v1
end
function AchievementMessage:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  local v5 = self:getWidth()
  local v3, v4 = AchievementMessage.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  self:storeScaledValues()
end
function AchievementMessage.getBackgroundPosition(scale, width)
  local v3 = unpack(AchievementMessage.POSITION.SELF)
  local v2, v3 = getNormalizedScreenValues(...)
  return 0.5 - width * 0.5 - v2 * scale, g_safeFrameOffsetY - v3 * scale
end
function AchievementMessage.createBackground(v0)
  local v2 = unpack(AchievementMessage.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3, v4 = AchievementMessage.getBackgroundPosition(1, v1)
  local v5 = Overlay.new(g_baseUIFilename, v3, v4, v1, v2)
  v5:setUVs(g_colorBgUVs)
  local v8 = unpack(AchievementMessage.COLOR.BACKGROUND)
  v5:setColor(...)
  return v5
end
function AchievementMessage:createComponents(hudAtlasPath)
  local v2, v3 = self:getPosition()
  local v4 = self:createIcon(v2, v3)
  self.iconElement = v4
end
function AchievementMessage:createIcon(leftX, bottomY)
  local v3, v4 = self:scalePixelToScreenVector(AchievementMessage.SIZE.ICON)
  local v5, v6 = self:scalePixelToScreenVector(AchievementMessage.POSITION.ICON)
  local v12 = self:getHeight()
  local v9 = Overlay.new(nil, leftX + v5, bottomY + (v12 - v4) * 0.5 + v6, v3, v4)
  local v10 = HUDElement.new(v9)
  self:addChild(v10)
  return v10
end
function AchievementMessage.initializeDisplayComponentValues()
  if Platform.isMobile then
    AchievementMessage.SIZE = AchievementMessage.SIZE_MOBILE
    AchievementMessage.TEXT_SIZE = AchievementMessage.TEXT_SIZE_MOBILE
    AchievementMessage.POSITION = AchievementMessage.POSITION_MOBILE
  end
end
AchievementMessage.SIZE = {SELF = {750, 102}, ICON = {84, 84}, MESSAGE = {500, 0}}
AchievementMessage.TEXT_SIZE = {ACHIEVEMENT = 22.5, TITLE = 30, MESSAGE = 19}
AchievementMessage.POSITION = {SELF = {0, 0}, ACHIEVEMENT_TEXT = {0, 6}, ICON = {12, 0}, TITLE_TEXT = {120, -35}, MESSAGE_TEXT = {120, -65}}
AchievementMessage.COLOR = {ICON = {1, 1, 1, 1}, ACHIEVEMENT_TEXT = {1, 1, 1, 1}, TITLE_TEXT = {0.0003, 0.5647, 0.9822, 1}, MESSAGE_TEXT = {1, 1, 1, 1}, BACKGROUND = {0, 0, 0, 0.75}}
AchievementMessage.SIZE_MOBILE = {SELF = {1000, 150}, ICON = {100, 100}, MESSAGE = {700, 0}}
AchievementMessage.TEXT_SIZE_MOBILE = {ACHIEVEMENT = 35, TITLE = 40, MESSAGE = 32}
AchievementMessage.POSITION_MOBILE = {SELF = {0, -200}, ACHIEVEMENT_TEXT = {0, 6}, ICON = {20, 0}, TITLE_TEXT = {140, -60}, MESSAGE_TEXT = {140, -105}}
