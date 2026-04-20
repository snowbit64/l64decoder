-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerThrowObjectEvent = {}
local PlayerThrowObjectEvent_mt = Class(PlayerThrowObjectEvent, Event)
InitStaticEventClass(PlayerThrowObjectEvent, "PlayerThrowObjectEvent", EventIds.EVENT_PLAYER_THROW_OBJECT)
function PlayerThrowObjectEvent.emptyNew()
  return Event.new(u0)
end
function PlayerThrowObjectEvent.new(player)
  local v1 = PlayerThrowObjectEvent.emptyNew()
  v1.player = player
  return v1
end
function PlayerThrowObjectEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  self:run(connection)
end
function PlayerThrowObjectEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
end
function PlayerThrowObjectEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  v2:throwObject(true)
end
function PlayerThrowObjectEvent.sendEvent(player, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v4 = PlayerThrowObjectEvent.new(player)
    v2:broadcastEvent(v4, nil, nil, player)
    return
  end
  local v2 = v2:getServerConnection()
  v4 = PlayerThrowObjectEvent.new(player)
  v2:sendEvent(...)
end
