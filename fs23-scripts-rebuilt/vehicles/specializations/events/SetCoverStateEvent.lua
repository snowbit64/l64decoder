-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetCoverStateEvent = {}
local SetCoverStateEvent_mt = Class(SetCoverStateEvent, Event)
InitStaticEventClass(SetCoverStateEvent, "SetCoverStateEvent", EventIds.EVENT_SET_COVER_STATE)
function SetCoverStateEvent.emptyNew()
  return Event.new(u0)
end
function SetCoverStateEvent.new(vehicle, state)
  local v2 = SetCoverStateEvent.emptyNew()
  v2.vehicle = vehicle
  v2.state = state
  return v2
end
function SetCoverStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, Cover.SEND_NUM_BITS)
  self.state = v3
  self:run(connection)
end
function SetCoverStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.state, Cover.SEND_NUM_BITS)
end
function SetCoverStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.vehicle)
  end
  if self.vehicle ~= nil and self.vehicle ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setCoverState(self.state, true)
    end
  end
end
function SetCoverStateEvent:sendEvent(v1, v2)
  if self.spec_cover.state ~= v1 then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L45
    end
    if g_server ~= nil then
      local v5 = SetCoverStateEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = SetCoverStateEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
