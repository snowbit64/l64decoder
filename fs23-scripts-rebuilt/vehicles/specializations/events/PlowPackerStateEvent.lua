-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowPackerStateEvent = {}
local PlowPackerStateEvent_mt = Class(PlowPackerStateEvent, Event)
InitStaticEventClass(PlowPackerStateEvent, "PlowPackerStateEvent", EventIds.EVENT_PLOW_PACKER_STATE)
function PlowPackerStateEvent.emptyNew()
  return Event.new(u0)
end
function PlowPackerStateEvent.new(object, state, updateAnimations)
  local v3 = PlowPackerStateEvent.emptyNew()
  v3.object = object
  v3.state = state
  v3.updateAnimations = updateAnimations
  return v3
end
function PlowPackerStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  v3 = streamReadBool(streamId)
  self.updateAnimations = v3
  self:run(connection)
end
function PlowPackerStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
  streamWriteBool(streamId, self.updateAnimations)
end
function PlowPackerStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPackerState(self.state, self.updateAnimations, true)
    end
  end
end
function PlowPackerStateEvent.sendEvent(object, state, updateAnimations, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = PlowPackerStateEvent.new(object, state, updateAnimations)
    v4:broadcastEvent(v6, nil, nil, object)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = PlowPackerStateEvent.new(object, state, updateAnimations)
  v4:sendEvent(...)
end
