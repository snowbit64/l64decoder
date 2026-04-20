-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetMotorTurnedOnEvent.lua")
source("dataS/scripts/vehicles/specializations/events/MotorGearShiftEvent.lua")
Motorized = {DAMAGED_USAGE_INCREASE = 0.3}
function Motorized.initSpecialization()
  local v3 = v3:getText("configuration_motorSetup")
  v0:addConfigurationType("motor", v3, "motorized", nil, Motorized.getStoreAdditionalConfigData, nil, ConfigurationUtil.SELECTOR_MULTIOPTION, nil, nil, nil, 1)
  v0:addSpecType("fuel", "shopListAttributeIconFuel", Motorized.loadSpecValueFuel, Motorized.getSpecValueFuelDiesel, "vehicle")
  v0:addSpecType("electricCharge", "shopListAttributeIconElectricCharge", Motorized.loadSpecValueFuel, Motorized.getSpecValueFuelElectricCharge, "vehicle")
  v0:addSpecType("methane", "shopListAttributeIconMethane", Motorized.loadSpecValueFuel, Motorized.getSpecValueFuelMethane, "vehicle")
  v0:addSpecType("maxSpeed", "shopListAttributeIconMaxSpeed", Motorized.loadSpecValueMaxSpeed, Motorized.getSpecValueMaxSpeed, "vehicle")
  v0:addSpecType("power", "shopListAttributeIconPower", Motorized.loadSpecValuePower, Motorized.getSpecValuePower, "vehicle")
  v0:addSpecType("powerConfig", "shopListAttributeIconPower", Motorized.loadSpecValuePowerConfig, Motorized.getSpecValuePowerConfig, "vehicle")
  v0:addSpecType("transmission", "shopListAttributeIconTransmission", Motorized.loadSpecValueTransmission, Motorized.getSpecValueTransmission, "vehicle")
  Vehicle.registerStateChange("MOTOR_TURN_ON")
  Vehicle.registerStateChange("MOTOR_TURN_OFF")
  Vehicle.xmlSchema:setXMLSpecializationType("Motorized")
  Motorized.registerDifferentialXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.differentialConfigurations.differentialConfiguration(?)")
  Motorized.registerDifferentialXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.differentials")
  Motorized.registerMotorXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.motorConfigurations.motorConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.motorConfigurations.motorConfiguration(?)")
  Motorized.registerConsumerXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.consumerConfigurations.consumerConfiguration(?)")
  Motorized.registerConsumerXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.consumers")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).wheels#maxForwardSpeed", "Max. forward speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels#maxForwardSpeed", "Max. forward speed")
  Motorized.registerSoundXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.sounds")
  Motorized.registerSoundXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.motorConfigurations.motorConfiguration(?).sounds")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.reverseDriveSound#threshold", "Reverse drive sound turn on speed threshold", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.brakeCompressor#capacity", "Brake compressor capacity", 6)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.brakeCompressor#refillFillLevel", "Brake compressor refill threshold", "half of capacity")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.brakeCompressor#fillSpeed", "Brake compressor fill speed", 0.6)
  ParticleUtil.registerParticleXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.exhaustParticleSystems", "exhaustParticleSystem(?)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.exhaustParticleSystems#minScale", "Min. scale", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.exhaustParticleSystems#maxScale", "Max. scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.motorized.exhaustFlap#node", "Exhaust Flap Node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.motorized.exhaustFlap#maxRot", "Max. rotation", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.motorized.exhaustFlap#rotationAxis", "Rotation Axis", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#node", "Effect link node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#filename", "Effect i3d filename")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#minRpmColor", "Min. rpm color", "0 0 0 1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#maxRpmColor", "Max. rpm color", "0.0384 0.0359 0.0627 2.0")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#minRpmScale", "Min. rpm scale", 0.25)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#maxRpmScale", "Max. rpm scale", 0.95)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.exhaustEffects.exhaustEffect(?)#upFactor", "Defines how far the effect goes up in the air in meter", 0.75)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.motorStartDuration", "Motor start duration", "Duration motor takes to start. After this time player can start to drive")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.motorized#clutchNoEngagedWarning", "Warning to be displayed if try to start the engine but clutch not engaged", "warning_motorClutchNoEngaged")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.motorized#clutchCrackingGearWarning", "Warning to be display if user trys to select a gear without pressing clutch pedal", "action_clutchCrackingGear")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.motorized#clutchCrackingGroupWarning", "Warning to be display if user trys to select a gear without pressing clutch pedal", "action_clutchCrackingGroup")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.motorized#turnOnText", "Motor start text", "action_startMotor")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.motorized#turnOffText", "Motor stop text", "action_stopMotor")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.motorized.gearLevers.gearLever(?)#node", "Gear lever node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.motorized.gearLevers.gearLever(?)#centerAxis", "Axis of center bay")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.motorized.gearLevers.gearLever(?)#changeTime", "Time to move lever from one state to another", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.motorized.gearLevers.gearLever(?)#handsOnDelay", "The animation is delayed by this time to have time to put the hand on the lever", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.motorized.gearLevers.gearLever(?).state(?)#gear", "Gear index")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.motorized.gearLevers.gearLever(?).state(?)#group", "Group index")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.motorized.gearLevers.gearLever(?).state(?)#xRot", "X rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.motorized.gearLevers.gearLever(?).state(?)#yRot", "Y rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.motorized.gearLevers.gearLever(?).state(?)#zRot", "Z rotation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.power", "Power")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.maxSpeed", "Max speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.motorConfigurations.motorConfiguration(?)#maxSpeed", "Max speed for shop")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.motorized.motorConfigurations.motorConfiguration(?)#hp", "HP for shop")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.motorized#statsType", "Statistic type", "tractor")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.motorized#forceSpeedHudDisplay", "Force usage of vehicle speed display in hud independent of setting", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.motorized#forceRpmHudDisplay", "Force usage of motor speed display in hud independent of setting", false)
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.dashboards", "rpm | load | speed | speedDir | fuelUsage | motorTemperature | motorTemperatureWarning | clutchPedal | gear | gearGroup | movingDirection | directionForward | directionForwardExclusive | directionBackward | movingDirectionLetter | ignitionState")
  Dashboard.registerDashboardWarningXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.dashboards")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.motorized.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dashboard.GROUP_XML_KEY .. "#isMotorStarting", "Is motor starting")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dashboard.GROUP_XML_KEY .. "#isMotorRunning", "Is motor running")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Motorized:registerMotorXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".motor#type", "Motor type", "vehicle")
  self:register(XMLValueType.STRING, v1 .. ".motor#startAnimationName", "Motor start animation", "vehicle")
  self:register(XMLValueType.INT, v1 .. "#consumerConfigurationIndex", "Consumer configuration index", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#minRpm", "Min. RPM", 1000)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#maxRpm", "Max. RPM", 1800)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#minSpeed", "Min. driving speed", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#maxForwardSpeed", "Max. forward speed")
  self:register(XMLValueType.FLOAT, v1 .. ".motor#maxBackwardSpeed", "Max. backward speed")
  self:register(XMLValueType.FLOAT, v1 .. ".motor#accelerationLimit", "Acceleration limit", 2)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#brakeForce", "Brake force", 10)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#lowBrakeForceScale", "Low brake force scale", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#lowBrakeForceSpeedLimit", "Low brake force speed limit (below this speed the lowBrakeForceScale is activated)", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#torqueScale", "Scale factor for torque curve", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#ptoMotorRpmRatio", "PTO to motor rpm ratio", 4)
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#minForwardGearRatio", "Min. forward gear ratio")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#maxForwardGearRatio", "Max. forward gear ratio")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#minBackwardGearRatio", "Min. backward gear ratio")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#maxBackwardGearRatio", "Max. backward gear ratio")
  self:register(XMLValueType.TIME, v1 .. ".transmission#gearChangeTime", "Gear change time")
  self:register(XMLValueType.TIME, v1 .. ".transmission#autoGearChangeTime", "Auto gear change time")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#axleRatio", "Axle ratio", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".transmission#startGearThreshold", "Adjusts which gear is used as start gear", VehicleMotor.GEAR_START_THRESHOLD)
  self:register(XMLValueType.FLOAT, v1 .. ".motor.torque(?)#normRpm", "Norm RPM (0-1)")
  self:register(XMLValueType.FLOAT, v1 .. ".motor.torque(?)#rpm", "RPM")
  self:register(XMLValueType.FLOAT, v1 .. ".motor.torque(?)#torque", "Torque")
  self:register(XMLValueType.FLOAT, v1 .. ".motor#rotInertia", "Rotation inertia", "Peak. motor torque / 600")
  self:register(XMLValueType.FLOAT, v1 .. ".motor#dampingRateScale", "Scales motor damping rate", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motor#rpmSpeedLimit", "Motor rotation acceleration limit")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission.forwardGear(?)#gearRatio", "Gear ratio")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission.forwardGear(?)#maxSpeed", "Gear ratio")
  self:register(XMLValueType.BOOL, v1 .. ".transmission.forwardGear(?)#defaultGear", "Gear ratio")
  self:register(XMLValueType.STRING, v1 .. ".transmission.forwardGear(?)#name", "Gear name to display")
  self:register(XMLValueType.STRING, v1 .. ".transmission.forwardGear(?)#reverseName", "Gear name to display (if reverse direction is active)")
  self:register(XMLValueType.STRING, v1 .. ".transmission.forwardGear(?)#actionName", "Input Action to select this gear", "SHIFT_GEAR_SELECT_X")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission.backwardGear(?)#gearRatio", "Gear ratio")
  self:register(XMLValueType.FLOAT, v1 .. ".transmission.backwardGear(?)#maxSpeed", "Gear ratio")
  self:register(XMLValueType.BOOL, v1 .. ".transmission.backwardGear(?)#defaultGear", "Gear ratio")
  self:register(XMLValueType.STRING, v1 .. ".transmission.backwardGear(?)#name", "Gear name to display")
  self:register(XMLValueType.STRING, v1 .. ".transmission.backwardGear(?)#reverseName", "Gear name to display (if reverse direction is active)")
  self:register(XMLValueType.STRING, v1 .. ".transmission.backwardGear(?)#actionName", "Input Action to select this gear", "SHIFT_GEAR_SELECT_X")
  self:register(XMLValueType.STRING, v1 .. ".transmission.groups#type", "Type of groups (powershift/default)", "default")
  self:register(XMLValueType.TIME, v1 .. ".transmission.groups#changeTime", "Change time if default type", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".transmission.groups.group(?)#ratio", "Ratio while stage active")
  self:register(XMLValueType.BOOL, v1 .. ".transmission.groups.group(?)#isDefault", "Is default stage", false)
  self:register(XMLValueType.STRING, v1 .. ".transmission.groups.group(?)#name", "Gear name to display")
  self:register(XMLValueType.STRING, v1 .. ".transmission.groups.group(?)#actionName", "Input Action to select this group", "SHIFT_GROUP_SELECT_X")
  self:register(XMLValueType.BOOL, v1 .. ".transmission.directionChange#useGroup", "Use group as reverse change", false)
  self:register(XMLValueType.INT, v1 .. ".transmission.directionChange#reverseGroupIndex", "Group will be activated while direction is changed", 1)
  self:register(XMLValueType.BOOL, v1 .. ".transmission.directionChange#useGear", "Use gear as reverse change", false)
  self:register(XMLValueType.INT, v1 .. ".transmission.directionChange#reverseGearIndex", "Gear will be activated while direction is changed", 1)
  self:register(XMLValueType.TIME, v1 .. ".transmission.directionChange#changeTime", "Direction change time", 0.5)
  self:register(XMLValueType.BOOL, v1 .. ".transmission.manualShift#gears", "Defines if gears can be shifted manually", true)
  self:register(XMLValueType.BOOL, v1 .. ".transmission.manualShift#groups", "Defines if groups can be shifted manually", true)
  self:register(XMLValueType.L10N_STRING, v1 .. ".transmission#name", "Name of transmission to display in the shop")
  self:register(XMLValueType.STRING, v1 .. ".transmission#param", "Parameter to insert in transmission name")
  self:register(XMLValueType.FLOAT, v1 .. ".motorStartDuration", "Motor start duration", "Duration motor takes to start. After this time player can start to drive")
end
function Motorized:registerDifferentialXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. ".differentials.differential(?)#torqueRatio", "Torque ratio", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".differentials.differential(?)#maxSpeedRatio", "Max. speed ratio", 1.3)
  self:register(XMLValueType.INT, v1 .. ".differentials.differential(?)#wheelIndex1", "Wheel index 1")
  self:register(XMLValueType.INT, v1 .. ".differentials.differential(?)#wheelIndex2", "Wheel index 2")
  self:register(XMLValueType.INT, v1 .. ".differentials.differential(?)#differentialIndex1", "Differential index 1")
  self:register(XMLValueType.INT, v1 .. ".differentials.differential(?)#differentialIndex2", "Differential index 2")
end
function Motorized:registerConsumerXMLPaths(v1)
  self:register(XMLValueType.L10N_STRING, v1 .. "#consumersEmptyWarning", "Consumers empty warning", "warning_motorFuelEmpty")
  self:register(XMLValueType.INT, v1 .. ".consumer(?)#fillUnitIndex", "Fill unit index", 1)
  self:register(XMLValueType.STRING, v1 .. ".consumer(?)#fillType", "Fill type name")
  self:register(XMLValueType.FLOAT, v1 .. ".consumer(?)#usage", "Usage in l/h", 1)
  self:register(XMLValueType.BOOL, v1 .. ".consumer(?)#permanentConsumption", "Do permanent consumption", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".consumer(?)#refillLitersPerSecond", "Refill liters per second", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".consumer(?)#refillCapacityPercentage", "Refill capacity percentage", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".consumer(?)#capacity", "If defined the capacity of the fillUnit fill be overwritten with this value")
end
function Motorized.registerSoundXMLPaths(schema, baseKey)
  SoundManager.registerSampleXMLPaths(schema, baseKey, "motorStart")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "motorStop")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearbox(?)")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "clutchCracking")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearEngaged")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearDisengaged")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearLeverStart")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearLeverEnd")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearGroupLeverStart")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearGroupLeverEnd")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "gearGroupChange")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "blowOffValve")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "retarder")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "motor(?)")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "airCompressorStart")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "airCompressorStop")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "airCompressorRun")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "compressedAir")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "airRelease")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "reverseDrive")
  SoundManager.registerSampleXMLPaths(schema, baseKey, "brake")
end
function Motorized.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(VehicleSettings, specializations)
  end
  return v1
end
function Motorized.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onStartMotor")
  SpecializationUtil.registerEvent(vehicleType, "onStopMotor")
  SpecializationUtil.registerEvent(vehicleType, "onGearDirectionChanged")
  SpecializationUtil.registerEvent(vehicleType, "onGearChanged")
  SpecializationUtil.registerEvent(vehicleType, "onGearGroupChanged")
  SpecializationUtil.registerEvent(vehicleType, "onClutchCreaking")
end
function Motorized.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadDifferentials", Motorized.loadDifferentials)
  SpecializationUtil.registerFunction(vehicleType, "loadMotor", Motorized.loadMotor)
  SpecializationUtil.registerFunction(vehicleType, "loadGears", Motorized.loadGears)
  SpecializationUtil.registerFunction(vehicleType, "loadGearGroups", Motorized.loadGearGroups)
  SpecializationUtil.registerFunction(vehicleType, "loadExhaustEffects", Motorized.loadExhaustEffects)
  SpecializationUtil.registerFunction(vehicleType, "onExhaustEffectI3DLoaded", Motorized.onExhaustEffectI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadSounds", Motorized.loadSounds)
  SpecializationUtil.registerFunction(vehicleType, "loadConsumerConfiguration", Motorized.loadConsumerConfiguration)
  SpecializationUtil.registerFunction(vehicleType, "getIsMotorStarted", Motorized.getIsMotorStarted)
  SpecializationUtil.registerFunction(vehicleType, "getIsMotorInNeutral", Motorized.getIsMotorInNeutral)
  SpecializationUtil.registerFunction(vehicleType, "getCanMotorRun", Motorized.getCanMotorRun)
  SpecializationUtil.registerFunction(vehicleType, "getStopMotorOnLeave", Motorized.getStopMotorOnLeave)
  SpecializationUtil.registerFunction(vehicleType, "getMotorNotAllowedWarning", Motorized.getMotorNotAllowedWarning)
  SpecializationUtil.registerFunction(vehicleType, "startMotor", Motorized.startMotor)
  SpecializationUtil.registerFunction(vehicleType, "stopMotor", Motorized.stopMotor)
  SpecializationUtil.registerFunction(vehicleType, "updateMotorProperties", Motorized.updateMotorProperties)
  SpecializationUtil.registerFunction(vehicleType, "controlVehicle", Motorized.controlVehicle)
  SpecializationUtil.registerFunction(vehicleType, "updateConsumers", Motorized.updateConsumers)
  SpecializationUtil.registerFunction(vehicleType, "updateMotorTemperature", Motorized.updateMotorTemperature)
  SpecializationUtil.registerFunction(vehicleType, "getMotor", Motorized.getMotor)
  SpecializationUtil.registerFunction(vehicleType, "getMotorStartTime", Motorized.getMotorStartTime)
  SpecializationUtil.registerFunction(vehicleType, "getMotorType", Motorized.getMotorType)
  SpecializationUtil.registerFunction(vehicleType, "getMotorRpmPercentage", Motorized.getMotorRpmPercentage)
  SpecializationUtil.registerFunction(vehicleType, "getMotorRpmReal", Motorized.getMotorRpmReal)
  SpecializationUtil.registerFunction(vehicleType, "getMotorLoadPercentage", Motorized.getMotorLoadPercentage)
  SpecializationUtil.registerFunction(vehicleType, "getMotorBlowOffValveState", Motorized.getMotorBlowOffValveState)
  SpecializationUtil.registerFunction(vehicleType, "getMotorDifferentialSpeed", Motorized.getMotorDifferentialSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getConsumerFillUnitIndex", Motorized.getConsumerFillUnitIndex)
  SpecializationUtil.registerFunction(vehicleType, "getAirConsumerUsage", Motorized.getAirConsumerUsage)
  SpecializationUtil.registerFunction(vehicleType, "getTraveledDistanceStatsActive", Motorized.getTraveledDistanceStatsActive)
  SpecializationUtil.registerFunction(vehicleType, "setGearLeversState", Motorized.setGearLeversState)
  SpecializationUtil.registerFunction(vehicleType, "generateShiftAnimation", Motorized.generateShiftAnimation)
  SpecializationUtil.registerFunction(vehicleType, "getGearInfoToDisplay", Motorized.getGearInfoToDisplay)
  SpecializationUtil.registerFunction(vehicleType, "setTransmissionDirection", Motorized.setTransmissionDirection)
  SpecializationUtil.registerFunction(vehicleType, "getDirectionChangeMode", Motorized.getDirectionChangeMode)
  SpecializationUtil.registerFunction(vehicleType, "getIsManualDirectionChangeAllowed", Motorized.getIsManualDirectionChangeAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getGearShiftMode", Motorized.getGearShiftMode)
  SpecializationUtil.registerFunction(vehicleType, "stopVehicle", Motorized.stopVehicle)
end
function Motorized.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getBrakeForce", Motorized.getBrakeForce)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", Motorized.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", Motorized.removeFromPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsOperating", Motorized.getIsOperating)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDeactivateOnLeave", Motorized.getDeactivateOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDeactivateLightsOnLeave", Motorized.getDeactivateLightsOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDashboardGroupFromXML", Motorized.loadDashboardGroupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDashboardGroupActive", Motorized.getIsDashboardGroupActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActiveForInteriorLights", Motorized.getIsActiveForInteriorLights)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActiveForWipers", Motorized.getIsActiveForWipers)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUsageCausesDamage", Motorized.getUsageCausesDamage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getName", Motorized.getName)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Motorized.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowered", Motorized.getIsPowered)
end
function Motorized.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onGearDirectionChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onGearChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onGearGroupChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onClutchCreaking", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onReverseDirectionChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleSettingChanged", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onAIJobStarted", Motorized)
  SpecializationUtil.registerEventListener(vehicleType, "onAIJobFinished", Motorized)
end
function Motorized:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.motor.animationNodes.animationNode", "motor")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.differentialConfigurations", "vehicle.motorized.differentialConfigurations")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.motorConfigurations", "vehicle.motorized.motorConfigurations")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.maximalAirConsumptionPerFullStop", "vehicle.motorized.consumerConfigurations.consumerConfiguration.consumer(with fill type 'air')#usage (is now in usage per second at full brake power)")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.indoorHud.rpm", "vehicle.motorized.dashboards.dashboard with valueType 'rpm'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.indoorHud.speed", "vehicle.motorized.dashboards.dashboard with valueType 'speed'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.indoorHud.fuelUsage", "vehicle.motorized.dashboards.dashboard with valueType 'fuelUsage'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.indoorHud.fuel", "fillUnit.dashboard with valueType 'fillLevel'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.motor", "vehicle.motorized.motorConfigurations.motorConfiguration(?).motor")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.transmission", "vehicle.motorized.motorConfigurations.motorConfiguration(?).transmission")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.fuelCapacity", "vehicle.motorized.consumerConfigurations.consumerConfiguration.consumer#capacity")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.motorized.motorConfigurations.motorConfiguration(?).fuelCapacity", "vehicle.motorized.consumerConfigurations.consumerConfiguration.consumer#capacity")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle#consumerConfigurationIndex", "vehicle.motorized.motorConfigurations.motorConfiguration(?)#consumerConfigurationIndex'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.motorized.exhaustParticleSystems#count")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.motorized.exhaustParticleSystems.exhaustParticleSystem1", "vehicle.motorized.exhaustParticleSystems.exhaustParticleSystem")
  self.spec_motorized.motorizedNode = nil
  for v6, v7 in pairs(self.components) do
    if not v7.motorized then
      continue
    end
    v2.motorizedNode = v7.node
    break
  end
  v2.directionChangeMode = VehicleMotor.DIRECTION_CHANGE_MODE_AUTOMATIC
  v2.gearShiftMode = VehicleMotor.SHIFT_MODE_AUTOMATIC
  v3 = string.format("vehicle.motorized.motorConfigurations.motorConfiguration(%d)", self.configurations.motor - 1)
  self:loadDifferentials(self.xmlFile, self.differentialIndex)
  self:loadMotor(self.xmlFile, self.configurations.motor)
  self:loadSounds(self.xmlFile, "vehicle.motorized.sounds")
  v4 = v4:hasProperty(v3)
  if v4 then
    self:loadSounds(self.xmlFile, v3 .. ".sounds")
  end
  self:loadConsumerConfiguration(self.xmlFile, v2.consumerConfigurationIndex)
  if self.isClient then
    self:loadExhaustEffects(self.xmlFile)
  end
  v2.gearLevers = {}
  v2.activeGearLeverInterpolators = {}
  v4:iterate("vehicle.motorized.gearLevers.gearLever", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {node = v3}.node ~= nil then
      v3 = v3:getValue(savegame .. "#centerAxis")
      v3 = v3:getValue(savegame .. "#changeTime", 500)
      v3 = v3:getValue(savegame .. "#handsOnDelay", 0)
      local v4 = getRotation({node = v3, centerAxis = v3, changeTime = v3, handsOnDelay = v3}.node)
      v3:iterate(savegame .. ".state", function(self, savegame)
        local v3 = v3:getValue(savegame .. "#gear")
        v3 = v3:getValue(savegame .. "#group")
        if {gear = v3, group = v3}.gear == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L149
        end
        v2.node = u1.node
        v2.gearLever = u1
        local v3, v4, v5 = getRotation(u1.node)
        local v6 = v6:getValue(savegame .. "#xRot", v3)
        local v7 = v7:getValue(savegame .. "#yRot", v4)
        local v8 = v8:getValue(savegame .. "#zRot", v5)
        v2.rotation = {v6, v7, v8}
        local v11 = v11:getValue(savegame .. "#xRot")
        if v11 == nil then
        end
        local v12 = v12:getValue(savegame .. "#yRot")
        if v12 == nil then
        end
        local v13 = v13:getValue(savegame .. "#zRot")
        if v13 == nil then
        end
        v2.useRotation = {v10, v11, true}
        v2.curRotation = {v6, v7, v8}
        table.insert(u1.states, v2)
        return
        Logging.xmlWarning(u0.xmlFile, "Unable to load gear lever state. Missing gear or group! '%s'", savegame)
      end)
      table.insert(u1.gearLevers, {node = v3, centerAxis = v3, changeTime = v3, handsOnDelay = v3, curTarget = {}, states = {}})
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Unable to load gear lever. Missing node! '%s'", savegame)
  end)
  v2.stopMotorOnLeave = true
  v2.motorStartDuration = 0
  if v2.samples ~= nil and v2.samples.motorStart ~= nil then
    v2.motorStartDuration = v2.samples.motorStart.duration
  end
  v5 = v5:getValue("vehicle.motorized.motorStartDuration", v2.motorStartDuration)
  v2.motorStartDuration = v5 or 0
  v4 = v4:hasProperty(v3)
  if v4 then
    v4 = v4:getValue(v3 .. ".motorStartDuration", v2.motorStartDuration)
    v2.motorStartDuration = v4
  end
  v4 = v4:getValue("vehicle.motorized#clutchNoEngagedWarning", "warning_motorClutchNoEngaged", self.customEnvironment)
  v2.clutchNoEngagedWarning = v4
  v4 = v4:getValue("vehicle.motorized#clutchCrackingGearWarning", "action_clutchCrackingGear", self.customEnvironment)
  v2.clutchCrackingGearWarning = v4
  v4 = v4:getValue("vehicle.motorized#clutchCrackingGroupWarning", "action_clutchCrackingGroup", self.customEnvironment)
  v2.clutchCrackingGroupWarning = v4
  v4 = v4:getValue("vehicle.motorized#turnOnText", "action_startMotor", self.customEnvironment)
  v2.turnOnText = v4
  v4 = v4:getValue("vehicle.motorized#turnOffText", "action_stopMotor", self.customEnvironment)
  v2.turnOffText = v4
  v2.speedDisplayScale = 1
  v2.motorStartTime = 0
  v2.actualLoadPercentage = 0
  v2.smoothedLoadPercentage = 0
  v2.maxDecelerationDuringBrake = 0
  v2.lastControlParameters = {acceleratorPedal = nil, maxSpeed = nil, maxAcceleration = nil, minMotorRotSpeed = nil, maxMotorRotSpeed = nil, maxMotorRotAcceleration = nil, minGearRatio = nil, maxGearRatio = nil, maxClutchTorque = nil, neededPtoTorque = nil}
  v2.clutchCrackingTimeOut = math.huge
  v2.clutchState = 0
  v2.clutchStateSent = 0
  v2.isMotorStarted = false
  v4 = v4:getValue("motorStopTimerDuration")
  v2.motorStopTimerDuration = v4
  v2.motorStopTimer = v2.motorStopTimerDuration
  v2.motorNotRequiredTimer = 0
  v2.ignitionState = 0
  v2.motorTemperature = {value = 20, valueSend = 20, valueMax = 120, valueMin = 20, heatingPerMS = 0.0015, coolingByWindPerMS = 0.001}
  v2.motorFan = {enabled = false, enableTemperature = 95, disableTemperature = 85, coolingPerMS = 0.003}
  v2.lastFuelUsage = 0
  v2.lastFuelUsageDisplay = 0
  v2.lastFuelUsageDisplayTime = 0
  v4 = ValueBuffer.new(250)
  v2.fuelUsageBuffer = v4
  v2.lastDefUsage = 0
  v2.lastAirUsage = 0
  v2.lastVehicleDamage = 0
  v4 = v4:getValue("vehicle.motorized#forceSpeedHudDisplay", false)
  v2.forceSpeedHudDisplay = v4
  v4 = v4:getValue("vehicle.motorized#forceRpmHudDisplay", false)
  v2.forceRpmHudDisplay = v4
  v5 = v5:getValue("vehicle.motorized#statsType", "tractor")
  v4 = string.lower(...)
  v2.statsType = v4
  if v2.statsType ~= "tractor" and v2.statsType ~= "car" and v2.statsType ~= "truck" then
    v2.statsType = "tractor"
  end
  v2.statsTypeDistance = v2.statsType .. "Distance"
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "rpm", valueObject = v2.motor, valueFunc = "getLastModulatedMotorRpm", minFunc = 0, maxFunc = "getMaxRpm"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "load", valueObject = v2.motor, valueFunc = "getSmoothLoadPercentage", minFunc = 0, maxFunc = 100, valueFactor = 100})
    local v10 = self:getMotor()
    v10 = v10:getMaximumForwardSpeed()
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "speed", valueObject = self, valueFunc = "getLastSpeed", minFunc = 0, maxFunc = v10 * 3.6})
    local v11 = self:getMotor()
    v11 = v11:getMaximumBackwardSpeed()
    v10 = self:getMotor()
    v10 = v10:getMaximumForwardSpeed()
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "speedDir", valueObject = self, valueFunc = Motorized.getDashboardSpeedDir, minFunc = -v11 * 3.6, maxFunc = v10 * 3.6, centerFunc = 0})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "fuelUsage", valueObject = v2, valueFunc = "lastFuelUsageDisplay"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "motorTemperature", valueObject = v2.motorTemperature, valueFunc = "value", minFunc = "valueMin", maxFunc = "valueMax"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "motorTemperatureWarning", valueObject = v2.motorTemperature, valueFunc = "value", additionalAttributesFunc = Dashboard.warningAttributes, stateFunc = Dashboard.warningState})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "clutchPedal", valueObject = v2.motor, valueFunc = "getSmoothedClutchPedal", minFunc = 0, maxFunc = 1})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "gear", valueObject = v2.motor, valueFunc = "getGearToDisplay", minFunc = 0, maxFunc = math.huge})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "gearGroup", valueObject = v2.motor, valueFunc = "getGearGroupToDisplay", minFunc = 0, maxFunc = math.huge})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "movingDirection", valueObject = v2.motor, valueFunc = "getDrivingDirection", minFunc = -1, maxFunc = 1})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "directionForward", valueObject = v2.motor, valueFunc = function(self)
      local v2 = self:getDrivingDirection()
      if 0 > v2 then
      end
      return true
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "directionForwardExclusive", valueObject = v2.motor, valueFunc = function(self)
      local v2 = self:getDrivingDirection()
      if 0 >= v2 then
      end
      return true
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "directionBackward", valueObject = v2.motor, valueFunc = function(self)
      local v2 = self:getDrivingDirection()
      if v2 >= 0 then
      end
      return true
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "movingDirectionLetter", valueObject = v2.motor, valueFunc = function(self)
      local v2 = self:getDrivingDirection()
      if v2 == 1 then
        return "F"
      end
      v2 = self:getDrivingDirection()
      if v2 == -1 then
        return "R"
      end
      return "N"
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "ignitionState", valueObject = self, valueFunc = Motorized.getMotorIgnitionState, minFunc = 0, maxFunc = 2})
    local v13 = math.random()
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.motorized.dashboards", {valueTypeToLoad = "battery", valueObject = self, valueFunc = 12 + v13 * 0.5 - 0.15, minFunc = 0, maxFunc = 15})
  end
  v4 = v4:loadAnimations(self.xmlFile, "vehicle.motorized.animationNodes", self.components, self, self.i3dMappings)
  v2.animationNodes = v4
  v2.traveledDistanceBuffer = 0
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
  v4 = self:getNextDirtyFlag()
  v2.inputDirtyFlag = v4
  self:registerVehicleSetting(GameSettings.SETTING.DIRECTION_CHANGE_MODE, false)
  self:registerVehicleSetting(GameSettings.SETTING.GEAR_SHIFT_MODE, false)
end
function Motorized:onPostLoad(savegame)
  if self.isServer then
    for v7, v8 in pairs(self.spec_motorized.consumersByFillTypeName) do
      local v9 = self:getFillUnitFillLevel(v8.fillUnitIndex)
      local v11 = self:getFillUnitCapacity(v8.fillUnitIndex)
      if not (v9 < v11 * 0.1) then
        continue
      end
      local v14 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v14, v8.fillUnitIndex, v11 * 0.1 - v9, v8.fillType, ToolType.UNDEFINED)
      v14 = v14:getCostPerLiter(v8.fillType)
      local v15 = self:getOwnerFarmId()
      v13:updateFarmStats(v15, "expenses", (v11 * 0.1 - v9) * v14 * 2)
      local v16 = self:getOwnerFarmId()
      v13:addMoney(-((v11 * 0.1 - v9) * v14 * 2), v16, MoneyType.PURCHASE_FUEL)
    end
    if 0 < v3 then
      v7 = self:getOwnerFarmId()
      v4:addMoneyChange(-v3, v7, MoneyType.PURCHASE_FUEL, true)
    end
  end
  v2.propellantFillUnitIndices = {}
  for v6, v7 in pairs({FillType.DIESEL, FillType.DEF, FillType.ELECTRICCHARGE, FillType.METHANE}) do
    v8 = v8:getFillTypeNameByIndex(v7)
    if not (v2.consumersByFillTypeName[v8] ~= nil) then
      continue
    end
    table.insert(v2.propellantFillUnitIndices, v2.consumersByFillTypeName[v8].fillUnitIndex)
  end
  if v2.motor ~= nil then
    v3:postLoad(savegame)
  end
end
function Motorized:onDelete()
  if self.spec_motorized.motor ~= nil then
    v2:delete()
  end
  if v1.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(v1.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
    v1.sharedLoadRequestIds = nil
  end
  ParticleUtil.deleteParticleSystems(v1.exhaustParticleSystems)
  v2:deleteSamples(v1.samples)
  v2:deleteSamples(v1.motorSamples)
  v2:deleteSamples(v1.gearboxSamples)
  v2:deleteAnimations(v1.animationNodes)
end
function Motorized:onReadStream(streamId, connection)
  local isMotorStarted = streamReadBool(streamId)
  if isMotorStarted then
    self:startMotor(true)
    return
  end
  self:stopMotor(true)
end
function Motorized:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_motorized.isMotorStarted)
end
function Motorized:onReadUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local v5 = streamReadBool(streamId)
    if v5 then
      local v6 = streamReadUIntN(streamId, 11)
      local v7 = v7:getMaxRpm()
      local v8 = v8:getMinRpm()
      local v11 = v11:getMinRpm()
      v7:setEqualizedMotorRpm(v6 / 2047 * (v7 - v8) + v11)
      v7 = streamReadUIntN(streamId, 7)
      self.spec_motorized.motor.rawLoadPercentage = v7 / 127
      local v9 = streamReadBool(streamId)
      self.spec_motorized.brakeCompressor.doFill = v9
      v8 = streamReadUIntN(streamId, 5)
      v9:onManualClutchChanged(v8 / 31)
    end
    v5 = streamReadBool(streamId)
    -- if not v5 then goto L113 end
    v5:readGearDataFromStream(streamId)
    return
  end
  v5 = streamReadBool(streamId)
  if v5 then
    v5 = streamReadBool(streamId)
    if v5 then
      v6 = streamReadUIntN(streamId, 7)
      v4.clutchState = v6 / 127
      v5:onManualClutchChanged(v4.clutchState)
      if 0 < v4.clutchState then
        self:raiseActive()
      end
    end
  end
end
function Motorized:onWriteUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v5 = streamWriteBool(streamId, self.spec_motorized.isMotorStarted)
    if v5 then
      local v6 = v6:getMaxRpm()
      local v7 = v7:getMinRpm()
      local v9 = v9:getEqualizedMotorRpm()
      local v10 = v10:getMinRpm()
      v6 = MathUtil.clamp((v9 - v10) / (v6 - v7), 0, 1)
      v7 = math.floor(v6 * 2047)
      streamWriteUIntN(streamId, v7, 11)
      streamWriteUIntN(streamId, 127 * self.spec_motorized.actualLoadPercentage, 7)
      streamWriteBool(streamId, self.spec_motorized.brakeCompressor.doFill)
      local v11 = v11:getClutchPedal()
      streamWriteUIntN(streamId, 31 * v11, 5)
    end
    local v8 = bitAND(dirtyMask, v4.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    -- if not v5 then goto L146 end
    v5:writeGearDataToStream(streamId)
    return
  end
  v8 = bitAND(dirtyMask, v4.inputDirtyFlag)
  if v8 == 0 then
  end
  v5 = v5(v6, true)
  if v5 then
    if v4.clutchState == v4.clutchStateSent then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteUIntN(streamId, 127 * v4.clutchState, 7)
      v4.clutchStateSent = v4.clutchState
    end
  end
end
function Motorized:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.getAxisForward ~= nil then
    local v7 = self:getAxisForward()
  end
  v7 = self:getIsMotorStarted()
  if v7 then
    v7:update(dt)
    if self.isServer then
      v5.actualLoadPercentage = v5.motor.rawLoadPercentage
    end
    v7 = v7:getSmoothLoadPercentage()
    v5.smoothedLoadPercentage = v7
    if self.getCruiseControlState ~= nil then
      v7 = self:getCruiseControlState()
      if v7 ~= Drivable.CRUISECONTROL_STATE_OFF then
      end
    end
    if self.isServer then
      self:updateConsumers(dt, v6)
      v7 = self:getVehicleDamage()
      local v8 = math.abs(v7 - v5.lastVehicleDamage)
      if 0.05 < v8 then
        self:updateMotorProperties()
        v8 = self:getVehicleDamage()
        v5.lastVehicleDamage = v8
      end
    end
    if self.isClient then
      local v11 = v11:getLastModulatedMotorRpm()
      local v12 = math.min((v11 - v5.motor.minRpm) / (v5.motor.maxRpm - v5.motor.minRpm), 1)
      v11 = math.max(v12, 0)
      local v13 = math.min(v5.smoothedLoadPercentage, 1)
      v12 = math.max(v13, -1)
      v13:setSamplesLoopSynthesisParameters(v5.motorSamples, v11, v12)
      v13 = v13:getIsSamplePlaying(v5.motorSamples[1], 1.5 * dt)
      if v13 then
        if v5.samples.airCompressorRun ~= nil and v5.consumersByFillTypeName ~= nil and v5.consumersByFillTypeName.AIR ~= nil then
          if not v5.consumersByFillTypeName.AIR.doRefill then
            local v14 = v14:getIsSamplePlaying(v5.samples.airCompressorRun)
            -- if not v14 then goto L271 end
            v14:stopSample(v5.samples.airCompressorRun)
            v14:playSample(v5.samples.airCompressorStop)
          else
            v14 = v14:getIsSamplePlaying(v5.samples.airCompressorRun)
            if not v14 then
              if v5.samples.airCompressorStart ~= nil then
                v14 = v14:getIsSamplePlaying(v5.samples.airCompressorStart, 1.5 * dt)
                if not v14 and v5.brakeCompressor.playSampleRunTime == nil then
                  v14:playSample(v5.samples.airCompressorStart)
                  v5.brakeCompressor.playSampleRunTime = g_currentMission.time + v5.samples.airCompressorStart.duration
                end
                v14 = v14:getIsSamplePlaying(v7.airCompressorStart)
                -- if v14 then goto L271 end
                v5.brakeCompressor.playSampleRunTime = nil
                v14:stopSample(v7.airCompressorStart)
                v14:playSample(v7.airCompressorRun)
              else
                v14:playSample(v5.samples.airCompressorRun)
              end
            end
          end
        end
        if v5.compressionSoundTime <= g_currentMission.time then
          v13:playSample(v7.airRelease)
          local v15 = math.random(10000, 40000)
          v5.compressionSoundTime = g_currentMission.time + v15
        end
        v14 = self:getDecelerationAxis()
        if 0 < v14 then
          v14 = self:getLastSpeed()
          if 1 >= v14 then
          end
        end
        if v7.compressedAir ~= nil then
          if v13 then
            v7.compressedAir.brakeTime = v7.compressedAir.brakeTime + dt
          elseif 0 < v7.compressedAir.brakeTime then
            v7.compressedAir.lastBrakeTime = v7.compressedAir.brakeTime
            v7.compressedAir.brakeTime = 0
            v14:playSample(v7.compressedAir)
          end
        end
        if 0 < v5.motor.blowOffValveState then
          v14 = v14:getIsSamplePlaying(v7.blowOffValve)
          -- if v14 then goto L389 end
          v14:playSample(v7.blowOffValve)
        else
          v14 = v14:getIsSamplePlaying(v7.blowOffValve)
          if v14 then
            v14:stopSample(v7.blowOffValve)
          end
        end
        if v7.brake ~= nil then
          if v13 then
            -- if v5.isBrakeSamplePlaying then goto L421 end
            v14:playSample(v7.brake)
            v5.isBrakeSamplePlaying = true
          elseif v5.isBrakeSamplePlaying then
            v14:stopSample(v7.brake)
            v5.isBrakeSamplePlaying = false
          end
        end
        if v7.reverseDrive ~= nil then
          if self.getReverserDirection == nil then
          else
            v14 = self:getReverserDirection()
          end
          local v16 = self:getLastSpeed()
          if v5.reverseDriveThreshold < v16 and self.movingDirection == v14 then
          end
          v16 = v16:getIsSamplePlaying(v7.reverseDrive)
          if not v16 then
            -- if not v15 then goto L465 end
            v16:playSample(v7.reverseDrive)
          elseif not v15 then
            v16:stopSample(v7.reverseDrive)
          end
        end
      end
      for v16, v17 in pairs(v5.activeGearLeverInterpolators) do
        if v17.interpolations[v17.currentInterpolation] ~= nil then
          if 0 < v17.handsOnDelay then
            v17.handsOnDelay = v17.handsOnDelay - dt
            if v17.handsOnDelay <= 0 then
              if v17.isGear then
                -- if v5.samples.gearLeverStart then goto L513 end
              end
              local v20 = v20:getIsSamplePlaying(v5.samples.gearGroupLeverStart)
              if not v20 then
                v20:playSample(v5.samples.gearGroupLeverStart)
              end
            end
            if not (self.setCharacterTargetNodeStateDirty ~= nil) then
              continue
            end
            self:setCharacterTargetNodeStateDirty(v16.node, true)
            continue
          end
          local v22, v23, v24 = getRotation(v16.node)
          v16.curRotation[1] = v22
          v16.curRotation[2] = v23
          v16.curRotation[3] = v24
          if v18.speed < 0 then
          end
          v22 = v19(v16.curRotation[v18.axis] + v18.speed * dt, v18.tar)
          v16.curRotation[v18.axis] = v22
          setRotation(v16.node, v16.curRotation[1], v16.curRotation[2], v16.curRotation[3])
          if v16.curRotation[v18.axis] == v18.tar then
            v17.currentInterpolation = v17.currentInterpolation + 1
            if #v17.interpolations < v17.currentInterpolation then
              v5.activeGearLeverInterpolators[v16] = nil
              if v17.isResetPosition and self.resetCharacterTargetNodeStateDefaults ~= nil then
                self:resetCharacterTargetNodeStateDefaults(v16.node)
              end
              if v17.isGear then
                -- if v5.samples.gearLeverEnd then goto L641 end
              end
              local v21 = v21:getIsSamplePlaying(v5.samples.gearGroupLeverEnd)
              if not v21 then
                v21:playSample(v5.samples.gearGroupLeverEnd)
              end
            end
          end
          if not (self.setCharacterTargetNodeStateDirty ~= nil) then
            continue
          end
          self:setCharacterTargetNodeStateDirty(v16.node)
        else
          v5.activeGearLeverInterpolators[v16] = nil
        end
      end
    end
    if self.isServer then
      v7 = self:getIsAIActive()
      if not v7 then
        v7 = self:getTraveledDistanceStatsActive()
        if v7 and 0.001 < self.lastMovedDistance then
          v5.traveledDistanceBuffer = v5.traveledDistanceBuffer + self.lastMovedDistance
          if 10 < v5.traveledDistanceBuffer then
            v7 = self:getOwnerFarmId()
            v9:updateFarmStats(v7, "traveledDistance", v5.traveledDistanceBuffer * 0.001)
            v9:updateFarmStats(v7, v5.statsTypeDistance, v5.traveledDistanceBuffer * 0.001)
            v5.traveledDistanceBuffer = 0
          end
        end
      end
    end
  end
end
function Motorized:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if not g_currentMission.missionInfo.automaticMotorStartEnabled and self.spec_motorized.isMotorStarted then
      local v6 = self:getIsAIActive()
      if not v6 then
        if self.getIsEntered ~= nil then
          v6 = self:getIsEntered()
        end
        if self.getIsControlled ~= nil then
          local v7 = self:getIsControlled()
        end
        if not v6 and not v7 then
          for v12, v13 in pairs(g_currentMission.players) do
            if not v13.isControlled then
              continue
            end
            local v14 = calcDistanceFrom(self.rootNode, v13.rootNode)
            if not (v14 < 250) then
              continue
            end
            break
          end
          if not v8 then
            for v12, v13 in pairs(g_currentMission.enterables) do
              if not (v13.spec_enterable ~= nil) then
                continue
              end
              if not v13.spec_enterable.isControlled then
                continue
              end
              v14 = calcDistanceFrom(self.rootNode, v13.rootNode)
              if not (v14 < 250) then
                continue
              end
              break
            end
          end
          if v8 then
            v5.motorStopTimer = v5.motorStopTimerDuration
          else
            v5.motorStopTimer = v5.motorStopTimer - dt
            if v5.motorStopTimer <= 0 then
              self:stopMotor()
            end
          end
        end
      end
    end
    if v5.isMotorStarted then
      self:updateMotorTemperature(dt)
    end
    if g_currentMission.missionInfo.automaticMotorStartEnabled then
      if not v5.isMotorStarted then
        if self.getIsControlled ~= nil then
          v6 = self:getIsControlled()
          if v6 then
            v6 = self:getCanMotorRun()
            if v6 then
              self:startMotor(true)
            end
          end
        end
        v6 = self:getRequiresPower()
        -- if not v6 then goto L177 end
        v6 = self:getCanMotorRun()
        -- if not v6 then goto L177 end
        self:startMotor(true)
      elseif self.getIsControlled ~= nil then
        v6 = self:getIsControlled()
        if not v6 then
          v6 = self:getStopMotorOnLeave()
          if v6 then
            v5.motorNotRequiredTimer = v5.motorNotRequiredTimer + dt
            if 250 < v5.motorNotRequiredTimer then
              self:stopMotor(true)
            end
          end
          self:raiseActive()
        end
      end
    end
  end
  if self.isClient then
    v6 = self:getIsMotorStarted()
    if v6 then
      if v5.exhaustParticleSystems ~= nil then
        for v9, v10 in pairs(v5.exhaustParticleSystems) do
          local v15 = v15:getEqualizedMotorRpm()
          local v16 = v16:getMaxRpm()
          v11 = MathUtil.lerp(v5.exhaustParticleSystems.minScale, v5.exhaustParticleSystems.maxScale, v15 / v16)
          ParticleUtil.setEmitCountScale(v5.exhaustParticleSystems, v11)
          ParticleUtil.setParticleLifespan(v10, v10.originalLifespan * v11)
        end
      end
      if v5.exhaustFlap ~= nil then
        v10 = math.random()
        v7 = MathUtil.lerp(...)
        v11 = v11:getEqualizedMotorRpm()
        v12 = v12:getMaxRpm()
        v7 = MathUtil.clamp(v7 + v5.exhaustFlap.maxRot * v11 / v12, 0, v5.exhaustFlap.maxRot)
        if v5.exhaustFlap.rotationAxis == 1 then
          setRotation(v5.exhaustFlap.node, v7, 0, 0)
        elseif v5.exhaustFlap.rotationAxis == 2 then
          setRotation(v5.exhaustFlap.node, 0, v7, 0)
        else
          setRotation(v5.exhaustFlap.node, 0, 0, v7)
        end
      end
      if v5.exhaustEffects ~= nil then
        for v9, v10 in pairs(v5.exhaustEffects) do
          v11, v12, v13 = localToWorld(v10.effectNode, 0, 0.5, 0)
          if v10.lastPosition == nil then
            v10.lastPosition = {v11, v12, v13}
          end
          local v17, v18, v19 = localToWorld(v10.effectNode, 0, 1, 0)
          local v20, v21, v22 = worldToLocal(v10.effectNode, v17 - (v11 - v10.lastPosition[1]) * 10, v18 - (v12 - v10.lastPosition[2]) * 10 + v10.upFactor, v19 - (v13 - v10.lastPosition[3]) * 10)
          local v23 = MathUtil.vector2Length(v20, v22)
          if 0 < v23 then
            local v24, v25 = MathUtil.vector2Normalize(v20, v22)
          end
          v25 = math.max(v21, 0.01)
          v24 = math.abs(...)
          v25 = math.atan(v23 / v24)
          local v26 = math.atan(v23 / v24)
          local v27 = math.atan(v22 / v24)
          local v29 = math.atan(v20 / v24)
          v10.xRot = v10.xRot * 0.95 + v27 * v25 * (1.2 + 2 * v24) * 0.05
          v10.zRot = v10.zRot * 0.95 + -v29 * v26 * (1.2 + 2 * v24) * 0.05
          v29 = v29:getEqualizedMotorRpm()
          local v30 = v30:getMaxRpm()
          v29 = MathUtil.lerp(v10.minRpmScale, v10.maxRpmScale, v29 / v30)
          setShaderParameter(v10.effectNode, "param", v10.xRot, v10.zRot, 0, v29, false)
          v30 = MathUtil.lerp(v10.minRpmColor[1], v10.maxRpmColor[1], v29 / v30)
          local v31 = MathUtil.lerp(v10.minRpmColor[2], v10.maxRpmColor[2], v29 / v30)
          local v32 = MathUtil.lerp(v10.minRpmColor[3], v10.maxRpmColor[3], v29 / v30)
          local v33 = MathUtil.lerp(v10.minRpmColor[4], v10.maxRpmColor[4], v29 / v30)
          setShaderParameter(v10.effectNode, "exhaustColor", v30, v31, v32, v33, false)
          v10.lastPosition[1] = v11
          v10.lastPosition[2] = v12
          v10.lastPosition[3] = v13
        end
      end
      v5.lastFuelUsageDisplayTime = v5.lastFuelUsageDisplayTime + dt
      if 250 < v5.lastFuelUsageDisplayTime then
        v5.lastFuelUsageDisplayTime = 0
        v6 = v6:getAverage()
        v5.lastFuelUsageDisplay = v6
      end
      v6:add(v5.lastFuelUsage)
    end
    if v5.clutchCrackingTimeOut < g_time then
      v6 = v6:getIsSamplePlaying(v5.samples.clutchCracking)
      if v6 then
        v6:stopSample(v5.samples.clutchCracking)
      end
      if v5.clutchCrackingGearIndex ~= nil then
        self:setGearLeversState(0, nil, 500)
      end
      if v5.clutchCrackingGroupIndex ~= nil then
        self:setGearLeversState(nil, 0, 500)
      end
      v5.clutchCrackingTimeOut = math.huge
    end
    if isActiveForInputIgnoreSelection then
      if g_currentMission.missionInfo.automaticMotorStartEnabled then
        v6 = self:getCanMotorRun()
        if not v6 then
          v6 = self:getMotorNotAllowedWarning()
          if v6 ~= nil then
            v7:showBlinkingWarning(v6, 2000)
          end
        end
      end
      Motorized.updateActionEvents(self)
    end
  end
end
function Motorized:loadDifferentials(xmlFile, configDifferentialIndex)
  local isActiveForInputIgnoreSelection, isSelected = ConfigurationUtil.getXMLConfigurationKey(xmlFile, configDifferentialIndex, "vehicle.motorized.differentialConfigurations.differentialConfiguration", "vehicle.motorized.differentials", "differentials")
  self.spec_motorized.differentials = {}
  if self.isServer and self.spec_motorized.motorizedNode ~= nil then
    xmlFile:iterate(isActiveForInputIgnoreSelection .. ".differentials.differential", function(self, xmlFile)
      local configDifferentialIndex = configDifferentialIndex:getValue(xmlFile .. "#torqueRatio", 0.5)
      local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(xmlFile .. "#maxSpeedRatio", 1.3)
      -- TODO: structure LOP_FORNPREP (pc 31, target 94)
      local v13 = string.format("#wheelIndex%d", 1)
      local v9 = v9:getValue(xmlFile .. v13)
      if v9 ~= nil then
        local v10 = v10:getWheelFromWheelIndex(v9)
        if v10 ~= nil then
          {-1, -1}[1] = v9
          {false, false}[1] = true
          -- goto L93  (LOP_JUMP +37)
        end
        Logging.xmlWarning(u1.xmlFile, "Unable to find wheelIndex '%d' for differential '%s' (Indices start at 1)", v9, xmlFile)
      else
        local v14 = string.format("#differentialIndex%d", 1)
        v10 = v10:getValue(xmlFile .. v14)
        if v10 ~= nil then
          {-1, -1}[1] = v10 - 1
          {false, false}[1] = false
          if v10 == 0 then
            Logging.xmlWarning(u1.xmlFile, "Unable to find differentialIndex '0' for differential '%s' (Indices start at 1)", xmlFile)
          end
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 93, target 32)
      if isSelected[1] ~= -1 and isSelected[2] ~= -1 then
        table.insert(u2.differentials, {torqueRatio = configDifferentialIndex, maxSpeedRatio = isActiveForInputIgnoreSelection, diffIndex1 = isSelected[1], diffIndex1IsWheel = v5[1], diffIndex2 = isSelected[2], diffIndex2IsWheel = v5[2]})
      end
    end)
    if #self.spec_motorized.differentials == 0 then
      Logging.xmlWarning(self.xmlFile, "No differentials defined")
    end
  end
end
function Motorized:loadMotor(xmlFile, motorId)
  local isSelected, v5 = ConfigurationUtil.getXMLConfigurationKey(xmlFile, motorId, "vehicle.motorized.motorConfigurations.motorConfiguration", "vehicle.motorized", "motor")
  v5 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#type", "vehicle", "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  self.spec_motorized.motorType = v5
  v5 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#startAnimationName", "vehicle", "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  self.spec_motorized.motorStartAnimation = v5
  v5 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, "#consumerConfigurationIndex", "", 1, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  self.spec_motorized.consumerConfigurationIndex = v5
  local v5, v6 = ConfigurationUtil.getXMLConfigurationKey(xmlFile, self.configurations.wheel, "vehicle.wheels.wheelConfigurations.wheelConfiguration", "vehicle.wheels", "wheels")
  ObjectChangeUtil.updateObjectChanges(xmlFile, "vehicle.motorized.motorConfigurations.motorConfiguration", v5, self.components, self)
  local v7 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#minRpm", 1000, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v8 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#maxRpm", 1800, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v9 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#minSpeed", 1, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v10 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#maxForwardSpeed", nil, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v11 = ConfigurationUtil.getConfigurationValue(xmlFile, isSelected, ".motor", "#maxBackwardSpeed", nil, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  if v10 ~= nil then
  end
  if v11 ~= nil then
  end
  local v12 = ConfigurationUtil.getConfigurationValue(xmlFile, v5, ".wheels", "#maxForwardSpeed", nil, nil)
  if v12 ~= nil then
  end
  local v13 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#accelerationLimit", 2, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v15 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#brakeForce", 10, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  v15 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#lowBrakeForceScale", 0.5, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v17 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#lowBrakeForceSpeedLimit", 1, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  v17 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#torqueScale", 1, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v18 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#ptoMotorRpmRatio", 4, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  local v20 = xmlFile:hasProperty(isActiveForInputIgnoreSelection .. ".transmission")
  if not v20 then
  end
  v20 = xmlFile:getValue(v19 .. "#minForwardGearRatio")
  local v21 = xmlFile:getValue(v19 .. "#maxForwardGearRatio")
  local v22 = xmlFile:getValue(v19 .. "#minBackwardGearRatio")
  local v23 = xmlFile:getValue(v19 .. "#maxBackwardGearRatio")
  local v24 = xmlFile:getValue(v19 .. "#gearChangeTime")
  local v25 = xmlFile:getValue(v19 .. "#autoGearChangeTime")
  local v26 = xmlFile:getValue(v19 .. "#axleRatio", 1)
  local v27 = xmlFile:getValue(v19 .. "#startGearThreshold", VehicleMotor.GEAR_START_THRESHOLD)
  if v21 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x80000000 -> L254
  end
  -- goto L256  (LOP_JUMP +2)
  if v22 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R23 aux=0x80000000 -> L263
  end
  -- goto L265  (LOP_JUMP +2)
  if v20 == nil then
    local v29 = self:loadGears(xmlFile, "forwardGear", v19, v8, v26, 1)
    if v29 == nil then
      print("Warning: Missing forward gear ratios for motor in '" .. self.configFileName .. "'!")
    end
  end
  if v22 == nil then
    local v30 = self:loadGears(xmlFile, "backwardGear", v19, v8, v26, -1)
  end
  v30 = self:loadGearGroups(xmlFile, v19 .. ".groups", v8, v26)
  local v31 = xmlFile:getValue(v19 .. ".groups#type", "default")
  local v32 = xmlFile:getValue(v19 .. ".groups#changeTime", 0.5)
  local v33 = xmlFile:getValue(v19 .. ".directionChange#useGear", false)
  local v34 = xmlFile:getValue(v19 .. ".directionChange#reverseGearIndex", 1)
  local v35 = xmlFile:getValue(v19 .. ".directionChange#useGroup", false)
  local v36 = xmlFile:getValue(v19 .. ".directionChange#reverseGroupIndex", 1)
  local v37 = xmlFile:getValue(v19 .. ".directionChange#changeTime", 0.5)
  local v38 = xmlFile:getValue(v19 .. ".manualShift#gears", true)
  local v39 = xmlFile:getValue(v19 .. ".manualShift#groups", true)
  local torqueCurve = AnimCurve.new(linearInterpolator1)
  if isActiveForInputIgnoreSelection ~= nil then
    local v43 = xmlFile:hasProperty(isActiveForInputIgnoreSelection .. ".motor.torque(0)")
    if v43 then
    end
  end
  while true do
    v43 = string.format(v42 .. "(%d)", v41)
    v44 = xmlFile:getValue(v43 .. "#normRpm")
    if v44 == nil then
      v46 = xmlFile:getValue(v43 .. "#rpm")
    else
    end
    v46 = xmlFile:getValue(v43 .. "#torque")
    if not (v46 ~= nil) then
      break
    end
    if not (v45 ~= nil) then
      break
    end
    torqueCurve:addKeyframe({v46 * v17, time = v45})
  end
  v43 = VehicleMotor.new(self, v7, v8, v10, v11, torqueCurve, v14, v28, v29, v20, v21, v22, v23, v18, v9)
  isSelected.motor = v43
  v43:setGearGroups(v30, v31, v32)
  v43:setDirectionChange(v33, v34, v35, v36, v37)
  v43:setManualShift(v38, v39)
  v43:setStartGearThreshold(v27)
  local v48 = v48:getRotInertia()
  v43 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#rotInertia", v48, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  v44 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#dampingRateScale", 1, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  v45:setRotInertia(v43)
  v45:setDampingRateScale(v44)
  v45:setLowBrakeForce(v15, v16)
  v45:setAccelerationLimit(v13)
  local v45 = ConfigurationUtil.getConfigurationValue(xmlFile, isActiveForInputIgnoreSelection, ".motor", "#rpmSpeedLimit", nil, "vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  if v45 ~= nil then
    v46:setMotorRotationAccelerationLimit(v45 * math.pi / 30)
  end
  if v24 ~= nil then
    v46:setGearChangeTime(v24)
  end
  if v25 ~= nil then
    v46:setAutoGearChangeTime(v25)
  end
end
function Motorized.loadGears(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, v6)
  while true do
    v9 = string.format(isActiveForInputIgnoreSelection .. ".%s(%d)", isActiveForInput, v8)
    v10 = dt:hasProperty(v9)
    if not v10 then
      break
    end
    v10 = dt:getValue(v9 .. "#gearRatio")
    v11 = dt:getValue(v9 .. "#maxSpeed")
    if v11 ~= nil then
    end
    if v10 ~= nil then
      v13 = dt:getValue(v9 .. "#defaultGear", false)
      v16 = tostring((v8 + 1) * v6)
      v13 = dt:getValue(...)
      v16 = tostring((v8 + 1) * v6 * -1)
      v13 = dt:getValue(...)
      v13 = dt:getValue(v9 .. "#actionName")
      if v8 >= 8 then
        -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L137
      end
      if v12.actionName ~= "-" then
        if not v12.actionName then
          v13 = string.format("SHIFT_GEAR_SELECT_%d", v8 + 1)
        end
        v12.actionName = v13
        v12.inputAction = InputAction[v12.actionName]
        if v12.inputAction == nil then
          Logging.xmlWarning(dt, "Invalid actionName '%s' found for gear '%s'", v12.actionName, v9)
          v15 = string.format("SHIFT_GEAR_SELECT_%d", v8 + 1)
          v12.inputAction = InputAction[v15]
        end
      end
      table.insert(v7, v12)
    end
  end
  if 0 < #v7 then
    return v7
  end
end
function Motorized.loadGearGroups(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  while true do
    v7 = string.format(isActiveForInput .. ".group(%d)", v6)
    v8 = dt:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = dt:getValue(v7 .. "#ratio")
    if v8 ~= nil then
      v10 = dt:getValue(v7 .. "#isDefault", false)
      v13 = tostring(v6 + 1)
      v10 = dt:getValue(...)
      v10 = dt:getValue(v7 .. "#actionName")
      if v6 >= 4 then
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L108
      end
      if v9.actionName ~= "-" then
        if not v9.actionName then
          v10 = string.format("SHIFT_GROUP_SELECT_%d", v6 + 1)
        end
        v9.actionName = v10
        v9.inputAction = InputAction[v9.actionName]
        if v9.inputAction == nil then
          Logging.xmlWarning(dt, "Invalid actionName '%s' found for gear group '%s'", v9.actionName, v7)
          v12 = string.format("SHIFT_GROUP_SELECT_%d", v6 + 1)
          v9.inputAction = InputAction[v12]
        end
      end
      table.insert(v5, v9)
    end
  end
  if 0 < #v5 then
    return v5
  end
end
function Motorized:loadExhaustEffects(xmlFile)
  local isActiveForInputIgnoreSelection = xmlFile:getValue("vehicle.motorized.exhaustParticleSystems#minScale", 0.5)
  local isSelected = xmlFile:getValue("vehicle.motorized.exhaustParticleSystems#maxScale", 1)
  self.spec_motorized.exhaustParticleSystems = {}
  while true do
    v6 = string.format("vehicle.motorized.exhaustParticleSystems.exhaustParticleSystem(%d)", v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    ParticleUtil.loadParticleSystem(xmlFile, {}, v6, self.components, false, nil, self.baseDirectory)
    table.insert(isActiveForInput.exhaustParticleSystems, {minScale = isActiveForInputIgnoreSelection, maxScale = isSelected})
  end
  if #isActiveForInput.exhaustParticleSystems == 0 then
    isActiveForInput.exhaustParticleSystems = nil
  end
  XMLUtil.checkDeprecatedXMLElements(xmlFile, self.configFileName, "vehicle.motorized.exhaustFlap#index", "vehicle.motorized.exhaustFlap#node")
  v6 = xmlFile:getValue("vehicle.motorized.exhaustFlap#node", nil, self.components, self.i3dMappings)
  if v6 ~= nil then
    isActiveForInput.exhaustFlap = {node = v6}
    local v8 = xmlFile:getValue("vehicle.motorized.exhaustFlap#maxRot", 0)
    isActiveForInput.exhaustFlap.maxRot = v8
    v8 = xmlFile:getValue("vehicle.motorized.exhaustFlap#rotationAxis", 1)
    isActiveForInput.exhaustFlap.rotationAxis = v8
  end
  isActiveForInput.exhaustEffects = {}
  isActiveForInput.sharedLoadRequestIds = {}
  xmlFile:iterate("vehicle.motorized.exhaustEffects.exhaustEffect", function(self, xmlFile)
    XMLUtil.checkDeprecatedXMLElements(u0, u1.configFileName, xmlFile .. "#index", xmlFile .. "#node")
    local isActiveForInput = isActiveForInput:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(xmlFile .. "#filename")
    if isActiveForInputIgnoreSelection ~= nil and isActiveForInput ~= nil then
      local isSelected = Utils.getFilename(isActiveForInputIgnoreSelection, u1.baseDirectory)
      local v5 = v5:loadSubSharedI3DFile(isSelected, false, false, u1.onExhaustEffectI3DLoaded, u1, {xmlFile = u0, key = xmlFile, linkNode = isActiveForInput, filename = isSelected})
      table.insert(u2.sharedLoadRequestIds, v5)
    end
  end)
  isActiveForInput.exhaustEffectMaxSteeringSpeed = 0.001
end
function Motorized:onExhaustEffectI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v5 = getChildAt(i3dNode, 0)
    local v6 = getHasShaderParameter(v5, "param")
    if v6 then
      link({effectNode = v5, node = args.linkNode, filename = args.filename}.node, {effectNode = v5, node = args.linkNode, filename = args.filename}.effectNode)
      setVisibility({effectNode = v5, node = args.linkNode, filename = args.filename}.effectNode, false)
      delete(i3dNode)
      local v9 = args.xmlFile:getValue(args.key .. "#minRpmColor", "0 0 0 1", true)
      v9 = args.xmlFile:getValue(args.key .. "#maxRpmColor", "0.0384 0.0359 0.0627 2.0", true)
      v9 = args.xmlFile:getValue(args.key .. "#minRpmScale", 0.25)
      v9 = args.xmlFile:getValue(args.key .. "#maxRpmScale", 0.95)
      v9 = args.xmlFile:getValue(args.key .. "#upFactor", 0.75)
      table.insert(self.spec_motorized.exhaustEffects, {effectNode = v5, node = args.linkNode, filename = args.filename, minRpmColor = v9, maxRpmColor = v9, minRpmScale = v9, maxRpmScale = v9, upFactor = v9, lastPosition = nil, xRot = 0, zRot = 0})
    end
  end
end
function Motorized:loadSounds(xmlFile, baseString)
  if self.isClient then
    if not self.spec_motorized.samples then
    end
    isActiveForInputIgnoreSelection.samples = isSelected
    local v5 = v5:loadSampleFromXML(xmlFile, baseString, "motorStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.motorStart = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "motorStop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.motorStop = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "clutchCracking", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.clutchCracking = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearEngaged", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearEngaged = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearDisengaged", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearDisengaged = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearGroupChange", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearGroupChange = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearLeverStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearLeverStart = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearLeverEnd", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearLeverEnd = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearGroupLeverStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearGroupLeverStart = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "gearGroupLeverEnd", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.gearGroupLeverEnd = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "blowOffValve", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.blowOffValve = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "retarder", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.retarder = v5
    local isSelected = isSelected:loadSamplesFromXML(xmlFile, baseString, "gearbox", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self, isActiveForInputIgnoreSelection.gearboxSamples)
    isActiveForInputIgnoreSelection.gearboxSamples = isSelected
    isSelected = isSelected:loadSamplesFromXML(xmlFile, baseString, "motor", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self, isActiveForInputIgnoreSelection.motorSamples)
    isActiveForInputIgnoreSelection.motorSamples = isSelected
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "airCompressorStart", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.airCompressorStart = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "airCompressorStop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.airCompressorStop = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "airCompressorRun", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.airCompressorRun = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "compressedAir", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.compressedAir = v5
    if isActiveForInputIgnoreSelection.samples.compressedAir ~= nil then
      isActiveForInputIgnoreSelection.samples.compressedAir.brakeTime = 0
      isActiveForInputIgnoreSelection.samples.compressedAir.lastBrakeTime = 0
    end
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "airRelease", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.airRelease = v5
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "reverseDrive", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.reverseDrive = v5
    isSelected = xmlFile:getValue("vehicle.motorized.reverseDriveSound#threshold", 4)
    isActiveForInputIgnoreSelection.reverseDriveThreshold = isSelected
    isActiveForInputIgnoreSelection.brakeCompressor = {}
    v5 = xmlFile:getValue("vehicle.motorized.brakeCompressor#capacity", 6)
    isActiveForInputIgnoreSelection.brakeCompressor.capacity = v5
    local v7 = xmlFile:getValue("vehicle.motorized.brakeCompressor#refillFillLevel", isActiveForInputIgnoreSelection.brakeCompressor.capacity / 2)
    v5 = math.min(...)
    isActiveForInputIgnoreSelection.brakeCompressor.refillFilllevel = v5
    local v6 = xmlFile:getValue("vehicle.motorized.brakeCompressor#fillSpeed", 0.6)
    isActiveForInputIgnoreSelection.brakeCompressor.fillSpeed = v6 / 1000
    isActiveForInputIgnoreSelection.brakeCompressor.fillLevel = 0
    isActiveForInputIgnoreSelection.brakeCompressor.doFill = true
    isActiveForInputIgnoreSelection.isBrakeSamplePlaying = false
    v5 = v5:loadSampleFromXML(xmlFile, baseString, "brake", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    if not v5 then
    end
    isSelected.brake = v5
    isActiveForInputIgnoreSelection.compressionSoundTime = 0
  end
end
function Motorized:loadConsumerConfiguration(xmlFile, consumerIndex)
  local key = string.format("vehicle.motorized.consumerConfigurations.consumerConfiguration(%d)", consumerIndex - 1)
  local v5 = v5:getValue(key .. "#consumersEmptyWarning", "warning_motorFuelEmpty", self.customEnvironment)
  self.spec_motorized.consumersEmptyWarning = v5
  self.spec_motorized.consumers = {}
  self.spec_motorized.consumersByFillTypeName = {}
  self.spec_motorized.consumersByFillType = {}
  v5 = xmlFile:hasProperty(key)
  if not v5 then
    return
  end
  while true do
    v6 = string.format(".consumer(%d)", v5)
    v7 = xmlFile:hasProperty(key .. v6)
    if not v7 then
      break
    end
    v8 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#fillUnitIndex", 1, "vehicle.motorized.consumers")
    v8 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#fillType", "consumer", "vehicle.motorized.consumers")
    v9 = v9:getFillTypeIndexByName(v8)
    v9 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#capacity", nil, "vehicle.motorized.consumers")
    v9 = self:getFillUnitByIndex({fillUnitIndex = v8, fillType = v9, capacity = v9}.fillUnitIndex)
    if v9 ~= nil then
      if v9.supportedFillTypes[{fillUnitIndex = v8, fillType = v9, capacity = v9}.fillType] ~= nil then
        if not {fillUnitIndex = v8, fillType = v9, capacity = v9}.capacity then
        end
        v9.capacity = v10
        v9.startFillLevel = v9.capacity
        v9.startFillTypeIndex = v7.fillType
        v10 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#usage", 1, "vehicle.motorized.consumers")
        v11 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#permanentConsumption", true, "vehicle.motorized.consumers")
        v7.permanentConsumption = v11
        if v7.permanentConsumption then
          v7.usage = v10 / 3600000
        else
          v7.usage = v10
        end
        v11 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#refillLitersPerSecond", 0, "vehicle.motorized.consumers")
        v7.refillLitersPerSecond = v11
        v11 = ConfigurationUtil.getConfigurationValue(xmlFile, key, v6, "#refillCapacityPercentage", 0, "vehicle.motorized.consumers")
        v7.refillCapacityPercentage = v11
        v7.fillLevelToChange = 0
        table.insert(isSelected.consumers, v7)
        v12 = v8:upper()
        isSelected.consumersByFillTypeName[v12] = v7
        isSelected.consumersByFillType[v7.fillType] = v7
        -- goto L219  (LOP_JUMP +24)
      end
      Logging.xmlWarning(self.xmlFile, "FillUnit '%d' does not  support fillType '%s' for consumer '%s'", v7.fillUnitIndex, v8, key .. v6)
    else
      Logging.xmlWarning(self.xmlFile, "Unknown fillUnit '%d' for consumer '%s'", {fillUnitIndex = v8, fillType = v9, capacity = v9}.fillUnitIndex, key .. v6)
    end
  end
end
function Motorized:getIsMotorStarted(isRunning)
  if self.spec_motorized.isMotorStarted and not not isRunning and self.spec_motorized.motorStartTime >= g_currentMission.time then
  end
  return isActiveForInput
end
function Motorized:getIsMotorInNeutral()
  return dt:getIsInNeutral()
end
function Motorized:getMotorIgnitionState()
  if self.spec_motorized.isMotorStarted then
    if g_currentMission.time < self.spec_motorized.motorStartTime then
      return 1
    end
    return 2
  end
  return 0
end
function Motorized:getCanMotorRun()
  for v5, v6 in ipairs(self.spec_motorized.propellantFillUnitIndices) do
    local v7 = self:getFillUnitFillLevel(v6)
    if not (v7 == 0) then
      continue
    end
    return false
  end
  isActiveForInput = isActiveForInput:getCanMotorRun()
  if not isActiveForInput then
    return false
  end
  return true
end
function Motorized:getStopMotorOnLeave()
  if self.spec_motorized.stopMotorOnLeave then
    local isActiveForInput = self:getRequiresPower()
  end
  return dt
end
function Motorized:getMotorNotAllowedWarning()
  for v5, v6 in pairs(self.spec_motorized.propellantFillUnitIndices) do
    local v7 = self:getFillUnitFillLevel(v6)
    if not (v7 == 0) then
      continue
    end
    return dt.consumersEmptyWarning
  end
  isActiveForInput, isActiveForInputIgnoreSelection = isActiveForInput:getCanMotorRun()
  if not isActiveForInput and isActiveForInputIgnoreSelection == VehicleMotor.REASON_CLUTCH_NOT_ENGAGED then
    return dt.clutchNoEngagedWarning
  end
  return nil
end
function Motorized:startMotor(noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L35
  end
  if g_server ~= nil then
    local isSelected = SetMotorTurnedOnEvent.new(self, true)
    isActiveForInput:broadcastEvent(isSelected, nil, nil, self)
  else
    local isActiveForInput = isActiveForInput:getServerConnection()
    isSelected = SetMotorTurnedOnEvent.new(self, true)
    isActiveForInput:sendEvent(...)
  end
  if not self.spec_motorized.isMotorStarted then
    self.spec_motorized.isMotorStarted = true
    if self.isClient then
      if self.spec_motorized.exhaustParticleSystems ~= nil then
        for v6, v7 in pairs(self.spec_motorized.exhaustParticleSystems) do
          ParticleUtil.setEmittingState(v7, true)
        end
      end
      if isActiveForInput.exhaustEffects ~= nil then
        for v6, v7 in pairs(isActiveForInput.exhaustEffects) do
          setVisibility(v7.effectNode, true)
          setShaderParameter(v7.effectNode, "param", v7.xRot, v7.zRot, 0, 0, false)
          setShaderParameter(v7.effectNode, "exhaustColor", v7.minRpmColor[1], v7.minRpmColor[2], v7.minRpmColor[3], v7.minRpmColor[4], false)
        end
      end
      if isActiveForInput.samples == nil then
        Logging.error("Motor samples not found (%s, %d)", self.configFileName, self.loadingState)
        printCallstack()
      end
      isActiveForInputIgnoreSelection:stopSample(isActiveForInput.samples.motorStop)
      isActiveForInputIgnoreSelection:playSample(isActiveForInput.samples.motorStart)
      isActiveForInputIgnoreSelection:playSamples(isActiveForInput.motorSamples, 0, isActiveForInput.samples.motorStart)
      isActiveForInputIgnoreSelection:playSamples(isActiveForInput.gearboxSamples, 0, isActiveForInput.samples.motorStart)
      isActiveForInputIgnoreSelection:playSample(isActiveForInput.samples.retarder, 0, isActiveForInput.samples.motorStart)
      isActiveForInputIgnoreSelection:startAnimations(isActiveForInput.animationNodes)
      if isActiveForInput.motorStartAnimation ~= nil then
        self:playAnimation(isActiveForInput.motorStartAnimation, 1, nil, true)
      end
    end
    isActiveForInput.motorStartTime = g_currentMission.time + isActiveForInput.motorStartDuration
    isActiveForInput.motorNotRequiredTimer = 0
    v5 = math.random(5000, 20000)
    isActiveForInput.compressionSoundTime = g_currentMission.time + v5
    isActiveForInput.motor.lastMotorRpm = 0
    SpecializationUtil.raiseEvent(self, "onStartMotor")
    isActiveForInputIgnoreSelection:raiseStateChange(Vehicle.STATE_CHANGE_MOTOR_TURN_ON)
  end
  if self.setDashboardsDirty ~= nil then
    self:setDashboardsDirty()
  end
  if self.isServer then
    self:wakeUp()
  end
end
function Motorized:stopMotor(noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L35
  end
  if g_server ~= nil then
    local isSelected = SetMotorTurnedOnEvent.new(self, false)
    isActiveForInput:broadcastEvent(isSelected, nil, nil, self)
  else
    local isActiveForInput = isActiveForInput:getServerConnection()
    isSelected = SetMotorTurnedOnEvent.new(self, false)
    isActiveForInput:sendEvent(...)
  end
  if self.spec_motorized.isMotorStarted then
    self.spec_motorized.isMotorStarted = false
    if self.isClient then
      if self.spec_motorized.exhaustParticleSystems ~= nil then
        for v6, v7 in pairs(self.spec_motorized.exhaustParticleSystems) do
          ParticleUtil.setEmittingState(v7, false)
        end
      end
      if isActiveForInput.exhaustEffects ~= nil then
        for v6, v7 in pairs(isActiveForInput.exhaustEffects) do
          setVisibility(v7.effectNode, false)
        end
      end
      if isActiveForInput.exhaustFlap ~= nil then
        setRotation(isActiveForInput.exhaustFlap.node, 0, 0, 0)
      end
      isActiveForInputIgnoreSelection:stopSamples(isActiveForInput.samples)
      isActiveForInputIgnoreSelection:playSample(isActiveForInput.samples.motorStop)
      isActiveForInputIgnoreSelection:stopSamples(isActiveForInput.motorSamples)
      isActiveForInputIgnoreSelection:stopSamples(isActiveForInput.gearboxSamples)
      isActiveForInput.isBrakeSamplePlaying = false
      isActiveForInputIgnoreSelection:stopAnimations(isActiveForInput.animationNodes)
      if isActiveForInput.motorStartAnimation ~= nil then
        self:playAnimation(isActiveForInput.motorStartAnimation, -1, nil, true)
      end
    end
    SpecializationUtil.raiseEvent(self, "onStopMotor")
    isActiveForInputIgnoreSelection:raiseStateChange(Vehicle.STATE_CHANGE_MOTOR_TURN_OFF)
  end
  isActiveForInput.motor.lastMotorRpm = 0
  if self.setDashboardsDirty ~= nil then
    self:setDashboardsDirty()
  end
end
function Motorized:updateConsumers(dt, accInput)
  local v6 = math.max(self.spec_motorized.smoothedLoadPercentage * (self.spec_motorized.motor.lastMotorRpm - self.spec_motorized.motor.minRpm) / (self.spec_motorized.motor.maxRpm - self.spec_motorized.motor.minRpm), 0)
  if g_currentMission.missionInfo.fuelUsage == 1 then
  elseif g_currentMission.missionInfo.fuelUsage == 3 then
  end
  local damage = self:getVehicleDamage()
  if 0 < damage then
  end
  for v13, v14 in pairs(isActiveForInputIgnoreSelection.consumers) do
    if not v14.permanentConsumption then
      continue
    end
    if not (0 < v14.usage) then
      continue
    end
    if not (v8 * v7 * v14.usage * dt ~= 0) then
      continue
    end
    v14.fillLevelToChange = v14.fillLevelToChange + v8 * v7 * v14.usage * dt
    local v16 = math.abs(v14.fillLevelToChange)
    if 1 < v16 then
      v14.fillLevelToChange = 0
      v16 = self:getFillUnitLastValidFillType(v14.fillUnitIndex)
      local v19 = self:getOwnerFarmId()
      v17:updateFarmStats(v19, "fuelUsage", v14.fillLevelToChange)
      local v17 = self:getIsAIActive()
      if v17 then
        if v16 ~= FillType.DIESEL then
          -- if v16 ~= FillType.DEF then goto L171 end
        end
        if g_currentMission.missionInfo.helperBuyFuel and v16 == FillType.DIESEL then
          v19 = v19:getCostPerLiter(v16)
          local v20 = self:getOwnerFarmId()
          v18:updateFarmStats(v20, "expenses", v15 * v19 * 1.5)
          local v21 = self:getOwnerFarmId()
          v18:addMoney(-(v15 * v19 * 1.5), v21, MoneyType.PURCHASE_FUEL, true)
        end
      end
      if v16 == v14.fillType then
        v19 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v19, v14.fillUnitIndex, -v15, v16, ToolType.UNDEFINED)
      end
    end
    if v14.fillType ~= FillType.DIESEL and v14.fillType ~= FillType.ELECTRICCHARGE then
      -- if v14.fillType ~= FillType.METHANE then goto L212 end
    end
    isActiveForInputIgnoreSelection.lastFuelUsage = v15 / dt * 1000 * 60 * 60
    continue
    if not (v14.fillType == FillType.DEF) then
      continue
    end
    isActiveForInputIgnoreSelection.lastDefUsage = v15 / dt * 1000 * 60 * 60
  end
  if isActiveForInputIgnoreSelection.consumersByFillTypeName.AIR ~= nil then
    v11 = self:getFillUnitLastValidFillType(isActiveForInputIgnoreSelection.consumersByFillTypeName.AIR.fillUnitIndex)
    if v11 == isActiveForInputIgnoreSelection.consumersByFillTypeName.AIR.fillType then
      local v15 = self:getReverserDirection()
      if 0 < self.movingDirection * v15 and accInput >= 0 then
      end
      if v13 < 0 and 0 >= accInput then
      end
      v17 = self:getLastSpeed()
      if 1 < v17 then
      end
      if v16 then
        v20 = math.abs(accInput)
        v20 = self:getAirConsumerUsage()
        v20 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v20, v10.fillUnitIndex, -(v20 * dt * v20 / 1000), v10.fillType, ToolType.UNDEFINED)
      end
      v17 = self:getFillUnitFillLevelPercentage(v10.fillUnitIndex)
      if v17 < v10.refillCapacityPercentage then
        v10.doRefill = true
      elseif v17 == 1 then
        v10.doRefill = false
      end
      if v10.doRefill then
        v21 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v21, v10.fillUnitIndex, v10.refillLitersPerSecond / 1000 * dt, v10.fillType, ToolType.UNDEFINED)
      end
      isActiveForInputIgnoreSelection.lastAirUsage = v12
    end
  end
end
function Motorized:updateMotorTemperature(dt)
  local v6 = self:getMotorRpmPercentage()
  v6 = math.min(self.spec_motorized.motorTemperature.valueMax, self.spec_motorized.motorTemperature.value + self.spec_motorized.motorTemperature.heatingPerMS * dt * ((1 + 4 * self.spec_motorized.actualLoadPercentage) / 5 + v6))
  self.spec_motorized.motorTemperature.value = v6
  local damage = self:getLastSpeed()
  v6 = math.min(1, damage / 30)
  local v5 = math.pow(v6, 2)
  local v7 = math.max(self.spec_motorized.motorTemperature.valueMin, self.spec_motorized.motorTemperature.value - v5 * self.spec_motorized.motorTemperature.coolingByWindPerMS * dt)
  self.spec_motorized.motorTemperature.value = v7
  if self.spec_motorized.motorFan.enableTemperature < self.spec_motorized.motorTemperature.value then
    self.spec_motorized.motorFan.enabled = true
  end
  if accInput.motorFan.enabled and accInput.motorTemperature.value < accInput.motorFan.disableTemperature then
    accInput.motorFan.enabled = false
  end
  if accInput.motorFan.enabled then
    v7 = math.max(accInput.motorTemperature.valueMin, accInput.motorTemperature.value - accInput.motorFan.coolingPerMS * dt)
    accInput.motorTemperature.value = v7
  end
end
function Motorized:onGearDirectionChanged(direction)
  if self.isServer then
    self:raiseDirtyFlags(self.spec_motorized.dirtyFlag)
  end
end
function Motorized:onGearChanged(gear, targetGear, changeTime)
  self:setGearLeversState(targetGear, nil, changeTime)
  if self.isClient then
    if gear == 0 then
      local v5 = v5:getIsSamplePlaying(self.spec_motorized.samples.gearDisengaged)
      -- if v5 then goto L52 end
      v5:playSample(self.spec_motorized.samples.gearDisengaged)
    else
      v5 = v5:getIsSamplePlaying(self.spec_motorized.samples.gearEngaged)
      if not v5 then
        v5:playSample(self.spec_motorized.samples.gearEngaged)
      end
    end
  end
  if self.isServer then
    self:raiseDirtyFlags(isSelected.dirtyFlag)
  end
end
function Motorized:onGearGroupChanged(targetGroup, changeTime)
  self:setGearLeversState(nil, targetGroup, changeTime)
  if self.isClient then
    local isSelected = isSelected:getIsSamplePlaying(self.spec_motorized.samples.gearGroupChange)
    if not isSelected then
      isSelected:playSample(self.spec_motorized.samples.gearGroupChange)
    end
  end
  if self.isServer then
    self:raiseDirtyFlags(isActiveForInputIgnoreSelection.dirtyFlag)
  end
end
function Motorized:onClutchCreaking(isEvent, groupTransmission, gearIndex, groupIndex)
  if groupTransmission then
    v6:showBlinkingWarning(self.spec_motorized.clutchCrackingGroupWarning, 2000)
  else
    v6:showBlinkingWarning(self.spec_motorized.clutchCrackingGearWarning, 2000)
  end
  local v6 = v6:getIsSamplePlaying(v5.samples.clutchCracking)
  if not v6 then
    v6:playSample(v5.samples.clutchCracking)
  end
  if gearIndex ~= nil then
    self:setGearLeversState(gearIndex, nil, 500, false)
    v5.clutchCrackingGearIndex = gearIndex
  end
  if groupIndex ~= nil then
    self:setGearLeversState(nil, groupIndex, 500, false)
    v5.clutchCrackingGroupIndex = groupIndex
  end
  if isEvent then
  else
  end
  v5.clutchCrackingTimeOut = v7 + v8
end
function Motorized:onReverseDirectionChanged()
  local dt = self:getDirectionChangeMode()
  if dt == VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL then
    MotorGearShiftEvent.sendEvent(self, MotorGearShiftEvent.TYPE_DIRECTION_CHANGE)
  end
end
function Motorized:onVehicleSettingChanged(gameSettingId, state)
  if gameSettingId == GameSettings.SETTING.DIRECTION_CHANGE_MODE then
    self.spec_motorized.directionChangeMode = state
    if self.spec_motorized.motor ~= nil then
      self.spec_motorized.motor:setDirectionChangeMode(state)
      self:requestActionEventUpdate()
    end
  end
  if gameSettingId == GameSettings.SETTING.GEAR_SHIFT_MODE then
    isActiveForInputIgnoreSelection.gearShiftMode = state
    local v5 = self:getIsAIActive()
    if not v5 and isSelected ~= nil then
      isSelected:setGearShiftMode(state)
      self:requestActionEventUpdate()
    end
  end
end
function Motorized:onAIJobStarted(job)
  self:startMotor(true)
  if self.spec_motorized.motor ~= nil then
    isActiveForInputIgnoreSelection:setGearShiftMode(VehicleMotor.SHIFT_MODE_AUTOMATIC)
  end
end
function Motorized:onAIJobFinished(job)
  if self.getIsControlled ~= nil then
    local accInput = self:getIsControlled()
    -- if v2 then goto L12 end
  end
  self:stopMotor(true)
  if self.spec_motorized.motor ~= nil then
    isActiveForInputIgnoreSelection:setGearShiftMode(self.spec_motorized.gearShiftMode)
  end
end
function Motorized:getMotor()
  return self.spec_motorized.motor
end
function Motorized:getMotorStartTime()
  return self.spec_motorized.motorStartTime
end
function Motorized:getMotorType()
  return self.spec_motorized.motorType
end
function Motorized:getMotorRpmPercentage()
  local isSelected = self.spec_motorized.motor:getLastModulatedMotorRpm()
  local v5 = self.spec_motorized.motor:getMinRpm()
  v5 = self.spec_motorized.motor:getMaxRpm()
  local v6 = self.spec_motorized.motor:getMinRpm()
  return (isSelected - v5) / (v5 - v6)
end
v0:registerModifierType("MOTOR_RPM", Motorized.getMotorRpmPercentage)
function Motorized:getMotorRpmReal()
  return dt:getLastModulatedMotorRpm()
end
v0:registerModifierType("MOTOR_RPM_REAL", Motorized.getMotorRpmReal)
function Motorized:getMotorLoadPercentage()
  return self.spec_motorized.smoothedLoadPercentage
end
v0:registerModifierType("MOTOR_LOAD", Motorized.getMotorLoadPercentage)
function Motorized:getMotorBrakeTime()
  if self.spec_motorized.samples.compressedAir ~= nil then
    return self.spec_motorized.samples.compressedAir.lastBrakeTime / 1000
  end
  return 0
end
v0:registerModifierType("BRAKE_TIME", Motorized.getMotorBrakeTime)
function Motorized:getMotorBlowOffValveState()
  return self.spec_motorized.motor.blowOffValveState
end
v0:registerModifierType("BLOW_OFF_VALVE_STATE", Motorized.getMotorBlowOffValveState)
function Motorized:getMotorDifferentialSpeed()
  if self.spec_motorized == nil then
    Logging.error("Sound modifier 'DIFFERENTIAL_SPEED' used on non motorized vehicle '%s'", self.configFileName)
    return 0
  end
  return math.abs(self.spec_motorized.motor.differentialRotSpeed * 3.6)
end
v0:registerModifierType("DIFFERENTIAL_SPEED", Motorized.getMotorDifferentialSpeed)
function Motorized:getConsumerFillUnitIndex(fillTypeIndex)
  if self.spec_motorized.consumersByFillType[fillTypeIndex] ~= nil then
    return self.spec_motorized.consumersByFillType[fillTypeIndex].fillUnitIndex
  end
  return nil
end
function Motorized:getAirConsumerUsage()
  if self.spec_motorized.consumersByFillTypeName.AIR then
    -- if v0.spec_motorized.consumersByFillTypeName.AIR.usage then goto L11 end
  end
  return 0
end
function Motorized:getBrakeForce(superFunc)
  local brakeForce = superFunc(self)
  local v5 = v5:getBrakeForce()
  return math.max(...)
end
function Motorized.loadDashboardGroupFromXML(v0, dt, accInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = dt(v0, accInput, isActiveForInputIgnoreSelection, isSelected)
  if not v5 then
    return false
  end
  v5 = accInput:getValue(isActiveForInputIgnoreSelection .. "#isMotorStarting")
  isSelected.isMotorStarting = v5
  v5 = accInput:getValue(isActiveForInputIgnoreSelection .. "#isMotorRunning")
  isSelected.isMotorRunning = v5
  return true
end
function Motorized:getIsDashboardGroupActive(superFunc, group)
  if group.isMotorRunning and group.isMotorStarting and not self.spec_motorized.isMotorStarted then
    return false
  end
  if group.isMotorStarting and not group.isMotorRunning then
    if isActiveForInputIgnoreSelection.isMotorStarted then
      -- if v3.motorStartTime >= g_currentMission.time then goto L30 end
    end
    return false
  end
  if group.isMotorRunning and not group.isMotorStarting then
    if isActiveForInputIgnoreSelection.isMotorStarted then
      -- if g_currentMission.time >= v3.motorStartTime then goto L47 end
    end
    return false
  end
  return superFunc(self, group)
end
function Motorized:getIsActiveForInteriorLights(superFunc)
  if self.spec_motorized.isMotorStarted then
    return true
  end
  return superFunc(self)
end
function Motorized:getIsActiveForWipers(superFunc)
  if not self.spec_motorized.isMotorStarted then
    return false
  end
  return superFunc(self)
end
function Motorized:getUsageCausesDamage(superFunc)
  if not self.spec_motorized.isMotorStarted then
    return false
  end
  return superFunc(self)
end
function Motorized:addToPhysics(superFunc)
  local accInput = superFunc(self)
  if not accInput then
    return false
  end
  if self.isServer and self.spec_motorized.motorizedNode ~= nil then
    local isActiveForInputIgnoreSelection = next(self.spec_motorized.differentials)
    if isActiveForInputIgnoreSelection ~= nil then
      for v6, v7 in pairs(self.spec_motorized.differentials) do
        if v7.diffIndex1IsWheel then
          local v10 = self:getWheelFromWheelIndex(v7.diffIndex1)
        end
        if v7.diffIndex2IsWheel then
          v10 = self:getWheelFromWheelIndex(damage)
        end
        addDifferential(accInput.motorizedNode, v8, v7.diffIndex1IsWheel, damage, v7.diffIndex2IsWheel, v7.torqueRatio, v7.maxSpeedRatio)
      end
      self:updateMotorProperties()
      self:controlVehicle(0, 0, 0, 0, math.huge, 0, 0, 0, 0, 0)
    end
  end
  return true
end
function Motorized:removeFromPhysics(superFunc)
  if self.isServer and self.spec_motorized.motorizedNode ~= nil then
    local isActiveForInputIgnoreSelection = next(self.spec_motorized.differentials)
    if isActiveForInputIgnoreSelection ~= nil then
      removeAllDifferentials(self.spec_motorized.motorizedNode)
    end
  end
  local accInput = superFunc(self)
  if not accInput then
    return false
  end
  return true
end
function Motorized:updateMotorProperties()
  local isActiveForInputIgnoreSelection, isSelected = self.spec_motorized.motor:getTorqueAndSpeedValues()
  local damage = self.spec_motorized.motor:getMinRpm()
  local v10 = self.spec_motorized.motor:getMaxRpm()
  damage = self.spec_motorized.motor:getRotInertia()
  v10 = self.spec_motorized.motor:getDampingRateFullThrottle()
  local v11 = self.spec_motorized.motor:getDampingRateZeroThrottleClutchEngaged()
  local v12 = self.spec_motorized.motor:getDampingRateZeroThrottleClutchDisengaged()
  setMotorProperties(self.spec_motorized.motorizedNode, damage * math.pi / 30, v10 * math.pi / 30, damage, v10, v11, v12, isSelected, isActiveForInputIgnoreSelection)
end
function Motorized:controlVehicle(acceleratorPedal, maxSpeed, maxAcceleration, minMotorRotSpeed, maxMotorRotSpeed, maxMotorRotAcceleration, minGearRatio, maxGearRatio, maxClutchTorque, neededPtoTorque)
  controlVehicle(self.spec_motorized.motorizedNode, acceleratorPedal, maxSpeed, maxAcceleration, minMotorRotSpeed, maxMotorRotSpeed, maxMotorRotAcceleration, minGearRatio, maxGearRatio, maxClutchTorque, neededPtoTorque)
  local v13 = getIsSleeping(self.spec_motorized.motorizedNode)
  if v13 then
    if acceleratorPedal == self.spec_motorized.lastControlParameters.acceleratorPedal and maxSpeed == self.spec_motorized.lastControlParameters.maxSpeed and maxAcceleration == self.spec_motorized.lastControlParameters.maxAcceleration and minMotorRotSpeed == self.spec_motorized.lastControlParameters.minMotorRotSpeed and maxMotorRotSpeed == self.spec_motorized.lastControlParameters.maxMotorRotSpeed and maxMotorRotAcceleration == self.spec_motorized.lastControlParameters.maxMotorRotAcceleration and minGearRatio == self.spec_motorized.lastControlParameters.minGearRatio and maxGearRatio == self.spec_motorized.lastControlParameters.maxGearRatio and maxClutchTorque == self.spec_motorized.lastControlParameters.maxClutchTorque then
      -- if v10 == v0.spec_motorized.lastControlParameters.neededPtoTorque then goto L70 end
    end
    I3DUtil.wakeUpObject(v11.motorizedNode)
  end
  v12.acceleratorPedal = acceleratorPedal
  v12.maxSpeed = maxSpeed
  v12.maxAcceleration = maxAcceleration
  v12.minMotorRotSpeed = minMotorRotSpeed
  v12.maxMotorRotSpeed = maxMotorRotSpeed
  v12.maxMotorRotAcceleration = maxMotorRotAcceleration
  v12.minGearRatio = minGearRatio
  v12.maxGearRatio = maxGearRatio
  v12.maxClutchTorque = maxClutchTorque
  v12.neededPtoTorque = neededPtoTorque
end
function Motorized:getIsOperating(superFunc)
  local accInput = superFunc(self)
  if not accInput then
    accInput = self:getIsMotorStarted()
  end
  return accInput
end
function Motorized.getDeactivateOnLeave(v0, dt)
  local accInput = dt(v0)
  if accInput then
  end
  return accInput
end
function Motorized.getDeactivateLightsOnLeave(v0, dt)
  local accInput = dt(v0)
  if accInput then
  end
  return accInput
end
function Motorized:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_motorized.actionEvents)
    if isActiveForInputIgnoreSelection then
      local isSelected, v5 = self:addActionEvent(self.spec_motorized.actionEvents, InputAction.TOGGLE_MOTOR_STATE, self, Motorized.actionEventToggleMotorState, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_VERY_HIGH)
      v6:setActionEventText(v5, self.spec_motorized.turnOnText)
      if self.spec_motorized.motor.minForwardGearRatio ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L524
      end
      local v6 = self:getGearShiftMode()
      if v6 == VehicleMotor.SHIFT_MODE_AUTOMATIC then
        -- if GS_IS_CONSOLE_VERSION then goto L524 end
      end
      if isActiveForInputIgnoreSelection.motor.manualShiftGears then
        local v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_UP, self, Motorized.actionEventShiftGear, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_DOWN, self, Motorized.actionEventShiftGear, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_1, self, Motorized.actionEventSelectGear, true, true, false, true, 1)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_2, self, Motorized.actionEventSelectGear, true, true, false, true, 2)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_3, self, Motorized.actionEventSelectGear, true, true, false, true, 3)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_4, self, Motorized.actionEventSelectGear, true, true, false, true, 4)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_5, self, Motorized.actionEventSelectGear, true, true, false, true, 5)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_6, self, Motorized.actionEventSelectGear, true, true, false, true, 6)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_7, self, Motorized.actionEventSelectGear, true, true, false, true, 7)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GEAR_SELECT_8, self, Motorized.actionEventSelectGear, true, true, false, true, 8)
        v6:setActionEventTextVisibility(v7, false)
      end
      if isActiveForInputIgnoreSelection.motor.manualShiftGroups and isActiveForInputIgnoreSelection.motor.gearGroups ~= nil then
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_UP, self, Motorized.actionEventShiftGroup, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_DOWN, self, Motorized.actionEventShiftGroup, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_SELECT_1, self, Motorized.actionEventSelectGroup, true, true, false, true, 1)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_SELECT_2, self, Motorized.actionEventSelectGroup, true, true, false, true, 2)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_SELECT_3, self, Motorized.actionEventSelectGroup, true, true, false, true, 3)
        v6:setActionEventTextVisibility(v7, false)
        v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.SHIFT_GROUP_SELECT_4, self, Motorized.actionEventSelectGroup, true, true, false, true, 4)
        v6:setActionEventTextVisibility(v7, false)
      end
      v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.AXIS_CLUTCH_VEHICLE, self, Motorized.actionEventClutch, false, false, true, true, nil)
      v6:setActionEventTextVisibility(v7, false)
      v6 = self:getDirectionChangeMode()
      if v6 ~= VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL then
        v6 = self:getGearShiftMode()
        -- if v6 == VehicleMotor.SHIFT_MODE_AUTOMATIC then goto L622 end
      end
      v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.DIRECTION_CHANGE, self, Motorized.actionEventDirectionChange, false, true, false, true, nil, nil, true)
      v6:setActionEventTextVisibility(v7, false)
      v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.DIRECTION_CHANGE_POS, self, Motorized.actionEventDirectionChange, false, true, false, true, nil, nil, true)
      v6:setActionEventTextVisibility(v7, false)
      v6, v7 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.DIRECTION_CHANGE_NEG, self, Motorized.actionEventDirectionChange, false, true, false, true, nil, nil, true)
      v6:setActionEventTextVisibility(v7, false)
      Motorized.updateActionEvents(self)
    end
  end
end
function Motorized.actionEventShiftGear(v0, dt, accInput, isActiveForInputIgnoreSelection, isSelected)
  if dt == InputAction.SHIFT_GEAR_UP then
    MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_SHIFT_UP)
    return
  end
  MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_SHIFT_DOWN)
end
function Motorized:actionEventSelectGear(actionName, inputValue, callbackState, isAnalog)
  if self.spec_motorized.motor.currentGears ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 33)
    if self.spec_motorized.motor.currentGears[1].inputAction == InputAction[actionName] then
      if inputValue == 1 then
        -- if 1 then goto L30 end
      end
      v11(v12, v13, 0)
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 32, target 12)
  end
  if inputValue == 1 then
    -- if v3 then goto L43 end
  end
  return v7(v8, damage, 0)
end
function Motorized.actionEventShiftGroup(v0, dt, accInput, isActiveForInputIgnoreSelection, isSelected)
  if dt == InputAction.SHIFT_GROUP_UP then
    MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_SHIFT_GROUP_UP)
    return
  end
  MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_SHIFT_GROUP_DOWN)
end
function Motorized:actionEventSelectGroup(actionName, inputValue, callbackState, isAnalog)
  if self.spec_motorized.motor.gearGroups ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 33)
    if self.spec_motorized.motor.gearGroups[1].inputAction == InputAction[actionName] then
      if inputValue == 1 then
        -- if 1 then goto L30 end
      end
      v11(v12, v13, 0)
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 32, target 12)
  end
  if inputValue == 1 then
    -- if v3 then goto L43 end
  end
  return v7(v8, damage, 0)
end
function Motorized.actionEventDirectionChange(v0, dt, accInput, isActiveForInputIgnoreSelection, isSelected)
  if dt == InputAction.DIRECTION_CHANGE_POS then
    MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_DIRECTION_CHANGE_POS)
    return
  end
  if dt == InputAction.DIRECTION_CHANGE_NEG then
    MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_DIRECTION_CHANGE_NEG)
    return
  end
  MotorGearShiftEvent.sendEvent(v0, MotorGearShiftEvent.TYPE_DIRECTION_CHANGE)
end
function Motorized:actionEventClutch(actionName, inputValue, callbackState, isAnalog)
  self.spec_motorized.clutchState = inputValue
  if self.isServer then
    v6:onManualClutchChanged(self.spec_motorized.clutchState)
    -- if 0 >= v2 then goto L26 end
    self:raiseActive()
    return
  end
  self:raiseDirtyFlags(v5.inputDirtyFlag)
end
function Motorized:updateActionEvents()
  if self.spec_motorized.actionEvents[InputAction.TOGGLE_MOTOR_STATE] ~= nil then
    if not g_currentMission.missionInfo.automaticMotorStartEnabled then
      isSelected:setActionEventActive(self.spec_motorized.actionEvents[InputAction.TOGGLE_MOTOR_STATE].actionEventId, true)
      local isSelected = self:getIsMotorStarted()
      if isSelected then
        isSelected:setActionEventTextPriority(self.spec_motorized.actionEvents[InputAction.TOGGLE_MOTOR_STATE].actionEventId, GS_PRIO_VERY_LOW)
      else
        isSelected:setActionEventTextPriority(self.spec_motorized.actionEvents[InputAction.TOGGLE_MOTOR_STATE].actionEventId, GS_PRIO_VERY_HIGH)
      end
      isSelected:setActionEventText(accInput.actionEventId, isActiveForInputIgnoreSelection)
      return
    end
    isActiveForInputIgnoreSelection:setActionEventActive(accInput.actionEventId, false)
  end
end
function Motorized.getTraveledDistanceStatsActive(v0)
  return true
end
function Motorized:setGearLeversState(gear, group, time, isResetPosition)
  -- TODO: structure LOP_FORNPREP (pc 7, target 45)
  for v12 = 1, #self.spec_motorized.gearLevers[1].states do
    if damage.states[v12].gear ~= nil then
      -- if v9.states[v12].gear == v1 then goto L36 end
    end
    if v13.group ~= nil and v13.group == group then
      self:generateShiftAnimation(damage, v13, time, isResetPosition)
    end
    -- TODO: structure LOP_FORNLOOP (pc 43, target 17)
  end
end
function Motorized:generateShiftAnimation(gearLever, state, time, isResetPosition)
  local damage, v10, v11 = getRotation(gearLever.node)
  state.curRotation[1] = damage
  state.curRotation[2] = v10
  state.curRotation[3] = v11
  -- TODO: structure LOP_FORNPREP (pc 24, target 42)
  v10 = math.abs(state.curRotation[1] - state.rotation[1])
  if 0.00001 < v10 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 41, target 25)
  end
  -- TODO: structure LOP_FORNPREP (pc 46, target 64)
  v11 = math.abs(gearLever.curTarget[1] - state.rotation[1])
  if 0.00001 < v11 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 63, target 47)
  end
  if v6 then
    -- if not v7 then goto L68 end
  end
  return false
  gearLever.curTarget[1] = state.curRotation[1]
  gearLever.curTarget[2] = state.curRotation[2]
  gearLever.curTarget[3] = state.curRotation[3]
  if gearLever.centerAxis ~= nil then
    v11 = math.abs(state.curRotation[gearLever.centerAxis] - state.rotation[gearLever.centerAxis])
    if 0.00001 >= v11 then
    end
  end
  if v8 then
    -- TODO: structure LOP_FORNPREP (pc 115, target 196)
    if 1 ~= gearLever.centerAxis then
      if gearLever.centerAxis ~= nil then
      end
      local v15 = math.abs(v12 - v13)
      if 0.00001 >= v15 then
      end
      if gearLever.centerAxis ~= nil and not true and state.useRotation[v11] then
        local v17 = math.abs(state.curRotation[gearLever.centerAxis] - state.rotation[gearLever.centerAxis])
        if 0.00001 >= v17 then
        end
      end
      if v14 then
        if v15 then
        else
        end
        v18.tar = v19
        table.insert(v17, v18)
        gearLever.curTarget[v11] = v13
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 195, target 116)
  end
  if gearLever.centerAxis ~= nil then
    if v8 then
      table.insert(v5.interpolations, {axis = gearLever.centerAxis, cur = state.curRotation[gearLever.centerAxis], tar = state.rotation[gearLever.centerAxis]})
      gearLever.curTarget[gearLever.centerAxis] = state.rotation[gearLever.centerAxis]
    end
    -- TODO: structure LOP_FORNPREP (pc 235, target 309)
    if 1 ~= gearLever.centerAxis then
      v15 = math.abs(state.curRotation[1] - state.rotation[1])
      if 0.00001 >= v15 then
      end
      if gearLever.centerAxis ~= nil and not true and state.useRotation[v11] then
        local v16 = math.abs(state.curRotation[gearLever.centerAxis] - state.rotation[gearLever.centerAxis])
        if 0.00001 >= v16 then
        end
      end
      if v14 then
        if v8 then
        else
        end
        v17.cur = v18
        v17.tar = v13
        table.insert(v16, v17)
        gearLever.curTarget[v11] = v13
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 308, target 236)
  end
  for v12, v13 in pairs(self.spec_motorized.activeGearLeverInterpolators) do
    if not (v12.gearLever == state.gearLever) then
      continue
    end
    self.spec_motorized.activeGearLeverInterpolators[v12] = nil
  end
  if self.spec_motorized.activeGearLeverInterpolators[state] == nil and 0 < #v5.interpolations then
    v11 = math.max(gearLever.changeTime, 0.001)
    -- TODO: structure LOP_FORNPREP (pc 356, target 369)
    v5.interpolations[1].speed = (v5.interpolations[1].tar - v5.interpolations[1].cur) / v11 / #v5.interpolations
    -- TODO: structure LOP_FORNLOOP (pc 368, target 357)
    v5.currentInterpolation = 1
    if isResetPosition ~= nil and isResetPosition ~= true then
    end
    v5.isResetPosition = v11
    v5.handsOnDelay = gearLever.handsOnDelay
    if state.gear == nil then
    end
    v5.isGear = true
    self.spec_motorized.activeGearLeverInterpolators[state] = v5
  end
end
function Motorized:getGearInfoToDisplay()
  if self.spec_motorized.motor ~= nil then
    local v13, v14, v15, v16, v17, v18, v19, v20 = self.spec_motorized.motor:getGearToDisplay()
    v13, v14 = self.spec_motorized.motor:getGearGroupToDisplay()
    if not v14 then
    end
    if self.getAcDecelerationAxis ~= nil then
      v14 = self:getAcDecelerationAxis()
      v13 = math.abs(...)
      if 0 < v13 then
        v13 = self:getIsMotorInNeutral()
      end
    end
  end
  return dt, accInput, isActiveForInputIgnoreSelection, v5, v6, v7, v8, damage, v10, v11
end
function Motorized:setTransmissionDirection(direction)
  if self.spec_motorized.motor ~= nil then
    self.spec_motorized.motor:setTransmissionDirection(direction)
  end
end
function Motorized:getDirectionChangeMode()
  return self.spec_motorized.directionChangeMode
end
function Motorized:getIsManualDirectionChangeAllowed()
  local accInput = self:getIsAIActive()
  return not accInput
end
function Motorized:getGearShiftMode()
  return self.spec_motorized.gearShiftMode
end
function Motorized:onStateChange(state, vehicle, isControlling)
  if state == Vehicle.STATE_CHANGE_ENTER_VEHICLE then
    -- if not g_currentMission.missionInfo.automaticMotorStartEnabled then goto L34 end
    local isSelected = self:getCanMotorRun()
    -- if not v4 then goto L34 end
    self:startMotor(true)
    return
  end
  if state == Vehicle.STATE_CHANGE_LEAVE_VEHICLE then
    isSelected = self:getStopMotorOnLeave()
    if isSelected and g_currentMission.missionInfo.automaticMotorStartEnabled then
      self:stopMotor(true)
    end
    self:stopVehicle()
  end
end
function Motorized:stopVehicle()
  if self.isServer and self.spec_motorized.motorizedNode ~= nil then
    self:controlVehicle(0, 0, 0, 0, math.huge, 0, 0, 0, 0, 0)
  end
end
function Motorized:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if 0 < fillLevelDelta and fillType == FillType.DIESEL then
    local v8 = self:getFillUnitFillLevel(fillUnitIndex)
    local damage = self:getFillUnitCapacity(fillUnitIndex)
    v8 = self:getConsumerFillUnitIndex(FillType.DEF)
    if v8 ~= nil then
      local v11 = self:getFillUnitCapacity(v8)
      v11 = self:getFillUnitFillLevel(v8)
      local v12 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v12, v8, v11 * v8 / damage - v11, FillType.DEF, ToolType.UNDEFINED, nil)
    end
  end
end
function Motorized:onSetBroken()
  self:stopMotor(true)
end
function Motorized:getName(superFunc)
  local accInput = superFunc(self)
  local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getItemByXMLFilename(self.configFileName)
  if isActiveForInputIgnoreSelection ~= nil and isActiveForInputIgnoreSelection.configurations ~= nil and isActiveForInputIgnoreSelection.configurations.motor[self.configurations.motor].name and isActiveForInputIgnoreSelection.configurations.motor[self.configurations.motor].name ~= "" then
  end
  return accInput
end
function Motorized:getCanBeSelected(superFunc)
  if not g_currentMission.missionInfo.automaticMotorStartEnabled then
    local accInput = accInput:getChildVehicles()
    for v6, v7 in pairs(accInput) do
      if not (v7.spec_motorized ~= nil) then
        continue
      end
      return true
    end
  end
  accInput = superFunc(self)
  return accInput
end
function Motorized:getIsPowered(superFunc)
  local ret = superFunc(self)
  if ret and not self.spec_motorized.isMotorStarted then
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getChildVehicles()
    for v7, v8 in pairs(isActiveForInputIgnoreSelection) do
      if not (v8 ~= self) then
        continue
      end
      if not (v8.spec_motorized ~= nil) then
        continue
      end
      if not v8.spec_motorized.isMotorStarted then
        continue
      end
      return true
    end
    isSelected = self:getCanMotorRun()
    if isSelected then
      v5 = v5:getText("warning_motorNotStarted")
      return false
    end
    v5 = self:getMotorNotAllowedWarning()
    return false
  end
  return ret
end
function Motorized:getDashboardSpeedDir()
  local accInput = self:getLastSpeed()
  return accInput * self.movingDirection
end
function Motorized:actionEventToggleMotorState(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getIsAIActive()
  if not v5 then
    if self.spec_motorized.isMotorStarted then
      self:stopMotor()
      return
    end
    local v6 = self:getCanMotorRun()
    if v6 then
      self:startMotor()
      return
    end
    v6 = self:getMotorNotAllowedWarning()
    if v6 ~= nil then
      v7:showBlinkingWarning(v6, 2000)
    end
  end
end
function Motorized:getStoreAdditionalConfigData(dt, accInput, isActiveForInputIgnoreSelection, isSelected, v5)
  local v6 = self:getValue(dt .. "#hp")
  v5.power = v6
  v6 = self:getValue(dt .. "#maxSpeed")
  v5.maxSpeed = v6
  v6 = self:getValue(dt .. "#consumerConfigurationIndex")
  v5.consumerConfigurationIndex = v6
end
function Motorized:loadSpecValueFuel(dt, accInput)
  local isActiveForInputIgnoreSelection = self:getRootName()
  while true do
    v6 = string.format(isActiveForInputIgnoreSelection .. ".fillUnit.fillUnitConfigurations.fillUnitConfiguration(%d)", v5)
    v7 = self:hasProperty(v6)
    if not v7 then
      break
    end
    while true do
      damage = string.format(v6 .. ".fillUnits.fillUnit(%d)", v8)
      v10 = self:hasProperty(damage)
      if not v10 then
        break
      end
      v10 = self:getValue(damage .. "#fillTypes")
      v11 = self:getValue(damage .. "#capacity")
      table.insert(v7, {fillTypes = v10, capacity = v11})
    end
    table.insert(isSelected, v7)
  end
  while true do
    v7 = string.format(isActiveForInputIgnoreSelection .. ".motorized.consumerConfigurations.consumerConfiguration(%d)", v5)
    v8 = self:hasProperty(v7)
    if not v8 then
      break
    end
    while true do
      v10 = string.format(v7 .. ".consumer(%d)", damage)
      v11 = self:hasProperty(v10)
      if not v11 then
        break
      end
      v11 = self:getValue(v10 .. "#fillType")
      v12 = self:getValue(v10 .. "#fillUnitIndex")
      v13 = self:getValue(v10 .. "#capacity")
      table.insert(v8, {fillType = v11, fillUnitIndex = v12, capacity = v13})
    end
    table.insert(v6, v8)
  end
  return {fillUnits = isSelected, consumers = v6}
end
function Motorized.getSpecValueFuelDiesel(storeItem, realItem, configurations)
  return Motorized.getSpecValueFuel(storeItem, realItem, configurations, FillType.DIESEL)
end
function Motorized.getSpecValueFuelElectricCharge(storeItem, realItem, configurations)
  return Motorized.getSpecValueFuel(storeItem, realItem, configurations, FillType.ELECTRICCHARGE)
end
function Motorized.getSpecValueFuelMethane(storeItem, realItem, configurations)
  return Motorized.getSpecValueFuel(storeItem, realItem, configurations, FillType.METHANE)
end
function Motorized:getSpecValueFuel(dt, accInput, isActiveForInputIgnoreSelection)
  if dt ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L36
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L36
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L36
    local v6 = Utils.getNoNil(self.configurations.motor[dt.configurations.motor].consumerConfigurationIndex, 1)
  elseif accInput ~= nil and accInput.motor ~= nil then
    v6 = Utils.getNoNil(self.configurations.motor[accInput.motor].consumerConfigurationIndex, 1)
  end
  if self.specs.fuel then
  end
  if v13 ~= nil then
    for v17, v18 in ipairs(v13) do
      local v19 = v19:getFillTypeIndexByName(v18.fillType)
      if isActiveForInputIgnoreSelection ~= nil and not (v19 == isActiveForInputIgnoreSelection) then
        continue
      end
      if v19 == FillType.DIESEL then
        if not (v19 == FillType.DEF) then
          continue
        end
      elseif v19 == FillType.ELECTRICCHARGE then
      else
        if not (v19 == FillType.METHANE) then
          continue
        end
      end
    end
  end
  if dt ~= nil and self.configurations ~= nil and dt.configurations.fillUnit ~= nil and self.configurations.fillUnit ~= nil then
  end
  if self.specs.fuel and self.specs.fuel.fillUnits[v14] ~= nil then
    if self.specs.fuel.fillUnits[v14][damage] ~= nil and v5 == nil then
      v16 = math.max(self.specs.fuel.fillUnits[v14][damage].capacity, v5 or 0)
    end
    if self.specs.fuel.fillUnits[v14][v10] ~= nil and v6 == nil then
      v17 = math.max(self.specs.fuel.fillUnits[v14][v10].capacity, v6 or 0)
    end
    if self.specs.fuel.fillUnits[v14][v11] ~= nil and v7 == nil then
      v18 = math.max(self.specs.fuel.fillUnits[v14][v11].capacity, v7 or 0)
    end
    if self.specs.fuel.fillUnits[v14][v12] ~= nil and v8 == nil then
      v19 = math.max(self.specs.fuel.fillUnits[v14][v12].capacity, v8 or 0)
    end
  end
  if v5 ~= nil then
    if v6 ~= nil and 0 < v6 then
      v16 = v16:getText("shop_fuelDefValue")
      v18 = v18:getText("unit_literShort")
      local v20 = v20:getText("unit_literShort")
      local v21 = v21:getText("fillType_def_short")
      v15 = string.format(...)
      return v15
    end
    v16 = v16:getText("shop_fuelValue")
    v18 = v18:getText("unit_literShort")
    v15 = string.format(...)
    return v15
  end
  if v7 ~= nil then
    v16 = v16:getText("shop_fuelValue")
    v18 = v18:getText("unit_kw")
    v15 = string.format(...)
    return v15
  end
  if v8 ~= nil then
    v16 = v16:getText("shop_fuelValue")
    v18 = v18:getText("unit_kg")
    v15 = string.format(...)
    return v15
  end
  return nil
end
function Motorized:loadSpecValueMaxSpeed(dt, accInput)
  local isSelected = self:hasProperty("vehicle.motorized.motorConfigurations.motorConfiguration(0)")
  if isSelected then
  else
    isSelected = self:hasProperty("vehicle.motor")
    if isSelected then
    end
  end
  if isActiveForInputIgnoreSelection ~= nil then
    isSelected = self:getValue(isActiveForInputIgnoreSelection .. ".motor#maxRpm", 1800)
    local v5 = self:getValue(isActiveForInputIgnoreSelection .. ".transmission#minForwardGearRatio", nil)
    local v6 = self:getValue(isActiveForInputIgnoreSelection .. ".transmission#axleRatio", 1)
    local v7 = Motorized.loadGears(nil, self, "forwardGear", isActiveForInputIgnoreSelection .. ".transmission", isSelected, v6, 1)
    if v5 == nil and v7 == nil then
      Logging.xmlWarning(self, "No gear ratios defined for transmission")
    end
    local v10 = VehicleMotor.calculatePhysicalMaximumSpeed(v5, v7, isSelected)
    local v8 = math.ceil(v10 * 3.6)
    local damage = self:getValue("vehicle.storeData.specs.maxSpeed")
    v10 = self:getValue("vehicle.motorized.motorConfigurations.motorConfiguration(0)#maxSpeed")
    local v11 = self:getValue(isActiveForInputIgnoreSelection .. ".motor#maxForwardSpeed")
    if damage ~= nil then
      return damage
    end
    if v10 ~= nil then
      return v10
    end
    if v11 ~= nil then
      return math.min(v11, v8)
    end
    return v8
  end
  return nil
end
function Motorized:getSpecValueMaxSpeed(dt)
  if dt ~= nil and self.configurations ~= nil and dt.configurations.motor ~= nil and self.configurations.motor ~= nil then
    local isSelected = Utils.getNoNil(self.configurations.motor[dt.configurations.motor].maxSpeed, nil)
  end
  if accInput == nil then
  end
  if accInput ~= nil then
    isSelected = isSelected:getText("shop_maxSpeed")
    local v7 = v7:getSpeed(accInput)
    local v5 = string.format(...)
    local v6 = v6:getSpeedMeasuringUnit()
    return string.format(...)
  end
  return nil
end
function Motorized:loadSpecValuePower(dt, accInput)
  return self:getValue("vehicle.storeData.specs.power")
end
function Motorized:getSpecValuePower(dt, accInput, isActiveForInputIgnoreSelection, isSelected, v5)
  if dt ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L33
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L33
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L33
  elseif dt == nil and self.configurations ~= nil and self.configurations.motor ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 52, target 84)
    if self.configurations.motor[1].power ~= nil then
      if not nil then
      end
      local v12 = math.min(v13, v11.power)
      v12 = math.max(v7 or 0, v11.power)
    end
    -- TODO: structure LOP_FORNLOOP (pc 83, target 53)
  end
  if v6 == nil then
  end
  if v6 ~= nil then
    if isSelected ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L131
    end
    if v6 ~= v7 then
      local damage = damage:getText("shop_maxPowerValueRange")
      local v10 = MathUtil.round(v6)
      local v11 = MathUtil.round(v7)
      return string.format(...)
    end
    damage = damage:getText("shop_maxPowerValueSingle")
    v10 = MathUtil.round(v6)
    v8 = string.format(...)
    return v8
    v8 = MathUtil.round(v6)
    damage = MathUtil.round(v7)
    return v8
  end
  return nil
end
function Motorized:loadSpecValuePowerConfig(dt, accInput)
  local v6 = v6:getConfigurations()
  for v8, damage in pairs(...) do
    local v10 = v10:getConfigurationAttribute(v8, "xmlKey")
    if v10 ~= nil then
    else
    end
    local v11 = string.format("vehicle%s.%sConfigurations", v10, v8)
    isActiveForInputIgnoreSelection[v8] = {}
    while true do
      v13 = string.format("%s.%sConfiguration(%d)", v11, v8, v12)
      v14 = self:hasProperty(v13)
      if not v14 then
        break
      end
      v14 = getXMLInt(self.handle, v13 .. "#hp")
      if v14 ~= nil then
        v17 = MathUtil.round(v14)
        isActiveForInputIgnoreSelection[v8][v12 + 1] = v17
      end
    end
  end
  if isSelected then
    return isActiveForInputIgnoreSelection
  end
  return nil
end
function Motorized:getSpecValuePowerConfig(dt, accInput, isActiveForInputIgnoreSelection, isSelected, v5)
  if self.specs.powerConfig ~= nil then
    if accInput ~= nil then
      for v11, v12 in pairs(accInput) do
        if not (self.specs.powerConfig[v11][v12] ~= nil) then
          continue
        end
      end
    else
      for v12, v13 in pairs(self.specs.powerConfig) do
        for v17, v18 in pairs(v13) do
          local v19 = math.min(v6, v18)
          v19 = math.max(v7, v18)
        end
      end
    end
    if v6 ~= nil then
      if not isSelected then
        if v6 ~= v7 then
          damage = damage:getText("shop_maxPowerValueRange")
          v10 = MathUtil.round(v6)
          v11 = MathUtil.round(v7)
          v8 = string.format(...)
          return v8
        end
        damage = damage:getText("shop_maxPowerValueSingle")
        v10 = MathUtil.round(v6)
        v8 = string.format(...)
        return v8
      end
      v8 = MathUtil.round(v6)
      damage = MathUtil.round(v7)
      return v8
    end
  end
  return nil
end
function Motorized:loadSpecValueTransmission(dt, accInput)
  self:iterate("vehicle.motorized.motorConfigurations.motorConfiguration", function(self, dt)
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(dt .. ".transmission#name", nil, u2, false)
    u0[self] = isActiveForInputIgnoreSelection
    local accInput = accInput:getValue(dt .. ".transmission#param")
    if accInput ~= nil then
      isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:convertText(accInput, u2)
      local isSelected = string.format(u0[self], isActiveForInputIgnoreSelection)
      u0[self] = isSelected
    end
  end)
  return {}
end
function Motorized:getSpecValueTransmission(dt, accInput, isActiveForInputIgnoreSelection, isSelected, v5)
  if dt ~= nil and self.configurations ~= nil and dt.configurations.motor ~= nil and self.configurations.motor ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L41
    return self.specs.transmission[1]
  end
  return self.specs.transmission[1]
end
