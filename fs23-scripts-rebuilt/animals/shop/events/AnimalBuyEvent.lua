-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalBuyEvent = {BUY_SUCCESS = 0, BUY_ERROR_NO_PERMISSION = 1, BUY_ERROR_NOT_ENOUGH_MONEY = 2, BUY_ERROR_NOT_ENOUGH_SPACE = 3, BUY_ERROR_ANIMAL_NOT_SUPPORTED = 4, BUY_ERROR_ANIMAL_GLOBAL_LIMIT_REACHED = 5, BUY_ERROR_OBJECT_DOES_NOT_EXIST = 6, BUY_ERROR_NO_BARN_AVAILABLE = 7}
local AnimalBuyEvent_mt = Class(AnimalBuyEvent, Event)
InitStaticEventClass(AnimalBuyEvent, "AnimalBuyEvent", EventIds.EVENT_ANIMAL_BUY)
function AnimalBuyEvent.emptyNew()
  return Event.new(u0)
end
function AnimalBuyEvent.new(object, subTypeIndex, age, numAnimals, buyPrice, feePrice)
  local v6 = AnimalBuyEvent.emptyNew()
  v6.object = object
  v6.subTypeIndex = subTypeIndex
  v6.age = age
  v6.numAnimals = numAnimals
  v6.buyPrice = buyPrice
  v6.feePrice = feePrice
  return v6
end
function AnimalBuyEvent.newServerToClient(errorCode)
  local v1 = AnimalBuyEvent.emptyNew()
  v1.errorCode = errorCode
  return v1
end
function AnimalBuyEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.object = v3
    v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_SUB_TYPE)
    self.subTypeIndex = v3
    v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_AGE)
    self.age = v3
    v3 = streamReadUInt8(streamId)
    self.numAnimals = v3
    local v4 = streamReadInt32(streamId)
    self.buyPrice = -v4
    v4 = streamReadInt32(streamId)
    self.feePrice = -v4
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
  end
  self:run(connection)
end
function AnimalBuyEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.object)
    streamWriteUIntN(streamId, self.subTypeIndex, AnimalCluster.NUM_BITS_SUB_TYPE)
    streamWriteUIntN(streamId, self.age, AnimalCluster.NUM_BITS_AGE)
    streamWriteUInt8(streamId, self.numAnimals)
    local v5 = math.abs(self.buyPrice)
    streamWriteInt32(...)
    v5 = math.abs(self.feePrice)
    streamWriteInt32(...)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
end
function AnimalBuyEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getHasPlayerPermission("tradeAnimals", connection)
    if not v2 then
      local v4 = AnimalBuyEvent.newServerToClient(AnimalBuyEvent.BUY_ERROR_NO_PERMISSION)
      connection:sendEvent(...)
      return
    end
    v2 = v2:getUniqueUserIdByConnection(connection)
    local v3 = v3:getFarmForUniqueUserId(v2)
    local v5 = AnimalBuyEvent.validate(self.object, self.subTypeIndex, self.age, self.numAnimals, self.buyPrice, self.feePrice, v3.farmId)
    if v5 ~= nil then
      local v8 = AnimalBuyEvent.newServerToClient(v5)
      connection:sendEvent(...)
      return
    end
    v6:addAnimals(self.subTypeIndex, self.numAnimals, self.age)
    v7:addMoney(self.buyPrice + self.feePrice, v3.farmId, MoneyType.NEW_ANIMALS_COST, true, true)
    local v9 = AnimalBuyEvent.newServerToClient(AnimalBuyEvent.BUY_SUCCESS)
    connection:sendEvent(...)
    return
  end
  v2:publish(AnimalBuyEvent, self.errorCode)
end
function AnimalBuyEvent:validate(v1, v2, v3, v4, v5, v6)
  if self == nil then
    return AnimalBuyEvent.BUY_ERROR_OBJECT_DOES_NOT_EXIST
  end
  local v7 = self:getSupportsAnimalSubType(v1)
  if not v7 then
    return AnimalBuyEvent.BUY_ERROR_ANIMAL_NOT_SUPPORTED
  end
  v7 = self:getNumOfFreeAnimalSlots(v1)
  if v7 < v3 then
    return AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_SPACE
  end
  v7 = v7:getTypeIndexBySubTypeIndex(v1)
  local v8 = v8:getPlaceablesByFarm(v6, v7)
  if #v8 == 0 then
    return AnimalBuyEvent.BUY_ERROR_NO_BARN_AVAILABLE
  end
  local v9 = v9:getNumOfFreeAnimalSlots(v6, v1)
  if v9 < v3 then
    return AnimalBuyEvent.BUY_ERROR_ANIMAL_GLOBAL_LIMIT_REACHED
  end
  local v11 = v11:getMoney(v6)
  if v11 + v4 + v5 < 0 then
    return AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_MONEY
  end
  return nil
end
