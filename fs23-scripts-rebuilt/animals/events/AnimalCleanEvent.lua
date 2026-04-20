-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalCleanEvent = {}
local AnimalCleanEvent_mt = Class(AnimalCleanEvent, Event)
InitStaticEventClass(AnimalCleanEvent, "AnimalCleanEvent", EventIds.EVENT_ANIMAL_CLEAN)
function AnimalCleanEvent.emptyNew()
  return Event.new(u0)
end
function AnimalCleanEvent.new(husbandry, clusterId)
  local v2 = AnimalCleanEvent.emptyNew()
  v2.husbandry = husbandry
  v2.clusterId = clusterId
  return v2
end
function AnimalCleanEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.husbandry = v3
  v3 = streamReadInt32(streamId)
  self.clusterId = v3
  self:run(connection)
end
function AnimalCleanEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.husbandry)
  streamWriteInt32(streamId, self.clusterId)
end
function AnimalCleanEvent:run(connection)
  if self.husbandry ~= nil then
    local v2 = v2:getClusterById(self.clusterId)
    if v2 ~= nil and v2.changeDirt ~= nil then
      v2:changeDirt(AnimalClusterHorse.BRUSH_DELTA)
    end
  end
end
