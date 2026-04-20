-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ListElement = {}
local ListElement_mt = Class(ListElement, GuiElement)
function ListElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:include(IndexChangeSubjectMixin)
  v2.doesFocusScrollList = true
  v2.isHorizontalList = false
  v2.useSelectionOnLeave = false
  v2.selectOnScroll = false
  v2.updateSelectionOnOpen = true
  v2.supportsMouseScrolling = true
  v2.ignoreMouse = false
  v2.keepSelectedInView = false
  v2.maxNumItems = nil
  v2.visibleItems = 5
  v2.doubleClickInterval = 400
  v2.listItems = {}
  v2.listItemStartXOffset = 0
  v2.listItemStartYOffset = 0
  v2.listItemWidth = 0
  v2.listItemHeight = 0
  v2.listItemPadding = 0
  v2.listItemSpacing = 0
  v2.listItemAutoSize = false
  v2.firstVisibleItem = 1
  v2.lastFirstVisibleItem = 1
  v2.selectedIndex = 1
  v2.mouseRow = 0
  v2.mouseCol = 0
  v2.lastClickTime = nil
  v2.selectOnClick = false
  v2.isPaginated = false
  v2.rowBackgroundProfile = ""
  v2.rowBackgroundProfileAlternate = ""
  v2.itemsPerRow = 1
  v2.itemsPerCol = 1
  v2.currentRow = 1
  v2.currentCol = 1
  v2.sliderElement = nil
  return v2
end
function ListElement:delete()
  self.deletingAllListItems = true
  -- TODO: structure LOP_FORNPREP (pc 9, target 17)
  v5:delete()
  -- TODO: structure LOP_FORNLOOP (pc 16, target 10)
  local v3 = v3:superClass()
  v3.delete(self)
end
function ListElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLBool(xmlFile, key .. "#focusScrollsList")
  local v3 = Utils.getNoNil(v4, self.doesFocusScrollList)
  self.doesFocusScrollList = v3
  v4 = getXMLBool(xmlFile, key .. "#isHorizontalList")
  v3 = Utils.getNoNil(v4, self.isHorizontalList)
  self.isHorizontalList = v3
  v4 = getXMLBool(xmlFile, key .. "#updateSelectionOnOpen")
  v3 = Utils.getNoNil(v4, self.updateSelectionOnOpen)
  self.updateSelectionOnOpen = v3
  v4 = getXMLBool(xmlFile, key .. "#useSelectionOnLeave")
  v3 = Utils.getNoNil(v4, self.useSelectionOnLeave)
  self.useSelectionOnLeave = v3
  v4 = getXMLBool(xmlFile, key .. "#selectOnScroll")
  v3 = Utils.getNoNil(v4, self.selectOnScroll)
  self.selectOnScroll = v3
  v4 = getXMLBool(xmlFile, key .. "#supportsMouseScrolling")
  v3 = Utils.getNoNil(v4, self.supportsMouseScrolling)
  self.supportsMouseScrolling = v3
  v4 = getXMLInt(xmlFile, key .. "#maxNumItems")
  v3 = Utils.getNoNil(v4, self.maxNumItems)
  self.maxNumItems = v3
  v4 = getXMLInt(xmlFile, key .. "#doubleClickInterval")
  v3 = Utils.getNoNil(v4, self.doubleClickInterval)
  self.doubleClickInterval = v3
  v4 = getXMLBool(xmlFile, key .. "#selectOnClick")
  v3 = Utils.getNoNil(v4, self.selectOnClick)
  self.selectOnClick = v3
  v4 = getXMLBool(xmlFile, key .. "#ignoreMouse")
  v3 = Utils.getNoNil(v4, self.ignoreMouse)
  self.ignoreMouse = v3
  v4 = getXMLBool(xmlFile, key .. "#keepSelectedInView")
  v3 = Utils.getNoNil(v4, self.keepSelectedInView)
  self.keepSelectedInView = v3
  v4 = getXMLBool(xmlFile, key .. "#isPaginated")
  v3 = Utils.getNoNil(v4, self.isPaginated)
  self.isPaginated = v3
  v4 = getXMLInt(xmlFile, key .. "#itemsPerRow")
  v3 = Utils.getNoNil(v4, self.itemsPerRow)
  self.itemsPerRow = v3
  v4 = getXMLInt(xmlFile, key .. "#itemsPerCol")
  v3 = Utils.getNoNil(v4, self.itemsPerCol)
  self.itemsPerCol = v3
  self.visibleItems = self.itemsPerRow * self.itemsPerCol
  local v5 = getXMLString(xmlFile, key .. "#listItemStartXOffset")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemStartXOffset})
  v3 = unpack(...)
  self.listItemStartXOffset = v3
  v5 = getXMLString(xmlFile, key .. "#listItemStartYOffset")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemStartYOffset})
  v3 = unpack(...)
  self.listItemStartYOffset = v3
  v5 = getXMLString(xmlFile, key .. "#listItemWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemWidth})
  v3 = unpack(...)
  self.listItemWidth = v3
  v5 = getXMLString(xmlFile, key .. "#listItemHeight")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemHeight})
  v3 = unpack(...)
  self.listItemHeight = v3
  v5 = getXMLString(xmlFile, key .. "#listItemPadding")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemPadding})
  v3 = unpack(...)
  self.listItemPadding = v3
  v5 = getXMLString(xmlFile, key .. "#listItemSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemSpacing})
  v3 = unpack(...)
  self.listItemSpacing = v3
  v3 = getXMLBool(xmlFile, key .. "#listItemAutoSize")
  if not v3 then
  end
  self.listItemAutoSize = v3
  v4 = getXMLString(xmlFile, key .. "#rowBackgroundProfile")
  v3 = Utils.getNoNil(v4, self.rowBackgroundProfile)
  self.rowBackgroundProfile = v3
  v4 = getXMLString(xmlFile, key .. "#rowBackgroundProfileAlternate")
  v3 = Utils.getNoNil(v4, self.rowBackgroundProfileAlternate)
  self.rowBackgroundProfileAlternate = v3
  self:addCallback(xmlFile, key .. "#onSelectionChanged", "onSelectionChangedCallback")
  self:addCallback(xmlFile, key .. "#onScroll", "onScrollCallback")
  self:addCallback(xmlFile, key .. "#onDoubleClick", "onDoubleClickCallback")
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  self:addCallback(xmlFile, key .. "#onItemAppear", "onItemAppearCallback")
  self:addCallback(xmlFile, key .. "#onItemDisappear", "onItemDisappearCallback")
end
function ListElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getBool("focusScrollsList", self.doesFocusScrollList)
  self.doesFocusScrollList = v3
  v3 = profile:getBool("isHorizontalList", self.isHorizontalList)
  self.isHorizontalList = v3
  v3 = profile:getBool("updateSelectionOnOpen", self.updateSelectionOnOpen)
  self.updateSelectionOnOpen = v3
  v3 = profile:getBool("useSelectionOnLeave", self.useSelectionOnLeave)
  self.useSelectionOnLeave = v3
  v3 = profile:getBool("selectOnScroll", self.selectOnScroll)
  self.selectOnScroll = v3
  v3 = profile:getBool("supportsMouseScrolling", self.supportsMouseScrolling)
  self.supportsMouseScrolling = v3
  v3 = profile:getNumber("maxNumItems", self.maxNumItems)
  self.maxNumItems = v3
  v3 = profile:getNumber("itemsPerRow", self.itemsPerRow)
  self.itemsPerRow = v3
  v3 = profile:getNumber("itemsPerCol", self.itemsPerCol)
  self.itemsPerCol = v3
  v3 = profile:getNumber("doubleClickInterval", self.doubleClickInterval)
  self.doubleClickInterval = v3
  v3 = profile:getBool("selectOnClick", self.selectOnClick)
  self.selectOnClick = v3
  v3 = profile:getBool("ignoreMouse", self.ignoreMouse)
  self.ignoreMouse = v3
  v3 = profile:getBool("keepSelectedInView", self.keepSelectedInView)
  self.keepSelectedInView = v3
  v3 = profile:getBool("isPaginated", self.isPaginated)
  self.isPaginated = v3
  v3 = profile:getValue("rowBackgroundProfile", self.rowBackgroundProfile)
  self.rowBackgroundProfile = v3
  v3 = profile:getValue("rowBackgroundProfileAlternate", self.rowBackgroundProfileAlternate)
  self.rowBackgroundProfileAlternate = v3
  local v5 = profile:getValue("listItemStartXOffset")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemStartXOffset})
  v3 = unpack(...)
  self.listItemStartXOffset = v3
  v5 = profile:getValue("listItemStartYOffset")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemStartYOffset})
  v3 = unpack(...)
  self.listItemStartYOffset = v3
  v5 = profile:getValue("listItemWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemWidth})
  v3 = unpack(...)
  self.listItemWidth = v3
  v5 = profile:getValue("listItemHeight")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemHeight})
  v3 = unpack(...)
  self.listItemHeight = v3
  v5 = profile:getValue("listItemPadding")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.listItemPadding})
  v3 = unpack(...)
  self.listItemPadding = v3
  v5 = profile:getValue("listItemSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.listItemSpacing})
  v3 = unpack(...)
  self.listItemSpacing = v3
  v3 = profile:getBool("listItemAutoSize", self.listItemAutoSize)
  self.listItemAutoSize = v3
  if applyProfile then
    self:applyListAspectScale()
  end
end
function ListElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.doesFocusScrollList = src.doesFocusScrollList
  self.isHorizontalList = src.isHorizontalList
  self.updateSelectionOnOpen = src.updateSelectionOnOpen
  self.useSelectionOnLeave = src.useSelectionOnLeave
  self.selectOnScroll = src.selectOnScroll
  self.supportsMouseScrolling = src.supportsMouseScrolling
  self.doubleClickInterval = src.doubleClickInterval
  self.selectOnClick = src.selectOnClick
  self.ignoreMouse = src.ignoreMouse
  self.maxNumItems = src.maxNumItems
  self.keepSelectedInView = src.keepSelectedInView
  self.isPaginated = src.isPaginated
  self.visibleItems = src.visibleItems
  self.itemsPerRow = src.itemsPerRow
  self.itemsPerCol = src.itemsPerCol
  self.listItemStartXOffset = src.listItemStartXOffset
  self.listItemStartYOffset = src.listItemStartYOffset
  self.listItemWidth = src.listItemWidth
  self.listItemHeight = src.listItemHeight
  self.listItemPadding = src.listItemPadding
  self.listItemSpacing = src.listItemSpacing
  self.listItemAutoSize = src.listItemAutoSize
  self.rowBackgroundProfile = src.rowBackgroundProfile
  self.rowBackgroundProfileAlternate = src.rowBackgroundProfileAlternate
  self.onSelectionChangedCallback = src.onSelectionChangedCallback
  self.onScrollCallback = src.onScrollCallback
  self.onDoubleClickCallback = src.onDoubleClickCallback
  self.onClickCallback = src.onClickCallback
  self.onItemAppearCallback = src.onItemAppearCallback
  self.onItemDisappearCallback = src.onItemDisappearCallback
  GuiMixin.cloneMixin(IndexChangeSubjectMixin, src, self)
end
function ListElement:applyListAspectScale()
  local v1, v2 = self:getAspectScale()
  self.listItemStartXOffset = self.listItemStartXOffset * v1
  self.listItemWidth = self.listItemWidth * v1
  self.listItemPadding = self.listItemPadding * v1
  self.listItemStartYOffset = self.listItemStartYOffset * v2
  self.listItemHeight = self.listItemHeight * v2
  self.listItemSpacing = self.listItemSpacing * v2
end
function ListElement:applyScreenAlignment()
  self:applyListAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function ListElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if self.listItemAutoSize then
    local v1 = self:getFirstDescendant(function(self)
      return self:isa(ListItemElement)
    end)
    if v1 ~= nil then
      local v2, v3 = unpack(v1.absSize)
      self.listItemWidth = v2
      self.listItemHeight = v3
    end
  end
end
function ListElement:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if self.updateSelectionOnOpen then
    self:setSelectedIndex(self.selectedIndex)
  end
end
function ListElement:onSliderValueChanged(slider, newValue)
  local v6 = math.floor(newValue + 0.001)
  local v7 = self:getItemFactor()
  self:scrollTo(v6 * v7, false)
end
function ListElement:raiseSliderUpdateEvent()
  if self.sliderElement ~= nil then
    v1:onBindUpdate(self)
  end
end
function ListElement:scrollTo(index, updateSlider)
  local itemFactor = self:getItemFactor()
  local v5 = math.ceil(index / itemFactor)
  if not self.isPaginated then
    local v12 = self:getItemCount()
    local v10 = math.ceil(v12 / itemFactor)
    v5 = math.min(v5 * itemFactor - itemFactor - 1, v10 * itemFactor - self.visibleItems + 1)
    local v4 = math.max(v5, 1)
  end
  if index ~= self.firstVisibleItem then
    self.firstVisibleItem = index
    self:updateItemPositions()
    if self.keepSelectedInView then
      if self.selectedIndex >= self.firstVisibleItem then
        -- if v0.firstVisibleItem + v0.visibleItems - 1 >= v0.selectedIndex then goto L99 end
      end
      v4 = MathUtil.sign(index - self.selectedIndex)
      if self.selectedIndex < self.firstVisibleItem then
        self:setSelectedIndex(self.firstVisibleItem, nil, v4)
      else
        self:setSelectedIndex(self.firstVisibleItem + self.visibleItems - 1, nil, v4)
      end
    end
    if updateSlider ~= nil then
      -- if not v2 then goto L117 end
    end
    if self.sliderElement ~= nil then
      local v6 = math.ceil(index / itemFactor)
      v4:setValue(v6, true)
    end
    self:raiseCallback("onScrollCallback")
  end
end
function ListElement:calculateFirstVisibleItem(index)
  local itemFactor = self:getItemFactor()
  local v4 = self:getItemCount()
  if index < self.firstVisibleItem then
    local v6 = math.ceil(index / itemFactor)
  elseif self.firstVisibleItem + self.visibleItems <= index then
    if self.isPaginated then
      local page = math.ceil(index / self.visibleItems)
      -- goto L58  (LOP_JUMP +14)
    end
    local v7 = math.ceil(index / itemFactor)
  else
    if v4 == 0 then
    end
  end
  page = MathUtil.clamp(v2, 1, v4)
  return page
end
function ListElement:getItemFactor()
  if self.isHorizontalList then
    return self.itemsPerCol
  end
  return self.itemsPerRow
end
function ListElement:scrollList(delta)
  if delta ~= 0 then
    if self.isHorizontalList then
    else
    end
    self:scrollTo(v2)
  end
end
function ListElement:setSelectedIndex(index, force, direction)
  local page = MathUtil.clamp(index, 0, #self.listItems)
  if page ~= self.selectedIndex then
    self.lastClickTime = nil
  end
  if self.listItems[page] ~= nil and self.listItems[page].disabled then
    if #self.listItems >= page + (direction or 1) then
      -- if v5 + (v3 or 1) >= 1 then goto L44 end
    end
    if page == 0 then
      self:scrollTo(1)
    end
    return
    if direction == 0 then
      return
    end
    return self:setSelectedIndex(page, force, direction or 1)
  end
  if self.selectedIndex == page then
  end
  self.selectedIndex = page
  local v7 = self:calculateFirstVisibleItem(page)
  if not true then
    -- if v7 == v0.firstVisibleItem then goto L75 end
  end
  self:scrollTo(v7)
  if not v6 then
    -- if not v2 then goto L87 end
  end
  self:notifyIndexChange(page, v4)
  self:raiseCallback("onSelectionChangedCallback", page)
  if 0 < self.firstVisibleItem then
    -- TODO: structure LOP_FORNPREP (pc 96, target 118)
    if v4 >= self.firstVisibleItem + 1 - 1 then
      if self.listItems[self.firstVisibleItem + 1 - 1].setSelected ~= nil then
        if page ~= self.firstVisibleItem + 1 - 1 then
        end
        v11:setSelected(true)
      end
      -- TODO: structure LOP_FORNLOOP (pc 117, target 97)
    end
  end
end
function ListElement:getSelectedElementIndex()
  return self.selectedIndex
end
function ListElement:getSelectedElement()
  if 1 <= self.selectedIndex then
    local itemFactor = self:getSelectedElementIndex()
    return self.listItems[itemFactor], self.selectedIndex
  end
end
function ListElement:updateAbsolutePosition()
  local v2 = v2:superClass()
  v2.updateAbsolutePosition(self)
  self:updateItemPositions()
end
function ListElement:addElement(element)
  self:addElementAtPosition(element, #self.listItems + 1)
end
function ListElement:addElementAtPosition(element, position)
  local v4 = v4:superClass()
  v4.addElement(self, element)
  if self.maxNumItems ~= nil then
    -- if #v0.listItems > v0.maxNumItems then goto L81 end
  end
  table.insert(self.listItems, position, element)
  element:fadeOut()
  self:setDisabled(self.disabled)
  self:updateAlternatingBackground()
  if position <= self.selectedIndex then
    self:setSelectedIndex(self.selectedIndex + 1)
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x8000000d -> L62
    self:updateItemPositions()
  else
    self:updateItemPositions()
  end
  self:raiseSliderUpdateEvent()
  if not element.focusId then
    itemFactor:loadElementFromCustomValues(element, nil, element.focusChangeData, element.focusActive, element.isAlwaysFocusedOnOpen)
  end
  self:notifyIndexChange(self.selectedIndex, #self.listItems)
end
function ListElement:removeElement(element)
  if not self.deletingAllListItems then
    -- TODO: structure LOP_FORNPREP (pc 8, target 49)
    if self.listItems[1] == element then
      table.remove(self.listItems, 1)
      v6:removeElement(element)
      self:setDisabled(self.disabled)
      if #self.listItems <= self.selectedIndex then
        self:setSelectedIndex(self.selectedIndex - 1)
      end
      self:raiseSliderUpdateEvent()
    else
      -- TODO: structure LOP_FORNLOOP (pc 48, target 9)
    end
    if 1 < self.firstVisibleItem and #self.listItems - self.visibleItems < self.firstVisibleItem then
      if #self.listItems < self.selectedIndex then
        self:setSelectedIndex(#self.listItems)
      else
        self:scrollTo(#self.listItems)
      end
    end
  end
  local itemFactor = itemFactor:superClass()
  itemFactor.removeElement(self, element)
end
function ListElement:deleteListItems()
  -- TODO: structure LOP_FORNPREP (pc 6, target 14)
  page:delete()
  -- TODO: structure LOP_FORNLOOP (pc 13, target 7)
  self.selectedIndex = 1
  self:notifyIndexChange(1, #self.listItems)
  self:raiseSliderUpdateEvent()
end
function ListElement:onMouseDown()
  self.mouseDown = true
  index:setFocus(self)
end
function ListElement:onMouseUp()
  if self.mouseRow ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x1 -> L67
    local index, v2 = self:convertVisualRowColumToReal(self.mouseRow, self.mouseCol)
    self:setSelectionByRealRowAndColumn(index, v2, 0)
    local itemFactor = self:getUnclampedIndexByRealRowColumn(index, v2)
    if self.lastClickTime ~= nil then
      -- if v0.target.time - v0.doubleClickInterval >= v0.lastClickTime then goto L53 end
      if itemFactor == self.selectedIndex then
        self:notifyDoubleClick(itemFactor)
      end
      self.lastClickTime = nil
    else
      self.lastClickTime = self.target.time
    end
    -- if v0.selectOnClick then goto L70 end
    self:notifyClick(itemFactor)
  else
    self.lastClickTime = nil
  end
  self.mouseDown = false
end
function ListElement:notifyDoubleClick(clickedElementIndex)
  self:raiseCallback("onDoubleClickCallback", clickedElementIndex, self.listItems[clickedElementIndex])
end
function ListElement:notifyClick(clickedElementIndex)
  self:raiseCallback("onClickCallback", clickedElementIndex, self.listItems[clickedElementIndex])
end
function ListElement:updateAlternatingBackground(forceProfile)
  if self.rowBackgroundProfile and self.rowBackgroundProfile ~= "" and self.rowBackgroundProfileAlternate then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000001 -> L15
  end
  return
  -- TODO: structure LOP_FORNPREP (pc 20, target 44)
  if not self.listItems[1].doNotAlternate then
    if 1 % 2 == 0 then
      self.listItems[1]:applyProfile(self.rowBackgroundProfile, forceProfile)
    else
      self.listItems[1]:applyProfile(self.rowBackgroundProfileAlternate, forceProfile)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 43, target 21)
end
function ListElement:getRowColumnForScreenPosition(posX, posY)
  local v7 = math.ceil((posX - self.absPosition[1]) / self.listItemWidth)
  v7 = math.floor((self.absPosition[2] + self.absSize[2] - posY) / self.listItemHeight)
  local page = math.ceil((posX - self.absPosition[1] - (v7 - 1) * self.listItemPadding) / self.listItemWidth)
  local v6 = math.ceil((self.absPosition[2] + self.absSize[2] - posY - (v7 - 1) * self.listItemSpacing) / self.listItemHeight)
  return v6, page
end
function ListElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 and not self.ignoreMouse then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    self.mouseRow = 0
    self.mouseCol = 0
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if v7 then
        v7, v8 = self:getRowColumnForScreenPosition(posX, posY)
        self.mouseRow = v7
        self.mouseCol = v8
        if isDown then
          if button == Input.MOUSE_BUTTON_LEFT then
            self:onMouseDown()
          end
          if self.supportsMouseScrolling then
            v8 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_UP)
            if v8 then
            else
              v8 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_DOWN)
              if v8 then
              end
            end
            if v7 ~= 0 then
              if self.selectOnScroll then
                local v11 = self:getItemCount()
                v8 = MathUtil.clamp(...)
                self:setSelectedIndex(v8, nil, v7)
              else
                self:scrollList(v7)
              end
            end
          end
        end
        if isUp and button == Input.MOUSE_BUTTON_LEFT and self.mouseDown then
          self:onMouseUp()
        end
      end
    end
  end
  return eventUsed
end
function ListElement:updateItemPositionsInRange(startIndex, endIndex)
  -- TODO: structure LOP_FORNPREP (pc 14, target 83)
  local v10 = self.listItems[startIndex]:getIsVisible()
  local v11, v12 = self:getItemPosition(self.listItemStartXOffset, self.absSize[2] - self.listItemStartYOffset - self.listItemHeight, startIndex - self.firstVisibleItem, self.listItems[startIndex])
  self.listItems[startIndex]:setPosition(v11, v12)
  if self.firstVisibleItem <= startIndex then
    -- if v1 >= v0.firstVisibleItem + v0.visibleItems then goto L57 end
    self.listItems[startIndex]:fadeIn()
    -- if v10 then goto L66 end
    self:raiseCallback("onItemAppearCallback", self.listItems[startIndex])
  else
    self.listItems[startIndex]:fadeOut()
    if v10 then
      self:raiseCallback("onItemDisappearCallback", self.listItems[startIndex])
    end
  end
  v8:reset()
  if v8.setSelected ~= nil then
    if v7 ~= self.selectedIndex then
    end
    v8:setSelected(true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 82, target 15)
end
function ListElement:updateItemPositions()
  if self.ignoreUpdate ~= nil then
    -- if v0.ignoreUpdate then goto L64 end
  end
  if 0 < #self.listItems and self.selectedIndex == 0 then
    self.selectedIndex = 1
  end
  if 0 < self.firstVisibleItem then
    local scrollDiff = math.abs(self.lastFirstVisibleItem - self.firstVisibleItem)
    local v4 = math.max(1, self.firstVisibleItem - scrollDiff)
    local v6 = self:getItemCount()
    local page = math.min(v6, self.firstVisibleItem + self.visibleItems + scrollDiff)
    self:updateItemPositionsInRange(...)
  end
  self.lastFirstVisibleItem = self.firstVisibleItem
end
function ListElement:getItemPosition(leftPos, topPos, index, item)
  if self.isHorizontalList then
    local v8 = math.floor(index / self.itemsPerCol)
    return leftPos + v8 * (self.listItemWidth + self.listItemPadding), topPos - index % self.itemsPerCol * (self.listItemHeight + self.listItemSpacing)
  end
  v8 = math.floor(index / self.itemsPerRow)
  return leftPos + index % self.itemsPerRow * (self.listItemWidth + self.listItemPadding), topPos - v8 * (self.listItemHeight + self.listItemSpacing)
end
function ListElement:getRealRowColumnByIndex(index)
  if self.isHorizontalList then
    local v4 = math.floor((index - 1) / self.itemsPerCol)
    return (index - 1) % self.itemsPerCol + 1, v4 + 1
  end
  v4 = math.ceil(index / self.itemsPerRow)
  return v4, (index - 1) % self.itemsPerRow + 1
end
function ListElement:getNumOfRows()
  local itemFactor = self:getItemCount()
  return math.ceil(itemFactor / self.itemsPerRow)
end
function ListElement:getNumOfColumns()
  local itemFactor = self:getItemCount()
  return math.ceil(itemFactor / self.itemsPerCol)
end
function ListElement:getItemCount()
  return #self.listItems
end
function ListElement:getVisibleItemCount()
  return self.visibleItems
end
function ListElement:getUnclampedIndexByRealRowColumn(realRow, realColumn)
  if self.isHorizontalList then
    return realRow + (realColumn - 1) * self.itemsPerCol
  end
  return realColumn + (realRow - 1) * self.itemsPerRow
end
function ListElement:getItemIndexByRealRowColumn(realRow, realColumn)
  local number = self:getUnclampedIndexByRealRowColumn(realRow, realColumn)
  local v7 = self:getItemCount()
  return MathUtil.clamp(...)
end
function ListElement:convertVisualRowColumToReal(row, column)
  if self.isHorizontalList then
    local page = math.floor((self.firstVisibleItem - 1) / self.itemsPerCol)
    return row, page + column
  end
  page = math.floor((self.firstVisibleItem - 1) / self.itemsPerRow)
  return page + row, v4
end
function ListElement:setSelectionByRealRowAndColumn(realRow, realCol, direction)
  local index = self:getItemIndexByRealRowColumn(realRow, realCol)
  self:setSelectedIndex(index, nil, direction)
end
function ListElement:shouldFocusChange(direction)
  if self.doesFocusScrollList then
  else
  end
  local itemFactor, v4 = self:getRealRowColumnByIndex(self.selectedIndex)
  if self.isHorizontalList then
    local page = math.ceil(v2 / self.itemsPerCol)
    if self.doesFocusScrollList then
      local v6 = self:getNumOfColumns()
      -- if v6 * v0.itemsPerRow then goto L37 end
    end
    if direction == FocusManager.TOP then
      if itemFactor <= 1 then
        return true
      end
      local v8 = math.max(1, itemFactor - 1)
      self:setSelectionByRealRowAndColumn(v8, v4, -1)
      return false
    end
    if direction == FocusManager.BOTTOM then
      if self.itemsPerCol > itemFactor then
        local v7 = self:getItemCount()
        -- if v0.selectedIndex ~= v7 then goto L77 end
      end
      return true
      v8 = math.min(itemFactor + 1, self.itemsPerCol)
      self:setSelectionByRealRowAndColumn(v8, v4, 1)
      return false
    end
    if direction == FocusManager.LEFT then
      if v4 <= v2 then
        return true
      end
      local v9 = math.max(1, v4 - 1)
      self:setSelectionByRealRowAndColumn(itemFactor, v9, -1)
      return false
    end
    -- if v1 ~= FocusManager.RIGHT then goto L224 end
    if page <= v4 then
      return true
    end
    local v11 = self:getNumOfColumns()
    v9 = math.min(...)
    self:setSelectionByRealRowAndColumn(itemFactor, v9, 1)
    return false
  else
    page = math.ceil(v2 / self.itemsPerRow)
    if self.doesFocusScrollList then
      page = self:getNumOfRows()
      -- if v5 then goto L157 end
    end
    if direction == FocusManager.TOP then
      if itemFactor <= v2 then
        return true
      end
      self:setSelectionByRealRowAndColumn(itemFactor - 1, v4, -1)
      return false
    end
    if direction == FocusManager.BOTTOM then
      if page <= itemFactor then
        return true
      end
      self:setSelectionByRealRowAndColumn(itemFactor + 1, v4, 1)
      return false
    end
    if direction == FocusManager.LEFT then
      if v4 <= 1 then
        return true
      end
      self:setSelectionByRealRowAndColumn(itemFactor, v4 - 1, -1)
      return false
    end
    if direction == FocusManager.RIGHT then
      if self.itemsPerRow <= v4 then
        return true
      end
      self:setSelectionByRealRowAndColumn(itemFactor, v4 + 1, 1)
      return false
    end
  end
  return true
end
function ListElement:canReceiveFocus()
  local index = self:getIsVisible()
  if index and self.handleFocus and not self.disabled and 0 >= #self.listItems then
  end
  return index
end
function ListElement:onFocusActivate()
  if self.onClickCallback ~= nil then
    local itemFactor = self:getSelectedElementIndex()
    self:notifyClick(...)
    return
  end
  if self.onDoubleClickCallback ~= nil then
    itemFactor = self:getSelectedElementIndex()
    self:notifyDoubleClick(...)
    return
  end
end
function ListElement:onFocusEnter()
  if 0 < self.selectedIndex and 0 < #self.listItems then
    local index = self:getSelectedElementIndex()
    if self.elements[index] ~= nil and self.elements[index].setSelected ~= nil then
      itemFactor:setSelected(true)
    end
  end
end
function ListElement:onFocusLeave()
  if self.useSelectionOnLeave then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L39
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x2 -> L39
    local index = self:getItemCount()
    -- if v0.selectedIndex >= v1 then goto L39 end
    local v2 = self:getSelectedElementIndex()
    local v4 = self:getItemCount()
    index = MathUtil.clamp(...)
    -- if 0 >= v1 then goto L42 end
    v2:setSelected(true)
  else
    self:clearElementSelection()
  end
  v2 = v2:superClass()
  v2.onFocusLeave(self)
end
function ListElement:applyElementSelection()
  if 0 < self.firstVisibleItem then
    local index = self:getSelectedElementIndex()
    -- TODO: structure LOP_FORNPREP (pc 13, target 29)
    if self.elements[1].setSelected ~= nil then
      if index ~= 1 then
      end
      page:setSelected(true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 28, target 14)
  end
end
function ListElement:clearElementSelection()
  -- TODO: structure LOP_FORNPREP (pc 5, target 18)
  if self.elements[1].setSelected ~= nil then
    self.elements[1]:setSelected(false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 6)
end
function ListElement:verifyConfiguration()
  local v2 = v2:superClass()
  v2.verifyConfiguration(self)
  self:verifyListItemConfiguration()
end
function ListElement:verifyListItemConfiguration()
  if not self.listItemAutoSize then
    if self.listItemWidth == 0 then
      Logging.devError("Missing required listItemWidth configuration for list with [id] %s and profile [%s]", self.id, self.profile)
    end
    if self.listItemHeight == 0 then
      Logging.devError("Missing required listItemHeight configuration for list with [id] %s and profile [%s]", self.id, self.profile)
    end
  end
end
