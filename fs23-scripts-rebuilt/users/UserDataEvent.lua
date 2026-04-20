-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UserDataEvent = {SEND_NUM_BITS = 5}
local UserDataEvent_mt = Class(UserDataEvent, Event)
InitStaticEventClass(UserDataEvent, "UserDataEvent", EventIds.EVENT_USER_DATA)
function UserDataEvent.emptyNew()
  return Event.new(u0)
end
function UserDataEvent.new(changedUsers)
  local v1 = UserDataEvent.emptyNew()
  v1.changedUsers = changedUsers
  return v1
end
function UserDataEvent:readStream(streamId, connection)
  self.changedUsers = {}
  local numUsers = streamReadUIntN(streamId, UserDataEvent.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNPREP (pc 15, target 42)
  local userId = streamReadInt32(streamId)
  local v8 = v8:getUserByUserId(userId)
  v8:readStream(streamId, connection)
  local v9 = v8:getIsMasterUser()
  if v9 then
    v9:addMasterUser(v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 41, target 16)
end
function UserDataEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, #self.changedUsers, UserDataEvent.SEND_NUM_BITS)
  for v7, v8 in ipairs(self.changedUsers) do
    local v11 = v8:getId()
    streamWriteInt32(...)
    v8:writeStream(streamId, connection)
  end
end
