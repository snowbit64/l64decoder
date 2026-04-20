-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ResetVehicleEvent = {STATE_SUCCESS = 0, STATE_FAILED = 1, STATE_NO_PERMISSION = 2, STATE_IN_USE = 3}
local ResetVehicleEvent_mt = Class(ResetVehicleEvent, Event)
InitStaticEventClass(ResetVehicleEvent, "ResetVehicleEvent", EventIds.EVENT_RESET_VEHICLE)
function ResetVehicleEvent.emptyNew()
  return Event.new(u0)
end
function ResetVehicleEvent.new(vehicle)
  local v1 = ResetVehicleEvent.emptyNew()
  v1.vehicle = vehicle
  return v1
end
function ResetVehicleEvent.newServerToClient(state)
  local v1 = ResetVehicleEvent.emptyNew()
  v1.state = state
  return v1
end
function ResetVehicleEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.vehicle = v3
  else
    v3 = streamReadUIntN(streamId, 2)
    self.state = v3
  end
  self:run(connection)
end
function ResetVehicleEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.vehicle)
    return
  end
  streamWriteUIntN(streamId, self.state, 2)
end
function ResetVehicleEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    if self.vehicle ~= nil and self.vehicle.isVehicleSaved then
      local v4 = self.vehicle:getCanBeReset()
      if v4 then
        local v8 = self.vehicle:getOwnerFarmId()
        v4 = v4:getHasPlayerPermission(...)
        if v4 then
          v4 = self.vehicle:getIsInUse(connection)
          if not v4 then
            v4 = self.vehicle:getReloadXML()
            VehicleLoadingUtil.loadVehicleFromSavegameXML(v4, "vehicles.vehicle(0)", true, false, nil, nil, function(self, connection, v2, v3)
              if v2 == VehicleLoadingUtil.VEHICLE_LOAD_OK then
                v4:publish(MessageType.VEHICLE_RESET, u0, connection)
                v4:removeVehicle(u0)
                u1 = ResetVehicleEvent.STATE_SUCCESS
              else
                v4:removeVehicle(connection)
              end
              v4:delete()
              local v6 = ResetVehicleEvent.newServerToClient(u1)
              v4:sendEvent(...)
            end, nil, {})
            return
          end
        else
        end
      end
    end
    local v6 = ResetVehicleEvent.newServerToClient(v2)
    connection:sendEvent(...)
    return
  end
  v2:publish(ResetVehicleEvent, self.state)
end
