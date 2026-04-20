-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DedicatedServer = {PAUSE_MODE_NO = 1, PAUSE_MODE_INSTANT = 2, MIN_FRAME_LIMIT = 5, MAX_FRAME_LIMIT = 60}
local DedicatedServer_mt = Class(DedicatedServer)
function DedicatedServer.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.filename = ""
  v1.name = "Farming Simulator Dedicated Game"
  v1.password = ""
  v1.savegame = 1
  v1.maxPlayer = g_serverMaxCapacity
  v1.ip = ""
  v1.port = 10823
  v1.useUpnp = true
  v1.crossplayAllowed = true
  v1.difficulty = 1
  v1.mapName = ""
  v1.mapFileName = ""
  v1.adminPassword = ""
  v1.pauseGameIfEmpty = true
  v1.mpLanguageCode = "en"
  v1.autoSaveInterval = 0
  v1.gameStatsInterval = 60
  v1.mods = {}
  v1.gameStatsPath = nil
  return v1
end
function DedicatedServer:load(filename)
  local xmlFile = XMLFile.load("DedicatedServerConfig", filename)
  if xmlFile ~= nil then
    self.filename = filename
    local v3 = xmlFile:getString("gameserver.settings" .. ".game_name", self.name)
    self.name = v3
    v3 = xmlFile:getString("gameserver.settings" .. ".game_password", self.password)
    self.password = v3
    local v4 = xmlFile:getInt("gameserver.settings" .. ".savegame_index", self.savegame)
    v3 = MathUtil.clamp(v4, 1, SavegameController.NUM_SAVEGAMES)
    self.savegame = v3
    v4 = xmlFile:getInt("gameserver.settings" .. ".max_player", self.maxPlayer)
    v3 = MathUtil.clamp(v4, g_serverMinCapacity, g_serverMaxCapacity)
    self.maxPlayer = v3
    v3 = xmlFile:getString("gameserver.settings" .. ".ip", self.ip)
    self.ip = v3
    v3 = xmlFile:getInt("gameserver.settings" .. ".port", self.port)
    self.port = v3
    v3 = xmlFile:getBool("gameserver.settings" .. ".use_upnp", self.useUpnp)
    self.useUpnp = v3
    v3 = xmlFile:getBool("gameserver.settings" .. ".crossplay_allowed", self.crossplayAllowed)
    self.crossplayAllowed = v3
    v4 = xmlFile:getInt("gameserver.settings" .. ".difficulty", self.difficulty)
    v3 = MathUtil.clamp(v4, 1, 3)
    self.difficulty = v3
    v3 = xmlFile:getString("gameserver.settings" .. ".mapID", self.mapName)
    self.mapName = v3
    v3 = xmlFile:getString("gameserver.settings" .. ".mapFilename", self.mapFileName)
    self.mapFileName = v3
    v3 = xmlFile:getString("gameserver.settings" .. ".admin_password", self.adminPassword)
    self.adminPassword = v3
    if self.adminPassword == "" then
      Logging.info("Starting dedicated server without an admin password!")
    end
    v3 = xmlFile:getString("gameserver.settings" .. ".language", self.mpLanguageCode)
    self.mpLanguageCode = v3
    v4 = xmlFile:getInt("gameserver.settings" .. ".pause_game_if_empty", DedicatedServer.PAUSE_MODE_INSTANT)
    if v4 ~= DedicatedServer.PAUSE_MODE_INSTANT then
    end
    self.pauseGameIfEmpty = true
    v4 = xmlFile:getInt("gameserver.settings" .. ".auto_save_interval", self.autoSaveInterval)
    v3 = MathUtil.clamp(v4, 0, 360)
    self.autoSaveInterval = v3
    v4 = xmlFile:getInt("gameserver.settings" .. ".stats_interval", self.gameStatsInterval)
    v3 = math.max(v4, 10)
    self.gameStatsInterval = v3
    xmlFile:iterate("gameserver.mods.mod", function(self, filename)
      local xmlFile = xmlFile:getString(filename .. "#filename")
      local v3 = v3:getBool(filename .. "#isDlc")
      if v3 and g_dlcModNameHasPrefix[xmlFile] then
      end
      table.insert(u1.mods, xmlFile)
    end)
    xmlFile:delete()
  end
  self.gameStatsInterval = self.gameStatsInterval * 1000
  v3 = string.endsWith(self.mapFileName, ".dlc")
  if v3 then
    v3 = string.startsWith(self.mapFileName, "pdlc_")
    if not v3 then
      self.mapFileName = "pdlc_" .. self.mapFileName
    end
  end
  v3 = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 257, target 276)
  local v7 = getLanguageCode(0)
  if v7 == self.mpLanguageCode then
    v7:setValue(GameSettings.SETTING.MP_LANGUAGE, 0)
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 275, target 258)
end
function DedicatedServer.lowerFramerate(v0)
  setFramerateLimiter(true, DedicatedServer.MIN_FRAME_LIMIT)
end
function DedicatedServer.raiseFramerate(v0)
  setFramerateLimiter(true, DedicatedServer.MAX_FRAME_LIMIT)
end
function DedicatedServer:updateServerInfo(serverName, password, capacity)
  if self.filename ~= nil then
    local xmlFile = XMLFile.load("DedicatedServerConfig", self.filename)
    xmlFile:setString("gameserver.settings" .. ".game_name", serverName)
    xmlFile:setString("gameserver.settings" .. ".game_password", password)
    xmlFile:setInt("gameserver.settings" .. ".max_player", capacity)
    xmlFile:save()
    xmlFile:delete()
  end
end
function DedicatedServer.start(v0)
  v1:setIsMultiplayer(true)
  v1:showGui("CareerScreen")
  v1:setValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME, "Server")
end
function DedicatedServer:setGameStatsPath(path)
  self.gameStatsPath = path
end
