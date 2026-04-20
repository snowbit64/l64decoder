-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimatedObjectEvent = {}
local AnimatedObjectEvent_mt = Class(AnimatedObjectEvent, Event)
InitStaticEventClass(AnimatedObjectEvent, "AnimatedObjectEvent", EventIds.EVENT_ANIMATED_OBJECT)
function AnimatedObjectEvent.emptyNew()
  return Event.new(u0)
end
function AnimatedObjectEvent.new(animatedObject, direction)
  local v2 = AnimatedObjectEvent.emptyNew()
  v2.animatedObject = animatedObject
  v2.direction = direction
  return v2
end
function AnimatedObjectEvent:readStream(streamId, connection)
  local v4 = v4:getIsServer()
  assert(...)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.animatedObject = v3
  v4 = streamReadUIntN(streamId, 2)
  self.direction = v4 - 1
  self:run(connection)
end
function AnimatedObjectEvent:writeStream(streamId, connection)
  local v4 = connection:getIsServer()
  assert(...)
  NetworkUtil.writeNodeObject(streamId, self.animatedObject)
  streamWriteUIntN(streamId, self.direction + 1, 2)
end
function AnimatedObjectEvent:run(connection)
  v2:setDirection(self.direction)
end
