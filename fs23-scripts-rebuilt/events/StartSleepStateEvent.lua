-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StartSleepStateEvent = {}
local StartSleepStateEvent_mt = Class(StartSleepStateEvent, Event)
InitStaticEventClass(StartSleepStateEvent, "StartSleepStateEvent", EventIds.EVENT_SLEEP_START)
function StartSleepStateEvent.emptyNew()
  return Event.new(u0)
end
function StartSleepStateEvent.new(targetTime)
  local v1 = StartSleepStateEvent.emptyNew()
  v1.targetTime = targetTime
  return v1
end
function StartSleepStateEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "StartSleepStateEvent is a server to client only event")
  local v3 = streamReadInt32(streamId)
  self.targetTime = v3
  self:run(connection)
end
function StartSleepStateEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.targetTime)
end
function StartSleepStateEvent:run(connection)
  if g_sleepManager ~= nil then
    v2:startSleep(self.targetTime)
  end
end
