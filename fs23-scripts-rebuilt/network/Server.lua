-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Server = {}
local Server_mt = Class(Server, NetworkNode)
function Server.new()
  local v0 = NetworkNode.new(u0)
  v0.clients = {}
  v0.clientConnections = {}
  v0.clientPositions = {}
  v0.clientGuiVisibility = {}
  v0.clientClipDistCoeffs = {}
  v0.objects = {}
  v0.tickRate = 30
  v0.tickDuration = 1000 / v0.tickRate
  v0.tickSum = 0
  v0.netIsRunning = false
  addConsoleCommand("gsNetworkShowTraffic", "Toggle network traffic visualization", "consoleCommandToggleShowNetworkTraffic", v0)
  addConsoleCommand("gsNetworkShowTrafficClients", "Toggle client network traffic visualization", "consoleCommandToggleShowNetworkTrafficClients", v0)
  addConsoleCommand("gsNetworkDebug", "Toggle network debugging", "consoleCommandToggleNetworkDebug", v0)
  addConsoleCommand("gsNetworkShowObjects", "Toggle network show objects", "consoleCommandToggleNetworkShowObjects", v0)
  return v0
end
function Server:delete()
  removeConsoleCommand("gsNetworkShowTraffic")
  removeConsoleCommand("gsNetworkShowTrafficClients")
  removeConsoleCommand("gsNetworkDebug")
  removeConsoleCommand("gsNetworkShowObjects")
  local v2 = v2:superClass()
  v2.delete(self)
  self:stop()
end
function Server:update(dt, isRunning)
  local v4 = v4:superClass()
  v4.update(self, dt)
  if not isRunning then
    return
  end
  self:updateActiveObjects(dt)
  self.tickSum = self.tickSum + dt
  local currentFPS = MathUtil.round(1000 / dt, 0)
  v4 = math.min(self.serverFPS, currentFPS)
  self.serverFPS = v4
  if self.tickDuration - 3 <= self.tickSum then
    if #self.clients ~= 0 then
      -- if g_maxUploadRate / #v0.clients then goto L57 end
    end
    local v7 = math.min(v8, g_maxUploadRate)
    if self.networkListener ~= nil then
      v6:onConnectionsUpdateTick(self.tickSum)
    end
    self:updateActiveObjectsTick(self.tickSum)
    -- TODO: structure LOP_FORNPREP (pc 87, target 772)
    if self.clientConnections[self.clients[1]].isReadyForObjects then
      local v11 = self.clientConnections[self.clients[1]]:getIsWindowFull()
      if v11 then
        -- if v0.clientConnections[v0.clients[1]].ackPingPacketSent then goto L771 end
        self.clientConnections[self.clients[1]].ackPingPacketSent = true
        streamWriteUIntN(self.clients[1], MessageIds.OBJECT_PING, MessageIds.SEND_NUM_BITS)
        self.clientConnections[self.clients[1]]:writeUpdateAck(self.clients[1])
        netSendStream(self.clients[1], "high", "reliable_ordered", 1, true)
      else
        self.clientConnections[self.clients[1]]:updateSendStats(self.tickSum)
        self.clientConnections[self.clients[1]].ackPingPacketSent = false
        self.currentWriteStreamConnection = self.clientConnections[self.clients[1]]
        self.currentWriteStreamConnectionIsInitial = false
        local v16, v17, v18 = self:getClientPosition(self.clients[1])
        local v19 = self:getClientClipDistCoeff(self.clients[1])
        local v20 = self:getClientGuiVisibility(self.clients[1])
        for v24, v25 in pairs(self.objects) do
          if v12[v25.id] ~= nil then
            local v27 = bitOR(v12[v25.id].dirtyMask, v25.dirtyMask)
            v12[v25.id].dirtyMask = v27
          end
          if v26 == nil then
            v27 = v25:testScope(v16, v17, v18, v19, v20)
            if not v27 then
              continue
            end
            v27 = v25:getUpdatePriority(2, v16, v17, v18, v19, v10, v20)
            table.insert(v15, {id = Connection.SEND_INFO_CREATE, object = v25, prio = v27})
          elseif v26.sync == Connection.SYNC_LOADED then
            v27 = v25:testScope(v16, v17, v18, v19)
            if not v27 then
              continue
            end
            v27 = v25:getUpdatePriority(2, v16, v17, v18, v19, v10)
            table.insert(v15, {id = Connection.SEND_INFO_SYNC, object = v25, prio = v27})
          else
            if not (v26.sync == Connection.SYNC_CREATED) then
              continue
            end
            v27 = v25:testScope(v16, v17, v18, v19, v20)
            if v27 then
              if v26.dirtyMask ~= 0 then
                v26.skipCount = v26.skipCount + 1
                v27 = v25:getUpdatePriority(v26.skipCount, v16, v17, v18, v19, v10, v20)
                table.insert(v15, {id = Connection.SEND_INFO_UPDATE, object = v25, prio = v27})
                continue
              end
              v26.skipCount = 0
            else
              v26.skipCount = v26.skipCount + 1
              v27 = v25:getUpdatePriority(v26.skipCount, v16, v17, v18, v19, v10, v20)
              table.insert(v15, {id = Connection.SEND_INFO_REMOVE, object = v25, prio = v27})
            end
          end
        end
        for v24 in pairs(v13) do
          table.insert(v15, {id = Connection.SEND_INFO_DELETE, objectId = v24, prio = 100})
        end
        table.sort(v15, Server.prioCmp)
        streamWriteTimestamp(v9)
        streamWriteUIntN(v9, MessageIds.OBJECT_UPDATE, MessageIds.SEND_NUM_BITS)
        streamWriteInt32(v9, g_physicsNetworkTime)
        v10:writeUpdateAck(v9)
        v21 = MathUtil.clamp(self.serverFPS, 1, 60)
        streamWriteUIntN(v9, v21, 6)
        streamWriteBool(v9, g_networkDebug)
        if self.networkListener ~= nil then
          v22:onConnectionWriteUpdateStream(v10, v11, g_networkDebug)
        end
        v22 = streamGetWriteOffset(v9)
        streamWriteUInt8(v9, 0)
        v23 = math.min(#v15, 255)
        -- TODO: structure LOP_FORNPREP (pc 452, target 741)
        v27 = streamGetWriteOffset(v9)
        if g_networkDebug then
          local v30 = streamGetWriteOffset(v9)
          streamWriteInt32(v9, 0)
        end
        streamWriteUIntN(v9, v28.id, Connection.SEND_INFO_NUM_BITS)
        if v28.id == Connection.SEND_INFO_DELETE then
          NetworkUtil.writeNodeObjectId(v9, v28.objectId)
          v13[v28.objectId] = nil
          v14[v28.objectId] = v10.lastSeqSent
        elseif v28.id == Connection.SEND_INFO_CREATE then
          streamWriteUIntN(v9, v28.object.classId, ObjectIds.SEND_NUM_BITS)
          NetworkUtil.writeNodeObjectId(v9, v28.object.id)
          v28.object:writeStream(v9, v10)
          local v33 = v28.object:getIsDelayedLoaded()
          if v33 then
          end
          v12[v30.id] = {skipCount = 0, dirtyMask = 0, sync = v32, history = {}}
          v12[v30.id].history[v10.lastSeqSent] = {mask = 0, sync = Connection.SYNC_HIST_CREATE}
        else
          if v28.id == Connection.SEND_INFO_SYNC then
            NetworkUtil.writeNodeObjectId(v9, v28.object.id)
            v28.object:postWriteStream(v9, v10)
            v12[v28.object.id].sync = Connection.SYNC_SYNCING
            v12[v28.object.id].history[v10.lastSeqSent] = {mask = 0, sync = Connection.SYNC_HIST_SYNC}
          elseif v28.id == Connection.SEND_INFO_UPDATE then
            NetworkUtil.writeNodeObjectId(v9, v28.object.id)
            v28.object:writeUpdateStream(v9, v10, v12[v28.object.id].dirtyMask)
            v12[v28.object.id].history[v10.lastSeqSent] = {mask = v12[v28.object.id].dirtyMask, sync = Connection.SYNC_HIST_UPDATE}
            v12[v28.object.id].skipCount = 0
            v12[v28.object.id].dirtyMask = 0
          else
            NetworkUtil.writeNodeObjectId(v9, v28.object.id)
            v12[v28.object.id].sync = Connection.SYNC_REMOVING
            v12[v28.object.id].history[v10.lastSeqSent] = {mask = 0, sync = Connection.SYNC_HIST_REMOVE}
          end
        end
        if g_networkDebug then
          local v32 = streamGetWriteOffset(v9)
          streamSetWriteOffset(v9, v29)
          streamWriteInt32(v9, v32 - v29 + 32)
          streamSetWriteOffset(v9, v32)
        end
        v32 = streamGetWriteOffset(v9)
        local v36 = self:getObjectPacketType(v30)
        self:addPacketSize(v10, v36, (v32 - v27) / 8)
        if g_networkDebugPrints and v31 == Connection.SEND_INFO_UPDATE then
          if v30.configFileName ~= nil then
          end
          print("  send object " .. v33 .. ", size " .. (v32 - v27) / 8 .. " bytes")
        end
        if v11 < v32 then
        else
          -- TODO: structure LOP_FORNLOOP (pc 740, target 453)
        end
        v24 = streamGetWriteOffset(v9)
        streamSetWriteOffset(v9, v22)
        streamWriteUInt8(v9, v23)
        streamSetWriteOffset(v9, v24)
        netSendStream(v9, "medium", "unreliable_sequenced", 1, true)
        self.currentWriteStreamConnection = nil
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 771, target 88)
    if self.networkListener ~= nil then
      v6:onFinishedClientsWriteUpdateStream()
    end
    for v9, v10 in pairs(self.objects) do
      v10.dirtyMask = 0
    end
    self:updatePacketStats(self.tickSum)
    self.tickSum = 0
    self.serverFPS = currentFPS
  end
end
function Server.mouseEvent(v0, dt, isRunning, currentFPS, v4, v5)
end
function Server:startLocal()
  if g_client ~= nil then
    local currentFPS = Connection.new(NetworkNode.LOCAL_STREAM_ID, false)
    self.clientConnections[NetworkNode.LOCAL_STREAM_ID] = currentFPS
    dt:setIsReadyForObjects(true)
    dt:setIsReadyForEvents(true)
  end
end
function Server:start(serverPort, serverAddress, maxConnections)
  if not self.netIsRunning then
    self.netIsRunning = true
    print("Started network game (" .. serverPort .. ")")
    local v4 = v4:startup(serverPort, serverAddress, maxConnections)
    if not v4 then
      print("Error: Failed to startup network. Probably the select port is already in use")
    end
    v4:setDefaultListener(Server.packetReceived, self)
    if g_client ~= nil then
      local v6 = Connection.new(NetworkNode.LOCAL_STREAM_ID, false)
      self.clientConnections[NetworkNode.LOCAL_STREAM_ID] = v6
    end
  end
end
function Server.init(v0)
  EventIds.assignEventIds()
  ObjectIds.assignObjectClassIds()
end
function Server:stop()
  if self.netIsRunning then
    for v4 in ipairs(self.clients) do
      netCloseConnection(v4, true, 1)
    end
    self.clients = {}
    for v4, v5 in pairs(self.clientConnections) do
      v5.isConnected = false
      v5:setIsReadyForObjects(false)
      v5:setIsReadyForEvents(false)
    end
    self.clientConnections = {}
    dt:shutdown()
    dt:setDefaultListener(nil, nil)
    self.netIsRunning = false
  end
end
function Server:closeConnection(connection)
  if connection.isConnected then
    self:removeStreamFromClients(connection.streamId)
    if self.networkListener ~= nil then
      isRunning:onConnectionClosed(connection)
    end
    netCloseConnection(connection.streamId, true, 1)
    connection.streamId = 0
  end
end
function Server:packetReceived(packetType, timestamp, streamId)
  local v5 = v5:superClass()
  v5.packetReceived(self, packetType, timestamp, streamId)
  if packetType == Network.TYPE_APPLICATION then
    local messageId = streamReadUIntN(streamId, MessageIds.SEND_NUM_BITS)
    if messageId == MessageIds.OBJECT_CREATED then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      local objectClassId = streamReadUIntN(streamId, ObjectIds.SEND_NUM_BITS)
      local v8 = NetworkUtil.readNodeObjectId(streamId)
      local objectClass = ObjectIds.getObjectClassById(objectClassId)
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L567
      if g_client == nil then
      end
      local v10 = v10(v11, true)
      v10:readStream(streamId, v5)
      v10.isManuallyReplicated = false
      v10.isRegistered = true
      self:addObject(v10, v10.id)
      v6[v10.id] = {skipCount = 0, dirtyMask = 0, sync = Connection.SYNC_CREATING, history = {}}
      streamWriteUIntN(streamId, MessageIds.OBJECT_SERVER_ID, MessageIds.SEND_NUM_BITS)
      NetworkUtil.writeNodeObjectId(streamId, v10.id)
      NetworkUtil.writeNodeObjectId(streamId, v8)
      netSendStream(streamId, "high", "reliable_ordered", 1, true)
      return
    end
    if messageId == MessageIds.OBJECT_SERVER_ID_ACK then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      local v6 = NetworkUtil.readNodeObjectId(streamId)
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L567
      -- if v0.clientConnections[v3].objectsInfo[v6].sync ~= Connection.SYNC_CREATING then goto L567 end
      self.clientConnections[streamId].objectsInfo[v6].sync = Connection.SYNC_CREATED
      self.clientConnections[streamId]:sendObjectEventQueue(self.clientConnections[streamId].objectsInfo[v6])
      return
    end
    if messageId == MessageIds.OBJECT_LOADED then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      v6 = streamReadUInt8(streamId)
      -- TODO: structure LOP_FORNPREP (pc 171, target 567)
      v10 = NetworkUtil.readNodeObjectId(streamId)
      if self.clientConnections[streamId].objectsInfo[v10] ~= nil and self.clientConnections[streamId].objectsInfo[v10].sync == Connection.SYNC_CREATING_DELAYED then
        self.clientConnections[streamId].objectsInfo[v10].sync = Connection.SYNC_LOADED
      end
      -- TODO: structure LOP_FORNLOOP (pc 191, target 172)
      return
    end
    if messageId == MessageIds.OBJECT_DELETED then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      v6 = NetworkUtil.readNodeObjectId(streamId)
      objectClassId = self:getObject(v6)
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L567
      for v11, v12 in pairs(self.clientConnections) do
        if v12 ~= v5 then
        end
        v12:notifyObjectDeleted(v15, true)
      end
      self:unregisterObject(objectClassId, true)
      objectClassId:delete()
      return
    end
    if messageId == MessageIds.OBJECT_UPDATE then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      self.clientConnections[streamId]:readUpdateAck(streamId)
      v6 = streamReadUInt8(streamId)
      objectClassId = streamReadBool(streamId)
      v8 = streamReadFloat32(streamId)
      objectClass = streamReadFloat32(streamId)
      v10 = streamReadFloat32(streamId)
      self:setClientPosition(streamId, v8, objectClass, v10)
      self:setClientGuiVisibility(streamId, objectClassId)
      -- TODO: structure LOP_FORNPREP (pc 285, target 321)
      local v14 = NetworkUtil.readNodeObjectId(streamId)
      if v14 == nil then
        Logging.devError("Server: Unable to retrieve object id for object index %d of %d", 1, v6)
        return
      end
      local v15 = self:getObject(v14)
      if v15 == nil then
        Logging.devError("Server: Trying to readUpdateStream from not registered object with id '%d'", v14)
        return
      end
      v15:readUpdateStream(streamId, timestamp, v5)
      v15:raiseActive()
      -- TODO: structure LOP_FORNLOOP (pc 320, target 286)
      voiceChatReadClientUpdateFromStream(v5.streamId, g_clientInterpDelay, v5.streamId, v5.lastSeqSent)
      return
    end
    if messageId == MessageIds.OBJECT_PING then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      self.clientConnections[streamId]:readUpdateAck(streamId)
      streamWriteUIntN(streamId, MessageIds.OBJECT_ACK, MessageIds.SEND_NUM_BITS)
      self.clientConnections[streamId]:writeUpdateAck(streamId)
      netSendStream(streamId, "medium", "reliable_ordered", 1, true)
      return
    end
    if messageId == MessageIds.OBJECT_ACK then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
      self.clientConnections[streamId]:readUpdateAck(streamId)
      return
    end
    if messageId == MessageIds.EVENT then
      v5 = streamReadUIntN(streamId, EventIds.SEND_NUM_BITS)
      v6 = EventIds.getEventClassById(v5)
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L567
      objectClassId = v6.emptyNew()
      objectClassId:readStream(streamId, self.clientConnections[streamId])
      objectClassId:delete()
      return
    end
    if messageId == MessageIds.CLIP_COEFF then
      v5 = streamReadFloat32(streamId)
      self:setClientClipDistCoeff(self.clientConnections[streamId], v5)
      return
    end
    log("Error: Invalid message id ", messageId)
    return
  end
  if packetType == Network.TYPE_NEW_INCOMING_CONNECTION then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L567
    table.insert(self.clients, streamId)
    v5 = Connection.new(streamId, false)
    self.clientConnections[streamId] = v5
    for objectClassId, v8 in pairs(self.objects) do
      if not v8.isManuallyReplicated then
        continue
      end
      self.clientConnections[streamId].objectsInfo[v8.id] = {skipCount = 0, dirtyMask = 0, sync = Connection.SYNC_MANUALLY_REGISTERED, manuallyReplicated = true, history = {}}
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L567
    messageId:onConnectionOpened(self.clientConnections[streamId])
    return
  end
  if packetType == Network.TYPE_DISCONNECTION_NOTIFICATION then
    self:removeStreamFromClients(streamId)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L567
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L567
    v5:onConnectionClosed(self.clientConnections[streamId])
    return
  end
  if packetType ~= Network.TYPE_CONNECTION_ATTEMPT_FAILED and packetType ~= Network.TYPE_CONNECTION_LOST and packetType ~= Network.TYPE_CONNECTION_BANNED then
    -- if v1 ~= Network.TYPE_INVALID_PASSWORD then goto L567 end
  end
  self:removeStreamFromClients(streamId)
  if self.clientConnections[streamId] ~= nil and self.networkListener ~= nil then
    v5:onConnectionClosed(self.clientConnections[streamId])
  end
end
function Server:removeStreamFromClients(streamId)
  -- TODO: structure LOP_FORNPREP (pc 5, target 19)
  if self.clients[1] == streamId then
    table.remove(self.clients, 1)
  else
    -- TODO: structure LOP_FORNLOOP (pc 18, target 6)
  end
  if self.clientConnections[streamId] ~= nil then
    self.clientConnections[streamId].isConnected = false
    isRunning:setIsReadyForEvents(false)
    isRunning:setIsReadyForObjects(false)
    self.clientConnections[streamId] = nil
  end
end
function Server:registerObject(object, alreadySent)
  if not object.isRegistered then
    object.isRegistered = true
    self:addObject(object, object.id)
    object.isManuallyReplicated = alreadySent
    -- if not v2 then goto L62 end
    for v6, v7 in pairs(self.clientConnections) do
      if not (v6 ~= NetworkNode.LOCAL_STREAM_ID) then
        continue
      end
      v7.objectsInfo[object.id] = {skipCount = 0, dirtyMask = 0, sync = Connection.SYNC_MANUALLY_REGISTERED, manuallyReplicated = true, history = {}}
    end
    return
  end
  v7 = ClassUtil.getClassNameByObject(object)
  Logging.warning(...)
end
function Server:unregisterObject(object, alreadySent)
  if object.isRegistered then
    if self.objects[object.id] ~= nil then
      self:removeObject(object, object.id)
      for v7, v8 in pairs(self.clientConnections) do
        v8:notifyObjectDeleted(currentFPS, alreadySent)
      end
    end
    object.isRegistered = false
  end
end
function Server:broadcastEvent(event, sendLocal, ignoreConnection, ghostObject, force, connectionList, allowQueuing)
  if not connectionList then
  end
  for v12, v13 in pairs(v8) do
    if v12 == NetworkNode.LOCAL_STREAM_ID and not sendLocal then
      continue
    end
    if ignoreConnection ~= nil and not (v13 ~= ignoreConnection) then
      continue
    end
    if ghostObject ~= nil then
      local v14 = self:hasGhostObject(v13, ghostObject)
      -- if not v14 then goto L38 end
    end
    self.currentSendEventConnection = v13
    v13:sendEvent(event, false, force)
    self.currentSendEventConnection = nil
    continue
    if not (ghostObject ~= nil) then
      continue
    end
    if not allowQueuing then
      continue
    end
    v13:queueSendEvent(event, force, ghostObject)
  end
  if event.queueCount == 0 then
    event:delete()
  end
end
function Server.sendEventIds(v0, dt)
  streamWriteUIntN(dt.streamId, MessageIds.EVENT_IDS, MessageIds.SEND_NUM_BITS)
  for v7, v8 in pairs(EventIds.eventClasses) do
  end
  streamWriteInt32(isRunning, currentFPS)
  for v7, v8 in pairs(EventIds.eventClasses) do
    streamWriteUIntN(isRunning, v8.eventId, EventIds.SEND_NUM_BITS)
    streamWriteString(isRunning, v7)
  end
  netSendStream(isRunning, "high", "reliable_ordered", 1, true)
end
function Server.sendObjectClassIds(v0, dt)
  streamWriteUIntN(dt.streamId, MessageIds.OBJECT_CLASS_IDS, MessageIds.SEND_NUM_BITS)
  for v7, v8 in pairs(ObjectIds.objectClasses) do
  end
  streamWriteInt32(isRunning, currentFPS)
  for v7, v8 in pairs(ObjectIds.objectClasses) do
    streamWriteUIntN(isRunning, v8.classId, ObjectIds.SEND_NUM_BITS)
    streamWriteString(isRunning, v7)
  end
  netSendStream(isRunning, "high", "reliable_ordered", 1, true)
end
function Server:sendObjects(connection, x, y, z, viewDistanceCoeff)
  connection:setIsReadyForObjects(false)
  self.currentWriteStreamConnection = connection
  self.currentWriteStreamConnectionIsInitial = true
  streamWriteUIntN(connection.streamId, MessageIds.OBJECT_INITIAL_ARRAY, MessageIds.SEND_NUM_BITS)
  streamWriteBool(connection.streamId, g_networkDebug)
  local v8 = streamGetWriteOffset(connection.streamId)
  streamWriteInt32(connection.streamId, 0)
  for v13, v14 in pairs(self.objects) do
    if not (v7[v14.id] == nil) then
      continue
    end
    if not not v14.isManuallyReplicated then
      continue
    end
    local v15 = v14:testScope(x, y, z, viewDistanceCoeff, true)
    if not v15 then
      continue
    end
    if g_networkDebug then
      local v16 = streamGetWriteOffset(v6)
      streamWriteInt32(v6, 0)
    end
    streamWriteUIntN(v6, v14.classId, ObjectIds.SEND_NUM_BITS)
    NetworkUtil.writeNodeObjectId(v6, v14.id)
    v14:writeStream(v6, connection)
    local v17 = v14:getIsDelayedLoaded()
    if v17 then
    end
    v7[v14.id] = {skipCount = 0, dirtyMask = 0, sync = v16, history = {}}
    if not g_networkDebug then
      continue
    end
    v17 = streamGetWriteOffset(v6)
    streamSetWriteOffset(v6, v15)
    streamWriteInt32(v6, v17 - v15 + 32)
    streamSetWriteOffset(v6, v17)
  end
  v10 = streamGetWriteOffset(v6)
  streamSetWriteOffset(v6, v8)
  streamWriteInt32(v6, v9)
  streamSetWriteOffset(v6, v10)
  netSendStream(v6, "high", "reliable_ordered", 1, true)
  self.currentWriteStreamConnection = nil
end
function Server:setClientPosition(client, x, y, z)
  self.clientPositions[client] = {x, y, z}
end
function Server:getClientPosition(client)
  if self.clientPositions[client] ~= nil then
    return unpack(self.clientPositions[client])
  end
  return 0, 0, 0
end
function Server:setClientGuiVisibility(client, isGuiVisible)
  self.clientGuiVisibility[client] = isGuiVisible
end
function Server:getClientGuiVisibility(client)
  if self.clientGuiVisibility[client] ~= nil then
    return self.clientGuiVisibility[client]
  end
  return false
end
function Server:setClientClipDistCoeff(client, coeff)
  self.clientClipDistCoeffs[client] = coeff
end
function Server:getClientClipDistCoeff(client)
  if self.clientClipDistCoeffs[client] == nil then
  end
  return isRunning
end
function Server.hasGhostObject(v0, dt, isRunning)
  local currentFPS = dt:getIsLocal()
  if currentFPS then
    return true
  end
  if dt.objectsInfo[isRunning.id] ~= nil and dt.objectsInfo[isRunning.id].sync ~= Connection.SYNC_CREATED then
  end
  return v4
end
function Server.finishRegisterObject(v0, dt, isRunning)
  if dt.objectsInfo[isRunning.id] ~= nil and dt.objectsInfo[isRunning.id].sync == Connection.SYNC_MANUALLY_REGISTERED then
    dt.objectsInfo[isRunning.id].sync = Connection.SYNC_CREATED
    dt:sendObjectEventQueue(dt.objectsInfo[isRunning.id])
  end
end
function Server:registerObjectInStream(connection, object)
  if self.currentWriteStreamConnection ~= connection and self.currentSendEventConnection ~= connection then
    print("Error: Server:registerObjectInStream is only allowed in writeStream calls")
    return
  end
  local currentFPS = object:getIsDelayedLoaded()
  if currentFPS then
    print("Error: Server:registerObjectInStream is not allowed for delayed loaded objects")
    return
  end
  if connection.objectsInfo[object.id] ~= nil and connection.objectsInfo[object.id].sync == Connection.SYNC_MANUALLY_REGISTERED then
    if self.currentWriteStreamConnectionIsInitial then
      connection.objectsInfo[object.id].sync = Connection.SYNC_CREATED
    else
      connection.objectsInfo[object.id].sync = Connection.SYNC_CREATING
      connection.objectsInfo[object.id].history[connection.lastSeqSent] = {mask = 0, sync = Connection.SYNC_HIST_CREATE}
    end
    currentFPS.dirtyMask = 0
    currentFPS.skipCount = 0
  end
end
function Server:prioCmp(dt)
  if dt.prio < self.prio then
    return true
  end
  return false
end
function Server.consoleCommandToggleNetworkDebug(v0)
  g_networkDebug = not g_networkDebug
  local currentFPS = tostring(g_networkDebug)
  return "NetworkDebug = " .. currentFPS
end
