-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaseMissionReadyEvent = {}
local BaseMissionReadyEvent_mt = Class(BaseMissionReadyEvent, Event)
InitStaticEventClass(BaseMissionReadyEvent, "BaseMissionReadyEvent", EventIds.EVENT_READY_EVENT)
function BaseMissionReadyEvent.emptyNew()
  return Event.new(u0)
end
function BaseMissionReadyEvent.new()
  return BaseMissionReadyEvent.emptyNew()
end
function BaseMissionReadyEvent:readStream(streamId, connection)
  self:run(connection)
end
function BaseMissionReadyEvent.writeStream(v0, v1, v2)
end
function BaseMissionReadyEvent.run(v0, v1)
  local v2 = v1:getIsServer()
  if v2 then
    v2:onFinishedReceivingDynamicData(v1)
    return
  end
  v2:onConnectionReady(v1)
end
