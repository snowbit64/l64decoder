-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionDismissEvent = {}
local MissionDismissEvent_mt = Class(MissionDismissEvent, Event)
InitStaticEventClass(MissionDismissEvent, "MissionDismissEvent", EventIds.EVENT_MISSION_DISMISS)
function MissionDismissEvent.emptyNew()
  return Event.new(u0)
end
function MissionDismissEvent.new(mission)
  local v1 = MissionDismissEvent.emptyNew()
  v1.mission = mission
  return v1
end
function MissionDismissEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.mission)
end
function MissionDismissEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.mission = v3
  self:run(connection)
end
function MissionDismissEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserIdByConnection(connection)
    local v3 = v3:getFarmByUserId(v2)
    local v4 = connection:getIsLocal()
    if not v4 then
      v4 = v4:getIsConnectionMasterUser(connection)
    end
    local v5 = v5:getHasPlayerPermission("manageContracts", connection, v3.farmId)
    -- if not v5 then goto L78 end
    if self.mission.farmId ~= v3.farmId then
      -- if not v4 then goto L78 end
    end
    v5:dismissMission(self.mission)
    v5:publish(MissionDismissEvent, self.mission)
    return
  end
  v2:removeMissionFromList(self.mission)
  v2:publish(MissionDismissEvent, self.mission)
end
