-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TransferMoneyEvent = {}
local TransferMoneyEvent_mt = Class(TransferMoneyEvent, Event)
InitStaticEventClass(TransferMoneyEvent, "TransferMoneyEvent", EventIds.EVENT_TRANSFER_MONEY)
function TransferMoneyEvent.emptyNew()
  return Event.new(u0)
end
function TransferMoneyEvent.new(amount, destinationFarmId)
  local v2 = TransferMoneyEvent.emptyNew()
  v2.amount = amount
  v2.destinationFarmId = destinationFarmId
  return v2
end
function TransferMoneyEvent:writeStream(streamId, connection)
  streamWriteFloat32(streamId, self.amount)
  streamWriteUIntN(streamId, self.destinationFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function TransferMoneyEvent:readStream(streamId, connection)
  local v3 = streamReadFloat32(streamId)
  self.amount = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.destinationFarmId = v3
  self:run(connection)
end
function TransferMoneyEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserIdByConnection(connection)
    local v3 = v3:getFarmByUserId(v2)
    local v4 = v4:getHasPlayerPermission("transferMoney", connection, v3.farmId)
    -- if not v4 then goto L64 end
    -- if v0.amount > v3.money then goto L64 end
    v4:addMoney(-self.amount, v3.farmId, MoneyType.TRANSFER, true, true)
    v4:addMoney(self.amount, self.destinationFarmId, MoneyType.TRANSFER, true, true)
    return
  end
  print("Error: TransferMoneyEvent is a client to server only event")
end
