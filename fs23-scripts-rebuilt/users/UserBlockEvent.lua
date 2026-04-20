-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UserBlockEvent = {}
local UserBlockEvent_mt = Class(UserBlockEvent, Event)
InitStaticEventClass(UserBlockEvent, "UserBlockEvent", EventIds.EVENT_USER_BLOCK)
function UserBlockEvent.emptyNew()
  return Event.new(u0)
end
function UserBlockEvent.new(userId, isBlocked)
  local v2 = UserBlockEvent.emptyNew()
  v2.userId = userId
  v2.isBlocked = isBlocked
  return v2
end
function UserBlockEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  v3 = streamReadBool(streamId)
  self.isBlocked = v3
  self:run(connection)
end
function UserBlockEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
  streamWriteBool(streamId, self.isBlocked)
end
function UserBlockEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserByConnection(connection)
    local v3 = v3:getUserByUserId(self.userId)
    v3:setIsBlockedBy(v2, self.isBlocked)
  end
end
function UserBlockEvent.sendEvent(userId, isBlocked, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L24
  end
  if g_server ~= nil then
    return
  end
  local v3 = v3:getServerConnection()
  local v5 = UserBlockEvent.new(userId, isBlocked)
  v3:sendEvent(...)
end
