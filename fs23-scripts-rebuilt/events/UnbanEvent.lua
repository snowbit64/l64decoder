-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UnbanEvent = {}
local UnbanEvent_mt = Class(UnbanEvent, Event)
InitStaticEventClass(UnbanEvent, "UnbanEvent", EventIds.EVENT_UNBAN)
function UnbanEvent.emptyNew()
  return Event.new(u0)
end
function UnbanEvent.new(uniqueUserId)
  local v1 = UnbanEvent.emptyNew()
  v1.uniqueUserId = uniqueUserId
  return v1
end
function UnbanEvent:readStream(streamId, connection)
  local v4 = v4:getIsServer()
  assert(v4, "UnbanEvent is a client to server only event")
  local v3 = streamReadString(streamId)
  self.uniqueUserId = v3
  self:run(connection)
end
function UnbanEvent:writeStream(streamId, connection)
  streamWriteString(streamId, self.uniqueUserId)
end
function UnbanEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getIsConnectionMasterUser(connection)
    if not v2 then
      print("Connection is not a master user")
      return
    end
    local v5 = getNumOfBlockedUsers()
    -- TODO: structure LOP_FORNPREP (pc 22, target 46)
    local v5, v6, v7, v8 = getBlockedUser(0)
    if v5 == self.uniqueUserId then
      setIsUserBlocked(v5, v6, v7, false, "")
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 40, target 23)
    return
  end
  print("Error: UnbanEvent is a client to server only event")
end
