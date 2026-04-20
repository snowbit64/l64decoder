-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalNameEvent = {}
local AnimalNameEvent_mt = Class(AnimalNameEvent, Event)
InitStaticEventClass(AnimalNameEvent, "AnimalNameEvent", EventIds.EVENT_ANIMAL_NAME)
function AnimalNameEvent.emptyNew()
  return Event.new(u0)
end
function AnimalNameEvent.new(husbandry, clusterId, name)
  local v3 = AnimalNameEvent.emptyNew()
  v3.husbandry = husbandry
  v3.clusterId = clusterId
  v3.name = name
  return v3
end
function AnimalNameEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.husbandry = v3
  v3 = streamReadInt32(streamId)
  self.clusterId = v3
  v3 = streamReadString(streamId)
  self.name = v3
  self:run(connection)
end
function AnimalNameEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.husbandry)
  streamWriteInt32(streamId, self.clusterId)
  streamWriteString(streamId, self.name)
end
function AnimalNameEvent:run(connection)
  v2:renameAnimal(self.clusterId, self.name, true)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false)
  end
end
function AnimalNameEvent.sendEvent(husbandry, clusterId, name, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  local v4 = v4:getIsServer()
  if v4 then
    local v6 = AnimalNameEvent.new(husbandry, clusterId, name)
    v4:broadcastEvent(v6, false)
    return
  end
  v4 = v4:getServerConnection()
  v6 = AnimalNameEvent.new(husbandry, clusterId, name)
  v4:sendEvent(...)
end
