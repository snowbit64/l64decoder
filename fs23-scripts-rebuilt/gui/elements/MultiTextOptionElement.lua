-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MultiTextOptionElement = {ELEMENT_BG = 1, ELEMENT_LEFT = 2, ELEMENT_RIGHT = 3, ELEMENT_TEXT = 4}
local MultiTextOptionElement_mt = Class(MultiTextOptionElement, GuiElement)
function MultiTextOptionElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:include(IndexChangeSubjectMixin)
  v2:include(PlaySampleMixin)
  v2.isChecked = false
  v2.inputEntered = false
  v2.buttonLRChange = false
  v2.canChangeState = true
  v2.state = 1
  v2.wrap = true
  v2.hideButtonOnLimitReached = false
  v2.texts = {}
  v2.registerContinuousInput = false
  v2.isLeftButtonPressed = false
  v2.isRightButtonPressed = false
  v2.wasContinuousTrigger = false
  v2.scrollDelayDuration = FocusManager.FIRST_LOCK
  v2.leftDelayTime = 0
  v2.rightDelayTime = 0
  v2.delayTime = 0
  v2.forceHighlight = false
  v2.leftButtonElement = nil
  v2.rightButtonElement = nil
  v2.textElement = nil
  v2.labelElement = nil
  v2.iconElement = nil
  v2.bgElement = nil
  v2.defaultProfileButtonLeft = "multiTextOptionLeft"
  v2.defaultProfileButtonRight = "multiTextOptionRight"
  v2.defaultProfileText = "multiTextOptionText"
  v2.defaultProfileBg = "multiTextOptionBg"
  v2.autoAddDefaultElements = false
  v2.namedComponents = false
  v2.gradientElements = {}
  return v2
end
function MultiTextOptionElement:loadFromXML(xmlFile, key)
  local xmlFilename = getXMLFilename(xmlFile)
  local v4, v5 = Utils.getModNameAndBaseDirectory(xmlFilename)
  if v4 ~= nil then
    self.customEnvironment = v4
  end
  local v7 = v7:superClass()
  v7.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  self:addCallback(xmlFile, key .. "#onFocus", "onFocusCallback")
  self:addCallback(xmlFile, key .. "#onLeave", "onLeaveCallback")
  v7 = getXMLBool(xmlFile, key .. "#wrap")
  local v6 = Utils.getNoNil(v7, self.wrap)
  self.wrap = v6
  v7 = getXMLBool(xmlFile, key .. "#hideButtonOnLimitReached")
  v6 = Utils.getNoNil(v7, self.hideButtonOnLimitReached)
  self.hideButtonOnLimitReached = v6
  v7 = getXMLBool(xmlFile, key .. "#buttonLRChange")
  v6 = Utils.getNoNil(v7, self.buttonLRChange)
  self.buttonLRChange = v6
  v7 = getXMLInt(xmlFile, key .. "#scrollDelayDuration")
  v6 = Utils.getNoNil(v7, self.scrollDelayDuration)
  self.scrollDelayDuration = v6
  v7 = getXMLBool(xmlFile, key .. "#registerContinuousInput")
  v6 = Utils.getNoNil(v7, self.registerContinuousInput)
  self.registerContinuousInput = v6
  v7 = getXMLBool(xmlFile, key .. "#namedComponents")
  v6 = Utils.getNoNil(v7, self.namedComponents)
  self.namedComponents = v6
  v6 = getXMLString(xmlFile, key .. "#texts")
  if v6 ~= nil then
    v7 = v6:split("|")
    for v11, v12 in pairs(v7) do
      local v13 = v12:sub(1, 6)
      if v13 == "$l10n_" then
        local v15 = v12:sub(7)
        v13 = v13:getText(v15, self.customEnvironment)
      end
      table.insert(self.texts, v12)
    end
  end
  self.xmlFile = xmlFile
  self.xmlKey = key
end
function MultiTextOptionElement:onElementCreated()
  local v2 = getXMLBool(self.xmlFile, self.xmlKey .. "#autoAddDefaultElements")
  local v1 = Utils.getNoNil(v2, self.autoAddDefaultElements)
  if v1 then
    self:addDefaultElements(self.xmlFile, self.xmlKey)
  end
end
function MultiTextOptionElement:addDefaultElements(v1, v2)
  while true do
    v5 = string.format(v2 .. ".GuiElement(%d)", v4)
    v6 = hasXMLProperty(v1, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(v1, v5 .. "#name")
    if v6 ~= nil then
      if v6 == "left" then
        v3[MultiTextOptionElement.ELEMENT_LEFT] = true
      elseif v6 == "right" then
        v3[MultiTextOptionElement.ELEMENT_RIGHT] = true
      else
        if v6 == "text" then
          v3[MultiTextOptionElement.ELEMENT_TEXT] = true
        elseif v6 == "background" then
          v3[MultiTextOptionElement.ELEMENT_BG] = true
        end
      end
    end
  end
  if v3[MultiTextOptionElement.ELEMENT_BG] == nil then
    v5 = BitmapElement.new(self)
    v5:applyProfile(self.defaultProfileBg, true)
    v5.name = "background"
    self:addElement(v5)
  end
  if v3[MultiTextOptionElement.ELEMENT_LEFT] == nil then
    v5 = ButtonElement.new(self)
    v5:applyProfile(self.defaultProfileButtonLeft, true)
    v5.name = "left"
    self:addElement(v5)
  end
  if v3[MultiTextOptionElement.ELEMENT_RIGHT] == nil then
    v5 = ButtonElement.new(self)
    v5:applyProfile(self.defaultProfileButtonRight, true)
    v5.name = "right"
    self:addElement(v5)
  end
  if v3[MultiTextOptionElement.ELEMENT_TEXT] == nil then
    v5 = TextElement.new(self)
    v5:applyProfile(self.defaultProfileText, true)
    v5.name = "text"
    self:addElement(v5)
  end
end
function MultiTextOptionElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getBool("wrap", self.wrap)
  self.wrap = v3
  v3 = profile:getBool("hideButtonOnLimitReached", self.hideButtonOnLimitReached)
  self.hideButtonOnLimitReached = v3
  v3 = profile:getBool("buttonLRChange", self.buttonLRChange)
  self.buttonLRChange = v3
  v3 = profile:getValue("scrollDelayDuration", self.scrollDelayDuration)
  self.scrollDelayDuration = v3
  v3 = profile:getBool("registerContinuousInput", self.registerContinuousInput)
  self.registerContinuousInput = v3
  v3 = profile:getValue("defaultProfileButtonLeft", self.defaultProfileButtonLeft)
  self.defaultProfileButtonLeft = v3
  v3 = profile:getValue("defaultProfileButtonRight", self.defaultProfileButtonRight)
  self.defaultProfileButtonRight = v3
  v3 = profile:getValue("defaultProfileText", self.defaultProfileText)
  self.defaultProfileText = v3
  v3 = profile:getValue("defaultProfileBg", self.defaultProfileBg)
  self.defaultProfileBg = v3
  v3 = profile:getBool("autoAddDefaultElements", self.autoAddDefaultElements)
  self.autoAddDefaultElements = v3
  v3 = profile:getValue("texts")
  if v3 ~= nil then
    v4 = v3:split("|")
    for v8, v9 in pairs(v4) do
      local v10 = v9:sub(1, 6)
      if v10 == "$l10n_" then
        local v12 = v9:sub(7)
        v10 = v10:getText(...)
      end
      table.insert(self.texts, v9)
    end
  end
end
function MultiTextOptionElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.isChecked = src.isChecked
  self.buttonLRChange = src.buttonLRChange
  self.state = src.state
  self.wrap = src.wrap
  self.hideButtonOnLimitReached = src.hideButtonOnLimitReached
  self.scrollDelayDuration = src.scrollDelayDuration
  self.registerContinuousInput = src.registerContinuousInput
  self.canChangeState = src.canChangeState
  self.namedComponents = src.namedComponents
  self.onClickCallback = src.onClickCallback
  self.onLeaveCallback = src.onLeaveCallback
  self.onFocusCallback = src.onFocusCallback
  for v5, v6 in pairs(src.texts) do
    self:addText(v6)
  end
  GuiMixin.cloneMixin(IndexChangeSubjectMixin, src, self)
  GuiMixin.cloneMixin(PlaySampleMixin, src, self)
end
function MultiTextOptionElement:setState(state, forceEvent)
  local v5 = math.min(state, #self.texts)
  local v4 = math.max(v5, 1)
  self.state = v4
  self:updateContentElement()
  if forceEvent then
    self:raiseClickCallback(true)
  end
  self:notifyIndexChange(self.state, v3)
end
function MultiTextOptionElement:setForceHighlight(needForceHighlight)
  self.forceHighlight = needForceHighlight
end
function MultiTextOptionElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if element.name == "ignore" then
    return
  end
  if element.name == "left" then
    if self.leftButtonElement ~= nil then
      v2:delete()
    end
    self.leftButtonElement = element
    self.leftButtonElement.forceHighlight = true
    element:setHandleFocus(false)
    element.target = self
    element:setCallback("onClickCallback", "onLeftButtonClicked")
    self:setDisabled(self.disabled)
    return
  end
  if element.name == "right" then
    if self.rightButtonElement ~= nil then
      v2:delete()
    end
    self.rightButtonElement = element
    self.rightButtonElement.forceHighlight = true
    element.target = self
    element:setHandleFocus(false)
    element:setCallback("onClickCallback", "onRightButtonClicked")
    self:setDisabled(self.disabled)
    return
  end
  if element.name == "label" then
    self.labelElement = element
    return
  end
  if element.name == "text" then
    local v2 = element:isa(TextElement)
    -- if not v2 then goto L292 end
    if self.textElement ~= nil then
      v2:delete()
    end
    self.textElement = element
    self:updateContentElement()
    return
  end
  if element.name == "icon" then
    self.iconElement = element
    self:updateContentElement()
    return
  end
  if element.name == "gradient" then
    v2 = element:isa(BitmapElement)
    -- if not v2 then goto L292 end
    table.insert(self.gradientElements, element)
    return
  end
  if element.name == "background" then
    if self.bgElement ~= nil then
      v2:delete()
    end
    self.bgElement = element
    element.size[1] = self.size[1]
    return
  end
  if element.name == nil then
    if #self.elements == 1 then
      self.leftButtonElement = element
      self.leftButtonElement.forceHighlight = true
      element:setHandleFocus(false)
      element.target = self
      element:setCallback("onClickCallback", "onLeftButtonClicked")
      self:setDisabled(self.disabled)
      return
    end
    if v2 == 2 then
      self.rightButtonElement = element
      self.rightButtonElement.forceHighlight = true
      element.target = self
      element:setHandleFocus(false)
      element:setCallback("onClickCallback", "onRightButtonClicked")
      self:setDisabled(self.disabled)
      return
    end
    if v2 == 3 then
      v3 = element:isa(TextElement)
      if v3 then
        self.textElement = element
        self:updateContentElement()
        return
      end
      self.iconElement = element
      self:updateContentElement()
      return
    end
    if v2 == 4 then
      self.labelElement = element
      return
    end
    if v2 == 5 then
      v3 = element:isa(TextElement)
      -- if not v3 then goto L292 end
      self.textElement = element
      self:updateContentElement()
      return
    end
    if v2 ~= 6 then
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x8000002e -> L292
    end
    if self.textElement ~= nil then
      v3 = element:isa(BitmapElement)
      if v3 then
        table.insert(self.gradientElements, element)
      end
    end
  end
end
function MultiTextOptionElement:disableButtonSounds()
  if self.leftButtonElement ~= nil then
    v1:disablePlaySample()
  end
  if self.rightButtonElement ~= nil then
    v1:disablePlaySample()
  end
end
function MultiTextOptionElement:addText(text, i)
  if i == nil then
    table.insert(self.texts, text)
  else
    table.insert(self.texts, i, text)
  end
  self:updateContentElement()
  self:notifyIndexChange(self.state, #self.texts)
end
function MultiTextOptionElement:setTexts(texts)
  if not texts then
  end
  self.texts = v2
  local v2 = math.min(self.state, #self.texts)
  self.state = v2
  self:updateContentElement()
  self:notifyIndexChange(self.state, #self.texts)
end
function MultiTextOptionElement:setIcons(icons)
  if not icons then
  end
  self.texts = v2
  local v2 = math.min(self.state, #self.texts)
  self.state = v2
  self:updateContentElement()
  self:notifyIndexChange(self.state, #self.texts)
end
function MultiTextOptionElement:setLabel(labelString)
  v2:setText(labelString)
end
function MultiTextOptionElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    if self.wasContinuousTrigger then
      -- if v4 then goto L26 end
    end
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
      -- goto L27  (LOP_JUMP +1)
    end
    if isDown then
      v8 = GuiUtils.checkOverlayOverlap(posX, posY, self.leftButtonElement.absPosition[1], self.leftButtonElement.absPosition[2], self.leftButtonElement.size[1], self.leftButtonElement.size[2], self.leftButtonElement.hotspot)
      self.isLeftButtonPressed = v8
      local v9 = GuiUtils.checkOverlayOverlap(posX, posY, self.rightButtonElement.absPosition[1], self.rightButtonElement.absPosition[2], self.rightButtonElement.size[1], self.rightButtonElement.size[2], self.rightButtonElement.hotspot)
      self.isRightButtonPressed = v9
      self.delayTime = g_time + self.scrollDelayDuration
    elseif isUp then
      self.delayTime = math.huge
      self.wasContinuousTrigger = false
      self.isLeftButtonPressed = false
      self.isRightButtonPressed = false
    end
    if not eventUsed and not self.forceHighlight then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2], nil)
      if v7 then
        -- if v0.inputEntered then goto L150 end
        -- if v0.focusActive then goto L150 end
        v7:setHighlight(self)
        self.inputEntered = true
        return eventUsed
      end
    end
    if self.inputEntered and not self.focusActive then
      v7:unsetHighlight(self)
      self.inputEntered = false
    end
  end
  return eventUsed
end
function MultiTextOptionElement:touchEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    if self.wasContinuousTrigger then
      -- if v4 then goto L26 end
    end
    local v8 = v8:superClass()
    v7 = v8.touchEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
      -- goto L27  (LOP_JUMP +1)
    end
    if isDown then
      v8 = GuiUtils.checkOverlayOverlap(posX, posY, self.leftButtonElement.absPosition[1], self.leftButtonElement.absPosition[2], self.leftButtonElement.size[1], self.leftButtonElement.size[2], self.leftButtonElement.hotspot)
      self.isLeftButtonPressed = v8
      local v9 = GuiUtils.checkOverlayOverlap(posX, posY, self.rightButtonElement.absPosition[1], self.rightButtonElement.absPosition[2], self.rightButtonElement.size[1], self.rightButtonElement.size[2], self.rightButtonElement.hotspot)
      self.isRightButtonPressed = v9
      self.delayTime = g_time + self.scrollDelayDuration
    elseif isUp then
      self.delayTime = math.huge
      self.wasContinuousTrigger = false
      self.isLeftButtonPressed = false
      self.isRightButtonPressed = false
    end
    if not eventUsed and not self.forceHighlight then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2], nil)
      if v7 then
        -- if v0.inputEntered then goto L150 end
        -- if v0.focusActive then goto L150 end
        v7:setHighlight(self)
        self.inputEntered = true
        return eventUsed
      end
    end
    if self.inputEntered and not self.focusActive then
      v7:unsetHighlight(self)
      self.inputEntered = false
    end
  end
  return eventUsed
end
function MultiTextOptionElement:inputEvent(action, value, eventUsed)
  local button = button:superClass()
  local isUp = button.inputEvent(self, action, value, eventUsed)
  if not isUp then
    if action == InputAction.MENU_AXIS_LEFT_RIGHT then
      if value < -g_analogStickHTolerance then
        self:inputLeft(false)
        return true
      end
      -- if g_analogStickHTolerance >= v2 then goto L58 end
      self:inputRight(false)
      return true
    end
    if action == InputAction.MENU_PAGE_PREV then
      self:inputLeft(true)
      return true
    end
    if action == InputAction.MENU_PAGE_NEXT then
      self:inputRight(true)
    end
  end
  return eventUsed
end
function MultiTextOptionElement:update(posX)
  local isDown = isDown:superClass()
  isDown.update(self)
  if self.registerContinuousInput then
    if not self.isLeftButtonPressed then
      -- if not v0.isRightButtonPressed then goto L49 end
    end
    if self.delayTime <= g_time then
      if self.isLeftButtonPressed then
        self:inputLeft(false)
      end
      if self.isRightButtonPressed then
        self:inputRight(false, true)
      end
      self.wasContinuousTrigger = true
      self.delayTime = g_time + self.scrollDelayDuration
    end
  end
end
function MultiTextOptionElement:inputReleaseEvent(action)
  local isDown = isDown:superClass()
  isDown.inputReleaseEvent(self, action)
  if action ~= InputAction.MENU_AXIS_LEFT_RIGHT and action ~= InputAction.MENU_PAGE_PREV then
    -- if v1 ~= InputAction.MENU_PAGE_NEXT then goto L28 end
  end
  self.leftDelayTime = 0
  self.rightDelayTime = 0
end
function MultiTextOptionElement:inputLeft(isShoulderButton)
  if self.leftDelayTime <= g_time then
    if isShoulderButton then
      local posY = self:getIsVisible()
      if posY then
        -- if v0.buttonLRChange then goto L26 end
      end
    end
    posY = posY:isFocused()
    if not posY then
      posY = posY:isPressed()
      -- if not v2 then goto L49 end
    end
    self:onLeftButtonClicked(nil, true)
    posY:setFocus(self)
    self.leftDelayTime = g_time + self.scrollDelayDuration
    self.rightDelayTime = 0
    return true
  end
  return false
end
function MultiTextOptionElement:inputRight(isShoulderButton)
  if self.rightDelayTime <= g_time then
    if isShoulderButton then
      local posY = self:getIsVisible()
      if posY then
        -- if v0.buttonLRChange then goto L26 end
      end
    end
    posY = posY:isFocused()
    if not posY then
      posY = posY:isPressed()
      -- if not v2 then goto L49 end
    end
    self:onRightButtonClicked(nil, true)
    posY:setFocus(self)
    self.rightDelayTime = g_time + self.scrollDelayDuration
    self.leftDelayTime = 0
    return true
  end
  return false
end
function MultiTextOptionElement:onRightButtonClicked(steps, noFocus)
  local isDown = self:getCanChangeState()
  if isDown then
    if steps == nil then
    end
    if steps ~= nil then
      isDown = type(steps)
      if isDown ~= "number" then
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 20, target 54)
    if self.wrap then
      self.state = self.state + 1
      -- if #v0.texts >= v0.state then goto L53 end
      self.state = 1
    else
      local eventUsed = math.min(self.state + 1, #self.texts)
      self.state = eventUsed
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 21)
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
    self:setSoundSuppressed(true)
    isDown:setFocus(self)
    self:setSoundSuppressed(false)
    self:updateContentElement()
    self:raiseClickCallback(false)
    self:notifyIndexChange(self.state, #self.texts)
    if noFocus ~= nil then
      -- if v2 then goto L109 end
    end
    if self.leftButtonElement ~= nil then
      isDown:onFocusEnter()
    end
    if self.rightButtonElement ~= nil then
      isDown:onFocusEnter()
    end
  end
end
function MultiTextOptionElement:raiseClickCallback(isLeftButtonEvent)
  self:raiseCallback("onClickCallback", self.state, self, isLeftButtonEvent)
end
function MultiTextOptionElement:onLeftButtonClicked(steps, noFocus)
  local isDown = self:getCanChangeState()
  if isDown then
    if steps == nil then
    end
    if steps ~= nil then
      isDown = type(steps)
      if isDown ~= "number" then
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 20, target 54)
    if self.wrap then
      self.state = self.state - 1
      -- if v0.state >= 1 then goto L53 end
      local eventUsed = table.getn(self.texts)
      self.state = eventUsed
    else
      eventUsed = math.max(self.state - 1, 1)
      self.state = eventUsed
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 21)
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
    self:setSoundSuppressed(true)
    isDown:setFocus(self)
    self:setSoundSuppressed(false)
    self:updateContentElement()
    self:raiseClickCallback(true)
    self:notifyIndexChange(self.state, #self.texts)
    if noFocus ~= nil then
      -- if v2 then goto L109 end
    end
    if self.leftButtonElement ~= nil then
      isDown:onFocusEnter()
    end
    if self.rightButtonElement ~= nil then
      isDown:onFocusEnter()
    end
  end
end
function MultiTextOptionElement:getCanChangeState()
  return self.canChangeState
end
function MultiTextOptionElement:setCanChangeState(canChangeState)
  self.canChangeState = canChangeState
end
function MultiTextOptionElement:canReceiveFocus(element, direction)
  if not self.disabled then
    local isDown = self:getIsVisible()
    if isDown then
    end
  end
  return isDown
end
function MultiTextOptionElement:onFocusLeave()
  local posY = posY:superClass()
  posY.onFocusLeave(self)
  self:raiseCallback("onLeaveCallback", self)
  if self.rightButtonElement ~= nil and self.rightButtonElement.state ~= GuiOverlay.STATE_NORMAL then
    posX:onFocusLeave()
  end
  if self.leftButtonElement ~= nil and self.leftButtonElement.state ~= GuiOverlay.STATE_NORMAL then
    posX:onFocusLeave()
  end
end
function MultiTextOptionElement:onFocusEnter()
  local posY = posY:superClass()
  posY.onFocusEnter(self)
  if self.rightButtonElement ~= nil and self.rightButtonElement.state ~= GuiOverlay.STATE_FOCUSED then
    posX:onFocusEnter()
  end
  if self.leftButtonElement ~= nil and self.leftButtonElement.state ~= GuiOverlay.STATE_FOCUSED then
    posX:onFocusEnter()
  end
  self:raiseCallback("onFocusCallback", self)
end
function MultiTextOptionElement:onHighlight()
  local posY = posY:superClass()
  posY.onHighlight(self)
  if self.rightButtonElement ~= nil then
    local posX = posX:getOverlayState()
    if posX == GuiOverlay.STATE_NORMAL then
      posX:setOverlayState(GuiOverlay.STATE_HIGHLIGHTED)
    end
  end
  if self.leftButtonElement ~= nil then
    posX = posX:getOverlayState()
    if posX == GuiOverlay.STATE_NORMAL then
      posX:setOverlayState(GuiOverlay.STATE_HIGHLIGHTED)
    end
  end
end
function MultiTextOptionElement:onHighlightRemove()
  local posY = posY:superClass()
  posY.onHighlightRemove(self)
  if self.rightButtonElement ~= nil then
    local posX = posX:getOverlayState()
    if posX == GuiOverlay.STATE_HIGHLIGHTED then
      posX:setOverlayState(GuiOverlay.STATE_NORMAL)
    end
  end
  if self.leftButtonElement ~= nil then
    posX = posX:getOverlayState()
    if posX == GuiOverlay.STATE_HIGHLIGHTED then
      posX:setOverlayState(GuiOverlay.STATE_NORMAL)
    end
  end
end
function MultiTextOptionElement:updateContentElement()
  if self.texts[self.state] ~= nil then
    local posY = self.texts[self.state]:lower()
    posY = posY:contains(".png")
    if not posY then
      posY = self.texts[self.state]:lower()
      posY = posY:contains(".dds")
    end
  end
  if self.iconElement ~= nil then
    if posX ~= nil and posY then
      isUp:setImageFilename(posX)
      isUp:setVisible(true)
      -- TODO: structure LOP_FORNPREP (pc 48, target 57)
      v7:setVisible(false)
      -- TODO: structure LOP_FORNLOOP (pc 56, target 49)
    end
    if not isDown then
      isUp:setVisible(false)
      -- TODO: structure LOP_FORNPREP (pc 70, target 79)
      v7:setVisible(true)
      -- TODO: structure LOP_FORNLOOP (pc 78, target 71)
    end
  end
  if self.textElement ~= nil then
    if not isDown then
      -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L94
      -- if v2 then goto L94 end
      isUp:setText(posX)
    else
      isUp:setText("")
    end
  end
  if self.hideButtonOnLimitReached and not self.wrap then
    if self.leftButtonElement ~= nil then
      if self.state == 1 then
      end
      isUp:setVisible(true)
    end
    if self.rightButtonElement ~= nil then
      if self.state == #self.texts then
      end
      isUp:setVisible(true)
    end
  end
end
function MultiTextOptionElement:getState()
  return self.state
end
