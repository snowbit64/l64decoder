-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DifficultyScreen = {CONTROLS = {DIFFICULTY_LIST = "difficultyList"}}
local DifficultyScreen_mt = Class(DifficultyScreen, ScreenElement)
function DifficultyScreen.register()
  local v0 = DifficultyScreen.new()
  v1:loadGui("dataS/gui/DifficultyScreen.xml", "DifficultyScreen", v0)
end
function DifficultyScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(DifficultyScreen.CONTROLS)
  return v2
end
function DifficultyScreen:createFromExistingGui(v1)
  local v2 = DifficultyScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function DifficultyScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self:setIsMultiplayer(g_startMissionInfo.isMultiplayer)
  v1:reloadData()
  v1:setSelectedIndex(g_startMissionInfo.difficulty)
  v1:setFocus(self.difficultyList)
  if Platform.isMobile then
    self:onClickOk()
  end
end
function DifficultyScreen:setIsMultiplayer(isMultiplayer)
  v2:reloadData()
  if isMultiplayer and g_startMissionInfo.difficulty == 1 then
    g_startMissionInfo.difficulty = 2
    if g_startMissionInfo.isMultiplayer then
      v2:setSelectedIndex(1)
      return
    end
    v2:setSelectedIndex(2)
  end
end
function DifficultyScreen:onClickOk(isMouseClick)
  if Platform.hasDifficulty then
    self:changeScreen(MapSelectionScreen, DifficultyScreen)
    return
  end
  self:changeScreen(MapSelectionScreen, CareerScreen)
end
function DifficultyScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if g_dedicatedServer ~= nil then
    g_startMissionInfo.difficulty = g_dedicatedServer.difficulty
    self:onClickOk()
    return
  end
  if Profiler.IS_INITIALIZED then
    self:onClickOk()
    return
  end
  if g_startMissionInfo.isMultiplayer then
    Platform.verifyMultiplayerAvailabilityInMenu()
  end
end
function DifficultyScreen.getNumberOfItemsInSection(v0, v1, v2)
  if g_startMissionInfo.isMultiplayer then
    return 2
  end
  return 3
end
function DifficultyScreen.populateCellForItemInSection(v0, v1, v2, v3, v4)
  if g_startMissionInfo.isMultiplayer then
  end
  local v7 = v4:getAttribute("title")
  v7:setLocaKey("ui_difficulty" .. v3)
  v7 = v4:getAttribute("subtitle")
  v7:setLocaKey("ui_difficulty" .. v3 .. "_subtitle")
  v7 = v4:getAttribute("description")
  v7:setLocaKey("ui_difficulty_" .. {"easy", "normal", "hard"}[v3] .. "_description")
  v7 = v4:getAttribute("icon")
  local v10 = string.format("dataS/menu/difficultyIcon_%s.png", {"easy", "normal", "hard"}[v3])
  v7:setImageFilename(...)
end
function DifficultyScreen:onListSelectionChanged(list, section, index)
  if g_startMissionInfo.isMultiplayer then
  end
  g_startMissionInfo.difficulty = index
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
end
