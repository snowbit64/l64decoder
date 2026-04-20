-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MasterServerConnection = {FAILED_NONE = 0, FAILED_UNKNOWN = 1, FAILED_WRONG_VERSION = 2, FAILED_MAINTENANCE = 3, FAILED_TEMPORARY_BAN = 4, FAILED_PERMANENT_BAN = 5, FAILED_CONNECTION_LOST = 6, FAILED_TEMPORARY_BAN_INVALID_MODS = 7, FAILED_CONSOLE_USER_FAILED_AUTHENTICATION = 8, FAILED_WRONG_PASSWORD = 11}
local MasterServerConnection_mt = Class(MasterServerConnection)
function MasterServerConnection.new()
  setmetatable({}, u0)
  return {lastBackServerIndex = -1, isInit = false}
end
function MasterServerConnection:setCallbackTarget(target)
  self.masterServerCallbackTarget = target
end
function MasterServerConnection:onMasterServerList(name, id)
  v3:onMasterServerList(name, id)
end
function MasterServerConnection:onMasterServerListStart(numMasterServers)
  v2:onMasterServerListStart(numMasterServers)
end
function MasterServerConnection:onMasterServerListEnd()
  v1:onMasterServerListEnd()
end
function MasterServerConnection:onConnectionReady()
  v1:onMasterServerConnectionReady()
end
function MasterServerConnection:onConnectionFailed(reason)
  v2:onMasterServerConnectionFailed(reason)
end
function MasterServerConnection:onServerInfo(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  if self.masterServerCallbackTarget.onServerInfo ~= nil then
    v13:onServerInfo(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
    return
  end
  Logging.devWarning("Warning: Callback target is missing onServerInfo")
end
function MasterServerConnection:onServerInfoStart(numServers, totalNumServers)
  if self.masterServerCallbackTarget.onServerInfoStart ~= nil then
    v3:onServerInfoStart(numServers, totalNumServers)
    return
  end
  Logging.devWarning("Warning: Callback target is missing onServerInfoStart")
end
function MasterServerConnection:onServerInfoEnd()
  if self.masterServerCallbackTarget.onServerInfoEnd ~= nil then
    v1:onServerInfoEnd()
    return
  end
  Logging.devWarning("Warning: Callback target is missing onServerInfoEnd")
end
function MasterServerConnection:onServerInfoDetails(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
  if self.masterServerCallbackTarget.onServerInfoDetails ~= nil then
    v15:onServerInfoDetails(id, name, language, capacity, numPlayers, mapName, mapId, hasPassword, isLanServer, modTitles, modHashes, allowCrossPlay, platformId, password)
    return
  end
  Logging.devWarning("Warning: Callback target is missing onServerInfoDetails")
end
function MasterServerConnection:onServerInfoDetailsFailed()
  if self.masterServerCallbackTarget.onServerInfoDetailsFailed ~= nil then
    v1:onServerInfoDetailsFailed()
    return
  end
  Logging.devWarning("Warning: Callback target is missing onServerInfoDetailsFailed")
end
function MasterServerConnection:init()
  if not self.isInit and not GS_IS_MOBILE_VERSION then
    local v3 = v3:getValue(GameSettings.SETTING.MP_LANGUAGE)
    masterServerInit(...)
    masterServerAddDlcStart()
    local v2 = v2:getMultiplayerMods()
    for v4, v5 in ipairs(...) do
      local v6 = string.endsWith(v5.modFile, "dlcDesc.xml")
      if not v6 then
        continue
      end
      masterServerAddDlc(v5.modFile)
    end
    masterServerAddDlcEnd()
    masterServerSetCallbacks("onMasterServerList", "onMasterServerListStart", "onMasterServerListEnd", "onConnectionReady", "onConnectionFailed", "onServerInfo", "onServerInfoStart", "onServerInfoEnd", "onServerInfoDetails", "onServerInfoDetailsFailed", self)
    self.isInit = true
  end
end
function MasterServerConnection:connectToMasterServerFront()
  self:init()
  self.lastBackServerIndex = -1
  if not GS_IS_MOBILE_VERSION then
    masterServerConnectFront()
  end
end
function MasterServerConnection:connectToMasterServer(index)
  self:init()
  self.lastBackServerIndex = index
  if not GS_IS_MOBILE_VERSION then
    masterServerConnectBack(index)
  end
end
function MasterServerConnection:disconnectFromMasterServer()
  if not GS_IS_MOBILE_VERSION then
    masterServerDisconnect()
  end
  self.isInit = false
end
function MasterServerConnection.reconnectToMasterServer(v0)
  if not GS_IS_MOBILE_VERSION then
    masterServerReconnect()
  end
end
