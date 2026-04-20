-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyVehicleEvent = {}
local BuyVehicleEvent_mt = Class(BuyVehicleEvent, Event)
BuyVehicleEvent.STATE_SUCCESS = 0
BuyVehicleEvent.STATE_FAILED_TO_LOAD = 1
BuyVehicleEvent.STATE_NO_SPACE = 2
BuyVehicleEvent.STATE_NO_PERMISSION = 3
BuyVehicleEvent.STATE_NOT_ENOUGH_MONEY = 4
BuyVehicleEvent.STATE_TOO_MANY_BALES = 5
BuyVehicleEvent.STATE_TOO_MANY_PALLETS = 6
InitStaticEventClass(BuyVehicleEvent, "BuyVehicleEvent", EventIds.EVENT_BUY_VEHICLE)
function BuyVehicleEvent.emptyNew()
  return Event.new(u0)
end
function BuyVehicleEvent.new(v0, v1, v2, v3, v4, v5, v6, v7)
  local v8 = BuyVehicleEvent.emptyNew()
  v8.filename = v0
  v8.outsideBuy = v1
  local v9 = Utils.getNoNil(v2, {})
  v8.configurations = v9
  v9 = Utils.getNoNil(v3, false)
  v8.leaseVehicle = v9
  v8.ownerFarmId = v4
  v8.licensePlateData = v5
  v8.saleItem = v6
  v8.price = v7
  return v8
end
function BuyVehicleEvent.newServerToClient(errorCode, filename, leaseVehicle, price)
  local v4 = BuyVehicleEvent.emptyNew()
  v4.filename = filename
  v4.errorCode = errorCode
  v4.leaseVehicle = leaseVehicle
  v4.price = price
  return v4
end
function BuyVehicleEvent:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.filename = v3
  v3 = connection:getIsServer()
  if not v3 then
    v3 = streamReadBool(streamId)
    self.outsideBuy = v3
    v3 = streamReadUInt8(streamId)
    self.configurations = {}
    -- TODO: structure LOP_FORNPREP (pc 30, target 52)
    local v9 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
    local v7 = v7:getConfigurationNameByIndex(...)
    local v8 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
    self.configurations[v7] = v8
    -- TODO: structure LOP_FORNLOOP (pc 51, target 31)
    v4 = streamReadBool(streamId)
    self.leaseVehicle = v4
    v4 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.ownerFarmId = v4
    v4 = LicensePlateManager.readLicensePlateData(streamId, connection)
    self.licensePlateData = v4
    v4 = streamReadUInt8(streamId)
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x1e -> L107
    local v5 = v5:getSaleById(v4)
    self.saleItem = v5
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
    v3 = streamReadBool(streamId)
    self.leaseVehicle = v3
    v3 = streamReadInt32(streamId)
    self.price = v3
  end
  self:run(connection)
end
function BuyVehicleEvent:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.filename)
  streamWriteString(...)
  local v3 = connection:getIsServer()
  if v3 then
    streamWriteBool(streamId, self.outsideBuy)
    v5 = Utils.getNoNil(self.configurations, {})
    for v7, v8 in pairs(...) do
      local v12 = v12:getConfigurationIndexByName(v7)
      table.insert(v3, {nameId = v12, configId = v8})
    end
    streamWriteUInt8(streamId, #v3)
    -- TODO: structure LOP_FORNPREP (pc 59, target 79)
    streamWriteUIntN(streamId, v3[1].nameId, ConfigurationUtil.SEND_NUM_BITS)
    streamWriteUIntN(streamId, v3[1].configId, ConfigurationUtil.SEND_NUM_BITS)
    -- TODO: structure LOP_FORNLOOP (pc 78, target 60)
    streamWriteBool(streamId, self.leaseVehicle)
    streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    LicensePlateManager.writeLicensePlateData(streamId, connection, self.licensePlateData)
    if self.saleItem ~= nil then
      streamWriteUInt8(streamId, self.saleItem.id)
      return
    end
    streamWriteUInt8(streamId, 0)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
  streamWriteBool(streamId, self.leaseVehicle)
  streamWriteInt32(streamId, self.price)
end
function BuyVehicleEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:publish(BuyVehicleEvent, self.errorCode, self.leaseVehicle, self.price, self.licensePlateData)
    return
  end
  v2 = v2:getHasPlayerPermission(Farm.PERMISSION.BUY_VEHICLE, connection)
  if not v2 then
    local v4 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_NO_PERMISSION, self.filename, self.leaseVehicle, 0)
    connection:sendEvent(...)
    return
  end
  v2 = v2:lower()
  self.filename = v2
  v2 = v2:getItemByXMLFilename(self.filename)
  if v2 == nil then
    local v5 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_FAILED_TO_LOAD, self.filename, self.leaseVehicle, 0)
    connection:sendEvent(...)
    return
  end
  v4, v5 = v4:getBuyPrice(v2, self.configurations, self.saleItem)
  if self.leaseVehicle then
    local v7 = v7:getInitialLeasingPrice(v4)
  end
  v7 = v7:getMoney(self.ownerFarmId)
  if v7 < (self.price or v6) then
    local v9 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_NOT_ENOUGH_MONEY, self.filename, self.leaseVehicle, self.price or v6)
    connection:sendEvent(...)
    return
  end
  if GS_IS_CONSOLE_VERSION then
    v7 = fileExists(v2.xmlFilename)
    if not v7 then
      v9 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_FAILED_TO_LOAD, self.filename, self.leaseVehicle, 0)
      connection:sendEvent(...)
      return
    end
  end
  v7 = XMLFile.load("BuyVehicleEventVehicleXML", v2.xmlFilename, nil)
  local v8 = v7:hasProperty("vehicle.multipleItemPurchase")
  if v8 then
    v9 = v7:getBool("vehicle.multipleItemPurchase#isVehicle")
    if v9 ~= false then
    end
  end
  v9 = v7:hasProperty("vehicle.multipleItemPurchase")
  if v9 then
    v9 = v7:getBool("vehicle.multipleItemPurchase#isVehicle")
  end
  v7:delete()
  if v8 then
    local v10 = v10:getCanAddLimitedObjects(SlotSystem.LIMITED_OBJECT_BALE, 1)
    if not v10 then
      local v12 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_TOO_MANY_BALES, self.filename, self.leaseVehicle, 0)
      connection:sendEvent(...)
      return
    end
  end
  if v9 then
    v10 = v10:getCanAddLimitedObjects(SlotSystem.LIMITED_OBJECT_PALLET, 1)
    if not v10 then
      v12 = BuyVehicleEvent.newServerToClient(BuyVehicleEvent.STATE_TOO_MANY_PALLETS, self.filename, self.leaseVehicle, 0)
      connection:sendEvent(...)
      return
    end
  end
  VehicleLoadingUtil.loadVehiclesAtPlace(v2, g_currentMission.storeSpawnPlaces, g_currentMission.usedStorePlaces, self.configurations, v4, v3, self.ownerFarmId, self.saleItem, self.onVehicleBoughtCallback, self, {targetOwner = self, connection = connection, leaseVehicle = self.leaseVehicle, outsideBuy = self.outsideBuy, price = v6, ownerFarmId = self.ownerFarmId, filename = self.filename, licensePlateData = self.licensePlateData})
end
function BuyVehicleEvent:onVehicleBoughtCallback(code, params)
  if code == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    if not params.outsideBuy then
      if not params.leaseVehicle then
        local v4 = v4:getItemByXMLFilename(self.filename)
        local v5 = MoneyType.getMoneyTypeByName(v4.financeCategory)
        if not v5 then
        end
        v6:addMoney(-params.price, params.ownerFarmId, v5, true)
        if self.saleItem ~= nil then
          v6:onVehicleBought(self.saleItem)
        end
        local v6 = v6:getFarmId()
        for v12, v13 in ipairs(g_currentMission.vehicles) do
          local v14 = v13:getOwnerFarmId()
          if not (v14 == v6) then
            continue
          end
          if v13.spec_drivable ~= nil then
          else
            if not (v13.spec_attachable ~= nil) then
              continue
            end
            if not (v13.spec_bigBag == nil) then
              continue
            end
          end
        end
        v9:tryUnlock("NumDrivables", v7)
        v9:tryUnlock("NumVehiclesSmall", v8)
        v9:tryUnlock("NumVehiclesLarge", v8)
      else
        v4:addMoney(-params.price, params.ownerFarmId, MoneyType.LEASING_COSTS, true)
      end
    end
  elseif code == VehicleLoadingUtil.VEHICLE_LOAD_NO_SPACE then
  end
  v6 = BuyVehicleEvent.newServerToClient(v3, params.filename, params.leaseVehicle, params.price)
  v4:sendEvent(...)
end
