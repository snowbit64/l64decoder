-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BunkerSiloCloseEvent = {}
local BunkerSiloCloseEvent_mt = Class(BunkerSiloCloseEvent, Event)
InitStaticEventClass(BunkerSiloCloseEvent, "BunkerSiloCloseEvent", EventIds.EVENT_BUNKER_SILO_CLOSE)
function BunkerSiloCloseEvent.emptyNew()
  return Event.new(u0)
end
function BunkerSiloCloseEvent.new(bunkerSilo)
  local v1 = BunkerSiloCloseEvent.emptyNew()
  v1.bunkerSilo = bunkerSilo
  return v1
end
function BunkerSiloCloseEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.bunkerSilo = v3
  end
  self:run(connection)
end
function BunkerSiloCloseEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.bunkerSilo)
  end
end
function BunkerSiloCloseEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:setState(BunkerSilo.STATE_CLOSED)
  end
end
