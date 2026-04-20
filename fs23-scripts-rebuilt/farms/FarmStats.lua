-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmStats = {}
local FarmStats_mt = Class(FarmStats)
FarmStats.STAT_NAMES = {"fuelUsage", "seedUsage", "sprayUsage", "traveledDistance", "workedHectares", "cultivatedHectares", "plowedHectares", "sownHectares", "sprayedHectares", "threshedHectares", "weededHectares", "harvestedGrapes", "harvestedOlives", "workedTime", "cultivatedTime", "plowedTime", "sownTime", "sprayedTime", "threshedTime", "weededTime", "baleCount", "breedCowsCount", "breedPigsCount", "breedSheepCount", "breedChickenCount", "breedHorsesCount", "revenue", "expenses", "playTime", "workersHired", "storedBales", "storedPallets", "fieldJobMissionCount", "fieldJobMissionByNPC", "transportMissionCount", "plantedTreeCount", "cutTreeCount", "woodTonsSold", "treeTypesCut", "windTurbineCount", "petDogCount", "tractorDistance", "carDistance", "truckDistance", "horseDistance", "horseJumpCount", "repairVehicleCount", "repaintVehicleCount", "soldCottonBales", "wrappedBales"}
FarmStats.HERO_STAT_NAMES = {"playTime", "moneyEarned", "traveledDistance", "completedMissions", "threshedHectares"}
function FarmStats.new()
  setmetatable({}, u0)
  for v4, v5 in pairs(FarmStats.STAT_NAMES) do
    v0.statistics[v5] = {session = 0, total = 0}
  end
  v0.statistics.treeTypesCut = "000000"
  v1 = FinanceStats.new()
  v0.finances = v1
  v0.financesHistory = {}
  v0.heroStats = {}
  for v4, v5 in pairs(FarmStats.HERO_STAT_NAMES) do
    v0.heroStats[v5] = {id = nil, value = nil, accumValue = 0}
  end
  v0.heroStatsLoaded = false
  v0.moneyEarnedHeroAccum = 0
  v0.nextHeroAccumUpdate = 0
  v1 = v1:getIsServer()
  if v1 then
    v1:addUpdateable(v0)
  end
  v0.financesVersionCounter = 0
  v0.financesHistoryVersionCounter = 0
  v0.financesHistoryVersionCounterLocal = 0
  v0.updatePlayTime = true
  return v0
end
function FarmStats.delete(v0)
  v1:removeUpdateable(v0)
end
function FarmStats:saveToXMLFile(xmlFile, key)
  xmlFile:setFloat(key .. ".statistics.traveledDistance", self.statistics.traveledDistance.total)
  xmlFile:setFloat(key .. ".statistics.fuelUsage", self.statistics.fuelUsage.total)
  xmlFile:setFloat(key .. ".statistics.seedUsage", self.statistics.seedUsage.total)
  xmlFile:setFloat(key .. ".statistics.sprayUsage", self.statistics.sprayUsage.total)
  xmlFile:setFloat(key .. ".statistics.workedHectares", self.statistics.workedHectares.total)
  xmlFile:setFloat(key .. ".statistics.cultivatedHectares", self.statistics.cultivatedHectares.total)
  xmlFile:setFloat(key .. ".statistics.sownHectares", self.statistics.sownHectares.total)
  xmlFile:setFloat(key .. ".statistics.sprayedHectares", self.statistics.sprayedHectares.total)
  xmlFile:setFloat(key .. ".statistics.threshedHectares", self.statistics.threshedHectares.total)
  xmlFile:setFloat(key .. ".statistics.plowedHectares", self.statistics.plowedHectares.total)
  xmlFile:setFloat(key .. ".statistics.harvestedGrapes", self.statistics.harvestedGrapes.total)
  xmlFile:setFloat(key .. ".statistics.harvestedOlives", self.statistics.harvestedOlives.total)
  xmlFile:setFloat(key .. ".statistics.workedTime", self.statistics.workedTime.total)
  xmlFile:setFloat(key .. ".statistics.cultivatedTime", self.statistics.cultivatedTime.total)
  xmlFile:setFloat(key .. ".statistics.sownTime", self.statistics.sownTime.total)
  xmlFile:setFloat(key .. ".statistics.sprayedTime", self.statistics.sprayedTime.total)
  xmlFile:setFloat(key .. ".statistics.threshedTime", self.statistics.threshedTime.total)
  xmlFile:setFloat(key .. ".statistics.plowedTime", self.statistics.plowedTime.total)
  xmlFile:setInt(key .. ".statistics.baleCount", self.statistics.baleCount.total)
  xmlFile:setInt(key .. ".statistics.breedCowsCount", self.statistics.breedCowsCount.total)
  xmlFile:setInt(key .. ".statistics.breedSheepCount", self.statistics.breedSheepCount.total)
  xmlFile:setInt(key .. ".statistics.breedPigsCount", self.statistics.breedPigsCount.total)
  xmlFile:setInt(key .. ".statistics.breedChickenCount", self.statistics.breedChickenCount.total)
  xmlFile:setInt(key .. ".statistics.breedHorsesCount", self.statistics.breedHorsesCount.total)
  xmlFile:setInt(key .. ".statistics.fieldJobMissionCount", self.statistics.fieldJobMissionCount.total)
  xmlFile:setInt(key .. ".statistics.fieldJobMissionByNPC", self.statistics.fieldJobMissionByNPC.total)
  xmlFile:setInt(key .. ".statistics.transportMissionCount", self.statistics.transportMissionCount.total)
  xmlFile:setFloat(key .. ".statistics.revenue", self.statistics.revenue.total)
  xmlFile:setFloat(key .. ".statistics.expenses", self.statistics.expenses.total)
  xmlFile:setFloat(key .. ".statistics.playTime", self.statistics.playTime.total)
  xmlFile:setInt(key .. ".statistics.plantedTreeCount", self.statistics.plantedTreeCount.total)
  xmlFile:setInt(key .. ".statistics.cutTreeCount", self.statistics.cutTreeCount.total)
  xmlFile:setFloat(key .. ".statistics.woodTonsSold", self.statistics.woodTonsSold.total)
  xmlFile:setString(key .. ".statistics.treeTypesCut", self.statistics.treeTypesCut)
  xmlFile:setInt(key .. ".statistics.petDogCount", self.statistics.petDogCount.total)
  xmlFile:setInt(key .. ".statistics.repairVehicleCount", self.statistics.repairVehicleCount.total)
  xmlFile:setInt(key .. ".statistics.repaintVehicleCount", self.statistics.repaintVehicleCount.total)
  xmlFile:setInt(key .. ".statistics.horseJumpCount", self.statistics.horseJumpCount.total)
  xmlFile:setInt(key .. ".statistics.soldCottonBales", self.statistics.soldCottonBales.total)
  xmlFile:setInt(key .. ".statistics.wrappedBales", self.statistics.wrappedBales.total)
  xmlFile:setFloat(key .. ".statistics.tractorDistance", self.statistics.tractorDistance.total)
  xmlFile:setFloat(key .. ".statistics.carDistance", self.statistics.carDistance.total)
  xmlFile:setFloat(key .. ".statistics.truckDistance", self.statistics.truckDistance.total)
  xmlFile:setFloat(key .. ".statistics.horseDistance", self.statistics.horseDistance.total)
  -- TODO: structure LOP_FORNPREP (pc 538, target 552)
  if 3 < #self.financesHistory then
    table.insert({self.finances}, self.financesHistory[#self.financesHistory - 3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 551, target 539)
  xmlFile:setSortedTable(key .. ".finances.stats", v3, function(self, xmlFile, key)
    v3:setInt(self .. "#day", key - 1)
    xmlFile:saveToXMLFile(u0, self)
  end)
end
function FarmStats:loadFromXMLFile(xmlFile, rootKey)
  local v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".traveledDistance", 0)
  self.statistics.traveledDistance.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".fuelUsage", 0)
  self.statistics.fuelUsage.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".seedUsage", 0)
  self.statistics.seedUsage.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".sprayUsage", 0)
  self.statistics.sprayUsage.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".workedHectares", 0)
  self.statistics.workedHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".cultivatedHectares", 0)
  self.statistics.cultivatedHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".sownHectares", 0)
  self.statistics.sownHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".sprayedHectares", 0)
  self.statistics.sprayedHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".threshedHectares", 0)
  self.statistics.threshedHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".weededHectares", 0)
  self.statistics.weededHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".plowedHectares", 0)
  self.statistics.plowedHectares.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".harvestedGrapes", 0)
  self.statistics.harvestedGrapes.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".harvestedOlives", 0)
  self.statistics.harvestedOlives.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".workedTime", 0)
  self.statistics.workedTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".cultivatedTime", 0)
  self.statistics.cultivatedTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".sownTime", 0)
  self.statistics.sownTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".sprayedTime", 0)
  self.statistics.sprayedTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".threshedTime", 0)
  self.statistics.threshedTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".weededTime", 0)
  self.statistics.weededTime.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".plowedTime", 0)
  self.statistics.plowedTime.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".baleCount", 0)
  self.statistics.baleCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".breedCowsCount", 0)
  self.statistics.breedCowsCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".breedSheepCount", 0)
  self.statistics.breedSheepCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".breedPigsCount", 0)
  self.statistics.breedPigsCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".breedChickenCount", 0)
  self.statistics.breedChickenCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".breedHorsesCount", 0)
  self.statistics.breedHorsesCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".fieldJobMissionCount", 0)
  self.statistics.fieldJobMissionCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".fieldJobMissionByNPC", 0)
  self.statistics.fieldJobMissionByNPC.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".transportMissionCount", 0)
  self.statistics.transportMissionCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".plantedTreeCount", 0)
  self.statistics.plantedTreeCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".cutTreeCount", 0)
  self.statistics.cutTreeCount.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".woodTonsSold", 0)
  self.statistics.woodTonsSold.total = v5
  v5 = xmlFile:getString(rootKey .. ".statistics" .. ".treeTypesCut", "000000")
  self.statistics.treeTypesCut = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".revenue", 0)
  self.statistics.revenue.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".expenses", 0)
  self.statistics.expenses.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".playTime", 0)
  self.statistics.playTime.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".petDogCount", 0)
  self.statistics.petDogCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".repaintVehicleCount", 0)
  self.statistics.repaintVehicleCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".repairVehicleCount", 0)
  self.statistics.repairVehicleCount.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".tractorDistance", 0)
  self.statistics.tractorDistance.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".carDistance", 0)
  self.statistics.carDistance.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".truckDistance", 0)
  self.statistics.truckDistance.total = v5
  v5 = xmlFile:getFloat(rootKey .. ".statistics" .. ".horseDistance", 0)
  self.statistics.horseDistance.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".horseJumpCount", 0)
  self.statistics.horseJumpCount.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".soldCottonBales", 0)
  self.statistics.soldCottonBales.total = v5
  v5 = xmlFile:getInt(rootKey .. ".statistics" .. ".wrappedBales", 0)
  self.statistics.wrappedBales.total = v5
  xmlFile:iterate(rootKey .. ".finances.stats", function(self, xmlFile)
    local rootKey = FinanceStats.new()
    rootKey:loadFromXMLFile(u0, xmlFile)
    if self == 1 then
      u1.finances = rootKey
      return
    end
    table.insert(u1.financesHistory, rootKey)
  end)
end
function FarmStats:update(dt)
  if not GS_PLATFORM_XBOX then
    -- if not GS_PLATFORM_GGP then goto L83 end
  end
  if not self.heroStatsLoaded then
    local v2 = areStatsAvailable()
    if v2 then
      self.heroStatsLoaded = true
      for v5, v6 in pairs(self.heroStats) do
        local v7 = statsGetIndex(v5)
        v6.id = v7
        v7 = statsGet(v6.id)
        v6.value = v7
        if not (v6.accumValue ~= 0) then
          continue
        end
        v6.value = v6.value + v6.accumValue
        statsSet(v6.id, v6.value)
        v6.accumValue = 0
      end
    end
  end
  if self.nextHeroAccumUpdate <= g_time and 0 < self.moneyEarnedHeroAccum then
    self:addValueToHeroStat("moneyEarned", self.moneyEarnedHeroAccum)
    self.moneyEarnedHeroAccum = 0
    self.nextHeroAccumUpdate = g_time + 10000
  end
  self:updateStats("playTime", dt / 60000, self.updatePlayTime)
end
function FarmStats:addValueToHeroStat(name, value)
  if self.heroStatsLoaded then
    self.heroStats[name].value = self.heroStats[name].value + value
    statsSet(self.heroStats[name].id, self.heroStats[name].value)
    return
  end
  v3.accumValue = v3.accumValue + value
end
function FarmStats:changeFinanceStats(amount, statType)
  if statType ~= nil and self.finances[statType] ~= nil then
    self.finances[statType] = self.finances[statType] + amount
    local v3 = v3:getIsServer()
    if v3 then
      self.financesVersionCounter = self.financesVersionCounter + 1
      if 999999 < self.financesVersionCounter then
        self.financesVersionCounter = 0
      end
    end
  end
end
function FarmStats:archiveFinances()
  local v1 = v1:getIsServer()
  if v1 then
    table.insert(self.financesHistory, self.finances)
    v1 = FinanceStats.new()
    self.finances = v1
    self.financesVersionCounter = self.financesVersionCounter + 1
    if 999999 < self.financesVersionCounter then
      self.financesVersionCounter = 0
    end
    self.financesHistoryVersionCounter = self.financesHistoryVersionCounter + 1
    if 127 < self.financesHistoryVersionCounter then
      self.financesHistoryVersionCounter = 0
    end
  end
end
function FarmStats:getCompletedFieldMissions()
  return self:getTotalValue("fieldJobMissionCount")
end
function FarmStats:getCompletedFieldMissionsSession()
  return self:getSessionValue("fieldJobMissionCount")
end
function FarmStats:getCompletedTransportMissions()
  return self:getTotalValue("transportMissionCount")
end
function FarmStats:getCompletedTransportMissionsSession()
  return self:getSessionValue("transportMissionCount")
end
function FarmStats:getCompletedMissions()
  local v2 = self:getTotalValue("fieldJobMissionCount")
  local v3 = self:getTotalValue("transportMissionCount")
  return v2 + v3
end
function FarmStats:getCompletedMissionsSession()
  local v2 = self:getSessionValue("fieldJobMissionCount")
  local v3 = self:getSessionValue("transportMissionCount")
  return v2 + v3
end
function FarmStats:updateStats(statName, delta, ignoreHeroStats)
  if delta == nil then
    printCallstack()
  end
  if self.statistics[statName] ~= nil then
    self.statistics[statName].session = self.statistics[statName].session + delta
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L59
    self.statistics[statName].total = self.statistics[statName].total + delta
  else
    print("Error: Invalid statistic '" .. statName .. "'")
  end
  if ignoreHeroStats ~= nil then
    -- if v3 then goto L67 end
  end
  self:addHeroStat(statName, delta)
  return v4, v5
end
function FarmStats:addHeroStat(statName, delta)
  if self.heroStats[statName] ~= nil then
    if statName == "moneyEarned" then
      self.moneyEarnedHeroAccum = self.moneyEarnedHeroAccum + delta
      return
    end
    self:addValueToHeroStat(statName, delta)
    return
  end
  if statName ~= "fieldJobMissionCount" then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000005 -> L28
  end
  self:addValueToHeroStat("completedMissions", delta)
end
function FarmStats:getTotalValue(statName)
  if self.statistics[statName] ~= nil then
    return self.statistics[statName].total
  end
  return nil
end
function FarmStats:getSessionValue(statName)
  if self.statistics[statName] ~= nil then
    return self.statistics[statName].session
  end
  return nil
end
function FarmStats:updateTreeTypesCut(splitTypeName)
  for v6, v7 in ipairs({"oak", "birch", "maple", {"spruce", "pine"}, "poplar", "ash"}) do
    local v9 = type(v7)
    if v9 == "table" then
      for v12, v13 in pairs(v7) do
        if not (splitTypeName == v13) then
          continue
        end
      end
    elseif splitTypeName == v7 then
    end
    if not v8 then
      continue
    end
    local v14 = string.sub(self.statistics.treeTypesCut, 1, v6 - 1)
    local v16 = string.len(self.statistics.treeTypesCut)
    v13 = string.sub(...)
    self.statistics.treeTypesCut = v14 .. "1" .. v13
  end
end
function FarmStats:updateFieldJobsDone(npcIndex)
  self:updateStats("fieldJobMissionCount", 1)
  local v4 = bitOR(self.statistics.fieldJobMissionByNPC.total, 2 ^ npcIndex)
  self.statistics.fieldJobMissionByNPC.total = v4
  self:updateJobAchievements()
end
function FarmStats:updateTransportJobsDone()
  self:updateStats("transportMissionCount", 1)
  self:updateJobAchievements()
end
function FarmStats:updateJobAchievements()
  local v2 = self:getTotalValue("fieldJobMissionCount")
  local v3 = self:getTotalValue("transportMissionCount")
  v2:tryUnlock("MissionFirst", v2 + v3)
  v2:tryUnlock("Mission", v2 + v3)
end
function FarmStats:getStatisticData()
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    -- if g_currentMission.missionDynamicInfo.isClient then goto L641 end
  end
  local v4 = v4:getAreaUnit(false)
  local v7 = self:getSessionValue("workedHectares")
  local v5 = v5:getArea(...)
  local v8 = self:getTotalValue("workedHectares")
  local v6 = v6:getArea(...)
  self:addStatistic("workedHectares", v4, v5, v6, "%.2f")
  v4 = v4:getAreaUnit(false)
  v7 = self:getSessionValue("cultivatedHectares")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("cultivatedHectares")
  v6 = v6:getArea(...)
  self:addStatistic("cultivatedHectares", v4, v5, v6, "%.2f")
  v4 = v4:getAreaUnit(false)
  v7 = self:getSessionValue("plowedHectares")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("plowedHectares")
  v6 = v6:getArea(...)
  self:addStatistic("plowedHectares", v4, v5, v6, "%.2f")
  v4 = v4:getAreaUnit(false)
  v7 = self:getSessionValue("sownHectares")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("sownHectares")
  v6 = v6:getArea(...)
  self:addStatistic("sownHectares", v4, v5, v6, "%.2f")
  v4 = v4:getAreaUnit(false)
  v7 = self:getSessionValue("sprayedHectares")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("sprayedHectares")
  v6 = v6:getArea(...)
  self:addStatistic("sprayedHectares", v4, v5, v6, "%.2f")
  v4 = v4:getAreaUnit(false)
  v7 = self:getSessionValue("threshedHectares")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("threshedHectares")
  v6 = v6:getArea(...)
  self:addStatistic("threshedHectares", v4, v5, v6, "%.2f")
  v7 = self:getSessionValue("harvestedOlives")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("harvestedOlives")
  v6 = v6:getArea(...)
  self:addStatistic("harvestedOlives", "m", v5, v6, "%.1f")
  v7 = self:getSessionValue("harvestedGrapes")
  v5 = v5:getArea(...)
  v8 = self:getTotalValue("harvestedGrapes")
  v6 = v6:getArea(...)
  self:addStatistic("harvestedGrapes", "m", v5, v6, "%.1f")
  if not GS_IS_MOBILE_VERSION then
    v6 = self:getSessionValue("workedTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("workedTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("workedTime", nil, v5, v6, "%s")
    v6 = self:getSessionValue("cultivatedTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("cultivatedTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("cultivatedTime", nil, v5, v6, "%s")
    v6 = self:getSessionValue("plowedTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("plowedTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("plowedTime", nil, v5, v6, "%s")
    v6 = self:getSessionValue("sownTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("sownTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("sownTime", nil, v5, v6, "%s")
    v6 = self:getSessionValue("sprayedTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("sprayedTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("sprayedTime", nil, v5, v6, "%s")
    v6 = self:getSessionValue("threshedTime")
    v5 = Utils.formatTime(...)
    v7 = self:getTotalValue("threshedTime")
    v6 = Utils.formatTime(...)
    self:addStatistic("threshedTime", nil, v5, v6, "%s")
  end
  v4 = v4:getMeasuringUnit()
  v7 = self:getSessionValue("traveledDistance")
  v5 = v5:getDistance(...)
  v8 = self:getTotalValue("traveledDistance")
  v6 = v6:getDistance(...)
  self:addStatistic("traveledDistance", v4, v5, v6, "%.2f")
  v4 = v4:getText("unit_liter")
  v7 = self:getSessionValue("fuelUsage")
  v5 = v5:getFluid(...)
  v8 = self:getTotalValue("fuelUsage")
  v6 = v6:getFluid(...)
  self:addStatistic("fuelUsage", v4, v5, v6, "%.2f")
  v4 = v4:getText("unit_liter")
  v7 = self:getSessionValue("seedUsage")
  v5 = v5:getFluid(...)
  v8 = self:getTotalValue("seedUsage")
  v6 = v6:getFluid(...)
  self:addStatistic("seedUsage", v4, v5, v6, "%.2f")
  v4 = v4:getText("unit_liter")
  v7 = self:getSessionValue("sprayUsage")
  v5 = v5:getFluid(...)
  v8 = self:getTotalValue("sprayUsage")
  v6 = v6:getFluid(...)
  self:addStatistic("sprayUsage", v4, v5, v6, "%.2f")
  v5 = self:getSessionValue("baleCount")
  v6 = self:getTotalValue("baleCount")
  self:addStatistic("baleCount", nil, v5, v6, "%d")
  v5 = self:getSessionValue("plantedTreeCount")
  v6 = self:getTotalValue("plantedTreeCount")
  self:addStatistic("plantedTreeCount", nil, v5, v6, "%d")
  v5 = self:getSessionValue("cutTreeCount")
  v6 = self:getTotalValue("cutTreeCount")
  self:addStatistic("cutTreeCount", nil, v5, v6, "%d")
  if not GS_IS_MOBILE_VERSION then
    v5 = self:getSessionValue("fieldJobMissionCount")
    v6 = self:getTotalValue("fieldJobMissionCount")
    self:addStatistic("fieldJobMissionCount", nil, v5, v6, "%d")
    if 0 < #g_missionManager.transportMissions then
      v5 = self:getSessionValue("transportMissionCount")
      v6 = self:getTotalValue("transportMissionCount")
      self:addStatistic("transportMissionCount", nil, v5, v6, "%d")
    end
  end
  v6 = self:getSessionValue("playTime")
  v5 = Utils.formatTime(...)
  v7 = self:getTotalValue("playTime")
  v6 = Utils.formatTime(...)
  self:addStatistic("playTime", nil, v5, v6, "%s")
  if Environment.PERIOD.MID_WINTER <= g_currentMission.environment.currentPeriod then
  end
  self:addStatistic("yearsPlayed", nil, nil, splitTypeName, "%s")
  v6 = self:getSessionValue("workersHired")
  self:addStatistic("workersHired", nil, v6, nil, "%s")
  v6 = self:getSessionValue("storedBales")
  self:addStatistic("storedBales", nil, v6, nil, "%s")
  v6 = self:getSessionValue("storedPallets")
  self:addStatistic("storedPallets", nil, v6, nil, "%s")
  local v2 = v2:getIsActive()
  if v2 then
    local v11 = v11:getTotalCollected()
    local v10 = v10:getTotalCollectable()
    self:addStatistic("collectibles", nil, nil, v11 .. " / " .. v10, "%s")
  end
  return Utils.getNoNil(self.statisticData, {})
end
function FarmStats:addStatistic(name, unit, valueSession, valueTotal, stringFormat)
  if self.statisticData == nil then
    self.statisticData = {}
    self.statisticDataRev = {}
  end
  local v6 = v6:getText("statistic_" .. name, g_currentMission.missionInfo.customEnvironment)
  if unit ~= nil then
  end
  if self.statisticDataRev[name] == nil then
    self.statisticDataRev[name] = {}
    table.insert(self.statisticData, {})
  end
  v7.name = v6
  local v10 = Utils.getNoNil(valueSession, "")
  local v8 = string.format(...)
  v7.valueSession = v8
  v10 = Utils.getNoNil(valueTotal, "")
  v8 = string.format(...)
  v7.valueTotal = v8
end
function FarmStats:merge(other)
  for v5, v6 in ipairs(FarmStats.STAT_NAMES) do
    if v6 == "treeTypesCut" then
      local v11 = string.len(self.statistics.treeTypesCut)
      -- TODO: structure LOP_FORNPREP (pc 22, target 57)
      v11 = string.sub(other.statistics.treeTypesCut, 1, 1)
      if v11 == "1" then
        local v14 = string.sub(self.statistics.treeTypesCut, 1, 1 - 1)
        local v16 = string.len(self.statistics.treeTypesCut)
        local v13 = string.sub(...)
      end
      -- TODO: structure LOP_FORNLOOP (pc 56, target 23)
      self.statistics.treeTypesCut = v7
    else
      self.statistics[v6].total = self.statistics[v6].total + other.statistics[v6].total
    end
  end
  v2:merge(other.finances)
  return self
end
