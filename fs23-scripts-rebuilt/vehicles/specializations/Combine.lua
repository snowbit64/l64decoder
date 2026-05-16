-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/CombineStrawEnableEvent.lua")
Combine = {DAMAGED_YIELD_REDUCTION = 0.4, RAIN_YIELD_REDUCTION = 0.5}
function Combine.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    return SpecializationUtil.hasSpecialization(Combine, self.specializations)
  end, AIDriveStrategyCombine)
  v0:addWorkAreaType("combineChopper", false)
  v0:addWorkAreaType("combineSwath", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Combine")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.combine.warning#noCutter", "No cutter warning", "$l10n_warning_noCuttersAttached")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine#fillLevelBufferTime", "Fill level buffer time for forage harvesters", 2000)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine#allowThreshingDuringRain", "Allow threshing during rain", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.buffer#fillUnitIndex", "Buffer fill unit index (This fill unit will be filled first until it's full. Will be emptied if stopped to harvest)")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.combine.buffer#unloadingTime", "Buffer unloading speed", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine#loadInfoIndex", "Load info index", 1)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.combine.buffer#loadingDelay", "Time until the crops from the cutter are added to the tank", 0)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.combine.buffer#unloadingDelay", "Time until the crops are not longer added to the tank after the cutting has been stopped", "same as #loadingDelay")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.swath#available", "Swath is available", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.swath#isDefaultActive", "Swath is default active", "true if available")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.swath#workAreaIndex", "Swath work area index")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.chopper#available", "Chopper is available", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.chopper#isPowered", "Vehicle needs to be powered to switch chopper", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.chopper#workAreaIndex", "Chopper work area index")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.combine.chopper#animName", "Chopper toggle animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.chopper#animSpeedScale", "Chopper toggle animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.combine.ladder#animName", "Ladder animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.ladder#animSpeedScale", "Ladder animation speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.ladder#foldMinLimit", "Min. folding time to fold ladder", 0.99)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.ladder#foldMaxLimit", "Max. folding time to fold ladder", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.ladder#foldDirection", "Fold direction to unfold ladder", "signed animation speed")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.ladder#unfoldWhileCutterAttached", "Unfold ladder while a cutter is attached", false)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.combine#fillTimeThreshold", "After receiving no input for this threshold time we stop the fill effects", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.processing#toggleTime", "Time from crop cutting to dropping straw", 0)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.combine.threshingStartAnimation#name", "Threshing start animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.threshingStartAnimation#speedScale", "Threshing start animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.threshingStartAnimation#initialIsStarted", "Threshing start animation is initial started")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.additives#fillUnitIndex", "Additives fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.additives#usage", "Usage per picked up liter", 2)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.combine.additives#fillTypes", "Fill types to apply additives", "CHAFF GRASS_WINDROW")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.combine.automaticTilt.automaticTiltNode(?)#node", "Automatic tilt node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.combine.automaticTilt.automaticTiltNode(?)#minAngle", "Min. angle", -5)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.combine.automaticTilt.automaticTiltNode(?)#maxAngle", "Max. angle", 5)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.combine.automaticTilt.automaticTiltNode(?)#maxSpeed", "Max. angle change per second", 2)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.automaticTilt.automaticTiltNode(?)#updateAttacherJoint", "Update cutter attacher joint")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.combine.automaticTilt.automaticTiltNode(?)#dependentAnimation", "Animation that is updated depending on tilt state")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.folding#fillLevelThresholdPct", "Max. fill level to be folded (percetange between 0 and 1)", 0.15)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.combine.folding#direction", "Folding direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.combine.folding#allowWhileThreshing", "Allow folding while combine is threshing", false)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.combine.chopperEffect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.combine.strawEffect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.combine.fillEffect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.combine.effect")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.combine.animationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.combine.chopperAnimationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.combine.strawDropAnimationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.combine.fillingAnimationNodes")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.combine.animationNodes#speedReverseFillLevel", "If fill level is above the animation nodes will be reversed (Percent 0-1)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "start")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "stop")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "chopperStart")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "chopperStop")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "chopperWork")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "chopStraw")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "dropStraw")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.combine.sounds", "fill")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.combine.dashboards", "workedHectars")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#activeChopper", "Animation is active while chopper is active", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#activeStrawDrop", "Animation is active while straw drop is active", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#waitForStraw", "Animation is active as long as straw is dropped", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).combine#isSwathActive", "Swath is active")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).combine#workedHectars", "Worked hectars")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).combine#numAttachedCutters", "Number of last attached cutters")
end
function Combine.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
    if v1 then
      local v2 = SpecializationUtil.hasSpecialization(Drivable, v0)
      if not v2 then
        v1 = SpecializationUtil.hasSpecialization(Attachable, v0)
        -- if not v1 then goto L41 end
      end
      v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
      if v1 then
        v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
      end
    end
  end
  return v1
end
function Combine.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onStartThreshing")
  SpecializationUtil.registerEvent(v0, "onStopThreshing")
end
function Combine.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadCombineSetup", Combine.loadCombineSetup)
  SpecializationUtil.registerFunction(vehicleType, "loadCombineEffects", Combine.loadCombineEffects)
  SpecializationUtil.registerFunction(vehicleType, "loadCombineRotationNodes", Combine.loadCombineRotationNodes)
  SpecializationUtil.registerFunction(vehicleType, "loadCombineSamples", Combine.loadCombineSamples)
  SpecializationUtil.registerFunction(vehicleType, "setIsSwathActive", Combine.setIsSwathActive)
  SpecializationUtil.registerFunction(vehicleType, "processCombineChopperArea", Combine.processCombineChopperArea)
  SpecializationUtil.registerFunction(vehicleType, "processCombineSwathArea", Combine.processCombineSwathArea)
  SpecializationUtil.registerFunction(vehicleType, "setChopperPSEnabled", Combine.setChopperPSEnabled)
  SpecializationUtil.registerFunction(vehicleType, "setStrawPSEnabled", Combine.setStrawPSEnabled)
  SpecializationUtil.registerFunction(vehicleType, "setCombineIsFilling", Combine.setCombineIsFilling)
  SpecializationUtil.registerFunction(vehicleType, "startThreshing", Combine.startThreshing)
  SpecializationUtil.registerFunction(vehicleType, "stopThreshing", Combine.stopThreshing)
  SpecializationUtil.registerFunction(vehicleType, "setWorkedHectars", Combine.setWorkedHectars)
  SpecializationUtil.registerFunction(vehicleType, "addCutterToCombine", Combine.addCutterToCombine)
  SpecializationUtil.registerFunction(vehicleType, "removeCutterFromCombine", Combine.removeCutterFromCombine)
  SpecializationUtil.registerFunction(vehicleType, "addCutterArea", Combine.addCutterArea)
  SpecializationUtil.registerFunction(vehicleType, "getIsThreshingDuringRain", Combine.getIsThreshingDuringRain)
  SpecializationUtil.registerFunction(vehicleType, "verifyCombine", Combine.verifyCombine)
  SpecializationUtil.registerFunction(vehicleType, "getFillLevelDependentSpeed", Combine.getFillLevelDependentSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getCombineLastValidFillType", Combine.getCombineLastValidFillType)
  SpecializationUtil.registerFunction(vehicleType, "getCombineLoadPercentage", Combine.getCombineLoadPercentage)
  SpecializationUtil.registerFunction(vehicleType, "getIsCutterCompatible", Combine.getIsCutterCompatible)
end
function Combine.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", Combine.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", Combine.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", Combine.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", Combine.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Combine.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Combine.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Combine.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Combine.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadTurnedOnAnimationFromXML", Combine.loadTurnedOnAnimationFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsTurnedOnAnimationActive", Combine.getIsTurnedOnAnimationActive)
end
function Combine.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onChangedFillType", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetachImplement", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", Combine)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Combine)
end
function Combine:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.combine.chopperSwitch", "vehicle.combine.swath and vehicle.combine.chopper")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.combine.rotationNodes.rotationNode", "combine")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.indoorHud.workedHectars", "vehicle.combine.dashboards.dashboard with valueType 'workedHectars'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.combine.folding#fillLevelThreshold", "vehicle.combine.folding#fillLevelThresholdPct")
  self:loadCombineSetup(self.xmlFile, "vehicle.combine", self.spec_combine)
  self:loadCombineEffects(self.xmlFile, "vehicle.combine", self.spec_combine)
  self:loadCombineRotationNodes(self.xmlFile, "vehicle.combine", self.spec_combine)
  self:loadCombineSamples(self.xmlFile, "vehicle.combine", self.spec_combine)
  self.spec_combine.attachedCutters = {}
  self.spec_combine.numAttachedCutters = 0
  self.spec_combine.texts = {}
  local v4 = v4:getText("warning_foldingNotWhileTurnedOn")
  self.spec_combine.texts.warningFoldingTurnedOn = v4
  v4 = v4:getText("warning_foldingNotWhileFilled")
  self.spec_combine.texts.warningFoldingWhileFilled = v4
  v4 = v4:getText("warning_rainReducesYield")
  self.spec_combine.texts.warningRainReducesYield = v4
  local v7 = v7:getText("warning_noCuttersAttached")
  v4 = v4:getValue("vehicle.combine.warning#noCutter", v7, self.customEnvironment)
  self.spec_combine.texts.warningNoCutter = v4
  self.spec_combine.threshingDuringRainWarningDisplayed = false
  self.spec_combine.lastArea = 0
  self.spec_combine.lastAreaZeroTime = 0
  self.spec_combine.lastAreaNonZeroTime = -1000000
  self.spec_combine.lastCuttersArea = 0
  self.spec_combine.lastCuttersAreaTime = -10000
  self.spec_combine.lastInputFruitType = FruitType.UNKNOWN
  self.spec_combine.lastValidInputFruitType = FruitType.UNKNOWN
  self.spec_combine.lastCuttersFruitType = FruitType.UNKNOWN
  self.spec_combine.lastCuttersInputFruitType = FruitType.UNKNOWN
  self.spec_combine.lastValidInputFillType = FillType.UNKNOWN
  self.spec_combine.lastDischargeTime = 0
  self.spec_combine.lastChargeTime = 0
  local v3 = v3:getValue("vehicle.combine#fillLevelBufferTime", 2000)
  self.spec_combine.fillLevelBufferTime = v3
  self.spec_combine.workedHectars = 0
  self.spec_combine.workedHectarsSent = 0
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.combine.dashboards", {valueTypeToLoad = "workedHectars", valueObject = self.spec_combine, valueFunc = "workedHectars"})
  end
  v2.threshingScale = 1
  v2.lastLostFillLevel = 0
  v2.workAreaParameters = {lastRealArea = 0, lastArea = 0, litersToDrop = 0, droppedLiters = 0, isChopperEffectEnabled = 0, isStrawEffectEnabled = 0, effectDensity = 0.2, effectDensitySent = 0.2}
  v3 = self:getNextDirtyFlag()
  v2.dirtyFlag = v3
  v3 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v3
end
function Combine:onPostLoad(savegame)
  if savegame ~= nil then
    if self.spec_combine.swath.isAvailable then
      local v3 = v3:getValue(savegame.key .. ".combine#isSwathActive", self.spec_combine.isSwathActive)
      self:setIsSwathActive(v3, true, true)
    end
    local v5 = v5:getValue(savegame.key .. ".combine#workedHectars", v2.workedHectars)
    self:setWorkedHectars(...)
  else
    self:setIsSwathActive(self.spec_combine.isSwathActive, true, true)
  end
  local v4 = self:getFillUnitCapacity(self.spec_combine.fillUnitIndex)
  if v4 ~= math.huge then
  end
  v2.isBufferCombine = true
  if v2.isBufferCombine then
    v3 = self:getFillUnitByIndex(self.spec_combine.fillUnitIndex)
    if v3.showOnInfoHud then
      Logging.xmlWarning(self.xmlFile, "Buffer combine fill unit is displayed in info hud! Add showOnInfoHud='false' to the fill unit.")
    end
  end
  if v2.ladder.animName ~= nil then
    if self.getFoldAnimTime ~= nil then
      v5 = self:getFoldAnimTime()
      if v2.ladder.foldMaxLimit >= v5 then
        -- if v5 >= v2.ladder.foldMinLimit then goto L105 end
      end
    end
    if v3.unfoldWhileCutterAttached and savegame ~= nil and not savegame.resetVehicles then
      v5 = v5:getValue(savegame.key .. ".combine#numAttachedCutters", 0)
      if 0 < v5 then
      end
    end
    if v3.foldDirection ~= 1 then
    end
    self:setAnimationTime(v3.animName, v4, true)
  end
  if v2.bufferFillUnitIndex ~= nil then
    v4 = self:getFillUnitByIndex(v2.fillUnitIndex)
    v5 = self:getFillUnitByIndex(v2.bufferFillUnitIndex)
    if v4 ~= nil and v5 ~= nil then
      v5.parentUnitOnHud = v2.fillUnitIndex
      v4.childUnitOnHud = v2.bufferFillUnitIndex
    end
  end
  v4 = self:getFillUnitCapacity(v2.fillUnitIndex)
  if v4 == 0 then
    Logging.xmlWarning(self.xmlFile, "Capacity of fill unit '%d' for combine needs to be set greater 0 or not defined! (not defined = infinity)", v2.fillUnitIndex)
  end
end
function Combine:onDelete()
  v2:deleteEffects(self.spec_combine.effects)
  v2:deleteEffects(self.spec_combine.fillEffects)
  v2:deleteEffects(self.spec_combine.strawEffects)
  v2:deleteEffects(self.spec_combine.chopperEffects)
  v2:deleteAnimations(self.spec_combine.animationNodes)
  v2:deleteAnimations(self.spec_combine.chopperAnimationNodes)
  v2:deleteAnimations(self.spec_combine.strawDropAnimationNodes)
  v2:deleteAnimations(self.spec_combine.fillingAnimationNodes)
  v2:deleteSamples(self.spec_combine.samples)
end
function Combine:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_combine.swath.isAvailable then
    xmlFile:setValue(key .. "#isSwathActive", self.spec_combine.isSwathActive)
  end
  xmlFile:setValue(key .. "#workedHectars", v4.workedHectars)
  xmlFile:setValue(key .. "#numAttachedCutters", v4.numAttachedCutters)
end
function Combine:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
  self.spec_combine.lastValidInputFruitType = v4
  v4 = streamReadBool(streamId)
  local v5 = streamReadBool(streamId)
  local v6 = streamReadBool(streamId)
  local v7 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.spec_combine.lastValidInputFillType = v7
  self:setCombineIsFilling(v4, false, true)
  self:setChopperPSEnabled(v5, false, 1, true)
  self:setStrawPSEnabled(v6, false, 1, true)
  v7 = streamReadBool(streamId)
  self:setIsSwathActive(v7, true)
  local workedHectars = streamReadFloat32(streamId)
  self:setWorkedHectars(workedHectars)
end
function Combine:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_combine.lastValidInputFruitType, FruitTypeManager.SEND_NUM_BITS)
  streamWriteBool(streamId, self.spec_combine.isFilling)
  streamWriteBool(streamId, self.spec_combine.chopperPSenabled)
  streamWriteBool(streamId, self.spec_combine.strawPSenabled)
  local v6 = self:getCombineLastValidFillType()
  streamWriteUIntN(streamId, v6, FillTypeManager.SEND_NUM_BITS)
  streamWriteBool(streamId, self.spec_combine.isSwathActive)
  streamWriteFloat32(streamId, self.spec_combine.workedHectars)
end
function Combine:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
      self.spec_combine.lastValidInputFruitType = v5
      v5 = streamReadFloat32(streamId)
      self:setWorkedHectars(v5)
    end
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadBool(streamId)
      local v6 = streamReadBool(streamId)
      local v7 = streamReadBool(streamId)
      local effectDensity = streamReadUIntN(streamId, 5)
      local v9 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      v4.lastValidInputFillType = v9
      self:setCombineIsFilling(v5, false, true)
      self:setChopperPSEnabled(v6, false, effectDensity / 31, true)
      self:setStrawPSEnabled(v7, false, effectDensity / 31, true)
    end
  end
end
function Combine:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_combine.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteUIntN(streamId, v4.lastValidInputFruitType, FruitTypeManager.SEND_NUM_BITS)
      streamWriteFloat32(streamId, v4.workedHectars)
    end
    v8 = bitAND(dirtyMask, v4.effectDirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.isFilling)
      streamWriteBool(streamId, v4.chopperPSenabled)
      streamWriteBool(streamId, v4.strawPSenabled)
      streamWriteUIntN(streamId, v4.workAreaParameters.effectDensity * 31, 5)
      local v7 = self:getCombineLastValidFillType()
      streamWriteUIntN(streamId, v7, FillTypeManager.SEND_NUM_BITS)
    end
  end
end
function Combine:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local isTurnedOn = self:getIsTurnedOn()
  if isTurnedOn and self.isServer and self.spec_combine.swath.isAvailable then
    if not self.spec_combine.bufferFillUnitIndex then
    end
    local v10 = self:getFillUnitFillType(v7)
    local v8 = v8:getFruitTypeIndexByFillTypeIndex(...)
    if v5.isSwathActive then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L51
      -- if v8 == FruitType.UNKNOWN then goto L51 end
      local v9 = v9:getFruitTypeByIndex(v8)
      -- if v9.hasWindrow then goto L116 end
      self:setIsSwathActive(false)
    else
      if v5.chopper.isAvailable then
        -- if not v5.automatedChopperSwitch then goto L116 end
      end
      if not v5.isSwathActive and v8 ~= nil and v8 ~= FruitType.UNKNOWN then
        v9 = v9:getFruitTypeByIndex(v8)
        if v9.hasWindrow then
          self:setIsSwathActive(true)
          -- TODO: structure LOP_FORNPREP (pc 90, target 116)
          v5.processing.inputBuffer.buffer[1].area = 0
          v5.processing.inputBuffer.buffer[1].realArea = 0
          v5.processing.inputBuffer.buffer[1].liters = 0
          v5.processing.inputBuffer.buffer[1].inputLiters = 0
          -- TODO: structure LOP_FORNLOOP (pc 115, target 91)
        end
      end
    end
  end
  if self.isServer then
    local v7 = self:getFillUnitFillLevel(v5.fillUnitIndex)
    if v7 < 0.0001 then
      v5.lastDischargeTime = g_time
    end
  end
  if v5.automaticTilt.hasNodes then
    local v10, v11 = next(v5.attachedCutters)
    if v11 ~= nil then
      local v12 = v11:getCutterTiltIsAvailable()
      if v12 then
        local v12, v13, v14 = v11:getCutterTiltDelta()
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 163, target 293)
    local v16, v17, v18 = getRotation(v5.automaticTilt.nodes[1].node)
    if not v8 and v9 then
    end
    local v19 = math.abs(v7)
    if 0.00001 < v19 then
      local v23 = math.abs(v7)
      local v21 = math.pow(v23 / 0.01745, 2)
      local v20 = math.min(v21, 1)
      v21 = MathUtil.sign(v7)
      if not v8 and v9 then
      end
      v21 = MathUtil.clamp(v18 + v19 * v15.maxSpeed * dt, v15.minAngle, v15.maxAngle)
      setRotation(v15.node, 0, 0, v21)
      if v15.dependentAnimation ~= nil then
        local v22 = MathUtil.inverseLerp(v15.minAngle, v15.maxAngle, v21)
        self:setAnimationTime(v15.dependentAnimation, v22, true)
      end
      if v11 ~= nil and v15.updateAttacherJoint then
        v22 = math.abs(v21 - v15.lastJointUpdateRot)
        if 0.00001 < v22 then
          v15.lastJointUpdateRot = v21
          v22 = self:getAttacherJointDescFromObject(v11)
          if v22.jointIndex ~= 0 then
            setJointFrame(v22.jointIndex, 0, v22.jointTransform)
          end
        end
      end
      if self.setMovingToolDirty ~= nil then
        self:setMovingToolDirty(v15.node)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 292, target 164)
  end
end
function Combine:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    self.spec_combine.lastArea = self.spec_combine.lastCuttersArea
    self.spec_combine.lastAreaZeroTime = self.spec_combine.lastAreaZeroTime + dt
    if 0 < self.spec_combine.lastArea then
      self.spec_combine.lastAreaZeroTime = 0
      self.spec_combine.lastAreaNonZeroTime = g_currentMission.time
    end
    v5.lastInputFruitType = v5.lastCuttersInputFruitType
    v5.lastCuttersArea = 0
    v5.lastCuttersInputFruitType = FruitType.UNKNOWN
    v5.lastCuttersFruitType = FruitType.UNKNOWN
    if v5.lastInputFruitType ~= FruitType.UNKNOWN then
      v5.lastValidInputFruitType = v5.lastInputFruitType
    end
    if v5.fillTimeThreshold < v5.lastAreaZeroTime and v5.fillDisableTime == nil then
      v5.fillDisableTime = g_currentMission.time + v5.processing.toggleTime
    end
    if v5.fillEnableTime ~= nil and v5.fillEnableTime <= g_currentMission.time then
      self:setCombineIsFilling(true, false, false)
      v5.fillEnableTime = nil
    end
    if v5.fillDisableTime ~= nil and v5.fillDisableTime <= g_currentMission.time then
      self:setCombineIsFilling(false, false, false)
      v5.fillDisableTime = nil
    end
    local v8 = math.max(v5.workAreaParameters.isChopperEffectEnabled - dt, 0)
    v5.workAreaParameters.isChopperEffectEnabled = v8
    v8 = math.max(v5.workAreaParameters.isStrawEffectEnabled - dt, 0)
    v5.workAreaParameters.isStrawEffectEnabled = v8
    if 0 >= v5.workAreaParameters.isChopperEffectEnabled then
    end
    if 0 >= v5.workAreaParameters.isStrawEffectEnabled then
    end
    self:setChopperPSEnabled(v8, false, v7, false)
    self:setStrawPSEnabled(true, false, v7, false)
    if not v8 then
      -- if not true then goto L183 end
    end
    self:raiseActive()
    local v10 = self:getIsTurnedOn()
    if v10 then
      local v12 = self:getOwnerFarmId()
      v10:updateFarmStats(v12, "threshedTime", dt / 60000)
      self:updateLastWorkedArea(0)
    end
    v6.slotTimer = v6.slotTimer - dt
    if v6.slotTimer < 0 then
      v6.slotTimer = v6.slotDuration
      v6.fillIndex = v6.fillIndex + 1
      if v6.slotCount < v6.fillIndex then
        v6.fillIndex = 1
      end
      v6.dropIndex = v6.dropIndex + 1
      if v6.slotCount < v6.dropIndex then
        v6.dropIndex = 1
      end
      v6.buffer[v6.dropIndex].liters = v6.buffer[v6.dropIndex].liters + v6.buffer[v10].liters
      v6.buffer[v6.dropIndex].inputLiters = v6.buffer[v6.dropIndex].inputLiters + v6.buffer[v10].liters
      v6.buffer[v10].area = 0
      v6.buffer[v10].realArea = 0
      v6.buffer[v10].liters = 0
      v6.buffer[v10].inputLiters = 0
    end
    if v5.bufferFillUnitIndex ~= nil and v5.lastCuttersAreaTime + dt * 10 < g_currentMission.time then
      v10 = self:getFillUnitFillLevel(v5.bufferFillUnitIndex)
      if 0 < v10 then
        v12 = self:getFillUnitCapacity(v5.bufferFillUnitIndex)
        local v13 = self:getOwnerFarmId()
        local v16 = self:getFillUnitFillType(v5.bufferFillUnitIndex)
        local v11 = self:addFillUnitFillLevel(v13, v5.bufferFillUnitIndex, -(dt * v12 / v5.bufferUnloadingTime), v16, ToolType.UNDEFINED)
        v13 = self:getOwnerFarmId()
        v16 = self:getFillUnitFillType(v5.bufferFillUnitIndex)
        local v18 = self:getFillVolumeLoadInfo(v5.loadInfoIndex)
        self:addFillUnitFillLevel(...)
      end
    end
    if 0 < v5.loadingDelay then
      -- TODO: structure LOP_FORNPREP (pc 386, target 425)
      if v5.loadingDelaySlots[1].valid and v5.loadingDelaySlots[1].time + v5.loadingDelay < g_time then
        v5.loadingDelaySlots[1].valid = false
        v16 = self:getOwnerFarmId()
        local v21 = self:getFillVolumeLoadInfo(v5.loadInfoIndex)
        self:addFillUnitFillLevel(...)
      end
      -- TODO: structure LOP_FORNLOOP (pc 424, target 387)
    end
    if v5.isFilling == v5.sentIsFilling and v5.chopperPSenabled == v5.sentChopperPSenabled and v5.strawPSenabled == v5.sentStrawPSenabled then
      v10 = math.abs(v5.workAreaParameters.effectDensity - v5.workAreaParameters.effectDensitySent)
      -- if 0.05 >= v10 then goto L484 end
    end
    self:raiseDirtyFlags(v5.effectDirtyFlag)
    v5.sentIsFilling = v5.isFilling
    v5.sentChopperPSenabled = v5.chopperPSenabled
    v5.sentStrawPSenabled = v5.strawPSenabled
    v5.workAreaParameters.effectDensitySent = v5.workAreaParameters.effectDensity
  end
end
function Combine:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsTurnedOn()
  if v5 then
    v5 = self:getIsThreshingDuringRain(false)
    if v5 then
      -- if v0.spec_combine.threshingDuringRainWarningDisplayed then goto L31 end
      v5:showBlinkingWarning(self.spec_combine.texts.warningRainReducesYield, 4000)
      self.spec_combine.threshingDuringRainWarningDisplayed = true
      return
    end
  end
  v4.threshingDuringRainWarningDisplayed = false
end
function Combine:loadCombineSetup(xmlFile, baseKey, entry)
  local v4 = xmlFile:getValue(baseKey .. "#allowThreshingDuringRain", false)
  entry.allowThreshingDuringRain = v4
  v4 = xmlFile:getValue(baseKey .. "#fillUnitIndex", 1)
  entry.fillUnitIndex = v4
  v4 = xmlFile:getValue(baseKey .. ".buffer#fillUnitIndex")
  entry.bufferFillUnitIndex = v4
  v4 = xmlFile:getValue(baseKey .. ".buffer#unloadingTime", 0)
  entry.bufferUnloadingTime = v4
  v4 = xmlFile:getValue(baseKey .. "#loadInfoIndex", 1)
  entry.loadInfoIndex = v4
  v4 = xmlFile:getValue(baseKey .. ".buffer#loadingDelay", 0)
  entry.loadingDelay = v4
  if 0 < entry.loadingDelay then
    v4 = xmlFile:getValue(baseKey .. ".buffer#unloadingDelay", entry.loadingDelay / 1000)
    entry.unloadingDelay = v4
    entry.loadingDelaySlotsDelayedInsert = false
    entry.loadingDelaySlots = {}
    -- TODO: structure LOP_FORNPREP (pc 83, target 103)
    entry.loadingDelaySlots[1] = {time = -math.huge, fillLevelDelta = 0, fillType = 0, valid = false}
    -- TODO: structure LOP_FORNLOOP (pc 102, target 84)
  end
  entry.swath = {}
  local v5 = xmlFile:getValue(baseKey .. ".swath#available", false)
  entry.swath.isAvailable = v5
  v4 = xmlFile:getValue(baseKey .. ".swath#isDefaultActive", entry.swath.isAvailable)
  if entry.swath.isAvailable then
    local v6 = xmlFile:getValue(baseKey .. ".swath#workAreaIndex")
    entry.swath.workAreaIndex = v6
    if entry.swath.workAreaIndex == nil then
      entry.swath.isAvailable = false
      Logging.xmlWarning(xmlFile, "Missing 'swath#workAreaIndex' for combine swath function!")
    end
    entry.warningTime = 0
  end
  entry.chopper = {}
  v6 = xmlFile:getValue(baseKey .. ".chopper#available", false)
  entry.chopper.isAvailable = v6
  v6 = xmlFile:getValue(baseKey .. ".chopper#isPowered", true)
  entry.chopper.isPowered = v6
  if entry.chopper.isAvailable then
    v6 = xmlFile:getValue(baseKey .. ".chopper#workAreaIndex")
    entry.chopper.workAreaIndex = v6
    if entry.chopper.workAreaIndex == nil then
      entry.chopper.isAvailable = false
      Logging.xmlWarning(xmlFile, "Missing 'chopper#workAreaIndex' for combine chopper function!")
    end
    v6 = xmlFile:getValue(baseKey .. ".chopper#animName")
    entry.chopper.animName = v6
    v6 = xmlFile:getValue(baseKey .. ".chopper#animSpeedScale", 1)
    entry.chopper.animSpeedScale = v6
  end
  entry.automatedChopperSwitch = GS_IS_MOBILE_VERSION
  entry.isSwathActive = v4
  entry.ladder = {}
  v6 = xmlFile:getValue(baseKey .. ".ladder#animName")
  entry.ladder.animName = v6
  v6 = xmlFile:getValue(baseKey .. ".ladder#animSpeedScale", 1)
  entry.ladder.animSpeedScale = v6
  v6 = xmlFile:getValue(baseKey .. ".ladder#foldMinLimit", 0.99)
  entry.ladder.foldMinLimit = v6
  v6 = xmlFile:getValue(baseKey .. ".ladder#foldMaxLimit", 1)
  entry.ladder.foldMaxLimit = v6
  local v9 = MathUtil.sign(entry.ladder.animSpeedScale)
  v6 = xmlFile:getValue(...)
  entry.ladder.foldDirection = v6
  v6 = xmlFile:getValue(baseKey .. ".ladder#unfoldWhileCutterAttached", false)
  entry.ladder.unfoldWhileCutterAttached = v6
  v5 = xmlFile:getValue(baseKey .. "#fillTimeThreshold", 0.5)
  entry.fillTimeThreshold = v5
  entry.processing = {}
  v5 = xmlFile:getValue(baseKey .. ".processing#toggleTime")
  if v5 == nil and entry.chopper.animName ~= nil then
    v6 = self:getAnimationDurection(entry.chopper.animName)
    if v6 ~= nil then
    end
  end
  local v8 = Utils.getNoNil(v5, 0)
  entry.processing.toggleTime = v8 * 1000
  v8 = math.ceil(entry.processing.toggleTime / 300)
  local v7 = MathUtil.clamp(v8, 2, 20)
  v8 = math.ceil(entry.processing.toggleTime / {slotCount = v7}.slotCount)
  -- TODO: structure LOP_FORNPREP (pc 432, target 460)
  table.insert({slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration, activeTimeout = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotDuration * ({slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotCount + 2), activeTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration, activeTimeout = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotDuration * ({slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotCount + 2)}.activeTimeout, buffer = {}}.buffer, {realArea = 0, area = 0, liters = 0, inputLiters = 0, strawRatio = 0, effectDensity = 0.2})
  -- TODO: structure LOP_FORNLOOP (pc 459, target 433)
  entry.processing.inputBuffer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration, activeTimeout = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotDuration * ({slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotCount + 2), activeTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration, activeTimeout = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotDuration * ({slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1, slotTimer = {slotCount = v7, slotDuration = v8, fillIndex = 1, dropIndex = {slotCount = v7, slotDuration = v8, fillIndex = 1}.fillIndex + 1}.slotDuration}.slotCount + 2)}.activeTimeout, buffer = {}}
  v8 = xmlFile:getValue(baseKey .. ".threshingStartAnimation#name")
  entry.threshingStartAnimation = v8
  v8 = xmlFile:getValue(baseKey .. ".threshingStartAnimation#speedScale", 1)
  entry.threshingStartAnimationSpeedScale = v8
  v8 = xmlFile:getValue(baseKey .. ".threshingStartAnimation#initialIsStarted", false)
  entry.threshingStartAnimationInitialIsStarted = v8
  if Platform.gameplay.automaticVehicleControl then
  else
  end
  v9 = xmlFile:getValue(v11, v12)
  local v11 = self:getFillUnitCapacity(entry.fillUnitIndex)
  entry.foldFillLevelThreshold = v9 * (v11 or 0.04)
  v8 = xmlFile:getValue(baseKey .. ".folding#direction", 1)
  entry.foldDirection = v8
  v8 = xmlFile:getValue(baseKey .. ".folding#allowWhileThreshing", false)
  entry.allowFoldWhileThreshing = v8
  entry.additives = {}
  v9 = xmlFile:getValue(baseKey .. ".additives#fillUnitIndex")
  entry.additives.fillUnitIndex = v9
  local v10 = self:getFillUnitByIndex(entry.additives.fillUnitIndex)
  if v10 == nil then
  end
  v8.available = true
  v9 = xmlFile:getValue(baseKey .. ".additives#usage", 0)
  entry.additives.usage = v9
  v8 = xmlFile:getValue(baseKey .. ".additives#fillTypes", "CHAFF GRASS_WINDROW")
  local v17 = xmlFile:getFilename()
  v10 = v10:getFillTypesByNames(v8, "Warning: '" .. v17 .. "' has invalid fillType '%s'.")
  entry.additives.fillTypes = v10
  entry.automaticTilt = {nodes = {}}
  xmlFile:iterate(baseKey .. ".automaticTilt.automaticTiltNode", function(self, xmlFile)
    local entry = entry:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
    if {node = entry}.node ~= nil then
      entry = entry:getValue(xmlFile .. "#minAngle", -5)
      entry = entry:getValue(xmlFile .. "#maxAngle", 5)
      local v4 = v4:getValue(xmlFile .. "#maxSpeed", 2)
      entry = entry:getValue(xmlFile .. "#updateAttacherJoint")
      entry = entry:getValue(xmlFile .. "#dependentAnimation")
      table.insert(u2.automaticTilt.nodes, {node = entry, minAngle = entry, maxAngle = entry, maxSpeed = v4 / 1000, updateAttacherJoint = entry, dependentAnimation = entry, lastJointUpdateRot = 0})
    end
  end)
  if not Platform.gameplay.allowAutomaticHeaderTilt and 0 < #entry.automaticTilt.nodes then
    Logging.xmlWarning(self.xmlFile, "Automatic header tilt is not allowed on this platform!")
    entry.automaticTilt.nodes = {}
  end
  if 0 >= #entry.automaticTilt.nodes then
  end
  v9.hasNodes = true
end
function Combine:loadCombineEffects(xmlFile, baseKey, entry)
  if self.isClient then
    XMLUtil.checkDeprecatedXMLElements(xmlFile, baseKey .. ".chopperParticleSystems", baseKey .. ".chopperEffect")
    XMLUtil.checkDeprecatedXMLElements(xmlFile, baseKey .. ".strawParticleSystems", baseKey .. ".strawEffect")
    XMLUtil.checkDeprecatedXMLElements(xmlFile, baseKey .. ".threshingFillParticleSystems", baseKey .. ".fillEffect")
    local v4 = v4:loadEffect(xmlFile, baseKey .. ".chopperEffect", self.components, self, self.i3dMappings)
    entry.chopperEffects = v4
    v4 = v4:loadEffect(xmlFile, baseKey .. ".strawEffect", self.components, self, self.i3dMappings)
    entry.strawEffects = v4
    v4 = v4:loadEffect(xmlFile, baseKey .. ".fillEffect", self.components, self, self.i3dMappings)
    entry.fillEffects = v4
    v4 = v4:loadEffect(xmlFile, baseKey .. ".effect", self.components, self, self.i3dMappings)
    entry.effects = v4
    entry.strawPSenabled = false
    entry.chopperPSenabled = false
    entry.isFilling = false
    entry.fillEnableTime = nil
    entry.fillDisableTime = nil
    entry.lastEffectFillType = FillType.UNKNOWN
  end
end
function Combine:loadCombineRotationNodes(xmlFile, baseKey, entry)
  if self.isClient then
    local v4 = v4:loadAnimations(xmlFile, baseKey .. ".animationNodes", self.components, self, self.i3dMappings)
    entry.animationNodes = v4
    v4 = v4:loadAnimations(xmlFile, baseKey .. ".chopperAnimationNodes", self.components, self, self.i3dMappings)
    entry.chopperAnimationNodes = v4
    v4 = v4:loadAnimations(xmlFile, baseKey .. ".strawDropAnimationNodes", self.components, self, self.i3dMappings)
    entry.strawDropAnimationNodes = v4
    v4 = v4:loadAnimations(xmlFile, baseKey .. ".fillingAnimationNodes", self.components, self, self.i3dMappings)
    entry.fillingAnimationNodes = v4
    v4 = xmlFile:getValue(baseKey .. ".animationNodes#speedReverseFillLevel")
    entry.rotationNodesSpeedReverseFillLevel = v4
  end
end
function Combine:loadCombineSamples(xmlFile, key, entry)
  if self.isClient then
    entry.samples = {}
    local v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.start = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.stop = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.work = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "chopperStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.chopperStart = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "chopperStop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.chopperStop = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "chopperWork", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.chopperWork = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "chopStraw", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.chopStraw = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "dropStraw", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.dropStraw = v5
    v5 = v5:loadSampleFromXML(xmlFile, key .. ".sounds", "fill", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.samples.fill = v5
  end
end
function Combine:setIsSwathActive(isSwathActive, noEventSend, force)
  if isSwathActive == self.spec_combine.isSwathActive then
    -- if not v3 then goto L172 end
  end
  CombineStrawEnableEvent.sendEvent(self, isSwathActive, noEventSend)
  v4.isSwathActive = isSwathActive
  if self.playAnimation ~= nil and v4.chopper.animName ~= nil then
    if isSwathActive then
    end
    local v11 = self:getAnimationTime(v5)
    self:playAnimation(v5, v6 * v4.chopper.animSpeedScale, v11, true)
    if force then
      AnimatedVehicle.updateAnimationByName(self, v5, 9999999, true)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 67)
  v4.processing.inputBuffer.buffer[1].liters = 0
  -- TODO: structure LOP_FORNLOOP (pc 66, target 60)
  local v7 = self:getIsTurnedOn()
  if v7 and self.isClient then
    if v4.isSwathActive then
      v7:stopAnimations(v4.chopperAnimationNodes)
      v7:startAnimations(v4.strawDropAnimationNodes)
      v7 = v7:getIsSamplePlaying(v4.samples.chopperWork)
      -- if not v7 then goto L166 end
      v7:stopSample(v4.samples.chopperWork)
      v7:playSample(v4.samples.chopperStop)
    else
      v7:stopAnimations(v4.strawDropAnimationNodes)
      v7:startAnimations(v4.chopperAnimationNodes)
      v7:stopSample(v4.samples.chopperStop)
      v7:playSample(v4.samples.chopperStart)
      v7:playSample(v4.samples.chopperWork, 0, v4.samples.chopperStart)
    end
  end
  Combine.updateToggleStrawText(self)
end
function Combine:processCombineChopperArea(workArea)
  if not self.spec_combine.isSwathActive then
    self.spec_combine.workAreaParameters.droppedLiters = self.spec_combine.workAreaParameters.litersToDrop
    if 0 < self.spec_combine.workAreaParameters.litersToDrop and 0 < self.spec_combine.workAreaParameters.strawRatio then
      if Platform.gameplay.useSprayDiffuseMaps and 0.5 < self.spec_combine.workAreaParameters.strawRatio and self.spec_combine.workAreaParameters.strawGroundType ~= nil then
        local v6, v7, v8 = getWorldTranslation(workArea.start)
        local v9, v10, v11 = getWorldTranslation(workArea.width)
        local v12, v13, v14 = getWorldTranslation(workArea.height)
        FSDensityMapUtil.setGroundTypeLayerArea(v6, v8, v9, v11, v12, v14, self.spec_combine.workAreaParameters.strawGroundType)
      end
      self:raiseActive()
      v2.workAreaParameters.isChopperEffectEnabled = 500
    end
  end
  return v2.workAreaParameters.lastRealArea, v2.workAreaParameters.lastArea
end
function Combine:processCombineSwathArea(workArea)
  if self.spec_combine.isSwathActive and 0 < self.spec_combine.workAreaParameters.litersToDrop then
    local v5 = v5:getFruitTypeByFillTypeIndex(self.spec_combine.workAreaParameters.dropFillType)
    if v5 ~= nil and v5.windrowLiterPerSqm ~= nil then
      local v6 = v6:getWindrowFillTypeIndexByFruitTypeIndex(v5.index)
      if v6 ~= nil then
        local v7, v8, v9, v10, v11, v12 = DensityMapHeightUtil.getLineByArea(workArea.start, workArea.width, workArea.height, true)
        local v13, v14 = DensityMapHeightUtil.tipToGroundAroundLine(self, self.spec_combine.workAreaParameters.litersToDrop, v6, v7, v8, v9, v10, v11, v12, 0, nil, workArea.lineOffset, false, nil, false)
        workArea.lineOffset = v14
      end
    end
    if 0 < v4 then
      v2.workAreaParameters.isStrawEffectEnabled = 500
    end
    v2.workAreaParameters.droppedLiters = v4
  end
  return v2.workAreaParameters.lastRealArea, v2.workAreaParameters.lastArea
end
function Combine:setChopperPSEnabled(chopperPSenabled, fruitTypeChanged, density, isSynchronized)
  if self.spec_combine.chopperPSenabled == chopperPSenabled then
    -- if not v2 then goto L84 end
  end
  v5.chopperPSenabled = chopperPSenabled
  if self.isServer and isSynchronized then
    v5.sentChopperPSenabled = chopperPSenabled
  end
  if self.isClient then
    if chopperPSenabled then
      -- if not v2 then goto L27 end
    end
    v6:stopEffects(v5.chopperEffects)
    if chopperPSenabled then
      local v9 = self:getCombineLastValidFillType()
      v6:setFillType(...)
      v6:startEffects(v5.chopperEffects)
      local v6 = v6:getIsSamplePlaying(v5.samples.chopStraw)
      -- if v6 then goto L84 end
      v6:playSample(v5.samples.chopStraw)
    else
      v6 = v6:getIsSamplePlaying(v5.samples.chopStraw)
      if v6 then
        v6:stopSample(v5.samples.chopStraw)
      end
    end
  end
  if v5.chopperPSenabled and density ~= nil then
    v6:setDensity(v5.chopperEffects, density)
  end
end
function Combine:setStrawPSEnabled(strawPSenabled, fruitTypeChanged, density, isSynchronized)
  if self.spec_combine.strawPSenabled == strawPSenabled then
    -- if not v2 then goto L88 end
  end
  v5.strawPSenabled = strawPSenabled
  if self.isServer and isSynchronized then
    v5.sentStrawPSenabled = strawPSenabled
  end
  if not strawPSenabled then
    v5.strawToDrop = 0
  end
  if self.isClient then
    if strawPSenabled then
      -- if not v2 then goto L31 end
    end
    v6:stopEffects(v5.strawEffects)
    if strawPSenabled then
      local v9 = self:getCombineLastValidFillType()
      v6:setFillType(...)
      v6:startEffects(v5.strawEffects)
      local v6 = v6:getIsSamplePlaying(v5.samples.dropStraw)
      -- if v6 then goto L88 end
      v6:playSample(v5.samples.dropStraw)
    else
      v6 = v6:getIsSamplePlaying(v5.samples.dropStraw)
      if v6 then
        v6:stopSample(v5.samples.dropStraw)
      end
    end
  end
  if v5.strawPSenabled and density ~= nil then
    v6:setDensity(v5.strawEffects, density)
  end
end
function Combine:setCombineIsFilling(isFilling, fruitTypeChanged, isSynchronized)
  if self.spec_combine.isFilling == isFilling then
    -- if not v2 then goto L123 end
  end
  v4.isFilling = isFilling
  if self.isServer and isSynchronized then
    v4.sentIsFilling = isFilling
  end
  if self.isClient then
    if isFilling then
      v5:startAnimations(v4.fillingAnimationNodes)
    else
      v5:stopAnimations(v4.fillingAnimationNodes)
    end
    local v8 = self:getCombineLastValidFillType()
    v5:setFillType(...)
    v8 = self:getCombineLastValidFillType(v4.fillUnitIndex)
    v5:setFillType(...)
    if isFilling then
      -- if not v2 then goto L65 end
    end
    v5:stopEffects(v4.fillEffects)
    if isFilling then
      v8 = self:getCombineLastValidFillType()
      v5:setFillType(...)
      v5:startEffects(v4.fillEffects)
    end
    if isFilling then
      local v5 = v5:getIsSamplePlaying(v4.samples.fill)
      -- if v5 then goto L123 end
      v5:playSample(v4.samples.fill)
      return
    end
    v5 = v5:getIsSamplePlaying(v4.samples.fill)
    if v5 then
      v5:stopSample(v4.samples.fill)
    end
  end
end
function Combine:startThreshing()
  if 0 < self.spec_combine.numAttachedCutters then
    local v3 = self:getIsAIActive()
    if not not v3 then
      v3 = v3:getAIFieldWorkerIsTurning()
    end
    for v6, v7 in pairs(v1.attachedCutters) do
      if v2 and v7 ~= self then
        local v8 = self:getAttacherJointIndexFromObject(v7)
        self:setJointMoveDown(v8, true, true)
      end
      v7:setIsTurnedOn(true, true)
    end
    if v1.threshingStartAnimation ~= nil and self.playAnimation ~= nil then
      v7 = self:getAnimationTime(v1.threshingStartAnimation)
      self:playAnimation(v1.threshingStartAnimation, v1.threshingStartAnimationSpeedScale, v7, true)
    end
    if self.isClient then
      v3:stopSample(v1.samples.stop)
      v3:stopSample(v1.samples.work)
      v3:playSample(v1.samples.start)
      v3:playSample(v1.samples.work, 0, v1.samples.start)
    end
    SpecializationUtil.raiseEvent(self, "onStartThreshing")
  end
end
function Combine:stopThreshing()
  if self.isClient then
    v2:stopSample(self.spec_combine.samples.start)
    v2:stopSample(self.spec_combine.samples.work)
    v2:playSample(self.spec_combine.samples.stop)
  end
  self:setCombineIsFilling(false, false, true)
  for v5, v6 in pairs(v1.attachedCutters) do
    if v5 ~= self then
      local v7 = self:getAttacherJointIndexFromObject(v5)
      self:setJointMoveDown(v7, false, true)
    end
    v5:setIsTurnedOn(false, true)
  end
  if v1.threshingStartAnimation ~= nil and v1.playAnimation ~= nil then
    v6 = self:getAnimationTime(v1.threshingStartAnimation)
    self:playAnimation(v1.threshingStartAnimation, -v1.threshingStartAnimationSpeedScale, v6, true)
  end
  SpecializationUtil.raiseEvent(self, "onStopThreshing")
end
function Combine:setWorkedHectars(hectars)
  self.spec_combine.workedHectars = hectars
  if self.isServer then
    local v3 = math.abs(self.spec_combine.workedHectars - self.spec_combine.workedHectarsSent)
    if 0.01 < v3 then
      self:raiseDirtyFlags(self.spec_combine.dirtyFlag)
      self.spec_combine.workedHectarsSent = self.spec_combine.workedHectars
    end
  end
end
function Combine:addCutterToCombine(cutter)
  if self.spec_combine.attachedCutters[cutter] == nil then
    self.spec_combine.attachedCutters[cutter] = cutter
    self.spec_combine.numAttachedCutters = self.spec_combine.numAttachedCutters + 1
    if self.spec_combine.ladder.unfoldWhileCutterAttached and self.spec_combine.ladder.animName ~= nil then
      local v4 = self:getAnimationTime(self.spec_combine.ladder.animName)
      if v4 < 1 then
        local v8 = self:getAnimationTime(self.spec_combine.ladder.animName)
        self:playAnimation(self.spec_combine.ladder.animName, self.spec_combine.ladder.animSpeedScale, v8, true)
      end
    end
  end
end
function Combine:removeCutterFromCombine(cutter)
  if self.spec_combine.attachedCutters[cutter] ~= nil then
    self.spec_combine.numAttachedCutters = self.spec_combine.numAttachedCutters - 1
    if self.spec_combine.numAttachedCutters == 0 then
      self:setIsTurnedOn(false, true)
      if self.spec_combine.isBufferCombine then
        local v3 = self:getFillUnitFillType(self.spec_combine.fillUnitIndex)
        if v3 ~= FillType.UNKNOWN then
          local v6 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v6, self.spec_combine.fillUnitIndex, -math.huge, v3, ToolType.UNDEFINED, nil)
        end
      end
    end
    v2.attachedCutters[cutter] = nil
    if self.spec_combine.ladder.unfoldWhileCutterAttached and self.spec_combine.ladder.animName ~= nil then
      if self.getFoldAnimTime ~= nil then
        local foldAnimTime = self:getFoldAnimTime()
        if self.spec_combine.ladder.foldMaxLimit >= foldAnimTime then
          -- if v5 >= v0.spec_combine.ladder.foldMinLimit then goto L80 end
        end
      end
      if v4 then
        local v9 = self:getAnimationTime(v3.animName)
        self:playAnimation(v3.animName, -v3.animSpeedScale, v9, true)
      end
    end
    if Platform.gameplay.automaticVehicleControl then
      local v4 = next(v2.attachedCutters)
      if v4 == nil then
        v4 = self:getActionControllerDirection()
        if v4 == -1 then
          self:playControlledActions()
        end
      end
    end
  end
end
function Combine:addCutterArea(area, realArea, inputFruitType, outputFillType, strawRatio, strawGroundType, farmId, cutterLoad)
  if 0 < area then
    if self.spec_combine.lastCuttersFruitType ~= FruitType.UNKNOWN and self.spec_combine.lastCuttersArea ~= 0 then
      -- if v0.spec_combine.lastCuttersOutputFillType ~= v4 then goto L412 end
    end
    v9.lastCuttersArea = v9.lastCuttersArea + area
    v9.lastCuttersOutputFillType = outputFillType
    v9.lastCuttersInputFruitType = inputFruitType
    v9.lastCuttersAreaTime = g_currentMission.time
    if not v9.swath.isAvailable then
      local v10 = v10:getFruitTypeByIndex(inputFruitType)
      v9.isSwathActive = not v10.hasWindrow
    end
    local v11 = v11:getFruitTypeByIndex(inputFruitType)
    if v11.windrowLiterPerSqm ~= nil then
    end
    local v12 = self:getIsThreshingDuringRain()
    if v12 and self.propertyState ~= Vehicle.PROPERTY_STATE_MISSION then
    end
    v12 = self:getFillUnitLastValidFillType(v9.fillUnitIndex)
    if v12 ~= outputFillType then
      v12 = self:getFillUnitLastValidFillType(v9.bufferFillUnitIndex)
      -- if v12 ~= v4 then goto L141 end
    end
    local v15 = v15:getFruitPixelsToSqm()
    if 0 < realArea * v15 * v10 * strawRatio then
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].area = v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].area + area
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].realArea = v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].realArea + realArea
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].liters = v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].liters + realArea * v15 * v10 * strawRatio
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].inputLiters = v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].inputLiters + realArea * v15 * v10 * strawRatio
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].strawRatio = strawRatio
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].strawGroundType = strawGroundType
      v9.processing.inputBuffer.buffer[v9.processing.inputBuffer.fillIndex].effectDensity = cutterLoad * strawRatio * 0.8 + 0.2
    end
    if v9.fillEnableTime == nil then
      v9.fillEnableTime = g_currentMission.time + v9.processing.toggleTime
    end
    v12 = v12:getFruitPixelsToSqm()
    if inputFruitType ~= FruitType.UNKNOWN then
      local v14 = v14:getFruitTypeByIndex(inputFruitType)
    end
    if v9.additives.available then
      -- TODO: structure LOP_FORNPREP (pc 191, target 202)
      if outputFillType == v9.additives.fillTypes[1] then
      else
        -- TODO: structure LOP_FORNLOOP (pc 201, target 192)
      end
      if damage then
        local v17 = self:getFillUnitFillLevel(v9.additives.fillUnitIndex)
        if 0 < v17 and 0 < v9.additives.usage * v15 then
          local v19 = math.min(v17 / v9.additives.usage * v15, 1)
          local v22 = self:getOwnerFarmId()
          local v25 = self:getFillUnitFillType(v9.additives.fillUnitIndex)
          self:addFillUnitFillLevel(v22, v9.additives.fillUnitIndex, -(v9.additives.usage * v15), v25, ToolType.UNDEFINED)
        end
      end
    end
    v22 = v22:getFruitPixelsToSqm()
    local v20 = MathUtil.areaToHa(...)
    self:setWorkedHectars(v9.workedHectars + v20)
    if farmId ~= AccessHandler.EVERYONE then
      local damage = self:getVehicleDamage()
      if 0 < damage then
      end
    end
    damage = self:getFillUnitCapacity(v9.fillUnitIndex)
    if damage == math.huge then
      damage = self:getFillUnitFillLevel(v9.fillUnitIndex)
      if 0.001 < damage and v9.lastDischargeTime + v9.fillLevelBufferTime < g_time then
        return v15
      end
    end
    if v9.bufferFillUnitIndex ~= nil then
      v17 = self:getFillUnitFreeCapacity(v9.bufferFillUnitIndex)
      if 0 < v17 then
      end
    end
    if 0 < v9.loadingDelay then
      -- TODO: structure LOP_FORNPREP (pc 339, target 393)
      if not v9.loadingDelaySlots[1].valid then
        v9.loadingDelaySlots[1].valid = true
        v9.loadingDelaySlots[1].fillLevelDelta = v15
        v9.loadingDelaySlots[1].fillType = outputFillType
        if v9.loadingDelaySlotsDelayedInsert then
          v9.loadingDelaySlots[1].time = g_time
        else
          v9.loadingDelaySlots[1].time = g_time + v9.unloadingDelay - v9.loadingDelay
        end
        v9.loadingDelaySlotsDelayedInsert = not v9.loadingDelaySlotsDelayedInsert
        return v15
      end
      -- TODO: structure LOP_FORNLOOP (pc 392, target 340)
      return v15
    end
    v17 = self:getFillVolumeLoadInfo(v9.loadInfoIndex)
    v20 = self:getOwnerFarmId()
    return self:addFillUnitFillLevel(v20, damage, v15, outputFillType, ToolType.UNDEFINED, v17)
  end
  return 0
end
function Combine:getIsThreshingDuringRain(earlyWarning)
  if not self.spec_combine.allowThreshingDuringRain then
    local v3 = v3:getRainFallScale()
    local v4 = v4:getTimeSinceLastRain()
    if earlyWarning ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000001 -> L28
      -- if 0.02 > v3 then goto L36 end
      -- if v4 >= 20 then goto L36 end
      return true
    elseif 0.1 <= v3 and v4 < 20 then
      return true
    end
  end
  return false
end
function Combine:verifyCombine(fruitType, outputFillType)
  if not self.spec_combine.bufferFillUnitIndex then
  end
  local v5 = self:getFillUnitFillLevelPercentage(v4)
  local v6 = self:getFillTypeChangeThreshold()
  if v6 >= v5 then
    -- if not v3.isBufferCombine then goto L55 end
  end
  v5 = self:getFillUnitFillType(v4)
  if v5 ~= FillType.UNKNOWN and fruitType ~= FruitType.UNKNOWN and v5 ~= outputFillType then
    if v3.isBufferCombine then
      local v8 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v8, v4, -math.huge, v5, ToolType.UNDEFINED, nil)
      return self
    end
    return nil, self, v5
  end
  if v3.bufferFillUnitIndex ~= nil then
    v6 = self:getFillUnitFillLevel(v3.bufferFillUnitIndex)
  end
  v6 = self:getFillUnitFreeCapacity(v3.fillUnitIndex)
  if v6 <= v5 then
    return nil
  end
  return self
end
function Combine:getFillLevelDependentSpeed()
  if self.spec_combine.rotationNodesSpeedReverseFillLevel ~= nil then
    local v3 = self:getFillUnitFillLevel(self.spec_combine.fillUnitIndex)
    local v4 = self:getFillUnitCapacity(self.spec_combine.fillUnitIndex)
    if self.spec_combine.rotationNodesSpeedReverseFillLevel < v3 / v4 then
      return -1
    end
    return 1
  end
  return 1
end
function Combine:getIsCutterCompatible(fillTypes)
  local v3 = self:getFillUnitSupportedFillTypes(self.spec_combine.fillUnitIndex)
  -- TODO: structure LOP_FORNPREP (pc 10, target 24)
  for v11, v12 in pairs(v3) do
    if not (v7 == v11) then
      continue
    end
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 11)
  return false
end
function Combine:getCombineLastValidFillType()
  if self.spec_combine.bufferFillUnitIndex ~= nil then
    local v3 = self:getFillUnitLastValidFillType(self.spec_combine.bufferFillUnitIndex)
  end
  if v2 == FillType.UNKNOWN then
    v3 = self:getFillUnitLastValidFillType(earlyWarning.fillUnitIndex)
  end
  if v2 == FillType.UNKNOWN and 0 < earlyWarning.loadingDelay then
    -- TODO: structure LOP_FORNPREP (pc 38, target 52)
    if earlyWarning.loadingDelaySlots[1].valid then
    else
      -- TODO: structure LOP_FORNLOOP (pc 51, target 39)
    end
  end
  if v2 == FillType.UNKNOWN then
  end
  return v2
end
function Combine:getCombineLoadPercentage()
  if self.spec_combine ~= nil and 0 < self.spec_combine.numAttachedCutters then
    for v6, v7 in pairs(self.spec_combine.attachedCutters) do
      if not (v6.getCutterLoad ~= nil) then
        continue
      end
      local v8 = v6:getCutterLoad()
    end
    return v2 / earlyWarning.numAttachedCutters
  end
  return 0
end
v0:registerModifierType("COMBINE_LOAD", Combine.getCombineLoadPercentage)
function Combine:getCanBeTurnedOn(superFunc)
  if self.spec_combine.numAttachedCutters <= 0 then
    return false
  end
  for v6, v7 in pairs(v2.attachedCutters) do
    if not (v6 ~= self) then
      continue
    end
    if not (v6.getCanBeTurnedOn ~= nil) then
      continue
    end
    local v8 = v6:getCanBeTurnedOn()
    if not not v8 then
      continue
    end
    return false
  end
  v3 = superFunc(self)
  return v3
end
function Combine:getTurnedOnNotAllowedWarning(superFunc)
  local v2 = self:getIsActiveForInput(true)
  if v2 then
    local v3 = self:getCanBeTurnedOn()
    if not v3 then
      if self.spec_combine.numAttachedCutters == 0 then
        return self.spec_combine.texts.warningNoCutter
      end
      for v6, v7 in pairs(v2.attachedCutters) do
        if not (v6 ~= self) then
          continue
        end
        if not (v6.getTurnedOnNotAllowedWarning ~= nil) then
          continue
        end
        local v8 = v6:getTurnedOnNotAllowedWarning()
        if not (v8 ~= nil) then
          continue
        end
        return v8
      end
    end
  end
  v2 = superFunc(self)
  return v2
end
function Combine:getAreControlledActionsAllowed(superFunc)
  local v2 = self:getActionControllerDirection()
  if v2 == 1 and self.spec_combine.numAttachedCutters <= 0 then
    return false, self.spec_combine.texts.warningNoCutter
  end
  v2 = superFunc(self)
  return v2
end
function Combine:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if not self.spec_combine.allowFoldWhileThreshing then
    local v5 = self:getIsTurnedOn()
    if v5 then
      return false, self.spec_combine.texts.warningFoldingTurnedOn
    end
  end
  v5 = self:getFillUnitFillLevel(v4.fillUnitIndex)
  if direction == v4.foldDirection and v4.foldFillLevelThreshold < v5 then
    local v6 = self:getFillUnitCapacity(v4.fillUnitIndex)
    if v6 ~= math.huge then
      return false, v4.texts.warningFoldingWhileFilled
    end
  end
  v6 = superFunc(self, direction, onAiTurnOn)
  return v6
end
function Combine.getCanBeSelected(v0, earlyWarning)
  return true
end
function Combine.loadWorkAreaFromXML(v0, earlyWarning, v2, v3, v4)
  local v5 = earlyWarning(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  if v2["type"] ~= WorkAreaType.COMBINECHOPPER then
    -- if v2["type"] ~= WorkAreaType.COMBINESWATH then goto L43 end
  end
  v5 = v3:getValue(v4 .. "#requiresOwnedFarmland")
  if v5 == nil then
    v2.requiresOwnedFarmland = false
  end
  v5 = v3:getValue(v4 .. "#needsSetIsTurnedOn")
  if v5 == nil then
    v2.needsSetIsTurnedOn = false
  end
  return true
end
function Combine:getDirtMultiplier(superFunc)
  for v6, v7 in pairs(self.spec_combine.attachedCutters) do
    if not (v6.spec_cutter ~= nil) then
      continue
    end
    if not v6.spec_cutter.isWorking then
      continue
    end
    local v9 = superFunc(self)
    local v12 = self:getWorkDirtMultiplier()
    local v13 = self:getLastSpeed()
    return v9 + v12 * v13 / v6.speedLimit
  end
  v3 = superFunc(self)
  return v3
end
function Combine:getWearMultiplier(superFunc)
  for v6, v7 in pairs(self.spec_combine.attachedCutters) do
    if not (v6.spec_cutter ~= nil) then
      continue
    end
    if not v6.spec_cutter.isWorking then
      continue
    end
    local v8 = v6:getCutterStoneMultiplier()
    local v10 = superFunc(self)
    local v14 = self:getWorkWearMultiplier()
    local v15 = self:getLastSpeed()
    return v10 + v14 * v15 / v6.speedLimit * v8
  end
  v3 = superFunc(self)
  return v3
end
function Combine.loadTurnedOnAnimationFromXML(v0, earlyWarning, v2, v3, v4)
  local v5 = v2:getValue(v3 .. "#activeChopper", true)
  v4.activeChopper = v5
  v5 = v2:getValue(v3 .. "#activeStrawDrop", true)
  v4.activeStrawDrop = v5
  v5 = v2:getValue(v3 .. "#waitForStraw", false)
  v4.waitForStraw = v5
  v5 = earlyWarning(v0, v2, v3, v4)
  return v5
end
function Combine:getIsTurnedOnAnimationActive(superFunc, turnedOnAnimation)
  if not turnedOnAnimation.activeChopper then
    -- if not v0.spec_combine.isSwathActive then goto L14 end
  end
  if not turnedOnAnimation.activeStrawDrop and v3.isSwathActive then
    return false
  end
  if turnedOnAnimation.waitForStraw then
    local v4 = superFunc(self, turnedOnAnimation)
    if not v4 and 0 >= v3.workAreaParameters.isChopperEffectEnabled then
    end
    return v4
  end
  v4 = superFunc(self, turnedOnAnimation)
  return v4
end
function Combine:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_combine.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_combine.swath.isAvailable and self.spec_combine.chopper.isAvailable then
      if self.spec_combine.chopper.isPowered then
      end
      local v5, v6 = v4(self, v3.actionEvents, InputAction.TOGGLE_CHOPPER, self, Combine.actionEventToggleChopper, false, true, false, true, nil)
      v7:setActionEventTextPriority(v6, GS_PRIO_NORMAL)
      Combine.updateToggleStrawText(self)
    end
  end
end
function Combine:onStartWorkAreaProcessing(dt)
  self.spec_combine.workAreaParameters.droppedLiters = 0
  self.spec_combine.workAreaParameters.litersToDrop = 0
  self.spec_combine.workAreaParameters.strawRatio = 0
  self.spec_combine.workAreaParameters.dropFillType = FillType.UNKNOWN
  if not self.spec_combine.bufferFillUnitIndex then
  end
  local v4 = self:getFillUnitLastValidFillType(v3)
  if v4 ~= FillType.UNKNOWN then
    if v2.processing.inputBuffer.slotDuration == 0 then
      v2.workAreaParameters.litersToDrop = v2.processing.inputBuffer.buffer[v2.processing.inputBuffer.dropIndex].liters
    else
      local v8 = math.min(v2.processing.inputBuffer.buffer[v2.processing.inputBuffer.dropIndex].liters, dt / v2.processing.inputBuffer.slotDuration * v2.processing.inputBuffer.buffer[v2.processing.inputBuffer.dropIndex].inputLiters)
      v2.workAreaParameters.litersToDrop = v8
    end
    v2.workAreaParameters.strawRatio = v5.buffer[v5.dropIndex].strawRatio
    v2.workAreaParameters.strawGroundType = v5.buffer[v5.dropIndex].strawGroundType
    v2.workAreaParameters.effectDensity = v5.buffer[v5.dropIndex].effectDensity
    v2.workAreaParameters.dropFillType = v4
  end
  v2.workAreaParameters.lastRealArea = 0
  v2.workAreaParameters.lastArea = 0
end
function Combine:onEndWorkAreaProcessing(dt, hasProcessed)
  local v6 = math.max(0, self.spec_combine.processing.inputBuffer.buffer[self.spec_combine.processing.inputBuffer.dropIndex].liters - self.spec_combine.workAreaParameters.droppedLiters)
  self.spec_combine.processing.inputBuffer.buffer[self.spec_combine.processing.inputBuffer.dropIndex].liters = v6
end
function Combine:onChangedFillType(fillUnitIndex, fillTypeIndex)
  if self.spec_combine.bufferFillUnitIndex ~= nil then
    -- if v1 == v0.spec_combine.bufferFillUnitIndex then goto L14 end
  end
  if fillUnitIndex == v3.fillUnitIndex and fillTypeIndex ~= FillType.UNKNOWN then
    if fillTypeIndex ~= v3.lastEffectFillType then
      if v3.chopperPSenabled then
        self:setChopperPSEnabled(true, true, 0, true)
      end
      if v3.strawPSenabled then
        self:setStrawPSEnabled(true, true, 0, true)
      end
      if v3.isFilling then
        self:setCombineIsFilling(true, true, true)
      end
    end
    v3.lastEffectFillType = fillTypeIndex
  end
end
function Combine:onDeactivate()
  self:setChopperPSEnabled(false, false, 0, true)
  self:setStrawPSEnabled(false, false, 0, true)
  self:setCombineIsFilling(false, false, true)
  self.spec_combine.fillEnableTime = nil
  self.spec_combine.fillDisableTime = nil
end
function Combine:onPostAttachImplement(attachable, inputJointDescIndex, jointDescIndex)
  local attacherJoint = attachable:getActiveInputAttacherJoint()
  if attacherJoint ~= nil then
    if attacherJoint.jointType ~= AttacherJoints.JOINTTYPE_CUTTER then
      -- if v4.jointType ~= AttacherJoints.JOINTTYPE_CUTTERHARVESTER then goto L21 end
    end
    self:addCutterToCombine(attachable)
  end
end
function Combine:onPostDetachImplement(implementIndex)
  local object = self:getObjectFromImplementIndex(implementIndex)
  if object ~= nil then
    local attacherJoint = object:getActiveInputAttacherJoint()
    if attacherJoint ~= nil then
      if attacherJoint.jointType ~= AttacherJoints.JOINTTYPE_CUTTER then
        -- if v3.jointType ~= AttacherJoints.JOINTTYPE_CUTTERHARVESTER then goto L27 end
      end
      self:removeCutterFromCombine(object)
    end
  end
end
function Combine:onTurnedOn()
  self:startThreshing()
  if self.isClient then
    v2:startAnimations(self.spec_combine.animationNodes)
    if self.spec_combine.isSwathActive then
      v2:startAnimations(self.spec_combine.strawDropAnimationNodes)
    else
      v2:startAnimations(self.spec_combine.chopperAnimationNodes)
      v2:stopSample(self.spec_combine.samples.chopperStop)
      v2:playSample(self.spec_combine.samples.chopperStart)
      v2:playSample(self.spec_combine.samples.chopperWork, 0, self.spec_combine.samples.chopperStart)
    end
    local v5 = self:getCombineLastValidFillType()
    v2:setFillType(...)
    v2:startEffects(earlyWarning.effects)
  end
end
function Combine:onTurnedOff()
  self:stopThreshing()
  if self.isClient then
    v2:stopAnimations(self.spec_combine.animationNodes)
    v2:stopAnimations(self.spec_combine.chopperAnimationNodes)
    v2:stopAnimations(self.spec_combine.strawDropAnimationNodes)
    v2:stopEffects(self.spec_combine.effects)
    local v2 = v2:getIsSamplePlaying(self.spec_combine.samples.chopperWork)
    if v2 then
      v2:stopSample(self.spec_combine.samples.chopperWork)
      v2:playSample(self.spec_combine.samples.chopperStop)
    end
  end
end
function Combine:onEnterVehicle()
  if self.spec_combine.ladder.animName ~= nil then
    if self.getFoldAnimTime ~= nil then
      local foldAnimTime = self:getFoldAnimTime()
      if self.spec_combine.ladder.foldMaxLimit >= foldAnimTime then
        -- if v3 >= v0.spec_combine.ladder.foldMinLimit then goto L25 end
      end
    end
    if earlyWarning.unfoldWhileCutterAttached and 0 < self.spec_combine.numAttachedCutters then
    end
    if v2 then
      local v7 = self:getAnimationTime(earlyWarning.animName)
      self:playAnimation(earlyWarning.animName, -earlyWarning.animSpeedScale, v7, true)
    end
  end
end
function Combine:onLeaveVehicle()
  if self.spec_combine.ladder.animName ~= nil then
    if self.getFoldAnimTime ~= nil then
      local foldAnimTime = self:getFoldAnimTime()
      if self.spec_combine.ladder.foldMaxLimit >= foldAnimTime then
        -- if v3 >= v0.spec_combine.ladder.foldMinLimit then goto L25 end
      end
    end
    if earlyWarning.unfoldWhileCutterAttached and 0 < self.spec_combine.numAttachedCutters then
    end
    if v2 then
      local v7 = self:getAnimationTime(earlyWarning.animName)
      self:playAnimation(earlyWarning.animName, earlyWarning.animSpeedScale, v7, true)
    end
  end
end
function Combine:onFoldStateChanged(direction, moveToMiddle)
  if self.spec_combine.ladder.animName ~= nil and direction ~= 0 and not moveToMiddle then
    if self.spec_combine.ladder.unfoldWhileCutterAttached and 0 < self.spec_combine.numAttachedCutters then
    end
    if v4 then
      local v9 = self:getAnimationTime(v3.animName)
      self:playAnimation(v3.animName, direction * v3.animSpeedScale * v3.foldDirection, v9, true)
    end
  end
end
function Combine:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if fillUnitIndex == self.spec_combine.fillUnitIndex and fillLevelDelta < 0 then
    self.spec_combine.lastDischargeTime = g_time
  end
end
function Combine:actionEventToggleChopper(actionName, inputValue, callbackState, isAnalog)
  if self.spec_combine.swath.isAvailable then
    if not self.spec_combine.bufferFillUnitIndex then
    end
    local v9 = self:getFillUnitFillType(v6)
    local v7 = v7:getFruitTypeIndexByFillTypeIndex(...)
    if v7 ~= nil and v7 ~= FruitType.UNKNOWN then
      local v8 = v8:getFruitTypeByIndex(v7)
      if v8.hasWindrow then
        self:setIsSwathActive(not v5.isSwathActive)
        return
      end
      local v11 = v11:getText("warning_couldNotToggleChopper")
      v9:showBlinkingWarning(v11, 2000)
      return
    end
    self:setIsSwathActive(not v5.isSwathActive)
  end
end
function Combine:updateToggleStrawText()
  if self.spec_combine.actionEvents[InputAction.TOGGLE_CHOPPER] ~= nil and self.spec_combine.actionEvents[InputAction.TOGGLE_CHOPPER].actionEventId ~= nil then
    if self.spec_combine.isSwathActive then
      local v4 = v4:getText("action_disableStrawSwath")
    else
      v4 = v4:getText("action_enableStrawSwath")
    end
    v4:setActionEventText(v2.actionEventId, v3)
  end
end
