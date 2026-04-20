-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFenceAddGateEvent = {}
local PlaceableFenceAddGateEvent_mt = Class(PlaceableFenceAddGateEvent, Event)
InitStaticEventClass(PlaceableFenceAddGateEvent, "PlaceableFenceAddGateEvent", EventIds.EVENT_PLACEABLE_FENCE_GATE_ADD)
function PlaceableFenceAddGateEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableFenceAddGateEvent.new(fence, segmentIndex, animatedObject)
  local v3 = PlaceableFenceAddGateEvent.emptyNew()
  v3.fence = fence
  v3.segmentIndex = segmentIndex
  v3.animatedObject = animatedObject
  return v3
end
function PlaceableFenceAddGateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.fence = v3
  v3 = streamReadInt32(streamId)
  self.segmentIndex = v3
  local v4 = v4:getSegment(self.segmentIndex)
  self.animatedObject = v4.animatedObject
  v3 = NetworkUtil.readNodeObjectId(streamId)
  v4:readStream(streamId, connection)
  v4:finishRegisterObject(self.animatedObject, v3)
  self:run(connection)
end
function PlaceableFenceAddGateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.fence)
  streamWriteInt32(streamId, self.segmentIndex)
  local v5 = NetworkUtil.getObjectId(self.animatedObject)
  NetworkUtil.writeNodeObjectId(...)
  v3:writeStream(streamId, connection)
  v3:registerObjectInStream(connection, self.animatedObject)
end
function PlaceableFenceAddGateEvent.run(v0, v1)
end
