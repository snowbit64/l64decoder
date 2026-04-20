-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetFillUnitIsFillingEvent = {}
local SetFillUnitIsFillingEvent_mt = Class(SetFillUnitIsFillingEvent, Event)
InitStaticEventClass(SetFillUnitIsFillingEvent, "SetFillUnitIsFillingEvent", EventIds.EVENT_SET_FILLUNIT_IS_FILLING)
function SetFillUnitIsFillingEvent.emptyNew()
  return Event.new(u0)
end
function SetFillUnitIsFillingEvent.new(vehicle, isFilling)
  local v2 = SetFillUnitIsFillingEvent.emptyNew()
  v2.vehicle = vehicle
  v2.isFilling = isFilling
  return v2
end
function SetFillUnitIsFillingEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.isFilling = v3
  self:run(connection)
end
function SetFillUnitIsFillingEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.isFilling)
end
function SetFillUnitIsFillingEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setFillUnitIsFilling(self.isFilling, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetFillUnitIsFillingEvent.new(self.vehicle, self.isFilling)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
