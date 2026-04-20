-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SpeakerDisplay = {}
local SpeakerDisplay_mt = Class(SpeakerDisplay, HUDDisplayElement)
SpeakerDisplay.SHADOW_OFFSET_FACTOR = 0.05
function SpeakerDisplay.new(hudAtlasPath, ingameMap)
  local backgroundOverlay = SpeakerDisplay.createBackground(hudAtlasPath)
  local v4 = v4:superClass()
  local v3 = v4.new(backgroundOverlay, nil, u0)
  v3.ingameMap = ingameMap
  v3.maxNumPlayers = g_serverMaxClientCapacity
  v3.users = {}
  v3.isMenuVisible = true
  v3.isInfoWindowVisible = false
  v3.isSpeedometerVisible = false
  v3.userSpeaking = {}
  v3.userAway = {}
  v3.userTiming = {}
  v3.userVisibility = {}
  v3.currentSpeakers = {}
  v3.lastVoiceState = {}
  v3.mapOffsetX = 0
  v3.mapOffsetY = 0
  v3.lineWidth = 0
  v3.lineHeight = 0
  v3.textLineOffsetX = 0
  v3.textLineOffsetY = 0
  v3.textSize = 0
  v3.textOffsetY = 0
  v3.shadowOffset = 0
  v3:storeScaledValues()
  v3:createComponents(hudAtlasPath)
  return v3
end
function SpeakerDisplay:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function SpeakerDisplay:setUsers(users)
  self.users = users
  self.userSpeaking = {}
  self.userAway = {}
  self.userTiming = {}
  self.userVisibility = {}
  self.currentSpeakers = {}
  self.lastVoiceState = {}
end
function SpeakerDisplay:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  if isMenuVisible then
  end
  self.isMenuVisible = v3
  self.isMenuMapVisible = self.isMenuMapVisible and isMenuVisible
  self:updateVisibility()
end
function SpeakerDisplay:onDetailViewVisibilityChange(isSpeedometerVisible, isInfoWindowVisible)
  self.isSpeedometerVisible = isSpeedometerVisible
  self.isInfoWindowVisible = isInfoWindowVisible
  self:updateVisibility()
end
function SpeakerDisplay:getHeight()
  return #self.currentSpeakers * (self.lineHeight + self.lineSpacing)
end
function SpeakerDisplay:updateSpeakingState(dt)
  for v5, v6 in pairs(self.users) do
    local v7 = v6:getUniqueUserId()
    local v9 = VoiceChatUtil.getIsSpeakerActive(v7)
    if v9 then
      local v10 = v6:getIsBlocked()
    end
    if v8 then
      -- if v9 then goto L28 end
      self.userTiming[v7] = 500
    elseif v9 and not v8 then
      self.userTiming[v7] = 250
    end
    self.userSpeaking[v7] = v9
    if self.userTiming[v7] ~= nil then
      self.userTiming[v7] = self.userTiming[v7] - dt
      if self.userTiming[v7] <= 0 then
        self.userTiming[v7] = nil
        if self.userSpeaking[v7] then
          -- if v0.userVisibility[v7] then goto L80 end
          table.insert(self.currentSpeakers, v6)
          self.userVisibility[v7] = true
        elseif not self.userSpeaking[v7] and self.userVisibility[v7] then
          table.removeElement(self.currentSpeakers, v6)
          self.userVisibility[v7] = false
        end
      end
    end
    if not Platform.isStadia then
      continue
    end
    v10 = voiceChatGetConnectionStatus(v7)
    if self.lastVoiceState ~= v10 then
      if v10 == VoiceChatConnectionStatus.UNAVAILABLE then
        self.userAway[v6] = 2000
        table.removeElement(self.currentSpeakers, v6)
        self.userVisibility[v7] = false
      else
        self.userAway[v6] = nil
      end
      self.lastVoiceState[v7] = v10
    end
    if not (self.userAway[v6] ~= nil) then
      continue
    end
    self.userAway[v6] = self.userAway[v6] - dt
    if not (self.userAway[v6] <= 0) then
      continue
    end
    self.userAway[v6] = nil
  end
end
function SpeakerDisplay:updateVisibility()
  self:setVisible(true)
end
function SpeakerDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateSpeakingState(dt)
  self:updateVisibility()
  if not self.isMenuVisible then
    if self.isSpeedometerVisible then
      local v2, v3 = v2:getPosition()
      local v4 = v4:getHeight()
      self:setPosition(nil, v3 + v4)
      return
    end
    v2 = v2:getDisplayHeight()
    self:setPosition(nil, g_safeFrameMajorOffsetY + v2)
    return
  end
  self:setPosition(nil, g_safeFrameMajorOffsetY)
end
function SpeakerDisplay:draw()
  local dt = self:getVisible()
  if dt and 0 < #self.currentSpeakers then
    new2DLayer()
    local v2 = v2:superClass()
    v2.draw(self)
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_RIGHT)
    dt, v2 = self:getPosition()
    -- TODO: structure LOP_FORNPREP (pc 43, target 56)
    local v11 = self.currentSpeakers[1]:getVoiceMuted()
    function(self, dt, v2, v3)
      local v5 = dt:getNickname()
      local v4 = utf8ToUpper(...)
      local v8 = getTextWidth(u1.textSize, v4)
      local v9 = math.abs(u1.textOffsetX)
      local v12 = unpack(SpeakerDisplay.COLOR.BACKGROUND)
      drawFilledRect(...)
      local v10 = unpack(SpeakerDisplay.COLOR.NAME_SHADOW)
      setTextColor(...)
      renderText(u2 + u1.textOffsetX + u1.shadowOffset, u0 + (self - 1) * (u1.lineHeight + u1.lineSpacing) + (u1.lineHeight - u1.textSize) * 0.5 + u1.textOffsetY - u1.shadowOffset, u1.textSize, v4)
      v10 = unpack(SpeakerDisplay.COLOR.NAME)
      setTextColor(...)
      renderText(u2 + u1.textOffsetX, u0 + (self - 1) * (u1.lineHeight + u1.lineSpacing) + (u1.lineHeight - u1.textSize) * 0.5 + u1.textOffsetY, u1.textSize, v4)
      if v3 then
        renderOverlay(u1.speakerIconOverlayAway.overlayId, u2 - u1.linePadding - u1.iconWidth, u0 + (self - 1) * (u1.lineHeight + u1.lineSpacing) + (u1.lineHeight - u1.iconHeight) * 0.5, u1.iconWidth, u1.iconHeight)
        return
      end
      if v2 then
        renderOverlay(u1.speakerIconOverlayMuted.overlayId, u2 - u1.linePadding - u1.iconWidth, v5 + (u1.lineHeight - u1.iconHeight) * 0.5, u1.iconWidth, u1.iconHeight)
        return
      end
      renderOverlay(u1.speakerIconOverlay.overlayId, u2 - u1.linePadding - u1.iconWidth, v5 + (u1.lineHeight - u1.iconHeight) * 0.5, u1.iconWidth, u1.iconHeight)
    end(1, self.currentSpeakers[1], v11, false)
    -- TODO: structure LOP_FORNLOOP (pc 55, target 44)
    for v8, v9 in pairs(self.userAway) do
      local v13 = v8:getVoiceMuted()
      v3(v4 + 1, v8, v13, true)
    end
  end
end
function SpeakerDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale)
  self:storeScaledValues()
end
function SpeakerDisplay.getBackgroundPosition(uiScale)
  local v2 = unpack(SpeakerDisplay.POSITION.SELF)
  local dt, v2 = getNormalizedScreenValues(...)
  return 1 - g_safeFrameMajorOffsetX + dt, g_safeFrameMajorOffsetY + v2
end
function SpeakerDisplay:storeScaledValues()
  local dt, v2 = self:scalePixelToScreenVector(SpeakerDisplay.POSITION.SELF)
  self.positionXHUD = dt
  self.positionYHUD = v2
  dt, v2 = self:scalePixelToScreenVector(SpeakerDisplay.POSITION.SELF_MENU)
  self.positionXMenu = dt
  self.positionYMenu = v2
  dt, v2 = self:scalePixelToScreenVector(SpeakerDisplay.SIZE.LINE)
  self.lineWidth = dt
  self.lineHeight = v2
  dt = self:scalePixelToScreenHeight(SpeakerDisplay.POSITION.LINE_SPACING[2])
  self.lineSpacing = dt
  dt = self:scalePixelToScreenWidth(SpeakerDisplay.POSITION.LINE_PADDING[1])
  self.linePadding = dt
  dt, v2 = self:scalePixelToScreenVector(SpeakerDisplay.SIZE.SPEAKER_ICON)
  self.iconWidth = dt
  self.iconHeight = v2
  dt, v2 = self:scalePixelToScreenVector(SpeakerDisplay.POSITION.NAME)
  self.textOffsetX = dt
  self.textOffsetY = v2
  dt = self:scalePixelToScreenHeight(SpeakerDisplay.TEXT_SIZE.NAME)
  self.textSize = dt
  self.shadowOffset = SpeakerDisplay.SHADOW_OFFSET_FACTOR * self.textSize
end
function SpeakerDisplay.createBackground(hudAtlasPath)
  local dt, v2 = SpeakerDisplay.getBackgroundPosition(1)
  local v4 = unpack(SpeakerDisplay.SIZE.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  return Overlay.new(nil, dt, v2, v3, v4)
end
function SpeakerDisplay:createComponents(hudAtlasPath)
  local v2, v3 = self:scalePixelToScreenVector(SpeakerDisplay.SIZE.SPEAKER_ICON)
  local v4 = Overlay.new(hudAtlasPath, 0, 0, v2, v3)
  local v7 = GuiUtils.getUVs(SpeakerDisplay.UV.SPEAKER_ICON)
  v4:setUVs(...)
  v7 = unpack(SpeakerDisplay.COLOR.SPEAKER_ICON)
  v4:setColor(...)
  self.speakerIconOverlay = v4
  local v5 = Overlay.new(hudAtlasPath, 0, 0, v2, v3)
  v7 = GuiUtils.getUVs(SpeakerDisplay.UV.SPEAKER_ICON_MUTED)
  v5:setUVs(...)
  v7 = unpack(SpeakerDisplay.COLOR.SPEAKER_ICON_MUTED)
  v5:setColor(...)
  self.speakerIconOverlayMuted = v5
  v5 = Overlay.new(hudAtlasPath, 0, 0, v2, v3)
  v7 = GuiUtils.getUVs(SpeakerDisplay.UV.SPEAKER_ICON_AWAY)
  v5:setUVs(...)
  v7 = unpack(SpeakerDisplay.COLOR.SPEAKER_ICON_AWAY)
  v5:setColor(...)
  self.speakerIconOverlayAway = v5
end
SpeakerDisplay.UV = {LINE = {8, 8, 2, 2}, SPEAKER_ICON = {102, 102, 36, 36}, SPEAKER_ICON_MUTED = {317, 146, 36, 36}, SPEAKER_ICON_AWAY = {257, 52, 36, 36}}
SpeakerDisplay.TEXT_SIZE = {NAME = 16}
SpeakerDisplay.SIZE = {SELF = {290, 168}, LINE = {290, 28}, SPEAKER_ICON = {24, 24}}
SpeakerDisplay.POSITION = {SELF = {0, 200}, SELF_MENU = {0, 0}, LINE_SPACING = {0, 6}, LINE_PADDING = {4, 0}, SPEAKER_ICON = {0, 0}, NAME = {-36, 0}}
SpeakerDisplay.COLOR = {BACKGROUND = {0, 0, 0, 0.75}, SPEAKER_ICON = {1, 1, 1, 0.5}, SPEAKER_ICON_MUTED = {1, 1, 1, 0.5}, SPEAKER_ICON_AWAY = {1, 1, 1, 0.5}, NAME = {1, 1, 1, 1}, NAME_SHADOW = {0, 0, 0, 0.75}}
