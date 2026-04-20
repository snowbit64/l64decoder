-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NetworkNode = {}
local NetworkNode_mt = Class(NetworkNode)
NetworkNode.LOCAL_STREAM_ID = 0
NetworkNode.PACKET_EVENT = 1
NetworkNode.PACKET_VEHICLE = 2
NetworkNode.PACKET_PLAYER = 3
NetworkNode.PACKET_SPLITSHAPES = 4
NetworkNode.PACKET_DENSITY_MAPS = 5
NetworkNode.PACKET_TERRAIN_DEFORM = 6
NetworkNode.PACKET_VOICE_CHAT = 7
NetworkNode.PACKET_OTHERS = 8
NetworkNode.NUM_PACKETS = 8
NetworkNode.CHANNEL_MAIN = 1
NetworkNode.CHANNEL_SECONDARY = 2
NetworkNode.CHANNEL_GROUND = 3
NetworkNode.CHANNEL_CHAT = 4
NetworkNode.OBJECT_SEND_NUM_BITS = 24
function NetworkNode.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.objects = {}
  v1.objectIds = {}
  v1.activeObjects = {}
  v1.activeObjectsNextFrame = {}
  v1.removedObjects = {}
  v1.dirtyObjects = {}
  v1.lastUploadedKBs = 0
  v1.lastUploadedKBsSmooth = 0
  v1.maxUploadedKBs = 0
  v1.serverFPS = 60
  v1.graphData = {[NetworkNode.PACKET_EVENT] = {color = {1, 0, 0, 1}, title = "event"}, [NetworkNode.PACKET_VEHICLE] = {color = {0, 1, 0, 1}, title = "vehicle"}, [NetworkNode.PACKET_PLAYER] = {color = {0, 0, 1, 1}, title = "player"}, [NetworkNode.PACKET_SPLITSHAPES] = {color = {1, 1, 0, 1}, title = "split shapes"}, [NetworkNode.PACKET_DENSITY_MAPS] = {color = {0.5, 0.5, 0, 1}, title = "density maps"}, [NetworkNode.PACKET_TERRAIN_DEFORM] = {color = {0.5, 0.5, 0.5, 1}, title = "terrain deform"}, [NetworkNode.PACKET_VOICE_CHAT] = {color = {1, 0.5, 0.5, 1}, title = "voice chat"}, [NetworkNode.PACKET_OTHERS] = {color = {0, 1, 1, 1}, title = "others"}}
  v1.packetGraphs = {}
  v1.connectionPacketGraphs = {}
  v1.packetBytes = {}
  -- TODO: structure LOP_FORNPREP (pc 234, target 303)
  if 1 ~= 1 then
  end
  local v7 = Graph.new(80, 0.4, 0.05, 0.55, 0.8, 0, 1000, true, "bytes (max)")
  v1.packetGraphs[v4] = v7
  v7:setColor(v1.graphData[v4].color[1], v1.graphData[v4].color[2], v1.graphData[v4].color[3], v1.graphData[v4].color[4])
  if true then
    v7:setHorizontalLine(1000, false, 1, 1, 1, 0.2)
    v7:setBackgroundColor(0.2, 0.2, 0.2, 0.3)
  end
  v1.packetBytes[v4] = {}
  v1.connectionPacketGraphs[v4] = {}
  -- TODO: structure LOP_FORNLOOP (pc 302, target 235)
  v1.showNetworkTraffic = false
  v1.showNetworkTrafficClients = false
  v1.showObjects = false
  v1.updateDurationTimer = 0
  v1.updateDurationFrames = 0
  v1.updateDurationTotalTime = 0
  return v1
end
function NetworkNode:delete()
  for v4, v5 in pairs(self.objects) do
    self:unregisterObject(v5, true)
    v5:delete()
  end
  self.objects = {}
  self.objectIds = {}
  self.activeObjects = {}
  self.activeObjectsNextFrame = {}
  self.removedObjects = {}
  self.dirtyObjects = {}
  for v4, v5 in pairs(self.connectionPacketGraphs) do
    for v9, v10 in pairs(v5) do
      v10:delete()
      v5[v9] = nil
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 66, target 74)
  v4:delete()
  -- TODO: structure LOP_FORNLOOP (pc 73, target 67)
end
function NetworkNode:setNetworkListener(listener)
  self.networkListener = listener
end
function NetworkNode.keyEvent(v0, v1, v2, v3, v4)
end
function NetworkNode.mouseEvent(v0, v1, v2, v3, v4, v5)
end
function NetworkNode.update(v0, v1)
end
function NetworkNode:updateActiveObjects(dt)
  for v5, v6 in pairs(self.removedObjects) do
    self.activeObjects[v5] = nil
    self.activeObjectsNextFrame[v5] = nil
    self.removedObjects[v5] = nil
  end
  if self.showObjects then
    for v5, v6 in pairs(self.activeObjects) do
      local v7 = getTimeSec()
      if v6.recieveUpdates then
        v6:update(dt)
      end
      local v11 = getTimeSec()
      v6.profilerUpdateCounter = (v6.profilerUpdateCounter or 0) + v11 - v7
    end
    self.updateDurationTimer = self.updateDurationTimer + dt
    self.updateDurationFrames = self.updateDurationFrames + 1
    -- if 1000 > v0.updateDurationTimer then goto L117 end
    self.updateDurationTotalTime = 0
    for v5, v6 in pairs(self.activeObjects) do
      v6.profilerUpdateTime = v6.profilerUpdateCounter * 1000 / self.updateDurationFrames
      v6.profilerUpdateCounter = 0
      self.updateDurationTotalTime = self.updateDurationTotalTime + v6.profilerUpdateTime
    end
    self.updateDurationTimer = 0
    self.updateDurationFrames = 0
    return
  end
  for v5, v6 in pairs(self.activeObjects) do
    if not v6.recieveUpdates then
      continue
    end
    v6:update(dt)
  end
end
function NetworkNode:updateActiveObjectsTick(dt)
  -- TODO: structure LOP_FORNPREP (pc 5, target 11)
  self.dirtyObjects[#self.dirtyObjects] = nil
  -- TODO: structure LOP_FORNLOOP (pc 10, target 6)
  for v5, v6 in pairs(self.activeObjects) do
    if v6.recieveUpdates then
      v6:updateTick(dt)
    end
    if v6.dirtyMask ~= 0 then
      v6.lastServerId = v5
      table.insert(self.dirtyObjects, v6)
    end
    local v7 = self:getObjectId(v6)
    self.activeObjects[v7] = nil
    if not v6.recieveUpdates then
      continue
    end
    if not (self.activeObjectsNextFrame[v7] == nil) then
      continue
    end
    v6:updateEnd(dt)
  end
  self.activeObjects = self.activeObjectsNextFrame
  self.activeObjectsNextFrame = self.activeObjects
  return self.dirtyObjects
end
function NetworkNode.drawConnectionNetworkStats(v0, v1, v2, v3, v4)
  if v1.streamId == NetworkNode.LOCAL_STREAM_ID then
    return false
  end
  local v5, v6, v7, v8 = netGetConnectionStats(v1.streamId)
  if v5 == nil then
  end
  if v1.pingSmooth == nil then
    v1.pingSmooth = v5
    v1.downloadSmooth = v6
    v1.uploadSmooth = v7
    v1.packetLossSmooth = v8
  end
  v1.pingSmooth = v1.pingSmooth + (v5 - v1.pingSmooth) * 0.2
  v1.downloadSmooth = v1.downloadSmooth + (v6 - v1.downloadSmooth) * 0.2
  v1.uploadSmooth = v1.uploadSmooth + (v7 - v1.uploadSmooth) * 0.2
  v1.packetLossSmooth = v1.packetLossSmooth + (v8 - v1.packetLossSmooth) * 0.2
  local v9 = getCorrectTextSize(0.01)
  local v14 = string.format("%dms", v1.pingSmooth)
  renderText(...)
  v14 = string.format("w:%2d", v1.lastSeqSent - v1.highestAckedSeq)
  renderText(...)
  v14 = string.format("d:%4.2fkb/s", v1.downloadSmooth / 1024)
  renderText(...)
  v14 = string.format("u:%4.2fkb/s", v1.uploadSmooth / 1024)
  renderText(...)
  v14 = string.format("loss:%4.2f%%", v1.packetLossSmooth * 100)
  renderText(...)
  v14 = string.format("comp:%.2f%%", 1 / v1.compressionRatio * 100)
  renderText(...)
  return true
end
function NetworkNode.getObjectPacketType(v0, v1)
  if v1 == nil then
    return NetworkNode.PACKET_OTHERS
  end
  local v2 = v1:isa(Vehicle)
  if v2 then
    return NetworkNode.PACKET_VEHICLE
  end
  v2 = v1:isa(Player)
  if v2 then
    return NetworkNode.PACKET_PLAYER
  end
  return NetworkNode.PACKET_OTHERS
end
function NetworkNode.getPacketTypeName(v0, v1)
  for v5, v6 in pairs(Network) do
    if not (v6 == v1) then
      continue
    end
    return v5
  end
  return "TYPE_UNKNOWN"
end
function NetworkNode.checkObjectUpdateDebugReadSize(v0, v1, v2, v3, v4, v5)
  local v6 = streamGetReadOffset(v1)
  if v6 - v3 + 32 ~= v2 then
    if v5 ~= nil and v5.configFileName ~= nil then
    end
    print("Error: Not all bits read in object " .. v4 .. " (" .. v7 .. " vs " .. v2 .. ")" .. v8)
  end
end
function NetworkNode:addPacketSize(connection, packetType, packetSizeInBytes)
  if not self.showNetworkTraffic then
    -- if not v0.showNetworkTrafficClients then goto L16 end
  end
  self.packetBytes[packetType][connection] = (self.packetBytes[packetType][connection] or 0) + packetSizeInBytes
end
function NetworkNode:updatePacketStats(dt)
  if not self.showNetworkTraffic then
    -- if not v0.showNetworkTrafficClients then goto L195 end
  end
  -- TODO: structure LOP_FORNPREP (pc 15, target 166)
  for v12, v13 in pairs(self.packetBytes[1]) do
    if self.clientConnections ~= nil and self.clientConnections[v12.streamId] == nil then
      v7[v12] = nil
      if self.connectionPacketGraphs[v6][v12] ~= nil then
        v14:delete()
        self.connectionPacketGraphs[v6][v12] = nil
      end
    end
    if not (v7[v12] ~= nil) then
      continue
    end
    if self.connectionPacketGraphs[v6][v12] == nil then
      if v6 ~= 1 then
      end
      local v29 = getCorrectTextSize(0.008)
      local v16 = Graph.new(...)
      self.connectionPacketGraphs[v6][v12] = v16
      v16:setColor(self.graphData[v6].color[1], self.graphData[v6].color[2], self.graphData[v6].color[3], self.graphData[v6].color[4])
      if true then
        v16:setHorizontalLine(1000, false, 1, 1, 1, 0.3)
        v16:setBackgroundColor(0.2, 0.2, 0.2, 0.3)
      end
    end
    if v3[v12] == nil then
      v3[v12] = 0
    end
    v14:addValue(v3[v12] + v13, v3[v12])
    v3[v12] = v3[v12] + v13
    v7[v12] = 0
  end
  v9:addValue(v2 + v8, v2)
  -- TODO: structure LOP_FORNLOOP (pc 165, target 16)
  -- TODO: structure LOP_FORNPREP (pc 172, target 190)
  local v8 = math.max(self.packetGraphs[1].maxValue, v2 + v8)
  self.packetGraphs[1].maxValue = v8
  -- TODO: structure LOP_FORNLOOP (pc 189, target 173)
  self.lastUploadedKBs = (v2 + v8) / 1024 * 1000 / dt
end
function NetworkNode:drawGraphLabels(x, y, textSize)
  -- TODO: structure LOP_FORNPREP (pc 6, target 30)
  local v9 = unpack(self.graphData[1].color)
  setTextColor(...)
  renderText(x, y + (1 - 1) * textSize, textSize, self.graphData[1].title)
  -- TODO: structure LOP_FORNLOOP (pc 29, target 7)
  setTextColor(1, 1, 1, 1)
end
function NetworkNode:draw()
  if self.showNetworkTraffic then
    self.lastUploadedKBsSmooth = self.lastUploadedKBsSmooth * 0.8 + self.lastUploadedKBs * 0.19999999999999996
    setTextColor(1, 1, 1, 1)
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    local v4 = getCorrectTextSize(0.015)
    local v5 = string.format("Game Data Upload %.2fkb/s ", self.lastUploadedKBsSmooth)
    renderText(...)
    local alpha = MathUtil.clamp(self.serverFPS / 60, 0, 1)
    setTextColor(1 - alpha, alpha, 0, 1)
    local v7 = getCorrectTextSize(0.015)
    local v8 = string.format("Server: %d FPS", self.serverFPS)
    renderText(...)
    setTextColor(1, 1, 1, 1)
    local v10 = getCorrectTextSize(0.02)
    self:drawGraphLabels(...)
    -- TODO: structure LOP_FORNPREP (pc 109, target 117)
    v9:draw()
    -- TODO: structure LOP_FORNLOOP (pc 116, target 110)
    local textSize = getCorrectTextSize(0.014)
    if self.clientConnections ~= nil then
      for v11, v12 in pairs(self.clientConnections) do
        local v14 = self:drawConnectionNetworkStats(v12, 0.01, 0.78 - v7 * textSize * 1.1, textSize)
        if not v14 then
          continue
        end
        v14 = v14:getUserByConnection(v12)
        if v14 ~= nil then
          local v19 = v14:getNickname()
          renderText(...)
        end
      end
    elseif self.serverConnection ~= nil then
      self:drawConnectionNetworkStats(self.serverConnection, 0.01, 0.8 - textSize * 1.1, textSize)
    end
  end
  if self.showNetworkTrafficClients and self.clientConnections ~= nil then
    v4 = getCorrectTextSize(0.01)
    for v8, v9 in pairs(self.clientConnections) do
      -- TODO: structure LOP_FORNPREP (pc 206, target 236)
      if self.connectionPacketGraphs[1][v9] ~= nil then
        self.connectionPacketGraphs[1][v9].left = v2
        self.connectionPacketGraphs[1][v9].bottom = v3 + 0.015
        if 1 == 1 and v2 ~= 0.04 then
        end
        v14.showLabels = v15
        v15:draw()
      end
      -- TODO: structure LOP_FORNLOOP (pc 235, target 207)
      if not v10 then
        continue
      end
      self:drawConnectionNetworkStats(v9, v2, v3, v4)
      v11 = v11:getUserByConnection(v9)
      if v11 ~= nil then
        local v16 = v11:getNickname()
        renderText(...)
      end
      if not (1 < v2 + 0.16 + 0.16) then
        continue
      end
    end
    v9 = getCorrectTextSize(0.02)
    self:drawGraphLabels(...)
  end
  if self.showObjects then
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    for v5, textSize in pairs(self.activeObjects) do
      textSize.serverId = self.objectIds[textSize] or 0
    end
    for textSize, v7 in pairs(self.objects) do
      v7.serverId = self.objectIds[v7] or 0
      if not v7.debugClassName then
        v9 = ClassUtil.getClassNameByObject(v7)
        v8 = tostring(...)
      end
      v7.debugClassName = v8
      table.insert(v2, v7)
    end
    table.sort(v2, function(self, alpha)
      if u0 and self.debugClassName ~= alpha.debugClassName then
        if self.debugClassName >= alpha.debugClassName then
        end
        return true
      end
      if self.serverId >= alpha.serverId then
      end
      return true
    end)
    v8 = string.format("Registered Objects: %d | Objects in update-loop: %d | Update time: %.3f ms", #v2, alpha, self.updateDurationTotalTime)
    setTextColor(0, 0, 0, 1)
    renderText(0.015 + 1 / g_screenWidth, 0.98 + -1 / g_screenHeight, 0.013, v8)
    setTextColor(1, 1, 1, 1)
    renderText(0.015, 0.98, 0.013, v8)
    for v12, v13 in ipairs(v2) do
      if not v13.configFileName then
      end
      if v14 ~= nil then
        local v15 = Utils.getFilenameFromPath(v14)
      end
      v15 = tostring(v13.serverId)
      v19 = tostring(v14)
      v16 = string.format(...)
      if self.activeObjects[v13.serverId] == nil then
      end
      if v13.profilerUpdateTime ~= nil then
        local v20 = string.format("%s (%.3f ms)", v16, v13.profilerUpdateTime)
        v20 = MathUtil.clamp(v13.profilerUpdateTime / 1, 0, 1)
      end
      setTextBold(v17)
      setTextColor(0, 0, 0, 1)
      renderText(v4 + textSize, v5 + v7, 0.01, v16)
      setTextAlignment(RenderText.ALIGN_RIGHT)
      renderText(v4 + textSize, v5 + v7, 0.01, v15)
      if v17 then
        setTextColor(v18, v19, 0, 1)
      else
        setTextColor(1, 1, 1, 1)
      end
      renderText(v4, v5, 0.01, v15)
      setTextAlignment(RenderText.ALIGN_LEFT)
      renderText(v4, v5, 0.01, v16)
      if not (v5 - 0.011 < 0) then
        continue
      end
    end
    setTextBold(false)
    setTextColor(1, 1, 1, 1)
  end
end
function NetworkNode.packetReceived(v0, alpha, v2, v3)
end
function NetworkNode:getObject(id)
  return self.objects[id]
end
function NetworkNode:getObjectId(object)
  return self.objectIds[object]
end
function NetworkNode:addObject(object, id)
  self.objects[id] = object
  self.objectIds[object] = id
  self:addObjectToUpdateLoop(object)
  if self.networkListener ~= nil then
    v3:onObjectCreated(object)
  end
end
function NetworkNode:removeObject(object, id)
  self:removeObjectFromUpdateLoop(object)
  if self.networkListener ~= nil then
    v3:onObjectDeleted(object)
  end
  self.objects[id] = nil
  self.objectIds[object] = nil
end
function NetworkNode:addObjectToUpdateLoop(object)
  if object.isRegistered then
    local id = self:getObjectId(object)
    if id ~= nil then
      self.activeObjects[id] = object
      self.activeObjectsNextFrame[id] = object
    end
  end
end
function NetworkNode:removeObjectFromUpdateLoop(object)
  local id = self:getObjectId(object)
  if id ~= nil then
    self.removedObjects[id] = object
    self.activeObjects[id] = nil
    self.activeObjectsNextFrame[id] = nil
  end
end
function NetworkNode.registerObject(v0, alpha, v2)
end
function NetworkNode.unregisterObject(v0, alpha, v2)
end
function NetworkNode:consoleCommandToggleNetworkShowObjects(sortByClassName)
  self.showObjects = not self.showObjects
  local v3 = string.lower(sortByClassName or "true")
  if v3 ~= "true" then
  end
  self.debugSortByClassName = true
  local v4 = tostring(self.showObjects)
  return "NetworkShowObjects = " .. v4
end
function NetworkNode:consoleCommandToggleShowNetworkTraffic()
  self.showNetworkTraffic = not self.showNetworkTraffic
  local v3 = tostring(self.showNetworkTraffic)
  return "ShowNetworkTraffic = " .. v3
end
function NetworkNode:consoleCommandToggleShowNetworkTrafficClients()
  self.showNetworkTrafficClients = not self.showNetworkTrafficClients
  local v3 = tostring(self.showNetworkTrafficClients)
  return "ShowNetworkTrafficClients = " .. v3
end
