-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFenceRemoveSegmentEvent = {}
local PlaceableFenceRemoveSegmentEvent_mt = Class(PlaceableFenceRemoveSegmentEvent, Event)
InitStaticEventClass(PlaceableFenceRemoveSegmentEvent, "PlaceableFenceRemoveSegmentEvent", EventIds.EVENT_PLACEABLE_FENCE_SEGMENT_REMOVE)
function PlaceableFenceRemoveSegmentEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableFenceRemoveSegmentEvent.new(fence, segmentIndex, poleIndex)
  local v3 = PlaceableFenceRemoveSegmentEvent.emptyNew()
  v3.fence = fence
  v3.segmentIndex = segmentIndex
  v3.poleIndex = poleIndex
  return v3
end
function PlaceableFenceRemoveSegmentEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.fence = v3
  v3 = streamReadInt32(streamId)
  self.segmentIndex = v3
  v3 = streamReadInt32(streamId)
  self.poleIndex = v3
  self:run(connection)
end
function PlaceableFenceRemoveSegmentEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.fence)
  streamWriteInt32(streamId, self.segmentIndex)
  streamWriteInt32(streamId, self.poleIndex)
end
function PlaceableFenceRemoveSegmentEvent:run(connection)
  if self.fence ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v3:doDeletePanel(self.fence.spec_fence.segments[self.segmentIndex], self.segmentIndex, self.poleIndex)
      v3:publish(PlaceableFenceRemoveSegmentEvent, self.fence, self.segmentIndex, self.poleIndex)
      local v3 = connection:getIsServer()
      if not v3 then
        v3:broadcastEvent(self)
      end
    end
  end
end
