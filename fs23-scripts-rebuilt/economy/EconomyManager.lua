-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EconomyManager = {}
source("dataS/scripts/economy/GreatDemandsEvent.lua")
source("dataS/scripts/economy/PricingHistoryInitialEvent.lua")
source("dataS/scripts/economy/PricingHistoryEvent.lua")
source("dataS/scripts/economy/PricingDynamics.lua")
local EconomyManager_mt = Class(EconomyManager)
EconomyManager.sendNumBits = 2
EconomyManager.MAX_GREAT_DEMANDS = 2 ^ EconomyManager.sendNumBits - 1
EconomyManager.PER_DAY_LEASING_FACTOR = 0.01
EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR = 0.021
EconomyManager.DEFAULT_LEASING_DEPOSIT_FACTOR = 0.02
EconomyManager.PRICE_DROP_MIN_PERCENT = 0.6
EconomyManager.PRICE_MULTIPLIER = {3, 1.8, 1}
EconomyManager.COST_MULTIPLIER = {0.4, 0.7, 1}
EconomyManager.LIFETIME_OPERATINGTIME_RATIO = 0.08333
EconomyManager.CONFIG_CHANGE_PRICE = 1000
EconomyManager.DIRECT_SELL_MULTIPLIER = 1.1
EconomyManager.MAX_DAILYUPKEEP_MULTIPLIER = 4
function EconomyManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.minuteUpdateInterval = 5
  v1.minuteTimer = v1.minuteUpdateInterval
  v1.showMoneyChangeNextMinute = false
  v1.greatDemandFillTypes = {}
  v1.greatDemands = {}
  v1.numberOfConcurrentDemands = EconomyManager.MAX_GREAT_DEMANDS
  v2:subscribe(MessageType.MINUTE_CHANGED, v1.minuteChanged, v1)
  v2:subscribe(MessageType.HOUR_CHANGED, v1.hourChanged, v1)
  v2:subscribe(MessageType.DAY_CHANGED, v1.dayChanged, v1)
  v2:subscribe(MessageType.PERIOD_CHANGED, v1.periodChanged, v1)
  v1.sellingStations = {}
  v1.sellingStationUpdateIndex = 1
  return v1
end
function EconomyManager:init(mission)
  -- TODO: structure LOP_FORNPREP (pc 4, target 24)
  local greatDemand = GreatDemandSpecs.new()
  greatDemand:setUpRandomDemand(true, self.greatDemands, mission)
  table.insert(self.greatDemands, greatDemand)
  -- TODO: structure LOP_FORNLOOP (pc 23, target 5)
end
function EconomyManager.delete(v0)
  v1:unsubscribeAll(v0)
end
function EconomyManager:saveToXMLFile(xmlFileHandle, key)
  local xmlFile = XMLFile.wrap(xmlFileHandle)
  xmlFile:setSortedTable(key .. ".greatDemands.greatDemand", self.greatDemands, function(self, xmlFileHandle)
    local key = key:getFillTypeNameByIndex(xmlFileHandle.fillTypeIndex)
    if key ~= nil and xmlFileHandle.sellStation.owningPlaceable.currentSavegameId ~= nil then
      v4:setInt(self .. "#placeableId", xmlFileHandle.sellStation.owningPlaceable.currentSavegameId)
      v4:setString(self .. "#fillTypeName", key)
      v4:setFloat(self .. "#demandMultiplier", xmlFileHandle.demandMultiplier)
      v4:setInt(self .. "#demandStartDay", xmlFileHandle.demandStart.day)
      v4:setInt(self .. "#demandStartHour", xmlFileHandle.demandStart.hour)
      v4:setInt(self .. "#demandDuration", xmlFileHandle.demandDuration)
      v4:setBool(self .. "#isRunning", xmlFileHandle.isRunning)
      v4:setBool(self .. "#isValid", xmlFileHandle.isValid)
    end
  end)
  local v7 = v7:getFillTypes()
  xmlFile:setSortedTable(key .. ".fillTypes.fillType", v7, function(self, xmlFileHandle)
    key:setString(self .. "#fillType", xmlFileHandle.name)
    if 0 < xmlFileHandle.totalAmount then
      key:setInt(self .. "#totalAmount", xmlFileHandle.totalAmount)
    end
    key:setSortedTable(self .. ".history.period", xmlFileHandle.economy.history, function(self, xmlFileHandle, key)
      xmlFile:setInt(self .. "#period", key)
      xmlFile:setInt(self, xmlFileHandle * 1000)
    end)
  end)
  xmlFile:delete()
end
function EconomyManager:loadFromXMLFile(xmlFileHandle, key)
  local xmlFile = XMLFile.wrap(xmlFileHandle)
  self.greatDemandToLoad = {}
  xmlFile:iterate(key .. ".greatDemands.greatDemand", function(self, xmlFileHandle)
    local key = key:getInt(xmlFileHandle .. "#placeableId")
    if key == nil then
      return
    end
    local xmlFile = xmlFile:getString(xmlFileHandle .. "#fillTypeName")
    local v4 = v4:getFillTypeByName(xmlFile)
    if v4 ~= nil then
    end
    if v5 == nil then
      return
    end
    local v7 = v7:getFloat(xmlFileHandle .. "#demandMultiplier")
    v7 = v7:getInt(xmlFileHandle .. "#demandStartDay")
    v7 = v7:getInt(xmlFileHandle .. "#demandStartHour")
    v7 = v7:getInt(xmlFileHandle .. "#demandDuration")
    v7 = v7:getBool(xmlFileHandle .. "#isRunning", false)
    v7 = v7:getBool(xmlFileHandle .. "#isValid", false)
    table.insert(u1.greatDemandToLoad, {placeableId = key, fillTypeIndex = v5, demandMultiplier = v7, day = v7, hour = v7, demandDuration = v7, isRunning = v7, isValid = v7})
  end)
  xmlFile:iterate(key .. ".fillTypes.fillType", function(self, xmlFileHandle)
    local key = key:getString(xmlFileHandle .. "#fillType")
    if key == nil then
      return
    end
    local xmlFile = xmlFile:getFillTypeByName(key)
    if xmlFile ~= nil then
      local v4 = v4:getInt(xmlFileHandle .. "#totalAmount", xmlFile.totalAmount)
      xmlFile.totalAmount = v4
      v4:iterate(xmlFileHandle .. ".history.period", function(self, xmlFileHandle)
        local key = key:getInt(xmlFileHandle .. "#period")
        if key ~= nil then
          local v5 = v5:getInt(xmlFileHandle, u1.economy.history[key])
          u1.economy.history[key] = v5 / 1000
        end
      end)
    end
  end)
  xmlFile:delete()
end
function EconomyManager:finalizeGreatDemandLoading()
  if self.greatDemandToLoad ~= nil then
    for v5, v6 in ipairs(self.greatDemandToLoad) do
      local v7 = v7:getPlaceableBySavegameId(v6.placeableId)
      if not (v7 ~= nil) then
        continue
      end
      if v7.getSellingStation ~= nil then
        local v8 = v7:getSellingStation()
        if not (v8 ~= nil) then
          continue
        end
        if not v8.getSupportsGreatDemand then
          continue
        end
        local v9 = v8:getSupportsGreatDemand(v6.fillTypeIndex)
        if not v9 then
          continue
        end
        self.greatDemands[v1].sellStation = v8
        self.greatDemands[v1].fillTypeIndex = v6.fillTypeIndex
        self.greatDemands[v1].demandMultiplier = v6.demandMultiplier
        self.greatDemands[v1].demandStart.day = v6.day
        self.greatDemands[v1].demandStart.hour = v6.hour
        self.greatDemands[v1].demandDuration = v6.demandDuration
        self.greatDemands[v1].isRunning = v6.isRunning
        self.greatDemands[v1].isValid = v6.isValid
      else
        Logging.warning("Placeable is not a selling station (%s)", v7.configFileName)
      end
    end
    self.greatDemandToLoad = nil
  end
end
function EconomyManager:addSellingStation(sellingStation)
  for v6, v7 in ipairs(self.sellingStations) do
    if not (v7.station == sellingStation) then
      continue
    end
    break
  end
  if not v2 then
    table.insert(self.sellingStations, {station = sellingStation, dt = 0, scaledDt = 0})
  end
end
function EconomyManager:removeSellingStation(sellingStation)
  for v5, v6 in ipairs(self.sellingStations) do
    if not (v6.station == sellingStation) then
      continue
    end
    table.remove(self.sellingStations, v5)
    return
  end
end
function EconomyManager:updateSellingStations(dt)
  self.sellingStationUpdateIndex = self.sellingStationUpdateIndex + 1
  if #self.sellingStations < self.sellingStationUpdateIndex then
    self.sellingStationUpdateIndex = 1
  end
  for v5, v6 in ipairs(self.sellingStations) do
    v6.dt = v6.dt + dt
    local v10 = v10:getEffectiveTimeScale()
    v6.scaledDt = v6.scaledDt + dt * v10
    if not (v5 == self.sellingStationUpdateIndex) then
      continue
    end
    v7:updateSellingStation(v6.dt, v6.scaledDt)
    v6.dt = 0
    v6.scaledDt = 0
  end
end
function EconomyManager:update(dt)
  self:updateSellingStations(dt)
end
function EconomyManager:dayChanged()
  local v1 = v1:getIsServer()
  if v1 then
    for v5, v6 in ipairs(g_farmManager.farms) do
      if not (v6.farmId ~= FarmManager.SPECTATOR_FARM_ID) then
        continue
      end
      local v9 = v6:calculateDailyLoanInterest()
      v9:addMoney(-v9, v6.farmId, MoneyType.LOAN_INTEREST, true)
      for v13, v14 in pairs(g_currentMission.leasedVehicles) do
        for v18, v19 in pairs(v14.items) do
          local v20 = v19:getOwnerFarmId()
          if not (v20 == v7) then
            continue
          end
          local v22 = v19:getPrice()
        end
      end
      if 0 < v9 then
        v10:addMoney(-v9, v7, MoneyType.LEASING_COSTS, true)
      end
      for v15, v16 in pairs(g_currentMission.ownedItems) do
        v17 = StoreItemUtil.getIsVehicle(v15)
        if v17 then
          for v20, v21 in pairs(v16.items) do
            v22 = v21:getOwnerFarmId()
            if not (v22 == v7) then
              continue
            end
            local v23 = v21:getDailyUpkeep()
          end
        else
          for v20, v21 in pairs(v16.items) do
            v22 = v21:getOwnerFarmId()
            if not (v22 == v7) then
              continue
            end
            v23 = v21:getDailyUpkeep()
          end
        end
      end
      if 0 < v10 then
        v12:addMoney(-v10, v7, MoneyType.VEHICLE_RUNNING_COSTS, true)
      end
      if not (0 < v11) then
        continue
      end
      v12:addMoney(-v11, v7, MoneyType.PROPERTY_MAINTENANCE, true)
    end
    self.showMoneyChangeNextMinute = true
  end
end
function EconomyManager:hourChanged(hour)
  local v2 = v2:getIsServer()
  if v2 then
    self:manageGreatDemands()
  end
  self:updateFillTypeHistory()
end
function EconomyManager.vehicleOperatingHourChanged(v0, v1)
  local v2 = v2:getIsServer()
  if v2 then
    v2 = v2:getItemByXMLFilename(v1.configFileName)
    local v5 = v1:getPrice()
    if 0 < v2.runningLeasingFactor * v5 then
      local v7 = v1:getOwnerFarmId()
      v4:addMoney(-(v2.runningLeasingFactor * v5), v7, MoneyType.LEASING_COSTS, true)
    end
  end
end
function EconomyManager:minuteChanged()
  if self.showMoneyChangeNextMinute then
    v1:showMoneyChange(MoneyType.LOAN_INTEREST)
    v1:showMoneyChange(MoneyType.LEASING_COSTS)
    v1:showMoneyChange(MoneyType.VEHICLE_RUNNING_COSTS)
    v1:showMoneyChange(MoneyType.PROPERTY_MAINTENANCE)
    v1:showMoneyChange(MoneyType.PROPERTY_INCOME)
    v1:showMoneyChange(MoneyType.ANIMAL_UPKEEP)
    v1:showMoneyChange(MoneyType.PRODUCTION_COSTS)
    self.showMoneyChangeNextMinute = false
  end
end
function EconomyManager:periodChanged(period)
  local v2 = v2:getIsServer()
  if v2 then
    self:sendPeriodFillTypeHistory((period - 2) % 12 + 1)
  end
end
function EconomyManager:updateGreatDemandsPDASpots()
  for v4, v5 in pairs(self.greatDemands) do
    if not v5.isValid then
      continue
    end
    if not v5.isRunning then
      continue
    end
    if not (v5.sellStation ~= nil) then
      continue
    end
    if not (v5.sellStation.mapHotspot ~= nil) then
      continue
    end
    if not not v5.sellStation.mapHotspot.isBlinking then
      continue
    end
    v7:setBlinking(true)
    v7:setPersistent(true)
  end
end
function EconomyManager:restartGreatDemands()
  self:finalizeGreatDemandLoading()
  for v4, v5 in pairs(self.greatDemands) do
    if not v5.isValid then
      continue
    end
    if not v5.isRunning then
      continue
    end
    if not (v5.sellStation ~= nil) then
      continue
    end
    local v7 = v5.sellStation:getSupportsGreatDemand(v5.fillTypeIndex)
    if not v7 then
      continue
    end
    v5.sellStation:setIsInGreatDemand(v5.fillTypeIndex, true)
    self.greatDemandFillTypes[v5.fillTypeIndex] = true
    if v5.sellStation.mapHotspot ~= nil then
      v7:setBlinking(true)
      v7:setPersistent(true)
    end
    v6:setPriceMultiplier(v5.fillTypeIndex, v5.demandMultiplier)
  end
end
function EconomyManager:manageGreatDemands()
  for v4, v5 in pairs(self.greatDemands) do
    if not v5.isValid then
      continue
    end
    if v5.isRunning then
      v5.demandDuration = v5.demandDuration - 1
      if not (v5.demandDuration <= 0) then
        continue
      end
      self:stopGreatDemand(v5)
    else
      if not not v5.isRunning then
        continue
      end
      if not (v5.demandStart.day == g_currentMission.environment.currentMonotonicDay) then
        continue
      end
      if not (v5.demandStart.hour <= g_currentMission.environment.currentHour) then
        continue
      end
      self:startGreatDemand(v5)
    end
  end
  v3 = GreatDemandsEvent.new(self.greatDemands)
  v1:broadcastEvent(...)
  for v4, v5 in pairs(self.greatDemands) do
    if v5.isValid then
      if not not v5.isRunning then
        continue
      end
      if not (v5.demandStart.day < g_currentMission.environment.currentMonotonicDay) then
        continue
      end
    end
    v5:setUpRandomDemand(true, self.greatDemands, g_currentMission)
  end
end
function EconomyManager:stopGreatDemand(greatDemand)
  greatDemand.isRunning = false
  greatDemand.isValid = false
  if greatDemand.sellStation ~= nil then
    local v3 = greatDemand.sellStation:getSupportsGreatDemand(greatDemand.fillTypeIndex)
    if v3 then
      greatDemand.sellStation:setIsInGreatDemand(greatDemand.fillTypeIndex, false)
      self.greatDemandFillTypes[greatDemand.fillTypeIndex] = nil
      if greatDemand.sellStation.mapHotspot ~= nil then
        v3:setBlinking(false)
        v3:setPersistent(false)
      end
      v2:setPriceMultiplier(greatDemand.fillTypeIndex, 1)
    end
  end
end
function EconomyManager:startGreatDemand(greatDemand)
  greatDemand.isRunning = true
  if greatDemand.sellStation ~= nil then
    local v7 = v7:getText("notification_greatDemand")
    local v8 = greatDemand.sellStation:getName()
    local v6 = string.format(...)
    v3:addSideNotification(FSBaseMission.INGAME_NOTIFICATION_GREATDEMAND, v6, 40000, GuiSoundPlayer.SOUND_SAMPLES.NOTIFICATION)
    local v3 = greatDemand.sellStation:getSupportsGreatDemand(greatDemand.fillTypeIndex)
    if v3 then
      greatDemand.sellStation:setIsInGreatDemand(greatDemand.fillTypeIndex, true)
      self.greatDemandFillTypes[greatDemand.fillTypeIndex] = true
      if greatDemand.sellStation.mapHotspot ~= nil then
        v3:setBlinking(true)
        v3:setPersistent(true)
      end
      v2:setPriceMultiplier(greatDemand.fillTypeIndex, greatDemand.demandMultiplier)
    end
  end
end
function EconomyManager:getGreatDemandById(id)
  return self.greatDemands[id]
end
function EconomyManager:getHasFillTypeGreatDemand(v1)
  if self.greatDemandFillTypes[v1] ~= true then
  end
  return true
end
function EconomyManager:getPricePerLiter(fillTypeIndex, useMultiplier)
  local v3 = v3:getFillTypeByIndex(fillTypeIndex)
  local difficultyMultiplier = EconomyManager.getPriceMultiplier()
  if useMultiplier ~= nil and not useMultiplier then
  end
  local v5, v6 = v5:getPeriodAndAlphaIntoPeriod()
  local v7 = self:getFillTypeSeasonalFactor(v3, v5, v6)
  return v3.pricePerLiter * difficultyMultiplier * v7
end
function EconomyManager:getCostPerLiter(fillTypeIndex, useMultiplier)
  local v3 = v3:getFillTypeByIndex(fillTypeIndex)
  local difficultyMultiplier = EconomyManager.getCostMultiplier()
  if useMultiplier ~= nil and not useMultiplier then
  end
  local v5, v6 = v5:getPeriodAndAlphaIntoPeriod()
  local v7 = self:getFillTypeSeasonalFactor(v3, v5, v6)
  return v3.pricePerLiter * difficultyMultiplier * v7
end
function EconomyManager.getBuyPrice(v0, v1, v2, v3)
  if v3 ~= nil then
  end
  if v2 ~= nil then
    for v9, v10 in pairs(v2) do
      if not (v1.configurations[v9] ~= nil) then
        continue
      end
      if v3 ~= nil and v3.boughtConfigurations[v9] ~= nil then
      end
      if not not v12 then
        continue
      end
    end
  end
  return v4, v5
end
function EconomyManager.getSellPrice(v0, v1)
  if v1.getSellPrice ~= nil then
    return v1:getSellPrice()
  end
  v2 = math.floor(v1.price * 0.5)
  return v2
end
function EconomyManager.getInitialLeasingPrice(v0, v1)
  return v1 * (EconomyManager.DEFAULT_LEASING_DEPOSIT_FACTOR + EconomyManager.PER_DAY_LEASING_FACTOR + EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR)
end
function EconomyManager.getPriceMultiplier(fillType, fillFormat)
  return EconomyManager.PRICE_MULTIPLIER[g_currentMission.missionInfo.economicDifficulty]
end
function EconomyManager.getCostMultiplier()
  return EconomyManager.COST_MULTIPLIER[g_currentMission.missionInfo.economicDifficulty]
end
function EconomyManager.getFillTypeSeasonalFactor(v0, v1, v2, v3)
  return MathUtil.catmullRom(v1.economy.factors[(v2 - 1 - 1) % 12 + 1], v1.economy.factors[(v2 - 1 + 0) % 12 + 1], v1.economy.factors[(v2 - 1 + 1) % 12 + 1], v1.economy.factors[(v2 - 1 + 2) % 12 + 1], v3)
end
function EconomyManager.getFillTypeHistoricPrice(v0, v1, v2)
  local v5 = EconomyManager.getPriceMultiplier()
  return v1.economy.history[v2] * v5
end
function EconomyManager:updateFillTypeHistory()
  local v3 = v3:getFillTypes()
  for v5, v6 in ipairs(...) do
    for v12, v13 in ipairs(self.sellingStations) do
      if not v13.station.acceptedFillTypes[v5] then
        continue
      end
      local v15 = v15:getEffectiveFillTypePrice(v5, ToolType.UNDEFINED)
      local v16 = EconomyManager.getPriceMultiplier()
    end
    if not (0 < v7) then
      continue
    end
    v6.economy.history[v1] = (g_currentMission.environment.currentHour * v6.economy.history[v1] + v8 / v7) / (g_currentMission.environment.currentHour + 1)
  end
end
function EconomyManager.sendPeriodFillTypeHistory(v0, v1)
  local v4 = PricingHistoryEvent.new(v1)
  v2:broadcastEvent(...)
end
