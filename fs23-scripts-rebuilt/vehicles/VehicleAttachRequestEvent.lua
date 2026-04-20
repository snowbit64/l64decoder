-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleAttachRequestEvent = {}
local VehicleAttachRequestEvent_mt = Class(VehicleAttachRequestEvent, Event)
InitStaticEventClass(VehicleAttachRequestEvent, "VehicleAttachRequestEvent", EventIds.EVENT_VEHICLE_ATTACH_REQUEST)
function VehicleAttachRequestEvent.emptyNew()
  return Event.new(u0)
end
function VehicleAttachRequestEvent:new()
  local v1 = VehicleAttachRequestEvent.emptyNew()
  v1.attacherVehicle = self.attacherVehicle
  v1.attachable = self.attachable
  v1.attacherVehicleJointDescIndex = self.attacherVehicleJointDescIndex
  v1.attachableJointDescIndex = self.attachableJointDescIndex
  return v1
end
function VehicleAttachRequestEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.attacherVehicle = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.attachable = v3
  v3 = streamReadUIntN(streamId, 7)
  self.attacherVehicleJointDescIndex = v3
  v3 = streamReadUIntN(streamId, 7)
  self.attachableJointDescIndex = v3
  self:run(connection)
end
function VehicleAttachRequestEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.attacherVehicle)
  NetworkUtil.writeNodeObject(streamId, self.attachable)
  streamWriteUIntN(streamId, self.attacherVehicleJointDescIndex, 7)
  streamWriteUIntN(streamId, self.attachableJointDescIndex, 7)
end
function VehicleAttachRequestEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and self.attacherVehicle ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:attachImplementFromInfo(self)
    end
  end
end
