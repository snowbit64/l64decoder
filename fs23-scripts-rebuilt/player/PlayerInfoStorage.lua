-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerInfoStorage = {MAX_NUM_SAVED_PLAYERS = 250, MAX_NUM_DAYS_OFFLINE = 30}
local PlayerInfoStorage_mt = Class(PlayerInfoStorage)
function PlayerInfoStorage.new(isServer, userManager, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.userManager = userManager
  v3.players = {}
  v3.playerByUniqueUserId = {}
  return v3
end
function PlayerInfoStorage.delete(v0)
end
function PlayerInfoStorage.loadFromXMLFile(v0, v1)
  local v2 = XMLFile.load("TempXML", v1)
  if v2 == nil then
    return false
  end
  v2:iterate("players.player", function(v0, v1)
    local v3 = v3:getString(v1 .. "#uniqueUserId")
    v3 = v3:getString(v1 .. "#timeLastConnected")
    if not v3 then
      v3 = getDate("%Y/%m/%d %H:%M")
    end
    v2.timeLastConnected = v3
    v3 = PlayerStyle.new()
    v2.playerStyle = v3
    v3:loadFromXMLFile(u0, v1 .. ".style")
    v3 = v3:isValid()
    if v3 then
      table.insert(u1.players, v2)
      u1.playerByUniqueUserId[v2.uniqueUserId] = v2
    end
  end)
  v2:delete()
  return true
end
function PlayerInfoStorage:saveToXMLFile(xmlFilename)
  local xmlFile = XMLFile.create("TempXML", xmlFilename, "players")
  if xmlFile == nil then
    return false
  end
  local playersToSave = table.copy(self.players)
  table.sort(playersToSave, function(self, xmlFilename)
    if xmlFilename.timeLastConnected >= self.timeLastConnected then
    end
    return true
  end)
  local v5 = getDate("%Y/%m/%d %H:%M")
  local v4, v5, v6, v7, v8 = string.match(v5, "(%d+)/(%d+)/(%d+) (%d+):(%d+)")
  local v9 = tonumber(v4)
  v9 = tonumber(v5)
  v9 = tonumber(v6)
  v9 = tonumber(v7)
  v9 = tonumber(v8)
  for v14, v15 in ipairs(playersToSave) do
    if PlayerInfoStorage.MAX_NUM_SAVED_PLAYERS <= v10 then
      local v16, v17, v18, v19, v20 = string.match(v15.timeLastConnected, "(%d+)/(%d+)/(%d+) (%d+):(%d+)")
      local v21 = tonumber(v16)
      v21 = tonumber(v17)
      v21 = tonumber(v18)
      v21 = tonumber(v19)
      v21 = tonumber(v20)
      if v21 then
        local v22 = getDateDiffSeconds(v21, v21, v21, v21, v21, 0, v4, v5, v6, v7, v8, 0)
        v21 = math.abs(...)
        if v9 < v21 then
          Logging.info("Excluded %d players from '%s': Limit reached and affected players did not join the server for more than %d days", #playersToSave - v10, xmlFilename, PlayerInfoStorage.MAX_NUM_DAYS_OFFLINE)
          break
        end
      end
    end
    v16 = string.format("players.player(%d)", v10)
    xmlFile:setString(v16 .. "#uniqueUserId", v15.uniqueUserId)
    xmlFile:setString(v16 .. "#timeLastConnected", v15.timeLastConnected)
    v17:saveToXMLFile(xmlFile, v16 .. ".style")
  end
  xmlFile:save()
  xmlFile:delete()
  return true
end
function PlayerInfoStorage:addNewPlayer(uniqueUserId, style)
  local v3 = self:hasPlayerWithUniqueUserId(uniqueUserId)
  if v3 then
    return
  end
  local v4 = PlayerStyle.new()
  v4 = getDate("%Y/%m/%d %H:%M")
  v4:copyMinimalFrom(style)
  table.insert(self.players, {uniqueUserId = uniqueUserId, playerStyle = v4, timeLastConnected = v4})
  self.playerByUniqueUserId[uniqueUserId] = {uniqueUserId = uniqueUserId, playerStyle = v4, timeLastConnected = v4}
end
function PlayerInfoStorage:hasPlayerWithUniqueUserId(uniqueUserId)
  if self.playerByUniqueUserId[uniqueUserId] == nil then
  end
  return true
end
function PlayerInfoStorage:getPlayerStyle(userId)
  local v2 = v2:getUniqueUserIdByUserId(userId)
  if v2 ~= nil and self.playerByUniqueUserId[v2] ~= nil then
    local v4 = getDate("%Y/%m/%d %H:%M")
    self.playerByUniqueUserId[v2].timeLastConnected = v4
    v4 = PlayerStyle.new()
    v4:copyMinimalFrom(self.playerByUniqueUserId[v2].playerStyle)
    return v4
  end
  return PlayerStyle.defaultStyle()
end
function PlayerInfoStorage:setPlayerStyle(userId, style)
  local v3 = v3:getUniqueUserIdByUserId(userId)
  if v3 ~= nil then
    v4:copyFrom(style)
  end
end
