-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehiclePlayerStyleChangedEvent = {}
local VehiclePlayerStyleChangedEvent_mt = Class(VehiclePlayerStyleChangedEvent, Event)
InitStaticEventClass(VehiclePlayerStyleChangedEvent, "VehiclePlayerStyleChangedEvent", EventIds.EVENT_VEHICLE_PLAYER_STYLE_CHANGED)
function VehiclePlayerStyleChangedEvent.emptyNew()
  return Event.new(u0)
end
function VehiclePlayerStyleChangedEvent.new(vehicle, playerStyle)
  local v2 = VehiclePlayerStyleChangedEvent.emptyNew()
  v2.vehicle = vehicle
  v2.playerStyle = playerStyle
  return v2
end
function VehiclePlayerStyleChangedEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = PlayerStyle.new()
  self.playerStyle = v3
  v3:readStream(streamId, connection)
  if self.vehicle ~= nil then
    v3 = v3:getIsSynchronized()
    if v3 then
      v3:setVehicleCharacter(self.playerStyle)
    end
  end
end
function VehiclePlayerStyleChangedEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  v3:writeStream(streamId, connection)
end
function VehiclePlayerStyleChangedEvent.run(v0, v1)
end
