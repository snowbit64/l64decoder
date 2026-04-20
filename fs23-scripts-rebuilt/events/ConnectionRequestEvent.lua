-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionRequestEvent = {}
local ConnectionRequestEvent_mt = Class(ConnectionRequestEvent, Event)
InitStaticEventClass(ConnectionRequestEvent, "ConnectionRequestEvent", EventIds.EVENT_CONNECTION_REQUEST)
function ConnectionRequestEvent.emptyNew()
  return Event.new(u0)
end
function ConnectionRequestEvent.new(language, password, uniqueUserId, platformUserId, platformId, playerName, platformSessionId)
  local v7 = ConnectionRequestEvent.emptyNew()
  v7.language = language
  v7.password = password
  v7.uniqueUserId = uniqueUserId
  v7.platformUserId = platformUserId
  v7.platformId = platformId
  v7.playerName = playerName
  v7.platformSessionId = platformSessionId
  return v7
end
function ConnectionRequestEvent:readStream(streamId, connection)
  local v3 = streamReadUInt8(streamId)
  self.language = v3
  v3 = streamReadString(streamId)
  self.password = v3
  v3 = streamReadString(streamId)
  self.uniqueUserId = v3
  v3 = streamReadString(streamId)
  self.platformUserId = v3
  v3 = streamReadUInt8(streamId)
  self.platformId = v3
  v3 = streamReadString(streamId)
  self.playerName = v3
  v3 = streamReadString(streamId)
  self.platformSessionId = v3
  self:run(connection)
end
function ConnectionRequestEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.language)
  streamWriteString(streamId, self.password)
  streamWriteString(streamId, self.uniqueUserId)
  streamWriteString(streamId, self.platformUserId)
  streamWriteUInt8(streamId, self.platformId)
  streamWriteString(streamId, self.playerName)
  streamWriteString(streamId, self.platformSessionId)
end
function ConnectionRequestEvent:run(connection)
  v2:onConnectionRequest(connection, self.language, self.password, self.uniqueUserId, self.platformUserId, self.platformId, self.playerName, self.platformSessionId)
end
