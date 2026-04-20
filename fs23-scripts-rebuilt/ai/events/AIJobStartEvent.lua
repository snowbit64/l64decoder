-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobStartEvent = {}
local AIJobStartEvent_mt = Class(AIJobStartEvent, Event)
InitStaticEventClass(AIJobStartEvent, "AIJobStartEvent", EventIds.EVENT_AI_JOB_START)
function AIJobStartEvent.emptyNew()
  return Event.new(u0)
end
function AIJobStartEvent.new(job, startFarmId)
  local v2 = AIJobStartEvent.emptyNew()
  v2.job = job
  v2.startFarmId = startFarmId
  return v2
end
function AIJobStartEvent:readStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(v4, "AIJobStartEvent is a server to client only event")
  local v3 = streamReadUInt8(streamId)
  self.startFarmId = v3
  v3 = streamReadInt32(streamId)
  v4 = v4:createJob(v3)
  self.job = v4
  v4:readStream(streamId, connection)
  self:run(connection)
end
function AIJobStartEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.startFarmId)
  local v3 = v3:getJobTypeIndex(self.job)
  streamWriteInt32(streamId, v3)
  v4:writeStream(streamId, connection)
end
function AIJobStartEvent:run(connection)
  v2:startJobInternal(self.job, self.startFarmId)
end
