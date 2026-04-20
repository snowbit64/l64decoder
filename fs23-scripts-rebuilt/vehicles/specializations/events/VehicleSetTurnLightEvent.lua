-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSetTurnLightEvent = {}
local VehicleSetTurnLightEvent_mt = Class(VehicleSetTurnLightEvent, Event)
InitStaticEventClass(VehicleSetTurnLightEvent, "VehicleSetTurnLightEvent", EventIds.EVENT_VEHICLE_SET_TURNLIGHT)
function VehicleSetTurnLightEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSetTurnLightEvent.new(object, state)
  local v2 = VehicleSetTurnLightEvent.emptyNew()
  v2.object = object
  v2.state = state
  if 0 <= state and state > Lights.TURNLIGHT_HAZARD then
  end
  assert(v4)
  return v2
end
function VehicleSetTurnLightEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, Lights.turnLightSendNumBits)
  self.state = v3
  self:run(connection)
end
function VehicleSetTurnLightEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.state, Lights.turnLightSendNumBits)
end
function VehicleSetTurnLightEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setTurnLightState(self.state, true, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = VehicleSetTurnLightEvent.new(self.object, self.state)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
