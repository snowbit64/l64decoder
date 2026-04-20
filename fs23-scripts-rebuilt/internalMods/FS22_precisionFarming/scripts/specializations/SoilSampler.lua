-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoilSampler = {MOD_NAME = g_currentModName, SPEC_NAME = g_currentModName .. ".soilSampler", SEND_NUM_BITS = 9, SAMPLING_OCTAGON = {{0.33, 0, -1, -0.33, 0, -1, -0.33, 0, -0.33}, {1, 0, 0.33, 1, 0, -0.33, 0.33, 0, -0.33}, {-0.33, 0, 1, 0.33, 0, 1, 0.33, 0, 0.33}, {-1, 0, -0.33, -1, 0, 0.33, -0.33, 0, 0.33}, {-0.33, 0, 1, -0.33, 0, -0.33, 0.33, 0, 0.33}, {1, 0, 0.33, -0.33, 0, 0.33, 0.33, 0, -0.33}}}
function SoilSampler.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
end
function SoilSampler.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SoilSampler")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.soilSampler#node", "Sampling Node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler#radius", "Sampling radius", 10)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.soilSampler#actionNameTake", "Take sample input action name", "IMPLEMENT_EXTRA")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.soilSampler#actionNameSend", "Send sample input action name", "IMPLEMENT_EXTRA3")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.soilSampler#animationName", "Sampling animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler#animationSpeed", "Sampling animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler#foldMinLimit", "Fold min. limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler#foldMaxLimit", "Fold max. limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.soilSampler.samplesAnimation#name", "Samples animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler.samplesAnimation#speed", "Samples animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.soilSampler.samplesAnimation#minSamples", "Min. samples", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.soilSampler.samplesAnimation#maxSamples", "Max. samples", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.soilSampler.visualSamples#updateTime", "Update time", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.soilSampler.visualSamples.visualSample(?)#node", "Visual sample node")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)." .. SoilSampler.SPEC_NAME .. "#numCollectedSamples", "Num collected samples")
end
function SoilSampler.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "startSoilSampling", SoilSampler.startSoilSampling)
  SpecializationUtil.registerFunction(vehicleType, "setNumCollectedSoilSamples", SoilSampler.setNumCollectedSoilSamples)
  SpecializationUtil.registerFunction(vehicleType, "getNormalizedSampleIndex", SoilSampler.getNormalizedSampleIndex)
  SpecializationUtil.registerFunction(vehicleType, "getCanStartSoilSampling", SoilSampler.getCanStartSoilSampling)
  SpecializationUtil.registerFunction(vehicleType, "processSoilSampling", SoilSampler.processSoilSampling)
  SpecializationUtil.registerFunction(vehicleType, "sendTakenSoilSamples", SoilSampler.sendTakenSoilSamples)
end
function SoilSampler.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", SoilSampler.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", SoilSampler.getIsFoldAllowed)
end
function SoilSampler.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveRootVehicle", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", SoilSampler)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", SoilSampler)
end
function SoilSampler:onLoad(savegame)
  self.spec_soilSampler = self["spec_" .. SoilSampler.SPEC_NAME]
  local v3 = v3:getValue("vehicle.soilSampler" .. "#node", nil, self.components, self.i3dMappings)
  self.spec_soilSampler.samplingNode = v3
  v3 = v3:getValue("vehicle.soilSampler" .. "#radius", 10)
  self.spec_soilSampler.samplingRadius = v3
  v3 = v3:getValue("vehicle.soilSampler" .. "#actionNameTake", "IMPLEMENT_EXTRA")
  if not InputAction[v3] then
  end
  v2.inputActionTake = v4
  local v4 = v4:getValue("vehicle.soilSampler" .. "#actionNameSend", "IMPLEMENT_EXTRA3")
  if not InputAction[v4] then
  end
  v2.inputActionSend = v5
  v2.isSampling = false
  local v5 = v5:getValue("vehicle.soilSampler" .. "#animationName")
  v2.animationName = v5
  v5 = v5:getValue("vehicle.soilSampler" .. "#animationSpeed", 1)
  v2.animationSpeed = v5
  v2.numCollectedSamples = 0
  v5 = v5:getValue("vehicle.soilSampler" .. "#foldMinLimit", 0)
  v2.foldMinLimit = v5
  v5 = v5:getValue("vehicle.soilSampler" .. "#foldMaxLimit", 1)
  v2.foldMaxLimit = v5
  v2.samplesAnimation = {}
  local v6 = v6:getValue("vehicle.soilSampler" .. ".samplesAnimation#name")
  v2.samplesAnimation.name = v6
  v6 = v6:getValue("vehicle.soilSampler" .. ".samplesAnimation#speed", 1)
  v2.samplesAnimation.speed = v6
  v6 = v6:getValue("vehicle.soilSampler" .. ".samplesAnimation#minSamples", 0)
  v2.samplesAnimation.minSamples = v6
  v6 = v6:getValue("vehicle.soilSampler" .. ".samplesAnimation#maxSamples", 0)
  v2.samplesAnimation.maxSamples = v6
  v5 = v5:getValue("vehicle.soilSampler" .. ".visualSamples#updateTime", 0.5)
  v2.visualSampleUpdateTime = v5
  v2.visualSampleUpdated = true
  v2.visualSamples = {}
  while true do
    v6 = string.format("%s.visualSamples.visualSample(%d)", "vehicle.soilSampler", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#node", nil, self.components, self.i3dMappings)
    if v7 ~= nil then
      setVisibility(v7, false)
      table.insert(v2.visualSamples, v7)
    end
  end
  v2.texts = {}
  v7 = v7:getText("action_takeSoilSample", self.customEnvironment)
  v2.texts.takeSample = v7
  v7 = v7:getText("action_sendSoilSamples", self.customEnvironment)
  v2.texts.sendSoilSamples = v7
  v7 = v7:getText("info_numSamplesTaken", self.customEnvironment)
  v2.texts.numSamplesTaken = v7
  v7 = v7:getText("info_samplesSend", self.customEnvironment)
  v2.texts.infoSamplesSend = v7
  if g_precisionFarming ~= nil then
    v2.soilMap = g_precisionFarming.soilMap
    v2.coverMap = g_precisionFarming.coverMap
    v2.farmlandStatistics = g_precisionFarming.farmlandStatistics
  end
end
function SoilSampler:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v3 = v3:getValue(savegame.key .. "." .. SoilSampler.SPEC_NAME .. "#numCollectedSamples", self.spec_soilSampler.numCollectedSamples)
    self:setNumCollectedSoilSamples(v3, true)
  end
end
function SoilSampler:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#numCollectedSamples", self.spec_soilSampler.numCollectedSamples)
end
function SoilSampler:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, SoilSampler.SEND_NUM_BITS)
  if not v4 then
  end
  self:setNumCollectedSoilSamples(v4, true)
end
function SoilSampler:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_soilSampler.numCollectedSamples, SoilSampler.SEND_NUM_BITS)
end
function SoilSampler:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_soilSampler.isSampling then
    if self.isClient and not self.spec_soilSampler.visualSampleUpdated then
      local v6 = self:getAnimationTime(self.spec_soilSampler.animationName)
      if self.spec_soilSampler.visualSampleUpdateTime <= v6 then
        v6 = self:getNormalizedSampleIndex()
        -- TODO: structure LOP_FORNPREP (pc 28, target 40)
        if 1 > v6 then
        end
        v10(v11, true)
        -- TODO: structure LOP_FORNLOOP (pc 39, target 29)
        v5.visualSampleUpdated = false
      end
    end
    v6 = self:getIsAnimationPlaying(v5.animationName)
    if not v6 then
      v5.isSampling = false
      self:setAnimationTime(v5.animationName, 0, false)
      v6 = v6:getMinimapAdditionalElementLinkNode()
      if v6 == v5.samplingNode then
        v6:setMinimapSamplingState(false)
      end
      self:processSoilSampling()
      self.speedLimit = math.huge
    end
  end
  if isActiveForInputIgnoreSelection and 0 < v5.numCollectedSamples then
    local v8 = string.format(v5.texts.numSamplesTaken, v5.numCollectedSamples)
    v6:addExtraPrintText(...)
  end
end
function SoilSampler:onFoldStateChanged(direction, moveToMiddle)
  local v4 = self:getIsActiveForInput(true)
  if v4 then
    if direction ~= 1 then
    end
    local v8 = self:getIsSelected()
    v4:setRequireMinimapDisplay(...)
  end
end
function SoilSampler:onLeaveRootVehicle()
  local v2 = v2:getMinimapAdditionalElementLinkNode()
  if v2 == self.spec_soilSampler.samplingNode then
    v2:setRequireMinimapDisplay(false, self)
    v2:setMinimapAdditionalElementLinkNode(nil)
    v2:setMinimapSamplingState(false)
  end
end
function SoilSampler:onPreDetach()
  local v2 = v2:getMinimapAdditionalElementLinkNode()
  if v2 == self.spec_soilSampler.samplingNode then
    v2:setRequireMinimapDisplay(false, self)
    v2:setMinimapAdditionalElementLinkNode(nil)
    v2:setMinimapSamplingState(false)
  end
end
function SoilSampler:startSoilSampling(noEventSend)
  self.spec_soilSampler.isSampling = true
  if self.isServer then
    local v3 = self:getIsLowered(false)
    if not v3 then
      v3 = self:getAttacherVehicle()
      if v3 ~= nil then
        local v4 = v3:getAttacherJointDescFromObject(self)
        if v4.allowsLowering then
          local v5 = v3:getAttacherJointIndexFromObject(self)
          v3:setJointMoveDown(v5, true, false)
        end
      end
    end
    v3, v4, v5 = self:getPFStatisticInfo()
    if v3 ~= nil and v4 and v5 ~= nil then
      v6:updateStatistic(v5, "numSoilSamples", 1)
      local v10 = v10:getPricePerSoilSample()
      v6:updateStatistic(...)
    end
    self.speedLimit = 0
  end
  local v7 = self:getAnimationTime(v2.animationName)
  self:playAnimation(v2.animationName, v2.animationSpeed, v7, true)
  self:setNumCollectedSoilSamples(v2.numCollectedSamples + 1, false)
  v3 = self:getIsActiveForInput(true)
  if v3 then
    v3:setMinimapSamplingState(true)
  end
  if self.isClient then
    if (v2.numCollectedSamples - 1) % #v2.visualSamples == 0 then
      -- TODO: structure LOP_FORNPREP (pc 114, target 123)
      setVisibility(v2.visualSamples[1], false)
      -- TODO: structure LOP_FORNLOOP (pc 122, target 115)
      v7 = self:getAnimationTime(v2.samplesAnimation.name)
      self:playAnimation(v2.samplesAnimation.name, -v2.samplesAnimation.speed, v7, true)
    else
      v3 = self:getNormalizedSampleIndex()
      v5 = self:getAnimationTime(v2.samplesAnimation.name)
      if v5 < (v3 - v2.samplesAnimation.minSamples) / (v2.samplesAnimation.maxSamples - v2.samplesAnimation.minSamples) then
        self:setAnimationStopTime(v2.samplesAnimation.name, (v3 - v2.samplesAnimation.minSamples) / (v2.samplesAnimation.maxSamples - v2.samplesAnimation.minSamples))
        local v9 = self:getAnimationTime(v2.samplesAnimation.name)
        self:playAnimation(v2.samplesAnimation.name, v2.samplesAnimation.speed, v9, true)
      end
    end
    v2.visualSampleUpdated = false
  end
  SoilSampler.updateActionEventState(self)
  SoilSamplerStartEvent.sendEvent(self, noEventSend)
end
function SoilSampler:setNumCollectedSoilSamples(num, updateVisuals)
  if not num then
  end
  v3.numCollectedSamples = sampleIndex
  if updateVisuals then
    local sampleIndex = self:getNormalizedSampleIndex()
    -- TODO: structure LOP_FORNPREP (pc 18, target 30)
    if 1 > sampleIndex then
    end
    v8(v9, true)
    -- TODO: structure LOP_FORNLOOP (pc 29, target 19)
    self:setAnimationTime(v3.samplesAnimation.name, (sampleIndex - v3.samplesAnimation.minSamples) / (v3.samplesAnimation.maxSamples - v3.samplesAnimation.minSamples), true)
  end
end
function SoilSampler:getNormalizedSampleIndex()
  if self.spec_soilSampler.numCollectedSamples == 0 then
    return 0
  end
  if v2 == 0 then
    return #v1.visualSamples
  end
  return v2
end
function SoilSampler:getCanStartSoilSampling()
  local v2, v3, v4 = getWorldTranslation(self.spec_soilSampler.samplingNode)
  local v5 = v5:getFarmlandIdAtWorldPosition(v2, v4)
  if v5 == nil then
    local v7 = v7:getText("warning_youDontHaveAccessToThisLand")
    return false
  end
  local v6 = v6:getFarmlandOwner(v5)
  if v6 ~= 0 then
    local v9 = self:getActiveFarm()
    v7 = v7:canFarmAccessOtherId(v9, v6)
  end
  if not v7 then
    v9 = v9:getText("warning_youDontHaveAccessToThisLand")
    return false
  end
  if self.getIsMotorStarted ~= nil then
    local v8 = self:getIsMotorStarted()
    -- if v8 then goto L89 end
    v9 = v9:getText("warning_motorNotStarted")
    return false
  else
    v8 = self:getRootVehicle()
    if v8 ~= self and v8.getIsMotorStarted ~= nil then
      v9 = v8:getIsMotorStarted()
      if not v9 then
        local v10 = v10:getText("warning_motorNotStarted")
        return false
      end
    end
  end
  if self.getFoldAnimTime ~= nil then
    v8 = self:getFoldAnimTime()
    if v1.foldMaxLimit >= v8 then
      -- if v8 >= v1.foldMinLimit then goto L110 end
    end
    return false, self.spec_foldable.unfoldWarning
  end
  return not self.spec_soilSampler.isSampling
end
function SoilSampler:processSoilSampling()
  if self.isServer and self.spec_soilSampler.soilMap ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 18, target 69)
    local v8, v9, v10 = localToWorld(self.spec_soilSampler.samplingNode, SoilSampler.SAMPLING_OCTAGON[1][1] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][2] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][3] * self.spec_soilSampler.samplingRadius)
    local v11, v12, v13 = localToWorld(self.spec_soilSampler.samplingNode, SoilSampler.SAMPLING_OCTAGON[1][4] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][5] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][6] * self.spec_soilSampler.samplingRadius)
    local v14, v15, v16 = localToWorld(self.spec_soilSampler.samplingNode, SoilSampler.SAMPLING_OCTAGON[1][7] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][8] * self.spec_soilSampler.samplingRadius, SoilSampler.SAMPLING_OCTAGON[1][9] * self.spec_soilSampler.samplingRadius)
    local v26 = self:getOwnerFarmId()
    v17:analyseArea(...)
    -- TODO: structure LOP_FORNLOOP (pc 68, target 19)
  end
end
function SoilSampler:sendTakenSoilSamples(noEventSend)
  if self.isServer and self.spec_soilSampler.soilMap ~= nil then
    local v5 = self:getOwnerFarmId()
    v3:analyseSoilSamples(v5, self.spec_soilSampler.numCollectedSamples)
  end
  if self.isClient then
    -- TODO: structure LOP_FORNPREP (pc 27, target 36)
    setVisibility(v2.visualSamples[1], false)
    -- TODO: structure LOP_FORNLOOP (pc 35, target 28)
    local v7 = self:getAnimationTime(v2.samplesAnimation.name)
    self:playAnimation(v2.samplesAnimation.name, -v2.samplesAnimation.speed, v7, true)
  end
  v2.numCollectedSamples = 0
  SoilSampler.updateActionEventState(self)
  SoilSamplerSendEvent.sendEvent(self, noEventSend)
end
function SoilSampler:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_soilSampler.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_soilSampler.actionEvents, self.spec_soilSampler.inputActionTake, self, SoilSampler.actionEventStartSample, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      v6:setActionEventText(v5, self.spec_soilSampler.texts.takeSample)
      local v6, v7 = self:addActionEvent(self.spec_soilSampler.actionEvents, self.spec_soilSampler.inputActionSend, self, SoilSampler.actionEventSendSamples, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_HIGH)
      v6:setActionEventText(v7, self.spec_soilSampler.texts.sendSoilSamples)
      SoilSampler.updateActionEventState(self)
      local v9 = self:getFoldAnimTime()
      if 0 >= v9 then
      end
      local v10 = self:getIsSelected()
      v6:setRequireMinimapDisplay(...)
      v6:setMinimapAdditionalElementLinkNode(v3.samplingNode)
      v6:setMinimapAdditionalElementRealSize(v3.samplingRadius * 2, v3.samplingRadius * 2)
    end
  end
end
function SoilSampler:updateActionEventState()
  if self.spec_soilSampler.actionEvents[self.spec_soilSampler.inputActionSend] ~= nil then
    if 0 >= self.spec_soilSampler.numCollectedSamples then
    end
    v3:setActionEventActive(v5, true)
  end
end
function SoilSampler:actionEventStartSample(actionName, inputValue, callbackState, isAnalog)
  local v5, v6 = self:getCanStartSoilSampling()
  if v5 then
    self:startSoilSampling()
    return
  end
  if v6 ~= nil then
    v7:showBlinkingWarning(v6, 2000)
  end
end
function SoilSampler:actionEventSendSamples(actionName, inputValue, callbackState, isAnalog)
  if 0 < self.spec_soilSampler.numCollectedSamples and not self.spec_soilSampler.isSampling then
    v6:showInfoDialog({text = self.spec_soilSampler.texts.infoSamplesSend, callback = SoilSampler.onSendSoilSamplesDialog, target = self})
  end
end
function SoilSampler:onSendSoilSamplesDialog()
  if self.spec_soilSampler.soilMap ~= nil then
    local v4 = self:getOwnerFarmId()
    v2:sendSoilSamplesByFarm(...)
  end
end
function SoilSampler:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
  end
  return v2
end
function SoilSampler:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if not self.spec_soilSampler.isSampling then
    local v4 = superFunc(self, direction, onAiTurnOn)
  end
  return v4
end
