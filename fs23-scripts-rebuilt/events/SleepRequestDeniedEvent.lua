-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepRequestDeniedEvent = {}
local SleepRequestDeniedEvent_mt = Class(SleepRequestDeniedEvent, Event)
InitStaticEventClass(SleepRequestDeniedEvent, "SleepRequestDeniedEvent", EventIds.EVENT_SLEEP_REQUEST_DENIED)
function SleepRequestDeniedEvent.emptyNew()
  return Event.new(u0)
end
function SleepRequestDeniedEvent.new(userId)
  local v1 = SleepRequestDeniedEvent.emptyNew()
  v1.userId = userId or 0
  return v1
end
function SleepRequestDeniedEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "SleepRequestDeniedEvent is a server to client only event")
  local v3 = streamReadInt32(streamId)
  self.userId = v3
  self:run(connection)
end
function SleepRequestDeniedEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.userId)
end
function SleepRequestDeniedEvent:run(connection)
  if g_sleepManager ~= nil then
    v2:onSleepRequestDenied(self.userId)
  end
end
