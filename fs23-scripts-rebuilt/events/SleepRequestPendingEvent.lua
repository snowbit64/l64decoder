-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepRequestPendingEvent = {}
local SleepRequestPendingEvent_mt = Class(SleepRequestPendingEvent, Event)
InitStaticEventClass(SleepRequestPendingEvent, "SleepRequestPendingEvent", EventIds.EVENT_SLEEP_REQUEST_PENDING)
function SleepRequestPendingEvent.emptyNew()
  return Event.new(u0)
end
function SleepRequestPendingEvent.new()
  return SleepRequestPendingEvent.emptyNew()
end
function SleepRequestPendingEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "SleepRequestPendingEvent is a server to client only event")
  self:run(connection)
end
function SleepRequestPendingEvent.writeStream(v0, v1, v2)
end
function SleepRequestPendingEvent.run(v0, v1)
  if g_sleepManager ~= nil then
    v2:onSleepRequestPending()
  end
end
