-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionFinishedEvent = {}
local MissionFinishedEvent_mt = Class(MissionFinishedEvent, Event)
InitStaticEventClass(MissionFinishedEvent, "MissionFinishedEvent", EventIds.EVENT_MISSION_FINISHED)
function MissionFinishedEvent.emptyNew()
  return Event.new(u0)
end
function MissionFinishedEvent.new(mission, success, stealingCost)
  local v3 = MissionFinishedEvent.emptyNew()
  v3.mission = mission
  v3.success = success
  v3.stealingCost = stealingCost
  return v3
end
function MissionFinishedEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.mission)
  streamWriteBool(streamId, self.success)
  streamWriteFloat32(streamId, self.stealingCost)
end
function MissionFinishedEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.mission = v3
  v3 = streamReadBool(streamId)
  self.success = v3
  v3 = streamReadFloat32(streamId)
  self.stealingCost = v3
  self:run(connection)
end
function MissionFinishedEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    self.mission.stealingCost = self.stealingCost
    v2:finish(self.success)
  end
end
