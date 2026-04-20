-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DrivableToggleLowerAllEvent = {}
local DrivableToggleLowerAllEvent_mt = Class(DrivableToggleLowerAllEvent, Event)
InitStaticEventClass(DrivableToggleLowerAllEvent, "DrivableToggleLowerAllEvent", EventIds.EVENT_VEHICLE_LOWER_ALL_IMPLEMENT)
function DrivableToggleLowerAllEvent.emptyNew()
  return Event.new(u0)
end
function DrivableToggleLowerAllEvent.new(vehicle)
  local v1 = DrivableToggleLowerAllEvent.emptyNew()
  v1.vehicle = vehicle
  return v1
end
function DrivableToggleLowerAllEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  self:run(connection)
end
function DrivableToggleLowerAllEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
end
function DrivableToggleLowerAllEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:toggleLowerAllImplements(true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = DrivableToggleLowerAllEvent.new(self.vehicle)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function DrivableToggleLowerAllEvent.sendEvent(vehicle, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v4 = DrivableToggleLowerAllEvent.new(vehicle)
    v2:broadcastEvent(v4, nil, nil, vehicle)
    return
  end
  local v2 = v2:getServerConnection()
  v4 = DrivableToggleLowerAllEvent.new(vehicle)
  v2:sendEvent(...)
end
