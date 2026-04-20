-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionCancelEvent = {}
local MissionCancelEvent_mt = Class(MissionCancelEvent, Event)
InitStaticEventClass(MissionCancelEvent, "MissionCancelEvent", EventIds.EVENT_MISSION_CANCEL)
function MissionCancelEvent.emptyNew()
  return Event.new(u0)
end
function MissionCancelEvent.new(mission)
  local v1 = MissionCancelEvent.emptyNew()
  v1.mission = mission
  return v1
end
function MissionCancelEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.mission)
end
function MissionCancelEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.mission = v3
  self:run(connection)
end
function MissionCancelEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserIdByConnection(connection)
    local v3 = v3:getFarmByUserId(v2)
    local v4 = connection:getIsLocal()
    if not v4 then
      v4 = v4:getIsConnectionMasterUser(connection)
    end
    local v5 = v5:getHasPlayerPermission("manageContracts", connection, v3.farmId)
    if v5 then
      if self.mission.farmId ~= v3.farmId then
        -- if not v4 then goto L52 end
      end
      v5:cancelMission(self.mission)
    end
  end
end
