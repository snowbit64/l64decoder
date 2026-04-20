-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RemovePlayerFromFarmEvent = {}
local RemovePlayerFromFarmEvent_mt = Class(RemovePlayerFromFarmEvent, Event)
InitStaticEventClass(RemovePlayerFromFarmEvent, "RemovePlayerFromFarmEvent", EventIds.EVENT_REMOVE_PLAYER_FROM_FARM)
function RemovePlayerFromFarmEvent.emptyNew()
  return Event.new(u0)
end
function RemovePlayerFromFarmEvent.new(userId)
  local v1 = RemovePlayerFromFarmEvent.emptyNew()
  v1.userId = userId
  return v1
end
function RemovePlayerFromFarmEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
end
function RemovePlayerFromFarmEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self:run(connection)
end
function RemovePlayerFromFarmEvent:run(connection)
  local v2 = v2:getFarmId(connection)
  local v3 = v3:getHasPlayerPermission(Farm.PERMISSION.MANAGE_RIGHTS, connection, v2)
  if v3 then
    for v7, v8 in pairs(g_currentMission.players) do
      if not (v8.userId == self.userId) then
        continue
      end
      break
    end
    if v3 ~= nil then
      v4 = v4:getServerConnection()
      v6 = PlayerSetFarmEvent.new(v3, FarmManager.SPECTATOR_FARM_ID, nil)
      v4:sendEvent(...)
    end
  end
end
