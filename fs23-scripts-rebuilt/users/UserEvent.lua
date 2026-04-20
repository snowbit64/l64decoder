-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UserEvent = {SEND_NUM_BITS = 5}
local UserEvent_mt = Class(UserEvent, Event)
InitStaticEventClass(UserEvent, "UserEvent", EventIds.EVENT_USER)
function UserEvent.emptyNew()
  return Event.new(u0)
end
function UserEvent.new(addedUsers, removedUsers, capacity)
  local v3 = UserEvent.emptyNew()
  v3.addedUsers = addedUsers
  v3.removedUsers = removedUsers
  v3.capacity = capacity
  return v3
end
function UserEvent:readStream(streamId, connection)
  local userId = NetworkUtil.readNodeObjectId(streamId)
  g_currentMission.playerUserId = userId
  local v4 = streamReadInt8(streamId)
  self.capacity = v4
  self.addedUsers = {}
  v4 = streamReadUIntN(streamId, UserEvent.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNPREP (pc 29, target 48)
  local user = User.new(false)
  user:readStream(streamId, connection)
  table.insert(self.addedUsers, user)
  -- TODO: structure LOP_FORNLOOP (pc 47, target 30)
  self.removedUsers = {}
  local numUsers = streamReadUIntN(streamId, UserEvent.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNPREP (pc 64, target 78)
  user = streamReadInt32(streamId)
  table.insert(self.removedUsers, user)
  -- TODO: structure LOP_FORNLOOP (pc 77, target 65)
  self:run(connection)
end
function UserEvent:writeStream(streamId, connection)
  local v3 = v3:getUserIdByConnection(connection)
  NetworkUtil.writeNodeObjectId(streamId, v3)
  streamWriteInt8(streamId, self.capacity)
  streamWriteUIntN(streamId, #self.addedUsers, UserEvent.SEND_NUM_BITS)
  for v8, v9 in ipairs(self.addedUsers) do
    v9:writeStream(streamId, connection)
  end
  streamWriteUIntN(streamId, #self.removedUsers, UserEvent.SEND_NUM_BITS)
  for v8, v9 in ipairs(self.removedUsers) do
    local v12 = v9:getId()
    streamWriteInt32(...)
  end
end
function UserEvent:run(connection)
  g_currentMission.missionDynamicInfo.capacity = self.capacity
  for v5, v6 in ipairs(self.addedUsers) do
    local v9 = v6:getUniqueUserId()
    local v7 = v7:getUserByUniqueId(...)
    if not (v7 == nil) then
      continue
    end
    v7:addUser(v6)
  end
  for v5, v6 in ipairs(self.removedUsers) do
    v7:removeUserById(v6)
  end
end
