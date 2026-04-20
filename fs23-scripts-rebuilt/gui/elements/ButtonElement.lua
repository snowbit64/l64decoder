-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ButtonElement = {}
local ButtonElement_mt = Class(ButtonElement, TextElement)
function ButtonElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:include(PlaySampleMixin)
  v2.inputDown = false
  v2.forceFocus = false
  v2.forceHighlight = false
  v2.overlay = {}
  v2.icon = {}
  v2.touchIcon = {}
  v2.iconSize = {0, 0}
  v2.touchIconSize = {0, 0}
  local v4 = getNormalizedScreenValues(60, 60)
  v2.gamepadIconSize = {}
  v2.iconTextOffset = {0, 0}
  v2.focusedTextOffset = {0, 0}
  v2.hotspot = {0, 0, 0, 0}
  v2.needExternalClick = false
  v2.clickSoundName = GuiSoundPlayer.SOUND_SAMPLES.CLICK
  v2.fitToContent = false
  v2.fitExtraWidth = {0}
  v2.hideKeyboardGlyph = false
  v2.isTouchButton = false
  v2.isTouchButtonWithBg = false
  v2.gamepadUsesTouchButton = false
  v2.addTouchArea = true
  v2.isTriggerableByGlobalAction = true
  v2.ignoreFocusOnTouch = false
  v2.inputActionName = nil
  v2.hasLoadedInputGlyph = false
  v2.isKeyboardMode = false
  v2.keyDisplayText = nil
  v2.keyOverlay = nil
  v2.keyGlyphOffsetX = 0
  v2.keyGlyphSize = {0, 0}
  v2.iconColors = {color = {1, 1, 1, 1}}
  v2.iconImageSize = {1024, 1024}
  return v2
end
function ButtonElement:delete()
  GuiOverlay.deleteOverlay(self.touchIcon)
  GuiOverlay.deleteOverlay(self.overlay)
  GuiOverlay.deleteOverlay(self.icon)
  local v2 = v2:superClass()
  v2.delete(self)
end
function ButtonElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  self:addCallback(xmlFile, key .. "#onFocus", "onFocusCallback")
  self:addCallback(xmlFile, key .. "#onLeave", "onLeaveCallback")
  self:addCallback(xmlFile, key .. "#onHighlight", "onHighlightCallback")
  self:addCallback(xmlFile, key .. "#onHighlightRemove", "onHighlightRemoveCallback")
  self:addCallback(xmlFile, key .. "#onSizeChanged", "onSizeChangedCallback")
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, nil, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#iconSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.iconSize)
  self.iconSize = v3
  v4 = getXMLString(xmlFile, key .. "#touchIconSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.touchIconSize)
  self.touchIconSize = v3
  v4 = getXMLString(xmlFile, key .. "#gamepadIconSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.gamepadIconSize)
  self.gamepadIconSize = v3
  v4 = getXMLString(xmlFile, key .. "#iconTextOffset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.iconTextOffset)
  self.iconTextOffset = v3
  v4 = getXMLString(xmlFile, key .. "#hotspot")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.hotspot)
  self.hotspot = v3
  v4 = getXMLBool(xmlFile, key .. "#forceFocus")
  v3 = Utils.getNoNil(v4, self.forceFocus)
  self.forceFocus = v3
  v4 = getXMLBool(xmlFile, key .. "#forceHighlight")
  v3 = Utils.getNoNil(v4, self.forceHighlight)
  self.forceHighlight = v3
  v4 = getXMLBool(xmlFile, key .. "#needExternalClick")
  v3 = Utils.getNoNil(v4, self.needExternalClick)
  self.needExternalClick = v3
  v4 = getXMLBool(xmlFile, key .. "#fitToContent")
  v3 = Utils.getNoNil(v4, self.fitToContent)
  self.fitToContent = v3
  v4 = getXMLString(xmlFile, key .. "#fitExtraWidth")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.fitExtraWidth)
  self.fitExtraWidth = v3
  v4 = getXMLBool(xmlFile, key .. "#hideKeyboardGlyph")
  v3 = Utils.getNoNil(v4, self.hideKeyboardGlyph)
  self.hideKeyboardGlyph = v3
  v4 = getXMLBool(xmlFile, key .. "#isTouchButton")
  v3 = Utils.getNoNil(v4, self.isTouchButton)
  self.isTouchButton = v3
  v4 = getXMLBool(xmlFile, key .. "#isTouchButtonWithBg")
  v3 = Utils.getNoNil(v4, self.isTouchButtonWithBg)
  self.isTouchButtonWithBg = v3
  v4 = getXMLBool(xmlFile, key .. "#gamepadUsesTouchButton")
  v3 = Utils.getNoNil(v4, self.gamepadUsesTouchButton)
  self.gamepadUsesTouchButton = v3
  v4 = getXMLBool(xmlFile, key .. "#addTouchArea")
  v3 = Utils.getNoNil(v4, self.addTouchArea)
  self.addTouchArea = v3
  v4 = getXMLString(xmlFile, key .. "#touchAreaColor")
  v3 = GuiUtils.getColorArray(v4, self.touchAreaColor)
  self.touchAreaColor = v3
  v4 = getXMLBool(xmlFile, key .. "#isTriggerableByGlobalAction")
  v3 = Utils.getNoNil(v4, self.isTriggerableByGlobalAction)
  self.isTriggerableByGlobalAction = v3
  v4 = getXMLBool(xmlFile, key .. "#ignoreFocusOnTouch")
  v3 = Utils.getNoNil(v4, self.ignoreFocusOnTouch)
  self.ignoreFocusOnTouch = v3
  v3 = getXMLString(xmlFile, key .. "#inputAction")
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L358
    self.inputActionName = v3
    self:loadInputGlyphColors(nil, xmlFile, key)
  else
    local v5 = getXMLString(xmlFile, key .. "#iconImageSize")
    v4 = GuiUtils.get2DArray(v5, self.iconImageSize)
    self.iconImageSize = v4
    GuiOverlay.loadOverlay(self, self.icon, "icon", self.iconImageSize, nil, xmlFile, key)
    GuiOverlay.createOverlay(self.icon)
  end
  if not self.isTouchButton and not self.isTouchButtonWithBg then
    -- if not v0.gamepadUsesTouchButton then goto L418 end
  end
  if Platform.isMobile then
    GuiOverlay.loadOverlay(self, self.touchIcon, "touchIcon", self.imageSize, nil, xmlFile, key)
    GuiOverlay.createOverlay(self.touchIcon)
  end
  v4 = getXMLString(xmlFile, key .. "#clickSound")
  if not v4 then
  end
  if GuiSoundPlayer.SOUND_SAMPLES[v4] ~= nil then
    self.clickSoundName = GuiSoundPlayer.SOUND_SAMPLES[v4]
  end
  GuiOverlay.createOverlay(self.overlay)
  self:updateSize()
end
function ButtonElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, profile, nil, nil)
  v4 = profile:getValue("iconSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.iconSize)
  self.iconSize = v3
  v4 = profile:getValue("touchIconSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.touchIconSize)
  self.touchIconSize = v3
  v4 = profile:getValue("gamepadIconSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.gamepadIconSize)
  self.gamepadIconSize = v3
  v4 = profile:getValue("iconTextOffset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.iconTextOffset)
  self.iconTextOffset = v3
  v4 = profile:getValue("hotspot")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.hotspot)
  self.hotspot = v3
  v3 = profile:getBool("forceFocus", self.forceFocus)
  self.forceFocus = v3
  v3 = profile:getBool("forceHighlight", self.forceHighlight)
  self.forceHighlight = v3
  v3 = profile:getBool("needExternalClick", self.needExternalClick)
  self.needExternalClick = v3
  v3 = profile:getBool("fitToContent", self.fitToContent)
  self.fitToContent = v3
  v4 = profile:getValue("fitExtraWidth")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.fitExtraWidth)
  self.fitExtraWidth = v3
  v3 = profile:getBool("hideKeyboardGlyph", self.hideKeyboardGlyph)
  self.hideKeyboardGlyph = v3
  v3 = profile:getBool("isTouchButton", self.isTouchButton)
  self.isTouchButton = v3
  v3 = profile:getBool("isTouchButtonWithBg", self.isTouchButtonWithBg)
  self.isTouchButtonWithBg = v3
  v3 = profile:getBool("gamepadUsesTouchButton", self.gamepadUsesTouchButton)
  self.gamepadUsesTouchButton = v3
  v3 = profile:getBool("addTouchArea", self.addTouchArea)
  self.addTouchArea = v3
  v4 = profile:getValue("touchAreaColor")
  v3 = GuiUtils.getColorArray(...)
  self.touchAreaColor = v3
  v3 = profile:getBool("isTriggerableByGlobalAction", self.isTriggerableByGlobalAction)
  self.isTriggerableByGlobalAction = v3
  v3 = profile:getBool("ignoreFocusOnTouch", self.ignoreFocusOnTouch)
  self.ignoreFocusOnTouch = v3
  v3 = profile:getValue("inputAction", self.inputActionName)
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L220
    self.inputActionName = v3
    self:loadInputGlyphColors(profile, nil, nil)
  else
    v4 = profile:getValue("iconImageSize")
    if v4 ~= nil then
      local v5, v6 = v4:getVector()
      if v5 ~= nil and v6 ~= nil then
        self.iconImageSize = {v5, v6}
      end
    end
    GuiOverlay.loadOverlay(self, self.icon, "icon", self.iconImageSize, profile, nil, nil)
    GuiOverlay.createOverlay(self.icon)
  end
  if not self.isTouchButton and not self.isTouchButtonWithBg then
    -- if not v0.gamepadUsesTouchButton then goto L287 end
  end
  if Platform.isMobile then
    GuiOverlay.loadOverlay(self, self.touchIcon, "touchIcon", self.imageSize, profile, nil, nil)
    GuiOverlay.createOverlay(self.touchIcon)
  end
  v4 = profile:getValue("clickSound", self.clickSoundName)
  if GuiSoundPlayer.SOUND_SAMPLES[v4] ~= nil then
    self.clickSoundName = GuiSoundPlayer.SOUND_SAMPLES[v4]
  end
  GuiOverlay.createOverlay(self.overlay)
  if applyProfile then
    self:applyButtonAspectScale()
    self:updateSize()
  end
end
function ButtonElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  GuiOverlay.copyOverlay(self.overlay, src.overlay)
  GuiOverlay.copyOverlay(self.icon, src.icon)
  if not src.isTouchButton and not src.isTouchButtonWithBg then
    -- if not v0.gamepadUsesTouchButton then goto L57 end
  end
  if Platform.isMobile then
    GuiOverlay.copyOverlay(self.touchIcon, src.touchIcon)
    local v2 = table.copy(src.touchIconSize)
    self.touchIconSize = v2
    v2 = table.copy(src.gamepadIconSize)
    self.gamepadIconSize = v2
  end
  v2 = table.copy(src.iconSize)
  self.iconSize = v2
  v2 = table.copy(src.iconTextOffset)
  self.iconTextOffset = v2
  v2 = table.copy(src.hotspot)
  self.hotspot = v2
  self.forceFocus = src.forceFocus
  self.forceHighlight = src.forceHighlight
  self.needExternalClick = src.needExternalClick
  self.inputActionName = src.inputActionName
  self.clickSoundName = src.clickSoundName
  self.hideKeyboardGlyph = src.hideKeyboardGlyph
  self.fitExtraWidth = src.fitExtraWidth
  self.fitToContent = src.fitToContent
  self.isTouchButton = src.isTouchButton
  self.isTouchButtonWithBg = src.isTouchButtonWithBg
  self.gamepadUsesTouchButton = src.gamepadUsesTouchButton
  self.addTouchArea = src.addTouchArea
  self.touchAreaColor = src.touchAreaColor
  self.isTriggerableByGlobalAction = src.isTriggerableByGlobalAction
  self.ignoreFocusOnTouch = src.ignoreFocusOnTouch
  self.iconColors = src.iconColors
  self.onClickCallback = src.onClickCallback
  self.onLeaveCallback = src.onLeaveCallback
  self.onFocusCallback = src.onFocusCallback
  self.onHighlightCallback = src.onHighlightCallback
  self.onHighlightRemoveCallback = src.onHighlightRemoveCallback
  self.onSizeChangedCallback = src.onSizeChangedCallback
  GuiMixin.cloneMixin(PlaySampleMixin, src, self)
end
function ButtonElement:loadInputGlyphColors(profile, xmlFile, key)
  if xmlFile ~= nil then
    GuiOverlay.loadXMLColors(xmlFile, key, self.iconColors, "icon")
    GuiOverlay.loadXMLColors(xmlFile, key, self.icon, "icon")
    return
  end
  if profile ~= nil then
    GuiOverlay.loadProfileColors(profile, self.iconColors, "icon")
    GuiOverlay.loadProfileColors(profile, self.icon, "icon")
  end
end
function ButtonElement:loadInputGlyph(force)
  if self.icon.filename then
    -- if not v1 then goto L34 end
  end
  local v2 = v2:getGamepadInputActionOverlay(self.inputActionName, Binding.AXIS_COMPONENT.POSITIVE)
  if v2 ~= nil then
    GuiOverlay.deleteOverlay(self.icon)
    self.icon = v2
    GuiOverlay.copyColors(self.icon, self.iconColors)
    self.hasLoadedInputGlyph = true
  end
  if not GS_IS_CONSOLE_VERSION and not GS_IS_MOBILE_VERSION then
    v2 = v2:getKeyboardInputActionKey(self.inputActionName, Binding.AXIS_COMPONENT.POSITIVE)
    if v2 ~= nil then
      self.keyDisplayText = v2
      local v3 = v3:getKeyboardKeyOverlay()
      self.keyOverlay = v3
      local v4 = v4:getButtonWidth(v2, self.iconSize[2])
      self.keyGlyphSize = {v4, self.iconSize[2]}
      self.keyGlyphOffsetX = v4 - self.iconSize[1]
    end
  end
end
function ButtonElement:applyButtonAspectScale()
  local v1, v2 = self:getAspectScale()
  self.iconSize[1] = self.iconSize[1] * v1
  self.iconTextOffset[1] = self.iconTextOffset[1] * v1
  self.hotspot[1] = self.hotspot[1] * v1
  self.hotspot[3] = self.hotspot[3] * v1
  self.fitExtraWidth[1] = self.fitExtraWidth[1] * v1
  self.touchIconSize[1] = self.touchIconSize[1] * v1
  self.gamepadIconSize[1] = self.gamepadIconSize[1] * v1
  self.iconSize[2] = self.iconSize[2] * v2
  self.iconTextOffset[2] = self.iconTextOffset[2] * v2
  self.hotspot[2] = self.hotspot[2] * v2
  self.hotspot[4] = self.hotspot[4] * v2
  self.touchIconSize[2] = self.touchIconSize[2] * v2
  self.gamepadIconSize[2] = self.gamepadIconSize[2] * v2
end
function ButtonElement:applyScreenAlignment()
  self:applyButtonAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function ButtonElement:setInputMode(isKeyboardMode, isTouchMode, isGamepadMode)
  if self.isKeyboardMode ~= isKeyboardMode then
    self.isKeyboardMode = isKeyboardMode
    if not self.hasLoadedInputGlyph then
      self:loadInputGlyph()
    end
  end
  if self.isGamepadMode ~= isGamepadMode then
    self.isGamepadMode = isGamepadMode
    if not self.hasLoadedInputGlyph then
      self:loadInputGlyph()
    end
  end
  if self.isTouchMode ~= isTouchMode then
    if not self.isTouchButton then
      -- if not v0.isTouchButtonWithBg then goto L40 end
    end
    self.isTouchMode = isTouchMode
  end
  if v4 then
    self:updateSize()
  end
end
function ButtonElement:setAlpha(alpha)
  local v3 = v3:superClass()
  v3.setAlpha(self, alpha)
  if self.overlay ~= nil then
    self.overlay.alpha = self.alpha
  end
  if self.icon ~= nil then
    self.icon.alpha = self.alpha
  end
end
function ButtonElement:setDisabled(disabled)
  local v3 = v3:superClass()
  v3.setDisabled(self, disabled)
  if disabled then
    v2:unsetFocus(self)
    self.inputEntered = false
    self:raiseCallback("onLeaveCallback", self)
    self.inputDown = false
    self:setOverlayState(GuiOverlay.STATE_DISABLED)
    return
  end
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
end
function ButtonElement:setInputAction(inputActionName)
  if inputActionName ~= nil and InputAction[inputActionName] ~= nil then
    self.inputActionName = inputActionName
    self:loadInputGlyph(true)
  end
end
function ButtonElement:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if self.disabled then
    self:setOverlayState(GuiOverlay.STATE_DISABLED)
  end
  if self.inputActionName ~= nil then
    self.hasLoadedInputGlyph = false
    self:loadInputGlyph(true)
  end
end
function ButtonElement:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self:reset()
end
function ButtonElement:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
  self.inputDown = false
end
function ButtonElement:setImageFilename(filename, iconFilename)
  if filename ~= nil then
    local v3 = GuiOverlay.createOverlay(self.overlay, filename)
    self.overlay = v3
  end
  if iconFilename ~= nil then
    v3 = GuiOverlay.createOverlay(self.icon, iconFilename)
    self.icon = v3
  end
end
function ButtonElement:setImageUVs(backgroundUVs, iconUVs)
  if backgroundUVs ~= nil then
    self.overlay.uvs = backgroundUVs
  end
  if iconUVs ~= nil then
    self.icon.uvs = iconUVs
  end
end
function ButtonElement:getIsActive()
  local v2 = v2:superClass()
  local v1 = v2.getIsActive(self)
  if v1 and self.onClickCallback == nil then
  end
  return v2
end
function ButtonElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    if not eventUsed then
      local v8 = v8:superClass()
      v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    end
    v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2], self.hotspot)
    if v7 then
      -- if v0.inputEntered then goto L76 end
      if not self.forceHighlight then
        v8:setHighlight(self)
      end
      self.inputEntered = true
    else
      self:restoreOverlayState()
      self.inputDown = false
      self.inputEntered = false
      if not self.forceHighlight then
        v8:unsetHighlight(self)
      end
    end
    if not eventUsed and v7 then
      v8 = v8:isLocked()
      if not v8 then
        if isDown and button == Input.MOUSE_BUTTON_LEFT then
          if self.handleFocus and not self.forceFocus then
            v8:setFocus(self)
          end
          self.inputDown = true
        end
        if self.inputDown then
          v8 = self:getOverlayState()
          if v8 ~= GuiOverlay.STATE_PRESSED then
            self:storeOverlayState()
            self:setOverlayState(GuiOverlay.STATE_PRESSED)
          end
        end
        if isUp and button == Input.MOUSE_BUTTON_LEFT and self.inputDown then
          self:restoreOverlayState()
          self.inputDown = false
          self:sendAction()
        end
      end
    end
  end
  return eventUsed
end
function ButtonElement:touchEvent(v1, v2, v3, v4, v5, v6)
  local v7 = self:getIsActive()
  if v7 then
    if not v6 then
      local v8 = v8:superClass()
      v7 = v8.touchEvent(self, v1, v2, v3, v4, v5, v6)
    end
    v7 = GuiUtils.checkOverlayOverlap(v1, v2, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2], self.hotspot)
    if v7 then
      -- if v0.inputEntered then goto L76 end
      if not self.forceHighlight then
        v8:setHighlight(self)
      end
      self.inputEntered = true
    else
      self:restoreOverlayState()
      self.inputDown = false
      self.inputEntered = false
      if not self.forceHighlight then
        v8:unsetHighlight(self)
      end
    end
    if not v6 and v7 then
      v8 = v8:isLocked()
      if not v8 then
        if v3 then
          if self.handleFocus and not self.forceFocus then
            v8:setFocus(self)
          end
          self.inputDown = true
        end
        if self.inputDown then
          v8 = self:getOverlayState()
          if v8 ~= GuiOverlay.STATE_PRESSED then
            self:storeOverlayState()
            self:setOverlayState(GuiOverlay.STATE_PRESSED)
          end
        end
        if v4 and self.inputDown then
          self:restoreOverlayState()
          self.inputDown = false
          self:sendAction()
        end
      end
    end
  end
  return v6
end
function ButtonElement:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  local v6 = self:getIsActive()
  if v6 then
    local v7 = v7:superClass()
    v6 = v7.keyEvent(self, unicode, sym, modifier, isDown, eventUsed)
    return v6
  end
  return false
end
function ButtonElement:getIconOffset(textWidth, textHeight)
  local v3, v4 = self:getIconSize()
  if self.textAlignment == RenderText.ALIGN_LEFT then
  elseif self.textAlignment == RenderText.ALIGN_CENTER then
  else
    if self.textAlignment == RenderText.ALIGN_RIGHT then
    end
  end
  if self.textVerticalAlignment == TextElement.VERTICAL_ALIGNMENT.TOP then
    return v5, v6 - textHeight
  end
  if self.textVerticalAlignment == TextElement.VERTICAL_ALIGNMENT.MIDDLE then
  end
  return v5, v6
end
function ButtonElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5 = v5:getInputHelpMode()
  if self.keyDisplayText ~= nil then
    local v9 = v9:getInputHelpMode()
    if v9 ~= GS_INPUT_HELP_MODE_KEYBOARD then
    end
  end
  if self.isTouchButton then
    -- if v5 == GS_INPUT_HELP_MODE_TOUCH then goto L39 end
  end
  if self.gamepadUsesTouchButton and v5 == GS_INPUT_HELP_MODE_GAMEPAD then
  end
  local v11 = v11:getInputHelpMode()
  if v11 ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  self:setInputMode(v8, v9, true)
  local v12 = self:getOverlayState()
  GuiOverlay.renderOverlay(self.overlay, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2], v12, clipX1, clipY1, clipX2, clipY2)
  local v6, v7 = self:getTextPosition(self.text)
  local v8, v9 = self:getTextOffset()
  v12 = self:getTextWidth()
  local v13 = getTextHeight(self.textSize, self.text)
  local v10, v11 = self:getIconOffset(...)
  local v14, v15 = self:getIconSize()
  local v16 = self:getOverlayState()
  if self.keyDisplayText ~= nil then
    -- if not v0.isKeyboardMode then goto L148 end
    -- if v0.hideKeyboardGlyph then goto L264 end
    local v17 = GuiOverlay.getOverlayColor(self.iconColors, v16)
    local v20 = unpack(v17)
    v18:setColor(...)
    v18:renderButton(self.keyDisplayText, v6 + v8 + v10, v7 + v9 + v11, v15, self.textAlignment, true)
  elseif self.isTouchMode then
    if self.addTouchArea then
      if self.touchAreaColor ~= nil then
      end
      if v16 ~= GuiOverlay.STATE_PRESSED then
      end
      v21(v22, v23, v24, true, self.isTouchButtonWithBg, v17, v18, v19, v20, clipX1, clipY1, clipX2, clipY2)
    end
    if self.isGamepadMode then
    end
    -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L264
    GuiOverlay.renderOverlay(v17, v12, self.absPosition[2] + self.absSize[2] / 2 - v18[2] / 2, v18[1], v18[2], v16, clipX1, clipY1, clipX2, clipY2)
  else
    GuiOverlay.renderOverlay(self.icon, v6 + v8 + v10, v7 + v9 + v11, v14, v15, v16, clipX1, clipY1, clipX2, clipY2)
  end
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L361 end
  end
  drawFilledRect(self.absPosition[1] + self.hotspot[1], self.absPosition[2] + self.hotspot[2], self.absPosition[1] + self.size[1] + self.hotspot[3] - 1 / g_screenWidth - self.absPosition[1] + self.hotspot[1], 1 / g_screenHeight, 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1] + self.hotspot[1], self.absPosition[2] + self.size[2] + self.hotspot[4] - 1 / g_screenHeight, self.absPosition[1] + self.size[1] + self.hotspot[3] - 1 / g_screenWidth - self.absPosition[1] + self.hotspot[1], 1 / g_screenHeight, 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1] + self.hotspot[1], self.absPosition[2] + self.hotspot[2], 1 / g_screenWidth, self.absPosition[2] + self.size[2] + self.hotspot[4] - 1 / g_screenHeight - self.absPosition[2] + self.hotspot[2], 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1] + self.hotspot[1] + self.absPosition[1] + self.size[1] + self.hotspot[3] - 1 / g_screenWidth - self.absPosition[1] + self.hotspot[1], self.absPosition[2] + self.hotspot[2], 1 / g_screenWidth, self.absPosition[2] + self.size[2] + self.hotspot[4] - 1 / g_screenHeight - self.absPosition[2] + self.hotspot[2], 0, 1, 0, 0.7)
  local v18 = v18:superClass()
  v18.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function ButtonElement:setSelected(isSelected)
  if isSelected then
    self:setOverlayState(GuiOverlay.STATE_SELECTED)
    return
  end
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
end
function ButtonElement:getIsSelected()
  local clipY1 = clipY1:superClass()
  local clipX1 = clipY1.getIsSelected(self)
  clipY1 = self:getOverlayState()
  if not clipX1 and clipY1 ~= GuiOverlay.STATE_FOCUSED and clipY1 ~= GuiOverlay.STATE_PRESSED and clipY1 ~= GuiOverlay.STATE_SELECTED then
  end
  return clipX2
end
function ButtonElement:getIsHighlighted()
  local clipY1 = clipY1:superClass()
  local clipX1 = clipY1.getIsHighlighted(self)
  if not clipX1 then
    local clipX2 = self:getOverlayState()
    if clipX2 ~= GuiOverlay.STATE_HIGHLIGHTED then
    end
  end
  return clipY1
end
function ButtonElement:getOverlayState()
  if self.ignoreFocusOnTouch then
    local clipX1 = clipX1:getInputHelpMode()
    if clipX1 == GS_INPUT_HELP_MODE_TOUCH then
      return GuiOverlay.STATE_NORMAL
    end
  end
  local clipY1 = clipY1:superClass()
  clipX1 = clipY1.getOverlayState(self)
  return clipX1
end
function ButtonElement:getIconModifiedTextOffset(textOffsetX, textOffsetY)
  local v5, v6 = self:getIconSize()
  if self.textAlignment == RenderText.ALIGN_LEFT then
    return textOffsetX - self.iconTextOffset[1] + v5, textOffsetY
  end
  if self.textAlignment == RenderText.ALIGN_CENTER then
  end
  return clipX2, clipY2
end
function ButtonElement:getTextOffset()
  local clipY1 = clipY1:superClass()
  local clipX1, clipY1 = clipY1.getTextOffset(self)
  if self.isTouchMode and self.addTouchArea then
  end
  return self:getIconModifiedTextOffset(clipX1, clipY1)
end
function ButtonElement:getText2Offset()
  local clipY1 = clipY1:superClass()
  local clipX1, clipY1 = clipY1.getText2Offset(self)
  return self:getIconModifiedTextOffset(clipX1, clipY1)
end
function ButtonElement:getIconSize()
  if self.isKeyboardMode then
    return self.keyGlyphSize[1], self.keyGlyphSize[2]
  end
  return self.iconSize[1], self.iconSize[2]
end
function ButtonElement:setIconSize(x, y)
  local clipY2 = Utils.getNoNil(x, self.iconSize[1])
  self.iconSize[1] = clipY2
  clipY2 = Utils.getNoNil(y, self.iconSize[2])
  self.iconSize[2] = clipY2
  self:updateSize()
end
function ButtonElement:canReceiveFocus()
  if not self.disabled then
    local clipX2 = self:getIsVisible()
  end
  if not clipY1 then
    local clipX1 = self:getHandleFocus()
  end
  return clipX1
end
function ButtonElement:onFocusLeave()
  self:raiseCallback("onLeaveCallback", self)
end
function ButtonElement:onFocusEnter()
  self:raiseCallback("onFocusCallback", self)
end
function ButtonElement:onHighlight()
  self:raiseCallback("onHighlightCallback", self)
end
function ButtonElement:onHighlightRemove()
  self:raiseCallback("onHighlightRemoveCallback", self)
end
function ButtonElement:onFocusActivate()
  local clipX1 = self:getIsActive()
  if clipX1 then
    self:sendAction()
  end
end
function ButtonElement:isFocused()
  local clipX1 = self:getIsActive()
  if clipX1 then
    local clipY1 = self:getOverlayState()
    if clipY1 ~= GuiOverlay.STATE_FOCUSED then
    end
  end
  return clipX1
end
function ButtonElement:isPressed()
  local clipX1 = self:getIsActive()
  if clipX1 then
    local clipY1 = self:getOverlayState()
    if clipY1 ~= GuiOverlay.STATE_PRESSED then
    end
  end
  return clipX1
end
function ButtonElement:updateSize(forceTextSize)
  if self.fitToContent and self.textAutoWidth then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x3 -> L12
  end
  if not forceTextSize then
    return
  end
  local clipY1, clipX2 = self:getTextOffset()
  setTextBold(self.textBold)
  local v5 = getTextWidth(self.textSize, self.sourceText)
  setTextBold(false)
  if not self.isTouchButton and not self.isTouchButtonWithBg then
    -- if not v0.gamepadUsesTouchButton then goto L67 end
  end
  if self.isTouchMode then
    -- if not v0.addTouchArea then goto L67 end
    if self.originalHeight ~= nil then
      self.originalHeight = self.size[2]
    end
  else
    self.originalHeight = nil
  end
  self:setSize(v5, v6)
  if v7 then
    self:raiseCallback("onSizeChangedCallback", self)
  end
  if self.parent ~= nil and self.parent.invalidateLayout ~= nil then
    v8:invalidateLayout()
  end
end
function ButtonElement:setText(text, forceTextSize)
  local clipY2 = clipY2:superClass()
  clipY2.setText(self, text, forceTextSize)
  self:updateSize()
end
function ButtonElement:setTextSize(size)
  local clipX2 = clipX2:superClass()
  clipX2.setTextSize(self, size)
  self:updateSize()
end
function ButtonElement:setClickSound(soundName)
  self.clickSoundName = soundName
end
function ButtonElement:sendAction()
  self:playSample(self.clickSoundName)
  self:raiseCallback("onClickCallback", self)
end
