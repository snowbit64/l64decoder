-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuGameSettingsFrame = {}
local InGameMenuGameSettingsFrame_mt = Class(InGameMenuGameSettingsFrame, TabbedMenuFrameElement)
InGameMenuGameSettingsFrame.CONTROLS = {"settingsContainer", "boxLayout", "textSavegameName", "multiTimeScale", "economicDifficulty", "checkTraffic", "checkDirt", "checkAutoMotorStart", "checkStopAndGoBraking", "checkTrailerFillLimit", "multiFuelUsage", "checkHelperRefillFuel", "checkHelperRefillSeed", "checkHelperRefillFertilizer", "checkHelperRefillSlurry", "checkHelperRefillManure", "checkSnowEnabled", "multiGrowthMode", "checkFruitDestruction", "checkPlowingRequired", "checkStonesEnabled", "checkLimeRequired", "checkWeedsEnabled", "multiAutoSaveInterval", "multiAutoSaveIntervalBox", "buttonPauseGame", "multiFixedSeasonalVisuals", "multiPlannedDaysPerPeriod"}
function InGameMenuGameSettingsFrame.register()
  local v0 = InGameMenuGameSettingsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuGameSettingsFrame.xml", "GameSettingsFrame", v0, true)
end
function InGameMenuGameSettingsFrame.new(subclass_mt, l10n)
  if not l10n then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuGameSettingsFrame.CONTROLS)
  v2.pageMapOverview = nil
  v2.missionInfo = nil
  v2.manureLoadingStations = {}
  v2.liquidManureLoadingStations = {}
  v2.hasMasterRights = false
  v2.hasCustomMenuButtons = true
  return v2
end
function InGameMenuGameSettingsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuGameSettingsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuGameSettingsFrame:initializeButtons()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  if not Platform.isMobile then
    self.saveButton = {inputAction = InputAction.MENU_ACTIVATE, showWhenPaused = true}
    local v2 = v2:getText(InGameMenu.L10N_SYMBOL.BUTTON_CANCEL_GAME)
    self.quitButton = {inputAction = InputAction.MENU_CANCEL, text = v2, showWhenPaused = true}
    v2 = v2:getText("button_serverSettings")
    self.serverSettingsButton = {inputAction = InputAction.MENU_EXTRA_1, text = v2, callback = function()
      self:onButtonOpenServerSettings()
    end}
  end
end
function InGameMenuGameSettingsFrame:initialize(pageMapOverview, onClickBackCallback)
  self.pageMapOverview = pageMapOverview
  self:assignStaticTexts()
  self:initializeButtons()
  self:updateButtons()
  if not onClickBackCallback then
  end
  self.onClickBackCallback = v3
  function self.textSavegameName.onFocusLeave(...)
    u0(...)
    self:updateSavegameName()
  end
end
function InGameMenuGameSettingsFrame:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
end
function InGameMenuGameSettingsFrame:setManureTriggers(manureLoadingStations, liquidManureLoadingStations)
  self.manureLoadingStations = manureLoadingStations
  self.liquidManureLoadingStations = liquidManureLoadingStations
end
function InGameMenuGameSettingsFrame:setHasMasterRights(hasMasterRights)
  self.hasMasterRights = hasMasterRights
  if g_currentMission ~= nil then
    self:updateButtons()
  end
end
function InGameMenuGameSettingsFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  self:assignDynamicTexts()
  self:updateGameSettings()
  self:updatePauseButtonState()
  self:updateAvailableProperties()
  local v2 = v2:getFocusedElement()
  if v2 == nil then
    self:setSoundSuppressed(true)
    v2:setFocus(self.boxLayout)
    self:setSoundSuppressed(false)
  end
end
function InGameMenuGameSettingsFrame:updateButtons()
  self.menuButtonInfo = {self.backButtonInfo, self.saveButton, self.quitButton}
  if self.hasMasterRights and g_currentMission.missionDynamicInfo.isMultiplayer then
    table.insert(self.menuButtonInfo, self.serverSettingsButton)
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuGameSettingsFrame:updateAvailableProperties()
  v1:invalidateLayout()
end
function InGameMenuGameSettingsFrame:updateGameSettings()
  self.savegameName = self.missionInfo.savegameName
  v1:setText(self.missionInfo.savegameName)
  local v3 = Utils.getTimeScaleIndex(self.missionInfo.timeScale)
  v1:setState(...)
  v1:setState(self.missionInfo.economicDifficulty)
  v1:setIsChecked(self.missionInfo.isSnowEnabled)
  v1:setState(self.missionInfo.growthMode)
  if self.missionInfo.fixedSeasonalVisuals == nil then
  else
  end
  v2:setState(v4)
  v3:setState(self.missionInfo.plannedDaysPerPeriod)
  v3:setIsChecked(self.missionInfo.fruitDestruction)
  v3:setIsChecked(self.missionInfo.plowingRequiredEnabled)
  v3:setIsChecked(self.missionInfo.stonesEnabled)
  v3:setIsChecked(self.missionInfo.limeRequired)
  v3:setIsChecked(self.missionInfo.weedsEnabled)
  local v7 = v7:getInterval()
  local v5 = v5:getIndexFromInterval(...)
  v3:setState(...)
  v3:setIsChecked(self.missionInfo.trafficEnabled)
  v3:setState(self.missionInfo.dirtInterval)
  v3:setIsChecked(self.missionInfo.automaticMotorStartEnabled)
  v3:setIsChecked(self.missionInfo.helperBuyFuel)
  v3:setIsChecked(self.missionInfo.helperBuySeeds)
  v3:setIsChecked(self.missionInfo.helperBuyFertilizer)
  v3:setState(self.missionInfo.fuelUsage)
  v3:setIsChecked(self.missionInfo.stopAndGoBraking)
  v3:setIsChecked(self.missionInfo.trailerFillLimit)
  v3:setState(self.missionInfo.helperSlurrySource)
  v3:setState(self.missionInfo.helperManureSource)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  v3:setDisabled(not self.hasMasterRights)
  local v6 = v6:getIsServer()
  v3:setDisabled(not v6)
  if self.multiAutoSaveIntervalBox ~= nil then
    v5 = v5:getIsServer()
    v3:setVisible(...)
    return
  end
  v5 = v5:getIsServer()
  v3:setVisible(...)
end
function InGameMenuGameSettingsFrame:updatePauseButtonState()
  if g_currentMission.paused then
    v1:applyProfile(InGameMenuGameSettingsFrame.PROFILE.BUTTON_UNPAUSE)
    local v3 = v3:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.UNPAUSE)
    v1:setText(...)
    return
  end
  v1:applyProfile(InGameMenuGameSettingsFrame.PROFILE.BUTTON_PAUSE)
  v3 = v3:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.PAUSE)
  v1:setText(...)
end
function InGameMenuGameSettingsFrame:assignStaticTexts()
  self:assignTimeScaleTexts()
  self:assignEconomicDifficultyTexts()
  self:assignDirtTexts()
  self:assignAutoSaveTexts()
  local v4 = v4:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.USAGE_LOW)
  local v5 = v5:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.USAGE_DEFAULT)
  local v6 = v6:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.USAGE_HIGH)
  v1:setTexts({})
  local v2 = v2:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.OFF)
  local v3 = v3:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.BUY)
  v2:setTexts({})
  v2:setTexts({})
  v2:setTexts({})
  v5 = v5:getText("ui_yes")
  v6 = v6:getText("ui_no")
  local v7 = v7:getText("ui_paused")
  v2:setTexts({})
  v3 = v3:getText("ui_off")
  -- TODO: structure LOP_FORNPREP (pc 138, target 151)
  local v8 = v8:formatPeriod(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 150, target 139)
  v3:setTexts({})
  -- TODO: structure LOP_FORNPREP (pc 163, target 176)
  local v9 = v9:formatNumDay(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 175, target 164)
  v4:setTexts({})
end
function InGameMenuGameSettingsFrame:assignTimeScaleTexts()
  local numTimeScales = Utils.getNumTimeScales()
  -- TODO: structure LOP_FORNPREP (pc 8, target 19)
  local v8 = Utils.getTimeScaleString(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 9)
  v3:setTexts({})
end
function InGameMenuGameSettingsFrame:assignEconomicDifficultyTexts()
  local v4 = v4:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.DIFFICULTY_EASY)
  table.insert(...)
  v4 = v4:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.DIFFICULTY_NORMAL)
  table.insert(...)
  v4 = v4:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.DIFFICULTY_HARD)
  table.insert(...)
  v2:setTexts({})
end
function InGameMenuGameSettingsFrame:assignDirtTexts()
  local v4 = v4:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.OFF)
  table.insert(...)
  -- TODO: structure LOP_FORNPREP (pc 21, target 41)
  local v7 = v7:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.GROWTH_RATE_TEMPLATE .. 1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 40, target 22)
  v2:setTexts({})
end
function InGameMenuGameSettingsFrame:assignAutoSaveTexts()
  local v3 = v3:getIntervalOptions()
  for v5, v6 in ipairs(...) do
    if 0 < v6 then
      local v12 = v12:getText("unit_minutesShort")
      table.insert(v1, v6 .. " " .. v12)
    else
      local v9 = v9:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.OFF)
      table.insert(...)
    end
  end
  v2:setTexts(v1)
end
function InGameMenuGameSettingsFrame:assignDynamicTexts()
  local v2 = v2:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.OFF)
  local v3 = v3:getText(InGameMenuGameSettingsFrame.L10N_SYMBOL.BUY)
  table.insert({}, {}[1])
  table.insert({}, {}[2])
  for v6, v7 in ipairs(self.manureLoadingStations) do
    local v8 = v8:canPlayerAccess(v7)
    if not v8 then
      continue
    end
    local v10 = v7:getName()
    table.insert(...)
  end
  v3:setTexts(v2)
  table.insert({}, v1[1])
  table.insert({}, v1[2])
  for v6, v7 in ipairs(self.liquidManureLoadingStations) do
    v8 = v8:canPlayerAccess(v7)
    if not v8 then
      continue
    end
    v10 = v10:getFarmId()
    v8 = v7:getIsFillAllowedToFarm(...)
    if not v8 then
      continue
    end
    v10 = v7:getName()
    table.insert(...)
  end
  v3:setTexts(v2)
end
function InGameMenuGameSettingsFrame:onEnterPressedSavegameName()
  self:updateSavegameName()
end
function InGameMenuGameSettingsFrame:updateSavegameName()
  if self.textSavegameName.text ~= self.savegameName then
    if self.textSavegameName.text == "" then
      local v2 = v2:getText("defaultSavegameName")
      v2:setText(v2)
    end
    self.missionInfo.savegameName = v1
    self.savegameName = v1
    SavegameSettingsEvent.sendEvent()
  end
end
function InGameMenuGameSettingsFrame:onClickTimeScale(state)
  if self.hasMasterRights then
    local v4 = Utils.getTimeScaleFromIndex(state)
    v2:setTimeScale(...)
  end
end
function InGameMenuGameSettingsFrame:onClickEconomicDifficulty(state)
  if self.hasMasterRights then
    v2:setEconomicDifficulty(state)
  end
end
function InGameMenuGameSettingsFrame:onClickTraffic(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setTrafficEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickDirt(state)
  if self.hasMasterRights then
    v2:setDirtInterval(state)
  end
end
function InGameMenuGameSettingsFrame:onClickFuelUsage(state)
  if self.hasMasterRights then
    v2:setFuelUsage(state)
  end
end
function InGameMenuGameSettingsFrame:onClickHelperRefillFuel(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuyFuel(true)
  end
end
function InGameMenuGameSettingsFrame:onClickHelperRefillSeed(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuySeeds(true)
  end
end
function InGameMenuGameSettingsFrame:onClickHelperRefillFertilizer(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuyFertilizer(true)
  end
end
function InGameMenuGameSettingsFrame:onClickHelperRefillSlurry(state)
  if self.hasMasterRights then
    v2:setHelperSlurrySource(state)
  end
end
function InGameMenuGameSettingsFrame:onClickHelperRefillManure(state)
  if self.hasMasterRights then
    v2:setHelperManureSource(state)
  end
end
function InGameMenuGameSettingsFrame:onClickAutomaticMotorStart(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setAutomaticMotorStartEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickSnowEnabled(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setSnowEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickPlannedDaysPerPeriod(state)
  if self.hasMasterRights then
    v2:setPlannedDaysPerPeriod(state)
  end
end
function InGameMenuGameSettingsFrame:onClickGrowthMode(state)
  if self.hasMasterRights then
    v2:setGrowthMode(state)
  end
end
function InGameMenuGameSettingsFrame:onClickFixedSeasonalVisuals(state)
  if self.hasMasterRights then
    if state == 1 then
      v2:setFixedSeasonalVisuals(nil)
      return
    end
    v2:setFixedSeasonalVisuals(state - 1)
  end
end
function InGameMenuGameSettingsFrame:onClickFruitDestruction(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setFruitDestructionEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickPlowingRequired(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setPlowingRequiredEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickStonesEnabled(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setStonesEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickLimeRequired(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setLimeRequired(true)
  end
end
function InGameMenuGameSettingsFrame:onClickWeedsEnabled(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setWeedsEnabled(true)
  end
end
function InGameMenuGameSettingsFrame:onClickStopAndGoBraking(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setStopAndGoBraking(true)
  end
end
function InGameMenuGameSettingsFrame:onClickTrailerFillLimit(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setTrailerFillLimit(true)
  end
end
function InGameMenuGameSettingsFrame:onClickAutoSaveInterval(state)
  if self.hasMasterRights then
    local v4 = v4:getIntervalFromIndex(state)
    v2:setAutoSaveInterval(...)
  end
end
function InGameMenuGameSettingsFrame:onClickPauseGame()
  if GS_IS_CONSOLE_VERSION then
    self.onClickBackCallback()
  end
  v1:setManualPause(not g_currentMission.paused)
  self:updatePauseButtonState()
end
function InGameMenuGameSettingsFrame.onButtonOpenServerSettings(v0)
  ServerSettingsDialog.show()
end
InGameMenuGameSettingsFrame.PROFILE = {BUTTON_PAUSE = "ingameMenuSettingsPauseButton", BUTTON_UNPAUSE = "ingameMenuSettingsUnpauseButton"}
InGameMenuGameSettingsFrame.L10N_SYMBOL = {GROWTH_RATE_TEMPLATE = "setting_plantGrowthRateState", OFF = "ui_off", BUY = "ui_buy", USAGE_LOW = "setting_fuelUsageLow", USAGE_DEFAULT = "setting_fuelUsageDefault", USAGE_HIGH = "setting_high", PAUSE = "input_PAUSE", UNPAUSE = "ui_unpause", DIFFICULTY_EASY = "button_easy", DIFFICULTY_NORMAL = "button_normal", DIFFICULTY_HARD = "button_hard", SUBSTITUTION_PREFIX = "$l10n_"}
