-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/AIVehicleIsBlockedEvent.lua")
source("dataS/scripts/vehicles/specializations/events/AIFieldWorkerStateEvent.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategy.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyBaler.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyCollision.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyCombine.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyStraight.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyConveyor.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyStonePicker.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyVineyard.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyVineyardGroundTool.lua")
source("dataS/scripts/vehicles/ai/AIDriveStrategyVineyardHarvester.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategy.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyDefault.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb1.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb2.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb3.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyHalfCircle.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyDefaultReverse.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb1Reverse.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb2Reverse.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyBulb3Reverse.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyHalfCircleReverse.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyVineyard.lua")
source("dataS/scripts/vehicles/ai/AITurnStrategyVineyardBulb.lua")
AIFieldWorker = {TRAFFIC_COLLISION_BOX_FILENAME = "data/shared/ai/trafficCollision.i3d", TRAFFIC_COLLISION = 0, hiredHirables = {}, aiUpdateLowFrequencyDelay = 4, aiUpdateDelay = 2, aiUpdateDelayLowFps = 1, customDriveStrategies = {}}
function AIFieldWorker.registerCustomDriveStrategy(v0, v1)
  AIFieldWorker.customDriveStrategies[v0] = v1
end
function AIFieldWorker.deleteCollisionBox()
  if AIFieldWorker.TRAFFIC_COLLISION ~= 0 then
    delete(AIFieldWorker.TRAFFIC_COLLISION)
    AIFieldWorker.TRAFFIC_COLLISION = 0
  end
end
function AIFieldWorker.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(AIJobVehicle, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Drivable, specializations)
  end
  return v1
end
function AIFieldWorker.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AIFieldWorker")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.didNotMoveTimeout#value", "Did not move time out time", 5000)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.ai.didNotMoveTimeout#deactivated", "Did not move time out deactivated", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).aiFieldWorker#lastTurnDirection", "Last AI turn direction")
  Vehicle.registerStateChange("AI_START_LINE")
  Vehicle.registerStateChange("AI_END_LINE")
  v2:loadI3DFileAsync(AIFieldWorker.TRAFFIC_COLLISION_BOX_FILENAME, true, false, AIFieldWorker.onTrafficCollisionLoaded, nil, nil)
end
function AIFieldWorker.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerStart")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerActive")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerEnd")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerStartTurn")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerTurnProgress")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerEndTurn")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerBlock")
  SpecializationUtil.registerEvent(vehicleType, "onAIFieldWorkerContinue")
end
function AIFieldWorker.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getIsFieldWorkActive", AIFieldWorker.getIsFieldWorkActive)
  SpecializationUtil.registerFunction(vehicleType, "getAICollisionTriggers", AIFieldWorker.getAICollisionTriggers)
  SpecializationUtil.registerFunction(vehicleType, "startFieldWorker", AIFieldWorker.startFieldWorker)
  SpecializationUtil.registerFunction(vehicleType, "stopFieldWorker", AIFieldWorker.stopFieldWorker)
  SpecializationUtil.registerFunction(vehicleType, "getDirectionSnapAngle", AIFieldWorker.getDirectionSnapAngle)
  SpecializationUtil.registerFunction(vehicleType, "getAINeedsTrafficCollisionBox", AIFieldWorker.getAINeedsTrafficCollisionBox)
  SpecializationUtil.registerFunction(vehicleType, "clearAIDebugTexts", AIFieldWorker.clearAIDebugTexts)
  SpecializationUtil.registerFunction(vehicleType, "addAIDebugText", AIFieldWorker.addAIDebugText)
  SpecializationUtil.registerFunction(vehicleType, "clearAIDebugLines", AIFieldWorker.clearAIDebugLines)
  SpecializationUtil.registerFunction(vehicleType, "addAIDebugLine", AIFieldWorker.addAIDebugLine)
  SpecializationUtil.registerFunction(vehicleType, "updateAIFieldWorker", AIFieldWorker.updateAIFieldWorker)
  SpecializationUtil.registerFunction(vehicleType, "updateAIFieldWorkerImplementData", AIFieldWorker.updateAIFieldWorkerImplementData)
  SpecializationUtil.registerFunction(vehicleType, "updateAIFieldWorkerDriveStrategies", AIFieldWorker.updateAIFieldWorkerDriveStrategies)
  SpecializationUtil.registerFunction(vehicleType, "updateAIFieldWorkerLowFrequency", AIFieldWorker.updateAIFieldWorkerLowFrequency)
  SpecializationUtil.registerFunction(vehicleType, "aiFieldWorkerStartTurn", AIFieldWorker.aiFieldWorkerStartTurn)
  SpecializationUtil.registerFunction(vehicleType, "aiFieldWorkerTurnProgress", AIFieldWorker.aiFieldWorkerTurnProgress)
  SpecializationUtil.registerFunction(vehicleType, "aiFieldWorkerEndTurn", AIFieldWorker.aiFieldWorkerEndTurn)
  SpecializationUtil.registerFunction(vehicleType, "getCanAIFieldWorkerContinueWork", AIFieldWorker.getCanAIFieldWorkerContinueWork)
  SpecializationUtil.registerFunction(vehicleType, "getAIFieldWorkerIsTurning", AIFieldWorker.getAIFieldWorkerIsTurning)
  SpecializationUtil.registerFunction(vehicleType, "getAIFieldWorkerLastTurnDirection", AIFieldWorker.getAIFieldWorkerLastTurnDirection)
  SpecializationUtil.registerFunction(vehicleType, "getAttachedAIImplements", AIFieldWorker.getAttachedAIImplements)
  SpecializationUtil.registerFunction(vehicleType, "getCanStartFieldWork", AIFieldWorker.getCanStartFieldWork)
end
function AIFieldWorker.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "aiBlock", AIFieldWorker.aiBlock)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "aiContinue", AIFieldWorker.aiContinue)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getStartableAIJob", AIFieldWorker.getStartableAIJob)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getHasStartableAIJob", AIFieldWorker.getHasStartableAIJob)
end
function AIFieldWorker.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIFieldWorker)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AIFieldWorker)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", AIFieldWorker)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIFieldWorker)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", AIFieldWorker)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", AIFieldWorker)
end
function AIFieldWorker:onLoad(savegame)
  self.spec_aiFieldWorker.aiImplementList = {}
  self.spec_aiFieldWorker.aiImplementDataDirtyFlag = true
  self.spec_aiFieldWorker.aiDriveParams = {valid = false}
  self.spec_aiFieldWorker.aiUpdateLowFrequencyDt = 0
  self.spec_aiFieldWorker.aiUpdateDt = 0
  self.spec_aiFieldWorker.driveStrategies = {}
  self.spec_aiFieldWorker.aiTrafficCollision = nil
  self.spec_aiFieldWorker.aiTrafficCollisionTranslation = {0, 0, 10}
  self.spec_aiFieldWorker.debugTexts = {}
  self.spec_aiFieldWorker.debugLines = {}
  local v3 = v3:createJob(AIJobType.FIELDWORK)
  self.spec_aiFieldWorker.fieldJob = v3
  v3 = v3:getValue("vehicle.ai.didNotMoveTimeout#value", 5000)
  self.spec_aiFieldWorker.didNotMoveTimeout = v3
  v3 = v3:getValue("vehicle.ai.didNotMoveTimeout#deactivated")
  if v3 then
    self.spec_aiFieldWorker.didNotMoveTimeout = math.huge
  end
  v2.didNotMoveTimer = v2.didNotMoveTimeout
  v2.isActive = false
  v2.lastTurnDirection = false
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", AIFieldWorker)
  end
  if savegame ~= nil and not savegame.resetVehicles then
    v3 = v3:getValue(savegame.key .. ".aiFieldWorker#lastTurnDirection", v2.lastTurnDirection)
    v2.lastTurnDirection = v3
  end
end
function AIFieldWorker:onDelete()
  if self.spec_aiFieldWorker.aiTrafficCollision ~= nil then
    local v2 = entityExists(self.spec_aiFieldWorker.aiTrafficCollision)
    if v2 then
      delete(self.spec_aiFieldWorker.aiTrafficCollision)
      self.spec_aiFieldWorker.aiTrafficCollision = nil
    end
  end
end
function AIFieldWorker:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_aiFieldWorker.lastTurnDirection ~= nil then
    xmlFile:setValue(key .. "#lastTurnDirection", self.spec_aiFieldWorker.lastTurnDirection)
  end
end
function AIFieldWorker:onReadStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    self:startFieldWorker()
  end
end
function AIFieldWorker:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_aiFieldWorker.isActive)
end
function AIFieldWorker:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_aiFieldWorker.checkImplementDirection then
    self.spec_aiFieldWorker.checkImplementDirection = false
    local v7 = self:getAttachedAIImplements()
    for v9, v10 in pairs(...) do
      local v11 = v11:getAINeedsRootAlignment()
      if not v11 then
        continue
      end
      local v12 = self:getAIDirectionNode()
      v11 = Utils.getYRotationBetweenNodes(v12, v10.object.components[1].node, self.yRotationOffset, v10.object.yRotationOffset, false)
      v12 = math.abs(v11)
      if not (math.pi / 2 < v12) then
        continue
      end
      local v14 = AIMessageErrorImplementWrongWay.new()
      self:stopCurrentAIJob(...)
      return
    end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI and self.isActiveForInputIgnoreSelectionIgnoreAI then
    if 0 < #v5.debugTexts then
      for v9, v10 in pairs(v5.debugTexts) do
        renderText(0.7, 0.87 - 0.02 * v9, 0.02, v10)
      end
    end
    if 0 < #v5.debugLines then
      for v9, v10 in pairs(v5.debugLines) do
        drawDebugLine(v10.s[1], v10.s[2], v10.s[3], v10.c[1], v10.c[2], v10.c[3], v10.e[1], v10.e[2], v10.e[3], v10.c[1], v10.c[2], v10.c[3])
      end
    end
  end
  if v5.aiImplementDataDirtyFlag then
    v5.aiImplementDataDirtyFlag = false
    self:updateAIFieldWorkerImplementData()
  end
  v6 = self:getIsFieldWorkActive()
  if v6 and self.isServer then
    if v5.aiTrafficCollision ~= nil then
      v6 = self:getAIFieldWorkerIsTurning()
      if not v6 then
        v8 = unpack(v5.aiTrafficCollisionTranslation)
        v6, v7, v8 = localToWorld(...)
        setTranslation(v5.aiTrafficCollision, v6, v7, v8)
        v11 = localRotationToWorld(self.components[1].node, 0, 0, 0)
        setRotation(...)
      end
    end
    if v5.driveStrategies ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 217, target 226)
      v5.driveStrategies[1]:update(dt)
      -- TODO: structure LOP_FORNLOOP (pc 225, target 218)
    end
    for v10 in pairs(AIFieldWorker.hiredHirables) do
      if not (self ~= v10) then
        break
      end
    end
    v5.aiUpdateLowFrequencyDt = v5.aiUpdateLowFrequencyDt + dt
    if (g_updateLoopIndex + v6) % AIFieldWorker.aiUpdateLowFrequencyDelay == 0 then
      self:updateAIFieldWorkerLowFrequency(v5.aiUpdateLowFrequencyDt)
      v5.aiUpdateLowFrequencyDt = 0
    end
    v5.aiUpdateDt = v5.aiUpdateDt + dt
    if 25 < dt then
      -- if AIFieldWorker.aiUpdateDelayLowFps then goto L280 end
    end
    if (g_updateLoopIndex + v6) % AIFieldWorker.aiUpdateDelay == 0 then
      self:updateAIFieldWorker(v5.aiUpdateDt)
      v5.aiUpdateDt = 0
    end
  end
end
function AIFieldWorker:updateAIFieldWorker(dt)
  if self.spec_aiFieldWorker.aiDriveParams.valid then
    local v9 = self:getAISteeringNode()
    local v8, v9, v10 = worldToLocal(v9, self.spec_aiFieldWorker.aiDriveParams.tX, self.spec_aiFieldWorker.aiDriveParams.tY, self.spec_aiFieldWorker.aiDriveParams.tZ)
    if not self.spec_aiFieldWorker.aiDriveParams.moveForwards and self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.aiRevereserNode ~= nil then
      local v11, v12, v13 = worldToLocal(self.spec_articulatedAxis.aiRevereserNode, self.spec_aiFieldWorker.aiDriveParams.tX, self.spec_aiFieldWorker.aiDriveParams.tY, self.spec_aiFieldWorker.aiDriveParams.tZ)
    end
    if not v3 then
      v11 = self:getAIReverserNode()
      if v11 ~= nil then
        v12 = self:getAIReverserNode()
        v11, v12, v13 = worldToLocal(v12, v4, v5, v6)
      end
    end
    if v7 == 0 then
    end
    AIVehicleUtil.driveToPoint(self, dt, 1, true, v3, v8, v10, v7)
  end
end
function AIFieldWorker:getIsFieldWorkActive()
  return self.spec_aiFieldWorker.isActive
end
function AIFieldWorker:getStartableAIJob(superFunc)
  local job = superFunc(self)
  if job == nil then
    self:updateAIFieldWorkerImplementData()
    local v3 = self:getCanStartFieldWork()
    if v3 then
      self.spec_aiFieldWorker.fieldJob:applyCurrentState(self, g_currentMission, g_currentMission.player.farmId, true)
      self.spec_aiFieldWorker.fieldJob:setValues()
      local v5 = self.spec_aiFieldWorker.fieldJob:validate(false)
      if v5 then
      end
    end
  end
  return job
end
function AIFieldWorker:getHasStartableAIJob(superFunc)
  return self:getCanStartFieldWork()
end
function AIFieldWorker:getCanStartFieldWork()
  if self.spec_aiFieldWorker.isActive then
    return false
  end
  if 0 < #v1.aiImplementList then
    return true
  end
  return false
end
function AIFieldWorker:startFieldWorker()
  self.spec_aiFieldWorker.isActive = true
  if self.isServer then
    self:updateAIFieldWorkerImplementData()
    self:updateAIFieldWorkerDriveStrategies()
    self.spec_aiFieldWorker.checkImplementDirection = true
  end
  AIFieldWorker.hiredHirables[self] = self
  self:raiseAIEvent("onAIFieldWorkerStart", "onAIImplementStart")
  local v2 = self:getAINeedsTrafficCollisionBox()
  if v2 and AIFieldWorker.TRAFFIC_COLLISION ~= nil and AIFieldWorker.TRAFFIC_COLLISION ~= 0 and v1.aiTrafficCollision == nil then
    v2 = clone(AIFieldWorker.TRAFFIC_COLLISION, true, false, true)
    v1.aiTrafficCollision = v2
  end
end
function AIFieldWorker:stopFieldWorker()
  AIFieldWorker.hiredHirables[self] = nil
  self.spec_aiFieldWorker.aiDriveParams.valid = false
  self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF, true)
  if self.isServer then
    WheelsUtil.updateWheelsPhysics(self, 0, self.spec_aiFieldWorker.lastSpeedReal * self.spec_aiFieldWorker.movingDirection, 0, true, true)
    if self.spec_aiFieldWorker.driveStrategies ~= nil and 0 < #self.spec_aiFieldWorker.driveStrategies then
      -- TODO: structure LOP_FORNPREP (pc 50, target 64)
      v5:delete()
      table.remove(self.spec_aiFieldWorker.driveStrategies, #self.spec_aiFieldWorker.driveStrategies)
      -- TODO: structure LOP_FORNLOOP (pc 63, target 51)
      self.spec_aiFieldWorker.driveStrategies = {}
    end
  end
  local v2 = self:getAINeedsTrafficCollisionBox()
  if v2 then
    setTranslation(v1.aiTrafficCollision, 0, -1000, 0)
  end
  if self.brake ~= nil then
    self:brake(1)
  end
  if self.rootVehicle.actionController ~= nil then
    self.rootVehicle.actionController:resetCurrentState()
  end
  self:raiseAIEvent("onAIFieldWorkerEnd", "onAIImplementEnd")
  v1.isTurning = false
  v1.lastTurnStrategy = nil
  v1.isActive = false
end
function AIFieldWorker.getAICollisionTriggers(v0, v1)
end
function AIFieldWorker.getDirectionSnapAngle(v0)
  return 0
end
function AIFieldWorker:getAINeedsTrafficCollisionBox()
  return self.isServer
end
function AIFieldWorker:clearAIDebugTexts()
  -- TODO: structure LOP_FORNPREP (pc 7, target 15)
  self.spec_aiFieldWorker.debugTexts[#self.spec_aiFieldWorker.debugTexts] = nil
  -- TODO: structure LOP_FORNLOOP (pc 14, target 8)
end
function AIFieldWorker:addAIDebugText(text)
  table.insert(self.spec_aiFieldWorker.debugTexts, text)
end
function AIFieldWorker:clearAIDebugLines()
  -- TODO: structure LOP_FORNPREP (pc 7, target 15)
  self.spec_aiFieldWorker.debugLines[#self.spec_aiFieldWorker.debugLines] = nil
  -- TODO: structure LOP_FORNLOOP (pc 14, target 8)
end
function AIFieldWorker:addAIDebugLine(s, e, c)
  table.insert(self.spec_aiFieldWorker.debugLines, {s = s, e = e, c = c})
end
function AIFieldWorker:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH then
    -- if v1 ~= Vehicle.STATE_CHANGE_DETACH then goto L13 end
  end
  self.spec_aiFieldWorker.aiImplementDataDirtyFlag = true
end
function AIFieldWorker:updateAIFieldWorkerImplementData()
  self.spec_aiFieldWorker.aiImplementList = {}
  self:addVehicleToAIImplementList(self.spec_aiFieldWorker.aiImplementList)
end
function AIFieldWorker:updateAIFieldWorkerDriveStrategies()
  if 0 < #self.spec_aiFieldWorker.aiImplementList then
    if self.spec_aiFieldWorker.driveStrategies ~= nil and 0 < #self.spec_aiFieldWorker.driveStrategies then
      -- TODO: structure LOP_FORNPREP (pc 23, target 37)
      v5:delete()
      table.remove(self.spec_aiFieldWorker.driveStrategies, #self.spec_aiFieldWorker.driveStrategies)
      -- TODO: structure LOP_FORNLOOP (pc 36, target 24)
      self.spec_aiFieldWorker.driveStrategies = {}
    end
    local v2 = AIDriveStrategyCollision.new()
    table.insert(v1.driveStrategies, v2)
    for v7, v8 in pairs(AIFieldWorker.customDriveStrategies) do
      for v12, v13 in pairs(self.rootVehicle.childVehicles) do
        local v14, v15 = v7(v13)
        if v14 and v15 == false then
        end
        if not v14 then
          continue
        end
        local v18 = v8.new()
        table.insert(...)
        break
      end
    end
    if v3 then
      v4 = AIDriveStrategyStraight.new()
      table.insert(v1.driveStrategies, v4)
    end
    -- TODO: structure LOP_FORNPREP (pc 108, target 117)
    v7:setAIVehicle(self)
    -- TODO: structure LOP_FORNLOOP (pc 116, target 109)
  end
end
function AIFieldWorker:updateAIFieldWorkerLowFrequency(dt)
  self:clearAIDebugTexts()
  self:clearAIDebugLines()
  local v3 = self:getIsFieldWorkActive()
  if v3 then
    if self.spec_aiFieldWorker.driveStrategies ~= nil and 0 < #self.spec_aiFieldWorker.driveStrategies then
      local v4 = self:getAISteeringNode()
      local v3, v4, v5 = getWorldTranslation(...)
      -- TODO: structure LOP_FORNPREP (pc 39, target 76)
      local v16, v17, v18, v19, v20 = self.spec_aiFieldWorker.driveStrategies[1]:getDriveData(dt, v3, v4, v5)
      if not v19 then
      end
      if not v10 then
      end
      v16 = math.min(v17, v18)
      if v6 == nil then
        v16 = self:getIsFieldWorkActive()
        if v16 then
          -- TODO: structure LOP_FORNLOOP (pc 75, target 40)
        end
      end
      if v6 == nil then
        local v12 = self:getIsFieldWorkActive()
        if v12 then
          local v14 = AIMessageSuccessFinishedJob.new()
          self:stopCurrentAIJob(...)
        end
      end
      v12 = self:getIsFieldWorkActive()
      if not v12 then
        return
      end
      v14 = self:getAIFieldWorkerIsTurning()
      if v14 then
      end
      v17 = math.min(1, v11 / v13)
      v14 = math.max(v12, v10 * v17)
      local v15, v16 = self:getSpeedLimit(true)
      v17 = math.min(v10, v14, v15)
      v19 = self:getCruiseControlMaxSpeed()
      v17 = math.min(...)
      if VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v19 = string.format("===> maxSpeed = %.2f", v17)
        self:addAIDebugText(...)
      end
      if v10 == 0 then
      end
      v2.aiDriveParams.moveForwards = v8
      v2.aiDriveParams.tX = v6
      v2.aiDriveParams.tY = v4
      v2.aiDriveParams.tZ = v7
      v2.aiDriveParams.maxSpeed = v10
      v2.aiDriveParams.valid = true
      if true then
        v18 = self:getLastSpeed()
        -- if v18 >= 0.5 then goto L192 end
        v2.didNotMoveTimer = v2.didNotMoveTimer - dt
      else
        v2.didNotMoveTimer = v2.didNotMoveTimeout
      end
      if v2.didNotMoveTimer < 0 then
        v18 = self:getAIFieldWorkerIsTurning()
        if v18 then
          -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x0 -> L221
          v18:skipTurnSegment()
        else
          v20 = AIMessageErrorBlockedByObject.new()
          self:stopCurrentAIJob(...)
        end
        v2.didNotMoveTimer = v2.didNotMoveTimeout
      end
    end
    self:raiseAIEvent("onAIFieldWorkerActive", "onAIImplementActive")
  end
end
function AIFieldWorker:aiFieldWorkerStartTurn(left, turnStrategy)
  self.spec_aiFieldWorker.isTurning = true
  self.spec_aiFieldWorker.lastTurnDirection = left
  self.spec_aiFieldWorker.lastTurnStrategy = turnStrategy
  -- TODO: structure LOP_FORNPREP (pc 14, target 28)
  if self.spec_aiFieldWorker.driveStrategies[1].setTurnData ~= nil then
    self.spec_aiFieldWorker.driveStrategies[1]:setTurnData(left, turnStrategy)
  end
  -- TODO: structure LOP_FORNLOOP (pc 27, target 15)
  self:raiseAIEvent("onAIFieldWorkerStartTurn", "onAIImplementStartTurn", left, turnStrategy)
end
function AIFieldWorker:aiFieldWorkerTurnProgress(progress, left)
  self:raiseAIEvent("onAIFieldWorkerTurnProgress", "onAIImplementTurnProgress", progress, left)
end
function AIFieldWorker:aiFieldWorkerEndTurn(left)
  self.spec_aiFieldWorker.isTurning = false
  self.spec_aiFieldWorker.lastTurnStrategy = nil
  -- TODO: structure LOP_FORNPREP (pc 13, target 25)
  if self.spec_aiFieldWorker.driveStrategies[1].setTurnData ~= nil then
    self.spec_aiFieldWorker.driveStrategies[1]:setTurnData()
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 14)
  self:raiseAIEvent("onAIFieldWorkerEndTurn", "onAIImplementEndTurn", left)
end
function AIFieldWorker:aiBlock(superFunc)
  superFunc(self)
  if self.spec_aiFieldWorker.isActive and not self.spec_aiFieldWorker.isTurning then
    self:raiseAIEvent("onAIFieldWorkerBlock", "onAIImplementBlock")
  end
end
function AIFieldWorker:aiContinue(superFunc)
  superFunc(self)
  if self.spec_aiFieldWorker.isActive and not self.spec_aiFieldWorker.isTurning then
    self:raiseAIEvent("onAIFieldWorkerContinue", "onAIImplementContinue")
  end
end
function AIFieldWorker:getCanAIFieldWorkerContinueWork()
  local v2 = self:getAttachedAIImplements()
  for v4, v5 in ipairs(...) do
    local v6, v7, v8 = v6:getCanAIImplementContinueWork()
    if not not v6 then
      continue
    end
    return false, v7, v8
  end
  v1 = SpecializationUtil.hasSpecialization(AIImplement, self.specializations)
  if v1 then
    v1, v2, v3 = self:getCanAIImplementContinueWork()
    if not v1 then
      return false, v2, v3
    end
  end
  return true, false
end
function AIFieldWorker:getAIFieldWorkerIsTurning()
  return self.spec_aiFieldWorker.isTurning
end
function AIFieldWorker:getAIFieldWorkerLastTurnDirection()
  return self.spec_aiFieldWorker.lastTurnDirection
end
function AIFieldWorker:getAttachedAIImplements()
  return self.spec_aiFieldWorker.aiImplementList
end
function AIFieldWorker.onTrafficCollisionLoaded(_, i3dNode)
  if i3dNode ~= 0 then
    local collision = getChildAt(i3dNode, 0)
    local v4 = getRootNode()
    link(v4, collision)
    AIFieldWorker.TRAFFIC_COLLISION = collision
    delete(i3dNode)
  end
end
