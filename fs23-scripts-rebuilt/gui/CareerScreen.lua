-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CareerScreen = {}
local CareerScreen_mt = Class(CareerScreen, ScreenElement)
CareerScreen.CONTROLS = {"contentBox", "achievementsButton", SAVEGAME_LIST = "savegameList", LIST_ITEM_TEMPLATE = "listItemTemplate", LIST_SLIDER = "listSlider", BUTTON_BOX_MOBILE = "buttonsMobile", BUTTON_BACK_MOBILE = "buttonBackMobile", BUTTON_DELETE = "buttonDelete", BUTTON_DELETE_MOBILE = "buttonDeleteMobile", BUTTON_START = "buttonStart", BUTTON_START_MOBILE = "buttonStartMobile", DATA_BOX_STANDARD = "dataBoxStandard", DATA_BOX_MOBILE = "dataBoxMobile", LOGO = "logo", SIDEBAR = "sidebar", MAIN_CONTAINER = "mainContainer", CONTENT_CONTAINER = "contentContainer", BUTTON_BOX = "buttonBox", CHANGE_LANGUAGE_BUTTON = "changeLanguageButton"}
CareerScreen.LIST_TEMPLATE_ELEMENT_NAME = {TITLE = "title", GAME_NAME = "gameName", MAP_NAME = "mapName", PLAYER_NAME = "playerName", CHARACTER = "character", MONEY = "money", TIME_PLAYED = "timePlayed", CREATE_DATE = "createDate", DIFFICULTY = "difficulty", STATUS = "status", STATUS_ICON = "statusIcon", DATA_BOX = "dataBox", TEXT_BOX = "textBox", INFO_TEXT = "infoText", GAME_ICON = "gameIcon"}
CareerScreen.MISSING_MAP_ICON_PATH = "dataS/menu/hud/missingMap.png"
CareerScreen.SAVEGAME_LOADING_DIALOG_DELAY = 100
CareerScreen.SAVEGAME_UPDATE_TIME = 20000
CareerScreen.SAVEGAME_REFRESH_TIME = 3000
CareerScreen.SAVEGAME_UPLOAD_TRIGGER_DURATION = 5000
function CareerScreen.register()
  local v0 = CareerScreen.new()
  v1:loadGui("dataS/gui/CareerScreen.xml", "CareerScreen", v0)
  return v0
end
function CareerScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(CareerScreen.CONTROLS)
  v2.isMultiplayer = false
  v2.mapNameTexts = {}
  v2.playerNameTexts = {}
  v2.playerCharacterTexts = {}
  v2.savegameNameTexts = {}
  v2.moneyTexts = {}
  v2.timePlayedTexts = {}
  v2.difficultyTexts = {}
  v2.dateTexts = {}
  v2.statusTexts = {}
  v2.statusIcons = {}
  v2.listItemData = {}
  v2.listItemTexts = {}
  v2.listItemInfoText = {}
  v2.savegames = {}
  v2.tempIsSliderScrolling = false
  v2.ignoreCorruptOnNextUpdate = false
  v2.gameIcons = {}
  v2.currentIndex = 0
  v2.selectedIndexToRestore = 0
  v2.recreateListOnOpen = true
  v2.savegameUpdateTimer = CareerScreen.SAVEGAME_UPDATE_TIME
  v2.savegameRefreshTimer = CareerScreen.SAVEGAME_REFRESH_TIME
  v2.savegameLoadingDialogDelay = -1
  return v2
end
function CareerScreen:createFromExistingGui(v1)
  local v2 = CareerScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function CareerScreen:onCreate()
  if GS_IS_MOBILE_VERSION then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L22
    v1:delete()
    return
  end
  if self.dataBoxMobile ~= nil then
    v1:delete()
  end
end
function CareerScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:subscribe(MessageType.INSETS_CHANGED, self.updateInsets, self)
  if Platform.supportsSavegameDebugUpload then
    if g_isDevelopmentVersion then
      addConsoleCommand("gsSavegameUploadSelected", "Uploads the selected savegame", "uploadSelectedSavegame", self)
    end
    self.buttonStart.isTriggerableByGlobalAction = false
    self.ignoreNextClick = false
    v1:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onAcceptPressed, false, false, true, true)
    v1:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onAcceptUp, true, false, false, true)
    self.openUpdateLoopIndex = g_updateLoopIndex
    self.isAcceptActionReady = false
    self.acceptDownStartTimer = nil
  end
  if Platform.isMobile then
    self:updateInsets()
    self.mainContainer.absSize[1] = (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth
    self.contentContainer.absSize[1] = (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - 50 / g_screenWidth
    v2:setAnchors(0, 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - self.contentContainer.absSize[1], 0, 1)
    self.mainContainer.absPosition[1] = 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth
    v2:setAnchors(self.mainContainer.absPosition[1], 1, 0, 1)
    v2:updateAbsolutePosition()
    v2:setSize((g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - 1 - self.buttonsMobile.absPosition[1] - self.buttonsMobile.absSize[1])
    self:resizeButtonTexts()
    v2 = getPlatformId()
    if v2 == PlatformId.ANDROID then
      local v5 = getIsUserSignedIn()
      v2:setDisabled(not v5)
    end
  end
  if Platform.hasMainScreenLanguageSelection then
    v1:setVisible(true)
    v1:invalidateLayout()
  end
  if g_startMissionInfo.canStart then
    self:startCurrentSavegame(true)
  else
    v2:subscribe(MessageType.SAVEGAMES_LOADED, self.onSavegamesLoaded, self)
    self.selectedIndexToRestore = 0
    self.ignoreCorruptOnNextUpdate = false
    flushPhysicsCaches()
    if self.recreateListOnOpen then
      v2:resetStorageDeviceSelection()
      self:recreateSavegameList()
    end
    self:updateButtons()
  end
  self:updateTheme()
  v2:reloadData()
  v2:setFocus(self.savegameList)
end
function CareerScreen.onClose(v0)
  v1:unsubscribe(MessageType.SAVEGAMES_LOADED, v0)
  v1:unsubscribe(MessageType.INSETS_CHANGED, v0)
  v1:removeActionEventsByTarget(v0)
  removeConsoleCommand("gsSavegameUploadSelected")
  local v2 = v2:superClass()
  v2.onClose(v0)
end
function CareerScreen:updateInsets()
  local v1, v2, v3, v4 = getSafeFrameInsets()
  v5:setSize(1 - v2, 1)
  v5:updateAbsolutePosition()
  v5:updateView()
end
function CareerScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if g_dedicatedServer ~= nil then
    self.selectedIndex = g_dedicatedServer.savegame
    local v2 = v2:getSavegame(self.selectedIndex)
    self:startSavegame(v2)
    return
  end
  if Profiler.IS_INITIALIZED then
    v3 = v3:getSavegame(Profiler.SAVEGAME_NUMBER)
    if v3.isValid then
      -- if v3.mapId == Profiler.MAP then goto L63 end
    end
    v4:deleteSavegame(v2)
    local v4 = v4:getSavegame(v2)
    if v4 == SavegameController.NO_SAVEGAME then
      g_startMissionInfo.createGame = true
    end
    self:startSavegame(v3)
    return
  end
  if 0 <= self.savegameUpdateTimer then
    v2 = v2:getIsWaitingForSavegameInfo()
    if not v2 then
      v2 = v2:getIsDialogVisible()
      if not v2 then
        self.savegameUpdateTimer = self.savegameUpdateTimer - dt
        if self.savegameUpdateTimer <= 0 then
          self.savegameUpdateTimer = -1
          self:recreateSavegameList()
        end
      end
    end
  end
  if 0 <= self.savegameRefreshTimer then
    v2 = v2:getIsWaitingForSavegameInfo()
    if not v2 then
      self.savegameRefreshTimer = self.savegameRefreshTimer - dt
      if self.savegameRefreshTimer <= 0 then
        self.savegameRefreshTimer = CareerScreen.SAVEGAME_REFRESH_TIME
        v2:loadSavegames()
      end
    end
  end
  v2 = MessageDialog.getIsOpen()
  if not v2 then
    v2 = v2:getIsWaitingForSavegameInfo()
    if not v2 then
      v2 = v2:isStorageDeviceUnavailable()
      if v2 then
        local v5 = v5:getText("ui_savegamesScanSelectDevice")
        YesNoDialog.show(...)
      end
    end
  end
  if self.isMultiplayer then
    Platform.verifyMultiplayerAvailabilityInMenu()
  end
  v2 = v2:getIsWaitingForSavegameInfo()
  if v2 then
    -- if v0.savegameLoadingDialogDelay > 0 then goto L208 end
    self.savegameLoadingDialogDelay = CareerScreen.SAVEGAME_LOADING_DIALOG_DELAY
  elseif self.loadingDialog ~= nil then
    v2:close()
    self.loadingDialog = nil
  end
  if 0 < self.savegameLoadingDialogDelay then
    self.savegameLoadingDialogDelay = self.savegameLoadingDialogDelay - dt
    if self.savegameLoadingDialogDelay <= 0 then
      v2 = v2:showDialog("InfoDialog")
      self.loadingDialog = v2
      v4 = v4:getText("ui_loadingSavegames")
      v2:setText(...)
      v4 = v4:getText("button_cancel")
      v2:setButtonTexts(...)
      v2:setCallback(self.onCancelSavegameLoading, self)
    end
  end
  if Platform.supportsSavegameDebugUpload then
    if not self.isAcceptPressed then
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000048 -> L284
      self.isAcceptActionReady = true
    else
      v2 = v2:getIsDialogVisible()
      if v2 then
        self.isAcceptActionReady = false
      end
    end
    if self.acceptDownStartTimer ~= nil and CareerScreen.SAVEGAME_UPLOAD_TRIGGER_DURATION < g_time - self.acceptDownStartTimer then
      v3 = self:uploadSelectedSavegame()
      if v3 then
        self.acceptDownStartTimer = nil
      end
    end
    self.isAcceptPressed = false
  end
end
function CareerScreen:onSavegamesLoaded()
  self.savegameRefreshTimer = CareerScreen.SAVEGAME_REFRESH_TIME
  self:setSoundSuppressed(true)
  dt:reloadData()
  self:setSoundSuppressed(false)
  self:calculateTotalPlaytime()
  self:updateButtons()
end
function CareerScreen:onPressed(dt, v2)
  if CareerScreen.SAVEGAME_UPLOAD_TRIGGER_DURATION < v2 then
    v3:resetInput()
    local v3 = self:uploadSelectedSavegame()
    if v3 then
      self.ignoreNextClick = true
    end
  end
end
function CareerScreen:onAcceptUp()
  if not self.isAcceptActionReady then
    self.isAcceptActionReady = true
    return
  end
  if self.acceptDownStartTimer == nil then
    return
  end
  self.acceptDownStartTimer = nil
  self:onStartAction()
end
function CareerScreen:onAcceptPressed()
  self.isAcceptPressed = true
  if not self.isAcceptActionReady then
    return
  end
  if self.acceptDownStartTimer == nil then
    self.acceptDownStartTimer = g_time
  end
end
function CareerScreen:onClickBack()
  dt:resetInput()
  local v2 = v2:superClass()
  v2.onClickBack(self)
end
function CareerScreen:onStartAction(isMouseClick)
  if self.ignoreNextClick then
    self.ignoreNextClick = false
    return
  end
  v2:tryToResolveConflict(self.savegameList.selectedIndex, {target = self, callback = self.onStartAction, extraAttributes = {isMouseClick}}, {target = self, callback = self.recreateSavegameList, extraAttributes = {}})
  local v2 = v2:getCanStartGame(self.savegameList.selectedIndex, true)
  if v2 then
    v2 = v2:getSavegame(self.savegameList.selectedIndex)
    self:startSavegame(v2)
  end
end
function CareerScreen:onDeleteAction(sender)
  v2:resetInput()
  local v3 = v3:getIsSavegameConflicted(self.savegameList.selectedIndex)
  if v3 then
    v3:tryToResolveConflict(self.savegameList.selectedIndex, {target = self, callback = self.recreateSavegameList, extraAttributes = {}}, nil, false)
    return
  end
  v3 = v3:getCanDeleteGame(v2)
  if v3 then
    v3 = v3:getSavegame(v2)
    self.currentSavegame = v3
    if GS_PLATFORM_PHONE then
      local v6 = v6:getText("ui_youWantToDeleteSavegameMobile")
      YesNoDialog.show(...)
      return
    end
    v6 = v6:getText("ui_youWantToDeleteSavegame")
    YesNoDialog.show(...)
  end
end
function CareerScreen:onSaveGameUpdateComplete(errorCode)
  self.savegameRefreshTimer = CareerScreen.SAVEGAME_REFRESH_TIME
  self.savegameUpdateTimer = CareerScreen.SAVEGAME_UPDATE_TIME
  self.ignoreCorruptOnNextUpdate = false
  if errorCode ~= Savegame.ERROR_OK then
    -- if v1 ~= Savegame.ERROR_DATA_CORRUPT then goto L71 end
  end
  v3:loadSavegames()
  if errorCode == Savegame.ERROR_DATA_CORRUPT and not v2 then
    local v3 = v3:getIsGuiVisible()
    if v3 and g_gui.currentGuiName == "CareerScreen" then
      local v6 = v6:getText("ui_someSavegamesCorrupt")
      local v8 = v8:getText("button_continue")
      local v9 = v9:getText("button_cancel")
      YesNoDialog.show(...)
      -- goto L148  (LOP_JUMP +77)
      if errorCode == Savegame.ERROR_SCAN_IN_PROGRESS then
        self.savegameUpdateTimer = 0
      elseif errorCode == Savegame.ERROR_SCAN_FAILED then
        v3 = v3:getIsGuiVisible()
        -- if not v3 then goto L148 end
        -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000000 -> L148
        local v4 = v4:getText("ui_savegamesScanFailed")
        InfoDialog.show(v4, self.onOkSavegameScanFailed, self)
      else
        if errorCode == Savegame.ERROR_DEVICE_UNAVAILABLE then
          v3 = v3:getIsGuiVisible()
          -- if not v3 then goto L148 end
          -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000000 -> L148
          v4 = v4:getText("ui_savegamesScanNoDevice")
          InfoDialog.show(v4, self.onOkSavegameScanFailed, self)
        else
          v3 = v3:getIsGuiVisible()
          if v3 and g_gui.currentGuiName == "CareerScreen" then
            self:changeScreen(MainScreen)
          end
        end
      end
    end
  end
  if 0 < self.savegameUpdateTimer then
    self.savegameLoadingDialogDelay = -1
    if self.loadingDialog ~= nil then
      v3:close()
      self.loadingDialog = nil
    end
  end
end
function CareerScreen:calculateTotalPlaytime()
  -- TODO: structure LOP_FORNPREP (pc 5, target 25)
  local v5 = v5:getSavegame(1)
  if v5.isValid then
    local v6 = math.floor(v5.playTime / 60 + 0.0001)
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 6)
  self.totalPlayedHours = errorCode
end
function CareerScreen:onYesNoSavegameCorrupted(yes)
  if yes then
    self.recreateListOnOpen = false
    self:changeScreen(CareerScreen, MainScreen)
    self.recreateListOnOpen = true
    return
  end
  self:changeScreen(MainScreen)
end
function CareerScreen:onOkSavegameScanFailed()
  self:changeScreen(MainScreen)
end
function CareerScreen:onSaveComplete(errorCode)
  if errorCode == Savegame.ERROR_OK then
    self:updateSavegameText(self.currentSavegame.savegameIndex)
  end
end
function CareerScreen.onCancelSavegameLoading(v0)
  errorCode:cancelSavegameUpdate()
end
function CareerScreen:recreateSavegameList()
  local errorCode = errorCode:getIsWaitingForSavegameInfo()
  if not errorCode then
    self.savegameUpdateTimer = -1
    self.savegameRefreshTimer = -1
    self.savegameLoadingDialogDelay = CareerScreen.SAVEGAME_LOADING_DIALOG_DELAY
    errorCode:updateSavegames(self.onSaveGameUpdateComplete, self)
    return
  end
  if 0 < self.savegameUpdateTimer then
    self.savegameUpdateTimer = 0
  end
end
function CareerScreen:onYesNoDeleteSavegame(yes)
  if yes then
    self:deleteCurrentSavegame()
    return
  end
  self.recreateListOnOpen = false
  self:changeScreen(CareerScreen, MainScreen)
  self.recreateListOnOpen = true
end
function CareerScreen:updateButtons()
  local errorCode = errorCode:getCanDeleteGame(self.savegameList.selectedIndex)
  if self.buttonDelete then
    v2:setDisabled(not errorCode)
  end
  if self.buttonDeleteMobile then
    v2:setDisabled(not errorCode)
  end
  local v2 = v2:getCanStartGame(self.savegameList.selectedIndex, true)
  local v5 = v5:getSavegame(self.savegameList.selectedIndex)
  if v2 and g_startMissionInfo.scenarioId ~= nil then
  end
  if self.buttonStart then
    v4:setDisabled(not v4)
  end
  if self.buttonStartMobile then
    v4:setDisabled(not v2)
  end
end
function CareerScreen:onYesNoSavegameSelectDevice(yes)
  if yes then
    self:changeScreen(CareerScreen)
    return
  end
  self:changeScreen(MainScreen)
end
function CareerScreen:startSavegame(savegame)
  self.currentSavegame = savegame
  if not savegame.isValid then
    if savegame.isInvalidUser then
      local v5 = v5:getText("ui_savegameInvalidUser")
      local v7 = v7:getText("button_continue")
      local v8 = v8:getText("button_cancel")
      YesNoDialog.show(...)
      return
    end
    if savegame.isCorruptFile then
      v5 = v5:getText("ui_savegameCorrupt")
      v7 = v7:getText("button_continue")
      v8 = v8:getText("button_cancel")
      YesNoDialog.show(...)
      return
    end
    self:onYesNoSavegameInvalidUser(true)
    return
  end
  if savegame.map and not savegame.map.isMultiplayerSupported and self.isMultiplayer then
    local v4 = v4:getText("ui_modsZipOnly")
    local v3 = string.format(v4, savegame.map.title)
    InfoDialog.show(...)
    return
  end
  if SlotSystem.TOTAL_NUM_GARAGE_SLOTS[GS_PLATFORM_ID] < savegame.slotUsage then
    local v6 = v6:getText("ui_savegameSlotLimitReached")
    v8 = v8:getText("button_continue")
    local v9 = v9:getText("button_cancel")
    YesNoDialog.show(...)
    return
  end
  self:doModCheck(savegame)
end
function CareerScreen:doModCheck(savegame)
  for v8, v9 in pairs(savegame.mods) do
    local v10 = v10:getModByName(v9.modName)
    if v10 == nil then
      if v9.required then
        table.insert(v2, 1, v9.title)
        continue
      end
      table.insert(v2, v9.title)
    else
      if not not v10.isMultiplayerSupported then
        continue
      end
      if not self.isMultiplayer then
        continue
      end
      if not v3 then
        -- if GS_IS_CONSOLE_VERSION then goto L61 end
        table.insert(v2, 1, v10.title)
      else
        table.insert(v2, v10.title)
      end
    end
  end
  if 0 < #v2 and g_dedicatedServer == nil then
    v5 = math.min(#v2, 4)
    -- TODO: structure LOP_FORNPREP (pc 90, target 96)
    -- TODO: structure LOP_FORNLOOP (pc 95, target 91)
    if v3 then
      local v12 = v12:getText("ui_savegameHasMissingDlcs")
      InfoDialog.show(v12 .. "\n" .. v2[1] .. ", " .. v2[2])
      return
    end
    if v4 then
      v9 = v9:getText("ui_modsZipOnly")
      v8 = string.format(v9, v2[1])
      InfoDialog.show(v8, CareerScreen.onOkZipModsOptional, self)
      return
    end
    local v13 = v13:getText("ui_savegameHasMissingDlcsOptional")
    v12 = v12:getText("ui_continueQuestion")
    v9 = v9:getText("button_continue")
    v10 = v10:getText("button_cancel")
    YesNoDialog.show(self.onYesNoInstallMissingModsOptional, self, v13 .. "\n" .. v6 .. "\n\n" .. v12, nil, v9, v10)
    return
  end
  self:startCurrentSavegame()
end
function CareerScreen:onYesNoNotEnoughSpaceForNewSaveGame(yes)
  g_startMissionInfo.createGame = yes
  if yes then
    if g_startMissionInfo.scenarioId ~= nil then
      self:startCurrentSavegame(true)
      return
    end
    self:changeScreen(DifficultyScreen, CareerScreen)
    return
  end
  self:changeScreen(CareerScreen)
end
function CareerScreen:onYesNoSavegameInvalidUser(yes)
  if yes then
    local v2 = saveGetHasSpaceForSaveGame(self.currentSavegame.savegameIndex, FSCareerMissionInfo.MaxSavegameSize)
    if v2 then
      self:onYesNoNotEnoughSpaceForNewSaveGame(true)
      return
    end
    local v5 = v5:getText("ui_notEnoughSpaceForNewSavegame")
    local v7 = v7:getText("button_continue")
    local v8 = v8:getText("button_cancel")
    YesNoDialog.show(...)
    return
  end
  self.recreateListOnOpen = false
  self:changeScreen(CareerScreen)
  self.recreateListOnOpen = true
end
function CareerScreen:onYesNoInstallMissingModsOptional(yes)
  if yes then
    self:startCurrentSavegame()
    return
  end
  self.recreateListOnOpen = false
  self:changeScreen(CareerScreen)
  self.recreateListOnOpen = true
end
function CareerScreen:onOkZipModsOptional()
  self:startCurrentSavegame()
end
function CareerScreen:startCurrentSavegame(useStartMissionInfo)
  if useStartMissionInfo then
    self.currentSavegame:setMapId(g_startMissionInfo.mapId)
    self.currentSavegame:setDifficulty(g_startMissionInfo.difficulty)
    self.currentSavegame:setScenarioId(g_startMissionInfo.scenarioId)
  end
  v2.isNewSPCareer = false
  if not v2.isValid then
    v2.startSiloAmounts = {}
    if v2.difficulty == 1 then
      local v4 = math.random(8000, 16000)
      v2.startSiloAmounts.wheat = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.barley = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.canola = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.maize = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.oat = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.soybean = v4
      v4 = math.random(8000, 16000)
      v2.startSiloAmounts.sunflower = v4
    end
    v2.vehiclesXMLLoad = v2.defaultVehiclesXMLFilename
    v2.itemsXMLLoad = v2.defaultItemsXMLFilename
    v2.placeablesXMLLoad = v2.defaultPlaceablesXMLFilename
    v2.onCreateObjectsXMLLoad = nil
    v2.environmentXML = nil
    v2.economyXMLLoad = nil
    v2.farmlandXMLLoad = nil
    v2.aiSystemXMLLoad = nil
    v2.npcXMLLoad = nil
    v2.densityMapHeightXMLLoad = nil
    v2.treePlantXMLLoad = nil
    v2.isNewSPCareer = true
  end
  if v2.scenarioId then
    self:startGame(v2, {isMultiplayer = self.isMultiplayer, autoSave = false, mods = {}})
    return
  end
  if v2.map.prohibitOtherMods then
    v4 = v4:getModNameFromMapId(v2.mapId)
    local v5 = v5:getModByName(v4)
    v3.mods = {v5}
    self:startGame(v2, v3)
    return
  end
  if self.isMultiplayer then
    v4 = v4:getNumOfValidMods()
    -- if 0 < v4 then goto L209 end
  end
  if not self.isMultiplayer then
    v4 = v4:getNumOfMods()
    if 0 < v4 then
      v4:setMissionInfo(v2, v3)
      g_startMissionInfo.canStart = false
      if v2.isValid then
        -- if CareerScreen then goto L231 end
      end
      self:changeScreen(v6, MapSelectionScreen)
      return
    end
  end
  v3.mods = {}
  self:startGame(v2, v3)
end
function CareerScreen:startGame(errorCode, v2)
  if self.isMultiplayer then
    g_startMissionInfo.createGame = true
    v3:setMissionInfo(errorCode, v2)
    self:changeScreen(CreateGameScreen)
    return
  end
  v3:setMissionInfo(errorCode, v2)
  self:changeScreen(MPLoadingScreen)
  v3:loadSavegameAndStart()
  v3:reset()
end
function CareerScreen:onSavegameDeleted(errorCode)
  self.recreateListOnOpen = false
  self:changeScreen(CareerScreen)
  self.recreateListOnOpen = true
  MessageDialog.hide()
  self.selectedIndexToRestore = self.currentSavegame.savegameIndex
  self.currentSavegame = nil
  local v3 = v3:isStorageDeviceUnavailable()
  self.ignoreCorruptOnNextUpdate = not v3
  self:recreateSavegameList()
end
function CareerScreen:deleteCurrentSavegame()
  local errorCode = errorCode:getText("ui_deletingSavegame")
  MessageDialog.show(nil, nil, errorCode, DialogElement.TYPE_LOADING, false)
  v3:deleteSavegame(self.savegameList.selectedIndex, self.onSavegameDeleted, self)
end
function CareerScreen:setIsMultiplayer(isMultiplayer)
  self.isMultiplayer = isMultiplayer
  if self.isMultiplayer then
    self:setReturnScreen("MultiplayerScreen")
    return
  end
  self:setReturnScreen("MainScreen")
end
function CareerScreen:updateTheme()
  if Platform.gameLogos[g_languageShort] == nil then
  end
  if self.logo ~= nil then
    v2:setImageFilename(errorCode)
  end
end
function CareerScreen:resizeButtonTexts()
  errorCode:setInputMode(false, true, false)
  errorCode:setInputMode(false, true, false)
  errorCode:setInputMode(false, true, false)
  while true do
    if not (self.buttonsMobile.absSize[1] < errorCode) then
      break
    end
    v2:setTextSize(self.buttonBackMobile.textSize - 1 / g_screenHeight)
    v2:setTextSize(self.buttonDeleteMobile.textSize - 1 / g_screenHeight)
    v2:setTextSize(self.buttonStartMobile.textSize - 1 / g_screenHeight)
  end
end
function CareerScreen.getNumberOfItemsInSection(v0, errorCode, v2)
  return v3:getMaxNumberOfSavegames()
end
function CareerScreen.populateCellForItemInSection(v0, errorCode, v2, v3, v4)
  local v5 = v5:getSavegame(v3)
  local v6 = v4:getAttribute("gameIcon")
  v6:setVisible(v5.isValid)
  if not Platform.isMobile then
    v6 = v4:getAttribute("title")
    local v12 = v12:getText("ui_savegame")
    local v11 = tostring(v3)
    v6:setText(v12 .. " " .. v11)
    v6 = v4:getAttribute("title")
    v6:setVisible(v5.isValid)
  else
    v6 = v4:getAttribute("title")
    v6:setVisible(false)
  end
  v6 = v4:getAttribute("dataBox")
  v6:setVisible(v5.isValid)
  v6 = v4:getAttribute("textBox")
  v6:setVisible(not v5.isValid)
  if v5.isValid then
    local v7 = math.floor(v5.playTime / 60 + 0.0001)
    local v8 = math.floor((v5.playTime / 60 + 0.0001 - v7) * 60)
    local v9 = v4:getAttribute("gameName")
    v9:setText(v5.savegameName)
    if v5.map ~= nil then
      v9 = v4:getAttribute("mapName")
      v9:setText(v5.map.title)
      v9 = v4:getAttribute("gameIcon")
      v9:setImageFilename(v5.map.iconFilename)
    else
      v9 = v4:getAttribute("mapName")
      v11 = Utils.getNoNil(v5.mapTitle, v5.mapId)
      v9:setText(...)
      v9 = v4:getAttribute("gameIcon")
      v9:setImageFilename(CareerScreen.MISSING_MAP_ICON_PATH)
    end
    v9 = v4:getAttribute("money")
    v11 = v11:formatMoney(v5.money or 0, 0, not GS_IS_MOBILE_VERSION)
    v9:setText(...)
    v9 = v4:getAttribute("timePlayed")
    v11 = string.format("%02d:%02d", v7, v8)
    v9:setText(...)
    v9 = v4:getAttribute("difficulty")
    v9:setLocaKey("ui_difficulty" .. v5.difficulty)
    v9 = v4:getAttribute("createDate")
    v9:setText(v5.saveDateFormatted)
    -- if not Platform.isMobile then goto L293 end
    if Platform.hasCloudSync then
      v12 = v5:getStateI18NKey()
      local v10 = v10:getText(...)
    end
    v10 = v4:getAttribute("statusIcon")
    v10:setVisible(Platform.hasCloudSync)
    v10 = v4:getAttribute("status")
    v10:setText(v9)
    v10 = v4:getAttribute("status")
    v10:setVisible(Platform.hasCloudSync)
    return
  end
  if v5.isInvalidUser then
    v6 = v4:getAttribute("infoText")
    v6:setLocaKey("ui_savegameBelongsToAnotherUser")
    return
  end
  if v5.isCorruptFile then
    v6 = v4:getAttribute("infoText")
    v6:setLocaKey("ui_savegameIsCorrupted")
    return
  end
  if Platform.isMobile then
    v6 = v4:getAttribute("infoText")
    v6:setLocaKey("ui_newGame")
    return
  end
  v6 = v4:getAttribute("infoText")
  v6:setLocaKey("ui_savegameEmptySlot")
end
function CareerScreen:onListSelectionChanged(list, section, index)
  self:updateButtons()
end
function CareerScreen:uploadSelectedSavegame()
  local errorCode = errorCode:getSavegame(self.savegameList.selectedIndex)
  if errorCode ~= nil and errorCode.isValid then
    SavegameUploadDialog.show(function(self, errorCode)
      if errorCode then
        SavegameUploadProgressDialog.show(0)
        local v4 = v4:uploadBrokenSavegame(u0.savegameIndex, self, function(self, errorCode, v2)
          Logging.devInfo("SavegameUpload - Code %d | Progress %.2f", errorCode, v2)
          if errorCode == SavegameController.UPLOAD_STATE_PROGRESS then
            v3:setProgress(v2 * 100)
            return
          end
          SavegameUploadProgressDialog.hide()
          if errorCode == SavegameController.UPLOAD_STATE_OK then
            local v4 = v4:getText("savegameUpload_done")
            InfoDialog.show(...)
            return
          end
          if errorCode == SavegameController.UPLOAD_STATE_BAD_INDEX then
            v4 = v4:getText("savegameUpload_invalidSavegameIndex")
            InfoDialog.show(...)
            return
          end
          if errorCode == SavegameController.UPLOAD_STATE_LOAD_FAILED then
            v4 = v4:getText("savegameUpload_loadFailed")
            InfoDialog.show(...)
            return
          end
          v4 = v4:getText("savegameUpload_unknownError")
          InfoDialog.show(...)
          Logging.error("Savegame Upload failed with error code %d and progress %d%%", errorCode, v2 or 0)
        end, nil)
        if not v4 then
          SavegameUploadProgressDialog.hide()
          local v6 = v6:getText("savegameUpload_unknownError")
          InfoDialog.show(...)
        end
      end
    end)
    return true
  end
  return false
end
function CareerScreen:onAchievementsClick(element)
  self:changeScreen(MainScreen)
  v2:onAchievementsClick(element)
end
function CareerScreen:onCreditsClick(element)
  self:changeScreen(MainScreen)
  v2:onCreditsClick(element)
end
function CareerScreen.onChangeMobileSettingsClick(v0, errorCode)
  v2:onChangeMobileSettingsClick(errorCode)
end
