-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PricingHistoryInitialEvent = {}
local PricingHistoryInitialEvent_mt = Class(PricingHistoryInitialEvent, Event)
InitStaticEventClass(PricingHistoryInitialEvent, "PricingHistoryInitialEvent", EventIds.EVENT_PRICING_HISTORY_INIT)
function PricingHistoryInitialEvent.emptyNew()
  return Event.new(u0)
end
function PricingHistoryInitialEvent.new()
  return PricingHistoryInitialEvent.emptyNew()
end
function PricingHistoryInitialEvent.readStream(v0, v1, v2)
  local v3 = v3:getFillTypes()
  -- TODO: structure LOP_FORNPREP (pc 8, target 26)
  for v9 = 1, 12 do
    local v12 = streamReadInt32(v1)
    v3[v6].economy.history[v9] = v12 / 1000
    -- TODO: structure LOP_FORNLOOP (pc 24, target 13)
  end
end
function PricingHistoryInitialEvent.writeStream(v0, v1, v2)
  local v3 = v3:getFillTypes()
  -- TODO: structure LOP_FORNPREP (pc 8, target 26)
  for v9 = 1, 12 do
    streamWriteInt32(v1, v3[v6].economy.history[v9] * 1000)
    -- TODO: structure LOP_FORNLOOP (pc 24, target 13)
  end
end
function PricingHistoryInitialEvent.run(v0, v1)
end
