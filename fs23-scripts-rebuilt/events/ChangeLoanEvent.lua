-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChangeLoanEvent = {}
local ChangeLoanEvent_mt = Class(ChangeLoanEvent, Event)
InitStaticEventClass(ChangeLoanEvent, "ChangeLoanEvent", EventIds.EVENT_CHANGE_LOAN)
function ChangeLoanEvent.emptyNew()
  return Event.new(u0)
end
function ChangeLoanEvent.new(loanValue, farmId)
  local v2 = ChangeLoanEvent.emptyNew()
  v2.loanValue = loanValue
  v2.farmId = farmId
  return v2
end
function ChangeLoanEvent:readStream(streamId, connection)
  local v3 = streamReadFloat32(streamId)
  self.loanValue = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function ChangeLoanEvent:writeStream(streamId, connection)
  streamWriteFloat32(streamId, self.loanValue)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function ChangeLoanEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x2 -> L89
    v2 = v2:getHasPlayerPermission("farmManager", connection, self.farmId)
    -- if not v2 then goto L89 end
    v2 = v2:getFarmById(self.farmId)
    local v4 = MathUtil.clamp(v2.loan + self.loanValue, 0, v2.loanMax)
    v2.loan = v4
    v2:changeBalance(v2.loan - v2.loan)
    local v7 = ChangeLoanEvent.new(v2.loan, v2.farmId)
    v5:broadcastEvent(v7, false, nil)
    v5:publish(ChangeLoanEvent)
    return
  end
  v2 = v2:getFarmById(self.farmId)
  if v2 ~= nil then
    v2.loan = self.loanValue
  end
  v3:publish(ChangeLoanEvent)
end
