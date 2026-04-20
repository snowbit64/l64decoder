-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ScrollingLayoutElement = {}
local ScrollingLayoutElement_mt = Class(ScrollingLayoutElement, BoxLayoutElement)
function ScrollingLayoutElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.alignmentX = BoxLayoutElement.ALIGN_LEFT
  v2.alignmentY = BoxLayoutElement.ALIGN_TOP
  v2.clipping = true
  v2.wrapAround = true
  v2.sliderElement = nil
  v2.firstVisibleX = 0
  v2.firstVisibleY = 0
  v2.targetFirstVisibleX = 0
  v2.targetFirstVisibleY = 0
  v2.contentSize = 1
  v2.lastTouchPos = nil
  v2.usedTouchId = nil
  v2.currentTouchDelta = 0
  v2.scrollSpeed = 0
  v2.initialScrollSpeed = 0
  v2.scrollSpeedPixelPerMS = 0.005
  if v2.flowDirection == "horizontal" then
    v2.scrollSpeedInterval = v2.scrollSpeedPixelPerMS / g_screenWidth
  else
    v2.scrollSpeedInterval = v2.scrollSpeedPixelPerMS / g_screenHeight
  end
  v2.supportsTouchScrolling = false
  v2.totalTouchMoveDistance = 0
  v2.touchMoveDistanceThreshold = 30
  return v2
end
function ScrollingLayoutElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#topClipperElementName")
  self.topClipperElementName = v3
  v3 = getXMLString(xmlFile, key .. "#bottomClipperElementName")
  self.bottomClipperElementName = v3
  v4 = getXMLBool(xmlFile, key .. "#supportsTouchScrolling")
  v3 = Utils.getNoNil(v4, self.supportsTouchScrolling)
  self.supportsTouchScrolling = v3
end
function ScrollingLayoutElement:loadProfile(v1, v2)
  local v4 = v4:superClass()
  v4.loadProfile(self, v1, v2)
  local v3 = v1:getBool("supportsTouchScrolling", self.supportsTouchScrolling)
  self.supportsTouchScrolling = v3
end
function ScrollingLayoutElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.topClipperElementName = src.topClipperElementName
  self.bottomClipperElementName = src.bottomClipperElementName
  self.supportsTouchScrolling = src.supportsTouchScrolling
end
function ScrollingLayoutElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if self.topClipperElementName ~= nil then
    local v1 = v1:getDescendantByName(self.topClipperElementName)
    self.topClipperElement = v1
  end
  if self.bottomClipperElementName ~= nil then
    v1 = v1:getDescendantByName(self.bottomClipperElementName)
    self.bottomClipperElement = v1
  end
  for v4, v5 in pairs(self.elements) do
    self:addFocusListener(v5)
  end
end
function ScrollingLayoutElement:updateLayoutCells(v1)
  local v3 = v3:superClass()
  v3.updateLayoutCells(self, v1)
  for v5, v6 in pairs(self.elements) do
    self:addFocusListener(v6)
  end
end
function ScrollingLayoutElement:invalidateLayout(v1, v2)
  if not v2 then
    self:updateLayoutCells(v1)
    self:updateLayoutSizes()
  end
  local v4, v5, v6, v7 = self:getAlignmentOffset()
  self:applyCellPositions(v4 + self.firstVisibleX, v5 + self.firstVisibleY, v6, v7)
  if self.handleFocus and self.focusDirection ~= BoxLayoutElement.FLOW_NONE then
    self:focusLinkCells(self.cells)
  end
  self:updateContentSize()
  self:updateScrollClippers()
  return self.flowSize
end
function ScrollingLayoutElement:updateScrollClippers(initial)
  if self.flowDirection == "vertical" then
    if self.topClipperElement ~= nil then
      if 0.01 >= self.firstVisibleY then
      end
      v3:setVisible(true)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L87
    if self.firstVisibleY - self.contentSize - self.absSize[2] >= -0.01 then
    end
    v3:setVisible(true)
    return
  end
  if self.topClipperElement ~= nil then
    if 0.01 >= self.firstVisibleX then
    end
    v3:setVisible(true)
  end
  if self.bottomClipperElement ~= nil then
    if self.firstVisibleX - self.contentSize - self.absSize[1] >= -0.01 then
    end
    v3:setVisible(true)
  end
end
function ScrollingLayoutElement:onSliderValueChanged(slider, newValue)
  if self.flowDirection == "vertical" then
    if slider.minValue ~= slider.maxValue then
    end
    self:scrollTo(v3, false)
    return
  end
  if slider.minValue ~= slider.maxValue then
  end
  self:scrollTo(v3, false)
end
function ScrollingLayoutElement:scrollTo(startY, updateSlider, noUpdateTarget)
  if self.flowDirection == "vertical" then
    self.firstVisibleY = startY
    if not noUpdateTarget then
      self.targetFirstVisibleY = startY
      self.isMovingToTarget = false
    end
    self:invalidateLayout(false, true)
    if updateSlider ~= nil then
      -- if not v2 then goto L84 end
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L84
    v5:setValue(startY / (self.contentSize - self.absSize[2]) / self.sliderElement.maxValue, true)
  else
    self.firstVisibleX = startY
    if not noUpdateTarget then
      self.targetFirstVisibleX = startY
      self.isMovingToTarget = false
    end
    self:invalidateLayout(false, true)
    if updateSlider ~= nil then
      -- if not v2 then goto L84 end
    end
    if self.sliderElement ~= nil then
      v5:setValue(startY / (-self.contentSize + self.absSize[1]) / self.sliderElement.maxValue, true)
    end
  end
  self:raiseCallback("onScrollCallback")
end
function ScrollingLayoutElement:scrollToEnd()
  if self.flowDirection == "vertical" then
    local v3 = math.max(self.contentSize - self.absSize[2], 0)
    self:scrollTo(v3, true)
    return
  end
  local v4 = math.max(self.contentSize - self.absSize[1], 0)
  self:scrollTo(-v4, true)
end
function ScrollingLayoutElement:smoothScrollTo(offset)
  if self.flowDirection == "vertical" then
    local v3 = math.min(offset, self.contentSize - self.absSize[2])
    local v2 = math.max(v3, 0)
    self.targetFirstVisibleY = v2
    self.isMovingToTarget = true
    return
  end
  v3 = math.min(offset, self.contentSize - self.absSize[1])
  v2 = math.min(v3, 0)
  self.targetFirstVisibleX = v2
  self.isMovingToTarget = true
end
function ScrollingLayoutElement:updateContentSize()
  self:updateLayoutSizes()
  self.contentSize = self.flowSize
  if self.flowDirection == "vertical" then
    local v2 = math.min(self.firstVisibleY, self.contentSize)
    local v1 = math.max(v2, 0)
    self.firstVisibleY = v1
    v2 = math.min(self.targetFirstVisibleY, self.contentSize)
    v1 = math.max(v2, 0)
    self.targetFirstVisibleY = v1
  else
    v2 = math.min(self.firstVisibleX, self.contentSize)
    v1 = math.min(v2, 0)
    self.firstVisibleX = v1
    v2 = math.min(self.targetFirstVisibleX, self.contentSize)
    v1 = math.min(v2, 0)
    self.targetFirstVisibleX = v1
  end
  self:raiseSliderUpdateEvent()
end
function ScrollingLayoutElement:getNeedsScrolling()
  if self.flowDirection == "vertical" then
    if self.absSize[2] >= self.contentSize then
    end
    return true
  end
  if self.absSize[1] >= self.contentSize then
  end
  return true
end
function ScrollingLayoutElement:raiseSliderUpdateEvent()
  if self.sliderElement ~= nil then
    v1:onBindUpdate(self)
  end
end
function ScrollingLayoutElement.addFocusListener(v0, v1)
  local v2 = v1:findFirstFocusable(true)
  if v2.scrollingFocusEnter_orig == nil then
    v2.scrollingFocusEnter_orig = v2.onFocusEnter
  end
  v1.onFocusEnter = function(self)
    self.scrollingFocusEnter_orig(self)
    v1:scrollToMakeElementVisible(self)
  end
end
function ScrollingLayoutElement.removeElement(v0, v1)
  local v3 = v3:superClass()
  v3.removeElement(v0, v1)
  if v1.scrollingFocusEnter_orig == nil then
    v1.onFocusEnter = v1.scrollingFocusEnter_orig
  end
end
function ScrollingLayoutElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    if not GS_IS_CONSOLE_VERSION then
      self.useMouse = true
    end
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if v7 then
        v8 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_UP)
        if v8 then
        else
          v8 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_DOWN)
          if v8 then
          end
        end
        if v7 ~= 0 then
          self:smoothScrollTo(self.targetFirstVisibleY + v7 * self.contentSize * 0.05)
        end
      end
    end
  end
  return eventUsed
end
function ScrollingLayoutElement:touchEvent(v1, v2, v3, v4, v5, v6)
  local v7 = self:getIsActive()
  if v7 and not self.isMovingToTarget then
    if Platform.isMobile and self.supportsTouchScrolling and v4 and self.touchMoveDistanceThreshold <= self.totalTouchMoveDistance then
    end
    local v8 = v8:superClass()
    v7 = v8.touchEvent(self, v1, v2, v3, v4, v5, v6)
    if v7 then
    end
    if Platform.isMobile and self.supportsTouchScrolling and self.totalTouchMoveDistance < self.touchMoveDistanceThreshold then
    end
    if self.supportsTouchScrolling then
      if not v6 and self.usedTouchId == nil then
        -- if not v3 then goto L160 end
        v7 = GuiUtils.checkOverlayOverlap(v1, v2, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
        -- if not v7 then goto L160 end
        self.currentTouchDelta = 0
        if self.flowDirection == "horizontal" then
          self.lastTouchPos = v1
        else
          self.lastTouchPos = v2
        end
        self.usedTouchId = v5
        self.totalTouchMoveDistance = 0
        return true
      end
      if self.usedTouchId == v5 then
        if v4 then
          self.usedTouchId = nil
          self.initialScrollSpeed = self.scrollSpeed
          self.totalTouchMoveDistance = 0
          return v6
        end
        if self.flowDirection == "horizontal" then
          self.lastTouchPos = v1
        else
          self.lastTouchPos = v2
        end
        self.currentTouchDelta = (self.currentTouchDelta or 0) + v7
        local v11 = math.abs(v8)
        self.totalTouchMoveDistance = self.totalTouchMoveDistance + v11
      end
    end
  end
  return v6
end
function ScrollingLayoutElement:scrollToMakeElementVisible(element)
  if self.flowDirection == "vertical" then
    if element.forceFocusScrollToTop then
      self:smoothScrollTo(0, true)
      return
    end
    if v2 <= element.absPosition[2] and element.absPosition[2] > v3 then
    end
    -- if v4 then goto L175 end
    if element.absPosition[2] < self.absPosition[2] + self.absSize[2] / 2 then
    else
    end
    local v8 = MathUtil.clamp(v7, 0, self.contentSize - self.absSize[2])
    self:smoothScrollTo(v8, true)
    return
  end
  if element.forceFocusScrollToTop then
    self:smoothScrollTo(0, true)
    return
  end
  if v2 <= element.absPosition[1] and element.absPosition[1] > v3 then
  end
  if not v4 then
    if element.absPosition[1] < self.absPosition[1] + self.absSize[1] / 2 then
    else
    end
    v8 = MathUtil.clamp(v7, 0, self.contentSize - self.absSize[1])
    self:smoothScrollTo(v8, true)
  end
end
function ScrollingLayoutElement:registerActionEvents()
  v1:registerActionEvent(InputAction.MENU_AXIS_UP_DOWN_SECONDARY, self, self.onVerticalCursorInput, false, false, true, true)
end
function ScrollingLayoutElement.removeActionEvents(v0)
  v1:removeActionEventsByTarget(v0)
end
function ScrollingLayoutElement:onVerticalCursorInput(_, inputValue)
  if not self.useMouse then
    v3:setValue(self.sliderElement.currentValue + self.sliderElement.stepSize * inputValue)
  end
  self.useMouse = false
end
function ScrollingLayoutElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isMovingToTarget then
    v3 = self:getIsVisible()
    if v3 then
      v3 = math.abs(self.targetFirstVisibleY - self.firstVisibleY + (self.targetFirstVisibleY - self.firstVisibleY) * 0.01 * dt)
      -- if v3 >= 0.0005 then goto L47 end
      self.isMovingToTarget = false
    else
      self.isMovingToTarget = false
    end
    self:scrollTo(v2, nil, true)
  end
  if self.supportsTouchScrolling then
    if self.usedTouchId == nil then
    end
    v3 = math.abs(self.scrollSpeed)
    if not true then
      -- if 0.0001 >= v3 then goto L191 end
    end
    if self.flowDirection == "vertical" then
    else
    end
    if v2 then
      self.scrollSpeed = self.currentTouchDelta / dt
    else
      local v6 = MathUtil.sign(self.scrollSpeed)
      local v9 = math.max(v3 - dt * self.scrollSpeedInterval, 0)
      self.scrollSpeed = v9 * v6
    end
    if v4 ~= 0 then
      -- cmp-jump LOP_JUMPXEQKS R6 aux=0x80000012 -> L164
      v9 = math.min(self.contentSize - self.absSize[2], v5 + v4)
      local v8 = math.max(v9, 0)
      self:scrollTo(...)
    elseif v4 ~= 0 then
      v9 = math.max(-self.contentSize + self.absSize[1], v5 + v4)
      v8 = math.min(v9, 0)
      self:scrollTo(...)
    end
    self.currentTouchDelta = 0
  end
end
