-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobSkipTaskEvent = {}
local AIJobSkipTaskEvent_mt = Class(AIJobSkipTaskEvent, Event)
InitStaticEventClass(AIJobSkipTaskEvent, "AIJobSkipTaskEvent", EventIds.EVENT_AI_JOB_SKIP_TASK)
function AIJobSkipTaskEvent.emptyNew()
  return Event.new(u0)
end
function AIJobSkipTaskEvent.new(job)
  local v1 = AIJobSkipTaskEvent.emptyNew()
  v1.job = job
  return v1
end
function AIJobSkipTaskEvent:readStream(streamId, connection)
  local jobId = streamReadInt32(streamId)
  local v4 = v4:getJobById(jobId)
  self.job = v4
  self:run(connection)
end
function AIJobSkipTaskEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.job.jobId)
end
function AIJobSkipTaskEvent:run(connection)
  local v4 = connection:getIsServer()
  assert(not v4, "AIJobSkipTaskEvent is client to server only")
  v2:skipCurrentTaskInternal(self.job)
  if Platform.isMobile then
    v2:publish(MessageType.AI_TASK_SKIPPED)
  end
end
