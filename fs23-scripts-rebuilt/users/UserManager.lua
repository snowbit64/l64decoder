-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UserManager = {}
local UserManager_mt = Class(UserManager)
function UserManager.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.isServer = isServer
  v2.users = {}
  v2.masterUsers = {}
  v2.masterUserIdToConnection = {}
  v2.idCounter = 0
  v2.blockedUserUpdateTimer = 0
  return v2
end
function UserManager:delete()
  for v4, v5 in ipairs(self.users) do
    self:stoppedPlayWithUser(v5)
  end
end
function UserManager:getNextUserId()
  self.idCounter = self.idCounter + 1
  return self.idCounter
end
function UserManager:addUser(user)
  table.insert(self.users, user)
  v2:publish(MessageType.USER_ADDED, user)
  self:startPlayWithUser(user)
end
function UserManager:removeUserByConnection(connection)
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getConnection()
    if not (v7 == connection) then
      continue
    end
    self:stoppedPlayWithUser(v6)
    self:removeMasterUser(v6)
    table.remove(self.users, v5)
    v7:publish(MessageType.USER_REMOVED, v6)
    return
  end
end
function UserManager:removeUser(user)
  for v5, v6 in ipairs(self.users) do
    if not (user == v6) then
      continue
    end
    self:stoppedPlayWithUser(user)
    self:removeMasterUser(user)
    table.remove(self.users, v5)
    v7:publish(MessageType.USER_REMOVED, user)
    return
  end
end
function UserManager:removeUserById(userId)
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getId()
    if not (userId == v7) then
      continue
    end
    self:stoppedPlayWithUser(v6)
    self:removeMasterUser(v6)
    table.remove(self.users, v5)
    v7:publish(MessageType.USER_REMOVED, v6)
    return
  end
end
function UserManager.startPlayWithUser(v0, v1)
  if GS_PLATFORM_GGP then
    local v2 = v1:getPlatformUserId()
    local v3 = v1:getPlatformId()
    local v4 = getUserId()
    if v4 ~= v2 then
      v4 = getPlatformIdsAreCompatible(v3, GS_PLATFORM_ID)
      if v4 then
        startedPlayWithPlatformUserId(v2)
      end
    end
  end
end
function UserManager.stoppedPlayWithUser(v0, v1)
  if GS_PLATFORM_GGP then
    local v2 = v1:getPlatformUserId()
    local v3 = v1:getPlatformId()
    local v4 = getUserId()
    if v4 ~= v2 then
      v4 = getPlatformIdsAreCompatible(v3, GS_PLATFORM_ID)
      if v4 then
        stoppedPlayWithPlatformUserId(v2)
      end
    end
  end
end
function UserManager:getUsers()
  return self.users
end
function UserManager:getNumberOfUsers()
  return #self.users
end
function UserManager:getUserByNickname(nickname, useLowercase)
  if useLowercase then
    local v3 = nickname:lower()
  end
  for v6, v7 in ipairs(self.users) do
    local v8 = v7:getNickname()
    if useLowercase then
      local v9 = v8:lower()
    end
    if not (v8 == nickname) then
      continue
    end
    return v7
  end
  return nil
end
function UserManager:getUserByConnection(connection)
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getConnection()
    if not (v7 == connection) then
      continue
    end
    return v6
  end
  return nil
end
function UserManager:getUserByUniqueId(uniqueUserId)
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getUniqueUserId()
    if not (v7 == uniqueUserId) then
      continue
    end
    return v6
  end
  return nil
end
function UserManager:getUserIdByConnection(connection)
  local user = self:getUserByConnection(connection)
  if user ~= nil then
    return user:getId()
  end
  return -1
end
function UserManager:getUserByUserId(userId)
  if userId == nil then
    return nil
  end
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getId()
    if not (v7 == userId) then
      continue
    end
    return v6
  end
  return nil
end
function UserManager:getUniqueUserIdByUserId(userId)
  if userId == nil then
    return nil
  end
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getId()
    if not (v7 == userId) then
      continue
    end
    v7 = v6:getUniqueUserId()
    return v7
  end
  return nil
end
function UserManager:getUniqueUserIdByConnection(connection)
  if connection == nil then
    return nil
  end
  local user = self:getUserByConnection(connection)
  if user == nil then
    return nil
  end
  return user:getUniqueUserId()
end
function UserManager:getNumberOfMasterUsers()
  return #self.masterUsers
end
function UserManager:addMasterUserByConnection(connection)
  assert(self.isServer, "UserManager:addMasterUserByConnection call is only allowed on Server")
  local user = self:getUserByConnection(connection)
  if user ~= nil then
    self:addMasterUser(user)
  end
end
function UserManager:addMasterUser(user)
  table.addElement(self.masterUsers, user)
  if self.isServer then
    local v3 = user:getId()
    local v4 = user:getConnection()
    self.masterUserIdToConnection[v3] = v4
    v2:broadcastMissionDynamicInfo()
  end
  user:setIsMasterUser(true)
  v2:publish(MessageType.MASTERUSER_ADDED, user)
end
function UserManager:removeMasterUser(user)
  user:setIsMasterUser(false)
  table.removeElement(self.masterUsers, user)
  if self.isServer then
    local v3 = user:getId()
    self.masterUserIdToConnection[v3] = nil
  end
end
function UserManager:getMasterUsers()
  return self.masterUsers
end
function UserManager:getIsUserIdMasterUser(userId)
  assert(self.isServer, "UserManager:getIsUserIdMasterUser call is only allowed on Server")
  if self.masterUserIdToConnection[userId] == nil then
  end
  return true
end
function UserManager:getIsConnectionMasterUser(connection)
  assert(self.isServer, "UserManager:getIsUserIdMasterUser call is only allowed on Server")
  local user = self:getUserByConnection(connection)
  return user:getIsMasterUser()
end
function UserManager:getAllPlatformSessionIds()
  assert(self.isServer, "UserManager:getAllPlatformSessionIds() call is only allowed on Server")
  for v5, v6 in ipairs(self.users) do
    local v7 = v6:getPlatformSessionId()
    if not (v7 ~= "") then
      continue
    end
    table.insert(v1, v7)
  end
  return v1
end
function UserManager:setUserBlockDataDirty()
  self.blockedUserUpdateTimer = 0
end
function UserManager:update(dt)
  self.blockedUserUpdateTimer = self.blockedUserUpdateTimer - dt
  if self.blockedUserUpdateTimer <= 0 then
    for v5, v6 in ipairs(self.users) do
      if not self.isServer then
        v6:updateSentUserBlockedState()
      end
      local v7 = v6:getIsBlocked()
      if not (v6.lastKnownBlockState ~= v7) then
        continue
      end
      v6.lastKnownBlockState = v7
      if not self.isServer then
        continue
      end
      if not v7 then
        continue
      end
      local v8 = v6:getConnection()
      local v11 = KickBanNotificationEvent.new(false)
      v8:sendEvent(...)
      v9:closeConnection(v8)
    end
    self.blockedUserUpdateTimer = 5000
  end
end
