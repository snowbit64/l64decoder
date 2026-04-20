-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InlineWrapperPushOffEvent = {}
local InlineWrapperPushOffEvent_mt = Class(InlineWrapperPushOffEvent, Event)
InitStaticEventClass(InlineWrapperPushOffEvent, "InlineWrapperPushOffEvent", EventIds.EVENT_INLINE_WRAPPER_PUSH_OFF)
function InlineWrapperPushOffEvent.emptyNew()
  return Event.new(u0)
end
function InlineWrapperPushOffEvent.new(inlineWrapper)
  local v1 = InlineWrapperPushOffEvent.emptyNew()
  v1.inlineWrapper = inlineWrapper
  return v1
end
function InlineWrapperPushOffEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.inlineWrapper = v3
  end
  self:run(connection)
end
function InlineWrapperPushOffEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.inlineWrapper)
  end
end
function InlineWrapperPushOffEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and self.inlineWrapper ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:pushOffInlineBale()
    end
  end
end
