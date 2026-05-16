-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MoneyChangeEvent = {}
local MoneyChangeEvent_mt = Class(MoneyChangeEvent, Event)
InitStaticEventClass(MoneyChangeEvent, "MoneyChangeEvent", EventIds.EVENT_REQUEST_MONEY_CHANGE)
function MoneyChangeEvent.emptyNew()
  return Event.new(u0)
end
function MoneyChangeEvent.new(amount, moneyType, farmId, text)
  local v4 = MoneyChangeEvent.emptyNew()
  v4.amount = amount
  v4.moneyType = moneyType
  v4.farmId = farmId
  v4.text = text
  return v4
end
function MoneyChangeEvent:writeStream(streamId, connection)
  streamWriteFloat32(streamId, self.amount)
  streamWriteUInt16(streamId, self.moneyType.id)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  if self.text ~= nil then
    streamWriteBool(streamId, true)
    streamWriteString(streamId, self.text)
    return
  end
  streamWriteBool(streamId, false)
end
function MoneyChangeEvent:readStream(streamId, connection)
  local v3 = streamReadFloat32(streamId)
  self.amount = v3
  v3 = streamReadUInt16(streamId)
  local v4 = MoneyType.getMoneyTypeById(v3)
  self.moneyType = v4
  v4 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v4
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadString(streamId)
    self.text = v4
  end
  self:run(connection)
end
function MoneyChangeEvent:run(connection)
  local v2 = v2:getFarmId()
  if v2 == self.farmId and self.moneyType ~= nil then
    v2:addMoneyChange(self.moneyType, self.amount)
    if self.text ~= nil then
      local v3 = v3:getText(self.text)
    end
    v3:showMoneyChange(self.moneyType, v2)
  end
end
