-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ClientStartMissionEvent = {}
local ClientStartMissionEvent_mt = Class(ClientStartMissionEvent, Event)
InitStaticEventClass(ClientStartMissionEvent, "ClientStartMissionEvent", EventIds.EVENT_CLIENT_START_MISSION)
function ClientStartMissionEvent.emptyNew()
  return Event.new(u0)
end
function ClientStartMissionEvent.new(userId)
  return ClientStartMissionEvent.emptyNew()
end
function ClientStartMissionEvent.writeStream(v0, v1, v2)
end
function ClientStartMissionEvent:readStream(streamId, connection)
  self:run(connection)
end
function ClientStartMissionEvent.run(v0, v1)
  local v4 = v1:getIsServer()
  assert(not v4, "ClientStartMissionEvent is a client to server event only!")
  local v2 = v2:getUserByConnection(v1)
  v2:setState(FSBaseMission.USER_STATE_INGAME)
end
