-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFenceAddSegmentEvent = {}
local PlaceableFenceAddSegmentEvent_mt = Class(PlaceableFenceAddSegmentEvent, Event)
InitStaticEventClass(PlaceableFenceAddSegmentEvent, "PlaceableFenceAddSegmentEvent", EventIds.EVENT_PLACEABLE_FENCE_SEGMENT_ADD)
function PlaceableFenceAddSegmentEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableFenceAddSegmentEvent.new(fence, x1, z1, x2, z2, renderFirst, renderLast, gateIndex, price)
  local v9 = PlaceableFenceAddSegmentEvent.emptyNew()
  v9.fence = fence
  v9.x1 = x1
  v9.z1 = z1
  v9.x2 = x2
  v9.z2 = z2
  v9.renderFirst = renderFirst
  v9.renderLast = renderLast
  v9.gateIndex = gateIndex
  v9.price = price
  return v9
end
function PlaceableFenceAddSegmentEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.fence = v3
  v3 = streamReadFloat32(streamId)
  self.x1 = v3
  v3 = streamReadFloat32(streamId)
  self.z1 = v3
  v3 = streamReadFloat32(streamId)
  self.x2 = v3
  v3 = streamReadFloat32(streamId)
  self.z2 = v3
  v3 = streamReadBool(streamId)
  self.renderFirst = v3
  v3 = streamReadBool(streamId)
  self.renderLast = v3
  v3 = streamReadUInt8(streamId)
  self.gateIndex = v3
  if self.gateIndex == 0 then
    self.gateIndex = nil
  end
  v3 = streamReadInt32(streamId)
  self.price = v3
  self:run(connection)
end
function PlaceableFenceAddSegmentEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.fence)
  streamWriteFloat32(streamId, self.x1)
  streamWriteFloat32(streamId, self.z1)
  streamWriteFloat32(streamId, self.x2)
  streamWriteFloat32(streamId, self.z2)
  streamWriteBool(streamId, self.renderFirst)
  streamWriteBool(streamId, self.renderLast)
  streamWriteUInt8(streamId, self.gateIndex or 0)
  streamWriteInt32(streamId, self.price)
end
function PlaceableFenceAddSegmentEvent:run(connection)
  if self.fence ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2 = v2:createSegment(self.x1, self.z1, self.x2, self.z2, self.renderFirst, self.gateIndex)
      v2.renderLast = self.renderLast
      if self.gateIndex ~= nil then
        local v6 = connection:getIsServer()
      end
      v3:addSegment(v5, v6)
      v3:publish(PlaceableFenceAddSegmentEvent, self.fence, v2)
      local v3 = connection:getIsServer()
      if not v3 then
        v6 = v6:getOwnerFarmId()
        v3:addMoney(-self.price, v6, MoneyType.SHOP_PROPERTY_BUY, true)
        v3:broadcastEvent(self, false, nil, self.fence)
      end
    end
  end
end
