-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDPopupMessageMobile = {}
local v0 = Class(HUDPopupMessageMobile, HUDDisplayElement)
HUDPopupMessageMobile.INPUT_CONTEXT_NAME = "POPUP_MESSAGE"
HUDPopupMessageMobile.MAX_PENDING_MESSAGE_COUNT = 8
HUDPopupMessageMobile.MAX_INPUT_ROW_COUNT = 8
HUDPopupMessageMobile.MIN_DURATION = 1000
HUDPopupMessageMobile.DURATION_PER_CHARACTER = 80
HUDPopupMessageMobile.MAX_DURATION = 300000
function HUDPopupMessageMobile.new(v0, v1)
  local v2 = HUDPopupMessageMobile.createBackground(v0)
  local v4 = v4:superClass()
  local v3 = v4.new(v2, nil, u0)
  v3.ingameMap = v1
  v3.pendingMessages = {}
  v3.isCustomInputActive = false
  v4 = v4:getInputHelpMode()
  v3.lastInputMode = v4
  v3.inputRows = {}
  v3.inputGlyphs = {}
  v3.continueGlyph = nil
  v3.isMenuVisible = false
  v3.time = 0
  v3.isGamePaused = false
  v4 = v4:getText("introduction_continueTextTouch")
  v3.continueText = v4
  v3:storeScaledValues()
  v3:createComponents(v0)
  return v3
end
function HUDPopupMessageMobile:delete()
  if self.blurAreaActive then
    v1:popArea()
    self.blurAreaActive = false
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function HUDPopupMessageMobile:showMessage(v1, v2, v3, v4, v5, v6)
  if v3 == 0 then
    local v9 = string.len(v2)
  elseif v3 < 0 then
  end
  while true do
    if not (HUDPopupMessageMobile.MAX_PENDING_MESSAGE_COUNT < #self.pendingMessages) then
      break
    end
    table.remove(self.pendingMessages, 1)
  end
  local v8 = Utils.getNoNil(v4, {})
  if HUDPopupMessageMobile.MAX_INPUT_ROW_COUNT < #{isDialog = false, title = v1, message = v2, duration = v3, controls = v8, callback = v5, target = v6}.controls then
    -- TODO: structure LOP_FORNPREP (pc 81, target 89)
    table.remove({isDialog = false, title = v1, message = v2, duration = v3, controls = v8, callback = v5, target = v6}.controls, #{isDialog = false, title = v1, message = v2, duration = v3, controls = v8, callback = v5, target = v6}.controls)
    -- TODO: structure LOP_FORNLOOP (pc 88, target 82)
  end
  table.insert(self.pendingMessages, v7)
end
function HUDPopupMessageMobile:setPaused(v1)
  self.isGamePaused = v1
end
function HUDPopupMessageMobile:getVisible()
  local v2 = v2:superClass()
  local v1 = v2.getVisible(self)
  if v1 and self.currentMessage == nil then
  end
  return v1
end
HUDDisplayElement.getHidingTranslation = function(self)
  local v5 = self:getHeight()
  return 0, -v5 - g_safeFrameOffsetY - 0.01
end
function HUDPopupMessageMobile:onMenuVisibilityChange(v1)
  self.isMenuVisible = v1
end
function HUDPopupMessageMobile:assignCurrentMessage(v1)
  self.time = 0
  self.currentMessage = v1
  if g_touchHandler ~= nil then
    v2:setCustomContext("guidedTour", true)
    v2:registerTouchArea(0, 0, 1, 1, 0, 0, TouchHandler.TRIGGER_UP, self.onConfirmMessage, self)
  end
  local v3 = v3:getInputHelpMode()
  if v3 ~= GS_INPUT_HELP_MODE_TOUCH then
  end
  v3:setVisible(not true)
  self:setCurrentMessageHeight()
  self:updateButtonGlyphs()
end
function HUDPopupMessageMobile:setCurrentMessageHeight()
  local v3 = self:getTitleHeight()
  local v4 = self:getTextHeight()
  v3 = self:getInputRowsHeight()
  if 0 < #self.currentMessage.controls then
  end
  v4 = self:getWidth()
  local v5 = math.max(self.minHeight, v1 + self.continueButtonHeight)
  self:setDimension(...)
end
function HUDPopupMessageMobile:getTitleHeight()
  if self.currentMessage ~= nil then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextBold(false)
    local v4 = self:getWidth()
    setTextWrapWidth(v4 - 2 * self.borderPaddingX)
    local v2 = utf8ToUpper(self.currentMessage.title)
    local v3, v4 = getTextHeight(self.titleTextSize, v2)
    setTextWrapWidth(0)
  end
  return v1
end
function HUDPopupMessageMobile:getTextHeight()
  if self.currentMessage ~= nil then
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
    local v4 = self:getWidth()
    setTextWrapWidth(v4 - 2 * self.borderPaddingX)
    setTextLineHeightScale(HUDPopupMessageMobile.TEXT_LINE_HEIGHT_SCALE)
    local v2 = getTextHeight(self.textSize, self.currentMessage.message)
    setTextWrapWidth(0)
    setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
  end
  return v1
end
function HUDPopupMessageMobile:getInputRowsHeight()
  if self.currentMessage ~= nil then
  end
  return v1
end
function HUDPopupMessageMobile:animateHide()
  local v2 = v2:superClass()
  v2.animateHide(self)
  v1:popArea()
  self.blurAreaActive = false
  v1:addCallback(self.finishMessage)
end
function HUDPopupMessageMobile:startMessage()
  v1:setAllowToggle(false)
  v1:turnSmall()
  self:assignCurrentMessage(self.pendingMessages[1])
  table.remove(self.pendingMessages, 1)
end
function HUDPopupMessageMobile:finishMessage()
  v1:setAllowToggle(true)
  if self.currentMessage ~= nil and self.currentMessage.callback ~= nil then
    if self.currentMessage.target ~= nil then
      self.currentMessage.callback(self.currentMessage.target)
    else
      self.currentMessage.callback(self)
    end
  end
  self.currentMessage = nil
end
function HUDPopupMessageMobile:update(v1)
  if not self.isMenuVisible then
    local v3 = v3:superClass()
    v3.update(self, v1)
    if not self.isGamePaused then
      local v2 = v2:getIsSleeping()
      if not v2 then
        self.time = self.time + v1
        self:updateCurrentMessage()
      end
    end
    v2 = self:getVisible()
    if v2 then
      v2 = v2:getInputHelpMode()
      if v2 ~= self.lastInputMode then
        self.lastInputMode = v2
        self:updateButtonGlyphs()
        if v2 ~= GS_INPUT_HELP_MODE_TOUCH then
        end
        v4:setVisible(not true)
      end
    end
  end
end
function HUDPopupMessageMobile:updateCurrentMessage()
  if self.currentMessage ~= nil then
    -- if v0.currentMessage.duration >= v0.time then goto L44 end
    self.time = -math.huge
    self:setVisible(false, true)
    return
  end
  if 0 < #self.pendingMessages then
    self:startMessage()
    self:setVisible(true, true)
    v1:addCallback(function()
      local self, v1 = self:getPosition()
      local v6 = v6:getWidth()
      local v7 = v7:getHeight()
      v2:pushArea(...)
      u0.blurAreaActive = true
    end)
  end
end
function HUDPopupMessageMobile:updateButtonGlyphs()
  if self.continueGlyph ~= nil then
    local v4 = v4:getText(HUDPopupMessageMobile.L10N_SYMBOL.BUTTON_OK)
    v1:setAction(InputAction.SKIP_MESSAGE_BOX, v4, self.continueTextSize, true, false)
  end
  if self.currentMessage ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 37, target 94)
    if HUDPopupMessageMobile.MAX_INPUT_ROW_COUNT - 1 + 1 > #self.currentMessage.controls then
    end
    v7:setVisible(true)
    if true then
      local v10 = self.currentMessage.controls[v1]:getActionNames()
      v8:setActions(v10, "", self.textSize, false, false)
      v8:setKeyboardGlyphColor(HUDPopupMessageMobile.COLOR.INPUT_GLYPH)
    end
    -- TODO: structure LOP_FORNLOOP (pc 93, target 38)
  end
end
function HUDPopupMessageMobile:setInputActive(v1)
  if not self.isCustomInputActive and v1 then
    g_inputBinding:setContext(HUDPopupMessageMobile.INPUT_CONTEXT_NAME, true, false)
    local v3, v4 = g_inputBinding:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onConfirmMessage, false, true, false, true)
    g_inputBinding:setActionEventTextVisibility(v4, false)
    local v5, v6 = g_inputBinding:registerActionEvent(InputAction.SKIP_MESSAGE_BOX, self, self.onConfirmMessage, false, true, false, true)
    g_inputBinding:setActionEventTextVisibility(v6, false)
    self.isCustomInputActive = true
    return
  end
  if self.isCustomInputActive and not v1 then
    v2:removeActionEventsByTarget(self)
    v2:revertContext(true)
    self.isCustomInputActive = false
  end
end
function HUDPopupMessageMobile:onConfirmMessage(v1, v2)
  local v3 = v3:getFinished()
  if v3 then
    if g_touchHandler ~= nil then
      v3:revertCustomContext()
    end
    self:setVisible(false, true)
  end
end
function HUDPopupMessageMobile:setVisible(v1, v2)
  self:setInputActive(v1)
  local v4 = v4:superClass()
  v4.setVisible(self, v1, v2)
end
function HUDPopupMessageMobile:draw()
  if not self.isMenuVisible then
    local v1 = self:getVisible()
    if v1 and self.currentMessage ~= nil then
      local v2 = v2:superClass()
      v2.draw(self)
      v1, v2 = self:getPosition()
      local v5 = self:getWidth()
      local v4 = self:getHeight()
      local v6 = unpack(HUDPopupMessageMobile.COLOR.TITLE)
      setTextColor(...)
      setTextBold(true)
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextWrapWidth(v5 - 2 * self.borderPaddingX)
      if self.currentMessage.title ~= "" then
        v6 = utf8ToUpper(self.currentMessage.title)
        renderText(v1 + v5 * 0.5, v2 + v4 - self.borderPaddingY - self.titleTextSize, self.titleTextSize, v6)
      end
      setTextBold(false)
      local v7 = unpack(HUDPopupMessageMobile.COLOR.TEXT)
      setTextColor(...)
      setTextAlignment(RenderText.ALIGN_LEFT)
      setTextLineHeightScale(HUDPopupMessageMobile.TEXT_LINE_HEIGHT_SCALE)
      renderText(v1 + self.borderPaddingX, v5 - self.textSize + self.textOffsetY, self.textSize, self.currentMessage.message)
      v6 = getTextHeight(self.textSize, self.currentMessage.message)
      v7 = unpack(HUDPopupMessageMobile.COLOR.CONTINUE_TEXT)
      setTextColor(...)
      setTextAlignment(RenderText.ALIGN_RIGHT)
      -- TODO: structure LOP_FORNPREP (pc 185, target 209)
      renderText(v1 + v3 - self.borderPaddingX + self.inputRowTextX, v5 - self.textSize + self.textOffsetY - v6 + self.inputRowsOffsetY - self.inputRowHeight - self.textSize + self.inputRowTextY, self.textSize, self.currentMessage.controls[1].textRight)
      -- TODO: structure LOP_FORNLOOP (pc 208, target 186)
      setTextAlignment(RenderText.ALIGN_CENTER)
      local v8 = v8:getInputHelpMode()
      if v8 == GS_INPUT_HELP_MODE_TOUCH then
        local v8, v9 = v8:getPosition()
        renderText(v8 + self.continueGlyph.baseWidth / 2, v9 + self.continueTextSize / 2, self.continueTextSize, self.continueText)
      end
      setTextAlignment(RenderText.ALIGN_LEFT)
      setTextWrapWidth(0)
      setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
    end
  end
end
function HUDPopupMessageMobile.getBackgroundPosition(v0)
  local v2 = unpack(HUDPopupMessageMobile.POSITION.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  return 0.5 + v1 * v0, g_safeFrameOffsetY + v2 * v0
end
function HUDPopupMessageMobile:setScale(v1)
  local v3 = v3:superClass()
  v3.setScale(self, v1)
  self:storeScaledValues()
  local v2, v3 = HUDPopupMessageMobile.getBackgroundPosition(v1)
  local v4 = self:getWidth()
  self:setPosition(v2 - v4 * 0.5, v3)
end
function HUDPopupMessageMobile.setDimension(v0, v1, v2)
  local v4 = v4:superClass()
  v4.setDimension(v0, v1, v2)
end
function HUDPopupMessageMobile:storeScaledValues()
  local v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.SELF)
  self.minWidth = v1
  self.minHeight = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.MESSAGE_TEXT)
  self.textOffsetX = v1
  self.textOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.INPUT_ROWS)
  self.inputRowsOffsetX = v1
  self.inputRowsOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.CONTINUE_BUTTON)
  self.continueButtonOffsetX = v1
  self.continueButtonOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.CONTINUE_BUTTON)
  self.continueButtonWidth = v1
  self.continueButtonHeight = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.INPUT_ROW)
  self.inputRowWidth = v1
  self.inputRowHeight = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.BORDER_PADDING)
  self.borderPaddingX = v1
  self.borderPaddingY = v2
  v1, v2 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.INPUT_TEXT)
  self.inputRowTextX = v1
  self.inputRowTextY = v2
  v1 = self:scalePixelToScreenHeight(HUDPopupMessageMobile.TEXT_SIZE.TITLE)
  self.titleTextSize = v1
  v1 = self:scalePixelToScreenHeight(HUDPopupMessageMobile.TEXT_SIZE.TEXT)
  self.textSize = v1
  v1 = self:scalePixelToScreenHeight(HUDPopupMessageMobile.TEXT_SIZE.CONTINUE_TEXT)
  self.continueTextSize = v1
end
function HUDPopupMessageMobile.createBackground(v0)
  local v1, v2 = HUDPopupMessageMobile.getBackgroundPosition(1)
  local v4 = unpack(HUDPopupMessageMobile.SIZE.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(v0, v1 - v3 * 0.5, v2, v3, v4)
  local v8 = GuiUtils.getUVs(HUDPopupMessageMobile.UV.BACKGROUND)
  v5:setUVs(...)
  v8 = unpack(HUDPopupMessageMobile.COLOR.BACKGROUND)
  v5:setColor(...)
  return v5
end
function HUDPopupMessageMobile:createComponents(v1)
  local v2, v3 = self:getPosition()
  local v4 = self:getWidth()
  local v5, v6 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.INPUT_ROW)
  -- TODO: structure LOP_FORNPREP (pc 22, target 51)
  local v13, v14, v15 = self:createInputRow(v1, v2, v3 + v6)
  self.inputRows[HUDPopupMessageMobile.MAX_INPUT_ROW_COUNT - 1 + 1] = v13
  self.inputGlyphs[HUDPopupMessageMobile.MAX_INPUT_ROW_COUNT - 1 + 1] = v14
  self:addChild(v13)
  -- TODO: structure LOP_FORNLOOP (pc 50, target 23)
  local v8, v9 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.CONTINUE_BUTTON)
  local v10, v11 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.INPUT_GLYPH)
  local v12 = InputGlyphElement.new(g_inputDisplayManager, v10, v11)
  v12:setPosition(v2 + (v4 - v10) * 0.5 + v8, v3 - v9)
  local v16 = v16:getText(HUDPopupMessageMobile.L10N_SYMBOL.BUTTON_OK)
  v12:setAction(InputAction.SKIP_MESSAGE_BOX, v16, self.continueTextSize, true, false)
  self.continueGlyph = v12
  self:addChild(v12)
end
function HUDPopupMessageMobile:createInputRow(v1, v2, v3)
  local v4 = Overlay.new(v1, v2, v3, self.inputRowWidth, self.inputRowHeight)
  local v7 = GuiUtils.getUVs(HUDPopupMessageMobile.UV.BACKGROUND)
  v4:setUVs(...)
  v7 = unpack(HUDPopupMessageMobile.COLOR.INPUT_ROW)
  v4:setColor(...)
  local v5 = HUDElement.new(v4)
  local v6 = v5:getHeight()
  local v7, v8 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.INPUT_GLYPH)
  local v9 = InputGlyphElement.new(g_inputDisplayManager, v7, v8)
  local v10, v11 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.INPUT_GLYPH)
  v9:setPosition(v2 + self.borderPaddingX + v10, v3 + (v6 - v8) * 0.5 + v11)
  v5:addChild(v9)
  local v14, v15 = self:scalePixelToScreenVector(HUDPopupMessageMobile.SIZE.SEPARATOR)
  local v16 = math.max(v15, HUDPopupMessageMobile.SIZE.SEPARATOR[2] / g_screenHeight)
  local v16, v17 = self:scalePixelToScreenVector(HUDPopupMessageMobile.POSITION.SEPARATOR)
  v16 = Overlay.new(v1, v2 + v16, v3 + v17, v14, v16)
  local v18 = GuiUtils.getUVs(GameInfoDisplay.UV.SEPARATOR)
  v16:setUVs(...)
  v18 = unpack(GameInfoDisplay.COLOR.SEPARATOR)
  v16:setColor(...)
  v16 = HUDElement.new(v16)
  v5:addChild(v16)
  return v5, v9, v3 + v6
end
HUDPopupMessageMobile.UV = {BACKGROUND = {8, 8, 2, 2}}
HUDPopupMessageMobile.SIZE = {SELF = {1100, 200}, INPUT_ROW = {1100, 80}, CONTINUE_BUTTON = {60, 60}, BORDER_PADDING = {60, 45}, INPUT_GLYPH = {60, 60}, SEPARATOR = {1100, 1}}
HUDPopupMessageMobile.POSITION = {SELF = {0, 200}, MESSAGE_TEXT = {0, -25}, INPUT_ROWS = {0, -20}, CONTINUE_BUTTON = {0, -12}, INPUT_GLYPH = {0, 0}, INPUT_TEXT = {0, 3}, SEPARATOR = {0, 0}}
HUDPopupMessageMobile.TEXT_LINE_HEIGHT_SCALE = 1.5
HUDPopupMessageMobile.TEXT_SIZE = {TITLE = 40, TEXT = 32, CONTINUE_TEXT = 35}
HUDPopupMessageMobile.COLOR = {BACKGROUND = {0, 0, 0, 0.54}, INPUT_ROW = {0.0075, 0.0075, 0.0075, 0}, SEPARATOR = {0.0382, 0.0382, 0.0382, 1}, TITLE = {1, 1, 1, 1}, TEXT = {0.9, 0.9, 0.9, 1}, CONTINUE_TEXT = {1, 1, 1, 1}, INPUT_GLYPH = {1, 1, 1, 1}}
HUDPopupMessageMobile.L10N_SYMBOL = {BUTTON_OK = "button_ok"}
