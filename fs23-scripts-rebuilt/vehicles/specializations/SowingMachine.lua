-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetSeedIndexEvent.lua")
SowingMachine = {DAMAGED_USAGE_INCREASE = 0.3, AI_REQUIRED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.PLOWED, FieldGroundType.ROLLED_SEEDBED}, AI_OUTPUT_GROUND_TYPES = {FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}}
function SowingMachine.initSpecialization()
  v0:addWorkAreaType("sowingMachine", true)
  v0:addSpecType("seedFillTypes", "shopListAttributeIconSeeds", SowingMachine.loadSpecValueSeedFillTypes, SowingMachine.getSpecValueSeedFillTypes, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("SowingMachine")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sowingMachine.allowFillFromAirWhileTurnedOn#value", "Allow fill from air while turned on")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.sowingMachine.directionNode#node", "Direction node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sowingMachine.useDirectPlanting#value", "Use direct planting", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sowingMachine.seedFruitTypeCategories", "Seed fruit type categories")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sowingMachine.seedFruitTypes", "Seed fruit types")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sowingMachine.needsActivation#value", "Needs activation", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sowingMachine.requiresFilling#value", "Requires filling", true)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sowingMachine.fieldGroundType#value", "Defines the field ground type", "SOWN")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.sowingMachine.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.sowingMachine.sounds", "airBlower")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.sowingMachine.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sowingMachine.changeSeedInputButton", "Input action name", "IMPLEMENT_EXTRA3")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sowingMachine#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sowingMachine#unloadInfoIndex", "Unload info index", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.sowingMachine.effects")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.seedFruitTypeCategories", "Seed fruit type categories")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.seedFruitTypes", "Seed fruit types")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).sowingMachine#selectedSeedFruitType", "Selected fruit type name")
end
function SowingMachine.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(WorkArea, specializations)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, specializations)
    end
  end
  return v1
end
function SowingMachine.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setSeedFruitType", SowingMachine.setSeedFruitType)
  SpecializationUtil.registerFunction(vehicleType, "setSeedIndex", SowingMachine.setSeedIndex)
  SpecializationUtil.registerFunction(vehicleType, "changeSeedIndex", SowingMachine.changeSeedIndex)
  SpecializationUtil.registerFunction(vehicleType, "getIsSeedChangeAllowed", SowingMachine.getIsSeedChangeAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getSowingMachineFillUnitIndex", SowingMachine.getSowingMachineFillUnitIndex)
  SpecializationUtil.registerFunction(vehicleType, "getSowingMachineSeedFillTypeIndex", SowingMachine.getSowingMachineSeedFillTypeIndex)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentSeedTypeIcon", SowingMachine.getCurrentSeedTypeIcon)
  SpecializationUtil.registerFunction(vehicleType, "processSowingMachineArea", SowingMachine.processSowingMachineArea)
  SpecializationUtil.registerFunction(vehicleType, "getUseSowingMachineAIRequirements", SowingMachine.getUseSowingMachineAIRequirements)
  SpecializationUtil.registerFunction(vehicleType, "setFillTypeSourceDisplayFillType", SowingMachine.setFillTypeSourceDisplayFillType)
  SpecializationUtil.registerFunction(vehicleType, "updateMissionSowingWarning", SowingMachine.updateMissionSowingWarning)
  SpecializationUtil.registerFunction(vehicleType, "getCanPlantOutsideSeason", SowingMachine.getCanPlantOutsideSeason)
end
function SowingMachine.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDrawFirstFillText", SowingMachine.getDrawFirstFillText)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", SowingMachine.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitAllowsFillType", SowingMachine.getFillUnitAllowsFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleTurnedOn", SowingMachine.getCanToggleTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowFillFromAir", SowingMachine.getAllowFillFromAir)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirectionSnapAngle", SowingMachine.getDirectionSnapAngle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addFillUnitFillLevel", SowingMachine.addFillUnitFillLevel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", SowingMachine.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", SowingMachine.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", SowingMachine.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", SowingMachine.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", SowingMachine.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanAIImplementContinueWork", SowingMachine.getCanAIImplementContinueWork)
end
function SowingMachine.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", SowingMachine)
  SpecializationUtil.registerEventListener(vehicleType, "onChangedFillType", SowingMachine)
end
function SowingMachine:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.sowingMachine.animationNodes.animationNode", "sowingMachine")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnScrollers", "vehicle.sowingMachine.scrollerNodes.scrollerNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.useDirectPlanting", "vehicle.sowingMachine.useDirectPlanting#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.needsActivation#value", "vehicle.sowingMachine.needsActivation#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sowingEffects", "vehicle.sowingMachine.effects")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sowingEffectsWithFixedFillType", "vehicle.sowingMachine.fixedEffects")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sowingMachine#supportsAiWithoutSowingMachine", "vehicle.turnOnVehicle.aiRequiresTurnOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sowingMachine.directionNode#index", "vehicle.sowingMachine.directionNode#node")
  local v3 = v3:getValue("vehicle.sowingMachine.allowFillFromAirWhileTurnedOn#value", true)
  self.spec_sowingMachine.allowFillFromAirWhileTurnedOn = v3
  v3 = v3:getValue("vehicle.sowingMachine.directionNode#node", self.components[1].node, self.components, self.i3dMappings)
  self.spec_sowingMachine.directionNode = v3
  v3 = v3:getValue("vehicle.sowingMachine.useDirectPlanting#value", false)
  self.spec_sowingMachine.useDirectPlanting = v3
  self.spec_sowingMachine.isWorking = false
  self.spec_sowingMachine.isProcessing = false
  self.spec_sowingMachine.stoneLastState = 0
  v3 = v3:getWearMultiplierByType("SOWINGMACHINE")
  self.spec_sowingMachine.stoneWearMultiplierData = v3
  self.spec_sowingMachine.seeds = {}
  local v4 = v4:getValue("vehicle.sowingMachine.seedFruitTypeCategories")
  local v5 = v5:getValue("vehicle.sowingMachine.seedFruitTypes")
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L146
    local v6 = v6:getFruitTypesByCategoryNames(v4, "Warning: '" .. self.configFileName .. "' has invalid fruitTypeCategory '%s'.")
  elseif v4 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L163
    v6 = v6:getFruitTypesByNames(v5, "Warning: '" .. self.configFileName .. "' has invalid fruitType '%s'.")
  else
    print("Warning: '" .. self.configFileName .. "' a sowingMachine needs either the 'seedFruitTypeCategories' or 'seedFruitTypes' element.")
  end
  if v3 ~= nil then
    for v9, v10 in pairs(v3) do
      table.insert(v2.seeds, v10)
    end
  end
  v6 = v6:getValue("vehicle.sowingMachine.needsActivation#value", false)
  v2.needsActivation = v6
  v6 = v6:getValue("vehicle.sowingMachine.requiresFilling#value", true)
  v2.requiresFilling = v6
  v8 = v8:getValue("vehicle.sowingMachine.fieldGroundType#value", "SOWN")
  v6 = v6:getFieldGroundValueByName(...)
  v2.fieldGroundType = v6
  if self.isClient then
    v2.isWorkSamplePlaying = false
    v2.samples = {}
    v7 = v7:loadSampleFromXML(self.xmlFile, "vehicle.sowingMachine.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v7
    v7 = v7:loadSampleFromXML(self.xmlFile, "vehicle.sowingMachine.sounds", "airBlower", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.airBlower = v7
    v2.sampleFillEnabled = false
    v2.sampleFillStopTime = -1
    v2.lastFillLevel = -1
    v6 = v6:loadAnimations(self.xmlFile, "vehicle.sowingMachine.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v6
    v6:setFillType(v2.animationNodes, FillType.UNKNOWN)
    v6 = v6:getValue("vehicle.sowingMachine.changeSeedInputButton")
    if v6 ~= nil then
      v2.changeSeedInputButton = InputAction[v6]
    end
    v7 = Utils.getNoNil(v2.changeSeedInputButton, InputAction.TOGGLE_SEEDS)
    v2.changeSeedInputButton = v7
  end
  v2.currentSeed = 1
  v2.allowsSeedChanging = true
  v2.showFruitCanNotBePlantedWarning = false
  v2.showWrongFruitForMissionWarning = false
  v2.warnings = {}
  v7 = v7:getText("warning_theSelectedFruitTypeIsNotAvailableOnThisMap")
  v2.warnings.fruitCanNotBePlanted = v7
  v7 = v7:getText("warning_theSelectedFruitTypeIsWrongForTheMission")
  v2.warnings.wrongFruitForMission = v7
  v7 = v7:getText("warning_theSelectedFruitTypeCantBePlantedInThisPeriod")
  v2.warnings.wrongPlantingTime = v7
  v6 = v6:getValue("vehicle.sowingMachine#fillUnitIndex", 1)
  v2.fillUnitIndex = v6
  v6 = v6:getValue("vehicle.sowingMachine#unloadInfoIndex", 1)
  v2.unloadInfoIndex = v6
  v6 = self:getFillUnitByIndex(v2.fillUnitIndex)
  if v6 == nil then
    Logging.xmlError(self.xmlFile, "FillUnit '%d' not defined!", v2.fillUnitIndex)
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    return
  end
  v2.fillTypeSources = {}
  if self.isClient then
    v6 = v6:loadEffect(self.xmlFile, "vehicle.sowingMachine.effects", self.components, self, self.i3dMappings)
    v2.effects = v6
  end
  v2.workAreaParameters = {seedsFruitType = nil, angle = 0, lastChangedArea = 0, lastStatsArea = 0, lastArea = 0}
  self:setSeedIndex(1, true)
  if savegame ~= nil then
    v6 = v6:getValue(savegame.key .. ".sowingMachine#selectedSeedFruitType")
    if v6 ~= nil then
      v7 = v7:getFruitTypeByName(v6)
      if v7 ~= nil then
        self:setSeedFruitType(v7.index, true)
      end
    end
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdate", SowingMachine)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", SowingMachine)
  end
end
function SowingMachine.onPostLoad(v0, savegame)
  SowingMachine.updateAiParameters(v0)
end
function SowingMachine:onDelete()
  v2:deleteSamples(self.spec_sowingMachine.samples)
  v2:deleteEffects(self.spec_sowingMachine.effects)
  v2:deleteAnimations(self.spec_sowingMachine.animationNodes)
end
function SowingMachine:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed] ~= nil and self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed] ~= FruitType.UNKNOWN then
    local v7 = v7:getFruitTypeByIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
  end
  xmlFile:setValue(key .. "#selectedSeedFruitType", v5)
end
function SowingMachine:onReadStream(streamId, connection)
  local seedIndex = streamReadUInt8(streamId)
  self:setSeedIndex(seedIndex, true)
end
function SowingMachine:onWriteStream(streamId, connection)
  streamWriteUInt8(streamId, self.spec_sowingMachine.currentSeed)
end
function SowingMachine:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_sowingMachine.isProcessing then
    local v6 = self:getFillUnitForcedMaterialFillType(self.spec_sowingMachine.fillUnitIndex)
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L35
    v7:setFillType(self.spec_sowingMachine.effects, v6)
    v7:startEffects(self.spec_sowingMachine.effects)
    return
  end
  v6:stopEffects(v5.effects)
end
function SowingMachine:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_sowingMachine.actionEvents[self.spec_sowingMachine.changeSeedInputButton] ~= nil then
    local v10 = self:getIsSeedChangeAllowed()
    v7:setActionEventActive(...)
  end
  if self.isActiveForInputIgnoreSelectionIgnoreAI then
    if v5.showFruitCanNotBePlantedWarning then
      v7:showBlinkingWarning(v5.warnings.fruitCanNotBePlanted)
      return
    end
    if v5.showWrongFruitForMissionWarning then
      v7:showBlinkingWarning(v5.warnings.wrongFruitForMission)
      return
    end
    if v5.showWrongPlantingTimeWarning then
      local v11 = v11:formatPeriod()
      local v9 = string.format(...)
      v7:showBlinkingWarning(...)
    end
  end
end
function SowingMachine:setSeedIndex(seedIndex, noEventSend)
  SetSeedIndexEvent.sendEvent(self, seedIndex, noEventSend)
  local v5 = math.max(seedIndex, 1)
  local v6 = table.getn(self.spec_sowingMachine.seeds)
  local v4 = math.min(...)
  self.spec_sowingMachine.currentSeed = v4
  v4 = v4:getFillTypeIndexByFruitTypeIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
  if v4 ~= nil then
    self:setFillUnitFillTypeToDisplay(self.spec_sowingMachine.fillUnitIndex, v4, true)
    self:setFillTypeSourceDisplayFillType(v4)
  end
  SowingMachine.updateAiParameters(self)
  SowingMachine.updateChooseSeedActionEvent(self)
end
function SowingMachine:changeSeedIndex(increment)
  if #self.spec_sowingMachine.seeds < self.spec_sowingMachine.currentSeed + increment then
  elseif self.spec_sowingMachine.currentSeed + increment < 1 then
  end
  self:setSeedIndex(v3)
end
function SowingMachine:setSeedFruitType(fruitType, noEventSend)
  for v7, v8 in ipairs(self.spec_sowingMachine.seeds) do
    if not (v8 == fruitType) then
      continue
    end
    self:setSeedIndex(v7, noEventSend)
    return
  end
end
function SowingMachine:getIsSeedChangeAllowed()
  local increment = increment:getCanChangeSeeds(self)
  if not increment then
    return false
  end
  return self.spec_sowingMachine.allowsSeedChanging
end
function SowingMachine:getSowingMachineFillUnitIndex()
  return self.spec_sowingMachine.fillUnitIndex
end
function SowingMachine:getSowingMachineSeedFillTypeIndex()
  return v2:getFillTypeIndexByFruitTypeIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
end
function SowingMachine:getCurrentSeedTypeIcon()
  local v2 = v2:getFillTypeByFruitTypeIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
  if v2 ~= nil then
    return v2.hudOverlayFilename
  end
  return nil
end
function SowingMachine:processSowingMachineArea(workArea, dt)
  local v7 = self:getLastSpeed()
  if 0.5 >= v7 then
  end
  v3.isWorking = true
  if not v3.workAreaParameters.isActive then
    return v4, v5
  end
  local v6 = self:getIsAIActive()
  if v6 then
    -- if g_currentMission.missionInfo.helperBuySeeds then goto L46 end
  end
  if v3.workAreaParameters.seedsVehicle == nil then
    v6 = self:getIsAIActive()
    if v6 then
      local v9 = AIMessageErrorOutOfFill.new()
      self.rootVehicle:stopCurrentAIJob(...)
    end
    return v4, v5
  end
  if not v3.workAreaParameters.canFruitBePlanted then
    return v4, v5
  end
  local v6, v7, v8 = getWorldTranslation(workArea.start)
  local v9, v10, v11 = getWorldTranslation(workArea.width)
  local v12, v13, v14 = getWorldTranslation(workArea.height)
  v3.isProcessing = v3.isWorking
  if not v3.useDirectPlanting then
    local v15, v16 = FSDensityMapUtil.updateSowingArea(v3.workAreaParameters.seedsFruitType, v6, v8, v9, v11, v12, v14, v3.workAreaParameters.fieldGroundType, v3.workAreaParameters.angle, nil)
  else
    v15, v16 = FSDensityMapUtil.updateDirectSowingArea(v3.workAreaParameters.seedsFruitType, v6, v8, v9, v11, v12, v14, v3.workAreaParameters.fieldGroundType, v3.workAreaParameters.angle, nil)
  end
  if v3.isWorking then
    v15 = FSDensityMapUtil.getStoneArea(v6, v8, v9, v11, v12, v14)
    v3.stoneLastState = v15
  else
    v3.stoneLastState = 0
  end
  v3.workAreaParameters.lastChangedArea = v3.workAreaParameters.lastChangedArea + v4
  v3.workAreaParameters.lastStatsArea = v3.workAreaParameters.lastStatsArea + v4
  v3.workAreaParameters.lastTotalArea = v3.workAreaParameters.lastTotalArea + 0
  FSDensityMapUtil.eraseTireTrack(v6, v8, v9, v11, v12, v14)
  self:updateMissionSowingWarning(v6, v8)
  return v4, v5
end
function SowingMachine:updateMissionSowingWarning(x, z)
  self.spec_sowingMachine.showWrongFruitForMissionWarning = false
  local v4 = self:getLastTouchedFarmlandFarmId()
  if v4 == 0 then
    v4 = v4:getMissionAtWorldPosition(x, z)
    if v4 ~= nil and v4["type"].name == "sow" and v4.fruitType ~= self.spec_sowingMachine.workAreaParameters.seedsFruitType then
      self.spec_sowingMachine.showWrongFruitForMissionWarning = true
    end
  end
end
function SowingMachine:getUseSowingMachineAIRequirements()
  local increment = self:getAIRequiresTurnOn()
  if not increment then
    increment = self:getIsTurnedOn()
  end
  return increment
end
function SowingMachine:setFillTypeSourceDisplayFillType(fillType)
  if self.spec_sowingMachine.fillTypeSources[FillType.SEEDS] ~= nil then
    for v6, v7 in ipairs(self.spec_sowingMachine.fillTypeSources[FillType.SEEDS]) do
      local v9 = v7.vehicle:getFillUnitFillLevel(v7.fillUnitIndex)
      if 0 < v9 then
        local v10 = v7.vehicle:getFillUnitFillType(v7.fillUnitIndex)
        -- if v10 ~= FillType.SEEDS then goto L45 end
        v7.vehicle:setFillUnitFillTypeToDisplay(v7.fillUnitIndex, fillType)
        return
      else
        if not (v9 == 0) then
          continue
        end
        v10 = v7.vehicle:getFillUnitSupportedFillTypes(v7.fillUnitIndex)
        for v15, v16 in pairs(v10) do
          if not v16 then
            continue
          end
        end
        if not (v11 == 1) then
          continue
        end
        if not (v10[FillType.SEEDS] == true) then
          continue
        end
        v8:setFillUnitFillTypeToDisplay(v7.fillUnitIndex, fillType)
        return
      end
    end
  end
end
function SowingMachine:getDrawFirstFillText(superFunc)
  if self.isClient then
    local v3 = self:getIsActiveForInput()
    if v3 then
      v3 = self:getIsSelected()
      if v3 then
        v3 = self:getFillUnitFillLevel(self.spec_sowingMachine.fillUnitIndex)
        if v3 <= 0 then
          v3 = self:getFillUnitCapacity(self.spec_sowingMachine.fillUnitIndex)
          if v3 ~= 0 then
            return true
          end
        end
      end
    end
  end
  v3 = superFunc(self)
  return v3
end
function SowingMachine:getAreControlledActionsAllowed(superFunc)
  if self.spec_sowingMachine.requiresFilling then
    local v3 = self:getFillUnitFillLevel(self.spec_sowingMachine.fillUnitIndex)
    if v3 <= 0 then
      v3 = self:getFillUnitCapacity(self.spec_sowingMachine.fillUnitIndex)
      if v3 ~= 0 then
        local v4 = v4:getText("info_firstFillTheTool")
        return false
      end
    end
  end
  v3 = superFunc(self)
  return v3
end
function SowingMachine:getFillUnitAllowsFillType(superFunc, fillUnitIndex, fillType)
  local v4 = superFunc(self, fillUnitIndex, fillType)
  if v4 then
    return true
  end
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    local v5 = self:getFillUnitSupportsFillType(fillUnitIndex, fillType)
    if v5 then
      if fillType ~= FillType.SEEDS then
        -- if v0.spec_fillUnit.fillUnits[v2].fillType ~= FillType.SEEDS then goto L36 end
      end
      return true
    end
  end
  return false
end
function SowingMachine:getCanToggleTurnedOn(superFunc)
  if not self.spec_sowingMachine.needsActivation then
    return false
  end
  return superFunc(self)
end
function SowingMachine.getCanPlantOutsideSeason(v0)
  return false
end
function SowingMachine:getAllowFillFromAir(superFunc)
  local v3 = self:getIsTurnedOn()
  if v3 and not self.spec_sowingMachine.allowFillFromAirWhileTurnedOn then
    return false
  end
  v3 = superFunc(self)
  return v3
end
function SowingMachine:getDirectionSnapAngle(superFunc)
  local v4 = v4:getFruitTypeByIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
  if v4 ~= nil then
  end
  local v8 = superFunc(self)
  return math.max(...)
end
function SowingMachine:addFillUnitFillLevel(superFunc, farmId, fillUnitIndex, fillLevelDelta, fillType, toolType, fillInfo)
  if fillUnitIndex == self.spec_sowingMachine.fillUnitIndex then
    local v9 = self:getFillUnitSupportsFillType(fillUnitIndex, fillType)
    if v9 then
      self:setFillUnitForcedMaterialFillType(fillUnitIndex, FillType.SEEDS)
    end
    if v8.seeds[v8.currentSeed] ~= nil then
      local v10 = v10:getFillTypeIndexByFruitTypeIndex(v8.seeds[v8.currentSeed])
      if v10 ~= nil then
        local v11 = self:getFillUnitSupportsFillType(fillUnitIndex, v10)
        if v11 then
          self:setFillUnitForcedMaterialFillType(fillUnitIndex, v10)
        end
      end
    end
  end
  v9 = superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillType, toolType, fillInfo)
  return v9
end
function SowingMachine:doCheckSpeedLimit(superFunc)
  local v3 = superFunc(self)
  if not v3 then
    v3 = self:getIsImplementChainLowered()
    if v3 and not not self.spec_sowingMachine.needsActivation then
      v3 = self:getIsTurnedOn()
    end
  end
  return v3
end
function SowingMachine:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.movingDirection and self.spec_sowingMachine.isWorking then
    if self.spec_sowingMachine.needsActivation then
      local v4 = self:getIsTurnedOn()
      -- if not v4 then goto L31 end
    end
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function SowingMachine:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.movingDirection and self.spec_sowingMachine.isWorking then
    if self.spec_sowingMachine.needsActivation then
      local v4 = self:getIsTurnedOn()
      -- if not v4 then goto L47 end
    end
    if v2.stoneLastState ~= 0 and v2.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function SowingMachine.loadWorkAreaFromXML(v0, increment, v2, v3, v4)
  local v5 = increment(v0, v2, v3, v4)
  if v2["type"] == WorkAreaType.DEFAULT then
    v2["type"] = WorkAreaType.SOWINGMACHINE
  end
  return v5
end
function SowingMachine.getCanBeSelected(v0, increment)
  return true
end
function SowingMachine:getCanAIImplementContinueWork(superFunc)
  local v2, v3, v4 = superFunc(self)
  if not v2 then
    return false, v3, v4
  end
  local v5 = self:getCanPlantOutsideSeason()
  if not v5 then
    local v6 = v6:canFruitBePlanted(self.spec_sowingMachine.workAreaParameters.seedsFruitType)
    if not v6 then
      local v8 = AIMessageErrorWrongSeason.new()
      return false
    end
  end
  return v2, v3, v4
end
function SowingMachine:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_sowingMachine.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4 = table.getn(self.spec_sowingMachine.seeds)
      if 1 < v4 then
        local v4, v5 = self:addActionEvent(self.spec_sowingMachine.actionEvents, self.spec_sowingMachine.changeSeedInputButton, self, SowingMachine.actionEventToggleSeedType, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
        SowingMachine.updateChooseSeedActionEvent(self)
        local v6, v7 = self:addPoweredActionEvent(self.spec_sowingMachine.actionEvents, InputAction.TOGGLE_SEEDS_BACK, self, SowingMachine.actionEventToggleSeedTypeBack, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
      end
    end
  end
end
function SowingMachine:updateChooseSeedActionEvent()
  if self.spec_sowingMachine.actionEvents[self.spec_sowingMachine.changeSeedInputButton] ~= nil then
    local v6 = v6:getFillTypeIndexByFruitTypeIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
    local v4 = v4:getFillTypeByIndex(...)
    if v4 ~= nil and v4 ~= FillType.UNKNOWN then
      local v5 = string.format(" (%s)", v4.title)
    end
    local v10 = v10:getText("action_chooseSeed")
    local v8 = string.format("%s%s", v10, v3)
    v5:setActionEventText(...)
  end
end
function SowingMachine:onTurnedOn()
  if self.isClient then
    v2:playSample(self.spec_sowingMachine.samples.airBlower)
    v2:startAnimations(self.spec_sowingMachine.animationNodes)
  end
  if self.isServer and increment.fillTypeSources[FillType.SEEDS] ~= nil then
    for v5, v6 in ipairs(increment.fillTypeSources[FillType.SEEDS]) do
      if not (v6.vehicle.setIsTurnedOn ~= nil) then
        continue
      end
      v7:setIsTurnedOn(true)
    end
  end
  SowingMachine.updateAiParameters(self)
end
function SowingMachine:onTurnedOff()
  if self.isClient then
    v2:stopSample(self.spec_sowingMachine.samples.airBlower)
    v2:stopAnimations(self.spec_sowingMachine.animationNodes)
  end
  if self.isServer and increment.fillTypeSources[FillType.SEEDS] ~= nil then
    for v5, v6 in ipairs(increment.fillTypeSources[FillType.SEEDS]) do
      if not (v6.vehicle.setIsTurnedOn ~= nil) then
        continue
      end
      v7:setIsTurnedOn(false)
    end
  end
  SowingMachine.updateAiParameters(self)
end
function SowingMachine:onStartWorkAreaProcessing(dt)
  self.spec_sowingMachine.isWorking = false
  self.spec_sowingMachine.isProcessing = false
  local v4, v5, v6 = localDirectionToWorld(self.spec_sowingMachine.directionNode, 0, 0, 1)
  local v7 = MathUtil.getYRotationFromDirection(v4, v6)
  local v8 = v8:getFruitTypeByIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
  if v8 ~= nil and v8.directionSnapAngle ~= 0 then
    local v9 = math.floor(v7 / v8.directionSnapAngle + 0.5)
  end
  local v11 = v11:getGroundAngleMaxValue()
  v9 = FSDensityMapUtil.convertToDensityMapAngle(...)
  local v13 = self:getFillUnitFillLevel(v2.fillUnitIndex)
  if 0 < v13 then
  elseif v2.fillTypeSources[FillType.SEEDS] ~= nil then
    for v16, v17 in ipairs(v2.fillTypeSources[FillType.SEEDS]) do
      local v19 = v17.vehicle:getFillUnitFillLevel(v17.fillUnitIndex)
      if not (0 < v19) then
        continue
      end
      v19 = v17.vehicle:getFillUnitFillType(v17.fillUnitIndex)
      if not (v19 == FillType.SEEDS) then
        continue
      end
      break
    end
  end
  if v10 ~= nil and v10 ~= self then
    v13 = v13:getFillTypeIndexByFruitTypeIndex(v3)
    if v13 ~= nil then
      v10:setFillUnitFillTypeToDisplay(v11, v13)
    end
  end
  v13 = self:getIsTurnedOn()
  if v8 ~= nil and v8.terrainDataPlaneId ~= nil then
  end
  if v2.showWrongFruitForMissionWarning then
    v2.showWrongFruitForMissionWarning = false
  end
  v16 = self:getCanPlantOutsideSeason()
  if not v16 then
    v16 = v16:canFruitBePlanted(v3)
  end
  v2.showFruitCanNotBePlantedWarning = not v14
  if not v15 and not v13 and not v2.needsActivation then
    v16 = self:getIsLowered()
  end
  v2.showWrongPlantingTimeWarning = v16
  v2.workAreaParameters.isActive = not v2.needsActivation or v13
  v2.workAreaParameters.canFruitBePlanted = v14 and v15
  v2.workAreaParameters.seedsFruitType = v3
  v2.workAreaParameters.fieldGroundType = v2.fieldGroundType
  v2.workAreaParameters.angle = v9
  v2.workAreaParameters.seedsVehicle = v10
  v2.workAreaParameters.seedsVehicleFillUnitIndex = v11
  v2.workAreaParameters.seedsVehicleUnloadInfoIndex = v12
  v2.workAreaParameters.lastTotalArea = 0
  v2.workAreaParameters.lastChangedArea = 0
  v2.workAreaParameters.lastStatsArea = 0
end
function SowingMachine:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer then
    local v4 = self:getLastTouchedFarmlandFarmId()
    if 0 < self.spec_sowingMachine.workAreaParameters.lastChangedArea then
      local v5 = v5:getFruitTypeByIndex(self.spec_sowingMachine.workAreaParameters.seedsFruitType)
      local v8 = v8:getFruitPixelsToSqm()
      local v6 = MathUtil.areaToHa(...)
      local v10 = v10:getFruitPixelsToSqm()
      v8 = MathUtil.areaToHa(...)
      local damage = self:getVehicleDamage()
      if 0 < damage then
      end
      v10:updateFarmStats(v4, "seedUsage", v7)
      v10:updateFarmStats(v4, "sownHectares", v8)
      self:updateLastWorkedArea(v3.workAreaParameters.lastStatsArea)
      v10 = self:getIsAIActive()
      if v10 then
        -- if g_currentMission.missionInfo.helperBuySeeds then goto L135 end
      end
      local v13 = v3.workAreaParameters.seedsVehicle:getFillUnitFillType(v3.workAreaParameters.seedsVehicleFillUnitIndex)
      if v3.workAreaParameters.seedsVehicle.getFillVolumeUnloadInfo ~= nil then
        local v15 = v3.workAreaParameters.seedsVehicle:getFillVolumeUnloadInfo(v3.workAreaParameters.seedsVehicleUnloadInfoIndex)
      end
      local v17 = self:getOwnerFarmId()
      v10:addFillUnitFillLevel(v17, v11, -v7, v13, ToolType.UNDEFINED, v14)
      -- goto L164  (LOP_JUMP +29)
      local v12 = v12:getCostPerLiter(FillType.SEEDS, false)
      v11:updateFarmStats(v4, "expenses", v7 * v12 * 1.5)
      local v14 = self:getOwnerFarmId()
      v11:addMoney(-(v7 * v12 * 1.5), v14, MoneyType.PURCHASE_SEEDS)
    end
    self:updateLastWorkedArea(0)
    if v3.isWorking then
      v5:updateFarmStats(v4, "sownTime", dt / 60000)
    end
  end
  if self.isClient then
    if v3.isWorking then
      -- if v3.isWorkSamplePlaying then goto L216 end
      v4:playSample(v3.samples.work)
      v3.isWorkSamplePlaying = true
      return
    end
    if v3.isWorkSamplePlaying then
      v4:stopSample(v3.samples.work)
      v3.isWorkSamplePlaying = false
    end
  end
end
function SowingMachine:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_sowingMachine.samples)
    self.spec_sowingMachine.isWorkSamplePlaying = false
  end
end
function SowingMachine:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH and state ~= Vehicle.STATE_CHANGE_DETACH then
    -- if not Vehicle.STATE_CHANGE_FILLTYPE_CHANGE then goto L59 end
  end
  self.spec_sowingMachine.fillTypeSources = {}
  if FillType.SEEDS ~= nil then
    self.spec_sowingMachine.fillTypeSources[FillType.SEEDS] = {}
    FillUnit.addFillTypeSources(self.spec_sowingMachine.fillTypeSources, self.rootVehicle, self, {FillType.SEEDS})
    local v5 = v5:getFillTypeIndexByFruitTypeIndex(self.spec_sowingMachine.seeds[self.spec_sowingMachine.currentSeed])
    if v5 ~= nil then
      self:setFillTypeSourceDisplayFillType(v5)
    end
  end
end
function SowingMachine:onChangedFillType(fillUnitIndex, fillTypeIndex, oldFillTypeIndex)
  if fillUnitIndex == self.spec_sowingMachine.fillUnitIndex then
    v5:setFillType(self.spec_sowingMachine.animationNodes, fillTypeIndex)
  end
end
function SowingMachine:updateAiParameters()
  if self.addAITerrainDetailRequiredRange ~= nil then
    self:clearAITerrainDetailRequiredRange()
    self:clearAITerrainDetailProhibitedRange()
    self:clearAIFruitProhibitions()
    local v5 = v5:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 26, target 76)
    local v10 = SpecializationUtil.hasSpecialization(Cultivator, v5[1].specializations)
    if v10 then
      v10 = v5[1]:getIsCultivationEnabled()
      if v10 then
        v10:updateCultivatorAIRequirements()
        v10:updateCultivatorEnabledState()
      end
    end
    v10 = SpecializationUtil.hasSpecialization(Weeder, v9.specializations)
    if v10 then
      v10:updateWeederAIRequirements()
    end
    v10 = SpecializationUtil.hasSpecialization(Roller, v9.specializations)
    if v10 then
      v10:updateRollerAIRequirements()
    end
    -- TODO: structure LOP_FORNLOOP (pc 75, target 27)
    if v2 then
      local v6 = self:getUseSowingMachineAIRequirements()
      -- if not v6 then goto L145 end
      self:addAIGroundTypeRequirements(SowingMachine.AI_REQUIRED_GROUND_TYPES)
      self:addAIGroundTypeRequirements(SowingMachine.AI_OUTPUT_GROUND_TYPES)
    elseif v3 then
      v6 = self:getUseSowingMachineAIRequirements()
      -- if not v6 then goto L145 end
      self:clearAITerrainDetailRequiredRange()
      self:addAIGroundTypeRequirements(SowingMachine.AI_REQUIRED_GROUND_TYPES)
    else
      if v4 then
        v6 = self:getUseSowingMachineAIRequirements()
        -- if not v6 then goto L145 end
        self:clearAITerrainDetailRequiredRange()
        self:addAIGroundTypeRequirements(SowingMachine.AI_REQUIRED_GROUND_TYPES)
      else
        self:addAIGroundTypeRequirements(SowingMachine.AI_REQUIRED_GROUND_TYPES)
        if dt.useDirectPlanting then
          self:addAIGroundTypeRequirements(SowingMachine.AI_OUTPUT_GROUND_TYPES)
        end
      end
    end
    v6 = self:getUseSowingMachineAIRequirements()
    if v6 then
      local v7 = v7:getFruitTypeByIndex(dt.seeds[dt.currentSeed])
      if v7 ~= nil then
        if v7.cutState < v7.maxHarvestingGrowthState then
          self:clearAIFruitProhibitions()
          self:addAIFruitProhibitions(dt.seeds[dt.currentSeed], 0, v7.cutState - 1)
          self:addAIFruitProhibitions(dt.seeds[dt.currentSeed], v7.cutState + 1, v7.maxHarvestingGrowthState)
          return
        end
        self:setAIFruitProhibitions(v6, 0, v7.maxHarvestingGrowthState)
      end
    end
  end
end
function SowingMachine.getDefaultSpeedLimit()
  return 15
end
function SowingMachine:actionEventToggleSeedType(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getIsSeedChangeAllowed()
  if v5 then
    self:changeSeedIndex(1)
  end
end
function SowingMachine:actionEventToggleSeedTypeBack(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getIsSeedChangeAllowed()
  if v5 then
    self:changeSeedIndex(-1)
  end
end
function SowingMachine:loadSpecValueSeedFillTypes(dt, v2)
  local v4 = self:getValue("vehicle.storeData.specs.seedFruitTypeCategories")
  local v5 = self:getValue("vehicle.sowingMachine.seedFruitTypeCategories")
  local v3 = Utils.getNoNil(...)
  v5 = self:getValue("vehicle.storeData.specs.seedFruitTypes")
  local v6 = self:getValue("vehicle.sowingMachine.seedFruitTypes")
  v4 = Utils.getNoNil(...)
  return {categories = v3, names = v4}
end
function SowingMachine:getSpecValueSeedFillTypes(dt)
  if self.specs.seedFillTypes ~= nil then
    if self.specs.seedFillTypes.categories ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L29
      local v4 = v4:getFillTypesByFruitTypeCategoryName(self.specs.seedFillTypes.categories, nil)
    elseif self.specs.seedFillTypes.categories == nil and self.specs.seedFillTypes.names ~= nil then
      v4 = v4:getFillTypesByFruitTypeNames(self.specs.seedFillTypes.names, nil)
    end
    if v2 ~= nil then
      return v2
    end
  end
  return nil
end
