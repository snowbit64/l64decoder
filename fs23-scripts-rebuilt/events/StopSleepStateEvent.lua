-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StopSleepStateEvent = {}
local StopSleepStateEvent_mt = Class(StopSleepStateEvent, Event)
InitStaticEventClass(StopSleepStateEvent, "StopSleepStateEvent", EventIds.EVENT_SLEEP_STOP)
function StopSleepStateEvent.emptyNew()
  return Event.new(u0)
end
function StopSleepStateEvent.new()
  return StopSleepStateEvent.emptyNew()
end
function StopSleepStateEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "StopSleepStateEvent is a server to client only event")
  self:run(connection)
end
function StopSleepStateEvent.writeStream(v0, v1, v2)
end
function StopSleepStateEvent.run(v0, v1)
  if g_sleepManager ~= nil then
    v2:stopSleep()
  end
end
