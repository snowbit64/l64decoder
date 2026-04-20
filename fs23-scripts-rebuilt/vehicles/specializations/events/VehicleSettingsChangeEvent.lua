-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSettingsChangeEvent = {}
local VehicleSettingsChangeEvent_mt = Class(VehicleSettingsChangeEvent, Event)
InitStaticEventClass(VehicleSettingsChangeEvent, "VehicleSettingsChangeEvent", EventIds.EVENT_VEHICLE_SETTING_CHANGED)
function VehicleSettingsChangeEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSettingsChangeEvent.new(vehicle, settings, state)
  local v3 = VehicleSettingsChangeEvent.emptyNew()
  v3.vehicle = vehicle
  v3.settings = settings
  return v3
end
function VehicleSettingsChangeEvent.readStream(v0, v1, v2)
  local v3 = NetworkUtil.readNodeObject(v1)
  local v4 = streamReadUInt8(v1)
  if v3 ~= nil then
    local v5 = v3:getIsSynchronized()
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 47)
  local v9 = streamReadUInt8(v1)
  local v11 = streamReadBool(v1)
  if v11 then
    v11 = streamReadBool(v1)
  else
    v11 = streamReadUInt8(v1)
  end
  if v5 then
    v3:setVehicleSettingState(v9, v10, true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 46, target 18)
end
function VehicleSettingsChangeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  -- TODO: structure LOP_FORNPREP (pc 12, target 21)
  if self.settings[1].isDirty then
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 13)
  streamWriteUInt8(streamId, v3)
  -- TODO: structure LOP_FORNPREP (pc 31, target 68)
  if self.settings[1].isDirty then
    streamWriteUInt8(streamId, self.settings[1].index)
    local v8 = streamWriteBool(streamId, self.settings[1].isBool)
    if v8 then
      streamWriteBool(streamId, self.settings[1].state)
    else
      streamWriteUInt8(streamId, self.settings[1].state)
    end
    v7.isDirty = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 67, target 32)
end
function VehicleSettingsChangeEvent.run(v0, v1)
end
