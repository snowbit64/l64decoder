-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDrivable = {STATES = {}}
AIDrivable.STATES[AgentState.DRIVING] = "driving"
AIDrivable.STATES[AgentState.BLOCKED] = "blocked"
AIDrivable.STATES[AgentState.PLANNING] = "planning"
AIDrivable.STATES[AgentState.NOT_REACHABLE] = "not_reachable"
AIDrivable.STATES[AgentState.TARGET_REACHED] = "target_reached"
AIDrivable.TRAILER_LIMIT = 4
function AIDrivable.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(AIVehicle, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AIJobVehicle, specializations)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(Drivable, specializations)
    end
  end
  return v1
end
function AIDrivable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AI")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#width", "AI vehicle width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#length", "AI vehicle length")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#lengthOffset", "AI vehicle length offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#height", "AI vehicle height")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#frontOffset", "AI vehicle front offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#maxBrakeAcceleration", "AI vehicle max brake acceleration")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#maxCentripedalAcceleration", "AI vehicle max centripedal acceleration")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.agent#maxTurningRadius", "Max. turning radius (overwrites value detected from ackermann steering)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AIDrivable.postInitSpecialization()
  local v2 = v2:getConfigurations()
  for v4, v5 in pairs(...) do
    local v6 = v6:getConfigurationAttribute(v4, "xmlKey")
    if v6 ~= nil then
    else
    end
    local v7 = string.format("vehicle%s.%sConfigurations", v6, v4)
    local v8 = string.format("%s.%sConfiguration(?)", v7, v4)
    v0:setXMLSharedRegistration("configAIAgent", v8)
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#width", "ai width of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#length", "ai length of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#height", "ai height of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#lengthOffset", "length offset")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#frontOffset", "front offset")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#maxBrakeAcceleration", "AI vehicle max brake acceleration")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#maxCentripedalAcceleration", "AI vehicle max centripedal acceleration")
    v0:register(XMLValueType.FLOAT, v8 .. ".aiAgent#maxTurningRadius", "Max. turning radius (overwrites value detected from ackermann steering)")
    v0:setXMLSharedRegistration()
  end
end
function AIDrivable.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onAIDrivablePrepare")
  SpecializationUtil.registerEvent(vehicleType, "onAIDriveableStart")
  SpecializationUtil.registerEvent(vehicleType, "onAIDriveableActive")
  SpecializationUtil.registerEvent(vehicleType, "onAIDriveableEnd")
end
function AIDrivable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "consoleCommandSetTurnRadius", AIDrivable.consoleCommandSetTurnRadius)
  SpecializationUtil.registerFunction(vehicleType, "consoleCommandMove", AIDrivable.consoleCommandMove)
  SpecializationUtil.registerFunction(vehicleType, "consoleCommandClearPath", AIDrivable.consoleCommandClearPath)
  SpecializationUtil.registerFunction(vehicleType, "createAgent", AIDrivable.createAgent)
  SpecializationUtil.registerFunction(vehicleType, "deleteAgent", AIDrivable.deleteAgent)
  SpecializationUtil.registerFunction(vehicleType, "setAITarget", AIDrivable.setAITarget)
  SpecializationUtil.registerFunction(vehicleType, "unsetAITarget", AIDrivable.unsetAITarget)
  SpecializationUtil.registerFunction(vehicleType, "reachedAITarget", AIDrivable.reachedAITarget)
  SpecializationUtil.registerFunction(vehicleType, "getAIRootNode", AIDrivable.getAIRootNode)
  SpecializationUtil.registerFunction(vehicleType, "getAIAllowsBackwards", AIDrivable.getAIAllowsBackwards)
  SpecializationUtil.registerFunction(vehicleType, "drawDebugAIAgent", AIDrivable.drawDebugAIAgent)
  SpecializationUtil.registerFunction(vehicleType, "debugGetAgentHasSpaceAt", AIDrivable.debugGetAgentHasSpaceAt)
  SpecializationUtil.registerFunction(vehicleType, "loadAgentInfoFromXML", AIDrivable.loadAgentInfoFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getAIAgentSize", AIDrivable.getAIAgentSize)
  SpecializationUtil.registerFunction(vehicleType, "getAIAgentMaxBrakeAcceleration", AIDrivable.getAIAgentMaxBrakeAcceleration)
  SpecializationUtil.registerFunction(vehicleType, "updateAIAgentAttachments", AIDrivable.updateAIAgentAttachments)
  SpecializationUtil.registerFunction(vehicleType, "addAIAgentAttachment", AIDrivable.addAIAgentAttachment)
  SpecializationUtil.registerFunction(vehicleType, "startNewAIAgentAttachmentChain", AIDrivable.startNewAIAgentAttachmentChain)
  SpecializationUtil.registerFunction(vehicleType, "updateAIAgentAttachmentOffsetData", AIDrivable.updateAIAgentAttachmentOffsetData)
  SpecializationUtil.registerFunction(vehicleType, "updateAIAgentPoseData", AIDrivable.updateAIAgentPoseData)
  SpecializationUtil.registerFunction(vehicleType, "prepareForAIDriving", AIDrivable.prepareForAIDriving)
  SpecializationUtil.registerFunction(vehicleType, "getAITurningRadius", AIDrivable.getAITurningRadius)
end
function AIDrivable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanHaveAIVehicleObstacle", AIDrivable.getCanHaveAIVehicleObstacle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIReadyToDrive", AIDrivable.getIsAIReadyToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIPreparingToDrive", AIDrivable.getIsAIPreparingToDrive)
end
function AIDrivable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AIDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AIDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", AIDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", AIDrivable)
end
function AIDrivable:onLoad(savegame)
  self.spec_aiDrivable.agentInfo = {}
  self:loadAgentInfoFromXML(self.xmlFile, self.spec_aiDrivable.agentInfo)
  self.spec_aiDrivable.maxSpeed = math.huge
  self.spec_aiDrivable.isRunning = false
  self.spec_aiDrivable.useManualDriving = false
  self.spec_aiDrivable.lastState = nil
  self.spec_aiDrivable.lastIsBlocked = false
  self.spec_aiDrivable.lastMaxSpeed = 0
  self.spec_aiDrivable.stuckTime = 0
  self.spec_aiDrivable.agentId = nil
  self.spec_aiDrivable.targetX = nil
  self.spec_aiDrivable.targetY = nil
  self.spec_aiDrivable.targetZ = nil
  self.spec_aiDrivable.targetDirX = nil
  self.spec_aiDrivable.targetDirY = nil
  self.spec_aiDrivable.targetDirZ = nil
  self.spec_aiDrivable.attachments = {}
  self.spec_aiDrivable.attachmentChains = {}
  self.spec_aiDrivable.attachmentChainIndex = 1
  self.spec_aiDrivable.attachmentsTrailerOffsetData = {}
  self.spec_aiDrivable.attachmentsMaxWidth = 0
  self.spec_aiDrivable.attachmentsMaxHeight = 0
  self.spec_aiDrivable.attachmentsMaxLengthOffsetPos = 0
  self.spec_aiDrivable.attachmentsMaxLengthOffsetNeg = 0
  self.spec_aiDrivable.poseData = {}
  self.spec_aiDrivable.vehicleObstacleId = nil
  self.spec_aiDrivable.debugVehicle = nil
  local v3 = DebugCube.new()
  self.spec_aiDrivable.debugSizeBox = v3
  v3:setColor(0, 1, 1)
  v3 = DebugGizmo.new()
  self.spec_aiDrivable.debugFrontMarker = v3
  self.spec_aiDrivable.debugDump = nil
end
function AIDrivable:onPostLoad()
  local aiRootNode = self:getAIRootNode()
  self.spec_aiDrivable.attacherJointOffsets = {}
  if self.getAttacherJoints ~= nil then
    local v4 = self:getAttacherJoints()
    for v6, v7 in ipairs(...) do
      local v9, v10, v11 = localDirectionToLocal(v7.jointTransform, aiRootNode, 0, 0, 1)
      local v12, v13, v14 = localDirectionToLocal(v7.jointTransform, aiRootNode, 0, 1, 0)
      local v15, v16, v17 = localToLocal(v7.jointTransform, aiRootNode, 0, 0, 0)
      table.insert(v1.attacherJointOffsets, {x = v15, y = v16, z = v17, xDir = v9, yDir = v10, zDir = v11, xUp = v12, yUp = v13, zUp = v14})
    end
  end
end
function AIDrivable:onDelete()
end
function AIDrivable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if self.spec_aiDrivable.isRunning then
      if self.spec_aiDrivable.lastIsBlocked then
        local v7 = self:getLastSpeed()
        if v7 >= 5 then
        end
      end
      local v8 = math.abs(v5.lastMaxSpeed)
      if 0 < v8 then
        v8 = self:getLastSpeed()
        if v8 >= 1 then
        end
      end
      if not v7 then
        -- if not v6 then goto L45 end
      end
      v5.stuckTime = v5.stuckTime + dt
      -- goto L48  (LOP_JUMP +3)
      v5.stuckTime = 0
      if 5000 >= v5.stuckTime then
      end
      local v9 = self:getAIRootNode()
      local v10, v11, v12 = getWorldTranslation(v9)
      local v13 = MathUtil.vector2Length(v10 - v5.targetX, v12 - v5.targetZ)
      v5.distanceToTarget = v13
      local v16 = self:getCruiseControlSpeed()
      local v14 = math.min(...)
      if v5.useManualDriving then
        local v15, v16, v17 = worldToLocal(v9, v5.targetX, v5.targetY, v5.targetZ)
        AIVehicleUtil.driveToPoint(self, dt, 1, true, true, v15, v17, v14, false)
        v5.lastMaxSpeed = v14
        -- if v5.distanceToTarget >= 0.5 then goto L234 end
        self:reachedAITarget()
      else
        v15, v16, v17 = localDirectionToWorld(v9, 0, 0, 1)
        self:updateAIAgentPoseData()
        local v21 = math.abs(self.lastSpeedReal * self.movingDirection * 1000)
        local v18, v19, v20 = getVehicleNavigationAgentNextCurvature(...)
        if v5.debugDump ~= nil then
          v21:addData(dt, v10, v11, v12, v15, v16, v17, self.lastSpeedReal * self.movingDirection * 1000, v18, v14, v20)
        end
        if v20 == AgentState.DRIVING then
          v21 = math.min(v19 * 3.6, v14)
          AIVehicleUtil.driveAlongCurvature(self, dt, v18, v21, 1)
          -- cmp-jump LOP_JUMPXEQKN R14 aux=0x80000032 -> L230
        elseif v20 == AgentState.PLANNING then
          self:brake(1)
        else
          if v20 == AgentState.BLOCKED then
            self:brake(1)
          elseif v20 == AgentState.TARGET_REACHED then
            self:reachedAITarget()
          else
            if v20 == AgentState.NOT_REACHABLE then
              local v23 = AIMessageErrorNotReachable.new()
              self:stopCurrentAIJob(...)
            end
          end
        end
        v5.lastState = v20
        v5.lastMaxSpeed = v14
      end
      if v5.debugVehicle ~= nil then
        v15:update(dt)
      end
      if v8 then
        -- if v5.lastIsBlocked then goto L262 end
        v17 = AIVehicleIsBlockedEvent.new(self, true)
        v15:broadcastEvent(v17, true, nil, self)
      elseif not v8 and v5.lastIsBlocked then
        v17 = AIVehicleIsBlockedEvent.new(self, false)
        v15:broadcastEvent(v17, true, nil, self)
      end
      v5.lastIsBlocked = v8
      SpecializationUtil.raiseEvent(self, "onAIDriveableActive")
    end
    if v5.vehicleObstacleId ~= nil then
      v7 = self:getAIAgentPoses(self.lastSpeedReal * 1000)
      v8:setVehiclObstaclePose(v5.vehicleObstacleId, self.lastSpeedReal * 1000, v7)
    end
  end
end
function AIDrivable:createAgent(helperIndex)
  if self.isServer then
    self:updateAIAgentAttachments()
    local isSelected = isSelected:getNavigationMap()
    local v6, v7, v8, v9 = self:getAIAgentSize()
    local maxBrakeAcceleration = self:getAIAgentMaxBrakeAcceleration()
    if not self.spec_aiDrivable.agentInfo.maxTurningRadius then
    end
    local v12 = self:getAITurningRadius(v14)
    local allowBackwards = self:getAIAllowsBackwards()
    local v14 = createVehicleNavigationAgent(isSelected, v12, v12, allowBackwards, v6, v7, v8, v9, maxBrakeAcceleration, v11, isActiveForInputIgnoreSelection)
    isActiveForInput.agentId = v14
    self:setAIVehicleObstacleStateDirty()
    if g_currentMission.aiSystem.debugEnabled then
      if isActiveForInput.debugVehicle ~= nil then
        v14:delete()
      end
      local v17 = math.random()
      local v18 = math.random()
      local v19 = math.random()
      v14 = AIDebugVehicle.new(self, {})
      isActiveForInput.debugVehicle = v14
      if isActiveForInput.debugDump ~= nil then
        v14:delete()
      end
      v14 = AIDebugDump.new(self, isActiveForInput.agentId)
      isActiveForInput.debugDump = v14
      v14:startRecording(v12, allowBackwards, v6, v7, v8, v9, maxBrakeAcceleration, v11)
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      enableVehicleNavigationAgentDebugRendering(isActiveForInput.agentId, true)
    end
  end
end
function AIDrivable:deleteAgent()
  self.spec_aiDrivable.isRunning = false
  self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF, true)
  if self.spec_aiDrivable.debugDump ~= nil then
    isActiveForInput:delete()
    self.spec_aiDrivable.debugDump = nil
  end
  if dt.agentId ~= nil then
    delete(dt.agentId)
    dt.agentId = nil
  end
  self:setAIVehicleObstacleStateDirty()
end
function AIDrivable:setAITarget(task, x, y, z, dirX, dirY, dirZ, maxSpeed, useManualDriving)
  local aiRootNode = self:getAIRootNode()
  local v12, v13, v14 = getWorldTranslation(aiRootNode)
  local v15, v16, v17 = localDirectionToWorld(aiRootNode, 0, 0, 1)
  local v18 = Utils.getNoNil(useManualDriving, false)
  self.spec_aiDrivable.useManualDriving = v18
  self.spec_aiDrivable.isRunning = true
  self.spec_aiDrivable.task = task
  if not maxSpeed then
  end
  v10.maxSpeed = v18
  v10.targetX = x
  v10.targetY = y
  v10.targetZ = z
  v10.targetDirX = dirX or 0
  v10.targetDirY = dirY
  v10.targetDirZ = dirZ or 0
  v18 = MathUtil.vector2Length(v12 - x, v14 - z)
  v10.distanceToTarget = v18
  if not v10.useManualDriving and self.isServer then
    setVehicleNavigationAgentTarget(v10.agentId, x, y, z, dirX, dirY, dirZ)
  end
  if v10.debugVehicle ~= nil then
    v18:setTarget(x, y, z, dirX, dirY, dirZ)
  end
  if v10.debugDump ~= nil then
    v18:setTarget(x, y, z, dirX, dirY, dirZ, v12, v13, v14, v15, v16, v17, v10.maxSpeed)
  end
  SpecializationUtil.raiseEvent(self, "onAIDriveableStart")
end
function AIDrivable:reachedAITarget()
  if self.isServer and self.spec_aiDrivable.task ~= nil then
    self.spec_aiDrivable.task:onTargetReached()
  end
end
function AIDrivable:unsetAITarget()
  self.spec_aiDrivable.isRunning = false
  self.spec_aiDrivable.task = nil
  self.spec_aiDrivable.useManualDriving = false
  self:brake(1)
  self:stopVehicle()
  self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF, true)
  SpecializationUtil.raiseEvent(self, "onAIDriveableEnd")
end
function AIDrivable:getAIRootNode()
  return self.components[1].node
end
function AIDrivable.getAIAllowsBackwards(v0)
  return false
end
function AIDrivable.onEnterVehicle(v0, dt)
  if dt then
    addConsoleCommand("gsAISetTurnRadius", "Set Turn radius", "consoleCommandSetTurnRadius", v0)
    addConsoleCommand("gsAIMoveVehicle", "Moves vehicles", "consoleCommandMove", v0)
    addConsoleCommand("gsAIClearPath", "Clears debug path", "consoleCommandClearPath", v0)
  end
end
function AIDrivable.onLeaveVehicle(v0, dt)
  if dt then
    removeConsoleCommand("gsAISetTurnRadius")
    removeConsoleCommand("gsAIMoveVehicle")
    removeConsoleCommand("gsAIClearPath")
  end
end
function AIDrivable:getIsAIReadyToDrive(superFunc)
  for v5, v6 in ipairs(self.rootVehicle.childVehicles) do
    if not (v6 ~= self) then
      continue
    end
    if not (v6.getIsAIReadyToDrive ~= nil) then
      continue
    end
    local v7 = v6:getIsAIReadyToDrive()
    if not not v7 then
      continue
    end
    return false, v6
  end
  isActiveForInput = superFunc(self)
  return isActiveForInput
end
function AIDrivable:getIsAIPreparingToDrive(superFunc)
  for v5, v6 in ipairs(self.rootVehicle.childVehicles) do
    if not (v6 ~= self) then
      continue
    end
    if not (v6.getIsAIPreparingToDrive ~= nil) then
      continue
    end
    local v7 = v6:getIsAIPreparingToDrive()
    if not v7 then
      continue
    end
    return true
  end
  isActiveForInput = superFunc(self)
  return isActiveForInput
end
function AIDrivable:drawDebugAIAgent()
  local aiRootNode = self:getAIRootNode()
  local isActiveForInputIgnoreSelection, isSelected, v5, v6, v7 = self:getAIAgentSize()
  v8:createWithNode(aiRootNode, isActiveForInputIgnoreSelection * 0.5, v7 * 0.5, isSelected * 0.5, 0, v7 * 0.5, v5)
  v8:draw()
  local v8, v9, v10 = localToWorld(aiRootNode, 0, 0, v6)
  local v11, v12, v13 = localDirectionToWorld(aiRootNode, 0, 0, 1)
  local v14, v15, v16 = localDirectionToWorld(aiRootNode, 0, 1, 0)
  local v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, 0, v10)
  v18:createWithWorldPosAndDir(v8, v18 + 0.05, v10, v11, v12, v13, v14, v15, v16, "FrontMarker", false, nil, 3)
  v18:draw()
  local v18, v19, v20 = getWorldTranslation(aiRootNode)
  if self.spec_aiDrivable.isRunning then
    if self.spec_aiDrivable.useManualDriving then
      local v22 = string.format("Distance: %.2f", self.spec_aiDrivable.distanceToTarget)
    else
    end
    Utils.renderTextAtWorldPosition(v18, v19 + 4, v20, v21, 0.015, 0, {1, 1, 1, 1})
  end
  if dt.debugVehicle ~= nil then
    v21:draw(v19 + 0.1)
  end
  local v21, v22, v23 = localToWorld(aiRootNode, 0, 0.5, 0)
  local v25 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v21, 0, v23)
  local v25, v26, v27 = localToWorld(aiRootNode, 10, 0.5, 0)
  local v28, v29, v30 = localToWorld(aiRootNode, -10, 0.5, 0)
  drawDebugLine(v21, v25 + 0.3, v23, 1, 0, 0, v25, v25 + 0.3, v27, 1, 0, 0)
  drawDebugLine(v21, v25 + 0.3, v23, 0, 1, 0, v28, v25 + 0.3, v30, 0, 1, 0)
  local v31, v32 = MathUtil.vector2Normalize(v25 - v21, v27 - v23)
  local currentTurnRadius = self:getTurningRadiusByRotTime(self.rotatedTime)
  local minRadius = self:getAITurningRadius(self.maxTurningRadius)
  if 0 <= self.rotatedTime then
  else
  end
  local v36 = self:getSteeringRotTimeByCurvature(v39 / currentTurnRadius * v41)
  local v37 = string.format("ReferenceRadius: %.3fm\nMinRadius: %.3fm\nCalc Radius: %.3f\nRotatedTime: %.3f\nRevTime: %.3f", currentTurnRadius, v33, minRadius, self.rotatedTime, v36)
  local v43 = getCorrectTextSize(0.012)
  Utils.renderTextAtWorldPosition(v21, v24 + 5, v23, v37, v43, 0)
  for v42, v43 in ipairs(self.spec_wheels.wheels) do
    if v43.rotSpeed == 0 then
      if not (self.spec_articulatedAxis ~= nil) then
        continue
      end
      if not (self.spec_articulatedAxis.componentJoint ~= nil) then
        continue
      end
    end
    local v44, v45, v46 = localToWorld(v43.repr, 0, 0, 0)
    local v47, v48, v49 = localDirectionToWorld(v43.driveNode, 1, 0, 0)
    drawDebugLine(v44, v24, v46, 1, 0, 0, v44 + v47 * 10, v24, v46 + v49 * 10, 1, 0, 0)
    drawDebugLine(v44, v24, v46, 0, 1, 0, v44 + v47 * -10, v24, v46 + v49 * -10, 0, 1, 0)
  end
  if v38.steeringCenterNode ~= nil then
    DebugUtil.drawDebugNode(v38.steeringCenterNode, "SCN", false, nil)
  end
  v39 = MathUtil.sign(self.rotatedTime)
  DebugUtil.drawDebugGizmoAtWorldPos(v21 + v39 * v31 * currentTurnRadius, v24, v23 + v39 * v32 * currentTurnRadius, v31, 0, v32, 0, 1, 0, "X", false, nil, 3)
end
function AIDrivable:debugGetAgentHasSpaceAt(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6, v7)
  if VehicleDebug.state ~= VehicleDebug.DEBUG_AI and g_currentMission.aiSystem and not g_currentMission.aiSystem.splinesVisible then
  end
  if not v8.debugElementsGroups then
  end
  v8.debugElementsGroups = v11
  if v8.debugElementsGroups[v7] ~= nil then
    for v14, v15 in ipairs(v8.debugElementsGroups[v7]) do
      v16:removePermanentElement(v15)
      v15:delete()
    end
  end
  v8.debugElementsGroups[v7] = {}
  v15 = MathUtil.transform(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6, 0, 1, 0, -(v9.width / 2 + 0.3), 0, -(v9.length / 2 + 0.3) - v9.lengthOffset)
  local v16 = MathUtil.transform(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6, 0, 1, 0, -(v9.width / 2 + 0.3), 0, v9.length / 2 + 0.3 - v9.lengthOffset)
  local v17 = MathUtil.transform(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6, 0, 1, 0, v9.width / 2 + 0.3, 0, -(v9.length / 2 + 0.3) - v9.lengthOffset)
  local v18 = MathUtil.transform(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6, 0, 1, 0, v9.width / 2 + 0.3, 0, v9.length / 2 + 0.3 - v9.lengthOffset)
  for v18, v19 in ipairs({{}, {}, {}, {}}) do
    local v23, v24 = getVehicleNavigationMapCostAtWorldPos(g_currentMission.aiSystem.navigationMap, v19[1], v19[2], v19[3])
    if v24 then
    end
    if not v10 then
      continue
    end
    local v25 = DebugPoint.new()
    v25 = v25:createWithWorldPos(v20, v21, v22, true, false)
    v25 = v25:setColor(0, 1, 0, 0.8)
    if v24 then
      v25:setColor(1, 0, 0, 1)
    end
    v26:addPermanentElement(v25)
    table.insert(v8.debugElementsGroups[v7], v25)
  end
  if v10 then
    v15 = string.format("%s\n%s\nagentId %d\nagentWidth %.3f\nagentLength %.3f\nagentLengthOffset %.3f", v7, self.configFileName, v8.agentId, v9.width, v9.length, v9.lengthOffset)
    v16 = DebugText.new()
    v16 = v16:createWithWorldPos(dt, isActiveForInput, isActiveForInputIgnoreSelection, v15, 0.2)
    v16 = v16:setColor(0, 1, 0, 1)
    if v14 then
      v16:setColor(1, 0, 0, 1)
    end
    v17:addPermanentElement(v16)
    table.insert(v8.debugElementsGroups[v7], v16)
  end
  return not v14
end
function AIDrivable:loadAgentInfoFromXML(xmlFile, agent)
  local isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#width", Vehicle.DEFAULT_SIZE.width)
  agent.width = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#length", Vehicle.DEFAULT_SIZE.length)
  agent.length = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#height", Vehicle.DEFAULT_SIZE.height)
  agent.height = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#lengthOffset", Vehicle.DEFAULT_SIZE.lengthOffset)
  agent.lengthOffset = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#frontOffset", 3)
  agent.frontOffset = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#maxBrakeAcceleration", 5)
  agent.maxBrakeAcceleration = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#maxCentripedalAcceleration", 1)
  agent.maxCentripedalAcceleration = isActiveForInputIgnoreSelection
  isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.ai.agent" .. "#maxTurningRadius")
  agent.maxTurningRadius = isActiveForInputIgnoreSelection
  for v6, v7 in pairs(self.configurations) do
    local v8 = v8:getConfigurationAttribute(v6, "xmlKey")
    if v8 ~= nil then
    else
    end
    local v9 = string.format("vehicle%s.%sConfigurations.%sConfiguration(%d).aiAgent", v8, v6, v6, v7 - 1)
    local v12 = xmlFile:getValue(v9 .. "#width", 0)
    local v10 = math.max(...)
    agent.width = v10
    v12 = xmlFile:getValue(v9 .. "#length", 0)
    v10 = math.max(...)
    agent.length = v10
    v12 = xmlFile:getValue(v9 .. "#height", 0)
    v10 = math.max(...)
    agent.height = v10
    v10 = xmlFile:getValue(v9 .. "#lengthOffset", agent.lengthOffset)
    agent.lengthOffset = v10
    v10 = xmlFile:getValue(v9 .. "#frontOffset", agent.frontOffset)
    agent.frontOffset = v10
    local v11 = xmlFile:getValue(v9 .. "#maxBrakeAcceleration", agent.maxBrakeAcceleration)
    v10 = math.min(...)
    agent.maxBrakeAcceleration = v10
    v11 = xmlFile:getValue(v9 .. "#maxCentripedalAcceleration", agent.maxCentripedalAcceleration)
    v10 = math.min(...)
    agent.maxCentripedalAcceleration = v10
    v10 = xmlFile:getValue(v9 .. "#maxTurningRadius", agent.maxTurningRadius)
    agent.maxTurningRadius = v10
  end
end
function AIDrivable:getAIAgentSize()
  local isActiveForInputIgnoreSelection = math.max(self.spec_aiDrivable.agentInfo.width, self.spec_aiDrivable.attachmentsMaxWidth)
  local isSelected = math.max(self.spec_aiDrivable.agentInfo.height, self.spec_aiDrivable.attachmentsMaxHeight)
  return isActiveForInputIgnoreSelection, self.spec_aiDrivable.agentInfo.length + self.spec_aiDrivable.attachmentsMaxLengthOffsetPos - self.spec_aiDrivable.attachmentsMaxLengthOffsetNeg, self.spec_aiDrivable.agentInfo.lengthOffset + self.spec_aiDrivable.attachmentsMaxLengthOffsetPos * 0.5 + self.spec_aiDrivable.attachmentsMaxLengthOffsetNeg * 0.5, self.spec_aiDrivable.agentInfo.frontOffset, isSelected
end
function AIDrivable:getAIAgentMaxBrakeAcceleration()
  return self.spec_aiDrivable.agentInfo.maxBrakeAcceleration
end
function AIDrivable:updateAIAgentAttachments()
  self.spec_aiDrivable.attachments = {}
  self.spec_aiDrivable.attachmentChains = {}
  self.spec_aiDrivable.attachmentChainIndex = 1
  self.spec_aiDrivable.attachmentsTrailerOffsetData = {}
  self.spec_aiDrivable.attachmentsMaxWidth = 0
  self.spec_aiDrivable.attachmentsMaxHeight = 0
  self.spec_aiDrivable.attachmentsMaxLengthOffsetPos = 0
  self.spec_aiDrivable.attachmentsMaxLengthOffsetNeg = 0
  self:collectAIAgentAttachments(self)
  self:updateAIAgentAttachmentOffsetData()
  self:updateAIAgentPoseData()
end
function AIDrivable:addAIAgentAttachment(attachmentData, level)
  local isSelected = math.max(self.spec_aiDrivable.attachmentsMaxWidth, attachmentData.width)
  self.spec_aiDrivable.attachmentsMaxWidth = isSelected
  isSelected = math.max(self.spec_aiDrivable.attachmentsMaxHeight, attachmentData.height)
  self.spec_aiDrivable.attachmentsMaxHeight = isSelected
  attachmentData.level = level
  if self.spec_aiDrivable.attachmentChains[self.spec_aiDrivable.attachmentChainIndex] == nil then
    self.spec_aiDrivable.attachmentChains[self.spec_aiDrivable.attachmentChainIndex] = {}
  end
  table.insert(isActiveForInputIgnoreSelection.attachments, attachmentData)
  table.insert(isActiveForInputIgnoreSelection.attachmentChains[isActiveForInputIgnoreSelection.attachmentChainIndex], attachmentData)
end
function AIDrivable:startNewAIAgentAttachmentChain()
  if self.spec_aiDrivable.attachmentChains[self.spec_aiDrivable.attachmentChainIndex] ~= nil then
    self.spec_aiDrivable.attachmentChainIndex = self.spec_aiDrivable.attachmentChainIndex + 1
  end
end
function AIDrivable:updateAIAgentAttachmentOffsetData()
  local isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5 = self:getAIAgentSize()
  -- TODO: structure LOP_FORNPREP (pc 11, target 226)
  for v17 = 1, #self.spec_aiDrivable.attachmentChains[1] do
    if v10[v17].rotCenterNode ~= nil then
      -- if not v11 then goto L134 end
      -- if v6 >= AIDrivable.TRAILER_LIMIT then goto L224 end
      if not v10[v17].jointNode then
      end
      if (v18.attacherVehicleJointNode or v19) ~= nil and v19 ~= nil then
        local v21, v22, v23 = getWorldTranslation(v18.attacherVehicleJointNode or v19)
        local v24, v25, v26 = localToWorld(v13, 0, 0, -v14)
        local v28 = MathUtil.vector2Length(v21 - v24, v23 - v26)
        local v28, v29, v30 = getWorldTranslation(v19)
        v28, v29, v30 = getWorldTranslation(v18.rotCenterNode)
        v28 = MathUtil.vector2Length(v28 - v28, v30 - v30)
        table.insert(dt.attachmentsTrailerOffsetData, -v28)
        table.insert(dt.attachmentsTrailerOffsetData, v28)
        table.insert(dt.attachmentsTrailerOffsetData, v18.lengthOffset + isActiveForInputIgnoreSelection * 0.5 - v18.length * 0.5)
        table.insert(dt.attachmentsTrailerOffsetData, 0)
      end
    elseif v12 then
      if 0 < v6 then
      end
      if v18.rotCenterNode == nil then
        local v19 = self:getAIRootNode()
        local v20, v21, v22 = localToLocal(v18.rootNode, v19, 0, 0, v18.length * 0.5)
        v23, v24, v25 = localToLocal(v18.rootNode, v19, 0, 0, -v18.length * 0.5)
        v28 = math.min(0, v22 - -dt.agentInfo.length * 0.5 + dt.agentInfo.lengthOffset, v25 - -dt.agentInfo.length * 0.5 + dt.agentInfo.lengthOffset)
        v29 = math.max(0, v22 - dt.agentInfo.length * 0.5 + dt.agentInfo.lengthOffset, v25 - dt.agentInfo.length * 0.5 + dt.agentInfo.lengthOffset)
        v30 = math.max(dt.attachmentsMaxLengthOffsetPos, v29)
        dt.attachmentsMaxLengthOffsetPos = v30
        v30 = math.min(dt.attachmentsMaxLengthOffsetNeg, v28)
        dt.attachmentsMaxLengthOffsetNeg = v30
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 224, target 27)
  end
end
function AIDrivable:updateAIAgentPoseData()
  local isActiveForInput = self:getAIRootNode()
  local v6, v7, v8 = getWorldTranslation(isActiveForInput)
  self.spec_aiDrivable.poseData[1] = v6
  self.spec_aiDrivable.poseData[2] = v7
  self.spec_aiDrivable.poseData[3] = v8
  v6, v7, v8 = localDirectionToWorld(isActiveForInput, 0, 0, 1)
  self.spec_aiDrivable.poseData[4] = v6
  self.spec_aiDrivable.poseData[5] = v7
  self.spec_aiDrivable.poseData[6] = v8
  -- TODO: structure LOP_FORNPREP (pc 41, target 108)
  for v12 = 1, #self.spec_aiDrivable.attachmentChains[1] do
    if v8[v12].rotCenterNode ~= nil then
      -- if not v9 then goto L102 end
      -- if v3 >= AIDrivable.TRAILER_LIMIT then goto L106 end
      local v20, v21, v22 = getWorldTranslation(v8[v12].rotCenterNode)
      dt.poseData[isSelected + 1] = v20
      dt.poseData[isSelected + 2] = v21
      dt.poseData[isSelected + 3] = v22
      v20, v21, v22 = localDirectionToWorld(v8[v12].rotCenterNode, 0, 0, 1)
      dt.poseData[isSelected + 4] = v20
      dt.poseData[isSelected + 5] = v21
      dt.poseData[isSelected + 6] = v22
    elseif 0 < isActiveForInputIgnoreSelection then
    end
    -- TODO: structure LOP_FORNLOOP (pc 106, target 50)
  end
  while true do
    if not (isSelected < #dt.poseData) then
      break
    end
    table.remove(dt.poseData, #dt.poseData)
  end
end
function AIDrivable:prepareForAIDriving()
  self:raiseAIEvent("onAIDrivablePrepare", "onAIImplementPrepare")
end
function AIDrivable.getAITurningRadius(v0, dt)
  return dt
end
function AIDrivable:getCanHaveAIVehicleObstacle(superFunc)
  if self.spec_aiDrivable.agentId ~= nil then
    return false
  end
  return superFunc(self)
end
function AIDrivable:consoleCommandClearPath()
  if self.spec_aiDrivable.debugVehicle ~= nil then
    isActiveForInput:clear()
  end
  local isSelected = self:getName()
  return string.format(...)
end
function AIDrivable:consoleCommandSetTurnRadius(turnRadius)
  local isActiveForInput = tonumber(turnRadius)
  isActiveForInput = self:getSteeringRotTimeByCurvature(1 / (isActiveForInput or 10))
  if 0 < isActiveForInput then
  else
  end
  local isSelected = self:getSteeringDirection()
  self.spec_drivable.axisSide = isSelected * isActiveForInputIgnoreSelection
end
function AIDrivable:consoleCommandMove(distance)
  local attachedVehicles = self:getChildVehicles()
  for v7, v8 in ipairs(attachedVehicles) do
    v8:removeFromPhysics()
    table.insert(isActiveForInput, v8)
  end
  isSelected = self:getAIRootNode()
  v5, v6, v7 = localDirectionToWorld(isSelected, 1, 0, 0)
  local currentTurnRadius = self:getTurningRadiusByRotTime(self.rotatedTime)
  local gizmo = DebugGizmo.new()
  local v13, v14, v15 = localToWorld(isSelected, currentTurnRadius, 0.05, 0)
  gizmo:createWithWorldPosAndDir(v13, v14, v15, 0, 0, 1, 0, 1, 0, "", false, nil)
  v16:addPermanentElement(gizmo)
  local v16 = self:getSteeringRotTimeByCurvature(1 / (-currentTurnRadius + distance))
  self.rotatedTime = v16
  if self.rotatedTime < 0 then
    local v19 = self:getSteeringDirection()
    self.spec_wheels.axisSide = self.rotatedTime / -self.maxRotTime / v19
  else
    v19 = self:getSteeringDirection()
    self.spec_wheels.axisSide = self.rotatedTime / self.minRotTime / v19
  end
  for v19, v20 in ipairs(isActiveForInput) do
    for v24, v25 in ipairs(v20.components) do
      local v26, v27, v28 = getWorldTranslation(v25.node)
      setWorldTranslation(v25.node, v26 + v8, v27 + v9, v28 + v10)
    end
  end
  for v19, v20 in ipairs(isActiveForInput) do
    v20:addToPhysics()
  end
end
