-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SellingStation = {PRICE_FALLING = 1, PRICE_CLIMBING = 2, PRICE_GREAT_DEMAND = 5, RANDOM_DELTA_IMPACT = 0.3, PRICE_DROP_DELAY = 3600000}
local SellingStation_mt = Class(SellingStation, UnloadingStation)
InitStaticObjectClass(SellingStation, "SellingStation", ObjectIds.OBJECT_SELLING_STATION)
function SellingStation.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.lastMoneyChange = -1
  v3.incomeName = "harvestIncome"
  v3.incomeNameWool = "soldWool"
  v3.incomeNameMilk = "soldMilk"
  v3.incomeNameBale = "soldBales"
  v3.incomeNameProduct = "soldProducts"
  v3.isSellingPoint = true
  v3.storeSoldGoods = false
  v3.skipSell = false
  v3.allowMissions = true
  return v3
end
function SellingStation:load(components, xmlFile, key, customEnv, i3dMappings, rootNode)
  local v8 = v8:superClass()
  local v7 = v8.load(self, components, xmlFile, key, customEnv, i3dMappings, rootNode)
  if not v7 then
    return false
  end
  if #self.unloadTriggers == 0 then
    v7 = xmlFile:getValue(key .. "#fillTypeCategories")
    v8 = xmlFile:getValue(key .. "#fillTypes")
    if v7 ~= nil then
      local v10 = v10:getFillTypesByCategoryNames(v7, "Warning: SellingStation has invalid fillTypeCategory '%s'.")
      for v12, v13 in pairs(...) do
        self.supportedFillTypes[v13] = true
      end
    end
    if v8 ~= nil then
      v10 = v10:getFillTypesByNames(v8, "Warning: SellingStation has invalid fillType '%s'.")
      for v12, v13 in pairs(...) do
        self.supportedFillTypes[v13] = true
      end
    end
  end
  v7 = xmlFile:getValue(key .. "#incomeName", nil)
  self.fixedIncomeName = v7
  v7 = xmlFile:getValue(key .. "#appearsOnStats", false)
  self.appearsOnStats = v7
  v7 = xmlFile:getValue(key .. "#suppressWarnings", false)
  self.suppressWarnings = v7
  v7 = xmlFile:getValue(key .. "#allowMissions", true)
  self.allowMissions = v7
  v7 = xmlFile:getValue(key .. "#hasDynamic", true)
  self.hasDynamic = v7
  v7 = xmlFile:getValue(key .. "#litersForFullPriceDrop")
  if v7 ~= nil then
    self.priceDropPerLiter = (1 - EconomyManager.PRICE_DROP_MIN_PERCENT) / v7
  end
  v8 = xmlFile:getValue(key .. "#fullPriceRecoverHours")
  if v8 ~= nil then
    self.priceRecoverPerSecond = (1 - EconomyManager.PRICE_DROP_MIN_PERCENT) / v8 * 60 * 60
  else
    self.priceRecoverPerSecond = 1
  end
  self.acceptedFillTypes = {}
  self.numFillTypesForSelling = 0
  self.fillTypeSupportsGreatDemand = {}
  self.priceDropDisabled = {}
  self.originalFillTypePricesUnscaled = {}
  self.originalFillTypePrices = {}
  self.fillTypePrices = {}
  self.fillTypePriceInfo = {}
  self.fillTypePriceRandomDelta = {}
  self.priceMultipliers = {}
  self.totalReceived = {}
  self.totalPaid = {}
  self.pendingPriceDrop = {}
  self.prevFillLevel = {}
  self.prevTotalReceived = {}
  self.prevTotalPaid = {}
  self.missions = {}
  xmlFile:iterate(key .. ".fillType", function(self, components)
    local xmlFile = xmlFile:getValue(components .. "#name")
    local key = key:getFillTypeIndexByName(xmlFile)
    if key ~= nil then
      if u1.supportedFillTypes[key] ~= nil then
        local customEnv = customEnv:getValue(components .. "#priceScale", 1)
        local i3dMappings = i3dMappings:getFillTypeByIndex(key)
        local v7 = v7:getValue(components .. "#supportsGreatDemand", false)
        local v8 = v8:getValue(components .. "#disablePriceDrop", false)
        v9:addAcceptedFillType(key, i3dMappings.pricePerLiter * customEnv, v7, v8)
        return
      end
      Logging.xmlWarning(u0, "FillType '%s' is not supported by unload triggers for selling station", xmlFile)
      return
    end
    Logging.xmlWarning(u0, "Invalid fillType '%s' in '%s'", xmlFile, components)
  end)
  for v12, v13 in pairs(self.supportedFillTypes) do
    if not (self.acceptedFillTypes[v12] == nil) then
      continue
    end
    local v14 = v14:getFillTypeByIndex(v12)
    self:addAcceptedFillType(v12, v14.pricePerLiter, false, false)
  end
  if self.isServer then
    v9 = MoneyType.register("soldMaterials", "finance_other")
    self.moneyChangeType = v9
  end
  self.priceDropTimer = 0
  self.pricingDynamics = {}
  self:initPricingDynamics()
  self.priceSyncTimerDuration = 30000
  self.priceSyncTimer = self.priceSyncTimerDuration
  v9 = self:getNextDirtyFlag()
  self.unloadingStationDirtyFlag = v9
  v9:addSellingStation(self)
  return true
end
function SellingStation:addAcceptedFillType(fillType, priceUnscaled, supportsGreatDemand, disablePriceDrop)
  if fillType ~= nil and self.acceptedFillTypes[fillType] == nil then
    self.acceptedFillTypes[fillType] = true
    self.fillTypeSupportsGreatDemand[fillType] = supportsGreatDemand
    if supportsGreatDemand then
      self.supportsGreatDemand = true
    end
    self.priceDropDisabled[fillType] = disablePriceDrop
    self.originalFillTypePricesUnscaled[fillType] = priceUnscaled
    self.originalFillTypePrices[fillType] = priceUnscaled
    self.fillTypePrices[fillType] = priceUnscaled
    self.fillTypePriceInfo[fillType] = 0
    self.fillTypePriceRandomDelta[fillType] = 0
    self.priceMultipliers[fillType] = 1
    self.totalReceived[fillType] = 0
    self.totalPaid[fillType] = 0
    self.pendingPriceDrop[fillType] = 0
    self.prevFillLevel[fillType] = 0
    self.prevTotalReceived[fillType] = 0
    self.prevTotalPaid[fillType] = 0
    self.numFillTypesForSelling = 0
    for v8, v9 in pairs(self.acceptedFillTypes) do
      if not (0 < self.originalFillTypePrices[v8]) then
        continue
      end
      self.numFillTypesForSelling = self.numFillTypesForSelling + 1
    end
  end
end
function SellingStation:readStream(streamId, connection)
  local v3 = streamReadUInt16(streamId)
  local v4 = MoneyType.registerWithId(v3, "soldMaterials", "finance_other")
  self.moneyChangeType = v4
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection)
  v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadUInt8(streamId)
    -- TODO: structure LOP_FORNPREP (pc 34, target 58)
    local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    local v11 = streamReadUInt16(streamId)
    self.fillTypePrices[fillType] = v11 / 1000
    local v10 = streamReadUIntN(streamId, 6)
    self.fillTypePriceInfo[fillType] = v10
    -- TODO: structure LOP_FORNLOOP (pc 57, target 35)
  end
end
function SellingStation:writeStream(streamId, connection)
  streamWriteUInt16(streamId, self.moneyChangeType.id)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteUInt8(streamId, self.numFillTypesForSelling)
    if 0 < self.numFillTypesForSelling then
      for v6, v7 in pairs(self.acceptedFillTypes) do
        if not (0 < self.originalFillTypePrices[v6]) then
          continue
        end
        streamWriteUIntN(streamId, v6, FillTypeManager.SEND_NUM_BITS)
        local v13 = self:getEffectiveFillTypePrice(v6)
        local v10 = math.floor(v13 * 1000 + 0.5)
        streamWriteUInt16(...)
        v10 = self:getCurrentPricingTrend(v6)
        streamWriteUIntN(streamId, v10, 6)
      end
    end
  end
end
function SellingStation:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadUInt8(streamId)
      -- TODO: structure LOP_FORNPREP (pc 28, target 52)
      local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      local v11 = streamReadUInt16(streamId)
      self.fillTypePrices[fillType] = v11 / 1000
      local v10 = streamReadUIntN(streamId, 6)
      self.fillTypePriceInfo[fillType] = v10
      -- TODO: structure LOP_FORNLOOP (pc 51, target 29)
    end
  end
end
function SellingStation:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.unloadingStationDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteUInt8(streamId, self.numFillTypesForSelling)
      if 0 < self.numFillTypesForSelling then
        for v7, v8 in pairs(self.acceptedFillTypes) do
          if not (0 < self.originalFillTypePrices[v7]) then
            continue
          end
          streamWriteUIntN(streamId, v7, FillTypeManager.SEND_NUM_BITS)
          local v14 = self:getEffectiveFillTypePrice(v7)
          local v11 = math.floor(v14 * 1000 + 0.5)
          streamWriteUInt16(...)
          v11 = self:getCurrentPricingTrend(v7)
          streamWriteUIntN(streamId, v11, 6)
        end
      end
    end
  end
end
function SellingStation:update(dt)
  if 0 < self.lastMoneyChange then
    self.lastMoneyChange = self.lastMoneyChange - 1
    if self.lastMoneyChange == 0 then
      v2:showMoneyChange(self.moneyChangeType, "finance_" .. self.lastIncomeName, false, self.lastMoneyChangeFarmId)
    end
    self:raiseActive()
  end
end
function SellingStation:updateSellingStation(dt, scaledDt)
  if self.isServer then
    self:updatePrices(scaledDt)
    if self.hasDynamic then
      self.priceSyncTimer = self.priceSyncTimer - dt
      if self.priceSyncTimer < 0 then
        self:raiseDirtyFlags(self.unloadingStationDirtyFlag)
        self.priceSyncTimer = self.priceSyncTimerDuration
      end
    end
  end
end
function SellingStation:loadFromXMLFile(xmlFile, key)
  while true do
    v4 = string.format(key .. ".stats(%d)", v3)
    v5 = xmlFile:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = xmlFile:getValue(v4 .. "#fillType")
    v6 = v6:getFillTypeIndexByName(v5)
    if v6 ~= nil and self.acceptedFillTypes[v6] then
      v8 = xmlFile:getValue(v4 .. "#received", 0)
      self.totalReceived[v6] = v8
      v8 = xmlFile:getValue(v4 .. "#paid", 0)
      self.totalPaid[v6] = v8
      v7:loadFromXMLFile(xmlFile, v4)
    end
  end
  return true
end
function SellingStation:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in pairs(self.acceptedFillTypes) do
    if not (0 < self.originalFillTypePrices[v8]) then
      continue
    end
    local v10 = v10:getFillTypeNameByIndex(v8)
    local v11 = string.format("%s.stats(%d)", key, v4)
    xmlFile:setValue(v11 .. "#fillType", v10)
    xmlFile:setValue(v11 .. "#received", self.totalReceived[v8])
    xmlFile:setValue(v11 .. "#paid", self.totalPaid[v8])
    v12:saveToXMLFile(xmlFile, v11, usedModNames)
  end
end
function SellingStation:getName()
  if not self.stationName and self.owningPlaceable then
    local v1 = v1:getName()
    -- if v1 then goto L13 end
  end
  return v1
end
function SellingStation:getIsFillTypeAllowed(fillTypeIndex, extraAttributes)
  if self.acceptedFillTypes[fillTypeIndex] then
    return true
  end
  return false
end
function SellingStation:addFillLevelFromTool(farmId, deltaFillLevel, fillType, fillInfo, toolType, extraAttributes)
  if 0 < deltaFillLevel then
    if not not self.storeSoldGoods and self.storeSoldGoods then
      local v8 = self:getIsFillAllowedFromFarm(farmId)
    end
    local v9 = self:getIsFillTypeAllowed(fillType, extraAttributes)
    if v9 and v8 then
      for v13, v14 in pairs(self.missions) do
        if not (v14.fillSold ~= nil) then
          continue
        end
        if not (v14.fillType == fillType) then
          continue
        end
        if not (v14.farmId == farmId) then
          continue
        end
        v14:fillSold(deltaFillLevel)
        break
      end
      if self.storeSoldGoods then
        -- if v9 then goto L70 end
        v11 = v11:superClass()
        v10 = v11.addFillLevelFromTool(self, farmId, deltaFillLevel, fillType, fillInfo, toolType, extraAttributes)
      else
        self:startFx(fillType)
      end
      if not v9 and not self.skipSell and 0.001 < v7 then
        self:sellFillType(farmId, v7, fillType, toolType, extraAttributes)
      end
    end
  end
  return v7
end
function SellingStation:addTargetStorage(storage)
  if not self.storeSoldGoods then
    local v8 = self:getName()
    local v7 = tostring(...)
    print("Error: UnloadingStation '" .. v7 .. "' is a selling point which does not accept storages!")
    return false
  end
  local v3 = v3:superClass()
  return v3.addTargetStorage(self, storage)
end
function SellingStation:sellFillType(farmId, fillDelta, fillTypeIndex, toolType, extraAttributes)
  if not self.priceDropDisabled[fillTypeIndex] then
    self:doPriceDrop(fillDelta, fillTypeIndex)
  end
  local v6 = v6:getFillTypeByIndex(fillTypeIndex)
  v6.totalAmount = v6.totalAmount + fillDelta
  self.totalReceived[fillTypeIndex] = self.totalReceived[fillTypeIndex] + fillDelta
  local pricePerLiter = self:getEffectiveFillTypePrice(fillTypeIndex, toolType)
  if extraAttributes ~= nil then
  end
  self.totalPaid[fillTypeIndex] = self.totalPaid[fillTypeIndex] + fillDelta * pricePerLiter * v8
  local v10 = self:getIncomeNameForFillType(fillTypeIndex, toolType)
  self.lastIncomeName = v10
  self.moneyChangeType.statistic = self.lastIncomeName
  v10:addMoney(fillDelta * pricePerLiter * v8, farmId, self.moneyChangeType, true)
  self.lastMoneyChange = 30
  self.lastMoneyChangeFarmId = farmId
  self:raiseActive()
  return fillDelta * pricePerLiter * v8
end
function SellingStation:getEffectiveFillTypePrice(fillType, toolType)
  if self.fillTypePrices[fillType] == nil then
    local v5 = v5:getFillTypeNameByIndex(fillType)
    local v7 = self:getName()
    local v6 = tostring(...)
    log(...)
    printCallstack()
  end
  if self.isServer then
    local v3, v4 = v3:getPeriodAndAlphaIntoPeriod()
    v5 = v5:getFillTypeByIndex(fillType)
    v6 = v6:getFillTypeSeasonalFactor(v5, v3, v4)
    if v6 == 0 then
      return 0
    end
    local v9 = EconomyManager.getPriceMultiplier()
    return (self.fillTypePrices[fillType] * v6 + self.fillTypePriceRandomDelta[fillType] * SellingStation.RANDOM_DELTA_IMPACT) * self.priceMultipliers[fillType] * v9
  end
  return self.fillTypePrices[fillType]
end
function SellingStation:getIncomeNameForFillType(fillType, toolType)
  if self.fixedIncomeName ~= nil then
    return self.fixedIncomeName
  end
  if toolType == ToolType.BALE then
    return self.incomeNameBale
  end
  if fillType == FillType.WOOL then
    return self.incomeNameWool
  end
  if fillType == FillType.MILK then
    return self.incomeNameMilk
  end
  if fillType == FillType.WOOD then
    return "soldWood"
  end
  local v3 = v3:getIsFillTypeInCategory(fillType, "PRODUCT")
  if v3 then
    return self.incomeNameProduct
  end
  return self.incomeName
end
function SellingStation:initPricingDynamics()
  self.levelThreshold = 0.032
  for v12, v13 in pairs(self.acceptedFillTypes) do
    local v15 = PricingDynamics.new(0, 0.04 * self.originalFillTypePrices[v12], 0.15 * self.originalFillTypePrices[v12], v1, v2, v3, v4, 0.3, 0.75)
    self.pricingDynamics[v12] = v15
    v14:addCurve(0.02 * self.originalFillTypePrices[v12], 0.02 * self.originalFillTypePrices[v12], v5, v6, v7, v8)
  end
end
function SellingStation.executePriceDrop(v0, v1, v2)
end
function SellingStation.doPriceDrop(v0, v1, v2)
end
function SellingStation:updatePrices(dt)
  if 0 < self.numFillTypesForSelling and self.hasDynamic then
    for v6, v7 in pairs(self.acceptedFillTypes) do
      if self.isGreatDemandActive and not (self.greatDemandFillType ~= v6) then
        continue
      end
      v8:update(dt)
      local v9 = v9:evaluate()
      self.fillTypePriceRandomDelta[v6] = v9
      v9 = Utils.clearBit(self.fillTypePriceInfo[v6], SellingStation.PRICE_CLIMBING)
      self.fillTypePriceInfo[v6] = v9
      v9 = Utils.clearBit(self.fillTypePriceInfo[v6], SellingStation.PRICE_FALLING)
      self.fillTypePriceInfo[v6] = v9
      local v8 = self:getTrend(v6)
      if v8 == PricingDynamics.TREND_FALLING then
        local v10 = Utils.setBit(self.fillTypePriceInfo[v6], SellingStation.PRICE_FALLING)
        self.fillTypePriceInfo[v6] = v10
      elseif v8 == PricingDynamics.TREND_CLIMBING then
        v10 = Utils.setBit(self.fillTypePriceInfo[v6], SellingStation.PRICE_CLIMBING)
        self.fillTypePriceInfo[v6] = v10
      end
      local v11 = math.min(self.fillTypePrices[v6] + v2 * self.originalFillTypePrices[v6], self.originalFillTypePrices[v6])
      self.fillTypePrices[v6] = v11
    end
  end
end
function SellingStation:getTrend(fillType)
  local v2 = v2:getFillTypeByIndex(fillType)
  local v5 = v5:evaluateForTrend(14400000)
  local v5, v6 = v5:getPeriodAndAlphaIntoPeriod()
  if 1 < v6 + 0.16666666666666666 / g_currentMission.environment.daysPerPeriod then
  end
  local v9 = v9:getFillTypeSeasonalFactor(v2, v5, v6)
  local v10 = v10:getFillTypeSeasonalFactor(v2, v8, v7)
  local v14 = math.abs(v10 + v4 * SellingStation.RANDOM_DELTA_IMPACT - v9 + v3 * SellingStation.RANDOM_DELTA_IMPACT)
  if v14 < 0.002 then
    return PricingDynamics.TREND_PLATEAU
  end
  if 0 < v13 then
    return PricingDynamics.TREND_CLIMBING
  end
  return PricingDynamics.TREND_FALLING
end
function SellingStation:setPriceMultiplier(fillType, priceMultiplier)
  self.priceMultipliers[fillType] = priceMultiplier
end
function SellingStation:getSupportsGreatDemand(fillType)
  if fillType ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L9
  end
  return false
  return self.fillTypeSupportsGreatDemand[fillType]
end
function SellingStation:setIsInGreatDemand(fillType, isInGreatDemand)
  if isInGreatDemand then
    local v4 = Utils.setBit(self.fillTypePriceInfo[fillType], SellingStation.PRICE_GREAT_DEMAND)
    self.fillTypePriceInfo[fillType] = v4
    self.isGreatDemandActive = true
    self.greatDemandFillType = fillType
  else
    if self.greatDemandFillType ~= nil and self.fillTypePriceInfo[self.greatDemandFillType] ~= nil then
      local v5 = Utils.clearBit(self.fillTypePriceInfo[self.greatDemandFillType], SellingStation.PRICE_GREAT_DEMAND)
      self.fillTypePriceInfo[self.greatDemandFillType] = v5
    end
    self.isGreatDemandActive = false
    self.greatDemandFillType = FillType.UNKNOWN
  end
  self:raiseDirtyFlags(self.unloadingStationDirtyFlag)
  self.priceSyncTimer = self.priceSyncTimerDuration
end
function SellingStation:getPriceMultiplier(fillType)
  return self.priceMultipliers[fillType]
end
function SellingStation:getTotalReceived(fillType)
  return self.totalReceived[fillType]
end
function SellingStation:getTotalPaid(fillType)
  return self.totalPaid[fillType]
end
function SellingStation:getCurrentPricingTrend(fillType)
  return self.fillTypePriceInfo[fillType]
end
function SellingStation:getFreeCapacity(fillTypeIndex, farmId)
  if self.storeSoldGoods then
    local v4 = v4:superClass()
    return v4.getFreeCapacity(self, fillTypeIndex, farmId)
  end
  return math.huge
end
function SellingStation:getIsFillAllowedFromFarm(farmId)
  if self.storeSoldGoods then
    local v3 = v3:superClass()
    return v3.getIsFillAllowedFromFarm(self, farmId)
  end
  return true
end
function SellingStation:getAppearsOnStats()
  return self.appearsOnStats
end
function SellingStation:registerXMLPaths(dt)
  self:register(XMLValueType.BOOL, dt .. "#appearsOnStats", "Appears on Stats", false)
  self:register(XMLValueType.BOOL, dt .. "#suppressWarnings", "Suppress warnings", false)
  self:register(XMLValueType.BOOL, dt .. "#allowMissions", "Allow missions", true)
  self:register(XMLValueType.BOOL, dt .. "#hasDynamic", "Has dynamic prices", true)
  self:register(XMLValueType.INT, dt .. "#litersForFullPriceDrop", "Liters for full price drop")
  self:register(XMLValueType.FLOAT, dt .. "#fullPriceRecoverHours", "Full price recover ingame hours")
  self:register(XMLValueType.STRING, dt .. "#fillTypeCategories", "Supported filltypes if no unloadtriggers defined")
  self:register(XMLValueType.STRING, dt .. "#fillTypes", "Supported filltypes if no unloadtriggers defined")
  self:register(XMLValueType.STRING, dt .. "#incomeName", "Income name for stats")
  self:register(XMLValueType.STRING, dt .. ".fillType(?)#name", "Fill type name")
  self:register(XMLValueType.FLOAT, dt .. ".fillType(?)#priceScale", "Price scale", 1)
  self:register(XMLValueType.BOOL, dt .. ".fillType(?)#supportsGreatDemand", "Supports great demand", false)
  self:register(XMLValueType.BOOL, dt .. ".fillType(?)#disablePriceDrop", "Disable price drop", false)
  UnloadingStation.registerXMLPaths(self, dt)
end
function SellingStation:registerSavegameXMLPaths(dt)
  self:register(XMLValueType.STRING, dt .. ".stats(?)#fillType", "Fill type")
  self:register(XMLValueType.FLOAT, dt .. ".stats(?)#received", "Recieved fill level", 0)
  self:register(XMLValueType.FLOAT, dt .. ".stats(?)#paid", "Payed fill level", 0)
  PricingDynamics.registerSavegameXMLPaths(self, dt .. ".stats(?)")
end
function SellingStation:loadSpecValueFillTypes(dt, v2)
  local v4 = self:getValue("placeable.sellingStation#fillTypes")
  if v4 ~= nil then
    local v5 = v4:trim()
    if v5 ~= "" then
      local v6 = string.split(v4, " ")
      for v8, v9 in pairs(...) do
        v3[v9] = true
      end
    end
  end
  self:iterate("placeable.sellingStation.unloadTrigger", function(self, dt)
    local v2 = v2:getValue(dt .. "#fillTypes")
    if v2 ~= nil then
      local v3 = v2:trim()
      if v3 ~= "" then
        if not u1 then
        end
        u1 = v3
        local v4 = string.split(v2, " ")
        for v6, v7 in pairs(...) do
          u1[v7] = true
        end
      end
    end
  end)
  return v3
end
function SellingStation:getSpecValueFillTypes(dt)
  if self.specs.sellingStationFillTypes == nil then
    return nil
  end
  local v4 = table.concatKeys(self.specs.sellingStationFillTypes, " ")
  return v2:getFillTypesByNames(...)
end
