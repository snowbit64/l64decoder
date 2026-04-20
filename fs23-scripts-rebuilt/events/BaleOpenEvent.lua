-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleOpenEvent = {}
local BaleOpenEvent_mt = Class(BaleOpenEvent, Event)
InitStaticEventClass(BaleOpenEvent, "BaleOpenEvent", EventIds.EVENT_OPEN_BALE)
function BaleOpenEvent.emptyNew()
  return Event.new(u0)
end
function BaleOpenEvent.new(bale)
  local v1 = BaleOpenEvent.emptyNew()
  v1.bale = bale
  return v1
end
function BaleOpenEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.bale = v3
  end
  self:run(connection)
end
function BaleOpenEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.bale)
  end
end
function BaleOpenEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:open()
  end
end
