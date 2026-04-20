-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BoxLayoutElement = {}
local BoxLayoutElement_mt = Class(BoxLayoutElement, BitmapElement)
BoxLayoutElement.ALIGN_LEFT = 0
BoxLayoutElement.ALIGN_CENTER = 1
BoxLayoutElement.ALIGN_RIGHT = 2
BoxLayoutElement.ALIGN_TOP = 0
BoxLayoutElement.ALIGN_MIDDLE = 1
BoxLayoutElement.ALIGN_BOTTOM = 2
BoxLayoutElement.FLOW_VERTICAL = "vertical"
BoxLayoutElement.FLOW_HORIZONTAL = "horizontal"
BoxLayoutElement.FLOW_NONE = "none"
BoxLayoutElement.FLOW_DIRECTION_POSITIVE = 1
BoxLayoutElement.FLOW_DIRECTION_NEGATIVE = -1
BoxLayoutElement.LAYOUT_TOLERANCE = 0.1
{}[BoxLayoutElement.FLOW_VERTICAL] = {FLOW_MARGIN_LOWER = GuiElement.MARGIN_LEFT, FLOW_MARGIN_UPPER = GuiElement.MARGIN_RIGHT, ELEMENT_SIZE = 2, ELEMENT_MARGIN_LOWER = GuiElement.MARGIN_TOP, ELEMENT_MARGIN_UPPER = GuiElement.MARGIN_BOTTOM, LAYOUT_FLOW_SIZE = 2}
{}[BoxLayoutElement.FLOW_HORIZONTAL] = {FLOW_MARGIN_LOWER = GuiElement.MARGIN_TOP, FLOW_MARGIN_UPPER = GuiElement.MARGIN_BOTTOM, ELEMENT_SIZE = 1, ELEMENT_MARGIN_LOWER = GuiElement.MARGIN_LEFT, ELEMENT_MARGIN_UPPER = GuiElement.MARGIN_RIGHT, LAYOUT_FLOW_SIZE = 1}
BoxLayoutElement.FLOW_INDICES = {}
{}[BoxLayoutElement.FLOW_VERTICAL] = BoxLayoutElement.FLOW_HORIZONTAL
{}[BoxLayoutElement.FLOW_HORIZONTAL] = BoxLayoutElement.FLOW_VERTICAL
BoxLayoutElement.FLOW_LATERAL_TABLE = {}
function BoxLayoutElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = BitmapElement.new(target, custom_mt)
  v2.alignmentX = BoxLayoutElement.ALIGN_LEFT
  v2.alignmentY = BoxLayoutElement.ALIGN_TOP
  v2.autoValidateLayout = false
  v2.useFullVisibility = true
  v2.wrapAround = false
  v2.flowDirection = BoxLayoutElement.FLOW_VERTICAL
  v2.numFlows = 1
  v2.lateralFlowSize = 0.5
  v2.fitFlowToElements = false
  v2.flowMargin = {0, 0, 0, 0}
  v2.layoutToleranceX = 0
  v2.layoutToleranceY = 0
  v2.rememberLastFocus = false
  v2.lastFocusElement = nil
  v2.incomingFocusTargets = {}
  v2.defaultFocusTarget = nil
  v2.cells = {}
  v2.lateralFlowSizes = {}
  v2.totalLateralSize = 0
  v2.flowSize = 0
  return v2
end
function BoxLayoutElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#alignmentX")
  if v3 ~= nil then
    v4 = v3:lower()
    if v4 == "right" then
      self.alignmentX = BoxLayoutElement.ALIGN_RIGHT
    elseif v4 == "center" then
      self.alignmentX = BoxLayoutElement.ALIGN_CENTER
    else
      self.alignmentX = BoxLayoutElement.ALIGN_LEFT
    end
  end
  v4 = getXMLString(xmlFile, key .. "#alignmentY")
  if v4 ~= nil then
    local v5 = v4:lower()
    if v5 == "bottom" then
      self.alignmentY = BoxLayoutElement.ALIGN_BOTTOM
    elseif v5 == "middle" then
      self.alignmentY = BoxLayoutElement.ALIGN_MIDDLE
    else
      self.alignmentY = BoxLayoutElement.ALIGN_TOP
    end
  end
  local v6 = getXMLString(xmlFile, key .. "#flowDirection")
  v5 = Utils.getNoNil(v6, self.flowDirection)
  self.flowDirection = v5
  v5 = getXMLString(xmlFile, key .. "#focusDirection")
  if not v5 then
  end
  self.focusDirection = v5
  local v7 = getXMLString(xmlFile, key .. "#numFlows")
  v6 = tonumber(...)
  v5 = Utils.getNoNil(v6, self.numFlows)
  self.numFlows = v5
  local v8 = getXMLString(xmlFile, key .. "#lateralFlowSize")
  v7 = GuiUtils.getNormalizedValues(v8, self.outputSize, {self.lateralFlowSize})
  v5 = Utils.getNoNil(v7[1], self.lateralFlowSize)
  self.lateralFlowSize = v5
  v6 = getXMLString(xmlFile, key .. "#flowMargin")
  v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, self.flowMargin)
  self.flowMargin = v5
  v6 = getXMLBool(xmlFile, key .. "#fitFlowToElements")
  v5 = Utils.getNoNil(v6, self.fitFlowToElements)
  self.fitFlowToElements = v5
  v6 = getXMLBool(xmlFile, key .. "#autoValidateLayout")
  v5 = Utils.getNoNil(v6, self.autoValidateLayout)
  self.autoValidateLayout = v5
  v6 = getXMLBool(xmlFile, key .. "#useFullVisibility")
  v5 = Utils.getNoNil(v6, self.useFullVisibility)
  self.useFullVisibility = v5
  v6 = getXMLBool(xmlFile, key .. "#wrapAround")
  v5 = Utils.getNoNil(v6, self.wrapAround)
  self.wrapAround = v5
  v6 = getXMLBool(xmlFile, key .. "#rememberLastFocus")
  v5 = Utils.getNoNil(v6, self.rememberLastFocus)
  self.rememberLastFocus = v5
end
function BoxLayoutElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getValue("alignmentX")
  if v3 ~= nil then
    v4 = v3:lower()
    if v4 == "right" then
      self.alignmentX = BoxLayoutElement.ALIGN_RIGHT
    elseif v4 == "center" then
      self.alignmentX = BoxLayoutElement.ALIGN_CENTER
    else
      self.alignmentX = BoxLayoutElement.ALIGN_LEFT
    end
  end
  v4 = profile:getValue("alignmentY")
  if v4 ~= nil then
    local v5 = v4:lower()
    if v5 == "bottom" then
      self.alignmentY = BoxLayoutElement.ALIGN_BOTTOM
    elseif v5 == "middle" then
      self.alignmentY = BoxLayoutElement.ALIGN_MIDDLE
    else
      self.alignmentY = BoxLayoutElement.ALIGN_TOP
    end
  end
  v5 = profile:getBool("autoValidateLayout")
  if v5 ~= nil then
    self.autoValidateLayout = v5
  end
  local v6 = profile:getBool("useFullVisibility")
  if v6 ~= nil then
    self.useFullVisibility = v6
  end
  local v8 = profile:getValue("flowDirection")
  local v7 = Utils.getNoNil(v8, self.flowDirection)
  self.flowDirection = v7
  v7 = profile:getValue("focusDirection")
  if not v7 then
  end
  self.focusDirection = v7
  v7 = profile:getNumber("numFlows", self.numFlows)
  self.numFlows = v7
  local v9 = profile:getValue("lateralFlowSize", "0px")
  v8 = GuiUtils.getNormalizedValues(v9, self.outputSize, {self.lateralFlowSize})
  self.lateralFlowSize = v8[1]
  v8 = profile:getValue("flowMargin", "0px 0px 0px 0px")
  v7 = GuiUtils.getNormalizedValues(v8, self.outputSize, self.flowMargin)
  self.flowMargin = v7
  v7 = profile:getBool("fitFlowToElements", self.fitFlowToElements)
  self.fitFlowToElements = v7
  v7 = profile:getBool("wrapAround", self.wrapAround)
  self.wrapAround = v7
  v7 = profile:getBool("rememberLastFocus", self.rememberLastFocus)
  self.rememberLastFocus = v7
end
function BoxLayoutElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.alignmentX = src.alignmentX
  self.alignmentY = src.alignmentY
  self.autoValidateLayout = src.autoValidateLayout
  self.useFullVisibility = src.useFullVisibility
  self.layoutToleranceX = src.layoutToleranceX
  self.layoutToleranceY = src.layoutToleranceY
  self.flowDirection = src.flowDirection
  self.focusDirection = src.focusDirection
  self.numFlows = src.numFlows
  self.lateralFlowSize = src.lateralFlowSize
  self.flowMargin = src.flowMargin
  self.fitFlowToElements = src.fitFlowToElements
  self.wrapAround = src.wrapAround
  self.rememberLastFocus = src.rememberLastFocus
end
function BoxLayoutElement:onGuiSetupFinished()
  local applyProfile = applyProfile:superClass()
  applyProfile.onGuiSetupFinished(self)
  self.layoutToleranceX = BoxLayoutElement.LAYOUT_TOLERANCE / g_screenWidth
  self.layoutToleranceY = BoxLayoutElement.LAYOUT_TOLERANCE / g_screenHeight
  self:invalidateLayout()
end
function BoxLayoutElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if self.autoValidateLayout then
    self:invalidateLayout()
  end
end
function BoxLayoutElement:removeElement(element)
  local v3 = v3:superClass()
  v3.removeElement(self, element)
  if self.autoValidateLayout then
    self:invalidateLayout()
  end
end
function BoxLayoutElement:getIsElementIncluded(element, ignoreVisibility)
  if not element.ignoreLayout then
    -- if v2 then goto L18 end
  end
  local v4 = element:getIsVisibleNonRec()
  if v4 then
    -- if v0.useFullVisibility then goto L18 end
  end
  if element.visible then
  end
  return v3
end
function BoxLayoutElement:updateLayoutCells(profile)
  self.cells = {{}}
  if self.flowDirection == BoxLayoutElement.FLOW_VERTICAL then
  end
  if not self.fitFlowToElements then
  end
  -- TODO: structure LOP_FORNPREP (pc 70, target 79)
  table.insert(v6, v4)
  -- TODO: structure LOP_FORNLOOP (pc 78, target 71)
  for v16, v17 in ipairs(self.elements) do
    local v18 = self:getIsElementIncluded(v17, profile)
    if not v18 then
      continue
    end
    if self.absSize[applyProfile.LAYOUT_FLOW_SIZE] < v10 + v17.absSize[applyProfile.ELEMENT_SIZE] + v17.margin[applyProfile.ELEMENT_MARGIN_LOWER] + v17.margin[applyProfile.ELEMENT_MARGIN_UPPER] - v7 and v11 < self.numFlows then
      if self.fitFlowToElements then
        v6[v11] = v4
      end
      table.insert(self.cells, {})
    end
    self.cells[v11][v12] = {element = v17, flowSize = v18, lateralSize = v19}
    local v20 = math.max(v9, v10 + v18)
    if self.fitFlowToElements then
      v20 = math.max(v4, v19)
    end
  end
end
function BoxLayoutElement:updateLayoutSizes()
  self.lateralFlowSizes = {}
  self.totalLateralSize = 0
  self.flowSize = 0
  if not self.fitFlowToElements then
    self.totalLateralSize = self.numFlows * (self.lateralFlowSize + self.flowMargin[BoxLayoutElement.FLOW_INDICES[self.flowDirection].FLOW_MARGIN_LOWER] + self.flowMargin[BoxLayoutElement.FLOW_INDICES[self.flowDirection].FLOW_MARGIN_UPPER])
  end
  -- TODO: structure LOP_FORNPREP (pc 44, target 54)
  table.insert(self.lateralFlowSizes, applyProfile)
  -- TODO: structure LOP_FORNLOOP (pc 53, target 45)
  for v6, v7 in pairs(self.cells) do
    for v12, v13 in ipairs(v7) do
      if self.fitFlowToElements then
        local v15 = math.max(self.lateralFlowSizes[v6], v13.lateralSize + self.flowMargin[profile.FLOW_MARGIN_LOWER] + self.flowMargin[profile.FLOW_MARGIN_UPPER])
        self.lateralFlowSizes[v6] = v15
      end
      if not (v12 == #v7) then
        continue
      end
    end
    v9 = math.max(self.flowSize, v8)
    self.flowSize = v9
  end
  if self.fitFlowToElements then
    for v6, v7 in pairs(self.lateralFlowSizes) do
      self.totalLateralSize = self.totalLateralSize + v7
    end
  end
end
function BoxLayoutElement:getAlignmentOffset()
  if self.flowDirection == BoxLayoutElement.FLOW_HORIZONTAL then
  end
  if self.alignmentX == BoxLayoutElement.ALIGN_CENTER then
  elseif self.alignmentX == BoxLayoutElement.ALIGN_RIGHT then
  end
  if self.alignmentY == BoxLayoutElement.ALIGN_MIDDLE then
    return profile, self.size[2] * 0.5 + v6 * 0.5, v3, BoxLayoutElement.FLOW_DIRECTION_NEGATIVE
  end
  if self.alignmentY == BoxLayoutElement.ALIGN_TOP then
  end
  return profile, applyProfile, v3, v4
end
function BoxLayoutElement:getElementAlignmentOffset(cell, lateralFlowSize, directionX, directionY)
  if self.flowDirection == BoxLayoutElement.FLOW_HORIZONTAL then
  else
  end
  if cell.element.pivot ~= nil then
  end
  if 0.5 < v10 then
    if directionY == BoxLayoutElement.FLOW_DIRECTION_POSITIVE then
      -- goto L110  (LOP_JUMP +43)
    end
  elseif v10 == 0.5 then
  else
    if directionY == BoxLayoutElement.FLOW_DIRECTION_POSITIVE then
    else
    end
  end
  if 0.5 < v11 then
    if directionX == BoxLayoutElement.FLOW_DIRECTION_POSITIVE then
      return v6 - v5.margin[GuiElement.MARGIN_RIGHT], v13
    end
    return -v5.margin[GuiElement.MARGIN_RIGHT], v13
  end
  if v11 == 0.5 then
    return directionX * (v6 + v5.margin[GuiElement.MARGIN_LEFT] - v5.margin[GuiElement.MARGIN_RIGHT]) * 0.5, v13
  end
  if directionX == BoxLayoutElement.FLOW_DIRECTION_POSITIVE then
    return v5.margin[GuiElement.MARGIN_LEFT], v13
  end
  return v6 - v5.margin[GuiElement.MARGIN_RIGHT], v13
end
function BoxLayoutElement:applyCellPositions(cell, lateralFlowSize, directionX, directionY)
  if directionX == BoxLayoutElement.FLOW_DIRECTION_NEGATIVE then
  end
  if directionY == BoxLayoutElement.FLOW_DIRECTION_NEGATIVE then
  end
  for v14, v15 in pairs(self.cells) do
    for v19, v20 in ipairs(v15) do
      v21:setAnchor(0, 0)
      local v21, v22 = self:getElementAlignmentOffset(v20, self.lateralFlowSizes[v14], directionX, directionY)
      v23:setPosition(v7 + v5 + v21, -v9 + v6 + v22)
      if self.flowDirection == BoxLayoutElement.FLOW_HORIZONTAL then
      else
      end
    end
    if self.flowDirection == BoxLayoutElement.FLOW_HORIZONTAL then
    else
    end
  end
end
function BoxLayoutElement:focusLinkCells()
  for v7, v8 in pairs(self.cells) do
    for v12, v13 in pairs(v8) do
      if not lateralFlowSize then
        local v14 = v14:findFirstFocusable(true)
        self.defaultFocusTarget = v14
      else
        v14 = v14:findFirstFocusable(true)
      end
    end
  end
  for v7, v8 in pairs(self.cells) do
    for v12, v13 in pairs(v8) do
      v14 = v14:findFirstFocusable(true)
      self:focusLinkChildElement(v14, cell, lateralFlowSize, directionX)
    end
  end
end
function BoxLayoutElement:focusLinkChildElement(element, previousElement, firstElement, lastElement)
  if self.focusDirection == BoxLayoutElement.FLOW_HORIZONTAL then
  end
  if previousElement then
    v7:linkElements(previousElement, v6, element)
    v7:linkElements(element, v5, previousElement)
  end
  if element == firstElement then
    self.incomingFocusTargets[v5] = element
    if not self.wrapAround then
      local v7 = v7:getFocusOverrideFunction({v5}, self, true)
      element.focusChangeOverride = v7
    end
  end
  if element == lastElement then
    self.incomingFocusTargets[v6] = element
    if self.wrapAround then
      v7:linkElements(element, v6, firstElement)
      v7:linkElements(firstElement, v5, element)
      return
    end
    v7 = v7:getFocusOverrideFunction({v6}, self, true)
    element.focusChangeOverride = v7
    return
  end
  element.focusChangeOverride = nil
end
function BoxLayoutElement:invalidateLayout(cell, lateralFlowSize)
  if not lateralFlowSize then
    self:updateLayoutCells(cell)
    self:updateLayoutSizes()
  end
  local directionY, v5, v6, v7 = self:getAlignmentOffset()
  self:applyCellPositions(directionY, v5, v6, v7)
  if self.handleFocus and self.focusDirection ~= BoxLayoutElement.FLOW_NONE then
    self:focusLinkCells(self.cells)
  end
  return self.flowSize
end
function BoxLayoutElement:canReceiveFocus()
  if self.handleFocus then
    for directionY, v5 in ipairs(self.elements) do
      local v6 = v5:canReceiveFocus()
      if not v6 then
        continue
      end
      return true
    end
  end
  return false
end
function BoxLayoutElement:getFocusTarget(incomingDirection, moveDirection)
  if self.firstDefaultFocusTarget then
    local directionY = self.firstDefaultFocusTarget:canReceiveFocus()
    -- if v4 then goto L21 end
  end
  for v7, v8 in ipairs(self.elements) do
    local v9 = v8:canReceiveFocus()
    if not v9 then
      continue
    end
    break
  end
  if directionX then
    directionY = directionX:canReceiveFocus()
    -- if v4 then goto L27 end
  end
  if self.rememberLastFocus and self.lastFocusElement ~= nil then
    directionY = directionY:canReceiveFocus()
    if directionY then
      return self.lastFocusElement
    end
  end
  while self.incomingFocusTargets[incomingDirection] ~= nil do
    v6 = directionY:canReceiveFocus()
    if not not v6 then
      break
    end
    if not (v5 < #self.elements) then
      break
    end
    v6 = v6:getElementById(directionY.focusChangeData[moveDirection])
  end
  return directionY or directionX
end
function BoxLayoutElement:onFocusLeave()
  local lateralFlowSize = lateralFlowSize:superClass()
  lateralFlowSize.onFocusLeave(self)
  if self.rememberLastFocus then
    local cell = cell:getFocusedElement()
    lateralFlowSize = cell:isChildOf(self)
    if lateralFlowSize then
      self.lastFocusElement = cell
    end
  end
end
