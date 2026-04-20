-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MPLoadingScreen = {STATE_NONE = 0, STATE_CONNECTING = 1, STATE_WAIT_FOR_ACCEPT = 2, STATE_SYNCHRONIZING = 3, STATE_LOADING = 4, STATE_WAIT_FOR_MISSION = 5, STATE_READY = 6, STATE_PORT_TESTING = 7, NUM_GAMEPLAY_HINTS = 3, SAVEGAME_LOADING_DIALOG_DELAY = 500, CONTROLS = {MAP_NAME_TEXT = "mapNameText", MAP_SELECTION_PREVIEW = "mapSelectionPreview", GAMEPLAY_HINT_TEXT = "gameplayHintText", TIP_STATE_BOX = "tipStateBox", MPLOADING_ANIMATION = "mpLoadingAnimation", MPLOADING_ANIMATION_DONE = "mpLoadingAnimationDone", LOADING_STATUS_TEXT = "loadingStatusText", BUTTON_OK_PC = "buttonOkPC", BUTTON_DELETE_PC = "buttonDeletePC", LOADING_BAR = "loadingBar", LOADING_BAR_PERCENTAGE = "loadingBarPercentage"}, PERCENTAGE_PER_MS = 0.000007916666666666667, LOAD_TARGETS = {VEHICLE_VALIDATION = 0.05, SPECIALIZATIONS = 0.1, STORE = 0.15, DATA = 0.2, MAP = 0.5, TERRAIN = 0.6, ADDITIONAL_FILES = 0.65, VEHICLES = 0.85, ITEMS = 0.95, FINISHED = 0.99}}
local MPLoadingScreen_mt = Class(MPLoadingScreen, ScreenElement)
function MPLoadingScreen.register()
  local v0 = MPLoadingScreen.new()
  v1:loadGui("dataS/gui/MPLoadingScreen.xml", "MPLoadingScreen", v0)
  return v0
end
function MPLoadingScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(MPLoadingScreen.CONTROLS)
  v2.acceptCancelTimer = -1
  v2.actionTimerCount = -1
  v2.doLoad = false
  v2.preSimulateCount = -1
  v2.preSimulateSteps = 5
  v2.loadFunction = OnLoadingScreen
  v2.wheelPosX = 0.7
  v2.wheelPosY = 0.2
  v2.isClient = false
  v2.positionOffsetY = 0.024
  v2.isBackAllowed = false
  v2.currentGameplayHint = nil
  v2.currentGameplayHints = nil
  v2.isCancel = true
  v2.gameplayHintDuration = 6500
  v2.gameplayHintTime = v2.gameplayHintDuration
  v2.savegameLoadingDialogDelay = -1
  v2.state = MPLoadingScreen.STATE_NONE
  v2.loadTargets = {}
  for v6, v7 in pairs(MPLoadingScreen.LOAD_TARGETS) do
    table.insert(v2.loadTargets, v7)
  end
  table.sort(v2.loadTargets, function(v0, v1)
    if v0 >= v1 then
    end
    return true
  end)
  return v2
end
function MPLoadingScreen.onGuiSetupFinished(v0)
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(v0)
end
function MPLoadingScreen:onCreate()
  self.button = self.buttonOkPC
end
function MPLoadingScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:setVisible(false)
  self:setMapTitleAndPreview()
  v1:setVisible(true)
  v1:setVisible(false)
  self.loadPercentage = 0
  self.loadTarget = 1
  enterCpuBoostMode()
end
function MPLoadingScreen:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  v1:setImageFilename("dataS/menu/black.png")
  leaveCpuBoostMode()
end
function MPLoadingScreen:cancelLoading(showConnectionLost)
  saveReadSavegameFinish("", self)
  leaveCpuBoostMode()
  setCamera(g_defaultCamera)
  if self.state == MPLoadingScreen.STATE_PORT_TESTING then
    netShutdown(0, 0)
    v2:showGui("MultiplayerScreen")
  elseif self.isClient then
    if g_currentMission ~= nil then
      OnInGameMenuMenu()
    else
      self:cleanup()
    end
    if masterServerConnectFront == nil then
      v2:setStartScreen(RestartManager.START_SCREEN_MULTIPLAYER)
      doRestart(false, "")
      -- goto L74  (LOP_JUMP +10)
    end
    v2:showGui("MultiplayerScreen")
  else
    OnInGameMenuMenu()
  end
  if showConnectionLost then
    local v3 = v3:getText("ui_connectionLost")
    InfoDialog.show(...)
  end
end
function MPLoadingScreen:onClickCancel()
  if self.isCancel and self.missionDynamicInfo.isMultiplayer and self.missionDynamicInfo.isClient then
    self:cancelLoading()
  end
end
function MPLoadingScreen:onClickOk(element)
  local v3 = v3:superClass()
  v3.onClickOk(self)
  if self.state == MPLoadingScreen.STATE_READY then
    self:setButtonState(MPLoadingScreen.STATE_NONE)
    v2:revertContext(false)
    v2:onStartMission()
    v2:setContext(Gui.INPUT_CONTEXT_MENU, false, false)
    v2:showGui("")
    v2:setShowMouseCursor(false)
    if Platform.hasWardrobe and not Profiler.IS_INITIALIZED then
      local v2 = v2:getIsServer()
      if v2 then
        -- if not v0.missionInfo.isValid then goto L83 end
      end
      v2 = v2:getIsServer()
      if not v2 and self.knownPlayerOnServer == false then
        self:openWardrobe()
      end
    end
    g_currentMission.pressStartPaused = false
    v2 = v2:getIsServer()
    if v2 then
      v2:tryUnpauseGame()
    end
    if g_dedicatedServer ~= nil then
      v2:lowerFramerate()
      if g_dedicatedServer.pauseGameIfEmpty then
        g_currentMission.dediEmptyPaused = true
        v2:pauseGame()
      end
    end
    if Profiler.IS_INITIALIZED then
      Profiler.setIsReady()
    end
  end
end
function MPLoadingScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = storeHaveDlcsChanged()
  if v2 then
    g_forceNeedsDlcsAndModsReload = true
    v2 = verifyDlcs()
    if not v2 then
      OnInGameMenuMenu()
      local v4 = v4:getText("ui_storageDeviceWithDlcsRemoved")
      InfoDialog.show(v4, self.dlcProblemOnQuitOk, self)
      return
    end
  end
  if GS_PLATFORM_PLAYSTATION and self.missionDynamicInfo.isMultiplayer then
    v2 = getMultiplayerAvailability()
    if v2 == MultiplayerAvailability.NOT_AVAILABLE then
      if g_currentMission ~= nil then
        OnInGameMenuMenu()
      else
        self:cleanup()
        v2:showGui("MainScreen")
      end
    end
    v2 = getNetworkError()
    if v2 then
      if g_currentMission ~= nil then
        OnInGameMenuMenu(nil, true)
      else
        self:cleanup()
        ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
      end
    end
  end
  if MPLoadingScreen.STATE_WAIT_FOR_ACCEPT < self.state and self.state < MPLoadingScreen.STATE_READY then
    v2 = math.min(self.loadPercentage + MPLoadingScreen.PERCENTAGE_PER_MS * dt, self.loadTargets[self.loadTarget])
    self.loadPercentage = v2
    self.loadingBar.absSize[1] = self.loadingBar.parent.absSize[1] * self.loadPercentage
    v4 = string.format("%d%%", self.loadPercentage * 100)
    v2:setText(...)
  end
  if self.state == MPLoadingScreen.STATE_WAIT_FOR_ACCEPT and GS_PLATFORM_PLAYSTATION and 0 < self.acceptCancelTimer then
    self.acceptCancelTimer = self.acceptCancelTimer - dt
    if self.acceptCancelTimer <= 0 then
      print("Waited too long for accept ... cancelling entire process")
      self:cancelLoading(true)
      return
    end
  end
  if self.state == MPLoadingScreen.STATE_WAIT_FOR_MISSION then
    self:onReadyToStart()
  end
  if 0 <= self.actionTimerCount then
    self.actionTimerCount = self.actionTimerCount - 1
    if self.actionTimerCount < 0 then
      if self.doLoad then
        self.doLoad = false
        v2:onConnectionRequestAcceptedLoad(self.loadConnection)
      elseif 0 <= self.preSimulateCount then
        self.preSimulateCount = self.preSimulateCount - 1
        if self.preSimulateCount < 0 then
          simulatePhysics(false)
          self:onReadyToStart()
        else
          self.actionTimerCount = 0
          extraUpdatePhysics(g_currentMission.preSimulateTime / self.preSimulateSteps)
        end
      end
    end
  end
  if self.currentGameplayHints ~= nil then
    self.gameplayHintTime = self.gameplayHintTime - dt
    -- if v0.gameplayHintTime > 0 then goto L347 end
    self.gameplayHintTime = self.gameplayHintDuration
    self.currentGameplayHint = self.currentGameplayHint + 1
    if #self.currentGameplayHints < self.currentGameplayHint then
      self.currentGameplayHint = 1
    end
    self:setGameplayHint(self.currentGameplayHints, self.currentGameplayHint)
  else
    v2 = v2:getIsLoaded()
    if v2 then
      v2 = v2:getRandomGameplayHint(MPLoadingScreen.NUM_GAMEPLAY_HINTS)
      if v2 ~= nil then
        self.currentGameplayHints = v2
        self.currentGameplayHint = 1
        v3:setPageCount(MPLoadingScreen.NUM_GAMEPLAY_HINTS)
        self:setGameplayHint(self.currentGameplayHints, self.currentGameplayHint)
      end
      self.gameplayHintTime = self.gameplayHintDuration
    end
  end
  if 0 < self.savegameLoadingDialogDelay then
    self.savegameLoadingDialogDelay = self.savegameLoadingDialogDelay - dt
    if self.savegameLoadingDialogDelay <= 0 then
      v2 = v2:showDialog("InfoDialog")
      self.loadingDialog = v2
      v4 = v4:getText("ui_loadingSavegame")
      v2:setText(...)
      v4 = v4:getText("button_cancel")
      v2:setButtonTexts(...)
      v2:setCallback(self.onCancelSavegameLoading, self)
    end
  end
end
function MPLoadingScreen.openWardrobe(v0)
  dt:setNextOpenIsNewCharacter()
  dt:changeScreen(nil, WardrobeScreen)
end
function MPLoadingScreen.dlcProblemOnQuitOk(v0)
  local dt = dt:getIsGuiVisible()
  if dt and g_gui.currentGuiName == "InfoDialog" then
    dt:showGui("MainScreen")
  end
end
function MPLoadingScreen:loadSavegameAndStart()
  if self.missionInfo.isValid then
    self.savegameLoadingDialogDelay = MPLoadingScreen.SAVEGAME_LOADING_DIALOG_DELAY
    saveReadSavegameStart(self.missionInfo.savegameIndex, "onSavegameLoaded", self)
    return
  end
  self:onSavegameLoaded(Savegame.ERROR_OK, nil)
end
function MPLoadingScreen.loadGameRelatedData(v0)
  dt:setAllowedTimePerFrame(33.333333333333336)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
  dt:addTask(function()
    v0:loadMapData()
  end)
end
function MPLoadingScreen.unloadGameRelatedData(v0)
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
  dt:unloadMapData()
end
function MPLoadingScreen:startClient()
  self:loadGameRelatedData()
  resetSplitShapes()
  setTerrainLoadDirectory("", TerrainLoadFlags.GAME_DEFAULT)
  self.isClient = true
  self.isCancel = true
  self:setButtonState(MPLoadingScreen.STATE_CONNECTING)
  dt:addTask(function()
    local self = Client.new()
    g_client = self
    self:setCallbackTarget(u0)
    masterServerRequestServerDetails(u0.missionDynamicInfo.serverId)
  end)
end
function MPLoadingScreen:startLocal()
  self.isClient = false
  self:setButtonState(MPLoadingScreen.STATE_LOADING)
  dt:addTask(function()
    local self = Server.new()
    g_server = self
    self = Client.new()
    g_client = self
  end)
  self:initializeLoading()
end
function MPLoadingScreen:showPortTesting()
  self:setMapTitleAndPreview()
  self:setButtonState(MPLoadingScreen.STATE_PORT_TESTING)
  dt:showGui("MPLoadingScreen")
end
function MPLoadingScreen:startServer()
  self.isClient = false
  self:setButtonState(MPLoadingScreen.STATE_LOADING)
  self.serverName = self.missionDynamicInfo.serverName
  self.serverPassword = self.missionDynamicInfo.password
  self.capacity = self.missionDynamicInfo.capacity
  self.mods = self.missionDynamicInfo.mods
  dt:addTask(function()
    local self = Server.new()
    g_server = self
    self = Client.new()
    g_client = self
    self:start(u0.missionDynamicInfo.serverPort, u0.missionDynamicInfo.serverAddress, u0.missionDynamicInfo.capacity)
  end)
  dt:setNextScreenName("MPLoadingScreen")
  dt:setPrevScreenName("CreateGameScreen")
  dt:showGui("ConnectToMasterServerScreen")
  dt:addTask(function()
    self:connectToFront()
  end)
end
function MPLoadingScreen:loadWithConnection(connection, knownPlayerOnServer)
  self:setButtonState(MPLoadingScreen.STATE_SYNCHRONIZING)
  self.actionTimerCount = 1
  self.doLoad = true
  self.loadConnection = connection
  self.knownPlayerOnServer = knownPlayerOnServer
end
function MPLoadingScreen:onWaitingForAccept()
  if self.isClient then
    self:setButtonState(MPLoadingScreen.STATE_WAIT_FOR_ACCEPT)
    self.acceptCancelTimer = 120000
  end
end
function MPLoadingScreen:onWaitingForDynamicData()
  self:setButtonState(MPLoadingScreen.STATE_LOADING)
end
function MPLoadingScreen:onCreatingGame()
  local v3 = v3:getText("ui_creatingGame")
  self:setStatusText(...)
end
function MPLoadingScreen:setDynamicDataPercentage(progress)
  local v9 = v9:getText("ui_synchronizingWithOtherPlayers")
  v9 = math.floor(progress * 100)
  self:setStatusText(v9 .. " " .. v9 .. "%")
end
function MPLoadingScreen:reloadAsNewSavegame()
  dt:loadDefaults()
  dt:startSavegame(self.missionInfo)
end
function MPLoadingScreen:onCancelSavegameLoading()
  self:cancelLoading()
  dt:showGui("CareerScreen")
end
function MPLoadingScreen:onSavegameLoaded(errorCode, savegameDirectory)
  if 0 < self.savegameLoadingDialogDelay then
    self.savegameLoadingDialogDelay = -1
  end
  if self.loadingDialog ~= nil then
    v3:close()
  end
  if errorCode == Savegame.ERROR_OK then
    self:loadGameRelatedData()
    if self.missionInfo.isValid then
      self.missionInfo:setSavegameDirectory(savegameDirectory)
    else
      self.missionInfo:setSavegameDirectory(nil)
    end
    if v3.environmentXML ~= nil then
      local v4 = fileExists(v3.environmentXML)
      -- if v4 then goto L55 end
    end
    v3.environmentXMLLoad = v3.defaultEnvironmentXMLFilename
    -- goto L59  (LOP_JUMP +4)
    v3.environmentXMLLoad = v3.environmentXML
    if v3.vehiclesXML ~= nil then
      v4 = fileExists(v3.vehiclesXML)
      -- if v4 then goto L74 end
    end
    v3.vehiclesXMLLoad = v3.defaultVehiclesXMLFilename
    -- goto L78  (LOP_JUMP +4)
    v3.vehiclesXMLLoad = v3.vehiclesXML
    if v3.placeablesXML ~= nil then
      v4 = fileExists(v3.placeablesXML)
      -- if v4 then goto L93 end
    end
    v3.placeablesXMLLoad = v3.defaultPlaceablesXMLFilename
    -- goto L97  (LOP_JUMP +4)
    v3.placeablesXMLLoad = v3.placeablesXML
    if v3.itemsXML ~= nil then
      v4 = fileExists(v3.itemsXML)
      -- if v4 then goto L112 end
    end
    v3.itemsXMLLoad = v3.defaultItemsXMLFilename
    -- goto L116  (LOP_JUMP +4)
    v3.itemsXMLLoad = v3.itemsXML
    if v3.aiSystemXML ~= nil then
      v4 = fileExists(v3.aiSystemXML)
      -- if v4 then goto L130 end
    end
    v3.aiSystemXMLLoad = nil
    -- goto L134  (LOP_JUMP +4)
    v3.aiSystemXMLLoad = v3.aiSystemXML
    if v3.onCreateObjectsXML ~= nil then
      v4 = fileExists(v3.onCreateObjectsXML)
      -- if v4 then goto L148 end
    end
    v3.onCreateObjectsXMLLoad = nil
    -- goto L152  (LOP_JUMP +4)
    v3.onCreateObjectsXMLLoad = v3.onCreateObjectsXML
    if v3.economyXML ~= nil then
      v4 = fileExists(v3.economyXML)
      -- if v4 then goto L166 end
    end
    v3.economyXMLLoad = nil
    -- goto L170  (LOP_JUMP +4)
    v3.economyXMLLoad = v3.economyXML
    if v3.farmlandXML ~= nil then
      v4 = fileExists(v3.farmlandXML)
      -- if v4 then goto L184 end
    end
    v3.farmlandXMLLoad = nil
    -- goto L188  (LOP_JUMP +4)
    v3.farmlandXMLLoad = v3.farmlandXML
    if v3.npcXML ~= nil then
      v4 = fileExists(v3.npcXML)
      -- if v4 then goto L202 end
    end
    v3.npcXMLLoad = nil
    -- goto L206  (LOP_JUMP +4)
    v3.npcXMLLoad = v3.npcXML
    if v3.missionsXML ~= nil then
      v4 = fileExists(v3.missionsXML)
      -- if v4 then goto L220 end
    end
    v3.missionsXMLLoad = nil
    -- goto L224  (LOP_JUMP +4)
    v3.missionsXMLLoad = v3.missionsXML
    if v3.farmsXML ~= nil then
      v4 = fileExists(v3.farmsXML)
      -- if v4 then goto L238 end
    end
    v3.farmsXMLLoad = nil
    -- goto L242  (LOP_JUMP +4)
    v3.farmsXMLLoad = v3.farmsXML
    if v3.playersXML ~= nil then
      v4 = fileExists(v3.playersXML)
      -- if v4 then goto L256 end
    end
    v3.playersXMLLoad = nil
    -- goto L260  (LOP_JUMP +4)
    v3.playersXMLLoad = v3.playersXML
    if v3.fieldsXML ~= nil then
      v4 = fileExists(v3.fieldsXML)
      -- if v4 then goto L274 end
    end
    v3.fieldsXMLLoad = nil
    -- goto L278  (LOP_JUMP +4)
    v3.fieldsXMLLoad = v3.fieldsXML
    if v3.densityMapHeightXML ~= nil then
      v4 = fileExists(v3.densityMapHeightXML)
      -- if v4 then goto L292 end
    end
    v3.densityMapHeightXMLLoad = nil
    -- goto L296  (LOP_JUMP +4)
    v3.densityMapHeightXMLLoad = v3.densityMapHeightXML
    if v3.treePlantXML ~= nil then
      v4 = fileExists(v3.treePlantXML)
      -- if v4 then goto L310 end
    end
    v3.treePlantXMLLoad = nil
    -- goto L314  (LOP_JUMP +4)
    v3.treePlantXMLLoad = v3.treePlantXML
    if self.missionDynamicInfo.isMultiplayer then
      self:startServer()
      return
    end
    self:startLocal()
    return
  end
  if errorCode == Savegame.ERROR_DATA_CORRUPT then
    local v3 = v3:getIsGuiVisible()
    -- if not v3 then goto L490 end
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x8000003a -> L490
    self:setStatusText("")
    local v6 = v6:getText("ui_savegameCorrupt")
    local v8 = v8:getText("button_continue")
    local v9 = v9:getText("button_cancel")
    YesNoDialog.show(...)
    return
  end
  if errorCode == Savegame.ERROR_LOAD_INVALID_USER then
    v3 = v3:getIsGuiVisible()
    -- if not v3 then goto L490 end
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x8000003a -> L490
    self:setStatusText("")
    v6 = v6:getText("ui_savegameInvalidUser")
    v8 = v8:getText("button_continue")
    v9 = v9:getText("button_cancel")
    YesNoDialog.show(...)
    return
  end
  if errorCode == Savegame.ERROR_CLOUD_CONFLICT then
    v3 = v3:getIsGuiVisible()
    -- if not v3 then goto L490 end
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x8000003a -> L490
    self:setStatusText("")
    v4 = v4:getText("ui_savegameLoadCloudConflict")
    InfoDialog.show(v4, self.onOkSavegameCloudConflict, self)
    return
  end
  if errorCode ~= Savegame.ERROR_CANCELLED then
    v3 = v3:getIsGuiVisible()
    -- if not v3 then goto L490 end
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x8000003a -> L490
    self:setStatusText("")
    v4 = v4:getText("ui_savegameLoadFailed")
    InfoDialog.show(v4, self.onOkSavegameLoadFailed, self)
    return
  end
  v3 = v3:getIsGuiVisible()
  if v3 and g_gui.currentGuiName == "MPLoadingScreen" then
    self:cancelLoading()
  end
end
function MPLoadingScreen:onSaveGameLoadingFinished(errorCode)
  if errorCode == Savegame.ERROR_OK then
    v2:publish(MessageType.SAVEGAME_LOADED)
    local v2 = v2:getIsServer()
    if v2 then
      if 0 < g_currentMission.preSimulateTime then
        simulatePhysics(true)
        extraUpdatePhysics(g_currentMission.preSimulateTime / self.preSimulateSteps)
        self.actionTimerCount = 1
        self.preSimulateCount = self.preSimulateSteps - 1
        return
      end
      self:onReadyToStart()
      return
    end
    self:onReadyToStart()
    return
  end
  if errorCode == Savegame.ERROR_DATA_CORRUPT then
    v2 = v2:getIsGuiVisible()
    -- if not v2 then goto L175 end
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8000001e -> L175
    v2 = v2:getText("ui_savegameCorrupt")
    local v4 = v4:getText("button_continue")
    local v5 = v5:getText("button_cancel")
    YesNoDialog.show(self.onYesNoSavegameCorrupted, self, v2, nil, v4, v5)
    return
  end
  if errorCode == Savegame.ERROR_LOAD_INVALID_USER then
    v2 = v2:getIsGuiVisible()
    -- if not v2 then goto L175 end
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8000001e -> L175
    v5 = v5:getText("ui_savegameInvalidUser")
    local v7 = v7:getText("button_continue")
    local v8 = v8:getText("button_cancel")
    YesNoDialog.show(...)
    return
  end
  if errorCode ~= Savegame.ERROR_CANCELLED then
    v2 = v2:getIsGuiVisible()
    -- if not v2 then goto L175 end
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8000001e -> L175
    local v3 = v3:getText("ui_savegameLoadFailed")
    InfoDialog.show(v3, self.onOkSavegameLoadFailed, self)
    return
  end
  v2 = v2:getIsGuiVisible()
  if v2 and g_gui.currentGuiName == "MPLoadingScreen" then
    self:cancelLoading()
  end
end
function MPLoadingScreen:onOkSavegameLoadFailed()
  self:cancelLoading()
end
function MPLoadingScreen:onOkSavegameCloudConflict()
  self:cancelLoading()
  dt:showGui("CareerScreen")
  dt:tryToResolveConflict(self.missionInfo.savegameIndex)
end
function MPLoadingScreen:onYesNoSavegameCorrupted(yes)
  if yes then
    self:cancelLoading()
    v2:showGui("MPLoadingScreen")
    self:reloadAsNewSavegame()
    return
  end
  self:cancelLoading()
end
function MPLoadingScreen:onFinishedReceivingDynamicData()
  if self.missionInfo.isValid then
    dt:addTask(function()
      saveReadSavegameFinish("onSaveGameLoadingFinished", u0)
    end)
    return
  end
  self:onSaveGameLoadingFinished(Savegame.ERROR_OK)
end
function MPLoadingScreen:onReadyToStart()
  local dt = dt:canStartMission()
  if dt then
    setCamera(g_defaultCamera)
    setIs3DAudioRenderingEnabled(true)
    setIs3DGraphicsRenderingEnabled(true)
    dt:setVisible(false)
    dt:setVisible(true)
    self.isCancel = false
    self:setButtonState(MPLoadingScreen.STATE_READY)
    self.loadingBar.absSize[1] = self.loadingBar.parent.absSize[1]
    dt:setText("100%")
    if g_dedicatedServer == nil and not Platform.autoStartAfterLoad and not Profiler.IS_INITIALIZED then
      dt = StartParams.getIsSet("autoStart")
      -- if not v1 then goto L85 end
    end
    self:onClickOk()
    return
  end
  self:setButtonState(MPLoadingScreen.STATE_WAIT_FOR_MISSION)
end
function MPLoadingScreen:initializeLoading()
  dt:setGameState(GameState.LOADING)
  self:setMapTitleAndPreview()
  Object.resetObjectIds()
  dt:addTask(function()
    local self = self:isa(FSCareerMissionInfo)
    if self then
      InitClientOnce()
      masterServerConnectFront = nil
      masterServerConnectBack = nil
      masterServerAddServer = nil
      masterServerAddServerModStart = nil
      masterServerAddServerMod = nil
      masterServerAddServerModEnd = nil
      masterServerRequestConnectionToServer = nil
      netConnect = nil
      if 0 < #u0.missionDynamicInfo.mods then
        if u0.missionInfo.map.prohibitOtherMods then
          -- if g_isDevelopmentVersion then goto L83 end
          self = self:getModNameFromMapId(u0.missionInfo.mapId)
          local dt = dt:getModByName(self)
          u0.missionDynamicInfo.mods = {dt}
        else
          table.sort(u0.missionDynamicInfo.mods, MPLoadingScreen.modSortFunc)
        end
        for v3, v4 in ipairs(u0.missionDynamicInfo.mods) do
          loadMod(v4.modName, v4.modDir, v4.modFile, v4.title)
        end
      end
    end
  end)
  dt:addTask(function()
    self:createSchemas()
  end)
  dt:addTask(function()
    self:initSchemas()
  end)
  dt:addTask(function()
    self:validateTypes()
    self:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.VEHICLE_VALIDATION)
  end)
  dt:addTask(function()
    self:finalizeTypes()
  end)
  dt:addTask(function()
    self:validateTypes()
  end)
  dt:addTask(function()
    self:finalizeTypes()
  end)
  dt:addTask(function()
    Vehicle.init()
    Placeable.init()
    self:initSpecializations()
    self:initSpecializations()
    Vehicle.postInit()
    Placeable.postInit()
    self:postInitSpecializations()
    self:postInitSpecializations()
    self:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.SPECIALIZATIONS)
  end)
  dt:addTask(function()
    self:initSchemas()
  end)
  dt:addTask(function()
    self:initBrushTypes()
  end)
  dt:addTask(function()
    HandTool.init()
  end)
  setCamera(0)
  setIs3DAudioRenderingEnabled(false)
  setIs3DGraphicsRenderingEnabled(false)
  self.loadFunction(self.missionInfo, self.missionDynamicInfo, self)
end
function MPLoadingScreen:setMapTitleAndPreview()
  if self.missionInfo ~= nil then
    if self.missionInfo.name then
      local v3 = tostring(self.missionInfo.name)
    end
    v3 = v3:getMapById(self.missionInfo.mapId)
    if v3 ~= nil then
      local v4 = v4:isa(FSCareerMissionInfo)
      if v4 then
      end
    end
  end
  v3:setImageFilename(v2)
  v3:setText(dt)
end
function MPLoadingScreen:onServerInfoDetails(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
  if id == self.missionDynamicInfo.serverId then
    local v20 = table.getn(modHashes)
    -- TODO: structure LOP_FORNPREP (pc 15, target 45)
    v20 = v20:getModByFileHash(modHashes[1])
    if v20 == nil then
      local v21 = v21:split(";")
      local v22 = "":len()
      if v22 ~= 0 then
      end
      -- if 4 <= v16 + 1 then goto L45 end
    end
    -- TODO: structure LOP_FORNLOOP (pc 44, target 16)
    if 0 < v16 then
      local v17 = v17:getText("ui_notAllModsAvailable")
      g_deepLinkingInfo = nil
      self:showFailedToConnectDialog(v17 .. "\n" .. v15)
      return
    end
    v17 = v17:setMapId(mapId)
    if not v17 then
      g_deepLinkingInfo = nil
      self:showFailedToConnectDialog()
      return
    end
    self.missionDynamicInfo.mods = {}
    v20 = table.getn(modHashes)
    -- TODO: structure LOP_FORNPREP (pc 93, target 111)
    v20 = v20:getModByFileHash(modHashes[1])
    table.insert(self.missionDynamicInfo.mods, v20)
    -- TODO: structure LOP_FORNLOOP (pc 110, target 94)
    g_deepLinkingInfo = nil
    self:setMapTitleAndPreview()
    masterServerRequestConnectionToServer(self.missionDynamicInfo.password, id, "onNatPunchSuceeded", "onNatPunchFailed", self)
    return
  end
  v17 = tostring(id)
  local v18 = tostring(name)
  local v19 = tostring(self.missionDynamicInfo.serverId)
  Logging.warning(...)
  g_deepLinkingInfo = nil
  self:showFailedToConnectDialog()
end
function MPLoadingScreen:showFailedToConnectDialog(text)
  if not text then
    local v3 = v3:getText("ui_failedToConnectToGame")
  end
  v2(v3, g_connectionFailedDialog.onOkCallback, g_connectionFailedDialog, {"JoinGameScreen"})
  self:cleanup()
end
function MPLoadingScreen:onServerInfoDetailsFailed()
  g_deepLinkingInfo = nil
  self:showFailedToConnectDialog()
end
function MPLoadingScreen:onNatPunchSuceeded(ip, port, platformSessionId, relayHeader)
  print("nat punch suceeded")
  self.missionDynamicInfo.serverAddress = ip
  self.missionDynamicInfo.serverPort = port
  self.missionDynamicInfo.platformSessionId = platformSessionId
  self.missionDynamicInfo.relayHeader = relayHeader
  self:initializeLoading()
end
function MPLoadingScreen:onNatPunchFailed(reason)
  ConnectionFailedDialog.showMasterServerConnectionFailedReason(reason, "JoinGameScreen")
  self:cleanup()
end
function MPLoadingScreen:onMasterServerConnectionReady()
  if self.missionDynamicInfo.isClient then
    masterServerRequestConnectionToServer(self.missionDynamicInfo.password, self.missionDynamicInfo.serverId, "onNatPunchSuceeded", "onNatPunchFailed", self)
    return
  end
  dt:setCallbackTarget(self)
  self:onCreatingGame()
  log("STARTING MP Game")
  masterServerAddServerModStart()
  local v4 = table.getn(self.missionDynamicInfo.mods)
  -- TODO: structure LOP_FORNPREP (pc 46, target 88)
  if self.missionDynamicInfo.mods[1].fileHash ~= nil then
  end
  assert(v6)
  local v5 = ServerDetailScreen.packModInfo(v4.title, v4.version, v4.author, v4.modName)
  log("    adding mod", v5, v4.fileHash)
  masterServerAddServerMod(v5, v4.fileHash)
  -- TODO: structure LOP_FORNLOOP (pc 87, target 47)
  masterServerAddServerModEnd()
  local dt = dt:getMapById(self.missionInfo.mapId)
  masterServerAddServer(self.missionDynamicInfo.serverName, self.missionDynamicInfo.password, self.missionDynamicInfo.capacity, 0, dt.title, self.missionInfo.mapId, self.missionDynamicInfo.allowOnlyFriends, g_createGameScreen.usePendingInvites, self.missionDynamicInfo.allowCrossPlay)
  self:initializeLoading()
end
function MPLoadingScreen:onMasterServerConnectionFailed(reason)
  if g_currentMission ~= nil then
  end
  assert(true)
  saveReadSavegameFinish("", self)
  self:cleanup()
  if self.isClient then
  end
  ConnectionFailedDialog.showMasterServerConnectionFailedReason(reason, v2)
end
function MPLoadingScreen:cleanup()
  self:unloadGameRelatedData()
  dt:disconnectFromMasterServer()
  dt:flushAllTasks()
  dt:flushAllTasks()
  if g_client ~= nil then
    dt:delete()
    g_client = nil
  end
  if g_server ~= nil then
    dt:delete()
    g_server = nil
    return
  end
  dt:shutdownAll()
end
function MPLoadingScreen:setMissionInfo(missionInfo, missionDynamicInfo)
  self.missionInfo = missionInfo
  self.missionDynamicInfo = missionDynamicInfo
  self.preSimulateCount = -1
  self.doLoad = false
end
function MPLoadingScreen:setGameplayHint(currentGameplayHints, id)
  if currentGameplayHints[id] ~= nil then
    local v6 = v6:getCurrencySymbol(true)
    local v3 = string.gsub(...)
    v4:setText(v3)
    v4:setPageIndex(id)
  end
end
function MPLoadingScreen:modSortFunc(dt)
  if self.isDLC == dt.isDLC then
    local v3 = string.lower(self.modName)
    local v4 = string.lower(dt.modName)
    if v3 >= v4 then
    end
    return true
  end
  if self.isDLC then
    return true
  end
  return false
end
function MPLoadingScreen:setStatusText(text)
  v2:setText(text)
end
function MPLoadingScreen:setButtonState(state)
  self.state = state
  if self.state == MPLoadingScreen.STATE_CONNECTING then
    local v6 = v6:getText("ui_connectingPleaseWait")
    self:setStatusText(...)
  elseif self.state == MPLoadingScreen.STATE_LOADING then
    v6 = v6:getText("ui_gameIsLoadingPleaseWait")
    self:setStatusText(...)
    -- if not v0.missionDynamicInfo.isMultiplayer then goto L152 end
    -- if not v0.isClient then goto L152 end
    v6 = v6:getText("ui_synchronizingWithOtherPlayers")
    self:setStatusText(...)
  else
    if self.state == MPLoadingScreen.STATE_READY then
      self:setStatusText("")
      v4:setFocus(self.buttonOkPC)
    elseif self.state == MPLoadingScreen.STATE_PORT_TESTING then
      v6 = v6:getText("ui_testingPort")
      self:setStatusText(...)
    else
      if self.state ~= MPLoadingScreen.STATE_SYNCHRONIZING then
        -- if v0.state ~= MPLoadingScreen.STATE_LOADING then goto L134 end
      end
      v6 = v6:getText("ui_gameIsLoadingPleaseWait")
      self:setStatusText(...)
      if self.missionDynamicInfo.isMultiplayer and self.isClient then
        -- goto L152  (LOP_JUMP +18)
        if self.state == MPLoadingScreen.STATE_WAIT_FOR_ACCEPT then
          v6 = v6:getText("ui_waitingForAccept")
          self:setStatusText(...)
        end
      end
    end
  end
  v4:setVisible(v2)
  v4:setVisible(v3)
end
function MPLoadingScreen:hitLoadingTarget(target)
  while true do
    if not (self.loadTargets[self.loadTarget] ~= nil) then
      break
    end
    if not (self.loadTargets[self.loadTarget] <= target) then
      break
    end
    self.loadTarget = self.loadTarget + 1
  end
  self.loadPercentage = target
end
