-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerSetNicknameEvent = {}
local PlayerSetNicknameEvent_mt = Class(PlayerSetNicknameEvent, Event)
InitStaticEventClass(PlayerSetNicknameEvent, "PlayerSetNicknameEvent", EventIds.EVENT_PLAYER_SET_NICKNAME)
function PlayerSetNicknameEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSetNicknameEvent.new(player, nickname, userId)
  local v3 = PlayerSetNicknameEvent.emptyNew()
  v3.player = player
  v3.nickname = nickname
  v3.userId = userId
  return v3
end
function PlayerSetNicknameEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteString(streamId, self.nickname)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
end
function PlayerSetNicknameEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadString(streamId)
  self.nickname = v3
  v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self:run(connection)
end
function PlayerSetNicknameEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:setPlayerNickname(self.player, self.nickname, self.userId)
    return
  end
  v2:setPlayerNickname(self.player, self.nickname, self.userId, true)
end
