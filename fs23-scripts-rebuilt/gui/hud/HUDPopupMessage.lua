-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDPopupMessage = {}
local HUDPopupMessage_mt = Class(HUDPopupMessage, HUDDisplayElement)
HUDPopupMessage.INPUT_CONTEXT_NAME = "POPUP_MESSAGE"
HUDPopupMessage.MAX_PENDING_MESSAGE_COUNT = 8
HUDPopupMessage.MAX_INPUT_ROW_COUNT = 8
HUDPopupMessage.MIN_DURATION = 1000
HUDPopupMessage.DURATION_PER_CHARACTER = 80
HUDPopupMessage.MAX_DURATION = 300000
function HUDPopupMessage.new(hudAtlasPath, l10n, inputManager, inputDisplayManager, ingameMap, guiSoundPlayer)
  local backgroundOverlay = HUDPopupMessage.createBackground(hudAtlasPath)
  local v8 = v8:superClass()
  local v7 = v8.new(backgroundOverlay, nil, u0)
  v7.l10n = l10n
  v7.inputManager = inputManager
  v7.inputDisplayManager = inputDisplayManager
  v7.ingameMap = ingameMap
  v7.guiSoundPlayer = guiSoundPlayer
  v7.pendingMessages = {}
  v7.isCustomInputActive = false
  v8 = v8:getInputHelpMode()
  v7.lastInputMode = v8
  v7.inputRows = {}
  v7.inputGlyphs = {}
  v7.skipGlyph = nil
  v7.isMenuVisible = false
  v7.time = 0
  v7.isGamePaused = false
  v7:storeScaledValues()
  v7:createComponents(hudAtlasPath)
  return v7
end
function HUDPopupMessage:delete()
  if self.blurAreaActive then
    v1:popArea()
    self.blurAreaActive = false
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function HUDPopupMessage:showMessage(title, text, duration, controls, callback, target)
  if duration == 0 then
    local v9 = string.len(text)
  elseif duration < 0 then
  end
  while true do
    if not (HUDPopupMessage.MAX_PENDING_MESSAGE_COUNT < #self.pendingMessages) then
      break
    end
    table.remove(self.pendingMessages, 1)
  end
  local v8 = Utils.getNoNil(controls, {})
  if HUDPopupMessage.MAX_INPUT_ROW_COUNT < #{isDialog = false, title = title, message = text, duration = duration, controls = v8, callback = callback, target = target}.controls then
    -- TODO: structure LOP_FORNPREP (pc 81, target 89)
    table.remove({isDialog = false, title = title, message = text, duration = duration, controls = v8, callback = callback, target = target}.controls, #{isDialog = false, title = title, message = text, duration = duration, controls = v8, callback = callback, target = target}.controls)
    -- TODO: structure LOP_FORNLOOP (pc 88, target 82)
  end
  table.insert(self.pendingMessages, v7)
end
function HUDPopupMessage:setPaused(isPaused)
  self.isGamePaused = isPaused
end
function HUDPopupMessage:getVisible()
  local text = text:superClass()
  local title = text.getVisible(self)
  if title and self.currentMessage == nil then
  end
  return title
end
HUDDisplayElement.getHidingTranslation = function(self)
  local callback = self:getHeight()
  return 0, -callback - g_safeFrameOffsetY - 0.01
end
function HUDPopupMessage:onMenuVisibilityChange(isMenuVisible)
  self.isMenuVisible = isMenuVisible
end
function HUDPopupMessage:assignCurrentMessage(message)
  self.time = 0
  self.currentMessage = message
  local controls = self:getTitleHeight()
  local callback = self:getTextHeight()
  controls = self:getInputRowsHeight()
  if 0 < #message.controls then
  end
  if not g_isServerStreamingVersion then
  end
  callback = self:getWidth()
  local target = math.max(self.minHeight, text)
  self:setDimension(...)
  self:updateButtonGlyphs()
end
function HUDPopupMessage:getTitleHeight()
  if self.currentMessage ~= nil then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextBold(false)
    local controls = self:getWidth()
    setTextWrapWidth(controls - 2 * self.borderPaddingX)
    local text = utf8ToUpper(self.currentMessage.title)
    local duration, controls = getTextHeight(self.titleTextSize, text)
    setTextWrapWidth(0)
  end
  return title
end
function HUDPopupMessage:getTextHeight()
  if self.currentMessage ~= nil then
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
    local controls = self:getWidth()
    setTextWrapWidth(controls - 2 * self.borderPaddingX)
    setTextLineHeightScale(HUDPopupMessage.TEXT_LINE_HEIGHT_SCALE)
    local text = getTextHeight(self.textSize, self.currentMessage.message)
    setTextWrapWidth(0)
    setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
  end
  return title
end
function HUDPopupMessage:getInputRowsHeight()
  if self.currentMessage ~= nil then
  end
  return title
end
function HUDPopupMessage:animateHide()
  local text = text:superClass()
  text.animateHide(self)
  title:popArea()
  self.blurAreaActive = false
  title:addCallback(self.finishMessage)
end
function HUDPopupMessage:startMessage()
  title:setAllowToggle(false)
  title:turnSmall()
  self:assignCurrentMessage(self.pendingMessages[1])
  table.remove(self.pendingMessages, 1)
end
function HUDPopupMessage:finishMessage()
  title:setAllowToggle(true)
  if self.currentMessage ~= nil and self.currentMessage.callback ~= nil then
    if self.currentMessage.target ~= nil then
      self.currentMessage.callback(self.currentMessage.target)
    else
      self.currentMessage.callback(self)
    end
  end
  self.currentMessage = nil
end
function HUDPopupMessage:update(dt)
  if not self.isMenuVisible then
    local duration = duration:superClass()
    duration.update(self, dt)
    if not self.isGamePaused then
      local text = text:getIsSleeping()
      if not text then
        self.time = self.time + dt
        self:updateCurrentMessage()
      end
    end
    text = self:getVisible()
    if text then
      text = text:getInputHelpMode()
      if text ~= self.lastInputMode then
        self.lastInputMode = text
        self:updateButtonGlyphs()
      end
    end
  end
end
function HUDPopupMessage:updateCurrentMessage()
  if self.currentMessage ~= nil then
    -- if v0.currentMessage.duration >= v0.time then goto L44 end
    self.time = -math.huge
    self:setVisible(false, true)
    return
  end
  if 0 < #self.pendingMessages then
    self:startMessage()
    self:setVisible(true, true)
    title:addCallback(function()
      local self, title = self:getPosition()
      local target = target:getWidth()
      local v7 = v7:getHeight()
      text:pushArea(...)
      u0.blurAreaActive = true
    end)
  end
end
function HUDPopupMessage:updateButtonGlyphs()
  if self.skipGlyph ~= nil then
    local controls = controls:getText(HUDPopupMessage.L10N_SYMBOL.BUTTON_OK)
    title:setAction(InputAction.SKIP_MESSAGE_BOX, controls, self.skipTextSize, true, false)
  end
  if self.currentMessage ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 37, target 94)
    if HUDPopupMessage.MAX_INPUT_ROW_COUNT - 1 + 1 > #self.currentMessage.controls then
    end
    v7:setVisible(true)
    if true then
      local v10 = self.currentMessage.controls[title]:getActionNames()
      v8:setActions(v10, "", self.textSize, false, false)
      v8:setKeyboardGlyphColor(HUDPopupMessage.COLOR.INPUT_GLYPH)
    end
    -- TODO: structure LOP_FORNLOOP (pc 93, target 38)
  end
end
function HUDPopupMessage:setInputActive(isActive)
  if not self.isCustomInputActive and isActive then
    text:setContext(HUDPopupMessage.INPUT_CONTEXT_NAME, true, false)
    local text, duration = text:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onConfirmMessage, false, true, false, true)
    controls:setActionEventTextVisibility(duration, false)
    local controls, callback = controls:registerActionEvent(InputAction.SKIP_MESSAGE_BOX, self, self.onConfirmMessage, false, true, false, true)
    controls:setActionEventTextVisibility(callback, false)
    self.isCustomInputActive = true
    return
  end
  if self.isCustomInputActive and not isActive then
    text:removeActionEventsByTarget(self)
    text:revertContext(true)
    self.isCustomInputActive = false
  end
end
function HUDPopupMessage:onConfirmMessage(actionName, inputValue)
  local duration = duration:getFinished()
  if duration then
    self:setVisible(false, true)
  end
end
function HUDPopupMessage:setVisible(isVisible, animate)
  self:setInputActive(isVisible)
  local controls = controls:superClass()
  controls.setVisible(self, isVisible, animate)
end
function HUDPopupMessage:draw()
  if not self.isMenuVisible then
    local title = self:getVisible()
    if title and self.currentMessage ~= nil then
      local text = text:superClass()
      text.draw(self)
      title, text = self:getPosition()
      local width = self:getWidth()
      local height = self:getHeight()
      local target = unpack(HUDPopupMessage.COLOR.TITLE)
      setTextColor(...)
      setTextBold(true)
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextWrapWidth(width - 2 * self.borderPaddingX)
      if self.currentMessage.title ~= "" then
        target = utf8ToUpper(self.currentMessage.title)
        renderText(title + width * 0.5, text + height - self.borderPaddingY - self.titleTextSize, self.titleTextSize, target)
      end
      setTextBold(false)
      local v7 = unpack(HUDPopupMessage.COLOR.TEXT)
      setTextColor(...)
      setTextAlignment(RenderText.ALIGN_LEFT)
      setTextLineHeightScale(HUDPopupMessage.TEXT_LINE_HEIGHT_SCALE)
      renderText(title + self.borderPaddingX, width - self.textSize + self.textOffsetY, self.textSize, self.currentMessage.message)
      target = getTextHeight(self.textSize, self.currentMessage.message)
      v7 = unpack(HUDPopupMessage.COLOR.SKIP_TEXT)
      setTextColor(...)
      setTextAlignment(RenderText.ALIGN_RIGHT)
      -- TODO: structure LOP_FORNPREP (pc 185, target 209)
      renderText(title + duration - self.borderPaddingX + self.inputRowTextX, width - self.textSize + self.textOffsetY - target + self.inputRowsOffsetY - self.inputRowHeight - self.textSize + self.inputRowTextY, self.textSize, self.currentMessage.controls[1].textRight)
      -- TODO: structure LOP_FORNLOOP (pc 208, target 186)
      setTextWrapWidth(0)
      setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
    end
  end
end
function HUDPopupMessage.getBackgroundPosition(uiScale)
  local text = unpack(HUDPopupMessage.POSITION.SELF)
  local title, text = getNormalizedScreenValues(...)
  return 0.5 + title * uiScale, g_safeFrameOffsetY + text * uiScale
end
function HUDPopupMessage:setScale(uiScale)
  local duration = duration:superClass()
  duration.setScale(self, uiScale)
  self:storeScaledValues()
  local text, duration = HUDPopupMessage.getBackgroundPosition(uiScale)
  local width = self:getWidth()
  self:setPosition(text - width * 0.5, duration)
end
function HUDPopupMessage.setDimension(v0, title, text)
  local controls = controls:superClass()
  controls.setDimension(v0, title, text)
end
function HUDPopupMessage:storeScaledValues()
  local title, text = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.SELF)
  self.minWidth = title
  self.minHeight = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.MESSAGE_TEXT)
  self.textOffsetX = title
  self.textOffsetY = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.INPUT_ROWS)
  self.inputRowsOffsetX = title
  self.inputRowsOffsetY = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.SKIP_BUTTON)
  self.skipButtonOffsetX = title
  self.skipButtonOffsetY = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.SKIP_BUTTON)
  self.skipButtonWidth = title
  self.skipButtonHeight = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.INPUT_ROW)
  self.inputRowWidth = title
  self.inputRowHeight = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.BORDER_PADDING)
  self.borderPaddingX = title
  self.borderPaddingY = text
  title, text = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.INPUT_TEXT)
  self.inputRowTextX = title
  self.inputRowTextY = text
  title = self:scalePixelToScreenHeight(HUDPopupMessage.TEXT_SIZE.TITLE)
  self.titleTextSize = title
  title = self:scalePixelToScreenHeight(HUDPopupMessage.TEXT_SIZE.TEXT)
  self.textSize = title
  title = self:scalePixelToScreenHeight(HUDPopupMessage.TEXT_SIZE.SKIP_TEXT)
  self.skipTextSize = title
end
function HUDPopupMessage.createBackground(hudAtlasPath)
  local title, text = HUDPopupMessage.getBackgroundPosition(1)
  local controls = unpack(HUDPopupMessage.SIZE.SELF)
  local duration, controls = getNormalizedScreenValues(...)
  local callback = Overlay.new(hudAtlasPath, title - duration * 0.5, text, duration, controls)
  local v8 = GuiUtils.getUVs(HUDPopupMessage.UV.BACKGROUND)
  callback:setUVs(...)
  v8 = unpack(HUDPopupMessage.COLOR.BACKGROUND)
  callback:setColor(...)
  return callback
end
function HUDPopupMessage:createComponents(hudAtlasPath)
  local text, duration = self:getPosition()
  local baseWidth = self:getWidth()
  local callback, target = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.INPUT_ROW)
  -- TODO: structure LOP_FORNPREP (pc 22, target 51)
  local v13, v14, v15 = self:createInputRow(hudAtlasPath, text, duration + target)
  self.inputRows[HUDPopupMessage.MAX_INPUT_ROW_COUNT - 1 + 1] = v13
  self.inputGlyphs[HUDPopupMessage.MAX_INPUT_ROW_COUNT - 1 + 1] = v14
  self:addChild(v13)
  -- TODO: structure LOP_FORNLOOP (pc 50, target 23)
  if not g_isServerStreamingVersion then
    local v8, v9 = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.SKIP_BUTTON)
    local v10, v11 = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.INPUT_GLYPH)
    local v12 = InputGlyphElement.new(self.inputDisplayManager, v10, v11)
    v12:setPosition(text + (baseWidth - v10) * 0.5 + v8, duration - v9)
    local v16 = v16:getText(HUDPopupMessage.L10N_SYMBOL.BUTTON_OK)
    v12:setAction(InputAction.SKIP_MESSAGE_BOX, v16, self.skipTextSize, true, false)
    self.skipGlyph = v12
    self:addChild(v12)
  end
end
function HUDPopupMessage:createInputRow(hudAtlasPath, posX, posY)
  local overlay = Overlay.new(hudAtlasPath, posX, posY, self.inputRowWidth, self.inputRowHeight)
  local v7 = GuiUtils.getUVs(HUDPopupMessage.UV.BACKGROUND)
  overlay:setUVs(...)
  v7 = unpack(HUDPopupMessage.COLOR.INPUT_ROW)
  overlay:setColor(...)
  local callback = HUDElement.new(overlay)
  local target = callback:getHeight()
  local v7, v8 = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.INPUT_GLYPH)
  local v9 = InputGlyphElement.new(self.inputDisplayManager, v7, v8)
  local v10, v11 = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.INPUT_GLYPH)
  v9:setPosition(posX + self.borderPaddingX + v10, posY + (target - v8) * 0.5 + v11)
  callback:addChild(v9)
  local v14, v15 = self:scalePixelToScreenVector(HUDPopupMessage.SIZE.SEPARATOR)
  local v16 = math.max(v15, HUDPopupMessage.SIZE.SEPARATOR[2] / g_screenHeight)
  local v16, v17 = self:scalePixelToScreenVector(HUDPopupMessage.POSITION.SEPARATOR)
  v16 = Overlay.new(hudAtlasPath, posX + v16, posY + v17, v14, v16)
  local v18 = GuiUtils.getUVs(GameInfoDisplay.UV.SEPARATOR)
  v16:setUVs(...)
  v18 = unpack(GameInfoDisplay.COLOR.SEPARATOR)
  v16:setColor(...)
  v16 = HUDElement.new(v16)
  callback:addChild(v16)
  return callback, v9, posY + target
end
HUDPopupMessage.UV = {BACKGROUND = {8, 8, 2, 2}}
HUDPopupMessage.SIZE = {SELF = {750, 165}, INPUT_ROW = {750, 54}, SKIP_BUTTON = {48, 48}, BORDER_PADDING = {45, 30}, INPUT_GLYPH = {32, 32}, SEPARATOR = {750, 1}}
HUDPopupMessage.POSITION = {SELF = {0, 0}, MESSAGE_TEXT = {0, -16}, INPUT_ROWS = {0, -16}, SKIP_BUTTON = {0, -12}, INPUT_GLYPH = {0, 0}, INPUT_TEXT = {0, 3}, SEPARATOR = {0, 0}}
HUDPopupMessage.TEXT_LINE_HEIGHT_SCALE = 1.5
HUDPopupMessage.TEXT_SIZE = {TITLE = 20, TEXT = 16, SKIP_TEXT = 18}
HUDPopupMessage.COLOR = {BACKGROUND = {0, 0, 0, 0.54}, INPUT_ROW = {0.0075, 0.0075, 0.0075, 0}, SEPARATOR = {0.0382, 0.0382, 0.0382, 1}, TITLE = {1, 1, 1, 1}, TEXT = {0.9, 0.9, 0.9, 1}, SKIP_TEXT = {1, 1, 1, 1}, INPUT_GLYPH = {1, 1, 1, 1}}
HUDPopupMessage.L10N_SYMBOL = {BUTTON_OK = "button_ok"}
