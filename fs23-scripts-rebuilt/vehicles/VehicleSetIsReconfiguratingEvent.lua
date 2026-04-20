-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSetIsReconfiguratingEvent = {}
local VehicleSetIsReconfiguratingEvent_mt = Class(VehicleSetIsReconfiguratingEvent, Event)
InitStaticEventClass(VehicleSetIsReconfiguratingEvent, "VehicleSetIsReconfiguratingEvent", EventIds.EVENT_VEHICLE_SET_IS_RECONFIGURATING)
function VehicleSetIsReconfiguratingEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSetIsReconfiguratingEvent.new(object)
  local v1 = VehicleSetIsReconfiguratingEvent.emptyNew()
  v1.object = object
  return v1
end
function VehicleSetIsReconfiguratingEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  if self.object ~= nil then
    v3 = v3:getIsSynchronized()
    if v3 then
      self.object.isReconfigurating = true
    end
  end
end
function VehicleSetIsReconfiguratingEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
