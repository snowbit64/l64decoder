-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Connection = {}
local Connection_mt = Class(Connection)
Connection.SYNC_CREATING = 1
Connection.SYNC_CREATING_DELAYED = 2
Connection.SYNC_LOADED = 3
Connection.SYNC_SYNCING = 4
Connection.SYNC_CREATED = 5
Connection.SYNC_REMOVING = 6
Connection.SYNC_MANUALLY_REGISTERED = 7
Connection.SYNC_HIST_CREATE = 0
Connection.SYNC_HIST_SYNC = 1
Connection.SYNC_HIST_UPDATE = 2
Connection.SYNC_HIST_REMOVE = 3
Connection.SEND_INFO_NUM_BITS = 3
Connection.SEND_INFO_DELETE = 0
Connection.SEND_INFO_CREATE = 1
Connection.SEND_INFO_SYNC = 2
Connection.SEND_INFO_UPDATE = 3
Connection.SEND_INFO_REMOVE = 4
function Connection.new(id, isServer, reverseConnection)
  local v3 = setmetatable({}, u0)
  v3.streamId = id
  v3.isServer = isServer
  v3.isConnected = true
  v3.isReadyForObjects = false
  v3.isReadyForEvents = false
  v3.objectsInfo = {}
  v3.pendingDeleteObjects = {}
  v3.pendingDeleteObjectPacketIds = {}
  v3.compressionRatio = 1
  v3.sendStatsTime = 0
  v3.lastSeqSent = 0
  v3.lastSeqReceived = 0
  v3.highestAckedSeq = 0
  v3.ackMask = 0
  v3.hasPacketsToAck = false
  v3.ackPingPacketSent = false
  if v3.streamId == NetworkNode.LOCAL_STREAM_ID then
    v3:setIsReadyForObjects(true)
    v3:setIsReadyForEvents(true)
    if reverseConnection ~= nil then
      v3.localConnection = reverseConnection
      return v3
    end
    local v4 = Connection.new(id, not isServer, v3)
    v3.localConnection = v4
    v4:setIsReadyForObjects(true)
    v4:setIsReadyForEvents(true)
  end
  return v3
end
function Connection:setIsReadyForObjects(isReadyForObjects)
  self.isReadyForObjects = isReadyForObjects
end
function Connection:setIsReadyForEvents(isReadyForEvents)
  self.isReadyForEvents = isReadyForEvents
end
function Connection:updateSendStats(tickSum)
  self.sendStatsTime = self.sendStatsTime + tickSum
  if 100 < self.sendStatsTime then
    self.sendStatsTime = 0
    local v2, v3 = netGetAndResetConnectionSendStats(self.streamId)
    if 0 < v3 then
      local v5 = MathUtil.clamp(v2 / v3, 1, 5)
    end
    self.compressionRatio = 0.8 * self.compressionRatio + 0.2 * v4
  end
end
function Connection:sendEvent(event, deleteEvent, force)
  if not self.isConnected then
    return
  end
  if self.streamId == NetworkNode.LOCAL_STREAM_ID then
    event:run(self.localConnection)
  else
    if not self.isReadyForEvents then
      -- if not v3 then goto L102 end
    end
    if event.eventId == nil then
      local v8 = ClassUtil.getClassNameByObject(event)
      print("Error: Invalid event id for " .. (v8 or "<unable to retrieve class>"))
    else
      if event.networkChannel == nil then
      end
      streamWriteUIntN(self.streamId, MessageIds.EVENT, MessageIds.SEND_NUM_BITS)
      streamWriteUIntN(self.streamId, event.eventId, EventIds.SEND_NUM_BITS)
      event:writeStream(self.streamId, self)
      local dataSent = streamGetWriteOffset(self.streamId)
      netSendStream(self.streamId, "high", "reliable_ordered", v4, true)
      if g_server ~= nil then
        v6:addPacketSize(self, NetworkNode.PACKET_EVENT, dataSent / 8)
      else
        v6:addPacketSize(self, NetworkNode.PACKET_EVENT, dataSent / 8)
      end
    end
  end
  if deleteEvent then
    event:delete()
  end
end
function Connection:queueSendEvent(event, force, ghostObject)
  if not self.isConnected then
    return
  end
  if not self.isReadyForEvents then
    -- if not v2 then goto L83 end
  end
  if self.objectsInfo[ghostObject.id] ~= nil then
    if self.objectsInfo[ghostObject.id].sync ~= Connection.SYNC_CREATING and self.objectsInfo[ghostObject.id].sync ~= Connection.SYNC_CREATING_DELAYED and self.objectsInfo[ghostObject.id].sync ~= Connection.SYNC_LOADED and self.objectsInfo[ghostObject.id].sync ~= Connection.SYNC_SYNCING and self.objectsInfo[ghostObject.id].sync ~= Connection.SYNC_MANUALLY_REGISTERED then
    end
    if v5 then
      event.queueCount = event.queueCount + 1
      if v4.eventQueue == nil then
        v4.eventQueue = {}
      end
      table.insert(v4.eventQueue, event)
    end
  end
end
function Connection:getIsClient()
  return not self.isServer
end
function Connection:getIsServer()
  return self.isServer
end
function Connection:getIsLocal()
  if self.streamId ~= NetworkNode.LOCAL_STREAM_ID then
  end
  return true
end
function Connection:writeUpdateAck(streamId)
  self.lastSeqSent = self.lastSeqSent + 1
  streamWriteUInt8(streamId, self.lastSeqSent)
  streamWriteUInt8(streamId, self.lastSeqReceived)
  streamWriteInt32(streamId, self.ackMask)
  self.hasPacketsToAck = false
end
function Connection:readUpdateAck(streamId)
  local v2 = streamReadUInt8(streamId)
  local v3 = streamReadUInt8(streamId)
  local v4 = streamReadInt32(streamId)
  local v5 = bitAND(self.lastSeqReceived, 4294967040)
  if v2 + v5 < self.lastSeqReceived then
  end
  if self.lastSeqReceived + 31 < v2 then
    return false
  end
  v5 = bitAND(self.highestAckedSeq, 4294967040)
  if v3 + v5 < self.highestAckedSeq then
  end
  if self.lastSeqSent < v3 then
    return false
  end
  v5 = bitShiftLeft(self.ackMask, v2 - self.lastSeqReceived)
  self.ackMask = v5
  self.ackMask = self.ackMask + 1
  self.hasPacketsToAck = true
  -- TODO: structure LOP_FORNPREP (pc 72, target 97)
  local v11 = bitShiftLeft(1, v3 - self.highestAckedSeq + 1)
  local v9 = bitAND(...)
  if v9 == 0 then
  end
  if true then
    self:onPacketSent(v7)
  else
    self:onPacketLost(v7)
  end
  -- TODO: structure LOP_FORNLOOP (pc 96, target 73)
  self.highestAckedSeq = v3
  self.lastSeqReceived = v2
  return true
end
function Connection:getIsWindowFull()
  if 29 > self.lastSeqSent - self.highestAckedSeq then
  end
  return true
end
function Connection:getObjectSyncState(objectId)
  if self.objectsInfo[objectId] ~= nil then
    return self.objectsInfo[objectId].sync
  end
  return nil
end
function Connection:onPacketSent(i)
  for v5, v6 in pairs(self.objectsInfo) do
    if not (v6.history[i] ~= nil) then
      continue
    end
    if g_networkDebug then
      for v11, v12 in pairs(v6.history) do
        if i > v11 then
        end
        assert(true)
      end
    end
    v6.history[i] = nil
    if v7.sync == Connection.SYNC_HIST_CREATE then
      if not (v6.sync == Connection.SYNC_CREATING) then
        continue
      end
      v6.sync = Connection.SYNC_CREATED
      self:sendObjectEventQueue(v6)
    elseif v7.sync == Connection.SYNC_HIST_SYNC then
      if not (v6.sync == Connection.SYNC_SYNCING) then
        continue
      end
      v6.sync = Connection.SYNC_CREATED
      self:sendObjectEventQueue(v6)
    else
      if not (v7.sync == Connection.SYNC_HIST_REMOVE) then
        continue
      end
      if not (v6.sync == Connection.SYNC_REMOVING) then
        continue
      end
      self.objectsInfo[v5] = nil
    end
  end
  for v5, v6 in pairs(self.pendingDeleteObjectPacketIds) do
    if not (v6 == i) then
      continue
    end
    self.pendingDeleteObjectPacketIds[v5] = nil
  end
  v2:onConnectionPacketSent(self, i)
end
function Connection:onPacketLost(i)
  for v5, v6 in pairs(self.objectsInfo) do
    if not (v6.history[i] ~= nil) then
      continue
    end
    if g_networkDebug then
      for v11, v12 in pairs(v6.history) do
        if i > v11 then
        end
        assert(true)
      end
    end
    v6.history[i] = nil
    if v7.sync == Connection.SYNC_HIST_CREATE then
      if v6.sync ~= Connection.SYNC_CREATING and not (v6.sync == Connection.SYNC_CREATING_DELAYED) then
        continue
      end
      if v6.manuallyReplicated then
        v6.sync = Connection.SYNC_MANUALLY_REGISTERED
        continue
      end
      self.objectsInfo[v5] = nil
    elseif v7.sync == Connection.SYNC_HIST_SYNC then
      if not (v6.sync == Connection.SYNC_SYNCING) then
        continue
      end
      v6.sync = Connection.SYNC_LOADED
    else
      if v7.sync == Connection.SYNC_HIST_REMOVE then
        if not (v6.sync == Connection.SYNC_REMOVING) then
          continue
        end
        v6.sync = Connection.SYNC_CREATED
      else
        for v12, v13 in pairs(v6.history) do
          local v14 = bitOR(v8, v13.mask)
        end
        v11 = bitNOT(v8)
        v9 = bitAND(...)
        if not (v9 ~= 0) then
          continue
        end
        v10 = bitOR(v6.dirtyMask, v9)
        v6.dirtyMask = v10
      end
    end
  end
  for v5, v6 in pairs(self.pendingDeleteObjectPacketIds) do
    if not (v6 == i) then
      continue
    end
    self.pendingDeleteObjectPacketIds[v5] = nil
    self.pendingDeleteObjects[v5] = v5
  end
  v2:onConnectionPacketLost(self, i)
end
function Connection:sendObjectEventQueue(objectInfo)
  if objectInfo.eventQueue ~= nil then
    for v5, v6 in ipairs(objectInfo.eventQueue) do
      self:sendEvent(v6, false, true)
      v6.queueCount = v6.queueCount - 1
      if not (v6.queueCount == 0) then
        continue
      end
      v6:delete()
    end
    objectInfo.eventQueue = nil
  end
end
function Connection.dropObjectEventQueue(v0, i)
  if i.eventQueue ~= nil then
    for v5, v6 in ipairs(i.eventQueue) do
      v6.queueCount = v6.queueCount - 1
      if not (v6.queueCount == 0) then
        continue
      end
      v6:delete()
    end
    i.eventQueue = nil
  end
end
function Connection:notifyObjectDeleted(objectId, alreadySent)
  assert(not self.isServer)
  if self.objectsInfo[objectId] ~= nil then
    self:dropObjectEventQueue(self.objectsInfo[objectId])
    self.objectsInfo[objectId] = nil
  end
  if not alreadySent and self.streamId ~= NetworkNode.LOCAL_STREAM_ID and self.pendingDeleteObjectPacketIds[objectId] == nil then
    self.pendingDeleteObjects[objectId] = objectId
  end
end
function Connection.getLatency(v0)
  return 20
end
