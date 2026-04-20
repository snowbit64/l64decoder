-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PricingHistoryEvent = {}
local PricingHistoryEvent_mt = Class(PricingHistoryEvent, Event)
InitStaticEventClass(PricingHistoryEvent, "PricingHistoryEvent", EventIds.EVENT_PRICING_HISTORY)
function PricingHistoryEvent.emptyNew()
  return Event.new(u0)
end
function PricingHistoryEvent.new(period)
  local v1 = PricingHistoryEvent.emptyNew()
  v1.period = period
  return v1
end
function PricingHistoryEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 4)
  self.period = v3
  v3 = v3:getFillTypes()
  -- TODO: structure LOP_FORNPREP (pc 15, target 30)
  local v10 = streamReadInt32(streamId)
  v3[1].economy.history[self.period] = v10 / 1000
  -- TODO: structure LOP_FORNLOOP (pc 29, target 16)
end
function PricingHistoryEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.period, 4)
  local v3 = v3:getFillTypes()
  -- TODO: structure LOP_FORNPREP (pc 15, target 30)
  streamWriteInt32(streamId, v3[1].economy.history[self.period] * 1000)
  -- TODO: structure LOP_FORNLOOP (pc 29, target 16)
end
function PricingHistoryEvent.run(v0, v1)
end
