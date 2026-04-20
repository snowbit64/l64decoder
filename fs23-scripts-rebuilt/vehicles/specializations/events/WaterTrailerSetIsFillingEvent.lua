-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WaterTrailerSetIsFillingEvent = {}
local WaterTrailerSetIsFillingEvent_mt = Class(WaterTrailerSetIsFillingEvent, Event)
InitStaticEventClass(WaterTrailerSetIsFillingEvent, "WaterTrailerSetIsFillingEvent", EventIds.EVENT_WATER_TRAILER_SET_IS_FILLING)
function WaterTrailerSetIsFillingEvent.emptyNew()
  return Event.new(u0)
end
function WaterTrailerSetIsFillingEvent.new(vehicle, isFilling)
  local v2 = WaterTrailerSetIsFillingEvent.emptyNew()
  v2.vehicle = vehicle
  v2.isFilling = isFilling
  return v2
end
function WaterTrailerSetIsFillingEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.isFilling = v3
  self:run(connection)
end
function WaterTrailerSetIsFillingEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.isFilling)
end
function WaterTrailerSetIsFillingEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.vehicle)
  end
  if self.vehicle ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsWaterTrailerFilling(self.isFilling, true)
    end
  end
end
function WaterTrailerSetIsFillingEvent.sendEvent(vehicle, isFilling, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = WaterTrailerSetIsFillingEvent.new(vehicle, isFilling)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = WaterTrailerSetIsFillingEvent.new(vehicle, isFilling)
  v3:sendEvent(...)
end
