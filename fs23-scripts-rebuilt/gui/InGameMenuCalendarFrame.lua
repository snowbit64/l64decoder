-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuCalendarFrame = {}
local InGameMenuCalendarFrame_mt = Class(InGameMenuCalendarFrame, TabbedMenuFrameElement)
InGameMenuCalendarFrame.CONTROLS = {CONTAINER = "container", CALENDAR = "calendar", TEMPLATE = "fruitRowTemplate", TODAY_BAR = "todayBar", SLIDER = "calendarSlider", HEADER = "calendarHeader", LEGEND_PLANTING_SEASON = "legendPlantingSeason", LEGEND_HARVEST_SEASON = "legendHarvestSeason"}
InGameMenuCalendarFrame.BLOCK_TYPE_PLANTABLE = 1
InGameMenuCalendarFrame.BLOCK_TYPE_HARVESTABLE = 2
{}[InGameMenuCalendarFrame.BLOCK_TYPE_PLANTABLE] = {0.1237, 0.3979, 0.0952, 0.95}
{}[InGameMenuCalendarFrame.BLOCK_TYPE_HARVESTABLE] = {0.7959, 0.3128, 0.0246, 0.95}
{}[false] = {}
{}[InGameMenuCalendarFrame.BLOCK_TYPE_PLANTABLE] = {0.2122, 0.1779, 0.0027, 0.95}
{}[InGameMenuCalendarFrame.BLOCK_TYPE_HARVESTABLE] = {0.3372, 0.4397, 0.9911, 0.95}
{}[true] = {}
InGameMenuCalendarFrame.BLOCK_COLORS = {}
function InGameMenuCalendarFrame.register()
  local v0 = InGameMenuCalendarFrame.new()
  v1:loadGui("dataS/gui/InGameMenuCalendarFrame.xml", "CalendarFrame", v0, true)
end
function InGameMenuCalendarFrame.new(i18n, messageCenter)
  if not messageCenter then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuCalendarFrame.CONTROLS)
  v2.isColorBlindMode = false
  v2.scrollInputDelay = 0
  v2.scrollInputDelayDir = 0
  v2.fruitTypes = {}
  return v2
end
function InGameMenuCalendarFrame:createFromExistingGui(v1)
  local v2 = InGameMenuCalendarFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuCalendarFrame:delete()
  if self.fruitRowTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuCalendarFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
end
function InGameMenuCalendarFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v2 = v2:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  self.isColorBlindMode = v2 or false
  self:rebuildTable()
  self:updateTodayBar()
  self:setPeriodTitles()
  self:updateLegend()
  v1:subscribe(MessageType.DAY_CHANGED, self.onDayChanged, self)
  v1:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], self.setColorBlindMode, self)
  self:setSoundSuppressed(true)
  v1:setFocus(self.calendar)
  self:setSoundSuppressed(false)
end
function InGameMenuCalendarFrame.onFrameClose(v0)
  v1:unsubscribe(MessageType.DAY_CHANGED, v0)
  v1:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function InGameMenuCalendarFrame:updateTodayBar()
  local v5 = g_currentMission.environment:getDaysPerSeason()
  local v13 = g_currentMission.environment:getDaysPerSeason()
  v6:setPosition(self.todayBar.parent.size[1] * (g_currentMission.environment.currentSeason * 0.25 + (g_currentMission.environment.currentDayInSeason - 1) / v5 * 0.25) + self.todayBar.parent.size[1] / v13 * 4 * 0.5, nil)
end
function InGameMenuCalendarFrame:setPeriodTitles()
  -- TODO: structure LOP_FORNPREP (pc 3, target 18)
  local v7 = v7:formatPeriod(1, true)
  self.calendarHeader[1]:setText(...)
  -- TODO: structure LOP_FORNLOOP (pc 17, target 4)
end
function InGameMenuCalendarFrame:updateLegend()
  local v4 = unpack(InGameMenuCalendarFrame.BLOCK_COLORS[self.isColorBlindMode][InGameMenuCalendarFrame.BLOCK_TYPE_PLANTABLE])
  v1:setImageColor(...)
  v4 = unpack(InGameMenuCalendarFrame.BLOCK_COLORS[self.isColorBlindMode][InGameMenuCalendarFrame.BLOCK_TYPE_HARVESTABLE])
  v1:setImageColor(...)
  v1:invalidateLayout()
end
function InGameMenuCalendarFrame:rebuildTable()
  self.fruitTypes = {}
  local v2 = v2:getFruitTypes()
  for v4, v5 in pairs(...) do
    if not v5.shownOnMap then
      continue
    end
    table.insert(self.fruitTypes, v5)
  end
  v1:reloadData()
end
function InGameMenuCalendarFrame:getNumberOfItemsInSection(list, section)
  return #self.fruitTypes
end
function InGameMenuCalendarFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = v6:getFillTypeByFruitTypeIndex(self.fruitTypes[index].index)
  local v7 = cell:getAttribute("fruitIcon")
  v7:setImageFilename(v6.hudOverlayFilename)
  v7 = cell:getAttribute("fruitName")
  v7:setText(v6.title)
  v7 = cell:getAttribute("germination")
  v7:setText("")
  -- TODO: structure LOP_FORNPREP (pc 63, target 117)
  local v12 = cell:getAttribute("period" .. 1)
  local v17 = v17:canFruitBePlanted(self.fruitTypes[index].index, 1)
  v12.elements[1]:setVisible(...)
  local v18 = unpack(InGameMenuCalendarFrame.BLOCK_COLORS[self.isColorBlindMode][InGameMenuCalendarFrame.BLOCK_TYPE_PLANTABLE])
  v12.elements[1]:setImageColor(...)
  v17 = v17:canFruitBeHarvested(self.fruitTypes[index].index, 1)
  v12.elements[2]:setVisible(...)
  v18 = unpack(InGameMenuCalendarFrame.BLOCK_COLORS[self.isColorBlindMode][InGameMenuCalendarFrame.BLOCK_TYPE_HARVESTABLE])
  v12.elements[2]:setImageColor(...)
  -- TODO: structure LOP_FORNLOOP (pc 116, target 64)
  v9:invalidateLayout()
end
function InGameMenuCalendarFrame:onDayChanged()
  self:updateTodayBar()
end
function InGameMenuCalendarFrame:setColorBlindMode(isActive)
  if self.isColorBlindMode ~= isActive then
    self.isColorBlindMode = isActive
    self:rebuildTable()
    self:updateLegend()
  end
end
function InGameMenuCalendarFrame:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_AXIS_UP_DOWN and g_analogStickVTolerance >= value then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN and value >= -g_analogStickVTolerance then
  end
  if not v4 then
    -- if not v5 then goto L58 end
  end
  if v4 then
  else
  end
  if v6 == self.scrollInputDelayDir then
    -- if 250 >= g_time - v0.scrollInputDelay then goto L58 end
  end
  self.scrollInputDelayDir = v6
  self.scrollInputDelay = g_time
  local v10 = v10:getValue()
  v7:setValue(v10 + v6)
  return true
end
