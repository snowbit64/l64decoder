-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SellVehicleEvent = {}
local SellVehicleEvent_mt = Class(SellVehicleEvent, Event)
SellVehicleEvent.SELL_SUCCESS = 0
SellVehicleEvent.SELL_VEHICLE_IN_USE = 1
SellVehicleEvent.SELL_NO_PERMISSION = 2
SellVehicleEvent.SELL_LAST_VEHICLE = 3
InitStaticEventClass(SellVehicleEvent, "SellVehicleEvent", EventIds.EVENT_SELL_VEHICLE)
function SellVehicleEvent.emptyNew()
  return Event.new(u0)
end
function SellVehicleEvent.new(vehicle, multiplier, isDirectSell)
  local v3 = SellVehicleEvent.emptyNew()
  v3.vehicle = vehicle
  local v4 = Utils.getNoNil(multiplier, 1)
  v3.multiplier = v4
  v4 = Utils.getNoNil(isDirectSell, false)
  v3.isDirectSell = v4
  v3.isOwned = true
  return v3
end
function SellVehicleEvent.newServerToClient(errorCode, sellPrice, isDirectSell, isOwned, ownerFarmId)
  local v5 = SellVehicleEvent.emptyNew()
  v5.errorCode = errorCode
  v5.sellPrice = sellPrice
  v5.isDirectSell = isDirectSell
  v5.isOwned = isOwned
  v5.ownerFarmId = ownerFarmId
  return v5
end
function SellVehicleEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.vehicle = v3
    v3 = streamReadFloat32(streamId)
    self.multiplier = v3
  else
    v3 = streamReadUIntN(streamId, 2)
    self.errorCode = v3
    if self.errorCode == SellVehicleEvent.SELL_SUCCESS then
      v3 = streamReadInt32(streamId)
      self.sellPrice = v3
    end
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.ownerFarmId = v3
  end
  v3 = streamReadBool(streamId)
  self.isDirectSell = v3
  v3 = streamReadBool(streamId)
  self.isOwned = v3
  self:run(connection)
end
function SellVehicleEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.vehicle)
    streamWriteFloat32(streamId, self.multiplier)
  else
    streamWriteUIntN(streamId, self.errorCode, 2)
    if self.errorCode == SellVehicleEvent.SELL_SUCCESS then
      v3 = streamWriteInt32(streamId, self.sellPrice)
      self.sellPrice = v3
    end
    streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  end
  streamWriteBool(streamId, self.isDirectSell)
  streamWriteBool(streamId, self.isOwned)
end
function SellVehicleEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    if self.vehicle.propertyState ~= Vehicle.PROPERTY_STATE_OWNED then
    end
    local v9 = v9:getOwnerFarmId()
    local v5 = v5:getHasPlayerPermission(...)
    if v5 then
      v5 = v5:getIsInUse(connection)
      if not v5 then
        if self.vehicle.propertyState == Vehicle.PROPERTY_STATE_OWNED then
          local v8 = v8:getSellPrice()
          local v6 = math.floor(v8 * self.multiplier)
          local v7 = v7:getPrice()
          v5 = math.min(...)
        end
        if v4 then
          v5:onVehicleWillSell(self.vehicle)
        end
        v5:removeVehicle(self.vehicle)
        v8 = v8:getOwnerFarmId()
        v5:addMoney(v3, v8, MoneyType.SHOP_VEHICLE_SELL, true)
        -- goto L109  (LOP_JUMP +9)
      end
    else
    end
    local v12 = v12:getOwnerFarmId()
    v7 = SellVehicleEvent.newServerToClient(...)
    connection:sendEvent(...)
    return
  end
  v2:publish(SellVehicleEvent, self.isDirectSell, self.errorCode, self.sellPrice, self.isOwned, self.ownerFarmId)
end
