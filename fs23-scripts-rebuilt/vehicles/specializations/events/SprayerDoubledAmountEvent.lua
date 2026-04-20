-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SprayerDoubledAmountEvent = {}
local SprayerDoubledAmountEvent_mt = Class(SprayerDoubledAmountEvent, Event)
InitStaticEventClass(SprayerDoubledAmountEvent, "SprayerDoubledAmountEvent", EventIds.EVENT_SPRAYER_DOUBLED_AMOUNT)
function SprayerDoubledAmountEvent.emptyNew()
  return Event.new(u0)
end
function SprayerDoubledAmountEvent.new(object, isActive)
  local v2 = SprayerDoubledAmountEvent.emptyNew()
  v2.object = object
  v2.isActive = isActive
  return v2
end
function SprayerDoubledAmountEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function SprayerDoubledAmountEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isActive)
end
function SprayerDoubledAmountEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setSprayerDoubledAmountActive(self.isActive, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SprayerDoubledAmountEvent.new(self.object, self.isActive)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function SprayerDoubledAmountEvent.sendEvent(vehicle, isActive, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SprayerDoubledAmountEvent.new(vehicle, isActive)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SprayerDoubledAmountEvent.new(vehicle, isActive)
  v3:sendEvent(...)
end
