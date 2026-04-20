-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectFarmChangeEvent = {}
local ObjectFarmChangeEvent_mt = Class(ObjectFarmChangeEvent, Event)
InitStaticEventClass(ObjectFarmChangeEvent, "ObjectFarmChangeEvent", EventIds.EVENT_OBJECT_OWNER_CHANGE)
function ObjectFarmChangeEvent.emptyNew()
  return Event.new(u0)
end
function ObjectFarmChangeEvent.new(object, farmId)
  local v2 = ObjectFarmChangeEvent.emptyNew()
  v2.object = object
  v2.farmId = farmId
  return v2
end
function ObjectFarmChangeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function ObjectFarmChangeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function ObjectFarmChangeEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:setOwnerFarmId(self.farmId, true)
  end
end
