-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SprayerDoubledAmountEvent.lua")
Sprayer = {SPRAY_TYPE_XML_KEY = "vehicle.sprayer.sprayTypes.sprayType(?)", AI_REQUIRED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.PLOWED, FieldGroundType.ROLLED_SEEDBED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}}
function Sprayer.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    local v1 = SpecializationUtil.hasSpecialization(Sprayer, self.specializations)
    if v1 then
      v1 = self:getAIIsVineyardTool()
    end
    return v1, false
  end, AIDriveStrategyVineyardGroundTool)
  v0:addWorkAreaType("sprayer", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Sprayer")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sprayer#allowsSpraying", "Allows spraying", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sprayer#activateTankOnLowering", "Activate tank on lowering", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sprayer#activateOnLowering", "Activate on lowering", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.usageScales#scale", "Usage scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.usageScales#workingWidth", "Working width", 12)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sprayer.usageScales#workAreaIndex", "Work area that is used for working width reference instead of #workingWidth")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sprayer.usageScales.sprayUsageScale(?)#fillType", "Fill type name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.usageScales.sprayUsageScale(?)#scale", "Scale")
  Vehicle.xmlSchema:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. "#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. "#unloadInfoIndex", "Unload info index")
  Vehicle.xmlSchema:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. "#fillVolumeIndex", "Fill volume index")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY .. ".sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY .. ".sounds", "spray")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY .. ".animationNodes")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY .. ".effects")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Sprayer.SPRAY_TYPE_XML_KEY .. ".turnedAnimation#name", "Turned animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Sprayer.SPRAY_TYPE_XML_KEY .. ".turnedAnimation#turnOnSpeedScale", "Speed Scale while turned on", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Sprayer.SPRAY_TYPE_XML_KEY .. ".turnedAnimation#turnOffSpeedScale", "Speed Scale while turned off", "Inversed #turnOnSpeedScale")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Sprayer.SPRAY_TYPE_XML_KEY .. ".turnedAnimation#externalFill", "Animation is played while sprayer is externally filled", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.areaMarkers#leftNode", "AI marker left node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.areaMarkers#rightNode", "AI marker right node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.areaMarkers#backNode", "AI marker back node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.sizeMarkers#leftNode", "AI size marker left node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.sizeMarkers#rightNode", "AI size marker right node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai.sizeMarkers#backNode", "AI size marker back node")
  AIImplement.registerAICollisionTriggerXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY .. ".ai")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Sprayer.SPRAY_TYPE_XML_KEY .. "#fillTypes", "Fill types")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Sprayer.SPRAY_TYPE_XML_KEY .. ".usageScales#workingWidth", "Work width", 12)
  Vehicle.xmlSchema:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. ".usageScales#workAreaIndex", "Work area that is used for working width reference instead of #workingWidth")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, Sprayer.SPRAY_TYPE_XML_KEY)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.sprayer.effects")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.sprayer.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.sprayer.sounds", "spray")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.sprayer.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sprayer.animation#name", "Spray animation name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sprayer#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sprayer#unloadInfoIndex", "Unload info index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.sprayer#fillVolumeIndex", "Fill volume index")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.sprayer#fillVolumeDischargeScrollSpeed", "Fill volume discharge scroll speed", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.doubledAmount#decreasedSpeed", "Speed while doubled amount is sprayed", "automatically calculated")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.doubledAmount#decreaseFactor", "Decrease factor that is applied on speedLimit while doubled amount is sprayed", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sprayer.doubledAmount#toggleButton", "Name of input action to toggle doubled amount", "IMPLEMENT_EXTRA4")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.sprayer.doubledAmount#deactivateText", "Deactivated text", "action_deactivateDoubledSprayAmount")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.sprayer.doubledAmount#activateText", "Activate text", "action_activateDoubledSprayAmount")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.sprayer.turnedAnimation#name", "Turned animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.turnedAnimation#turnOnSpeedScale", "Speed Scale while turned on", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.sprayer.turnedAnimation#turnOffSpeedScale", "Speed Scale while turned off", "Inversed #turnOnSpeedScale")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.sprayer.turnedAnimation#externalFill", "Animation is played while sprayer is externally filled", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. "#sprayType", "Spray type index")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#sprayType", "Spray type index")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Sprayer.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(WorkArea, specializations)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, specializations)
    end
  end
  return v1
end
function Sprayer.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onSprayTypeChange")
end
function Sprayer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processSprayerArea", Sprayer.processSprayerArea)
  SpecializationUtil.registerFunction(vehicleType, "getIsSprayerExternallyFilled", Sprayer.getIsSprayerExternallyFilled)
  SpecializationUtil.registerFunction(vehicleType, "getExternalFill", Sprayer.getExternalFill)
  SpecializationUtil.registerFunction(vehicleType, "getAreEffectsVisible", Sprayer.getAreEffectsVisible)
  SpecializationUtil.registerFunction(vehicleType, "updateSprayerEffects", Sprayer.updateSprayerEffects)
  SpecializationUtil.registerFunction(vehicleType, "getSprayerUsage", Sprayer.getSprayerUsage)
  SpecializationUtil.registerFunction(vehicleType, "getUseSprayerAIRequirements", Sprayer.getUseSprayerAIRequirements)
  SpecializationUtil.registerFunction(vehicleType, "setSprayerAITerrainDetailProhibitedRange", Sprayer.setSprayerAITerrainDetailProhibitedRange)
  SpecializationUtil.registerFunction(vehicleType, "getSprayerFillUnitIndex", Sprayer.getSprayerFillUnitIndex)
  SpecializationUtil.registerFunction(vehicleType, "loadSprayTypeFromXML", Sprayer.loadSprayTypeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getActiveSprayType", Sprayer.getActiveSprayType)
  SpecializationUtil.registerFunction(vehicleType, "getIsSprayTypeActive", Sprayer.getIsSprayTypeActive)
  SpecializationUtil.registerFunction(vehicleType, "setSprayerDoubledAmountActive", Sprayer.setSprayerDoubledAmountActive)
  SpecializationUtil.registerFunction(vehicleType, "getSprayerDoubledAmountActive", Sprayer.getSprayerDoubledAmountActive)
end
function Sprayer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIMarkers", Sprayer.getAIMarkers)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAISizeMarkers", Sprayer.getAISizeMarkers)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementCollisionTrigger", Sprayer.getAIImplementCollisionTrigger)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDrawFirstFillText", Sprayer.getDrawFirstFillText)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", Sprayer.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleTurnedOn", Sprayer.getCanToggleTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", Sprayer.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Sprayer.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Sprayer.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Sprayer.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRawSpeedLimit", Sprayer.getRawSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillVolumeUVScrollSpeed", Sprayer.getFillVolumeUVScrollSpeed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIRequiresTurnOffOnHeadland", Sprayer.getAIRequiresTurnOffOnHeadland)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Sprayer.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Sprayer.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getEffectByNode", Sprayer.getEffectByNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getVariableWorkWidthUsage", Sprayer.getVariableWorkWidthUsage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementUseVineSegment", Sprayer.getAIImplementUseVineSegment)
end
function Sprayer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLowered", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onSprayTypeChange", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementEnd", Sprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onVariableWorkWidthSectionChanged", Sprayer)
end
function Sprayer:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sprayParticles.emitterShape", "vehicle.sprayer.effects.effectNode#effectClass='ParticleEffect'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.sprayer#needsTankActivation")
  local v3 = v3:getValue("vehicle.sprayer#allowsSpraying", true)
  self.spec_sprayer.allowsSpraying = v3
  v3 = v3:getValue("vehicle.sprayer#activateTankOnLowering", false)
  self.spec_sprayer.activateTankOnLowering = v3
  v3 = v3:getValue("vehicle.sprayer#activateOnLowering", false)
  self.spec_sprayer.activateOnLowering = v3
  self.spec_sprayer.usageScale = {}
  local v4 = v4:getValue("vehicle.sprayer.usageScales#scale", 1)
  self.spec_sprayer.usageScale.default = v4
  v4 = v4:getValue("vehicle.sprayer.usageScales#workingWidth", 12)
  self.spec_sprayer.usageScale.workingWidth = v4
  v4 = v4:getValue("vehicle.sprayer.usageScales#workAreaIndex")
  self.spec_sprayer.usageScale.workAreaIndex = v4
  self.spec_sprayer.usageScale.fillTypeScales = {}
  while true do
    v4 = string.format("vehicle.sprayer.usageScales.sprayUsageScale(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = v5:getValue(v4 .. "#fillType")
    v6 = v6:getValue(v4 .. "#scale")
    if v5 ~= nil and v6 ~= nil then
      v7 = v7:getFillTypeIndexByName(v5)
      if v7 ~= nil then
        v2.usageScale.fillTypeScales[v7] = v6
      else
        print("Warning: Invalid spray usage scale fill type '" .. v5 .. "' in '" .. self.configFileName .. "'")
      end
    end
  end
  v2.sprayTypes = {}
  while true do
    v4 = string.format("vehicle.sprayer.sprayTypes.sprayType(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadSprayTypeFromXML(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.sprayTypes, {})
    end
  end
  v2.lastActiveSprayType = nil
  if self.isClient then
    v4 = v4:loadEffect(self.xmlFile, "vehicle.sprayer.effects", self.components, self, self.i3dMappings)
    v2.effects = v4
    v4 = v4:getValue("vehicle.sprayer.animation#name", "")
    v2.animationName = v4
    v2.samples = {}
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.sprayer.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.sprayer.sounds", "spray", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.spray = v5
    v2.sampleFillEnabled = false
    v2.sampleFillStopTime = -1
    v2.lastFillLevel = -1
    v4 = v4:loadAnimations(self.xmlFile, "vehicle.sprayer.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v4
  end
  if self.addAIGroundTypeRequirements ~= nil then
    self:addAIGroundTypeRequirements(Sprayer.AI_REQUIRED_GROUND_TYPES)
  end
  v2.supportedSprayTypes = {}
  v4 = v4:getValue("vehicle.sprayer#fillUnitIndex", 1)
  v2.fillUnitIndex = v4
  v4 = v4:getValue("vehicle.sprayer#unloadInfoIndex", 1)
  v2.unloadInfoIndex = v4
  v4 = v4:getValue("vehicle.sprayer#fillVolumeIndex")
  v2.fillVolumeIndex = v4
  v4 = v4:getValue("vehicle.sprayer#fillVolumeDischargeScrollSpeed", "0 0 0", true)
  v2.dischargeUVScrollSpeed = v4
  v4 = self:getFillUnitByIndex(v2.fillUnitIndex)
  if v4 == nil then
    Logging.xmlError(self.xmlFile, "FillUnit '%d' not defined!", v2.fillUnitIndex)
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    return
  end
  v4 = v4:getValue("vehicle.sprayer.doubledAmount#decreasedSpeed")
  if v4 == nil then
    v5 = v5:getValue("vehicle.sprayer.doubledAmount#decreaseFactor", 0.5)
    v6 = self:getSpeedLimit()
  end
  v2.doubledAmountSpeed = v4
  v2.doubledAmountIsActive = false
  v5 = v5:getValue("vehicle.sprayer.doubledAmount#toggleButton")
  if v5 ~= nil then
    v2.toggleDoubledAmountInputBinding = InputAction[v5]
  end
  if not v2.toggleDoubledAmountInputBinding then
  end
  v2.toggleDoubledAmountInputBinding = v6
  v6 = v6:getValue("vehicle.sprayer.doubledAmount#deactivateText", "action_deactivateDoubledSprayAmount", self.customEnvironment)
  v2.doubledAmountDeactivateText = v6
  v6 = v6:getValue("vehicle.sprayer.doubledAmount#activateText", "action_activateDoubledSprayAmount", self.customEnvironment)
  v2.doubledAmountActivateText = v6
  v6 = v6:getValue("vehicle.sprayer.turnedAnimation#name", "")
  v2.turnedAnimation = v6
  v6 = v6:getValue("vehicle.sprayer.turnedAnimation#turnOnSpeedScale", 1)
  v2.turnedAnimationTurnOnSpeedScale = v6
  v6 = v6:getValue("vehicle.sprayer.turnedAnimation#turnOffSpeedScale", -v2.turnedAnimationTurnOnSpeedScale)
  v2.turnedAnimationTurnOffSpeedScale = v6
  v6 = v6:getValue("vehicle.sprayer.turnedAnimation#externalFill", true)
  v2.turnedAnimationExternalFill = v6
  v2.needsToBeFilledToTurnOn = true
  v2.useSpeedLimit = true
  v2.isWorking = false
  v2.lastEffectsState = false
  local v8 = self:getSprayerFillUnitIndex()
  v6 = self:getFillUnitAllowsFillType(v8, FillType.LIQUIDMANURE)
  if not v6 then
    v8 = self:getSprayerFillUnitIndex()
    v6 = self:getFillUnitAllowsFillType(v8, FillType.DIGESTATE)
  end
  v2.isSlurryTanker = v6
  v8 = self:getSprayerFillUnitIndex()
  v6 = self:getFillUnitAllowsFillType(v8, FillType.MANURE)
  v2.isManureSpreader = v6
  if not v2.isSlurryTanker then
  end
  v2.isFertilizerSprayer = v6
  v2.workAreaParameters = {sprayVehicle = nil, sprayVehicleFillUnitIndex = nil, lastChangedArea = 0, lastTotalArea = 0, lastIsExternallyFilled = false, lastSprayTime = -math.huge, usage = 0, usagePerMin = 0}
end
function Sprayer:onDelete()
  v2:deleteEffects(self.spec_sprayer.effects)
  v2:deleteSamples(self.spec_sprayer.samples)
  v2:deleteAnimations(self.spec_sprayer.animationNodes)
  if self.spec_sprayer.sprayTypes ~= nil then
    for v5, v6 in ipairs(self.spec_sprayer.sprayTypes) do
      v7:deleteEffects(v6.effects)
      v7:deleteSamples(v6.samples)
      v7:deleteAnimations(v6.animationNodes)
    end
  end
end
function Sprayer:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local activeSprayType = self:getActiveSprayType()
  if activeSprayType ~= nil and activeSprayType ~= self.spec_sprayer.lastActiveSprayType then
    for v10, v11 in ipairs(self.spec_sprayer.sprayTypes) do
      if not (v11 == v6.lastActiveSprayType) then
        continue
      end
      v12:stopEffects(v11.effects)
      v12:stopAnimations(v11.animationNodes)
    end
    SpecializationUtil.raiseEvent(self, "onSprayTypeChange", activeSprayType)
    v6.lastActiveSprayType = activeSprayType
    self:updateSprayerEffects(true)
  end
  if self.isClient and self.spec_sprayer.actionEvents[self.spec_sprayer.toggleDoubledAmountInputBinding] ~= nil then
    if self.spec_sprayer.doubledAmountIsActive then
    else
    end
    v9:setActionEventText(v7.actionEventId, v8)
    v9, v10 = self:getSprayerDoubledAmountActive(v6.workAreaParameters.sprayType)
    v11:setActionEventActive(v7.actionEventId, v10)
  end
  if self.isServer and self.spec_sprayer.pendingActivationAfterLowering then
    v7 = self:getCanBeTurnedOn()
    if v7 then
      self:setIsTurnedOn(true)
      self.spec_sprayer.pendingActivationAfterLowering = false
    end
  end
end
function Sprayer:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_sprayer.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_sprayer.actionEvents, self.spec_sprayer.toggleDoubledAmountInputBinding, self, Sprayer.actionEventDoubledAmount, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
    end
  end
end
function Sprayer:actionEventDoubledAmount(actionName, inputValue, callbackState, isAnalog)
  self:setSprayerDoubledAmountActive(not self.spec_sprayer.doubledAmountIsActive)
end
function Sprayer:processSprayerArea(workArea, dt)
  local v4 = self:getIsAIActive()
  if v4 and self.isServer then
    if self.spec_sprayer.workAreaParameters.sprayFillType ~= nil then
      -- if v0.spec_sprayer.workAreaParameters.sprayFillType ~= FillType.UNKNOWN then goto L34 end
    end
    local v7 = AIMessageErrorOutOfFill.new()
    self.rootVehicle:stopCurrentAIJob(...)
    return 0, 0
  end
  if v3.workAreaParameters.sprayFillLevel <= 0 then
    return 0, 0
  end
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  local v14 = self:getSprayerDoubledAmountActive(v3.workAreaParameters.sprayType)
  if v14 then
  else
  end
  local v14, v15 = FSDensityMapUtil.updateSprayArea(v4, v6, v7, v9, v10, v12, v3.workAreaParameters.sprayType, v13)
  v3.workAreaParameters.isActive = true
  v3.workAreaParameters.lastChangedArea = v3.workAreaParameters.lastChangedArea + v14
  v3.workAreaParameters.lastStatsArea = v3.workAreaParameters.lastStatsArea + v14
  v3.workAreaParameters.lastTotalArea = v3.workAreaParameters.lastTotalArea + v15
  v3.workAreaParameters.lastSprayTime = g_time
  local v16 = self:getLastSpeed()
  if 1 < v16 then
    v3.isWorking = true
  end
  return v14, v15
end
function Sprayer:getIsSprayerExternallyFilled()
  local v1 = self:getIsAIActive()
  if v1 then
    local v3 = self:getSprayerFillUnitIndex()
    v1 = self:getFillUnitCapacity(...)
    if v1 == 0 then
      for v7, v8 in ipairs(self.spec_sprayer.supportedSprayTypes) do
        if not (0 < #v2.fillTypeSources[v8]) then
          continue
        end
        break
      end
      if not v3 then
        return false
      end
    end
    if self.spec_sprayer.isSlurryTanker then
      -- if 1 < g_currentMission.missionInfo.helperSlurrySource then goto L60 end
    end
    if v2.isManureSpreader then
      -- if 1 < g_currentMission.missionInfo.helperManureSource then goto L60 end
    end
    if v2.isFertilizerSprayer then
    end
    return v3
  end
  return false
end
function Sprayer:getExternalFill(fillType, dt)
  if fillType ~= FillType.UNKNOWN then
  end
  local v7 = self:getSprayerFillUnitIndex()
  local v5 = self:getFillUnitAllowsFillType(v7, FillType.LIQUIDMANURE)
  local v8 = self:getSprayerFillUnitIndex()
  local v6 = self:getFillUnitAllowsFillType(v8, FillType.DIGESTATE)
  local v9 = self:getSprayerFillUnitIndex()
  v7 = self:getFillUnitAllowsFillType(v9, FillType.MANURE)
  local v10 = self:getSprayerFillUnitIndex()
  v8 = self:getFillUnitAllowsFillType(v10, FillType.LIQUIDFERTILIZER)
  local v11 = self:getSprayerFillUnitIndex()
  v9 = self:getFillUnitAllowsFillType(v11, FillType.FERTILIZER)
  local v12 = self:getSprayerFillUnitIndex()
  v10 = self:getFillUnitAllowsFillType(v12, FillType.HERBICIDE)
  local farmId = self:getActiveFarm()
  local v14 = self:getLastTouchedFarmlandFarmId()
  if fillType ~= FillType.LIQUIDMANURE and fillType ~= FillType.DIGESTATE then
    -- if not true then goto L190 end
    -- if not v5 or v6 then goto L190 end
  end
  if g_currentMission.missionInfo.helperSlurrySource == 2 then
    local v15 = v15:getCostPerLiter(FillType.LIQUIDMANURE, false)
    if v15 then
    else
    end
    v15 = self:getSprayerUsage(fillType, dt)
    -- if not v0.isServer then goto L361 end
    local v17 = v17:getCostPerLiter(fillType, false)
    v16:updateFarmStats(v14, "expenses", v15 * v17 * 1.5)
    v16:addMoney(-(v15 * v17 * 1.5), farmId, MoneyType.PURCHASE_FERTILIZER)
  elseif 2 < g_currentMission.missionInfo.helperSlurrySource and self.isServer and g_currentMission.liquidManureLoadingStations[g_currentMission.missionInfo.helperSlurrySource - 2] ~= nil then
    local v16 = self:getSprayerUsage(FillType.LIQUIDMANURE, dt)
    if not farmId then
      local v20 = self:getOwnerFarmId()
    end
    v16 = v15:removeFillLevel(v18, v19, v20)
    if 0.000001 < v12 - v16 then
    else
      if not farmId then
        local v21 = self:getOwnerFarmId()
      end
      v17 = v15:removeFillLevel(v19, v20, v21)
      if 0.000001 < v12 - v17 then
        -- goto L361  (LOP_JUMP +171)
        if FillType.DIGESTATE ~= FillType.MANURE then
          -- if FillType.DIGESTATE ~= FillType.UNKNOWN then goto L284 end
          -- if not v7 then goto L284 end
        end
        if g_currentMission.missionInfo.helperManureSource == 2 then
          v15 = self:getSprayerUsage(FillType.MANURE, dt)
          -- if not v0.isServer then goto L361 end
          v17 = v17:getCostPerLiter(FillType.MANURE, false)
          v16:updateFarmStats(v14, "expenses", v15 * v17 * 1.5)
          v16:addMoney(-(v15 * v17 * 1.5), farmId, MoneyType.PURCHASE_FERTILIZER)
        elseif 2 < g_currentMission.missionInfo.helperManureSource and self.isServer and g_currentMission.manureLoadingStations[g_currentMission.missionInfo.helperManureSource - 2] ~= nil then
          v16 = self:getSprayerUsage(FillType.MANURE, dt)
          if not farmId then
            v20 = self:getOwnerFarmId()
          end
          v16 = v15:removeFillLevel(v18, v19, v20)
          if 0.000001 < v12 - v16 then
            -- goto L361  (LOP_JUMP +77)
            if FillType.MANURE ~= FillType.FERTILIZER and FillType.MANURE ~= FillType.LIQUIDFERTILIZER and FillType.MANURE ~= FillType.HERBICIDE and FillType.MANURE ~= FillType.LIME then
              -- if FillType.MANURE ~= FillType.UNKNOWN then goto L361 end
              if not v8 and not v9 then
                -- if not v10 then goto L361 end
              end
            end
            if g_currentMission.missionInfo.helperBuyFertilizer then
              if fillType == FillType.UNKNOWN then
                if v8 then
                elseif v9 then
                else
                  if v10 then
                  end
                end
              end
              v15 = self:getSprayerUsage(fillType, dt)
              if self.isServer then
                v17 = v17:getCostPerLiter(fillType, false)
                v16:updateFarmStats(v14, "expenses", v15 * v17 * 1.5)
                v16:addMoney(-(v15 * v17 * 1.5), farmId, MoneyType.PURCHASE_FERTILIZER)
              end
            end
          end
        end
      end
    end
  end
  if v3 then
    return fillType, v12
  end
  return FillType.UNKNOWN, 0
end
function Sprayer:getAreEffectsVisible()
  if g_time >= self.spec_sprayer.workAreaParameters.lastSprayTime + 100 then
  end
  return true
end
function Sprayer:updateSprayerEffects(force)
  local effectsState = self:getAreEffectsVisible()
  if effectsState == self.spec_sprayer.lastEffectsState then
    -- if not v1 then goto L152 end
  end
  if effectsState then
    local v6 = self:getSprayerFillUnitIndex()
    local v4 = self:getFillUnitLastValidFillType(...)
    if v4 == FillType.UNKNOWN then
      local v7 = self:getSprayerFillUnitIndex()
      local v5 = self:getFillUnitFirstSupportedFillType(...)
    end
    v5:setFillType(dt.effects, v4)
    v5:startEffects(dt.effects)
    v5:playSample(dt.samples.spray)
    v5 = self:getActiveSprayType()
    if v5 ~= nil then
      v6:setFillType(v5.effects, v4)
      v6:startEffects(v5.effects)
      v6:startAnimations(v5.animationNodes)
      v6:playSample(v5.samples.spray)
    end
    v6:startAnimations(dt.animationNodes)
  else
    v4:stopEffects(dt.effects)
    v4:stopAnimations(dt.animationNodes)
    v4:stopSample(dt.samples.spray)
    for v7, v8 in ipairs(dt.sprayTypes) do
      v9:stopEffects(v8.effects)
      v9:stopAnimations(v8.animationNodes)
      v9:stopSample(v8.samples.spray)
    end
  end
  dt.lastEffectsState = effectsState
end
function Sprayer:getSprayerUsage(fillType, dt)
  if fillType == FillType.UNKNOWN then
    return 0
  end
  local v4 = Utils.getNoNil(self.spec_sprayer.usageScale.fillTypeScales[fillType], self.spec_sprayer.usageScale.default)
  local v6 = v6:getSprayTypeByFillTypeIndex(fillType)
  if v6 ~= nil then
  end
  local activeSprayType = self:getActiveSprayType()
  if activeSprayType ~= nil then
  end
  if v7.workAreaIndex ~= nil then
    local v10 = self:getWorkAreaWidth(v7.workAreaIndex)
  else
  end
  return v4 * v5 * self.speedLimit * v9 * dt * 0.001
end
function Sprayer.getUseSprayerAIRequirements(v0)
  return true
end
function Sprayer:setSprayerAITerrainDetailProhibitedRange(fillType)
  local dt = self:getUseSprayerAIRequirements()
  if dt and self.addAITerrainDetailProhibitedRange ~= nil then
    self:clearAITerrainDetailProhibitedRange()
    self:clearAIFruitRequirements()
    self:clearAIFruitProhibitions()
    self:addAIGroundTypeRequirements(Sprayer.AI_REQUIRED_GROUND_TYPES)
    dt = dt:getSprayTypeByFillTypeIndex(fillType)
    if dt ~= nil then
      if dt.isHerbicide then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L123
        local v4, v5, v6 = g_currentMission.weedSystem:getDensityMapData()
        local v7 = g_currentMission.weedSystem:getHerbicideReplacements()
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L123
        for farmId, v14 in pairs(v7.weed.replacements) do
          if v8 == -1 then
          elseif farmId ~= v9 + 1 then
            self:addAIFruitRequirement(nil, v8, v9, v4, v5, v6)
          end
        end
        -- cmp-jump LOP_JUMPXEQKN R8 aux=0x15 -> L123
        self:addAIFruitRequirement(nil, v8, v9, v4, v5, v6)
      else
        v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
        local v7, v8, v9 = v7:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
        v10 = v10:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
        self:addAITerrainDetailProhibitedRange(dt.sprayGroundType, dt.sprayGroundType, v5, v6)
      end
      if not dt.isHerbicide then
        -- if not v2.isFertilizer then goto L168 end
      end
      v4 = v4:getFruitTypes()
      for v6, v7 in pairs(...) do
        if not (v7.terrainDataPlaneId ~= nil) then
          continue
        end
        v8 = v8:lower()
        if not (v8 ~= "grass") then
          continue
        end
        if not (v7.minHarvestingGrowthState ~= nil) then
          continue
        end
        if not (v7.maxHarvestingGrowthState ~= nil) then
          continue
        end
        self:addAIFruitProhibitions(v7.index, v7.minHarvestingGrowthState, v7.maxHarvestingGrowthState)
      end
    end
  end
end
function Sprayer:getSprayerFillUnitIndex()
  local sprayType = self:getActiveSprayType()
  if sprayType ~= nil then
    return sprayType.fillUnitIndex
  end
  return self.spec_sprayer.fillUnitIndex
end
function Sprayer:loadSprayTypeFromXML(xmlFile, key, sprayType)
  local v4 = xmlFile:getValue(key .. "#fillUnitIndex", 1)
  sprayType.fillUnitIndex = v4
  v4 = xmlFile:getValue(key .. "#unloadInfoIndex", 1)
  sprayType.unloadInfoIndex = v4
  v4 = xmlFile:getValue(key .. "#fillVolumeIndex")
  sprayType.fillVolumeIndex = v4
  sprayType.samples = {}
  local v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
  sprayType.samples.work = v5
  v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "spray", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
  sprayType.samples.spray = v5
  v4 = v4:loadEffect(xmlFile, key .. ".effects", self.components, self, self.i3dMappings)
  sprayType.effects = v4
  v4 = v4:loadAnimations(xmlFile, key .. ".animationNodes", self.components, self, self.i3dMappings)
  sprayType.animationNodes = v4
  v4 = v4:getValue(key .. ".turnedAnimation#name", "")
  sprayType.turnedAnimation = v4
  v4 = v4:getValue(key .. ".turnedAnimation#turnOnSpeedScale", 1)
  sprayType.turnedAnimationTurnOnSpeedScale = v4
  v4 = v4:getValue(key .. ".turnedAnimation#turnOffSpeedScale", -sprayType.turnedAnimationTurnOnSpeedScale)
  sprayType.turnedAnimationTurnOffSpeedScale = v4
  v4 = v4:getValue(key .. ".turnedAnimation#externalFill", true)
  sprayType.turnedAnimationExternalFill = v4
  sprayType.ai = {}
  v5 = v5:getValue(key .. ".ai.areaMarkers#leftNode", nil, self.components, self.i3dMappings)
  sprayType.ai.leftMarker = v5
  v5 = v5:getValue(key .. ".ai.areaMarkers#rightNode", nil, self.components, self.i3dMappings)
  sprayType.ai.rightMarker = v5
  v5 = v5:getValue(key .. ".ai.areaMarkers#backNode", nil, self.components, self.i3dMappings)
  sprayType.ai.backMarker = v5
  v5 = v5:getValue(key .. ".ai.sizeMarkers#leftNode", nil, self.components, self.i3dMappings)
  sprayType.ai.sizeLeftMarker = v5
  v5 = v5:getValue(key .. ".ai.sizeMarkers#rightNode", nil, self.components, self.i3dMappings)
  sprayType.ai.sizeRightMarker = v5
  v5 = v5:getValue(key .. ".ai.sizeMarkers#backNode", nil, self.components, self.i3dMappings)
  sprayType.ai.sizeBackMarker = v5
  if self.loadAICollisionTriggerFromXML ~= nil then
    v5 = self:loadAICollisionTriggerFromXML(self.xmlFile, key .. ".ai")
    sprayType.ai.collisionTrigger = v5
  end
  v4 = xmlFile:getValue(key .. "#fillTypes")
  if v4 ~= nil then
    v5 = v4:split(" ")
    sprayType.fillTypes = v5
  end
  sprayType.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(self.xmlFile, key, sprayType.objectChanges, self.components, self)
  ObjectChangeUtil.setObjectChanges(sprayType.objectChanges, false)
  sprayType.usageScale = {}
  local v6 = v6:getValue(key .. ".usageScales#workingWidth", 12)
  sprayType.usageScale.workingWidth = v6
  v6 = v6:getValue(key .. ".usageScales#workAreaIndex")
  sprayType.usageScale.workAreaIndex = v6
  return true
end
function Sprayer:getActiveSprayType()
  for v5, v6 in ipairs(self.spec_sprayer.sprayTypes) do
    local v7 = self:getIsSprayTypeActive(v6)
    if not v7 then
      continue
    end
    return v6
  end
  return nil
end
function Sprayer:getIsSprayTypeActive(sprayType)
  if sprayType.fillTypes ~= nil then
    if not sprayType.fillUnitIndex then
    end
    local isExternallyFilled = self:getFillUnitFillType(v5)
    for v7, v8 in ipairs(sprayType.fillTypes) do
      local v9 = v9:getFillTypeIndexByName(v8)
      if not (isExternallyFilled == v9) then
        continue
      end
    end
    if not dt then
      return false
    end
  end
  return true
end
function Sprayer:setSprayerDoubledAmountActive(isActive, noEventSend)
  if isActive ~= self.spec_sprayer.doubledAmountIsActive then
    self.spec_sprayer.doubledAmountIsActive = isActive
    SprayerDoubledAmountEvent.sendEvent(self, isActive, noEventSend)
  end
end
function Sprayer:getSprayerDoubledAmountActive(sprayTypeIndex)
  if not self.spec_sprayer.isFertilizerSprayer then
    if sprayTypeIndex == nil then
      return self.spec_sprayer.doubledAmountIsActive, true
    end
    local isExternallyFilled = isExternallyFilled:getSprayTypeByIndex(sprayTypeIndex)
    if isExternallyFilled ~= nil then
      -- if not v3.isFertilizer then goto L31 end
      return dt.doubledAmountIsActive, true
    else
      return dt.doubledAmountIsActive, true
    end
  end
  return false, false
end
function Sprayer:getAIMarkers(superFunc)
  local sprayType = self:getActiveSprayType()
  if sprayType ~= nil and not self.spec_aiImplement.useAttributesOfAttachedImplement and sprayType.ai.rightMarker ~= nil then
    if self.spec_aiImplement.aiMarkersInverted then
      return sprayType.ai.rightMarker, sprayType.ai.leftMarker, sprayType.ai.backMarker, true
    end
    return sprayType.ai.leftMarker, sprayType.ai.rightMarker, sprayType.ai.backMarker, false
  end
  return superFunc(self)
end
function Sprayer:getAISizeMarkers(superFunc)
  local sprayType = self:getActiveSprayType()
  if sprayType ~= nil and sprayType.ai.sizeLeftMarker ~= nil then
    return sprayType.ai.sizeLeftMarker, sprayType.ai.sizeRightMarker, sprayType.ai.sizeBackMarker
  end
  return superFunc(self)
end
function Sprayer:getAIImplementCollisionTrigger(superFunc)
  local sprayType = self:getActiveSprayType()
  if sprayType ~= nil and sprayType.ai.collisionTrigger ~= nil then
    return sprayType.ai.collisionTrigger
  end
  return superFunc(self)
end
function Sprayer:getDrawFirstFillText(superFunc)
  if self.isClient and self.spec_sprayer.needsToBeFilledToTurnOn then
    local isExternallyFilled = self:getIsActiveForInput()
    if isExternallyFilled then
      isExternallyFilled = self:getIsSelected()
      if isExternallyFilled and not self.isAlwaysTurnedOn then
        isExternallyFilled = self:getCanBeTurnedOn()
        if not isExternallyFilled then
          local v5 = self:getSprayerFillUnitIndex()
          isExternallyFilled = self:getFillUnitFillLevel(...)
          if isExternallyFilled <= 0 then
            v5 = self:getSprayerFillUnitIndex()
            isExternallyFilled = self:getFillUnitCapacity(...)
            if 0 < isExternallyFilled then
              return true
            end
          end
        end
      end
    end
  end
  return superFunc(self)
end
function Sprayer:getAreControlledActionsAllowed(superFunc)
  if self.spec_sprayer.needsToBeFilledToTurnOn then
    local isExternallyFilled = self:getFillUnitFillLevel(self.spec_sprayer.fillUnitIndex)
    if isExternallyFilled <= 0 then
      isExternallyFilled = self:getFillUnitCapacity(self.spec_sprayer.fillUnitIndex)
      if isExternallyFilled ~= 0 then
        local v4 = v4:getText("info_firstFillTheTool")
        return false
      end
    end
  end
  isExternallyFilled = superFunc(self)
  return isExternallyFilled
end
function Sprayer:getCanToggleTurnedOn(superFunc)
  if self.isClient and self.spec_sprayer.needsToBeFilledToTurnOn then
    local isExternallyFilled = self:getCanBeTurnedOn()
    if not isExternallyFilled then
      local v5 = self:getSprayerFillUnitIndex()
      isExternallyFilled = self:getFillUnitCapacity(...)
      if isExternallyFilled <= 0 then
        return false
      end
    end
  end
  return superFunc(self)
end
function Sprayer:getCanBeTurnedOn(superFunc)
  if not self.spec_sprayer.allowsSpraying then
    return false
  end
  local v5 = self:getSprayerFillUnitIndex()
  local isExternallyFilled = self:getFillUnitFillLevel(...)
  if isExternallyFilled <= 0 and dt.needsToBeFilledToTurnOn then
    isExternallyFilled = self:getIsAIActive()
    if not isExternallyFilled then
      for v7, v8 in ipairs(dt.supportedSprayTypes) do
        for v12, farmId in ipairs(dt.fillTypeSources[v8]) do
          local v15 = farmId.vehicle:getFillUnitFillType(farmId.fillUnitIndex)
          if not (v15 == v8) then
            continue
          end
          v15 = farmId.vehicle:getFillUnitFillLevel(farmId.fillUnitIndex)
          if not (0 < v15) then
            continue
          end
          break
        end
      end
      if isExternallyFilled == nil then
        return false
      end
    end
  end
  isExternallyFilled = superFunc(self)
  return isExternallyFilled
end
function Sprayer.loadWorkAreaFromXML(v0, fillType, dt, isExternallyFilled, v4)
  local v5 = fillType(v0, dt, isExternallyFilled, v4)
  if dt["type"] == WorkAreaType.DEFAULT then
    dt["type"] = WorkAreaType.SPRAYER
  end
  local v6 = isExternallyFilled:getValue(v4 .. "#sprayType")
  dt.sprayType = v6
  return v5
end
function Sprayer:getIsWorkAreaActive(superFunc, workArea)
  if workArea.sprayType ~= nil then
    local isExternallyFilled = self:getActiveSprayType()
    if isExternallyFilled ~= nil and isExternallyFilled.index ~= workArea.sprayType then
      return false
    end
  end
  isExternallyFilled = superFunc(self, workArea)
  return isExternallyFilled
end
function Sprayer:doCheckSpeedLimit(superFunc)
  local dt = superFunc(self)
  if not dt then
    dt = self:getIsTurnedOn()
    if dt then
    end
  end
  return dt
end
function Sprayer:getRawSpeedLimit(superFunc)
  if self.spec_sprayer.workAreaParameters ~= nil then
  end
  local v4 = self:getSprayerDoubledAmountActive(isExternallyFilled)
  if v4 then
    v4 = self:getIsTurnedOn()
    if v4 then
      return dt.doubledAmountSpeed
    end
  end
  v4 = superFunc(self)
  return v4
end
function Sprayer:getFillVolumeUVScrollSpeed(superFunc, fillVolumeIndex)
  local sprayType = self:getActiveSprayType()
  if sprayType ~= nil then
  end
  if fillVolumeIndex == v4 then
    local v6 = self:getIsTurnedOn()
    if v6 then
      v6 = self:getIsSprayerExternallyFilled()
      if not v6 then
        return isExternallyFilled.dischargeUVScrollSpeed[1], isExternallyFilled.dischargeUVScrollSpeed[2], isExternallyFilled.dischargeUVScrollSpeed[3]
      end
    end
  end
  v6 = superFunc(self, fillVolumeIndex)
  return v6
end
function Sprayer.getAIRequiresTurnOffOnHeadland(v0, fillType)
  return true
end
function Sprayer:getDirtMultiplier(superFunc)
  if self.spec_sprayer.isWorking then
    local v4 = superFunc(self)
    local v7 = self:getWorkDirtMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  return superFunc(self)
end
function Sprayer:getWearMultiplier(superFunc)
  if self.spec_sprayer.isWorking then
    local v4 = superFunc(self)
    local v7 = self:getWorkWearMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  return superFunc(self)
end
function Sprayer:getEffectByNode(superFunc, node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  if node == self.spec_sprayer.effects[1].node then
    return self.spec_sprayer.effects[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  -- TODO: structure LOP_FORNPREP (pc 22, target 42)
  for v10 = 1, #isExternallyFilled.sprayTypes[1].effects do
    if node == v7.effects[v10].node then
      return v7.effects[v10]
    end
    -- TODO: structure LOP_FORNLOOP (pc 40, target 32)
  end
  return superFunc(self, node)
end
function Sprayer:getVariableWorkWidthUsage(superFunc)
  local usage = superFunc(self)
  if usage == nil then
    local isExternallyFilled = self:getIsTurnedOn()
    if isExternallyFilled then
      return self.spec_sprayer.workAreaParameters.usagePerMin
    end
    return 0
  end
  return usage
end
function Sprayer.getAIImplementUseVineSegment(v0, fillType, dt, isExternallyFilled, v4)
  local v5, v6, v7, v8, v9, v10 = dt:getSegmentSideArea(isExternallyFilled, v4)
  local v11, v12 = AIVehicleUtil.getAIAreaOfVehicle(v0, v5, v6, v7, v8, v9, v10)
  if 0 < v12 then
    if 0.1 >= v11 / v12 then
    end
    return true
  end
  return false
end
function Sprayer:onTurnedOn()
  if self.isClient then
    self:updateSprayerEffects()
    if self.spec_sprayer.animationName ~= "" and self.playAnimation ~= nil then
      local v6 = self:getAnimationTime(self.spec_sprayer.animationName)
      self:playAnimation(self.spec_sprayer.animationName, 1, v6, true)
    end
    sprayType:playSample(fillType.samples.work)
    local sprayType = self:getActiveSprayType()
    if sprayType ~= nil then
      isExternallyFilled:playSample(sprayType.samples.work)
      if not sprayType.turnedAnimationExternalFill then
        local isExternallyFilled = self:getIsSprayerExternallyFilled()
        -- if v3 then goto L71 end
      end
      local v7 = self:getAnimationTime(sprayType.turnedAnimation)
      self:playAnimation(sprayType.turnedAnimation, sprayType.turnedAnimationTurnOnSpeedScale, v7, true)
    end
    if not fillType.turnedAnimationExternalFill then
      isExternallyFilled = self:getIsSprayerExternallyFilled()
      -- if v3 then goto L91 end
    end
    v7 = self:getAnimationTime(fillType.turnedAnimation)
    self:playAnimation(fillType.turnedAnimation, fillType.turnedAnimationTurnOnSpeedScale, v7, true)
  end
end
function Sprayer:onTurnedOff()
  if self.isClient then
    self:updateSprayerEffects()
    if self.spec_sprayer.animationName ~= "" and self.stopAnimation ~= nil then
      self:stopAnimation(self.spec_sprayer.animationName, true)
    end
    dt:stopSample(fillType.samples.work)
    for v5, v6 in ipairs(fillType.sprayTypes) do
      v7:stopSample(v6.samples.work)
      local v11 = self:getAnimationTime(v6.turnedAnimation)
      self:playAnimation(v6.turnedAnimation, v6.turnedAnimationTurnOffSpeedScale, v11, true)
    end
    v6 = self:getAnimationTime(fillType.turnedAnimation)
    self:playAnimation(fillType.turnedAnimation, fillType.turnedAnimationTurnOffSpeedScale, v6, true)
  end
end
function Sprayer.onPreDetach(v0, fillType, dt)
  if fillType.setIsTurnedOn ~= nil then
    local isExternallyFilled = fillType:getIsTurnedOn()
    if isExternallyFilled then
      fillType:setIsTurnedOn(false)
    end
  end
end
function Sprayer:onStartWorkAreaProcessing(dt)
  local v7 = self:getSprayerFillUnitIndex()
  local v5 = self:getFillUnitFillType(...)
  local v6 = self:getSprayerUsage(v5, dt)
  local v9 = self:getSprayerFillUnitIndex()
  v7 = self:getFillUnitFillLevel(...)
  if 0 < v7 then
    local v8 = self:getSprayerFillUnitIndex()
  else
    for v11, v12 in ipairs(self.spec_sprayer.supportedSprayTypes) do
      for v16, v17 in ipairs(dt.fillTypeSources[v12]) do
        local v19 = v17.vehicle:getIsFillUnitActive(v17.fillUnitIndex)
        if v19 then
          v19 = v17.vehicle:getFillUnitFillType(v17.fillUnitIndex)
          local v20 = v17.vehicle:getFillUnitFillLevel(v17.fillUnitIndex)
          if not (0 < v20) then
            continue
          end
          if not (v19 == v12) then
            continue
          end
          local v21 = v17.vehicle:getFillUnitFillType(v17.fillUnitIndex)
          v21 = self:getSprayerUsage(v21, dt)
          break
        else
          v19 = self:getIsAIActive()
          if not v19 then
            continue
          end
          if not (v17.vehicle.setIsTurnedOn ~= nil) then
            continue
          end
          v19 = v17.vehicle:getIsTurnedOn()
          if not not v19 then
            continue
          end
          v17.vehicle:setIsTurnedOn(true)
        end
      end
    end
  end
  v8 = self:getIsSprayerExternallyFilled()
  if v8 then
    v9 = self:getIsTurnedOn()
    if v9 then
      v9, v10 = self:getExternalFill(v5, dt)
      if v9 ~= FillType.UNKNOWN then
      end
    end
  end
  if v8 ~= dt.workAreaParameters.lastIsExternallyFilled then
    v9 = self:getActiveSprayType()
    if v9 ~= nil then
      if v8 then
        -- if v9.turnedAnimationExternalFill then goto L171 end
        v10 = self:getIsAnimationPlaying(v9.turnedAnimation)
        -- if not v10 then goto L171 end
        self:stopAnimation(v9.turnedAnimation)
      else
        v10 = self:getIsAnimationPlaying(v9.turnedAnimation)
        if not v10 then
          v14 = self:getAnimationTime(v9.turnedAnimation)
          self:playAnimation(v9.turnedAnimation, v9.turnedAnimationTurnOnSpeedScale, v14, true)
        end
      end
    end
    if v8 then
      -- if v2.turnedAnimationExternalFill then goto L206 end
      v10 = self:getIsAnimationPlaying(dt.turnedAnimation)
      -- if not v10 then goto L206 end
      self:stopAnimation(dt.turnedAnimation)
    else
      v10 = self:getIsAnimationPlaying(dt.turnedAnimation)
      if not v10 then
        v14 = self:getAnimationTime(dt.turnedAnimation)
        self:playAnimation(dt.turnedAnimation, dt.turnedAnimationTurnOnSpeedScale, v14, true)
      end
    end
    dt.workAreaParameters.lastIsExternallyFilled = v8
  end
  if self.isServer and v5 ~= FillType.UNKNOWN and v5 ~= dt.workAreaParameters.sprayFillType then
    self:setSprayerAITerrainDetailProhibitedRange(v5)
  end
  v10 = v10:getSprayTypeIndexByFillTypeIndex(v5)
  dt.workAreaParameters.sprayType = v10
  dt.workAreaParameters.sprayFillType = v5
  dt.workAreaParameters.sprayFillLevel = v7
  dt.workAreaParameters.usage = v6
  dt.workAreaParameters.usagePerMin = v6 / dt * 1000 * 60
  dt.workAreaParameters.sprayVehicle = isExternallyFilled
  dt.workAreaParameters.sprayVehicleFillUnitIndex = v4
  dt.workAreaParameters.lastChangedArea = 0
  dt.workAreaParameters.lastTotalArea = 0
  dt.workAreaParameters.lastStatsArea = 0
  dt.workAreaParameters.isActive = false
  dt.isWorking = false
end
function Sprayer:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer and self.spec_sprayer.workAreaParameters.isActive then
    if self.spec_sprayer.workAreaParameters.sprayVehicle ~= nil then
      local sprayType = self:getActiveSprayType()
      if sprayType ~= nil then
      end
      local v10 = self:getFillVolumeUnloadInfo(v8)
      local farmId = self:getOwnerFarmId()
      v4:addFillUnitFillLevel(farmId, v6, -v5, v7, ToolType.UNDEFINED, v10)
    end
    local v8 = v8:getFruitPixelsToSqm()
    local v6 = MathUtil.areaToHa(...)
    local v7 = self:getLastTouchedFarmlandFarmId()
    v8:updateFarmStats(v7, "sprayedHectares", v6)
    v8:updateFarmStats(v7, "sprayedTime", dt / 60000)
    v8:updateFarmStats(v7, "sprayUsage", v5)
    self:updateLastWorkedArea(isExternallyFilled.workAreaParameters.lastStatsArea)
  end
  self:updateSprayerEffects()
end
function Sprayer:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH and state ~= Vehicle.STATE_CHANGE_DETACH then
    -- if not Vehicle.STATE_CHANGE_FILLTYPE_CHANGE then goto L61 end
  end
  self.spec_sprayer.fillTypeSources = {}
  local v6 = self:getSprayerFillUnitIndex()
  local v4 = self:getFillUnitSupportedFillTypes(...)
  self.spec_sprayer.supportedSprayTypes = {}
  if v4 ~= nil then
    for v8, v9 in pairs(v4) do
      if not v9 then
        continue
      end
      isExternallyFilled.fillTypeSources[v8] = {}
      table.insert(isExternallyFilled.supportedSprayTypes, v8)
    end
  end
  FillUnit.addFillTypeSources(isExternallyFilled.fillTypeSources, self.rootVehicle, self, isExternallyFilled.supportedSprayTypes)
end
function Sprayer:onSetLowered(isLowered)
  if self.isServer then
    if self.spec_sprayer.activateOnLowering then
      local isExternallyFilled = self:getCanBeTurnedOn()
      if isExternallyFilled then
        self:setIsTurnedOn(isLowered)
      else
        self.spec_sprayer.pendingActivationAfterLowering = true
      end
    end
    if not isLowered then
      dt.pendingActivationAfterLowering = false
    end
  end
  if dt.activateTankOnLowering then
    for v6, v7 in ipairs(dt.supportedSprayTypes) do
      for v11, v12 in ipairs(dt.fillTypeSources[v7]) do
        if not (v12.vehicle.getIsTurnedOn ~= nil) then
          continue
        end
        v12.vehicle:setIsTurnedOn(isLowered, true)
      end
    end
  end
end
function Sprayer:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
  if fillLevel == 0 then
    local v8 = self:getIsTurnedOn()
    if v8 then
      v8 = self:getIsAIActive()
      if not v8 then
        if self.spec_sprayer.fillTypeSources[fillType] ~= nil then
          for farmId, v14 in ipairs(self.spec_sprayer.fillTypeSources[fillType]) do
            local v16 = v14.vehicle:getIsFillUnitActive(v14.fillUnitIndex)
            if not v16 then
              continue
            end
            v16 = v14.vehicle:getFillUnitFillType(v14.fillUnitIndex)
            local v17 = v14.vehicle:getFillUnitFillLevel(v14.fillUnitIndex)
            if not (0 < v17) then
              continue
            end
            if not (v16 == fillType) then
              continue
            end
          end
        end
        if not v9 then
          self:setIsTurnedOn(false)
          if Platform.gameplay.automaticVehicleControl then
            v10:playControlledActions()
          end
        end
      end
    end
  end
end
function Sprayer:onSprayTypeChange(activeSprayType)
  for v6, v7 in ipairs(self.spec_sprayer.sprayTypes) do
    if v7 ~= activeSprayType then
    end
    v8(v9, true)
  end
end
function Sprayer:onAIImplementEnd()
  for v5, v6 in ipairs(self.spec_sprayer.supportedSprayTypes) do
    for v10, v11 in ipairs(fillType.fillTypeSources[v6]) do
      if not (v11.vehicle.getIsTurnedOn ~= nil) then
        continue
      end
      local farmId = v11.vehicle:getIsTurnedOn()
      if not farmId then
        continue
      end
      v11.vehicle:setIsTurnedOn(false, true)
    end
  end
end
function Sprayer:onVariableWorkWidthSectionChanged()
  self:updateSprayerEffects(true)
end
function Sprayer.getDefaultSpeedLimit()
  return 15
end
