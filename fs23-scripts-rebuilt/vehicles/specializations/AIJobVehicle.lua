-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/AIJobVehicleStateEvent.lua")
AIJobVehicle = {}
function AIJobVehicle.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AIVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Drivable, v0)
  end
  return v1
end
function AIJobVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AIJobVehicle")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ai.steeringNode#node", "Steering node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.ai.reverserNode#node", "Reverser node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.steeringSpeed", "Speed of steering", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.ai#supportsAIJobs", "If true vehicle supports ai jobs", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AIJobVehicle.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onAIJobStarted")
  SpecializationUtil.registerEvent(v0, "onAIJobFinished")
  SpecializationUtil.registerEvent(v0, "onAIJobVehicleBlock")
  SpecializationUtil.registerEvent(v0, "onAIJobVehicleContinue")
end
function AIJobVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getShowAIToggleActionEvent", AIJobVehicle.getShowAIToggleActionEvent)
  SpecializationUtil.registerFunction(vehicleType, "stopCurrentAIJob", AIJobVehicle.stopCurrentAIJob)
  SpecializationUtil.registerFunction(vehicleType, "skipCurrentTask", AIJobVehicle.skipCurrentTask)
  SpecializationUtil.registerFunction(vehicleType, "aiJobStarted", AIJobVehicle.aiJobStarted)
  SpecializationUtil.registerFunction(vehicleType, "aiJobFinished", AIJobVehicle.aiJobFinished)
  SpecializationUtil.registerFunction(vehicleType, "toggleAIVehicle", AIJobVehicle.toggleAIVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleAIVehicle", AIJobVehicle.getCanToggleAIVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getCanStartAIVehicle", AIJobVehicle.getCanStartAIVehicle)
  SpecializationUtil.registerFunction(vehicleType, "setAIMapHotspotBlinking", AIJobVehicle.setAIMapHotspotBlinking)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentHelper", AIJobVehicle.getCurrentHelper)
  SpecializationUtil.registerFunction(vehicleType, "aiBlock", AIJobVehicle.aiBlock)
  SpecializationUtil.registerFunction(vehicleType, "aiContinue", AIJobVehicle.aiContinue)
  SpecializationUtil.registerFunction(vehicleType, "getAIDirectionNode", AIJobVehicle.getAIDirectionNode)
  SpecializationUtil.registerFunction(vehicleType, "getAISteeringNode", AIJobVehicle.getAISteeringNode)
  SpecializationUtil.registerFunction(vehicleType, "getAIReverserNode", AIJobVehicle.getAIReverserNode)
  SpecializationUtil.registerFunction(vehicleType, "getAISteeringSpeed", AIJobVehicle.getAISteeringSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getAIJobFarmId", AIJobVehicle.getAIJobFarmId)
  SpecializationUtil.registerFunction(vehicleType, "getStartableAIJob", AIJobVehicle.getStartableAIJob)
  SpecializationUtil.registerFunction(vehicleType, "getHasStartableAIJob", AIJobVehicle.getHasStartableAIJob)
  SpecializationUtil.registerFunction(vehicleType, "getStartAIJobText", AIJobVehicle.getStartAIJobText)
  SpecializationUtil.registerFunction(vehicleType, "getJob", AIJobVehicle.getJob)
  SpecializationUtil.registerFunction(vehicleType, "getLastJob", AIJobVehicle.getLastJob)
end
function AIJobVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsVehicleControlledByPlayer", AIJobVehicle.getIsVehicleControlledByPlayer)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActive", AIJobVehicle.getIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIActive", AIJobVehicle.getIsAIActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowTireTracks", AIJobVehicle.getAllowTireTracks)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDeactivateOnLeave", AIJobVehicle.getDeactivateOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getStopMotorOnLeave", AIJobVehicle.getStopMotorOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDisableVehicleCharacterOnLeave", AIJobVehicle.getDisableVehicleCharacterOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFullName", AIJobVehicle.getFullName)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getActiveFarm", AIJobVehicle.getActiveFarm)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", AIJobVehicle.getIsMapHotspotVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getMapHotspot", AIJobVehicle.getMapHotspot)
end
function AIJobVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", AIJobVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", AIJobVehicle)
end
function AIJobVehicle:onLoad(savegame)
  self.spec_aiJobVehicle.actionEvents = {}
  self.spec_aiJobVehicle.job = nil
  self.spec_aiJobVehicle.lastJob = nil
  self.spec_aiJobVehicle.startedFarmId = nil
  local v4 = v4:getValue("vehicle.ai.steeringSpeed", 1)
  self.spec_aiJobVehicle.aiSteeringSpeed = v4 * 0.001
  local v3 = v3:getValue("vehicle.ai.steeringNode#node", nil, self.components, self.i3dMappings)
  self.spec_aiJobVehicle.steeringNode = v3
  v3 = v3:getValue("vehicle.ai.reverserNode#node", nil, self.components, self.i3dMappings)
  self.spec_aiJobVehicle.reverserNode = v3
  v3 = v3:getValue("vehicle.ai#supportsAIJobs", true)
  self.spec_aiJobVehicle.supportsAIJobs = v3
  self.spec_aiJobVehicle.texts = {}
  v4 = v4:getText("action_dismissEmployee")
  self.spec_aiJobVehicle.texts.dismissEmployee = v4
  v4 = v4:getText("action_openHelperMenu")
  self.spec_aiJobVehicle.texts.openHelperMenu = v4
  v4 = v4:getText("action_hireEmployee")
  self.spec_aiJobVehicle.texts.hireEmployee = v4
  if savegame ~= nil then
    local v5 = v5:getString(savegame.key .. ".aiJobVehicle.lastJob" .. "#type")
    local v6 = g_currentMission.aiJobTypeManager:getJobTypeIndexByName(v5)
    if v6 ~= nil then
      local v7 = g_currentMission.aiJobTypeManager:createJob(v6)
      if v7 ~= nil and v7.loadFromXMLFile ~= nil then
        v7:loadFromXMLFile(savegame.xmlFile, savegame.key .. ".aiJobVehicle.lastJob")
        self.spec_aiJobVehicle.lastJob = v7
      end
    end
  end
end
function AIJobVehicle:onDelete()
  if self.spec_aiJobVehicle.job ~= nil then
    self:stopCurrentAIJob()
  end
  if v1.mapAIHotspot ~= nil then
    v2:delete()
    v1.mapAIHotspot = nil
  end
end
function AIJobVehicle:onReadStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadInt32(streamId)
    local startedFarmId = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    local helperIndex = streamReadUInt8(streamId)
    local v6 = v6:getJobById(v3)
    self:aiJobStarted(v6, helperIndex, startedFarmId)
    return
  end
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadInt32(streamId)
    helperIndex = helperIndex:createJob(v3)
    self.spec_aiJobVehicle.lastJob = helperIndex
    helperIndex:readStream(streamId, connection)
  end
end
function AIJobVehicle:onWriteStream(streamId, connection)
  if self.spec_aiJobVehicle.job == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    streamWriteInt32(streamId, v3.job.jobId)
    streamWriteUIntN(streamId, v3.startedFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteUInt8(streamId, v3.currentHelper.index)
    return
  end
  if v3.lastJob == nil then
  end
  v4 = v4(v5, true)
  if v4 then
    v4 = v4:getJobTypeIndex(v3.lastJob)
    streamWriteInt32(streamId, v4)
    v5:writeStream(streamId, connection)
  end
end
function AIJobVehicle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsAIActive()
  if v5 then
    self:raiseActive()
  end
end
function AIJobVehicle.onUpdateTick(v0, v1, v2, v3, v4)
  AIJobVehicle.updateActionEvents(v0)
end
function AIJobVehicle:getShowAIToggleActionEvent()
  local v1 = self:getAIDirectionNode()
  if v1 == nil then
    return false
  end
  if g_currentMission.disableAIVehicle then
    return false
  end
  v1 = v1:getHasPlayerPermission("hireAssistant")
  if not v1 then
    return false
  end
  v1 = self:getIsAIActive()
  if not v1 then
    v1 = v1:getAILimitedReached()
    if v1 then
      return false
    end
  end
  v1 = v1:getIsRunning()
  if v1 then
    v1 = v1:getCanStartAI(self)
    if not v1 then
      return false
    end
  end
  return true
end
function AIJobVehicle:stopCurrentAIJob(aiMessage)
  if self.spec_aiJobVehicle.job ~= nil then
    v3:stopJob(self.spec_aiJobVehicle.job, aiMessage)
  end
end
function AIJobVehicle:skipCurrentTask()
  if self.spec_aiJobVehicle.job ~= nil then
    v2:skipCurrentTask(self.spec_aiJobVehicle.job)
  end
end
function AIJobVehicle:aiJobStarted(job, helperIndex, startedFarmId)
  local v5 = self:getIsAIActive()
  if not v5 then
    if self.isServer then
      local v7 = AIJobVehicleStateEvent.new(self, job, helperIndex, startedFarmId)
      v5:broadcastEvent(...)
      v5:addJobVehicle(self)
    end
    v4.job = job
    v4.lastJob = job
    v4.startedFarmId = startedFarmId
    v4.currentHelperIndex = helperIndex
    v5 = v5:getHelperByIndex(helperIndex)
    v4.currentHelper = v5
    v5:useHelper(v4.currentHelper)
    if self.isServer then
      v5:updateFarmStats(startedFarmId, "workersHired", 1)
    end
    if self.setRandomVehicleCharacter ~= nil then
      self:setRandomVehicleCharacter(v4.currentHelper)
    end
    if v4.mapAIHotspot == nil then
      v5 = AIHotspot.new()
      v4.mapAIHotspot = v5
      v5:setVehicle(self)
    end
    v5:setAIHelperName(v4.currentHelper.name)
    v5:addMapHotspot(v4.mapAIHotspot)
    if Platform.isMobile then
      self:updateMapHotspot()
    end
    SpecializationUtil.raiseEvent(self, "onAIJobStarted", job)
    self:requestActionEventUpdate()
    self:raiseActive()
  end
  v5:publish(MessageType.AI_VEHICLE_STATE_CHANGE, true, self)
end
function AIJobVehicle:aiJobFinished()
  local v2 = self:getIsAIActive()
  if v2 then
    if self.isServer then
      local v4 = AIJobVehicleStateEvent.new(self, nil, nil, nil)
      v2:broadcastEvent(...)
      v2:removeJobVehicle(self)
    end
    v2:releaseHelper(v1.currentHelper)
    v1.currentHelperIndex = nil
    v1.currentHelper = nil
    if self.isServer then
      v2:updateFarmStats(v1.startedFarmId, "workersHired", -1)
    end
    if self.restoreVehicleCharacter ~= nil then
      self:restoreVehicleCharacter()
    end
    if v1.mapAIHotspot ~= nil then
      v2:removeMapHotspot(v1.mapAIHotspot)
    end
    SpecializationUtil.raiseEvent(self, "onAIJobFinished", v1.job)
    v1.job = nil
    if Platform.isMobile then
      self:updateMapHotspot()
    end
    self:requestActionEventUpdate()
  end
  v2:publish(MessageType.AI_VEHICLE_STATE_CHANGE, false, self)
end
function AIJobVehicle:getIsVehicleControlledByPlayer(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  if self.spec_aiJobVehicle.job ~= nil then
  end
  return true
end
function AIJobVehicle:getIsInUse(superFunc, connection)
  local v3 = self:getIsAIActive()
  if v3 then
    return true
  end
  v3 = superFunc(self, connection)
  return v3
end
function AIJobVehicle:getIsActive(superFunc)
  local v2 = self:getIsAIActive()
  if v2 then
    return true
  end
  v2 = superFunc(self)
  return v2
end
function AIJobVehicle:getAIJobFarmId()
  return self.spec_aiJobVehicle.startedFarmId
end
function AIJobVehicle:getIsAIActive(superFunc)
  local v2 = superFunc(self)
  if not v2 and self.spec_aiJobVehicle.job == nil then
  end
  return v2
end
function AIJobVehicle.getStartableAIJob(v0)
  return nil
end
function AIJobVehicle.getHasStartableAIJob(v0)
  return false
end
function AIJobVehicle:getStartAIJobText()
  local hasJob = self:getHasStartableAIJob()
  if hasJob then
    return self.spec_aiJobVehicle.texts.hireEmployee
  end
  return v1.texts.openHelperMenu
end
function AIJobVehicle:getJob()
  return self.spec_aiJobVehicle.job
end
function AIJobVehicle:getLastJob()
  return self.spec_aiJobVehicle.lastJob
end
function AIJobVehicle:toggleAIVehicle()
  local v1 = self:getIsAIActive()
  if v1 then
    local v3 = AIMessageSuccessStoppedByUser.new()
    self:stopCurrentAIJob(...)
    return
  end
  v1 = self:getStartableAIJob()
  if v1 ~= nil then
    local v2 = v2:getServerConnection()
    local v6 = self:getOwnerFarmId()
    local v4 = AIJobStartRequestEvent.new(...)
    v2:sendEvent(...)
    return
  end
  v2 = v2:getIsRunning()
  if v2 then
    return
  end
  if Platform.isMobile then
    g_inGameMenu.showMap = true
    v2:changeScreen(nil, InGameMenu)
    v2:publish(MessageType.GUI_INGAME_OPEN_AI_SCREEN, self)
    v2 = v2:getIngameMap()
    v2:updateHotspotSorting()
    v3 = v3:getPlayerHotspot(v2.hotspotsSorted[true])
    v4:onClickHotspot(nil, v3)
    v4:onClickPagingAI()
    return
  end
  v2:showGui("InGameMenu")
  v2:publish(MessageType.GUI_INGAME_OPEN_AI_SCREEN, self)
end
function AIJobVehicle:getCanToggleAIVehicle()
  local v1 = self:getCanStartAIVehicle()
  if not v1 then
    v1 = self:getIsAIActive()
  end
  return v1
end
function AIJobVehicle:getCanStartAIVehicle()
  if g_currentMission.disableAIVehicle then
    return false
  end
  local v1 = self:getOwnerFarmId()
  if v1 == AccessHandler.EVERYONE then
    return false
  end
  if not self.spec_aiJobVehicle.supportsAIJobs then
    return false
  end
  v1 = self:getAIDirectionNode()
  if v1 == nil then
    return false
  end
  v1 = v1:getAILimitedReached()
  if v1 then
    return false
  end
  v1 = self:getIsAIActive()
  if v1 then
    return false
  end
  if self.isBroken then
    return false
  end
  return true
end
function AIJobVehicle:setAIMapHotspotBlinking(isBlinking)
  if self.spec_aiJobVehicle.mapAIHotspot ~= nil then
    v3:setBlinking(isBlinking)
  end
end
function AIJobVehicle:getMapHotspot(v1)
  local v3 = self:getIsAIActive()
  if v3 and self.spec_aiJobVehicle.mapAIHotspot ~= nil then
    return self.spec_aiJobVehicle.mapAIHotspot
  end
  v3 = v1(self)
  return v3
end
function AIJobVehicle:onSetBroken()
  local v1 = self:getIsAIActive()
  if v1 then
    local v3 = AIMessageErrorVehicleBroken.new()
    self:stopCurrentAIJob(...)
  end
end
function AIJobVehicle:getDeactivateOnLeave(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsAIActive()
  end
  return v2
end
function AIJobVehicle:getStopMotorOnLeave(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsAIActive()
  end
  return v2
end
function AIJobVehicle:getDisableVehicleCharacterOnLeave(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsAIActive()
  end
  return v2
end
function AIJobVehicle:getAllowTireTracks(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsAIActive()
  end
  return v2
end
function AIJobVehicle:getCurrentHelper()
  return self.spec_aiJobVehicle.currentHelper
end
function AIJobVehicle:getFullName(superFunc)
  local name = superFunc(self)
  local v3 = self:getIsAIActive()
  if v3 then
    v3 = v3:getText("ui_helper")
    local currentHelper = self:getCurrentHelper()
    if currentHelper ~= nil then
    end
  end
  return name
end
function AIJobVehicle:aiBlock()
  if self.isClient then
    local v2 = self:getAIJobFarmId()
    if g_currentMission.player.farmId == v2 then
      local currentHelper = self:getCurrentHelper()
      if currentHelper ~= nil then
      end
      local v4 = v4:getText("ai_messageErrorBlockedByObject")
      local v3 = string.format(v4, v2)
      v4:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_CRITICAL, v3)
    end
  end
  self:raiseAIEvent("onAIJobVehicleBlock", "onAIImplementJobVehicleBlock")
end
function AIJobVehicle:aiContinue()
  self:raiseAIEvent("onAIJobVehicleContinue", "onAIImplementJobVehicleContinue")
end
function AIJobVehicle:getAIDirectionNode()
  return self.components[1].node
end
function AIJobVehicle:getAISteeringNode()
  if not self.spec_aiJobVehicle.steeringNode then
    local v1 = self:getAIDirectionNode()
  end
  return v1
end
function AIJobVehicle:getAIReverserNode()
  return self.spec_aiJobVehicle.reverserNode
end
function AIJobVehicle:getAISteeringSpeed()
  return self.spec_aiJobVehicle.aiSteeringSpeed
end
function AIJobVehicle:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_aiJobVehicle.lastJob ~= nil then
    local v6 = v6:getJobTypeByIndex(self.spec_aiJobVehicle.lastJob.jobTypeIndex)
    xmlFile:setString(key .. ".lastJob#type", v6.name)
    v7:saveToXMLFile(xmlFile, key .. ".lastJob", usedModNames)
  end
end
function AIJobVehicle:saveStatsToXMLFile(xmlFile, key)
  local v6 = self:getIsAIActive()
  setXMLBool(...)
end
function AIJobVehicle:getActiveFarm(superFunc)
  local starter = self:getAIJobFarmId()
  if starter ~= nil then
    return starter
  end
  return superFunc(self)
end
function AIJobVehicle:getIsMapHotspotVisible(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  local v3 = self:getIsAIActive()
  return not v3
end
function AIJobVehicle:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_aiJobVehicle.actionEvents)
    if self.spec_aiJobVehicle.supportsAIJobs then
      local v4 = self:getIsActiveForInput(true, true)
      if v4 then
        local v4, v5 = self:addActionEvent(self.spec_aiJobVehicle.actionEvents, InputAction.TOGGLE_AI, self, AIJobVehicle.actionEventToggleAIState, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
        AIJobVehicle.updateActionEvents(self)
      end
    end
  end
end
function AIJobVehicle:actionEventToggleAIState(actionName, inputValue, callbackState, isAnalog)
  local v5 = v5:getHasPlayerPermission("hireAssistant")
  if v5 then
    self:toggleAIVehicle()
  end
end
function AIJobVehicle:updateActionEvents()
  if self.spec_aiJobVehicle.actionEvents[InputAction.TOGGLE_AI] ~= nil and self.isActiveForInputIgnoreSelectionIgnoreAI then
    local v3 = self:getShowAIToggleActionEvent()
    if v3 then
      v3 = self:getIsAIActive()
      if v3 then
        v3:setActionEventText(self.spec_aiJobVehicle.actionEvents[InputAction.TOGGLE_AI].actionEventId, self.spec_aiJobVehicle.texts.dismissEmployee)
        v3:setActionEventTextPriority(self.spec_aiJobVehicle.actionEvents[InputAction.TOGGLE_AI].actionEventId, GS_PRIO_HIGH)
      else
        v3 = self:getStartAIJobText()
        v4:setActionEventText(self.spec_aiJobVehicle.actionEvents[InputAction.TOGGLE_AI].actionEventId, v3)
        local v8 = self:getHasStartableAIJob()
        if v8 then
          -- if GS_PRIO_HIGH then goto L65 end
        end
        v4:setActionEventTextPriority(v6, GS_PRIO_NORMAL)
      end
      v3:setActionEventActive(v2.actionEventId, true)
      return
    end
    v3:setActionEventActive(v2.actionEventId, false)
  end
end
