-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetDischargeStateEvent = {}
local SetDischargeStateEvent_mt = Class(SetDischargeStateEvent, Event)
InitStaticEventClass(SetDischargeStateEvent, "SetDischargeStateEvent", EventIds.EVENT_SET_DISCHARGE_STATE)
function SetDischargeStateEvent.emptyNew()
  return Event.new(u0)
end
function SetDischargeStateEvent.new(vehicle, state)
  local v2 = SetDischargeStateEvent.emptyNew()
  v2.vehicle = vehicle
  v2.state = state
  return v2
end
function SetDischargeStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, 2)
  self.state = v3
  self:run(connection)
end
function SetDischargeStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.state, 2)
end
function SetDischargeStateEvent:run(connection)
  if self.vehicle ~= nil and self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setDischargeState(self.state, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetDischargeStateEvent.new(self.vehicle, self.state)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function SetDischargeStateEvent.sendEvent(vehicle, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SetDischargeStateEvent.new(vehicle, state)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SetDischargeStateEvent.new(vehicle, state)
  v3:sendEvent(...)
end
