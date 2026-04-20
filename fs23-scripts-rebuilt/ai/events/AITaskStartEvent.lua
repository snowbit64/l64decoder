-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskStartEvent = {}
local AITaskStartEvent_mt = Class(AITaskStartEvent, Event)
InitStaticEventClass(AITaskStartEvent, "AITaskStartEvent", EventIds.EVENT_AI_TASK_START)
function AITaskStartEvent.emptyNew()
  return Event.new(u0)
end
function AITaskStartEvent.new(job, task)
  local v2 = AITaskStartEvent.emptyNew()
  v2.job = job
  v2.task = task
  return v2
end
function AITaskStartEvent:readStream(streamId, connection)
  local jobId = streamReadInt32(streamId)
  local v4 = v4:getJobById(jobId)
  self.job = v4
  local v6 = streamReadUInt8(streamId)
  v4 = v4:getTaskByIndex(...)
  self.task = v4
  self:run(connection)
end
function AITaskStartEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.job.jobId)
  streamWriteUInt8(streamId, self.task.taskIndex)
end
function AITaskStartEvent:run(connection)
  v2:startTask(self.task)
end
