-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

JoinGameScreen = {CONTROLS = {"mainBox", "numServersText", "serverList", "mapSelectionElement", "passwordElement", "capacityElement", "modDlcElement", "serverNameElement", "allowCrossPlayElement", "maxNumPlayersElement", "languageElement", "buttonBox", "settingsBox", "detailButtonElement", "startButtonElement", "changeButton", "sortButton", "loadingText"}, REFRESH_TIME = 25000, FILTER_CHANGE_REFRESH_TIME = 500}
local JoinGameScreen_mt = Class(JoinGameScreen, ScreenElement)
function JoinGameScreen.register()
  local v0 = JoinGameScreen.new()
  v1:loadGui("dataS/gui/JoinGameScreen.xml", "JoinGameScreen", v0)
  return v0
end
function JoinGameScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(JoinGameScreen.CONTROLS)
  v2.servers = {}
  v2.serversBuffer = {}
  v2.displayServers = {}
  v2.requestedDetailsServerId = -1
  v2.serverDetailsPending = false
  v2.sortKey = "name"
  v2.sortOrder = TableHeaderElement.SORTING_ASC
  v2.totalNumServers = 0
  v2.numServers = 0
  v2.maxNumPlayersStates = {}
  v2.maxNumPlayersNumbers = {}
  -- TODO: structure LOP_FORNPREP (pc 58, target 78)
  local v8 = tostring(g_serverMinCapacity)
  table.insert(...)
  table.insert(v2.maxNumPlayersNumbers, g_serverMinCapacity)
  -- TODO: structure LOP_FORNLOOP (pc 77, target 59)
  v2.maxNumPlayersState = #v2.maxNumPlayersNumbers
  v2.selectedMaxNumPlayers = v2.maxNumPlayersNumbers[v2.maxNumPlayersState]
  v2.hasNoPassword = false
  v2.isNotFull = false
  v2.onlyWithAllModsAvailable = false
  v2.allowCrossPlay = false
  v2.selectedMap = ""
  v2.selectedLanguageId = 0
  v2.serverName = ""
  v2.lastUserName = ""
  v2.returnScreenClass = MultiplayerScreen
  v2.lastSelectedServerName = nil
  v2.lastSelectedServerMapName = nil
  if g_isDevelopmentVersion then
    JoinGameScreen.REFRESH_TIME = 10000
  end
  return v2
end
function JoinGameScreen:createFromExistingGui(v1)
  local v2 = JoinGameScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function JoinGameScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  local v3 = getAllowCrossPlay()
  v1:setVisible(...)
  v1:invalidateLayout()
  self.mapTable = {}
  self.mapIds = {}
  v3 = v3:getText("ui_anyMap")
  table.insert(...)
  table.insert(self.mapIds, "")
  local v4 = v4:getNumOfMaps()
  -- TODO: structure LOP_FORNPREP (pc 58, target 94)
  v4 = v4:getMapDataByIndex(1)
  local v6 = Utils.limitTextToWidth(v4.title, 0.025, 0.245, false, "..")
  table.insert(self.mapTable, v6)
  table.insert(self.mapIds, v4.title)
  -- TODO: structure LOP_FORNLOOP (pc 93, target 59)
  v1:setTexts(self.mapTable)
  if self.showingDeepLinkingPassword then
    self.showingPasswordDialog = nil
    self.showingDeepLinkingPassword = nil
    g_deepLinkingInfo = nil
  end
  if g_deepLinkingInfo ~= nil then
    local v1 = v1:getText("ui_connectingPleaseWait")
    MessageDialog.show(nil, nil, v1, DialogElement.TYPE_LOADING)
  else
    MessageDialog.hide()
  end
  if g_deepLinkingInfo ~= nil then
  end
  v1:setVisible(true)
  if GS_IS_CONSOLE_VERSION then
    v3 = v3:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    if self.lastUserName ~= v3 then
      v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
      self.lastUserName = v2
    end
  end
  if v1 then
    self:loadFilterSettings()
  end
  self.isRequestPending = false
  self.serverDetailsPending = false
  v2:setCallbackTarget(self)
  v2:setDisabled(true)
  v2:setDisabled(true)
  v2:setText("")
  self.refreshTimer = JoinGameScreen.REFRESH_TIME
  self.servers = {}
  self.isInitialLoad = true
  v2:reloadData()
  if not g_masterServerConnection.isInit then
    v4 = v4:getValue("defaultServerPort")
    v2:startupWithWorkingPort(...)
    v2:connectToMasterServer(g_masterServerConnection.lastBackServerIndex)
  end
  local v5 = v5:getItemCount()
  if v5 ~= 0 then
  end
  v2:setVisible(true)
  if g_deepLinkingInfo ~= nil then
    masterServerRequestServerDetailsWithPlatformServerId(g_deepLinkingInfo.platformServerId)
  else
    self:getServers()
  end
  if not GS_IS_CONSOLE_VERSION then
    v3 = v3:getInputHelpMode()
    if v3 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
  end
  self.canShowSortButton = v2
  v2:subscribe(MessageType.INPUT_MODE_CHANGED, self.onInputModeChanged, self)
  self:showSortButton(false)
end
function JoinGameScreen:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self.settingsLoaded = false
  self.servers = {}
  self.serversBuffer = {}
  self.displayServers = {}
  self.mapTable = {}
  self.mapIds = {}
  v1:unsubscribeAll(self)
end
function JoinGameScreen:triggerRebuildOnFilterChange()
  self:updateDisplayedServers()
end
function JoinGameScreen:onServerInfoDetails(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
  if g_isDevelopmentVersion then
    local v25 = tostring(hasPassword)
    local v26 = tostring(isLanServer)
    local v30 = getDeviceTypeFromPlatformId(platformId)
    local v16 = string.format(...)
    log(...)
    for v18, v19 in ipairs(modTitles) do
      log("    ", v19, "> Hash:", modHashes[v18])
    end
  end
  if g_deepLinkingInfo ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R15 aux=0x12 -> L114
    if hasPassword then
      self.showingPasswordDialog = true
      self.showingDeepLinkingPassword = true
      PasswordDialog.show(self.onPasswordEntered, self, {serverId = id}, "")
      -- goto L114  (LOP_JUMP +40)
    end
    self:startGame(password, id)
  elseif id == self.requestedDetailsServerId then
    local v28 = v28:getAreAllModsAvailable(modHashes)
    v15:setServerInfo(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, v28, allowCrossPlay, platformId)
    v15:showGui("ServerDetailScreen")
  end
  self.serverDetailsPending = false
end
function JoinGameScreen:onServerInfoDetailsFailed()
  if g_deepLinkingInfo ~= nil then
    g_deepLinkingInfo = nil
    local name = name:getText("ui_failedToConnectToGame")
    ConnectionFailedDialog.show(name, g_connectionFailedDialog.onOkCallback, g_connectionFailedDialog, {"JoinGameScreen"})
  else
    self.requestedDetailsServerId = -1
  end
  self.serverDetailsPending = false
  self:getServers()
end
function JoinGameScreen:onMasterServerConnectionReady()
  self:getServers()
end
function JoinGameScreen.onMasterServerConnectionFailed(v0, id)
  name:disconnectFromMasterServer()
  name:shutdownAll()
  ConnectionFailedDialog.showMasterServerConnectionFailedReason(id, "MultiplayerScreen")
end
function JoinGameScreen:onServerInfoStart(numServers, totalNumServers)
  self.totalNumServers = totalNumServers
  self.numServers = numServers
  self.serversBufferNextIndex = 1
end
function JoinGameScreen:onServerInfo(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay)
  if not self.serversBuffer[self.serversBufferNextIndex] then
  end
  platformId.id = id
  platformId.name = name
  platformId.hasPassword = mapId
  platformId.language = language
  platformId.capacity = capacity
  platformId.numPlayers = numPlayers
  platformId.mapName = mapName
  platformId.allModsAvailable = hasPassword
  platformId.isLanServer = isLanServer
  platformId.isFriendServer = modTitles
  platformId.allowCrossPlay = modHashes
  platformId.platformId = allowCrossPlay
  platformId.fullness = numPlayers / capacity
  self.serversBuffer[self.serversBufferNextIndex] = platformId
  self.serversBufferNextIndex = self.serversBufferNextIndex + 1
end
function JoinGameScreen:onServerInfoEnd()
  -- TODO: structure LOP_FORNPREP (pc 6, target 12)
  self.serversBuffer[#self.serversBuffer] = nil
  -- TODO: structure LOP_FORNLOOP (pc 11, target 7)
  self.servers = self.serversBuffer
  self.isRequestPending = false
  self:updateDisplayedServers()
end
function JoinGameScreen:getServers()
  if not self.isRequestPending and not self.serverDetailsPending then
    -- if not v0.showingPasswordDialog then goto L20 end
  end
  Logging.devInfo("getServers cancel; isRequestPending=%s serverDetailsPending=%s showingPasswordDialog=%s", self.isRequestPending, self.serverDetailsPending, self.showingPasswordDialog)
  return
  masterServerAddAvailableModStart()
  local name = name:getMultiplayerMods()
  for capacity, numPlayers in ipairs(...) do
    masterServerAddAvailableMod(numPlayers.fileHash)
  end
  masterServerAddAvailableModEnd()
  self.isRequestPending = true
  masterServerRequestFilteredServers(self.selectedLanguageId, self.allowCrossPlay)
end
function JoinGameScreen.buildSortFunc(v0)
  return function(self, id)
    if self.isLanServer ~= id.isLanServer then
      if not id.isLanServer then
      end
      return name
    end
    if self.isFriendServer ~= id.isFriendServer then
      if not id.isFriendServer then
      end
      return name
    end
    if u0.sortOrder == TableHeaderElement.SORTING_ASC then
      if self[u0.sortKey] >= id[u0.sortKey] then
      end
      return true
    end
    if id[u0.sortKey] >= self[u0.sortKey] then
    end
    return true
  end
end
function JoinGameScreen:updateDisplayedServers()
  self.displayServers = {}
  for mapName, mapId in ipairs(self.servers) do
    local hasPassword = self:filterServer(mapId)
    if not hasPassword then
      continue
    end
    table.insert(self.displayServers, mapId)
  end
  numPlayers = self:buildSortFunc()
  table.sort(...)
  local isLanServer = isLanServer:getText("ui_games")
  numPlayers = string.format(...)
  language:setText(...)
  language:invalidateLayout()
  language:reloadData()
  language:setVisible(false)
  if self.isInitialLoad then
    if 0 < #self.displayServers then
      language:setFocus(self.serverList)
    else
      language:setFocus(self.mapSelectionElement)
    end
  end
  self.isInitialLoad = false
  self:updateButtons()
  if id ~= nil then
    for mapId, hasPassword in ipairs(self.displayServers) do
      if not (hasPassword.name == id) then
        continue
      end
      if not (hasPassword.mapName == name) then
        continue
      end
      break
    end
    capacity:setSelectedIndex(language)
  end
  if g_autoDevMP ~= nil then
    for mapName, mapId in ipairs(self.displayServers) do
      if not (mapId.name == g_autoDevMP.serverName) then
        continue
      end
      hasPassword:setSelectedIndex(mapName)
      self:onClickOk(true)
      return
    end
    self.refreshTimer = 2500
  end
end
function JoinGameScreen:filterServer(server)
  if self.hasNoPassword then
  end
  if not not self.isNotFull and server.numPlayers >= server.capacity then
  end
  if self.selectedMap ~= "" and server.mapName ~= self.selectedMap then
  end
  if not not self.onlyWithAllModsAvailable then
  end
  if server.language ~= self.selectedLanguageId then
  end
  if server.capacity > self.selectedMaxNumPlayers then
  end
  if self.serverName and server.name and self.serverName ~= "" then
    local modTitles = modTitles:lower()
    local modHashes = modHashes:lower()
    local isLanServer = string.find(modTitles, modHashes, 1, true)
    if isLanServer == nil then
    end
  end
  if name and language and capacity and numPlayers and mapName and mapId then
  end
  return isLanServer
end
function JoinGameScreen:onClickHeader(element)
  local sortingOrder = element:toggleSorting()
  if sortingOrder == TableHeaderElement.SORTING_OFF then
    self.sortKey = "name"
    self.sortOrder = TableHeaderElement.SORTING_ASC
  else
    self.sortKey = element.columnName
    self.sortOrder = sortingOrder
  end
  self:updateDisplayedServers()
end
function JoinGameScreen:onFocusHeader(headerElement)
  self.focusedHeaderElement = headerElement
  self:showSortButton(self.canShowSortButton)
end
function JoinGameScreen:onLeaveHeader(_)
  self.focusedHeaderElement = nil
  self:showSortButton(false)
end
function JoinGameScreen.onCreateLanguage(v0, id)
  local language = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 8, target 19)
  local isLanServer = getLanguageName(1 - 1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 9)
  id:setTexts({})
end
function JoinGameScreen:onCreateMaxNumPlayers(element)
  element:setTexts(self.maxNumPlayersStates)
end
function JoinGameScreen:onFocusGameName(element)
  self.selectedInputElement = element
  local capacity = capacity:getText("button_change")
  name:setText(...)
  name:setDisabled(false)
end
function JoinGameScreen:onLeaveGameName(element)
  self.selectedInputElement = nil
  local capacity = capacity:getText("button_start")
  name:setText(...)
  self:updateButtons()
end
function JoinGameScreen:onClickLanguage(state)
  self.selectedLanguageId = state - 1
  self.refreshTimer = JoinGameScreen.FILTER_CHANGE_REFRESH_TIME
end
function JoinGameScreen:onClickMaxNumPlayers(state)
  self.selectedMaxNumPlayers = self.maxNumPlayersNumbers[state]
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickMap(state)
  self.selectedMap = self.mapIds[self.mapSelectionElement.state]
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickPassword(element)
  local name = name:getIsChecked()
  self.hasNoPassword = name
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickCapacity(element)
  local name = name:getIsChecked()
  self.isNotFull = name
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickModsDlcs(element)
  local name = name:getIsChecked()
  self.onlyWithAllModsAvailable = name
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickAllowCrossPlay(element)
  local name = name:getIsChecked()
  self.allowCrossPlay = name
  self.refreshTimer = JoinGameScreen.FILTER_CHANGE_REFRESH_TIME
end
function JoinGameScreen:onServerNameChanged(element, text)
  self.serverName = text
  self:triggerRebuildOnFilterChange()
end
function JoinGameScreen:onClickOk(isMouseClick)
  if self.selectedInputElement ~= nil then
    name:onFocusActivate()
    return
  end
  self:saveFilterSettings()
  local language = language:superClass()
  language.onClickOk(self)
  if 0 < self.serverList.selectedIndex then
    local name = self:isSelectedServerValid()
    if name then
      name = self:getSelectedServer()
      if name ~= nil and name.allModsAvailable then
        if not name.hasPassword then
          self:startGame("", name.id)
        else
          local capacity = capacity:getTableValue("joinGame", "password")
          language = Utils.getNoNil(capacity, "")
          self.showingPasswordDialog = true
          PasswordDialog.show(self.onPasswordEntered, self, {serverId = name.id}, language)
        end
      end
    end
    if isMouseClick then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
    end
  end
end
function JoinGameScreen:onClickActivate()
  local name = name:superClass()
  name.onClickActivate(self)
  self:saveFilterSettings()
  local server = self:getSelectedServer()
  if server ~= nil and not self.serverDetailsPending then
    self.requestedDetailsServerId = server.id
    self.serverDetailsPending = true
    masterServerRequestServerDetails(server.id)
  end
end
function JoinGameScreen:onClickBack()
  g_startMissionInfo.canStart = false
  id:disconnectFromMasterServer()
  id:shutdownAll()
  self:saveFilterSettings()
  local name = name:superClass()
  return name.onClickBack(self)
end
function JoinGameScreen:onDoubleClick()
  self:onClickOk(true)
end
function JoinGameScreen:onClickSort()
  local name = name:superClass()
  local id = name.onClickMenuExtra1(self)
  if id and self.focusedHeaderElement ~= nil then
    self:onClickHeader(self.focusedHeaderElement)
  end
  return id
end
function JoinGameScreen:onInputModeChanged(inputMode)
  if not GS_IS_CONSOLE_VERSION and inputMode[1] ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  self.canShowSortButton = name
  if name and self.focusedHeaderElement == nil then
  end
  self:showSortButton(numPlayers)
end
function JoinGameScreen:getNumberOfItemsInSection(list, section)
  return #self.displayServers
end
function JoinGameScreen:populateCellForItemInSection(list, section, index, cell)
  local mapName = cell:getAttribute("iconModsMissing")
  mapName:setVisible(not self.displayServers[index].allModsAvailable)
  mapName = cell:getAttribute("iconServerPassword")
  mapName:setVisible(self.displayServers[index].hasPassword)
  mapName = cell:getAttribute("iconServerInternet")
  if not self.displayServers[index].isFriendServer then
  end
  mapName:setVisible(hasPassword)
  mapName = cell:getAttribute("iconServerLan")
  if not numPlayers.isFriendServer then
  end
  mapName:setVisible(hasPassword)
  mapName = cell:getAttribute("iconFriends")
  mapName:setVisible(numPlayers.isFriendServer)
  mapName = cell:getAttribute("iconPlatform")
  mapName:setPlatformId(numPlayers.platformId)
  mapName = cell:getAttribute("gameName")
  mapName:setText(numPlayers.name)
  mapName = cell:getAttribute("mapName")
  mapName:setText(numPlayers.mapName)
  mapName = string.format("%02d/%02d", numPlayers.numPlayers, numPlayers.capacity)
  local mapId = cell:getAttribute("players")
  mapId:setText(mapName)
  if numPlayers.numPlayers ~= numPlayers.capacity then
  end
  local hasPassword = cell:getAttribute("iconSlotsFull")
  hasPassword:setVisible(true)
  hasPassword = cell:getAttribute("iconSlotsAvailable")
  hasPassword:setVisible(not true)
  hasPassword = cell:getAttribute("language")
  local modTitles = getLanguageCode(numPlayers.language)
  modTitles = modTitles:upper()
  hasPassword:setText(...)
end
function JoinGameScreen:onListSelectionChanged(list, section, index)
  if self.displayServers[index] ~= nil then
    self.lastSelectedServerName = self.displayServers[index].name
    self.lastSelectedServerMapName = self.displayServers[index].mapName
  end
  self:updateButtons()
end
function JoinGameScreen:loadFilterSettings()
  self.settingsLoaded = true
  local language = language:getTableValue("joinGame", "hasNoPassword")
  local name = Utils.getNoNil(language, false)
  self.hasNoPassword = name
  language = language:getTableValue("joinGame", "isNotFull")
  name = Utils.getNoNil(language, false)
  self.isNotFull = name
  language = language:getTableValue("joinGame", "onlyWithAllModsAvailable")
  name = Utils.getNoNil(language, false)
  self.onlyWithAllModsAvailable = name
  language = language:getTableValue("joinGame", "allowCrossPlay")
  name = Utils.getNoNil(language, true)
  if name then
    name = getAllowCrossPlay()
  end
  self.allowCrossPlay = name
  language = language:getTableValue("joinGame", "serverName")
  name = Utils.getNoNil(language, "")
  self.serverName = name
  if g_autoDevMP ~= nil then
    self.serverName = g_autoDevMP.serverName
  end
  self.maxNumPlayersState = #self.maxNumPlayersNumbers
  name = name:getValue(GameSettings.SETTING.MP_LANGUAGE)
  self.selectedLanguageId = name
  language = math.max(self.selectedLanguageId, 0)
  local numPlayers = getNumOfLanguages()
  name = math.min(language, numPlayers - 1)
  self.selectedLanguageId = name
  name = name:getTableValue("joinGame", "mapId")
  if name ~= nil then
    for mapName, mapId in ipairs(self.mapIds) do
      if not (mapId == name) then
        continue
      end
      break
    end
  end
  language = language:getTableValue("joinGame", "capacity")
  if language ~= nil then
    for mapId, hasPassword in ipairs(self.maxNumPlayersNumbers) do
      if not (hasPassword == language) then
        continue
      end
      self.maxNumPlayersState = mapId
      break
    end
  end
  capacity = capacity:getTableValue("joinGame", "language")
  if capacity ~= nil and 0 <= capacity then
    numPlayers = getNumOfLanguages()
    if capacity < numPlayers then
      self.selectedLanguageId = capacity
    end
  end
  numPlayers:setState(id)
  self.selectedMap = self.mapIds[self.mapSelectionElement.state]
  numPlayers:setIsChecked(self.hasNoPassword)
  numPlayers:setIsChecked(self.isNotFull)
  numPlayers:setIsChecked(self.onlyWithAllModsAvailable)
  numPlayers:setIsChecked(self.allowCrossPlay)
  numPlayers:setText(self.serverName)
  numPlayers:setState(self.maxNumPlayersState)
  self.selectedMaxNumPlayers = self.maxNumPlayersNumbers[self.maxNumPlayersElement.state]
  mapName:setState(self.selectedLanguageId + 1)
end
function JoinGameScreen:saveFilterSettings()
  local numPlayers = numPlayers:getIsChecked()
  id:setTableValue(...)
  numPlayers = numPlayers:getIsChecked()
  id:setTableValue(...)
  numPlayers = numPlayers:getIsChecked()
  id:setTableValue(...)
  numPlayers = numPlayers:getIsChecked()
  id:setTableValue(...)
  id:setTableValue("joinGame", "serverName", self.serverName)
  id:setTableValue("joinGame", "language", self.selectedLanguageId)
  id:setTableValue("joinGame", "capacity", self.maxNumPlayersNumbers[self.maxNumPlayersElement.state])
  id:setTableValue("joinGame", "mapId", self.mapIds[self.mapSelectionElement.state])
  id:saveToXMLFile(g_savegameXML)
end
function JoinGameScreen:showSortButton(show)
  name:setVisible(show)
  name:invalidateLayout()
end
function JoinGameScreen:getSelectedServer()
  return self.displayServers[self.serverList.selectedIndex]
end
function JoinGameScreen:updateButtons()
  if self.startButtonElement ~= nil then
    local isValid = self:isSelectedServerValid()
    name:setDisabled(not isValid)
  end
  local capacity = self:getSelectedServer()
  if capacity ~= nil then
  end
  isValid:setDisabled(true)
end
function JoinGameScreen:isSelectedServerValid()
  local selectedServer = self:getSelectedServer()
  if selectedServer and selectedServer.allModsAvailable and selectedServer.numPlayers >= selectedServer.capacity then
  end
  return name
end
function JoinGameScreen:onPasswordEntered(password, clickOk, args)
  self.showingPasswordDialog = nil
  self.showingDeepLinkingPassword = nil
  if clickOk then
    if g_deepLinkingInfo == nil then
      capacity:setTableValue("joinGame", "password", password)
      capacity:saveToXMLFile(g_savegameXML)
    end
    for isLanServer, modTitles in ipairs(self.displayServers) do
      if not (modTitles.id == numPlayers) then
        continue
      end
      break
    end
    if capacity == nil then
      hasPassword = hasPassword:getText("ui_connectionFailed")
      isLanServer = isLanServer:getText("ui_serverWasShutdown")
      mapName = string.format(...)
      InfoDialog.show(mapName, nil, nil, DialogElement.TYPE_WARNING)
      return
    end
    self:startGame(password, capacity)
  end
end
function JoinGameScreen.startGame(v0, id, name)
  g_maxUploadRate = 30.72
  local language = FSCareerMissionInfo.new("", nil, 0)
  language:loadDefaults()
  language.playerModelIndex = g_startMissionInfo.playerModelIndex
  numPlayers:setMissionInfo(language, {serverId = name, isMultiplayer = true, isClient = true, password = id, allowOnlyFriends = false})
  numPlayers:showGui("MPLoadingScreen")
  numPlayers:startClient()
end
function JoinGameScreen:update(dt)
  local language = language:superClass()
  language.update(self, dt)
  Platform.verifyMultiplayerAvailabilityInMenu()
  if not self.requestPending and not self.serverDetailsPending and not self.showingPasswordDialog then
    self.refreshTimer = self.refreshTimer - dt
    if self.refreshTimer <= 0 then
      self.refreshTimer = JoinGameScreen.REFRESH_TIME
      self:getServers()
    end
  end
end
