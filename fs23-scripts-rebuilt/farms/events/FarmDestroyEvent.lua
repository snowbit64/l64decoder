-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmDestroyEvent = {}
local FarmDestroyEvent_mt = Class(FarmDestroyEvent, Event)
InitStaticEventClass(FarmDestroyEvent, "FarmDestroyEvent", EventIds.EVENT_FARM_DESTROY)
function FarmDestroyEvent.emptyNew()
  return Event.new(u0)
end
function FarmDestroyEvent.new(farmId)
  local v1 = FarmDestroyEvent.emptyNew()
  v1.farmId = farmId
  return v1
end
function FarmDestroyEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function FarmDestroyEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function FarmDestroyEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = connection:getIsLocal()
    if not v2 then
      v2 = v2:getIsConnectionMasterUser(connection)
      -- if not v2 then goto L41 end
    end
    v2 = v2:getFarmById(self.farmId)
    if v2 ~= nil then
      local v3 = v2:canBeDestroyed()
      if v3 then
        v3:destroyFarm(self.farmId)
        v3:broadcastEvent(self)
      end
    end
  end
end
