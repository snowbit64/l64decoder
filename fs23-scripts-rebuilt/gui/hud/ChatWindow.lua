-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChatWindow = {}
local ChatWindow_mt = Class(ChatWindow, HUDDisplayElement)
ChatWindow.MAX_NUM_MESSAGES = 10
ChatWindow.DISPLAY_DURATION = 15000
ChatWindow.SHADOW_OFFSET_FACTOR = 0.05
function ChatWindow.new(hudAtlasPath, speakerDisplay)
  local backgroundOverlay = ChatWindow.createBackground(hudAtlasPath)
  local v4 = v4:superClass()
  local v3 = v4.new(backgroundOverlay, nil, u0)
  v3.speakerDisplay = speakerDisplay
  v3.maxLines = ChatWindow.MAX_NUM_MESSAGES
  v3.messages = {}
  v3.historyNum = 50
  v3.scrollOffset = 0
  v3.hideTime = 0
  v3.messageOffsetX = 0
  v3.messageOffsetY = 0
  v3.textSize = 0
  v3.textOffsetY = 0
  v3.lineOffset = 0
  v3.shadowOffset = 0
  v3.isMenuVisible = false
  v3.newMessageDuringMenu = false
  v3:storeScaledValues()
  return v3
end
function ChatWindow:setVisible(isVisible, animate)
  if isVisible then
    if not self.isMenuVisible then
      self.newMessageDuringMenu = false
    end
    local v3 = self:getVisible()
    if v3 then
      return
    end
    local v4 = v4:superClass()
    v4.setVisible(self, true, false)
    if animate then
      self.hideTime = ChatWindow.DISPLAY_DURATION
      return
    end
    self.hideTime = -1
    return
  end
  v4 = self:getVisible()
  if v4 then
    -- if ChatWindow.DISPLAY_DURATION then goto L45 end
  end
  self.hideTime = 0
end
function ChatWindow:scrollChatMessages(delta)
  local v8 = self:getHeight()
  local v4 = math.min(self.scrollOffset + delta * self.textSize * 1.1, #self.messages * self.textSize * 2.5 - v8)
  local v2 = math.max(...)
  self.scrollOffset = v2
end
function ChatWindow:addMessage(msg, sender, farmId)
  while true do
    if not (self.historyNum <= #self.messages) then
      break
    end
    table.remove(self.messages, 1)
  end
  local v9 = getDate("%H:%M")
  local v7 = string.format("[%s] %s", v9, sender)
  table.insert(self.messages, {msg = msg, sender = v7, farmId = farmId})
  if self.isMenuVisible then
    local v4 = self:getVisible()
    if not v4 then
      self.newMessageDuringMenu = true
    end
  end
end
function ChatWindow:onMenuVisibilityChange(isMenuVisible)
  self.isMenuVisible = isMenuVisible
  local v2 = self:getVisible()
  if v2 then
    self.newMessageDuringMenu = false
  end
end
function ChatWindow:getHasNewMessages()
  return self.newMessageDuringMenu
end
function ChatWindow:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 <= self.hideTime then
    self.hideTime = self.hideTime - dt
    if self.hideTime <= 0 then
      v3 = v3:superClass()
      v3.setVisible(self, false, false)
    end
  end
end
function ChatWindow:draw()
  local v1 = self:getVisible()
  if v1 then
    if self.isMenuVisible then
      -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000005 -> L248
    end
    if 0 < #self.messages then
      if g_gui.currentGuiName == "ChatDialog" then
        local v2 = v2:superClass()
        v2.draw(self)
      end
      v1, v2 = self:getPosition()
      local v7 = self:getWidth()
      local v8 = self:getHeight()
      setTextClipArea(v1, v2, v1 + v7, v2 + v8)
      v7 = self:getWidth()
      setTextWrapWidth(v7 - self.messageOffsetX * 2)
      setTextAlignment(RenderText.ALIGN_LEFT)
      -- TODO: structure LOP_FORNPREP (pc 75, target 233)
      local v11, v12 = getTextHeight(self.textSize, self.messages[#self.messages].msg)
      setTextBold(false)
      local v14 = unpack(ChatWindow.COLOR.MESSAGE_SHADOW)
      setTextColor(...)
      renderText(v1 + self.messageOffsetX + self.shadowOffset, v2 + self.messageOffsetY - self.scrollOffset + v11 - self.shadowOffset, self.textSize, self.messages[#self.messages].msg)
      v14 = unpack(ChatWindow.COLOR.MESSAGE)
      setTextColor(...)
      renderText(v1 + self.messageOffsetX, v2 + self.messageOffsetY - self.scrollOffset + v11, self.textSize, self.messages[#self.messages].msg)
      setTextBold(true)
      v14 = unpack(ChatWindow.COLOR.MESSAGE_SHADOW)
      setTextColor(...)
      renderText(v1 + self.messageOffsetX + self.shadowOffset, v2 + self.messageOffsetY - self.scrollOffset + v11 + self.textSize - self.shadowOffset, self.textSize, self.messages[#self.messages].sender .. ":")
      if self.messages[#self.messages].farmId ~= 0 then
        v14 = v14:getFarmById(self.messages[#self.messages].farmId)
        if v14 ~= nil then
          local v15 = v14:getColor()
        end
      end
      v15 = unpack(v13)
      setTextColor(...)
      renderText(v3, v5, self.textSize, v9)
      v15 = self:getHeight()
      if v4 + v15 >= v5 + self.textSize * 0.5 then
        -- TODO: structure LOP_FORNLOOP (pc 232, target 76)
      end
      setTextWrapWidth(0)
      setTextClipArea(0, 0, 1, 1)
      setTextBold(false)
    end
  end
end
function ChatWindow:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale)
  self:storeScaledValues()
end
function ChatWindow.getBackgroundPosition(uiScale)
  local v2 = unpack(ChatWindow.POSITION.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  return g_safeFrameMajorOffsetX + v1, g_safeFrameMajorOffsetY + v2
end
function ChatWindow:storeScaledValues()
  local v1, v2 = self:scalePixelToScreenVector(ChatWindow.POSITION.MESSAGE)
  self.messageOffsetX = v1
  self.messageOffsetY = v2
  v1 = self:scalePixelToScreenHeight(ChatWindow.TEXT_SIZE.MESSAGE)
  self.textSize = v1
  self.textOffsetY = self.textSize * 0.15
  self.lineOffset = self.textSize * 0.3
  self.shadowOffset = ChatWindow.SHADOW_OFFSET_FACTOR * self.textSize
end
function ChatWindow.createBackground(hudAtlasPath)
  local v1, v2 = ChatWindow.getBackgroundPosition(1)
  local v4 = unpack(ChatWindow.SIZE.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(hudAtlasPath, v1, v2, v3, v4)
  local v8 = GuiUtils.getUVs(HUD.UV.AREA)
  v5:setUVs(...)
  setOverlayCornerColor(v5.overlayId, 0, 0, 0, 0, 0.9)
  setOverlayCornerColor(v5.overlayId, 1, 0, 0, 0, 0.9)
  setOverlayCornerColor(v5.overlayId, 2, 0, 0, 0, 0.4)
  setOverlayCornerColor(v5.overlayId, 3, 0, 0, 0, 0.4)
  v5.visible = false
  return v5
end
ChatWindow.TEXT_SIZE = {MESSAGE = 16}
ChatWindow.SIZE = {SELF = {560, 380}}
ChatWindow.POSITION = {SELF = {0, 300}, MESSAGE = {8, 8}}
ChatWindow.COLOR = {BACKGROUND = {1, 1, 1, 1}, MESSAGE = {1, 1, 1, 1}, MESSAGE_SHADOW = {0, 0, 0, 0.75}}
