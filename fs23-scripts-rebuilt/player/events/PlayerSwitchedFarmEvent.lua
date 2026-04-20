-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerSwitchedFarmEvent = {}
local PlayerSwitchedFarmEvent_mt = Class(PlayerSwitchedFarmEvent, Event)
InitStaticEventClass(PlayerSwitchedFarmEvent, "PlayerSwitchedFarmEvent", EventIds.EVENT_PLAYER_SWITCHED_FARM)
PlayerSwitchedFarmEvent.NO_FARM = 126
function PlayerSwitchedFarmEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSwitchedFarmEvent.new(oldFarmId, farmId, userId)
  local v3 = PlayerSwitchedFarmEvent.emptyNew()
  v3.farmId = farmId
  v3.oldFarmId = oldFarmId
  v3.userId = userId
  return v3
end
function PlayerSwitchedFarmEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteUIntN(streamId, self.oldFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
end
function PlayerSwitchedFarmEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.oldFarmId = v3
  v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self:run(connection)
end
function PlayerSwitchedFarmEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    if self.oldFarmId ~= FarmManager.INVALID_FARM_ID then
      v2 = v2:getFarmById(self.oldFarmId)
      v2:removeUser(self.userId)
    end
    if self.farmId ~= FarmManager.INVALID_FARM_ID then
      v2 = v2:getFarmById(self.farmId)
      v2:addUser(self.userId)
    end
    v2:publish(MessageType.PLAYER_FARM_CHANGED, self.player)
    return
  end
  local v4 = PlayerSwitchedFarmEvent.new(self.oldFarmId, self.farmId, self.userId)
  v2:broadcastEvent(v4, true)
end
