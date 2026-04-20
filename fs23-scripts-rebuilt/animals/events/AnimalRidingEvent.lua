-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalRidingEvent = {}
local AnimalRidingEvent_mt = Class(AnimalRidingEvent, Event)
InitStaticEventClass(AnimalRidingEvent, "AnimalRidingEvent", EventIds.EVENT_ANIMAL_RIDING)
function AnimalRidingEvent.emptyNew()
  return Event.new(u0)
end
function AnimalRidingEvent.new(husbandry, clusterId, player)
  local v3 = AnimalRidingEvent.emptyNew()
  v3.husbandry = husbandry
  v3.clusterId = clusterId
  v3.player = player
  return v3
end
function AnimalRidingEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.husbandry = v3
  v3 = streamReadInt32(streamId)
  self.clusterId = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  self:run(connection)
end
function AnimalRidingEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.husbandry)
  streamWriteInt32(streamId, self.clusterId)
  NetworkUtil.writeNodeObject(streamId, self.player)
end
function AnimalRidingEvent:run(connection)
  v2:startRiding(self.clusterId, self.player)
end
