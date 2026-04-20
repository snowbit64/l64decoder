-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleAttachEvent = {}
local VehicleAttachEvent_mt = Class(VehicleAttachEvent, Event)
InitStaticEventClass(VehicleAttachEvent, "VehicleAttachEvent", EventIds.EVENT_VEHICLE_ATTACH)
function VehicleAttachEvent.emptyNew()
  return Event.new(u0)
end
function VehicleAttachEvent.new(vehicle, implement, inputJointIndex, jointIndex, startLowered)
  local v5 = VehicleAttachEvent.emptyNew()
  v5.jointIndex = jointIndex
  v5.inputJointIndex = inputJointIndex
  v5.vehicle = vehicle
  v5.implement = implement
  v5.startLowered = startLowered
  if 0 <= v5.jointIndex and v5.jointIndex >= 127 then
  end
  assert(v7)
  return v5
end
function VehicleAttachEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.implement = v3
  v3 = streamReadUIntN(streamId, 7)
  self.jointIndex = v3
  v3 = streamReadUIntN(streamId, 7)
  self.inputJointIndex = v3
  v3 = streamReadBool(streamId)
  self.startLowered = v3
  self:run(connection)
end
function VehicleAttachEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  NetworkUtil.writeNodeObject(streamId, self.implement)
  streamWriteUIntN(streamId, self.jointIndex, 7)
  streamWriteUIntN(streamId, self.inputJointIndex, 7)
  streamWriteBool(streamId, self.startLowered)
end
function VehicleAttachEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      if self.implement == nil then
        Logging.error("Failed to attach unknown implement to vehicle '%s' between joints '%d' and '%d'", self.vehicle.configFileName, self.jointIndex, self.inputJointIndex)
        return
      end
      v2:attachImplement(self.implement, self.inputJointIndex, self.jointIndex, true, nil, self.startLowered)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, nil, connection, self.object)
  end
end
