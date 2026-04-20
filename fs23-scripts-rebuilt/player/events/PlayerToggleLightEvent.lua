-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerToggleLightEvent = {}
local PlayerToggleLightEvent_mt = Class(PlayerToggleLightEvent, Event)
InitStaticEventClass(PlayerToggleLightEvent, "PlayerToggleLightEvent", EventIds.EVENT_PLAYER_TOGGLE_LIGHT)
function PlayerToggleLightEvent.emptyNew()
  return Event.new(u0)
end
function PlayerToggleLightEvent.new(player, isActive)
  local v2 = PlayerToggleLightEvent.emptyNew()
  v2.player = player
  v2.isActive = isActive
  return v2
end
function PlayerToggleLightEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function PlayerToggleLightEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteBool(streamId, self.isActive)
end
function PlayerToggleLightEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  v2:setLightIsActive(self.isActive, true)
end
function PlayerToggleLightEvent.sendEvent(player, active, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlayerToggleLightEvent.new(player, active)
    v3:broadcastEvent(v5, nil, nil, player)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlayerToggleLightEvent.new(player, active)
  v3:sendEvent(...)
end
