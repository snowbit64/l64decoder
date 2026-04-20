-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmManager = {SPECTATOR_FARM_ID = 0, SINGLEPLAYER_FARM_ID = 1, MAX_NUM_FARMS = 8, MAX_FARM_ID = FarmManager.MAX_NUM_FARMS, SINGLEPLAYER_UUID = "player", FARM_ID_SEND_NUM_BITS = 4, INVALID_FARM_ID = FarmManager.FARM_ID_SEND_NUM_BITS ^ 2 - 1}
local FarmManager_mt = Class(FarmManager, AbstractManager)
function FarmManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function FarmManager:initDataStructures()
  self.farms = {}
  self.farmIdToFarm = {}
  self.defaultHandtools = {}
  self.spFarmWasMerged = false
  self.debug_hasAskedCreate = false
end
function FarmManager:loadMapData(xmlFile)
  local v3 = v3:superClass()
  v3.loadMapData(self)
  local v2 = v2:getIsServer()
  if v2 then
    v2:addUpdateable(self)
    if g_client == nil then
    end
    v2 = v2(v3, true, nil, true)
    v2.farmId = FarmManager.SPECTATOR_FARM_ID
    v2.isSpectator = true
    v2.stats.updatePlayTime = false
    v2:register()
    table.insert(self.farms, v2)
    self.farmIdToFarm[v2.farmId] = v2
  end
  v2 = XMLFile.wrap(xmlFile)
  v2:iterate("map.farms.defaultHandTools.handTool", function(self, xmlFile)
    local v4 = v4:getString(xmlFile .. "#filename")
    table.insert(...)
  end)
  v2:delete()
  addConsoleCommand("gsFarmSet", "Set farm for current player or vehicle", "consoleCommandSetFarm", self)
end
function FarmManager.unloadMapData(v0)
  v1:removeUpdateable(v0)
  removeConsoleCommand("gsFarmSet")
  if g_addTestCommands then
    removeConsoleCommand("debugCreateFarm")
  end
  local v2 = v2:superClass()
  v2.unloadMapData(v0)
end
function FarmManager:saveToXMLFile(xmlFilename)
  local xmlFile = XMLFile.create("farmsXML", xmlFilename, "farms")
  xmlFile:setTable("farms.farm", self.farms, function(self, xmlFilename)
    if xmlFilename.farmId == FarmManager.SPECTATOR_FARM_ID then
      return 0
    end
    xmlFilename:saveToXMLFile(u0, self)
  end)
  xmlFile:save()
  xmlFile:delete()
end
function FarmManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    self:loadDefaults()
    return false
  end
  local xmlFile = XMLFile.load("TempXML", xmlFilename)
  if xmlFile == nil then
    return false
  end
  xmlFile:iterate("farms.farm", function(self, xmlFilename)
    if g_client == nil then
    end
    local xmlFile = xmlFile(v3, true)
    local v3 = xmlFile:loadFromXMLFile(u0, xmlFilename)
    if not v3 then
      xmlFile:delete()
      return
    end
    xmlFile:register()
    table.insert(u1.farms, xmlFile)
    u1.farmIdToFarm[xmlFile.farmId] = xmlFile
  end)
  self:mergeFarmsForSingleplayer()
  local v3 = v3:getIsClient()
  if v3 then
    if g_currentMission.missionDynamicInfo.isMultiplayer then
      v3 = getUniqueUserId()
      -- if v3 then goto L43 end
    end
    local v7 = v7:getServerUserId()
    self:playerJoinedGame(...)
  end
  v3:updateFieldOwnership()
  xmlFile:delete()
  return true
end
function FarmManager:loadDefaults()
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    local v3 = v3:getText("ui_defaultFarmName")
    local v1 = self:createFarm(v3, 1)
    local v4 = v4:getServerUserId()
    v1:addUser(v4, FarmManager.SINGLEPLAYER_UUID, true)
    for v5, v6 in ipairs(self.defaultHandtools) do
      local v7 = v7:getItemByXMLFilename(v6)
      if v7 ~= nil then
        v1:addHandTool(v6)
      else
        Logging.warning("Default handtool '%s' not defined", v6)
      end
    end
  end
  v1:updateFieldOwnership()
  v3 = getUniqueUserId()
  v4 = v4:getServerUserId()
  self:playerJoinedGame(...)
end
function FarmManager:mergeFarmsForSingleplayer()
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    return
  end
  if 2 >= #self.farms then
    -- if 2 > #v0.farms then goto L99 end
    -- if v0.farms[2].farmId == FarmManager.SINGLEPLAYER_FARM_ID then goto L99 end
  end
  for v5, v6 in ipairs(self.farms) do
    if not (v6.farmId ~= FarmManager.SPECTATOR_FARM_ID) then
      continue
    end
    if not (v6.farmId ~= v1.farmId) then
      continue
    end
    v1:merge(v6)
  end
  v1.farmId = FarmManager.SINGLEPLAYER_FARM_ID
  self.farmIdToFarm = {[FarmManager.SPECTATOR_FARM_ID] = self.farmIdToFarm[FarmManager.SPECTATOR_FARM_ID], [FarmManager.SINGLEPLAYER_FARM_ID] = v1}
  self.farms = {self.farmIdToFarm[FarmManager.SPECTATOR_FARM_ID], v1}
  self.spFarmWasMerged = true
  -- goto L134  (LOP_JUMP +35)
  if #self.farms == 1 then
    v3 = v3:getText("ui_defaultFarmName")
    local v1 = self:createFarm(v3, 1)
    v4 = v4:getServerUserId()
    v1:addUser(v4, FarmManager.SINGLEPLAYER_UUID, true)
    self.farms = {v1}
  end
  v1:resetToSingleplayer()
end
function FarmManager:mergeFarmlandsForSingleplayer()
  if not g_currentMission.missionDynamicInfo.isMultiplayer and self.spFarmWasMerged then
    local v2 = v2:getFarmlands()
    for v4, v5 in pairs(...) do
      local v6 = v6:getFarmlandOwner(v5.id)
      if not (v6 ~= FarmlandManager.NO_OWNER_FARM_ID) then
        continue
      end
      v6:setLandOwnership(v5.id, FarmManager.SINGLEPLAYER_FARM_ID)
    end
  end
end
function FarmManager:mergeObjectsForSingleplayer()
  if not g_currentMission.missionDynamicInfo.isMultiplayer and self.spFarmWasMerged then
    for v4, v5 in pairs(g_currentMission.vehicles) do
      local v6 = v5:getOwnerFarmId()
      if not (v6 ~= AccessHandler.EVERYONE) then
        continue
      end
      v5:setOwnerFarmId(FarmManager.SINGLEPLAYER_FARM_ID)
    end
    for v4, v5 in pairs(g_currentMission.placeableSystem.placeables) do
      v6 = v5:getOwnerFarmId()
      if not (v6 ~= AccessHandler.EVERYONE) then
        continue
      end
      v5:setOwnerFarmId(FarmManager.SINGLEPLAYER_FARM_ID)
    end
    for v4, v5 in pairs(g_currentMission.itemSystem.itemsToSave) do
      if not (v5.getOwnerFarmId ~= nil) then
        continue
      end
      v6 = v5:getOwnerFarmId()
      if not (v6 ~= AccessHandler.EVERYONE) then
        continue
      end
      v5:setOwnerFarmId(FarmManager.SINGLEPLAYER_FARM_ID)
    end
  end
end
function FarmManager.delete(v0)
end
function FarmManager:update(dt)
  local v2 = v2:getIsClient()
  if v2 and self.spFarmWasMerged and not self.mergedMessageShown then
    local v3 = v3:getText("ui_farmedMergedSP")
    InfoDialog.show(v3, nil, nil, DialogElement.TYPE_INFO)
    self.mergedMessageShown = true
  end
end
function FarmManager:getFarmForUniqueUserId(uniqueUserId)
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    return self.farmIdToFarm[FarmManager.SINGLEPLAYER_FARM_ID]
  end
  for v5, v6 in ipairs(self.farms) do
    if not not v6.isSpectator then
      continue
    end
    if not (v6.uniqueUserIdToPlayer[uniqueUserId] ~= nil) then
      continue
    end
    return v6
  end
  return self.farmIdToFarm[FarmManager.SPECTATOR_FARM_ID]
end
function FarmManager:getFarmByUserId(userId)
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    return self.farmIdToFarm[FarmManager.SINGLEPLAYER_FARM_ID]
  end
  for v5, v6 in ipairs(self.farms) do
    if not (v6.userIdToPlayer[userId] ~= nil) then
      continue
    end
    return v6
  end
  return self.farmIdToFarm[0]
end
function FarmManager:getFarmById(farmId)
  return self.farmIdToFarm[farmId]
end
function FarmManager:getSpawnPoint(farmId)
  local farm = self:getFarmById(farmId)
  if farm == nil then
    return nil
  end
  return farm:getSpawnPoint()
end
function FarmManager:getSleepCamera(farmId)
  local farm = self:getFarmById(farmId)
  if farm == nil then
    return nil
  end
  return farm:getSleepCamera()
end
function FarmManager:updateFarms(farms, playerFarmId)
  self.farms = farms
  self.farmIdToFarm = {}
  for v6, v7 in ipairs(self.farms) do
    self.farmIdToFarm[v7.farmId] = v7
  end
end
function FarmManager:appendFarm(farm)
  if self.farmIdToFarm[farm.farmId] == nil then
    self.farmIdToFarm[farm.farmId] = farm
    table.insert(self.farms, farm)
  end
end
function FarmManager:getFarms()
  return self.farms
end
function FarmManager:onFarmObjectCreated(object)
  local v2 = v2:getIsServer()
  if not v2 then
    self:appendFarm(object)
    v2:publish(MessageType.FARM_CREATED, object.farmId)
  end
end
function FarmManager:onFarmObjectDeleted(object)
  self:removeFarm(object.farmId)
  v2:publishDelayed(MessageType.FARM_DELETED, object.farmId)
end
function FarmManager:updateFarmStats(farmId, stat, delta)
  if self.farmIdToFarm[farmId] ~= nil then
    return v5:updateStats(stat, delta)
  end
  return nil, nil
end
function FarmManager:getFarmStatValue(v1, v2)
  if self.farmIdToFarm[v1] ~= nil then
    local v4 = v4:getSessionValue(v2)
    local v5 = v5:getTotalValue(v2)
    return v4
  end
  return 0, 0
end
function FarmManager:playerJoinedGame(uniqueUserId, userId, user, connection)
  local v5 = v5:getIsServer()
  if v5 then
    v5 = self:getFarmForUniqueUserId(uniqueUserId)
    local v6 = v5:onUserJoinGame(uniqueUserId, userId, user)
    local v9 = PlayerSwitchedFarmEvent.new(FarmManager.INVALID_FARM_ID, v5.farmId, userId)
    v7:broadcastEvent(v9, nil, connection)
    -- if not v6 then goto L59 end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L59
    local v10 = PlayerPermissionsEvent.new(userId, v5.userIdToPlayer[userId].permissions, v5.userIdToPlayer[userId].isFarmManager)
    v8:broadcastEvent(v10, nil, connection)
    return
  end
  print("Error: FarmManager:playerJoinedGame() only allowed on server")
end
function FarmManager:playerQuitGame(userId)
  local v2 = v2:getIsServer()
  if v2 then
    v2 = self:getFarmByUserId(userId)
    v2:onUserQuitGame(userId)
    local v5 = PlayerSwitchedFarmEvent.new(v2.farmId, FarmManager.INVALID_FARM_ID, userId)
    v3:broadcastEvent(...)
    return
  end
  print("Error: FarmManager:playerQuitGame() only allowed on server")
end
function FarmManager.transferMoney(v0, v1, v2)
  local v3 = v3:getServerConnection()
  local v5 = TransferMoneyEvent.new(v2, v1.farmId)
  v3:sendEvent(...)
end
function FarmManager.removeUserFromFarm(v0, v1)
  local v2 = v2:getServerConnection()
  local v4 = RemovePlayerFromFarmEvent.new(v1)
  v2:sendEvent(...)
end
function FarmManager:createFarm(name, color, password, farmId)
  local v5 = v5:getIsServer()
  if not v5 then
    print("Error: FarmManager:createFarm() only allowed on server")
    return nil
  end
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    v5 = table.getn(self.farms)
    if 2 < v5 then
      return nil
    end
  end
  if g_client == nil then
  end
  v5 = v5(v6, true)
  local v6 = table.getn(self.farms)
  if v6 == FarmManager.MAX_FARM_ID + 1 then
    return nil, "Farm limit reached"
  end
  if self.farmIdToFarm[farmId] ~= nil then
  end
  if farmId == nil then
    v6 = self:findNextFarmId()
  end
  v5.farmId = farmId
  v5.name = name
  v5.color = color
  if password ~= "" then
    v5.password = password
  end
  v5:register()
  table.insert(self.farms, v5)
  self.farmIdToFarm[v5.farmId] = v5
  v6:publish(MessageType.FARM_CREATED, v5.farmId)
  return v5
end
function FarmManager:destroyFarm(farmId)
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    return
  end
  if self.farmIdToFarm[farmId] ~= nil then
    self.farmIdToFarm[farmId]:delete()
    self:removeFarm(farmId)
    -- TODO: structure LOP_FORNPREP (pc 21, target 37)
    local v7 = g_currentMission.vehicles[#g_currentMission.vehicles]:getOwnerFarmId()
    if v7 == farmId then
      v7:removeVehicle(g_currentMission.vehicles[#g_currentMission.vehicles])
    end
    -- TODO: structure LOP_FORNLOOP (pc 36, target 22)
    -- TODO: structure LOP_FORNPREP (pc 42, target 70)
    v7 = g_currentMission.placeableSystem.placeables[#g_currentMission.placeableSystem.placeables]:getOwnerFarmId()
    if v7 == farmId then
      v7 = g_currentMission.placeableSystem.placeables[#g_currentMission.placeableSystem.placeables]:getSellAction()
      if v7 == Placeable.SELL_AND_SPECTATOR_FARM then
        g_currentMission.placeableSystem.placeables[#g_currentMission.placeableSystem.placeables]:setOwnerFarmId(FarmManager.SPECTATOR_FARM_ID)
      else
        g_currentMission.placeableSystem.placeables[#g_currentMission.placeableSystem.placeables]:delete()
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 69, target 43)
    for v6, v7 in pairs(g_currentMission.itemSystem.itemsToSave) do
      if not (v7.getOwnerFarmId ~= nil) then
        continue
      end
      local v8 = v7:getOwnerFarmId()
      if not (v8 == farmId) then
        continue
      end
      v7:delete()
    end
    v3:publish(MessageType.FARM_DELETED, farmId)
  end
end
function FarmManager:removeFarm(farmId)
  self.farmIdToFarm[farmId] = nil
  for v5, v6 in ipairs(self.farms) do
    if not (v6.farmId == farmId) then
      continue
    end
    table.remove(self.farms, v5)
    return
  end
end
function FarmManager:findNextFarmId()
  -- TODO: structure LOP_FORNPREP (pc 6, target 25)
  for v8, v9 in ipairs(self.farms) do
    if not (v3 == v9.farmId) then
      continue
    end
    break
  end
  if not v4 then
    return v3
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 7)
  return nil
end
function FarmManager:consoleCommandSetFarm(farmId)
  if farmId == nil then
    if g_currentMission.controlPlayer then
      log(g_currentMission.player.farmId)
      return
    end
    local v3 = v3:getOwnerFarmId()
    log(...)
    return
  end
  local v2 = tonumber(farmId)
  if g_currentMission.controlPlayer then
    v2 = v2:getServerConnection()
    local v4 = PlayerSetFarmEvent.new(g_currentMission.player, v2)
    v2:sendEvent(...)
    return
  end
  v2 = v2:getIsServer()
  if not v2 then
    return "This command currently only works on server"
  end
  v3 = self:getFarmById(farmId)
  if v3 == nil then
    local v8 = tostring(farmId)
    return "Farm with id " .. v8 .. " does not exist."
  end
  v2:setOwnerFarmId(farmId)
end
local v1 = FarmManager.new()
g_farmManager = v1
