-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EsportsServerController = {}
local EsportsServerController_mt = Class(EsportsServerController)
function EsportsServerController.new()
  return setmetatable({}, u0)
end
function EsportsServerController:init()
  log("EsportsServerController:init()")
  local v3 = v3:getValue("defaultServerPort")
  v1:startupWithWorkingPort(...)
  v1:setCallbackTarget(self)
  self.numMasterServers = -1
  self.isFilteredServersRequestPending = false
  self.servers = {}
  self.currentServerIndex = -1
end
function EsportsServerController:stop()
  log("EsportsServerController:stop()")
  v1:disconnectFromMasterServer()
  v1:shutdownAll()
  self.servers = {}
end
function EsportsServerController:createMatch(v1, v2)
  log("EsportsServerController:createMatch()")
  local v3 = v3:getValue("defaultServerPort")
  if self.useUpnp then
    if self.lastCheckedPort ~= nil then
      -- if v0.lastCheckedPort == v3 then goto L106 end
    end
    self:removePortMapping()
    self.lastCheckedPort = v3
    local v4 = upnpDiscover(2000, "")
    if v4 then
      local v5 = netGetDefaultLocalIp()
      upnpRemovePortMapping(v3, "UDP")
      upnpRemovePortMapping(v3, "TCP")
      local v6 = upnpAddPortMapping(v3, v3, "Farming Simulator UDP (" .. v5 .. ")", "UDP")
      local v7 = upnpAddPortMapping(v3, v3, "Farming Simulator TCP (" .. v5 .. ")", "TCP")
      if v6 ~= Upnp.ADD_PORT_CONFLICT then
        self.mappedPortUDP = v3
      end
      if v7 ~= Upnp.ADD_PORT_CONFLICT then
        self.mappedPortTCP = v3
      end
      if v6 ~= Upnp.ADD_PORT_SUCCESS then
        print("Warning: Failed to add UDP port mapping (" .. v3 .. "), error code: " .. v6)
      end
      -- if v7 == Upnp.ADD_PORT_SUCCESS then goto L106 end
      print("Warning: Failed to add TCP port mapping (" .. v3 .. "), error code: " .. v7)
    else
      print("Warning: No UPnP device found")
    end
  end
  v2.serverPort = v3
  v2.isMultiplayer = true
  v2.isClient = false
  v2.password = ""
  v2.allowOnlyFriends = false
  v2.allowCrossPlay = true
  local v9 = math.random(65, 90)
  local v8 = string.char(...)
  v8 = math.random(65, 90)
  v7 = string.char(...)
  v2.serverName = "Bale Stacking " .. v8 .. v7
  v2.capacity = 10
  if not self.autoAccept and g_dedicatedServer == nil then
  end
  v2.autoAccept = v4
  g_maxUploadRate = 512
  v4:setMissionInfo(v1, v2)
  v4:loadSavegameAndStart()
end
function EsportsServerController.joinRandomGame(v0)
  log("EsportsServerController:joinRandomGame()")
  if g_masterServerConnection.lastBackServerIndex == -1 then
    v1:connectToMasterServerFront()
    return
  end
  v1:connectToMasterServer(0)
end
function EsportsServerController.joinServer(v0, v1, v2)
  g_maxUploadRate = 30.72
  local v3 = FSCareerMissionInfo.new("", nil, 0)
  v3:loadDefaults()
  v3.playerModelIndex = g_startMissionInfo.playerModelIndex
  v5:setMissionInfo(v3, {serverId = v2, isMultiplayer = true, isClient = true, password = v1, allowOnlyFriends = false})
  v5:showGui("MPLoadingScreen")
  v5:startClient()
end
function EsportsServerController:onMasterServerListStart(numMasterServers)
  log("EsportsServerController:onMasterServerListStart", numMasterServers)
  self.numMasterServers = numMasterServers
end
function EsportsServerController.onMasterServerList(v0, v1, v2)
  log("EsportsServerController:onMasterServerList", v1, v2)
end
function EsportsServerController:onMasterServerListEnd()
  log("EsportsServerController:onMasterServerListEnd")
  if self.numMasterServers == 1 then
    v1:disconnectFromMasterServer()
    v1:connectToMasterServer(0)
    return
  end
  log("no master servers found")
end
function EsportsServerController:onMasterServerConnectionReady()
  log("EsportsServerController:onMasterServerConnectionReady")
  if self.isFilteredServersRequestPending then
    Logging.warning("masterServerRequestFilteredServers already pending, skipping")
    return
  end
  masterServerAddAvailableModStart()
  local v1 = v1:getMods(EsportsScreen.MAP_ID_BALESTACKING)
  for v5, v6 in ipairs(v1) do
    log(v6.fileHash, v6.title)
    masterServerAddAvailableMod(v6.fileHash)
  end
  masterServerAddAvailableModEnd()
  self.isFilteredServersRequestPending = true
  v2 = v2:getValue(GameSettings.SETTING.MP_LANGUAGE)
  masterServerRequestFilteredServers(v2, true)
end
function EsportsServerController.onMasterServerConnectionFailed(v0, v1)
  log("EsportsServerController:onMasterServerConnectionFailed", v1)
  v2:disconnectFromMasterServer()
  v2:shutdownAll()
end
function EsportsServerController:onServerInfoStart(numServers, totalNumServers)
  log("EsportsServerController:onServerInfoStart", numServers, totalNumServers)
  self.servers = {}
end
function EsportsServerController:onServerInfo(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  log("EsportsServerController:onServerInfo", v1, v2, "numP", v5, "cap", v4, v6, "allModsAvail", v8)
  if not v7 and v6 == "Bale Stacking" and v8 then
    table.insert(self.servers, {id = v1, name = v2, language = v3, capacity = v4, numPlayers = v5, isLanServer = v9, isFriendServer = v10, allowCrossPlay = v11, platformId = v12, fullness = v5 / v4})
    log("adding potentially valid server", {id = v1, name = v2, language = v3, capacity = v4, numPlayers = v5, isLanServer = v9, isFriendServer = v10, allowCrossPlay = v11, platformId = v12, fullness = v5 / v4}.name, {id = v1, name = v2, language = v3, capacity = v4, numPlayers = v5, isLanServer = v9, isFriendServer = v10, allowCrossPlay = v11, platformId = v12, fullness = v5 / v4}.id)
  end
end
function EsportsServerController:onServerInfoEnd()
  log("EsportsServerController:onServerInfoEnd")
  self.isFilteredServersRequestPending = false
  if #self.servers == 0 then
    log("no matching servers found")
    v1:disconnectFromMasterServer()
    return
  end
  table.sort(self.servers, function(self, v1)
    if v1.fullness >= self.fullness then
    end
    return true
  end)
  self.currentServerIndex = 1
  self:tryJoinNextServer()
end
function EsportsServerController:tryJoinNextServer()
  if self.servers[self.currentServerIndex] ~= nil then
    Logging.devInfo("requesting server details for %s (id %d) (server %d / %d)", self.servers[self.currentServerIndex].name, self.servers[self.currentServerIndex].id, self.currentServerIndex, #self.servers)
    masterServerRequestServerDetails(self.servers[self.currentServerIndex].id)
  end
end
function EsportsServerController:onServerInfoDetails(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
  log("onServerInfoDetails", id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
  if numPlayers < capacity then
    self:joinServer("", id)
    return
  end
  if self.currentServerIndex + 1 < #self.servers then
    self.currentServerIndex = self.currentServerIndex + 1
    self:tryJoinNextServer()
    return
  end
  log("no more servers to try")
  v15:disconnectFromMasterServer()
end
function EsportsServerController:onServerInfoDetailsFailed(...)
  log(...)
  if self.currentServerIndex + 1 < #self.servers then
    self.currentServerIndex = self.currentServerIndex + 1
    self:tryJoinNextServer()
    return
  end
  log("no more servers to try")
  v1:disconnectFromMasterServer()
end
