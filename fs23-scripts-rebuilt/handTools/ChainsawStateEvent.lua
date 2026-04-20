-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChainsawStateEvent = {}
local ChainsawStateEvent_mt = Class(ChainsawStateEvent, Event)
InitStaticEventClass(ChainsawStateEvent, "ChainsawStateEvent", EventIds.EVENT_CHAINSAW_STATE)
function ChainsawStateEvent.emptyNew()
  return Event.new(u0)
end
function ChainsawStateEvent.new(player, isCutting, isHorizontalCut, hasBeencut)
  local v4 = ChainsawStateEvent.emptyNew()
  v4.player = player
  v4.isCutting = isCutting
  v4.isHorizontalCut = isHorizontalCut
  v4.hasBeenCut = hasBeencut
  return v4
end
function ChainsawStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadBool(streamId)
  self.isCutting = v3
  v3 = streamReadBool(streamId)
  self.isHorizontalCut = v3
  v3 = streamReadBool(streamId)
  self.hasBeenCut = v3
  self:run(connection)
end
function ChainsawStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteBool(streamId, self.isCutting)
  streamWriteBool(streamId, self.isHorizontalCut)
  streamWriteBool(streamId, self.hasBeenCut)
end
function ChainsawStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.player)
  end
  if self.player.baseInformation.currentHandtool ~= nil and self.player.baseInformation.currentHandtool.setCutting ~= nil then
    self.player.baseInformation.currentHandtool:setCutting(self.isCutting, self.isHorizontalCut, self.hasBeenCut, true)
  end
end
function ChainsawStateEvent:sendEvent(v1, v2, v3, v4)
  if self.baseInformation.currentHandtool ~= nil and self.baseInformation.currentHandtool.setCutting ~= nil then
    if self.baseInformation.currentHandtool.isCutting == v1 then
      -- if v0.baseInformation.currentHandtool.hasBeenCut == v3 then goto L61 end
    end
    if v4 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L61
    end
    if g_server ~= nil then
      local v8 = ChainsawStateEvent.new(self, v1, v2, v3)
      v6:broadcastEvent(v8, nil, nil, self)
      return
    end
    local v6 = v6:getServerConnection()
    v8 = ChainsawStateEvent.new(self, v1, v2, v3)
    v6:sendEvent(...)
  end
end
