-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerSetHandToolEvent = {}
local PlayerSetHandToolEvent_mt = Class(PlayerSetHandToolEvent, Event)
InitStaticEventClass(PlayerSetHandToolEvent, "PlayerSetHandToolEvent", EventIds.EVENT_PLAYER_SET_HANDTOOL)
function PlayerSetHandToolEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSetHandToolEvent.new(player, handtoolFileName, force)
  local v3 = PlayerSetHandToolEvent.emptyNew()
  v3.player = player
  v3.handtoolFileName = handtoolFileName
  v3.force = force
  return v3
end
function PlayerSetHandToolEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  local v4 = streamReadString(streamId)
  v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.handtoolFileName = v3
  v3 = streamReadBool(streamId)
  self.force = v3
  self:run(connection)
end
function PlayerSetHandToolEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  local v5 = NetworkUtil.convertToNetworkFilename(self.handtoolFileName)
  streamWriteString(...)
  streamWriteBool(streamId, self.force)
end
function PlayerSetHandToolEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  v2:equipHandtool(self.handtoolFileName, self.force, true)
end
function PlayerSetHandToolEvent.sendEvent(player, handtoolFileName, force, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = PlayerSetHandToolEvent.new(player, handtoolFileName, force)
    v4:broadcastEvent(v6, nil, nil, player)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = PlayerSetHandToolEvent.new(player, handtoolFileName, force)
  v4:sendEvent(...)
end
