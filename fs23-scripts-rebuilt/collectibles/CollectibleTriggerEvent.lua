-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollectibleTriggerEvent = {}
local CollectibleTriggerEvent_mt = Class(CollectibleTriggerEvent, Event)
InitStaticEventClass(CollectibleTriggerEvent, "CollectibleTriggerEvent", EventIds.EVENT_COLLECTIBLE_TRIGGER)
function CollectibleTriggerEvent.emptyNew()
  return Event.new(u0)
end
function CollectibleTriggerEvent.new(player, index)
  local v2 = CollectibleTriggerEvent.emptyNew()
  v2.player = player
  v2.index = index
  return v2
end
function CollectibleTriggerEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteUInt8(streamId, self.index)
end
function CollectibleTriggerEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadUInt8(streamId)
  self.index = v3
  self:run(connection)
end
function CollectibleTriggerEvent:run(connection)
  v2:onTriggerEvent(self.index, self.player)
end
