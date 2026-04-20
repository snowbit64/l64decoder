-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrailerToggleManualDoorEvent = {}
local TrailerToggleManualDoorEvent_mt = Class(TrailerToggleManualDoorEvent, Event)
InitStaticEventClass(TrailerToggleManualDoorEvent, "TrailerToggleManualDoorEvent", EventIds.EVENT_TRAILER_TOGGLE_MANUAL_DOOR)
function TrailerToggleManualDoorEvent.emptyNew()
  return Event.new(u0)
end
function TrailerToggleManualDoorEvent.new(object, state)
  local v2 = TrailerToggleManualDoorEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function TrailerToggleManualDoorEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function TrailerToggleManualDoorEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function TrailerToggleManualDoorEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setTrailerDoorState(self.state, true)
    end
  end
end
function TrailerToggleManualDoorEvent.sendEvent(vehicle, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = TrailerToggleManualDoorEvent.new(vehicle, state)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = TrailerToggleManualDoorEvent.new(vehicle, state)
  v3:sendEvent(...)
end
