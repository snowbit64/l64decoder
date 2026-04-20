-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobStopEvent = {}
local AIJobStopEvent_mt = Class(AIJobStopEvent, Event)
InitStaticEventClass(AIJobStopEvent, "AIJobStopEvent", EventIds.EVENT_AI_JOB_STOP)
function AIJobStopEvent.emptyNew()
  return Event.new(u0)
end
function AIJobStopEvent.new(job, aiMessage)
  local v2 = AIJobStopEvent.emptyNew()
  v2.aiMessage = aiMessage
  v2.job = job
  return v2
end
function AIJobStopEvent:readStream(streamId, connection)
  local v3 = streamReadInt32(streamId)
  local v4 = v4:getJobById(v3)
  self.job = v4
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadInt32(streamId)
    local v5 = v5:createMessage(v4)
    self.aiMessage = v5
    v5:readStream(streamId, connection)
  end
  self:run(connection)
end
function AIJobStopEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.job.jobId)
  if self.aiMessage == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    v3 = v3:getMessageIndex(self.aiMessage)
    streamWriteInt32(streamId, v3)
    v4:writeStream(streamId, connection)
  end
end
function AIJobStopEvent:run(connection)
  if self.job ~= nil then
    local v2 = connection:getIsServer()
    if v2 then
      v2:stopJobInternal(self.job, self.aiMessage)
      return
    end
    v2:stopJob(self.job, self.aiMessage)
  end
end
