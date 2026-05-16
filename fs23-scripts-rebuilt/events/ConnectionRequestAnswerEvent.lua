-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionRequestAnswerEvent = {}
local ConnectionRequestAnswerEvent_mt = Class(ConnectionRequestAnswerEvent, Event)
InitStaticEventClass(ConnectionRequestAnswerEvent, "ConnectionRequestAnswerEvent", EventIds.EVENT_CONNECTION_REQUEST_ANSWER)
ConnectionRequestAnswerEvent.ANSWER_OK = 0
ConnectionRequestAnswerEvent.ANSWER_DENIED = 1
ConnectionRequestAnswerEvent.ANSWER_WRONG_PASSWORD = 2
ConnectionRequestAnswerEvent.ANSWER_FULL = 3
ConnectionRequestAnswerEvent.ANSWER_ALWAYS_DENIED = 4
ConnectionRequestAnswerEvent.ALREADY_IN_USE = 5
ConnectionRequestAnswerEvent.SLOT_LIMIT_REACHED = 6
ConnectionRequestAnswerEvent.MATCH_IN_PROGRESS = 7
function ConnectionRequestAnswerEvent.emptyNew()
  return Event.new(u0)
end
function ConnectionRequestAnswerEvent.new(answer, difficulty, economicDifficulty, timeScale, isDedicatedServer, userId, playerName, knownPlayer)
  local v8 = ConnectionRequestAnswerEvent.emptyNew()
  v8.answer = answer
  v8.difficulty = difficulty
  v8.economicDifficulty = economicDifficulty
  v8.timeScale = timeScale
  v8.isDedicatedServer = isDedicatedServer
  v8.userId = userId
  v8.playerName = playerName
  v8.knownPlayer = knownPlayer
  return v8
end
function ConnectionRequestAnswerEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 4)
  self.answer = v3
  if self.answer == ConnectionRequestAnswerEvent.ANSWER_OK then
    v3 = streamReadUIntN(streamId, 3)
    self.difficulty = v3
    v3 = streamReadUIntN(streamId, 3)
    self.economicDifficulty = v3
    v3 = streamReadFloat32(streamId)
    self.timeScale = v3
    v3 = streamReadBool(streamId)
    self.isDedicatedServer = v3
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.userId = v3
    v3 = streamReadString(streamId)
    self.playerName = v3
    v3 = streamReadBool(streamId)
    self.knownPlayer = v3
  end
  self:run(connection)
end
function ConnectionRequestAnswerEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.answer, 4)
  if self.answer == ConnectionRequestAnswerEvent.ANSWER_OK then
    streamWriteUIntN(streamId, self.difficulty, 3)
    streamWriteUIntN(streamId, self.economicDifficulty, 3)
    streamWriteFloat32(streamId, self.timeScale)
    streamWriteBool(streamId, self.isDedicatedServer)
    NetworkUtil.writeNodeObjectId(streamId, self.userId)
    streamWriteString(streamId, self.playerName)
    streamWriteBool(streamId, self.knownPlayer)
  end
end
function ConnectionRequestAnswerEvent:run(connection)
  v2:onConnectionRequestAnswer(connection, self.answer, self.difficulty, self.economicDifficulty, self.timeScale, self.isDedicatedServer, self.userId, self.playerName, self.knownPlayer)
end
