-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableTrainSystemRentEvent = {}
local PlaceableTrainSystemRentEvent_mt = Class(PlaceableTrainSystemRentEvent, Event)
InitStaticEventClass(PlaceableTrainSystemRentEvent, "PlaceableTrainSystemRentEvent", EventIds.EVENT_TRAIN_PLACEABLE_RENT)
function PlaceableTrainSystemRentEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableTrainSystemRentEvent.new(object, isRented, farmId, splinePosition)
  local v4 = PlaceableTrainSystemRentEvent.emptyNew()
  v4.object = object
  v4.isRented = isRented
  v4.farmId = farmId
  v4.splinePosition = splinePosition
  return v4
end
function PlaceableTrainSystemRentEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isRented = v3
  if self.isRented then
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.farmId = v3
    v3 = streamReadFloat32(streamId)
    self.splinePosition = v3
  end
  self:run(connection)
end
function PlaceableTrainSystemRentEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  local v3 = streamWriteBool(streamId, self.isRented)
  if v3 then
    streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteFloat32(streamId, self.splinePosition)
  end
end
function PlaceableTrainSystemRentEvent:run(connection)
  if self.isRented then
  end
  if self.object ~= nil then
    local v4 = v4:getIsSynchronized()
    if v4 then
      if self.isRented then
        v4:rentRailroad(v2, v3, true)
      else
        v4:returnRailroad(true)
      end
    end
  end
  v4 = connection:getIsServer()
  if not v4 then
    local v6 = PlaceableTrainSystemRentEvent.new(self.object, self.isRented, self.farmId, self.splinePosition)
    v4:broadcastEvent(v6, nil, connection, self.object)
  end
end
function PlaceableTrainSystemRentEvent.sendEvent(object, isRented, farmId, splinePosition, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L43
  end
  if g_server ~= nil then
    local v7 = PlaceableTrainSystemRentEvent.new(object, isRented, farmId, splinePosition)
    v5:broadcastEvent(v7, nil, nil, object)
    return
  end
  local v5 = v5:getServerConnection()
  v7 = PlaceableTrainSystemRentEvent.new(object, isRented, farmId, splinePosition)
  v5:sendEvent(...)
end
