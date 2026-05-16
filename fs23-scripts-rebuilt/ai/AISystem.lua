-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AISystem = {xmlSchema = nil, COSTMAP_MAX_VALUE = 16, NEXT_JOB_ID = 0}
local AISystem_mt = Class(AISystem)
function AISystem.onCreateAIRoadSpline(_, node)
  if node ~= nil and node ~= 0 then
    local v3 = getUserAttribute(node, "maxWidth")
    local v2 = tonumber(...)
    local v4 = getUserAttribute(node, "maxTurningRadius")
    v3 = tonumber(...)
    v4:addRoadSpline(node, v2, v3)
  end
end
function AISystem.new(isServer, mission, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.mission = mission
  v3.filename = "vehicleNavigationCostmap.dat"
  v3.filenameGenerated = "vehicleNavigationCostmapGenerated.dat"
  v3.navigationMap = nil
  v3.activeJobs = {}
  v3.activeJobVehicles = {}
  v3.delayedRoadSplines = {}
  local v5 = XMLSchema.new("aiSystem")
  AISystem.xmlSchema = v5
  v3:registerXMLPaths(AISystem.xmlSchema)
  return v3
end
function AISystem.registerXMLPaths(v0, v1)
  v1:register(XMLValueType.ANGLE, "aiSystem.maxSlopeAngle", "Maximum terrain angle in degrees which is classified as drivable", 15)
  v1:register(XMLValueType.STRING, "aiSystem.blockedAreaInfoLayer#name", "Map info layer name defining areas which are blocked for AI driving", "navigationCollision")
  v1:register(XMLValueType.INT, "aiSystem.blockedAreaInfoLayer#channel", "Map info layer channel defining areas which are blocked for AI driving", 0)
  v1:register(XMLValueType.FLOAT, "aiSystem.vehicleMaxHeight", "Maximum expected vehicle height used for generating the costmap, e.g. relevant for overhanging collisions", 4)
  v1:register(XMLValueType.BOOL, "aiSystem.isLeftHandTraffic", "Map has left-hand traffic. This setting will only affect collision avoidance, traffic and ai splines need to be set up as left hand in map itself", false)
end
function AISystem:delete()
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 8, target 20)
    local v8 = AIMessageErrorUnknown.new()
    self:stopJob(...)
    -- TODO: structure LOP_FORNLOOP (pc 19, target 9)
  end
  if self.navigationMap ~= nil then
    delete(self.navigationMap)
    self.navigationMap = nil
  end
  if self.debug ~= nil and self.debug.marker ~= nil then
    delete(self.debug.marker)
  end
  v1:unregisterObjectToCallOnMissionStart(self)
  removeConsoleCommand("gsAISetTarget")
  removeConsoleCommand("gsAISetLastTarget")
  removeConsoleCommand("gsAIStart")
  removeConsoleCommand("gsAIEnableDebug")
  removeConsoleCommand("gsAISplinesShow")
  removeConsoleCommand("gsAISplinesCheckInterference")
  removeConsoleCommand("gsAIStationsShow")
  removeConsoleCommand("gsAIObstaclesShow")
  removeConsoleCommand("gsAICostsShow")
  removeConsoleCommand("gsAICostsUpdate")
  removeConsoleCommand("gsAICostsExport")
end
function AISystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  if g_addCheatCommands then
    if self.isServer then
      addConsoleCommand("gsAISetTarget", "Sets AI Target", "consoleCommandAISetTarget", self)
      addConsoleCommand("gsAISetLastTarget", "Sets AI Target to last position", "consoleCommandAISetLastTarget", self)
      addConsoleCommand("gsAIStart", "Starts driving to target", "consoleCommandAIStart", self)
    end
    addConsoleCommand("gsAIEnableDebug", "Enables AI debugging", "consoleCommandAIEnableDebug", self)
    addConsoleCommand("gsAISplinesShow", "Toggle AI system spline visibility", "consoleCommandAIToggleSplineVisibility", self)
    addConsoleCommand("gsAISplinesCheckInterference", "Check if AI splines interfere with any objects", "consoleCommandAICheckSplineInterference", self)
    addConsoleCommand("gsAIStationsShow", "Toggle AI system stations ai nodes visibility", "consoleCommandAIToggleAINodeDebug", self)
    addConsoleCommand("gsAIObstaclesShow", "Shows the obstacles around the camera", "consoleCommandAIShowObstacles", self)
    addConsoleCommand("gsAICostsShow", "Shows the costs per cell", "consoleCommandAIShowCosts", self)
    addConsoleCommand("gsAICostsUpdate", "Update costmap given width around the camera", "consoleCommandAISetAreaDirty", self)
    addConsoleCommand("gsAICostsExport", "Export costmap to image file", "consoleCommandAICostmapExport", self)
  end
  self.cellSizeMeters = 1
  self.maxSlopeAngle = 0.2617993877991494
  self.infoLayerName = "navigationCollision"
  self.infoLayerChannel = 0
  self.aiDrivableCollisionMask = CollisionFlag.AI_DRIVABLE
  self.obstacleCollisionMask = CollisionFlag.AI_BLOCKING
  self.vehicleMaxHeight = 4
  self.defaultVehicleMaxWidth = 6
  self.defaultVehicleMaxTurningRadius = 20
  self.isLeftHandTraffic = false
  local relFilename = getXMLString(xmlFile, "map.aiSystem#filename")
  if relFilename ~= nil then
    local filepath = Utils.getFilename(relFilename, baseDirectory)
    if filepath ~= nil then
      local xmlFileAISystem = XMLFile.load("mapAISystem", filepath, AISystem.xmlSchema)
      if xmlFileAISystem ~= nil then
        local v7 = xmlFileAISystem:getValue("aiSystem.maxSlopeAngle")
        if not v7 then
        end
        self.maxSlopeAngle = v7
        v7 = xmlFileAISystem:getValue("aiSystem.blockedAreaInfoLayer#name")
        if not v7 then
        end
        self.infoLayerName = v7
        v7 = xmlFileAISystem:getValue("aiSystem.blockedAreaInfoLayer#channel")
        if not v7 then
        end
        self.infoLayerChannel = v7
        v7 = xmlFileAISystem:getValue("aiSystem.vehicleMaxHeight")
        if not v7 then
        end
        self.vehicleMaxHeight = v7
        local v8 = xmlFileAISystem:getValue("aiSystem.isLeftHandTraffic")
        v7 = Utils.getNoNil(v8, self.isLeftHandTraffic)
        self.isLeftHandTraffic = v7
        xmlFileAISystem:delete()
      end
    end
  end
  self.debugEnabled = g_isDevelopmentVersion
  self.debug = {target = nil, isCostRenderingActive = false, colors = {}}
  self.debug.colors.default = {0, 1, 0, 1}
  self.debug.colors.blocking = {1, 0, 0, 1}
  self.debug.colors.spline = {0, 0, 1, 1}
  self.activeJobs = {}
  self.jobsToRemove = {}
  self.roadSplines = {}
  filepath:loadI3DFileAsync("data/shared/aiMarker.i3d", false, false, self.onAIMarkerLoaded, self, nil)
end
function AISystem:onAIMarkerLoaded(node, failedReason, args)
  if node ~= 0 then
    local v4 = getChildAt(node, 0)
    self.debug.marker = v4
    local v6 = getRootNode()
    link(v6, v4)
    delete(node)
  end
end
function AISystem:addRoadSpline(spline, maxWidth, maxTurningRadius)
  if self.isServer and spline ~= nil then
    if self.navigationMap ~= nil then
      if not maxWidth then
      end
      if not maxTurningRadius then
      end
      addRoadsToVehicleNavigationMap(self.navigationMap, spline, v4, v5)
      table.addElement(self.roadSplines, spline)
      -- if not v0.splinesVisible then goto L53 end
      setVisibility(spline, self.splinesVisible)
      I3DUtil.interateRecursively(spline, function(self)
        setVisibility(self, u0.splinesVisible)
      end)
      return
    end
    table.addElement(self.delayedRoadSplines, spline)
  end
end
function AISystem:removeRoadSpline(spline)
  if self.isServer and spline ~= nil then
    if self.navigationMap ~= nil then
      removeRoadsFromVehicleNavigationMap(self.navigationMap, spline)
      setVisibility(spline, false)
      table.removeElement(self.roadSplines, spline)
      return
    end
    table.removeElement(self.delayedRoadSplines, spline)
  end
end
function AISystem:onTerrainLoad(terrainNode, filename)
  if self.isServer then
    local v3 = createVehicleNavigationMap(self.cellSizeMeters, terrainNode, self.maxSlopeAngle, self.infoLayerName, self.infoLayerChannel, self.aiDrivableCollisionMask, self.obstacleCollisionMask, self.vehicleMaxHeight, self.isLeftHandTraffic)
    self.navigationMap = v3
    if self.mission.trafficSystem ~= nil then
      self:addRoadSpline(self.mission.trafficSystem.rootNodeId)
    end
    -- TODO: structure LOP_FORNPREP (pc 46, target 58)
    local spline = table.remove(self.delayedRoadSplines, 1)
    self:addRoadSpline(spline)
    -- TODO: structure LOP_FORNLOOP (pc 57, target 47)
    if self.mission.missionInfo.isValid then
      local v5 = self.mission.missionInfo:getIsNavigationCollisionValid(self.mission)
      if v5 then
        spline = loadVehicleNavigationCostMapFromFile(self.navigationMap, self.mission.missionInfo.savegameDirectory .. "/" .. self.filename)
        if spline then
          Logging.info("Loaded navigation cost map from savegame")
        end
      end
    end
    if not v4 then
      v5 = Utils.getDirectory(filename)
      local v7 = fileExists(v5 .. self.filenameGenerated)
      if v7 then
        v7 = loadVehicleNavigationCostMapFromFile(self.navigationMap, v5 .. self.filenameGenerated)
        if v7 then
          Logging.info("Loaded pregenerated navigation cost map")
        end
      end
    end
    if not v4 then
      v5:registerObjectToCallOnMissionStart(self)
    end
  end
  return true
end
function AISystem:onMissionStarted()
  Logging.info("No vehicle navigation cost map found. Start scanning map...")
  updateVehicleNavigationMap(self.navigationMap, -(0.5 * self.mission.terrainSize), 0.5 * self.mission.terrainSize, -(0.5 * self.mission.terrainSize), 0.5 * self.mission.terrainSize)
end
function AISystem:loadFromXMLFile(xmlFilename)
  local xmlFile = XMLFile.load("aiSystemXML", xmlFilename)
  local v3 = xmlFile:getFloat("aiSystem.debug.target#posX")
  local v4 = xmlFile:getFloat("aiSystem.debug.target#posY")
  local v5 = xmlFile:getFloat("aiSystem.debug.target#posZ")
  local v6 = xmlFile:getFloat("aiSystem.debug.target#dirX")
  local v7 = xmlFile:getFloat("aiSystem.debug.target#dirY")
  local v8 = xmlFile:getFloat("aiSystem.debug.target#dirZ")
  if v3 ~= nil and v4 ~= nil and v5 ~= nil and v6 ~= nil and v7 ~= nil and v8 ~= nil then
    self.debug.target = {x = v3, y = v4, z = v5, dirX = v6, dirY = v7, dirZ = v8}
  end
  xmlFile:delete()
end
function AISystem:save(xmlFilename, usedModNames)
  local xmlFile = XMLFile.create("aiSystemXML", xmlFilename, "aiSystem")
  if xmlFile ~= nil then
    if self.debug.target ~= nil then
      xmlFile:setFloat("aiSystem.debug.target#posX", self.debug.target.x)
      xmlFile:setFloat("aiSystem.debug.target#posY", self.debug.target.y)
      xmlFile:setFloat("aiSystem.debug.target#posZ", self.debug.target.z)
      xmlFile:setFloat("aiSystem.debug.target#dirX", self.debug.target.dirX)
      xmlFile:setFloat("aiSystem.debug.target#dirY", self.debug.target.dirY)
      xmlFile:setFloat("aiSystem.debug.target#dirZ", self.debug.target.dirZ)
    end
    if v4 then
      xmlFile:save()
    end
    xmlFile:delete()
  end
end
function AISystem:getNavigationMapFilename()
  return self.filename
end
function AISystem:getNavigationMap()
  return self.navigationMap
end
function AISystem:update(dt)
  -- TODO: structure LOP_FORNPREP (pc 5, target 32)
  table.removeElement(self.activeJobs, self.jobsToRemove[#self.jobsToRemove])
  table.remove(self.jobsToRemove, #self.jobsToRemove)
  v7:publish(MessageType.AI_JOB_REMOVED, self.jobsToRemove[#self.jobsToRemove].jobId)
  -- TODO: structure LOP_FORNLOOP (pc 31, target 6)
  for v5, v6 in ipairs(self.activeJobs) do
    v6:update(dt)
    if not self.isServer then
      continue
    end
    if not g_currentMission.isRunning then
      continue
    end
    local v7 = v6:getPricePerMs()
    if not (0 < v7) then
      continue
    end
    if GS_IS_MOBILE_VERSION then
    end
    v9:addMoney(-(v7 * dt * v8), v6.startedFarmId, MoneyType.AI, true)
    local v9 = v9:getFarmById(v6.startedFarmId)
    if not (v9 ~= nil) then
      continue
    end
    local v11 = v9:getBalance()
    if not (v11 + v7 * dt * v8 < 0) then
      continue
    end
    local v13 = AIMessageErrorOutOfMoney.new()
    self:stopJob(...)
  end
end
function AISystem:onClientJoined(connection)
  for v5, v6 in ipairs(self.activeJobs) do
    local v9 = AIJobStartEvent.new(v6, v6.startedFarmId)
    connection:sendEvent(...)
  end
end
function AISystem:setAreaDirty(minX, maxX, minZ, maxZ)
  if self.navigationMap ~= nil then
    updateVehicleNavigationMap(self.navigationMap, minX, maxX, minZ, maxZ)
  end
end
function AISystem:removeJob(job)
  table.insert(self.jobsToRemove, job)
end
function AISystem:addJob(job)
  table.insert(self.activeJobs, job)
end
function AISystem:getNumActiveJobs()
  return #self.activeJobs
end
function AISystem:getActiveJobs()
  return self.activeJobs
end
function AISystem:startJob(job, startFarmId)
  assert(self.isServer)
  if self.isServer then
    job:setId(AISystem.NEXT_JOB_ID)
    AISystem.NEXT_JOB_ID = AISystem.NEXT_JOB_ID + 1
    local v5 = AIJobStartEvent.new(job, startFarmId)
    v3:broadcastEvent(...)
    self:startJobInternal(job, startFarmId)
  end
end
function AISystem:startJobInternal(job, startFarmId)
  job:start(startFarmId)
  self:addJob(job)
  v3:publish(MessageType.AI_JOB_STARTED, job, startFarmId)
end
function AISystem:stopJob(job, aiMessage)
  if self.isServer then
    self:stopJobInternal(job, aiMessage)
    local v5 = AIJobStopEvent.new(job, aiMessage)
    v3:broadcastEvent(...)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = AIJobStopEvent.new(job, aiMessage)
  v3:sendEvent(...)
end
function AISystem:stopJobInternal(job, aiMessage)
  job:stop(aiMessage)
  self:removeJob(job)
  v3:publish(MessageType.AI_JOB_STOPPED, job, aiMessage)
end
function AISystem.skipCurrentTask(v0, v1)
  local v2 = v2:getServerConnection()
  local v4 = AIJobSkipTaskEvent.new(v1)
  v2:sendEvent(...)
end
function AISystem.skipCurrentTaskInternal(v0, v1)
  v1:skipCurrentTask()
end
function AISystem:getJobByIndex(index)
  return self.activeJobs[index]
end
function AISystem:stopJobById(jobId, aiMessage, noEventSend)
  local job = self:getJobById(jobId)
  if job ~= nil then
    self:stopJob(job, aiMessage, noEventSend)
    return true
  end
  return false
end
function AISystem:getJobById(jobId)
  for v5, v6 in ipairs(self.activeJobs) do
    if not (v6.jobId == jobId) then
      continue
    end
    return v6
  end
  return nil
end
function AISystem:addJobVehicle(vehicle)
  table.addElement(self.activeJobVehicles, vehicle)
end
function AISystem:removeJobVehicle(vehicle)
  table.removeElement(self.activeJobVehicles, vehicle)
end
function AISystem:getAILimitedReached()
  if g_currentMission.maxNumHirables > #self.activeJobVehicles then
  end
  return true
end
function AISystem:getIsPositionReachable(x, y, z)
  if self.navigationMap ~= nil then
    -- if v0.isServer then goto L9 end
  end
  return true
  local v6 = math.abs(x)
  if v6 <= self.mission.mapWidth * 0.5 then
    v6 = math.abs(z)
    if v6 <= self.mission.mapHeight * 0.5 then
      local v6, v7 = getVehicleNavigationMapCostAtWorldPos(self.navigationMap, x, y, z)
    end
  end
  if v4 ~= 255 then
    -- if not v5 then goto L50 end
  end
  return false
  return true
end
function AISystem:draw()
  if self.debug.isCostRenderingActive then
    local v2 = getCamera(0)
    local v1, v2, v3 = getWorldTranslation(...)
    if self.mission.controlledVehicle ~= nil then
      if self.mission.controlledVehicle.selectedImplement ~= nil then
      end
      local v5, v6, v7 = getWorldTranslation(v4.components[1].node)
    end
    v6 = math.floor(v1 / self.cellSizeMeters)
    v6 = math.floor(v3 / self.cellSizeMeters)
    v7 = math.max(v6 * self.cellSizeMeters + self.cellSizeMeters * 0.5 - 15 * self.cellSizeMeters, -(self.mission.terrainSize * 0.5) + self.cellSizeMeters * 0.5)
    local v8 = math.max(v6 * self.cellSizeMeters + self.cellSizeMeters * 0.5 - 15 * self.cellSizeMeters, -(self.mission.terrainSize * 0.5) + self.cellSizeMeters * 0.5)
    local v9 = math.min(v6 * self.cellSizeMeters + self.cellSizeMeters * 0.5 + 15 * self.cellSizeMeters, self.mission.terrainSize * 0.5 - self.cellSizeMeters * 0.5)
    local v10 = math.min(v6 * self.cellSizeMeters + self.cellSizeMeters * 0.5 + 15 * self.cellSizeMeters, self.mission.terrainSize * 0.5 - self.cellSizeMeters * 0.5)
    local v11 = getCorrectTextSize(0.015)
    -- TODO: structure LOP_FORNPREP (pc 121, target 186)
    for v17 = v7, v9, self.cellSizeMeters do
      local v18 = getTerrainHeightAtWorldPos(self.mission.terrainRootNode, v17, 0, v14)
      local v19, v20 = getVehicleNavigationMapCostAtWorldPos(self.navigationMap, v17, v18, v14)
      if v20 then
      else
        local v22, v23, v24 = Utils.getGreenRedBlendedColor(v19 / AISystem.COSTMAP_MAX_VALUE)
        self.debug.colors.default[1] = v22
        self.debug.colors.default[2] = v23
        self.debug.colors.default[3] = v24
      end
      local v26 = string.format("%.1f", v19)
      Utils.renderTextAtWorldPosition(v17, v18, v14, v26, v11, 0, v21)
      -- TODO: structure LOP_FORNLOOP (pc 184, target 127)
    end
  end
end
function AISystem:addObstacle(node, centerOffsetX, centerOffsetY, centerOffsetZ, sizeX, sizeY, sizeZ, brakeAcceleration)
  if self.isServer and self.navigationMap ~= nil and node ~= nil then
    addVehicleNavigationPhysicsObstacle(self.navigationMap, node, centerOffsetX or 0, centerOffsetY or 0, centerOffsetZ or 0, sizeX or 0, sizeY or 0, sizeZ or 0, brakeAcceleration or 0)
  end
end
function AISystem:removeObstacle(node)
  if self.isServer and self.navigationMap ~= nil and node ~= nil then
    removeVehicleNavigationPhysicsObstacle(self.navigationMap, node)
  end
end
function AISystem:setObstacleIsPassable(node, isPassable)
  if self.isServer and self.navigationMap ~= nil and node ~= nil and setVehicleNavigationPhysicsObstacleIsPassable ~= nil then
    setVehicleNavigationPhysicsObstacleIsPassable(self.navigationMap, node, isPassable)
  end
end
function AISystem:consoleCommandAIShowCosts()
  if not self.isServer then
    return "gsAICostsShow is a server-only command"
  end
  self.debug.isCostRenderingActive = not self.debug.isCostRenderingActive
  if self.debug.isCostRenderingActive then
    v1:addDrawable(self)
    return "showCosts=true"
  end
  v1:removeDrawable(self)
  return "showCosts=false"
end
function AISystem:consoleCommandAISetTarget(offsetX, offsetZ)
  if not self.isServer then
    return "gsAISetTarget is a server-only command"
  end
  if self.mission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L136
    -- if not v0.mission.player.isControlled then goto L136 end
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L136
    -- cmp-jump LOP_JUMPXEQKN R10 aux=0x7 -> L136
    local v10, v11, v12 = getWorldTranslation(self.mission.player.rootNode)
    v10 = math.sin(self.mission.player.rotY)
    v10 = math.cos(self.mission.player.rotY)
  elseif self.mission.controlledVehicle ~= nil then
    v10, v11, v12 = getWorldTranslation(self.mission.controlledVehicle.rootNode)
    v10, v11, v12 = localDirectionToWorld(self.mission.controlledVehicle.rootNode, 0, 0, 1)
  else
    v11 = getCamera()
    v10, v11, v12 = getWorldTranslation(...)
    v11 = getCamera()
    v10, v11, v12 = localDirectionToWorld(v11, 0, 0, -1)
  end
  v10, v11, v12 = MathUtil.crossProduct(0, 1, 0, v6, 0, v8)
  local v13 = tonumber(offsetX)
  v13 = tonumber(offsetZ)
  self.debug.target = {x = v3 + v6 * (v13 or 0) + v10 * (v13 or 0), y = v4, z = v5 + v8 * (v13 or 0) + v12 * (v13 or 0), dirX = v6, dirY = v7, dirZ = v8}
  if self.debug.marker ~= nil then
    setWorldTranslation(self.debug.marker, v3 + v6 * (v13 or 0) + v10 * (v13 or 0), v4, v5 + v8 * (v13 or 0) + v12 * (v13 or 0))
    setDirection(self.debug.marker, v6, 0, v8, 0, 1, 0)
  end
  return "Set AI Target"
end
function AISystem:consoleCommandAISetLastTarget()
  if not self.isServer then
    return "gsAISetLastTarget is a server-only command"
  end
  if self.debug.target ~= nil then
    if self.debug.marker ~= nil then
      setWorldTranslation(self.debug.marker, self.debug.target.x, self.debug.target.y, self.debug.target.z)
      setDirection(self.debug.marker, self.debug.target.dirX, self.debug.target.dirY, self.debug.target.dirZ, 0, 1, 0)
    end
    return "Set target to last target"
  end
  return "No last target found"
end
function AISystem:consoleCommandAIStart()
  if not self.isServer then
    return "Only available on server"
  end
  if self.mission.controlledVehicle == nil then
    return "Please enter a vehicle first"
  end
  if self.debug.target == nil then
    return "Please set a target first"
  end
  local offsetZ = offsetZ:createJob(AIJobType.GOTO)
  local v3 = MathUtil.getYRotationFromDirection(offsetX.dirX, offsetX.dirZ)
  v4:setVehicle(self.mission.controlledVehicle)
  v4:setPosition(offsetX.x, offsetX.z)
  v4:setAngle(v3)
  offsetZ:setValues()
  local v4, v5 = offsetZ:validate(g_currentMission.player.farmId)
  if v4 then
    self:startJob(offsetZ, g_currentMission.player.farmId)
    return "Started ai..."
  end
  local v8 = tostring(v5)
  return "Error: " .. v8
end
function AISystem:consoleCommandAIEnableDebug()
  self.debugEnabled = not self.debugEnabled
  local v3 = tostring(self.debugEnabled)
  return "debugEnabled=" .. v3
end
function AISystem:consoleCommandAIToggleSplineVisibility()
  self.splinesVisible = not self.splinesVisible
  if self.splinesVisible then
    self.splineDebugElements = {}
    local offsetX = offsetX:getDebugMat()
    for v5, v6 in ipairs(self.roadSplines) do
      local v7 = I3DUtil.getIsSpline(v6)
      if v7 then
        self.splineDebugElements[v6] = true
      end
      I3DUtil.interateRecursively(v6, function(self)
        local offsetX = I3DUtil.getIsSpline(self)
        if offsetX then
          u0.splineDebugElements[self] = true
        end
      end)
    end
    for v5 in pairs(self.splineDebugElements) do
      DebugUtil.setNodeEffectivelyVisible(v5)
      local v8 = DebugUtil.getDebugColor(v5)
      local v7, v8, v9 = unpack(...)
      setMaterial(v5, offsetX, 0)
      setShaderParameter(v5, "color", v7, v8, v9, 0, false)
      setShaderParameter(v5, "alpha", 1, 0, 0, 0, false)
      local v10 = DebugUtil.getSplineDebugElements(v5)
      self.splineDebugElements[v5] = v10
      for v14, v15 in pairs(v10) do
        if v14 == "splineAttributes" then
          v15:setColor(v7, v8, v9)
        end
        v16:addPermanentElement(v15)
      end
    end
  else
    for v4, v5 in pairs(self.splineDebugElements) do
      for v9, v10 in pairs(v5) do
        v11:removePermanentElement(v10)
      end
      v6 = entityExists(v4)
      if not v6 then
        continue
      end
      setVisibility(v4, false)
    end
    self.splineDebugElements = nil
  end
  if g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.rootNodeId ~= nil then
    setVisibility(g_currentMission.trafficSystem.rootNodeId, self.splinesVisible)
  end
  v3 = tostring(self.splinesVisible)
  return "AISystem.splinesVisible=" .. v3
end
function AISystem:consoleCommandAIToggleAINodeDebug()
  self.stationsAINodesVisible = not self.stationsAINodesVisible
  if self.stationsAINodesVisible then
    self.stationsAINodesDebugElements = {}
    local offsetZ = offsetZ:getUnloadingStations()
    for v4, v5 in pairs(...) do
      local v6 = v5:isa(UnloadingStation)
      if not v6 then
        continue
      end
      local v6, v7, v8, v9, v10 = v5:getAITargetPositionAndDirection(FillType.UNKNOWN)
      if not (v6 ~= nil) then
        continue
      end
      local v13 = v5:getName()
      local v12 = DebugGizmo.new()
      v12 = v12:createWithNode(v10.aiNode, "UnloadingStation: " .. v13, nil, nil, nil, false, true)
      v13:addPermanentElement(v12)
      table.insert(self.stationsAINodesDebugElements, v12)
    end
    offsetZ = offsetZ:getLoadingStations()
    for v4, v5 in pairs(...) do
      v6, v7, v8, v9, v10 = v5:getAITargetPositionAndDirection(FillType.UNKNOWN)
      if not (v6 ~= nil) then
        continue
      end
      v13 = v5:getName()
      v12 = DebugGizmo.new()
      v12 = v12:createWithNode(v10.aiNode, "LoadingStation: " .. v13, nil, nil, nil, false, true)
      v13:addPermanentElement(v12)
      table.insert(self.stationsAINodesDebugElements, v12)
    end
  else
    for v4, v5 in pairs(self.stationsAINodesDebugElements) do
      v6:removePermanentElement(v5)
      v5:delete()
    end
    self.stationsAINodesDebugElements = nil
  end
  if self.stationsAINodesVisible then
    Logging.warning("Nodes in reloaded placeables are not updated automatically. Toggle this command again to update the station nodes if placeables were reloaded.")
  end
  v3 = tostring(self.stationsAINodesVisible)
  return "AISystem.stationsAINodesVisible=" .. v3
end
function AISystem:consoleCommandAIShowObstacles()
  if not self.isServer then
    return "gsAIObstaclesShow is a server-only command"
  end
  self.mapDebugRenderingEnabled = not self.mapDebugRenderingEnabled
  enableVehicleNavigationMapDebugRendering(self.navigationMap, self.mapDebugRenderingEnabled)
  local v3 = tostring(self.mapDebugRenderingEnabled)
  return "AIShowObstacles=" .. v3
end
function AISystem:consoleCommandAISetAreaDirty(width)
  if not self.isServer then
    return "gsAICostsUpdate is a server-only command"
  end
  local v3 = getCamera(0)
  local offsetZ, v3, v4 = getWorldTranslation(...)
  local v7 = tonumber(width)
  local v5 = MathUtil.clamp(v7 or 30, 2, 1000)
  self:setAreaDirty(offsetZ - v5 / 2, v4 - v5 / 2, offsetZ + v5 / 2, v4 + v5 / 2)
  return string.format("Updated costmap in a %dx%d area", v5, v5)
end
function AISystem:consoleCommandAICostmapExport(imageFormatStr)
  if not self.isServer then
    return "gsAICostsExport is a server-only command"
  end
  if g_currentMission.missionInfo.savegameDirectory == nil then
    return "Error: Savegame directory does not exist yet, please save the game first"
  end
  if imageFormatStr ~= nil then
    local v4 = imageFormatStr:upper()
    if BitmapUtil.FORMAT[v4] == nil then
      local v6 = table.concatKeys(BitmapUtil.FORMAT, ", ")
      Logging.error(...)
      return "Error: Costmap export failed"
    end
  end
  if offsetZ ~= BitmapUtil.FORMAT.GREYMAP then
  end
  for v13, v14 in ipairs(self.roadSplines) do
    local v15 = I3DUtil.getIsSpline(v14)
    if v15 then
      v9[v14] = true
    end
    I3DUtil.interateRecursively(v14, function(self)
      local imageFormatStr = I3DUtil.getIsSpline(self)
      if imageFormatStr then
        u0[self] = true
      end
    end)
  end
  for v14 in pairs(v9) do
    local v16 = getSplineLength(v14)
    -- TODO: structure LOP_FORNPREP (pc 104, target 128)
    local v20, v21, v22 = getSplinePosition(v14, 0)
    local v25 = MathUtil.round(v20)
    local v24 = MathUtil.round(v22)
    if not v10[v25] then
    end
    v10[v23] = v25
    v10[v23][v24] = true
    -- TODO: structure LOP_FORNLOOP (pc 127, target 105)
  end
  v12 = BitmapUtil.writeBitmapToFileFromIterator(function()
    return function()
      if u1 - u2 < u0 then
        return nil
      end
      local self = getTerrainHeightAtWorldPos(u3.mission.terrainRootNode, u4, 0, u0)
      local imageFormatStr, offsetZ = getVehicleNavigationMapCostAtWorldPos(u3.navigationMap, u4, self, u0)
      local v5 = MathUtil.round(u4)
      local v4 = MathUtil.round(u0)
      if u5[v5] then
      end
      if u6 then
        if v5 then
          u7[1] = 1
        else
          u7[1] = imageFormatStr
        end
        u7[1] = u7[1] / AISystem.COSTMAP_MAX_VALUE * 255
      else
        if v5 then
          u7[1] = u8[1]
          u7[2] = u8[2]
          u7[3] = u8[3]
        elseif offsetZ then
          u7[1] = u9[1]
          u7[2] = u9[2]
          u7[3] = u9[3]
        else
          local v9, v10, v11 = Utils.getGreenRedBlendedColor(imageFormatStr / AISystem.COSTMAP_MAX_VALUE)
          u7[1] = v9
          u7[2] = v10
          u7[3] = v11
        end
        u7[1] = u7[1] * 255
        u7[2] = u7[2] * 255
        u7[3] = u7[3] * 255
      end
      if u4 < u1 - u3.cellSizeMeters then
        u4 = u4 + u3.cellSizeMeters
      else
        u4 = -u1 + u2
        u0 = u0 + u3.cellSizeMeters
      end
      return u7
    end
  end, v5, v5, g_currentMission.missionInfo.savegameDirectory .. "/navigationMap", offsetZ)
  if not v12 then
    return "Error: Costmap export failed"
  end
  return "Finished costmap export"
end
function AISystem:consoleCommandAICheckSplineInterference(stepLength, heightOffset, defaultSplineWidth)
  self.debugLastPos = {}
  self:debugDeleteInterferences()
  self.debugInterferencePositions = {}
  self.debugInterferences = {}
  local v4 = tonumber(stepLength)
  v4 = tonumber(heightOffset)
  v4 = tonumber(defaultSplineWidth)
  if not v4 then
  end
  Logging.info("Checking interference: stepLength=%.2f heightOffset=%.2f defaultSplineWidth=%.2f", stepLength, heightOffset, v4)
  local v6 = createTransformGroup("testPosition")
  for v13, v14 in ipairs(self.roadSplines) do
    I3DUtil.interateRecursively(v14, v9)
  end
  delete(v6)
  v10 = table.size(self.debugInterferences)
  self.debugInterferences = nil
  self.debugLastPos = nil
  v11 = string.format("Checked %d splines, found %d interferences\n%s", v5, v10, "gsAISplineCheckInterference [stepLength] [heightOffset] [defaultSplineWidth]\nUse 'gsDebugManagerClearElements' to remove boxes.")
  return v11
end
function AISystem:splineInterferenceOverlapCallback(nodeId)
  if nodeId ~= 0 and nodeId ~= g_currentMission.terrainRootNode then
    local offsetZ = CollisionFlag.getHasFlagSet(nodeId, CollisionFlag.VEHICLE)
    if not offsetZ then
      offsetZ = CollisionFlag.getHasFlagSet(nodeId, CollisionFlag.AI_BLOCKING)
      if offsetZ then
        local customWidth = getUserAttribute(nodeId, "maxWidth")
        if customWidth then
          local v4 = string.format(" (maxWidth UserAttribute: %.2f)", customWidth)
          -- if v4 then goto L35 end
        end
        local v7 = getName(offsetZ.spline)
        local v10 = getParent(nodeId)
        local v9 = getName(...)
        v10 = getName(nodeId)
        Logging.info("found interference for spline '%s'%s with object '%s|%s' at %d %d %d", v7, "", v9, v10, offsetZ.wx, offsetZ.wy, offsetZ.wz)
        table.insert(self.debugInterferencePositions, {DebugUtil.drawOverlapBox, {offsetZ.wx, offsetZ.wy, offsetZ.wz, offsetZ.rx, offsetZ.ry, offsetZ.rz, offsetZ.sx, offsetZ.sy, offsetZ.sz}})
        v6:addPermanentFunction({DebugUtil.drawOverlapBox, {offsetZ.wx, offsetZ.wy, offsetZ.wz, offsetZ.rx, offsetZ.ry, offsetZ.rz, offsetZ.sx, offsetZ.sy, offsetZ.sz}})
        self.debugInterferences[nodeId] = true
      end
    end
  end
end
function AISystem:debugDeleteInterferences()
  if self.debugInterferencePositions ~= nil then
    for v4, v5 in ipairs(self.debugInterferencePositions) do
      v6:removePermanentFunction(v5)
    end
  end
end
function AISystem.getAgentStateName(index)
  for v4, v5 in pairs(AgentState) do
    if not (v5 == index) then
      continue
    end
    return v4
  end
  return "UNKNOWN"
end
