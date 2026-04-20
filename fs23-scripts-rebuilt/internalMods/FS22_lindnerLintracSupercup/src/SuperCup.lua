-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCup = {STATES = {IDLE = 1, SETUP = 2, START = 3, RUN = 4, FINISHED = 5}, RUN_FARM_ID = AccessHandler.NOBODY - 1}
local SuperCup_mt = Class(SuperCup)
function SuperCup.new(v0, v1, v2, v3, v4, v5, v6)
  local v7 = setmetatable({}, u0)
  v7.version = 1
  v7.debug = false
  local v8 = v1:getIsServer()
  v7.isServer = v8
  v8 = v1:getIsClient()
  v7.isClient = v8
  v7.modDirectory = v2
  v7.modName = v3
  v7.farmId = v4
  v7.baseNode = v5
  v7.parent = v6
  v7.started = false
  v7.currentPlayerUserId = nil
  v7.scores = {}
  v7.checkpoints = {}
  v7.vehicleList = {}
  v7.vehiclesToLoad = {}
  v7.superCupEnterReferenceNode = v5
  v7.superCupExitReferenceNode = v5
  v7.mission = v1
  v8 = v8:new(v5, v2, v7.isServer, v7.isClient)
  v7.coneHandler = v8
  v8 = v8:new(v5, v7.isServer, v7.isClient)
  v7.trafficLight = v8
  v8 = SuperCupHUD.new(v2, v1.hud.gameInfoDisplay)
  v7.hud = v8
  v8 = v8:new(v7)
  v7.activatable = v8
  v7.backup_maxAttachDistanceSQ = AttacherJoints.MAX_ATTACH_DISTANCE_SQ
  v7.backup_maxAttachAngle = AttacherJoints.MAX_ATTACH_ANGLE
  return v7
end
function SuperCup:delete()
  removeTrigger(self.triggerNode)
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  for v4, v5 in ipairs(self.checkpoints) do
    v5:delete()
  end
  self.checkpoints = {}
  for v4, v5 in ipairs(self.vehicleList) do
    if not (v5 ~= nil) then
      continue
    end
    if not not v5.isDeleted then
      continue
    end
    v6:removeVehicle(v5, false)
    v5:delete()
  end
  self.vehicleList = {}
  self.vehiclesToLoad = {}
end
function SuperCup:readStream(streamId, connection)
  local hasPlayer = streamReadBool(streamId)
  self.started = hasPlayer
  hasPlayer = streamReadBool(streamId)
  if hasPlayer then
    local v4 = streamReadInt8(streamId)
    self.currentPlayerUserId = v4
  end
  v4 = NetworkUtil.readNodeObjectId(streamId)
  v5:readStream(streamId, connection)
  v5:finishRegisterObject(self.coneHandler, v4)
  for v8, v9 in ipairs(self.checkpoints) do
    local v10 = NetworkUtil.readNodeObjectId(streamId)
    v9:readStream(streamId, connection)
    v11:finishRegisterObject(v9, v10)
  end
end
function SuperCup:writeStream(streamId, connection)
  streamWriteBool(streamId, self.started)
  if self.currentPlayerUserId == nil then
  end
  v3(v4, true)
  if self.currentPlayerUserId ~= nil then
    streamWriteInt8(streamId, self.currentPlayerUserId)
  end
  local v5 = NetworkUtil.getObjectId(self.coneHandler)
  NetworkUtil.writeNodeObjectId(...)
  v3:writeStream(streamId, connection)
  v3:registerObjectInStream(connection, self.coneHandler)
  for v6, v7 in ipairs(self.checkpoints) do
    local v10 = NetworkUtil.getObjectId(v7)
    NetworkUtil.writeNodeObjectId(...)
    v7:writeStream(streamId, connection)
    v8:registerObjectInStream(connection, v7)
  end
end
function SuperCup:readUpdateStream(streamId, timestamp, connection)
  for v7, v8 in ipairs(self.checkpoints) do
    v8:readUpdateStream(streamId, timestamp, connection)
  end
end
function SuperCup:writeUpdateStream(streamId, connection, dirtyMask)
  for v7, v8 in ipairs(self.checkpoints) do
    v8:writeUpdateStream(streamId, connection, dirtyMask)
  end
end
function SuperCup:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Node to reference the trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".enterReferenceNode", "Node to enter the super cup")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".exitReferenceNode", "Node to exit the super cup")
  self:register(XMLValueType.STRING, v1 .. ".vehicles.vehicle(?)#filename", "The vehicle filename")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".vehicles.vehicle(?)#spawnNode", "Node to exit the super cup")
  self:register(XMLValueType.BOOL, v1 .. ".vehicles.vehicle(?)#canBeEntered", "If the vehicle can be entered")
  self:register(XMLValueType.ANGLE, v1 .. ".vehicles.vehicle(?)#rotation", "The spawn heading rotation")
  ConeHandler.registerXMLPaths(self, v1 .. ".cones")
  TrafficLight.registerXMLPaths(self, v1 .. ".trafficLight")
  Checkpoint.registerXMLPaths(self, v1 .. ".checkpoints")
  ActionRequiredCheckpoint.registerXMLPaths(self, v1 .. ".checkpoints")
end
function SuperCup:loadFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  local v5 = xmlFile:getValue(rootXMLTag .. ".enterReferenceNode", nil, components, i3dMappings)
  self.superCupEnterReferenceNode = v5
  v5 = xmlFile:getValue(rootXMLTag .. ".exitReferenceNode", nil, components, i3dMappings)
  self.superCupExitReferenceNode = v5
  v5 = xmlFile:getValue(rootXMLTag .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v5
  if self.triggerNode == nil then
  end
  assert(true, "Supercup needs a start trigger!")
  addTrigger(self.triggerNode, "playerEnterTriggerCallback", self)
  v5:loadFromXML(xmlFile, rootXMLTag)
  v5:setIsActive(false)
  v5:setFarmContext(self.farmId)
  v5:loadFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  v5:setOwnerFarmId(self.farmId)
  v5:register(true)
  v5:loadFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  self:loadSuperCupCheckpointsFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  self:loadSuperCupVehiclesFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  local v10 = v10:new(self.parent)
  v10 = v10:add(SuperCup.STATES.IDLE, AbstractState)
  v10 = v10:add(SuperCup.STATES.SETUP, SetupState, {self.mission, self.checkpoints, self.vehiclesToLoad, self.vehicleList})
  v10 = v10:add(SuperCup.STATES.START, StartState, {self.mission, self.isServer, self.coneHandler, self.trafficLight, self.hud})
  v10 = v10:add(SuperCup.STATES.RUN, RunState, {self.mission, self.isServer, self.coneHandler, self.trafficLight, self.checkpoints, self.hud, self.vehicleList, self.parent})
  v10 = v10:add(SuperCup.STATES.FINISHED, FinishState, {self.mission, self.isServer, self.isClient, self, self.vehicleList, self.trafficLight, self.hud})
  v10 = v10:addEntryAction(SuperCup.STATES.START, function()
  end)
  v10 = v10:addEntryAction(SuperCup.STATES.RUN, function(self)
    self.vehicleList = u0.vehicleList
  end)
  v10 = v10:addEntryAction(SuperCup.STATES.FINISHED, function()
    AttacherJoints.MAX_ATTACH_DISTANCE_SQ = u0.backup_maxAttachDistanceSQ
    AttacherJoints.MAX_ATTACH_ANGLE = u0.backup_maxAttachAngle
  end)
  v10 = v10:addEntryAction(SuperCup.STATES.FINISHED, function(self)
    self.vehicleList = u0.vehicleList
  end)
  v10 = v10:addEntryAction(SuperCup.STATES.SETUP, function(self)
    if self.playerUserId == u0.mission.playerUserId then
      xmlFile:addActivatable(u0.activatable)
    end
    u0.started = true
    u0.currentPlayerUserId = self.playerUserId
  end)
  v10 = v10:addEntryAction(SuperCup.STATES.FINISHED, function(self)
    u0.started = false
    xmlFile:removeActivatable(u0.activatable)
    u0.currentPlayerUserId = nil
  end)
  v10 = v10:build()
  self.stateMachine = v10
end
function SuperCup:saveResult(score)
  table.insert(self.scores, score)
  local path = self:getFilePath()
  createFolder(path)
  local dateNow = getDate("%Y_%m_%d_%H_%M_%S")
  local v4 = v4:format(dateNow)
  local v5 = self:getFilePath(v4)
  createFolder(v5)
  saveScreenshot(v5 .. "/score.jpg")
  local v6 = self:getXMLFile(v5 .. "/score.xml")
  if v6 ~= nil then
    setXMLString(v6, "superCup.score.time", score.time)
    setXMLInt(v6, "superCup.score.penalties", score.penalties)
    setXMLString(v6, "superCup.score.player", score.playerNickname)
    setXMLString(v6, "superCup.score.uuid", score.uuid)
    setXMLInt(v6, "superCup.score.playerId", score.playerId)
    saveXMLFile(v6)
    delete(v6)
  end
end
function SuperCup:saveToXMLFile()
  local v3 = self:getFilePath("superCup.xml")
  local v1 = self:getXMLFile(...)
  if v1 ~= nil then
    local dateNow = getDate("%Y-%m-%d")
    while true do
      v4 = v4:format(v3)
      v5 = hasXMLProperty(v1, v4)
      if not v5 then
        break
      end
      v5 = getXMLString(v1, v4 .. "#date")
      if not (v5 ~= dateNow) then
        break
      end
    end
    v4 = v4:format(v3)
    setXMLString(v1, v4 .. "#date", dateNow)
    for v8, v9 in ipairs(self.scores) do
      local v10 = v10:format(v4, v8 - 1)
      setXMLString(v1, v10 .. "#time", v9.time)
      setXMLInt(v1, v10 .. "#penalties", v9.penalties)
      setXMLString(v1, v10 .. "#player", v9.playerNickname)
      setXMLString(v1, v10 .. "#uuid", v9.uuid)
      setXMLInt(v1, v10 .. "#playerId", v9.playerId)
    end
    saveXMLFile(v1)
    delete(v1)
  end
end
function SuperCup.getXMLFile(v0, v1)
  local v3 = fileExists(v1)
  if v3 then
    v3 = loadXMLFile("superCupXML", v1)
    return v3
  end
  v3 = createXMLFile("superCupXML", v1, "superCup")
  return v3
end
function SuperCup.getFilePath(v0, v1)
  local v5 = getUserProfileAppPath()
  if v1 == nil then
    return v5 .. "lindnerSuperCup/"
  end
  return Utils.getFilename(v1, v2)
end
function SuperCup:update(dt)
  v2:update(dt)
end
function SuperCup:draw()
  if self.mission.player ~= nil then
    local v1 = v1:canInteractWithFarm(self.mission.player.farmId)
    if v1 then
      v1:draw()
    end
  end
end
function SuperCup:getCurrentPlayerUserId()
  if self.currentPlayerUserId ~= nil then
  end
  return v1
end
function SuperCup:onYesNoSuperCupDialog(isYes)
  if isYes then
    self:startSuperCup(self.mission.playerUserId)
  end
end
function SuperCup:setIsSuperCupStarted(isStarted)
  if isStarted then
    self:startSuperCup(self.mission.playerUserId)
    return
  end
  local v4 = self:getCurrentPlayerUserId()
  self:stopSuperCup(...)
end
function SuperCup:startSuperCup(playerUserId)
  if self.isServer then
    self:onStartSuperCup(playerUserId)
    return
  end
  local v2 = v2:getServerConnection()
  local v4 = SuperCupStartEvent.new(self.parent, playerUserId)
  v2:sendEvent(...)
end
function SuperCup:onStartSuperCup(playerUserId)
  if self.isServer then
    local v2 = v2:isInState(SuperCup.STATES.SETUP)
    if not v2 then
      v2:transition(SuperCup.STATES.SETUP, {playerUserId})
    end
  end
end
function SuperCup:stopSuperCup(playerUserId)
  if not playerUserId then
    local v2 = self:getCurrentPlayerUserId()
  end
  if self.isServer then
    self:onStopSuperCup(v2)
    return
  end
  v2 = v2:getServerConnection()
  local v4 = SuperCupStopEvent.new(self.parent, playerUserId)
  v2:sendEvent(...)
end
function SuperCup:onStopSuperCup(playerUserId)
  if self.isServer then
    local v2 = v2:isInState(SuperCup.STATES.FINISHED)
    if not v2 then
      v2:transition(SuperCup.STATES.FINISHED, {playerUserId})
    end
  end
end
function SuperCup:loadSuperCupCheckpointsFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  while true do
    v6 = v6:format(rootXMLTag, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = xmlFile:getValue(v6 .. "#className", "Checkpoint")
    v8 = SuperCupUtil.getClassObject(v7)
    if v8 ~= nil then
      v9 = v8:new(self.baseNode, self.isServer, self.isClient)
      v9:setOwnerFarmId(self.farmId)
      v10 = v9:loadFromXML(xmlFile, v6, components, i3dMappings)
      if v10 then
        v9:register(true)
        table.insert(self.checkpoints, v9)
      else
        v9:delete()
      end
    end
  end
end
function SuperCup:loadSuperCupVehiclesFromXML(xmlFile, rootXMLTag, components, i3dMappings)
  if not self.isServer then
    return
  end
  while true do
    v6 = v6:format(rootXMLTag, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = xmlFile:getValue(v6 .. "#filename")
    v8 = xmlFile:getValue(v6 .. "#spawnNode", nil, components, i3dMappings)
    if v7 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L40
    end
    Logging.xmlWarning("Could not find vehicle file or spawn node!")
    return
    v9 = xmlFile:getValue(v6 .. "#rotation", 0)
    v13 = Utils.getFilename(v7, self.modDirectory)
    table.insert(self.vehiclesToLoad, {node = v8, filename = v13, rotation = v9, farmId = self.farmId, baseNode = self.baseNode})
  end
end
function SuperCup:playerEnterTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter and self.mission.player ~= nil and otherId == self.mission.player.rootNode and not self.started then
    if self.mission.player.farmId ~= self.farmId then
      local v8 = v8:getFarmById(self.farmId)
      local v12 = v12:getText("info_joinFarm")
      v12 = v12:format(v8.name)
      v9:showInfoDialog({dialogType = DialogElement.TYPE_INFO, text = v12})
      return
    end
    local v11 = v11:getText("info_participate")
    v8:showYesNoDialog({dialogType = DialogElement.TYPE_QUESTION, text = v11, callback = self.onYesNoSuperCupDialog, target = self})
  end
end
