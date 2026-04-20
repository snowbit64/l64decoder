-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskStopEvent = {}
local AITaskStopEvent_mt = Class(AITaskStopEvent, Event)
InitStaticEventClass(AITaskStopEvent, "AITaskStopEvent", EventIds.EVENT_AI_TASK_STOP)
function AITaskStopEvent.emptyNew()
  return Event.new(u0)
end
function AITaskStopEvent.new(job, task, wasJobStopped)
  local v3 = AITaskStopEvent.emptyNew()
  v3.job = job
  v3.wasJobStopped = wasJobStopped
  v3.task = task
  return v3
end
function AITaskStopEvent:readStream(streamId, connection)
  local jobId = streamReadInt32(streamId)
  local v4 = v4:getJobById(jobId)
  self.job = v4
  local v6 = streamReadUInt8(streamId)
  v4 = v4:getTaskByIndex(...)
  self.task = v4
  v4 = streamReadBool(streamId)
  self.wasJobStopped = v4
  self:run(connection)
end
function AITaskStopEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.job.jobId)
  streamWriteUInt8(streamId, self.task.taskIndex)
  streamWriteBool(streamId, self.wasJobStopped)
end
function AITaskStopEvent:run(connection)
  v2:stopTask(self.task, self.wasJobStopped)
end
