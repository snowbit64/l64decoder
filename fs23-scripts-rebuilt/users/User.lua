-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

User = {}
local User_mt = Class(User)
function User.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.id = -1
  v1.connection = nil
  v1.state = FSBaseMission.USER_STATE_LOADING
  v1.nickname = ""
  v1.languageIndex = 1
  v1.isMasterUser = false
  v1.connectedTime = 0
  v1.uniqueUserId = ""
  v1.platformUserId = 0
  v1.platformId = 0
  v1.platformSessionId = ""
  v1.financesVersionCounter = -1
  v1.financeUpdateSendTime = 0
  v1.playerStyle = nil
  v1.unmutedVoiceVolume = 1
  v1.blockStates = {}
  v1.sentUserBlocked = nil
  return v1
end
function User:readStream(streamId, connection)
  local playtime = streamReadInt32(streamId)
  self.id = playtime
  playtime = streamReadString(streamId)
  self.nickname = playtime
  playtime = streamReadUInt8(streamId)
  self.languageIndex = playtime
  playtime = streamReadBool(streamId)
  self.isMasterUser = playtime
  playtime = streamReadInt32(streamId)
  self.connectedTime = g_currentMission.time - playtime
  local v4 = streamReadString(streamId)
  self.uniqueUserId = v4
  v4 = streamReadString(streamId)
  self.platformUserId = v4
  v4 = streamReadUInt8(streamId)
  self.platformId = v4
  v4 = streamReadString(streamId)
  self.platformSessionId = v4
end
function User:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.id)
  streamWriteString(streamId, self.nickname)
  streamWriteUInt8(streamId, self.languageIndex)
  streamWriteBool(streamId, self.isMasterUser)
  streamWriteInt32(streamId, g_currentMission.time - self.connectedTime)
  streamWriteString(streamId, self.uniqueUserId)
  streamWriteString(streamId, self.platformUserId)
  streamWriteUInt8(streamId, self.platformId)
  streamWriteString(streamId, self.platformSessionId)
end
function User:setId(id)
  self.id = id
end
function User:getId()
  return self.id
end
function User:setState(state)
  self.state = state
end
function User:getState()
  return self.state
end
function User:setConnection(connection)
  self.connection = connection
end
function User:getConnection()
  return self.connection
end
function User:setNickname(name)
  self.nickname = name
end
function User:getNickname()
  local v1 = self:getIsBlocked()
  if v1 then
    local v3 = getPlatformId()
    v1 = getPlatformIdsAreCompatible(...)
    if not v1 then
      v1 = string.format("Player %d", self.id)
      return v1
    end
  end
  return self.nickname
end
function User:setLanguageIndex(index)
  self.languageIndex = index
end
function User:getLanguageIndex()
  return self.languageIndex
end
function User:setIsMasterUser(isMasterUser)
  self.isMasterUser = isMasterUser
end
function User:getIsMasterUser()
  return self.isMasterUser
end
function User:setConnectedTime(connectedTime)
  self.connectedTime = connectedTime
end
function User:getConnectedTime(connectedTime)
  return self.connectedTime
end
function User:setUniqueUserId(uniqueUserId)
  self.uniqueUserId = uniqueUserId
end
function User:getUniqueUserId()
  return self.uniqueUserId
end
function User:setPlatformUserId(platformUserId)
  self.platformUserId = platformUserId
end
function User:getPlatformUserId()
  return self.platformUserId
end
function User:setPlatformId(platformId)
  self.platformId = platformId
end
function User:getPlatformId()
  return self.platformId
end
function User:setPlatformSessionId(platformSessionId)
  self.platformSessionId = platformSessionId
end
function User:getPlatformSessionId()
  return self.platformSessionId
end
function User:setFinancesVersionCounter(financesVersionCounter)
  self.financesVersionCounter = financesVersionCounter
end
function User:getFinancesVersionCounter()
  return self.financesVersionCounter
end
function User:setFinanceUpdateSendTime(financeUpdateSendTime)
  self.financeUpdateSendTime = financeUpdateSendTime
end
function User:getFinanceUpdateSendTime()
  return self.financeUpdateSendTime
end
function User:setPlayerStyle(playerStyle)
  self.playerStyle = playerStyle
end
function User:getPlayerStyle()
  return self.playerStyle
end
function User:getIsBlocked()
  return getIsUserBlocked(self.uniqueUserId, self.platformUserId, self.platformId)
end
function User:getAllowVoiceCommunication()
  local v2 = getAllowVoiceCommunicationWithUser(self.uniqueUserId, self.platformUserId, self.platformId)
  if v2 ~= AsyncResult.YES then
  end
  return true
end
function User:getAllowTextCommunication()
  local v2 = getAllowTextCommunicationWithUser(self.uniqueUserId, self.platformUserId, self.platformId)
  if v2 ~= AsyncResult.YES then
  end
  return true
end
function User:block()
  setIsUserBlocked(self.uniqueUserId, self.platformUserId, self.platformId, true, self.nickname)
  self:updateSentUserBlockedState()
end
function User:unblock()
  setIsUserBlocked(self.uniqueUserId, self.platformUserId, self.platformId, false, "")
  self:updateSentUserBlockedState()
end
function User:report(reason)
  reportUser(self.uniqueUserId, self.platformUserId, self.platformId, reason)
end
function User:getVoiceVolume()
  return VoiceChatUtil.getUserVolume(self.uniqueUserId)
end
function User:setVoiceVolume(volume)
  VoiceChatUtil.setUserVolume(self.uniqueUserId, volume)
end
function User:getVoiceMuted()
  if self.id == g_currentMission.playerUserId then
    local v2 = voiceChatGetRecordingMode()
    if v2 ~= VoiceChatRecordingMode.MUTED then
    end
    return true
  end
  return self.isMuted
end
function User:setVoiceMuted(isMuted)
  if self.id == g_currentMission.playerUserId then
    local v2 = voiceChatGetRecordingMode()
    if v2 == VoiceChatRecordingMode.MUTED then
      local v3 = v3:getValue(SettingsModel.SETTING.VOICE_MODE)
      voiceChatSetRecordingMode(...)
      return
    end
    voiceChatSetRecordingMode(VoiceChatRecordingMode.MUTED)
    return
  end
  if self.isMuted ~= isMuted then
    self.isMuted = isMuted
    if isMuted then
      v2 = VoiceChatUtil.getUserVolume(self.uniqueUserId)
      self.unmutedVoiceVolume = v2
      VoiceChatUtil.setUserVolume(self.uniqueUserId, 0)
      return
    end
    VoiceChatUtil.setUserVolume(self.uniqueUserId, self.unmutedVoiceVolume)
  end
end
function User:updateSentUserBlockedState()
  local isBlocked = self:getIsBlocked()
  if isBlocked ~= self.sentUserBlocked then
    self.sentUserBlocked = isBlocked
    local v3 = self:getId()
    UserBlockEvent.sendEvent(v3, isBlocked)
  end
  return nil
end
function User:setIsBlockedBy(user, isBlocked)
  local v4 = user:getUniqueUserId()
  self.blockStates[v4] = isBlocked
  v4 = self:getUniqueUserId()
  local v5 = user:getUniqueUserId()
  voiceChatSetUserPairBlocked(v4, v5, isBlocked)
end
function User:getIsBlockedBy(user)
  local v5 = user:getUniqueUserId()
  if self.blockStates[v5] == false then
  end
  return true
end
