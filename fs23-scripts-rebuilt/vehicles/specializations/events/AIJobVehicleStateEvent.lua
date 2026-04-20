-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobVehicleStateEvent = {}
local AIJobVehicleStateEvent_mt = Class(AIJobVehicleStateEvent, Event)
InitStaticEventClass(AIJobVehicleStateEvent, "AIJobVehicleStateEvent", EventIds.EVENT_AI_JOBVEHICLE_STATE)
function AIJobVehicleStateEvent.emptyNew()
  return Event.new(u0)
end
function AIJobVehicleStateEvent.new(vehicle, job, helperIndex, startedFarmId)
  local v4 = AIJobVehicleStateEvent.emptyNew()
  v4.vehicle = vehicle
  v4.job = job
  v4.helperIndex = helperIndex
  v4.startedFarmId = startedFarmId
  return v4
end
function AIJobVehicleStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadInt32(streamId)
    local v4 = v4:getJobById(v3)
    self.job = v4
    v4 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.startedFarmId = v4
    v4 = streamReadUInt8(streamId)
    self.helperIndex = v4
  end
  self:run(connection)
end
function AIJobVehicleStateEvent:writeStream(streamId, connection)
  local v5 = connection:getIsServer()
  assert(not v5, "AIJobVehicleStateEvent is a server to client event only")
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  if self.job == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    streamWriteInt32(streamId, self.job.jobId)
    streamWriteUIntN(streamId, self.startedFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteUInt8(streamId, self.helperIndex)
  end
end
function AIJobVehicleStateEvent:run(connection)
  if self.vehicle ~= nil and self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      if self.job ~= nil then
        v2:aiJobStarted(self.job, self.helperIndex, self.startedFarmId)
        return
      end
      v2:aiJobFinished()
    end
  end
end
