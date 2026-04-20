-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Farm = {MIN_LOAN = 500000, MAX_LOAN = 3000000, EQUITY_LOAN_RATIO = 0.8, LOAN_INTEREST_RATE = 0.04, MAX_NUM_SAVED_PLAYERS = 150, MAX_NUM_DAYS_OFFLINE = 30, PERMISSION = {BUY_VEHICLE = "buyVehicle", SELL_VEHICLE = "sellVehicle", BUY_PLACEABLE = "buyPlaceable", SELL_PLACEABLE = "sellPlaceable", MANAGE_CONTRACTS = "manageContracts", TRADE_ANIMALS = "tradeAnimals", CREATE_FIELDS = "createFields", LANDSCAPING = "landscaping", HIRE_ASSISTANT = "hireAssistant", RESET_VEHICLE = "resetVehicle", MANAGE_PRODUCTIONS = "manageProductions", CUT_TREES = "cutTrees", MANAGE_RIGHTS = "manageRights", TRANSFER_MONEY = "transferMoney", UPDATE_FARM = "updateFarm", MANAGE_CONTRACTING = "manageContracting"}, PERMISSIONS = {Farm.PERMISSION.BUY_VEHICLE, Farm.PERMISSION.SELL_VEHICLE, Farm.PERMISSION.BUY_PLACEABLE, Farm.PERMISSION.SELL_PLACEABLE, Farm.PERMISSION.MANAGE_CONTRACTS, Farm.PERMISSION.TRADE_ANIMALS, Farm.PERMISSION.CREATE_FIELDS, Farm.PERMISSION.LANDSCAPING, Farm.PERMISSION.HIRE_ASSISTANT, Farm.PERMISSION.RESET_VEHICLE, Farm.PERMISSION.MANAGE_PRODUCTIONS, Farm.PERMISSION.CUT_TREES, Farm.PERMISSION.MANAGE_RIGHTS, Farm.PERMISSION.TRANSFER_MONEY, Farm.PERMISSION.UPDATE_FARM, Farm.PERMISSION.MANAGE_CONTRACTING}, NO_PERMISSIONS = {}, DEFAULT_PERMISSIONS = {}, COLORS = {{1, 0.4287, 0, 1}, {1, 0.1221, 0.0003, 1}, {0.7084, 0.0203, 0.2086, 1}, {0.2541, 0.0065, 0.5089, 1}, {0.1921, 0.0976, 0.8632, 1}, {0.1248, 0.2541, 1, 1}, {0.1248, 0.9216, 1, 1}, {0.2307, 1, 0.2232, 1}}, COLOR_SEND_NUM_BITS = 4, ICON_UVS = {{330, 0, 256, 256}, {660, 0, 256, 256}, {330, 310, 256, 256}, {0, 310, 256, 256}, {660, 310, 256, 256}, {0, 620, 256, 256}, {330, 620, 256, 256}, {660, 620, 256, 256}}, COLOR_SPECTATOR = {0, 0, 0, 0}, COLOR_SINGLEPLAYER = {0.0227, 0.5346, 0.8519, 1}}
local Farm_mt = Class(Farm, Object)
InitStaticObjectClass(Farm, "Farm", ObjectIds.FARM)
function Farm.new(isServer, isClient, customMt, spectator)
  if not customMt then
  end
  local v4 = v4(v5, v6, v7)
  v4.farmId = nil
  v4.name = ""
  v4.color = 0
  v4.isSpectator = spectator or false
  v4:setInitialEconomy()
  v4.players = {}
  v4.uniqueUserIdToPlayer = {}
  v4.userIdToPlayer = {}
  v4.activeUsers = {}
  v4.contractingFor = {}
  v4.handTools = {}
  local v5 = FarmStats.new()
  v4.stats = v5
  v5:subscribe(MessageType.FARM_PROPERTY_CHANGED, v4.farmPropertyChanged, v4)
  if v4.isServer then
    v5:subscribe(MessageType.PERIOD_CHANGED, v4.periodChanged, v4)
  end
  v5 = v4:getNextDirtyFlag()
  v4.farmMoneyDirtyFlag = v5
  v4.lastMoneySent = v4.money
  return v4
end
function Farm:setInitialEconomy()
  self.loanMax = 0
  self:updateMaxLoan()
  if self.isSpectator then
    self.money = 0
    self.loan = 0
    return
  end
  self.money = g_currentMission.missionInfo.initialMoney
  self.loan = g_currentMission.missionInfo.initialLoan
  if v1 == 1 and g_addTestCommands then
    self.money = 100000000
    Logging.warning("Money Cheat active")
  end
end
function Farm.delete(v0)
  v1:unsubscribeAll(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function Farm:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getInt(key .. "#farmId")
  self.farmId = v3
  v3 = xmlFile:getString(key .. "#name")
  self.name = v3
  v3 = xmlFile:getInt(key .. "#color")
  self.color = v3
  v3 = xmlFile:getString(key .. "#password")
  self.password = v3
  v3 = xmlFile:getFloat(key .. "#loan")
  self.loan = v3
  v3 = xmlFile:getFloat(key .. "#money")
  self.money = v3
  xmlFile:iterate(key .. ".players.player", function(self, xmlFile)
    local v3 = v3:getString(xmlFile .. "#uniqueUserId")
    v3 = v3:getBool(xmlFile .. "#farmManager", false)
    v3 = v3:getString(xmlFile .. "#lastNickname", "")
    v3 = v3:getString(xmlFile .. "#timeLastConnected")
    if not v3 then
      v3 = getDate("%Y/%m/%d %H:%M")
    end
    key.timeLastConnected = v3
    key.permissions = {}
    for v6, v7 in ipairs(Farm.PERMISSIONS) do
      local v9 = v9:getBool(xmlFile .. "#" .. v7, false)
      if not v9 then
      end
      v8[v7] = v9
    end
    table.insert(u1.players, key)
    u1.uniqueUserIdToPlayer[key.uniqueUserId] = key
  end)
  xmlFile:iterate(key .. ".handTools.handTool", function(self, xmlFile)
    local v4 = v4:getString(xmlFile .. "#filename")
    local v3 = NetworkUtil.convertFromNetworkFilename(...)
    local key = HTMLUtil.decodeFromHTML(...)
    table.insert(u1.handTools, key)
  end)
  xmlFile:iterate(key .. ".contracting.farm", function(self, xmlFile)
    local key = key:getInt(xmlFile .. "#farmId")
    u1.contractingFor[key] = true
  end)
  v3:loadFromXMLFile(xmlFile, key)
  return true
end
function Farm:saveToXMLFile(xmlFile, key)
  xmlFile:setInt(key .. "#farmId", self.farmId)
  xmlFile:setString(key .. "#name", self.name)
  xmlFile:setInt(key .. "#color", self.color)
  if self.password ~= nil then
    xmlFile:setString(key .. "#password", self.password)
  end
  xmlFile:setFloat(key .. "#loan", self.loan)
  xmlFile:setFloat(key .. "#money", self.money)
  local playersToSave = table.copy(self.players)
  table.sort(playersToSave, function(self, xmlFile)
    if xmlFile.timeLastConnected >= self.timeLastConnected then
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
    local v16 = string.format("%s.players.player(%d)", key, v10)
    if Farm.MAX_NUM_SAVED_PLAYERS <= v10 then
      local v17, v18, v19, v20, v21 = string.match(v15.timeLastConnected, "(%d+)/(%d+)/(%d+) (%d+):(%d+)")
      local v22 = tonumber(v17)
      v22 = tonumber(v18)
      v22 = tonumber(v19)
      v22 = tonumber(v20)
      v22 = tonumber(v21)
      if v22 then
        local v23 = getDateDiffSeconds(v22, v22, v22, v22, v22, 0, v4, v5, v6, v7, v8, 0)
        v22 = math.abs(...)
        if v9 < v22 then
          local v25 = xmlFile:getFilename()
          Logging.info("Excluded %d players from '%s': Limit reached and affected players did not join the server for more than %d days", #playersToSave - v10, v25, Farm.MAX_NUM_DAYS_OFFLINE)
          break
        end
      end
    end
    xmlFile:setString(v16 .. "#uniqueUserId", v15.uniqueUserId)
    xmlFile:setBool(v16 .. "#farmManager", v15.isFarmManager)
    xmlFile:setString(v16 .. "#lastNickname", v15.lastNickname or "")
    xmlFile:setString(v16 .. "#timeLastConnected", v15.timeLastConnected)
    for v20, v21 in ipairs(Farm.PERMISSIONS) do
      v22 = Utils.getNoNil(v15.permissions[v21], false)
      xmlFile:setBool(v16 .. "#" .. v21, v22)
    end
  end
  xmlFile:setSortedTable(key .. ".handTools.handTool", self.handTools, function(self, xmlFile)
    local v6 = NetworkUtil.convertToNetworkFilename(xmlFile)
    local v5 = HTMLUtil.encodeToHTML(...)
    key:setString(...)
  end)
  xmlFile:setTable(key .. ".contracting.farm", self.contractingFor, function(self, xmlFile, key)
    playersToSave:setInt(self .. "#farmId", key)
  end)
  v11:saveToXMLFile(xmlFile, key)
end
function Farm:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteString(streamId, self.name)
  streamWriteUIntN(streamId, self.color, Farm.COLOR_SEND_NUM_BITS)
  streamWriteFloat32(streamId, self.money)
  streamWriteFloat32(streamId, self.loan)
  streamWriteBool(streamId, self.isSpectator)
  local numPlayers = table.getn(self.activeUsers)
  streamWriteUInt8(streamId, numPlayers)
  for v7, v8 in ipairs(self.activeUsers) do
    NetworkUtil.writeNodeObjectId(streamId, v8.userId)
    streamWriteBool(streamId, v8.isFarmManager)
    for v12, v13 in ipairs(Farm.PERMISSIONS) do
      if not v8.permissions[v13] then
      end
      v14(v15, v16)
    end
  end
  v6 = table.size(self.contractingFor)
  streamWriteUInt8(...)
  for v7, v8 in pairs(self.contractingFor) do
    streamWriteUIntN(streamId, v7, FarmManager.FARM_ID_SEND_NUM_BITS)
  end
  v6 = table.getn(self.handTools)
  streamWriteUInt8(...)
  for v7, v8 in ipairs(self.handTools) do
    v11 = NetworkUtil.convertToNetworkFilename(v8)
    streamWriteString(...)
  end
end
function Farm:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadString(streamId)
  self.name = v3
  v3 = streamReadUIntN(streamId, Farm.COLOR_SEND_NUM_BITS)
  self.color = v3
  v3 = streamReadFloat32(streamId)
  self.money = v3
  v3 = streamReadFloat32(streamId)
  self.loan = v3
  v3 = streamReadBool(streamId)
  self.isSpectator = v3
  if self.farmId == FarmManager.SPECTATOR_FARM_ID then
    self.isSpectator = true
  end
  v3 = streamReadUInt8(streamId)
  self.players = {}
  self.activeUsers = {}
  -- TODO: structure LOP_FORNPREP (pc 77, target 135)
  local v8 = NetworkUtil.readNodeObjectId(streamId)
  v8 = streamReadBool(streamId)
  for v11, v12 in ipairs(Farm.PERMISSIONS) do
    local v14 = streamReadBool(streamId)
    v7.permissions[v12] = v14
  end
  self.userIdToPlayer[v7.userId] = v7
  table.insert(self.players, v7)
  table.insert(self.activeUsers, v7)
  -- TODO: structure LOP_FORNLOOP (pc 134, target 78)
  v4 = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 142, target 154)
  v8 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.contractingFor[v8] = true
  -- TODO: structure LOP_FORNLOOP (pc 153, target 143)
  local v5 = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 161, target 178)
  v10 = streamReadString(streamId)
  v9 = NetworkUtil.convertFromNetworkFilename(...)
  table.insert(self.handTools, v9)
  -- TODO: structure LOP_FORNLOOP (pc 177, target 162)
end
function Farm:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v7 = bitAND(dirtyMask, self.farmMoneyDirtyFlag)
  if v7 == 0 then
  end
  local v4 = v4(v5, true)
  if v4 then
    streamWriteFloat32(streamId, self.money)
    self.lastMoneySent = self.money
  end
end
function Farm:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadFloat32(streamId)
    self.money = v4
    v4:publish(MessageType.MONEY_CHANGED, self.farmId, self.money)
  end
end
function Farm:merge(other)
  self.money = self.money + other.money
  self.loan = self.loan + other.loan
  v2:merge(other.stats)
end
function Farm:resetToSingleplayer()
  for v5, v6 in ipairs(Farm.PERMISSIONS) do
    v1.permissions[v6] = true
  end
  v2 = getDate("%Y/%m/%d %H:%M")
  v1.timeLastConnected = v2
  self.players = {v1}
  self.color = 1
  self.uniqueUserIdToPlayer[v1.uniqueUserId] = v1
end
function Farm:getFarmhouse()
  return v1:getFarmhouse(self.farmId)
end
function Farm:getSpawnPoint()
  if not self.isSpectator then
    local farmhouse = self:getFarmhouse()
    if farmhouse ~= nil then
      return farmhouse:getSpawnPoint()
    end
  end
  return g_mission00StartPoint
end
function Farm:getSleepCamera()
  if not self.isSpectator then
    local farmhouse = self:getFarmhouse()
    if farmhouse ~= nil then
      return farmhouse:getSleepCamera()
    end
  end
  return nil
end
function Farm:getNumActivePlayers()
  return table.getn(self.activeUsers)
end
function Farm:getNumPlayers()
  return table.getn(self.players)
end
function Farm:getActiveUsers()
  return self.activeUsers
end
function Farm:isUserFarmManager(userId)
  if self.userIdToPlayer[userId] ~= nil then
  end
  return v3
end
function Farm:getUserPermissions(userId)
  if self.userIdToPlayer[userId] ~= nil then
    -- if v0.userIdToPlayer[v1].permissions then goto L12 end
  end
  return Farm.NO_PERMISSIONS
end
function Farm:setUserPermission(userId, permission, hasPermission)
  if self.userIdToPlayer[userId] ~= nil then
    self.userIdToPlayer[userId].permissions[permission] = hasPermission
    local v5 = v5:getServerConnection()
    local v7 = PlayerPermissionsEvent.new(userId, self.userIdToPlayer[userId].permissions, self.userIdToPlayer[userId].isFarmManager)
    v5:sendEvent(...)
  end
end
function Farm:promoteUser(userId)
  if self.userIdToPlayer[userId] ~= nil then
    for v7, v8 in ipairs(Farm.PERMISSIONS) do
      v3[v8] = true
    end
    v4 = v4:getServerConnection()
    v6 = PlayerPermissionsEvent.new(userId, v3, true)
    v4:sendEvent(...)
  end
end
function Farm:demoteUser(userId)
  if self.userIdToPlayer[userId] ~= nil then
    for v7, v8 in ipairs(Farm.PERMISSIONS) do
      v3[v8] = false
    end
    v4 = v4:getServerConnection()
    v6 = PlayerPermissionsEvent.new(userId, v3, false)
    v4:sendEvent(...)
  end
end
function Farm:canBeDestroyed()
  if 0 < #self.activeUsers then
    return false, "ui_farmDeleteHasPlayers"
  end
  return true
end
function Farm:getColor()
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    if self.isSpectator then
      return Farm.COLOR_SPECTATOR
    end
    return Farm.COLORS[self.color]
  end
  return Farm.COLOR_SINGLEPLAYER
end
function Farm:getIconUVs()
  return Farm.ICON_UVS[self.color]
end
function Farm:getIsContractingFor(farmId)
  return self.contractingFor[farmId] or false
end
function Farm:setIsContractingFor(farmId, isContracting, noSendEvent)
  if not self.isServer then
    -- if not v3 then goto L42 end
  end
  if isContracting then
    self.contractingFor[farmId] = true
  else
    self.contractingFor[farmId] = nil
  end
  if self.isServer and not noSendEvent then
    local v6 = ContractingStateEvent.new(self.farmId, farmId, isContracting)
    v4:broadcastEvent(...)
  end
  v4:publish(ContractingStateEvent, self.farmId, farmId, isContracting)
  return
  if not noSendEvent then
    local v4 = v4:getServerConnection()
    v6 = ContractingStateEvent.new(self.farmId, farmId, isContracting)
    v4:sendEvent(...)
  end
end
function Farm:farmPropertyChanged(farmId)
  if farmId == self.farmId and not self.isSpectator then
    self:updateMaxLoan()
  end
end
function Farm:getEquity()
  local v2 = v2:getOwnedFarmlandIdsByFarmId(self.farmId)
  for v6, v7 in pairs(v2) do
    local v8 = v8:getFarmlandById(v7)
  end
  for v6, v7 in pairs(g_currentMission.placeables) do
    v8 = v7:getOwnerFarmId()
    if not (v8 == self.farmId) then
      continue
    end
    v8 = v7:getSellPrice()
  end
  return v1
end
function Farm:updateMaxLoan()
  local v6 = self:getEquity()
  local v2 = math.floor(Farm.EQUITY_LOAN_RATIO * v6 / 5000)
  v2 = MathUtil.clamp(v2 * 5000, Farm.MIN_LOAN, Farm.MAX_LOAN)
  self.loanMax = v2
end
function Farm:calculateDailyLoanInterest()
  return math.floor(Farm.LOAN_INTEREST_RATE / g_currentMission.environment.daysPerPeriod * Environment.PERIODS_IN_YEAR * self.loan)
end
function Farm:changeBalance(amount, moneyType)
  self.money = self.money + amount
  if moneyType ~= nil then
    -- if v2.statistic then goto L11 end
  end
  v4:changeFinanceStats(amount, nil)
  if 0 < amount then
    v4:addHeroStat("moneyEarned", amount)
  end
  local v4 = math.abs(self.lastMoneySent - self.money)
  if 1 <= v4 then
    self:raiseDirtyFlags(self.farmMoneyDirtyFlag)
    v4:publish(MessageType.MONEY_CHANGED, self.farmId, self.money)
  end
end
function Farm:addPurchasedCoins(amount)
  self.money = self.money + amount
  v2:publish(MessageType.MONEY_CHANGED, self.farmId, self.money)
end
function Farm:getBalance()
  return self.money
end
function Farm:getLoan()
  return self.loan
end
function Farm:periodChanged()
  v1:archiveFinances()
end
function Farm:getHandTools()
  return self.handTools
end
function Farm:hasHandtool(xmlFilename)
  return table.hasElement(self.handTools, xmlFilename)
end
function Farm:addHandTool(xmlFilename)
  table.addElement(self.handTools, xmlFilename)
end
function Farm:removeHandTool(xmlFilename)
  table.removeElement(self.handTools, xmlFilename)
end
function Farm:addUser(userId, uniqueUserId, isFarmManager, user)
  if g_currentMission.connectedToDedicatedServer then
    local v5 = v5:getServerUserId()
    if userId == v5 then
      return
    end
  end
  if self.userIdToPlayer[userId] ~= nil then
    return
  end
  for v9, v10 in ipairs(Farm.PERMISSIONS) do
    v5.permissions[v10] = isFarmManager
  end
  if not isFarmManager then
    for v9, v10 in pairs(Farm.DEFAULT_PERMISSIONS) do
      v5.permissions[v10] = true
    end
  end
  if self.isServer then
    v5.uniqueUserId = uniqueUserId
    v6 = getDate("%Y/%m/%d %H:%M")
    v5.timeLastConnected = v6
    self.uniqueUserIdToPlayer[uniqueUserId] = v5
  end
  table.insert(self.players, v5)
  table.insert(self.activeUsers, v5)
  self.userIdToPlayer[userId] = v5
  self:updateLastNickname(userId, user)
end
function Farm:removeUser(userId)
  if self.userIdToPlayer[userId] ~= nil then
    table.removeElement(self.players, self.userIdToPlayer[userId])
    table.removeElement(self.activeUsers, self.userIdToPlayer[userId])
    self.userIdToPlayer[userId] = nil
    if self.isServer then
      self.uniqueUserIdToPlayer[self.userIdToPlayer[userId].uniqueUserId] = nil
    end
  end
end
function Farm:onUserJoinGame(uniqueUserId, userId, user)
  if self.isSpectator and self.uniqueUserIdToPlayer[uniqueUserId] == nil then
    self:addUser(userId, uniqueUserId, nil, user)
    return true
  end
  if self.userIdToPlayer[userId] == nil then
    v4.userId = userId
    self.userIdToPlayer[userId] = v4
    self:updateLastNickname(userId, user)
    table.insert(self.activeUsers, v4)
    return true
  end
  return false
end
function Farm:onUserQuitGame(userId)
  if self.userIdToPlayer[userId] ~= nil then
    self.userIdToPlayer[userId].userId = nil
    self.userIdToPlayer[userId] = nil
    table.removeElement(self.activeUsers, self.userIdToPlayer[userId])
  end
end
function Farm:updateLastNickname(userId, user)
  if user == nil then
    local v3 = v3:getUserByUserId(userId)
  end
  if user ~= nil then
    local v4 = user:getNickname()
    self.userIdToPlayer[userId].lastNickname = v4
  end
end
