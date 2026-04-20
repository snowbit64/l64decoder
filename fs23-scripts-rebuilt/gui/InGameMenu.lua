-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenu = {}
local InGameMenu_mt = Class(InGameMenu, TabbedMenu)
InGameMenu.SAVE_STATE_NONE = 0
InGameMenu.SAVE_STATE_VALIDATE_LIST = 1
InGameMenu.SAVE_STATE_VALIDATE_LIST_DIALOG_WAIT = 2
InGameMenu.SAVE_STATE_VALIDATE_LIST_WAIT = 3
InGameMenu.SAVE_STATE_OVERWRITE_DIALOG = 4
InGameMenu.SAVE_STATE_OVERWRITE_DIALOG_WAIT = 5
InGameMenu.SAVE_STATE_NOP_WRITE = 6
InGameMenu.SAVE_STATE_WRITE = 7
InGameMenu.SAVE_STATE_WRITE_WAIT = 8
InGameMenu.CONTROLS = {"pageMapOverview", "pageAI", "pageCalendar", "pageWeather", "pagePrices", "pageGarageOverview", "pageFinances", "pageAnimals", "pageStatistics", "pageSettingsGeneral", "pageSettingsGame", "pageSettingsControls", "pageSettingsMobile", "pageMultiplayerFarms", "pageMultiplayerUsers", "pageContracts", "pageProduction", "pageHelpLine", "pageMain", "pageTour", "pageHint", "background"}
InGameMenu.MULTIPLAYER_SAVING_DISPLAY_DURATION = 800
function InGameMenu.register()
  InGameMenuAIFrame.register()
  InGameMenuAnimalsFrame.register()
  InGameMenuCalendarFrame.register()
  InGameMenuContractsFrame.register()
  InGameMenuFinancesFrame.register()
  InGameMenuHelpFrame.register()
  InGameMenuMapFrame.register()
  InGameMenuMultiplayerFarmsFrame.register()
  InGameMenuMultiplayerUsersFrame.register()
  InGameMenuPricesFrame.register()
  InGameMenuProductionFrame.register()
  InGameMenuStatisticsFrame.register()
  InGameMenuTourFrame.register()
  InGameMenuVehiclesFrame.register()
  InGameMenuWeatherFrame.register()
  InGameMenuGameSettingsFrame.register()
  InGameMenuGeneralSettingsFrame.register()
  InGameMenuMobileSettingsFrame.register()
  InGameMenuMobileMapFrame.register()
  if Platform.hasHints then
    InGameMenuHintFrame.register()
  end
  if Platform.hasIngameMenuGameFrame then
    InGameMenuMainFrame.register()
  end
  local v0 = InGameMenu.new()
  v1:loadGui("dataS/gui/InGameMenu.xml", "InGameMenu", v0)
  return v0
end
function InGameMenu.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenu.CONTROLS)
  v2.hud = nil
  v2.performBackgroundBlur = true
  v2.gameState = GameState.MENU_INGAME
  v2.playerFarm = nil
  v2.playerFarmId = 0
  v2.currentUserId = -1
  v2.isSaving = false
  v2.missionInfo = {}
  v2.missionDynamicInfo = {}
  v2.activeDetailPage = nil
  v2.lastGaragePage = nil
  v2.paused = false
  v2.playerAlreadySaved = false
  v2.doSaveGameState = InGameMenu.SAVE_STATE_NONE
  v2.continueEnabled = true
  v2.savingMinEndTime = 0
  v2.currentDeviceHasNoSpace = false
  v2.quitAfterSave = false
  v2.client = nil
  v2.server = nil
  v2.isMasterUser = false
  v2.isServer = false
  v2.currentBalanceValue = 0
  v2.timeSinceLastMoneyUpdate = 0
  v2.needMoneyUpdate = true
  v2.showMap = false
  v2.defaultMenuButtonInfo = {}
  v2.backButtonInfo = {}
  v2.quitButtonInfo = {}
  v2.customItems = {}
  v2.blockNextPageNextEvent = false
  return v2
end
function InGameMenu:createFromExistingGui(v1)
  if InGameMenuMainFrame ~= nil and g_gui.frames.ingameMenuMain ~= nil then
    InGameMenuMainFrame.createFromExistingGui(g_gui.frames.ingameMenuMain.target, "InGameMenuMainFrame")
  end
  InGameMenuAIFrame.createFromExistingGui(g_gui.frames.ingameMenuAI.target, "InGameMenuAIFrame")
  InGameMenuHelpFrame.createFromExistingGui(g_gui.frames.ingameMenuHelpLine.target, "InGameMenuHelpFrame")
  InGameMenuStatisticsFrame.createFromExistingGui(g_gui.frames.ingameMenuGameStats.target, "InGameMenuStatisticsFrame")
  InGameMenuAnimalsFrame.createFromExistingGui(g_gui.frames.ingameMenuAnimals.target, "InGameMenuAnimalsFrame")
  InGameMenuFinancesFrame.createFromExistingGui(g_gui.frames.ingameMenuFinances.target, "InGameMenuFinancesFrame")
  InGameMenuPricesFrame.createFromExistingGui(g_gui.frames.ingameMenuPrices.target, "InGameMenuPricesFrame")
  InGameMenuVehiclesFrame.createFromExistingGui(g_gui.frames.garageOverview.target, "InGameMenuVehiclesFrame")
  InGameMenuMapFrame.createFromExistingGui(g_gui.frames.ingameMenuMapOverview.target, "InGameMenuMapFrame")
  InGameMenuCalendarFrame.createFromExistingGui(g_gui.frames.ingameMenuCalendar.target, "InGameMenuCalendarFrame")
  InGameMenuContractsFrame.createFromExistingGui(g_gui.frames.ingameMenuContracts.target, "InGameMenuContractsFrame")
  if g_gui.frames.ingameMenuGameSettingsMobile ~= nil then
    InGameMenuMobileSettingsFrame.createFromExistingGui(g_gui.frames.ingameMenuGameSettingsMobile.target, "InGameMenuMobileSettingsFrame")
  end
  if g_gui.frames.inGameMenuMobileMap ~= nil then
    InGameMenuMobileMapFrame.createFromExistingGui(g_gui.frames.inGameMenuMobileMap.target, "InGameMenuMobileMapFrame")
  end
  InGameMenuGameSettingsFrame.createFromExistingGui(g_gui.frames.ingameMenuGameSettingsGame.target, "InGameMenuGameSettingsFrame")
  InGameMenuGeneralSettingsFrame.createFromExistingGui(g_gui.frames.ingameMenuGameSettingsGeneral.target, "InGameMenuGeneralSettingsFrame")
  if InGameMenuMultiplayerFarmsFrame ~= nil and g_gui.frames.pageMultiplayerFarms ~= nil then
    InGameMenuMultiplayerFarmsFrame.createFromExistingGui(g_gui.frames.pageMultiplayerFarms.target, "InGameMenuMultiplayerFarmsFrame")
    InGameMenuMultiplayerUsersFrame.createFromExistingGui(g_gui.frames.pageMultiplayerUsers.target, "InGameMenuMultiplayerUsersFrame")
  end
  InGameMenuProductionFrame.createFromExistingGui(g_gui.frames.ingameMenuProduction.target, "InGameMenuProductionFrame")
  InGameMenuTourFrame.createFromExistingGui(g_gui.frames.ingameMenuTour.target, "InGameMenuTourFrame")
  if Platform.hasHints then
    InGameMenuHintFrame.createFromExistingGui(g_gui.frames.ingameMenuHint.target, "InGameMenuHintFrame")
  end
  InGameMenuWeatherFrame.createFromExistingGui(g_gui.frames.ingameMenuWeather.target, "InGameMenuWeatherFrame")
  local v2 = InGameMenu.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  v2:setEnvironment(g_currentMission.environment)
  local v6 = v6:getUsers()
  v2:setConnectedUsers(...)
  v2:setClient(g_client)
  v2:setServer(g_server)
  v2:setPlayer(g_currentMission.player)
  v2:setMissionInfo(g_currentMission.missionInfo, g_currentMission.missionDynamicInfo, g_currentMission.baseDirectory)
  v2:setTerrainSize(g_currentMission.terrainSize)
  v2:setHUD(g_currentMission.hud)
  v6 = v6:getIngameMap()
  v2:setInGameMap(...)
  v2:setManureTriggers(g_currentMission.manureLoadingStations, g_currentMission.liquidManureLoadingStations)
  v2:setMissionFruitTypes(self.missionFruitTypes)
  v2:setPlayerFarm(self.playerFarm)
  v2:setCurrentUserId(g_currentMission.playerUserId)
  v2:onLoadMapFinished()
  g_inGameMenu = v2
  return v2
end
function InGameMenu:setInGameMap(inGameMap)
  if Platform.isMobile then
    v2:setInGameMap(inGameMap)
  else
    v2:setInGameMap(inGameMap)
    v2:setInGameMap(inGameMap)
  end
  self.baseIngameMap = inGameMap
end
function InGameMenu:setHUD(hud)
  self.hud = hud
end
function InGameMenu:setTerrainSize(terrainSize)
  if Platform.isMobile then
    v2:setTerrainSize(terrainSize)
    return
  end
  v2:setTerrainSize(terrainSize)
  v2:setTerrainSize(terrainSize)
end
function InGameMenu:setMissionFruitTypes(fruitTypes)
  self.missionFruitTypes = fruitTypes
  if Platform.isMobile then
    v2:setMissionFruitTypes(fruitTypes)
    return
  end
  v2:setMissionFruitTypes(fruitTypes)
end
function InGameMenu:setConnectedUsers(users)
  if self.pageMultiplayerUsers ~= nil then
    v2:setUsers(users)
    v2:setUsers(users)
  end
end
function InGameMenu:setClient(client)
  self.client = client
  if Platform.isMobile then
    v2:setClient(client)
  else
    v2:setClient(client)
  end
  v2:setClient(client)
end
function InGameMenu:setServer(server)
  self.server = server
  if server == nil then
  end
  self.isServer = true
  self:updateHasMasterRights()
end
function InGameMenu:updateHasMasterRights()
  if not self.isMasterUser then
  end
  if Platform.isMobile then
    v2:setHasMasterRights(v1)
  else
    v2:setHasMasterRights(v1)
  end
  if self.saveButtonInfo.disabled ~= not v1 then
    self.saveButtonInfo.disabled = not v1
    if self.currentPage ~= nil then
      self:updateButtonsPanel(self.currentPage)
    end
  end
  if self.currentPage ~= nil then
    self:updatePages()
  end
end
function InGameMenu:onGrowthModeChanged()
  if self.currentPage ~= nil then
    self:updatePages()
  end
end
function InGameMenu:onLoadMapFinished()
  if Platform.isMobile then
    v1:onLoadMapFinished()
    return
  end
  v1:onLoadMapFinished()
  v1:onLoadMapFinished()
end
function InGameMenu:initializePages()
  local v1 = self:makeSelfCallback(self.onButtonBack)
  self.clickBackCallback = v1
  if Platform.isMobile then
    v1:initialize(self.clickBackCallback)
  else
    v1:initialize(self.clickBackCallback)
    v1:initialize(self.clickBackCallback)
  end
  v1:initialize()
  v1:initialize()
  v1:initialize()
  v1:initialize()
  v1:initialize()
  if self.pageContracts ~= nil then
    v1:initialize()
  end
  v1:initialize()
  v1:initialize()
  v1:initialize()
  v1:initialize()
  if Platform.isMobile then
    v1:initialize()
  else
    v1:initialize(self.pageMapOverview, self.clickBackCallback)
    v1:initialize()
  end
  if Platform.hasHints then
    v1:initialize()
  end
  if Platform.supportsMultiplayer then
    v1:initialize()
    v1:initialize()
  end
  if self.pageMain ~= nil then
    v1:initialize()
  end
  if self.pageSettingsControls ~= nil then
    local controlsController = ControlsController.new()
    v3:initialize(controlsController, true)
    v3:setRequestButtonUpdateCallback(function()
      local controlsController = controlsController:getMenuButtonInfo()
      self:assignMenuButtonInfo(...)
    end)
  end
end
function InGameMenu:setupMenuPages()
  local v4 = self:makeIsMainEnabledPredicate()
  if self.pageMain ~= nil then
    self:registerPage(self.pageMain, 1, v4)
    local v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.MAP)
    self:addPageTab(self.pageMain, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsTourEnabledPredicate()
  if self.pageTour ~= nil then
    self:registerPage(self.pageTour, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.TOUR)
    self:addPageTab(self.pageTour, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsHintEnabledPredicate()
  if self.pageHint ~= nil then
    self:registerPage(self.pageHint, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.HELP)
    self:addPageTab(self.pageHint, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsMapEnabledPredicate()
  if self.pageMapOverview ~= nil then
    self:registerPage(self.pageMapOverview, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.MAP)
    self:addPageTab(self.pageMapOverview, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsAIEnabledPredicate()
  if self.pageAI ~= nil then
    self:registerPage(self.pageAI, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.AI)
    self:addPageTab(self.pageAI, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsMobileMapEnabledPredicate()
  if self.pageMapMobile ~= nil then
    self:registerPage(self.pageMapMobile, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.MAP)
    self:addPageTab(self.pageMapMobile, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsCalendarEnabledPredicate()
  if self.pageCalendar ~= nil then
    self:registerPage(self.pageCalendar, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.CALENDAR)
    self:addPageTab(self.pageCalendar, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsWeatherEnabledPredicate()
  if self.pageWeather ~= nil then
    self:registerPage(self.pageWeather, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.WEATHER)
    self:addPageTab(self.pageWeather, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsPricesEnabledPredicate()
  if self.pagePrices ~= nil then
    self:registerPage(self.pagePrices, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.PRICES)
    self:addPageTab(self.pagePrices, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsGarageEnabledPredicate()
  if self.pageGarageOverview ~= nil then
    self:registerPage(self.pageGarageOverview, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.VEHICLES)
    self:addPageTab(self.pageGarageOverview, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsFinancesEnabledPredicate()
  if self.pageFinances ~= nil then
    self:registerPage(self.pageFinances, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.FINANCES)
    self:addPageTab(self.pageFinances, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsAnimalsEnabledPredicate()
  if self.pageAnimals ~= nil then
    self:registerPage(self.pageAnimals, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.ANIMALS)
    self:addPageTab(self.pageAnimals, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsContractsEnabledPredicate()
  if self.pageContracts ~= nil then
    self:registerPage(self.pageContracts, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.CONTRACTS)
    self:addPageTab(self.pageContracts, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsProductionEnabledPredicate()
  if self.pageProduction ~= nil then
    self:registerPage(self.pageProduction, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.PRODUCTION)
    self:addPageTab(self.pageProduction, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsStatisticsEnabledPredicate()
  if self.pageStatistics ~= nil then
    self:registerPage(self.pageStatistics, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.STATISTICS)
    self:addPageTab(self.pageStatistics, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsMpFarmsEnabledPredicate()
  if self.pageMultiplayerFarms ~= nil then
    self:registerPage(self.pageMultiplayerFarms, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.FARMS)
    self:addPageTab(self.pageMultiplayerFarms, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsMpUsersEnabledPredicate()
  if self.pageMultiplayerUsers ~= nil then
    self:registerPage(self.pageMultiplayerUsers, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.USERS)
    self:addPageTab(self.pageMultiplayerUsers, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsGameSettingsEnabledPredicate()
  if self.pageSettingsGame ~= nil then
    self:registerPage(self.pageSettingsGame, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.GAME_SETTINGS)
    self:addPageTab(self.pageSettingsGame, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsGeneralSettingsEnabledPredicate()
  if self.pageSettingsGeneral ~= nil then
    self:registerPage(self.pageSettingsGeneral, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.GENERAL_SETTINGS)
    self:addPageTab(self.pageSettingsGeneral, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsMobileSettingsEnabledPredicate()
  if self.pageSettingsMobile ~= nil then
    self:registerPage(self.pageSettingsMobile, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.HELP)
    self:addPageTab(self.pageSettingsMobile, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsControlsSettingsEnabledPredicate()
  if self.pageSettingsControls ~= nil then
    self:registerPage(self.pageSettingsControls, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.CONTROLS_SETTINGS)
    self:addPageTab(self.pageSettingsControls, g_iconsUIFilename, v6)
  end
  v4 = self:makeIsHelpEnabledPredicate()
  if self.pageHelpLine ~= nil then
    self:registerPage(self.pageHelpLine, v1 + 1, v4)
    v6 = GuiUtils.getUVs(InGameMenu.TAB_UV.HELP)
    self:addPageTab(self.pageHelpLine, g_iconsUIFilename, v6)
  end
end
function InGameMenu:setupMenuButtonInfo()
  local v2 = v2:superClass()
  v2.setupMenuButtonInfo(self)
  v2 = self:makeSelfCallback(self.onButtonQuit)
  local onButtonSaveGameFunction = self:makeSelfCallback(self.onButtonSaveGame)
  local v5 = v5:getText(InGameMenu.L10N_SYMBOL.BUTTON_BACK)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v5, callback = self.clickBackCallback}
  v5 = v5:getText(InGameMenu.L10N_SYMBOL.BUTTON_SAVE_GAME)
  self.saveButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v5, callback = onButtonSaveGameFunction, showWhenPaused = true}
  v5 = v5:getText(InGameMenu.L10N_SYMBOL.BUTTON_CANCEL_GAME)
  self.quitButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v5, callback = v2, showWhenPaused = true}
  if Platform.isMobile then
    self.defaultMenuButtonInfo = {self.backButtonInfo}
  else
    self.defaultMenuButtonInfo = {self.backButtonInfo, self.saveButtonInfo, self.quitButtonInfo}
  end
  self.defaultMenuButtonInfoByActions[InputAction.MENU_BACK] = self.defaultMenuButtonInfo[1]
  self.defaultMenuButtonInfoByActions[InputAction.MENU_ACTIVATE] = self.defaultMenuButtonInfo[2]
  self.defaultMenuButtonInfoByActions[InputAction.MENU_CANCEL] = self.defaultMenuButtonInfo[3]
  {}[InputAction.MENU_BACK] = v1
  {}[InputAction.MENU_CANCEL] = v2
  {}[InputAction.MENU_ACTIVATE] = onButtonSaveGameFunction
  self.defaultButtonActionCallbacks = {}
end
function InGameMenu:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if Platform.isMobile then
    self.buttonsPanel.absSize[1] = self.buttonsPanel.absSize[1] / g_aspectScaleX
  elseif self.pageMain ~= nil then
    v1:delete()
    self.pageMain = nil
  end
  v1:subscribe(MessageType.GUI_INGAME_OPEN_FINANCES_SCREEN, self.openFinancesScreen, self)
  v1:subscribe(MessageType.GUI_INGAME_OPEN_FARMS_SCREEN, self.openFarmsScreen, self)
  v1:subscribe(MessageType.GUI_INGAME_OPEN_PRODUCTION_SCREEN, self.openProductionScreen, self)
  v1:subscribe(MessageType.GUI_INGAME_OPEN_AI_SCREEN, self.openAIScreen, self)
  v1:subscribe(MessageType.GUI_INGAME_OPEN_HELP_SCREEN, self.openHelpLine, self)
  v1:subscribe(MessageType.MONEY_CHANGED, self.onMoneyChanged, self)
  v1:subscribe(MessageType.MASTERUSER_ADDED, self.onMasterUserAdded, self)
  v1:subscribe(MessageType.UNLOADING_STATIONS_CHANGED, self.onUnloadingStationsChanged, self)
  v1:subscribe(MessageType.LOADING_STATIONS_CHANGED, self.onUnloadingStationsChanged, self)
  self:initializePages()
  self:setupMenuPages()
end
function InGameMenu:setEnvironment(environment)
  v2:setEnvironment(environment)
end
function InGameMenu:updateBackground()
  v1:setVisible(self.currentPage.needsSolidBackground)
end
function InGameMenu:setMissionInfo(missionInfo, missionDynamicInfo, missionBaseDirectory)
  self.missionInfo = missionInfo
  self.missionDynamicInfo = missionDynamicInfo
  if Platform.isMobile then
    v4:setMissionInfo(missionInfo)
  else
    v4:setMissionInfo(missionInfo)
  end
  self.currentDeviceHasNoSpace = false
end
function InGameMenu:setPlayerFarm(farm)
  self.playerFarm = farm
  if farm ~= nil then
    self.playerFarmId = farm.farmId
  else
    self.playerFarmId = 0
  end
  if Platform.isMobile then
    v2:setPlayerFarm(farm)
  else
    v2:setPlayerFarm(farm)
    v2:setPlayerFarm(farm)
  end
  v2:setPlayerFarm(farm)
  v2:setPlayerFarm(farm)
  if self.pageMultiplayerUsers ~= nil then
    v2:setPlayerFarm(farm)
    v2:setPlayerFarm(farm)
  end
  v2:setPlayerFarm(farm)
  v2:setPlayerFarm(farm)
  if farm ~= nil then
    local v2 = self:getIsOpen()
    if v2 then
      self:updatePages()
    end
  end
end
function InGameMenu:setPlayer(player)
  if self.pageMultiplayerFarms ~= nil then
    v2:setPlayer(player)
  end
end
function InGameMenu:setCurrentUserId(currentUserId)
  self.currentUserId = currentUserId
  if self.pageMultiplayerUsers ~= nil then
    v2:setCurrentUserId(currentUserId)
    v2:setCurrentUserId(currentUserId)
  end
end
function InGameMenu:setManureTriggers(manureLoadingStations, liquidManureLoadingStations)
  if Platform.isMobile then
    v3:setManureTriggers(manureLoadingStations, liquidManureLoadingStations)
    return
  end
  v3:setManureTriggers(manureLoadingStations, liquidManureLoadingStations)
end
function InGameMenu.leaveCurrentGame(v0)
  OnInGameMenuMenu()
end
function InGameMenu:exitMenu()
  if self.continueEnabled and not self.isSaving then
    local v2 = v2:superClass()
    v2.exitMenu(self)
  end
end
function InGameMenu:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.isSaving = false
  self.playerAlreadySaved = false
  self.doSaveGameState = InGameMenu.SAVE_STATE_NONE
  self.savingMinEndTime = 0
  self.currentDeviceHasNoSpace = false
  self.quitAfterSave = false
  self.isMasterUser = false
  self.isServer = false
  self.quitAfterSave = false
  self.continueEnabled = true
end
function InGameMenu:onMenuOpened()
  if self.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    self:setSoundSuppressed(true)
    local v1 = v1:getPageIdByElement(self.pageMultiplayerFarms)
    local v2 = v2:getPageMappingIndex(v1)
    v3:setState(v2, true)
    self:setSoundSuppressed(false)
  end
  if Platform.isMobile then
    v1:setManualPause(true)
  end
  if self.currentPage ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L73
    v1 = v1:getIsVisible()
    if not v1 then
      v1:publish(MessageType.GUI_INGAME_OPEN)
      -- goto L80  (LOP_JUMP +11)
    end
    self.sendDelayedOpenMessage = true
  else
    v1:publish(MessageType.GUI_INGAME_OPEN)
  end
  if self.pageMain ~= nil then
    local v3 = ClassUtil.getClassObjectByObject(self.pageMain)
    self:setPageEnabled(v3, true)
  end
end
function InGameMenu:onClose(element)
  if Platform.isMobile then
    v2:setManualPause(false)
  end
  local v3 = v3:superClass()
  v3.onClose(self)
  self.mouseDown = false
  self.alreadyClosed = true
  if Platform.gameplay.canSellFromMenu then
    v2:showMoneyChange(MoneyType.SHOP_VEHICLE_SELL)
    v2:showMoneyChange(MoneyType.SHOP_PROPERTY_SELL)
    v2:showMoneyChange(MoneyType.ANIMAL_UPKEEP)
  end
  v2:saveToXMLFile(g_savegameXML)
end
function InGameMenu:onButtonSaveGame()
  if self.missionDynamicInfo.isMultiplayer and self.missionDynamicInfo.isClient then
    -- if not v0.isMasterUser then goto L19 end
  end
  if g_currentMission.isMissionStarted then
    -- if not v0.isSaving then goto L21 end
  end
  return true
  local v1 = v1:isa(FSCareerMissionInfo)
  if v1 and self.doSaveGameState == InGameMenu.SAVE_STATE_NONE then
    if not self.isServer and self.isMasterUser and self.missionDynamicInfo.isMultiplayer then
      v1 = v1:getServerConnection()
      local v3 = SaveEvent.new()
      v1:sendEvent(...)
      self:notifyStartSaving()
      self.savingDisplayTimer = g_time + InGameMenu.MULTIPLAYER_SAVING_DISPLAY_DURATION
      return
    end
    v1:publish(SaveEvent, false, false)
  end
end
function InGameMenu:onButtonQuit()
  if Platform.isMobile then
    -- if g_inGameMenu.isSaving then goto L86 end
    g_inGameMenu.quitAfterSave = true
    v2:startSaveCurrentGame(false)
    return
  end
  if self.isSaving then
    return
  end
  local v1 = v1:getText(InGameMenu.L10N_SYMBOL.END_GAME)
  if self.missionDynamicInfo.isMultiplayer then
  end
  if not v2 then
    local v3 = v3:isa(FSCareerMissionInfo)
    if not v3 then
      v3 = v3:getText(InGameMenu.L10N_SYMBOL.END_TUTORIAL)
    elseif not self.playerAlreadySaved then
      v3 = v3:getText(InGameMenu.L10N_SYMBOL.END_WITHOUT_SAVING)
    end
  end
  YesNoDialog.show(self.onYesNoEnd, self, v1)
end
function InGameMenu:onButtonBack()
  if Platform.isMobile then
    local v2 = Utils.getNoNil(self.currentPage.closeMenuOneshot, false)
    local v3 = Utils.getNoNil(self.currentPage.goToMainOverview, true)
    self.currentPage.closeMenuOneshot = false
    if not v2 and v3 then
      local v6 = ClassUtil.getClassObjectByObject(self.pageMain)
      self:setPageEnabled(v6, true)
      self:goToPage(self.pageMain)
      return
    end
  end
  v3 = v3:superClass()
  v3.onButtonBack(self)
end
function InGameMenu:setIsGamePaused(paused)
  self.paused = paused
  if self.currentPage ~= nil then
    self:updateButtonsPanel(self.currentPage)
  end
end
function InGameMenu:startSavingGameDisplay()
  local v1 = v1:getText(InGameMenu.L10N_SYMBOL.SAVING_CONTENT)
  MessageDialog.show(nil, nil, v1, nil, false)
  local v3 = getTimeSec()
  self.savingMinEndTime = v3 + SavegameController.SAVING_DURATION
  self.isSaving = true
end
function InGameMenu:update(dt)
  self.alreadyClosed = false
  if self.doSaveGameState == InGameMenu.SAVE_STATE_NONE and self.isSaving then
    local v2 = getTimeSec()
    if self.savingMinEndTime <= v2 then
      self.savingMinEndTime = 0
      MessageDialog.hide()
      self.isSaving = false
      if self.quitAfterSave then
        self:leaveCurrentGame()
        return
      end
    end
  end
  if self.savingDisplayTimer ~= nil and self.savingDisplayTimer < g_time then
    self:notifySaveComplete()
    self.savingDisplayTimer = nil
  end
  if self.isSaving then
    return
  end
  local v3 = v3:superClass()
  v3.update(self, dt)
  if GS_PLATFORM_PLAYSTATION and g_currentMission ~= nil and self.missionDynamicInfo.isMultiplayer then
    v2 = getMultiplayerAvailability()
    if v2 == MultiplayerAvailability.NOT_AVAILABLE and self.continueEnabled then
      self.continueEnabled = false
      v2:showGui("InGameMenu")
      return
    end
  end
  self:updateCurrentBalanceDisplay(dt)
  if self.sendDelayedOpenMessage and self.currentPage ~= nil and self.currentPage.dynamicMapImageLoading ~= nil then
    v2 = v2:getIsVisible()
    if not v2 then
      v2:publish(MessageType.GUI_INGAME_OPEN)
      self.sendDelayedOpenMessage = false
    end
  end
end
function InGameMenu:updateButtonsPanel(page)
  if self.buttonsPanel ~= nil then
    v3:setVisible(not page.hasFullScreenMap)
    v3:setDisabled(page.hasFullScreenMap)
    local v4 = v4:superClass()
    v4.updateButtonsPanel(self, page)
  end
end
function InGameMenu:updatePages(v1)
  v2:setVisible(true)
  if v1 ~= nil then
    local v2 = v2:getPageElementByIndex(v1)
    local v3 = v3:getPageElementByIndex(self.currentPageId)
    if v3 == self.pageMain then
      v4:setVisible(false)
      local v6 = ClassUtil.getClassObjectByObject(self.pageMain)
      self:setPageEnabled(v6, true)
    elseif Platform.isMobile then
      -- if v3 ~= v0.pageMapMobile then goto L55 end
      v4:setVisible(false)
    else
      if v2 == self.pageMain then
        v6 = ClassUtil.getClassObjectByObject(self.pageMain)
        self:setPageEnabled(v6, false)
        self.pagingElement.currentPageMappingIndex = self.pagingElement.currentPageMappingIndex - 1
      end
    end
  end
  v3 = v3:superClass()
  v3.updatePages(self)
end
function InGameMenu:openFinancesScreen()
  if self.playerFarmId ~= FarmManager.SPECTATOR_FARM_ID then
    self:changeScreen(InGameMenu)
    local v1 = v1:getPageMappingIndexByElement(self.pageFinances)
    v2:setState(v1, true)
  end
end
function InGameMenu:openAIScreen()
  self:changeScreen(InGameMenu)
  local v1 = v1:getPageMappingIndexByElement(self.pageAI)
  if Platform.isMobile then
    local v2 = v2:getPageMappingIndexByElement(self.pageMapMobile)
  end
  v2:setState(v1, true)
end
function InGameMenu:openFarmsScreen()
  self:changeScreen(InGameMenu)
  local v1 = v1:getPageMappingIndexByElement(self.pageMultiplayerFarms)
  v2:setState(v1, true)
end
function InGameMenu:openHelpLine(categoryIndex, pageIndex)
  self:changeScreen(InGameMenu)
  local v3 = v3:getPageMappingIndexByElement(self.pageHelpLine)
  v4:setState(v3, true)
  v4:openPage(categoryIndex, pageIndex)
end
function InGameMenu:openProductionScreen(productionPoint)
  self:changeScreen(InGameMenu)
  local v2 = v2:getPageMappingIndexByElement(self.pageProduction)
  v3:setState(v2, true)
  v3:setSelectedProductionPoint(productionPoint)
end
function InGameMenu:setMasterServerConnectionFailed(reason)
  if self.pageSettingsGame == nil then
    return
  end
  local v2 = v2:getPageMappingIndexByElement(self.pageSettingsGame)
  v3:setState(v2, true)
  if reason ~= MasterServerConnection.FAILED_PERMANENT_BAN and reason ~= MasterServerConnection.FAILED_TEMPORARY_BAN then
  end
  if not v3 then
    -- if v0.isServer then goto L57 end
  end
  self:leaveCurrentGame()
  local v5 = v5:getText(InGameMenu.L10N_SYMBOL.MASTER_SERVER_CONNECTION_LOST)
  InfoDialog.show(v5, self.onConnectionFailedDialogClick, self)
  return
  self.continueEnabled = false
  local v7 = v7:getText(InGameMenu.L10N_SYMBOL.MASTER_SERVER_CONNECTION_LOST)
  local v9 = v9:getText("button_save")
  local v10 = v10:getText("button_quit")
  YesNoDialog.show(...)
end
function InGameMenu:onMasterUserAdded(user)
  local v2 = user:getId()
  if v2 == g_currentMission.playerUserId then
    self.isMasterUser = true
    self:updateHasMasterRights()
  end
end
function InGameMenu:onMasterUserRemoved(user)
  local v2 = user:getId()
  if v2 == g_currentMission.playerUserId then
    self.isMasterUser = false
    self:updateHasMasterRights()
  end
end
function InGameMenu:onUnloadingStationsChanged()
  v1:updateStations()
end
function InGameMenu:updateCurrentBalanceDisplay(dt)
  self.timeSinceLastMoneyUpdate = self.timeSinceLastMoneyUpdate + dt
  if self.needMoneyUpdate and TabbedMenu.MONEY_UPDATE_INTERVAL <= self.timeSinceLastMoneyUpdate then
    if Platform.isMobile then
      v2:onMoneyChanged(self.playerFarmId, self.currentBalanceValue)
    else
      v2:onMoneyChanged(self.playerFarmId, self.currentBalanceValue)
    end
    if self.pageMultiplayerUsers ~= nil then
      v2:updateBalance()
    end
    self.timeSinceLastMoneyUpdate = 0
    self.needMoneyUpdate = false
  end
end
function InGameMenu:getTabBarProfile()
  if self.currentPage.hasFullScreenMap then
    return InGameMenu.PROFILES.TAB_BAR_DARK
  end
  return InGameMenu.PROFILES.TAB_BAR_LIGHT
end
function InGameMenu:onClickMenu()
  self:exitMenu()
  return true
end
function InGameMenu:onMoneyChanged(farmId, newMoneyValue)
  if farmId == self.playerFarmId then
    self.needMoneyUpdate = true
    self.currentBalanceValue = newMoneyValue
  end
end
function InGameMenu:onYesNoEnd(yes)
  if yes then
    if self.missionDynamicInfo.isMultiplayer and self.isServer then
      local v4 = ShutdownEvent.new()
      v2:broadcastEvent(...)
    end
    self:leaveCurrentGame()
  end
end
function InGameMenu:onPageNext()
  if self.blockNextPageNextEvent then
    self.blockNextPageNextEvent = false
    return
  end
  local v2 = v2:superClass()
  v2.onPageNext(self)
end
function InGameMenu:onPageChange(pageIndex, pageMappingIndex, element, skipTabVisualUpdate)
  local v6 = v6:getPageElementByIndex(self.currentPageId)
  v6.closeMenuOneshot = false
  if v6 == self.pageMapOverview then
    v7:copySettingsFromElement(self.pageMapOverview.ingameMap)
  elseif v6 == self.pageAI then
    v7:copySettingsFromElement(self.pageAI.ingameMap)
  end
  local v8 = v8:superClass()
  v8.onPageChange(self, pageIndex, pageMappingIndex, element, skipTabVisualUpdate)
  local v7 = v7:getPageElementByIndex(pageIndex)
  if v7.hasFullScreenMap then
    if not Platform.isMobile then
      v7:setStaticUIDeadzone(self.header.absPosition[1], self.header.absPosition[2], self.header.size[1], self.header.size[2])
    end
    v7:resetUIDeadzones()
    v8:onMapVisibilityChange(true)
  else
    v8:onMapVisibilityChange(false)
  end
  local v10 = self:getTabBarProfile()
  v8:applyProfile(...)
  self:updateBackground()
  self:updatePages(v5)
end
function InGameMenu.getPageButtonInfo(v0, pageIndex)
  local element = element:superClass()
  return element.getPageButtonInfo(v0, pageIndex)
end
function InGameMenu:onConnectionFailedDialogClick(yes)
  if yes then
    self.quitAfterSave = true
    pageMappingIndex:publish(SaveEvent, false, false)
    return
  end
  self:leaveCurrentGame()
end
function InGameMenu:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
  if Platform.isMobile then
    skipTabVisualUpdate:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
    return
  end
  skipTabVisualUpdate:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
  skipTabVisualUpdate:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
end
function InGameMenu:notifyValidateSavegameList(currentDeviceHasNoSpace, dialogCallback, callbackTarget)
  self.doSaveGameState = SavegameController.SAVE_STATE_VALIDATE_LIST_DIALOG_WAIT
  local skipTabVisualUpdate = skipTabVisualUpdate:getText(InGameMenu.L10N_SYMBOL.SELECT_DEVICE)
  if currentDeviceHasNoSpace then
    local v5 = v5:getText(InGameMenu.L10N_SYMBOL.SAVE_NO_SPACE)
  end
  YesNoDialog.show(dialogCallback, callbackTarget, skipTabVisualUpdate)
end
function InGameMenu:notifyStartSaving()
  self.doSaveGameState = SavegameController.SAVE_STATE_NOP_WRITE
  self:startSavingGameDisplay()
end
function InGameMenu:notifySaveComplete()
  self.doSaveGameState = SavegameController.SAVE_STATE_NONE
  self.playerAlreadySaved = true
end
function InGameMenu:notifySavegameNotSaved(errorCode)
  self.doSaveGameState = SavegameController.SAVE_STATE_NONE
  self.savingMinEndTime = 0
  local pageMappingIndex = pageMappingIndex:getText(InGameMenu.L10N_SYMBOL.NOT_SAVED)
  if errorCode == Savegame.ERROR_DEVICE_UNAVAILABLE then
    local element = element:getText(InGameMenu.L10N_SYMBOL.SAVE_NO_DEVICE)
  end
  InfoDialog.show(pageMappingIndex)
end
function InGameMenu:notifyOverwriteSavegame(dialogCallback, callbackTarget)
  self.doSaveGameState = SavegameController.SAVE_STATE_OVERWRITE_DIALOG_WAIT
  MessageDialog.hide()
  local v6 = v6:getText(InGameMenu.L10N_SYMBOL.SAVE_OVERWRITE)
  YesNoDialog.show(...)
end
function InGameMenu.notifySaveFailedNoSpace(v0, pageIndex, pageMappingIndex)
  local v6 = v6:getText(InGameMenu.L10N_SYMBOL.SAVE_NO_SPACE)
  YesNoDialog.show(...)
end
function InGameMenu:onSoilSettingChanged()
  if Platform.isMobile then
    pageIndex:onSoilSettingChanged()
    return
  end
  pageIndex:onSoilSettingChanged()
end
function InGameMenu.makeIsMainEnabledPredicate(v0)
  return function()
    return Platform.isMobile
  end
end
function InGameMenu.makeIsHintEnabledPredicate(v0)
  return function()
    if Platform.hasHints then
      local pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsTourEnabledPredicate(v0)
  return function()
    return v0:getIsRunning()
  end
end
function InGameMenu.makeIsMapEnabledPredicate(v0)
  return function()
    return not Platform.isMobile
  end
end
function InGameMenu.makeIsMobileMapEnabledPredicate(v0)
  return function()
    if Platform.isMobile then
    end
    return v0
  end
end
function InGameMenu.makeIsAIEnabledPredicate(v0)
  return function()
    if not not Platform.isMobile then
    end
    return v0
  end
end
function InGameMenu.makeIsCalendarEnabledPredicate(v0)
  return function()
    if g_currentMission.missionInfo.growthMode == GrowthSystem.MODE.SEASONAL then
      local pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsWeatherEnabledPredicate(v0)
  return function()
    local pageIndex = pageIndex:getIsRunning()
    return not pageIndex
  end
end
function InGameMenu.makeIsPricesEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    end
    if v0 then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
function InGameMenu.makeIsAnimalsEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    end
    if v0 then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
function InGameMenu.makeIsContractsEnabledPredicate(v0)
  return function()
    if u0.missionDynamicInfo.isMultiplayer then
      -- if u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then goto L17 end
    end
    if not Platform.isMobile then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
function InGameMenu.makeIsGarageEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    end
    if v0 then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
function InGameMenu.makeIsFinancesEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    end
    if v0 then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
function InGameMenu.makeIsStatisticsEnabledPredicate(v0)
  return function()
    if not u0.missionDynamicInfo.isMultiplayer then
      local pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsGameSettingsEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.missionDynamicInfo.isMultiplayer then
      -- if u0.isServer then goto L15 end
    end
    if pageIndex and not Platform.isMobile then
      local element = element:getIsRunning()
    end
    return pageMappingIndex
  end
end
function InGameMenu.makeIsGeneralSettingsEnabledPredicate(v0)
  return function()
    if not Platform.isMobile then
      local pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsMobileSettingsEnabledPredicate(v0)
  return function()
    if Platform.isMobile then
      local pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsControlsSettingsEnabledPredicate(v0)
  return function()
    if not GS_IS_CONSOLE_VERSION and not Platform.isMobile then
      local pageIndex = getNumOfGamepads()
      if 0 >= pageIndex then
        local v0 = getIsKeyboardAvailable()
        -- if not v0 then goto L24 end
      end
      pageIndex = pageIndex:getIsRunning()
    end
    return v0
  end
end
function InGameMenu.makeIsMpUsersEnabledPredicate(v0)
  return function()
    return u0.missionDynamicInfo.isMultiplayer
  end
end
function InGameMenu.makeIsMpFarmsEnabledPredicate(v0)
  return function()
    return u0.missionDynamicInfo.isMultiplayer
  end
end
function InGameMenu.makeIsHelpEnabledPredicate(v0)
  return function()
    return true
  end
end
function InGameMenu.makeIsProductionEnabledPredicate(v0)
  return function()
    if not not u0.missionDynamicInfo.isMultiplayer and u0.playerFarmId == FarmManager.SPECTATOR_FARM_ID then
    end
    if v0 then
      local pageMappingIndex = pageMappingIndex:getIsRunning()
    end
    return pageIndex
  end
end
InGameMenu.TAB_UV = {MAP = {0, 0, 65, 65}, AI = {910, 65, 65, 65}, CALENDAR = {65, 0, 65, 65}, WEATHER = {130, 0, 65, 65}, PRICES = {195, 0, 65, 65}, VEHICLES = {260, 0, 65, 65}, FINANCES = {325, 0, 65, 65}, ANIMALS = {390, 0, 65, 65}, CONTRACTS = {455, 0, 65, 65}, PRODUCTION = {520, 0, 65, 65}, STATISTICS = {585, 0, 65, 65}, GAME_SETTINGS = {650, 0, 65, 65}, GENERAL_SETTINGS = {715, 0, 65, 65}, CONTROLS_SETTINGS = {845, 0, 65, 65}, TOUR = {780, 130, 65, 65}, HELP = {0, 65, 65, 65}, FARMS = {260, 65, 65, 65}, USERS = {650, 65, 65, 65}}
InGameMenu.L10N_SYMBOL = {BUTTON_BACK = "button_back", BUTTON_CANCEL_GAME = "button_cancelGame", BUTTON_SAVE_GAME = "button_saveGame", BUTTON_RESTART = "button_restart", TUTORIAL_NOT_SAVED = "ui_tutorialIsNotSaved", END_TUTORIAL = "ui_endTutorial", END_WITHOUT_SAVING = "ui_endWithoutSaving", END_GAME = "ui_youWantToQuitGame", SAVING_CONTENT = "ui_savingContent", MASTER_SERVER_CONNECTION_LOST = "ui_masterServerConnectionLost", SELECT_DEVICE = "dialog_savegameSelectDevice", SAVE_NO_SPACE = "ui_savegameSaveNoSpace", NOT_SAVED = "ui_savegameNotSaved", SAVE_NO_DEVICE = "ui_savegameSaveNoDevice", SAVE_OVERWRITE = "dialog_savegameOverwrite"}
InGameMenu.PROFILES = {TAB_BAR_LIGHT = "uiInGameMenuHeader", TAB_BAR_DARK = "uiInGameMenuHeaderDark"}
