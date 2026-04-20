-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMainFrame = {}
local InGameMenuMainFrame_mt = Class(InGameMenuMainFrame, TabbedMenuFrameElement)
InGameMenuMainFrame.CONTROLS = {"pricesButton", "vehicleButton", "financesButton", "animalsButton", "productionButton", "statisticsButton", "settingsButton", "helpButton", CONTAINER = "container", CALENDAR_BUTTON = "calendarButton", WEATHER_BUTTON = "weatherButton", TOUR_BUTTON = "tourButton", HINTS_BUTTON = "hintsButton"}
function InGameMenuMainFrame.register()
  local v0 = InGameMenuMainFrame.new()
  v1:loadGui("dataS/gui/InGameMenuMainFrame.xml", "MainFrame", v0, true)
end
function InGameMenuMainFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMainFrame.CONTROLS)
  v2.lastFocusedButton = nil
  v2.goToMainOverview = false
  v2.isNetflixButtonVisible = false
  return v2
end
function InGameMenuMainFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMainFrame.new(nil)
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMainFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(InGameMenu.L10N_SYMBOL.BUTTON_CANCEL_GAME)
  self.quitButtonInfo = {inputAction = InputAction.MENU_CANCEL, profile = "buttonQuitGame", text = v2}
end
function InGameMenuMainFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  local v2 = v2:getIsRunning()
  v3:setVisible(v2)
  v3:setVisible(not v2)
  self.updateButtonsForTour = true
  self.menuButtonInfo = {self.backButtonInfo, self.quitButtonInfo}
  if g_currentMission.missionInfo.growthMode ~= GrowthSystem.MODE.SEASONAL then
  end
  v3:setVisible(true)
  v3:invalidateLayout()
  self:setMenuButtonInfoDirty()
  self.setInitialFocus = false
  if self.lastFocusedButton == nil then
    self.lastFocusedButton = FocusManager.currentFocusData.initialFocusElement
  end
end
function InGameMenuMainFrame:onFrameClose()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  if self.isNetflixButtonVisible then
    hideNetflixButton()
    self.isNetflixButtonVisible = false
  end
end
function InGameMenuMainFrame:onPreviousPage()
  if Platform.isMobile then
    return
  end
  local v2 = self:superClass()
  v2.onPreviousPage(self)
end
function InGameMenuMainFrame:onNextPage()
  if Platform.isMobile then
    return
  end
  local v2 = self:superClass()
  v2.onNextPage(self)
end
function InGameMenuMainFrame:getMainElementSize()
  return self.container.size
end
function InGameMenuMainFrame:getMainElementPosition()
  return self.container.absPosition
end
function InGameMenuMainFrame:update(v1)
  local v3 = v3:superClass()
  v3.update(self, v1)
  if GS_IS_NETFLIX_VERSION and not self.isNetflixButtonVisible then
    showNetflixButton()
    self.isNetflixButtonVisible = true
  end
  if self.updateButtonsForTour then
    local v2 = v2:getIsRunning()
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(v2)
    v3:setDisabled(not v2)
    self.updateButtonsForTour = false
  end
  if self.setInitialFocus then
    v2 = v2:getIsSaving()
    if not v2 then
      if self.lastFocusedButton.disabled then
        self.lastFocusedButton = self.helpButton
      end
      v3 = v3:getLastInputMode()
      if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
        v3 = v3:setFocus(self.lastFocusedButton)
        v3:setOverlayState(GuiOverlay.STATE_FOCUSED)
      end
      if not v2 then
        -- if v0.lastFocusedButton ~= v0.weatherButton then goto L154 end
      end
      self.setInitialFocus = nil
      return
    end
  end
  if self.setInitialFocus == false then
    self.setInitialFocus = true
  end
end
function InGameMenuMainFrame:onClickCalendar()
  self.lastFocusedButton = self.calendarButton
  v1:goToPage(g_inGameMenu.pageCalendar, true)
end
function InGameMenuMainFrame:onClickWeather()
  self.lastFocusedButton = self.weatherButton
  v1:goToPage(g_inGameMenu.pageWeather, true)
end
function InGameMenuMainFrame:onClickPrices()
  self.lastFocusedButton = self.pricesButton
  v1:goToPage(g_inGameMenu.pagePrices, true)
end
function InGameMenuMainFrame:onClickVehicles()
  self.lastFocusedButton = self.vehicleButton
  v1:goToPage(g_inGameMenu.pageGarageOverview, true)
end
function InGameMenuMainFrame:onClickFinances()
  self.lastFocusedButton = self.financesButton
  v1:goToPage(g_inGameMenu.pageFinances, true)
end
function InGameMenuMainFrame:onClickSettings()
  self.lastFocusedButton = self.settingsButton
  v1:goToPage(g_inGameMenu.pageSettingsMobile, true)
end
function InGameMenuMainFrame:onClickAnimals()
  self.lastFocusedButton = self.animalsButton
  v1:goToPage(g_inGameMenu.pageAnimals, true)
end
function InGameMenuMainFrame:onClickProduction()
  self.lastFocusedButton = self.productionButton
  v1:goToPage(g_inGameMenu.pageProduction, true)
end
function InGameMenuMainFrame:onClickStatistics()
  self.lastFocusedButton = self.statisticsButton
  v1:goToPage(g_inGameMenu.pageStatistics, true)
end
function InGameMenuMainFrame:onClickHelp()
  self.lastFocusedButton = self.helpButton
  v1:goToPage(g_inGameMenu.pageHelpLine, true)
end
function InGameMenuMainFrame:onClickHints()
  self.lastFocusedButton = self.hintsButton
  v1:goToPage(g_inGameMenu.pageHint, true)
end
function InGameMenuMainFrame:onClickTour()
  self.lastFocusedButton = self.tourButton
  v1:goToPage(g_inGameMenu.pageTour, true)
end
