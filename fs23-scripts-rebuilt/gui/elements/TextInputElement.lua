-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TextInputElement = {}
local TextInputElement_mt = Class(TextInputElement, ButtonElement)
TextInputElement.INPUT_CONTEXT_NAME = "TEXT_INPUT"
TextInputElement.inputContextActive = false
TextInputElement.INITIAL_REPEAT_DELAY = 250
TextInputElement.MIN_REPEAT_DELAY = 50
function TextInputElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.textInputMouseDown = false
  v2.forcePressed = false
  v2.isPassword = false
  v2.displayText = ""
  v2.cursor = {}
  v2.cursorBlinkTime = 0
  v2.cursorBlinkInterval = 400
  v2.cursorOffset = {0, 0}
  v2.cursorSize = {0.0016, 0.018}
  v2.cursorNeededSize = {v2.cursorOffset[1] + v2.cursorSize[1], v2.cursorOffset[2] + v2.cursorSize[2]}
  v2.cursorPosition = 1
  v2.firstVisibleCharacterPosition = 1
  v2.lastVisibleCharacterPosition = 1
  v2.maxCharacters = nil
  v2.maxInputTextWidth = nil
  v2.frontDotsText = "..."
  v2.backDotsText = "..."
  v2.text = ""
  local v3 = imeIsSupported()
  v2.useIme = v3
  v2.preImeText = ""
  v2.imeActive = false
  v2.blockTime = 0
  v2.isReturnDown = false
  v2.isEscDown = false
  v2.isCapturingInput = false
  v2.hadFocusOnCapture = false
  v2.enterWhenClickOutside = true
  v2.disallowFocusedHighlight = true
  v2.imeKeyboardType = "normal"
  v2.forceFocus = true
  v2.customFocusSample = GuiSoundPlayer.SOUND_SAMPLES.TEXTBOX
  return v2
end
function TextInputElement:delete()
  self:abortIme()
  GuiOverlay.deleteOverlay(self.cursor)
  local v2 = v2:superClass()
  v2.delete(self)
end
function TextInputElement.translate(v0, v1)
  if v1 then
    local v2 = v2:convertText(v1)
  end
  return v1
end
function TextInputElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onEnter", "onEnterCallback")
  self:addCallback(xmlFile, key .. "#onTextChanged", "onTextChangedCallback")
  self:addCallback(xmlFile, key .. "#onEnterPressed", "onEnterPressedCallback")
  self:addCallback(xmlFile, key .. "#onEscPressed", "onEscPressedCallback")
  self:addCallback(xmlFile, key .. "#onIsUnicodeAllowed", "onIsUnicodeAllowedCallback")
  v4 = getXMLString(xmlFile, key .. "#imeKeyboardType")
  local v3 = Utils.getNoNil(v4, self.imeKeyboardType)
  self.imeKeyboardType = v3
  local v5 = getXMLString(xmlFile, key .. "#imeTitle")
  v3 = self:translate(...)
  self.imeTitle = v3
  v5 = getXMLString(xmlFile, key .. "#imeDescription")
  v3 = self:translate(...)
  self.imeDescription = v3
  v5 = getXMLString(xmlFile, key .. "#imePlaceholder")
  v3 = self:translate(...)
  self.imePlaceholder = v3
  v4 = getXMLInt(xmlFile, key .. "#maxCharacters")
  v3 = Utils.getNoNil(v4, self.maxCharacters)
  self.maxCharacters = v3
  v5 = getXMLString(xmlFile, key .. "#maxInputTextWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.maxInputTextWidth})
  v3 = unpack(...)
  self.maxInputTextWidth = v3
  v4 = getXMLString(xmlFile, key .. "#cursorOffset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.cursorOffset)
  self.cursorOffset = v3
  v4 = getXMLString(xmlFile, key .. "#cursorSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.cursorSize)
  self.cursorSize = v3
  if 1 < g_screenWidth then
    v4 = math.max(self.cursorSize[1], 1 / g_screenWidth)
    self.cursorSize[1] = v4
  end
  v4 = getXMLBool(xmlFile, key .. "#enterWhenClickOutside")
  v3 = Utils.getNoNil(v4, self.enterWhenClickOutside)
  self.enterWhenClickOutside = v3
  GuiOverlay.loadOverlay(self, self.cursor, "cursor", self.imageSize, nil, xmlFile, key)
  GuiOverlay.createOverlay(self.cursor)
  v4 = getXMLBool(xmlFile, key .. "#isPassword")
  v3 = Utils.getNoNil(v4, self.isPassword)
  self.isPassword = v3
  self:finalize()
end
function TextInputElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getNumber("maxCharacters", self.maxCharacters)
  self.maxCharacters = v3
  local v5 = profile:getValue("maxInputTextWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.maxInputTextWidth})
  v3 = unpack(...)
  self.maxInputTextWidth = v3
  v4 = profile:getValue("cursorOffset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.cursorOffset)
  self.cursorOffset = v3
  v4 = profile:getValue("cursorSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.cursorSize)
  self.cursorSize = v3
  v3 = profile:getBool("isPassword", self.isPassword)
  self.isPassword = v3
  GuiOverlay.loadOverlay(self, self.cursor, "cursor", self.imageSize, profile, nil, nil)
  if 1 < g_screenWidth then
    v4 = math.max(self.cursorSize[1], 1 / g_screenWidth)
    self.cursorSize[1] = v4
  end
  if applyProfile then
    self:applyTextInputAspectScale()
  end
  self:finalize()
end
function TextInputElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.imeKeyboardType = src.imeKeyboardType
  self.imeTitle = src.imeTitle
  self.imeDescription = src.imeDescription
  self.imePlaceholder = src.imePlaceholder
  self.maxCharacters = src.maxCharacters
  self.maxInputTextWidth = src.maxInputTextWidth
  GuiOverlay.copyOverlay(self.cursor, src.cursor)
  local v2 = table.copy(src.cursorOffset)
  self.cursorOffset = v2
  v2 = table.copy(src.cursorSize)
  self.cursorSize = v2
  self.isPassword = src.isPassword
  self.onEnterCallback = src.onEnterCallback
  self.onTextChangedCallback = src.onTextChangedCallback
  self.onEnterPressedCallback = src.onEnterPressedCallback
  self.onEscPressedCallback = src.onEscPressedCallback
  self.onIsUnicodeAllowedCallback = src.onIsUnicodeAllowedCallback
  self.enterWhenClickOutside = src.enterWhenClickOutside
  self:finalize()
end
function TextInputElement:applyTextInputAspectScale()
  local v1, v2 = self:getAspectScale()
  self.cursorOffset[1] = self.cursorOffset[1] * v1
  self.cursorSize[1] = self.cursorSize[1] * v1
  self.maxInputTextWidth = self.maxInputTextWidth * v1
  self.cursorOffset[2] = self.cursorOffset[2] * v2
  self.cursorSize[2] = self.cursorSize[2] * v2
end
function TextInputElement:applyScreenAlignment()
  self:applyTextInputAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function TextInputElement:finalize()
  self.cursorNeededSize = {self.cursorOffset[1] + self.cursorSize[1], self.cursorOffset[2] + self.cursorSize[2]}
  if not self.maxInputTextWidth then
    if self.textAlignment ~= RenderText.ALIGN_CENTER then
      -- if v0.textAlignment ~= RenderText.ALIGN_RIGHT then goto L39 end
    end
    Logging.error("TextInputElement loading using \"center\" or \"right\" alignment requires specification of \"maxInputTextWidth\"")
  end
  if self.maxInputTextWidth then
    local v4 = getTextWidth(self.textSize, self.frontDotsText)
    v4 = getTextWidth(self.textSize, self.backDotsText)
    if self.maxInputTextWidth <= v4 + self.cursorNeededSize[1] + v4 then
      Logging.warning("TextInputElement loading specified \"maxInputTextWidth\" is too small (%.4f) to display needed data", self.maxInputTextWidth)
    end
  end
end
function TextInputElement.getIsActive(v0)
  return GuiElement.getIsActive(v0)
end
function TextInputElement:setCaptureInput(isCapturing)
  self.blockTime = 200
  if not self.isCapturingInput and isCapturing then
    self.isReturnDown = false
    self.isEscDown = false
    v2:disableInputForDuration(0)
    if TextInputElement.inputContextActive then
      v2:revertContext(true)
    end
    v2:setContext(TextInputElement.INPUT_CONTEXT_NAME, true, false)
    TextInputElement.inputContextActive = true
    if not GS_IS_CONSOLE_VERSION then
      v2:registerActionEvent(InputAction.MENU_BACK, self, self.inputEvent, false, true, false, true)
      v2:registerActionEvent(InputAction.MENU_ACCEPT, self, self.inputEvent, false, true, false, true)
    end
    self.isCapturingInput = true
    return
  end
  if self.isCapturingInput and not isCapturing then
    if TextInputElement.inputContextActive then
      v2:revertContext(true)
      TextInputElement.inputContextActive = false
    end
    v2:disableInputForDuration(200)
    self.isCapturingInput = false
  end
end
function TextInputElement:setAlpha(alpha)
  local v3 = v3:superClass()
  v3.setAlpha(self, alpha)
  if self.cursor ~= nil then
    self.cursor.alpha = self.alpha
  end
end
function TextInputElement.getDoRenderText(v0)
  return false
end
function TextInputElement:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  if self.isRepeatingSpecialKeyDown then
    self:stopSpecialKeyRepeating()
  end
end
function TextInputElement:setText(text)
  local textLength = utf8Strlen(text)
  if self.maxCharacters and self.maxCharacters < textLength then
    local v3 = utf8Substr(text, 0, self.maxCharacters)
    v3 = utf8Strlen(v3)
  end
  local v4 = v4:superClass()
  v4.setText(self, text)
  self.cursorPosition = textLength + 1
  self:updateVisibleTextElements()
end
function TextInputElement:setForcePressed(force)
  if force then
    local v3 = self:getOverlayState()
    if v3 ~= GuiOverlay.STATE_FOCUSED then
    end
    self.hadFocusOnCapture = true
    self:setCaptureInput(true)
  else
    self:setCaptureInput(false)
  end
  self.forcePressed = force
  if self.forcePressed then
    v2:setFocus(self)
    self:setOverlayState(GuiOverlay.STATE_PRESSED)
  else
    if self.hadFocusOnCapture then
      self.hadFocusOnCapture = false
    end
    self:setOverlayState(v2)
  end
  if self.isRepeatingSpecialKeyDown then
    self:stopSpecialKeyRepeating()
  end
  self:updateVisibleTextElements()
end
function TextInputElement:getIsUnicodeAllowed(unicode)
  if unicode ~= 13 then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000001 -> L6
  end
  return false
  local v2 = getCanRenderUnicode(unicode)
  if not v2 then
    return false
  end
  local v3 = self:raiseCallback("onIsUnicodeAllowedCallback", unicode)
  v2 = Utils.getNoNil(v3, true)
  return v2
end
function TextInputElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2])
    if not self.forcePressed then
      if eventUsed then
        self:setOverlayState(GuiOverlay.STATE_NORMAL)
      end
      if not eventUsed and v7 then
        local v8 = v8:isLocked()
        if not v8 then
          v8:setHighlight(self)
          v8 = self:getOverlayState()
          if v8 == GuiOverlay.STATE_NORMAL then
            self:setOverlayState(GuiOverlay.STATE_FOCUSED)
          end
          if isDown and button == Input.MOUSE_BUTTON_LEFT then
            self.textInputMouseDown = true
            if not self.useIme then
              self:setOverlayState(GuiOverlay.STATE_PRESSED)
            end
          end
          -- if not v4 then goto L147 end
          -- if v5 ~= Input.MOUSE_BUTTON_LEFT then goto L147 end
          -- if not v0.textInputMouseDown then goto L147 end
          self.textInputMouseDown = false
          self:setOverlayState(GuiOverlay.STATE_PRESSED)
          self:setForcePressed(true)
          -- if not v0.useIme then goto L147 end
          self:openIme()
          -- goto L147  (LOP_JUMP +47)
        end
      end
      if isDown then
        -- if v5 == Input.MOUSE_BUTTON_LEFT then goto L115 end
      end
      if not self.textInputMouseDown then
        v8 = self:getOverlayState()
        -- if v8 == GuiOverlay.STATE_PRESSED then goto L121 end
      end
      v8:unsetHighlight(self)
      self.textInputMouseDown = false
    elseif self.enterWhenClickOutside and not v7 and isUp and button == Input.MOUSE_BUTTON_LEFT then
      self:abortIme()
      self:setForcePressed(false)
      self:raiseCallback("onEnterPressedCallback", self, true)
    end
    if not eventUsed then
      local v9 = v9:superClass()
      v8 = v9.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    end
  end
  return eventUsed
end
function TextInputElement:moveCursorLeft()
  self:setCursorPosition(self.cursorPosition - 1)
end
function TextInputElement:moveCursorRight()
  self:setCursorPosition(self.cursorPosition + 1)
end
function TextInputElement:setCursorPosition(position)
  local eventUsed = utf8Strlen(self.text)
  local isUp = math.min(eventUsed + 1, position)
  local posY = math.max(...)
  self.cursorPosition = posY
end
function TextInputElement:deleteText(deleteRightCharacterFromCursor)
  local posY = utf8Strlen(self.text)
  if 0 < posY then
    if deleteRightCharacterFromCursor then
      -- if v0.cursorPosition > v2 then goto L25 end
    elseif 1 < self.cursorPosition then
    end
    if isDown then
      if 1 < self.cursorPosition + isUp then
        local v8 = utf8Substr(self.text, 0, self.cursorPosition + isUp - 1)
        -- if v8 then goto L45 end
      end
      if self.cursorPosition + isUp < posY then
        local v7 = utf8Substr(self.text, self.cursorPosition + isUp, -1)
        -- if v7 then goto L61 end
      end
      self.text = eventUsed .. ""
      self.cursorPosition = self.cursorPosition + isUp
      self:raiseCallback("onTextChangedCallback", self, self.text)
    end
  end
end
function TextInputElement:stopSpecialKeyRepeating()
  self.isRepeatingSpecialKeyDown = false
  self.repeatingSpecialKeySym = nil
  self.repeatingSpecialKeyDelayTime = nil
  self.repeatingSpecialKeyRemainingDelayTime = nil
end
function TextInputElement:openIme()
  if self.useIme then
    local v7 = Utils.getNoNil(self.maxCharacters, 512)
    local deleteRightCharacterFromCursor = imeOpen(self.text, self.imeTitle or "", self.imeDescription or "", self.imePlaceholder or "", self.imeKeyboardType or "normal", v7, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2])
    if deleteRightCharacterFromCursor then
      self.imeActive = true
      self.preImeText = self.text
      return true
    end
  end
  return false
end
function TextInputElement:abortIme()
  if self.useIme and self.imeActive then
    self.imeActive = false
    self.preImeText = ""
    imeAbort()
  end
end
function TextInputElement:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  local v7 = v7:superClass()
  local eventUsed = v7.keyEvent(self, unicode, sym, modifier, isDown, eventUsed)
  if eventUsed then
  end
  if self.isRepeatingSpecialKeyDown and not isDown and self.repeatingSpecialKeySym == sym then
    self:stopSpecialKeyRepeating()
  end
  if self.blockTime <= 0 then
    eventUsed = self:getIsActive()
    if eventUsed then
      eventUsed = self:getOverlayState()
      if eventUsed == GuiOverlay.STATE_PRESSED then
        if not isDown then
          if sym == Input.KEY_return and self.isReturnDown then
            self.isReturnDown = false
            self:setForcePressed(not self.forcePressed)
            self:raiseCallback("onEnterPressedCallback", self)
            return eventUsed
          end
          -- if v2 ~= Input.KEY_esc then goto L259 end
          self.isEscDown = false
          self:setForcePressed(not self.forcePressed)
          self:raiseCallback("onEscPressedCallback", self)
          return eventUsed
        end
        if sym == Input.KEY_left then
          self:moveCursorLeft()
        elseif sym == Input.KEY_right then
          self:moveCursorRight()
        else
          if sym == Input.KEY_home then
            self.cursorPosition = 1
          elseif sym == Input.KEY_end then
            local v9 = utf8Strlen(self.text)
            self.cursorPosition = v9 + 1
          else
            if sym == Input.KEY_delete then
              self:deleteText(true)
            elseif sym == Input.KEY_backspace then
              self:deleteText(false)
            else
              if sym == Input.KEY_esc then
                self.isEscDown = true
              elseif sym == Input.KEY_return then
                self.isReturnDown = true
              end
            end
          end
        end
        if v7 then
          self.isRepeatingSpecialKeyDown = true
          self.repeatingSpecialKeySym = sym
          self.repeatingSpecialKeyDelayTime = TextInputElement.INITIAL_REPEAT_DELAY
          self.repeatingSpecialKeyRemainingDelayTime = self.repeatingSpecialKeyDelayTime
        end
        if not eventUsed then
          local v8 = self:getIsUnicodeAllowed(unicode)
          if v8 then
            v8 = utf8Strlen(self.text)
            if self.maxCharacters ~= nil then
              -- if v8 >= v0.maxCharacters then goto L255 end
            end
            if 1 < self.cursorPosition then
              local v13 = utf8Substr(self.text, 0, self.cursorPosition - 1)
              -- if v13 then goto L221 end
            end
            v13 = unicodeToUtf8(unicode)
            if self.cursorPosition <= v8 then
              local v12 = utf8Substr(self.text, self.cursorPosition - 1)
              -- if v12 then goto L240 end
            end
            self.text = v10 .. v11 .. ""
            self.cursorPosition = self.cursorPosition + 1
            self:raiseCallback("onTextChangedCallback", self, self.text)
          end
        end
        self:updateVisibleTextElements()
      end
    end
  end
  return eventUsed
end
function TextInputElement:inputEvent(action, value, eventUsed)
  if self.blockTime <= 0 and not self.imeActive then
    local isDown = self:getIsActive()
    if isDown then
      isDown = self:getOverlayState()
      if isDown == GuiOverlay.STATE_PRESSED then
        if action == InputAction.MENU_ACCEPT then
          if self.forcePressed then
            self:setForcePressed(false)
          else
            self:setForcePressed(true)
          end
          self:raiseCallback("onEnterPressedCallback", self)
          return true
        end
        if action ~= InputAction.MENU_CANCEL then
          -- if v1 ~= InputAction.MENU_BACK then goto L68 end
        end
        if self.forcePressed then
          self:setForcePressed(false)
        else
          self:setForcePressed(true)
        end
        self:raiseCallback("onEscPressedCallback", self)
      end
    end
  end
  return eventUsed
end
function TextInputElement:update(dt)
  local modifier = modifier:superClass()
  modifier.update(self, dt)
  self.cursorBlinkTime = self.cursorBlinkTime + dt
  while true do
    if not (2 * self.cursorBlinkInterval < self.cursorBlinkTime) then
      break
    end
    self.cursorBlinkTime = self.cursorBlinkTime - 2 * self.cursorBlinkInterval
  end
  if self.isRepeatingSpecialKeyDown then
    self.repeatingSpecialKeyRemainingDelayTime = self.repeatingSpecialKeyRemainingDelayTime - dt
    if self.repeatingSpecialKeyRemainingDelayTime <= 0 then
      if self.repeatingSpecialKeySym == Input.KEY_left then
        self:moveCursorLeft()
      elseif self.repeatingSpecialKeySym == Input.KEY_right then
        self:moveCursorRight()
      else
        if self.repeatingSpecialKeySym == Input.KEY_delete then
          self:deleteText(true)
        elseif self.repeatingSpecialKeySym == Input.KEY_backspace then
          self:deleteText(false)
        end
      end
      self:updateVisibleTextElements()
      if not self.repeatingSpecialKeyDelayTime then
      end
      local sym = math.max(modifier, eventUsed * 0.1 ^ (dt / 100))
      self.repeatingSpecialKeyDelayTime = sym
      self.repeatingSpecialKeyRemainingDelayTime = self.repeatingSpecialKeyDelayTime
    end
  end
  if self.useIme and self.imeActive then
    sym, modifier = imeIsComplete()
    if sym then
      self.imeActive = false
      self:setForcePressed(false)
      if not modifier then
        local eventUsed = imeGetLastString()
        self:setText(...)
        self:raiseCallback("onEnterPressedCallback", self)
        -- goto L176  (LOP_JUMP +30)
      end
      self:setText(self.preImeText)
      self.preImeText = ""
      self:raiseCallback("onEscPressedCallback", self)
    else
      eventUsed = imeGetLastString()
      self:setText(...)
      local v7 = imeGetCursorPos()
      self:setCursorPosition(v7 + 1)
      self:updateVisibleTextElements()
    end
  end
  if 0 < self.blockTime then
    self.blockTime = self.blockTime - dt
  end
end
function TextInputElement:draw(clipX1, clipY1, clipX2, clipY2)
  self.text = ""
  local v7 = v7:superClass()
  v7.draw(self, clipX1, clipY1, clipX2, clipY2)
  self.text = self.text
  setTextAlignment(self.textAlignment)
  local neededWidth = self:getNeededTextWidth()
  if self.textAlignment == RenderText.ALIGN_CENTER then
  elseif self.textAlignment == RenderText.ALIGN_RIGHT then
  end
  local v8, v9 = self:getTextOffset()
  local v10, v11 = self:getTextPosition(self.text)
  if clipX1 ~= nil then
    setTextClipArea(clipX1, clipY1, clipX2, clipY2)
  end
  if self.areFrontDotsVisible then
    local v14 = self:drawTextPart(self.frontDotsText, v7, 0, v12)
  end
  if self.isVisibleTextPart1Visible then
    v14 = self:drawTextPart(self.visibleTextPart1, v7, v13, v12)
  end
  if self.isCursorVisible then
    v14 = self:drawCursor(v7, v13, v12)
  end
  if self.isVisibleTextPart2Visible then
    v14 = self:drawTextPart(self.visibleTextPart2, v7, v13, v12)
  end
  if self.areBackDotsVisible then
    self:drawTextPart(self.backDotsText, v7, v13, v12)
  end
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextColor(1, 1, 1, 1)
  if clipX1 ~= nil then
    setTextClipArea(0, 0, 1, 1)
  end
end
function TextInputElement:shouldFocusChange(direction)
  return not self.forcePressed
end
function TextInputElement:onFocusLeave()
  self:abortIme()
  self:setForcePressed(false)
  local clipY1 = clipY1:superClass()
  clipY1.onFocusLeave(self)
end
function TextInputElement:onFocusActivate()
  if self.blockTime <= 0 then
    local clipY1 = clipY1:superClass()
    clipY1.onFocusActivate(self)
    self:raiseCallback("onEnterCallback", self)
    if self.forcePressed then
      self:abortIme()
      self:setForcePressed(false)
      self:setOverlayState(TextInputElement.STATE_FOCUSED)
      self:raiseCallback("onEnterPressedCallback", self)
      return
    end
    self:openIme()
    self:setForcePressed(true)
  end
end
function TextInputElement:onClose()
  local clipY1 = clipY1:superClass()
  clipY1.onClose(self)
  self:abortIme()
  self:setForcePressed(false)
end
function TextInputElement:drawTextPart(text, textXPos, displacementX, textYPos)
  if text ~= "" then
    setTextBold(self.textBold)
    local neededWidth = getTextWidth(self.textSize, text)
    if self.textAlignment == RenderText.ALIGN_CENTER then
    elseif self.textAlignment == RenderText.ALIGN_RIGHT then
    end
    if 0 < self.text2Size then
      setTextBold(self.text2Bold)
      local v9 = self:getText2Color()
      local v8 = unpack(...)
      setTextColor(...)
      renderText(textXPos + neededWidth + displacementX + self.text2Offset[1] - self.textOffset[1], textYPos + self.text2Offset[2] - self.textOffset[2], self.text2Size, text)
    end
    setTextBold(self.textBold)
    v9 = self:getTextColor()
    v8 = unpack(...)
    setTextColor(...)
    renderText(textXPos + neededWidth + displacementX, textYPos, self.textSize, text)
  end
  return eventUsed
end
function TextInputElement:drawCursor(textXPos, displacementX, textYPos)
  if self.cursorBlinkTime < self.cursorBlinkInterval then
    local eventUsed = math.floor((textXPos + displacementX + self.cursorOffset[1]) * g_screenWidth)
    GuiOverlay.renderOverlay(self.cursor, eventUsed * 1 / g_screenWidth, textYPos + self.cursorOffset[2], self.cursorSize[1], self.cursorSize[2])
  end
  return self.cursorNeededSize[1]
end
function TextInputElement:updateVisibleTextElements()
  self.isCursorVisible = false
  self.isVisibleTextPart1Visible = false
  self.visibleTextPart1 = ""
  self.isVisibleTextPart2Visible = false
  self.visibleTextPart2 = ""
  self.areFrontDotsVisible = false
  self.areBackDotsVisible = false
  self.firstVisibleCharacterPosition = 1
  setTextBold(self.textBold)
  if self.isPassword then
    local textYPos = utf8Strlen(self.text)
    local textXPos = string.rep(...)
  end
  textXPos = utf8Strlen(text)
  local displacementX = self:getAvailableTextWidth()
  textYPos = self:getIsActive()
  if textYPos then
    textYPos = self:getOverlayState()
    -- if v4 ~= GuiOverlay.STATE_PRESSED then goto L329 end
    self.isCursorVisible = true
    if self.cursorPosition < self.firstVisibleCharacterPosition then
      self.firstVisibleCharacterPosition = self.cursorPosition
    end
    if 1 < self.firstVisibleCharacterPosition then
      self.areFrontDotsVisible = true
    end
    textYPos = utf8Substr(text, self.firstVisibleCharacterPosition - 1)
    local eventUsed = getTextWidth(self.textSize, textYPos)
    local neededWidth = self:getAvailableTextWidth()
    if neededWidth and neededWidth < eventUsed and self.cursorPosition <= textXPos then
      self.areBackDotsVisible = true
      neededWidth = self:getAvailableTextWidth()
    end
    neededWidth = TextInputElement.limitTextToAvailableWidth(textYPos, self.textSize, displacementX)
    local v7 = getTextWidth(self.textSize, neededWidth)
    local v8 = utf8Strlen(neededWidth)
    if displacementX and self.firstVisibleCharacterPosition + v8 < self.cursorPosition then
      self.areFrontDotsVisible = true
      local v9 = self:getAvailableTextWidth()
      v9 = utf8Substr(textYPos, 0, self.cursorPosition - self.firstVisibleCharacterPosition)
      local v10 = TextInputElement.limitTextToAvailableWidth(v9, self.textSize, v9, true)
      v10 = getTextWidth(self.textSize, v10)
      v10 = utf8Strlen(v10)
      self.firstVisibleCharacterPosition = self.cursorPosition - v10
    end
    if displacementX and not self.areBackDotsVisible and 1 < self.firstVisibleCharacterPosition then
      v10 = utf8Substr(text, self.firstVisibleCharacterPosition - 1, 1)
      local v11 = getTextWidth(self.textSize, v10)
      if v7 + v11 <= displacementX and 1 < self.firstVisibleCharacterPosition then
        while true do
          if not (v7 + v11 <= displacementX) then
            break
          end
          if not (1 < self.firstVisibleCharacterPosition) then
            break
          end
          self.firstVisibleCharacterPosition = self.firstVisibleCharacterPosition - 1
          v12 = utf8Substr(text, self.firstVisibleCharacterPosition - 1, 1)
          v12 = getTextWidth(self.textSize, v12)
        end
        if 1 < self.firstVisibleCharacterPosition then
          self.areFrontDotsVisible = false
          v12 = self:getAvailableTextWidth()
          self.areFrontDotsVisible = true
          local v13 = getTextWidth(self.textSize, text)
          -- if v13 > v12 then goto L283 end
          self.areFrontDotsVisible = false
          self.firstVisibleCharacterPosition = 1
        else
          self.areFrontDotsVisible = false
        end
        v12 = utf8Substr(text, self.firstVisibleCharacterPosition - 1, v9)
      end
    end
    self.isVisibleTextPart1Visible = true
    v9 = utf8Substr(neededWidth, 0, self.cursorPosition - self.firstVisibleCharacterPosition)
    self.visibleTextPart1 = v9
    -- if v0.cursorPosition - v0.firstVisibleCharacterPosition >= v8 then goto L368 end
    self.isVisibleTextPart2Visible = true
    v9 = utf8Substr(neededWidth, self.cursorPosition - self.firstVisibleCharacterPosition)
    self.visibleTextPart2 = v9
  else
    textYPos = getTextWidth(self.textSize, text)
    if displacementX and displacementX < textYPos then
      self.areBackDotsVisible = true
      eventUsed = self:getAvailableTextWidth()
    end
    if displacementX then
      -- if v3 >= v4 then goto L363 end
      eventUsed = TextInputElement.limitTextToAvailableWidth(text, self.textSize, displacementX)
      self.visibleTextPart1 = eventUsed
      self.isVisibleTextPart1Visible = true
    else
      self.visibleTextPart1 = text
      self.isVisibleTextPart1Visible = true
    end
  end
  setTextBold(false)
end
function TextInputElement.limitTextToAvailableWidth(text, textSize, availableWidth, trimFront)
  local indexOfLastCharacter = utf8Strlen(text)
  if availableWidth then
    if trimFront then
      while true do
        v7 = getTextWidth(textSize, textYPos)
        -- if v2 >= v7 then goto L45 end
        v7 = utf8Substr(textYPos, 1)
      end
      return textYPos, eventUsed, indexOfLastCharacter
    end
    v7 = utf8Strlen(textYPos)
    while true do
      v8 = getTextWidth(textSize, textYPos)
      if not (availableWidth < v8) then
        break
      end
      v8 = utf8Substr(textYPos, 0, v7 - 1)
    end
  end
  return textYPos, eventUsed, indexOfLastCharacter
end
function TextInputElement:getAvailableTextWidth()
  if not self.maxInputTextWidth then
    return nil
  end
  if self.areFrontDotsVisible then
    local textXPos = getTextWidth(self.textSize, self.frontDotsText)
  end
  if self.isCursorVisible then
  end
  if self.areBackDotsVisible then
    textXPos = getTextWidth(self.textSize, self.backDotsText)
  end
  return text
end
function TextInputElement:getNeededTextWidth()
  if self.areFrontDotsVisible then
    local textXPos = getTextWidth(self.textSize, self.frontDotsText)
  end
  if self.isVisibleTextPart1Visible then
    textXPos = getTextWidth(self.textSize, self.visibleTextPart1)
  end
  if self.isCursorVisible then
  end
  if self.isVisibleTextPart2Visible then
    textXPos = getTextWidth(self.textSize, self.visibleTextPart2)
  end
  if self.areBackDotsVisible then
    textXPos = getTextWidth(self.textSize, self.backDotsText)
  end
  return text
end
function TextInputElement:getText()
  return self.text
end
