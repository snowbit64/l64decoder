-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RequestMoneyChangeEvent = {}
local RequestMoneyChangeEvent_mt = Class(RequestMoneyChangeEvent, Event)
InitStaticEventClass(RequestMoneyChangeEvent, "RequestMoneyChangeEvent", EventIds.EVENT_MONEY_CHANGE)
function RequestMoneyChangeEvent.emptyNew()
  return Event.new(u0)
end
function RequestMoneyChangeEvent:new()
  local v1 = RequestMoneyChangeEvent.emptyNew()
  v1.moneyTypeId = self.id
  return v1
end
function RequestMoneyChangeEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.moneyTypeId)
end
function RequestMoneyChangeEvent:readStream(streamId, connection)
  local v3 = streamReadUInt8(streamId)
  self.moneyTypeId = v3
  self:run(connection)
end
function RequestMoneyChangeEvent:run(connection)
  local moneyType = MoneyType.getMoneyTypeById(self.moneyTypeId)
  if moneyType == nil then
    local v6 = tostring(self.moneyTypeId)
    Logging.devError(...)
  end
  local v4 = v4:getPlayerByConnection(connection)
  if v4 ~= nil then
  end
  if v2 == nil then
    Logging.devError("RequestMoneyChangeEvent - Missing farmId for player!")
  end
  if moneyType ~= nil and v2 ~= nil then
    v5:broadcastNotifications(moneyType, v2)
  end
end
