-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RidgeMarkerSetStateEvent = {}
local RidgeMarkerSetStateEvent_mt = Class(RidgeMarkerSetStateEvent, Event)
InitStaticEventClass(RidgeMarkerSetStateEvent, "RidgeMarkerSetStateEvent", EventIds.EVENT_RIDGE_MARKER_SET_STATE)
function RidgeMarkerSetStateEvent.emptyNew()
  return Event.new(u0)
end
function RidgeMarkerSetStateEvent.new(vehicle, state)
  local v2 = RidgeMarkerSetStateEvent.emptyNew()
  v2.vehicle = vehicle
  v2.state = state
  if 0 <= state and state >= RidgeMarker.MAX_NUM_RIDGEMARKERS then
  end
  assert(v4)
  return v2
end
function RidgeMarkerSetStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, RidgeMarker.SEND_NUM_BITS)
  self.state = v3
  self:run(connection)
end
function RidgeMarkerSetStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.state, RidgeMarker.SEND_NUM_BITS)
end
function RidgeMarkerSetStateEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setRidgeMarkerState(self.state, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = RidgeMarkerSetStateEvent.new(self.vehicle, self.state)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function RidgeMarkerSetStateEvent.sendEvent(vehicle, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = RidgeMarkerSetStateEvent.new(vehicle, state)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = RidgeMarkerSetStateEvent.new(vehicle, state)
  v3:sendEvent(...)
end
