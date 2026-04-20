-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

local v3 = Class({text = "", isVisible = true, profileName = "", overrideProfileName = "", value = nil})
local v1 = setmetatable(...)
v3 = Class({})
v1 = setmetatable(...)
v3 = Class({text = "", value = nil, dataRowIndex = 1})
v1 = setmetatable(...)
v3 = Class({dataRowIndex = 1, rowElement = nil, columnElements = nil})
v1 = setmetatable(...)
TableElement = {DataCell = v1, DataRow = v1, SortCell = v1, TableRow = v1, ROW_REFOCUS_COOLDOWN = 5000, NAVIGATION_DELAY = 100, NAV_MODE_ROWS = "rows", NAV_MODE_CELLS = "cells"}
{}[TableElement.NAV_MODE_ROWS] = TableElement.NAV_MODE_ROWS
{}[TableElement.NAV_MODE_CELLS] = TableElement.NAV_MODE_CELLS
v1 = Class(TableElement, ListElement)
function TableElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = ListElement.new(target, custom_mt)
  v2.doesFocusScrollList = true
  v2.isHorizontalList = false
  v2.useSelectionOnLeave = false
  v2.updateSelectionOnOpen = true
  v2.periodicUpdate = false
  v2.updateInterval = 5000
  v2.timeSinceLastUpdate = 0
  v2.timeSinceLastInput = 0
  v2.columnNames = {}
  v2.rowTemplateName = ""
  v2.markRows = true
  v2.headersList = {}
  v2.headersHash = {}
  v2.sortingOrder = TableHeaderElement.SORTING_OFF
  v2.sortingColumn = nil
  v2.sortingAscending = false
  v2.numActiveRows = 0
  v2.customSortFunction = nil
  v2.customSortBeforeData = false
  v2.customSortIsFilter = false
  v2.data = {}
  v2.tableRows = {}
  v2.dataView = {}
  v2.selectedId = ""
  v2.navigationMode = TableElement.NAV_MODE_ROWS
  v2.lateInitialization = false
  v2.isInitialized = false
  return v2
end
function TableElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#columnNames")
  local v3 = Utils.getNoNil(v4, "")
  local v5 = v3:split(" ")
  for v7, v8 in ipairs(...) do
    self.columnNames[v8] = v8
  end
  v5 = getXMLString(xmlFile, key .. "#rowTemplateName")
  v4 = Utils.getNoNil(v5, self.rowTemplateName)
  self.rowTemplateName = v4
  v4 = getXMLString(xmlFile, key .. "#navigationMode")
  if not v4 then
  end
  if not u0[v4] then
  end
  self.navigationMode = v5
  v6 = getXMLBool(xmlFile, key .. "#periodicUpdate")
  v5 = Utils.getNoNil(v6, self.periodicUpdate)
  self.periodicUpdate = v5
  v6 = getXMLFloat(xmlFile, key .. "#updateInterval")
  v5 = Utils.getNoNil(v6, self.updateInterval / 1000)
  self.updateInterval = v5 * 1000
  v7 = getXMLBool(xmlFile, key .. "#markRows")
  v6 = Utils.getNoNil(v7, self.markRows)
  self.markRows = v6
  v7 = getXMLBool(xmlFile, key .. "#lateInitialization")
  v6 = Utils.getNoNil(v7, self.lateInitialization)
  self.lateInitialization = v6
  self:addCallback(xmlFile, key .. "#onUpdate", "onUpdateCallback")
end
function TableElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local navMode = profile:getValue("navigationMode", self.navigationMode)
  if not u0[navMode] then
  end
  self.navigationMode = v4
  v4 = profile:getBool("periodicUpdate", self.periodicUpdate)
  self.periodicUpdate = v4
  v4 = profile:getNumber("updateInterval", self.updateInterval / 1000)
  self.updateInterval = v4 * 1000
  local v5 = profile:getBool("markRows", self.markRows)
  self.markRows = v5
  v5 = profile:getBool("lateInitialization", self.lateInitialization)
  self.lateInitialization = v5
end
function TableElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.columnNames = src.columnNames
  self.rowTemplateName = src.rowTemplateName
  self.navigationMode = src.navigationMode
  self.periodicUpdate = src.periodicUpdate
  self.updateInterval = src.updateInterval
  self.markRows = src.markRows
  self.onUpdateCallback = src.onUpdateCallback
  self.lateInitialization = src.lateInitialization
  self.isInitialized = src.isInitialized
end
function TableElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if not self.lateInitialization then
    self:initialize()
  end
end
function TableElement:initialize()
  if not self.isInitialized then
    local v2 = v2:getDescendants(function(self)
      if self.targetTableId and self.targetTableId ~= u0.id then
      end
      return v1
    end)
    self.headersList = v2
    for v5, v6 in ipairs(self.headersList) do
      self.headersHash[v6] = v5
    end
    self:buildTableRows()
    self:applyAlternatingBackgroundsToRows()
    self:invalidateLayout()
  end
  self.isInitialized = true
end
function TableElement:buildTableRows()
  local v2 = self:getFirstDescendant(function(self)
    if self.name ~= u0.rowTemplateName then
    end
    return true
  end)
  if not v2 then
    local v8 = tostring(self.rowTemplateName)
    print("Error: Row template could not be found. Check spelling in configuration. Was looking for name '" .. v8 .. "'")
  end
  local v3 = v3:getFocusOverrideFunction({FocusManager.TOP, FocusManager.BOTTOM, FocusManager.LEFT, FocusManager.RIGHT}, self, true)
  v4:removeElement(v2)
  self.tableRows = {}
  -- TODO: structure LOP_FORNPREP (pc 52, target 109)
  local v7 = v2:clone(self)
  v8:loadElementFromCustomValues(v7)
  v7:setVisible(false)
  v7.name = ""
  v8 = TableElement.TableRow.new(1, v7)
  table.insert(self.tableRows, v8)
  if 1 == 1 then
    function v8.rowElement.focusChangeOverride(self, v1)
      if v1 == FocusManager.TOP then
        if u0.selectedIndex == 1 then
          return u1(self, v1)
        end
        v2:scrollTo(u0.selectedIndex - 1)
        return true, u0
      end
      return nil, nil
    end
  elseif 1 == self.visibleItems then
    function v8.rowElement.focusChangeOverride(self, v1)
      if v1 == FocusManager.BOTTOM then
        if u0.selectedIndex == #u0.dataView then
          return u1(self, v1)
        end
        v2:scrollTo(u0.selectedIndex + 1)
        return true, u0
      end
      return nil, nil
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 108, target 53)
  if self.navigationMode == TableElement.NAV_MODE_CELLS then
    self:processCellElements()
  end
  v2:delete()
end
function TableElement:processCellElements()
  for v5, v6 in ipairs(self.tableRows) do
    v1[v5] = {}
    for v11, v12 in ipairs(v6.rowElement.elements) do
      local v13 = v12:getHandleFocus()
      if not v13 then
        continue
      end
      if not not v12.disabled then
        continue
      end
      table.insert(v7, v12)
    end
  end
  v2 = v2:getFocusOverrideFunction({FocusManager.TOP, FocusManager.BOTTOM, FocusManager.LEFT, FocusManager.RIGHT}, self, true)
  for v6, v7 in ipairs(v1) do
    for v11, v12 in ipairs(v7) do
      v12.onFocusEnter = function(self, ...)
        v1:setSelectedIndex(u0.firstVisibleItem + u1 - 1)
        u2(...)
      end
      v12.focusChangeOverride = function(self, v1)
        if not false and not u0 and v1 ~= FocusManager.LEFT then
        end
        if not v3 and not u1 and v1 ~= FocusManager.RIGHT then
        end
        if not u2 and v1 ~= FocusManager.TOP then
        end
        if not u3 and v1 ~= FocusManager.BOTTOM then
        end
        if not v2 and v3 and u4.selectedIndex > 1 then
        end
        if not v5 and v4 and #u4.dataView > u4.selectedIndex then
        end
        if not v5 then
        end
        if v2 then
          return u5(self, v1)
        end
        if v5 then
          return true, self
        end
        return false, nil
      end
      if v1[v6 - 1] then
        v20:linkElements(v12, FocusManager.TOP, v1[v6 - 1][v11])
      end
      if v14 then
        v20:linkElements(v12, FocusManager.BOTTOM, v14[v11])
      end
      if v15 then
        v20:linkElements(v12, FocusManager.LEFT, v15)
      end
      if not v16 then
        continue
      end
      v20:linkElements(v12, FocusManager.RIGHT, v16)
    end
  end
end
function TableElement.updateAlternatingBackground(v0)
end
function TableElement:applyAlternatingBackgroundsToRows()
  if self.rowBackgroundProfile and self.rowBackgroundProfile ~= "" and self.rowBackgroundProfileAlternate then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000001 -> L15
  end
  return
  local v2 = self:getDescendants(function(self)
    if self.profile ~= u0.rowBackgroundProfile and self.profile ~= u0.rowBackgroundProfileAlternate then
    end
    return v1
  end)
  for v6, v7 in ipairs(v2) do
    if (v6 + 1) % 2 == 0 then
      v7:applyProfile(self.rowBackgroundProfile)
    else
      v7:applyProfile(self.rowBackgroundProfileAlternate)
    end
  end
end
function TableElement:addRow(dataRow, refreshView)
  table.insert(self.data, dataRow)
  table.insert(self.dataView, dataRow)
  self.numActiveRows = self.numActiveRows + 1
  if refreshView then
    self:updateView(true)
  end
end
function TableElement:setNumActiveRows(num)
  self.numActiveRows = num
end
function TableElement:removeRow(index, refreshView)
  self.data[index] = nil
  self.numActiveRows = self.numActiveRows - 1
  if refreshView then
    self:updateView(true)
  end
end
function TableElement:clearData(refreshView)
  self.data = {}
  self.dataView = {}
  self.numActiveRows = 0
  if refreshView then
    self:updateView(false)
  end
end
function TableElement:getViewDataCell(rowIndex, colName)
  if not self.dataView[rowIndex] then
    local v9 = tostring(rowIndex)
    print("Warning: Tried accessing a missing row in view by index '" .. v9 .. "'.")
    return nil
  end
  if not v3.columnCells[colName] then
    local v10 = tostring(colName)
    print("Warning: Tried accessing a missing column in view by name '" .. v10 .. "'.")
    return nil
  end
  return v4
end
function TableElement:getDataCell(rowIndex, colName)
  if not self.data[rowIndex] then
    local v9 = tostring(rowIndex)
    print("Warning: Tried accessing a missing row in table by index '" .. v9 .. "'.")
    return nil
  end
  if not v3.columnCells[colName] then
    local v10 = tostring(colName)
    print("Warning: Tried accessing a missing column in table by name '" .. v10 .. "'.")
    return nil
  end
  return v4
end
function TableElement:setCellText(rowIndex, colName, text, refreshView)
  local cell = self:getDataCell(rowIndex, colName)
  if cell then
    cell.text = text
    if refreshView then
      self:updateView(true)
    end
  end
end
function TableElement:setCellVisibility(rowIndex, colName, isVisible)
  local cell = self:getDataCell(rowIndex, colName)
  if cell then
    cell.isVisible = isVisible
  end
end
function TableElement:setCellOverrideGuiProfile(rowIndex, colName, profileName)
  local cell = self:getDataCell(rowIndex, colName)
  if cell then
    cell.overrideProfileName = profileName
  end
end
function TableElement:disableSorting()
  self.sortingOrder = TableHeaderElement.SORTING_OFF
  for v4, v5 in pairs(self.headersHash) do
    v4:disableSorting()
  end
end
function TableElement:deleteListItems()
  self:clearData(true)
end
function TableElement:onClickHeader(headerElement)
  self.timeSinceLastInput = 0
  for v5, v6 in pairs(self.headersHash) do
    if headerElement == v5 then
      local v7 = headerElement:toggleSorting()
      if v7 == self.sortingOrder and not (headerElement.columnName ~= self.sortingColumn) then
        continue
      end
      self.sortingColumn = headerElement.columnName
      self.sortingOrder = v7
    else
      v5:disableSorting()
    end
  end
end
function TableElement:getSortableColumn(columnName)
  for v6, v7 in pairs(self.data) do
    for v11, v12 in pairs(v7.columnCells) do
      if not self.columnNames[v11] then
        continue
      end
      if not (v11 == columnName) then
        continue
      end
      local sortCell = TableElement.SortCell.new()
      sortCell.text = v12.text
      sortCell.value = v12.value
      sortCell.dataRowIndex = v6
      table.insert(v2, sortCell)
    end
  end
  return v2
end
function TableElement:setCustomSortFunction(sortFunction, useBeforeData, useAsFilter)
  self.customSortFunction = sortFunction
  self.customSortBeforeData = useBeforeData
  self.customSortIsFilter = useAsFilter
end
function TableElement:setProfileOverrideFilterFunction(filterFunction)
  self.profileOverrideFilterFunction = filterFunction
end
function TableElement:getSortFunction(isAscending)
  if isAscending then
  else
  end
  if self.customSortFunction then
    if self.customSortIsFilter then
    end
    if self.customSortBeforeData then
    else
    end
    return function(self, isAscending)
      local v2 = u0(self, isAscending)
      if 0 >= v2 then
      end
      return true
    end
  end
  return function(self, isAscending)
    local v2 = u0(self, isAscending)
    if 0 >= v2 then
    end
    return true
  end
end
function TableElement:updateSortedView(columnName, sortingOrder)
  self.dataView = {}
  if sortingOrder ~= TableHeaderElement.SORTING_OFF then
    if sortingOrder ~= TableHeaderElement.SORTING_ASC then
    end
    local v3 = self:getSortFunction(true)
    local sortColumn = self:getSortableColumn(columnName)
    if not sortColumn then
      local v10 = tostring(columnName)
      print("Warning: Could not find column name [" .. v10 .. "] for sorting. Check screen configuration for header / data mismatches.")
    end
    table.sort(sortColumn, v3)
    for v8, v9 in ipairs(sortColumn) do
      table.insert(self.dataView, self.data[v9.dataRowIndex])
    end
    return
  end
  for v6, v7 in ipairs(self.data) do
    table.insert(self.dataView, self.data[v6])
  end
end
function TableElement:invalidateLayout()
  for v6, v7 in ipairs(self.tableRows) do
    v7.rowElement:setVisible(true)
    v7.rowElement:fadeOut()
    v7.rowElement:setPosition(v2, v1 - (v6 - 1) * (self.listItemHeight + self.listItemSpacing))
    v7.rowElement:reset()
  end
  self:updateRowSelection()
end
function TableElement:updateSelectedIndex()
  if self.selectedIndex == 0 then
    self:setSelectedIndex(1)
  end
  for v4, v5 in ipairs(self.dataView) do
    if not (v5.id == self.selectedId) then
      continue
    end
    self.selectedIndex = v4
    return
  end
end
function TableElement:updateRows()
  for v4, v5 in ipairs(self.tableRows) do
    local v7 = math.min(#self.dataView, self.numActiveRows)
    if self.firstVisibleItem + v4 - 1 <= v7 then
      v7:fadeIn()
      v5.dataRowIndex = self.firstVisibleItem + v4 - 1
      if self.profileOverrideFilterFunction then
        local v8 = self.profileOverrideFilterFunction(self.dataView[self.firstVisibleItem + v4 - 1])
      end
      for v12, v13 in pairs(v7.columnCells) do
        v5.columnElements[v12]:setVisible(v13.isVisible)
        if v8 then
          -- cmp-jump LOP_JUMPXEQKS R15 aux=0x15 -> L70
          -- if v5.columnElements[v12].profile == v13.overrideProfileName then goto L70 end
          v5.columnElements[v12]:applyProfile(v13.overrideProfileName)
        elseif not v8 and v13.profileName ~= "" and v5.columnElements[v12].profile ~= v13.profileName then
          v5.columnElements[v12]:applyProfile(v13.profileName)
        end
        if not (v13.text ~= v14.text) then
          continue
        end
        if not v14.setText then
          continue
        end
        v14:setText(v13.text)
      end
    else
      v7:fadeOut()
      v5.dataRowIndex = -1
    end
  end
  self:applyAlternatingBackgroundsToRows()
end
function TableElement:scrollToItemInView(index)
  if self.visibleItems > index - self.firstVisibleItem then
  end
  if v2 >= 0 then
  end
  if v4 then
    if v3 then
    end
    self:scrollTo(self.firstVisibleItem + v2)
  end
end
function TableElement:updateView(refocus)
  if 0 < #self.dataView then
    self:updateSortedView(self.sortingColumn, self.sortingOrder)
    self:updateSelectedIndex()
  end
  self:updateRows()
  if self.sliderElement then
    v2:onBindUpdate(self)
  end
  if 0 < #self.dataView then
    if refocus then
      self:scrollToItemInView(self.selectedIndex)
    end
    self:updateRowSelection()
  end
end
function TableElement:getItemIndexByRealRowColumn(realRow, _)
  return MathUtil.clamp(realRow - self.firstVisibleItem + 1, 0, #self.tableRows)
end
function TableElement:setSelectionByRealRowAndColumn(realRow, _)
  local index = self:getItemIndexByRealRowColumn(realRow)
  if 0 < index and self.tableRows[index].dataRowIndex ~= -1 then
    self:setSelectedIndex(self.tableRows[index].dataRowIndex)
  end
end
function TableElement:updateRowSelection()
  if self.selectedIndex ~= 0 and 0 < #self.dataView then
    for v5, v6 in ipairs(self.tableRows) do
      if self.selectedIndex == v6.dataRowIndex then
      end
      if v6.rowElement.setSelected then
        v8:setSelected(v7)
      end
      if not v7 then
        continue
      end
    end
  end
  return v1
end
function TableElement.getItemFactor(v0)
  return 1
end
function TableElement:scrollList(delta)
  if delta ~= 0 then
    self:scrollTo(self.firstVisibleItem + delta)
  end
end
function TableElement:scrollTo(index, updateSlider)
  self.timeSinceLastInput = 0
  if not self.isPaginated then
    local v6 = math.max(1, #self.dataView - self.visibleItems + 1)
    local v3 = MathUtil.clamp(...)
  else
    v6 = math.max(1, #self.dataView)
    v3 = MathUtil.clamp(...)
  end
  if index ~= self.firstVisibleItem then
    self.firstVisibleItem = index
    self:updateRows()
    if self.keepSelectedInView then
      if self.selectedIndex >= self.firstVisibleItem then
        -- if v0.firstVisibleItem + v0.visibleItems - 1 >= v0.selectedIndex then goto L90 end
      end
      if self.selectedIndex < self.firstVisibleItem then
        self:setSelectedIndex(self.firstVisibleItem)
      else
        self:setSelectedIndex(self.firstVisibleItem + self.visibleItems - 1)
      end
    end
    if updateSlider ~= nil then
      -- if not v2 then goto L104 end
    end
    if self.sliderElement ~= nil then
      v3:setValue(index, true)
    end
    self:updateRowSelection()
  end
end
function TableElement:setSelectedIndex(index, force)
  local v4 = MathUtil.clamp(index, 0, #self.dataView)
  if v4 ~= self.selectedIndex then
    self.lastClickTime = nil
    self.timeSinceLastInput = 0
  end
  if self.selectedIndex == v4 then
  end
  self.selectedIndex = v4
  if self.selectedIndex ~= 0 then
    self.selectedId = self.dataView[self.selectedIndex].id
  end
  self:scrollToItemInView(self.selectedIndex)
  if not v5 then
    -- if not v2 then goto L52 end
  end
  self:raiseCallback("onSelectionChangedCallback", v4)
  self:updateRowSelection()
end
function TableElement:getSelectedElement()
  return self.dataView[self.selectedIndex], self.selectedIndex
end
function TableElement:getSelectedTableRow()
  return self.tableRows[self.selectedIndex - self.firstVisibleItem + 1]
end
function TableElement:getDataRowForElement(element)
  local v4, v5 = self:getRowColumnForScreenPosition(element.absPosition[1] + element.size[1] * 0.5, element.absPosition[2] + element.size[2] * 0.5)
  local v6, v7 = self:convertVisualRowColumToReal(v4, v5)
  local v8 = self:getItemIndexByRealRowColumn(v6)
  return self.dataView[self.tableRows[v8].dataRowIndex]
end
function TableElement:getItemCount()
  return #self.dataView
end
function TableElement:updateItemPositions()
  if self.ignoreUpdate ~= nil then
    -- if v0.ignoreUpdate then goto L24 end
  end
  if 0 < #self.data and self.selectedIndex == 0 then
    self.selectedIndex = 1
  end
  self.lastFirstVisibleItem = self.firstVisibleItem
end
function TableElement:shouldFocusChange(direction)
  if direction ~= FocusManager.LEFT and direction ~= FocusManager.RIGHT and self.selectedIndex > 1 and #self.dataView > self.selectedIndex then
  end
  return v2
end
function TableElement:onFocusEnter()
  if not self.mouseDown then
    self:setSelectedIndex(self.selectedIndex)
  end
  self.timeSinceLastInput = 0
  self:delayNavigationInput()
end
function TableElement:onFocusLeave()
  if self.useSelectionOnLeave then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L22
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x2 -> L22
    local v1 = self:getItemCount()
    -- if v0.selectedIndex >= v1 then goto L22 end
    self:updateRowSelection()
  else
    self:clearElementSelection()
  end
  local v2 = v2:superClass()
  v2.onFocusLeave(self)
end
function TableElement:getFocusTarget(incomingDirection, moveDirection)
  if self.navigationMode == TableElement.NAV_MODE_CELLS then
    local v4 = self:getSelectedTableRow()
    return v4.rowElement
  end
  return self
end
function TableElement:onMouseUp()
  local v2 = v2:superClass()
  v2.onMouseUp(self)
  self:updateRowSelection()
end
function TableElement:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if self.navigationMode ~= TableElement.NAV_MODE_CELLS then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN and g_analogStickVTolerance >= value then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN and value >= -g_analogStickVTolerance then
  end
  if v6 then
    local v8 = v8:isDirectionLocked(FocusManager.TOP)
    -- if v8 then goto L63 end
  end
  if v7 then
    v8 = v8:isDirectionLocked(FocusManager.BOTTOM)
  end
  if not v4 and not v8 then
    if self.focusActive then
      if v6 and 1 < self.selectedIndex then
        -- goto L117  (LOP_JUMP +40)
      end
      -- if not v7 then goto L117 end
      -- if v0.selectedIndex >= #v0.dataView then goto L117 end
    elseif v5 then
      if v6 then
        -- cmp-jump LOP_JUMPXEQKN R10 aux=0x80000014 -> L104
        -- if 1 >= v0.selectedIndex then goto L104 end
      elseif v7 and self.selectedIndex - self.firstVisibleItem + 1 == self.visibleItems and self.selectedIndex < #self.dataView then
      end
    end
    if not self.doesFocusScrollList and v9 ~= 0 then
      if self.selectedIndex + v9 < self.firstVisibleItem then
      elseif self.firstVisibleItem + self.visibleItems - 1 < self.selectedIndex + v9 then
      end
    end
    if v9 ~= 0 and not v8 then
      self:setSelectedIndex(self.selectedIndex + v9)
      self:delayNavigationInput()
    end
  end
  return v4
end
function TableElement.delayNavigationInput(v0)
  action:lockFocusInput(InputAction.MENU_AXIS_UP_DOWN, TableElement.NAVIGATION_DELAY, 1)
  action:lockFocusInput(InputAction.MENU_AXIS_UP_DOWN, TableElement.NAVIGATION_DELAY, -1)
end
function TableElement:onSliderValueChanged(slider, newValue)
  self:scrollTo(newValue, false)
end
function TableElement:update(dt)
  local eventUsed = eventUsed:superClass()
  eventUsed.update(self, dt)
  self.timeSinceLastInput = self.timeSinceLastInput + dt
  if self.periodicUpdate then
    self.timeSinceLastUpdate = self.timeSinceLastUpdate + dt
    if self.updateInterval <= self.timeSinceLastUpdate then
      self:raiseCallback("onUpdateCallback", self)
      self.timeSinceLastUpdate = 0
    end
  end
end
function TableElement.verifyListItemConfiguration(v0)
end
