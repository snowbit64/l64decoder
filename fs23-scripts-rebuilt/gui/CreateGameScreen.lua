-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CreateGameScreen = {CONTROLS = {SETTINGS_BOX = "settingsBox", SETTINGS_BOX1 = "settingsBox1", SETTINGS_BOX2 = "settingsBox2", SETTINGS_BOX3 = "settingsBox3", SERVER_NAME_ELEMENT = "serverNameElement", PASSWORD_ELEMENT = "passwordElement", PORT_ELEMENT = "portElement", PORT_ELEMENT_BOX = "portElementBox", BANDWIDTH_ELEMENT = "bandwidthElement", USE_UPNP_ELEMENT = "useUpnpElement", USE_UPNP_ELEMENT_BOX = "useUpnpElementBox", CAPACITY_ELEMENT = "capacityElement", AUTO_ACCEPT_ELEMENT = "autoAcceptElement", ALLOW_ONLY_FRIENDS_ELEMENT = "allowOnlyFriendsElement", ALLOW_ONLY_FRIENDS_ELEMENT_BOX = "allowOnlyFriendsElementBox", ALLOW_CROSS_PLAY_ELEMENT = "allowCrossPlayElement", ALLOW_CROSS_PLAY_ELEMENT_BOX = "allowCrossPlayElementBox", MULTIPLAYER_ELEMENT = "multiplayerLanguageElement", BUTTON_BOX = "buttonBox", CHANGE_BUTTON = "changeButton"}}
local CreateGameScreen_mt = Class(CreateGameScreen, ScreenElement)
function CreateGameScreen.register()
  local v0 = CreateGameScreen.new()
  v1:loadGui("dataS/gui/CreateGameScreen.xml", "CreateGameScreen", v0)
  return v0
end
function CreateGameScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(CreateGameScreen.CONTROLS)
  if not GS_IS_CONSOLE_VERSION then
    v2.capacityTable = {"2"}
    v2.capacityNumberTable = {2}
  else
    v2.capacityTable = {"2", "3", "4", "5", "6"}
    v2.capacityNumberTable = {2, 3, 4, 5, 6}
  end
  v2.lastCheckedPort = nil
  v2.isPortTesting = false
  v2.mappedPortUDP = 0
  v2.mappedPortTCP = 0
  v2.connectionsTable = {}
  v2.connectionsInfos = {}
  if GS_PLATFORM_GGP then
    table.insert(v2.connectionsTable, "LAN (100/100 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 16, uploadRate = 1000})
    v2.dedicatedServerConnectionIndex = 1
  elseif not GS_IS_CONSOLE_VERSION then
    table.insert(v2.connectionsTable, "DSL 6000 (6/0.5 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 4, uploadRate = 50})
    table.insert(v2.connectionsTable, "DSL 16000 (16/1 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 8, uploadRate = 80})
    table.insert(v2.connectionsTable, "DSL 25 (25/5 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 10, uploadRate = 150})
    table.insert(v2.connectionsTable, "DSL 50 (50/10 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 12, uploadRate = 250})
    table.insert(v2.connectionsTable, "DSL 100 (100/20 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 16, uploadRate = 500})
    table.insert(v2.connectionsTable, "LAN (100/100 Mbit/s)")
    table.insert(v2.connectionsInfos, {maxCapacity = 16, uploadRate = 1000})
    v2.dedicatedServerConnectionIndex = #v2.connectionsTable - 1
  else
    table.insert(v2.connectionsTable, "16Mbps/1Mbps")
    table.insert(v2.connectionsInfos, {maxCapacity = g_serverMaxCapacity, uploadRate = 80})
    v2.dedicatedServerConnectionIndex = 1
  end
  v2.defaultServerName = ""
  v2.lastUserName = ""
  v2.useUpnp = false
  v2.allowOnlyFriends = false
  v2.allowCrossPlay = false
  v2.autoAccept = false
  v2.usePendingInvites = false
  local v3 = v3:getValue(GameSettings.SETTING.MP_LANGUAGE)
  v2.mpLanguage = v3
  v2.returnScreenName = "CareerScreen"
  v2.blockTime = 0
  return v2
end
function CreateGameScreen:createFromExistingGui(v1)
  local v3 = CreateGameScreen.new(nil, nil, self.startMissionInfo)
  v4:delete()
  v4:delete()
  v4:loadGui(self.xmlFilename, v1, v3)
  return v3
end
function CreateGameScreen:onCreate()
  if self.portElementBox ~= nil then
    v1:setVisible(Platform.hasNetworkSettings)
  else
    v1:setVisible(Platform.hasNetworkSettings)
  end
  if self.useUpnpElementBox ~= nil then
    v1:setVisible(Platform.hasNetworkSettings)
  else
    v1:setVisible(Platform.hasNetworkSettings)
  end
  v1:setVisible(Platform.hasNetworkSettings)
  if self.allowOnlyFriendsElementBox ~= nil then
    v1:setVisible(Platform.hasFriendFilter)
  else
    v1:setVisible(Platform.hasFriendFilter)
  end
  if self.settingsBox1 ~= nil then
    v1:invalidateLayout()
    v1:invalidateLayout()
    v1:invalidateLayout()
  else
    v1:invalidateLayout()
  end
  if GS_IS_CONSOLE_VERSION then
    v1:setVisible(true)
    v1:invalidateLayout()
  end
end
function CreateGameScreen.getDefaultServerName(v0)
  local v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  if g_languageShort == "pl" then
    local v5 = v5:getText("ui_serverNameGame")
    return v2 .. " - " .. v5
  end
  local v3 = v2:endsWith("s")
  if v3 then
    v5 = v5:getText("ui_serverNameGame")
    return v2 .. "' " .. v5
  end
  v3 = v2:endsWith("'")
  if v3 then
    v5 = v5:getText("ui_serverNameGame")
    return v2 .. "s " .. v5
  end
  v5 = v5:getText("ui_serverNameGame")
  return v2 .. "'s " .. v5
end
function CreateGameScreen:onCreateNumPlayer(element)
  self.capacityElement = element
  element:setTexts(self.capacityTable)
  local v4 = table.getn(self.capacityTable)
  element:setState(...)
end
function CreateGameScreen:onCreateBandwidth(element)
  self.bandwidthElement = element
  element:setTexts(self.connectionsTable)
end
function CreateGameScreen:onCreateMultiplayerLanguage(element)
  self.multiplayerLanguageElement = element
  local numL = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 10, target 21)
  local v9 = getLanguageName(0)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 20, target 11)
  element:setTexts({})
end
function CreateGameScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if self.allowCrossPlayElementBox ~= nil then
    local v3 = getAllowCrossPlay()
    v1:setVisible(...)
  else
    v3 = getAllowCrossPlay()
    v1:setVisible(...)
  end
  if GS_IS_CONSOLE_VERSION then
    v3 = v3:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    if self.lastUserName ~= v3 then
      v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
      self.lastUserName = v2
    end
    v2:setFocus(self.serverNameElement)
  end
  if v1 then
    v2 = v2:getTableValue("createGame", "bandwidth")
    local v6 = Utils.getNoNil(v2, 2)
    local v8 = table.getn(self.connectionsTable)
    local v5 = MathUtil.clamp(...)
    v3:setState(...)
  end
  self:fillCapacity()
  v2 = table.getn(self.capacityNumberTable)
  if v1 then
    self.settingsLoaded = true
    v3 = self:getDefaultServerName()
    self.defaultServerName = v3
    v6 = v6:getTableValue("createGame", "serverName")
    v5 = Utils.getNoNil(v6, self.defaultServerName)
    v3:setText(...)
    v6 = v6:getTableValue("createGame", "password")
    v5 = Utils.getNoNil(v6, "")
    v3:setText(...)
    local v7 = v7:getTableValue("createGame", "port")
    v8 = v8:getValue("defaultServerPort")
    v6 = Utils.getNoNil(...)
    v5 = tostring(...)
    v3:setText(...)
    local v4 = v4:getTableValue("createGame", "useUpnp")
    v3 = Utils.getNoNil(v4, false)
    self.useUpnp = v3
    v3:setIsChecked(self.useUpnp)
    v4 = v4:getTableValue("createGame", "autoAccept")
    v3 = Utils.getNoNil(v4, false)
    self.autoAccept = v3
    v3:setIsChecked(self.autoAccept)
    v4 = v4:getTableValue("createGame", "allowOnlyFriends")
    v3 = Utils.getNoNil(v4, false)
    self.allowOnlyFriends = v3
    v3:setIsChecked(self.allowOnlyFriends)
    v4 = v4:getTableValue("createGame", "allowCrossPlay")
    v3 = Utils.getNoNil(v4, false)
    if v3 then
      v3 = getAllowCrossPlay()
    end
    self.allowCrossPlay = v3
    v3:setIsChecked(self.allowCrossPlay)
    v4 = v4:getValue(GameSettings.SETTING.MP_LANGUAGE)
    v3 = Utils.getNoNil(v4, g_language)
    self.mpLanguage = v3
    v3:setState(self.mpLanguage + 1)
    v3 = v3:getTableValue("createGame", "capacity")
    if v3 ~= nil then
      v7 = table.getn(self.capacityNumberTable)
      -- TODO: structure LOP_FORNPREP (pc 288, target 297)
      if v3 == self.capacityNumberTable[1] then
      else
        -- TODO: structure LOP_FORNLOOP (pc 296, target 289)
      end
    end
  end
  v3:setState(v2)
  self.isTyping = false
  self.isPortTesting = false
end
function CreateGameScreen:onClickUseUpnp(element)
  local v2 = v2:getIsChecked()
  self.useUpnp = v2
end
function CreateGameScreen:onClickAutoAccept(element)
  local v2 = v2:getIsChecked()
  self.autoAccept = v2
end
function CreateGameScreen:onClickAllowOnlyFriends(element)
  local v2 = v2:getIsChecked()
  self.allowOnlyFriends = v2
end
function CreateGameScreen:onClickAllowCrossPlay(element)
  local v2 = v2:getIsChecked()
  self.allowCrossPlay = v2
end
function CreateGameScreen:onClickNumPlayer(state)
  self.capacity = state
end
function CreateGameScreen:onClickMultiplayerLanguage(state)
  self.mpLanguage = state - 1
  local v6 = getNumOfLanguages()
  local v2 = MathUtil.clamp(self.mpLanguage, 0, v6 - 1)
  self.mpLanguage = v2
end
function CreateGameScreen:onClickBandwidth(state)
  self:fillCapacity()
end
function CreateGameScreen:onFocus(element)
  self.currentInputElement = element
  self:showChangeButton(true)
end
function CreateGameScreen:onLeave(element)
  self.currentInputElement = nil
  self:showChangeButton(false)
end
function CreateGameScreen:onEscPressed(element)
  v2:setFocus(element)
  self.isTyping = false
  self.blockTime = self.time + 250
  v2:unsetFocus(element)
  v2:setFocus(element)
end
function CreateGameScreen:onEnterPressed(element)
  self.blockTime = self.time + 250
  self.isTyping = false
  v2:unsetFocus(element)
  v2:setFocus(element)
end
function CreateGameScreen:onEnter(element)
  self.isTyping = true
end
function CreateGameScreen:onClickActivate()
  if self.currentInputElement ~= nil then
    v1:onFocusActivate()
  end
end
function CreateGameScreen:onClickBack()
  if not self.isTyping and self.blockTime <= self.time then
    g_startMissionInfo.canStart = false
    local v2 = v2:superClass()
    v2.onClickBack(self)
  end
end
function CreateGameScreen:onClickOk()
  if not self.isTyping and self.blockTime <= self.time then
    local v2 = v2:superClass()
    v2.onClickOk(self)
    local v1 = self:verifyServerName()
    if not v1 then
      return true
    end
    v1:setValue(GameSettings.SETTING.MP_LANGUAGE, self.mpLanguage)
    v1 = self:getPort()
    v3:setTableValue("createGame", "password", self.passwordElement.text)
    v3:setTableValue("createGame", "serverName", self.serverNameElement.text)
    v3:setTableValue("createGame", "port", v1)
    v3:setTableValue("createGame", "bandwidth", self.bandwidthElement.state)
    v3:setTableValue("createGame", "capacity", self.capacityNumberTable[self.capacityElement.state])
    v3:setTableValue("createGame", "useUpnp", self.useUpnp)
    v3:setTableValue("createGame", "allowOnlyFriends", self.allowOnlyFriends)
    v3:setTableValue("createGame", "allowCrossPlay", self.allowCrossPlay)
    v3:setTableValue("createGame", "autoAccept", self.autoAccept)
    v3:saveToXMLFile(g_savegameXML)
    self.settingsLoaded = false
    if not GS_IS_CONSOLE_VERSION then
      self.missionDynamicInfo.serverPort = v1
    else
      local v4 = v4:getValue("defaultServerPort")
      self.missionDynamicInfo.serverPort = v4
    end
    self.missionDynamicInfo.isMultiplayer = true
    self.missionDynamicInfo.isClient = false
    self.missionDynamicInfo.password = self.passwordElement.text
    self.missionDynamicInfo.allowOnlyFriends = self.allowOnlyFriends
    self.missionDynamicInfo.allowCrossPlay = self.allowCrossPlay
    self.missionDynamicInfo.serverName = self.serverNameElement.text
    self.missionDynamicInfo.capacity = v2
    if not self.autoAccept and g_dedicatedServer == nil then
    end
    v3.autoAccept = v4
    g_maxUploadRate = self.connectionsInfos[self.bandwidthElement.state].uploadRate * 1024 / 1000
    if GS_IS_CONSOLE_VERSION and v2 < 5 then
      g_maxUploadRate = g_maxUploadRate * 0.9
    end
    if GS_PLATFORM_PLAYSTATION then
      local v4, v5, v6, v7 = netGetBandwidthEstimate()
      if v4 and v7 then
        g_maxUploadRate = v6 / 10 * 0.8 / 1000
        local v8 = MathUtil.clamp(g_maxUploadRate, 20, 200)
        g_maxUploadRate = v8
      end
    end
    v4:setMissionInfo(self.missionInfo, self.missionDynamicInfo)
    v4:showPortTesting()
    self:preparePortAndStartGame()
    return false
  end
  if self.currentInputElement ~= nil then
    v1:setForcePressed(false)
  end
  return true
end
function CreateGameScreen:verifyServerName()
  local v1 = v1:trim()
  local v2 = filterText(v1, false, true)
  if v1 ~= "" then
    -- if v1 == v2 then goto L39 end
  end
  if v1 == "" then
    v3:setText(self.defaultServerName)
  else
    v3:setText(v2)
    print("Warning: Gamename not allowed. Profanity text filter. Gamename adjusted")
  end
  return false
  return true
end
function CreateGameScreen:getPort()
  if not GS_IS_CONSOLE_VERSION then
    local port = tonumber(self.portElement.text)
    if port == nil then
      local v2 = v2:getValue("defaultServerPort")
    end
    local v4 = tostring(port)
    v2:setText(...)
    return port
  end
  port = port:getValue("defaultServerPort")
  return port
end
function CreateGameScreen.startGameAfterPortCheck(v0)
  v1:loadSavegameAndStart()
end
function CreateGameScreen:removePortMapping()
  if self.mappedPortUDP ~= 0 then
    upnpRemovePortMapping(self.mappedPortUDP, "UDP")
    self.mappedPortUDP = 0
  end
  if self.mappedPortTCP ~= 0 then
    upnpRemovePortMapping(self.mappedPortTCP, "TCP")
    self.mappedPortTCP = 0
  end
  self.lastCheckedPort = nil
end
function CreateGameScreen:preparePortAndStartGame()
  local v1 = self:getPort()
  if self.useUpnp then
    if self.lastCheckedPort ~= nil then
      -- if v0.lastCheckedPort == v1 then goto L103 end
    end
    self:removePortMapping()
    self.lastCheckedPort = v1
    local hasUPNPDevice = upnpDiscover(2000, "")
    if hasUPNPDevice then
      local ip = netGetDefaultLocalIp()
      upnpRemovePortMapping(v1, "UDP")
      upnpRemovePortMapping(v1, "TCP")
      local v4 = upnpAddPortMapping(v1, v1, "Farming Simulator UDP (" .. ip .. ")", "UDP")
      local v5 = upnpAddPortMapping(v1, v1, "Farming Simulator TCP (" .. ip .. ")", "TCP")
      if v4 ~= Upnp.ADD_PORT_CONFLICT then
        self.mappedPortUDP = v1
      end
      if v5 ~= Upnp.ADD_PORT_CONFLICT then
        self.mappedPortTCP = v1
      end
      if v4 ~= Upnp.ADD_PORT_SUCCESS then
        print("Warning: Failed to add UDP port mapping (" .. v1 .. "), error code: " .. v4)
      end
      -- if v5 == Upnp.ADD_PORT_SUCCESS then goto L99 end
      print("Warning: Failed to add TCP port mapping (" .. v1 .. "), error code: " .. v5)
    else
      print("Warning: No UPnP device found")
    end
    self:startGameAfterPortCheck()
    return
  end
  self:startGameAfterPortCheck()
end
function CreateGameScreen.unusedPacketReceived(v0)
end
function CreateGameScreen:onMasterServerConnectionFailed(reason)
  if self.isPortTesting then
    self.isPortTesting = false
    netShutdown(500, 0)
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(reason, "CreateGameScreen")
  end
end
function CreateGameScreen:fillCapacity()
  if g_dedicatedServer ~= nil then
  end
  self.capacityTable = {}
  self.capacityNumberTable = {}
  -- TODO: structure LOP_FORNPREP (pc 25, target 45)
  local v8 = tostring(2)
  table.insert(...)
  table.insert(self.capacityNumberTable, 2)
  -- TODO: structure LOP_FORNLOOP (pc 44, target 26)
  v4:setTexts(self.capacityTable)
  v8 = table.getn(self.capacityTable)
  local v6 = math.min(...)
  v4:setState(...)
end
function CreateGameScreen:setMissionInfo(missionInfo, missionDynamicInfo)
  self.missionInfo = missionInfo
  self.missionDynamicInfo = missionDynamicInfo
end
function CreateGameScreen.onIsUnicodeAllowed(v0, v1)
  if 48 <= v1 and v1 > 57 then
  end
  return v2
end
function CreateGameScreen:showChangeButton(show)
  local v2 = v2:getIsVisible()
  if show ~= v2 then
    v2:setVisible(show)
    v2:invalidateLayout()
  end
end
function CreateGameScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if g_dedicatedServer ~= nil then
    local v5 = tostring(g_dedicatedServer.name)
    v3:setText(...)
    v5 = tostring(g_dedicatedServer.password)
    v3:setText(...)
    v5 = tostring(g_dedicatedServer.port)
    v3:setText(...)
    v3:setIsChecked(g_dedicatedServer.useUpnp)
    v3:setIsChecked(g_dedicatedServer.crossplayAllowed)
    self.missionDynamicInfo.serverAddress = g_dedicatedServer.ip
    v3:setState(self.dedicatedServerConnectionIndex)
    hasError:setState(g_dedicatedServer.maxPlayer - g_serverMinCapacity + 1)
    self.allowCrossPlay = g_dedicatedServer.crossplayAllowed
    self.useUpnp = g_dedicatedServer.useUpnp
    local hasError = self:onClickOk()
    if hasError then
      self:onClickOk()
    end
    return
  end
  if self.currentInputElement == nil then
  end
  self:showChangeButton(true)
  if GS_PLATFORM_PLAYSTATION then
    local v2 = getMultiplayerAvailability()
    if v2 == MultiplayerAvailability.NOT_AVAILABLE then
      v2:disconnectFromMasterServer()
      v2:showGui("MainScreen")
    end
    v2 = getNetworkError()
    if v2 then
      v2:disconnectFromMasterServer()
      ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    end
  end
end
