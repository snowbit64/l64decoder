-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetFillUnitIsFillingEvent.lua")
source("dataS/scripts/vehicles/specializations/events/SetFillUnitCapacityEvent.lua")
source("dataS/scripts/vehicles/specializations/events/FillUnitUnloadEvent.lua")
FillUnit = {FILL_UNIT_CONFIG_XML_KEY = "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration(?)", FILL_UNIT_XML_KEY = FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.fillUnit(?)", ALARM_TRIGGER_XML_KEY = FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)", CAPACITY_TO_NETWORK_BITS = {}}
FillUnit.CAPACITY_TO_NETWORK_BITS[0] = 16
FillUnit.CAPACITY_TO_NETWORK_BITS[1] = 12
FillUnit.CAPACITY_TO_NETWORK_BITS[2048] = 16
FillUnit.UNIT = {CUBICMETER = {conversionFunc = function(v0)
  return MathUtil.round(v0 * 0.001, 1)
end, l10n = "unit_cubicShort"}, LITER = {conversionFunc = function(v0)
  return v0
end, l10n = "unit_literShort"}}
function FillUnit.initSpecialization()
  Vehicle.registerStateChange("FILLTYPE_CHANGE")
  local v3 = v3:getText("configuration_fillUnit")
  v0:addConfigurationType("fillUnit", v3, "fillUnit", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addSpecType("capacity", "shopListAttributeIconCapacity", FillUnit.loadSpecValueCapacity, FillUnit.getSpecValueCapacity, "vehicle", {"fillUnit"})
  v0:addSpecType("fillTypes", "shopListAttributeIconFillTypes", FillUnit.loadSpecValueFillTypes, FillUnit.getSpecValueFillTypes, "vehicle", {"fillUnit"})
  Vehicle.xmlSchema:setXMLSpecializationType("FillUnit")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.fillTypes", "Fill types")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.fillTypeCategories", "Fill type categories")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.capacity", "Capacity")
  FillUnit.registerUnitDisplaySchema(Vehicle.xmlSchema, "vehicle.storeData.specs.capacity")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#removeVehicleIfEmpty", "Remove vehicle if unit empty", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#removeVehicleThreshold", "Remove vehicle if empty threshold in liters", 0.3)
  Vehicle.xmlSchema:register(XMLValueType.TIME, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#removeVehicleDelay", "Delay for vehicle removal (e.g. can be used while sounds are still playing)", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#allowFoldingWhileFilled", "Allow folding while filled", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#allowFoldingThreshold", "Allow folding threshold", 0.0001)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits#fillTypeChangeThreshold", "Fill type overwrite threshold", 0.05)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.fillTrigger#litersPerSecond", "Fill liters per second", 200)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.fillTrigger#consumePtoPower", "Consume pto power while filling", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#capacity", "Capacity", "unlimited")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#updateMass", "Update vehicle mass while fill level changes", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#canBeUnloaded", "Can be unloaded", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#allowFoldingThreshold", "Allow folding threshold", "Value of fillUnits#allowFoldingThreshold")
  FillUnit.registerUnitDisplaySchema(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#showCapacityInShop", "Show capacity in shop", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#showInShop", "Show in shop", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".exactFillRootNode#node", "Exact fill root node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".exactFillRootNode#extraEffectDistance", "Exact fill root node extra distance", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".autoAimTargetNode#node", "Auto aim target node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".autoAimTargetNode#startZ", "Start Z translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".autoAimTargetNode#endZ", "End Z translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".autoAimTargetNode#startPercentage", "Start move percentage")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. ".autoAimTargetNode#invert", "Invert Z movement")
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. "#fillTypeCategories", "Supported fill type categories")
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. "#fillTypes", "Supported fill types")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#startFillLevel", "Start fill level")
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. "#startFillType", "Start fill type")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".fillRootNode#node", "Fill root node", "first component")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".fillMassNode#node", "Fill root node", "first component")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#updateFillLevelMass", "Update fill level mass", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#ignoreFillLimit", "Ignores limiting of filling if the max mass is reached (if the settings is turned on)", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#synchronizeFillLevel", "Synchronize fill level", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#synchronizeFullFillLevel", "Synchronize fill level as 32bit float instead of percentage with max. 16 bits", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, FillUnit.FILL_UNIT_XML_KEY .. "#synchronizationNumBits", "Synchronization bits")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#showOnHud", "Show on HUD", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#showOnInfoHud", "Show on Info HUD", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, FillUnit.FILL_UNIT_XML_KEY .. "#uiPrecision", "Precision in UI display", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. "#blocksAutomatedTrainTravel", "Block automated train travel if not empty", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. "#fillAnimation", "Fill animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#fillAnimationLoadTime", "Fill animation load time")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#fillAnimationEmptyTime", "Fill animation empty time")
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. ".fillLevelAnimation#name", "Fill level animation name (Animation time is set depending on fill level percentage)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. ".fillLevelAnimation#resetOnEmpty", "Update animation when fill level reaches zero", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)#minFillLevel", "Fill animation empty time")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)#maxFillLevel", "Fill animation empty time")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)#needsTurnOn", "Needs turn on", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)#turnOffInTrigger", "Turn off in trigger", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY .. ".alarmTriggers.alarmTrigger(?)", "alarmSound")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".measurementNodes.measurementNode(?)#node", "Measurement node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?)#node", "Fill plane node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?).key(?)#time", "Key time")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?).key(?)#translation", "Translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?).key(?)#y", "Y Translation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?).key(?)#rotation", "Rotation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_SCALE, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?).key(?)#scale", "Scale")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?)#minMaxY", "Min. and max. Y translation")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane.node(?)#alwaysVisible", "Is always visible", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. ".fillPlane#defaultFillType", "Default fill type name")
  Vehicle.xmlSchema:register(XMLValueType.STRING, FillUnit.FILL_UNIT_XML_KEY .. ".fillTypeMaterials.material(?)#fillType", "Fill type name")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".fillTypeMaterials.material(?)#node", "Node which receives material")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_XML_KEY .. ".fillTypeMaterials.material(?)#refNode", "Node which provides material")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY .. ".fillEffect")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY .. ".animationNodes")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY, "fillLevel | fillLevelPct | fillLevelWarning")
  Dashboard.registerDashboardWarningXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.unloading(?)#node", "Unloading node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.unloading(?)#width", "Unloading width", 15)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.unloading(?)#offset", "Unloading offset", "0 0 0")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.fillEffect")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_CONFIG_XML_KEY .. ".fillUnits.animationNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.fillUnit.sounds", "fill")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, FillUnit.FILL_UNIT_CONFIG_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.INT, Leveler.LEVELER_NODE_XML_KEY .. "#fillUnitIndex", "Reference fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#minFillLevel", "Min. fill level to activate leveler node (pct between 0 and 1)", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#maxFillLevel", "Max. fill level to activate leveler node (pct between 0 and 1)", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).fillUnit.unit(?)#index", "Fill Unit index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).fillUnit.unit(?)#fillType", "Fill type")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).fillUnit.unit(?)#fillLevel", "Fill level")
end
function FillUnit:registerUnitDisplaySchema(v1)
  self:register(XMLValueType.STRING, v1 .. "#shopDisplayUnit", "Unit used for displaying the capacity in shop (converts to given unit from capacity in liters)", "LITER")
  self:register(XMLValueType.STRING, v1 .. "#unitTextOverride", "Unit text override, no conversion performed on given capacity")
end
function FillUnit.prerequisitesPresent(specializations)
  return true
end
function FillUnit.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onFillUnitFillLevelChanged")
  SpecializationUtil.registerEvent(vehicleType, "onChangedFillType")
  SpecializationUtil.registerEvent(vehicleType, "onAlarmTriggerChanged")
  SpecializationUtil.registerEvent(vehicleType, "onAddedFillUnitTrigger")
  SpecializationUtil.registerEvent(vehicleType, "onFillUnitTriggerChanged")
  SpecializationUtil.registerEvent(vehicleType, "onRemovedFillUnitTrigger")
  SpecializationUtil.registerEvent(vehicleType, "onFillUnitIsFillingStateChanged")
end
function FillUnit.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getDrawFirstFillText", FillUnit.getDrawFirstFillText)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnits", FillUnit.getFillUnits)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitByIndex", FillUnit.getFillUnitByIndex)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitExists", FillUnit.getFillUnitExists)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitCapacity", FillUnit.getFillUnitCapacity)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFreeCapacity", FillUnit.getFillUnitFreeCapacity)
  SpecializationUtil.registerFunction(vehicleType, "getIsFillAllowedFromFarm", FillUnit.getIsFillAllowedFromFarm)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFillLevel", FillUnit.getFillUnitFillLevel)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFillLevelPercentage", FillUnit.getFillUnitFillLevelPercentage)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFillType", FillUnit.getFillUnitFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitLastValidFillType", FillUnit.getFillUnitLastValidFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFirstSupportedFillType", FillUnit.getFillUnitFirstSupportedFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitExactFillRootNode", FillUnit.getFillUnitExactFillRootNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitRootNode", FillUnit.getFillUnitRootNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitAutoAimTargetNode", FillUnit.getFillUnitAutoAimTargetNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitSupportsFillType", FillUnit.getFillUnitSupportsFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitSupportsToolType", FillUnit.getFillUnitSupportsToolType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitSupportsToolTypeAndFillType", FillUnit.getFillUnitSupportsToolTypeAndFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitSupportedFillTypes", FillUnit.getFillUnitSupportedFillTypes)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitSupportedToolTypes", FillUnit.getFillUnitSupportedToolTypes)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitAllowsFillType", FillUnit.getFillUnitAllowsFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillTypeChangeThreshold", FillUnit.getFillTypeChangeThreshold)
  SpecializationUtil.registerFunction(vehicleType, "getFirstValidFillUnitToFill", FillUnit.getFirstValidFillUnitToFill)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitFillType", FillUnit.setFillUnitFillType)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitFillTypeToDisplay", FillUnit.setFillUnitFillTypeToDisplay)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitFillLevelToDisplay", FillUnit.setFillUnitFillLevelToDisplay)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitCapacity", FillUnit.setFillUnitCapacity)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitForcedMaterialFillType", FillUnit.setFillUnitForcedMaterialFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitForcedMaterialFillType", FillUnit.getFillUnitForcedMaterialFillType)
  SpecializationUtil.registerFunction(vehicleType, "updateAlarmTriggers", FillUnit.updateAlarmTriggers)
  SpecializationUtil.registerFunction(vehicleType, "getAlarmTriggerIsActive", FillUnit.getAlarmTriggerIsActive)
  SpecializationUtil.registerFunction(vehicleType, "setAlarmTriggerState", FillUnit.setAlarmTriggerState)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitIndexFromNode", FillUnit.getFillUnitIndexFromNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitExtraDistanceFromNode", FillUnit.getFillUnitExtraDistanceFromNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillUnitFromNode", FillUnit.getFillUnitFromNode)
  SpecializationUtil.registerFunction(vehicleType, "addFillUnitFillLevel", FillUnit.addFillUnitFillLevel)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitLastValidFillType", FillUnit.setFillUnitLastValidFillType)
  SpecializationUtil.registerFunction(vehicleType, "loadFillUnitFromXML", FillUnit.loadFillUnitFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadAlarmTrigger", FillUnit.loadAlarmTrigger)
  SpecializationUtil.registerFunction(vehicleType, "loadMeasurementNode", FillUnit.loadMeasurementNode)
  SpecializationUtil.registerFunction(vehicleType, "updateMeasurementNodes", FillUnit.updateMeasurementNodes)
  SpecializationUtil.registerFunction(vehicleType, "loadFillPlane", FillUnit.loadFillPlane)
  SpecializationUtil.registerFunction(vehicleType, "setFillPlaneForcedFillType", FillUnit.setFillPlaneForcedFillType)
  SpecializationUtil.registerFunction(vehicleType, "updateFillUnitFillPlane", FillUnit.updateFillUnitFillPlane)
  SpecializationUtil.registerFunction(vehicleType, "loadFillTypeMaterials", FillUnit.loadFillTypeMaterials)
  SpecializationUtil.registerFunction(vehicleType, "updateFillTypeMaterials", FillUnit.updateFillTypeMaterials)
  SpecializationUtil.registerFunction(vehicleType, "updateFillUnitAutoAimTarget", FillUnit.updateFillUnitAutoAimTarget)
  SpecializationUtil.registerFunction(vehicleType, "addFillUnitTrigger", FillUnit.addFillUnitTrigger)
  SpecializationUtil.registerFunction(vehicleType, "removeFillUnitTrigger", FillUnit.removeFillUnitTrigger)
  SpecializationUtil.registerFunction(vehicleType, "setFillUnitIsFilling", FillUnit.setFillUnitIsFilling)
  SpecializationUtil.registerFunction(vehicleType, "setFillSoundIsPlaying", FillUnit.setFillSoundIsPlaying)
  SpecializationUtil.registerFunction(vehicleType, "getIsFillUnitActive", FillUnit.getIsFillUnitActive)
  SpecializationUtil.registerFunction(vehicleType, "updateFillUnitTriggers", FillUnit.updateFillUnitTriggers)
  SpecializationUtil.registerFunction(vehicleType, "emptyAllFillUnits", FillUnit.emptyAllFillUnits)
  SpecializationUtil.registerFunction(vehicleType, "unloadFillUnits", FillUnit.unloadFillUnits)
  SpecializationUtil.registerFunction(vehicleType, "loadFillUnitUnloadingFromXML", FillUnit.loadFillUnitUnloadingFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getAllowLoadTriggerActivation", FillUnit.getAllowLoadTriggerActivation)
  SpecializationUtil.registerFunction(vehicleType, "debugGetSupportedFillTypesPerFillUnit", FillUnit.debugGetSupportedFillTypesPerFillUnit)
end
function FillUnit.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalComponentMass", FillUnit.getAdditionalComponentMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", FillUnit.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", FillUnit.removeNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillLevelInformation", FillUnit.getFillLevelInformation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", FillUnit.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsReadyForAutomatedTrainTravel", FillUnit.getIsReadyForAutomatedTrainTravel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadMovingToolFromXML", FillUnit.loadMovingToolFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMovingToolActive", FillUnit.getIsMovingToolActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", FillUnit.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowerTakeOffActive", FillUnit.getIsPowerTakeOffActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", FillUnit.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "showInfo", FillUnit.showInfo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadLevelerNodeFromXML", FillUnit.loadLevelerNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLevelerPickupNodeActive", FillUnit.getIsLevelerPickupNodeActive)
end
function FillUnit.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", FillUnit)
  SpecializationUtil.registerEventListener(vehicleType, "onDischargeTargetObjectChanged", FillUnit)
end
function FillUnit:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.measurementNodes.measurementNode", "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration.fillUnits.fillUnit.measurementNodes.measurementNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.fillPlanes.fillPlane", "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration.fillUnits.fillUnit.fillPlane")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldable.foldingParts#onlyFoldOnEmpty", "vehicle.fillUnit#allowFoldingWhileFilled")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.fillAutoAimTargetNode", "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration.fillUnits.fillUnit.autoAimTargetNode")
  local fillUnitConfigurationId = Utils.getNoNil(self.configurations.fillUnit, 1)
  local baseKey = string.format("vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration(%d).fillUnits", fillUnitConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration", fillUnitConfigurationId, self.components, self)
  local v5 = v5:getValue(baseKey .. "#removeVehicleIfEmpty", false)
  self.spec_fillUnit.removeVehicleIfEmpty = v5
  v5 = v5:getValue(baseKey .. "#removeVehicleThreshold", 0.3)
  self.spec_fillUnit.removeVehicleThreshold = v5
  v5 = v5:getValue(baseKey .. "#removeVehicleDelay", 0)
  self.spec_fillUnit.removeVehicleDelay = v5
  v5 = v5:getValue(baseKey .. "#allowFoldingWhileFilled", true)
  self.spec_fillUnit.allowFoldingWhileFilled = v5
  v5 = v5:getValue(baseKey .. "#allowFoldingThreshold", 0.0001)
  self.spec_fillUnit.allowFoldingThreshold = v5
  v5 = v5:getValue(baseKey .. "#fillTypeChangeThreshold", 0.05)
  self.spec_fillUnit.fillTypeChangeThreshold = v5
  self.spec_fillUnit.fillUnits = {}
  self.spec_fillUnit.exactFillRootNodeToFillUnit = {}
  self.spec_fillUnit.exactFillRootNodeToExtraDistance = {}
  self.spec_fillUnit.hasExactFillRootNodes = false
  self.spec_fillUnit.activeAlarmTriggers = {}
  self.spec_fillUnit.fillTrigger = {triggers = {}}
  local v6 = FillActivatable.new(self)
  self.spec_fillUnit.fillTrigger.activatable = v6
  self.spec_fillUnit.fillTrigger.isFilling = false
  self.spec_fillUnit.fillTrigger.currentTrigger = nil
  self.spec_fillUnit.fillTrigger.selectedTrigger = nil
  v6 = v6:getValue(baseKey .. ".fillTrigger#litersPerSecond", 200)
  self.spec_fillUnit.fillTrigger.litersPerSecond = v6
  v6 = v6:getValue(baseKey .. ".fillTrigger#consumePtoPower", false)
  self.spec_fillUnit.fillTrigger.consumePtoPower = v6
  while true do
    v6 = string.format("%s.fillUnit(%d)", baseKey, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadFillUnitFromXML(self.xmlFile, v6, {}, v5 + 1)
    if v8 then
      table.insert(v2.fillUnits, {})
    else
      Logging.xmlWarning(self.xmlFile, "Could not load fillUnit for '%s'", v6)
      self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
      break
    end
  end
  v6 = v6:hasProperty(baseKey .. ".unloading")
  if v6 then
    v2.unloading = {}
    v6:iterate(baseKey .. ".unloading", function(self, savegame)
      local fillUnitConfigurationId = fillUnitConfigurationId:loadFillUnitUnloadingFromXML(u0.xmlFile, savegame, {}, u1 + 1)
      if fillUnitConfigurationId then
        table.insert(u2.unloading, {})
        return
      end
      Logging.xmlWarning(u0.xmlFile, "Could not load unloading node for '%s'", savegame)
      return false
    end)
  end
  if self.isClient then
    v2.samples = {}
    v7 = v7:loadSampleFromXML(self.xmlFile, "vehicle.fillUnit.sounds", "fill", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.fill = v7
    v6 = v6:loadEffect(self.xmlFile, baseKey .. ".fillEffect", self.components, self, self.i3dMappings)
    v2.fillEffects = v6
    v6 = v6:loadAnimations(self.xmlFile, baseKey .. ".animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v6
    v2.activeFillEffects = {}
    v2.activeFillAnimations = {}
  end
  v2.texts = {}
  v7 = v7:getText("warning_foldingNotWhileFilled")
  v2.texts.warningFoldingFilled = v7
  v7 = v7:getText("info_firstFillTheTool")
  v2.texts.firstFillTheTool = v7
  v7 = v7:getText("fillUnit_unload_nospace")
  v2.texts.unloadNoSpace = v7
  v7 = v7:getText("action_stopRefillingOBJECT")
  v2.texts.stopRefill = v7
  v7 = v7:getText("action_refillOBJECT")
  v2.texts.startRefill = v7
  v2.isInfoDirty = false
  v2.fillUnitInfos = {}
  v6 = self:getNextDirtyFlag()
  v2.dirtyFlag = v6
end
function FillUnit:onPostLoad(savegame)
  if self.isServer then
    for v7, v8 in ipairs(self.spec_fillUnit.fillUnits) do
      if not (v8.startFillLevel == nil) then
        continue
      end
      if not (v8.startFillTypeIndex == nil) then
        continue
      end
      v3[v7] = v8
    end
    if savegame ~= nil then
      v4 = v4:hasProperty(savegame.key .. ".fillUnit")
      -- if not v4 then goto L119 end
      while true do
        v6 = string.format("%s.fillUnit.unit(%d)", savegame.key, v4)
        v7 = v5:hasProperty(v6)
        -- if not v7 then goto L161 end
        v7 = v5:getValue(v6 .. "#index")
        if v3[v7] ~= nil and v3[v7] ~= nil then
        end
        if v8 then
          v9 = v5:getValue(v6 .. "#fillType")
          v10 = v5:getValue(v6 .. "#fillLevel")
          v11 = v11:getFillTypeIndexByName(v9)
          v14 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v14, v7, v10, v11, ToolType.UNDEFINED, nil)
          if v2.fillUnits[v7] ~= nil and v2.fillUnits[v7].fillLevelAnimationName ~= nil then
            AnimatedVehicle.updateAnimationByName(self, v2.fillUnits[v7].fillLevelAnimationName, 9999999, true)
          end
        end
      end
    else
      for v7, v8 in pairs(v2.fillUnits) do
        if not (v8.startFillLevel ~= nil) then
          continue
        end
        if not (v8.startFillTypeIndex ~= nil) then
          continue
        end
        v11 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v11, v7, v8.startFillLevel, v8.startFillTypeIndex, ToolType.UNDEFINED, nil)
        if not (v8.fillLevelAnimationName ~= nil) then
          continue
        end
        AnimatedVehicle.updateAnimationByName(self, v8.fillLevelAnimationName, 9999999, true)
      end
    end
    for v7, v8 in ipairs(v2.fillUnits) do
      self:updateAlarmTriggers(v8.alarmTriggers)
    end
  end
  if #v2.fillUnits == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", FillUnit)
    SpecializationUtil.removeEventListener(self, "onWriteStream", FillUnit)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", FillUnit)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", FillUnit)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", FillUnit)
    SpecializationUtil.removeEventListener(self, "onDraw", FillUnit)
    SpecializationUtil.removeEventListener(self, "onDeactivate", FillUnit)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", FillUnit)
  end
end
function FillUnit:onDelete()
  if self.spec_fillUnit.fillTrigger ~= nil then
    v2:removeActivatable(self.spec_fillUnit.fillTrigger.activatable)
    for v5, v6 in pairs(self.spec_fillUnit.fillTrigger.triggers) do
      v6:onVehicleDeleted(self)
    end
  end
  if v1.fillUnits ~= nil then
    for v5, v6 in ipairs(v1.fillUnits) do
      for v10, v11 in ipairs(v6.alarmTriggers) do
        v12:deleteSample(v11.sample)
      end
    end
  end
  v2:deleteSamples(v1.samples)
  if v1.unloadTrigger ~= nil then
    v2:delete()
  end
  if v1.loadTrigger ~= nil then
    v2:delete()
  end
end
function FillUnit:saveToXMLFile(xmlFile, key, usedModNames)
  for v9, v10 in ipairs(self.spec_fillUnit.fillUnits) do
    if not v10.needsSaving then
      continue
    end
    local v11 = string.format("%s.unit(%d)", key, v5)
    local v13 = v13:getFillTypeNameByIndex(v10.fillType)
    local v12 = Utils.getNoNil(v13, "unknown")
    xmlFile:setValue(v11 .. "#index", v9)
    xmlFile:setValue(v11 .. "#fillType", v12)
    xmlFile:setValue(v11 .. "#fillLevel", v10.fillLevel)
  end
end
function FillUnit:saveStatsToXMLFile(xmlFile, key)
  local v6 = table.getn(self.spec_fillUnit.fillUnits)
  for v10, v11 in ipairs(self.spec_fillUnit.fillUnits) do
    local v13 = v13:getFillTypeNameByIndex(v11.fillType)
    local v12 = Utils.getNoNil(v13, "unknown")
    local v15 = tostring(v12)
    local v14 = HTMLUtil.encodeToHTML(...)
    v14 = string.format("%.3f", v11.fillLevel)
    if not (1 < v6) then
      continue
    end
    if not (v10 ~= v6) then
      continue
    end
  end
  setXMLString(xmlFile, key .. "#fillTypes", v4)
  setXMLString(xmlFile, key .. "#fillLevels", v5)
end
function FillUnit:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v6 = streamReadBool(streamId)
    self:setFillUnitIsFilling(v6, true)
    if self.spec_fillUnit.loadTrigger ~= nil then
      local v4 = streamReadInt32(streamId)
      v5:readStream(streamId, connection)
      v5:finishRegisterObject(self.loadTrigger, v4)
    end
    if v3.unloadTrigger ~= nil then
      v4 = streamReadInt32(streamId)
      v5:readStream(streamId, connection)
      v5:finishRegisterObject(self.unloadTrigger, v4)
    end
    local v7 = table.getn(v3.fillUnits)
    -- TODO: structure LOP_FORNPREP (pc 68, target 110)
    if v3.fillUnits[1].synchronizeFillLevel then
      v7 = streamReadFloat32(streamId)
      local v8 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      local v11 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v11, 1, v7, v8, ToolType.UNDEFINED, nil)
      local v9 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      self:setFillUnitLastValidFillType(1, v9, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 109, target 69)
  end
end
function FillUnit:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteBool(streamId, self.spec_fillUnit.fillTrigger.isFilling)
    if self.spec_fillUnit.loadTrigger ~= nil then
      local v6 = NetworkUtil.getObjectId(self.spec_fillUnit.loadTrigger)
      streamWriteInt32(...)
      v4:writeStream(streamId, connection)
      v4:registerObjectInStream(connection, self.spec_fillUnit.loadTrigger)
    end
    if v3.unloadTrigger ~= nil then
      v6 = NetworkUtil.getObjectId(v3.unloadTrigger)
      streamWriteInt32(...)
      v4:writeStream(streamId, connection)
      v4:registerObjectInStream(connection, v3.unloadTrigger)
    end
    local v7 = table.getn(v3.fillUnits)
    -- TODO: structure LOP_FORNPREP (pc 78, target 111)
    if v3.fillUnits[1].synchronizeFillLevel then
      streamWriteFloat32(streamId, v3.fillUnits[1].fillLevel)
      streamWriteUIntN(streamId, v3.fillUnits[1].fillType, FillTypeManager.SEND_NUM_BITS)
      streamWriteUIntN(streamId, v3.fillUnits[1].lastValidFillType, FillTypeManager.SEND_NUM_BITS)
    end
    -- TODO: structure LOP_FORNLOOP (pc 110, target 79)
  end
end
function FillUnit:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      local v8 = table.getn(self.spec_fillUnit.fillUnits)
      -- TODO: structure LOP_FORNPREP (pc 19, target 131)
      if self.spec_fillUnit.fillUnits[1].synchronizeFillLevel then
        if self.spec_fillUnit.fillUnits[1].synchronizeFullFillLevel then
          local v10 = streamReadFloat32(streamId)
        else
          local v13 = streamReadUIntN(streamId, self.spec_fillUnit.fillUnits[1].synchronizationNumBits)
        end
        v10 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        if v9 == v8.fillLevel then
          -- if v10 == v8.fillType then goto L113 end
        end
        local v11 = self:getFillUnitFillType(v7)
        if v10 == FillType.UNKNOWN then
          local v14 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v14, v7, -math.huge, v11, ToolType.UNDEFINED, nil)
        else
          if v11 ~= FillType.UNKNOWN and v10 ~= v11 then
            self:setFillUnitFillType(v7, v10)
          end
          v14 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v14, v7, v9 - v8.fillLevel, v10, ToolType.UNDEFINED, nil)
        end
        v11 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        if v11 == v8.lastValidFillType then
        end
        self:setFillUnitLastValidFillType(v14, v15, true)
      end
      -- TODO: structure LOP_FORNLOOP (pc 130, target 20)
    end
  end
end
function FillUnit:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_fillUnit.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      v8 = table.getn(v4.fillUnits)
      -- TODO: structure LOP_FORNPREP (pc 29, target 98)
      if v4.fillUnits[1].synchronizeFillLevel then
        if v4.fillUnits[1].synchronizeFullFillLevel then
          streamWriteFloat32(streamId, v4.fillUnits[1].fillLevelSent)
        else
          if 0 < v4.fillUnits[1].capacity then
            local v10 = MathUtil.clamp(v4.fillUnits[1].fillLevelSent / v4.fillUnits[1].capacity, 0, 1)
          end
          v10 = math.floor(v9 * (2 ^ v8.synchronizationNumBits - 1) + 0.5)
          streamWriteUIntN(streamId, v10, v8.synchronizationNumBits)
        end
        streamWriteUIntN(streamId, v8.fillTypeSent, FillTypeManager.SEND_NUM_BITS)
        streamWriteUIntN(streamId, v8.lastValidFillTypeSent, FillTypeManager.SEND_NUM_BITS)
      end
      -- TODO: structure LOP_FORNLOOP (pc 97, target 30)
    end
  end
end
function FillUnit:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_fillUnit.fillTrigger.isFilling then
    if self.spec_fillUnit.fillTrigger.currentTrigger ~= nil then
      local v8 = self.spec_fillUnit.fillTrigger.currentTrigger:fillVehicle(self, self.spec_fillUnit.fillTrigger.litersPerSecond * dt * 0.001, dt)
    end
    if v6 <= 0 then
      self:setFillUnitIsFilling(false)
    end
  end
  if self.isClient then
    for v9, v10 in pairs(v5.fillUnits) do
      self:updateMeasurementNodes(v10, dt, false)
    end
    self:updateAlarmTriggers(v5.activeAlarmTriggers)
    for v10, v11 in pairs(v5.activeFillEffects) do
      if v11 - dt < 0 then
        v12:stopEffects(v10)
        v5.activeFillEffects[v10] = nil
      else
        v5.activeFillEffects[v10] = v11 - dt
      end
    end
    for v10, v11 in pairs(v5.activeFillAnimations) do
      if v11 - dt < 0 then
        v12:stopAnimations(v10)
        v5.activeFillAnimations[v10] = nil
      else
        v5.activeFillAnimations[v10] = v11 - dt
      end
    end
    if v6 then
      self:raiseActive()
    end
  end
end
function FillUnit:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v4 = self:getDrawFirstFillText()
  if v4 then
    v5:addExtraPrintText(self.spec_fillUnit.texts.firstFillTheTool)
  end
end
function FillUnit:onDeactivate()
  if self.spec_fillUnit.fillTrigger.isFilling then
    self:setFillUnitIsFilling(false, true)
  end
  for v5, v6 in pairs(v1.fillUnits) do
    self:updateMeasurementNodes(v6, 0, false, 0)
  end
end
function FillUnit:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_fillUnit.actionEvents)
    if isActiveForInputIgnoreSelection then
      if self.isServer and GS_IS_CONSOLE_VERSION and g_isDevelopmentVersion then
        local v4, v5 = self:addActionEvent(self.spec_fillUnit.actionEvents, InputAction.CONSOLE_DEBUG_FILLUNIT_NEXT, self, FillUnit.actionEventConsoleFillUnitNext, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v5, false)
        v6:setActionEventTextPriority(v5, GS_PRIO_VERY_LOW)
        local v6, v7 = self:addActionEvent(self.spec_fillUnit.actionEvents, InputAction.CONSOLE_DEBUG_FILLUNIT_INC, self, FillUnit.actionEventConsoleFillUnitInc, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6:setActionEventTextPriority(v7, GS_PRIO_VERY_LOW)
        v6, v7 = self:addActionEvent(self.spec_fillUnit.actionEvents, InputAction.CONSOLE_DEBUG_FILLUNIT_DEC, self, FillUnit.actionEventConsoleFillUnitDec, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6:setActionEventTextPriority(v7, GS_PRIO_VERY_LOW)
      end
      if v3.unloading ~= nil then
        v4, v5 = self:addActionEvent(v3.actionEvents, InputAction.UNLOAD, self, FillUnit.actionEventUnload, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
        v3.unloadActionEventId = v5
        FillUnit.updateUnloadActionDisplay(self)
      end
    end
  end
end
function FillUnit.onDischargeTargetObjectChanged(v0, v1)
  FillUnit.updateUnloadActionDisplay(v0)
end
function FillUnit.getDrawFirstFillText(v0)
  return false
end
function FillUnit:getFillUnits()
  return self.spec_fillUnit.fillUnits
end
function FillUnit:getFillUnitByIndex(fillUnitIndex)
  local v3 = self:getFillUnitExists(fillUnitIndex)
  if v3 then
    return self.spec_fillUnit.fillUnits[fillUnitIndex]
  end
  return nil
end
function FillUnit:getFillUnitExists(fillUnitIndex)
  if fillUnitIndex ~= nil and self.spec_fillUnit.fillUnits[fillUnitIndex] == nil then
  end
  return v3
end
function FillUnit:getFillUnitCapacity(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].capacity
  end
  return nil
end
function FillUnit:getFillUnitFreeCapacity(fillUnitIndex, fillTypeIndex, farmId)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    if not self.spec_fillUnit.fillUnits[fillUnitIndex].ignoreFillLimit and g_currentMission.missionInfo.trailerFillLimit then
      local v7 = self:getMaxComponentMassReached()
      if v7 then
        return 0
      end
    end
    return v6
  end
  return nil
end
function FillUnit.getIsFillAllowedFromFarm(v0, v1)
  return true
end
function FillUnit:getFillUnitFillLevel(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].fillLevel
  end
  return nil
end
function FillUnit:getFillUnitFillLevelPercentage(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    if 0 < self.spec_fillUnit.fillUnits[fillUnitIndex].capacity then
      return self.spec_fillUnit.fillUnits[fillUnitIndex].fillLevel / self.spec_fillUnit.fillUnits[fillUnitIndex].capacity
    end
    return 0
  end
  return nil
end
function FillUnit:getFillUnitFillType(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].fillType
  end
  return nil
end
function FillUnit:getFillUnitLastValidFillType(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].lastValidFillType
  end
  return nil
end
function FillUnit:getFillUnitFirstSupportedFillType(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return next(self.spec_fillUnit.fillUnits[fillUnitIndex].supportedFillTypes)
  end
  return nil
end
function FillUnit:getFillUnitExactFillRootNode(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].exactFillRootNode
  end
  return nil
end
function FillUnit:getFillUnitRootNode(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].fillRootNode
  end
  return nil
end
function FillUnit:getFillUnitAutoAimTargetNode(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].autoAimTarget.node
  end
  return nil
end
function FillUnit:getFillUnitSupportsFillType(fillUnitIndex, fillType)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].supportedFillTypes[fillType]
  end
  return false
end
function FillUnit:getFillUnitSupportsToolType(fillUnitIndex, toolType)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].supportedToolTypes[toolType]
  end
  return false
end
function FillUnit:getFillUnitSupportsToolTypeAndFillType(fillUnitIndex, toolType, fillType)
  local v4 = self:getFillUnitSupportsToolType(fillUnitIndex, toolType)
  if v4 then
    v4 = self:getFillUnitSupportsFillType(fillUnitIndex, fillType)
  end
  return v4
end
function FillUnit:getFillUnitSupportedFillTypes(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].supportedFillTypes
  end
  return nil
end
function FillUnit:getFillUnitSupportedToolTypes(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].supportedToolTypes
  end
  return nil
end
function FillUnit:getFillUnitAllowsFillType(fillUnitIndex, fillType)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    local v4 = self:getFillUnitSupportsFillType(fillUnitIndex, fillType)
    if v4 then
      if fillType == self.spec_fillUnit.fillUnits[fillUnitIndex].fillType then
        return true
      end
      local v7 = math.max(v3.fillUnits[fillUnitIndex].capacity, 0.0001)
      local v6 = self:getFillTypeChangeThreshold()
      if v3.fillUnits[fillUnitIndex].fillLevel / v7 > v6 then
      end
      return true
    end
  end
  return false
end
function FillUnit:getFillTypeChangeThreshold(fillUnitIndex)
  if fillUnitIndex == nil then
    return self.spec_fillUnit.fillTypeChangeThreshold
  end
  local v3 = self:getFillUnitCapacity(fillUnitIndex)
  return (v3 or 1) * self.spec_fillUnit.fillTypeChangeThreshold
end
function FillUnit:getFirstValidFillUnitToFill(fillType, ignoreCapacity)
  for v7, v8 in ipairs(self.spec_fillUnit.fillUnits) do
    local v9 = self:getFillUnitAllowsFillType(v7, fillType)
    if not v9 then
      continue
    end
    v9 = self:getFillUnitFreeCapacity(v7)
    if 0 >= v9 then
      if not (ignoreCapacity ~= nil) then
        continue
      end
      if not ignoreCapacity then
        continue
      end
    end
    return v7
  end
  return nil
end
function FillUnit:setFillUnitFillType(fillUnitIndex, fillTypeIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex].fillType ~= fillTypeIndex then
    self.spec_fillUnit.fillUnits[fillUnitIndex].fillType = fillTypeIndex
    SpecializationUtil.raiseEvent(self, "onChangedFillType", fillUnitIndex, fillTypeIndex, self.spec_fillUnit.fillUnits[fillUnitIndex].fillType)
  end
end
function FillUnit:setFillUnitFillTypeToDisplay(fillUnitIndex, fillTypeIndex, isPersistent)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    self.spec_fillUnit.fillUnits[fillUnitIndex].fillTypeToDisplay = fillTypeIndex
    if isPersistent ~= nil then
    end
    v5.fillTypeToDisplayIsPersistent = v6
  end
end
function FillUnit:setFillUnitFillLevelToDisplay(fillUnitIndex, fillLevel, isPersistent)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    self.spec_fillUnit.fillUnits[fillUnitIndex].fillLevelToDisplay = fillLevel
    if isPersistent ~= nil then
    end
    v5.fillLevelToDisplayIsPersistent = v6
  end
end
function FillUnit:setFillUnitCapacity(fillUnitIndex, capacity, noEventSend)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil and capacity ~= self.spec_fillUnit.fillUnits[fillUnitIndex].capacity then
    self.spec_fillUnit.fillUnits[fillUnitIndex].capacity = capacity
    SetFillUnitCapacityEvent.sendEvent(self, fillUnitIndex, capacity, noEventSend)
  end
end
function FillUnit:setFillUnitForcedMaterialFillType(fillUnitIndex, forcedMaterialFillType)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    self.spec_fillUnit.fillUnits[fillUnitIndex].forcedMaterialFillType = forcedMaterialFillType
  end
  self:setFillPlaneForcedFillType(fillUnitIndex, forcedMaterialFillType)
  if self.setFillVolumeForcedFillTypeByFillUnitIndex ~= nil then
    self:setFillVolumeForcedFillTypeByFillUnitIndex(fillUnitIndex, forcedMaterialFillType)
  end
end
function FillUnit:getFillUnitForcedMaterialFillType(fillUnitIndex)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil then
    return self.spec_fillUnit.fillUnits[fillUnitIndex].forcedMaterialFillType
  end
  return FillType.UNKNOWN
end
function FillUnit:updateAlarmTriggers(alarmTriggers)
  for v5, v6 in pairs(alarmTriggers) do
    local v10 = self:getAlarmTriggerIsActive(v6)
    self:setAlarmTriggerState(...)
  end
end
function FillUnit.getAlarmTriggerIsActive(v0, v1)
  if v1.minFillLevel <= v1.fillUnit.fillLevel / v1.fillUnit.capacity and v1.fillUnit.fillLevel / v1.fillUnit.capacity <= v1.maxFillLevel then
  end
  return v2
end
function FillUnit:setAlarmTriggerState(alarmTrigger, state)
  if state ~= alarmTrigger.isActive then
    if state then
      if alarmTrigger.sample ~= nil then
        v4:playSample(alarmTrigger.sample)
      end
      v3.activeAlarmTriggers[alarmTrigger] = alarmTrigger
    else
      if alarmTrigger.sample ~= nil then
        v4:stopSample(alarmTrigger.sample)
      end
      v3.activeAlarmTriggers[alarmTrigger] = nil
    end
    alarmTrigger.isActive = state
    SpecializationUtil.raiseEvent(self, "onAlarmTriggerChanged", alarmTrigger, state)
  end
end
function FillUnit:getFillUnitIndexFromNode(node)
  if self.spec_fillUnit.exactFillRootNodeToFillUnit[node] ~= nil then
    return self.spec_fillUnit.exactFillRootNodeToFillUnit[node].fillUnitIndex
  end
  return nil
end
function FillUnit:getFillUnitExtraDistanceFromNode(node)
  return self.spec_fillUnit.exactFillRootNodeToExtraDistance[node] or 0
end
function FillUnit:getFillUnitFromNode(node)
  return self.spec_fillUnit.exactFillRootNodeToFillUnit[node]
end
function FillUnit:emptyAllFillUnits(ignoreDeleteOnEmptyFlag)
  if ignoreDeleteOnEmptyFlag then
    self.spec_fillUnit.removeVehicleIfEmpty = false
  end
  local v5 = self:getFillUnits()
  for v7, v8 in ipairs(...) do
    local v9 = self:getFillUnitFillType(v7)
    local v12 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v12, v7, -math.huge, v9, ToolType.UNDEFINED, nil)
  end
  v2.removeVehicleIfEmpty = v3
end
function FillUnit:loadFillUnitUnloadingFromXML(xmlFile, key, entry, index)
  local v5 = xmlFile:getValue(key .. "#node", self.rootNode, self.components, self.i3dMappings)
  entry.node = v5
  v5 = xmlFile:getValue(key .. "#width", 15)
  entry.width = v5
  v5 = xmlFile:getValue(key .. "#offset", "0 0 0", true)
  entry.offset = v5
  return true
end
function FillUnit:getAllowLoadTriggerActivation(rootVehicle)
  local v2 = v2:getCanBeFilledByTrigger(self)
  if not v2 then
    return false
  end
  if self.rootVehicle == g_currentMission.controlledVehicle then
    return true
  end
  return false
end
function FillUnit:unloadFillUnits(ignoreWarning)
  if not self.isServer then
    local v2 = v2:getServerConnection()
    local v4 = FillUnitUnloadEvent.new(self)
    v2:sendEvent(...)
    return
  end
  if self.spec_fillUnit.unloadingFillUnitsRunning then
    return
  end
  for v8, v9 in ipairs(v2.unloading) do
    local v11, v12, v13 = unpack(v9.offset)
    local v14, v15, v16 = localToWorld(v9.node, v11 - v9.width * 0.5, v12, v13)
    local v18, v19, v20 = getWorldRotation(v9.node)
    v18, v19, v20 = localDirectionToWorld(v9.node, 1, 0, 0)
    v18, v19, v20 = localDirectionToWorld(v9.node, 0, 0, 1)
    table.insert(v4, {startX = v14, startY = v15, startZ = v16, rotX = v18, rotY = v19, rotZ = v20, dirX = v18, dirY = v19, dirZ = v20, dirPerpX = v18, dirPerpY = v19, dirPerpZ = v20, yOffset = 1, maxWidth = math.huge, maxLength = math.huge, maxHeight = math.huge, width = v9.width})
  end
  local v10 = self:getFillUnits()
  for v12, v13 in ipairs(...) do
    v14 = self:getFillUnitFillLevel(v12)
    v15 = self:getFillUnitFillType(v12)
    v16 = v16:getFillTypeByIndex(v15)
    if not v13.canBeUnloaded then
      continue
    end
    if not (0 < v14) then
      continue
    end
    if not (v16.palletFilename ~= nil) then
      continue
    end
    table.insert(v8, {fillUnitIndex = v12, fillTypeIndex = v15, fillLevel = v14, filename = v16.palletFilename})
  end
  function()
    if u0[1] ~= nil then
      for v4, v5 in pairs(u1) do
        local v6 = v4:getFirstValidFillUnitToFill(self.fillTypeIndex)
        if not (v6 ~= nil) then
          continue
        end
        local v9 = v9:getOwnerFarmId()
        local v7 = v4:addFillUnitFillLevel(v9, v6, self.fillLevel, self.fillTypeIndex, ToolType.UNDEFINED, nil)
        local v10 = v10:getOwnerFarmId()
        v8:addFillUnitFillLevel(v10, self.fillUnitIndex, -v7, self.fillTypeIndex, ToolType.UNDEFINED, nil)
        self.fillLevel = self.fillLevel - v7
        local v8 = v4:getFillUnitFreeCapacity(v6)
        if not (v8 <= 0) then
          continue
        end
        u1[v4] = nil
      end
      if 0 < self.fillLevel then
        v2 = StoreItemUtil.getSizeValues(self.filename, "vehicle", 0, {})
        v3, v4, v5, v6, v7, v8 = PlacementUtil.getPlace(u4, v2, u5, true, true, true)
        if v3 == nil then
          u6 = false
          if u7 ~= nil then
            -- if u7 then goto L113 end
          end
          if not u6 then
            v9:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_INFO, u8.texts.unloadNoSpace)
          end
          return
        end
        PlacementUtil.markPlaceUsed(u5, v6, v7)
        local v16 = v16:getOwnerFarmId()
        VehicleLoadingUtil.loadVehicle(self.filename, {x = v3, y = v4, z = v5, yRot = v6.rotY}, true, 0, Vehicle.PROPERTY_STATE_OWNED, v16, nil, nil, ignoreWarning, nil)
        return
      end
      table.remove(u0, 1)
      u3()
    end
  end()
end
function FillUnit:addFillUnitFillLevel(farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
  self.spec_fillUnit.isInfoDirty = true
  if fillLevelDelta < 0 then
    local v8 = v8:canFarmAccess(farmId, self, true)
    if not v8 then
      v8 = v8:getIsRunning()
      if not v8 then
        return 0
      end
    end
  end
  if self.getMountObject ~= nil then
    v8 = self:getDynamicMountObject()
    if not v8 then
      v8 = self:getMountObject()
    end
    if v8 ~= nil then
      local v11 = v8:getActiveFarm()
      local v9 = v9:canFarmAccess(v11, self, true)
      if not v9 then
        return 0
      end
    end
  end
  if v7.fillUnits[fillUnitIndex] ~= nil then
    if 0 < fillLevelDelta and not v7.fillUnits[fillUnitIndex].ignoreFillLimit and g_currentMission.missionInfo.trailerFillLimit then
      v9 = self:getMaxComponentMassReached()
      if v9 then
        return 0
      end
    end
    v9 = self:getFillUnitSupportsToolTypeAndFillType(fillUnitIndex, toolType, fillTypeIndex)
    if not v9 then
      return 0
    end
    if self.isServer and 0 < fillLevelDelta and not v8.ignoreFillLimit and g_currentMission.missionInfo.trailerFillLimit then
      v9 = self:getAvailableComponentMass()
      local v10 = v10:getFillTypeByIndex(fillTypeIndex)
      if v10 ~= nil then
        v11 = math.min(fillLevelDelta, v9 / v10.massPerLiter)
      end
    end
    if v8.capacity == 0 then
    end
    if v8.fillType == fillTypeIndex then
      local v14 = math.min(v10, v9 + fillLevelDelta)
      local v12 = math.max(...)
      v8.fillLevel = v12
    elseif 0 < fillLevelDelta then
      v12 = self:getFillUnitAllowsFillType(fillUnitIndex, fillTypeIndex)
      if v12 then
        if 0 < v9 then
          self:addFillUnitFillLevel(farmId, fillUnitIndex, -math.huge, v8.fillType, toolType, fillPositionData)
        end
        local v16 = math.min(v10, fillLevelDelta)
        v14 = math.max(...)
        v8.fillLevel = v14
        v8.fillType = fillTypeIndex
        v14:raiseStateChange(Vehicle.STATE_CHANGE_FILLTYPE_CHANGE)
        SpecializationUtil.raiseEvent(self, "onChangedFillType", fillUnitIndex, fillTypeIndex, v13)
      else
        return 0
      end
    end
    if v8.fillLevel < 0.00001 then
      v8.fillLevel = 0
    end
    if 0 < v8.fillLevel then
      v8.lastValidFillType = v8.fillType
    else
      SpecializationUtil.raiseEvent(self, "onChangedFillType", fillUnitIndex, FillType.UNKNOWN, v8.fillType)
      v8.fillType = FillType.UNKNOWN
      if not v8.fillTypeToDisplayIsPersistent then
        v8.fillTypeToDisplay = FillType.UNKNOWN
      end
      if not v8.fillLevelToDisplayIsPersistent then
        v8.fillLevelToDisplay = nil
      end
    end
    if self.isServer and v8.synchronizeFillLevel then
      if v8.fillLevel ~= v8.fillLevelSent then
        v16 = math.abs(v8.fillLevel - v8.fillLevelSent)
        if v8.capacity / (2 ^ v8.synchronizationNumBits - 1) < v16 then
          v8.fillLevelSent = v8.fillLevel
        end
      end
      if v8.fillType ~= v8.fillTypeSent then
        v8.fillTypeSent = v8.fillType
      end
      if v8.lastValidFillType ~= v8.lastValidFillTypeSent then
        v8.lastValidFillTypeSent = v8.lastValidFillType
      end
      if v13 then
        self:raiseDirtyFlags(v7.dirtyFlag)
      end
    end
    if v8.updateMass then
      self:setMassDirty()
    end
    self:updateFillUnitAutoAimTarget(v8)
    if self.isClient then
      self:updateAlarmTriggers(v8.alarmTriggers)
      self:updateFillUnitFillPlane(v8)
      self:updateMeasurementNodes(v8, 0, true)
      if v11 then
        self:updateFillTypeMaterials(v8.fillTypeMaterials, v8.fillType)
      end
    end
    SpecializationUtil.raiseEvent(self, "onFillUnitFillLevelChanged", fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, v12)
    if self.isServer and v7.removeVehicleIfEmpty and v8.fillLevel <= v7.removeVehicleThreshold then
      if v7.removeVehicleDelay == 0 then
        v13:removeVehicle(self)
      else
        Timer.createOneshot(v7.removeVehicleDelay, function()
          self:removeVehicle(u0)
        end)
      end
    end
    if 0 < v12 then
      if 0 < #v7.fillEffects then
        v13:setFillType(v7.fillEffects, v8.fillType)
        v13:startEffects(v7.fillEffects)
        v7.activeFillEffects[v7.fillEffects] = 500
      end
      if 0 < #v8.fillEffects then
        v13:setFillType(v8.fillEffects, v8.fillType)
        v13:startEffects(v8.fillEffects)
        v7.activeFillEffects[v8.fillEffects] = 500
      end
      if 0 < #v7.animationNodes then
        v13:startAnimations(v7.animationNodes)
        v7.activeFillAnimations[v7.animationNodes] = 500
      end
      if 0 < #v8.animationNodes then
        v13:startAnimations(v8.animationNodes)
        v7.activeFillAnimations[v8.animationNodes] = 500
      end
      if v8.fillAnimation ~= nil and v8.fillAnimationLoadTime ~= nil then
        local v13 = self:getAnimationTime(v8.fillAnimation)
        v14 = MathUtil.sign(v8.fillAnimationLoadTime - v13)
        if v14 ~= 0 then
          self:playAnimation(v8.fillAnimation, v14, v13)
          self:setAnimationStopTime(v8.fillAnimation, v8.fillAnimationLoadTime)
        end
      end
    end
    if v12 ~= 0 and v8.fillLevelAnimationName ~= nil then
      if 0 >= v8.fillLevel then
        -- if not v8.fillLevelAnimationResetOnEmpty then goto L571 end
      end
      local v15 = self:getAnimationTime(v8.fillLevelAnimationName)
      if v8.fillLevel / v8.capacity < v15 then
      end
      local v19 = self:getAnimationTime(v8.fillLevelAnimationName)
      self:playAnimation(v8.fillLevelAnimationName, v14, v19, true)
      self:setAnimationStopTime(v8.fillLevelAnimationName, v13)
    end
    if v8.fillLevel < 0.0001 and v8.fillAnimation ~= nil and v8.fillAnimationEmptyTime ~= nil then
      v13 = self:getAnimationTime(v8.fillAnimation)
      v14 = MathUtil.sign(v8.fillAnimationEmptyTime - v13)
      self:playAnimation(v8.fillAnimation, v14, v13)
      self:setAnimationStopTime(v8.fillAnimation, v8.fillAnimationEmptyTime)
    end
    if self.setDashboardsDirty ~= nil then
      self:setDashboardsDirty()
    end
    FillUnit.updateUnloadActionDisplay(self)
    return v12
  end
  return 0
end
function FillUnit:setFillUnitLastValidFillType(fillUnitIndex, fillType, force)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil and self.spec_fillUnit.fillUnits[fillUnitIndex].lastValidFillType ~= fillType then
    self.spec_fillUnit.fillUnits[fillUnitIndex].lastValidFillType = fillType
    self.spec_fillUnit.fillUnits[fillUnitIndex].lastValidFillTypeSent = fillType
    self:raiseDirtyFlags(self.spec_fillUnit.dirtyFlag)
  end
end
function FillUnit:loadFillUnitFromXML(xmlFile, key, entry, index)
  entry.fillUnitIndex = index
  local fillPositionData = xmlFile:getValue(key .. "#capacity", math.huge)
  entry.capacity = fillPositionData
  entry.defaultCapacity = entry.capacity
  fillPositionData = xmlFile:getValue(key .. "#updateMass", true)
  entry.updateMass = fillPositionData
  fillPositionData = xmlFile:getValue(key .. "#canBeUnloaded", true)
  entry.canBeUnloaded = fillPositionData
  fillPositionData = xmlFile:getValue(key .. "#allowFoldingThreshold")
  entry.allowFoldingThreshold = fillPositionData
  entry.needsSaving = true
  entry.fillLevel = 0
  entry.fillLevelSent = 0
  entry.fillType = FillType.UNKNOWN
  entry.fillTypeSent = FillType.UNKNOWN
  entry.fillTypeToDisplay = FillType.UNKNOWN
  entry.fillLevelToDisplay = nil
  entry.lastValidFillType = FillType.UNKNOWN
  entry.lastValidFillTypeSent = FillType.UNKNOWN
  fillPositionData = xmlFile:hasProperty(key .. ".exactFillRootNode")
  if fillPositionData then
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".exactFillRootNode#index", key .. ".exactFillRootNode#node")
    fillPositionData = xmlFile:getValue(key .. ".exactFillRootNode#node", nil, self.components, self.i3dMappings)
    entry.exactFillRootNode = fillPositionData
    if entry.exactFillRootNode ~= nil then
      fillPositionData = CollisionFlag.getHasFlagSet(entry.exactFillRootNode, CollisionFlag.FILLABLE)
      if not fillPositionData then
        local v9 = CollisionFlag.getBit(CollisionFlag.FILLABLE)
        local v10 = getName(entry.exactFillRootNode)
        Logging.xmlWarning(self.xmlFile, "Missing collision mask bit '%d'. Please add this bit to exact fill root node '%s' in '%s'", v9, v10, key)
        return false
      end
      toolType.exactFillRootNodeToFillUnit[entry.exactFillRootNode] = entry
      local v8 = xmlFile:getValue(key .. ".exactFillRootNode#extraEffectDistance", 0)
      toolType.exactFillRootNodeToExtraDistance[entry.exactFillRootNode] = v8
      toolType.hasExactFillRootNodes = true
    else
      Logging.xmlWarning(self.xmlFile, "ExactFillRootNode not found for fillUnit '%s'!", key)
    end
  end
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".autoAimTargetNode#index", key .. ".autoAimTargetNode#node")
  entry.autoAimTarget = {}
  local v7 = xmlFile:getValue(key .. ".autoAimTargetNode#node", nil, self.components, self.i3dMappings)
  entry.autoAimTarget.node = v7
  if entry.autoAimTarget.node ~= nil then
    v8 = getTranslation(entry.autoAimTarget.node)
    entry.autoAimTarget.baseTrans = {}
    v7 = xmlFile:getValue(key .. ".autoAimTargetNode#startZ")
    entry.autoAimTarget.startZ = v7
    v7 = xmlFile:getValue(key .. ".autoAimTargetNode#endZ")
    entry.autoAimTarget.endZ = v7
    v8 = xmlFile:getValue(key .. ".autoAimTargetNode#startPercentage", 25)
    entry.autoAimTarget.startPercentage = v8 / 100
    v7 = xmlFile:getValue(key .. ".autoAimTargetNode#invert", false)
    entry.autoAimTarget.invert = v7
    if entry.autoAimTarget.startZ ~= nil and entry.autoAimTarget.endZ ~= nil then
      if entry.autoAimTarget.invert then
      end
      setTranslation(entry.autoAimTarget.node, entry.autoAimTarget.baseTrans[1], entry.autoAimTarget.baseTrans[2], fillPositionData)
    end
  end
  entry.supportedFillTypes = {}
  v7 = xmlFile:getValue(key .. "#fillTypeCategories")
  v8 = xmlFile:getValue(key .. "#fillTypes")
  if v7 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L335
    v9 = v9:getFillTypesByCategoryNames(v7, "Warning: '" .. self.configFileName .. "' has invalid fillTypeCategory '%s'.")
  elseif v7 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L352
    v9 = v9:getFillTypesByNames(v8, "Warning: '" .. self.configFileName .. "' has invalid fillType '%s'.")
  else
    Logging.xmlWarning(self.xmlFile, "Missing 'fillTypeCategories' or 'fillTypes' for fillUnit '%s'", key)
    return false
  end
  if fillPositionData ~= nil then
    for v12, v13 in pairs(fillPositionData) do
      entry.supportedFillTypes[v13] = true
    end
  end
  entry.supportedToolTypes = {}
  v12 = v12:getNumberOfToolTypes()
  -- TODO: structure LOP_FORNPREP (pc 386, target 392)
  entry.supportedToolTypes[1] = true
  -- TODO: structure LOP_FORNLOOP (pc 391, target 387)
  v9 = xmlFile:getValue(key .. "#startFillLevel")
  v10 = xmlFile:getValue(key .. "#startFillType")
  if v10 ~= nil then
    v11 = v11:getFillTypeIndexByName(v10)
    if v11 ~= nil then
      entry.startFillLevel = v9
      entry.startFillTypeIndex = v11
    end
  end
  v11 = xmlFile:getValue(key .. ".fillRootNode#node", nil, self.components, self.i3dMappings)
  entry.fillRootNode = v11
  if entry.fillRootNode == nil then
    entry.fillRootNode = self.components[1].node
  end
  v11 = xmlFile:getValue(key .. ".fillMassNode#node", nil, self.components, self.i3dMappings)
  entry.fillMassNode = v11
  v11 = xmlFile:getValue(key .. "#updateFillLevelMass", true)
  if entry.fillMassNode == nil and v11 then
    entry.fillMassNode = self.components[1].node
  end
  v12 = xmlFile:getValue(key .. "#ignoreFillLimit", false)
  entry.ignoreFillLimit = v12
  v12 = xmlFile:getValue(key .. "#synchronizeFillLevel", true)
  entry.synchronizeFillLevel = v12
  v12 = xmlFile:getValue(key .. "#synchronizeFullFillLevel", false)
  entry.synchronizeFullFillLevel = v12
  for v16, v17 in pairs(FillUnit.CAPACITY_TO_NETWORK_BITS) do
    if not (v16 <= entry.capacity) then
      continue
    end
  end
  v13 = xmlFile:getValue(key .. "#synchronizationNumBits", v12)
  entry.synchronizationNumBits = v13
  v13 = xmlFile:getValue(key .. "#showOnHud", true)
  entry.showOnHud = v13
  v13 = xmlFile:getValue(key .. "#showOnInfoHud", true)
  entry.showOnInfoHud = v13
  v13 = xmlFile:getValue(key .. "#uiPrecision", 0)
  entry.uiPrecision = v13
  v13 = xmlFile:getValue(key .. "#unitTextOverride")
  if v13 ~= nil then
    v14 = v14:convertText(v13)
    entry.unitText = v14
  end
  entry.parentUnitOnHud = nil
  entry.childUnitOnHud = nil
  v14 = xmlFile:getValue(key .. "#blocksAutomatedTrainTravel", false)
  entry.blocksAutomatedTrainTravel = v14
  v14 = xmlFile:getValue(key .. "#fillAnimation")
  entry.fillAnimation = v14
  v14 = xmlFile:getValue(key .. "#fillAnimationLoadTime")
  entry.fillAnimationLoadTime = v14
  v14 = xmlFile:getValue(key .. "#fillAnimationEmptyTime")
  entry.fillAnimationEmptyTime = v14
  v14 = xmlFile:getValue(key .. ".fillLevelAnimation#name")
  entry.fillLevelAnimationName = v14
  v14 = xmlFile:getValue(key .. ".fillLevelAnimation#resetOnEmpty", true)
  entry.fillLevelAnimationResetOnEmpty = v14
  if self.isClient then
    entry.alarmTriggers = {}
    while true do
      v17 = string.format(".alarmTriggers.alarmTrigger(%d)", v14)
      v16 = xmlFile:hasProperty(key .. v17)
      if not v16 then
        break
      end
      v17 = self:loadAlarmTrigger(xmlFile, key .. v17, {}, entry)
      if v17 then
        table.insert(entry.alarmTriggers, {})
      end
    end
    entry.measurementNodes = {}
    while true do
      v17 = string.format(".measurementNodes.measurementNode(%d)", v14)
      v16 = xmlFile:hasProperty(key .. v17)
      if not v16 then
        break
      end
      v17 = self:loadMeasurementNode(xmlFile, key .. v17, {})
      if v17 then
        table.insert(entry.measurementNodes, {})
      end
    end
    entry.fillPlane = {}
    entry.lastFillPlaneType = nil
    v15 = self:loadFillPlane(xmlFile, key .. ".fillPlane", entry.fillPlane, entry)
    if not v15 then
      entry.fillPlane = nil
    end
    v15 = self:loadFillTypeMaterials(xmlFile, key)
    entry.fillTypeMaterials = v15
    v15 = v15:loadEffect(xmlFile, key .. ".fillEffect", self.components, self, self.i3dMappings)
    entry.fillEffects = v15
    v15 = v15:loadAnimations(xmlFile, key .. ".animationNodes", self.components, self, self.i3dMappings)
    entry.animationNodes = v15
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".fillLevelHud", key .. ".dashboard")
    if self.loadDashboardsFromXML ~= nil then
      self:loadDashboardsFromXML(xmlFile, key, {valueTypeToLoad = "fillLevel", valueObject = entry, valueFunc = "fillLevel", minFunc = 0, maxFunc = "capacity"})
      self:loadDashboardsFromXML(xmlFile, key, {valueTypeToLoad = "fillLevelPct", valueObject = entry, valueFunc = function(self)
        local key = MathUtil.clamp(self.fillLevel / self.capacity, 0, 1)
        return key * 100
      end, minFunc = 0, maxFunc = 100})
      self:loadDashboardsFromXML(xmlFile, key, {valueTypeToLoad = "fillLevelWarning", valueObject = entry, valueFunc = "fillLevel", minFunc = 0, maxFunc = "capacity", additionalAttributesFunc = Dashboard.warningAttributes, stateFunc = Dashboard.warningState})
    end
  end
  return true
end
function FillUnit:loadAlarmTrigger(xmlFile, key, alarmTrigger, fillUnit)
  alarmTrigger.fillUnit = fillUnit
  alarmTrigger.isActive = false
  local fillPositionData = xmlFile:getValue(key .. "#minFillLevel")
  alarmTrigger.minFillLevel = fillPositionData
  if alarmTrigger.minFillLevel == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'minFillLevel' for alarmTrigger '%s'", key)
  end
  fillPositionData = xmlFile:getValue(key .. "#maxFillLevel")
  alarmTrigger.maxFillLevel = fillPositionData
  if alarmTrigger.maxFillLevel == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'maxFillLevel' for alarmTrigger '%s'", key)
  end
  fillPositionData = fillPositionData:loadSampleFromXML(xmlFile, key, "alarmSound", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
  alarmTrigger.sample = fillPositionData
  return toolType
end
function FillUnit:loadMeasurementNode(xmlFile, key, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local index = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if index == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for measurementNode '%s'", key)
    return false
  end
  entry.node = index
  entry.measurementTime = 0
  entry.intensity = 0
  return true
end
function FillUnit:updateMeasurementNodes(fillUnit, dt, setActive, forcedIntensity)
  if fillUnit.measurementNodes ~= nil then
    for v8, v9 in pairs(fillUnit.measurementNodes) do
      if setActive ~= nil and setActive then
        v9.measurementTime = 5000
      end
      if 0 < v9.measurementTime then
        local v10 = math.max(v9.measurementTime - dt, 0)
        v9.measurementTime = v10
      end
      v10 = math.min(v9.measurementTime / 5000, 1)
      local v13 = math.min(self.lastSpeed * 3600 / 10, 1)
      local v11 = math.max(...)
      if not ((forcedIntensity or v11) ~= v9.intensity) then
        continue
      end
      setShaderParameter(v9.node, "fillLevel", fillUnit.fillLevel / fillUnit.capacity, forcedIntensity or v11, 0, 0, false)
      setShaderParameter(v9.node, "prevFillLevel", fillUnit.fillLevel / fillUnit.capacity, v9.intensity, 0, 0, false)
      v9.intensity = forcedIntensity or v11
    end
  end
end
function FillUnit:loadFillPlane(xmlFile, key, fillPlane, fillUnit)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#fillType", "Material is dynamically assigned to the nodes")
  local toolType = xmlFile:hasProperty(key)
  if not toolType then
    return false
  end
  fillPlane.nodes = {}
  while true do
    fillPositionData = string.format("%s.node(%d)", key, toolType)
    v7 = xmlFile:hasProperty(fillPositionData)
    if not v7 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, fillPositionData .. "#index", fillPositionData .. "#node")
    v7 = xmlFile:getValue(fillPositionData .. "#node", nil, self.components, self.i3dMappings)
    if v7 ~= nil then
      v8, v9, v10 = getTranslation(v7)
      v11, v12, v13 = getRotation(v7)
      v14 = AnimCurve.new(linearInterpolatorTransRotScale)
      while true do
        v16 = string.format("%s.key(%d)", fillPositionData, v15)
        v17 = xmlFile:hasProperty(v16)
        if not v17 then
          break
        end
        v17 = xmlFile:getValue(v16 .. "#time")
        if not (v17 ~= nil) then
          break
        end
        v18, v19, v20 = xmlFile:getValue(v16 .. "#translation")
        if v19 == nil then
          v21 = xmlFile:getValue(v16 .. "#y")
        end
        v21, v22, v23 = xmlFile:getValue(v16 .. "#rotation")
        v24, v25, v26 = xmlFile:getValue(v16 .. "#scale")
        v14:addKeyframe({x = v18 or v8, y = v19 or v9, z = v20 or v10, rx = v21 or v11, ry = v22 or v12, rz = v23 or v13, sx = v24 or 1, sy = v25 or 1, sz = v26 or 1, time = v17})
      end
      if v15 == 0 then
        v16, v17 = xmlFile:getValue(fillPositionData .. "#minMaxY")
        v14:addKeyframe({v8, v16 or v9, v10, v11, v12, v13, 1, 1, 1, time = 0})
        v14:addKeyframe({v8, v17 or v9, v10, v11, v12, v13, 1, 1, 1, time = 1})
      end
      v16 = xmlFile:getValue(fillPositionData .. "#alwaysVisible", false)
      setVisibility(v7, v16)
      table.insert(fillPlane.nodes, {node = v7, animCurve = v14, alwaysVisible = v16})
    end
  end
  fillPlane.forcedFillType = nil
  fillPositionData = xmlFile:getValue(key .. "#defaultFillType")
  if fillPositionData ~= nil then
    v7 = v7:getFillTypeIndexByName(fillPositionData)
    if v7 == nil then
      v11 = tostring(fillPositionData)
      Logging.xmlWarning(self.xmlFile, "Invalid defaultFillType '%s' for '%s'!", v11, key)
      return false
    end
    fillPlane.defaultFillType = v7
  else
    v7 = next(fillUnit.supportedFillTypes)
    fillPlane.defaultFillType = v7
  end
  return true
end
function FillUnit:setFillPlaneForcedFillType(fillUnitIndex, forcedFillType)
  if self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil and self.spec_fillUnit.fillUnits[fillUnitIndex].fillPlane ~= nil then
    self.spec_fillUnit.fillUnits[fillUnitIndex].fillPlane.forcedFillType = forcedFillType
  end
end
function FillUnit:updateFillUnitFillPlane(fillUnit)
  if fillUnit.fillPlane ~= nil then
    local t = self:getFillUnitFillLevelPercentage(fillUnit.fillUnitIndex)
    for v7, v8 in ipairs(fillUnit.fillPlane.nodes) do
      local v9, v10, v11, v12, v13, v14, v15, v16, v17 = v9:get(t)
      setTranslation(v8.node, v9, v10, v11)
      setRotation(v8.node, v12, v13, v14)
      setScale(v8.node, v15, v16, v17)
      if 0 >= fillUnit.fillLevel then
      end
      v18(v19, v20)
    end
    if fillUnit.fillType ~= fillUnit.lastFillPlaneType then
      if fillUnit.fillType ~= FillType.UNKNOWN then
        if key.forcedFillType ~= nil then
        end
        toolType = toolType:getMaterial(index, "fillplane", 1)
        if toolType == nil and key.defaultFillType ~= nil then
          fillPositionData = fillPositionData:getMaterial(key.defaultFillType, "fillplane", 1)
        end
        if toolType ~= nil then
          for v9, v10 in ipairs(key.nodes) do
            setMaterial(v10.node, toolType, 0)
          end
        end
      end
      fillUnit.lastFillPlaneType = fillUnit.fillType
    end
  end
end
function FillUnit.loadFillTypeMaterials(v0, xmlFile, key)
  xmlFile:iterate(key .. ".fillTypeMaterials.material", function(v0, xmlFile)
    local key = key:getValue(xmlFile .. "#fillType")
    if key ~= nil then
      local entry = entry:getFillTypeIndexByName(key)
      if entry ~= nil then
        local index = index:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
        local toolType = toolType:getValue(xmlFile .. "#refNode", nil, u1.components, u1.i3dMappings)
        if index ~= nil and toolType ~= nil then
          table.insert(u2, {fillTypeIndex = entry, node = index, refNode = toolType})
          return
        end
        Logging.xmlWarning(u0, "Missing node or ref node in '%s'", xmlFile)
        return
      end
      Logging.xmlWarning(u0, "Unknown fill type '%s' in '%s'", key, xmlFile)
      return
    end
    Logging.xmlWarning(u0, "Missing fill type in '%s'", xmlFile)
  end)
  return {}
end
function FillUnit.updateFillTypeMaterials(v0, xmlFile, key)
  -- TODO: structure LOP_FORNPREP (pc 3, target 23)
  if xmlFile[1].fillTypeIndex == key then
    local v7 = getMaterial(xmlFile[1].refNode, 0)
    setMaterial(xmlFile[1].node, v7, 0)
  end
  -- TODO: structure LOP_FORNLOOP (pc 22, target 4)
end
function FillUnit.updateFillUnitAutoAimTarget(v0, xmlFile)
  if xmlFile.autoAimTarget.node ~= nil and xmlFile.autoAimTarget.startZ ~= nil and xmlFile.autoAimTarget.endZ ~= nil then
    local index = MathUtil.clamp((xmlFile.fillLevel - xmlFile.capacity * xmlFile.autoAimTarget.startPercentage) / (xmlFile.capacity - xmlFile.capacity * xmlFile.autoAimTarget.startPercentage), 0, 1)
    if xmlFile.autoAimTarget.invert then
    end
    setTranslation(key.node, key.baseTrans[1], key.baseTrans[2], (key.endZ - key.startZ) * index + key.startZ)
  end
end
function FillUnit:addFillUnitTrigger(trigger, fillTypeIndex, fillUnitIndex)
  if #self.spec_fillUnit.fillTrigger.triggers == 0 then
    toolType:addActivatable(self.spec_fillUnit.fillTrigger.activatable)
    toolType:setFillType(fillTypeIndex)
    if self.isServer and Platform.gameplay.automaticFilling then
      self:setFillUnitIsFilling(true)
    end
  end
  table.addElement(index.fillTrigger.triggers, trigger)
  SpecializationUtil.raiseEvent(self, "onAddedFillUnitTrigger", fillTypeIndex, fillUnitIndex, #index.fillTrigger.triggers)
  self:updateFillUnitTriggers()
end
function FillUnit:removeFillUnitTrigger(trigger)
  table.removeElement(self.spec_fillUnit.fillTrigger.triggers, trigger)
  if self.isServer and trigger == self.spec_fillUnit.fillTrigger.currentTrigger then
    self:setFillUnitIsFilling(false)
  end
  if #key.fillTrigger.triggers == 0 then
    entry:removeActivatable(key.fillTrigger.activatable)
    if self.isServer and Platform.gameplay.automaticFilling then
      self:setFillUnitIsFilling(false)
    end
  end
  SpecializationUtil.raiseEvent(self, "onRemovedFillUnitTrigger", #key.fillTrigger.triggers)
  self:updateFillUnitTriggers()
end
function FillUnit:updateFillUnitTriggers()
  table.sort(self.spec_fillUnit.fillTrigger.triggers, function(self, xmlFile)
    local key = self:getCurrentFillType()
    local entry = xmlFile:getCurrentFillType()
    local index = index:getFirstValidFillUnitToFill(key)
    local toolType = toolType:getFirstValidFillUnitToFill(entry)
    if index ~= nil and toolType ~= nil then
      local v7 = v7:getFillUnitFillLevel(index)
      local v8 = v8:getFillUnitFillLevel(toolType)
      if v8 >= v7 then
      end
      return true
    end
    if index ~= nil then
      return true
    end
    return false
  end)
  if 0 < #self.spec_fillUnit.fillTrigger.triggers then
    local key = key:getCurrentFillType()
    entry:setFillType(key)
    -- if v0.spec_fillUnit.fillTrigger.selectedTrigger == v0.spec_fillUnit.fillTrigger.triggers[1] then goto L81 end
    local v8 = self:getFirstValidFillUnitToFill(key)
    SpecializationUtil.raiseEvent(self, "onFillUnitTriggerChanged", self.spec_fillUnit.fillTrigger.triggers[1], key, v8, #self.spec_fillUnit.fillTrigger.triggers)
    self.spec_fillUnit.fillTrigger.selectedTrigger = self.spec_fillUnit.fillTrigger.triggers[1]
    return
  end
  xmlFile.fillTrigger.selectedTrigger = nil
end
function FillUnit:setFillUnitIsFilling(isFilling, noEventSend)
  if isFilling ~= self.spec_fillUnit.fillTrigger.isFilling then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L43
    end
    if g_server ~= nil then
      local fillPositionData = SetFillUnitIsFillingEvent.new(self, isFilling)
      index:broadcastEvent(fillPositionData, nil, nil, self)
    else
      local index = index:getServerConnection()
      fillPositionData = SetFillUnitIsFillingEvent.new(self, isFilling)
      index:sendEvent(...)
    end
    entry.fillTrigger.isFilling = isFilling
    if isFilling then
      entry.fillTrigger.currentTrigger = nil
      for v7, v8 in ipairs(entry.fillTrigger.triggers) do
        local v9 = v8:getIsActivatable(self)
        if not v9 then
          continue
        end
        entry.fillTrigger.currentTrigger = v8
        break
      end
    end
    if self.isClient then
      self:setFillSoundIsPlaying(isFilling)
      if entry.fillTrigger.currentTrigger ~= nil then
        index:setFillSoundIsPlaying(isFilling)
      end
    end
    SpecializationUtil.raiseEvent(self, "onFillUnitIsFillingStateChanged", isFilling)
    if not isFilling then
      self:updateFillUnitTriggers()
    end
  end
end
function FillUnit:setFillSoundIsPlaying(isPlaying)
  if isPlaying then
    local entry = entry:getIsSamplePlaying(self.spec_fillUnit.samples.fill)
    -- if v3 then goto L42 end
    entry:playSample(self.spec_fillUnit.samples.fill)
    return
  end
  entry = entry:getIsSamplePlaying(key.samples.fill)
  if entry then
    entry:stopSample(key.samples.fill)
  end
end
function FillUnit.getIsFillUnitActive(v0, xmlFile)
  return true
end
function FillUnit:getAdditionalComponentMass(superFunc, component)
  local additionalMass = superFunc(self, component)
  for v8, v9 in ipairs(self.spec_fillUnit.fillUnits) do
    if not v9.updateMass then
      continue
    end
    if not (v9.fillMassNode == component.node) then
      continue
    end
    if not (v9.fillType ~= nil) then
      continue
    end
    if not (v9.fillType ~= FillType.UNKNOWN) then
      continue
    end
    local v10 = v10:getFillTypeByIndex(v9.fillType)
  end
  return additionalMass
end
function FillUnit:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  for v7, v8 in pairs(self.spec_fillUnit.fillUnits) do
    if v8.fillRootNode ~= nil then
      list[v8.fillRootNode] = self
    end
    if not (v8.exactFillRootNode ~= nil) then
      continue
    end
    list[v8.exactFillRootNode] = self
  end
end
function FillUnit:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_fillUnit.fillUnits ~= nil then
    for v7, v8 in pairs(self.spec_fillUnit.fillUnits) do
      if v8.fillRootNode ~= nil then
        list[v8.fillRootNode] = nil
      end
      if not (v8.exactFillRootNode ~= nil) then
        continue
      end
      list[v8.exactFillRootNode] = nil
    end
  end
end
function FillUnit:getFillLevelInformation(superFunc, display)
  superFunc(self, display)
  -- TODO: structure LOP_FORNPREP (pc 11, target 117)
  if 0 < self.spec_fillUnit.fillUnits[1].capacity and self.spec_fillUnit.fillUnits[1].showOnHud then
    if self.spec_fillUnit.fillUnits[1].fillType == FillType.UNKNOWN then
      local v9 = table.size(self.spec_fillUnit.fillUnits[1].supportedFillTypes)
      if v9 == 1 then
        v9 = next(self.spec_fillUnit.fillUnits[1].supportedFillTypes)
      end
    end
    if v7.fillTypeToDisplay ~= FillType.UNKNOWN then
    end
    if v7.fillLevelToDisplay ~= nil then
    end
    if v7.parentUnitOnHud ~= nil then
      if v8 == FillType.UNKNOWN then
      end
    elseif v7.childUnitOnHud ~= nil and v8 == FillType.UNKNOWN then
    end
    if not v7.ignoreFillLimit and g_currentMission.missionInfo.trailerFillLimit then
      local v11 = self:getMaxComponentMassReached()
    end
    if 0 < v9 then
      -- if v7.uiPrecision then goto L112 end
    end
    display:addFillLevel(v14, v15, v16, 0, v11)
  end
  -- TODO: structure LOP_FORNLOOP (pc 116, target 12)
end
function FillUnit:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if not self.spec_fillUnit.allowFoldingWhileFilled then
    for v8, v9 in ipairs(self.spec_fillUnit.fillUnits) do
      local v10 = self:getFillUnitFillLevel(v8)
      if not v9.allowFoldingThreshold then
      end
      if not (v11 < v10) then
        continue
      end
      return false, index.texts.warningFoldingFilled
    end
  end
  toolType = superFunc(self, direction, onAiTurnOn)
  return toolType
end
function FillUnit:getIsReadyForAutomatedTrainTravel(superFunc)
  for fillPositionData, v7 in ipairs(self.spec_fillUnit.fillUnits) do
    if not v7.blocksAutomatedTrainTravel then
      continue
    end
    if not (0 < v7.fillLevel) then
      continue
    end
    return false
  end
  entry = superFunc(self)
  return entry
end
function FillUnit.loadMovingToolFromXML(v0, superFunc, display, entry, index)
  local toolType = superFunc(v0, display, entry, index)
  if not toolType then
    return false
  end
  toolType = display:getValue(entry .. "#fillUnitIndex")
  index.fillUnitIndex = toolType
  toolType = display:getValue(entry .. "#minFillLevel")
  index.minFillLevel = toolType
  toolType = display:getValue(entry .. "#maxFillLevel")
  index.maxFillLevel = toolType
  return true
end
function FillUnit:getIsMovingToolActive(superFunc, movingTool)
  if movingTool.fillUnitIndex ~= nil then
    local fillLevelPct = self:getFillUnitFillLevelPercentage(movingTool.fillUnitIndex)
    if movingTool.minFillLevel >= fillLevelPct then
      -- if v3 >= v2.maxFillLevel then goto L19 end
    end
    return false
  end
  fillLevelPct = superFunc(self, movingTool)
  return fillLevelPct
end
function FillUnit:getDoConsumePtoPower(superFunc)
  local entry = superFunc(self)
  if not entry and self.spec_fillUnit.fillTrigger.isFilling then
  end
  return entry
end
function FillUnit:getIsPowerTakeOffActive(superFunc)
  local entry = superFunc(self)
  if not entry and self.spec_fillUnit.fillTrigger.isFilling then
  end
  return entry
end
function FillUnit:getCanBeTurnedOn(superFunc)
  for fillPositionData, v7 in pairs(self.spec_fillUnit.activeAlarmTriggers) do
    if not v7.turnOffInTrigger then
      continue
    end
    return false
  end
  entry = superFunc(self)
  return entry
end
function FillUnit:showInfo(superFunc, box)
  if self.spec_fillUnit.isInfoDirty then
    self.spec_fillUnit.fillUnitInfos = {}
    for v8, v9 in ipairs(self.spec_fillUnit.fillUnits) do
      if not v9.showOnInfoHud then
        continue
      end
      if not (0 < v9.fillLevel) then
        continue
      end
      if index[v9.fillType] == nil then
        local v11 = v11:getFillTypeByIndex(v9.fillType)
        table.insert(entry.fillUnitInfos, {title = v11.title, fillLevel = 0, unit = v9.unitText, precision = 0})
        index[v9.fillType] = {title = v11.title, fillLevel = 0, unit = v9.unitText, precision = 0}
      end
      v10.fillLevel = v10.fillLevel + v9.fillLevel
      if not (v10.precision == 0) then
        continue
      end
      if not (0 < v9.fillLevel) then
        continue
      end
      v10.precision = v9.uiPrecision or 0
    end
    entry.isInfoDirty = false
  end
  for v7, v8 in ipairs(entry.fillUnitInfos) do
    if 0 < v8.precision then
      local v10 = MathUtil.round(v8.fillLevel, v8.precision)
      local v13 = math.floor(v10)
      local v17 = math.floor(v10)
      v11 = string.format("%d%s%0" .. v8.precision .. "d", v13, g_i18n.decimalSeparator, (v10 - v17) * 10 ^ v8.precision)
    else
      local v12 = MathUtil.round(v8.fillLevel)
      v10 = string.format(...)
    end
    if not v8.unit then
      v12 = v12:getVolumeUnit()
    end
    box:addLine(v8.title, v10 .. v11 .. v12)
  end
  superFunc(self, box)
end
function FillUnit.loadLevelerNodeFromXML(v0, superFunc, display, entry, index)
  local toolType = entry:getValue(index .. "#fillUnitIndex", 1)
  display.limitFillUnitIndex = toolType
  toolType = entry:getValue(index .. "#minFillLevel", 0)
  display.minFillLevel = toolType
  toolType = entry:getValue(index .. "#maxFillLevel", 1)
  display.maxFillLevel = toolType
  toolType = superFunc(v0, display, entry, index)
  return toolType
end
function FillUnit:getIsLevelerPickupNodeActive(superFunc, levelerNode)
  local fillLevelPct = self:getFillUnitFillLevelPercentage(levelerNode.limitFillUnitIndex)
  if fillLevelPct >= levelerNode.minFillLevel then
    -- if v2.maxFillLevel >= v3 then goto L15 end
  end
  return false
  return superFunc(self, levelerNode)
end
function FillUnit:debugGetSupportedFillTypesPerFillUnit()
  local entry = self:getFillUnits()
  for toolType, fillPositionData in ipairs(...) do
    superFunc[fillPositionData.fillUnitIndex] = fillPositionData.supportedFillTypes
  end
  return superFunc
end
function FillUnit:addFillTypeSources(superFunc, display, entry)
  if superFunc ~= display and superFunc.spec_fillUnit ~= nil then
    for v8, v9 in pairs(superFunc.spec_fillUnit.fillUnits) do
      for v13, v14 in pairs(entry) do
        if not v9.supportedFillTypes[v14] then
          continue
        end
        if self[v14] == nil then
          self[v14] = {}
        end
        table.insert(self[v14], {vehicle = superFunc, fillUnitIndex = v8})
      end
    end
  end
  if superFunc.getAttachedImplements ~= nil then
    local index = superFunc:getAttachedImplements()
    for v8, v9 in pairs(index) do
      if not (v9.object ~= nil) then
        continue
      end
      FillUnit.addFillTypeSources(self, v9.object, display, entry)
    end
  end
end
function FillUnit:loadSpecValueCapacity(superFunc, display)
  local index = self:getRootName()
  XMLUtil.checkDeprecatedXMLElements(self, index .. ".storeData.specs.capacity#unit", index .. ".storeData.specs.capacity#unitTextOverride")
  local fillPositionData = self:getValue(index .. ".storeData.specs.capacity")
  if fillPositionData ~= nil then
    local v9, v10, v11 = function(self, superFunc)
      local display = display:getValue(self .. "#unitTextOverride")
      if display == nil then
        local entry = entry:getValue(self .. "#shopDisplayUnit")
        if entry ~= nil and FillUnit.UNIT[entry] == nil then
          local v10 = table.concatKeys(FillUnit.UNIT, " ")
          Logging.xmlWarning(...)
        end
        if not index then
        end
        local toolType = toolType.conversionFunc(superFunc)
        return toolType, toolType.l10n, toolType.conversionFunc
      end
      return superFunc, display
    end(index .. ".storeData.specs.capacity", fillPositionData)
  end
  if fillPositionData ~= nil and v7 ~= nil then
    table.insert(toolType, {{capacity = fillPositionData, unit = v7, conversionFunc = v8}})
    return toolType
  end
  self:iterate(index .. ".fillUnit.fillUnitConfigurations.fillUnitConfiguration", function(self, superFunc)
    entry:iterate(superFunc .. ".fillUnits.fillUnit", function(self, superFunc)
      XMLUtil.checkDeprecatedXMLElements(u0, superFunc .. "#unit", superFunc .. "#unitTextOverride")
      local display = display:getValue(superFunc .. "#showCapacityInShop")
      if display ~= false then
        display = display:getValue(superFunc .. "#showInShop")
        if display ~= false then
          local entry = entry:getValue(superFunc .. "#capacity")
          local index, toolType, fillPositionData = u2(superFunc, entry or 0)
          u1 = fillPositionData
          table.insert(u3, {capacity = index, unit = toolType, conversionFunc = u1, fillUnitIndex = self})
        end
      end
    end)
    table.insert(u3, {})
  end)
  if 0 < #toolType then
    return toolType
  end
end
function FillUnit:getSpecValueCapacity(superFunc, display, entry, index, toolType)
  if superFunc ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L24
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L24
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L24
  elseif display ~= nil and self.configurations ~= nil and display.fillUnit ~= nil and self.configurations.fillUnit ~= nil then
  end
  if self.specs.capacity ~= nil then
    if superFunc == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L106
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L106
    end
    if v10[fillPositionData] ~= nil then
      for v14, v15 in ipairs(v10[fillPositionData]) do
        if superFunc ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L97
          -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L97
          local v16 = superFunc:getFillUnitCapacity(v15.fillUnitIndex)
          -- cmp-jump LOP_JUMPXEQKN R16 aux=0x9 -> L100
          -- if v16 == math.huge then goto L100 end
          if v15.conversionFunc ~= nil then
            local v17 = v15.conversionFunc(v16)
          end
        else
        end
      end
      -- goto L167  (LOP_JUMP +61)
      for v14, v15 in ipairs(v10) do
        for v20, v21 in ipairs(v15) do
        end
        if not (v16 ~= 0) then
          continue
        end
        v17 = math.min(v7, v16)
        v17 = math.max(v8, v16)
      end
      if v7 == v8 then
      elseif v7 ~= math.huge and v8 ~= 0 then
        if index ~= nil then
          -- if v4 then goto L167 end
        end
        v11 = string.format("%s-%s", v7, v8)
      end
    end
  end
  v11 = type(v8)
  if v11 == "number" and v8 == 0 then
    if index ~= nil then
      -- if v4 then goto L181 end
    end
    return nil
  end
  if v9 ~= "" then
    v11 = v9:sub(1, 6)
    if v11 == "$l10n_" then
      v11 = v9:sub(7)
    end
  end
  if index ~= nil then
    -- if v4 then goto L215 end
  end
  v12 = v12:getText("shop_capacityValue")
  v14 = v14:getText(v9 or "unit_literShort")
  v11 = string.format(...)
  return v11
  if toolType == true and v8 ~= v7 then
    return v7, v8, v9
  end
  return v7, v9
end
function FillUnit:getCapacityFromXml()
  local superFunc = self:getRootName()
  self:iterate(superFunc .. ".fillUnit.fillUnitConfigurations.fillUnitConfiguration", function(self, superFunc)
    display:iterate(superFunc .. ".fillUnits.fillUnit", function(self, superFunc)
      local toolType = toolType:getValue(superFunc .. "#capacity")
      local display = math.max(u0, toolType or 0)
      u0 = display
    end)
  end)
  return 0
end
function FillUnit:loadSpecValueFillTypes(superFunc, display)
  local v7 = self:getRootName()
  XMLUtil.checkDeprecatedXMLElements(self, v7 .. ".fillTypes", v7 .. ".cutter#fruitTypes")
  XMLUtil.checkDeprecatedXMLElements(self, v7 .. ".fruitTypes", v7 .. ".storeData.specs.fillTypes")
  XMLUtil.checkDeprecatedXMLElements(self, v7 .. ".fillTypeCategories", v7 .. ".storeData.specs.fillTypeCategories")
  while true do
    v9 = string.format(v7 .. ".fillUnit.fillUnitConfigurations.fillUnitConfiguration(%d)", v8)
    v10 = self:hasProperty(v9)
    if not v10 then
      break
    end
    while true do
      v11 = string.format(v9 .. ".fillUnits.fillUnit(%d)", v10)
      v12 = self:hasProperty(v11)
      if not v12 then
        break
      end
      v12 = self:getValue(v11 .. "#showInShop")
      v13 = self:getValue(v11 .. "#capacity")
      if v12 ~= nil then
        -- if not v12 then goto L123 end
      end
      if v13 ~= nil then
        -- if 0 >= v13 then goto L123 end
      end
      v14 = self:getValue(v11 .. "#fillTypes")
      if v14 ~= nil then
        if entry == nil then
        else
        end
      end
      v15 = self:getValue(v11 .. "#fillTypeCategories")
      if v15 ~= nil then
        if index == nil then
        else
        end
      end
      fillPositionData[v8 + 1] = {fillTypeNames = v14, categoryNames = v15}
    end
  end
  v9 = self:getValue(v7 .. ".storeData.specs.fillTypes")
  if v9 ~= nil then
  end
  v10 = self:getValue(v7 .. ".cutter#fruitTypes")
  v10 = self:getValue(v7 .. ".cutter#fruitTypeCategories")
  v11 = self:getValue(v7 .. ".cutter#useWindrowed", false)
  v12 = self:getValue(v7 .. ".storeData.specs.fillTypeCategories", index)
  return {categoryNames = v12, fillTypeNames = entry, fruitTypeNames = v10, fruitTypeCategoryNames = v10, useWindrowed = v11, fillTypesByConfiguration = fillPositionData}
end
function FillUnit:getFillTypeNamesFromXML()
  local entry = self:getRootName()
  self:iterate(entry .. ".fillUnit.fillUnitConfigurations.fillUnitConfiguration", function(self, superFunc)
    display:iterate(superFunc .. ".fillUnits.fillUnit", function(self, superFunc)
      local display = display:getValue(superFunc .. "#capacity")
      if display ~= nil then
        -- if 0 >= v2 then goto L50 end
      end
      local entry = entry:getValue(superFunc .. "#fillTypes")
      if entry ~= nil then
        if u1 == nil then
          u1 = entry
        else
          u1 = u1 .. " " .. entry
        end
      end
      local index = index:getValue(superFunc .. "#fillTypeCategories")
      if index ~= nil then
        if u2 == nil then
          u2 = index
          return
        end
        u2 = u2 .. " " .. index
      end
    end)
  end)
  return {fillTypeNames = nil, fillTypeCategoryNames = nil}
end
function FillUnit:getSpecValueFillTypes(superFunc, display)
  if self.specs.fillTypes ~= nil then
    if display ~= nil then
    end
    if index ~= nil then
    end
    if index ~= nil then
    end
    if toolType == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L55
    end
    if toolType ~= nil then
      v8:getFillTypesByCategoryNames(toolType, nil, {})
    end
    if fillPositionData ~= nil then
      v8:getFillTypesByNames(fillPositionData, nil, v7)
    end
    return v7
    if entry.fruitTypeNames ~= nil then
      return v7:getFillTypesByFruitTypeNames(entry.fruitTypeNames, nil)
    end
    if entry.fruitTypeCategoryNames ~= nil then
      if entry.useWindrowed then
        v7 = v7:getFruitTypesByCategoryNames(entry.fruitTypeCategoryNames, "Warning: Cutter has invalid fruitTypeCategory '%s'.")
        for v12, v13 in pairs(v7) do
          local v16 = v16:getWindrowFillTypeIndexByFruitTypeIndex(v13)
          table.insert(...)
        end
        return v8
      end
      v7 = v7:getFillTypesByFruitTypeCategoryName(entry.fruitTypeCategoryNames, nil)
      return v7
    end
  end
  return nil
end
function FillUnit:loadSpecValueFillUnitMassData(superFunc, display)
  self:iterate("vehicle.motorized.consumerConfigurations.consumerConfiguration(0).consumer", function(self, superFunc)
    local display = display:getValue(superFunc .. "#fillUnitIndex", 0)
    if display ~= 0 then
      local entry = string.format("vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration(0).fillUnits.fillUnit(%d)", display - 1)
      local index = index:getValue(entry .. "#fillTypeCategories")
      local toolType = toolType:getValue(entry .. "#fillTypes")
      local fillPositionData = fillPositionData:getValue(entry .. "#capacity", 0)
      if 0 < fillPositionData then
        table.insert(u1, {fillTypeCategories = index, fillTypes = toolType, capacity = fillPositionData})
      end
    end
  end)
  self:iterate("vehicle.fillUnit.fillUnitConfigurations.fillUnitConfiguration(0).fillUnits.fillUnit", function(self, superFunc)
    local display = display:getValue(superFunc .. "#startFillLevel", 0)
    if 0 < display then
      local entry = entry:getValue(superFunc .. "#startFillType")
      table.insert(u1, {fillType = entry, capacity = display})
    end
  end)
  return {}
end
function FillUnit.getSpecValueStartFillUnitMassByMassData(fillUnitMassData)
  for toolType, fillPositionData in pairs(fillUnitMassData) do
    if fillPositionData.fillTypeCategories ~= nil then
      local v8 = v8:getFillTypesByCategoryNames(fillPositionData.fillTypeCategories)
    elseif fillPositionData.fillTypes ~= nil then
      v8 = v8:getFillTypesByNames(fillPositionData.fillTypes)
    else
      if fillPositionData.fillType ~= nil then
        v8 = v8:getFillTypeIndexByName(fillPositionData.fillType)
      end
    end
    if not (v7 ~= nil) then
      continue
    end
    v8 = v8:getFillTypeByIndex(v7)
  end
  return superFunc
end
function FillUnit:actionEventConsoleFillUnitNext(actionName, inputValue, callbackState, isAnalog)
  local toolType = self:getIsSelected()
  if toolType then
    toolType = self:getFillUnitFillType(1)
    local fillUnit = self:getFillUnitByIndex(1)
    for v12, v13 in pairs(fillUnit.supportedFillTypes) do
      if not v7 then
        if not (v12 == toolType) then
          continue
        end
      else
        break
      end
    end
    if v8 == nil then
      v9 = next(fillUnit.supportedFillTypes)
    end
    v11 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v11, 1, -math.huge, toolType, ToolType.UNDEFINED, nil)
    v11 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v11, 1, 100, v8, ToolType.UNDEFINED, nil)
  end
end
function FillUnit:actionEventConsoleFillUnitInc(actionName, inputValue, callbackState, isAnalog)
  local toolType = self:getIsSelected()
  if toolType then
    toolType = self:getFillUnitFillType(1)
    if toolType == FillType.UNKNOWN then
      local fillUnit = self:getFillUnitByIndex(1)
      local v7 = next(fillUnit.supportedFillTypes)
    end
    local v8 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v8, 1, 1000, toolType, ToolType.UNDEFINED, nil)
  end
end
function FillUnit:actionEventConsoleFillUnitDec(actionName, inputValue, callbackState, isAnalog)
  local toolType = self:getIsSelected()
  if toolType then
    toolType = self:getFillUnitFillType(1)
    local v8 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v8, 1, -1000, toolType, ToolType.UNDEFINED, nil)
  end
end
function FillUnit:actionEventUnload(actionName, inputValue, callbackState, isAnalog)
  self:unloadFillUnits()
end
function FillUnit:updateUnloadActionDisplay()
  if self.spec_fillUnit.unloading ~= nil then
    local index = self:getFillUnits()
    for fillPositionData, v7 in ipairs(...) do
      local v8 = self:getFillUnitFillLevel(fillPositionData)
      local v9 = self:getFillUnitFillType(fillPositionData)
      local v10 = v10:getFillTypeByIndex(v9)
      if not v7.canBeUnloaded then
        continue
      end
      if not (0 < v8) then
        continue
      end
      if not (v10.palletFilename ~= nil) then
        continue
      end
      break
    end
    if self.getCurrentDischargeNode ~= nil then
      entry = self:getCurrentDischargeNode()
      if entry ~= nil then
        index, toolType = self:getDischargeTargetObject(entry)
        if index ~= nil then
        end
      end
    end
    entry:setActionEventActive(superFunc.unloadActionEventId, display)
  end
end
FillActivatable = {}
local fillUnitMassData = Class(FillActivatable)
function FillActivatable.new(vehicle)
  setmetatable({}, u0)
  return {vehicle = vehicle, fillTypeIndex = FillType.UNKNOWN, activateText = "unknown"}
end
function FillActivatable:getIsActivatable()
  local superFunc = superFunc:getIsActiveForInput(true)
  if superFunc then
    superFunc = superFunc:getFirstValidFillUnitToFill(self.fillTypeIndex)
    if superFunc ~= nil then
      local entry = entry:getFillUnitFillLevel(superFunc)
      local toolType = toolType:getFillUnitCapacity(superFunc)
      if entry >= toolType - 1 then
      end
      entry = entry:getFillUnitAllowsFillType(superFunc, self.fillTypeIndex)
      local index = index:getFillUnitSupportsToolType(superFunc, ToolType.TRIGGER)
      if true and entry and index then
        for v9, v10 in ipairs(self.vehicle.spec_fillUnit.fillTrigger.triggers) do
          local v11 = v10:getIsActivatable(self.vehicle)
          if not v11 then
            continue
          end
          self:updateActivateText(toolType.fillTrigger.isFilling)
          return true
        end
      end
    end
  end
  return false
end
function FillActivatable:run()
  display:setFillUnitIsFilling(not self.vehicle.spec_fillUnit.fillTrigger.isFilling)
  self:updateActivateText(self.vehicle.spec_fillUnit.fillTrigger.isFilling)
end
function FillActivatable.activate(fillUnitMassData)
  superFunc:addDrawable(fillUnitMassData)
end
function FillActivatable.deactivate(fillUnitMassData)
  superFunc:removeDrawable(fillUnitMassData)
end
function FillActivatable:draw()
  if self.fillTypeIndex == FillType.FUEL then
    superFunc:showFuelContext(self.vehicle)
  end
end
function FillActivatable:updateActivateText(isFilling)
  if isFilling then
    local entry = string.format(self.vehicle.spec_fillUnit.texts.stopRefill, self.vehicle.typeDesc)
    self.activateText = entry
    return
  end
  entry = string.format(display.texts.startRefill, self.vehicle.typeDesc)
  self.activateText = entry
end
function FillActivatable:setFillType(fillTypeIndex)
  self.fillTypeIndex = fillTypeIndex
end
