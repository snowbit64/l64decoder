-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetCruiseControlStateEvent = {}
local SetCruiseControlStateEvent_mt = Class(SetCruiseControlStateEvent, Event)
InitStaticEventClass(SetCruiseControlStateEvent, "SetCruiseControlStateEvent", EventIds.EVENT_CRUISECONTROL_SET_STATE)
function SetCruiseControlStateEvent.emptyNew()
  return Event.new(u0)
end
function SetCruiseControlStateEvent.new(vehicle, state)
  local v2 = SetCruiseControlStateEvent.emptyNew()
  v2.state = state
  v2.vehicle = vehicle
  return v2
end
function SetCruiseControlStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, 2)
  self.state = v3
  self:run(connection)
end
function SetCruiseControlStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.state, 2)
end
function SetCruiseControlStateEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setCruiseControlState(self.state, true)
    end
  end
end
