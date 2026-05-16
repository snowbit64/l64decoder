-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepRequestTimeoutEvent = {}
local SleepRequestTimeoutEvent_mt = Class(SleepRequestTimeoutEvent, Event)
InitStaticEventClass(SleepRequestTimeoutEvent, "SleepRequestTimeoutEvent", EventIds.EVENT_SLEEP_REQUEST_TIMEOUT)
function SleepRequestTimeoutEvent.emptyNew()
  return Event.new(u0)
end
function SleepRequestTimeoutEvent.new()
  return SleepRequestTimeoutEvent.emptyNew()
end
function SleepRequestTimeoutEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "SleepRequestTimeoutEvent is a server to client only event")
  self:run(connection)
end
function SleepRequestTimeoutEvent.writeStream(v0, v1, v2)
end
function SleepRequestTimeoutEvent.run(v0, v1)
  if g_sleepManager ~= nil then
    v2:onSleepRequestTimeout()
  end
end
