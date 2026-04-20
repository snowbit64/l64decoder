-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ScenariosScreen = {}
local ScenariosScreen_mt = Class(ScenariosScreen, ScreenElement)
ScenariosScreen.CONTROLS = {"list"}
function ScenariosScreen.register()
  local v0 = ScenariosScreen.new()
  v1:loadGui("dataS/gui/ScenariosScreen.xml", "ScenariosScreen", v0)
end
function ScenariosScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ScenariosScreen.CONTROLS)
  v2.returnScreenName = "MainScreen"
  return v2
end
function ScenariosScreen:createFromExistingGui(v1)
  local v2 = ScenariosScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function ScenariosScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:reloadData()
end
function ScenariosScreen:onStartAction(isMouseClick)
  local v2 = v2:getScenarioByIndex(self.list.selectedIndex)
  g_startMissionInfo.scenarioId = v2.id
  g_startMissionInfo.difficulty = v2.difficulty
  local v5 = v5:getMapByConfigFilename(v2.mapXMLFilename)
  g_startMissionInfo.mapId = v5.id
  self:changeScreen(CareerScreen, ScenariosScreen)
end
function ScenariosScreen.getNumberOfItemsInSection(v0, v1, v2)
  return v3:getNumScenarios()
end
function ScenariosScreen.populateCellForItemInSection(v0, v1, v2, v3, v4)
  local v5 = v5:getScenarioByIndex(v3)
  local v6 = v4:getAttribute("title")
  v6:setText(v5.title)
  v6 = v4:getAttribute("gameIcon")
  v6:setImageFilename(v5.iconFilename)
end
function ScenariosScreen.onListSelectionChanged(v0, v1, v2, v3)
end
