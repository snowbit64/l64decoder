-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CheatMoneyEvent = {}
local CheatMoneyEvent_mt = Class(CheatMoneyEvent, Event)
InitStaticEventClass(CheatMoneyEvent, "CheatMoneyEvent", EventIds.EVENT_CHEAT_MONEY)
function CheatMoneyEvent.emptyNew()
  return Event.new(u0)
end
function CheatMoneyEvent.new(amount)
  local v1 = CheatMoneyEvent.emptyNew()
  v1.amount = amount
  return v1
end
function CheatMoneyEvent:readStream(streamId, connection)
  local v4 = v4:getIsServer()
  assert(...)
  local v3 = streamReadInt32(streamId)
  self.amount = v3
  v3 = v3:getIsServer()
  if v3 then
    v3 = connection:getIsServer()
    if not v3 then
      v3 = v3:getIsConnectionMasterUser(connection)
      if v3 then
        v4 = v4:getPlayerByConnection(connection)
        if v4.farmId ~= FarmManager.SPECTATOR_FARM_ID then
          v4:addMoney(self.amount, v4.farmId, MoneyType.OTHER)
        end
      end
    end
  end
end
function CheatMoneyEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.amount)
end
function CheatMoneyEvent.run(v0, v1)
  print("Error: CheatMoneyEvent is a client to server only event")
end
