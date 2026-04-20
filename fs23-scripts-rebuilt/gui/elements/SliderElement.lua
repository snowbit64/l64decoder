-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SliderElement = {}
local SliderElement_mt = Class(SliderElement, GuiElement)
SliderElement.DIRECTION_X = 1
SliderElement.DIRECTION_Y = 2
function SliderElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:include(PlaySampleMixin)
  v2.mouseDown = false
  v2.minValue = 0
  v2.maxValue = 100
  v2.currentValue = 0
  v2.sliderValue = 0
  v2.stepSize = 1
  v2.direction = SliderElement.DIRECTION_X
  v2.hasButtons = true
  v2.isThreePartBitmap = false
  v2.overlay = {}
  v2.sliderOverlay = {}
  v2.startOverlay = {}
  v2.endOverlay = {}
  v2.startSize = {0, 0}
  v2.midSize = {0, 0}
  v2.endSize = {0, 0}
  v2.sliderOffset = -0.012
  v2.sliderSize = {1, 1}
  v2.sliderPosition = {0, 0}
  v2.adjustSliderSize = true
  v2.textElement = nil
  v2.dataElementId = nil
  v2.textElementId = nil
  v2.minAbsSliderPos = 0.08
  v2.maxAbsSliderPos = 0.92
  v2.isSliderVisible = true
  v2.needsSlider = true
  v2.useStepRounding = false
  v2.hideParentWhenEmpty = false
  return v2
end
function SliderElement:delete()
  GuiOverlay.deleteOverlay(self.endOverlay)
  GuiOverlay.deleteOverlay(self.startOverlay)
  GuiOverlay.deleteOverlay(self.sliderOverlay)
  GuiOverlay.deleteOverlay(self.overlay)
  local v2 = v2:superClass()
  v2.delete(self)
end
function SliderElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.sliderOverlay, "sliderImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.startOverlay, "startImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.endOverlay, "endImage", self.imageSize, nil, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#direction")
  if v3 ~= nil then
    if v3 == "y" then
      self.direction = SliderElement.DIRECTION_Y
    elseif v3 == "x" then
      self.direction = SliderElement.DIRECTION_X
    end
  end
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  self:addCallback(xmlFile, key .. "#onChanged", "onChangedCallback")
  local v5 = getXMLBool(xmlFile, key .. "#hasButtons")
  v4 = Utils.getNoNil(v5, self.hasButtons)
  self.hasButtons = v4
  v5 = getXMLFloat(xmlFile, key .. "#minValue")
  v4 = Utils.getNoNil(v5, self.minValue)
  self.minValue = v4
  v5 = getXMLFloat(xmlFile, key .. "#maxValue")
  v4 = Utils.getNoNil(v5, self.maxValue)
  self.maxValue = v4
  v5 = getXMLFloat(xmlFile, key .. "#currentValue")
  v4 = Utils.getNoNil(v5, self.currentValue)
  self.currentValue = v4
  v5 = getXMLFloat(xmlFile, key .. "#stepSize")
  v4 = Utils.getNoNil(v5, self.stepSize)
  self.stepSize = v4
  v5 = getXMLBool(xmlFile, key .. "#isThreePartBitmap")
  v4 = Utils.getNoNil(v5, self.isThreePartBitmap)
  self.isThreePartBitmap = v4
  v5 = getXMLBool(xmlFile, key .. "#hideParentWhenEmpty")
  v4 = Utils.getNoNil(v5, self.hideParentWhenEmpty)
  self.hideParentWhenEmpty = v4
  v5 = getXMLBool(xmlFile, key .. "#useStepRounding")
  v4 = Utils.getNoNil(v5, self.useStepRounding)
  self.useStepRounding = v4
  local v6 = getXMLString(xmlFile, key .. "#sliderOffset")
  v5 = GuiUtils.getNormalizedValues(v6, {self.outputSize[2]}, {self.sliderOffset})
  v4 = unpack(...)
  self.sliderOffset = v4
  v5 = getXMLString(xmlFile, key .. "#sliderSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.sliderSize)
  self.sliderSize = v4
  v5 = getXMLString(xmlFile, key .. "#startImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.startSize)
  self.startSize = v4
  v5 = getXMLString(xmlFile, key .. "#midImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.midSize)
  self.midSize = v4
  v5 = getXMLString(xmlFile, key .. "#endImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.endSize)
  self.endSize = v4
  v4 = getXMLString(xmlFile, key .. "#dataElementId")
  self.dataElementId = v4
  v4 = getXMLString(xmlFile, key .. "#dataElementName")
  self.dataElementName = v4
  v4 = getXMLString(xmlFile, key .. "#textElementId")
  self.textElementId = v4
  GuiOverlay.createOverlay(self.overlay)
  GuiOverlay.createOverlay(self.sliderOverlay)
  GuiOverlay.createOverlay(self.startOverlay)
  GuiOverlay.createOverlay(self.endOverlay)
end
function SliderElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.sliderOverlay, "sliderImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.startOverlay, "startImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.endOverlay, "endImage", self.imageSize, profile, nil, nil)
  local v3 = profile:getValue("direction")
  if v3 ~= nil then
    if v3 == "y" then
      self.direction = SliderElement.DIRECTION_Y
    elseif v3 == "x" then
      self.direction = SliderElement.DIRECTION_X
    end
  end
  v4 = profile:getBool("hasButtons", self.hasButtons)
  self.hasButtons = v4
  v4 = profile:getNumber("minValue", self.minValue)
  self.minValue = v4
  v4 = profile:getNumber("maxValue", self.maxValue)
  self.maxValue = v4
  v4 = profile:getNumber("currentValue", self.currentValue)
  self.currentValue = v4
  v4 = profile:getNumber("stepSize", self.stepSize)
  self.stepSize = v4
  v4 = profile:getBool("isThreePartBitmap", self.isThreePartBitmap)
  self.isThreePartBitmap = v4
  v4 = profile:getBool("hideParentWhenEmpty", self.hideParentWhenEmpty)
  self.hideParentWhenEmpty = v4
  v4 = profile:getBool("useStepRounding", self.useStepRounding)
  self.useStepRounding = v4
  local v6 = profile:getValue("sliderOffset")
  local v5 = GuiUtils.getNormalizedValues(v6, {self.outputSize[2]}, {self.sliderOffset})
  v4 = unpack(...)
  self.sliderOffset = v4
  v5 = profile:getValue("sliderSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.sliderSize)
  self.sliderSize = v4
  v5 = profile:getValue("startImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.startSize)
  self.startSize = v4
  v5 = profile:getValue("midImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.midSize)
  self.midSize = v4
  v5 = profile:getValue("endImageSize")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.endSize)
  self.endSize = v4
  if applyProfile then
    self:applySliderAspectScale()
  end
end
function SliderElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  GuiOverlay.copyOverlay(self.overlay, src.overlay)
  GuiOverlay.copyOverlay(self.sliderOverlay, src.sliderOverlay)
  GuiOverlay.copyOverlay(self.startOverlay, src.startOverlay)
  GuiOverlay.copyOverlay(self.endOverlay, src.endOverlay)
  self.direction = src.direction
  self.hasButtons = src.hasButtons
  self.minValue = src.minValue
  self.maxValue = src.maxValue
  self.currentValue = src.currentValue
  self.stepSize = src.stepSize
  self.sliderOffset = src.sliderOffset
  local applyProfile = table.copy(src.sliderSize)
  self.sliderSize = applyProfile
  self.isThreePartBitmap = src.isThreePartBitmap
  self.hideParentWhenEmpty = src.hideParentWhenEmpty
  self.useStepRounding = src.useStepRounding
  applyProfile = table.copy(src.startSize)
  self.startSize = applyProfile
  applyProfile = table.copy(src.midSize)
  self.midSize = applyProfile
  applyProfile = table.copy(src.endSize)
  self.endSize = applyProfile
  self.dataElementId = src.dataElementId
  self.dataElementName = src.dataElementName
  self.textElementId = src.textElementId
  self.onClickCallback = src.onClickCallback
  self.onChangedCallback = src.onChangedCallback
  GuiMixin.cloneMixin(PlaySampleMixin, src, self)
end
function SliderElement:applySliderAspectScale()
  local profile, applyProfile = self:getAspectScale()
  self.sliderSize[1] = self.sliderSize[1] * profile
  self.sliderOffset = self.sliderOffset * applyProfile
  self.sliderSize[2] = self.sliderSize[2] * applyProfile
  self.startSize[1] = self.startSize[1] * profile
  self.midSize[1] = self.midSize[1] * profile
  self.endSize[1] = self.endSize[1] * profile
  self.startSize[2] = self.startSize[2] * applyProfile
  self.midSize[2] = self.midSize[2] * applyProfile
  self.endSize[2] = self.endSize[2] * applyProfile
end
function SliderElement:applyScreenAlignment()
  self:applySliderAspectScale()
  local applyProfile = applyProfile:superClass()
  applyProfile.applyScreenAlignment(self)
end
function SliderElement:setSliderVisible(visible)
  self.isSliderVisible = visible
end
function SliderElement:onGuiSetupFinished()
  local applyProfile = applyProfile:superClass()
  applyProfile.onGuiSetupFinished(self)
  if self.textElementId ~= nil then
    if self.target[self.textElementId] ~= nil then
      self.textElement = self.target[self.textElementId]
    else
      print("Warning: TextElementId '" .. self.textElementId .. "' not found for '" .. self.target.name .. "'!")
    end
  end
  if self.dataElementId ~= nil then
    if self.target[self.dataElementId] ~= nil then
      self:setDataElement(self.target[self.dataElementId])
      return
    end
    print("Warning: DataElementId '" .. self.dataElementId .. "' not found for '" .. self.target.name .. "'!")
    return
  end
  if self.dataElementName ~= nil and self.parent then
    applyProfile = applyProfile:getFirstDescendant(function(self)
      if self.name and self.name ~= u0.dataElementName then
      end
      return profile
    end)
    if applyProfile then
      self:setDataElement(applyProfile)
      return
    end
    local v10 = tostring(self.parent)
    print("Warning: DataElementName '" .. self.dataElementName .. "' not found as descendant of '" .. v10 .. "'!")
  end
end
function SliderElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if self.hasButtons then
    local applyProfile = table.getn(self.elements)
    if applyProfile == 1 then
      self.upButtonElement = element
      element.target = self
      if self.direction == SliderElement.DIRECTION_Y then
        element:setCallback("onClickCallback", "onScrollDown")
      else
        element:setCallback("onClickCallback", "onScrollUp")
      end
      self:setDisabled(self.disabled)
      return
    end
    applyProfile = table.getn(self.elements)
    if applyProfile == 2 then
      self.downButtonElement = element
      element.target = self
      if self.direction == SliderElement.DIRECTION_Y then
        element:setCallback("onClickCallback", "onScrollUp")
      else
        element:setCallback("onClickCallback", "onScrollDown")
      end
      self:setDisabled(self.disabled)
    end
  end
end
function SliderElement:setDataElement(element, doNotUpdate)
  if self.dataElement ~= nil then
    self.dataElement.sliderElement = nil
    self.dataElement = nil
  end
  if element ~= nil then
    element.sliderElement = self
    self.dataElement = element
    if doNotUpdate ~= nil then
      -- if not v2 then goto L26 end
    end
    self:onBindUpdate(element, false)
  end
end
function SliderElement:setValue(newValue, doNotUpdateDataElement, immediateMode)
  local v5 = math.max(newValue, self.minValue)
  local v4 = math.min(v5, self.maxValue)
  self.sliderValue = v4
  self:updateSliderPosition()
  if self.useStepRounding then
    if self.stepSize - (newValue - self.minValue) % self.stepSize <= (newValue - self.minValue) % self.stepSize then
    else
    end
    local v6 = math.max(newValue, self.minValue)
    v5 = math.min(v6, self.maxValue)
  end
  v4 = math.floor(newValue * 100000 + 0.5)
  if v4 / 100000 ~= self.currentValue then
    self.currentValue = v4 / 100000
    if self.textElement ~= nil then
      v4:setText(self.currentValue)
    end
    self:callOnChanged()
    for v7, v8 in pairs(self.elements) do
      if not (v8.onSliderValueChanged ~= nil) then
        continue
      end
      v8:onSliderValueChanged(self, newValue, immediateMode)
    end
    if self.dataElement ~= nil then
      if doNotUpdateDataElement ~= nil then
        -- if v2 then goto L116 end
      end
      v4:onSliderValueChanged(self, newValue, immediateMode)
    end
    self:updateSliderButtons()
    return true
  end
  return false
end
function SliderElement:updateSliderButtons()
  if self.upButtonElement ~= nil then
    if not self.disabled and self.currentValue ~= self.maxValue then
    end
    profile:setDisabled(v3)
  end
  if self.downButtonElement ~= nil then
    if not self.disabled and self.currentValue ~= self.minValue then
    end
    profile:setDisabled(v3)
  end
end
function SliderElement:setMinValue(minValue)
  local applyProfile = math.max(minValue, 1)
  self.minValue = applyProfile
  if self.currentValue < self.minValue then
    self:setValue(self.minValue, nil, true)
  end
  self:updateSliderPosition()
end
function SliderElement:setMaxValue(maxValue)
  local applyProfile = math.max(maxValue, 1)
  self.maxValue = applyProfile
  if self.maxValue < self.currentValue then
    self:setValue(self.maxValue, nil, true)
  end
  self:updateSliderPosition()
end
function SliderElement:getMinValue()
  return self.minValue
end
function SliderElement:getMaxValue()
  return self.maxValue
end
function SliderElement:getValue()
  return self.currentValue
end
function SliderElement:updateAbsolutePosition()
  local applyProfile = applyProfile:superClass()
  applyProfile.updateAbsolutePosition(self)
  self:updateSliderLimits()
end
function SliderElement:setSize(x, y)
  local v4 = v4:superClass()
  v4.setSize(self, x, y)
  self:updateSliderLimits()
end
function SliderElement:updateSliderLimits()
  if self.direction == SliderElement.DIRECTION_Y then
  end
  self.minAbsSliderPos = self.absPosition[profile]
  self.maxAbsSliderPos = self.absPosition[profile] + self.absSize[profile] - self.sliderSize[profile]
  self:updateSliderPosition()
end
function SliderElement:setAlpha(alpha)
  local v3 = v3:superClass()
  v3.setAlpha(self, alpha)
  if self.overlay ~= nil then
    self.overlay.alpha = self.alpha
  end
  if self.sliderOverlay ~= nil then
    self.sliderOverlay.alpha = self.alpha
  end
end
function SliderElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    if self.mouseDown and isUp and button == Input.MOUSE_BUTTON_LEFT then
      self.clickedOnSlider = false
      self.mouseDown = false
      self:raiseCallback("onClickCallback", self.currentValue)
    end
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if not v7 then
        v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.sliderPosition[1], self.sliderPosition[2], self.sliderSize[1], self.sliderSize[2])
        -- if not v7 then goto L158 end
      end
      v7 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_UP)
      if v7 then
        self:setValue(self.currentValue - self.stepSize, nil, false)
      end
      v7 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_DOWN)
      if v7 then
        self:setValue(self.currentValue + self.stepSize, nil, false)
      end
      if isDown and button == Input.MOUSE_BUTTON_LEFT then
        if not self.mouseDown then
          v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.sliderPosition[1], self.sliderPosition[2], self.sliderSize[1], self.sliderSize[2])
          if v7 then
            self.clickedOnSlider = true
            self.lastMousePosX = posX
            self.lastMousePosY = posY
            self.lastSliderPosX = self.sliderPosition[1]
            self.lastSliderPosY = self.sliderPosition[2]
          end
        end
        self.mouseDown = true
      end
    end
    if self.mouseDown then
      if self.direction == SliderElement.DIRECTION_Y then
        if self.clickedOnSlider then
          -- goto L278  (LOP_JUMP +75)
        end
        if self.sliderPosition[2] + self.sliderSize[2] < v8 then
        end
      elseif self.clickedOnSlider then
      else
        if self.sliderPosition[1] + self.sliderSize[1] < posX then
        end
      end
      self:setValue(v7, nil, true)
    end
  end
  return eventUsed
end
function SliderElement:updateSliderPosition()
  if self.maxValue ~= self.minValue then
    -- if (v0.sliderValue - v0.minValue) / (v0.maxValue - v0.minValue) then goto L19 end
  end
  if self.direction == SliderElement.DIRECTION_Y then
    self.sliderPosition[1] = self.absPosition[1] + self.sliderOffset
    local isDown = MathUtil.lerp(self.minAbsSliderPos, self.maxAbsSliderPos, 1 - 0)
    self.sliderPosition[2] = isDown
  else
    isDown = MathUtil.lerp(self.minAbsSliderPos, self.maxAbsSliderPos, 0)
    self.sliderPosition[1] = isDown
    self.sliderPosition[2] = self.absPosition[2] + self.sliderOffset
  end
  self:updateSliderButtons()
end
function SliderElement:callOnChanged()
  self:raiseCallback("onChangedCallback", self.currentValue)
end
function SliderElement:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  local eventUsed = self:getIsActive()
  if eventUsed then
    local v7 = v7:superClass()
    eventUsed = v7.keyEvent(self, unicode, sym, modifier, isDown, eventUsed)
    if eventUsed then
      return true
    end
  end
  return false
end
function SliderElement:draw(clipX1, clipY1, clipX2, clipY2)
  if self.disabled then
  end
  GuiOverlay.renderOverlay(self.overlay, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2], button, clipX1, clipY1, clipX2, clipY2)
  if self.isSliderVisible and self.needsSlider then
    if self.isThreePartBitmap then
      if self.direction == SliderElement.DIRECTION_X then
        GuiOverlay.renderOverlay(self.startOverlay, self.sliderPosition[1], self.sliderPosition[2], self.startSize[1], self.sliderSize[2], button, clipX1, clipY1, clipX2, clipY2)
        GuiOverlay.renderOverlay(self.sliderOverlay, self.sliderPosition[1] + self.startSize[1], self.sliderPosition[2], self.sliderSize[1] - self.startSize[1] - self.endSize[1], self.sliderSize[2], button, clipX1, clipY1, clipX2, clipY2)
        GuiOverlay.renderOverlay(self.endOverlay, self.sliderPosition[1] + self.sliderSize[1] - self.endSize[1], self.sliderPosition[2], self.endSize[1], self.sliderSize[2], button, clipX1, clipY1, clipX2, clipY2)
        -- goto L220  (LOP_JUMP +95)
      end
      GuiOverlay.renderOverlay(self.startOverlay, eventUsed, v7 + self.sliderSize[2] - self.startSize[2], self.sliderSize[1], self.startSize[2], button, clipX1, clipY1, clipX2, clipY2)
      GuiOverlay.renderOverlay(self.sliderOverlay, eventUsed, v7 + self.endSize[2], self.sliderSize[1], self.sliderSize[2] - self.startSize[2] - self.endSize[2], button, clipX1, clipY1, clipX2, clipY2)
      GuiOverlay.renderOverlay(self.endOverlay, eventUsed, v7, self.sliderSize[1], self.endSize[2], button, clipX1, clipY1, clipX2, clipY2)
    else
      GuiOverlay.renderOverlay(self.sliderOverlay, self.sliderPosition[1], self.sliderPosition[2], self.sliderSize[1], self.sliderSize[2], button, clipX1, clipY1, clipX2, clipY2)
    end
  end
  local v7 = v7:superClass()
  v7.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function SliderElement:shouldFocusChange(direction)
  if self.direction == SliderElement.DIRECTION_Y then
  end
  if direction == posY then
    if self.currentValue <= self.minValue then
      return true
    end
    self:setValue(self.currentValue - self.stepSize, nil, false)
    self:raiseCallback("onClickCallback", self.currentValue)
    return false
  end
  if direction == isDown then
    if self.maxValue <= self.currentValue then
      return true
    end
    self:setValue(self.currentValue + self.stepSize, nil, false)
    self:raiseCallback("onClickCallback", self.currentValue)
    return false
  end
  return true
end
function SliderElement:canReceiveFocus()
  return self.handleFocus
end
function SliderElement.onFocusLeave(v0)
end
function SliderElement.onFocusEnter(v0)
end
function SliderElement:onFocusActivate()
  self:raiseCallback("onClickCallback", self.currentValue)
end
function SliderElement:onScrollUp()
  self:setValue(self.currentValue + self.stepSize, nil, false)
end
function SliderElement:onScrollDown()
  self:setValue(self.currentValue - self.stepSize, nil, false)
end
function SliderElement:setSliderSize(visibleItems, maxItems)
  if self.adjustSliderSize then
    if self.direction == SliderElement.DIRECTION_Y then
    end
    if maxItems ~= 0 then
      -- if v0.size[v3] * v1 / v2 then goto L24 end
    end
    isUp[isDown] = 0
    if self.isThreePartBitmap then
      local button = math.max(self.sliderSize[isDown], self.startSize[isDown] + self.endSize[isDown], self.absSize[isDown] * 0.025)
      self.sliderSize[isDown] = button
    else
      button = math.max(self.sliderSize[isDown], self.absSize[isDown] * 0.05)
      self.sliderSize[isDown] = button
    end
    self:updateSliderLimits()
  end
end
function SliderElement:onBindUpdate(element)
  local posY = element:isa(ListElement)
  if posY then
    posY = element:getItemCount()
    local isDown = element:getVisibleItemCount()
    self.useStepRounding = true
    self:setMinValue(1)
    local v8 = math.ceil(posY - isDown)
    local v9 = element:getItemFactor()
    self:setMaxValue(v8 / v9 + 1)
    self:setSliderSize(isDown, posY)
    local eventUsed = math.max(element.firstVisibleItem, 1)
    self:setValue(eventUsed, true, true)
    if isDown >= posY then
    end
    self.needsSlider = true
  else
    posY = element:isa(ScrollingLayoutElement)
    if posY then
      self:setMinValue(1)
      self.useStepRounding = true
      posY = element:getNeedsScrolling()
      if posY then
        self:setMaxValue(element.contentSize / element.absSize[2] * 20)
        self:setSliderSize(element.absSize[2], element.contentSize)
        self.needsSlider = true
        -- goto L214  (LOP_JUMP +118)
      end
      self:setMaxValue(1)
      self:setSliderSize(10, 100)
      self.needsSlider = false
    else
      posY = element:isa(SmoothListElement)
      if posY then
        if element.lengthAxis == 1 then
          -- if g_screenWidth then goto L124 end
        end
        isDown = MathUtil.round(element.contentSize * g_screenHeight)
        local isUp = MathUtil.round(element.scrollViewOffsetDelta * g_screenHeight)
        local button = MathUtil.round(element.absSize[element.lengthAxis] * g_screenHeight)
        if isUp ~= 0 then
          eventUsed = math.ceil(isDown / isUp)
          -- if v6 then goto L154 end
        end
        if isUp ~= 0 then
          local v7 = math.floor(button / isUp)
          -- if v7 then goto L163 end
        end
        v8 = math.max(eventUsed - 0, 0)
        self:setMinValue(1)
        self:setMaxValue(v8 + 1)
        self:setSliderSize(element.absSize[element.lengthAxis], element.contentSize)
        if element.absSize[element.lengthAxis] >= element.contentSize then
        end
        self.needsSlider = true
        local v14 = element:getViewOffsetPercentage()
        self:setValue(v14 * (self.maxValue - self.minValue) + self.minValue, true, true)
      end
    end
  end
  if self.hideParentWhenEmpty then
    posY:setVisible(self.needsSlider)
  end
end
