-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobStartRequestEvent = {}
local AIJobStartRequestEvent_mt = Class(AIJobStartRequestEvent, Event)
InitStaticEventClass(AIJobStartRequestEvent, "AIJobStartRequestEvent", EventIds.EVENT_AI_JOB_START_REQUEST)
function AIJobStartRequestEvent.emptyNew()
  return Event.new(u0)
end
function AIJobStartRequestEvent.new(job, startFarmId)
  local v2 = AIJobStartRequestEvent.emptyNew()
  v2.job = job
  v2.startFarmId = startFarmId
  return v2
end
function AIJobStartRequestEvent.newServerToClient(state, jobTypeIndex)
  local v2 = AIJobStartRequestEvent.emptyNew()
  v2.state = state
  v2.jobTypeIndex = jobTypeIndex
  return v2
end
function AIJobStartRequestEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = streamReadUInt8(streamId)
    self.startFarmId = v3
    v3 = streamReadUInt16(streamId)
    local v4 = v4:createJob(v3)
    self.job = v4
    v4:readStream(streamId, connection)
  else
    v3 = streamReadUInt8(streamId)
    self.state = v3
    v3 = streamReadUInt16(streamId)
    self.jobTypeIndex = v3
  end
  self:run(connection)
end
function AIJobStartRequestEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    streamWriteUInt8(streamId, self.startFarmId)
    v3 = v3:getJobTypeIndex(self.job)
    streamWriteUInt16(streamId, v3)
    v4:writeStream(streamId, connection)
    return
  end
  streamWriteUInt8(streamId, self.state)
  streamWriteUInt16(streamId, self.jobTypeIndex)
end
function AIJobStartRequestEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getJobTypeIndex(self.job)
    local v3, v4 = v3:getIsStartable(connection)
    if not v3 then
      local v7 = AIJobStartRequestEvent.newServerToClient(v4, v2)
      connection:sendEvent(...)
      return
    end
    v7 = AIJobStartRequestEvent.newServerToClient(0, v2)
    connection:sendEvent(...)
    v5:startJob(self.job, self.startFarmId)
    return
  end
  v2:publish(AIJobStartRequestEvent, self.state, self.jobTypeIndex)
end
