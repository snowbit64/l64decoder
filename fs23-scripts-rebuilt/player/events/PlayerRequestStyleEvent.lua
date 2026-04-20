-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerRequestStyleEvent = {}
local PlayerRequestStyleEvent_mt = Class(PlayerRequestStyleEvent, Event)
InitStaticEventClass(PlayerRequestStyleEvent, "PlayerRequestStyleEvent", EventIds.EVENT_PLAYER_REQUEST_STYLE)
function PlayerRequestStyleEvent.emptyNew()
  return Event.new(u0)
end
function PlayerRequestStyleEvent.new(playerObjectId)
  local v1 = PlayerRequestStyleEvent.emptyNew()
  v1.playerObjectId = playerObjectId
  return v1
end
function PlayerRequestStyleEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.playerObjectId)
end
function PlayerRequestStyleEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.playerObjectId = v3
  v3 = NetworkUtil.getObject(self.playerObjectId)
  self.player = v3
  self:run(connection)
end
function PlayerRequestStyleEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getPlayerStyle(self.player.userId)
    local v5 = PlayerSetStyleEvent.new(self.player, v2)
    connection:sendEvent(...)
  end
end
