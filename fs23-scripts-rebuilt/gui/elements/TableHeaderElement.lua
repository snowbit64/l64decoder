-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TableHeaderElement = {SORTING_OFF = 1, SORTING_ASC = 2, SORTING_DESC = 3, NAME_ASC_ICON = "iconAscending", NAME_DESC_ICON = "iconDescending"}
local TableHeaderElement_mt = Class(TableHeaderElement, ButtonElement)
function TableHeaderElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  {}[TableHeaderElement.SORTING_OFF] = true
  {}[TableHeaderElement.SORTING_ASC] = false
  {}[TableHeaderElement.SORTING_DESC] = false
  v2.allowedSortingStates = {}
  v2.sortingOrder = TableHeaderElement.SORTING_OFF
  {}[TableHeaderElement.SORTING_OFF] = nil
  {}[TableHeaderElement.SORTING_ASC] = nil
  {}[TableHeaderElement.SORTING_DESC] = nil
  v2.sortingIcons = {}
  v2.targetTableId = ""
  v2.columnName = ""
  return v2
end
function TableHeaderElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#targetTableId")
  local v3 = Utils.getNoNil(v4, self.targetTableId)
  self.targetTableId = v3
  v4 = getXMLString(xmlFile, key .. "#columnName")
  v3 = Utils.getNoNil(v4, self.columnName)
  self.columnName = v3
  v4 = getXMLBool(xmlFile, key .. "#allowSortingAsc")
  v3 = Utils.getNoNil(v4, self.allowedSortingStates[TableHeaderElement.SORTING_ASC])
  local v5 = getXMLBool(xmlFile, key .. "#allowSortingDesc")
  v4 = Utils.getNoNil(v5, self.allowedSortingStates[TableHeaderElement.SORTING_DESC])
  self.allowedSortingStates[TableHeaderElement.SORTING_ASC] = v3
  self.allowedSortingStates[TableHeaderElement.SORTING_DESC] = v4
end
function TableHeaderElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getValue("columnName", self.columnName)
  self.columnName = v3
  local v5 = profile:getBool("allowSortingAsc", self.allowedSortingStates[TableHeaderElement.SORTING_ASC])
  self.allowedSortingStates[TableHeaderElement.SORTING_ASC] = v5
  v5 = profile:getBool("allowSortingDesc", self.allowedSortingStates[TableHeaderElement.SORTING_DESC])
  self.allowedSortingStates[TableHeaderElement.SORTING_DESC] = v5
end
function TableHeaderElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.targetTableId = src.targetTableId
  self.columnName = src.columnName
  v3 = unpack(src.allowedSortingStates)
  self.allowedSortingStates = {}
end
function TableHeaderElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if element.name == TableHeaderElement.NAME_ASC_ICON then
    self.sortingIcons[TableHeaderElement.SORTING_ASC] = element
  end
  if element.name == TableHeaderElement.NAME_DESC_ICON then
    self.sortingIcons[TableHeaderElement.SORTING_DESC] = element
  end
end
function TableHeaderElement:toggleSorting()
  while true do
    self.sortingOrder = self.sortingOrder % #self.allowedSortingStates + 1
    if not not self.allowedSortingStates[self.sortingOrder] then
      break
    end
  end
  if v1 ~= self.sortingOrder then
    self:updateSortingDisplay()
  end
  return self.sortingOrder
end
function TableHeaderElement:disableSorting()
  self.sortingOrder = TableHeaderElement.SORTING_OFF
  self:updateSortingDisplay()
end
function TableHeaderElement:updateSortingDisplay()
  for v4, v5 in pairs(self.sortingIcons) do
    if v4 == self.sortingOrder then
      v5:setVisible(true)
    else
      v5:setVisible(false)
    end
  end
end
