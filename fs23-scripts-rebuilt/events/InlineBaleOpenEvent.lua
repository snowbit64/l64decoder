-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InlineBaleOpenEvent = {}
local InlineBaleOpenEvent_mt = Class(InlineBaleOpenEvent, Event)
InitStaticEventClass(InlineBaleOpenEvent, "InlineBaleOpenEvent", EventIds.EVENT_OPEN_INLINE_BALE)
function InlineBaleOpenEvent.emptyNew()
  return Event.new(u0)
end
function InlineBaleOpenEvent.new(inlineBale, x, y, z)
  local v4 = InlineBaleOpenEvent.emptyNew()
  v4.inlineBale = inlineBale
  v4.x = x
  v4.y = y
  v4.z = z
  return v4
end
function InlineBaleOpenEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.inlineBale = v3
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
  end
  self:run(connection)
end
function InlineBaleOpenEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.inlineBale)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
  end
end
function InlineBaleOpenEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:openBaleAtPosition(self.x, self.y, self.z)
  end
end
