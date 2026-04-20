-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandInitialStateEvent = {}
local FarmlandInitialStateEvent_mt = Class(FarmlandInitialStateEvent, Event)
InitStaticEventClass(FarmlandInitialStateEvent, "FarmlandStateEvent", EventIds.EVENT_FARMLAND_INITIAL_STATE)
function FarmlandInitialStateEvent.emptyNew()
  return Event.new(u0)
end
function FarmlandInitialStateEvent.new()
  return FarmlandInitialStateEvent.emptyNew()
end
function FarmlandInitialStateEvent.readStream(v0, v1, v2)
  for v6, v7 in ipairs(g_farmlandManager.sortedFarmlandIds) do
    local v8 = streamReadBool(v1)
    if not v8 then
      continue
    end
    v8 = streamReadUIntN(v1, FarmManager.FARM_ID_SEND_NUM_BITS)
    v9:setLandOwnership(v7, v8)
  end
end
function FarmlandInitialStateEvent.writeStream(v0, v1, v2)
  for v6, v7 in ipairs(g_farmlandManager.sortedFarmlandIds) do
    local v8 = v8:getFarmlandOwner(v7)
    if v8 == FarmlandManager.NO_OWNER_FARM_ID then
    end
    local v9 = v9(v10, true)
    if not v9 then
      continue
    end
    streamWriteUIntN(v1, v8, FarmManager.FARM_ID_SEND_NUM_BITS)
  end
end
