-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalClusterUpdateEvent = {}
local AnimalClusterUpdateEvent_mt = Class(AnimalClusterUpdateEvent, Event)
InitStaticEventClass(AnimalClusterUpdateEvent, "AnimalClusterUpdateEvent", EventIds.EVENT_ANIMAL_CLUSTER_UPDATE)
function AnimalClusterUpdateEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function AnimalClusterUpdateEvent.new(owner, clusters)
  local v2 = AnimalClusterUpdateEvent.emptyNew()
  if #clusters >= 65535 then
  end
  assert(true, "Number of clusters is too big")
  v2.owner = owner
  v2.clusters = clusters
  return v2
end
function AnimalClusterUpdateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.owner = v3
  v3 = v3:getClusterSystem()
  v3:readStream(streamId, connection)
end
function AnimalClusterUpdateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.owner)
  local v3 = v3:getClusterSystem()
  v3:writeStream(streamId, connection)
end
function AnimalClusterUpdateEvent.run(v0, v1)
end
