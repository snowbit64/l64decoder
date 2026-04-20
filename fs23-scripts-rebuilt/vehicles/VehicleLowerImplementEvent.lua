-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleLowerImplementEvent = {}
local VehicleLowerImplementEvent_mt = Class(VehicleLowerImplementEvent, Event)
InitStaticEventClass(VehicleLowerImplementEvent, "VehicleLowerImplementEvent", EventIds.EVENT_VEHICLE_LOWER_IMPLEMENT)
function VehicleLowerImplementEvent.emptyNew()
  return Event.new(u0)
end
function VehicleLowerImplementEvent.new(vehicle, jointIndex, moveDown)
  local v3 = VehicleLowerImplementEvent.emptyNew()
  v3.jointIndex = jointIndex
  v3.vehicle = vehicle
  v3.moveDown = moveDown
  return v3
end
function VehicleLowerImplementEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadInt8(streamId)
  self.jointIndex = v3
  v3 = streamReadBool(streamId)
  self.moveDown = v3
  self:run(connection)
end
function VehicleLowerImplementEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteInt8(streamId, self.jointIndex)
  streamWriteBool(streamId, self.moveDown)
end
function VehicleLowerImplementEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setJointMoveDown(self.jointIndex, self.moveDown, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = VehicleLowerImplementEvent.new(self.vehicle, self.jointIndex, self.moveDown)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function VehicleLowerImplementEvent.sendEvent(vehicle, jointIndex, moveDown, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = VehicleLowerImplementEvent.new(vehicle, jointIndex, moveDown)
    v4:broadcastEvent(v6, nil, nil, vehicle)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = VehicleLowerImplementEvent.new(vehicle, jointIndex, moveDown)
  v4:sendEvent(...)
end
