-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Client = {}
local Client_mt = Class(Client, NetworkNode)
function InitClientOnce()
  if u0 == "" then
    u0 = netConnect
  end
end
function Client.new()
  local v0 = NetworkNode.new(u0)
  v0.clientNetworkCardAddress = ""
  v0.clientPort = 0
  v0.serverConnection = nil
  v0.tempClientCreatingObjects = {}
  v0.tempClientManuallyRegisteringObjects = {}
  v0.tickRate = 30
  v0.tickDuration = 1000 / v0.tickRate
  v0.tickSum = 0
  v0.netIsRunning = false
  v0.serverStreamId = 0
  v0.currentLatency = 80
  v0.lastNumUpdatesSent = 0
  v0.finishedAsyncObjects = {}
  if g_server == nil then
    addConsoleCommand("gsNetworkShowTraffic", "Toggle network traffic visualization", "consoleCommandToggleShowNetworkTraffic", v0)
    addConsoleCommand("gsNetworkShowObjects", "Toggle network show objects", "consoleCommandToggleNetworkShowObjects", v0)
  end
  return v0
end
function Client:delete()
  if g_server == nil then
    removeConsoleCommand("gsNetworkShowTraffic")
    removeConsoleCommand("gsNetworkShowObjects")
  end
  for v4, v5 in pairs(self.tempClientCreatingObjects) do
    v5:delete()
  end
  for v4, v5 in pairs(self.tempClientManuallyRegisteringObjects) do
    v5:delete()
  end
  self.finishedAsyncObjects = {}
  v2 = v2:superClass()
  v2.delete(self)
  self:stop()
end
function Client:update(dt, isRunning)
  if g_server == nil then
    local v4 = v4:superClass()
    v4.update(self, dt)
    if self.serverStreamId == 0 then
      return
    end
    if not isRunning then
      return
    end
    if 0 < #self.finishedAsyncObjects then
      local numObjects = math.min(#self.finishedAsyncObjects, 255)
      streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_LOADED, MessageIds.SEND_NUM_BITS)
      streamWriteUInt8(self.serverStreamId, numObjects)
      -- TODO: structure LOP_FORNPREP (pc 54, target 83)
      local object = table.remove(self.finishedAsyncObjects, 1)
      local serverObjectId = NetworkUtil.getObjectId(object)
      if self.serverConnection.objectsInfo[serverObjectId] ~= nil then
        self.serverConnection.objectsInfo[serverObjectId].sync = Connection.SYNC_LOADED
        NetworkUtil.writeNodeObjectId(self.serverStreamId, serverObjectId)
      end
      -- TODO: structure LOP_FORNLOOP (pc 82, target 55)
      netSendStream(self.serverStreamId, "high", "reliable_ordered", 1, true)
    end
    self:updateActiveObjects(dt)
    self.tickSum = self.tickSum + dt
    if self.tickDuration - 3 <= self.tickSum then
      numObjects = self:updateActiveObjectsTick(self.tickSum)
      v4 = v4:getIsWindowFull()
      if v4 then
        -- if v0.serverConnection.ackPingPacketSent then goto L370 end
        self.serverConnection.ackPingPacketSent = true
        streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_PING, MessageIds.SEND_NUM_BITS)
        v4:writeUpdateAck(self.serverStreamId)
        netSendStream(self.serverStreamId, "medium", "reliable_ordered", 1, true)
      else
        self.serverConnection.ackPingPacketSent = false
        local v5 = table.getn(numObjects)
        v4 = math.min(v5, 255)
        if 0 < v4 then
          streamWriteTimestamp(self.serverStreamId)
        end
        streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_UPDATE, MessageIds.SEND_NUM_BITS)
        v6:writeUpdateAck(self.serverStreamId)
        local v6 = streamGetWriteOffset(self.serverStreamId)
        streamWriteUInt8(self.serverStreamId, 0)
        if self.networkListener ~= nil then
          local v11, v12, v13 = v11:getClientPosition()
          v11 = v11:getClientGuiVisibility()
        end
        streamWriteBool(self.serverStreamId, v10)
        streamWriteFloat32(self.serverStreamId, object)
        streamWriteFloat32(self.serverStreamId, serverObjectId)
        streamWriteFloat32(self.serverStreamId, v9)
        -- TODO: structure LOP_FORNPREP (pc 262, target 307)
        NetworkUtil.writeNodeObjectId(self.serverStreamId, numObjects[1].lastServerId)
        numObjects[1]:writeUpdateStream(self.serverStreamId, self.serverConnection, numObjects[1].dirtyMask)
        numObjects[1].dirtyMask = 0
        local v18 = streamGetWriteOffset(self.serverStreamId)
        local v22 = self:getObjectPacketType(numObjects[1])
        self:addPacketSize(self.serverConnection, v22, (v18 - 0) / 8)
        if g_maxUploadRate * 8 * self.tickDuration < v18 then
        else
          -- TODO: structure LOP_FORNLOOP (pc 306, target 263)
        end
        v13 = streamGetWriteOffset(self.serverStreamId)
        streamSetWriteOffset(self.serverStreamId, v6)
        streamWriteUInt8(self.serverStreamId, v5)
        streamSetWriteOffset(self.serverStreamId, v13)
        local v14 = streamGetWriteOffset(self.serverStreamId)
        voiceChatWriteClientUpdateToStream(self.serverStreamId, self.serverStreamId, self.serverConnection.lastSeqSent)
        local v20 = streamGetWriteOffset(self.serverStreamId)
        self:addPacketSize(self.serverConnection, NetworkNode.PACKET_VOICE_CHAT, (v20 - v14) / 8)
        netSendStream(self.serverStreamId, "medium", "unreliable_sequenced", 1, true)
      end
      self:updatePacketStats(self.tickSum)
      self.tickSum = 0
    end
  end
end
function Client.keyEvent(v0, v1, v2, v3, v4)
  if g_server == nil then
    local v6 = v6:superClass()
    v6.keyEvent(v0, v1, v2, v3, v4)
  end
end
function Client.mouseEvent(v0, v1, v2, v3, v4, v5)
end
function Client:draw()
  if g_server == nil then
    local v2 = v2:superClass()
    v2.draw(self)
    -- if not v0.showNetworkTraffic then goto L16 end
  end
end
function Client:onObjectFinishedAsyncLoading(object)
  table.insert(self.finishedAsyncObjects, object)
end
function Client:startLocal()
  self.serverConnection = g_server.clientConnections[NetworkNode.LOCAL_STREAM_ID].localConnection
  self:connectionRequestAccepted()
end
function Client:start(serverAddress, serverPort, relayHeader)
  if not self.netIsRunning then
    self.netIsRunning = true
    local v6 = v6:getValue("defaultServerPort")
    v4:startupWithWorkingPort(...)
    v4:setDefaultListener(Client.packetReceived, self)
    if relayHeader == nil then
    end
    local v4 = u0(serverAddress, serverPort, "", relayHeader)
    self.serverStreamId = v4
    v4 = Connection.new(self.serverStreamId, true)
    self.serverConnection = v4
    if self.serverStreamId == 0 then
      print("Error: Failed to call connect")
      self.serverConnection.isConnected = false
      v4:setIsReadyForObjects(false)
      v4:setIsReadyForEvents(false)
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L95
      v4:onConnectionClosed(self.serverConnection)
      return
    end
    v4:setIsReadyForObjects(true)
    v4:setIsReadyForEvents(true)
  end
end
function Client:stop()
  if self.netIsRunning then
    if self.serverStreamId ~= 0 then
      netCloseConnection(self.serverStreamId, true, 1)
      self.serverStreamId = 0
    end
    self.serverConnection.isConnected = false
    v1:setIsReadyForObjects(false)
    v1:setIsReadyForEvents(false)
    v1:shutdown()
    v1:setDefaultListener(nil, nil)
    self.netIsRunning = false
  end
end
function Client:packetReceived(packetType, timestamp, streamId)
  if streamId ~= self.serverStreamId then
    return
  end
  local v5 = v5:superClass()
  v5.packetReceived(self, packetType, timestamp, streamId)
  if packetType == Network.TYPE_APPLICATION then
    local messageId = streamReadUIntN(streamId, MessageIds.SEND_NUM_BITS)
    if messageId == MessageIds.OBJECT_UPDATE then
      v5 = streamReadInt32(streamId)
      g_packetPhysicsNetworkTime = v5
      v5 = netGetTime()
      g_networkTime = v5
      local v8 = math.max(g_networkTime - timestamp, 0.5)
      self.currentLatency = self.currentLatency * 0.9 + v8 * 0.1
      if self.lastReceivedNetworkTime ~= nil then
      end
      self.lastReceivedNetworkTime = g_networkTime
      local v7 = MathUtil.clamp(g_clientInterpDelayBufferOffset + v5 * g_clientInterpDelayBufferScale, g_clientInterpDelayBufferMin, g_clientInterpDelayBufferMax)
      if g_clientInterpDelay < v5 + v7 then
      end
      g_clientInterpDelay = g_clientInterpDelay * (1 - v8) + v7 * v8
      local v9 = MathUtil.clamp(g_clientInterpDelay, g_clientInterpDelayMin, g_clientInterpDelayMax)
      g_clientInterpDelay = v9
      v9:readUpdateAck(streamId)
      v9 = streamReadUIntN(streamId, 6)
      self.serverFPS = v9
      v9 = streamReadBool(streamId)
      if self.networkListener ~= nil then
        numInfos:onConnectionReadUpdateStream(self.serverConnection, v9)
      end
      local numInfos = streamReadUInt8(streamId)
      -- TODO: structure LOP_FORNPREP (pc 152, target 908)
      if v9 then
        local v16 = streamGetReadOffset(streamId)
        v16 = streamReadInt32(streamId)
      end
      v16 = streamReadUIntN(streamId, Connection.SEND_INFO_NUM_BITS)
      if v16 == Connection.SEND_INFO_DELETE then
        local v17 = NetworkUtil.readNodeObjectId(streamId)
        local v18 = self:getObject(v17)
        if v18 ~= nil then
          self:unregisterObject(v18, true)
          v18:delete()
        end
        -- if not v9 then goto L411 end
        self:checkObjectUpdateDebugReadSize(streamId, v14, v15, "object", v18)
      elseif v16 == Connection.SEND_INFO_CREATE then
        if g_server ~= nil then
          print("Error: Unexpected packet object created")
          return
        end
        v17 = streamReadUIntN(streamId, ObjectIds.SEND_NUM_BITS)
        v18 = NetworkUtil.readNodeObjectId(streamId)
        local v19 = self:getObject(v18)
        if v19 ~= nil then
        end
        if true then
          local v21 = ObjectIds.getObjectClassById(v17)
          if v21 ~= nil then
            local v22 = v21.new(false, true)
            v22.isManuallyReplicated = false
            v22.isRegistered = true
          end
        end
        if v19 == nil then
          return
        end
        v19:readStream(streamId, self.serverConnection, v18)
        if v20 then
          v22 = v19:getIsDelayedLoaded()
          if v22 then
          else
            v19.recieveUpdates = true
          end
          self:addObject(v19, v18)
        else
          v19:onGhostAdd()
        end
        self.serverConnection.objectsInfo[v18] = {dirtyMask = 0, sync = v21, history = {}}
        -- if not v9 then goto L411 end
        self:checkObjectUpdateDebugReadSize(streamId, v14, v15, "creation", v19)
      else
        if v16 == Connection.SEND_INFO_SYNC then
          v17 = NetworkUtil.readNodeObjectId(streamId)
          v18 = self:getObject(v17)
          if v18 == nil then
            return
          end
          v18:postReadStream(streamId, self.serverConnection)
          self.serverConnection.objectsInfo[v17].sync = Connection.SYNC_CREATED
          v18.recieveUpdates = true
          -- if not v9 then goto L411 end
          self:checkObjectUpdateDebugReadSize(streamId, v14, v15, "sync", v18)
        elseif v16 == Connection.SEND_INFO_UPDATE then
          v17 = NetworkUtil.readNodeObjectId(streamId)
          v18 = self:getObject(v17)
          if v18 == nil then
            return
          end
          v18:readUpdateStream(streamId, timestamp, self.serverConnection)
          v18:raiseActive()
          -- if not v9 then goto L411 end
          self:checkObjectUpdateDebugReadSize(streamId, v14, v15, "update", v18)
        else
          v17 = NetworkUtil.readNodeObjectId(streamId)
          v18 = self:getObject(v17)
          if v18 ~= nil then
            v18:onGhostRemove()
          end
          if v9 then
            self:checkObjectUpdateDebugReadSize(streamId, v14, v15, "removal", v18)
          end
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 411, target 153)
      return
    end
    if messageId == MessageIds.OBJECT_PING then
      v5:readUpdateAck(streamId)
      streamWriteUIntN(streamId, MessageIds.OBJECT_ACK, MessageIds.SEND_NUM_BITS)
      v5:writeUpdateAck(streamId)
      netSendStream(streamId, "high", "reliable_ordered", 1, true)
      return
    end
    if messageId == MessageIds.OBJECT_ACK then
      v5:readUpdateAck(streamId)
      return
    end
    if messageId == MessageIds.OBJECT_INITIAL_ARRAY then
      self.waitingForObjects = false
      if g_server ~= nil then
        print("Error: Unexpected packet object created array")
        return
      end
      v5 = streamReadBool(streamId)
      local v6 = streamReadInt32(streamId)
      print("Joined network game (" .. v6 .. ")")
      -- TODO: structure LOP_FORNPREP (pc 491, target 908)
      if v5 then
        local v12 = streamGetReadOffset(streamId)
        v12 = streamReadInt32(streamId)
      end
      v12 = streamReadUIntN(streamId, ObjectIds.SEND_NUM_BITS)
      local v13 = NetworkUtil.readNodeObjectId(streamId)
      local v14 = ObjectIds.getObjectClassById(v12)
      if v14 ~= nil then
        v16 = v14.new(false, true)
        v16.isManuallyReplicated = false
        v16.isRegistered = true
      end
      if v15 == nil then
        print("Error: Failed to create new object with class id " .. v12 .. " in initial object array")
        return
      end
      v15:readStream(streamId, self.serverConnection, v13)
      self:addObject(v15, v13)
      v17 = v15:getIsDelayedLoaded()
      if v17 then
      else
        v15.recieveUpdates = true
      end
      self.serverConnection.objectsInfo[v13] = {dirtyMask = 0, sync = v16, history = {}}
      if v5 then
        v17 = streamGetReadOffset(streamId)
        if v17 - v11 + 32 ~= numInfos then
          if v15.configFileName ~= nil then
          end
          print("Error: Not all bits read in object create array (" .. v18 .. " vs " .. numInfos .. "), Class: " .. v14.className .. v19)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 614, target 492)
      return
    end
    if messageId == MessageIds.OBJECT_SERVER_ID then
      v5 = NetworkUtil.readNodeObjectId(streamId)
      v6 = NetworkUtil.readNodeObjectId(streamId)
      streamWriteUIntN(streamId, MessageIds.OBJECT_SERVER_ID_ACK, MessageIds.SEND_NUM_BITS)
      NetworkUtil.writeNodeObjectId(streamId, v5)
      netSendStream(streamId, "high", "reliable_ordered", 1, true)
      if self.tempClientCreatingObjects[v6] ~= nil then
        self:finishRegisterObject(self.tempClientCreatingObjects[v6], v5)
        self.tempClientCreatingObjects[v6] = nil
        return
      end
      streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_DELETED, MessageIds.SEND_NUM_BITS)
      NetworkUtil.writeNodeObjectId(self.serverStreamId, v5)
      netSendStream(self.serverStreamId, "high", "reliable_ordered", 1, true)
      return
    end
    if messageId == MessageIds.EVENT then
      v5 = streamReadUIntN(streamId, EventIds.SEND_NUM_BITS)
      v6 = EventIds.getEventClassById(v5)
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L908
      v7 = v6.emptyNew()
      v7:readStream(streamId, self.serverConnection)
      v7:delete()
      return
    end
    if messageId == MessageIds.EVENT_IDS then
      v5 = streamReadInt32(streamId)
      -- TODO: structure LOP_FORNPREP (pc 729, target 908)
      v9 = streamReadUIntN(streamId, EventIds.SEND_NUM_BITS)
      numInfos = streamReadString(streamId)
      EventIds.assignEventId(numInfos, v9)
      -- TODO: structure LOP_FORNLOOP (pc 745, target 730)
      return
    end
    if messageId == MessageIds.OBJECT_CLASS_IDS then
      v5 = streamReadInt32(streamId)
      -- TODO: structure LOP_FORNPREP (pc 758, target 908)
      v9 = streamReadUIntN(streamId, ObjectIds.SEND_NUM_BITS)
      numInfos = streamReadString(streamId)
      ObjectIds.assignObjectClassId(numInfos, v9)
      -- TODO: structure LOP_FORNLOOP (pc 774, target 759)
      return
    end
    print("Error: Invalid message id " .. messageId)
    return
  end
  if packetType == Network.TYPE_CONNECTION_REQUEST_ACCEPTED then
    streamWriteUIntN(self.serverStreamId, MessageIds.CLIP_COEFF, MessageIds.SEND_NUM_BITS)
    v6 = getViewDistanceCoeff()
    streamWriteFloat32(...)
    netSendStream(self.serverStreamId, "high", "reliable_ordered", 1, true)
    self:connectionRequestAccepted()
    return
  end
  if packetType == Network.TYPE_DISCONNECTION_NOTIFICATION then
    -- if v3 ~= v0.serverStreamId then goto L908 end
    self.serverStreamId = 0
    self.serverConnection.isConnected = false
    messageId:setIsReadyForObjects(false)
    messageId:setIsReadyForEvents(false)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L908
    messageId:onConnectionClosed(self.serverConnection)
    return
  end
  if packetType ~= Network.TYPE_CONNECTION_ATTEMPT_FAILED and packetType ~= Network.TYPE_CONNECTION_LOST and packetType ~= Network.TYPE_CONNECTION_BANNED then
    -- if v1 ~= Network.TYPE_INVALID_PASSWORD then goto L908 end
  end
  if streamId == self.serverStreamId then
    self.serverStreamId = 0
    self.serverConnection.isConnected = false
    messageId:setIsReadyForObjects(false)
    messageId:setIsReadyForEvents(false)
    if self.networkListener ~= nil then
      messageId:onConnectionClosed(self.serverConnection)
    end
  end
end
function Client:connectionRequestAccepted()
  if self.networkListener ~= nil then
    packetType:onConnectionAccepted(self.serverConnection)
  end
end
function Client:registerObject(object, alreadySent)
  if not object.isRegistered then
    object.isManuallyReplicated = alreadySent
    object.isRegistered = true
    if alreadySent then
      self.tempClientManuallyRegisteringObjects[object.id] = object
      return
    end
    if g_server ~= nil then
      print("Error: Client:registerObject not expected")
      printCallstack()
    end
    self.tempClientCreatingObjects[object.id] = object
    streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_CREATED, MessageIds.SEND_NUM_BITS)
    streamWriteUIntN(self.serverStreamId, object.classId, ObjectIds.SEND_NUM_BITS)
    NetworkUtil.writeNodeObjectId(self.serverStreamId, object.id)
    object:writeStream(self.serverStreamId, self.serverConnection)
    netSendStream(self.serverStreamId, "high", "reliable_ordered", 1, true)
  end
end
function Client:unregisterObject(object, alreadySent)
  if object.isRegistered then
    local serverId = self:getObjectId(object)
    if serverId ~= nil then
      if alreadySent ~= nil then
        -- if v2 then goto L40 end
      end
      if self.serverStreamId ~= 0 then
        streamWriteUIntN(self.serverStreamId, MessageIds.OBJECT_DELETED, MessageIds.SEND_NUM_BITS)
        NetworkUtil.writeNodeObjectId(self.serverStreamId, serverId)
        netSendStream(self.serverStreamId, "high", "reliable_ordered", 1, true)
      end
      self:removeObject(object, serverId)
    else
      self.tempClientManuallyRegisteringObjects[object.id] = nil
      self.tempClientCreatingObjects[object.id] = nil
    end
    object.isRegistered = false
  end
end
function Client:finishRegisterObject(object, serverId)
  self:addObject(object, serverId)
  self.serverConnection.objectsInfo[serverId] = {dirtyMask = 0, sync = Connection.SYNC_CREATED, history = {}}
  object.recieveUpdates = true
  self.tempClientManuallyRegisteringObjects[object.id] = nil
  self.tempClientCreatingObjects[object.id] = nil
end
function Client:getServerConnection()
  return self.serverConnection
end
