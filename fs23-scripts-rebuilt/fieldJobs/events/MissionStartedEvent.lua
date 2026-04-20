-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionStartedEvent = {}
local MissionStartedEvent_mt = Class(MissionStartedEvent, Event)
InitStaticEventClass(MissionStartedEvent, "MissionStartedEvent", EventIds.EVENT_MISSION_STARTED)
function MissionStartedEvent.emptyNew()
  return Event.new(u0)
end
function MissionStartedEvent.new(mission)
  local v1 = MissionStartedEvent.emptyNew()
  v1.mission = mission
  return v1
end
function MissionStartedEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    NetworkUtil.writeNodeObject(streamId, self.mission)
    streamWriteUInt8(streamId, self.mission.status)
    streamWriteUIntN(streamId, self.mission.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteInt32(streamId, self.mission.activeMissionId)
  end
end
function MissionStartedEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.mission = v3
    local v4 = streamReadUInt8(streamId)
    self.mission.status = v4
    v4 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.mission.farmId = v4
    v4 = streamReadInt32(streamId)
    self.mission.activeMissionId = v4
  end
  self:run(connection)
end
function MissionStartedEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:started()
    v2:publish(MissionStartedEvent, self.mission)
  end
end
