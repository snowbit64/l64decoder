-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepResponseEvent = {}
local SleepResponseEvent_mt = Class(SleepResponseEvent, Event)
InitStaticEventClass(SleepResponseEvent, "SleepResponseEvent", EventIds.EVENT_SLEEP_RESPONSE)
function SleepResponseEvent.emptyNew()
  return Event.new(u0)
end
function SleepResponseEvent.new(answer)
  local v1 = SleepResponseEvent.emptyNew()
  v1.answer = answer
  return v1
end
function SleepResponseEvent:readStream(streamId, connection)
  local v5 = connection:getIsServer()
  assert(not v5, "SleepResponseEvent is a client to server only event")
  local v3 = streamReadBool(streamId)
  self.answer = v3
  self:run(connection)
end
function SleepResponseEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.answer)
end
function SleepResponseEvent:run(connection)
  if g_sleepManager ~= nil then
    v2:onSleepResponse(connection, self.answer)
  end
end
