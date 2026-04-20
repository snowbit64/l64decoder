-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerSetStyleEvent = {}
local PlayerSetStyleEvent_mt = Class(PlayerSetStyleEvent, Event)
InitStaticEventClass(PlayerSetStyleEvent, "PlayerSetStyleEvent", EventIds.EVENT_PLAYER_SET_STYLE)
function PlayerSetStyleEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSetStyleEvent.new(player, style)
  local v2 = PlayerSetStyleEvent.emptyNew()
  v2.player = player
  v2.style = style
  return v2
end
function PlayerSetStyleEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  v3:writeStream(streamId, connection)
end
function PlayerSetStyleEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = PlayerStyle.new()
  self.style = v3
  v3:readStream(streamId, connection)
  self:run(connection)
end
function PlayerSetStyleEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:setStyleAsync(self.style, nil, false)
    return
  end
  v2:setStyleAsync(self.style, nil, true)
end
function PlayerSetStyleEvent.sendEvent(player, style, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlayerSetStyleEvent.new(player, style)
    v3:broadcastEvent(v5, nil, nil, player)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlayerSetStyleEvent.new(player, style)
  v3:sendEvent(...)
end
