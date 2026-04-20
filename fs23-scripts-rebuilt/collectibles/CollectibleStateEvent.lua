-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollectibleStateEvent = {}
local CollectibleStateEvent_mt = Class(CollectibleStateEvent, Event)
InitStaticEventClass(CollectibleStateEvent, "CollectibleStateEvent", EventIds.EVENT_COLLECTIBLE_STATE)
function CollectibleStateEvent.emptyNew()
  return Event.new(u0)
end
function CollectibleStateEvent.new(state)
  local v1 = CollectibleStateEvent.emptyNew()
  v1.state = state
  return v1
end
function CollectibleStateEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, #self.state)
  -- TODO: structure LOP_FORNPREP (pc 12, target 21)
  streamWriteBool(streamId, self.state[1])
  -- TODO: structure LOP_FORNLOOP (pc 20, target 13)
end
function CollectibleStateEvent:readStream(streamId, connection)
  self.state = {}
  local num = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 11, target 20)
  local v8 = streamReadBool(streamId)
  self.state[1] = v8
  -- TODO: structure LOP_FORNLOOP (pc 19, target 12)
  self:run(connection)
end
function CollectibleStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:onStateEvent(self.state)
  end
end
