-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RailroadCrossing = {STATE_OPEN = 1, STATE_CLOSING = 2, STATE_CLOSED = 3, STATE_OPENING = 4, TRAFFIC_BLOCKING_NODE_MAX_DISTANCE = 2}
local RailroadCrossing_mt = Class(RailroadCrossing)
function RailroadCrossing:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rootNode", "Root node")
  self:register(XMLValueType.FLOAT, v1 .. ".activation#startDistance", "Activation start distance", 50)
  self:register(XMLValueType.FLOAT, v1 .. ".activation#endDistance", "Activation end distance", 50)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".gates.gate(?)#node", "Gate node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".gates.gate(?)#startRot", "Start rotation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".gates.gate(?)#startTrans", "Start translation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".gates.gate(?)#endRot", "End rotation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".gates.gate(?)#endTrans", "End translation")
  self:register(XMLValueType.FLOAT, v1 .. ".gates.gate(?)#duration", "Move duration (sec)", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".gates.gate(?)#closingOffset", "Closing offset (sec)", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".signals.signal(?)#node", "Signal node, can be self-illum shape, add optional real light as child")
  self:register(XMLValueType.BOOL, v1 .. ".signals.signal(?)#alternatingLights", "True if light should blink in opposite", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".trafficBlockers.blocker(?)#node", "Traffic blocking node, also works for AI if it drives on a traffic system spline. Use one per road lane")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".aiNavigationBlockers.blocker(?)#node", "AI navigation blocking node. Only for ai splines, which are not part of the traffic system. Use one per spline")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".pedestrianBlockers.blocker(?)#node", "Pedestrian blocking node. Use one per spline")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "crossing")
end
function RailroadCrossing.new(isServer, isClient, trainSystem, nodeId, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  v5.trainSystem = trainSystem
  v5.nodeId = nodeId
  v5.isServer = isServer
  v5.isClient = isClient
  v5.state = RailroadCrossing.STATE_OPEN
  return v5
end
function RailroadCrossing:loadFromXML(xmlFile, key, components, i3dMappings)
  local v5 = xmlFile:getValue(key .. "#rootNode", nil, components, i3dMappings)
  self.rootNode = v5
  v5 = xmlFile:getValue(key .. ".activation#startDistance", 50)
  self.startDistance = v5
  v5 = xmlFile:getValue(key .. ".activation#endDistance", 50)
  self.endDistance = v5
  self.isActive = false
  self.splinePositionTime = 0
  self.doCloseCrossing = false
  self.gateDirection = 1
  self.gates = {}
  self.signals = {}
  self.trafficBlockers = {}
  self.trafficBlockersPending = {}
  self.aiNavigationBlockers = {}
  self.aiNavigationBlockersPending = {}
  self.pedestrianBlockers = {}
  self.pedestrianBlockersPending = {}
  self.samples = {}
  local v7 = string.format("%s.gates.gate", key)
  xmlFile:iterate(v7, function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#node", nil, u1, u2)
    if key ~= nil then
      local components = AnimCurve.new(linearInterpolatorTransRot)
      local v8 = getRotation(key)
      local i3dMappings, v5, v6 = i3dMappings:getValue(xmlFile .. "#startRot", {})
      local v11 = getTranslation(key)
      local v7, v8, v9 = v7:getValue(xmlFile .. "#startTrans", {})
      components:addKeyframe({x = v7, y = v8, z = v9, rx = i3dMappings, ry = v5, rz = v6, time = 0})
      setTranslation(key, v7, v8, v9)
      setRotation(key, i3dMappings, v5, v6)
      local v10, v11, v12 = v10:getValue(xmlFile .. "#endRot", {i3dMappings, v5, v6})
      v10, v11, v12 = v10:getValue(xmlFile .. "#endTrans", {v7, v8, v9})
      components:addKeyframe({x = v10, y = v11, z = v12, rx = v10, ry = v11, rz = v12, time = 1})
      v11 = v11:getValue(xmlFile .. "#duration", 3)
      v12 = v12:getValue(xmlFile .. "#closingOffset", 0)
      table.insert(u3.gates, {node = key, animCurve = components, duration = v11 * 1000, closingOffset = v12 * 1000, animTime = 0, currentOffset = 0})
    end
  end)
  v5 = v5:getValue("lightsProfile")
  local v8 = string.format("%s.signals.signal", key)
  xmlFile:iterate(v8, function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#node", nil, u1, u2)
    if key ~= nil then
      setVisibility(key, false)
      local i3dMappings = i3dMappings:getValue(xmlFile .. "#alternatingLights", false)
      local v7 = getNumOfChildren({node = key, alternatingLights = i3dMappings, lights = {}}.node)
      -- TODO: structure LOP_FORNPREP (pc 43, target 159)
      local v8 = getChildAt({node = key, alternatingLights = i3dMappings, lights = {}}.node, 0)
      v8 = getNumOfChildren({node = v8}.node)
      if 0 < v8 then
        v8 = getChildAt({node = v8}.node, 0)
        if u3 ~= GS_PROFILE_HIGH then
          -- if u3 ~= GS_PROFILE_VERY_HIGH then goto L92 end
        end
        local v9 = getLightColor(v7.realLight)
        v7.defaultColor = {}
        -- goto L101  (LOP_JUMP +9)
        setVisibility(v7.realLight, false)
        v7.realLight = nil
      end
      if components.alternatingLights and #components.lights % 2 == 0 then
        v8 = getHasClassId(v7.node, ClassIds.SHAPE)
        if v8 then
          setShaderParameter(v7.node, "blinkOffset", 0.5, 0, 0, 0, false)
        end
        if v7.realLight ~= nil then
          setLightColor(v7.realLight, v7.defaultColor[1] * 0.2, v7.defaultColor[2] * 0.2, v7.defaultColor[3] * 0.2)
        end
      end
      table.insert(components.lights, v7)
      -- TODO: structure LOP_FORNLOOP (pc 158, target 44)
      table.insert(u4.signals, components)
    end
  end)
  if self.isServer then
    if g_currentMission.trafficSystem ~= nil then
      v8 = string.format("%s.trafficBlockers.blocker", key)
      xmlFile:iterate(v8, function(self, xmlFile)
        local key = key:getValue(xmlFile .. "#node", nil, u1, u2)
        if key ~= nil then
          table.insert(u3.trafficBlockersPending, {blockerNode = key, blockerKey = xmlFile})
        end
      end)
    end
    if g_currentMission.aiSystem ~= nil then
      v8 = string.format("%s.aiNavigationBlockers.blocker", key)
      xmlFile:iterate(v8, function(self, xmlFile)
        local key = key:getValue(xmlFile .. "#node", nil, u1, u2)
        if key ~= nil then
          table.insert(u3.aiNavigationBlockersPending, {blockerNode = key, blockerKey = xmlFile})
        end
      end)
    end
  end
  if g_currentMission.pedestrianSystem ~= nil then
    v8 = string.format("%s.pedestrianBlockers.blocker", key)
    xmlFile:iterate(v8, function(self, xmlFile)
      local key = key:getValue(xmlFile .. "#node", nil, u1, u2)
      if key ~= nil then
        table.insert(u3.pedestrianBlockersPending, {blockerNode = key, blockerKey = xmlFile})
      end
    end)
  end
  if self.isClient then
    v7 = v7:loadSampleFromXML(xmlFile, key .. ".sounds", "crossing", g_currentMission.loadingMapBaseDirectory, components, 0, AudioGroup.ENVIRONMENT, i3dMappings, self)
    self.samples.crossing = v7
    self.isCrossingSamplePlaying = false
  end
  v6:addSplinePositionUpdateListener(self)
  return true
end
function RailroadCrossing:delete()
  if self.isClient then
    v1:deleteSample(self.samples.crossing)
    self.samples.crossing = nil
  end
  self:setBlockingPositionsState(false)
  v1:removeSplinePositionUpdateListener(self)
end
function RailroadCrossing:findBlockingPositions()
  self:findTrafficSystemBlockingPositions()
  self.findAiBlockersNextFrame = true
  self:findPedestrianSystemBlockingPositions()
end
function RailroadCrossing:findTrafficSystemBlockingPositions()
  if g_currentMission.trafficSystem ~= nil then
    for v5, v6 in ipairs(self.trafficBlockersPending) do
      local v9, v10, v11 = getWorldTranslation(v6.blockerNode)
      local v12, v13, v14 = localDirectionToWorld(v6.blockerNode, 0, 0, 1)
      local v15, v16 = findTrafficSystemBlockingPositionInformation(v1.trafficSystemId, v9, v10, v11, v12, v13, v14, RailroadCrossing.TRAFFIC_BLOCKING_NODE_MAX_DISTANCE)
      if v15 == -1 then
        local v20 = getName(v6.blockerNode)
        local v21 = getWorldTranslation(v6.blockerNode)
        Logging.warning(...)
      else
        table.insert(self.trafficBlockers, {blockerNode = v6.blockerNode, splineIndex = v15, splineTime = v16})
      end
    end
  end
  self.trafficBlockersPending = nil
end
function RailroadCrossing:findVehicleNavigationMapBlockingPositions()
  if g_currentMission.aiSystem ~= nil then
    for v5, v6 in ipairs(self.aiNavigationBlockersPending) do
      local v9, v10, v11 = getWorldTranslation(v6.blockerNode)
      local v12, v13, v14 = localDirectionToWorld(v6.blockerNode, 0, 0, 1)
      local v15, v16 = findVehicleNavigationMapBlockingPositionInformation(v1.navigationMap, v9, v10, v11, v12, v13, v14, RailroadCrossing.TRAFFIC_BLOCKING_NODE_MAX_DISTANCE)
      local v17 = entityExists(v15)
      if not v17 then
        local v20 = getName(v6.blockerNode)
        local v21 = getWorldTranslation(v6.blockerNode)
        Logging.warning(...)
      else
        table.insert(self.aiNavigationBlockers, {blockerNode = v6.blockerNode, splineId = v15, splineTime = v16})
      end
    end
  end
  self.aiNavigationBlockersPending = nil
end
function RailroadCrossing:findPedestrianSystemBlockingPositions()
  for v5, v6 in ipairs(self.pedestrianBlockersPending) do
    local v9, v10, v11 = getWorldTranslation(v6.blockerNode)
    local v12, v13, v14 = localDirectionToWorld(v6.blockerNode, 0, 0, 1)
    local v15, v16, v17 = findPedestrianSystemBlockingPositionInformation(v1.pedestrianSystemId, v9, v10, v11, v12, v13, v14, RailroadCrossing.TRAFFIC_BLOCKING_NODE_MAX_DISTANCE)
    if v15 == -1 then
      local v21 = getName(v6.blockerNode)
      local v22 = getWorldTranslation(v6.blockerNode)
      Logging.warning(...)
    else
      table.insert(self.pedestrianBlockers, {blockerNode = v6.blockerNode, splineIndex = v15, splineTime = v16, direction = v17})
    end
  end
  self.pedestrianBlockersPending = nil
end
function RailroadCrossing:setBlockingPositionsState(state)
  if g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.trafficSystemId ~= nil then
    for v8, v9 in ipairs(self.trafficBlockers) do
      setTrafficSystemBlockingPositionState(v2.trafficSystemId, v9.splineIndex, v9.splineTime, state)
    end
  end
  if v3 ~= nil and v3.navigationMap ~= nil then
    for v8, v9 in ipairs(self.aiNavigationBlockers) do
      setVehicleNavigationMapBlockingPositionState(v3.navigationMap, v9.splineId, v9.splineTime, state)
    end
  end
  if v4 ~= nil and v4.pedestrianSystemId ~= nil then
    for v8, v9 in ipairs(self.pedestrianBlockers) do
      setPedestrianSystemBlockingPositionState(v4.pedestrianSystemId, v9.splineIndex, v9.splineTime, v9.direction, state)
    end
  end
end
function RailroadCrossing:setSplineTimeByPosition(t, splineLength)
  local v3 = SplineUtil.getValidSplineTime(t)
  self.splinePositionTime = v3
  self.startTime = v3 - self.startDistance / splineLength
  self.endTime = v3 + self.endDistance / splineLength
end
function RailroadCrossing:update(dt)
  if self.findAiBlockersNextFrame then
    self:findVehicleNavigationMapBlockingPositions()
    self.findAiBlockersNextFrame = nil
  end
  if self.state ~= RailroadCrossing.STATE_CLOSING then
    -- if v0.state ~= RailroadCrossing.STATE_OPENING then goto L58 end
  end
  local isAnimDone = self:updateGates(dt, self.gateDirection)
  if isAnimDone then
    if self.state == RailroadCrossing.STATE_CLOSING then
      self.state = RailroadCrossing.STATE_CLOSED
    elseif self.state == RailroadCrossing.STATE_OPENING then
      self:finishOpenGates()
    end
  end
  if self.state ~= RailroadCrossing.STATE_OPEN then
    isAnimDone = getShaderTimeSec()
    local v5 = math.cos(7 * isAnimDone)
    local v3 = MathUtil.clamp(v5 + 0.2, 0, 1)
    local v6 = math.cos(7 * isAnimDone + math.pi)
    local v4 = MathUtil.clamp(v6 + 0.2, 0, 1)
    for v8, v9 in ipairs(self.signals) do
      for v13, v14 in ipairs(v9.lights) do
        if not (v14.realLight ~= nil) then
          continue
        end
        if v9.alternatingLights and v13 % 2 == 1 then
        end
        setLightColor(v14.realLight, v14.defaultColor[1] * v15, v14.defaultColor[2] * v15, v14.defaultColor[3] * v15)
      end
    end
  end
end
function RailroadCrossing:updateGates(dt, direction)
  for v7, v8 in ipairs(self.gates) do
    if v8.currentOffset == 0 then
      local v9 = MathUtil.clamp(v8.animTime + direction * dt / v8.duration, 0, 1)
      v8.animTime = v9
      local v9, v10, v11, v12, v13, v14 = v9:get(v8.animTime)
      setTranslation(v8.node, v9, v10, v11)
      setRotation(v8.node, v12, v13, v14)
      if v3 and v8.animTime ~= 0 and v8.animTime ~= 1 then
      end
    else
      v9 = math.max(v8.currentOffset - dt, 0)
      v8.currentOffset = v9
    end
  end
  return v3
end
function RailroadCrossing:startClosingGates()
  self.state = RailroadCrossing.STATE_CLOSING
  for v4, v5 in ipairs(self.signals) do
    setVisibility(v5.node, true)
  end
  for v4, v5 in ipairs(self.gates) do
    if not (v5.animTime == 0) then
      continue
    end
    v5.currentOffset = v5.closingOffset
  end
  self.gateDirection = 1
  if g_client ~= nil and not self.isCrossingSamplePlaying then
    dt:playSample(self.samples.crossing)
    self.isCrossingSamplePlaying = true
  end
  self:setBlockingPositionsState(true)
end
function RailroadCrossing:startOpeningGates()
  self.state = RailroadCrossing.STATE_OPENING
  self.gateDirection = -1
end
function RailroadCrossing:finishOpenGates()
  self.state = RailroadCrossing.STATE_OPEN
  for v4, v5 in ipairs(self.signals) do
    setVisibility(v5.node, false)
  end
  if g_client ~= nil and self.isCrossingSamplePlaying then
    dt:stopSample(self.samples.crossing)
    self.isCrossingSamplePlaying = false
  end
  self:setBlockingPositionsState(false)
end
function RailroadCrossing:onSplinePositionTimeUpdate(startTime, endTime)
  local v3 = SplineUtil.getValidSplineTime(startTime)
  v3 = SplineUtil.getValidSplineTime(endTime)
  if self.startTime < v3 then
    -- if v3 < v0.endTime then goto L30 end
  end
  if self.startTime < endTime and endTime >= self.endTime then
  end
  if v3 then
    if self.state ~= RailroadCrossing.STATE_OPEN then
      -- if v0.state ~= RailroadCrossing.STATE_OPENING then goto L70 end
    end
    self:startClosingGates()
    return
  end
  if self.state ~= RailroadCrossing.STATE_CLOSED then
    -- if v0.state ~= RailroadCrossing.STATE_CLOSING then goto L70 end
  end
  self:startOpeningGates()
end
function RailroadCrossing:debugSetDebugNodeState(dt)
  if self ~= nil then
    if self.blockedPosGizmo ~= nil then
      if RailroadCrossing.debugEnabled then
        isAnimDone:addPermanentElement(self.blockedPosGizmo)
      else
        isAnimDone:removePermanentElement(self.blockedPosGizmo)
      end
      if dt then
        local v4 = unpack(RailroadCrossing.debugColorRed)
        isAnimDone:setColor(...)
      else
        v4 = unpack(RailroadCrossing.debugColorGreen)
        isAnimDone:setColor(...)
      end
    end
    if self.spline ~= nil then
      setVisibility(self.spline, dt)
    end
  end
end
