-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleLeaveEvent = {}
local VehicleLeaveEvent_mt = Class(VehicleLeaveEvent, Event)
InitStaticEventClass(VehicleLeaveEvent, "VehicleLeaveEvent", EventIds.EVENT_VEHICLE_LEAVE)
function VehicleLeaveEvent.emptyNew()
  return Event.new(u0)
end
function VehicleLeaveEvent.new(object)
  local v1 = VehicleLeaveEvent.emptyNew()
  v1.object = object
  return v1
end
function VehicleLeaveEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function VehicleLeaveEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function VehicleLeaveEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2 = connection:getIsServer()
      if not v2 then
        if self.object.owner ~= nil then
          v2:setOwner(nil)
          self.object.controllerFarmId = nil
        end
        local v4 = VehicleLeaveEvent.new(self.object)
        v2:broadcastEvent(v4, nil, connection, self.object)
      end
      v2:leaveVehicle()
    end
  end
end
