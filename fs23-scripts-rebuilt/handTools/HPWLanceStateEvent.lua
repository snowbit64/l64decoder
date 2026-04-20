-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HPWLanceStateEvent = {}
local HPWLanceStateEvent_mt = Class(HPWLanceStateEvent, Event)
InitStaticEventClass(HPWLanceStateEvent, "HPWLanceStateEvent", EventIds.EVENT_HIGHPRESSURE_WASHER_LANCE_STATE)
function HPWLanceStateEvent.emptyNew()
  return Event.new(u0)
end
function HPWLanceStateEvent.new(player, doWashing)
  local v2 = HPWLanceStateEvent.emptyNew()
  v2.player = player
  v2.doWashing = doWashing
  return v2
end
function HPWLanceStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadBool(streamId)
  self.doWashing = v3
  self:run(connection)
end
function HPWLanceStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteBool(streamId, self.doWashing)
end
function HPWLanceStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  if self.player.baseInformation.currentHandtool ~= nil and self.player.baseInformation.currentHandtool.setIsWashing ~= nil then
    self.player.baseInformation.currentHandtool:setIsWashing(self.doWashing, false, true)
  end
end
function HPWLanceStateEvent:sendEvent(v1, v2)
  if self.baseInformation.currentHandtool ~= nil and self.baseInformation.currentHandtool.setIsWashing ~= nil and v1 ~= self.baseInformation.currentHandtool.doWashing then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L53
    end
    if g_server ~= nil then
      local v6 = HPWLanceStateEvent.new(self, v1)
      v4:broadcastEvent(v6, nil, nil, self)
      return
    end
    local v4 = v4:getServerConnection()
    v6 = HPWLanceStateEvent.new(self, v1)
    v4:sendEvent(...)
  end
end
