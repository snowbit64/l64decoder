-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SmoothListElement = {}
local SmoothListElement_mt = Class(SmoothListElement, GuiElement)
function SmoothListElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:include(IndexChangeSubjectMixin)
  v2:include(PlaySampleMixin)
  v2.dataSource = nil
  v2.delegate = nil
  v2.cellCache = {}
  v2.sections = {}
  v2.isLoaded = false
  v2.clipping = true
  v2.sectionHeaderCellName = nil
  v2.isHorizontalList = false
  v2.numLateralItems = 1
  v2.listItemSpacing = 0
  v2.listItemLateralSpacing = 0
  v2.lengthAxis = 2
  v2.widthAxis = 1
  v2.viewOffset = 0
  v2.targetViewOffset = 0
  v2.contentSize = 0
  v2.totalItemCount = 0
  v2.scrollViewOffsetDelta = 0
  v2.selectedIndex = 1
  v2.selectedSectionIndex = 1
  v2.supportsMouseScrolling = true
  v2.doubleClickInterval = 400
  v2.selectOnClick = false
  v2.ignoreMouse = false
  v2.showHighlights = false
  v2.selectOnScroll = false
  v2.itemizedScrollDelta = false
  v2.listSmoothingDisabled = false
  v2.listSnappingEnabled = false
  v2.selectedWithoutFocus = true
  v2.ignoreFocusActivate = false
  v2.lastTouchPosX = nil
  v2.lastTouchPosY = nil
  v2.usedTouchId = nil
  v2.currentTouchDelta = 0
  v2.scrollSpeed = 0
  v2.initialScrollSpeed = 0
  v2.scrollSpeedPixelPerMS = 0.005
  if v2.isHorizontalList then
    v2.scrollSpeedInterval = v2.scrollSpeedPixelPerMS / g_screenWidth
  else
    v2.scrollSpeedInterval = v2.scrollSpeedPixelPerMS / g_screenHeight
  end
  v2.supportsTouchScrolling = false
  v2.lastScrollDirection = 0
  v2.emptyIndicatorIdName = nil
  v2.totalTouchMoveDistance = 0
  v2.touchMoveDistanceThreshold = 30
  return v2
end
function SmoothListElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onScroll", "onScrollCallback")
  self:addCallback(xmlFile, key .. "#onDoubleClick", "onDoubleClickCallback")
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  self:addCallback(xmlFile, key .. "#onPressed", "onPressedCallback")
  v4 = getXMLBool(xmlFile, key .. "#isHorizontalList")
  local v3 = Utils.getNoNil(v4, self.isHorizontalList)
  self.isHorizontalList = v3
  if self.isHorizontalList then
  else
  end
  self.lengthAxis = v3
  if self.isHorizontalList then
  else
  end
  self.widthAxis = v3
  v4 = getXMLInt(xmlFile, key .. "#numLateralItems")
  v3 = Utils.getNoNil(v4, self.numLateralItems)
  self.numLateralItems = v3
  local v5 = getXMLString(xmlFile, key .. "#listItemSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[self.lengthAxis]}, {self.listItemSpacing})
  v3 = unpack(...)
  self.listItemSpacing = v3
  v5 = getXMLString(xmlFile, key .. "#listItemLateralSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[self.widthAxis]}, {self.listItemLateralSpacing})
  v3 = unpack(...)
  self.listItemLateralSpacing = v3
  v4 = getXMLBool(xmlFile, key .. "#supportsMouseScrolling")
  v3 = Utils.getNoNil(v4, self.supportsMouseScrolling)
  self.supportsMouseScrolling = v3
  v4 = getXMLBool(xmlFile, key .. "#supportsTouchScrolling")
  v3 = Utils.getNoNil(v4, self.supportsTouchScrolling)
  self.supportsTouchScrolling = v3
  v4 = getXMLInt(xmlFile, key .. "#doubleClickInterval")
  v3 = Utils.getNoNil(v4, self.doubleClickInterval)
  self.doubleClickInterval = v3
  v4 = getXMLBool(xmlFile, key .. "#selectOnClick")
  v3 = Utils.getNoNil(v4, self.selectOnClick)
  self.selectOnClick = v3
  v4 = getXMLBool(xmlFile, key .. "#ignoreMouse")
  v3 = Utils.getNoNil(v4, self.ignoreMouse)
  self.ignoreMouse = v3
  v4 = getXMLBool(xmlFile, key .. "#showHighlights")
  v3 = Utils.getNoNil(v4, self.showHighlights)
  self.showHighlights = v3
  v4 = getXMLBool(xmlFile, key .. "#selectOnScroll")
  v3 = Utils.getNoNil(v4, self.selectOnScroll)
  self.selectOnScroll = v3
  v4 = getXMLBool(xmlFile, key .. "#itemizedScrollDelta")
  v3 = Utils.getNoNil(v4, self.itemizedScrollDelta)
  self.itemizedScrollDelta = v3
  v4 = getXMLBool(xmlFile, key .. "#listSmoothingDisabled")
  v3 = Utils.getNoNil(v4, self.listSmoothingDisabled)
  self.listSmoothingDisabled = v3
  v4 = getXMLBool(xmlFile, key .. "#selectedWithoutFocus")
  v3 = Utils.getNoNil(v4, self.selectedWithoutFocus)
  self.selectedWithoutFocus = v3
  v4 = getXMLBool(xmlFile, key .. "#listSnappingEnabled")
  v3 = Utils.getNoNil(v4, self.listSnappingEnabled)
  self.listSnappingEnabled = v3
  v4 = getXMLBool(xmlFile, key .. "#ignoreFocusActivate")
  v3 = Utils.getNoNil(v4, self.ignoreFocusActivate)
  self.ignoreFocusActivate = v3
  v4 = getXMLString(xmlFile, key .. "#emptyIndicatorId")
  v3 = Utils.getNoNil(v4, self.emptyIndicatorIdName)
  self.emptyIndicatorIdName = v3
  v3 = getXMLString(xmlFile, key .. "#listDelegate")
  if v3 == "self" then
    self.delegate = self.target
  elseif v3 ~= "nil" then
    self.delegate = self.target[v3]
  end
  v4 = getXMLString(xmlFile, key .. "#listDataSource")
  if v4 == "self" then
    self.dataSource = self.target
  elseif v3 ~= "nil" then
    self.dataSource = self.target[v4]
  end
  v5 = getXMLString(xmlFile, key .. "#listSectionHeader")
  self.sectionHeaderCellName = v5
  v5 = getXMLString(xmlFile, key .. "#startClipperElementName")
  self.startClipperElementName = v5
  v5 = getXMLString(xmlFile, key .. "#endClipperElementName")
  self.endClipperElementName = v5
  self.updateChildrenOverlayState = false
end
function SmoothListElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getBool("isHorizontalList", self.isHorizontalList)
  self.isHorizontalList = v3
  if self.isHorizontalList then
  else
  end
  self.lengthAxis = v3
  if self.isHorizontalList then
  else
  end
  self.widthAxis = v3
  v3 = profile:getNumber("numLateralItems", self.numLateralItems)
  self.numLateralItems = v3
  local v5 = profile:getValue("listItemSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[self.lengthAxis]}, {self.listItemSpacing})
  v3 = unpack(...)
  self.listItemSpacing = v3
  v5 = profile:getValue("listItemLateralSpacing")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[self.widthAxis]}, {self.listItemLateralSpacing})
  v3 = unpack(...)
  self.listItemLateralSpacing = v3
  v3 = profile:getBool("supportsMouseScrolling", self.supportsMouseScrolling)
  self.supportsMouseScrolling = v3
  v3 = profile:getNumber("doubleClickInterval", self.doubleClickInterval)
  self.doubleClickInterval = v3
  v3 = profile:getBool("selectOnClick", self.selectOnClick)
  self.selectOnClick = v3
  v3 = profile:getBool("ignoreMouse", self.ignoreMouse)
  self.ignoreMouse = v3
  v3 = profile:getBool("showHighlights", self.showHighlights)
  self.showHighlights = v3
  v3 = profile:getBool("selectOnScroll", self.selectOnScroll)
  self.selectOnScroll = v3
  v3 = profile:getBool("itemizedScrollDelta", self.itemizedScrollDelta)
  self.itemizedScrollDelta = v3
  v3 = profile:getBool("listSmoothingDisabled", self.listSmoothingDisabled)
  self.listSmoothingDisabled = v3
  v3 = profile:getBool("selectedWithoutFocus", self.selectedWithoutFocus)
  self.selectedWithoutFocus = v3
  v3 = profile:getBool("supportsTouchScrolling", self.supportsTouchScrolling)
  self.supportsTouchScrolling = v3
  v3 = profile:getBool("listSnappingEnabled", self.listSnappingEnabled)
  self.listSnappingEnabled = v3
  v3 = profile:getValue("emptyIndicatorId", self.emptyIndicatorIdName)
  self.emptyIndicatorIdName = v3
end
function SmoothListElement:clone(parent, includeId, suppressOnCreate)
  local v5 = v5:superClass()
  local v4 = v5.clone(self, parent, includeId, suppressOnCreate)
  v4.cellDatabase = {}
  for v8, v9 in pairs(self.cellDatabase) do
    local v11 = v9:clone(nil, nil, true)
    v4.cellDatabase[v8] = v11
  end
  for v8, v9 in pairs(self.cellCache) do
    v4.cellCache[v8] = {}
  end
  return v4
end
function SmoothListElement:applyScreenAlignment()
  local key = key:superClass()
  key.applyScreenAlignment(self)
  self:iterateOverDatabase(function(self)
    self:applyScreenAlignment()
  end)
  local xmlFile, key = self:getAspectScale()
  if self.lengthAxis == 1 then
    self.listItemSpacing = self.listItemSpacing * xmlFile
    self.listItemLateralSpacing = self.listItemLateralSpacing * key
    return
  end
  self.listItemSpacing = self.listItemSpacing * key
  self.listItemLateralSpacing = self.listItemLateralSpacing * xmlFile
end
function SmoothListElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.dataSource = src.dataSource
  self.delegate = src.delegate
  self.singularCellName = src.singularCellName
  self.sectionHeaderCellName = src.sectionHeaderCellName
  self.startClipperElementName = src.startClipperElementName
  self.endClipperElementName = src.endClipperElementName
  self.isHorizontalList = src.isHorizontalList
  self.numLateralItems = src.numLateralItems
  self.listItemSpacing = src.listItemSpacing
  self.listItemLateralSpacing = src.listItemLateralSpacing
  self.supportsMouseScrolling = src.supportsMouseScrolling
  self.doubleClickInterval = src.doubleClickInterval
  self.selectOnClick = src.selectOnClick
  self.ignoreMouse = src.ignoreMouse
  self.showHighlights = src.showHighlights
  self.itemizedScrollDelta = src.itemizedScrollDelta
  self.selectOnScroll = src.selectOnScroll
  self.listSmoothingDisabled = src.listSmoothingDisabled
  self.selectedWithoutFocus = src.selectedWithoutFocus
  self.listSnappingEnabled = src.listSnappingEnabled
  self.lengthAxis = src.lengthAxis
  self.widthAxis = src.widthAxis
  self.onScrollCallback = src.onScrollCallback
  self.onDoubleClickCallback = src.onDoubleClickCallback
  self.onClickCallback = src.onClickCallback
  self.onPressedCallback = src.onPressedCallback
  self.supportsTouchScrolling = src.supportsTouchScrolling
  self.emptyIndicatorIdName = src.emptyIndicatorIdName
  self.isLoaded = src.isLoaded
  GuiMixin.cloneMixin(PlaySampleMixin, src, self)
end
function SmoothListElement:onGuiSetupFinished()
  local key = key:superClass()
  key.onGuiSetupFinished(self)
  if self.startClipperElementName ~= nil then
    local xmlFile = xmlFile:getDescendantByName(self.startClipperElementName)
    self.startClipperElement = xmlFile
  end
  if self.endClipperElementName ~= nil then
    xmlFile = xmlFile:getDescendantByName(self.endClipperElementName)
    self.endClipperElement = xmlFile
  end
  if not self.isLoaded then
    self:buildCellDatabase()
    self.isLoaded = true
  end
end
function SmoothListElement:buildCellDatabase()
  self.cellDatabase = {}
  -- TODO: structure LOP_FORNPREP (pc 10, target 91)
  local v7 = self.elements[#self.elements]:isa(ListItemElement)
  if v7 then
    if self.elements[#self.elements].name == nil then
      self.elements[#self.elements].name = "autoCell" .. #self.elements
    end
    if v5.anchors[1] == 0 and v5.anchors[2] == 1 and v5.anchors[3] == 0 and v5.anchors[4] == 1 then
      v5:setSize(1, 1)
    end
    v5.anchors[1] = 0
    v5.anchors[2] = 0
    v5.anchors[3] = 1
    v5.anchors[4] = 1
    self.cellDatabase[v6] = v5
    self.cellCache[v6] = {}
  end
  v5:unlinkElement()
  v7:removeElement(v5)
  -- TODO: structure LOP_FORNLOOP (pc 90, target 11)
  if self.sectionHeaderCellName ~= nil and self.cellDatabase[self.sectionHeaderCellName] == nil then
    Logging.warning("List section header with name '%s' does not exist on '%s'", self.sectionHeaderCellName, self.profile)
    self.sectionHeaderCellName = nil
  end
  if self.sectionHeaderCellName ~= nil then
  end
  if xmlFile == 1 then
    for v5, v6 in pairs(self.cellDatabase) do
      if not (v5 ~= self.sectionHeaderCellName) then
        continue
      end
      self.singularCellName = v5
      return
    end
  end
end
function SmoothListElement:iterateOverDatabase(lambda)
  if self.cellDatabase ~= nil then
    for v5, v6 in pairs(self.cellDatabase) do
      lambda(v6)
    end
  end
  if self.cellCache ~= nil then
    for v5, v6 in pairs(self.cellCache) do
      -- TODO: structure LOP_FORNPREP (pc 28, target 33)
      lambda(v6[1])
      -- TODO: structure LOP_FORNLOOP (pc 32, target 29)
    end
  end
end
function SmoothListElement:delete()
  for v4, v5 in pairs(self.cellCache) do
    for v9, v10 in ipairs(v5) do
      v10:delete()
    end
  end
  for v4, v5 in pairs(self.cellDatabase) do
    v5:delete()
  end
  key = key:superClass()
  key.delete(self)
end
function SmoothListElement:onOpen()
  if self.setNextOpenIndex ~= nil then
    self:setSoundSuppressed(true)
    self:setSelectedItem(self.setNextOpenSectionIndex, self.setNextOpenIndex, true, 0)
    self.setNextOpenIndex = nil
    self.setNextOpenSectionIndex = nil
    self:setSoundSuppressed(false)
  end
end
function SmoothListElement:setDataSource(dataSource)
  self.dataSource = dataSource
  if self.delegate == nil then
    self.delegate = dataSource
  end
end
function SmoothListElement:setDelegate(delegate)
  self.delegate = delegate
  if self.dataSource == nil then
    self.dataSource = delegate
  end
end
function SmoothListElement:dequeueReusableCell(name)
  if self.cellDatabase[name] == nil then
    return nil
  end
  if 0 < #self.cellCache[name] then
    self.cellCache[name][#self.cellCache[name]] = nil
    self:addElement(self.cellCache[name][#self.cellCache[name]])
  else
    local v4 = v4:clone(self)
    v4.reusableName = name
  end
  v4:loadElementFromCustomValues(key)
  return key
end
function SmoothListElement:setTarget(target, originalTarget, callOnCreate)
  local v5 = v5:superClass()
  v5.setTarget(self, target, originalTarget, callOnCreate)
  if self.delegate == originalTarget then
    self.delegate = target
  end
  if self.dataSource == originalTarget then
    self.dataSource = target
  end
  self:iterateOverDatabase(function(self)
    self:setTarget(u0, u1, u2)
  end)
end
function SmoothListElement:queueReusableCell(cell)
  if self.sections[cell.sectionIndex] ~= nil then
    self.sections[cell.sectionIndex].cells[cell.indexInSection] = nil
  end
  cell.sectionIndex = nil
  cell.indexInSection = nil
  self.cellCache[cell.reusableName][#self.cellCache[cell.reusableName] + 1] = cell
  cell:unlinkElement()
  v3:removeElement(cell)
end
function SmoothListElement:reloadData()
  if self.dataSource == nil then
    return
  end
  self:setSoundSuppressed(true)
  self:buildSectionInfo()
  self:updateView(nil, true)
  self:setSoundSuppressed(false)
end
function SmoothListElement:forceSelectionUpdate()
  self:setSoundSuppressed(true)
  if self.setNextOpenIndex ~= nil then
    self:setSelectedItem(self.setNextOpenSectionIndex, self.setNextOpenIndex, true, 0)
    self.setNextOpenIndex = nil
    self.setNextOpenSectionIndex = nil
  else
    self:setSelectedItem(self.selectedSectionIndex, self.selectedIndex, true, 0)
  end
  self:setSoundSuppressed(false)
end
function SmoothListElement:reloadSection(section)
  self:reloadData()
end
function SmoothListElement:buildSectionInfo()
  if self.dataSource.getNumberOfSections == nil then
  else
    local key = key:getNumberOfSections(self)
  end
  -- TODO: structure LOP_FORNPREP (pc 38, target 193)
  if self.sections[1] == nil then
    self.sections[1] = {cells = {}}
  end
  self.sections[v8].startOffset = v4
  self.sections[v8].itemOffsets = {}
  self.sections[v8].itemLateralOffsets = {}
  if self.sectionHeaderCellName == nil then
  end
  if self.dataSource.getTitleForSectionHeader ~= nil then
    local v11 = v11:getTitleForSectionHeader(self, v8)
    if v11 == nil then
    end
  end
  if v10 then
    v9.itemOffsets[0] = v9.startOffset
  end
  v11 = v11:getNumberOfItemsInSection(self, v8)
  v9.numItems = v11
  -- TODO: structure LOP_FORNPREP (pc 123, target 182)
  local v16 = self:getLengthOfItemFast(v8, 1)
  local v18 = math.floor((1 - 1) / self.numLateralItems)
  if v18 + 1 >= v9.numItems / self.numLateralItems then
  end
  if not true then
    -- if v8 >= v2 then goto L158 end
  end
  if v17 ~= v11 then
  else
    local v20 = math.max(v12, v16 + self.listItemSpacing)
  end
  v9.itemOffsets[v15] = v4
  v9.itemLateralOffsets[v15] = v3 * (v18 - 1)
  -- TODO: structure LOP_FORNLOOP (pc 181, target 124)
  v9.endOffset = v4 + v12
  self.sections[v8] = v9
  -- TODO: structure LOP_FORNLOOP (pc 192, target 39)
  -- TODO: structure LOP_FORNPREP (pc 198, target 204)
  self.sections[#self.sections] = nil
  -- TODO: structure LOP_FORNLOOP (pc 203, target 199)
  local v8 = MathUtil.clamp(self.selectedSectionIndex, 1, #self.sections)
  if v8 ~= 0 then
    v8 = MathUtil.clamp(self.selectedIndex, 1, self.sections[v8].numItems)
    if v8 == 0 then
      for v11, v12 in ipairs(self.sections) do
        local v13 = MathUtil.clamp(v7, 1, v12.numItems)
        if not (0 < v13) then
          continue
        end
        break
      end
    end
    if v7 ~= 0 then
      v8 = self:getIsVisible()
      if not v8 then
        self.setNextOpenIndex = v7
        self.setNextOpenSectionIndex = v6
        -- goto L278  (LOP_JUMP +14)
      end
      self:setSelectedItem(v6, v7, true, 0)
    else
      self.selectedSectionIndex = 0
      self.selectedIndex = 0
    end
  end
  if 0 < v5 then
    if self.itemizedScrollDelta and #self.sections == 1 and self.singularCellName ~= nil then
      self.scrollViewOffsetDelta = (v4 + self.listItemSpacing) / v5
      -- goto L319  (LOP_JUMP +19)
    end
    v8 = math.max(v4 / v5 * 0.4, self.absSize[self.lengthAxis] / 5)
    self.scrollViewOffsetDelta = v8
  else
    self.scrollViewOffsetDelta = 0
  end
  self.contentSize = v4
  self.totalItemCount = xmlFile
  if self.emptyIndicatorIdName ~= nil and self.target ~= nil then
    if self.target[self.emptyIndicatorIdName] ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000021 -> L352
      -- if 0 >= v0.totalItemCount then goto L352 end
      self.target[self.emptyIndicatorIdName]:setVisible(false)
    elseif self.target[self.emptyIndicatorIdName] ~= nil and self.totalItemCount == 0 and 0 < self.totalItemCount then
      self.target[self.emptyIndicatorIdName]:setVisible(true)
    end
  end
  v10 = math.min(self.viewOffset, self.contentSize - self.absSize[self.lengthAxis])
  v9 = math.max(v10, 0)
  self.viewOffset = v9
  v10 = math.min(self.targetViewOffset, self.contentSize - self.absSize[self.lengthAxis])
  v9 = math.max(v10, 0)
  self.targetViewOffset = v9
  self:updateScrollClippers()
end
function SmoothListElement:getLengthOfItemFast(section, index)
  if not self.singularCellName then
    local v4 = v4:getCellTypeForItemInSection(self, section, index)
  end
  if self.dataSource.getHeightForCell == nil then
    return self.cellDatabase[v4].size[self.lengthAxis]
  end
  return v6:getHeightForCell(self, section, index, v5)
end
function SmoothListElement:updateView(updateSlider, repopulate)
  -- TODO: structure LOP_FORNPREP (pc 15, target 63)
  if self.viewOffset < self.sections[1].endOffset then
    -- TODO: structure LOP_FORNPREP (pc 30, target 57)
    if 0 + self.numLateralItems <= self.sections[1].numItems then
    end
    if v13 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L56
      -- if v0.viewOffset >= v15 then goto L56 end
    else
      -- TODO: structure LOP_FORNLOOP (pc 56, target 31)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L63
  else
    -- TODO: structure LOP_FORNLOOP (pc 62, target 16)
  end
  local v11 = math.max(v4, 1)
  -- TODO: structure LOP_FORNPREP (pc 77, target 109)
  if self.sections[#self.sections].startOffset < v3 then
    -- TODO: structure LOP_FORNPREP (pc 91, target 103)
    if self.sections[#self.sections].itemOffsets[self.sections[#self.sections].numItems - 1 + 1] ~= nil then
      -- if v0.sections[#v0.sections].itemOffsets[v0.sections[#v0.sections].numItems - 1 + 1] >= v3 then goto L102 end
    else
      -- TODO: structure LOP_FORNLOOP (pc 102, target 92)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L109
  else
    -- TODO: structure LOP_FORNLOOP (pc 108, target 78)
  end
  -- TODO: structure LOP_FORNPREP (pc 114, target 158)
  if self.elements[#self.elements].sectionIndex >= v4 and v6 >= self.elements[#self.elements].sectionIndex then
    if self.elements[#self.elements].sectionIndex == v4 then
      -- if v0.elements[#v0.elements].indexInSection < v5 then goto L153 end
    end
    if v11.sectionIndex == v6 then
      -- if v7 < v11.indexInSection then goto L153 end
    end
    -- if v0.sections[v11.sectionIndex].numItems >= v11.indexInSection then goto L157 end
  end
  self:queueReusableCell(v11)
  -- TODO: structure LOP_FORNLOOP (pc 157, target 115)
  if v4 ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000011 -> L163
  end
  return
  while true do
    if not (v10 - self.viewOffset < self.absSize[self.lengthAxis]) then
      break
    end
    if self.sections[v8].cells[v9] == nil then
      if v9 == 0 then
        -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L276
        v13 = self:dequeueReusableCell(self.sectionHeaderCellName)
        v13.isHeader = true
        v13 = v13:getAttribute("title")
        if v13 ~= nil and self.dataSource.getTitleForSectionHeader ~= nil then
          v16 = v16:getTitleForSectionHeader(self, v8)
          v13:setText(...)
          -- goto L276  (LOP_JUMP +48)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L276
        v14:populateSectionHeader(self, v8, v12)
      else
        if not self.singularCellName then
          v13 = v13:getCellTypeForItemInSection(self, v8, v9)
        end
        v14 = self:dequeueReusableCell(v13)
        v14:populateCellForItemInSection(self, v8, v9, v14)
        if v9 % 2 ~= 0 then
        end
        v12:setAlternating(true)
      end
      v12.sectionIndex = v8
      v12.indexInSection = v9
      v11.cells[v9] = v12
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L403
      if v8 == self.selectedSectionIndex and v9 == self.selectedIndex and not self.selectedWithoutFocus then
        v16 = v16:getFocusedElement()
        if v16 ~= self then
        end
      end
      v12:setSelected(v15)
    elseif repopulate then
      if v9 == 0 then
        v13 = self.sections[v8].cells[v9]:getAttribute("title")
        if v13 ~= nil and self.dataSource.getTitleForSectionHeader ~= nil then
          v16 = v16:getTitleForSectionHeader(self, v8)
          v13:setText(...)
          -- goto L403  (LOP_JUMP +61)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L403
        v14:populateSectionHeader(self, v8, v12)
      else
        v13:populateCellForItemInSection(self, v8, v9, self.sections[v8].cells[v9])
        if v9 % 2 ~= 0 then
        end
        v12:setAlternating(true)
        if v12.setSelected ~= nil then
          if v8 == self.selectedSectionIndex and v9 == self.selectedIndex and not self.selectedWithoutFocus then
            v16 = v16:getFocusedElement()
            if v16 ~= self then
            end
          end
          v12:setSelected(v15)
        end
      end
    end
    if v8 == v6 then
      -- if v7 >= v9 + 1 then goto L410 end
      break
    elseif v11.numItems < v9 + 1 then
      if not (v6 >= v8 + 1) then
        break
      end
      if self.sections[v8 + 1].itemOffsets[0] == nil then
      end
    else
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 442, target 451)
  self:updateCellPosition(self.elements[1])
  -- TODO: structure LOP_FORNLOOP (pc 450, target 443)
  if updateSlider ~= false then
    self:raiseSliderUpdateEvent()
  end
  self:updateScrollClippers()
end
function SmoothListElement:updateCellPosition(element)
  if element.indexInSection == 0 then
  else
  end
  if self.lengthAxis == 1 then
    local v5, v6 = GuiUtils.alignToScreenPixels(v3 - self.viewOffset, -v4)
    element:setPosition(v5, v6)
    if element.indexInSection == 0 then
      element:setSize(nil, self.absSize[2])
      return
    end
    element:setSize(nil, self.absSize[2] / self.numLateralItems - self.listItemLateralSpacing)
    return
  end
  v5, v6 = GuiUtils.alignToScreenPixels(v4, self.viewOffset - v3)
  element:setPosition(v5, v6)
  if element.indexInSection == 0 then
    element:setSize(self.absSize[1], nil)
    return
  end
  element:setSize((self.absSize[1] - (self.numLateralItems - 1) * self.listItemLateralSpacing) / self.numLateralItems, nil)
end
function SmoothListElement:scrollTo(offset, updateSlider)
  local v4 = math.min(offset, self.contentSize - self.absSize[self.lengthAxis])
  local v3 = math.max(v4, 0)
  if v3 ~= self.viewOffset then
    self.viewOffset = v3
    self.targetViewOffset = v3
    self.isMovingToTarget = false
    self:updateView(updateSlider)
  end
end
function SmoothListElement:smoothScrollTo(offset)
  if self.listSmoothingDisabled then
    self:scrollTo(offset)
  end
  local v3 = math.min(offset, self.contentSize - self.absSize[self.lengthAxis])
  local repopulate = math.max(v3, 0)
  self.targetViewOffset = repopulate
  self.isMovingToTarget = true
end
function SmoothListElement:setSelectedIndex(index)
  self:setSelectedItem(1, index)
end
function SmoothListElement:setSelectedItem(section, index, forceChangeEvent, direction)
  if index ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L5
  end
  return
  if #self.sections >= section then
    -- if v1 >= 1 then goto L14 end
  end
  return
  if self.sections[section].numItems < index then
    return
  end
  if self.selectedIndex == index and self.selectedSectionIndex == section then
  end
  local v6 = MathUtil.sign(index - self.selectedIndex)
  self.lastScrollDirection = v6
  self.selectedSectionIndex = section
  self.selectedIndex = index
  if v5 then
    self:makeCellVisible(self.selectedSectionIndex, self.selectedIndex)
  end
  if v5 then
    v6 = v6:getLastInputMode()
    if v6 == GS_INPUT_HELP_MODE_TOUCH then
      -- if v0.inputDown then goto L74 end
      -- if v0.isMovingToTarget then goto L74 end
    end
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  end
  if not v5 then
    -- if not v3 then goto L102 end
  end
  if self.isLoaded then
    self:notifyIndexChange(index, self.sections[1].numItems)
    if self.delegate.onListSelectionChanged ~= nil then
      v6:onListSelectionChanged(self, section, index)
    end
  end
  self:applyElementSelection()
end
function SmoothListElement:setHighlightedItem(element)
  if not self.showHighlights then
    return
  end
  if self.highlightedElement == element then
  end
  if true then
    if self.highlightedElement ~= nil then
      local v3 = v3:getOverlayState()
      if v3 == GuiOverlay.STATE_HIGHLIGHTED then
        v4:setOverlayState(GuiOverlay.STATE_NORMAL)
        v4:restoreOverlayState()
      end
      v4:onHighlightRemove()
    end
    self.highlightedElement = element
    if element ~= nil then
      v3 = element:getOverlayState()
      if v3 ~= GuiOverlay.STATE_SELECTED then
        element:storeOverlayState()
        element:setOverlayState(GuiOverlay.STATE_HIGHLIGHTED)
      end
      element:onHighlight()
    end
    if self.delegate.onListHighlightChanged ~= nil then
      if element ~= nil then
      end
      v5:onListHighlightChanged(self, v3, v4)
    end
  end
end
function SmoothListElement:applyElementSelection()
  if not self.selectedWithoutFocus then
    local repopulate = repopulate:getFocusedElement()
    if repopulate ~= self then
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 46)
  if self.elements[1].setSelected ~= nil then
    if updateSlider and self.elements[1].sectionIndex == self.selectedSectionIndex and self.elements[1].indexInSection ~= self.selectedIndex then
    end
    v5:setSelected(v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 45, target 18)
end
function SmoothListElement:clearElementSelection()
  -- TODO: structure LOP_FORNPREP (pc 5, target 18)
  if self.elements[1].setSelected ~= nil then
    self.elements[1]:setSelected(false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 6)
end
function SmoothListElement:makeCellVisible(section, index, fast)
  if self.sections[section] == nil then
    return
  end
  if v4.itemOffsets[index] == nil then
    return
  end
  local v7 = math.floor((index - 1) / self.numLateralItems)
  if v4.itemOffsets[(v7 + 1) * self.numLateralItems + 1] == nil then
  elseif section >= #self.sections then
    -- if v2 >= v4.numItems then goto L45 end
  end
  if v5 < self.viewOffset then
  elseif self.viewOffset + self.absSize[self.lengthAxis] < v8 then
  else
    return
  end
  if self.isMovingToTarget then
    -- if v0.targetViewOffset == v9 then goto L83 end
  end
  if fast then
    self:scrollTo(v9)
    return
  end
  self:smoothScrollTo(v9)
end
function SmoothListElement:makeSelectedCellVisible()
  self:makeCellVisible(self.selectedSectionIndex, self.selectedIndex)
end
function SmoothListElement:updateScrollClippers(initial)
  if self.startClipperElement ~= nil then
    if self.visible and 0 < self.contentSize and 0.01 >= self.viewOffset then
    end
    fast:setVisible(index)
  end
  if self.endClipperElement ~= nil then
    if self.visible and 0 < self.contentSize and self.viewOffset - self.contentSize - self.absSize[self.lengthAxis] >= -0.01 then
    end
    fast:setVisible(index)
  end
end
function SmoothListElement:update(dt)
  local fast = fast:superClass()
  fast.update(self, dt)
  if self.isMovingToTarget then
    local index = self:getIsVisible()
    if index then
      self.viewOffset = self.viewOffset + (self.targetViewOffset - self.viewOffset) * 0.01 * dt
    else
      self.viewOffset = self.targetViewOffset
    end
    index = math.abs(self.targetViewOffset - self.viewOffset)
    if index < 0.0005 then
      self.viewOffset = self.targetViewOffset
      self.isMovingToTarget = false
    end
    self:updateView(true)
  end
  if self.supportsTouchScrolling then
    if self.usedTouchId == nil then
    end
    fast = math.abs(self.scrollSpeed)
    if not true then
      -- if 0.0001 >= v3 then goto L140 end
    end
    if index then
      self.scrollSpeed = self.currentTouchDelta / dt
      -- if not v0.isHorizontalList then goto L129 end
    elseif not self.listSnappingEnabled then
      local dir = MathUtil.sign(self.scrollSpeed)
      if self.isHorizontalList then
      end
      local v8 = math.max(fast - dt * self.scrollSpeedInterval, 0)
      self.scrollSpeed = v8 * dir
    else
      self.scrollSpeed = 0
    end
    if v4 ~= 0 then
      self:scrollTo(self.viewOffset + v4)
    end
    self.currentTouchDelta = 0
  end
  if self.inputDown then
    self.inputDownTimer = self.inputDownTimer + dt
    self:raiseCallback("onPressedCallback", self, self.inputDownTimer)
  end
end
function SmoothListElement:getSelectedElement()
  return self:getElementAtSectionIndex(self.selectedSectionIndex, self.selectedIndex)
end
function SmoothListElement:getItemCount()
  return self.totalItemCount
end
function SmoothListElement:getSelectedIndexInSection()
  return self.selectedIndex
end
function SmoothListElement:getSelectedSection()
  return self.selectedSectionIndex
end
function SmoothListElement:getSelectedPath()
  return self.selectedSectionIndex, self.selectedIndex
end
function SmoothListElement:getElementAtSectionIndex(section, index)
  -- TODO: structure LOP_FORNPREP (pc 5, target 19)
  if self.elements[1].sectionIndex == section and self.elements[1].indexInSection == index then
    return self.elements[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 18, target 6)
  return nil
end
function SmoothListElement:raiseSliderUpdateEvent()
  if self.sliderElement ~= nil then
    dt:onBindUpdate(self)
  end
end
function SmoothListElement:onSliderValueChanged(slider, newValue, immediateMode)
  if self.sections == nil then
    return
  end
  if slider.maxValue - slider.minValue ~= 0 then
  end
  if immediateMode then
    self:scrollTo(v4, false)
    return
  end
  self:smoothScrollTo(v4)
end
function SmoothListElement:getViewOffsetPercentage()
  if self.contentSize - self.absSize[self.lengthAxis] ~= 0 then
    return self.viewOffset / (self.contentSize - self.absSize[self.lengthAxis])
  end
  return 1
end
function SmoothListElement:onInputDown()
  self.inputDown = true
  self.inputDownTimer = 0
  dt:setFocus(self)
end
function SmoothListElement:onInputUp()
  if self.inputOverElement ~= nil then
    if self.listSnappingEnabled then
      local dir = MathUtil.round(self.selectedIndex + 0.3 * self.lastScrollDirection, 0)
    else
    end
    if self.lastClickTime ~= nil then
      -- if v0.target.time - v0.doubleClickInterval >= v0.lastClickTime then goto L71 end
      if fast == dt and v4 == index then
        self:notifyDoubleClick(fast, v4, self.inputOverElement)
        self.usedTouchId = nil
      end
      self.lastClickTime = nil
    else
      self.lastClickTime = self.target.time
    end
    if self.touchMoveDistanceThreshold >= self.totalTouchMoveDistance then
    end
    self.wasScrolling = true
    if self.selectedIndex ~= v4 then
    end
    if v6 then
      -- if not v0.selectOnScroll then goto L104 end
    end
    self:setSelectedItem(fast, v4, nil, 0)
    -- if v0.selectOnClick then goto L121 end
    -- if v5 then goto L121 end
    -- if v6 then goto L121 end
    self:notifyClick(fast, v4, self.inputOverElement, v7)
  else
    self.lastClickTime = nil
  end
  self.inputDown = false
  self.totalTouchMoveDistance = 0
end
function SmoothListElement:resetInput()
  self.lastClickTime = nil
  self.inputDown = false
  self.lastClickTime = nil
end
function SmoothListElement:notifyDoubleClick(section, index, element)
  self:raiseCallback("onDoubleClickCallback", self, section, index, element, true)
end
function SmoothListElement:notifyClick(dt, index, fast, v4)
  self:raiseCallback("onClickCallback", self, dt, index, fast, v4)
end
function SmoothListElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 and not self.ignoreMouse then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if v7 then
        v7 = self:getElementAtScreenPosition(posX, posY)
        if v7 ~= nil and v7.indexInSection == 0 then
        end
        if self.inputOverElement ~= v7 then
          self:setHighlightedItem(v7)
          self.inputOverElement = v7
        end
        if isDown then
          if button == Input.MOUSE_BUTTON_LEFT then
            self:onInputDown()
          end
          if self.supportsMouseScrolling then
            local v9 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_UP)
            if v9 then
            else
              v9 = Input.isMouseButtonPressed(Input.MOUSE_BUTTON_WHEEL_DOWN)
              if v9 then
              end
            end
            if v8 ~= 0 then
              if self.selectOnScroll then
                -- cmp-jump LOP_JUMPXEQKN R9 aux=0x8000001c -> L136
                local v11 = math.min(self.sections[1].numItems, self.selectedIndex + v8)
                v9 = math.max(...)
                self:setSelectedItem(1, v9)
              else
                self:smoothScrollTo(self.targetViewOffset + v8 * self.scrollViewOffsetDelta)
              end
            end
          end
        end
        -- if not v4 then goto L162 end
        -- if v5 ~= Input.MOUSE_BUTTON_LEFT then goto L162 end
        -- if not v0.inputDown then goto L162 end
        self:onInputUp()
        return true
      end
    end
    if self.inputOverElement ~= nil then
      self.inputOverElement = nil
      self:setHighlightedItem(self.inputOverElement)
    end
  end
  return eventUsed
end
function SmoothListElement:touchEvent(posX, posY, isDown, isUp, touchId, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.touchEvent(self, posX, posY, isDown, isUp, touchId, eventUsed)
    if v7 then
    end
    if not eventUsed then
      if self.usedTouchId ~= touchId then
        v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
        -- if not v7 then goto L165 end
      end
      v7 = self:getElementAtScreenPosition(posX, posY)
      if v7 ~= nil and v7.indexInSection == 0 then
      end
      if self.inputOverElement ~= v7 then
        self:setHighlightedItem(v7)
        self.inputOverElement = v7
      end
      if self.touchMoveDistanceThreshold >= self.totalTouchMoveDistance then
      end
      self.wasScrolling = true
      if self.supportsTouchScrolling then
        if self.usedTouchId == nil then
          -- if v6 then goto L151 end
          -- if not v3 then goto L151 end
          self.currentTouchDelta = 0
          self.lastTouchPosX = posX
          self.lastTouchPosY = posY
          self.usedTouchId = touchId
        elseif self.usedTouchId == touchId then
          if isUp then
            self:onInputUp()
            self.usedTouchId = nil
            self.initialScrollSpeed = self.scrollSpeed
          else
            if self.isHorizontalList then
            else
            end
            self.currentTouchDelta = (self.currentTouchDelta or 0) + v9
            local v12 = MathUtil.vector2Length((v10 - posX) * g_screenWidth, (v11 - posY) * g_screenHeight)
            self.totalTouchMoveDistance = self.totalTouchMoveDistance + v12
            self.lastTouchPosX = posX
            self.lastTouchPosY = posY
          end
        end
      end
      if isDown and not v8 then
        self:onInputDown()
      end
      if isUp and self.inputDown then
        self:onInputUp()
      end
    end
  end
  return eventUsed
end
function SmoothListElement:getElementAtScreenPosition(x, y)
  -- TODO: structure LOP_FORNPREP (pc 5, target 34)
  local v7 = GuiUtils.checkOverlayOverlap(x, y, self.elements[#self.elements].absPosition[1], self.elements[#self.elements].absPosition[2], self.elements[#self.elements].absSize[1], self.elements[#self.elements].absSize[2])
  if v7 then
    return self.elements[#self.elements], self.elements[#self.elements].sectionIndex, self.elements[#self.elements].indexInSection
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 6)
  return nil
end
function SmoothListElement:shouldFocusChange(direction)
  if self.totalItemCount == 0 then
    return true
  end
  local isDown = MathUtil.clamp(self.selectedSectionIndex, 1, #self.sections)
  local eventUsed = math.floor((self.selectedIndex - 1) / self.numLateralItems)
  if self.isHorizontalList then
    if direction == FocusManager.TOP then
    elseif direction == FocusManager.BOTTOM then
    else
      if direction == FocusManager.LEFT then
      elseif direction == FocusManager.RIGHT then
      end
    end
  end
  if direction == FocusManager.TOP then
    if isUp - self.numLateralItems < 1 then
      if 1 < posY then
        while true do
          if v8 - 1 == 0 then
            return true
          end
          v11 = math.floor((self.sections[v8].numItems - 1) / self.numLateralItems)
          if self.sections[v8].numItems % self.numLateralItems == 0 then
            v13 = math.min(self.sections[v8].numItems, self.numLateralItems)
          end
          v14 = math.min(v12, eventUsed)
          -- if 0 < v11 * v0.numLateralItems + v14 then goto L147 end
        end
      elseif isUp == 1 and 0 < self.sections[v8].itemOffsets[1] then
      end
    end
  elseif direction == FocusManager.BOTTOM then
    if isDown.numItems < isUp + self.numLateralItems then
      v11 = math.floor((isDown.numItems - 1) / self.numLateralItems)
      if isDown.numItems % self.numLateralItems ~= 0 then
        -- if v5 >= v11 + 1 then goto L183 end
      elseif posY < #self.sections then
        while true do
          if #self.sections < v8 + 1 then
            return true
          end
          v11 = math.min(self.sections[v8].numItems, eventUsed)
          -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000001 -> L214
        end
      else
      end
    end
  else
    if direction == FocusManager.LEFT then
      if 1 < eventUsed then
      end
    elseif direction == FocusManager.RIGHT then
      v11 = math.floor(isDown.numItems / self.numLateralItems)
      if 0 < isDown.numItems % self.numLateralItems then
      else
      end
      if touchId == v11 then
      end
      if eventUsed < v10 then
      end
    end
  end
  if v8 == posY then
    -- if v9 == v4 then goto L281 end
  end
  if v9 == 0 then
    self:makeCellVisible(v8, 0)
  else
    self:setSelectedItem(v8, v9, nil, v7)
  end
  return false
  return true
end
function SmoothListElement:canReceiveFocus()
  local direction = self:getIsVisible()
  if direction and self.handleFocus and not self.disabled and 0 >= self.totalItemCount then
  end
  return direction
end
function SmoothListElement:onFocusActivate()
  if self.totalItemCount == 0 then
    return
  end
  if self.ignoreFocusActivate then
    return
  end
  if self.onClickCallback ~= nil then
    self:notifyClick(self.selectedSectionIndex, self.selectedIndex, nil)
    return
  end
  if self.onDoubleClickCallback ~= nil then
    self:notifyDoubleClick(self.selectedSectionIndex, self.selectedIndex, nil)
    return
  end
end
function SmoothListElement:onFocusEnter()
  self:applyElementSelection()
  if self.delegate.onListSelectionChanged ~= nil then
    direction:onListSelectionChanged(self, self.selectedSectionIndex, self.selectedIndex)
  end
end
function SmoothListElement:onFocusLeave()
  if not self.selectedWithoutFocus then
    self:clearElementSelection()
  end
  local posY = posY:superClass()
  posY.onFocusLeave(self)
end
