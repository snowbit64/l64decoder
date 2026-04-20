-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrailerToggleTipSideEvent = {}
local TrailerToggleTipSideEvent_mt = Class(TrailerToggleTipSideEvent, Event)
InitStaticEventClass(TrailerToggleTipSideEvent, "TrailerToggleTipSideEvent", EventIds.EVENT_TRAILER_TOGGLE_TIP_SIDE)
function TrailerToggleTipSideEvent.emptyNew()
  return Event.new(u0)
end
function TrailerToggleTipSideEvent.new(object, tipSideIndex)
  local v2 = TrailerToggleTipSideEvent.emptyNew()
  v2.object = object
  v2.tipSideIndex = tipSideIndex
  return v2
end
function TrailerToggleTipSideEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, Trailer.TIP_SIDE_NUM_BITS)
  self.tipSideIndex = v3
  self:run(connection)
end
function TrailerToggleTipSideEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.tipSideIndex, Trailer.TIP_SIDE_NUM_BITS)
end
function TrailerToggleTipSideEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPreferedTipSide(self.tipSideIndex, true)
    end
  end
end
