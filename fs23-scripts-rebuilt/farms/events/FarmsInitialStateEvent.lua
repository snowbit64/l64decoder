-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmsInitialStateEvent = {}
local FarmsInitialStateEvent_mt = Class(FarmsInitialStateEvent, Event)
InitStaticEventClass(FarmsInitialStateEvent, "FarmsInitialStateEvent", EventIds.EVENT_FARM_INITIAL_STATE)
function FarmsInitialStateEvent.emptyNew()
  return Event.new(u0)
end
function FarmsInitialStateEvent.new(playerFarmId)
  local v1 = FarmsInitialStateEvent.emptyNew()
  v1.playerFarmId = playerFarmId
  v1.farms = g_farmManager.farms
  return v1
end
function FarmsInitialStateEvent:writeStream(streamId, connection)
  local v5 = table.getn(self.farms)
  streamWriteUInt8(...)
  for v6, v7 in ipairs(self.farms) do
    NetworkUtil.writeNodeObject(streamId, v7)
  end
  streamWriteUIntN(streamId, self.playerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function FarmsInitialStateEvent:readStream(streamId, connection)
  self.farms = {}
  local numFarms = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 11, target 25)
  local farm = NetworkUtil.readNodeObject(streamId)
  table.insert(self.farms, farm)
  -- TODO: structure LOP_FORNLOOP (pc 24, target 12)
  local v4 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.playerFarmId = v4
  self:run(connection)
end
function FarmsInitialStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:updateFarms(self.farms, self.playerFarmId)
  end
end
