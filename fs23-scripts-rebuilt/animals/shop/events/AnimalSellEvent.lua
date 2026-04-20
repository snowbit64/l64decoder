-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalSellEvent = {SELL_SUCCESS = 0, SELL_ERROR_NO_PERMISSION = 1, SELL_ERROR_INVALID_CLUSTER = 2, SELL_ERROR_NOT_ENOUGH_ANIMALS = 3, SELL_ERROR_CANNOT_BE_SOLD = 4, SELL_ERROR_OBJECT_DOES_NOT_EXIST = 5}
local AnimalSellEvent_mt = Class(AnimalSellEvent, Event)
InitStaticEventClass(AnimalSellEvent, "AnimalSellEvent", EventIds.EVENT_ANIMAL_SELL)
function AnimalSellEvent.emptyNew()
  return Event.new(u0)
end
function AnimalSellEvent.new(object, clusterId, numAnimals, sellPrice, feePrice)
  local v5 = AnimalSellEvent.emptyNew()
  v5.object = object
  v5.clusterId = clusterId
  v5.numAnimals = numAnimals
  v5.sellPrice = sellPrice
  v5.feePrice = feePrice
  return v5
end
function AnimalSellEvent.newServerToClient(errorCode)
  local v1 = AnimalSellEvent.emptyNew()
  v1.errorCode = errorCode
  return v1
end
function AnimalSellEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.object = v3
    v3 = streamReadInt32(streamId)
    self.clusterId = v3
    v3 = streamReadUInt8(streamId)
    self.numAnimals = v3
    v3 = streamReadInt32(streamId)
    self.sellPrice = v3
    local v4 = streamReadInt32(streamId)
    self.feePrice = -v4
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
  end
  self:run(connection)
end
function AnimalSellEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.object)
    streamWriteInt32(streamId, self.clusterId)
    streamWriteUInt8(streamId, self.numAnimals)
    local v5 = math.abs(self.sellPrice)
    streamWriteInt32(...)
    v5 = math.abs(self.feePrice)
    streamWriteInt32(...)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
end
function AnimalSellEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getHasPlayerPermission("tradeAnimals", connection)
    if not v2 then
      local v4 = AnimalSellEvent.newServerToClient(AnimalSellEvent.SELL_ERROR_NO_PERMISSION)
      connection:sendEvent(...)
      return
    end
    v2 = AnimalSellEvent.validate(self.object, self.clusterId, self.numAnimals, self.sellPrice, self.feePrice)
    if v2 ~= nil then
      local v5 = AnimalSellEvent.newServerToClient(v2)
      connection:sendEvent(...)
      return
    end
    local v3 = v3:getClusterById(self.clusterId)
    v4 = v4:getClusterSystem()
    v3:changeNumAnimals(-self.numAnimals)
    v4:updateNow()
    v5 = v5:getUniqueUserIdByConnection(connection)
    local v6 = v6:getFarmForUniqueUserId(v5)
    v8:addMoney(self.sellPrice + self.feePrice, v6.farmId, MoneyType.SOLD_ANIMALS, true, true)
    local v10 = AnimalSellEvent.newServerToClient(AnimalSellEvent.SELL_SUCCESS)
    connection:sendEvent(...)
    return
  end
  v2:publish(AnimalSellEvent, self.errorCode)
end
function AnimalSellEvent:validate(v1, v2, v3, v4)
  if self == nil then
    return AnimalSellEvent.SELL_ERROR_OBJECT_DOES_NOT_EXIST
  end
  local v5 = self:getClusterById(v1)
  if v5 == nil then
    return AnimalSellEvent.SELL_ERROR_INVALID_CLUSTER
  end
  local v6 = v5:getNumAnimals()
  if v6 < v2 then
    return AnimalSellEvent.SELL_ERROR_NOT_ENOUGH_ANIMALS
  end
  v6 = v5:getCanBeSold()
  if not v6 then
    return AnimalSellEvent.SELL_ERROR_CANNOT_BE_SOLD
  end
  return nil
end
