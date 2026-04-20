-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ContractingStateEvent = {}
local ContractingStateEvent_mt = Class(ContractingStateEvent, Event)
InitStaticEventClass(ContractingStateEvent, "ContractingStateEvent", EventIds.EVENT_CONTRACTING_STATE)
function ContractingStateEvent.emptyNew()
  return Event.new(u0)
end
function ContractingStateEvent.new(byFarmId, forFarmId, state)
  local v3 = ContractingStateEvent.emptyNew()
  v3.byFarmId = byFarmId
  v3.forFarmId = forFarmId
  v3.state = state
  return v3
end
function ContractingStateEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.byFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteUIntN(streamId, self.forFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteBool(streamId, self.state)
end
function ContractingStateEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.byFarmId = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.forFarmId = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function ContractingStateEvent:run(connection)
  local v2 = v2:getFarmById(self.byFarmId)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = v3:getHasPlayerPermission("manageContracting", connection, self.forFarmId)
    -- if not v3 then goto L57 end
    v2:setIsContractingFor(self.forFarmId, self.state, true)
    v3:broadcastEvent(self)
    return
  end
  v2:setIsContractingFor(self.forFarmId, self.state, true)
  v3:publish(ContractingStateEvent, v2.farmId, self.forFarmId, self.state)
end
