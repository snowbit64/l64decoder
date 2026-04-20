-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerPickUpObjectEvent = {}
local PlayerPickUpObjectEvent_mt = Class(PlayerPickUpObjectEvent, Event)
InitStaticEventClass(PlayerPickUpObjectEvent, "PlayerPickUpObjectEvent", EventIds.EVENT_PLAYER_PICKUP_OBJECT)
function PlayerPickUpObjectEvent.emptyNew()
  return Event.new(u0)
end
function PlayerPickUpObjectEvent.new(player, state)
  local v2 = PlayerPickUpObjectEvent.emptyNew()
  v2.player = player
  v2.state = state
  return v2
end
function PlayerPickUpObjectEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function PlayerPickUpObjectEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteBool(streamId, self.state)
end
function PlayerPickUpObjectEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  v2:pickUpObject(self.state, true)
end
function PlayerPickUpObjectEvent.sendEvent(player, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlayerPickUpObjectEvent.new(player, state)
    v3:broadcastEvent(v5, nil, nil, player)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlayerPickUpObjectEvent.new(player, state)
  v3:sendEvent(...)
end
