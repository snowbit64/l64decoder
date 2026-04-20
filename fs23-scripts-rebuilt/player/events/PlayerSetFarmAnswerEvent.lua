-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerSetFarmAnswerEvent = {}
local PlayerSetFarmAnswerEvent_mt = Class(PlayerSetFarmAnswerEvent, Event)
InitStaticEventClass(PlayerSetFarmAnswerEvent, "PlayerSetFarmAnswerEvent", EventIds.EVENT_PLAYER_SET_FARM_ANSWER)
PlayerSetFarmAnswerEvent.STATE = {OK = 1, PASSWORD_REQUIRED = 2}
PlayerSetFarmAnswerEvent.SEND_NUM_BITS = 2
function PlayerSetFarmAnswerEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSetFarmAnswerEvent.new(answerState, farmId, password)
  local v3 = PlayerSetFarmAnswerEvent.emptyNew()
  v3.answerState = answerState
  v3.farmId = farmId
  v3.password = password
  return v3
end
function PlayerSetFarmAnswerEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.answerState, PlayerSetFarmAnswerEvent.SEND_NUM_BITS)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  if self.answerState ~= PlayerSetFarmAnswerEvent.STATE.OK then
  end
  if self.password == nil then
  end
  local v5 = streamWriteBool(streamId, v3 and true)
  if v5 then
    streamWriteString(streamId, self.password)
  end
end
function PlayerSetFarmAnswerEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, PlayerSetFarmAnswerEvent.SEND_NUM_BITS)
  self.answerState = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadString(streamId)
    self.password = v3
  end
  self:run(connection)
end
function PlayerSetFarmAnswerEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    Logging.devWarning("PlayerSetFarmAnswerEvent is a server to client only event")
    return
  end
  if self.answerState == PlayerSetFarmAnswerEvent.STATE.OK then
    v2:publish(PlayerSetFarmAnswerEvent, self.answerState, self.farmId, self.password)
    return
  end
  if self.answerState == PlayerSetFarmAnswerEvent.STATE.PASSWORD_REQUIRED then
    v2:publish(PlayerSetFarmAnswerEvent, self.answerState, self.farmId)
  end
end
