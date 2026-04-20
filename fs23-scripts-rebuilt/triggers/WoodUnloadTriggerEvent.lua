-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodUnloadTriggerEvent = {}
local WoodUnloadTriggerEvent_mt = Class(WoodUnloadTriggerEvent, Event)
InitStaticEventClass(WoodUnloadTriggerEvent, "WoodUnloadTriggerEvent", EventIds.EVENT_SELL_WOOD)
function WoodUnloadTriggerEvent.emptyNew()
  return Event.new(u0)
end
function WoodUnloadTriggerEvent.new(woodUnloadTrigger, farmId)
  local v2 = WoodUnloadTriggerEvent.emptyNew()
  if g_server ~= nil then
  end
  assert(true, "Client->Server event")
  v2.woodUnloadTrigger = woodUnloadTrigger
  v2.farmId = farmId
  return v2
end
function WoodUnloadTriggerEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.woodUnloadTrigger = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function WoodUnloadTriggerEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.woodUnloadTrigger)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function WoodUnloadTriggerEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:processWood(self.farmId)
  end
end
