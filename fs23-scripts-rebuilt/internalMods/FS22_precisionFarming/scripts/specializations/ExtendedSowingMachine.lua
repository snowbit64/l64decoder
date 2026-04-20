-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSowingMachine = {MIN_SEED_RATE = 1, MAX_SEED_RATE = 3, DEFAULT_SEED_RATE = 2, MOD_NAME = g_currentModName}
source(g_currentModDirectory .. "scripts/hud/ExtendedSowingMachineHUDExtension.lua")
VehicleHUDExtension.registerHUDExtension(ExtendedSowingMachine, ExtendedSowingMachineHUDExtension)
function ExtendedSowingMachine.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(SowingMachine, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, specializations)
  end
  return v1
end
function ExtendedSowingMachine.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setSeedRateAutoMode", ExtendedSowingMachine.setSeedRateAutoMode)
  SpecializationUtil.registerFunction(vehicleType, "setManualSeedRate", ExtendedSowingMachine.setManualSeedRate)
end
function ExtendedSowingMachine.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processSowingMachineArea", ExtendedSowingMachine.processSowingMachineArea)
end
function ExtendedSowingMachine.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ExtendedSowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", ExtendedSowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", ExtendedSowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", ExtendedSowingMachine)
end
function ExtendedSowingMachine:onLoad(savegame)
  self.spec_extendedSowingMachine = self["spec_" .. ExtendedSowingMachine.MOD_NAME .. ".extendedSowingMachine"]
  self.spec_extendedSowingMachine.seedRateAutoMode = true
  self.spec_extendedSowingMachine.manualSeedRate = ExtendedSowingMachine.DEFAULT_SEED_RATE
  self.spec_extendedSowingMachine.lastSeedRate = 0
  self.spec_extendedSowingMachine.lastSeedRateIndex = 0
  self.spec_extendedSowingMachine.lastRealChangedArea = 0
  self.spec_extendedSowingMachine.lastGroundUpdateDistance = math.huge
  self.spec_extendedSowingMachine.groundUpdateDistance = 4
  self.spec_extendedSowingMachine.seedRateRecommendation = nil
  self.spec_extendedSowingMachine.inputActionToggleAuto = InputAction.PRECISIONFARMING_SEED_RATE_MODE
  self.spec_extendedSowingMachine.inputActionToggleRate = InputAction.PRECISIONFARMING_SEED_RATE
  self.spec_extendedSowingMachine.texts = {}
  local v5 = v5:getText("action_toggleSeedRateAutoModePos", self.customEnvironment)
  self.spec_extendedSowingMachine.texts.inputToggleAutoModePos = v5
  v5 = v5:getText("action_toggleSeedRateAutoModeNeg", self.customEnvironment)
  self.spec_extendedSowingMachine.texts.inputToggleAutoModeNeg = v5
  v5 = v5:getText("action_changeManualSeedRate", self.customEnvironment)
  self.spec_extendedSowingMachine.texts.inputChangeSeedRate = v5
  self.spec_extendedSowingMachine.soilMap = g_precisionFarming.soilMap
  self.spec_extendedSowingMachine.seedRateMap = g_precisionFarming.seedRateMap
end
function ExtendedSowingMachine:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self.spec_extendedSowingMachine.lastGroundUpdateDistance = self.spec_extendedSowingMachine.lastGroundUpdateDistance + self.lastMovedDistance
  if self.spec_extendedSowingMachine.groundUpdateDistance < self.spec_extendedSowingMachine.lastGroundUpdateDistance then
    self.spec_extendedSowingMachine.lastGroundUpdateDistance = 0
    local workArea = self:getWorkAreaByIndex(1)
    if workArea ~= nil then
      local v9, v10, v11 = localToLocal(workArea.start, self.rootNode, 0, 0, 0)
      local v12 = math.abs(v9)
      if v12 < 0.5 then
        local v12, v13, v14 = getWorldTranslation(workArea.start)
      else
        v12, v13, v14 = getWorldTranslation(workArea.start)
        local v15, v16, v17 = getWorldTranslation(workArea.width)
      end
      v12, v13 = FSDensityMapUtil.getFieldDataAtWorldPosition(v7, 0, v8)
      if v12 then
        v14 = v14:getTypeIndexAtWorldPos(v7, v8)
        if 0 < v14 then
          v16 = v16:getOptimalSeedRateByFruitTypeAndSoiltype(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed], v14)
          v5.seedRateRecommendation = v16
          return
        end
        v5.seedRateRecommendation = nil
        return
      end
      v5.seedRateRecommendation = nil
    end
  end
end
function ExtendedSowingMachine:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer and 0 < self.spec_sowingMachine.workAreaParameters.lastChangedArea then
    local v4 = v4:getFruitTypeByIndex(self.spec_sowingMachine.workAreaParameters.seedsFruitType)
    local v7 = v7:getFruitPixelsToSqm()
    local v5 = MathUtil.areaToHa(...)
    local v8 = v8:getFruitPixelsToSqm()
    local v6 = MathUtil.areaToHa(...)
    local damage = self:getVehicleDamage()
    if 0 < damage then
    end
    local v10, v11, v12 = self:getPFStatisticInfo()
    if v10 ~= nil and v12 ~= nil then
      v10:updateStatistic(v12, "usedSeeds", v7)
      v10:updateStatistic(v12, "usedSeedsRegular", v8)
    end
  end
end
function ExtendedSowingMachine:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_extendedSowingMachine.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_extendedSowingMachine.actionEvents, self.spec_extendedSowingMachine.inputActionToggleAuto, self, ExtendedSowingMachine.actionEventToggleAuto, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      local v6, v7 = self:addActionEvent(self.spec_extendedSowingMachine.actionEvents, self.spec_extendedSowingMachine.inputActionToggleRate, self, ExtendedSowingMachine.actionEventChangeSeedRate, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_HIGH)
      v6:setActionEventText(v7, self.spec_extendedSowingMachine.texts.inputChangeSeedRate)
      ExtendedSowingMachine.updateActionEventState(self)
    end
    v3.attachStateChanged = true
  end
end
function ExtendedSowingMachine:setSeedRateAutoMode(state, noEventSend)
  if state == nil then
  end
  if state ~= v3.seedRateAutoMode then
    v3.seedRateAutoMode = state
    if self.isClient then
      ExtendedSowingMachine.updateActionEventState(self)
    end
    ExtendedSowingMachineRateEvent.sendEvent(self, v3.seedRateAutoMode, v3.manualSeedRate, noEventSend)
  end
end
function ExtendedSowingMachine:setManualSeedRate(seedRate, noEventSend)
  local v4 = MathUtil.clamp(seedRate, ExtendedSowingMachine.MIN_SEED_RATE, ExtendedSowingMachine.MAX_SEED_RATE)
  if v4 ~= self.spec_extendedSowingMachine.manualSeedRate then
    self.spec_extendedSowingMachine.manualSeedRate = v4
    ExtendedSowingMachineRateEvent.sendEvent(self, self.spec_extendedSowingMachine.seedRateAutoMode, self.spec_extendedSowingMachine.manualSeedRate, noEventSend)
  end
end
function ExtendedSowingMachine:processSowingMachineArea(superFunc, workArea, dt)
  local v4, v5 = superFunc(self, workArea, dt)
  if 0 < v4 then
    local v9, v10, v11 = getWorldTranslation(workArea.start)
    local v12, v13, v14 = getWorldTranslation(workArea.width)
    local v15, v16, v17 = getWorldTranslation(workArea.height)
    local v19, v20, v21 = v19:updateSeedArea(v9, v11, v12, v14, v15, v17, self.spec_sowingMachine.workAreaParameters.seedsFruitType, self.spec_extendedSowingMachine.seedRateAutoMode, self.spec_extendedSowingMachine.manualSeedRate)
    if v21 ~= nil then
      local v22 = v22:getFruitTypeByIndex(self.spec_sowingMachine.workAreaParameters.seedsFruitType)
      self.spec_extendedSowingMachine.lastRealChangedArea = self.spec_sowingMachine.workAreaParameters.lastChangedArea
      self.spec_sowingMachine.workAreaParameters.lastChangedArea = self.spec_sowingMachine.workAreaParameters.lastChangedArea * v19 / v22.seedUsagePerSqm
      self.spec_extendedSowingMachine.lastSeedRate = v20
      self.spec_extendedSowingMachine.lastSeedRateIndex = v21
    end
  end
  return v4, v5
end
function ExtendedSowingMachine:actionEventToggleAuto(actionName, inputValue, callbackState, isAnalog)
  self:setSeedRateAutoMode()
end
function ExtendedSowingMachine:actionEventChangeSeedRate(actionName, inputValue, callbackState, isAnalog, ...)
  local v9 = MathUtil.sign(inputValue)
  self:setManualSeedRate(self.spec_extendedSowingMachine.manualSeedRate + v9)
end
function ExtendedSowingMachine:updateActionEventState()
  if self.spec_extendedSowingMachine.actionEvents[self.spec_extendedSowingMachine.inputActionToggleAuto] ~= nil then
    if self.spec_extendedSowingMachine.seedRateAutoMode then
      -- if v0.spec_extendedSowingMachine.texts.inputToggleAutoModeNeg then goto L25 end
    end
    v3:setActionEventText(v5, v1.texts.inputToggleAutoModePos)
  end
  if v1.actionEvents[v1.inputActionToggleRate] ~= nil then
    v4:setActionEventActive(v1.actionEvents[v1.inputActionToggleRate].actionEventId, not v1.seedRateAutoMode)
  end
end
