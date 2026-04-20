-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShutdownEvent = {}
local ShutdownEvent_mt = Class(ShutdownEvent, Event)
InitStaticEventClass(ShutdownEvent, "ShutdownEvent", EventIds.EVENT_SHUTDOWN)
function ShutdownEvent.emptyNew()
  return Event.new(u0)
end
function ShutdownEvent.new()
  return ShutdownEvent.emptyNew()
end
function ShutdownEvent:readStream(streamId, connection)
  self:run(connection)
end
function ShutdownEvent.writeStream(v0, v1, v2)
end
function ShutdownEvent.run(v0, v1)
  v2:onShutdownEvent(v1)
end
