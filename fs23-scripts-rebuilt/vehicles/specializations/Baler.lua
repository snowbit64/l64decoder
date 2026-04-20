-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/BalerSetIsUnloadingBaleEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BalerSetBaleTimeEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BalerCreateBaleEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BalerDropFromPlatformEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BalerAutomaticDropEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BalerBaleTypeEvent.lua")
Baler = {UNLOADING_CLOSED = 1, UNLOADING_OPENING = 2, UNLOADING_OPEN = 3, UNLOADING_CLOSING = 4}
function Baler.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    return SpecializationUtil.hasSpecialization(Baler, self.specializations)
  end, AIDriveStrategyBaler)
  v0:addWorkAreaType("baler", false)
  v0:addSpecType("balerBaleSizeRound", "shopListAttributeIconBaleSizeRound", Baler.loadSpecValueBaleSizeRound, Baler.getSpecValueBaleSizeRound, "vehicle")
  v0:addSpecType("balerBaleSizeSquare", "shopListAttributeIconBaleSizeSquare", Baler.loadSpecValueBaleSizeSquare, Baler.getSpecValueBaleSizeSquare, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("Baler")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler#fillScale", "Fill scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler#useDropLandOwnershipForBales", "Defines if the produced bales are always owned by the land owner of the current location while dropping the bale. If not, the owner is either the owner from the last workArea pickup location (if available) or the owner of the bale as default.", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleAnimation#spacing", "Spacing between bales", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleAnimation.key(?)#time", "Key time")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.baler.baleAnimation.key(?)#pos", "Key position")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.baler.baleAnimation.key(?)#rot", "Key rotation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.baleAnimation#closeAnimationName", "Close animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleAnimation#closeAnimationSpeed", "Close animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.automaticDrop#enabled", "Automatic drop default enabled", "true on mobile")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.automaticDrop#toggleable", "Automatic bale drop can be toggled", "false on mobile")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baler.baleTypes#changeText", "Change bale size text", "action_changeBaleSize")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.baleTypes.baleType(?)#isRoundBale", "Is round bale", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleTypes.baleType(?)#width", "Bale width", 1.2)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleTypes.baleType(?)#height", "Bale height", 0.9)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleTypes.baleType(?)#length", "Bale length", 2.4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleTypes.baleType(?)#diameter", "Bale diameter", 2.8)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.baleTypes.baleType(?)#isDefault", "Bale type is selected by default", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baler.baleTypes.baleType(?).nodes#baleNode", "Bale link node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baler.baleTypes.baleType(?).nodes#baleRootNode", "Bale root node", "Same as baleNode")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baler.baleTypes.baleType(?).nodes#scaleNode", "Bale scale node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.baler.baleTypes.baleType(?).nodes#scaleComponents", "Bale scale component")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.baleTypes.baleType(?).animations#fillAnimation", "Fill animation while this bale type is active")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.baleTypes.baleType(?).animations#unloadAnimation", "Unload animation while this bale type is active")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleTypes.baleType(?).animations#unloadAnimationSpeed", "Unload animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baler.baleTypes.baleType(?).animations#dropAnimationTime", "Specific time in #unloadAnimation when to drop the bale", "At the end of the unloading animation")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baler.baleTypes.baleType(?).detailVisibilityCutNode(?)#node", "Reference node for details visibility cut")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler.baleTypes.baleType(?).detailVisibilityCutNode(?)#axis", "Axis of visibility cut [1, 3]", 3)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler.baleTypes.baleType(?).detailVisibilityCutNode(?)#direction", "Direction of visibility cut [-1, 1]", 1)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.baler.baleTypes.baleType(?)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler#unfinishedBaleThreshold", "Threshold to unload a unfinished bale", 2000)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler#canUnloadUnfinishedBale", "Can unload unfinished bale", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "eject")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "unload")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "door")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "knotCleaning")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "bufferOverloadingStart(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "bufferOverloadingStop(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baler.sounds", "bufferOverloadingWork(?)")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.baler.animationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.baler.unloadAnimationNodes")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.baler.fillEffect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.baler.additiveEffects")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.knotingAnimation#name", "Knoting animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.knotingAnimation#speed", "Knoting animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.compactingAnimation#name", "Compacting animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.compactingAnimation#interval", "Compacting interval", 60)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.compactingAnimation#compactTime", "Compacting time", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.compactingAnimation#speed", "Compacting animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.compactingAnimation#minFillLevelTime", "Compacting min. fill level animation target time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.compactingAnimation#maxFillLevelTime", "Compacting max. fill level animation target time", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler#maxPickupLitersPerSecond", "Max pickup liters per second", 500)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.baleUnloading#allowed", "Bale unloading allowed", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleUnloading#time", "Bale unloading time", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.baleUnloading#foldThreshold", "Bale unloading fold threshold", 0.25)
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baler.automaticDrop#textPos", "Positive toggle automatic drop text", "action_toggleAutomaticBaleDropPos")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baler.automaticDrop#textNeg", "Negative toggle automatic drop text", "action_toggleAutomaticBaleDropNeg")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.platform#animationName", "Platform animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.platform#nextBaleTime", "Animation time when directly the next bale is unloaded after dropping from platform", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.platform#automaticDrop", "Bale is automatically dropped from platform", "true on mobile")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.platform#aiSpeed", "Speed of AI while dropping a bale from platform (km/h)", 3)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler.buffer#fillUnitIndex", "Buffer fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler.buffer#unloadInfoIndex", "Fill volume unload info index index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.buffer#capacityPercentage", "If set, this percentage of the bale capacity is set for the buffer. If not set the defined capacity from the xml is used.")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baler.buffer#overloadingDuration", "Duration of overloading from buffer to baler unit (sec)", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baler.buffer#overloadingDelay", "Time until the real overloading is starting (can be used to wait for the effects to be fully fade in) (sec)", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.buffer#overloadingStartFillLevelPct", "Fill level percentage [0-1] of the buffer to start the overloading", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.buffer#fillMainUnitAfterOverload", "After overloading the full buffer to the main unit it will continue filling the main unit until it's full", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.buffer#balerDisplayType", "Forced fill type to display on baler unit")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baler.buffer.dummyBale#node", "Dummy bale link node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.baler.buffer.dummyBale#scaleComponents", "Dummy bale link scale components", "1 1 0")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.buffer.overloadAnimation#name", "Name of overload animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.buffer.overloadAnimation#speedScale", "Speed of overload animation", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.buffer.loadingStateAnimation#name", "Name of loading state animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.buffer.loadingStateAnimation#speedScale", "Speed of loading state animation", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.baler.buffer.overloadingEffect")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.baler.buffer.overloadingAnimationNodes")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit#targetLiterPerSecond", "Target liters per second", 200)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baler.variableSpeedLimit#changeInterval", "Interval which adjusts speed limit to conditions", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit#minSpeedLimit", "Min. speed limit", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit#maxSpeedLimit", "Max. speed limit", 15)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit#defaultSpeedLimit", "Default speed limit", 10)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.variableSpeedLimit.target(?)#fillType", "Name of fill type")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit.target(?)#targetLiterPerSecond", "Target liters per second with this fill type", 200)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.variableSpeedLimit.target(?)#defaultSpeedLimit", "Default speed limit with this fill type", 10)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baler.additives#fillUnitIndex", "Additives fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baler.additives#usage", "Usage per picked up liter", 0.0000275)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baler.additives#fillTypes", "Fill types to apply additives", "GRASS_WINDROW")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baler.additives#appliedByBufferOverloading", "Additives are applied while the buffer unit is overloaded into main unit", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.ALARM_TRIGGER_XML_KEY .. "#needsBaleLoaded", "Alarm triggers only when a full bale is loaded", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baler#numBales", "Number of bales")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).baler.bale(?)#filename", "XML Filename of bale")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).baler.bale(?)#fillType", "Bale fill type index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).baler.bale(?)#fillLevel", "Bale fill level")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).baler.bale(?)#baleTime", "Bale time")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).baler#platformReadyToDrop", "Platform is ready to drop", false)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baler#baleTypeIndex", "Current bale type index", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baler#preSelectedBaleTypeIndex", "Pre selected bale type index", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).baler#fillUnitCapacity", "Current baler capacity depending on bale size")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).baler#bufferUnloadingStarted", "Baler buffer unloading in progress")
end
function Baler.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(WorkArea, specializations)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, specializations)
      if v1 then
        v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, specializations)
      end
    end
  end
  return v1
end
function Baler.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processBalerArea", Baler.processBalerArea)
  SpecializationUtil.registerFunction(vehicleType, "setBaleTypeIndex", Baler.setBaleTypeIndex)
  SpecializationUtil.registerFunction(vehicleType, "isUnloadingAllowed", Baler.isUnloadingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getTimeFromLevel", Baler.getTimeFromLevel)
  SpecializationUtil.registerFunction(vehicleType, "moveBales", Baler.moveBales)
  SpecializationUtil.registerFunction(vehicleType, "moveBale", Baler.moveBale)
  SpecializationUtil.registerFunction(vehicleType, "setIsUnloadingBale", Baler.setIsUnloadingBale)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleUnloading", Baler.getIsBaleUnloading)
  SpecializationUtil.registerFunction(vehicleType, "dropBale", Baler.dropBale)
  SpecializationUtil.registerFunction(vehicleType, "finishBale", Baler.finishBale)
  SpecializationUtil.registerFunction(vehicleType, "createBale", Baler.createBale)
  SpecializationUtil.registerFunction(vehicleType, "setBaleTime", Baler.setBaleTime)
  SpecializationUtil.registerFunction(vehicleType, "getCanUnloadUnfinishedBale", Baler.getCanUnloadUnfinishedBale)
  SpecializationUtil.registerFunction(vehicleType, "setBalerAutomaticDrop", Baler.setBalerAutomaticDrop)
  SpecializationUtil.registerFunction(vehicleType, "updateDummyBale", Baler.updateDummyBale)
  SpecializationUtil.registerFunction(vehicleType, "deleteDummyBale", Baler.deleteDummyBale)
  SpecializationUtil.registerFunction(vehicleType, "createDummyBale", Baler.createDummyBale)
  SpecializationUtil.registerFunction(vehicleType, "handleUnloadingBaleEvent", Baler.handleUnloadingBaleEvent)
  SpecializationUtil.registerFunction(vehicleType, "dropBaleFromPlatform", Baler.dropBaleFromPlatform)
  SpecializationUtil.registerFunction(vehicleType, "getBalerBaleOwnerFarmId", Baler.getBalerBaleOwnerFarmId)
end
function Baler.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", Baler.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Baler.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", Baler.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", Baler.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", Baler.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Baler.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", Baler.getConsumingLoad)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresPower", Baler.getRequiresPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Baler.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAttachedTo", Baler.getIsAttachedTo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowDynamicMountFillLevelInfo", Baler.getAllowDynamicMountFillLevelInfo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAlarmTriggerIsActive", Baler.getAlarmTriggerIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAlarmTrigger", Baler.loadAlarmTrigger)
end
function Baler.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onChangedFillType", Baler)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Baler)
end
function Baler:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.fillScale#value", "vehicle.baler#fillScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.baler.animationNodes.animationNode", "baler")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.balingAnimation#name", "vehicle.turnOnVehicle.turnedOnAnimation#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.fillParticleSystems", "vehicle.baler.fillEffect with effectClass 'ParticleEffect'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.uvScrollParts.uvScrollPart", "vehicle.baler.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.balerAlarm", "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration.fillUnits.fillUnit.alarmTriggers.alarmTrigger.alarmSound")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#node", "vehicle.baler.baleTypes.baleType#baleNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#baleNode", "vehicle.baler.baleTypes.baleType#baleNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#scaleNode", "vehicle.baler.baleTypes.baleType#scaleNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#baleScaleComponent", "vehicle.baler.baleTypes.baleType#scaleComponents")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#unloadAnimationName", "vehicle.baler.baleTypes.baleType#unloadAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#unloadAnimationSpeed", "vehicle.baler.baleTypes.baleType#unloadAnimationSpeed")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#baleDropAnimTime", "vehicle.baler.baleTypes.baleType#dropAnimationTime")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler#toggleAutomaticDropTextPos", "vehicle.baler.automaticDrop#textPos")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler#toggleAutomaticDropTextNeg", "vehicle.baler.automaticDrop#textNeg")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baler.baleAnimation#firstBaleMarker", "Please adjust bale nodes to match the default balers")
  local v3 = v3:getValue("vehicle.baler#fillScale", 1)
  self.spec_baler.fillScale = v3
  v3 = v3:getValue("vehicle.baler#fillUnitIndex", 1)
  self.spec_baler.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.baler#useDropLandOwnershipForBales", false)
  self.spec_baler.useDropLandOwnershipForBales = v3
  v3 = v3:hasProperty("vehicle.baler.baleAnimation")
  if v3 then
    v3 = AnimCurve.new(linearInterpolatorN)
    v9:iterate("vehicle.baler.baleAnimation.key", function(self, savegame)
      XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, savegame .. "#time")
      local v3, v4, v5 = v3:getValue(savegame .. "#pos")
      v3, v4, v5 = v3:getValue(savegame .. "#rot", "0 0 0")
      if u1 ~= nil then
        v3 = MathUtil.vector3Length(u1 - {x = v3, y = v4, z = v5, rx = v3, ry = v4, rz = v5}.x, u2 - {x = v3, y = v4, z = v5, rx = v3, ry = v4, rz = v5}.y, u3 - {x = v3, y = v4, z = v5, rx = v3, ry = v4, rz = v5}.z)
        u4 = u4 + {x = v3, y = v4, z = v5, rx = v3, ry = v4, rz = v5, length = v3}.length
      end
      table.insert(u5, v2)
      u1 = v2.x
      u2 = v2.y
      u3 = v2.z
    end)
    -- TODO: structure LOP_FORNPREP (pc 176, target 208)
    if {}[1].pos ~= nil then
    end
    v3:addKeyframe({v12.x, v12.y, v12.z, v12.rx, v12.ry, v12.rz, time = v13})
    -- TODO: structure LOP_FORNLOOP (pc 207, target 177)
    if 0 < #v4 then
      v2.baleAnimCurve = v3
      v2.baleAnimLength = v8
      local v9 = v9:getValue("vehicle.baler.baleAnimation#spacing", 0)
      v2.baleAnimSpacing = v9
    end
  end
  v2.hasUnloadingAnimation = true
  v2.baleTypes = {}
  v4:iterate("vehicle.baler.baleTypes.baleType", function(self, savegame)
    if BalerBaleTypeEvent.MAX_NUM_BALE_TYPES <= #u0.baleTypes then
      Logging.xmlError(u1.xmlFile, "Too many bale types defined. Max. amount is '%d'! '%s'", BalerBaleTypeEvent.MAX_NUM_BALE_TYPES, savegame)
      return false
    end
    local v3 = v3:getValue(savegame .. "#isRoundBale", false)
    local v4 = v4:getValue(savegame .. "#width", 1.2)
    v3 = MathUtil.round(v4, 2)
    v4 = v4:getValue(savegame .. "#height", 0.9)
    v3 = MathUtil.round(v4, 2)
    v4 = v4:getValue(savegame .. "#length", 2.4)
    v3 = MathUtil.round(v4, 2)
    v4 = v4:getValue(savegame .. "#diameter", 1.8)
    v3 = MathUtil.round(v4, 2)
    v3 = v3:getValue(savegame .. "#isDefault", false)
    if {index = self, isRoundBale = v3, width = v3, height = v3, length = v3, diameter = v3, isDefault = v3}.isDefault then
      u2 = self
    end
    v3 = v3:getValue(savegame .. ".nodes#baleNode", nil, u1.components, u1.i3dMappings)
    v2.baleNode = v3
    v3, v4 = v3:getValue(savegame .. ".nodes#baleRootNode", v2.baleNode, u1.components, u1.i3dMappings)
    v2.baleRootNode = v3
    v2.baleNodeComponent = v4
    if v2.baleRootNode ~= nil and v2.baleNodeComponent == nil then
      v3 = v3:getParentComponent(v2.baleRootNode)
      v2.baleNodeComponent = v3
    end
    if v2.baleNode ~= nil then
      v3 = v3:getValue(savegame .. ".nodes#scaleNode", nil, u1.components, u1.i3dMappings)
      v2.scaleNode = v3
      v3 = v3:getValue(savegame .. ".nodes#scaleComponents", nil, true)
      v2.scaleComponents = v3
      v2.animations = {}
      v4 = v4:getValue(savegame .. ".animations#fillAnimation")
      v2.animations.fill = v4
      v4 = v4:getValue(savegame .. ".animations#unloadAnimation")
      v2.animations.unloading = v4
      v4 = v4:getValue(savegame .. ".animations#unloadAnimationSpeed", 1)
      v2.animations.unloadingSpeed = v4
      local v8 = v8:getAnimationDuration(v2.animations.unloading)
      v4 = v4:getValue(savegame .. ".animations#dropAnimationTime", v8 / 1000)
      v2.animations.dropAnimationTime = v4
      v2.detailVisibilityCutNodes = {}
      v3:iterate(savegame .. ".detailVisibilityCutNode", function(self, savegame)
        local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
        if {node = v3}.node ~= nil then
          v3 = v3:getValue(savegame .. "#axis", 3)
          v3 = v3:getValue(savegame .. "#direction", 1)
          table.insert(u1.detailVisibilityCutNodes, {node = v3, axis = v3, direction = v3})
        end
      end)
      v2.changeObjects = {}
      ObjectChangeUtil.loadObjectChangeFromXML(u1.xmlFile, savegame, v2.changeObjects, u1.components, u1)
      table.insert(u0.baleTypes, v2)
      if u0.hasUnloadingAnimation and v2.animations.unloading == nil then
      end
      v3.hasUnloadingAnimation = v4
      return
    end
    Logging.xmlError(u1.xmlFile, "Missing baleNode for bale type. '%s'", savegame)
  end)
  if v2.baleTypes[1] ~= nil then
    ObjectChangeUtil.setObjectChanges(v2.baleTypes[1].changeObjects, true, self, self.setMovingToolDirty)
  end
  local v5 = v5:getValue("vehicle.baler.baleTypes#changeText", "action_changeBaleSize", self.customEnvironment)
  v2.changeBaleTypeText = v5
  v2.preSelectedBaleTypeIndex = v3
  v2.currentBaleTypeIndex = v3
  v2.currentBaleXMLFilename = nil
  v2.currentBaleTypeDefinition = nil
  if #v2.baleTypes == 0 then
    Logging.xmlError(self.xmlFile, "No baleTypes definded for baler.")
  end
  if v2.hasUnloadingAnimation then
    v5 = v5:getValue("vehicle.baler.automaticDrop#enabled", Platform.gameplay.automaticBaleDrop)
    v2.automaticDrop = v5
    v5 = v5:getValue("vehicle.baler.automaticDrop#toggleable", not Platform.gameplay.automaticBaleDrop)
    v2.toggleableAutomaticDrop = v5
    v5 = v5:getValue("vehicle.baler.automaticDrop#textPos", "action_toggleAutomaticBaleDropPos", self.customEnvironment)
    v2.toggleAutomaticDropTextPos = v5
    v5 = v5:getValue("vehicle.baler.automaticDrop#textNeg", "action_toggleAutomaticBaleDropNeg", self.customEnvironment)
    v2.toggleAutomaticDropTextNeg = v5
    v5 = v5:getValue("vehicle.baler.baleAnimation#closeAnimationName")
    v2.baleCloseAnimationName = v5
    v5 = v5:getValue("vehicle.baler.baleAnimation#closeAnimationSpeed", 1)
    v2.baleCloseAnimationSpeed = v5
    v5 = self:getAnimationByName(v2.baleCloseAnimationName)
    if v2.baleCloseAnimationName ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L372
    end
    Logging.xmlError(self.xmlFile, "Failed to find baler close animation. (%s)", "vehicle.baler.baleAnimation#closeAnimationName")
    -- goto L375  (LOP_JUMP +3)
    v5.resetOnStart = false
  end
  v5 = v5:getValue("vehicle.baler#unfinishedBaleThreshold", 2000)
  v2.unfinishedBaleThreshold = v5
  v5 = v5:getValue("vehicle.baler#canUnloadUnfinishedBale", false)
  v2.canUnloadUnfinishedBale = v5
  v2.lastBaleFillLevel = nil
  if self.isClient then
    v2.samples = {}
    local v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.baler.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.baler.sounds", "eject", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.eject = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.baler.sounds", "unload", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.unload = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.baler.sounds", "door", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.door = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.baler.sounds", "knotCleaning", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.knotCleaning = v6
    v2.knotCleaningTimer = 10000
    v2.knotCleaningTime = 120000
    v5 = v5:loadAnimations(self.xmlFile, "vehicle.baler.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v5
    v5 = v5:loadAnimations(self.xmlFile, "vehicle.baler.unloadAnimationNodes", self.components, self, self.i3dMappings)
    v2.unloadAnimationNodes = v5
    v5 = v5:loadEffect(self.xmlFile, "vehicle.baler.fillEffect", self.components, self, self.i3dMappings)
    v2.fillEffects = v5
    v2.fillEffectType = FillType.UNKNOWN
    v5 = v5:loadEffect(self.xmlFile, "vehicle.baler.additiveEffects", self.components, self, self.i3dMappings)
    v2.additiveEffects = v5
    v5 = v5:getValue("vehicle.baler.knotingAnimation#name")
    v2.knotingAnimation = v5
    v5 = v5:getValue("vehicle.baler.knotingAnimation#speed", 1)
    v2.knotingAnimationSpeed = v5
    v5 = v5:getValue("vehicle.baler.compactingAnimation#name")
    v2.compactingAnimation = v5
    v6 = v6:getValue("vehicle.baler.compactingAnimation#interval", 60)
    v2.compactingAnimationInterval = v6 * 1000
    v6 = v6:getValue("vehicle.baler.compactingAnimation#compactTime", 5)
    v2.compactingAnimationCompactTime = v6 * 1000
    v2.compactingAnimationCompactTimer = v2.compactingAnimationCompactTime
    v2.compactingAnimationTime = v2.compactingAnimationInterval
    v5 = v5:getValue("vehicle.baler.compactingAnimation#speed", 1)
    v2.compactingAnimationSpeed = v5
    v5 = v5:getValue("vehicle.baler.compactingAnimation#minFillLevelTime", 1)
    v2.compactingAnimationMinTime = v5
    v5 = v5:getValue("vehicle.baler.compactingAnimation#maxFillLevelTime", 0.1)
    v2.compactingAnimationMaxTime = v5
  end
  v2.lastAreaBiggerZero = false
  v2.lastAreaBiggerZeroSent = false
  v2.lastAreaBiggerZeroTime = 0
  v2.workAreaParameters = {lastPickedUpLiters = 0}
  v2.fillUnitOverflowFillLevel = 0
  v5 = v5:getValue("vehicle.baler#maxPickupLitersPerSecond", 500)
  v2.maxPickupLitersPerSecond = v5
  v5 = ValueBuffer.new(750)
  v2.pickUpLitersBuffer = v5
  v2.unloadingState = Baler.UNLOADING_CLOSED
  v2.pickupFillTypes = {}
  v2.bales = {}
  v2.dummyBale = {currentBaleFillType = FillType.UNKNOWN, currentBale = nil, currentBaleLength = 0}
  v5 = v5:getValue("vehicle.baler.baleUnloading#allowed", false)
  v2.allowsBaleUnloading = v5
  v6 = v6:getValue("vehicle.baler.baleUnloading#time", 4)
  v2.baleUnloadingTime = v6 * 1000
  v6 = v6:getValue("vehicle.baler.baleUnloading#foldThreshold", 0.25)
  local v7 = self:getFillUnitCapacity(v2.fillUnitIndex)
  v2.baleFoldThreshold = v6 * v7
  v5 = v5:getValue("vehicle.baler.platform#animationName")
  v2.platformAnimation = v5
  v5 = v5:getValue("vehicle.baler.platform#nextBaleTime", 0)
  v2.platformAnimationNextBaleTime = v5
  v5 = v5:getValue("vehicle.baler.platform#automaticDrop", Platform.gameplay.automaticBaleDrop)
  v2.platformAutomaticDrop = v5
  v5 = v5:getValue("vehicle.baler.platform#aiSpeed", 3)
  v2.platformAIDropSpeed = v5
  if v2.platformAnimation == nil then
  end
  v2.hasPlatform = true
  v5 = SpecializationUtil.hasSpecialization(DynamicMountAttacher, self.specializations)
  v2.hasDynamicMountPlatform = v5
  if v2.hasPlatform then
    v2.automaticDrop = true
  end
  v2.platformReadyToDrop = false
  v2.platformDropInProgress = false
  v2.platformDelayedDropping = false
  v2.platformMountDelay = -1
  v2.buffer = {}
  v6 = v6:getValue("vehicle.baler.buffer#fillUnitIndex")
  v2.buffer.fillUnitIndex = v6
  v6 = v6:getValue("vehicle.baler.buffer#unloadInfoIndex", 1)
  v2.buffer.unloadInfoIndex = v6
  v6 = v6:getValue("vehicle.baler.buffer#capacityPercentage")
  v2.buffer.capacityPercentage = v6
  v6 = v6:getValue("vehicle.baler.buffer#overloadingDuration", 1)
  v2.buffer.overloadingDuration = v6
  v6 = v6:getValue("vehicle.baler.buffer#overloadingDelay", 0)
  v2.buffer.overloadingDelay = v6
  v2.buffer.overloadingTimer = 0
  v7 = v7:getValue("vehicle.baler.buffer#overloadingStartFillLevelPct", 1)
  v6 = MathUtil.round(v7, 2)
  v2.buffer.overloadingStartFillLevelPct = v6
  v6 = v6:getValue("vehicle.baler.buffer#fillMainUnitAfterOverload", false)
  v2.buffer.fillMainUnitAfterOverload = v6
  v2.buffer.unloadingStarted = false
  v2.buffer.fillLevelToEmpty = 0
  v2.buffer.dummyBale = {}
  v6 = v6:hasProperty("vehicle.baler.buffer.dummyBale")
  v2.buffer.dummyBale.available = v6
  v6 = v6:getValue("vehicle.baler.buffer.dummyBale#node", nil, self.components, self.i3dMappings)
  v2.buffer.dummyBale.linkNode = v6
  v6 = v6:getValue("vehicle.baler.buffer.dummyBale#scaleComponents", "1 1 0", true)
  v2.buffer.dummyBale.scaleComponents = v6
  v6 = v6:getValue("vehicle.baler.buffer.overloadAnimation#name")
  v2.buffer.overloadAnimation = v6
  v6 = v6:getValue("vehicle.baler.buffer.overloadAnimation#speedScale", 1)
  v2.buffer.overloadAnimationSpeed = v6
  v6 = v6:getValue("vehicle.baler.buffer.loadingStateAnimation#name")
  v2.buffer.loadingStateAnimation = v6
  v6 = v6:getValue("vehicle.baler.buffer.loadingStateAnimation#speedScale", 1)
  v2.buffer.loadingStateAnimationSpeed = v6
  if self.isClient then
    v6 = v6:loadEffect(self.xmlFile, "vehicle.baler.buffer.overloadingEffect", self.components, self, self.i3dMappings)
    v2.buffer.overloadingEffects = v6
    v6 = v6:loadAnimations(self.xmlFile, "vehicle.baler.buffer.overloadingAnimationNodes", self.components, self, self.i3dMappings)
    v2.buffer.overloadingAnimationNodes = v6
    v6 = v6:loadSamplesFromXML(self.xmlFile, "vehicle.baler.sounds", "bufferOverloadingStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.buffer.samplesOverloadingStart = v6
    v6 = v6:loadSamplesFromXML(self.xmlFile, "vehicle.baler.sounds", "bufferOverloadingStop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.buffer.samplesOverloadingStop = v6
    v6 = v6:loadSamplesFromXML(self.xmlFile, "vehicle.baler.sounds", "bufferOverloadingWork", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.buffer.samplesOverloadingWork = v6
  end
  if v2.buffer.fillUnitIndex == nil then
  end
  v2.nonStopBaling = true
  if v2.nonStopBaling ~= nil then
    v5 = v5:getValue("vehicle.baler.buffer#balerDisplayType")
    v6 = v6:getFillTypeIndexByName(v5)
    if v6 ~= nil then
      self:setFillUnitFillTypeToDisplay(v2.fillUnitIndex, v6, true)
    end
  end
  v2.variableSpeedLimit = {}
  v6 = v6:hasProperty("vehicle.baler.variableSpeedLimit")
  v2.variableSpeedLimit.enabled = v6
  v2.variableSpeedLimit.pickupPerSecond = 0
  v2.variableSpeedLimit.pickupPerSecondTimer = 0
  v6 = v6:getValue("vehicle.baler.variableSpeedLimit#targetLiterPerSecond", 200)
  v2.variableSpeedLimit.targetLiterPerSecond = v6
  v6 = v6:getValue("vehicle.baler.variableSpeedLimit#changeInterval", 1)
  v2.variableSpeedLimit.changeInterval = v6
  v6 = v6:getValue("vehicle.baler.variableSpeedLimit#minSpeedLimit", 5)
  v2.variableSpeedLimit.minSpeedLimit = v6
  v6 = v6:getValue("vehicle.baler.variableSpeedLimit#maxSpeedLimit", 15)
  v2.variableSpeedLimit.maxSpeedLimit = v6
  v6 = v6:getValue("vehicle.baler.variableSpeedLimit#defaultSpeedLimit", 10)
  v2.variableSpeedLimit.defaultSpeedLimit = v6
  v2.variableSpeedLimit.backupSpeedLimit = self.speedLimit
  v2.variableSpeedLimit.usedBackupSpeedLimit = false
  v2.variableSpeedLimit.lastAdjustedSpeedLimit = nil
  v2.variableSpeedLimit.lastAdjustedSpeedLimitType = nil
  v2.variableSpeedLimit.fillTypeToTargetLiterPerSecond = {}
  v5:iterate("vehicle.baler.variableSpeedLimit.target", function(self, savegame)
    local v4 = v4:getValue(savegame .. "#fillType")
    local v2 = v2:getFillTypeIndexByName(...)
    if v2 ~= nil then
      local v3 = v3:getValue(savegame .. "#targetLiterPerSecond", 200)
      v4 = v4:getValue(savegame .. "#defaultSpeedLimit", 10)
      u1.variableSpeedLimit.fillTypeToTargetLiterPerSecond[v2] = {targetLiterPerSecond = v3, defaultSpeedLimit = v4}
    end
  end)
  v2.additives = {}
  v6 = v6:getValue("vehicle.baler.additives#fillUnitIndex")
  v2.additives.fillUnitIndex = v6
  v7 = self:getFillUnitByIndex(v2.additives.fillUnitIndex)
  if v7 == nil then
  end
  v5.available = true
  v6 = v6:getValue("vehicle.baler.additives#usage", 0.0000275)
  v2.additives.usage = v6
  v5 = v5:getValue("vehicle.baler.additives#fillTypes", "GRASS_WINDROW")
  local v14 = v14:getFilename()
  v7 = v7:getFillTypesByNames(v5, "Warning: '" .. v14 .. "' has invalid fillType '%s'.")
  v2.additives.fillTypes = v7
  v7 = v7:getValue("vehicle.baler.additives#appliedByBufferOverloading", false)
  v2.additives.appliedByBufferOverloading = v7
  v2.additives.isActiveTimer = 0
  v2.additives.isActive = false
  v2.isBaleUnloading = false
  v2.texts = {}
  v7 = v7:getText("warning_foldingNotWhileBaleLoaded")
  v2.texts.warningFoldingBaleLoaded = v7
  v7 = v7:getText("warning_foldingNotWhileTurnedOn")
  v2.texts.warningFoldingTurnedOn = v7
  v7 = v7:getText("warning_tooManyBales")
  v2.texts.warningTooManyBales = v7
  v7 = v7:getText("action_unloadUnfinishedBale")
  v2.texts.unloadUnfinishedBale = v7
  v7 = v7:getText("action_unloadBaler")
  v2.texts.unloadBaler = v7
  v7 = v7:getText("action_closeBack")
  v2.texts.closeBack = v7
  v2.showBaleLimitWarning = false
  v6 = self:getNextDirtyFlag()
  v2.dirtyFlag = v6
  if savegame ~= nil and not savegame.resetVehicles then
    v6 = v6:getValue(savegame.key .. ".baler#baleTypeIndex", v2.currentBaleTypeIndex)
    self:setBaleTypeIndex(v6, true, true)
    v7 = v7:getValue(savegame.key .. ".baler#preSelectedBaleTypeIndex", v2.preSelectedBaleTypeIndex)
    self:setBaleTypeIndex(v7, nil, true)
    local v8 = v8:getValue(savegame.key .. ".baler#fillUnitCapacity")
    if v8 ~= nil then
      if v8 == 0 then
      end
      self:setFillUnitCapacity(v2.fillUnitIndex, v8)
      if v2.buffer.capacityPercentage ~= nil then
        self:setFillUnitCapacity(v2.fillUnitIndex, v8 * v2.buffer.capacityPercentage, false)
      end
    end
    if v2.nonStopBaling then
      local v10 = v10:getValue(savegame.key .. ".baler#bufferUnloadingStarted", v2.buffer.unloadingStarted)
      v2.buffer.unloadingStarted = v10
    end
  end
end
function Baler:onPostLoad(savegame)
  local v4 = self:getFillUnitSupportedFillTypes(self.spec_baler.fillUnitIndex)
  for v6, v7 in pairs(...) do
    if not v7 then
      continue
    end
    if not (v6 ~= FillType.UNKNOWN) then
      continue
    end
    v2.pickupFillTypes[v6] = 0
  end
  if savegame ~= nil and not savegame.resetVehicles then
    v3 = v3:getValue(savegame.key .. ".baler#numBales")
    if v3 ~= nil then
      v2.balesToLoad = {}
      -- TODO: structure LOP_FORNPREP (pc 45, target 116)
      v7 = string.format("%s.baler.bale(%d)", savegame.key, 1 - 1)
      local v9 = v9:getValue(v7 .. "#filename")
      local v10 = v10:getValue(v7 .. "#fillType")
      local v11 = v11:getFillTypeByName(v10)
      if v9 ~= nil and v11 ~= nil then
        local v12 = v12:getValue(v7 .. "#fillLevel")
        v12 = v12:getValue(v7 .. "#baleTime")
        table.insert(v2.balesToLoad, {filename = v9, fillType = v11.index, fillLevel = v12, baleTime = v12})
      end
      -- TODO: structure LOP_FORNLOOP (pc 115, target 46)
    end
    if v2.hasPlatform then
      v4 = v4:getValue(savegame.key .. ".baler#platformReadyToDrop", v2.platformReadyToDrop)
      v2.platformReadyToDrop = v4
      if v2.platformReadyToDrop then
        self:setAnimationTime(v2.platformAnimation, 1, true)
        self:setAnimationTime(v2.platformAnimation, 0, true)
        v2.platformMountDelay = 1
      end
    end
  end
end
function Baler:onLoadFinished(savegame)
  if self.isServer and self.spec_baler.createBaleNextFrame ~= nil and self.spec_baler.createBaleNextFrame then
    self:finishBale()
    self.spec_baler.createBaleNextFrame = nil
  end
  if v2.balesToLoad ~= nil then
    for v6, v7 in ipairs(v2.balesToLoad) do
      local v8 = self:createBale(v7.fillType, v7.fillLevel, nil, v7.baleTime, v7.filename)
      if not v8 then
        continue
      end
      self:setBaleTime(#v2.bales, v7.baleTime, true)
    end
    v2.balesToLoad = nil
  end
end
function Baler:onDelete()
  if self.spec_baler.bales ~= nil then
    if self.isReconfigurating ~= nil then
      -- if v0.isReconfigurating then goto L26 end
    end
    for v5, v6 in pairs(v1.bales) do
      self:dropBale(v5)
    end
    -- goto L43  (LOP_JUMP +17)
    for v5, v6 in pairs(v1.bales) do
      if not (v6.baleObject ~= nil) then
        continue
      end
      v7:delete()
    end
  end
  self:deleteDummyBale(v1.dummyBale)
  if v1.buffer.dummyBale.available then
    self:deleteDummyBale(v1.buffer.dummyBale)
  end
  v2:deleteSamples(v1.samples)
  v2:deleteSamples(v1.buffer.samplesOverloadingStart)
  v2:deleteSamples(v1.buffer.samplesOverloadingWork)
  v2:deleteSamples(v1.buffer.samplesOverloadingStop)
  v2:deleteEffects(v1.fillEffects)
  v2:deleteEffects(v1.additiveEffects)
  v2:deleteEffects(v1.buffer.overloadingEffects)
  v2:deleteAnimations(v1.animationNodes)
  v2:deleteAnimations(v1.unloadAnimationNodes)
  v2:deleteAnimations(v1.buffer.overloadingAnimationNodes)
end
function Baler:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_baler.hasUnloadingAnimation then
    local v5 = self:getFillUnitFreeCapacity(self.spec_baler.fillUnitIndex)
    -- if 0 >= v5 then goto L86 end
  end
  xmlFile:setValue(key .. "#numBales", #v4.bales)
  for v8, v9 in ipairs(v4.bales) do
    local v10 = string.format("%s.bale(%d)", key, v8 - 1)
    xmlFile:setValue(v10 .. "#filename", v9.filename)
    if v9.fillType ~= FillType.UNKNOWN then
      local v12 = v12:getFillTypeNameByIndex(v9.fillType)
    end
    xmlFile:setValue(v10 .. "#fillType", v11)
    xmlFile:setValue(v10 .. "#fillLevel", v9.fillLevel)
    if not (v4.baleAnimCurve ~= nil) then
      continue
    end
    xmlFile:setValue(v10 .. "#baleTime", v9.time)
  end
  if v4.hasPlatform then
    xmlFile:setValue(key .. "#platformReadyToDrop", v4.platformReadyToDrop)
  end
  xmlFile:setValue(key .. "#baleTypeIndex", v4.currentBaleTypeIndex)
  xmlFile:setValue(key .. "#preSelectedBaleTypeIndex", v4.preSelectedBaleTypeIndex)
  v8 = self:getFillUnitCapacity(v4.fillUnitIndex)
  xmlFile:setValue(...)
  if v4.nonStopBaling then
    xmlFile:setValue(key .. "#bufferUnloadingStarted", v4.buffer.unloadingStarted)
  end
end
function Baler:onReadStream(streamId, connection)
  if self.spec_baler.hasUnloadingAnimation then
    local state = streamReadUIntN(streamId, 7)
    local v5 = streamReadFloat32(streamId)
    if state ~= Baler.UNLOADING_CLOSED then
      -- if v4 ~= Baler.UNLOADING_CLOSING then goto L38 end
    end
    self:setIsUnloadingBale(false, true)
    self:setRealAnimationTime(v3.baleCloseAnimationName, v5)
    -- goto L61  (LOP_JUMP +23)
    if state ~= Baler.UNLOADING_OPEN then
      -- if v4 ~= Baler.UNLOADING_OPENING then goto L61 end
    end
    self:setIsUnloadingBale(true, true)
    self:setRealAnimationTime(v3.baleUnloadAnimationName, v5)
  end
  state = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 68, target 98)
  local fillType = streamReadIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  local v9 = streamReadFloat32(streamId)
  self:createBale(fillType, v9)
  if v3.baleAnimCurve ~= nil then
    local v10 = streamReadFloat32(streamId)
    self:setBaleTime(1, v10)
  end
  -- TODO: structure LOP_FORNLOOP (pc 97, target 69)
  v5 = streamReadBool(streamId)
  v3.lastAreaBiggerZero = v5
  if v3.hasPlatform then
    v5 = streamReadBool(streamId)
    v3.platformReadyToDrop = v5
    if v3.platformReadyToDrop then
      self:setAnimationTime(v3.platformAnimation, 1, true)
      self:setAnimationTime(v3.platformAnimation, 0, true)
    end
  end
  v5 = streamReadUIntN(streamId, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  v3.currentBaleTypeIndex = v5
  v5 = streamReadUIntN(streamId, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  v3.preSelectedBaleTypeIndex = v5
  v5 = streamReadFloat32(streamId)
  self:setFillUnitCapacity(v3.fillUnitIndex, v5)
  local v6 = streamReadFloat32(streamId)
  local v7 = self:getFillUnitByIndex(v3.fillUnitIndex)
  if v7 ~= nil then
    v7.fillLevel = v6
  end
end
function Baler:onWriteStream(streamId, connection)
  if self.spec_baler.hasUnloadingAnimation then
    streamWriteUIntN(streamId, self.spec_baler.unloadingState, 7)
    if self.spec_baler.unloadingState ~= Baler.UNLOADING_CLOSED then
      -- if v0.spec_baler.unloadingState ~= Baler.UNLOADING_CLOSING then goto L36 end
    end
    local v5 = self:getRealAnimationTime(v3.baleCloseAnimationName)
    -- goto L58  (LOP_JUMP +22)
    if v3.unloadingState ~= Baler.UNLOADING_OPEN then
      -- if v3.unloadingState ~= Baler.UNLOADING_OPENING then goto L58 end
    end
    v5 = self:getRealAnimationTime(v3.baleUnloadAnimationName)
    streamWriteFloat32(streamId, v5)
  end
  streamWriteUInt8(streamId, #v3.bales)
  -- TODO: structure LOP_FORNPREP (pc 75, target 104)
  streamWriteIntN(streamId, v3.bales[1].fillType, FillTypeManager.SEND_NUM_BITS)
  streamWriteFloat32(streamId, v3.bales[1].fillLevel)
  if v3.baleAnimCurve ~= nil then
    streamWriteFloat32(streamId, v3.bales[1].time)
  end
  -- TODO: structure LOP_FORNLOOP (pc 103, target 76)
  streamWriteBool(streamId, v3.lastAreaBiggerZero)
  if v3.hasPlatform then
    streamWriteBool(streamId, v3.platformReadyToDrop)
  end
  streamWriteUIntN(streamId, v3.currentBaleTypeIndex, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  streamWriteUIntN(streamId, v3.preSelectedBaleTypeIndex, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  local v6 = self:getFillUnitCapacity(v3.fillUnitIndex)
  streamWriteFloat32(...)
  v6 = self:getFillUnitFillLevel(v3.fillUnitIndex)
  streamWriteFloat32(...)
end
function Baler:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 then
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadBool(streamId)
      self.spec_baler.lastAreaBiggerZero = v5
      v5 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      self.spec_baler.fillEffectType = v5
      v5 = streamReadBool(streamId)
      self.spec_baler.showBaleLimitWarning = v5
      if self.spec_baler.nonStopBaling then
        local v6 = streamReadBool(streamId)
        self.spec_baler.buffer.unloadingStarted = v6
        if self.spec_baler.buffer.unloadingStarted then
          v5 = self:getFillUnitFillType(self.spec_baler.buffer.fillUnitIndex)
          if v5 == FillType.UNKNOWN then
            v6 = self:getFillUnitFillType(self.spec_baler.fillUnitIndex)
          end
          v6:setFillType(v4.buffer.overloadingEffects, v5)
          v6:startEffects(v4.buffer.overloadingEffects)
          v6:playSamples(v4.buffer.samplesOverloadingStart)
          v6:playSamples(v4.buffer.samplesOverloadingWork, 0, v4.buffer.samplesOverloadingStart[0])
          v6:startAnimations(v4.buffer.overloadingAnimationNodes)
        else
          v5:stopEffects(self.spec_baler.buffer.overloadingEffects)
          v5:stopSamples(self.spec_baler.buffer.samplesOverloadingStart)
          v5 = v5:getIsSamplePlaying(self.spec_baler.buffer.samplesOverloadingWork[0])
          if v5 then
            v5:stopSamples(self.spec_baler.buffer.samplesOverloadingWork)
            v5:playSamples(self.spec_baler.buffer.samplesOverloadingStop)
          end
          v5:stopAnimations(v4.buffer.overloadingAnimationNodes)
        end
      end
      v6 = streamReadBool(streamId)
      v4.additives.isActive = v6
      if v4.additives.isActive then
        v5:setFillType(v4.additiveEffects, FillType.LIQUIDFERTILIZER)
        v5:startEffects(v4.additiveEffects)
        return
      end
      v5:stopEffects(v4.additiveEffects)
    end
  end
end
function Baler:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 then
    local v8 = bitAND(dirtyMask, self.spec_baler.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.lastAreaBiggerZero)
      streamWriteUIntN(streamId, v4.fillEffectTypeSent, FillTypeManager.SEND_NUM_BITS)
      streamWriteBool(streamId, v4.showBaleLimitWarning)
      if v4.nonStopBaling then
        streamWriteBool(streamId, v4.buffer.unloadingStarted)
      end
      streamWriteBool(streamId, v4.additives.isActive)
    end
  end
end
function Baler:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_baler.baleToMount ~= nil then
      local v6 = NetworkUtil.getObject(self.spec_baler.baleToMount.baleServerId)
      if v6 ~= nil then
        v6:mountKinematic(self, self.spec_baler.baleToMount.jointNode, 0, 0, 0, 0, 0, 0)
        self.spec_baler.baleToMount.baleInfo.baleObject = v6
        self.spec_baler.baleToMount.baleInfo.baleServerId = self.spec_baler.baleToMount.baleServerId
        self.spec_baler.baleToMount = nil
      end
    end
    if v5.baleTypes[v5.currentBaleTypeIndex] ~= nil and 0 < #v5.baleTypes[v5.currentBaleTypeIndex].detailVisibilityCutNodes then
      -- TODO: structure LOP_FORNPREP (pc 69, target 109)
      if v5.bales[1].baleObject ~= nil then
        v11:resetDetailVisibilityCut()
        if v5.bales[1].time < 1 then
          -- TODO: structure LOP_FORNPREP (pc 92, target 108)
          v15:setDetailVisibilityCutNode(v5.baleTypes[v5.currentBaleTypeIndex].detailVisibilityCutNodes[1].node, v5.baleTypes[v5.currentBaleTypeIndex].detailVisibilityCutNodes[1].axis, v5.baleTypes[v5.currentBaleTypeIndex].detailVisibilityCutNodes[1].direction)
          -- TODO: structure LOP_FORNLOOP (pc 107, target 93)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 108, target 70)
      if v5.dummyBale.currentBale ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 120, target 139)
        Bale.setBaleMeshVisibilityCut(v5.dummyBale.currentBale, v6.detailVisibilityCutNodes[1].node, v6.detailVisibilityCutNodes[1].axis, v6.detailVisibilityCutNodes[1].direction, true)
        -- TODO: structure LOP_FORNLOOP (pc 138, target 121)
      end
    end
  end
  if self.isServer then
    if self.isAddedToPhysics and v5.createBaleNextFrame ~= nil and v5.createBaleNextFrame then
      self:finishBale()
      v5.createBaleNextFrame = nil
    end
    if v5.variableSpeedLimit.enabled then
      v5.variableSpeedLimit.pickupPerSecondTimer = v5.variableSpeedLimit.pickupPerSecondTimer + dt
      if v5.variableSpeedLimit.changeInterval < v5.variableSpeedLimit.pickupPerSecondTimer then
        local v8 = self:getFillUnitFillType(v5.fillUnitIndex)
        if v8 == FillType.UNKNOWN and v5.nonStopBaling then
          local v9 = self:getFillUnitFillType(v5.buffer.fillUnitIndex)
        end
        if v8 ~= nil and v5.variableSpeedLimit.fillTypeToTargetLiterPerSecond[v8] ~= nil then
        end
        if 0 < v5.variableSpeedLimit.pickupPerSecond / v5.variableSpeedLimit.changeInterval / 1000 then
          if v5.variableSpeedLimit.usedBackupSpeedLimit then
            v5.variableSpeedLimit.usedBackupSpeedLimit = false
            self.speedLimit = v5.variableSpeedLimit.lastAdjustedSpeedLimit or v6
            if (v5.variableSpeedLimit.lastAdjustedSpeedLimitType or v8) ~= v8 then
              self.speedLimit = v6
            end
          end
          local v12 = math.floor(v9 * 2 / v7)
          local v11 = math.max(v12, 1)
          if v7 + v7 * 0.15 < v9 then
            v12 = math.max(self.speedLimit - v11, v5.variableSpeedLimit.minSpeedLimit)
            self.speedLimit = v12
          elseif v9 < v7 - v7 * 0.15 then
            v12 = math.min(self.speedLimit + v11, v5.variableSpeedLimit.maxSpeedLimit)
            self.speedLimit = v12
          end
          v5.variableSpeedLimit.lastAdjustedSpeedLimit = self.speedLimit
          v5.variableSpeedLimit.lastAdjustedSpeedLimitType = v8
        else
          v5.variableSpeedLimit.usedBackupSpeedLimit = true
          self.speedLimit = v5.variableSpeedLimit.backupSpeedLimit
        end
        v5.variableSpeedLimit.pickupPerSecondTimer = 0
        v5.variableSpeedLimit.pickupPerSecond = 0
      end
    end
  end
end
function Baler:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v7 = self:getIsTurnedOn()
  if v7 then
    local v8 = v8:getCanAddLimitedObjects(SlotSystem.LIMITED_OBJECT_BALE, 1)
    if not v8 then
    end
    -- if not v0.isClient then goto L259 end
    if v5.lastAreaBiggerZero then
      -- if v5.fillEffectType == FillType.UNKNOWN then goto L33 end
      v5.lastAreaBiggerZeroTime = 500
    elseif 0 < v5.lastAreaBiggerZeroTime then
      v8 = math.max(v5.lastAreaBiggerZeroTime - dt, 0)
      v5.lastAreaBiggerZeroTime = v8
    end
    if 0 < v5.lastAreaBiggerZeroTime then
      if v5.fillEffectType ~= FillType.UNKNOWN then
        v8:setFillType(v5.fillEffects, v5.fillEffectType)
      end
      v8:startEffects(v5.fillEffects)
      local v9 = v9:get(1000)
      local v12 = math.max(v9 / v5.maxPickupLitersPerSecond, 0.4)
      v9:setDensity(...)
    else
      v8:stopEffects(v5.fillEffects)
    end
    if v5.knotCleaningTimer <= g_currentMission.time then
      v8:playSample(v5.samples.knotCleaning)
      v5.knotCleaningTimer = g_currentMission.time + v5.knotCleaningTime
    end
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L259
    -- if v5.unloadingState ~= Baler.UNLOADING_CLOSED then goto L259 end
    if v5.compactingAnimationTime <= g_currentMission.time then
      v8 = self:getFillUnitFillLevelPercentage(v5.fillUnitIndex)
      v9 = MathUtil.lerp(v5.compactingAnimationMinTime, v5.compactingAnimationMaxTime, v8)
      if 0 < v9 then
        local v13 = MathUtil.clamp(v9, 0, 1)
        self:setAnimationStopTime(...)
        local v14 = self:getAnimationTime(v5.compactingAnimation)
        self:playAnimation(v5.compactingAnimation, v5.compactingAnimationSpeed, v14, false)
        v5.compactingAnimationTime = math.huge
      end
    end
    -- if v5.compactingAnimationTime ~= math.huge then goto L259 end
    v8 = self:getIsAnimationPlaying(v5.compactingAnimation)
    -- if v8 then goto L259 end
    v5.compactingAnimationCompactTimer = v5.compactingAnimationCompactTimer - dt
    if v5.compactingAnimationCompactTimer < 0 then
      v12 = self:getAnimationTime(v5.compactingAnimation)
      self:playAnimation(v5.compactingAnimation, -v5.compactingAnimationSpeed, v12, false)
      v5.compactingAnimationCompactTimer = v5.compactingAnimationCompactTime
    end
    v8 = self:getAnimationTime(v5.compactingAnimation)
    -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000010 -> L259
    v5.compactingAnimationTime = g_currentMission.time + v5.compactingAnimationInterval
  elseif self.spec_baler.isBaleUnloading and self.isServer then
    self:moveBales(dt / self.spec_baler.baleUnloadingTime)
  end
  if self.isClient and v5.unloadingState == Baler.UNLOADING_OPEN then
    v9 = getNumOfChildren(v5.baleTypes[v5.currentBaleTypeIndex].baleNode)
    if 0 < v9 then
      local v10 = getChildAt(v5.baleTypes[v5.currentBaleTypeIndex].baleNode, 0)
      delete(...)
    end
  end
  if v5.unloadingState == Baler.UNLOADING_OPENING then
    v9 = self:getIsAnimationPlaying(v5.baleTypes[v5.currentBaleTypeIndex].animations.unloading)
    v10 = self:getRealAnimationTime(v5.baleTypes[v5.currentBaleTypeIndex].animations.unloading)
    if v9 then
      -- if v5.baleTypes[v5.currentBaleTypeIndex].animations.dropAnimationTime > v10 then goto L429 end
    end
    if 0 < #v5.bales then
      self:dropBale(1)
      if self.isServer then
        v13 = self:getOwnerFarmId()
        local v16 = self:getFillUnitFillType(v5.fillUnitIndex)
        self:addFillUnitFillLevel(v13, v5.fillUnitIndex, -math.huge, v16, ToolType.UNDEFINED)
        v5.buffer.unloadingStarted = false
        for v14, v15 in pairs(v5.pickupFillTypes) do
          v5.pickupFillTypes[v14] = 0
        end
        v11 = self:getFillUnitFillLevel(v5.fillUnitIndex)
        if v11 == 0 and v5.preSelectedBaleTypeIndex ~= v5.currentBaleTypeIndex then
          self:setBaleTypeIndex(v5.preSelectedBaleTypeIndex, true)
        end
      end
    end
    -- if v9 then goto L469 end
    v5.unloadingState = Baler.UNLOADING_OPEN
    -- if not v0.isClient then goto L469 end
    v11:stopSample(v5.samples.eject)
    v11:stopSample(v5.samples.door)
    v11:stopAnimations(v5.unloadAnimationNodes)
    -- goto L469  (LOP_JUMP +40)
    v11:startAnimations(v5.unloadAnimationNodes)
  elseif v5.unloadingState == Baler.UNLOADING_CLOSING then
    v8 = self:getIsAnimationPlaying(v5.baleCloseAnimationName)
    if not v8 then
      v5.unloadingState = Baler.UNLOADING_CLOSED
      if self.isClient then
        v8:stopSample(v5.samples.door)
      end
    end
  end
  if v5.unloadingState ~= Baler.UNLOADING_OPEN then
    -- if v5.unloadingState ~= Baler.UNLOADING_CLOSING then goto L498 end
  end
  if not self.isServer and 0 < #v5.bales then
    self:dropBale(1)
  end
  Baler.updateActionEvents(self)
  if self.isServer then
    if v5.automaticDrop ~= nil then
      -- if v5.automaticDrop then goto L518 end
    end
    v8 = self:getIsAIActive()
    if v8 then
      v8 = self:isUnloadingAllowed()
      if v8 then
        if not v5.hasUnloadingAnimation then
          -- if not v5.allowsBaleUnloading then goto L546 end
        end
        if v5.unloadingState == Baler.UNLOADING_CLOSED and 0 < #v5.bales then
          self:setIsUnloadingBale(true)
        end
      end
      if v5.hasUnloadingAnimation and v5.unloadingState == Baler.UNLOADING_OPEN then
        self:setIsUnloadingBale(false)
      end
    end
    v8:add(v5.workAreaParameters.lastPickedUpLiters)
    if 0 < v5.additives.isActiveTimer then
      v5.additives.isActiveTimer = v5.additives.isActiveTimer - dt
      if v5.additives.isActiveTimer < 0 then
        v5.additives.isActiveTimer = 0
        v5.additives.isActive = false
        if self.isClient then
          v8:stopEffects(v5.additiveEffects)
        end
        self:raiseDirtyFlags(v5.dirtyFlag)
      end
    end
    if v5.platformAutomaticDrop and v5.platformReadyToDrop then
      self:dropBaleFromPlatform(true)
    end
    if v5.hasPlatform then
      if 0 < #v5.bales and v5.platformReadyToDrop then
        self:dropBaleFromPlatform(true)
      end
      if v5.hasDynamicMountPlatform then
        if 0 < v5.platformMountDelay then
          v5.platformMountDelay = v5.platformMountDelay - 1
          -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000010 -> L677
          self:forceDynamicMountPendingObjects(true)
        elseif v5.platformReadyToDrop then
          v8 = self:getHasDynamicMountedObjects()
          if not v8 then
            self:dropBaleFromPlatform(false)
          end
        end
      end
    end
    if v5.nonStopBaling then
      v9 = self:getFillUnitFillLevel(v5.buffer.fillUnitIndex)
      if 0 < v9 then
        v10 = self:getFillUnitCapacity(v5.buffer.fillUnitIndex)
        if v7 then
          v11 = MathUtil.round(v9 / v10, 2)
          if v5.buffer.overloadingStartFillLevelPct <= v11 then
            v11 = self:getFillUnitCapacity(v5.fillUnitIndex)
            if v11 ~= 0 and v11 ~= math.huge then
              v12 = self:getFillUnitFreeCapacity(v5.fillUnitIndex)
              -- if 0 >= v12 then goto L772 end
            end
            if not v5.buffer.unloadingStarted and v5.unloadingState == Baler.UNLOADING_CLOSED then
              v5.buffer.unloadingStarted = true
              v5.buffer.overloadingTimer = 0
              if v5.buffer.overloadAnimation ~= nil then
                self:playAnimation(v5.buffer.overloadAnimation, v5.buffer.overloadAnimationSpeed)
              end
            end
          end
        end
        -- if not v5.buffer.unloadingStarted then goto L1050 end
        v5.buffer.overloadingTimer = v5.buffer.overloadingTimer + dt
        if v5.buffer.overloadingDelay <= v5.buffer.overloadingTimer then
          v11 = self:getFillUnitFreeCapacity(v5.fillUnitIndex)
          if 0 < v11 then
            v11 = self:getFillUnitCapacity(v5.buffer.fillUnitIndex)
            v12 = math.min(v11 / v5.buffer.overloadingDuration * dt, v9)
            v13 = self:getFillUnitFillType(v5.buffer.fillUnitIndex)
            v14 = self:getFillVolumeUnloadInfo(v5.buffer.unloadInfoIndex)
            local v17 = self:getOwnerFarmId()
            v15 = self:addFillUnitFillLevel(v17, v5.buffer.fillUnitIndex, -v12, v13, ToolType.UNDEFINED, v14)
            v16 = self:getFillUnitFillType(v5.fillUnitIndex)
            if v16 == FillType.UNKNOWN then
            end
            if v5.additives.available and v5.additives.appliedByBufferOverloading then
              -- TODO: structure LOP_FORNPREP (pc 881, target 892)
              if v16 == v5.additives.fillTypes[1] then
              else
                -- TODO: structure LOP_FORNLOOP (pc 891, target 882)
              end
              if v18 then
                local v19 = self:getFillUnitFillLevel(v5.additives.fillUnitIndex)
                if 0 < v19 and 0 < v5.additives.usage * v17 then
                  local v21 = math.min(v19 / v5.additives.usage * v17, 1)
                  local v24 = self:getOwnerFarmId()
                  local v27 = self:getFillUnitFillType(v5.additives.fillUnitIndex)
                  self:addFillUnitFillLevel(v24, v5.additives.fillUnitIndex, -(v5.additives.usage * v17), v27, ToolType.UNDEFINED)
                  v5.additives.isActiveTimer = 250
                  v5.additives.isActive = true
                  self:raiseDirtyFlags(v5.dirtyFlag)
                  if self.isClient then
                    v22:setFillType(v5.additiveEffects, FillType.LIQUIDFERTILIZER)
                    v22:startEffects(v5.additiveEffects)
                  end
                end
              end
            end
            local v20 = self:getOwnerFarmId()
            self:addFillUnitFillLevel(v20, v5.fillUnitIndex, v17, v16, ToolType.UNDEFINED, nil)
            if 0 < v5.buffer.fillLevelToEmpty then
              v19 = math.max(v5.buffer.fillLevelToEmpty - v12, 0)
              v5.buffer.fillLevelToEmpty = v19
              if v5.buffer.fillLevelToEmpty == 0 then
                v5.platformDelayedDropping = true
                v5.buffer.unloadingStarted = false
              end
            end
          end
        end
        v11 = self:getFillUnitFillLevelPercentage(v5.fillUnitIndex)
        if v11 ~= 1 then
          -- if v7 then goto L1050 end
        end
        v5.buffer.unloadingStarted = false
      elseif not v5.buffer.fillMainUnitAfterOverload then
        v5.buffer.unloadingStarted = false
      end
      if v8 ~= v5.buffer.unloadingStarted then
        if self.isClient then
          if v5.buffer.unloadingStarted then
            v10 = self:getFillUnitFillType(v5.buffer.fillUnitIndex)
            v11:setFillType(v5.buffer.overloadingEffects, v10)
            v11:startEffects(v5.buffer.overloadingEffects)
            v11:startAnimations(v5.buffer.overloadingAnimationNodes)
            v11:playSamples(v5.buffer.samplesOverloadingStart)
            v11:playSamples(v5.buffer.samplesOverloadingWork, 0, v5.buffer.samplesOverloadingStart[1])
          else
            v10:stopEffects(v5.buffer.overloadingEffects)
            v10:stopAnimations(v5.buffer.overloadingAnimationNodes)
            v10:stopSamples(v5.buffer.samplesOverloadingStart)
            v10 = v10:getIsSamplePlaying(v5.buffer.samplesOverloadingWork[1])
            if v10 then
              v10:stopSamples(v5.buffer.samplesOverloadingWork)
              v10:playSamples(v5.buffer.samplesOverloadingStop)
            end
          end
        end
        self:raiseDirtyFlags(v5.dirtyFlag)
      end
      if v5.buffer.overloadAnimation ~= nil then
        v10 = self:getIsAnimationPlaying(v5.buffer.overloadAnimation)
        if not v10 then
          v10 = self:getAnimationTime(v5.buffer.overloadAnimation)
          if 0.5 < v10 then
            self:playAnimation(v5.buffer.overloadAnimation, -v5.buffer.overloadAnimationSpeed)
          end
        end
      end
      if v7 then
        self:raiseActive()
      end
    end
  end
  if self.isServer and v5.showBaleLimitWarning ~= v6 then
    v5.showBaleLimitWarning = v6
    self:raiseDirtyFlags(v5.dirtyFlag)
  end
  if v5.hasPlatform then
    if v5.platformDelayedDropping and not v5.platformDropInProgress then
      Baler.actionEventUnloading(self)
      v5.platformDelayedDropping = false
    end
    if v5.platformDropInProgress then
      v8 = self:getIsAnimationPlaying(v5.platformAnimation)
      if not v8 then
        v5.platformDropInProgress = false
      end
    end
  end
end
function Baler:onDraw()
  if self.spec_baler.showBaleLimitWarning then
    isActiveForInput:showBlinkingWarning(self.spec_baler.texts.warningTooManyBales, 100)
  end
end
function Baler:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if 0 < #self.spec_baler.bales then
    local v5 = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
    if self.spec_baler.baleFoldThreshold < v5 then
      return false, self.spec_baler.texts.warningFoldingBaleLoaded
    end
  end
  if 1 < #isSelected.bales then
    return false, isSelected.texts.warningFoldingBaleLoaded
  end
  v5 = self:getIsTurnedOn()
  if v5 then
    return false, isSelected.texts.warningFoldingTurnedOn
  end
  if isSelected.hasPlatform then
    if not isSelected.platformReadyToDrop then
      -- if not v4.platformDropInProgress then goto L60 end
    end
    return false, isSelected.texts.warningFoldingBaleLoaded
  end
  v5 = superFunc(self, direction, onAiTurnOn)
  return v5
end
function Baler:onChangedFillType(fillUnitIndex, fillTypeIndex, oldFillTypeIndex)
  if fillUnitIndex ~= self.spec_baler.fillUnitIndex then
    -- if v1 ~= v0.spec_baler.buffer.fillUnitIndex then goto L109 end
  end
  local v5 = self:getFillUnitFillType(isSelected.fillUnitIndex)
  if v5 ~= FillType.UNKNOWN then
  end
  if fillTypeIndex ~= FillType.UNKNOWN then
    isSelected.currentBaleTypeDefinition = isSelected.baleTypes[isSelected.currentBaleTypeIndex]
    local v7, v8 = v7:getBaleXMLFilename(fillTypeIndex, isSelected.baleTypes[isSelected.currentBaleTypeIndex].isRoundBale, isSelected.baleTypes[isSelected.currentBaleTypeIndex].width, isSelected.baleTypes[isSelected.currentBaleTypeIndex].height, isSelected.baleTypes[isSelected.currentBaleTypeIndex].length, isSelected.baleTypes[isSelected.currentBaleTypeIndex].diameter, self.customEnvironment)
    isSelected.currentBaleXMLFilename = v7
    isSelected.currentBaleIndex = v8
    v7 = v7:getBaleCapacityByBaleIndex(isSelected.currentBaleIndex, fillTypeIndex)
    if fillUnitIndex == isSelected.fillUnitIndex then
      self:setFillUnitCapacity(fillUnitIndex, v7, false)
    elseif isSelected.buffer.capacityPercentage ~= nil then
      self:setFillUnitCapacity(fillUnitIndex, v7 * isSelected.buffer.capacityPercentage, false)
    end
    ObjectChangeUtil.setObjectChanges(v6.changeObjects, true, self, self.setMovingToolDirty)
    if isSelected.currentBaleXMLFilename == nil then
      Logging.warning("Could not find bale for given bale type definition '%s'", v6.index)
    end
  end
end
function Baler:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if fillUnitIndex == self.spec_baler.fillUnitIndex then
    local v9 = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
    local v10 = self:getFillUnitCapacity(self.spec_baler.fillUnitIndex)
    local v11 = self:updateDummyBale(self.spec_baler.dummyBale, fillTypeIndex, v9, v10)
    if v11 then
      -- TODO: structure LOP_FORNPREP (pc 35, target 48)
      self:setAnimationTime(self.spec_baler.baleTypes[1].animations.fill, 0)
      -- TODO: structure LOP_FORNLOOP (pc 47, target 36)
    end
    if 0 < v9 then
      self:setAnimationTime(v8.animations.fill, v9 / v10)
    end
    -- if not v0.isServer then goto L175 end
    -- if 0 >= v2 then goto L175 end
    v11 = self:getFillUnitFreeCapacity(v7.fillUnitIndex)
    if v11 <= 0 then
      if self.isAddedToPhysics then
        self:finishBale()
      else
        v7.createBaleNextFrame = true
      end
      v7.fillUnitOverflowFillLevel = fillLevelDelta - appliedDelta
      return
    end
    -- if 0 >= v7.fillUnitOverflowFillLevel then goto L175 end
    -- if 0 >= v2 then goto L175 end
    v7.fillUnitOverflowFillLevel = 0
    local v14 = self:getOwnerFarmId()
    local v12 = self:addFillUnitFillLevel(v14, v7.fillUnitIndex, v7.fillUnitOverflowFillLevel, fillTypeIndex, toolType)
    v7.fillUnitOverflowFillLevel = v7.fillUnitOverflowFillLevel - v12
    return
  end
  if v7.nonStopBaling and fillUnitIndex == v7.buffer.fillUnitIndex and v7.buffer.dummyBale.available then
    local v8 = self:getFillUnitFillLevel(v7.buffer.fillUnitIndex)
    v9 = self:getFillUnitCapacity(v7.buffer.fillUnitIndex)
    if v7.buffer.overloadAnimation ~= nil then
      v10 = self:getAnimationTime(v7.buffer.overloadAnimation)
      if 0 < v10 and 0 < v8 then
        return
      end
    end
    self:updateDummyBale(v7.buffer.dummyBale, fillTypeIndex, v8, v9)
  end
end
function Baler:onTurnedOn()
  if self.setFoldState ~= nil and 0 < #self.spec_foldable.foldingParts then
    self:setFoldState(self.spec_foldable.turnOnFoldDirection, false, true)
  end
  if self.isClient then
    fillTypeIndex:startAnimations(self.spec_baler.animationNodes)
    fillTypeIndex:playSample(self.spec_baler.samples.work)
  end
  self:raiseActive()
end
function Baler:onTurnedOff()
  if self.isClient then
    fillTypeIndex:stopEffects(self.spec_baler.fillEffects)
    fillTypeIndex:stopEffects(self.spec_baler.additiveEffects)
    fillTypeIndex:stopEffects(self.spec_baler.buffer.overloadingEffects)
    fillTypeIndex:stopAnimations(self.spec_baler.animationNodes)
    fillTypeIndex:stopSample(self.spec_baler.samples.work)
    fillTypeIndex:stopSample(self.spec_baler.samples.eject)
    fillTypeIndex:stopSample(self.spec_baler.samples.unload)
    fillTypeIndex:stopSample(self.spec_baler.samples.door)
    fillTypeIndex:stopSample(self.spec_baler.samples.knotCleaning)
    fillTypeIndex:stopSamples(self.spec_baler.buffer.samplesOverloadingStart)
    local fillTypeIndex = fillTypeIndex:getIsSamplePlaying(self.spec_baler.buffer.samplesOverloadingWork[1])
    if fillTypeIndex then
      fillTypeIndex:stopSamples(self.spec_baler.buffer.samplesOverloadingWork)
      fillTypeIndex:playSamples(self.spec_baler.buffer.samplesOverloadingStop)
    end
  end
end
function Baler:onRootVehicleChanged(rootVehicle)
  if rootVehicle.actionController ~= nil then
    if self.spec_baler.controlledAction ~= nil then
      isSelected:updateParent(rootVehicle.actionController)
      return
    end
    local isSelected = oldFillTypeIndex:registerAction("baleUnload", nil, 1)
    fillTypeIndex.controlledAction = isSelected
    isSelected:setCallback(self, Baler.actionControllerBaleUnloadEvent)
    isSelected:setFinishedFunctions(self, Baler.getIsBaleUnloading, false, false)
    return
  end
  if fillTypeIndex.controlledAction ~= nil then
    isSelected:remove()
    fillTypeIndex.controlledAction = nil
  end
end
function Baler:actionControllerBaleUnloadEvent(direction)
  if direction < 0 then
    local oldFillTypeIndex = self:isUnloadingAllowed()
    if oldFillTypeIndex and self.spec_baler.allowsBaleUnloading and self.spec_baler.unloadingState == Baler.UNLOADING_CLOSED and 0 < #self.spec_baler.bales then
      self:setIsUnloadingBale(true)
    end
  end
  return true
end
function Baler:doCheckSpeedLimit(superFunc)
  local fillTypeIndex = superFunc(self)
  if not fillTypeIndex then
    fillTypeIndex = self:getIsTurnedOn()
    if fillTypeIndex then
      fillTypeIndex = self:getIsLowered()
    end
  end
  return fillTypeIndex
end
function Baler:setBaleTypeIndex(baleTypeIndex, force, noEventSend)
  self.spec_baler.preSelectedBaleTypeIndex = baleTypeIndex
  local v5 = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
  if v5 ~= 0 then
    -- if not v2 then goto L14 end
  end
  isSelected.currentBaleTypeIndex = baleTypeIndex
  Baler.updateActionEvents(self)
  BalerBaleTypeEvent.sendEvent(self, baleTypeIndex, force, noEventSend)
end
function Baler:isUnloadingAllowed()
  if not self.spec_baler.platformReadyToDrop then
    -- if not v0.spec_baler.platformDropInProgress then goto L18 end
  end
  if fillUnitIndex.unloadingState ~= Baler.UNLOADING_OPEN then
    return false
  end
  if self.spec_baleWrapper == nil then
    if not not fillUnitIndex.allowsBaleUnloading and fillUnitIndex.allowsBaleUnloading then
      local oldFillTypeIndex = self:getIsTurnedOn()
      if not oldFillTypeIndex then
      end
    end
    return fillTypeIndex
  end
  return self:allowsGrabbingBale()
end
function Baler:handleUnloadingBaleEvent()
  local fillTypeIndex = self:isUnloadingAllowed()
  if fillTypeIndex then
    if not self.spec_baler.hasUnloadingAnimation then
      -- if not v0.spec_baler.allowsBaleUnloading then goto L50 end
    end
    if fillUnitIndex.unloadingState == Baler.UNLOADING_CLOSED then
      if 0 >= #fillUnitIndex.bales then
        fillTypeIndex = self:getCanUnloadUnfinishedBale()
        -- if not v2 then goto L50 end
      end
      self:setIsUnloadingBale(true)
      return
    end
    if fillUnitIndex.unloadingState == Baler.UNLOADING_OPEN and fillUnitIndex.hasUnloadingAnimation then
      self:setIsUnloadingBale(false)
    end
  end
end
function Baler:dropBaleFromPlatform(waitForNextBale, noEventSend)
  if self.spec_baler.platformReadyToDrop then
    self:setAnimationTime(self.spec_baler.platformAnimation, 0, false)
    local v8 = self:getAnimationTime(self.spec_baler.platformAnimation)
    self:playAnimation(self.spec_baler.platformAnimation, 1, v8, true)
    if waitForNextBale == true then
      self:setAnimationStopTime(self.spec_baler.platformAnimation, self.spec_baler.platformAnimationNextBaleTime)
    end
    oldFillTypeIndex.platformReadyToDrop = false
    oldFillTypeIndex.platformDropInProgress = true
    if self.isServer and oldFillTypeIndex.hasDynamicMountPlatform then
      self:forceUnmountDynamicMountedObjects()
    end
  end
  BalerDropFromPlatformEvent.sendEvent(self, waitForNextBale, noEventSend)
end
function Baler:getBalerBaleOwnerFarmId(x, z)
  if self.spec_baler.useDropLandOwnershipForBales then
    local v5 = v5:getFarmlandIdAtWorldPosition(x, z)
    local v6 = v6:getFarmlandOwner(v5)
  else
    v5 = self:getLastTouchedFarmlandFarmId()
  end
  if isSelected == FarmManager.SPECTATOR_FARM_ID then
    v5 = self:getOwnerFarmId()
  end
  return isSelected
end
function Baler:setIsUnloadingBale(isUnloadingBale, noEventSend)
  if self.spec_baler.hasUnloadingAnimation then
    if isUnloadingBale then
      -- if v0.spec_baler.unloadingState == Baler.UNLOADING_OPENING then goto L198 end
      if #self.spec_baler.bales == 0 and self.spec_baler.canUnloadUnfinishedBale then
        local isSelected = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
        if self.spec_baler.unfinishedBaleThreshold < isSelected then
          isSelected = self:getFillUnitFillType(self.spec_baler.fillUnitIndex)
          local v5 = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
          local v6 = self:getFillUnitFreeCapacity(self.spec_baler.fillUnitIndex)
          self.spec_baler.lastBaleFillLevel = v5
          self:setFillUnitFillLevelToDisplay(self.spec_baler.fillUnitIndex, v5)
          local v9 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v9, self.spec_baler.fillUnitIndex, v6, isSelected, ToolType.UNDEFINED)
          self.spec_baler.buffer.unloadingStarted = false
        end
      end
      BalerSetIsUnloadingBaleEvent.sendEvent(self, isUnloadingBale, noEventSend)
      oldFillTypeIndex.unloadingState = Baler.UNLOADING_OPENING
      if self.isClient then
        isSelected:playSample(oldFillTypeIndex.samples.eject)
        isSelected:playSample(oldFillTypeIndex.samples.door)
      end
      self:playAnimation(oldFillTypeIndex.baleTypes[oldFillTypeIndex.currentBaleTypeIndex].animations.unloading, oldFillTypeIndex.baleTypes[oldFillTypeIndex.currentBaleTypeIndex].animations.unloadingSpeed, nil, true)
      return
    end
    -- if v3.unloadingState == Baler.UNLOADING_CLOSING then goto L198 end
    -- if v3.unloadingState == Baler.UNLOADING_CLOSED then goto L198 end
    BalerSetIsUnloadingBaleEvent.sendEvent(self, isUnloadingBale, noEventSend)
    oldFillTypeIndex.unloadingState = Baler.UNLOADING_CLOSING
    if self.isClient then
      isSelected:playSample(oldFillTypeIndex.samples.door)
    end
    self:playAnimation(oldFillTypeIndex.baleCloseAnimationName, oldFillTypeIndex.baleCloseAnimationSpeed, nil, true)
    return
  end
  if oldFillTypeIndex.allowsBaleUnloading and isUnloadingBale then
    BalerSetIsUnloadingBaleEvent.sendEvent(self, isUnloadingBale, noEventSend)
    oldFillTypeIndex.isBaleUnloading = true
    if self.isClient then
      isSelected:playSample(oldFillTypeIndex.samples.unload)
    end
  end
end
function Baler:getIsBaleUnloading()
  return self.spec_baler.isBaleUnloading
end
function Baler:getTimeFromLevel(level)
  if self.spec_baler.currentBaleTypeDefinition ~= nil then
    local v6 = self:getFillUnitCapacity(self.spec_baler.fillUnitIndex)
    return level / v6 * (self.spec_baler.currentBaleTypeDefinition.length + self.spec_baler.baleAnimSpacing) / self.spec_baler.baleAnimLength
  end
  return 0
end
function Baler:moveBales(dt)
  -- TODO: structure LOP_FORNPREP (pc 7, target 14)
  self:moveBale(#self.spec_baler.bales, dt)
  -- TODO: structure LOP_FORNLOOP (pc 13, target 8)
end
function Baler:moveBale(i, dt, noEventSend)
  self:setBaleTime(i, self.spec_baler.bales[i].time + dt, noEventSend)
end
function Baler:setBaleTime(i, baleTime, noEventSend)
  if self.spec_baler.baleAnimCurve ~= nil and self.spec_baler.bales[i] ~= nil then
    self.spec_baler.bales[i].time = baleTime
    if self.isServer then
      local v6 = v6:get(self.spec_baler.bales[i].time)
      setTranslation(self.spec_baler.bales[i].baleJointNode, v6[1], v6[2], v6[3])
      setRotation(self.spec_baler.bales[i].baleJointNode, v6[4], v6[5], v6[6])
      if self.spec_baler.bales[i].baleJointIndex ~= 0 then
        setJointFrame(self.spec_baler.bales[i].baleJointIndex, 0, self.spec_baler.bales[i].baleJointNode)
      end
    end
    if 1 <= v5.time then
      self:dropBale(i)
    end
    if #isSelected.bales == 0 then
      isSelected.isBaleUnloading = false
      if self.isClient then
        v6:stopSample(isSelected.samples.unload)
      end
    end
    if self.isServer then
      if noEventSend ~= nil then
        -- if v3 then goto L101 end
      end
      local v8 = BalerSetBaleTimeEvent.new(self, i, v5.time)
      v6:broadcastEvent(v8, nil, nil, self)
    end
  end
end
function Baler:finishBale()
  if self.spec_baler.baleTypes ~= nil then
    local fillTypeIndex = self:getFillUnitFillType(self.spec_baler.fillUnitIndex)
    if not self.spec_baler.hasUnloadingAnimation then
      local v5 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v5, self.spec_baler.fillUnitIndex, -math.huge, fillTypeIndex, ToolType.UNDEFINED)
      self.spec_baler.buffer.unloadingStarted = false
      for v6, v7 in pairs(self.spec_baler.pickupFillTypes) do
        fillUnitIndex.pickupFillTypes[v6] = 0
      end
      v6 = self:getFillUnitCapacity(fillUnitIndex.fillUnitIndex)
      oldFillTypeIndex = self:createBale(...)
      if oldFillTypeIndex then
        v6 = BalerCreateBaleEvent.new(self, fillTypeIndex, fillUnitIndex.bales[#fillUnitIndex.bales].time)
        isSelected:broadcastEvent(v6, nil, nil, self)
        isSelected = self:getFillUnitFillLevel(fillUnitIndex.fillUnitIndex)
        -- cmp-jump LOP_JUMPXEQKN R4 aux=0x8000001d -> L141
        -- if v1.preSelectedBaleTypeIndex == v1.currentBaleTypeIndex then goto L141 end
        self:setBaleTypeIndex(fillUnitIndex.preSelectedBaleTypeIndex, true)
        return
      end
      Logging.error("Failed to create bale!")
      return
    end
    v6 = self:getFillUnitCapacity(fillUnitIndex.fillUnitIndex)
    oldFillTypeIndex = self:createBale(...)
    if oldFillTypeIndex then
      local v10 = NetworkUtil.getObjectId(fillUnitIndex.bales[#fillUnitIndex.bales].baleObject)
      v6 = BalerCreateBaleEvent.new(...)
      isSelected:broadcastEvent(v6, nil, nil, self)
      return
    end
    Logging.error("Failed to create bale!")
  end
end
function Baler:createBale(baleFillType, fillLevel, baleServerId, baleTime, xmlFilename)
  if self.spec_baler.knotingAnimation ~= nil then
    self:playAnimation(self.spec_baler.knotingAnimation, self.spec_baler.knotingAnimationSpeed, nil, true)
  end
  if baleTime == nil then
    self:deleteDummyBale(v6.dummyBale)
  end
  if not xmlFilename then
  end
  v9.filename = v10
  v9.time = baleTime
  if v9.time == nil and v6.baleAnimLength ~= nil then
    v9.time = v8.length * 0.5 / v6.baleAnimLength
  end
  v9.fillType = baleFillType
  v9.fillLevel = fillLevel
  if v6.hasUnloadingAnimation then
    if self.isServer then
      local v10 = Bale.new(self.isServer, self.isClient)
      local v11, v12, v13 = getWorldTranslation(v8.baleRootNode)
      local v14, v15, v16 = getWorldRotation(v8.baleRootNode)
      local v17 = v10:loadFromConfigXML(v9.filename, v11, v12, v13, v14, v15, v16)
      -- if not v17 then goto L170 end
      v10:setFillType(baleFillType)
      v10:setFillLevel(fillLevel)
      local v19 = self:getBalerBaleOwnerFarmId(v11, v13)
      v10:setOwnerFarmId(v19, true)
      v19 = self:getLastActiveMissionWork()
      v10:setIsMissionBale(...)
      v10:register()
      v10:mountKinematic(self, v8.baleRootNode, 0, 0, 0, 0, 0, 0)
      v9.baleObject = v10
    elseif baleServerId ~= nil then
      v10 = NetworkUtil.getObject(baleServerId)
      if v10 ~= nil then
        v9.baleServerId = baleServerId
        v10:mountKinematic(self, v8.baleRootNode, 0, 0, 0, 0, 0, 0)
      else
        v6.baleToMount = {baleServerId = baleServerId, jointNode = v8.baleRootNode, baleInfo = v9}
      end
    end
  end
  if self.isServer then
    -- if v6.hasUnloadingAnimation then goto L382 end
    v10, v11, v12 = getWorldTranslation(v8.baleRootNode)
    v13, v14, v15 = getWorldRotation(v8.baleRootNode)
    v16 = createTransformGroup("BaleJointTG")
    link(v8.baleRootNode, v16)
    if v9.time ~= nil then
      v17 = v17:get(v9.time)
      setTranslation(v16, v17[1], v17[2], v17[3])
      setRotation(v16, v17[4], v17[5], v17[6])
      local v18, v19, v20 = localToWorld(v8.baleRootNode, v17[1], v17[2], v17[3])
      v18, v19, v20 = localRotationToWorld(v8.baleRootNode, v17[4], v17[5], v17[6])
    else
      setTranslation(v16, 0, 0, 0)
      setRotation(v16, 0, 0, 0)
    end
    v17 = Bale.new(self.isServer, self.isClient)
    v18 = v17:loadFromConfigXML(v9.filename, v10, v11, v12, v13, v14, v15)
    -- if not v18 then goto L389 end
    v17:setFillType(baleFillType)
    v17:setFillLevel(fillLevel)
    v20 = self:getBalerBaleOwnerFarmId(v10, v12)
    v17:setOwnerFarmId(v20, true)
    v20 = self:getLastActiveMissionWork()
    v17:setIsMissionBale(...)
    v17:register()
    v17:setCanBeSold(false)
    v18 = JointConstructor.new()
    v18:setActors(v8.baleNodeComponent, v17.nodeId)
    v18:setJointTransforms(v16, v17.nodeId)
    -- TODO: structure LOP_FORNPREP (pc 326, target 341)
    v18:setRotationLimit(1 - 1, 0, 0)
    v18:setTranslationLimit(1 - 1, true, 0, 0)
    -- TODO: structure LOP_FORNLOOP (pc 340, target 327)
    v18:setEnableCollision(false)
    v19 = v18:finalize()
    v20:removeItemToSave(v17)
    v9.baleJointNode = v16
    v9.baleJointIndex = v19
    v9.baleObject = v17
    -- TODO: structure LOP_FORNPREP (pc 365, target 380)
    setPairCollision(v6.bales[1].baleObject.nodeId, v17.nodeId, false)
    -- TODO: structure LOP_FORNLOOP (pc 379, target 366)
  elseif not self.isServer and not v6.hasUnloadingAnimation then
  end
  if v7 then
    table.insert(v6.bales, v9)
  end
  return v7
end
function Baler:dropBale(baleIndex)
  if self.isServer then
    if self.spec_baler.bales[baleIndex].baleJointIndex ~= nil then
      removeJoint(self.spec_baler.bales[baleIndex].baleJointIndex)
      delete(self.spec_baler.bales[baleIndex].baleJointNode)
      xmlFilename:addItemToSave(self.spec_baler.bales[baleIndex].baleObject)
    else
      self.spec_baler.bales[baleIndex].baleObject:unmountKinematic()
    end
    -- TODO: structure LOP_FORNPREP (pc 40, target 57)
    if 1 ~= baleIndex then
      setPairCollision(fillLevel.bales[1].baleObject.nodeId, baleTime.nodeId, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 56, target 41)
    if fillLevel.lastBaleFillLevel ~= nil and #fillLevel.bales == 1 then
      baleTime:setFillLevel(fillLevel.lastBaleFillLevel)
      fillLevel.lastBaleFillLevel = nil
    end
    baleTime:setCanBeSold(true)
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L144
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x16 -> L144
    local v6, v7, v8 = getWorldTranslation(baleTime.nodeId)
    if not fillLevel.baleTypes[fillLevel.currentBaleTypeIndex].baleNodeComponent then
    end
    local v9, v10, v11 = v9(v10, v6, v7, v8)
    setLinearVelocity(baleTime.nodeId, v9, v10, v11)
    local v14 = self:getBalerBaleOwnerFarmId(v6, v8)
    v12:updateFarmStats(v14, "baleCount", 1)
  elseif self.spec_baler.hasUnloadingAnimation then
    local baleTime = NetworkUtil.getObject(self.spec_baler.bales[baleIndex].baleServerId)
    if baleTime ~= nil then
      baleTime:unmountKinematic()
    end
  end
  table.remove(fillLevel.bales, baleIndex)
  if fillLevel.hasPlatform then
    if not fillLevel.platformReadyToDrop then
      fillLevel.platformReadyToDrop = true
    end
    if fillLevel.hasDynamicMountPlatform then
      fillLevel.platformMountDelay = 5
    end
  end
end
function Baler:updateDummyBale(dummyBaleData, fillTypeIndex, fillLevel, capacity)
  if not dummyBaleData.baleTypeDef then
  end
  if not dummyBaleData.linkNode then
  end
  if v8 ~= nil and 0 < fillLevel and fillLevel < capacity then
    if dummyBaleData.currentBale ~= nil then
      -- if v1.currentBaleFillType == v2 then goto L45 end
    end
    if dummyBaleData.currentBale ~= nil then
      self:deleteDummyBale(dummyBaleData)
    end
    self:createDummyBale(dummyBaleData, fillTypeIndex)
  end
  if dummyBaleData.currentBale ~= nil then
    if not dummyBaleData.linkNode then
    end
    if v9 ~= nil and 0 < capacity then
      if v6.isRoundBale then
        -- if v3 / v4 then goto L67 end
      end
      if not dummyBaleData.scaleComponents then
      end
      if v14 ~= nil then
        for v18, v19 in ipairs(v14) do
          if not (0 < v19) then
            continue
          end
          if v18 == 1 then
          elseif v18 == 2 then
          else
          end
        end
      end
      setScale(v9, v11, v12, v13)
    end
  end
  return v7
end
function Baler.deleteDummyBale(v0, dummyBaleData)
  if dummyBaleData ~= nil then
    if dummyBaleData.currentBale ~= nil then
      delete(dummyBaleData.currentBale)
      dummyBaleData.currentBale = nil
    end
    if dummyBaleData.sharedLoadRequestId ~= nil then
      fillTypeIndex:releaseSharedI3DFile(dummyBaleData.sharedLoadRequestId)
      dummyBaleData.sharedLoadRequestId = nil
    end
  end
end
function Baler:createDummyBale(dummyBaleData, fillTypeIndex)
  if self.spec_baler.currentBaleXMLFilename ~= nil then
    local capacity, xmlFilename = Bale.createDummyBale(self.spec_baler.currentBaleXMLFilename, fillTypeIndex)
    if not dummyBaleData.linkNode then
    end
    link(v7, capacity)
    dummyBaleData.currentBale = capacity
    dummyBaleData.baleTypeDef = v6
    dummyBaleData.currentBaleFillType = fillTypeIndex
    dummyBaleData.sharedLoadRequestId = xmlFilename
  end
end
function Baler:getCanUnloadUnfinishedBale()
  if self.spec_baler.canUnloadUnfinishedBale then
    local fillLevel = self:getFillUnitFillLevel(self.spec_baler.fillUnitIndex)
    if self.spec_baler.unfinishedBaleThreshold >= fillLevel then
    end
  end
  return fillTypeIndex
end
function Baler:setBalerAutomaticDrop(state, noEventSend)
  if state == nil then
    if self.spec_baler.hasPlatform then
    else
    end
  end
  if fillLevel.hasPlatform then
    fillLevel.platformAutomaticDrop = state
  else
    fillLevel.automaticDrop = state
  end
  self:requestActionEventUpdate()
  BalerAutomaticDropEvent.sendEvent(self, state, noEventSend)
end
function Baler:getCanBeTurnedOn(superFunc)
  if self.spec_baler.isBaleUnloading then
    return false
  end
  return superFunc(self)
end
function Baler.loadSpeedRotatingPartFromXML(v0, dummyBaleData, fillTypeIndex, fillLevel, capacity)
  local xmlFilename = fillLevel:getValue(capacity .. "#rotateOnlyIfFillLevelIncreased", false)
  fillTypeIndex.rotateOnlyIfFillLevelIncreased = xmlFilename
  xmlFilename = dummyBaleData(v0, fillTypeIndex, fillLevel, capacity)
  return xmlFilename
end
function Baler:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.rotateOnlyIfFillLevelIncreased ~= nil and speedRotatingPart.rotateOnlyIfFillLevelIncreased and self.spec_baler.lastAreaBiggerZeroTime == 0 then
    return false
  end
  return superFunc(self, speedRotatingPart)
end
function Baler.getDefaultSpeedLimit()
  return 25
end
function Baler:getIsWorkAreaActive(superFunc, workArea)
  local capacity = capacity:getCanAddLimitedObjects(SlotSystem.LIMITED_OBJECT_BALE, 1)
  if not capacity then
    capacity = self:getIsTurnedOn()
    if capacity then
      return false
    end
  end
  if not fillLevel.buffer.fillUnitIndex then
  end
  capacity = self:getFillUnitFreeCapacity(v6)
  if capacity == 0 then
    return false
  end
  if self.allowPickingUp ~= nil then
    capacity = self:allowPickingUp()
    if not capacity then
      return false
    end
  end
  if fillLevel.hasUnloadingAnimation and not fillLevel.nonStopBaling then
    if 0 >= #fillLevel.bales then
      -- if v3.unloadingState == Baler.UNLOADING_CLOSED then goto L63 end
    end
    return false
  end
  capacity = superFunc(self, workArea)
  return capacity
end
function Baler:getConsumingLoad(superFunc)
  local fillTypeIndex, fillLevel = superFunc(self)
  local v6 = v6:get(1000)
  return fillTypeIndex + v6 / self.spec_baler.maxPickupLitersPerSecond, fillLevel + 1
end
function Baler:getRequiresPower(superFunc)
  if self.spec_baler.nonStopBaling then
    local fillLevel = self:getFillUnitFillLevelPercentage(self.spec_baler.buffer.fillUnitIndex)
    if self.spec_baler.buffer.overloadingStartFillLevelPct < fillLevel then
      return true
    end
    if fillTypeIndex.buffer.unloadingStarted then
      return true
    end
  end
  if fillTypeIndex.unloadingState ~= Baler.UNLOADING_CLOSED then
    return true
  end
  fillLevel = self:getIsTurnedOn()
  if fillLevel then
    return true
  end
  fillLevel = superFunc(self)
  return fillLevel
end
function Baler.getCanBeSelected(v0, dummyBaleData)
  return true
end
function Baler:getIsAttachedTo(superFunc, vehicle)
  local fillLevel = superFunc(self, vehicle)
  if fillLevel then
    return true
  end
  -- TODO: structure LOP_FORNPREP (pc 14, target 25)
  if self.spec_baler.bales[1].baleObject == vehicle then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 15)
  return false
end
function Baler.getAllowDynamicMountFillLevelInfo(v0, dummyBaleData)
  return false
end
function Baler:getAlarmTriggerIsActive(superFunc, alarmTrigger)
  local ret = superFunc(self, alarmTrigger)
  if alarmTrigger.needsBaleLoaded and self.spec_baler ~= nil and #self.spec_baler.bales == 0 then
    return false
  end
  return ret
end
function Baler.loadAlarmTrigger(v0, dummyBaleData, fillTypeIndex, fillLevel, capacity, xmlFilename)
  local v6 = dummyBaleData(v0, fillTypeIndex, fillLevel, capacity, xmlFilename)
  local v7 = fillTypeIndex:getValue(fillLevel .. "#needsBaleLoaded", false)
  capacity.needsBaleLoaded = v7
  return v6
end
function Baler:processBalerArea(workArea, dt)
  local capacity, xmlFilename, v6, v7, v8, v9, v10 = DensityMapHeightUtil.getLineByArea(workArea.start, workArea.width, workArea.height)
  if self.isServer then
    self.spec_baler.fillEffectType = FillType.UNKNOWN
  end
  for v14, v15 in pairs(fillLevel.pickupFillTypes) do
    local v17 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v14, capacity, xmlFilename, v6, v7, v8, v9, v10, nil, nil, false, nil)
    if not (0 < -v17) then
      continue
    end
    if self.isServer then
      fillLevel.fillEffectType = v14
      if fillLevel.additives.available and not fillLevel.additives.appliedByBufferOverloading then
        -- TODO: structure LOP_FORNPREP (pc 70, target 81)
        if v14 == fillLevel.additives.fillTypes[1] then
        else
          -- TODO: structure LOP_FORNLOOP (pc 80, target 71)
        end
        if v17 then
          local v18 = self:getFillUnitFillLevel(fillLevel.additives.fillUnitIndex)
          if 0 < v18 and 0 < fillLevel.additives.usage * v16 then
            local v20 = math.min(v18 / fillLevel.additives.usage * v16, 1)
            local v23 = self:getOwnerFarmId()
            local v26 = self:getFillUnitFillType(fillLevel.additives.fillUnitIndex)
            self:addFillUnitFillLevel(v23, fillLevel.additives.fillUnitIndex, -(fillLevel.additives.usage * v16), v26, ToolType.UNDEFINED)
            fillLevel.additives.isActiveTimer = 250
            fillLevel.additives.isActive = true
            self:raiseDirtyFlags(fillLevel.dirtyFlag)
            if self.isClient then
              v21:setFillType(fillLevel.additiveEffects, FillType.LIQUIDFERTILIZER)
              v21:startEffects(fillLevel.additiveEffects)
            end
          end
        end
      end
    end
    fillLevel.pickupFillTypes[v14] = fillLevel.pickupFillTypes[v14] + v16
    fillLevel.workAreaParameters.lastPickedUpLiters = fillLevel.workAreaParameters.lastPickedUpLiters + v16
    return v16, v16
  end
  return 0, 0
end
function Baler:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_baler.actionEvents)
    if isActiveForInputIgnoreSelection then
      if self.spec_baler.automaticDrop then
        -- if v0.spec_baler.platformAutomaticDrop then goto L42 end
      end
      local capacity, xmlFilename = self:addPoweredActionEvent(fillLevel.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, Baler.actionEventUnloading, false, true, false, true, nil)
      v6:setActionEventTextPriority(xmlFilename, GS_PRIO_HIGH)
      if 1 < #fillLevel.baleTypes then
        capacity, xmlFilename = self:addPoweredActionEvent(fillLevel.actionEvents, InputAction.TOGGLE_BALE_TYPES, self, Baler.actionEventToggleSize, false, true, false, true, nil)
        v6:setActionEventTextPriority(xmlFilename, GS_PRIO_HIGH)
      end
      if fillLevel.toggleableAutomaticDrop then
        capacity, xmlFilename = self:addPoweredActionEvent(fillLevel.actionEvents, InputAction.IMPLEMENT_EXTRA4, self, Baler.actionEventToggleAutomaticDrop, false, true, false, true, nil)
        if fillLevel.hasPlatform then
        end
        if v6 then
          -- if v3.toggleAutomaticDropTextNeg then goto L109 end
        end
        v7:setActionEventText(v9, fillLevel.toggleAutomaticDropTextPos)
        v7:setActionEventTextPriority(xmlFilename, GS_PRIO_HIGH)
      end
      Baler.updateActionEvents(self)
    end
  end
end
function Baler:onStartWorkAreaProcessing(dt)
  if self.isServer then
    self.spec_baler.lastAreaBiggerZero = false
    self.spec_baler.workAreaParameters.lastPickedUpLiters = 0
  end
end
function Baler:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer then
    for v9, v10 in pairs(self.spec_baler.pickupFillTypes) do
      if not (xmlFilename < v10) then
        continue
      end
    end
    if 0 < fillLevel.workAreaParameters.lastPickedUpLiters then
      fillLevel.lastAreaBiggerZero = true
      fillLevel.variableSpeedLimit.pickupPerSecond = fillLevel.variableSpeedLimit.pickupPerSecond + fillLevel.workAreaParameters.lastPickedUpLiters * fillLevel.fillScale
      if not fillLevel.hasUnloadingAnimation then
        v8 = self:getTimeFromLevel(fillLevel.workAreaParameters.lastPickedUpLiters * fillLevel.fillScale)
        self:moveBales(v8)
      end
      if fillLevel.nonStopBaling then
        if fillLevel.buffer.fillMainUnitAfterOverload then
          -- if v3.buffer.unloadingStarted then goto L73 end
        end
        -- goto L85  (LOP_JUMP +12)
        v9 = self:getFillUnitFreeCapacity(fillLevel.fillUnitIndex)
        if v9 <= 0 then
        end
      end
      if fillLevel.buffer.loadingStateAnimation ~= nil then
        v9 = self:getAnimationTime(fillLevel.buffer.loadingStateAnimation)
        if v8 == fillLevel.fillUnitIndex then
          -- if 0.99 > v9 then goto L132 end
          self:playAnimation(fillLevel.buffer.loadingStateAnimation, -fillLevel.buffer.loadingStateAnimationSpeed)
        elseif v9 <= 0.01 then
          self:playAnimation(fillLevel.buffer.loadingStateAnimation, fillLevel.buffer.loadingStateAnimationSpeed)
        end
      end
      self:setFillUnitFillType(v8, capacity)
      local v11 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v11, v8, v7, capacity, ToolType.UNDEFINED)
    end
    if fillLevel.lastAreaBiggerZero ~= fillLevel.lastAreaBiggerZeroSent then
      self:raiseDirtyFlags(fillLevel.dirtyFlag)
      fillLevel.lastAreaBiggerZeroSent = fillLevel.lastAreaBiggerZero
    end
    if fillLevel.fillEffectType ~= fillLevel.fillEffectTypeSent then
      fillLevel.fillEffectTypeSent = fillLevel.fillEffectType
      self:raiseDirtyFlags(fillLevel.dirtyFlag)
    end
  end
end
function Baler:actionEventUnloading(actionName, inputValue, callbackState, isAnalog)
  if not self.spec_baler.hasPlatform then
    self:handleUnloadingBaleEvent()
    return
  end
  local v6 = self:getCanUnloadUnfinishedBale()
  if v6 and not xmlFilename.platformReadyToDrop then
    self:handleUnloadingBaleEvent()
    return
  end
  self:dropBaleFromPlatform(false)
end
function Baler:actionEventToggleSize(actionName, inputValue, callbackState, isAnalog)
  if #self.spec_baler.baleTypes < self.spec_baler.preSelectedBaleTypeIndex + 1 then
  end
  self:setBaleTypeIndex(v6)
end
function Baler:actionEventToggleAutomaticDrop(actionName, inputValue, callbackState, isAnalog)
  self:setBalerAutomaticDrop()
end
function Baler:updateActionEvents()
  if self.spec_baler.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
    if not self.spec_baler.automaticDrop then
      local capacity = self:isUnloadingAllowed()
      if capacity then
        if not self.spec_baler.hasUnloadingAnimation then
          -- if not v0.spec_baler.allowsBaleUnloading then goto L89 end
        end
        if dt.unloadingState == Baler.UNLOADING_CLOSED then
          capacity = self:getCanUnloadUnfinishedBale()
          if capacity then
            capacity:setActionEventText(hasProcessed.actionEventId, dt.texts.unloadUnfinishedBale)
          end
          -- if 0 >= #v1.bales then goto L89 end
          capacity:setActionEventText(hasProcessed.actionEventId, dt.texts.unloadBaler)
        elseif dt.unloadingState == Baler.UNLOADING_OPEN and dt.hasUnloadingAnimation then
          capacity:setActionEventText(hasProcessed.actionEventId, dt.texts.closeBack)
        end
      end
    end
    if dt.platformReadyToDrop then
      capacity:setActionEventText(hasProcessed.actionEventId, dt.texts.unloadBaler)
    end
    capacity:setActionEventActive(hasProcessed.actionEventId, fillLevel)
  end
  if dt.toggleableAutomaticDrop and dt.actionEvents[InputAction.IMPLEMENT_EXTRA4] ~= nil then
    if dt.hasPlatform then
    end
    if fillLevel then
      -- if v1.toggleAutomaticDropTextNeg then goto L139 end
    end
    capacity:setActionEventText(v6, dt.toggleAutomaticDropTextPos)
  end
  if 1 < #dt.baleTypes and dt.actionEvents[InputAction.TOGGLE_BALE_TYPES] ~= nil then
    if dt.hasUnloadingAnimation then
    else
    end
    local v8 = v8:format(capacity * 100)
    xmlFilename:setActionEventText(...)
  end
end
function Baler:loadSpecValueBaleSize(dt, hasProcessed)
  local fillLevel = self:getRootName()
  self:iterate(fillLevel .. ".baler.baleTypes.baleType", function(self, dt)
    local fillLevel = fillLevel:getValue(dt .. "#isRoundBale", u0.isRoundBaler)
    u0.isRoundBaler = fillLevel
    fillLevel = fillLevel:getValue(dt .. "#diameter", 0)
    local hasProcessed = MathUtil.round(fillLevel, 2)
    local capacity = math.min(u0.minDiameter, hasProcessed)
    u0.minDiameter = capacity
    capacity = math.max(u0.maxDiameter, hasProcessed)
    u0.maxDiameter = capacity
    capacity = capacity:getValue(dt .. "#length", 0)
    fillLevel = MathUtil.round(capacity, 2)
    local xmlFilename = math.min(u0.minLength, fillLevel)
    u0.minLength = xmlFilename
    xmlFilename = math.max(u0.maxLength, fillLevel)
    u0.maxLength = xmlFilename
  end)
  if {isRoundBaler = false, minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minDiameter == math.huge then
    -- if {isRoundBaler = false, minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minLength == math.huge then goto L48 end
  end
  return capacity
end
function Baler:getSpecValueBaleSize(dt, hasProcessed, fillLevel, capacity, xmlFilename, v6)
  if v6 then
    -- if v0.specs.balerBaleSizeRound then goto L10 end
  end
  if self.specs.balerBaleSizeSquare ~= nil then
    if self.specs.balerBaleSizeSquare.isRoundBaler then
      -- if v0.specs.balerBaleSizeSquare.minDiameter then goto L20 end
    end
    if v7.isRoundBaler then
      -- if v7.maxDiameter then goto L28 end
    end
    if capacity ~= nil then
      -- if v4 then goto L58 end
    end
    local v10 = v10:getText("unit_cmShort")
    if v9 ~= v8 then
      return string.format("%d%s-%d%s", v8 * 100, v10, v9 * 100, v10)
    end
    v12 = string.format("%d%s", v8 * 100, v10)
    return v12
    if xmlFilename == true and v9 ~= v8 then
      v12 = v12:getText("unit_cmShort")
      return v8 * 100
    end
    local v11 = v11:getText("unit_cmShort")
    return v8 * 100
  end
  if capacity and xmlFilename then
    return 0, 0, ""
  end
  if capacity then
    return 0, ""
  end
  return ""
end
function Baler.loadSpecValueBaleSizeRound(xmlFile, customEnvironment, baseDir)
  local baleSizeAttributes = Baler.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir)
  if baleSizeAttributes ~= nil and baleSizeAttributes.isRoundBaler then
    return baleSizeAttributes
  end
end
function Baler.loadSpecValueBaleSizeSquare(xmlFile, customEnvironment, baseDir)
  local baleSizeAttributes = Baler.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir)
  if baleSizeAttributes ~= nil and not baleSizeAttributes.isRoundBaler then
    return baleSizeAttributes
  end
end
function Baler:getSpecValueBaleSizeRound(dt, hasProcessed, fillLevel, capacity, xmlFilename)
  if self.specs.balerBaleSizeRound ~= nil and self.specs.balerBaleSizeRound.isRoundBaler then
    return Baler.getSpecValueBaleSize(self, dt, hasProcessed, fillLevel, capacity, xmlFilename, true)
  end
end
function Baler:getSpecValueBaleSizeSquare(dt, hasProcessed, fillLevel, capacity, xmlFilename)
  if self.specs.balerBaleSizeSquare ~= nil and not self.specs.balerBaleSizeSquare.isRoundBaler then
    return Baler.getSpecValueBaleSize(self, dt, hasProcessed, fillLevel, capacity, xmlFilename, false)
  end
end
