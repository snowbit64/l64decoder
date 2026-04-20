-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepNotAllowedEvent = {}
local SleepNotAllowedEvent_mt = Class(SleepNotAllowedEvent, Event)
InitStaticEventClass(SleepNotAllowedEvent, "SleepNotAllowedEvent", EventIds.EVENT_SLEEP_ALLOWED)
function SleepNotAllowedEvent.emptyNew()
  return Event.new(u0)
end
function SleepNotAllowedEvent.new()
  return SleepNotAllowedEvent.emptyNew()
end
function SleepNotAllowedEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "SleepNotAllowedEvent is a server to client only event")
  self:run(connection)
end
function SleepNotAllowedEvent.writeStream(v0, v1, v2)
end
function SleepNotAllowedEvent.run(v0, v1)
  if g_sleepManager ~= nil then
    v2:onSleepNotAllowed()
  end
end
