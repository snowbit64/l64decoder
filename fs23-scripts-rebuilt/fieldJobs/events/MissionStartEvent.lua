-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionStartEvent = {}
local MissionStartEvent_mt = Class(MissionStartEvent, Event)
InitStaticEventClass(MissionStartEvent, "MissionStartEvent", EventIds.EVENT_MISSION_START)
function MissionStartEvent.emptyNew()
  return Event.new(u0)
end
function MissionStartEvent.new(mission, farmId, spawnVehicles)
  local v3 = MissionStartEvent.emptyNew()
  v3.mission = mission
  v3.farmId = farmId
  v3.spawnVehicles = spawnVehicles
  return v3
end
function MissionStartEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.mission)
    streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteBool(streamId, self.spawnVehicles or false)
  end
end
function MissionStartEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.mission = v3
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.farmId = v3
    v3 = streamReadBool(streamId)
    self.spawnVehicles = v3
  end
  self:run(connection)
end
function MissionStartEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserIdByConnection(connection)
    local v3 = v3:getFarmByUserId(v2)
    local v4 = v4:getHasPlayerPermission("manageContracts", connection, v3.farmId)
    if v4 then
      v4:startMission(self.mission, self.farmId, self.spawnVehicles)
    end
  end
end
