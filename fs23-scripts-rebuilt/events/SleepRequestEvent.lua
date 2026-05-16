-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepRequestEvent = {}
local SleepRequestEvent_mt = Class(SleepRequestEvent, Event)
InitStaticEventClass(SleepRequestEvent, "SleepRequestEvent", EventIds.EVENT_SLEEP_REQUEST)
function SleepRequestEvent.emptyNew()
  return Event.new(u0)
end
function SleepRequestEvent.new(userId, targetTime)
  local v2 = SleepRequestEvent.emptyNew()
  v2.userId = userId
  v2.targetTime = targetTime
  return v2
end
function SleepRequestEvent:readStream(streamId, connection)
  local v3 = streamReadInt8(streamId)
  self.userId = v3
  v3 = streamReadInt32(streamId)
  self.targetTime = v3
  self:run(connection)
end
function SleepRequestEvent:writeStream(streamId, connection)
  streamWriteInt8(streamId, self.userId)
  streamWriteInt32(streamId, self.targetTime)
end
function SleepRequestEvent:run(connection)
  if g_sleepManager ~= nil then
    local v2 = connection:getIsServer()
    if v2 then
      v2:onSleepRequest(self.userId, self.targetTime)
      return
    end
    v2:startSleepRequest(self.userId, self.targetTime)
  end
end
