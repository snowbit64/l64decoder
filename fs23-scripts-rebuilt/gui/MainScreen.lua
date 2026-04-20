-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MainScreen = {}
local MainScreen_mt = Class(MainScreen, ScreenElement)
function MainScreen.register()
  local v0 = MainScreen.new()
  v1:loadGui("dataS/gui/MainScreen.xml", "MainScreen", v0)
  return v0
end
MainScreen.CONTROLS = {"googlePlayButton", BACKGROUND_IMAGE = "backgroundImage", SIDEBAR_CONTAINER = "sidebarContainer", BACKGROUND_BLURRY = "backgroundBlurImage", BACKGROUND_GLASSEDGE = "glassEdgeOverlay", LOGO = "logo", BUTTON_BOX = "buttonBox", NOTIFICATION_BOX = "notificationElement", NOTIFICATION_IMAGE = "notificationImage", NOTIFICATION_DATE = "notificationDate", NOTIFICATION_TITLE = "notificationTitle", NOTIFICATION_MESSAGE = "notificationMessage", NOTIFICATION_INDEX_STATE = "indexState", BUTTON_NOTIFICATION_LEFT = "notificationButtonLeft", BUTTON_NOTIFICATION_RIGHT = "notificationButtonRight", BUTTON_NOTIFICATION_OPEN = "notificationButtonOpen", GAMER_TAG_ELEMENT = "gamerTagElement", CAREERBUTTON = "careerButton", SCENARIOSBUTTON = "scenariosButton", MULTIPLAYERBUTTON = "multiplayerButton", ESPORTSBUTTON = "esportsButton", DOWNLOADMODSBUTTON = "downloadModsButton", ACHIEVEMENTSBUTTON = "achievementsButton", STOREBUTTON = "storeButton", SETTINGSBUTTON = "settingsButton", CREDITSBUTTON = "creditsButton", CHANGEUSERBUTTON = "changeUserButton", CHANGELANGUAGEBUTTON = "changeLanguageButton", QUITBUTTON = "quitButton"}
MainScreen.NOTIFICATION_ANIMATION_DURATION = 500
MainScreen.NOTIFICATION_CHECK_DELAY = 500
MainScreen.NOTIFICATION_ANIM_DELAY = 2000
MainScreen.NO_STORE_URL = "noStore"
function MainScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.firstTimeOpened = true
  v2.lastActiveButton = nil
  v2.blendDir = 0
  v2.blendingAlpha = 1
  v2.disableMultiplayer = false
  v2.showGamepadModeDialog = true
  v2.showHeadTrackingDialog = true
  v2.notificationShowAnimation = TweenSequence.NO_SEQUENCE
  v2.notificationsHidePosition = {2, 0}
  v2:registerControls(MainScreen.CONTROLS)
  v2.isDeleted = false
  return v2
end
function MainScreen:createFromExistingGui(v1)
  local v2 = MainScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function MainScreen:onCreate()
  self.lastButtonPressed = nil
  self.isBackAllowed = false
  self:setupNotifications()
  self:setupButtons()
  self:updateTheme()
end
function MainScreen:onClickBack(forceBack, usedMenuButton)
  if GS_PLATFORM_ID == PlatformId.ANDROID then
    local v6 = v6:getText("ui_youWantToQuitGame")
    YesNoDialog.show(...)
    return false
  end
  local v4 = v4:superClass()
  return v4.onClickBack(self)
end
function MainScreen.onYesNoQuitGame(v0, v1)
  if v1 then
    requestExit()
  end
end
function MainScreen:setupButtons()
  if Platform.supportsMultiplayer then
    table.insert({self.careerButton}, self.multiplayerButton)
  end
  if Platform.hasEsports then
    table.insert(v1, self.esportsButton)
  end
  local v2 = v2:getNumScenarios()
  if 0 < v2 then
    table.insert(v1, self.scenariosButton)
  end
  if Platform.supportsMods then
    table.insert(v1, self.downloadModsButton)
  end
  table.insert(v1, self.achievementsButton)
  if Platform.hasNativeStore then
    table.insert(v1, self.storeButton)
  end
  if not Platform.isMobile then
    table.insert(v1, self.settingsButton)
  end
  table.insert(v1, self.creditsButton)
  if Platform.canQuitApplication then
    table.insert(v1, self.quitButton)
  end
  if Platform.needsSignIn then
    table.insert(v1, self.changeUserButton)
  end
  if Platform.hasMainScreenLanguageSelection then
    table.insert(v1, self.changeLanguageButton)
  end
  for v5, v6 in pairs(v1) do
    v6:setVisible(true)
  end
  v2:invalidateLayout()
end
function MainScreen:onCreateGameVersion(element)
  local v10 = getEngineRevision()
  element:setText(g_gameVersionDisplay .. g_gameVersionDisplayExtra .. " (" .. v10 .. "/" .. g_gameRevision .. ")")
  self.versionElement = element
end
function MainScreen.onHighlight(v0, v1)
  if not Platform.isConsole then
    v2:setFocus(v1)
  end
end
function MainScreen:delete()
  self.isDeleted = true
  local v2 = v2:superClass()
  v2.delete(self)
end
function MainScreen:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  v1:unsubscribe(MessageType.INSETS_CHANGED, self)
  v1:removeActionEventsByTarget(self)
  v1:unsubscribeAll(self)
  GuiOverlay.deleteOverlay(self.notificationImage.overlay)
  if GS_IS_NETFLIX_VERSION then
    hideNetflixButton()
  end
end
function MainScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  setPresenceMode(PresenceModes.PRESENCE_IDLE)
  flushWebCache()
  self:resetNotifications()
  if self.firstTimeOpened then
    self.firstTimeOpened = false
    local v1 = isGameFullyInstalled()
    if v1 then
      v1:setFocus(self.careerButton)
    else
      error("Fatal error: the game was not fully installed but the game code expects it to be.")
    end
  end
  if not g_menuMusicIsPlayingStarted then
    g_menuMusicIsPlayingStarted = true
    playStreamedSample(g_menuMusic, 0)
  end
  if g_isServerStreamingVersion then
    self.notificationElement.visible = false
    self.notificationElement.disabled = true
  end
  if Platform.isMobile then
    local v3 = GuiUtils.getUVs({0, 2048 - 2048 / g_screenAspectRatio, self.sidebarContainer.absSize[1] * 2048, 2048 / g_screenAspectRatio}, {2048, 2048})
    v4:setImagesUVs(v3)
  end
  v1:lockFocusInput(InputAction.MENU_ACCEPT, 150)
  self:setSoundSuppressed(true)
  if self.lastActiveButton ~= nil then
    v1:unsetFocus(self.lastActiveButton)
    v1:setFocus(self.lastActiveButton)
  end
  self:setSoundSuppressed(false)
  self:updateTheme()
  v1:setGameState(GameState.MENU_MAIN)
  if self.googlePlayButton ~= nil then
    local v4 = getPlatformId()
    if v4 == PlatformId.ANDROID then
    end
    v1:setVisible(v3)
    if g_buildTypeParam ~= "CHINA_GAPP" then
      -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000046 -> L183
    end
    v1:setIconSize(0, 0)
  end
  self.lastSignedInState = nil
  v1:publish(MessageType.GUI_MAIN_SCREEN_OPEN)
  v1:subscribe(MessageType.INSETS_CHANGED, self.updateInsets, self)
  if GS_IS_NETFLIX_VERSION then
    showNetflixButton()
  end
end
function MainScreen:setupNotifications()
  local v1, v2, v3, v4 = getSafeFrameInsets()
  self.notificationsHidePosition = {-self.notificationElement.position[1] + self.notificationElement.size[1], self.notificationElement.position[2]}
  local anim = TweenSequence.new(self)
  anim:addInterval(MainScreen.NOTIFICATION_ANIM_DELAY)
  local v7 = MultiValueTween.new(self.notificationElement.setPosition, self.notificationsHidePosition, {self.notificationElement.position[1] - v2, self.notificationElement.position[2]}, MainScreen.NOTIFICATION_ANIMATION_DURATION)
  anim:addTween(v7)
  v7:setTarget(self.notificationElement)
  anim:addCallback(self.setNotificationButtonsDisabled, false)
  self.notificationShowAnimation = anim
  self:resetNotifications()
end
function MainScreen:setNotificationButtonsDisabled(isDisabled)
  if not isDisabled and #self.notifications >= 2 then
  end
  v3:setDisabled(v2)
  v3:setDisabled(v2)
  v3:setDisabled(isDisabled)
end
function MainScreen:resetNotifications()
  if self.isDeleted then
    return
  end
  self.notificationsReady = false
  self.notificationsCheckTimer = 0
  self.notifications = {}
  self.activeNotification = 0
  v1:reset()
  self:setNotificationButtonsDisabled(true)
  v1:setVisible(false)
  local v3 = unpack(self.notificationsHidePosition)
  v1:setPosition(...)
end
function MainScreen.onYesNoUseGamepadMode(v0, v1)
  v2:setValue("gamepadEnabledSetByUser", true)
  v2:setValue("isGamepadEnabled", v1)
  v2:saveToXMLFile(g_savegameXML)
end
function MainScreen.onYesNoUseHeadTracking(v0, v1)
  v2:setValue("headTrackingEnabledSetByUser", true)
  v2:setValue("isHeadTrackingEnabled", v1)
  v2:saveToXMLFile(g_savegameXML)
end
function MainScreen:onMultiplayerClick(element)
  self.lastActiveButton = element
  resetMultiplayerChecks()
  self:onMultiplayerClickPerform()
end
function MainScreen:onMultiplayerClickPerform()
  local v1 = isGameFullyInstalled()
  if not v1 then
    showGameInstallProgress()
    return
  end
  if masterServerConnectFront == nil then
    v1:setStartScreen(RestartManager.START_SCREEN_MULTIPLAYER)
    doRestart(false, "")
    return
  end
  v1 = PlatformPrivilegeUtil.checkMultiplayer(self.onMultiplayerClickPerform, self)
  if not v1 then
    return
  end
  v1:reset()
  g_startMissionInfo.isMultiplayer = true
  v1:setIsMultiplayer(true)
  v1:showGui("MultiplayerScreen")
end
function MainScreen:onEsportsClick(v1)
  self.lastActiveButton = v1
  v2:showGui("EsportsScreen")
end
function MainScreen:onCareerClick(element)
  self.lastActiveButton = element
  local v2 = isGameFullyInstalled()
  if not v2 then
    showGameInstallProgress()
    return
  end
  v2:reset()
  g_startMissionInfo.isMultiplayer = false
  v2:setIsMultiplayer(false)
  self:changeScreen(CareerScreen)
end
function MainScreen:onDownloadModsClick(element)
  self.lastActiveButton = element
  resetMultiplayerChecks()
  self:onDownloadModsClickPerform()
end
function MainScreen:onDownloadModsClickPerform()
  local v1 = getNetworkError()
  if v1 then
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    return
  end
  v1 = PlatformPrivilegeUtil.checkModDownload(self.onDownloadModsClickPerform, self)
  if not v1 then
    return
  end
  modDownloadManagerUpdateSync(true)
  v1:showGui("ModHubScreen")
end
function MainScreen:onAchievementsClick(element)
  self.lastActiveButton = element
  v2:showGui("AchievementsScreen")
end
function MainScreen:onStoreClick(element)
  self.lastActiveButton = element
  local v2 = storeHasNativeGUI()
  if v2 then
    v2 = getNetworkError()
    if v2 == nil then
      v2 = storeShow("")
      -- if v2 then goto L30 end
    end
    local v3 = v3:getText("ui_dlcStoreNotConnected")
    InfoDialog.show(v3, MainScreen.onStoreFailedOk, self)
  end
end
function MainScreen:onScenariosClick(element)
  self.lastActiveButton = element
  local v2 = isGameFullyInstalled()
  if not v2 then
    showGameInstallProgress()
    return
  end
  v2:reset()
  g_startMissionInfo.isMultiplayer = false
  v2:setIsMultiplayer(false)
  self:changeScreen(ScenariosScreen)
end
function MainScreen.onStoreFailedOk(v0)
  v1:showGui("MainScreen")
end
function MainScreen:onSettingsClick(element)
  self.lastActiveButton = element
  v2:showGui("SettingsScreen")
end
function MainScreen:onCreditsClick(element)
  self.lastActiveButton = element
  v2:showGui("CreditsScreen")
end
function MainScreen.onChangeUserClick(v0)
  g_gamepadSigninScreen.forceShowSigninGui = true
  v1:showGui("GamepadSigninScreen")
end
function MainScreen:onChangeMobileSettingsClick(v1)
  self.lastActiveButton = v1
  v2:showGui("MobileSettingsScreen")
end
function MainScreen.onQuitClick(v0)
  doExit()
end
function MainScreen:cycleNotification(signedDelta)
  self.activeNotification = self.activeNotification + signedDelta
  if #self.notifications < self.activeNotification then
    self.activeNotification = 1
  elseif self.activeNotification < 1 then
    self.activeNotification = #self.notifications
  end
  self:assignNotificationData()
end
function MainScreen:onClickNextNotification(element)
  self:cycleNotification(1)
end
function MainScreen:onClickPreviousNotification(element)
  self:cycleNotification(-1)
end
function MainScreen:onClickOpenNotification()
  if 0 < #self.notifications then
    if self.notifications[self.activeNotification].url == "openOptionsGraphics" then
      signedDelta:showGui("SettingsScreen")
      signedDelta:showDisplaySettings()
      return
    end
    if self.notifications[self.activeNotification].url ~= MainScreen.NO_STORE_URL and self.notifications[self.activeNotification].url ~= "" then
      local v2 = storeHasNativeGUI()
      if v2 then
        v2 = storeShow(self.notifications[self.activeNotification].url)
        -- if v2 then goto L77 end
        local v3 = v3:getText("ui_dlcStoreNotConnected")
        InfoDialog.show(v3, MainScreen.onStoreFailedOk, self)
        return
      end
      openWebFile(self.notifications[self.activeNotification].url, "")
    end
  end
end
function MainScreen.onDlcCorruptClick(v0)
  signedDelta:showGui("MainScreen")
end
function MainScreen:updateNotifications(dt)
  if self.notificationsReady and 0 < #self.notifications then
    local v2 = v2:getFinished()
    if not v2 then
      v2:update(dt)
    end
  end
  if not self.notificationsReady then
    self.notificationsCheckTimer = self.notificationsCheckTimer + dt
    if MainScreen.NOTIFICATION_CHECK_DELAY < self.notificationsCheckTimer then
      self.notificationsCheckTimer = 0
      v2 = notificationsLoaded()
      self.notificationsReady = v2
      if self.notificationsReady then
        v2 = getNumOfNotifications()
        Logging.devInfo("Loaded %d notification(s)", v2)
        -- TODO: structure LOP_FORNPREP (pc 59, target 123)
        local v7, v8, v9, v10, v11 = getNotification(0)
        if {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.title ~= "" then
          -- cmp-jump LOP_JUMPXEQKS R7 aux=0x17 -> L107
          table.insert(self.notifications, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11})
        else
          Logging.devWarning("Recieved invalid notification '%d'.\n    Title: %s\n    Message: %s\n    Url: %s\n    Image: %s\n    Date: %s", 0, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.title, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.message, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.url, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.image, {date = "", title = "", message = "", url = "", image = "", title = v7, message = v8, url = v9, image = v10, date = v11}.date)
        end
        -- TODO: structure LOP_FORNLOOP (pc 122, target 60)
        if 0 < #self.notifications then
          self.activeNotification = 1
          v3:setPageCount(#self.notifications, self.activeNotification)
          if not Platform.isMobile then
            if 1 >= #self.notifications then
            end
            v3:setVisible(true)
          end
          self:assignNotificationData()
          v3:start()
          return
        end
        v3:setPageCount(0)
      end
    end
  end
end
function MainScreen:updateFading(dt)
  if self.blendDir ~= 0 then
    local v2 = MathUtil.clamp(self.blendingAlpha + self.blendDir * dt / 500, 0, 1)
    self.blendingAlpha = v2
    v3:setImageColor(nil, 0.1 + 0.9 * self.blendingAlpha, 0.1 + 0.9 * self.blendingAlpha, 0.1 + 0.9 * self.blendingAlpha, 1)
    v3:setImageColor(nil, 0.1 + 0.9 * self.blendingAlpha, 0.1 + 0.9 * self.blendingAlpha, 0.1 + 0.9 * self.blendingAlpha, nil)
    if self.blendingAlpha ~= 1 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000001 -> L66
    end
    self.blendDir = 0
    if self.blendingAlpha == 1 then
      v3:setFocus(self.lastActiveButton)
    end
  end
end
function MainScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  modDownloadManagerUpdateSync(false)
  local v2 = getPlatformId()
  if v2 == PlatformId.ANDROID then
    v2 = getIsUserSignedIn()
    if GS_IS_NETFLIX_VERSION then
      -- if v2 then goto L67 end
      v3:showGui("NetflixSigninScreen")
    elseif v2 ~= self.lastSignedInState then
      if v2 then
        local v5 = getUserName()
        v3:setText(...)
        v3:setDisabled(false)
      else
        v3:setText("")
        v3:setDisabled(true)
      end
    end
    self.lastSignedInState = v2
  end
  if self.showGamepadModeDialog and not GS_IS_CONSOLE_VERSION and not GS_PLATFORM_GGP and not GS_IS_MOBILE_VERSION then
    v2 = v2:getValue("gamepadEnabledSetByUser")
    if not v2 then
      v2 = getNumOfGamepads()
      if 0 < v2 then
        v5 = v5:getText("ui_activateGamepads")
        local v6 = v6:getText("ui_activateGamepadsTitle")
        YesNoDialog.show(...)
        self.showGamepadModeDialog = false
      end
    end
  end
  if self.showHeadTrackingDialog and not GS_IS_CONSOLE_VERSION then
    v2 = v2:getValue("headTrackingEnabledSetByUser")
    if not v2 then
      v2 = isHeadTrackingAvailable()
      if v2 then
        v5 = v5:getText("ui_activateHeadTracking")
        v6 = v6:getText("ui_activateHeadTrackingTitle")
        YesNoDialog.show(...)
        self.showHeadTrackingDialog = false
      end
    end
  end
  if Platform.showGamerTagInMainScreen then
    local v4 = v4:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    v2:setText(...)
  end
  if GS_IS_CONSOLE_VERSION then
    self:updateStoreButtons()
  end
  if self.isFirstOpen == nil then
    v2 = isGameFullyInstalled()
    if v2 then
      v2:setFocus(self.careerButton)
    else
      error("Not fully installed. This state is currently not supported")
    end
    self.isFirstOpen = true
  end
  if Platform.hasMainMenuNotifications then
    self:updateNotifications(dt)
  end
  if not GS_IS_CONSOLE_VERSION then
    -- if not GS_PLATFORM_GGP then goto L234 end
  end
  v2 = storeHaveDlcsChanged()
  if not v2 then
    v2 = haveModsChanged()
    if not v2 then
      -- if not g_forceNeedsDlcsAndModsReload then goto L241 end
    end
  end
  g_forceNeedsDlcsAndModsReload = false
  reloadDlcsAndMods()
  self:resetNotifications()
  self:updateTheme()
  -- goto L241  (LOP_JUMP +7)
  v2 = haveModsChanged()
  if v2 then
    reloadDlcsAndMods()
  end
  v2 = storeAreDlcsCorrupted()
  if v2 then
    v3 = v3:getText("ui_dlcsCorruptRedownload")
    InfoDialog.show(v3, self.onDlcCorruptClick, self)
  end
  self:updateFading(dt)
end
function MainScreen:updateStoreButtons()
  local dt = getNetworkError()
  if dt then
    dt = dt:getIsActive()
    -- if not v1 then goto L29 end
    dt:setDisabled(true)
    return
  end
  dt = dt:getIsActive()
  if not dt then
    dt:setDisabled(false)
  end
end
function MainScreen:assignNotificationData()
  if 0 < self.activeNotification and self.activeNotification <= #self.notifications then
    if not GS_IS_CONSOLE_VERSION then
      dt:setText(self.notifications[self.activeNotification].message)
    else
      local v3 = v3:getText("notification_nowAvailable")
      dt:setText(...)
    end
    dt:setText(self.notifications[self.activeNotification].title)
    if self.notifications[self.activeNotification].image == "graphicsOptionsImage" then
    end
    v2:setImageFilename(dt)
    if g_languageShort ~= "en" and self.notifications[self.activeNotification].date ~= "" then
      v3 = v3:split("-")
      if g_languageShort == "de" then
        local v4 = string.format("%s.%s.%s", v3[3], v3[2], v3[1])
      else
        v4 = string.format("%s/%s/%s", v3[3], v3[2], v3[1])
      end
    end
    v3:setText(v2)
    if self.notifications[self.activeNotification].url == "openOptionsGraphics" then
      local v5 = v5:getText("button_settings")
      v3:setText(...)
    else
      v3 = storeHasNativeGUI()
      if v3 then
        v5 = v5:getText("button_dlcStore")
        v3:setText(...)
      else
        v5 = v5:getText("button_visitWebsite")
        v3:setText(...)
      end
      if self.notifications[self.activeNotification].url ~= MainScreen.NO_STORE_URL and self.notifications[self.activeNotification].url == "" then
      end
      v5:setVisible(v4)
    end
    v3:setPageIndex(self.activeNotification)
  end
end
function MainScreen.hasAllDLCs(v0, dt)
  for v5, v6 in ipairs(dt) do
    if not GS_PLATFORM_GGP then
      -- if not GS_IS_EPIC_VERSION then goto L25 end
    end
    local v7 = v7:getModByName(g_uniqueDlcNamePrefix .. v6)
    if not (v7 == nil) then
      continue
    end
    return false
    continue
    if not (g_modNameToDirectory[g_uniqueDlcNamePrefix .. v6] == nil) then
      continue
    end
    return false
  end
  return true
end
function MainScreen:updateTheme()
  if Platform.gameLogos[g_languageShort] == nil then
  end
  if self.logo ~= nil then
    v2:setImageFilename(dt)
  end
end
function MainScreen.onClickGooglePlayButton(v0)
  if g_buildTypeParam ~= "CHINA_GAPP" then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000003 -> L18
  end
  userSignout()
  dt:showGui("ChinaSigninScreen")
  -- goto L29  (LOP_JUMP +11)
  local dt = getIsUserSignedIn()
  if dt then
    userSignout()
  else
    requestUserSignin()
  end
  dt:publish(MessageType.USER_PROFILE_CHANGED)
end
function MainScreen:inputEvent(dt, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, dt, v2, v3)
  if Platform.isAndroid and dt == InputAction.MENU_BACK then
    v4 = v4:getText(InGameMenu.L10N_SYMBOL.END_GAME)
    YesNoDialog.show(self.onYesNoEnd, self, v4)
  end
  return v3
end
function MainScreen.onYesNoEnd(v0, dt)
  if dt then
    doExit()
  end
end
function MainScreen:updateInsets()
  if self.versionElementPosX == nil then
    self.versionElementPosX = self.versionElement.absPosition[1]
  end
  local dt, v2, v3, v4 = getSafeFrameInsets()
  self.versionElement.absPosition[1] = self.versionElementPosX + dt
end
