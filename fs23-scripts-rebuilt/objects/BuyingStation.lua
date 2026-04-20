-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyingStation = {}
local BuyingStation_mt = Class(BuyingStation, LoadingStation)
InitStaticObjectClass(BuyingStation, "BuyingStation", ObjectIds.OBJECT_BUYING_STATION)
function BuyingStation.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.incomeName = "other"
  v3.incomeNameFuel = "purchaseFuel"
  v3.incomeNameLime = "other"
  return v3
end
function BuyingStation:load(components, xmlFile, key, customEnv, i3dMappings)
  local v7 = v7:superClass()
  local v6 = v7.load(self, components, xmlFile, key, customEnv, i3dMappings)
  if not v6 then
    return false
  end
  self.lastMoneyChange = 0
  self.providedFillTypes = {}
  self.fillTypePricesScale = {}
  self.fillTypeStatsName = {}
  while true do
    v7 = string.format(key .. ".fillType(%d)", v6)
    v8 = xmlFile:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = xmlFile:getValue(v7 .. "#name")
    v9 = v9:getFillTypeIndexByName(v8)
    v10 = xmlFile:getValue(v7 .. "#statsName", "other")
    if FinanceStats.statNameToIndex[v10] == nil then
      Logging.xmlWarning(xmlFile, "StatsName '%s' for fillType '%s' is not defined for buying station", v10, v8)
    end
    if v9 ~= nil then
      if self.supportedFillTypes[v9] ~= nil then
        v11 = xmlFile:getValue(v7 .. "#priceScale", 1)
        self.fillTypePricesScale[v9] = v11
        self.fillTypeStatsName[v9] = v10
        self.providedFillTypes[v9] = true
      else
        Logging.xmlWarning(xmlFile, "FillType '%s' is not supported by loading triggers for buying station", v8)
      end
    end
  end
  if self.isServer then
    v7 = MoneyType.register("other", "finance_other")
    self.moneyChangeType = v7
  end
  return true
end
function BuyingStation:readStream(streamId, connection)
  local moneyTypeId = streamReadUInt16(streamId)
  local v4 = MoneyType.registerWithId(moneyTypeId, "other", "finance_other")
  self.moneyChangeType = v4
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection)
end
function BuyingStation:writeStream(streamId, connection)
  streamWriteUInt16(streamId, self.moneyChangeType.id)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
end
function BuyingStation:update(dt)
  if 0 < self.lastMoneyChange then
    self.lastMoneyChange = self.lastMoneyChange - 1
    if self.lastMoneyChange == 0 then
      v2:showMoneyChange(self.moneyChangeType, "finance_" .. self.lastIncomeName, false, self.lastMoneyChangeFarmId)
    end
    self:raiseActive()
  end
end
function BuyingStation:addSourceStorage(storage)
  local v8 = self:getName()
  local v7 = tostring(...)
  print("Error: LoadingStation '" .. v7 .. "' is a buying point and does not accept any storages!")
  return false
end
function BuyingStation:getAllFillLevels()
  for v5, v6 in pairs(self.supportedFillTypes) do
    v1[v5] = 1
  end
  return v1, 1
end
function BuyingStation:getEffectiveFillTypePrice(fillTypeIndex)
  local v2 = v2:getFillTypeByIndex(fillTypeIndex)
  return self.fillTypePricesScale[fillTypeIndex] * v2.pricePerLiter
end
function BuyingStation:addFillLevelToFillableObject(fillableObject, fillUnitIndex, fillTypeIndex, fillDelta, fillInfo, toolType)
  if fillableObject ~= nil and fillTypeIndex ~= FillType.UNKNOWN and fillDelta ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L12
  end
  return 0
  local farmId = fillableObject:getOwnerFarmId()
  local v8 = v8:getMoney(farmId)
  if 0 < v8 then
    v8 = fillableObject:addFillUnitFillLevel(farmId, fillUnitIndex, fillDelta, fillTypeIndex, toolType, fillInfo)
    -- if 0 >= v8 then goto L75 end
    local v9 = self:getEffectiveFillTypePrice(fillTypeIndex)
    v9 = self:getIncomeNameForFillType(fillTypeIndex, toolType)
    self.lastIncomeName = v9
    self.moneyChangeType.statistic = self.lastIncomeName
    v9:addMoney(-(v9 * v8), farmId, self.moneyChangeType, true)
    self.lastMoneyChangeFarmId = farmId
    self.lastMoneyChange = 30
    self:raiseActive()
    return v8
  end
  return 0
end
function BuyingStation:getIncomeNameForFillType(fillType, toolType)
  if fillType == FillType.DIESEL then
    return self.incomeNameFuel
  end
  if fillType == FillType.LIME then
    return self.incomeNameLime
  end
  if self.fillTypeStatsName[fillType] ~= nil then
    return self.fillTypeStatsName[fillType]
  end
  return self.incomeName
end
function BuyingStation.getIsFillAllowedToFarm(v0, v1)
  return true
end
function BuyingStation:getIsFillTypeSupported(fillType)
  if self.providedFillTypes[fillType] ~= true then
  end
  return true
end
function BuyingStation:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".fillType(?)#name", "Fill type name")
  self:register(XMLValueType.STRING, v1 .. ".fillType(?)#statsName", "Name in stats", "other")
  self:register(XMLValueType.FLOAT, v1 .. ".fillType(?)#priceScale", "Price scale", 1)
  LoadingStation.registerXMLPaths(self, v1)
end
function BuyingStation:loadSpecValueFillTypes(v1, v2)
  local v4 = self:getValue("placeable.buyingStation#fillTypes")
  if v4 ~= nil then
    local v5 = v4:trim()
    if v5 ~= "" then
      local v6 = string.split(v4, " ")
      for v8, v9 in pairs(...) do
        v3[v9] = true
      end
    end
  end
  self:iterate("placeable.buyingStation.loadTrigger", function(self, v1)
    local v2 = v2:getValue(v1 .. "#fillTypes")
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
function BuyingStation:getSpecValueFillTypes(v1)
  if self.specs.buyingStationFillTypes == nil then
    return nil
  end
  local v4 = table.concatKeys(self.specs.buyingStationFillTypes, " ")
  return v2:getFillTypesByNames(...)
end
