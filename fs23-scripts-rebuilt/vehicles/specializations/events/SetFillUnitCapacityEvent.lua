-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetFillUnitCapacityEvent = {}
local SetFillUnitCapacityEvent_mt = Class(SetFillUnitCapacityEvent, Event)
InitStaticEventClass(SetFillUnitCapacityEvent, "SetFillUnitCapacityEvent", EventIds.EVENT_SET_FILLUNIT_CAPACITY)
function SetFillUnitCapacityEvent.emptyNew()
  return Event.new(u0)
end
function SetFillUnitCapacityEvent.new(vehicle, fillUnitIndex, capacity)
  local v3 = SetFillUnitCapacityEvent.emptyNew()
  v3.vehicle = vehicle
  v3.fillUnitIndex = fillUnitIndex
  v3.capacity = capacity
  return v3
end
function SetFillUnitCapacityEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, 8)
  self.fillUnitIndex = v3
  v3 = streamReadFloat32(streamId)
  self.capacity = v3
  self:run(connection)
end
function SetFillUnitCapacityEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.fillUnitIndex, 8)
  streamWriteFloat32(streamId, self.capacity)
end
function SetFillUnitCapacityEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setFillUnitCapacity(self.fillUnitIndex, self.capacity, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetFillUnitCapacityEvent.new(self.vehicle, self.fillUnitIndex, self.capacity)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function SetFillUnitCapacityEvent.sendEvent(vehicle, fillUnitIndex, capacity, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = SetFillUnitCapacityEvent.new(vehicle, fillUnitIndex, capacity)
    v4:broadcastEvent(v6, nil, nil, vehicle)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = SetFillUnitCapacityEvent.new(vehicle, fillUnitIndex, capacity)
  v4:sendEvent(...)
end
