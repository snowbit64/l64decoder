-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleUnpackEvent = {}
local BaleUnpackEvent_mt = Class(BaleUnpackEvent, Event)
InitStaticEventClass(BaleUnpackEvent, "BaleUnpackEvent", EventIds.EVENT_UNPACK_BALE)
function BaleUnpackEvent.emptyNew()
  return Event.new(u0)
end
function BaleUnpackEvent.new(bale)
  local v1 = BaleUnpackEvent.emptyNew()
  v1.bale = bale
  return v1
end
function BaleUnpackEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.bale = v3
  end
  self:run(connection)
end
function BaleUnpackEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.bale)
  end
end
function BaleUnpackEvent:run(connection)
  v2:unpack()
end
