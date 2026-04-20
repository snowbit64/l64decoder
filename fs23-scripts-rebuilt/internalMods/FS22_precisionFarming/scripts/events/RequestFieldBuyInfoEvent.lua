-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RequestFieldBuyInfoEvent = {}
local RequestFieldBuyInfoEvent_mt = Class(RequestFieldBuyInfoEvent, Event)
InitEventClass(RequestFieldBuyInfoEvent, "RequestFieldBuyInfoEvent")
function RequestFieldBuyInfoEvent.emptyNew(v0)
  return Event.new(u0)
end
function RequestFieldBuyInfoEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function RequestFieldBuyInfoEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, g_farmlandManager.numberOfBits)
  self.farmlandId = v3
  self:run(connection)
end
function RequestFieldBuyInfoEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, g_farmlandManager.numberOfBits)
end
function RequestFieldBuyInfoEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = connection:getIsServer()
    if not v2 then
      local v4 = AdditionalFieldBuyInfoEvent.new(self.farmlandId)
      v2:broadcastEvent(v4, false, nil, nil, true, {connection})
    end
  end
end
