-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Wheels = {VRAM_PER_WHEEL = 524288, WHEEL_NO_CONTACT = 0, WHEEL_OBJ_CONTACT = 1, WHEEL_GROUND_CONTACT = 2, WHEEL_GROUND_HEIGHT_CONTACT = 3, perlinNoiseSink = {}}
Wheels.perlinNoiseSink.randomFrequency = 0.2
Wheels.perlinNoiseSink.persistence = 0
Wheels.perlinNoiseSink.numOctaves = 2
Wheels.perlinNoiseSink.randomSeed = 123
Wheels.perlinNoiseWobble = {randomFrequency = 0.8, persistence = 0, numOctaves = 4, randomSeed = 321}
Wheels.GROUND_PARTICLES = {[1] = true, [2] = false, [3] = true, [4] = false, [5] = true, [6] = true, [7] = true}
Wheels.MAX_SINK = {[FieldGroundType.STUBBLE_TILLAGE] = 0.15, [FieldGroundType.CULTIVATED] = 0.2, [FieldGroundType.SEEDBED] = 0.15, [FieldGroundType.PLOWED] = 0.25, [FieldGroundType.ROLLED_SEEDBED] = 0.08, [FieldGroundType.SOWN] = 0.08, [FieldGroundType.DIRECT_SOWN] = 0.08, [FieldGroundType.PLANTED] = 0.08, [FieldGroundType.RIDGE] = 0.15, [FieldGroundType.ROLLER_LINES] = 0.08, [FieldGroundType.HARVEST_READY] = 0.08, [FieldGroundType.HARVEST_READY_OTHER] = 0.08, [FieldGroundType.GRASS] = 0.1, [FieldGroundType.GRASS_CUT] = 0.1}
Wheels.PARTICLE_SYSTEM_PATH = "$data/effects/wheel/wheelEmitterShape.i3d"
Wheels.MAX_TIRE_TRACK_CREATION_DISTANCE = 75
Wheels.VISUAL_WHEEL_UPDATE_DISTANCE = 300
Wheels.WHEELS_XML_PATH = "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).wheels"
Wheels.WHEEL_XML_PATH = "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).wheels.wheel(?)"
Wheels.xmlSchema = nil
Wheels.xmlSchemaHub = nil
Wheels.xmlSchemaConnector = nil
function Wheels.prerequisitesPresent(specializations)
  return true
end
function Wheels.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onBrake")
  SpecializationUtil.registerEvent(vehicleType, "onFinishedWheelLoading")
  SpecializationUtil.registerEvent(vehicleType, "onWheelConfigurationChanged")
end
function Wheels.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getSteeringRotTimeByCurvature", Wheels.getSteeringRotTimeByCurvature)
  SpecializationUtil.registerFunction(vehicleType, "getTurningRadiusByRotTime", Wheels.getTurningRadiusByRotTime)
  SpecializationUtil.registerFunction(vehicleType, "getWheelConfigurationValue", Wheels.getWheelConfigurationValue)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelFromXML", Wheels.loadWheelFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelBaseData", Wheels.loadWheelBaseData)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelDataFromExternalXML", Wheels.loadWheelDataFromExternalXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelSharedData", Wheels.loadWheelSharedData)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelVisualData", Wheels.loadWheelVisualData)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelPhysicsData", Wheels.loadWheelPhysicsData)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelSteeringData", Wheels.loadWheelSteeringData)
  SpecializationUtil.registerFunction(vehicleType, "loadAdditionalWheelsFromXML", Wheels.loadAdditionalWheelsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadAdditionalWheelConnectorFromXML", Wheels.loadAdditionalWheelConnectorFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelChocksFromXML", Wheels.loadWheelChocksFromXML)
  SpecializationUtil.registerFunction(vehicleType, "onWheelChockI3DLoaded", Wheels.onWheelChockI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelParticleSystem", Wheels.loadWheelParticleSystem)
  SpecializationUtil.registerFunction(vehicleType, "onWheelParticleSystemI3DLoaded", Wheels.onWheelParticleSystemI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadHubsFromXML", Wheels.loadHubsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadHubFromXML", Wheels.loadHubFromXML)
  SpecializationUtil.registerFunction(vehicleType, "onWheelHubI3DLoaded", Wheels.onWheelHubI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadAckermannSteeringFromXML", Wheels.loadAckermannSteeringFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadNonPhysicalWheelFromXML", Wheels.loadNonPhysicalWheelFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWheelsFromXML", Wheels.loadWheelsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "finalizeWheel", Wheels.finalizeWheel)
  SpecializationUtil.registerFunction(vehicleType, "onWheelPartI3DLoaded", Wheels.onWheelPartI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "onAdditionalWheelConnectorI3DLoaded", Wheels.onAdditionalWheelConnectorI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "readWheelDataFromStream", Wheels.readWheelDataFromStream)
  SpecializationUtil.registerFunction(vehicleType, "writeWheelDataToStream", Wheels.writeWheelDataToStream)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelContact", Wheels.updateWheelContact)
  SpecializationUtil.registerFunction(vehicleType, "addTireTrackNode", Wheels.addTireTrackNode)
  SpecializationUtil.registerFunction(vehicleType, "updateTireTrackNode", Wheels.updateTireTrackNode)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelDensityMapHeight", Wheels.updateWheelDensityMapHeight)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelDestruction", Wheels.updateWheelDestruction)
  SpecializationUtil.registerFunction(vehicleType, "getIsWheelFoliageDestructionAllowed", Wheels.getIsWheelFoliageDestructionAllowed)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelSink", Wheels.updateWheelSink)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelFriction", Wheels.updateWheelFriction)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelBase", Wheels.updateWheelBase)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelTireFriction", Wheels.updateWheelTireFriction)
  SpecializationUtil.registerFunction(vehicleType, "setWheelPositionDirty", Wheels.setWheelPositionDirty)
  SpecializationUtil.registerFunction(vehicleType, "setWheelTireFrictionDirty", Wheels.setWheelTireFrictionDirty)
  SpecializationUtil.registerFunction(vehicleType, "getDriveGroundParticleSystemsScale", Wheels.getDriveGroundParticleSystemsScale)
  SpecializationUtil.registerFunction(vehicleType, "getIsVersatileYRotActive", Wheels.getIsVersatileYRotActive)
  SpecializationUtil.registerFunction(vehicleType, "getWheelFromWheelIndex", Wheels.getWheelFromWheelIndex)
  SpecializationUtil.registerFunction(vehicleType, "getWheelByWheelNode", Wheels.getWheelByWheelNode)
  SpecializationUtil.registerFunction(vehicleType, "getWheels", Wheels.getWheels)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentSurfaceSound", Wheels.getCurrentSurfaceSound)
  SpecializationUtil.registerFunction(vehicleType, "getAreSurfaceSoundsActive", Wheels.getAreSurfaceSoundsActive)
  SpecializationUtil.registerFunction(vehicleType, "destroyFruitArea", Wheels.destroyFruitArea)
  SpecializationUtil.registerFunction(vehicleType, "destroySnowArea", Wheels.destroySnowArea)
  SpecializationUtil.registerFunction(vehicleType, "brake", Wheels.brake)
  SpecializationUtil.registerFunction(vehicleType, "getBrakeForce", Wheels.getBrakeForce)
  SpecializationUtil.registerFunction(vehicleType, "setCustomBrakeForce", Wheels.setCustomBrakeForce)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelChocksPosition", Wheels.updateWheelChocksPosition)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelChockPosition", Wheels.updateWheelChockPosition)
  SpecializationUtil.registerFunction(vehicleType, "updateWheelDirtAmount", Wheels.updateWheelDirtAmount)
  SpecializationUtil.registerFunction(vehicleType, "getAllowTireTracks", Wheels.getAllowTireTracks)
  SpecializationUtil.registerFunction(vehicleType, "getTireTrackColor", Wheels.getTireTrackColor)
  SpecializationUtil.registerFunction(vehicleType, "forceUpdateWheelPhysics", Wheels.forceUpdateWheelPhysics)
  SpecializationUtil.registerFunction(vehicleType, "onWheelSnowHeightChanged", Wheels.onWheelSnowHeightChanged)
end
function Wheels.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", Wheels.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", Wheels.removeFromPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getComponentMass", Wheels.getComponentMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getVehicleWorldXRot", Wheels.getVehicleWorldXRot)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getVehicleWorldDirection", Wheels.getVehicleWorldDirection)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "validateWashableNode", Wheels.validateWashableNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIDirectionNode", Wheels.getAIDirectionNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIRootNode", Wheels.getAIRootNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSupportsMountKinematic", Wheels.getSupportsMountKinematic)
end
function Wheels.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttach", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetach", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterAnimationValueTypes", Wheels)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", Wheels)
end
function Wheels.initSpecialization()
  local v3 = v3:getText("configuration_wheelSetup")
  local v9 = v9:getText("configuration_wheelBrand")
  v0:addConfigurationType("wheel", v3, "wheels", nil, Wheels.loadBrandName, Wheels.loadedBrandNames, ConfigurationUtil.SELECTOR_MULTIOPTION, v9, Wheels.getBrands, Wheels.getWheelsByBrand, 2)
  v3 = v3:getText("configuration_rimColor")
  v0:addConfigurationType("rimColor", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v0:addSpecType("wheels", "shopListAttributeIconWheels", Wheels.loadSpecValueWheels, Wheels.getSpecValueWheels, "vehicle")
  v0:addVRamUsageFunction(Wheels.getVRamUsageFromXML)
  Vehicle.xmlSchema:setXMLSpecializationType("Wheels")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "rimColor")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?)#brand", "Wheel brand")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Wheels.WHEELS_XML_PATH .. "#autoRotateBackSpeed", "Auto rotate back speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Wheels.WHEELS_XML_PATH .. "#speedDependentRotateBack", "Speed dependent auto rotate back speed", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, Wheels.WHEELS_XML_PATH .. "#differentialIndex", "Differential index")
  Vehicle.xmlSchema:register(XMLValueType.INT, Wheels.WHEELS_XML_PATH .. "#ackermannSteeringIndex", "Ackermann steering index")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Wheels.WHEELS_XML_PATH .. "#baseConfig", "Base for this configuration")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Wheels.WHEELS_XML_PATH .. "#hasSurfaceSounds", "Has surface sounds", true)
  Vehicle.xmlSchema:register(XMLValueType.STRING, Wheels.WHEELS_XML_PATH .. "#surfaceSoundTireType", "Tire type that is used for surface sounds", "Tire type of first wheel")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Wheels.WHEELS_XML_PATH .. "#surfaceSoundLinkNode", "Surface sound link node", "Root component")
  Wheels.registerWheelXMLPaths(Vehicle.xmlSchema, Wheels.WHEELS_XML_PATH .. ".wheel(?)")
  Vehicle.xmlSchema:register(XMLValueType.COLOR, "vehicle.wheels.rimColor", "Rim color")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.rimColor#useBaseColor", "Use base vehicle color", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.wheels.rimColor#material", "Material id")
  -- TODO: structure LOP_FORNPREP (pc 222, target 265)
  Vehicle.xmlSchema:register(XMLValueType.COLOR, "vehicle.wheels.hubs.color" .. 0, "Color")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.wheels.hubs.color" .. 0 .. "#material", "Material id")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.hubs.color" .. 0 .. "#useBaseColor", "Use base color", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.hubs.color" .. 0 .. "#useRimColor", "Use rim color", false)
  -- TODO: structure LOP_FORNLOOP (pc 264, target 223)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.wheels.hubs.hub(?)#linkNode", "Link node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.hubs.hub(?)#filename", "Filename")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.hubs.hub(?)#isLeft", "Is left side", false)
  -- TODO: structure LOP_FORNPREP (pc 290, target 311)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.hubs.hub(?).color" .. 0, "Color")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.wheels.hubs.hub(?).color" .. 0 .. "#material", "Material id")
  -- TODO: structure LOP_FORNLOOP (pc 310, target 291)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wheels.hubs.hub(?)#offset", "X axis offset")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_SCALE, "vehicle.wheels.hubs.hub(?)#scale", "Hub scale")
  Vehicle.xmlSchema:addDelayedRegistrationFunc("AnimatedVehicle:part", function(self, v1)
    self:register(XMLValueType.INT, v1 .. "#wheelIndex", "Wheel index [1..n]")
    self:register(XMLValueType.ANGLE, v1 .. "#startSteeringAngle", "Start steering angle")
    self:register(XMLValueType.ANGLE, v1 .. "#endSteeringAngle", "End steering angle")
    self:register(XMLValueType.FLOAT, v1 .. "#startBrakeFactor", "Start brake force factor")
    self:register(XMLValueType.FLOAT, v1 .. "#endBrakeFactor", "End brake force factor")
  end)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#linkNode", "Link node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#filename", "Path to wheel xml file")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#configId", "Wheel config id", "default")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#isLeft", "Is left", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#isInverted", "Tire profile inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#xRotOffset", "X rotation offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.COLOR, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#color", "Rim color")
  Vehicle.xmlSchema:register(XMLValueType.COLOR, "vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(?)" .. "#additionalColor", "Color of additional part")
  Wheels.registerAckermannSteeringXMLPaths(Vehicle.xmlSchema, "vehicle.wheels.ackermannSteeringConfigurations.ackermannSteering(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  v3 = XMLSchema.new("wheel")
  Wheels.xmlSchema = v3
  v2:register(XMLValueType.STRING, "wheel.brand", "Wheel tire brand", "LIZARD")
  v2:register(XMLValueType.STRING, "wheel.name", "Wheel tire name", "Tire")
  Wheels.registerWheelSharedDataXMLPaths(Wheels.xmlSchema, "wheel.default")
  Wheels.registerWheelSharedDataXMLPaths(Wheels.xmlSchema, "wheel.configurations.configuration(?)")
  v2:register(XMLValueType.STRING, "wheel.configurations.configuration(?)#id", "Configuration Id")
  v3 = XMLSchema.new("wheelHub")
  Wheels.xmlSchemaHub = v3
  Wheels.xmlSchemaHub:register(XMLValueType.STRING, "hub.filename", "I3D filename")
  Wheels.xmlSchemaHub:register(XMLValueType.STRING, "hub.nodes#left", "Index of left node in hub i3d file")
  Wheels.xmlSchemaHub:register(XMLValueType.STRING, "hub.nodes#right", "Index of right node in hub i3d file")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color0", "Color 0")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color1", "Color 1")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color2", "Color 2")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color3", "Color 3")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color4", "Color 4")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color5", "Color 5")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color6", "Color 6")
  Wheels.xmlSchemaHub:register(XMLValueType.COLOR, "hub.color7", "Color 7")
  local v4 = XMLSchema.new("wheelConnector")
  Wheels.xmlSchemaConnector = v4
  Wheels.xmlSchemaConnector:register(XMLValueType.STRING, "connector.file#name", "I3D filename")
  Wheels.xmlSchemaConnector:register(XMLValueType.STRING, "connector.file#leftNode", "Index of left node in connector i3d file")
  Wheels.xmlSchemaConnector:register(XMLValueType.STRING, "connector.file#rightNode", "Index of right node in connector i3d file")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).wheels#lastWheelConfiguration", "Last selected wheel configuration", 1)
end
function Wheels.registerWheelXMLPaths(schema, key)
  Wheels.registerWheelBaseDataXMLPaths(schema, key)
  Wheels.registerWheelSharedDataXMLPaths(schema, key)
  Wheels.registerWheelPhysicsDataXMLPaths(schema, key)
  Wheels.registerWheelSteeringDataXMLPaths(schema, key)
  Wheels.registerWheelAdditionalWheelsXMLPaths(schema, key .. ".additionalWheel(?)")
  Wheels.registerWheelChockXMLPaths(schema, key .. ".wheelChock(?)")
  Wheels.registerWheelParticleSystemXMLPaths(schema, key .. ".wheelParticleSystem")
end
function Wheels:registerWheelBaseDataXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".physics#repr", "Wheel repr node")
  self:register(XMLValueType.COLOR, v1 .. "#color", "Wheel color")
  self:register(XMLValueType.INT, v1 .. "#material", "Wheel material id")
  self:register(XMLValueType.COLOR, v1 .. "#additionalColor", "Additional wheel color")
  self:register(XMLValueType.INT, v1 .. "#additionalMaterial", "Additional wheel material id")
  self:register(XMLValueType.BOOL, v1 .. "#isLeft", "Is left", true)
  self:register(XMLValueType.BOOL, v1 .. "#hasTireTracks", "Has tire tracks", false)
  self:register(XMLValueType.BOOL, v1 .. "#hasParticles", "Has particles", false)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Filename")
  self:register(XMLValueType.STRING, v1 .. "#configId", "Wheel config id", "default")
  self:register(XMLValueType.ANGLE, v1 .. "#xRotOffset", "X Rotation offset", 0)
end
function Wheels:registerWheelSharedDataXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#radius", "Wheel radius")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#width", "Wheel width")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#mass", "Wheel mass (to.)", 0.1)
  self:register(XMLValueType.STRING, v1 .. ".physics#tireType", "Tire type (mud, offRoad, street, crawler)")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#frictionScale", "Friction scale")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLongStiffness", "Max. longitude stiffness")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLatStiffness", "Max. latitude stiffness")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLatStiffnessLoad", "Max. latitude stiffness load")
  self:register(XMLValueType.FLOAT, v1 .. ".tire#tireTrackAtlasIndex", "Tire track atlas index", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".tire#widthOffset", "Width offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".tire#xOffset", "X offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".tire#maxDeformation", "Max. deformation", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".tire#initialDeformation", "Tire deformation at initial compression value", "min. 0.04 and max. 60% of the deformation")
  self:register(XMLValueType.FLOAT, v1 .. ".tire#sideDeformOffset", "Offset from lowerst point in center to lowerest point on the side in percentage (0.95: Radius on the side is 5% smaller than in the center)", 1)
  self:register(XMLValueType.BOOL, v1 .. ".tire#isCareWheel", "Is care wheel")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#smoothGroundRadius", "Smooth ground radius", "width * 0.75")
  Wheels.registerWheelVisualDataXMLPaths(self, v1)
end
function Wheels:registerWheelVisualDataXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".tire#filename", "Path to tire i3d file")
  self:register(XMLValueType.BOOL, v1 .. ".tire#isInverted", "Tire profile is inverted")
  self:register(XMLValueType.STRING, v1 .. ".tire#node", "Node Index inside tire i3d")
  self:register(XMLValueType.STRING, v1 .. ".tire#nodeLeft", "Left node index inside tire i3d")
  self:register(XMLValueType.STRING, v1 .. ".tire#nodeRight", "Right node index inside tire i3d")
  self:register(XMLValueType.STRING, v1 .. ".outerRim#filename", "Path to outer rim i3d file")
  self:register(XMLValueType.STRING, v1 .. ".outerRim#node", "Outer rim node index in i3d file", "0|0")
  self:register(XMLValueType.STRING, v1 .. ".outerRim#nodeLeft", "Outer rim node left index in i3d file", "0|0")
  self:register(XMLValueType.STRING, v1 .. ".outerRim#nodeRight", "Outer rim node right index in i3d file", "0|0")
  self:register(XMLValueType.VECTOR_2, v1 .. ".outerRim#widthAndDiam", "Width and diameter")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".outerRim#scale", "Outer rim scale")
  self:register(XMLValueType.STRING, v1 .. ".innerRim#filename", "Path to inner rim i3d file")
  self:register(XMLValueType.STRING, v1 .. ".innerRim#node", "Inner rim node index in i3d file", "0|0")
  self:register(XMLValueType.STRING, v1 .. ".innerRim#nodeLeft", "Inner rim node left index in i3d file")
  self:register(XMLValueType.STRING, v1 .. ".innerRim#nodeRight", "Inner rim node right index in i3d file")
  self:register(XMLValueType.VECTOR_2, v1 .. ".innerRim#widthAndDiam", "Width and diameter")
  self:register(XMLValueType.FLOAT, v1 .. ".innerRim#offset", "Inner rim offset", 0)
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".innerRim#scale", "Inner rim scale")
  self:register(XMLValueType.STRING, v1 .. ".additional#filename", "Path to additional i3d")
  self:register(XMLValueType.STRING, v1 .. ".additional#node", "Additional node index in i3d file")
  self:register(XMLValueType.STRING, v1 .. ".additional#nodeLeft", "Additional node left index in i3d file")
  self:register(XMLValueType.STRING, v1 .. ".additional#nodeRight", "Additional node right index in i3d file")
  self:register(XMLValueType.FLOAT, v1 .. ".additional#offset", "Additional node offset", 0)
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".additional#scale", "Additional node scale")
  self:register(XMLValueType.FLOAT, v1 .. ".additional#mass", "Additional mass (to.)")
  self:register(XMLValueType.VECTOR_2, v1 .. ".additional#widthAndDiam", "Width and diameter")
end
function Wheels:registerWheelPhysicsDataXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".physics#driveNode", "Drive node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".physics#linkNode", "Link node")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#yOffset", "Y offset", 0)
  self:register(XMLValueType.BOOL, v1 .. ".physics#showSteeringAngle", "Show steering angle", true)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#suspTravel", "Suspension travel", 0.01)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#initialCompression", "Initial compression value")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#deltaY", "Delta Y", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#spring", "Spring", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#brakeFactor", "Brake factor", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#autoHoldBrakeFactor", "Auto hold brake factor", "brakeFactor")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damper", "Damper", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperCompressionLowSpeed", "Damper compression on low speeds")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperCompressionHighSpeed", "Damper compression on high speeds")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperCompressionLowSpeedThreshold", "Damper compression on low speeds threshold", 0.1016)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperRelaxationLowSpeed", "Damper relaxation on low speeds")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperRelaxationHighSpeed", "Damper relaxation on high speeds")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#damperRelaxationLowSpeedThreshold", "Damper relaxation on low speeds threshold", 0.1524)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#forcePointRatio", "Force point ratio", 0)
  self:register(XMLValueType.INT, v1 .. ".physics#driveMode", "Drive mode", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#xOffset", "X axis offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#transRatio", "Suspension translation ratio between repr and drive node", 0)
  self:register(XMLValueType.BOOL, v1 .. ".physics#isSynchronized", "Wheel is synchronized in multiplayer", true)
  self:register(XMLValueType.INT, v1 .. ".physics#tipOcclusionAreaGroupId", "Tip occlusion area group id")
  self:register(XMLValueType.BOOL, v1 .. ".physics#useReprDirection", "Use repr direction instead of component direction", false)
  self:register(XMLValueType.BOOL, v1 .. ".physics#useDriveNodeDirection", "Use drive node direction instead of component direction", false)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#mass", "Wheel mass (to.)")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#radius", "Wheel radius", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#width", "Wheel width", 0.6)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#widthOffset", "Wheel width offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#restLoad", "Wheel load while resting", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLongStiffness", "Max. longitude stiffness")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLatStiffness", "Max. latitude stiffness")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxLatStiffnessLoad", "Max. latitude stiffness load")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#frictionScale", "Wheel friction scale", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#rotationDamping", "Rotation damping ", "mass * 0.035")
  self:register(XMLValueType.STRING, v1 .. ".physics#tireType", "Tire type (mud, offRoad, street, crawler)")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#fieldDirtMultiplier", "Field dirt multiplier", 75)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#streetDirtMultiplier", "Street dirt multiplier", -150)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#minDirtPercentage", "Min. dirt scale while cleaning on street drive", 0.35)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxDirtOffset", "Max. dirt amount offset to global dirt node", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#dirtColorChangeSpeed", "Defines speed to change the dirt color (sec)", 20)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#smoothGroundRadius", "Smooth ground radius", "width * 0.75")
  self:register(XMLValueType.BOOL, v1 .. ".physics#versatileYRot", "Do versatile Y rotation", false)
  self:register(XMLValueType.BOOL, v1 .. ".physics#forceVersatility", "Force versatility, also if no ground contact", false)
  self:register(XMLValueType.BOOL, v1 .. ".physics#supportsWheelSink", "Supports wheel sink in field", true)
  self:register(XMLValueType.FLOAT, v1 .. ".physics#maxWheelSink", "Max. wheel sink in fields", 0.5)
  self:register(XMLValueType.ANGLE, v1 .. ".physics#rotSpeed", "Rotation speed")
  self:register(XMLValueType.ANGLE, v1 .. ".physics#rotSpeedNeg", "Rotation speed in negative direction")
  self:register(XMLValueType.ANGLE, v1 .. ".physics#rotMax", "Max. rotation")
  self:register(XMLValueType.ANGLE, v1 .. ".physics#rotMin", "Min. rotation")
  self:register(XMLValueType.BOOL, v1 .. ".physics#invertRotLimit", "Invert the rotation limits")
  self:register(XMLValueType.FLOAT, v1 .. ".physics#rotSpeedLimit", "Rotation speed limit")
end
function Wheels:registerWheelSteeringDataXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".steering#node", "Steering node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".steering#rotNode", "Steering rot node")
  self:register(XMLValueType.FLOAT, v1 .. ".steering#nodeMinTransX", "Min. X translation")
  self:register(XMLValueType.FLOAT, v1 .. ".steering#nodeMaxTransX", "Max. X translation")
  self:register(XMLValueType.ANGLE, v1 .. ".steering#nodeMinRotY", "Min. Y rotation")
  self:register(XMLValueType.ANGLE, v1 .. ".steering#nodeMaxRotY", "Max. Y rotation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".fender(?)#node", "Fender node")
  self:register(XMLValueType.ANGLE, v1 .. ".fender(?)#rotMax", "Max. rotation")
  self:register(XMLValueType.ANGLE, v1 .. ".fender(?)#rotMin", "Min. rotation")
  self:register(XMLValueType.FLOAT, v1 .. ".steeringAxle#scale", "Steering axle scale")
  self:register(XMLValueType.ANGLE, v1 .. ".steeringAxle#rotMax", "Max. rotation")
  self:register(XMLValueType.ANGLE, v1 .. ".steeringAxle#rotMin", "Min. rotation")
end
function Wheels:registerWheelAdditionalWheelsXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Filename")
  self:register(XMLValueType.STRING, v1 .. "#configId", "Config id", "default")
  self:register(XMLValueType.BOOL, v1 .. "#isLeft", "Is left wheel", false)
  self:register(XMLValueType.ANGLE, v1 .. "#xRotOffset", "X Rotation offset", 0)
  self:register(XMLValueType.COLOR, v1 .. "#color", "Color")
  self:register(XMLValueType.BOOL, v1 .. "#hasParticles", "Has particles", false)
  self:register(XMLValueType.BOOL, v1 .. "#hasTireTracks", "Has tire tracks", false)
  self:register(XMLValueType.FLOAT, v1 .. "#offset", "X Offset", 0)
  Wheels.registerConnectorXMLPaths(self, v1 .. ".connector")
  Wheels.registerWheelParticleSystemXMLPaths(self, v1 .. ".wheelParticleSystem")
  Wheels.registerWheelVisualDataXMLPaths(self, v1)
end
function Wheels:registerConnectorXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to connector i3d or xml file")
  self:register(XMLValueType.STRING, v1 .. "#node", "Node in connector i3d file if i3d file is linked instead of xml")
  self:register(XMLValueType.BOOL, v1 .. "#useWidthAndDiam", "Use width and diameter from connector definition", false)
  self:register(XMLValueType.BOOL, v1 .. "#usePosAndScale", "Use position and scale from connector definition", false)
  self:register(XMLValueType.FLOAT, v1 .. "#diameter", "Diameter for shader")
  self:register(XMLValueType.FLOAT, v1 .. "#offset", "Additional connector X offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#width", "Width for shader")
  self:register(XMLValueType.FLOAT, v1 .. "#startPos", "Start pos for shader")
  self:register(XMLValueType.FLOAT, v1 .. "#endPos", "End pos for shader")
  self:register(XMLValueType.FLOAT, v1 .. "#startPosOffset", "Start pos offset for shader (will be added on top if it's automatically calculated)")
  self:register(XMLValueType.FLOAT, v1 .. "#endPosOffset", "End pos offset for shader (will be added on top if it's automatically calculated)")
  self:register(XMLValueType.FLOAT, v1 .. "#uniformScale", "Uniform scale for shader")
  self:register(XMLValueType.COLOR, v1 .. "#color", "Connector color")
end
function Wheels:registerWheelChockXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to wheel chock i3d", "$data/shared/assets/wheelChocks/wheelChock01.i3d")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. "#scale", "Scale", "1 1 1")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#parkingNode", "Parking node")
  self:register(XMLValueType.BOOL, v1 .. "#isInverted", "Is inverted (In front or back of the wheel)", false)
  self:register(XMLValueType.BOOL, v1 .. "#isParked", "Default is parked", false)
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#offset", "Translation offset", "0 0 0")
  self:register(XMLValueType.COLOR, v1 .. "#color", "Color")
  self:register(XMLValueType.INT, v1 .. "#material", "Material")
end
function Wheels:registerWheelParticleSystemXMLPaths(v1)
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#psOffset", "Translation offset", "0 0 0")
  self:register(XMLValueType.FLOAT, v1 .. "#minSpeed", "Min. speed for activation", 3)
  self:register(XMLValueType.FLOAT, v1 .. "#maxSpeed", "Max. speed for activation", 20)
  self:register(XMLValueType.FLOAT, v1 .. "#minScale", "Min. scale", 0.1)
  self:register(XMLValueType.FLOAT, v1 .. "#maxScale", "Max. scale", 1)
  self:register(XMLValueType.INT, v1 .. "#direction", "Moving direction for activation", 0)
  self:register(XMLValueType.BOOL, v1 .. "#onlyActiveOnGroundContact", "Only active while wheel has ground contact", true)
end
function Wheels:registerAckermannSteeringXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#rotSpeed", "Rotation speed")
  self:register(XMLValueType.FLOAT, v1 .. "#rotMax", "Max. rotation")
  self:register(XMLValueType.INT, v1 .. "#rotCenterWheel1", "Rotation center wheel 1")
  self:register(XMLValueType.INT, v1 .. "#rotCenterWheel2", "Rotation center wheel 2")
  self:register(XMLValueType.VECTOR_N, v1 .. "#rotCenterWheels", "List of wheel indices which represent the steering center")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rotCenterNode", "Rotation center node (Used if rotCenterWheelX not given)")
  self:register(XMLValueType.VECTOR_2, v1 .. "#rotCenter", "Center position (from root component) (Used if rotCenterWheelX not given)")
end
function Wheels:onLoad(savegame)
  self.spec_wheels.sharedLoadRequestIds = {}
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.driveGroundParticleSystems", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel#hasParticles")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheelConfigurations.wheelConfiguration", "vehicle.wheels.wheelConfigurations.wheelConfiguration")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.rimColor", "vehicle.wheels.rimColor")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.hubColor", "vehicle.wheels.hubs.color0")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.dynamicallyLoadedWheels", "vehicle.wheels.dynamicallyLoadedWheels")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ackermannSteeringConfigurations", "vehicle.wheels.ackermannSteeringConfigurations")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheels.wheel", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheels.wheel#repr", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel.physics#repr")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheelConfigurations.wheelConfiguration.wheels.wheel#repr", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel.physics#repr")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel#repr", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel.physics#repr")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel#configIndex", "vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel#configId")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ackermannSteering", "vehicle.wheels.ackermannSteeringConfigurations.ackermannSteering")
  local v3, v4 = Wheels.createConfigSaveIdMapping(self.xmlFile)
  self.spec_wheels.configurationSaveIdToIndex = v3
  self.spec_wheels.configurationIndexToBaseConfig = v4
  self.spec_wheels.lastWheelConfigIndex = self.configurations.wheel
  v4 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration(%d)", (self.configurations.wheel or 1) - 1)
  if self.configurations.wheel ~= nil then
    local v6 = v6:hasProperty(v4 .. ".wheels")
    if not v6 then
      Logging.xmlWarning(self.xmlFile, "Invalid wheelConfigurationId '%d'. Using default wheel config instead!", self.configurations.wheel)
    end
  end
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.wheels.wheelConfigurations.wheelConfiguration", v3, self.components, self)
  v6 = v6:getValue("vehicle.wheels.rimColor", nil, true)
  v2.rimColor = v6
  if v2.rimColor == nil then
    v6 = v6:getValue("vehicle.wheels.rimColor#useBaseColor")
    if v6 then
      v6 = ConfigurationUtil.getColorByConfigId(self, "baseColor", self.configurations.baseColor)
      if not v6 then
        v6 = ConfigurationUtil.getColorByConfigId(self, "baseMaterial", self.configurations.baseMaterial)
      end
      v2.rimColor = v6
    end
  end
  if v2.rimColor ~= nil then
    local v7 = v7:getValue("vehicle.wheels.rimColor#material")
    v2.rimColor[4] = v7
  end
  v2.overwrittenWheelColors = {_rimColor = {}}
  -- TODO: structure LOP_FORNPREP (pc 226, target 238)
  local v10 = string.format("_hubColor%d", 1 - 1)
  v2.overwrittenWheelColors[v10] = {}
  -- TODO: structure LOP_FORNLOOP (pc 237, target 227)
  ConfigurationUtil.getOverwrittenMaterialColors(self, self.xmlFile, v2.overwrittenWheelColors)
  if 0 < #v2.overwrittenWheelColors._rimColor then
    if v2.rimColor == nil then
      v2.rimColor = v2.overwrittenWheelColors._rimColor
    else
      v2.rimColor[1] = v2.overwrittenWheelColors._rimColor[1]
      v2.rimColor[2] = v2.overwrittenWheelColors._rimColor[2]
      v2.rimColor[3] = v2.overwrittenWheelColors._rimColor[3]
      if #v2.overwrittenWheelColors._rimColor == 4 then
        v2.rimColor[4] = v2.overwrittenWheelColors._rimColor[4]
      end
    end
  end
  self:loadHubsFromXML()
  self.maxRotTime = 0
  self.minRotTime = 0
  v7 = InterpolatorValue.new(0)
  self.rotatedTimeInterpolator = v7
  v7 = self:getWheelConfigurationValue(self.xmlFile, v3, v4, ".wheels#autoRotateBackSpeed", 1)
  self.autoRotateBackSpeed = v7
  v7 = self:getWheelConfigurationValue(self.xmlFile, v3, v4, ".wheels#speedDependentRotateBack", true)
  self.speedDependentRotateBack = v7
  v7 = self:getWheelConfigurationValue(self.xmlFile, v3, v4, ".wheels#differentialIndex")
  self.differentialIndex = v7
  v7 = self:getWheelConfigurationValue(self.xmlFile, v3, v4, ".wheels#ackermannSteeringIndex")
  v2.ackermannSteeringIndex = v7
  v2.wheelSmoothAccumulation = 0
  v2.wheelCreationTimer = 0
  v2.currentUpdateIndex = 1
  v2.maxUpdateIndex = 1
  v2.wheels = {}
  v2.wheelsByNode = {}
  v2.wheelChocks = {}
  v2.tireTrackNodes = {}
  self:loadWheelsFromXML(self.xmlFile, v4, v3)
  v7 = v7:getValue(v5 .. "#hasSurfaceSounds", true)
  if v7 then
    v7 = v7:getValue(v5 .. "#surfaceSoundLinkNode", self.components[1].node, self.components, self.i3dMappings)
    if 0 < #v2.wheels and v2.wheels[1].tireType ~= nil then
      local v9 = WheelsUtil.getTireTypeName(v2.wheels[1].tireType)
    end
    v9 = v9:getValue(v5 .. "#surfaceSoundTireType", v8)
    v2.surfaceSounds = {}
    v2.surfaceIdToSound = {}
    v2.surfaceNameToSound = {}
    v2.currentSurfaceSound = nil
    -- TODO: structure LOP_FORNPREP (pc 456, target 503)
    local v15 = v15:lower()
    local v16 = v16:lower()
    if v15 == v16 then
      v15 = v15:cloneSample(g_currentMission.surfaceSounds[1].sample, v7, self)
      v15.sampleName = g_currentMission.surfaceSounds[1].name
      table.insert(v2.surfaceSounds, v15)
      v2.surfaceIdToSound[g_currentMission.surfaceSounds[1].materialId] = v15
      v2.surfaceNameToSound[g_currentMission.surfaceSounds[1].name] = v15
    end
    -- TODO: structure LOP_FORNLOOP (pc 502, target 457)
    -- TODO: structure LOP_FORNPREP (pc 506, target 551)
    if v2.surfaceNameToSound[v10[1].name] == nil and v10[1]["type"] == "wheel" then
      v15 = v15:cloneSample(v10[1].sample, v7, self)
      v15.sampleName = v10[1].name
      table.insert(v2.surfaceSounds, v15)
      v2.surfaceIdToSound[v10[1].materialId] = v15
      v2.surfaceNameToSound[v10[1].name] = v15
    end
    -- TODO: structure LOP_FORNLOOP (pc 550, target 507)
  end
  v2.dynamicallyLoadedWheels = {}
  while true do
    v8 = string.format("vehicle.wheels.dynamicallyLoadedWheels.dynamicallyLoadedWheel(%d)", v7)
    v9 = v9:hasProperty(v8)
    if not v9 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v8 .. "#configIndex", v8 .. "#configId")
    v10 = self:loadNonPhysicalWheelFromXML({}, self.xmlFile, v8)
    if v10 then
      table.insert(v2.dynamicallyLoadedWheels, {})
    end
  end
  v8 = InterpolationTime.new(1.2)
  v2.networkTimeInterpolator = v8
  -- TODO: structure LOP_FORNPREP (pc 611, target 671)
  if v2.wheels[1].oppositeWheelIndex == nil then
    -- TODO: structure LOP_FORNPREP (pc 622, target 670)
    if 1 ~= 1 then
      local v17 = math.abs(v2.wheels[1].positionX + v2.wheels[1].positionX)
      -- if v17 >= 0.1 then goto L669 end
      v17 = math.abs(v2.wheels[1].positionZ - v2.wheels[1].positionZ)
      -- if v17 >= 0.1 then goto L669 end
      v17 = math.abs(v2.wheels[1].positionY - v2.wheels[1].positionY)
      -- if v17 >= 0.1 then goto L669 end
      v2.wheels[1].oppositeWheelIndex = 1
      v2.wheels[1].oppositeWheelIndex = 1
    else
      -- TODO: structure LOP_FORNLOOP (pc 669, target 623)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 670, target 612)
  self:loadAckermannSteeringFromXML(self.xmlFile, v2.ackermannSteeringIndex)
  SpecializationUtil.raiseEvent(self, "onFinishedWheelLoading", self.xmlFile, v5)
  v2.wheelSinkActive = Platform.gameplay.wheelSink
  v2.wheelDensityHeightSmoothActive = Platform.gameplay.wheelDensityHeightSmooth
  v2.wheelVisualPressureActive = Platform.gameplay.wheelVisualPressure
  v9 = getTyreTracksSegmentsCoeff()
  v2.tyreTracksSegmentsCoeff = v9
  v2.snowSystem = g_currentMission.snowSystem
  v2.fieldGroundSystem = g_currentMission.fieldGroundSystem
  v9 = v9:getFieldGroundValue(FieldGroundType.GRASS)
  v2.tireTrackGroundGrassValue = v9
  v9 = v9:getFieldGroundValue(FieldGroundType.GRASS_CUT)
  v2.tireTrackGroundGrassCutValue = v9
  v2.brakePedal = 0
  v2.forceIsActiveTime = 3000
  v2.forceIsActiveTimer = 0
  v9 = self:getNextDirtyFlag()
  v2.dirtyFlag = v9
  v9:subscribe(MessageType.SNOW_HEIGHT_CHANGED, self.onWheelSnowHeightChanged, self)
end
function Wheels:onLoadFinished(savegame)
  self:updateWheelChocksPosition(nil, true)
  if self.isServer then
    for v6, v7 in pairs(self.spec_wheels.wheels) do
      self.defaultMass = self.defaultMass + v7.mass
      if not (v7.wheelTire ~= nil) then
        continue
      end
      if not (v7.wheelShapeWidthTmp ~= nil) then
        continue
      end
      local v8, v9, v10 = getTranslation(v7.wheelTire)
      local v14 = math.abs(v8 - v8 + v7.wheelShapeWidthTotalOffset)
      v7.wheelShapeWidth = v7.wheelShapeWidthTmp + v14
      v7.wheelShapeWidthTmp = nil
      setWheelShapeWidth(v7.node, v7.wheelShape, v7.wheelShapeWidth, v7.widthOffset)
    end
    if savegame ~= nil and not savegame.resetVehicles then
      v3 = v3:getValue(savegame.key .. ".wheels#lastWheelConfiguration", 1)
      if v3 ~= self.configurations.wheel then
        for v7, v8 in pairs(v2.wheels) do
          v9 = self:getWashableNodeByCustomIndex(v8)
          if not (v9 ~= nil) then
            continue
          end
          self:setNodeDirtAmount(v9, 0, true)
        end
        SpecializationUtil.raiseEvent(self, "onWheelConfigurationChanged", v3, self.configurations.wheel)
      end
    end
  end
end
function Wheels:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#lastWheelConfiguration", self.spec_wheels.lastWheelConfigIndex or 1)
end
function Wheels:onDelete()
  if self.spec_wheels.sharedLoadRequestIds ~= nil then
    for v5, v6 in pairs(self.spec_wheels.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
  end
  if v1.hubs ~= nil then
    for v5, v6 in pairs(v1.hubs) do
      delete(v6.node)
    end
  end
  if v1.wheels ~= nil then
    for v5, v6 in pairs(v1.wheels) do
      if v6.driveGroundParticleSystems ~= nil then
        for v10, v11 in pairs(v6.driveGroundParticleSystems) do
          ParticleUtil.deleteParticleSystems(v11)
        end
      end
      if not (v6.additionalWheels ~= nil) then
        continue
      end
      for v10, v11 in pairs(v6.additionalWheels) do
        if not (v11.driveGroundParticleSystems ~= nil) then
          continue
        end
        for v15, v16 in pairs(v11.driveGroundParticleSystems) do
          ParticleUtil.deleteParticleSystems(v16)
        end
      end
    end
  end
  if v1.tireTrackNodes ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 102, target 114)
    v6:destroyTrack(v1.tireTrackNodes[1].tireTrackIndex)
    -- TODO: structure LOP_FORNLOOP (pc 113, target 103)
  end
  if v1.wheelChocks ~= nil then
    for v5, v6 in pairs(v1.wheelChocks) do
      if not (v6.node ~= nil) then
        continue
      end
      delete(v6.node)
      v6.node = nil
    end
  end
  v2:deleteSamples(v1.surfaceSounds)
  v1.snowSystem = nil
  v1.fieldGroundSystem = nil
end
function Wheels:onReadStream(streamId, connection)
  if connection.isServer then
    v4:reset()
    -- TODO: structure LOP_FORNPREP (pc 15, target 29)
    if self.spec_wheels.wheels[1].isSynchronized then
      self:readWheelDataFromStream(self.spec_wheels.wheels[1], streamId, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 28, target 16)
    v4:setValue(0)
  end
end
function Wheels:onWriteStream(streamId, connection)
  if not connection.isServer then
    -- TODO: structure LOP_FORNPREP (pc 10, target 23)
    if self.spec_wheels.wheels[1].isSynchronized then
      self:writeWheelDataToStream(self.spec_wheels.wheels[1], streamId)
    end
    -- TODO: structure LOP_FORNLOOP (pc 22, target 11)
  end
end
function Wheels:onReadUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local hasUpdate = streamReadBool(streamId)
    if hasUpdate then
      rotatedTimeRange:startNewPhaseNetwork()
      -- TODO: structure LOP_FORNPREP (pc 20, target 34)
      if self.spec_wheels.wheels[1].isSynchronized then
        self:readWheelDataFromStream(self.spec_wheels.wheels[1], streamId, false)
      end
      -- TODO: structure LOP_FORNLOOP (pc 33, target 21)
      if self.maxRotTime ~= 0 and self.minRotTime ~= 0 then
        local rotatedTimeRange = math.max(self.maxRotTime - self.minRotTime, 0.001)
        local v7 = streamReadUIntN(streamId, 8)
        local v8 = math.abs(self.rotatedTime)
        if v8 < 0.001 then
          self.rotatedTime = 0
        end
        v9:setTargetValue(v7 / 255 * rotatedTimeRange + self.minRotTime)
      end
    end
  end
end
function Wheels:onWriteUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v8 = bitAND(dirtyMask, self.spec_wheels.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      -- TODO: structure LOP_FORNPREP (pc 25, target 38)
      if v4.wheels[1].isSynchronized then
        self:writeWheelDataToStream(v4.wheels[1], streamId)
      end
      -- TODO: structure LOP_FORNLOOP (pc 37, target 26)
      if self.maxRotTime ~= 0 and self.minRotTime ~= 0 then
        v5 = math.max(self.maxRotTime - self.minRotTime, 0.001)
        local v7 = math.floor((self.rotatedTime - self.minRotTime) / v5 * 255)
        local v6 = MathUtil.clamp(v7, 0, 255)
        streamWriteUIntN(streamId, v6, 8)
      end
    end
  end
end
function Wheels.readWheelDataFromStream(v0, v1, v2, v3)
  local v4 = streamReadUIntN(v2, 9)
  if v3 then
    v1.netInfo.xDrive = v4 / 511 * math.pi * 2
    v5:setAngle(v4 / 511 * math.pi * 2)
  else
    v5:setTargetAngle(v4 / 511 * math.pi * 2)
  end
  local v5 = streamReadUIntN(v2, 8)
  if v3 then
    v1.netInfo.y = v5 / 255 * v1.netInfo.sync.yRange + v1.netInfo.sync.yMin
    v6:setPosition(v1.netInfo.x, v5 / 255 * v1.netInfo.sync.yRange + v1.netInfo.sync.yMin, v1.netInfo.z)
  else
    v6:setTargetPosition(v1.netInfo.x, v5 / 255 * v1.netInfo.sync.yRange + v1.netInfo.sync.yMin, v1.netInfo.z)
  end
  local v6 = streamReadUIntN(v2, 7)
  if v3 then
    v1.netInfo.suspensionLength = v6 / 100
    v7:setValue(v6 / 100)
  else
    v7:setTargetValue(v6 / 100)
  end
  if v1.syncContactState then
    local v7 = streamReadUIntN(v2, 2)
    v1.contact = v7
    v7 = streamReadBool(v2)
    v1.lastContactObjectAllowsTireTracks = v7
  end
  if v1.versatileYRot then
    v7 = streamReadUIntN(v2, 9)
    v1.steeringAngle = v7 / 511 * math.pi * 2
  end
  v7 = streamReadUIntN(v2, 3)
  v1.lastTerrainValue = v7
end
function Wheels.writeWheelDataToStream(v0, v1, v2)
  local v7 = math.floor(v1.netInfo.xDrive % math.pi * 2 / math.pi * 2 * 511)
  local v6 = MathUtil.clamp(v7, 0, 511)
  streamWriteUIntN(v2, v6, 9)
  v7 = math.floor((v1.netInfo.y - v1.netInfo.sync.yMin) / v1.netInfo.sync.yRange * 255)
  v6 = MathUtil.clamp(v7, 0, 255)
  streamWriteUIntN(v2, v6, 8)
  v6 = MathUtil.clamp(v1.netInfo.suspensionLength * 100, 0, 128)
  streamWriteUIntN(v2, v6, 7)
  if v1.syncContactState then
    streamWriteUIntN(v2, v1.contact, 2)
    streamWriteBool(v2, v1.lastContactObjectAllowsTireTracks)
  end
  if v1.versatileYRot then
    local v8 = math.floor(v1.steeringAngle % math.pi * 2 / math.pi * 2 * 511)
    v7 = MathUtil.clamp(v8, 0, 511)
    streamWriteUIntN(v2, v7, 9)
  end
  streamWriteUIntN(v2, v1.lastTerrainValue, 3)
end
function Wheels:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and 0 < self.spec_wheels.wheelCreationTimer then
    self.spec_wheels.wheelCreationTimer = self.spec_wheels.wheelCreationTimer - 1
    if self.spec_wheels.wheelCreationTimer == 0 then
      for v9, v10 in pairs(self.spec_wheels.wheels) do
        v10.wheelShapeCreated = true
      end
    end
  end
  if not self.isServer and self.isClient then
    v6:update(dt)
    v6 = v6:getAlpha()
    v7 = v7:getInterpolatedValue(v6)
    self.rotatedTime = v7
    v10 = table.getn(v5.wheels)
    -- TODO: structure LOP_FORNPREP (pc 63, target 160)
    local v14, v15, v16 = v14:getInterpolatedValues(v6)
    v5.wheels[1].netInfo.x = v14
    v5.wheels[1].netInfo.y = v15
    v5.wheels[1].netInfo.z = v16
    local v12 = v12:getInterpolatedValue(v6)
    v5.wheels[1].netInfo.xDrive = v12
    v12 = v12:getInterpolatedValue(v6)
    v5.wheels[1].netInfo.suspensionLength = v12
    if v5.wheels[1].driveGroundParticleSystems ~= nil then
      for v14, v15 in pairs(v5.wheels[1].driveGroundParticleSystems) do
        for v19, v20 in ipairs(v15) do
          setTranslation(v20.emitterShape, v10.netInfo.x + v20.offsets[1], v10.netInfo.y + v20.offsets[2], v10.netInfo.z + v20.offsets[3])
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 159, target 64)
    v7 = v7:isInterpolating()
    if v7 then
      self:raiseActive()
    end
  end
  if self.finishedFirstUpdate then
    v7 = v7:getGroundWetness()
    -- TODO: structure LOP_FORNPREP (pc 183, target 275)
    if self.isActive then
      if v5.currentUpdateIndex == v5.wheels[1].updateIndex then
        self:updateWheelContact(v5.wheels[1])
      end
      if v5.wheelSinkActive then
        self:updateWheelSink(v11, dt, v7)
      end
      self:updateWheelFriction(v11, dt, v7)
      if v5.wheelDensityHeightSmoothActive then
        self:updateWheelDensityMapHeight(v11, dt)
      end
      WheelsUtil.updateWheelPhysics(self, v11, v5.brakePedal, dt)
    end
    if self.isServer and self.isAddedToPhysics then
      WheelsUtil.updateWheelNetInfo(self, v11)
    end
    if self.currentUpdateDistance < Wheels.VISUAL_WHEEL_UPDATE_DISTANCE then
      v12 = WheelsUtil.updateWheelGraphics(self, v11, dt)
      if v11.updateWheelChock and v12 then
        -- TODO: structure LOP_FORNPREP (pc 265, target 274)
        self:updateWheelChockPosition(v11.wheelChocks[1], false)
        -- TODO: structure LOP_FORNLOOP (pc 273, target 266)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 274, target 184)
    v5.currentUpdateIndex = v5.currentUpdateIndex + 1
    if v5.maxUpdateIndex < v5.currentUpdateIndex then
      v5.currentUpdateIndex = 1
    end
    if self.isActive then
      if 0 < #v5.tireTrackNodes then
        v9 = self:getAllowTireTracks()
        -- TODO: structure LOP_FORNPREP (pc 304, target 315)
        self:updateTireTrackNode(v5.tireTrackNodes[1], v9, v7)
        -- TODO: structure LOP_FORNLOOP (pc 314, target 305)
      end
      if 0 < v6 and g_currentMission.missionInfo.fruitDestruction then
        v9 = self:getIsAIActive()
        if not v9 then
          if self.getBlockFoliageDestruction ~= nil then
            v9 = self:getBlockFoliageDestruction()
            -- if v9 then goto L346 end
          end
          -- TODO: structure LOP_FORNPREP (pc 336, target 346)
          self:updateWheelDestruction(v5.wheels[1], dt)
          -- TODO: structure LOP_FORNLOOP (pc 345, target 337)
        end
      end
    end
    if v5.surfaceSounds ~= nil then
      v8 = self:getAreSurfaceSoundsActive()
      if v8 then
        v8 = self:getCurrentSurfaceSound()
        -- if v8 == v5.currentSurfaceSound then goto L397 end
        if v5.currentSurfaceSound ~= nil then
          v9:stopSample(v5.currentSurfaceSound)
        end
        if v8 ~= nil then
          v9:playSample(v8)
        end
        v5.currentSurfaceSound = v8
      elseif v5.currentSurfaceSound ~= nil then
        v8:stopSample(v5.currentSurfaceSound)
        v5.currentSurfaceSound = nil
      end
    end
  end
  if 0 < v6 and self.isServer then
    self:raiseDirtyFlags(v5.dirtyFlag)
  end
end
function Wheels:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    for v9, v10 in ipairs(self.spec_wheels.wheels) do
      if v10.isPositionDirty then
        self:updateWheelBase(v10)
        v10.isPositionDirty = false
      end
      if not v10.isFrictionDirty then
        continue
      end
      self:updateWheelTireFriction(v10)
      v10.isFrictionDirty = false
    end
  end
end
function Wheels:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_wheels.wheels) do
    if not (v10.rotSpeedLimit ~= nil) then
      continue
    end
    local speed = self:getLastSpeed()
    if speed <= v10.rotSpeedLimit then
    end
    speed = MathUtil.clamp(v10.currentRotSpeedAlpha + v11 * dt / 1000, 0, 1)
    v10.currentRotSpeedAlpha = speed
    v10.rotSpeed = v10.rotSpeedDefault * v10.currentRotSpeedAlpha
    v10.rotSpeedNeg = v10.rotSpeedNegDefault * v10.currentRotSpeedAlpha
  end
  if self.isClient then
    v6 = self:getLastSpeed()
    v7 = v7:getGroundWetness()
    if 0.2 >= v7 then
    end
    for speed, v13 in pairs(v5.wheels) do
      if not (v13.driveGroundParticleSystems ~= nil) then
        continue
      end
      if 0 < v13.lastTerrainValue and v13.lastTerrainValue < 9 and 1 >= v6 then
      end
      v14.wheel_dry = not v13.hasSnowContact and v15
      if not v13.hasSnowContact and v15 then
      end
      v14.wheel_wet = v17
      if not v13.hasSnowContact then
      end
      v14.wheel_dust = v17
      v14.wheel_snow = v13.hasSnowContact
      for v20, v21 in pairs(v14) do
        if v13.driveGroundParticleSystems[v20] ~= nil then
          for v26, v27 in ipairs(v13.driveGroundParticleSystems[v20]) do
            if v21 then
              if self.movingDirection < 0 then
                setRotation(v27.emitterShape, 0, math.pi + v13.steeringAngle, 0)
              else
                setRotation(v27.emitterShape, 0, v13.steeringAngle, 0)
              end
              if v20 ~= "wheel_dust" then
                local v29 = MathUtil.rpmToMps(v13.netInfo.xDriveSpeed / 2 * math.pi * 60, v13.radius)
                local v30 = math.pow(v29 / self.lastSpeedReal, 2.5)
                local v31 = self:getDriveGroundParticleSystemsScale(v27, v29)
              else
                v29 = self:getDriveGroundParticleSystemsScale(v27, self.lastSpeedReal)
              end
              if v27.isTintable then
                if v27.lastColor == nil then
                  v27.lastColor = {v27.wheel.lastColor[1], v27.wheel.lastColor[2], v27.wheel.lastColor[3]}
                  v27.targetColor = {v27.wheel.lastColor[1], v27.wheel.lastColor[2], v27.wheel.lastColor[3]}
                  v27.currentColor = {v27.wheel.lastColor[1], v27.wheel.lastColor[2], v27.wheel.lastColor[3]}
                  v27.alpha = 1
                end
                if v27.alpha ~= 1 then
                  v29 = math.min(v27.alpha + dt / 1000, 1)
                  v27.alpha = v29
                  v30 = MathUtil.vector3ArrayLerp(v27.lastColor, v27.targetColor, v27.alpha)
                  v27.currentColor = {}
                  if v27.alpha == 1 then
                    v27.lastColor[1] = v27.currentColor[1]
                    v27.lastColor[2] = v27.currentColor[2]
                    v27.lastColor[3] = v27.currentColor[3]
                  end
                end
                if v27.alpha == 1 and v27.wheel.lastColor[1] ~= v27.targetColor[1] and v27.wheel.lastColor[2] ~= v27.targetColor[2] and v27.wheel.lastColor[3] ~= v27.targetColor[3] then
                  v27.alpha = 0
                  v27.targetColor[1] = v27.wheel.lastColor[1]
                  v27.targetColor[2] = v27.wheel.lastColor[2]
                  v27.targetColor[3] = v27.wheel.lastColor[3]
                end
              end
              if 0 < v28 then
                ParticleUtil.setEmittingState(v27, true)
                -- if not v27.isTintable then goto L431 end
                I3DUtil.setShaderParameterRec(v27.shape, "colorAlpha", v27.currentColor[1], v27.currentColor[2], v27.currentColor[3], 1, false)
              else
                ParticleUtil.setEmittingState(v27, false)
              end
              local v32 = Utils.getNoNil(v13.netInfo.xDriveSpeed, 0)
              local v35 = MathUtil.clamp(v28 * v32 / 13.88888888888889 / v13.radiusOriginal * v16, v27.minScale, v27.maxScale)
              ParticleUtil.setEmitCountScale(...)
              ParticleUtil.setParticleSystemSpeed(v27, v27.particleSpeed * 1)
              ParticleUtil.setParticleSystemSpeedRandom(v27, v27.particleRandomSpeed * 1)
            else
              ParticleUtil.setEmittingState(v27, false)
            end
          end
        end
        v14[v20] = false
      end
    end
  end
end
function Wheels:onUpdateEnd(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    for v9, v10 in pairs(self.spec_wheels.wheels) do
      if not (v10.driveGroundParticleSystems ~= nil) then
        continue
      end
      for v14, v15 in pairs(v10.driveGroundParticleSystems) do
        for v19, v20 in ipairs(v15) do
          ParticleUtil.setEmittingState(v20, false)
        end
      end
    end
    if v5.currentSurfaceSound ~= nil then
      v6:stopSample(v5.currentSurfaceSound)
      v5.currentSurfaceSound = nil
    end
  end
end
function Wheels:getWheelConfigurationValue(xmlFile, configId, configurationKey, key, ...)
  return Wheels.getConfigurationValue(...)
end
function Wheels:createConfigSaveIdMapping()
  self:iterate("vehicle.wheels.wheelConfigurations.wheelConfiguration", function(self, dt)
    XMLUtil.checkDeprecatedXMLElements(u0, dt .. ".wheels.foliageBendingModifier", dt .. ".foliageBendingModifier")
    local isActiveForInput = isActiveForInput:getValue(dt .. "#saveId", self)
    u1[isActiveForInput] = self
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(dt .. ".wheels#baseConfig")
    if isActiveForInput == isActiveForInputIgnoreSelection then
      Logging.xmlError(u0, "Wheel configuration %s references itself as baseConfig! Ignoring this reference", dt)
      return
    end
    u2[self] = isActiveForInputIgnoreSelection
  end)
  return {}, {}
end
function Wheels:getConfigurationValue(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected, v5, ...)
  if dt[isActiveForInputIgnoreSelection] ~= nil then
  end
  local v8 = isActiveForInput:getString(isSelected .. v5)
  if v8 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L28
  end
  if v8 == "-" then
    return nil
  end
  local v9 = isActiveForInput:getValue(...)
  return v9
  local v14 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration(%d)", v6 - 1)
  v9 = Wheels.getConfigurationValue(...)
  return v9
end
function Wheels:loadWheelFromXML(xmlFile, configKey, wheelKey, wheel)
  local v7 = string.format("vehicle.wheels.wheel(%d)#hasTyreTracks", wheel.xmlIndex)
  local v8 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel(%d)#hasTireTracks", wheel.xmlIndex)
  XMLUtil.checkDeprecatedXMLElements(...)
  v7 = string.format("vehicle.wheels.wheel(%d)#tyreTrackAtlasIndex", wheel.xmlIndex)
  v8 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel(%d)#tireTrackAtlasIndex", wheel.xmlIndex)
  XMLUtil.checkDeprecatedXMLElements(...)
  v7 = string.format("vehicle.wheels.wheel(%d)#configIndex", wheel.xmlIndex)
  v8 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel(%d)#configId", wheel.xmlIndex)
  XMLUtil.checkDeprecatedXMLElements(...)
  local v5 = self:loadWheelBaseData(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  v5 = self:loadWheelSharedData(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  if wheel.mass == nil then
    Logging.xmlWarning(xmlFile, "Missing 'mass' for wheel '%s'. Using default '0.1'!", configKey .. wheelKey)
    wheel.mass = 0.1
  end
  v5 = self:loadWheelPhysicsData(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  v5 = self:loadWheelSteeringData(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  v5 = self:loadAdditionalWheelsFromXML(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  v5 = self:loadWheelChocksFromXML(xmlFile, configKey, wheelKey, wheel)
  if not v5 then
    return false
  end
  if wheel.hasParticles then
    self:loadWheelParticleSystem(xmlFile, configKey, wheelKey, wheel)
  end
  wheel.wheelShape = 0
  wheel.wheelShapeCreated = false
  return true
end
function Wheels:loadWheelBaseData(xmlFile, configKey, wheelKey, wheel)
  local v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#repr", nil, self.components, self.i3dMappings)
  wheel.repr = v5
  if wheel.repr == nil then
    Logging.xmlWarning(xmlFile, "Failed to load wheel! Missing repr node for wheel '%s'", configKey .. wheelKey)
    return false
  end
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#color", nil, true)
  wheel.color = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#material")
  wheel.material = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#additionalColor", nil, true)
  wheel.additionalColor = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#additionalMaterial")
  wheel.additionalMaterial = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#isLeft", true)
  wheel.isLeft = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#hasTireTracks", false)
  wheel.hasTireTracks = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#hasParticles", false)
  wheel.hasParticles = v5
  v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#filename")
  if v5 ~= nil and v5 ~= "" then
    local wheelConfigId = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#configId", "default")
    local v7 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. "#xRotOffset", 0)
    wheel.xRotOffset = v7
    self:loadWheelDataFromExternalXML(wheel, v5, wheelConfigId, true)
  end
  return true
end
function Wheels:loadWheelDataFromExternalXML(wheel, xmlFilename, wheelConfigId)
  local isSelected = Utils.getFilename(xmlFilename, self.baseDirectory)
  isSelected = XMLFile.load("wheelXml", isSelected, Wheels.xmlSchema)
  if isSelected ~= nil then
    local v7 = isSelected:getValue("wheel" .. ".brand")
    local v5 = v5:getBrandByName(...)
    wheel.brand = v5
    v5 = isSelected:getValue("wheel" .. ".name")
    wheel.name = v5
    self:loadWheelSharedData(isSelected, "wheel", ".default", wheel, true)
    if wheelConfigId ~= nil and wheelConfigId ~= "" and wheelConfigId ~= "default" then
      while true do
        v7 = string.format(".configurations.configuration(%d)", v5)
        v8 = isSelected:hasProperty("wheel" .. v7)
        if not v8 then
          break
        end
        v8 = isSelected:getValue("wheel" .. v7 .. "#id")
        if v8 == wheelConfigId then
          self:loadWheelSharedData(isSelected, "wheel", v7, wheel, true)
          break
        end
      end
      if not v6 then
        Logging.xmlError(isSelected, "WheelConfigId '%s' not found!", wheelConfigId)
        return false
      end
    end
    isSelected:delete()
  else
    return false
  end
  return true
end
function Wheels:loadWheelSharedData(xmlFile, configKey, wheelKey, wheel, skipConfigurations)
  if skipConfigurations == true then
  end
  local v7 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#radius", wheel.radius)
  wheel.radius = v7
  if wheel.radius == nil then
    Logging.xmlWarning(xmlFile, "No radius defined for wheel '%s'! Using default value of 0.5!", configKey .. wheelKey .. ".physics#radius")
    wheel.radius = 0.5
  end
  v7 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#width", wheel.width)
  wheel.width = v7
  if wheel.width == nil then
    Logging.xmlWarning(xmlFile, "No width defined for wheel '%s'! Using default value of 0.5!", configKey .. wheelKey .. ".physics#width")
    wheel.width = 0.5
  end
  v7 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#mass", wheel.mass or 0.1)
  wheel.mass = v7
  v7 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#tireType")
  if v7 ~= nil then
    local v8 = WheelsUtil.getTireType(v7)
    if v8 ~= nil then
      wheel.tireType = v8
    else
      Logging.xmlWarning(xmlFile, "Tire type '%s' not defined!", v7)
    end
  end
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#frictionScale", wheel.frictionScale)
  wheel.frictionScale = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#maxLongStiffness", wheel.maxLongStiffness)
  wheel.maxLongStiffness = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#maxLatStiffness", wheel.maxLatStiffness)
  wheel.maxLatStiffness = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".physics#maxLatStiffnessLoad", wheel.maxLatStiffnessLoad)
  wheel.maxLatStiffnessLoad = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#tireTrackAtlasIndex", wheel.tireTrackAtlasIndex or 0)
  wheel.tireTrackAtlasIndex = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#widthOffset", wheel.widthOffset or 0)
  wheel.widthOffset = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#xOffset", wheel.xOffset or 0)
  wheel.xOffset = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#maxDeformation", wheel.maxDeformation or 0)
  wheel.maxDeformation = v8
  if not wheel.initialDeformation then
    local v14 = math.min(0.04, wheel.maxDeformation * 0.6)
  end
  v8 = self:getWheelConfigurationValue(v10, v11, v12, v13, v14)
  wheel.initialDeformation = v8
  v8 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#sideDeformOffset", wheel.sideDeformOffset or 1)
  wheel.sideDeformOffset = v8
  wheel.deformation = 0
  local v9 = self:getWheelConfigurationValue(xmlFile, v6, configKey, wheelKey .. ".tire#isCareWheel", wheel.isCareWheel)
  v8 = Utils.getNoNil(v9, true)
  wheel.isCareWheel = v8
  v14 = math.max(0.6, wheel.width * 0.75)
  v8 = self:getWheelConfigurationValue(...)
  wheel.smoothGroundRadius = v8
  self:loadWheelVisualData(xmlFile, configKey, wheelKey, wheel, v6)
  return true
end
function Wheels:loadWheelVisualData(xmlFile, configKey, wheelKey, wheel, configIndex)
  if not wheel.isLeft then
  end
  local v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".tire#filename", wheel.tireFilename)
  wheel.tireFilename = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".tire#isInverted", wheel.tireIsInverted)
  wheel.tireIsInverted = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".tire#node")
  if not v7 then
    v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".tire#" .. v6, wheel.tireNodeStr)
  end
  wheel.tireNodeStr = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".outerRim#filename", wheel.outerRimFilename)
  wheel.outerRimFilename = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".outerRim#node", nil)
  if not v7 then
    v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".outerRim#" .. v6, wheel.outerRimNodeStr)
    if not v7 then
    end
  end
  wheel.outerRimNodeStr = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".outerRim#widthAndDiam", wheel.outerRimWidthAndDiam, true)
  wheel.outerRimWidthAndDiam = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".outerRim#scale", wheel.outerRimScale, true)
  wheel.outerRimScale = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#filename", wheel.innerRimFilename)
  wheel.innerRimFilename = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#node", nil)
  if not v7 then
    v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#" .. v6, wheel.innerRimNodeStr)
  end
  wheel.innerRimNodeStr = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#widthAndDiam", wheel.innerRimWidthAndDiam, true)
  wheel.innerRimWidthAndDiam = v7
  local v8 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#offset", wheel.innerRimOffset)
  wheel.innerRimOffset = v8 or 0
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".innerRim#scale", wheel.innerRimScale, true)
  wheel.innerRimScale = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#filename", wheel.additionalFilename)
  wheel.additionalFilename = v7
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#node", nil)
  if not v7 then
    v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#" .. v6, wheel.additionalNodeStr)
  end
  wheel.additionalNodeStr = v7
  v8 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#offset", wheel.additionalOffset)
  wheel.additionalOffset = v8 or 0
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#scale", wheel.additionalScale, true)
  wheel.additionalScale = v7
  v8 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#mass", wheel.additionalMass)
  wheel.additionalMass = v8 or 0
  v7 = self:getWheelConfigurationValue(xmlFile, configIndex, configKey, wheelKey .. ".additional#widthAndDiam", wheel.additionalWidthAndDiam, true)
  wheel.additionalWidthAndDiam = v7
end
function Wheels:loadWheelPhysicsData(xmlFile, configKey, wheelKey, wheel)
  local v5 = self:getParentComponent(wheel.repr)
  wheel.node = v5
  if wheel.node ~= 0 then
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#driveNode", nil, self.components, self.i3dMappings)
    wheel.driveNode = v5
    if wheel.driveNode == wheel.repr then
      Logging.xmlWarning(xmlFile, "repr and driveNode may not be equal for '%s'. Using default driveNode instead!", wheelKey)
      wheel.driveNode = nil
    end
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#linkNode", nil, self.components, self.i3dMappings)
    wheel.linkNode = v5
    if wheel.driveNode == nil then
      v5 = createTransformGroup("wheelReprNode")
      local reprIndex = getChildIndex(wheel.repr)
      local v8 = getParent(wheel.repr)
      link(v8, v5, reprIndex)
      local v9 = getTranslation(wheel.repr)
      setTranslation(...)
      v9 = getRotation(wheel.repr)
      setRotation(...)
      v9 = getScale(wheel.repr)
      setScale(...)
      wheel.driveNode = wheel.repr
      link(v5, wheel.driveNode)
      setTranslation(wheel.driveNode, 0, 0, 0)
      setRotation(wheel.driveNode, 0, 0, 0)
      setScale(wheel.driveNode, 1, 1, 1)
      wheel.repr = v5
    end
    if wheel.driveNode ~= nil then
      v5 = createTransformGroup("driveNodeDirectionNode")
      local v7 = getParent(wheel.repr)
      link(v7, v5)
      v8 = getWorldTranslation(wheel.driveNode)
      setWorldTranslation(...)
      v8 = getWorldRotation(wheel.driveNode)
      setWorldRotation(...)
      wheel.driveNodeDirectionNode = v5
      reprIndex, v7, v8 = getRotation(wheel.driveNode)
      v9 = math.abs(reprIndex)
      if 0.0001 >= v9 then
        v9 = math.abs(v7)
        if 0.0001 >= v9 then
          v9 = math.abs(v8)
          -- if 0.0001 >= v9 then goto L238 end
        end
      end
      local v12 = getName(wheel.driveNode)
      local v13 = math.deg(reprIndex)
      local v14 = math.deg(v7)
      local v15 = math.deg(v8)
      Logging.xmlWarning(xmlFile, "Rotation of driveNode '%s' is not 0/0/0 in the i3d file (%.1f/%.1f/%.1f). '%s'", v12, v13, v14, v15, wheelKey)
    end
    if wheel.linkNode == nil then
      wheel.linkNode = wheel.driveNode
    end
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#yOffset", 0)
    wheel.yOffset = v5
    if wheel.yOffset ~= 0 then
      v9 = getParent(wheel.driveNode)
      v7 = localToLocal(wheel.driveNode, v9, 0, wheel.yOffset, 0)
      setTranslation(...)
    end
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#showSteeringAngle", true)
    wheel.showSteeringAngle = v5
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#suspTravel", 0.01)
    wheel.suspTravel = v5
    v5 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#initialCompression")
    if v5 ~= nil then
      wheel.deltaY = (1 - v5 * 0.01) * wheel.suspTravel
    else
      reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#deltaY", 0)
      wheel.deltaY = reprIndex
    end
    v7 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#spring", 0)
    wheel.spring = v7 * Vehicle.SPRING_SCALE
    wheel.torque = 0
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#brakeFactor", 1)
    wheel.brakeFactor = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#autoHoldBrakeFactor", wheel.brakeFactor)
    wheel.autoHoldBrakeFactor = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperCompressionLowSpeed")
    wheel.damperCompressionLowSpeed = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperRelaxationLowSpeed")
    wheel.damperRelaxationLowSpeed = reprIndex
    if wheel.damperRelaxationLowSpeed == nil then
      reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damper", wheel.damperCompressionLowSpeed or 0)
      wheel.damperRelaxationLowSpeed = reprIndex
    end
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperRelaxationHighSpeed", wheel.damperRelaxationLowSpeed * 0.7)
    wheel.damperRelaxationHighSpeed = reprIndex
    if wheel.damperCompressionLowSpeed == nil then
      wheel.damperCompressionLowSpeed = wheel.damperRelaxationLowSpeed * 0.9
    end
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperCompressionHighSpeed", wheel.damperCompressionLowSpeed * 0.2)
    wheel.damperCompressionHighSpeed = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperCompressionLowSpeedThreshold", 0.1016)
    wheel.damperCompressionLowSpeedThreshold = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#damperRelaxationLowSpeedThreshold", 0.1524)
    wheel.damperRelaxationLowSpeedThreshold = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#forcePointRatio", 0)
    wheel.forcePointRatio = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#driveMode", 0)
    wheel.driveMode = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#xOffset", 0)
    wheel.xOffset = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#transRatio", 0)
    wheel.transRatio = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#isSynchronized", true)
    wheel.isSynchronized = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#tipOcclusionAreaGroupId")
    wheel.tipOcclusionAreaGroupId = reprIndex
    reprIndex, v7, v8 = localToLocal(wheel.driveNode, wheel.node, 0, 0, 0)
    wheel.positionX = reprIndex
    wheel.positionY = v7
    wheel.positionZ = v8
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#useReprDirection", false)
    wheel.useReprDirection = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#useDriveNodeDirection", false)
    wheel.useDriveNodeDirection = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#mass", wheel.mass)
    wheel.mass = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#radius", wheel.radius or 0.5)
    wheel.radius = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#width", wheel.width or 0.6)
    wheel.width = reprIndex
    wheel.wheelShapeWidth = wheel.width
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#widthOffset", 0)
    wheel.widthOffset = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#restLoad", wheel.restLoad or 1)
    wheel.restLoad = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#maxLongStiffness", wheel.maxLongStiffness or 30)
    wheel.maxLongStiffness = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#maxLatStiffness", wheel.maxLatStiffness or 40)
    wheel.maxLatStiffness = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#maxLatStiffnessLoad", wheel.maxLatStiffnessLoad or 2)
    wheel.maxLatStiffnessLoad = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#frictionScale", wheel.frictionScale or 1)
    wheel.frictionScale = reprIndex
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotationDamping", wheel.mass * 0.035)
    wheel.rotationDamping = reprIndex
    wheel.tireGroundFrictionCoeff = 1
    reprIndex = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#tireType", "mud")
    v7 = WheelsUtil.getTireType(reprIndex)
    wheel.tireType = v7
    if wheel.tireType == nil then
      Logging.xmlWarning(xmlFile, "Failed to find tire type '%s'. Defaulting to 'mud'!", reprIndex)
      v7 = WheelsUtil.getTireType("mud")
      wheel.tireType = v7
    end
    v9 = WheelsUtil.getTireType("crawler")
    if wheel.tireType == v9 then
    end
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#fieldDirtMultiplier", 75)
    wheel.fieldDirtMultiplier = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#streetDirtMultiplier", -150)
    wheel.streetDirtMultiplier = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#minDirtPercentage", 0.35)
    wheel.minDirtPercentage = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#maxDirtOffset", 0.5)
    wheel.maxDirtOffset = v8
    local v11 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#dirtColorChangeSpeed", 20)
    wheel.dirtColorChangeSpeed = 1 / v11 * 1000
    if not wheel.smoothGroundRadius then
      v14 = math.max(0.6, wheel.width * 0.75)
    end
    v8 = self:getWheelConfigurationValue(v10, v11, v12, v13, v14)
    wheel.smoothGroundRadius = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#versatileYRot", false)
    wheel.versatileYRot = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#forceVersatility", false)
    wheel.forceVersatility = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#supportsWheelSink", true)
    wheel.supportsWheelSink = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#maxWheelSink", v7)
    wheel.maxWheelSink = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotSpeed", 0)
    wheel.rotSpeed = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotSpeedNeg", 0)
    wheel.rotSpeedNeg = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotMax", 0)
    wheel.rotMax = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotMin", 0)
    wheel.rotMin = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#invertRotLimit", false)
    wheel.invertRotLimit = v8
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".physics#rotSpeedLimit")
    wheel.rotSpeedLimit = v8
  else
    Logging.xmlWarning(xmlFile, "Invalid repr for wheel '%s'. Needs to be a child of a collision!", configKey .. wheelKey)
    return false
  end
  return true
end
function Wheels:loadWheelSteeringData(xmlFile, configKey, wheelKey, wheel)
  local v8 = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration.wheels.wheel(%d).steering#node", wheel.xmlIndex)
  XMLUtil.checkDeprecatedXMLElements(...)
  local v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#node", nil, self.components, self.i3dMappings)
  wheel.steeringNode = v6
  v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#rotNode", nil, self.components, self.i3dMappings)
  wheel.steeringRotNode = v6
  v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#nodeMinTransX")
  wheel.steeringNodeMinTransX = v6
  v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#nodeMaxTransX")
  wheel.steeringNodeMaxTransX = v6
  v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#nodeMinRotY")
  wheel.steeringNodeMinRotY = v6
  v6 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steering" .. "#nodeMaxRotY")
  wheel.steeringNodeMaxRotY = v6
  wheel.fenders = {}
  while true do
    v7 = string.format("%s.fender(%d)", wheelKey, v6)
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#node", nil, self.components, self.i3dMappings)
    if not (v8 ~= nil) then
      break
    end
    v10 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#rotMax")
    v10 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#rotMin")
    table.insert(wheel.fenders, {node = v8, rotMax = v10, rotMin = v10})
  end
  v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steeringAxle" .. "#scale", 0)
  wheel.steeringAxleScale = v8
  v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steeringAxle" .. "#rotMax", 0)
  wheel.steeringAxleRotMax = v8
  v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".steeringAxle" .. "#rotMin", 0)
  wheel.steeringAxleRotMin = v8
  return true
end
function Wheels:loadAdditionalWheelsFromXML(xmlFile, configKey, wheelKey, wheel)
  while true do
    v7 = string.format(wheelKey .. ".additionalWheel(%d)", v6)
    v8 = xmlFile:hasProperty(configKey .. v7)
    if not v8 then
      break
    end
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#filename")
    if v8 ~= nil and v8 ~= "" then
      XMLUtil.checkDeprecatedXMLElements(xmlFile, configKey .. v7 .. "#configIndex", configKey .. v7 .. "#configId")
      XMLUtil.checkDeprecatedXMLElements(xmlFile, configKey .. v7 .. "#addRaycast", nil)
      v10 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#configId", "default")
      v12 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#isLeft", wheel.isLeft)
      v11 = Utils.getNoNil(v12, false)
      v11 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#xRotOffset", 0)
      v11 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#color", nil, true)
      if not v11 then
      end
      v9.color = v11
      v11 = self:loadWheelDataFromExternalXML(v9, v8, v10, false)
      if v11 then
        v12 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#hasParticles", wheel.hasParticles)
        v11 = Utils.getNoNil(v12, false)
        v9.hasParticles = v11
        v12 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#hasTireTracks", wheel.hasTireTracks)
        v11 = Utils.getNoNil(v12, false)
        v9.hasTireTracks = v11
        v11 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#offset", 0)
        v9.offset = v11
        self:loadWheelVisualData(xmlFile, configKey, v7, v9, wheel.configIndex)
        self:loadAdditionalWheelConnectorFromXML(wheel, v9, xmlFile, configKey, v7)
        table.insert(v5, v9)
        wheel.mass = wheel.mass + v9.mass + v9.additionalMass
        wheel.maxLatStiffness = wheel.maxLatStiffness + v9.maxLatStiffness
        wheel.maxLongStiffness = wheel.maxLongStiffness + v9.maxLongStiffness
      end
    end
  end
  if 0 < #v5 then
    wheel.additionalWheels = v5
  end
  return true
end
function Wheels:loadAdditionalWheelConnectorFromXML(wheel, additionalWheel, xmlFile, configKey, wheelKey)
  local connectorFilename = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#filename")
  if connectorFilename ~= nil and connectorFilename ~= "" then
    XMLUtil.checkDeprecatedXMLElements(xmlFile, configKey .. wheelKey .. ".connector#index", configKey .. wheelKey .. ".connector#node")
    local v9 = connectorFilename:endsWith(".xml")
    if v9 then
      v9 = Utils.getFilename(connectorFilename, self.baseDirectory)
      local v10 = XMLFile.load("connectorXml", v9, Wheels.xmlSchemaConnector)
      if v10 ~= nil then
        if not wheel.isLeft then
        end
        local v12 = v10:getValue("connector.file#name")
        v8.filename = v12
        v12 = v10:getValue("connector.file#" .. v11)
        v8.nodeStr = v12
        v10:delete()
        -- goto L96  (LOP_JUMP +21)
      end
      Logging.xmlError(xmlFile, "Unable to load connector xml file '%s'!", connectorFilename)
    else
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#node")
    end
    if v8.filename ~= nil and v8.filename ~= "" then
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#useWidthAndDiam", false)
      v8.useWidthAndDiam = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#usePosAndScale", false)
      v8.usePosAndScale = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#diameter")
      v8.diameter = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#offset", 0)
      v8.additionalOffset = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#width")
      v8.width = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#startPos")
      v8.startPos = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#endPos")
      v8.endPos = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#startPosOffset")
      v8.startPosOffset = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#endPosOffset")
      v8.endPosOffset = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#uniformScale")
      v8.scale = v9
      v9 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, wheelKey .. ".connector#color", nil, true)
      v8.color = v9
      if v8.color == nil then
        v9 = ConfigurationUtil.getColorByConfigId(self, "rimColor", self.configurations.rimColor)
        if not v9 and not wheel.color then
        end
        v8.color = v9
      else
        v8.color[4] = nil
      end
      additionalWheel.connector = v8
    end
  end
end
function Wheels:loadWheelChocksFromXML(xmlFile, configKey, wheelKey, wheel)
  wheel.wheelChocks = {}
  while true do
    v7 = string.format(wheelKey .. ".wheelChock(%d)", v6)
    v8 = xmlFile:hasProperty(configKey .. v7)
    if not v8 then
      break
    end
    v8 = self:getWheelConfigurationValue(xmlFile, wheel.configIndex, configKey, v7 .. "#filename", "$data/shared/assets/wheelChocks/wheelChock01.i3d")
    v9 = Utils.getFilename(v8, self.baseDirectory)
    v10 = self:loadSubSharedI3DFile(v9, false, false, self.onWheelChockI3DLoaded, self, {wheel = wheel, filename = v9, xmlFile = xmlFile, configKey = configKey, chockKey = v7})
    table.insert(v5.sharedLoadRequestIds, v10)
  end
  return true
end
function Wheels:onWheelChockI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local chockNode = getChildAt(i3dNode, 0)
    local v13 = getUserAttribute(chockNode, "posRefNode")
    local v11 = I3DUtil.indexToObject(chockNode, v13, self.i3dMappings)
    if v11 ~= nil then
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#scale", "1 1 1", true)
      local v15 = unpack({wheel = args.wheel, node = chockNode, filename = args.filename, scale = v13}.scale)
      setScale(...)
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#parkingNode", nil, self.components, self.i3dMappings)
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#isInverted", false)
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#isParked", false)
      local v13, v14, v15 = localToLocal(v11, {wheel = args.wheel, node = chockNode, filename = args.filename, scale = v13, parkingNode = v13, isInverted = v13, isParked = v13}.node, 0, 0, 0)
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#offset", "0 0 0", true)
      v15 = getUserAttribute(chockNode, "parkedNode")
      v13 = I3DUtil.indexToObject(chockNode, v15, self.i3dMappings)
      v15 = getUserAttribute(chockNode, "linkedNode")
      v13 = I3DUtil.indexToObject(chockNode, v15, self.i3dMappings)
      v13 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#color", nil, true)
      if v13 ~= nil then
        local v14, v15, v16, v17 = getShaderParameter(chockNode, "colorMat0")
        local v18 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.chockKey .. "#material", v17)
        v13[4] = v18
        I3DUtil.setShaderParameterRec(chockNode, "colorMat0", v13[1], v13[2], v13[3], v13[4])
      end
      v12.isInParkingPosition = false
      self:updateWheelChockPosition(v12, v12.isParked)
      isSelected.updateWheelChock = false
      table.insert(isSelected.wheelChocks, v12)
      table.insert(self.spec_wheels.wheelChocks, v12)
    else
      Logging.xmlWarning(args.xmlFile, "Missing 'posRefNode'-userattribute for wheel-chock '%s'!", args.chockKey)
    end
    delete(i3dNode)
  end
end
function Wheels:loadWheelParticleSystem(xmlFile, configKey, wheelKey, wheel)
  wheel.driveGroundParticleSystems = {}
  wheel.driveGroundParticleStates = {wheel_dust = false, wheel_dry = false, wheel_wet = false, wheel_snow = false}
  local v6 = Utils.getFilename(Wheels.PARTICLE_SYSTEM_PATH, self.baseDirectory)
  for v10, v11 in pairs(wheel.driveGroundParticleStates) do
    local v12 = v12:getParticleSystem(v10)
    if not (v12 ~= nil) then
      continue
    end
    local v14 = self:loadSubSharedI3DFile(v6, false, false, self.onWheelParticleSystemI3DLoaded, self, {xmlFile = xmlFile, configKey = configKey, wheelKey = wheelKey, wheel = wheel, wheelData = wheel, sourceParticleSystem = v12, name = v10, i3dFilename = v6})
    table.insert(v5.sharedLoadRequestIds, v14)
    if not (wheel.additionalWheels ~= nil) then
      continue
    end
    for v18, v19 in ipairs(wheel.additionalWheels) do
      if not v19.hasParticles then
        continue
      end
      if v19.driveGroundParticleSystems == nil then
        v19.driveGroundParticleSystems = {}
      end
      local v21 = self:loadSubSharedI3DFile(v6, false, false, self.onWheelParticleSystemI3DLoaded, self, {xmlFile = xmlFile, configKey = configKey, wheelKey = v19.singleKey, wheel = wheel, wheelData = v19, sourceParticleSystem = v12, name = v10, i3dFilename = v6})
      table.insert(v5.sharedLoadRequestIds, v21)
    end
  end
end
function Wheels:onWheelParticleSystemI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v9 = getChildAt(i3dNode, 0)
    link(args.wheel.node, v9)
    delete(i3dNode)
    local v10 = ParticleUtil.copyParticleSystem(args.xmlFile, nil, args.sourceParticleSystem, v9)
    v10.i3dFilename = args.i3dFilename
    local v11 = ParticleUtil.getParticleSystemSpeed(v10)
    v10.particleSpeed = v11
    v11 = ParticleUtil.getParticleSystemSpeedRandom(v10)
    v10.particleRandomSpeed = v11
    local v12 = getUserAttribute(v10.shape, "tintable")
    v11 = Utils.getNoNil(v12, true)
    v10.isTintable = v11
    v11 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#psOffset", "0 0 0", true)
    v10.offsets = v11
    local v13 = getWorldTranslation(args.wheel.driveNode)
    v11, v12, v13 = worldToLocal(...)
    setTranslation(v10.emitterShape, v11 + v10.offsets[1], v12 + v10.offsets[2], v13 + v10.offsets[3])
    setScale(v10.emitterShape, args.wheelData.width, args.wheelData.radius * 2, args.wheelData.radius * 2)
    v10.wheel = args.wheel
    v10.rootNode = v10.emitterShape
    local v15 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#minSpeed", 3)
    v10.minSpeed = v15 / 3600
    v15 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#maxSpeed", 20)
    v10.maxSpeed = v15 / 3600
    local v14 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#minScale", 0.1)
    v10.minScale = v14
    v14 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#maxScale", 1)
    v10.maxScale = v14
    v14 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#direction", 0)
    v10.direction = v14
    v14 = self:getWheelConfigurationValue(args.xmlFile, args.wheel.configIndex, args.configKey, args.wheelKey .. ".wheelParticleSystem#onlyActiveOnGroundContact", true)
    v10.onlyActiveOnGroundContact = v14
    args.wheelData.driveGroundParticleSystems[args.name] = {v10}
  end
end
function Wheels:loadHubsFromXML()
  self.spec_wheels.hubsColors = {}
  -- TODO: structure LOP_FORNPREP (pc 9, target 150)
  local v5 = string.format("vehicle.wheels.hubs.color%d", 0)
  local v6 = v6:getValue(v5, nil, true)
  local v7 = v7:getValue(v5 .. "#material")
  if v6 ~= nil then
    self.spec_wheels.hubsColors[0] = v6
    self.spec_wheels.hubsColors[0][4] = v7
  else
    local v8 = v8:getValue(v5 .. "#useBaseColor")
    if v8 then
      local v9 = ConfigurationUtil.getColorByConfigId(self, "baseColor", self.configurations.baseColor)
      if not v9 then
        v9 = ConfigurationUtil.getColorByConfigId(self, "baseMaterial", self.configurations.baseMaterial)
      end
      v8[isSelected] = v9
    else
      v8 = v8:getValue(v5 .. "#useRimColor")
      if v8 then
        local rimConfigColor = ConfigurationUtil.getColorByConfigId(self, "rimColor", self.configurations.rimColor)
        v9 = Utils.getNoNil(rimConfigColor, self.spec_wheels.rimColor)
        self.spec_wheels.hubsColors[0] = v9
      end
    end
  end
  rimConfigColor = string.format("_hubColor%d", isSelected)
  if 0 < #dt.overwrittenWheelColors[rimConfigColor] then
    if not dt.hubsColors[isSelected] then
    end
    v9[isSelected] = rimConfigColor
    dt.hubsColors[isSelected][1] = v8[1]
    dt.hubsColors[isSelected][2] = v8[2]
    dt.hubsColors[isSelected][3] = v8[3]
    if #v8 == 4 then
      dt.hubsColors[isSelected][4] = v8[4]
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 149, target 10)
  dt.hubs = {}
  isActiveForInput:iterate("vehicle.wheels.hubs.hub", function(self, dt)
    isActiveForInput:loadHubFromXML(u0.xmlFile, dt)
  end)
end
function Wheels:loadHubFromXML(xmlFile, key)
  local isSelected = xmlFile:getValue(key .. "#linkNode", nil, self.components, self.i3dMappings)
  if isSelected == nil then
    Logging.xmlError(xmlFile, "Missing link node for hub '%s'", key)
    return
  end
  local v6 = xmlFile:getValue(key .. "#isLeft")
  v6 = xmlFile:getValue(key .. "#filename")
  local v7 = Utils.getFilename(v6, self.baseDirectory)
  v7 = XMLFile.load("wheelHubXml", {linkNode = isSelected, isLeft = v6, xmlFilename = v7}.xmlFilename, Wheels.xmlSchemaHub)
  if v7 ~= nil then
    local v8 = v7:getValue("hub.filename")
    if v8 == nil then
      Logging.xmlError(v7, "Unable to retrieve hub i3d filename!")
      return
    end
    local v9 = Utils.getFilename(v8, self.baseDirectory)
    v5.i3dFilename = v9
    v5.colors = {}
    -- TODO: structure LOP_FORNPREP (pc 87, target 102)
    local v15 = string.format("hub.color%d", 0)
    local v13 = v7:getValue(v15, nil, true)
    v5.colors[0] = v13
    -- TODO: structure LOP_FORNLOOP (pc 101, target 88)
    if v5.isLeft then
    else
    end
    v9 = v7:getValue(v12 .. v13)
    v5.nodeStr = v9
    local v10 = self:loadSubSharedI3DFile(v5.i3dFilename, false, false, self.onWheelHubI3DLoaded, self, {hub = v5, linkNode = isSelected, xmlFile = xmlFile, key = key})
    table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v10)
    v7:delete()
  end
  return true
end
function Wheels:onWheelHubI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v9 = I3DUtil.indexToObject(i3dNode, args.hub.nodeStr, self.i3dMappings)
    args.hub.node = v9
    if args.hub.node ~= nil then
      link(args.linkNode, args.hub.node)
      delete(i3dNode)
    else
      Logging.xmlError(args.xmlFile, "Could not find hub node '%s' in '%s'", args.hub.nodeStr, args.hub.xmlFilename)
      return
    end
    -- TODO: structure LOP_FORNPREP (pc 50, target 134)
    local v15 = string.format(".color%d", 0)
    local v12 = XMLUtil.getXMLOverwrittenValue(v7, v8, v15, "", "global")
    local v16 = string.format(".color%d#material", 0)
    local v13 = XMLUtil.getXMLOverwrittenValue(v7, v8, v16, "")
    if v12 == "global" then
    else
      local v14 = ConfigurationUtil.getColorFromString(v12)
      if v14 ~= nil then
        v14[4] = v13
      end
    end
    if not v12 then
    end
    if v14 ~= nil then
      local v14, v15, v16, v17 = unpack(v14)
      if v17 == nil then
        local v21 = string.format("colorMat%d", v11)
        local v19, v20, v21, v22 = I3DUtil.getShaderParameterRec(...)
      end
      v21 = string.format("colorMat%d", v11)
      I3DUtil.setShaderParameterRec(v5.node, v21, v14, v15, v16, v17, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 133, target 51)
    v9 = v7:getValue(v8 .. "#offset")
    if v9 ~= nil then
      if not v5.isLeft then
      end
      setTranslation(v5.node, v9, 0, 0)
    end
    local v10 = v7:getValue(v8 .. "#scale", nil, true)
    if v10 ~= nil then
      setScale(v5.node, v10[1], v10[2], v10[3])
    end
    table.insert(isSelected.hubs, v5)
    return
  end
  if not self.isDeleting and not self.isDeleted then
    Logging.xmlError(v7, "Unable to load '%s' in hub '%s'", v5.i3dFilename, v5.xmlFilename)
  end
end
function Wheels:loadAckermannSteeringFromXML(xmlFile, ackermannSteeringIndex)
  local isSelected, v5 = ConfigurationUtil.getXMLConfigurationKey(xmlFile, ackermannSteeringIndex, "vehicle.wheels.ackermannSteeringConfigurations.ackermannSteering", nil, "ackermann")
  self.spec_wheels.steeringCenterNode = nil
  if isSelected ~= nil then
    local v6 = xmlFile:getValue(isSelected .. "#rotSpeed")
    local v7 = xmlFile:getValue(isSelected .. "#rotMax")
    local v10 = xmlFile:getValue(isSelected .. "#rotCenterWheel1")
    if v10 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L112
      local v12, v13, v14 = localToLocal(self.spec_wheels.wheels[v10].node, self.components[1].node, self.spec_wheels.wheels[v10].positionX, self.spec_wheels.wheels[v10].positionY, self.spec_wheels.wheels[v10].positionZ)
      v12 = xmlFile:getValue(isSelected .. "#rotCenterWheel2")
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L205
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L205
      if v12 == v10 then
        Logging.xmlWarning(xmlFile, "The ackermann steering wheels are identical (both index %d). Are you sure this is correct? (%s)", v10, isSelected)
      end
      local v14, v15, v16 = localToLocal(isActiveForInputIgnoreSelection.wheels[v12].node, self.components[1].node, isActiveForInputIgnoreSelection.wheels[v12].positionX, isActiveForInputIgnoreSelection.wheels[v12].positionY, isActiveForInputIgnoreSelection.wheels[v12].positionZ)
    else
      local v11, v12 = xmlFile:getValue(isSelected .. "#rotCenterNode", nil, self.components, self.i3dMappings)
      if v11 ~= nil then
        v13, v14, v15 = localToLocal(v11, self.components[1].node, 0, 0, 0)
        self.spec_wheels.steeringCenterNode = v11
      else
        v13 = xmlFile:getValue(isSelected .. "#rotCenterWheels", nil, true)
        if 0 < #v13 then
          -- TODO: structure LOP_FORNPREP (pc 161, target 187)
          if self.spec_wheels.wheels[v13[1]] ~= nil then
            local v21, v22, v23 = localToLocal(self.spec_wheels.wheels[v13[1]].node, self.components[1].node, self.spec_wheels.wheels[v13[1]].positionX, 0, self.spec_wheels.wheels[v13[1]].positionZ)
          end
          -- TODO: structure LOP_FORNLOOP (pc 186, target 162)
          -- if 0 >= v16 then goto L205 end
        else
          v14 = xmlFile:getValue(isSelected .. "#rotCenter", nil, true)
          if v14 ~= nil then
          end
        end
      end
    end
    if isActiveForInputIgnoreSelection.steeringCenterNode == nil then
      v11 = createTransformGroup("steeringCenterNode")
      isActiveForInputIgnoreSelection.steeringCenterNode = v11
      link(self.components[1].node, isActiveForInputIgnoreSelection.steeringCenterNode)
      if v8 ~= nil and v9 ~= nil then
        setTranslation(isActiveForInputIgnoreSelection.steeringCenterNode, v8, 0, v9)
      end
    end
    if v6 ~= nil and v7 ~= nil and v8 ~= nil then
      v12 = math.rad(v6)
      v11 = math.abs(...)
      v12 = math.rad(v7)
      v11 = math.abs(...)
      for v16, v17 in ipairs(isActiveForInputIgnoreSelection.wheels) do
        if not (v17.rotSpeed ~= 0) then
          continue
        end
        local v18, v19, v20 = localToLocal(v17.repr, isActiveForInputIgnoreSelection.steeringCenterNode, 0, 0, 0)
        v23 = math.abs(v20)
        local v24 = math.tan(v7)
        v23 = math.abs(v18)
        if not (v11 <= v23 / v24 + v23) then
          continue
        end
      end
      v14 = Utils.getNoNil(self.maxRotation, 0)
      v13 = math.max(v14, v7)
      self.maxRotation = v13
      self.maxTurningRadius = v11
      self.maxTurningRadiusWheel = v12
      self.wheelSteeringDuration = v7 / v6
      if 0 < v12 then
        for v16, v17 in ipairs(isActiveForInputIgnoreSelection.wheels) do
          if not (v17.rotSpeed ~= 0) then
            continue
          end
          v18, v19, v20 = localToLocal(v17.repr, isActiveForInputIgnoreSelection.steeringCenterNode, 0, 0, 0)
          v21 = math.atan(v20 / (v11 - v18))
          v23 = math.atan(v20 / (v11 + v18))
          if v21 >= -v23 then
          end
          if true then
          end
          v17.rotMax = v21
          v17.rotMin = v22
          v17.rotSpeed = v21 / self.wheelSteeringDuration
          v17.rotSpeedNeg = -v22 / self.wheelSteeringDuration
          if v17.steeringAxleScale ~= 0 then
            if v23 then
              v17.steeringAxleScale = -v17.steeringAxleScale
            end
            v17.steeringAxleRotMax = v21
            v17.steeringAxleRotMin = v22
          end
          if v17.invertRotLimit then
          end
          if not v23 then
            continue
          end
          v17.rotSpeed = -v17.rotSpeedNeg
          v17.rotSpeedNeg = -v17.rotSpeed
        end
      end
    end
  end
  for v9, v10 in ipairs(isActiveForInputIgnoreSelection.wheels) do
    if v10.rotSpeed ~= 0 then
      if 0 > v10.rotMax then
      end
      if 0 > v10.rotSpeed then
      end
      if v11 == true then
        v11 = math.max(v10.rotMax / v10.rotSpeed, self.maxRotTime)
        self.maxRotTime = v11
      end
      if 0 > v10.rotMin then
      end
      if 0 > v10.rotSpeed then
      end
      if v11 == true then
        v11 = math.max(v10.rotMin / v10.rotSpeed, self.maxRotTime)
        self.maxRotTime = v11
      end
      if v10.rotSpeedNeg == nil then
      end
      if 0 > v10.rotMax then
      end
      if 0 > v11 then
      end
      if v12 ~= true then
        v12 = math.min(v10.rotMax / v11, self.minRotTime)
        self.minRotTime = v12
      end
      if 0 > v10.rotMin then
      end
      if 0 > v11 then
      end
      if v12 ~= true then
        v12 = math.min(v10.rotMin / v11, self.minRotTime)
        self.minRotTime = v12
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 552, target 571)
    if not v10.fenders[1].rotMax then
    end
    v14.rotMax = v15
    if not v14.rotMin then
    end
    v14.rotMin = v15
    -- TODO: structure LOP_FORNLOOP (pc 570, target 553)
    v11 = math.max(v10.rotMax, v10.steeringAxleRotMax)
    v10.steeringNodeMaxRot = v11
    v11 = math.min(v10.rotMin, v10.steeringAxleRotMin)
    v10.steeringNodeMinRot = v11
    if not (v10.rotSpeedLimit ~= nil) then
      continue
    end
    v10.rotSpeedDefault = v10.rotSpeed
    v10.rotSpeedNegDefault = v10.rotSpeedNeg
    v10.currentRotSpeedAlpha = 1
  end
end
function Wheels:loadNonPhysicalWheelFromXML(dynamicallyLoadedWheel, xmlFile, key)
  local isSelected = xmlFile:getValue(key .. "#linkNode", self.components[1].node, self.components, self.i3dMappings)
  dynamicallyLoadedWheel.linkNode = isSelected
  isSelected = xmlFile:getValue(key .. "#filename")
  if isSelected ~= nil and isSelected ~= "" then
    local wheelConfigId = xmlFile:getValue(key .. "#configId", "default")
    local v6 = xmlFile:getValue(key .. "#isLeft", true)
    dynamicallyLoadedWheel.isLeft = v6
    v6 = xmlFile:getValue(key .. "#isInverted", false)
    dynamicallyLoadedWheel.tireIsInverted = v6
    v6 = xmlFile:getValue(key .. "#xRotOffset", 0)
    dynamicallyLoadedWheel.xRotOffset = v6
    v6 = xmlFile:getValue(key .. "#color", nil, true)
    dynamicallyLoadedWheel.color = v6
    v6 = xmlFile:getValue(key .. "#additionalColor", nil, true)
    dynamicallyLoadedWheel.additionalColor = v6
    self:loadWheelDataFromExternalXML(dynamicallyLoadedWheel, isSelected, wheelConfigId)
    self:finalizeWheel(dynamicallyLoadedWheel)
    return true
  end
  return false
end
function Wheels:loadWheelsFromXML(xmlFile, key, wheelConfigurationId)
  while true do
    v6 = string.format(".wheels.wheel(%d)", v5)
    v7 = xmlFile:hasProperty(key .. v6)
    if not v7 then
      break
    end
    v8 = self:loadWheelFromXML(xmlFile, key, v6, {xmlIndex = v5, updateIndex = v5 % 4 + 1, configIndex = wheelConfigurationId})
    if v8 then
      self:finalizeWheel({xmlIndex = v5, updateIndex = v5 % 4 + 1, configIndex = wheelConfigurationId})
      v8 = math.max(isSelected.maxUpdateIndex, {xmlIndex = v5, updateIndex = v5 % 4 + 1, configIndex = wheelConfigurationId}.updateIndex)
      isSelected.maxUpdateIndex = v8
      table.insert(isSelected.wheels, {xmlIndex = v5, updateIndex = v5 % 4 + 1, configIndex = wheelConfigurationId})
    end
  end
end
function Wheels:finalizeWheel(wheel, parentWheel)
  if not Platform.gameplay.wheelTireTracks then
    wheel.hasTireTracks = false
  end
  if parentWheel == nil and wheel.repr ~= nil then
    local isSelected, v5, v6 = getTranslation(wheel.repr)
    wheel.startPositionX = isSelected
    wheel.startPositionY = v5
    wheel.startPositionZ = v6
    isSelected, v5, v6 = getTranslation(wheel.driveNode)
    wheel.driveNodeStartPosX = isSelected
    wheel.driveNodeStartPosY = v5
    wheel.driveNodeStartPosZ = v6
    wheel.dirtAmount = 0
    wheel.xDriveOffset = 0
    wheel.lastXDrive = 0
    wheel.lastColor = {0, 0, 0, 0}
    wheel.lastTerrainAttribute = 0
    wheel.contact = Wheels.WHEEL_NO_CONTACT
    wheel.hasSnowContact = false
    wheel.snowScale = 0
    wheel.lastSnowScale = 0
    wheel.steeringAngle = 0
    wheel.lastSteeringAngle = 0
    wheel.lastMovement = 0
    wheel.hasGroundContact = false
    wheel.hasHandbrake = true
    wheel.lastContactObjectAllowsTireTracks = true
    wheel.densityBits = 0
    wheel.densityType = 0
    if self.vehicleNodes[wheel.node] ~= nil and self.vehicleNodes[wheel.node].component ~= nil and self.vehicleNodes[wheel.node].component.motorized == nil then
      self.vehicleNodes[wheel.node].component.motorized = true
    end
    if wheel.useReprDirection then
      local v5, v6, v7 = localDirectionToLocal(wheel.repr, wheel.node, 0, -1, 0)
      wheel.directionX = v5
      wheel.directionY = v6
      wheel.directionZ = v7
      v5, v6, v7 = localDirectionToLocal(wheel.repr, wheel.node, 1, 0, 0)
      wheel.axleX = v5
      wheel.axleY = v6
      wheel.axleZ = v7
    elseif wheel.useDriveNodeDirection then
      v5, v6, v7 = localDirectionToLocal(wheel.driveNodeDirectionNode, wheel.node, 0, -1, 0)
      wheel.directionX = v5
      wheel.directionY = v6
      wheel.directionZ = v7
      v5, v6, v7 = localDirectionToLocal(wheel.driveNodeDirectionNode, wheel.node, 1, 0, 0)
      wheel.axleX = v5
      wheel.axleY = v6
      wheel.axleZ = v7
    else
      wheel.directionX = 0
      wheel.directionY = -1
      wheel.directionZ = 0
      wheel.axleX = 1
      wheel.axleY = 0
      wheel.axleZ = 0
    end
    wheel.steeringCenterOffsetX = 0
    wheel.steeringCenterOffsetY = 0
    wheel.steeringCenterOffsetZ = 0
    if wheel.repr ~= wheel.driveNode then
      v5, v6, v7 = localToLocal(wheel.driveNode, wheel.repr, 0, 0, 0)
      wheel.steeringCenterOffsetX = v5
      wheel.steeringCenterOffsetY = v6
      wheel.steeringCenterOffsetZ = v7
      wheel.steeringCenterOffsetX = -wheel.steeringCenterOffsetX
      wheel.steeringCenterOffsetY = -wheel.steeringCenterOffsetY
      wheel.steeringCenterOffsetZ = -wheel.steeringCenterOffsetZ
    end
    wheel.syncContactState = false
    if wheel.hasTireTracks then
      v5 = self:addTireTrackNode(wheel, false, wheel.node, wheel.repr, wheel.tireTrackAtlasIndex, wheel.width, wheel.radius, wheel.xOffset, wheel.tireIsInverted)
      wheel.tireTrackNodeIndex = v5
      wheel.syncContactState = true
    end
    wheel.maxLatStiffness = wheel.maxLatStiffness * wheel.restLoad
    wheel.maxLatStiffnessLoad = wheel.maxLatStiffnessLoad * wheel.restLoad
    wheel.mass = wheel.mass + wheel.additionalMass
    wheel.lastTerrainValue = 0
    wheel.sink = 0
    wheel.sinkTarget = 0
    wheel.radiusOriginal = wheel.radius
    wheel.sinkFrictionScaleFactor = 1
    wheel.sinkLongStiffnessFactor = 1
    wheel.sinkLatStiffnessFactor = 1
    wheel.netInfo = {xDrive = 0, xDriveSpeed = 0, x = wheel.positionX, y = wheel.positionY + wheel.deltaY, z = wheel.positionZ, suspensionLength = wheel.suspTravel * 0.5, sync = {yMin = -5, yRange = 10}, yMin = wheel.positionY + wheel.deltaY - 1.2 * wheel.suspTravel}
    v7 = math.min(0.5, 0.5 * wheel.width)
    local v8, v9, v10 = localToLocal(wheel.driveNode, wheel.repr, 0, 0, 0)
    local v11 = createTransformGroup("destructionStartNode")
    wheel.destructionStartNode = v11
    v11 = createTransformGroup("destructionWidthNode")
    wheel.destructionWidthNode = v11
    v11 = createTransformGroup("destructionHeightNode")
    wheel.destructionHeightNode = v11
    link(wheel.repr, wheel.destructionStartNode)
    link(wheel.repr, wheel.destructionWidthNode)
    link(wheel.repr, wheel.destructionHeightNode)
    setTranslation(wheel.destructionStartNode, v8 + 0.5 * wheel.width, 0, v10 - v7)
    setTranslation(wheel.destructionWidthNode, v8 - 0.5 * wheel.width, 0, v10 - v7)
    setTranslation(wheel.destructionHeightNode, v8 + 0.5 * wheel.width, 0, v10 + v7)
    self:updateWheelBase(wheel)
    self:updateWheelTireFriction(wheel)
    wheel.networkInterpolators = {}
    local brakeForce = InterpolatorAngle.new(wheel.netInfo.xDrive)
    wheel.networkInterpolators.xDrive = brakeForce
    brakeForce = InterpolatorPosition.new(wheel.netInfo.x, wheel.netInfo.y, wheel.netInfo.z)
    wheel.networkInterpolators.position = brakeForce
    brakeForce = InterpolatorValue.new(wheel.netInfo.suspensionLength)
    wheel.networkInterpolators.suspensionLength = brakeForce
  end
  if parentWheel ~= nil then
    isSelected = createTransformGroup("linkNode")
    wheel.linkNode = isSelected
    link(parentWheel.driveNode, wheel.linkNode)
  end
  if wheel.tireFilename ~= nil then
    isSelected = Utils.getFilename(wheel.tireFilename, self.baseDirectory)
    wheel.tireFilename = nil
    v6 = self:loadSubSharedI3DFile(isSelected, false, false, self.onWheelPartI3DLoaded, self, {wheel = wheel, parentWheel = parentWheel, linkNode = wheel.linkNode, name = "wheelTire", filename = isSelected, fileIdentifier = "tireFilename", index = wheel.tireNodeStr, offset = 0, widthAndDiam = nil, scale = nil})
    table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v6)
  end
  if wheel.outerRimFilename ~= nil then
    isSelected = Utils.getFilename(wheel.outerRimFilename, self.baseDirectory)
    wheel.outerRimFilename = nil
    v6 = self:loadSubSharedI3DFile(isSelected, false, false, self.onWheelPartI3DLoaded, self, {wheel = wheel, parentWheel = parentWheel, linkNode = wheel.linkNode, name = "wheelOuterRim", filename = isSelected, fileIdentifier = "outerRimFilename", index = wheel.outerRimNodeStr, offset = 0, widthAndDiam = wheel.outerRimWidthAndDiam, scale = wheel.outerRimScale})
    table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v6)
  end
  if wheel.innerRimFilename ~= nil then
    isSelected = Utils.getFilename(wheel.innerRimFilename, self.baseDirectory)
    wheel.innerRimFilename = nil
    v6 = self:loadSubSharedI3DFile(isSelected, false, false, self.onWheelPartI3DLoaded, self, {wheel = wheel, parentWheel = parentWheel, linkNode = wheel.linkNode, name = "wheelInnerRim", filename = isSelected, fileIdentifier = "innerRimFilename", index = wheel.innerRimNodeStr, offset = wheel.innerRimOffset, widthAndDiam = wheel.innerRimWidthAndDiam, scale = wheel.innerRimScale})
    table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v6)
  end
  if wheel.additionalFilename ~= nil then
    isSelected = Utils.getFilename(wheel.additionalFilename, self.baseDirectory)
    wheel.additionalFilename = nil
    v6 = self:loadSubSharedI3DFile(isSelected, false, false, self.onWheelPartI3DLoaded, self, {wheel = wheel, parentWheel = parentWheel, linkNode = wheel.linkNode, name = "wheelAdditional", filename = isSelected, fileIdentifier = "additionalFilename", index = wheel.additionalNodeStr, offset = wheel.additionalOffset, widthAndDiam = wheel.additionalWidthAndDiam, scale = wheel.additionalScale})
    table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v6)
  end
  if wheel.additionalWheels ~= nil then
    for v10, v11 in pairs(wheel.additionalWheels) do
      self:finalizeWheel(v11, wheel)
      brakeForce = MathUtil.mToInch(wheel.width)
      local v13 = MathUtil.mToInch(v11.width)
      local v15 = MathUtil.mToInch(v11.offset)
      if wheel.outerRimWidthAndDiam ~= nil then
      end
      if v11.outerRimWidthAndDiam ~= nil then
      end
      if v15 < 0 then
        if v11.isLeft then
        else
        end
      elseif v11.isLeft then
      else
      end
      if v11.isLeft then
      else
      end
      local v19 = MathUtil.inchToM(0.5 * brakeForce + v15 + 0.5 * v13)
      local v17 = math.abs(v16 + v18 * v19)
      local v18 = math.abs(v5)
      if v18 < v17 then
        v17 = math.abs(v16 + v18 * v19)
      end
      if v11.connector ~= nil then
        v17 = Utils.getFilename(v11.connector.filename, self.baseDirectory)
        v11.connector.filename = nil
        v19 = self:loadSubSharedI3DFile(v17, false, false, self.onAdditionalWheelConnectorI3DLoaded, self, {wheel = wheel, connector = v11.connector, diameter = v14, baseWheelWidth = brakeForce, wheelDistance = v15, offsetDir = v6, dualWheelWidth = v13, filename = v17})
        table.insert(isActiveForInputIgnoreSelection.sharedLoadRequestIds, v19)
      end
      v17, v18, v19 = getTranslation(v11.linkNode)
      setTranslation(v11.linkNode, v17 + v16, v18, v19)
      if v11.hasTireTracks then
        local v20 = self:addTireTrackNode(wheel, true, wheel.node, v11.linkNode, v11.tireTrackAtlasIndex, v11.width, wheel.radius, wheel.xOffset, wheel.tireIsInverted)
        v11.tireTrackNodeIndex = v20
      end
      if not (v11.driveGroundParticleSystems ~= nil) then
        continue
      end
      for v23, v24 in pairs(v11.driveGroundParticleSystems) do
        -- TODO: structure LOP_FORNPREP (pc 1013, target 1059)
        v24[1].offsets[1] = v24[1].offsets[1] + v16
        local v31 = getWorldTranslation(wheel.driveNode)
        local v29, v30, v31 = worldToLocal(...)
        setTranslation(v24[1].emitterShape, v29 + v24[1].offsets[1], v30 + v24[1].offsets[2], v31 + v24[1].offsets[3])
        table.insert(wheel.driveGroundParticleSystems[v23], v24[1])
        -- TODO: structure LOP_FORNLOOP (pc 1058, target 1014)
      end
    end
    wheel.widthOffset = wheel.widthOffset + v6 * v5 / 2
    wheel.wheelShapeWidthTotalOffset = v5
    wheel.wheelShapeWidthTmp = wheel.width / 2 + isSelected / 2
  end
end
function Wheels:onWheelPartI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    args.wheel[args.fileIdentifier] = args.filename
    local v15 = I3DUtil.indexToObject(i3dNode, args.index)
    args.wheel[args.name] = v15
    if args.wheel[args.name] ~= nil then
      link(args.linkNode, args.wheel[args.name])
      delete(i3dNode)
      if args.offset ~= 0 then
        if not args.wheel.isLeft then
        end
        setTranslation(v5[v8], v11 * v15, 0, 0)
      end
      if v13 ~= nil then
        setScale(v5[v8], v13[1], v13[2], v13[3])
      end
      if brakeForce ~= nil then
        v15 = I3DUtil.getHasShaderParameterRec(v5[v8], "widthAndDiam")
        if v15 then
          I3DUtil.setShaderParameterRec(v5[v8], "widthAndDiam", brakeForce[1], brakeForce[2], 0, 0, false)
        else
          v15 = MathUtil.inchToM(brakeForce[1])
          local v16 = MathUtil.inchToM(brakeForce[2])
          setScale(v5[v8], v15, v16, v16)
        end
      end
      v15 = ConfigurationUtil.getColorByConfigId(self, "rimColor", self.configurations.rimColor)
      if not v5.color and not v15 then
      end
      if v8 == "wheelTire" then
        if not v5.tireIsInverted then
          -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L129
          -- if not v6.tireIsInverted then goto L129 end
        end
        setRotation(v5.wheelTire, v5.xRotOffset, 0, math.pi)
        local v18, v19, v20, v21 = I3DUtil.getShaderParameterRec(v5.wheelTire, "morphPosition")
        I3DUtil.setShaderParameterRec(v5.wheelTire, "morphPosition", v18, v19, v20, 0, false)
        I3DUtil.setShaderParameterRec(v5.wheelTire, "prevMorphPosition", v18, v19, v20, 0, false)
        return
      end
      if v8 ~= "wheelOuterRim" then
        -- cmp-jump LOP_JUMPXEQKS R8 aux=0x80000032 -> L265
      end
      if v16 ~= nil then
        local v17, v18, v19, v20, v21 = unpack(v16)
        if v5.wheelOuterRim ~= nil then
          if (v5.material or v20) == nil then
            local v22, v23, v24, v25 = I3DUtil.getShaderParameterRec(v5.wheelOuterRim, "colorMat0")
          end
          I3DUtil.setShaderParameterRec(v5.wheelOuterRim, "colorMat0", v17, v18, v19, v20, false)
        end
        if v5.wheelInnerRim ~= nil then
          if v20 == nil then
            v22, v23, v24, v25 = I3DUtil.getShaderParameterRec(v5.wheelInnerRim, "colorMat0")
          end
          I3DUtil.setShaderParameterRec(v5.wheelInnerRim, "colorMat0", v17, v18, v19, v20, false)
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L342
      -- TODO: structure LOP_FORNPREP (pc 242, target 342)
      if isSelected.hubsColors[1] ~= nil then
        v23 = string.format("colorMat%d", 1)
        I3DUtil.setShaderParameterRec(v5.wheelInnerRim, v23, isSelected.hubsColors[1][1], isSelected.hubsColors[1][2], isSelected.hubsColors[1][3], isSelected.hubsColors[1][4], false)
      end
      -- TODO: structure LOP_FORNLOOP (pc 263, target 243)
      return
      -- cmp-jump LOP_JUMPXEQKS R8 aux=0x8000003c -> L342
      if not v5.additionalColor and v6 ~= nil then
        -- if v6.additionalColor then goto L278 end
      end
      v17 = v17(v18, v16)
      -- cmp-jump LOP_JUMPXEQKNIL R18 aux=0x0 -> L342
      -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L342
      v18, v19, v20, v21 = unpack(v17)
      v22, v23, v24, v25 = I3DUtil.getShaderParameterRec(v5.wheelAdditional, "colorMat0")
      if not v5.additionalMaterial and v6 ~= nil then
        -- if v6.additionalMaterial then goto L306 end
      end
      I3DUtil.setShaderParameterRec(v5.wheelAdditional, "colorMat0", v18, v19, v20, v26, false)
      return
    end
    Logging.xmlWarning(self.xmlFile, "Failed to load node '%s' for file '%s'", v10, v9)
    return
  end
  if not self.isDeleted and not self.isDeleting then
    Logging.xmlWarning(self.xmlFile, "Failed to load file '%s' wheel part '%s'", v9, v8)
  end
end
function Wheels:onAdditionalWheelConnectorI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local brakeForce = I3DUtil.indexToObject(i3dNode, args.connector.nodeStr, self.i3dMappings)
    if brakeForce ~= nil then
      args.connector.node = brakeForce
      args.connector.linkNode = args.wheel.wheelTire
      args.connector.filename = args.filename
      link(args.wheel.driveNode, args.connector.node)
      if not args.connector.useWidthAndDiam then
        local v13 = getHasShaderParameter(args.connector.node, "connectorPos")
        if v13 then
          I3DUtil.setShaderParameterRec(args.connector.node, "connectorPos", 0, args.baseWheelWidth + (args.connector.startPosOffset or 0), args.wheelDistance + (args.connector.endPosOffset or 0), args.dualWheelWidth, false)
        end
        local v13, v14, v15, v16 = I3DUtil.getShaderParameterRec(v5.node, "widthAndDiam")
        I3DUtil.setShaderParameterRec(v5.node, "widthAndDiam", v13, v6, v15, v16, false)
      else
        setTranslation(args.connector.node, args.offsetDir * ((0.5 * args.baseWheelWidth + 0.5 * args.wheelDistance) * 0.0254 + args.connector.additionalOffset), 0, 0)
        I3DUtil.setShaderParameterRec(args.connector.node, "widthAndDiam", args.connector.width, args.connector.diameter or args.diameter, 0, 0, false)
      end
      if v5.usePosAndScale then
        v13 = getHasShaderParameter(v5.node, "connectorPosAndScale")
        if v13 then
          v13, v14, v15, v16 = I3DUtil.getShaderParameterRec(v5.node, "connectorPosAndScale")
          I3DUtil.setShaderParameterRec(v5.node, "connectorPosAndScale", v5.startPos, v5.endPos, v5.scale, v16, false)
        end
      end
      if v5.color ~= nil then
        v13 = getHasShaderParameter(v5.node, "colorMat0")
        if v13 then
          v13, v14, v15, v16 = unpack(v5.color)
          local v17, v18, v19, v20 = I3DUtil.getShaderParameterRec(v5.node, "colorMat0")
          I3DUtil.setShaderParameterRec(v5.node, "colorMat0", v13, v14, v15, v16 or v20, false)
        end
      end
    end
    delete(i3dNode)
  end
end
function Wheels:addToPhysics(superFunc)
  local parentWheel = superFunc(self)
  if not parentWheel then
    return false
  end
  for v6, v7 in pairs(self.spec_wheels.wheels) do
    v7.xDriveOffset = v7.netInfo.xDrive
    v7.updateWheel = false
    self:updateWheelBase(v7)
    self:updateWheelTireFriction(v7)
  end
  if self.isServer then
    isActiveForInputIgnoreSelection = self:getBrakeForce()
    for v7, v8 in pairs(parentWheel.wheels) do
      if not (v8.wheelShape ~= 0) then
        continue
      end
      setWheelShapeProps(v8.node, v8.wheelShape, 0, isActiveForInputIgnoreSelection * v8.brakeFactor, v8.steeringAngle, v8.rotationDamping)
      setWheelShapeAutoHoldBrakeForce(v8.node, v8.wheelShape, isActiveForInputIgnoreSelection * v8.autoHoldBrakeFactor)
    end
    self:brake(isActiveForInputIgnoreSelection)
    parentWheel.wheelCreationTimer = 2
  end
  return true
end
function Wheels:removeFromPhysics(superFunc)
  local ret = superFunc(self)
  if self.isServer then
    for v7, v8 in pairs(self.spec_wheels.wheels) do
      v8.wheelShape = 0
      v8.wheelShapeCreated = false
    end
  end
  return ret
end
function Wheels:getComponentMass(superFunc, component)
  local mass = superFunc(self, component)
  for v8, v9 in pairs(self.spec_wheels.wheels) do
    if not (v9.node == component.node) then
      continue
    end
  end
  return mass
end
function Wheels:getVehicleWorldXRot(superFunc)
  -- TODO: structure LOP_FORNPREP (pc 15, target 67)
  if self.spec_wheels.wheels[1].hasGroundContact then
    local brakeForce, v13, v14 = localToLocal(self.spec_wheels.wheels[1].node, self.components[1].node, 0, 0, self.spec_wheels.wheels[1].netInfo.z)
    local v15, v16, v17 = localToWorld(self.spec_wheels.wheels[1].node, self.spec_wheels.wheels[1].netInfo.x, self.spec_wheels.wheels[1].netInfo.y - self.spec_wheels.wheels[1].radius, self.spec_wheels.wheels[1].netInfo.z)
    if v14 < math.huge then
    end
    if v5 < v14 then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 66, target 16)
  if isActiveForInputIgnoreSelection ~= math.huge and v6 - isSelected ~= 0 then
    if v5 - isActiveForInputIgnoreSelection < 0.25 and superFunc ~= nil then
      return superFunc(self)
    end
    local v11 = math.atan(v9 / v8)
    if math.pi * 0.5 < math.pi * 0.5 - v11 then
    end
  end
  return parentWheel
end
function Wheels:getVehicleWorldDirection(superFunc)
  -- TODO: structure LOP_FORNPREP (pc 13, target 60)
  if self.spec_wheels.wheels[1].hasGroundContact then
    local v13, v14, v15 = localToLocal(self.spec_wheels.wheels[1].node, self.components[1].node, self.spec_wheels.wheels[1].netInfo.x, self.spec_wheels.wheels[1].netInfo.y, self.spec_wheels.wheels[1].netInfo.z)
    local v16, v17, v18 = localDirectionToWorld(self.spec_wheels.wheels[1].node, self.spec_wheels.wheels[1].directionZ, self.spec_wheels.wheels[1].directionX, -self.spec_wheels.wheels[1].directionY)
  end
  -- TODO: structure LOP_FORNLOOP (pc 59, target 14)
  if 0 < v7 then
  end
  if 2 < v7 then
    -- TODO: structure LOP_FORNPREP (pc 83, target 146)
    if v8.wheels[1].hasGroundContact then
      local v21, v22, v23 = localToLocal(v8.wheels[1].node, self.components[1].node, v8.wheels[1].netInfo.x + v8.wheels[1].directionX * v8.wheels[1].radius, v8.wheels[1].netInfo.y + v8.wheels[1].directionY * v8.wheels[1].radius, v8.wheels[1].netInfo.z + v8.wheels[1].directionZ * v8.wheels[1].radius)
      if v6 / v7 + 0.25 < v23 then
      elseif v23 < v6 / v7 - 0.25 then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 145, target 84)
    if 0 < brakeForce and 0 < v16 then
      local v17, v18, v19 = localToWorld(self.components[1].node, v9 / brakeForce, v10 / brakeForce, v11 / brakeForce)
      v17, v18, v19 = localToWorld(self.components[1].node, v13 / v16, v14 / v16, v15 / v16)
      if VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
        DebugUtil.drawDebugGizmoAtWorldPos(v17, v18, v19, 1, 0, 0, 0, 1, 0, "frontWheels", false)
        DebugUtil.drawDebugGizmoAtWorldPos(v17, v18, v19, 1, 0, 0, 0, 1, 0, "backWheels", false)
      end
      v21, v22, v23 = MathUtil.vector3Normalize(v9 - v13, v10 - v14, v11 - v15)
      -- goto L243  (LOP_JUMP +9)
    end
    v17 = superFunc(self)
    return v17
  else
    return 0, 0, 0
  end
  return MathUtil.vector3Normalize(parentWheel, isActiveForInputIgnoreSelection, isSelected)
end
function Wheels:validateWashableNode(superFunc, node)
  if Vehicle.LOAD_STEP_FINISHED <= self.loadingStep then
    -- TODO: structure LOP_FORNPREP (pc 13, target 91)
    if self.spec_wheels.wheels[1].linkNode ~= self.spec_wheels.wheels[1].driveNode then
    end
    if v7.wheelDirtNodes == nil then
      v7.wheelDirtNodes = {}
      I3DUtil.getNodesByShaderParam(v8, "RDT", v7.wheelDirtNodes)
    end
    if v7.wheelDirtNodes[node] ~= nil then
      return false, self.updateWheelDirtAmount, v7, {wheel = v7, fieldDirtMultiplier = v7.fieldDirtMultiplier, streetDirtMultiplier = v7.streetDirtMultiplier, minDirtPercentage = v7.minDirtPercentage, maxDirtOffset = v7.maxDirtOffset, dirtColorChangeSpeed = v7.dirtColorChangeSpeed, isSnowNode = true, loadFromSavegameFunc = function(self, superFunc)
        local isActiveForInputIgnoreSelection = self:getValue(superFunc .. "#snowScale", 0)
        u0.wheel.snowScale = isActiveForInputIgnoreSelection
        u0.wheel.lastSnowScale = u0.wheel.snowScale
        local node, isActiveForInputIgnoreSelection = node:getDirtColors()
        local isSelected, v5, v6 = MathUtil.vector3ArrayLerp(node, isActiveForInputIgnoreSelection, u0.wheel.snowScale)
        local v7 = v7:getWashableNodeByCustomIndex(u2)
        v8:setNodeDirtColor(v7, isSelected, v5, v6, true)
      end, saveToSavegameFunc = function(self, superFunc)
        self:setValue(superFunc .. "#snowScale", u0.wheel.snowScale)
      end}
    end
    -- TODO: structure LOP_FORNLOOP (pc 90, target 14)
  end
  return superFunc(self, node)
end
function Wheels:getAIDirectionNode(superFunc)
  if not self.spec_wheels.steeringCenterNode then
    local parentWheel = superFunc(self)
  end
  return parentWheel
end
function Wheels:getAIRootNode(superFunc)
  if not self.spec_wheels.steeringCenterNode then
    local parentWheel = superFunc(self)
  end
  return parentWheel
end
function Wheels:getSupportsMountKinematic(superFunc)
  if #self.spec_wheels.wheels == 0 then
    local parentWheel = superFunc(self)
  end
  return parentWheel
end
function Wheels:updateWheelDirtAmount(nodeData, dt, allowsWashingByRain, rainScale, timeSinceLastRain, temperature)
  local v7 = self:updateDirtAmount(nodeData, dt, allowsWashingByRain, rainScale, timeSinceLastRain, temperature)
  if nodeData.wheel ~= nil and nodeData.wheel.contact == Wheels.WHEEL_NO_CONTACT and nodeData.wheel.forceWheelDirtUpdate ~= true then
  end
  if v8 then
    if nodeData.wheel ~= nil and nodeData.wheel.densityType ~= 0 and nodeData.wheel.densityType ~= self.spec_wheels.tireTrackGroundGrassValue and nodeData.wheel.densityType ~= self.spec_wheels.tireTrackGroundGrassCutValue then
    end
    if v10 then
    elseif nodeData.minDirtPercentage < nodeData.dirtAmount then
    end
    local v17 = math.pow(1 - self.spec_washable.washableNodes[1].dirtAmount, 2)
    local v18 = math.pow(1 - self.spec_washable.washableNodes[1].dirtAmount, 2)
    if nodeData.maxDirtOffset * (v17 * 0.75 + 0.25) < self.spec_washable.washableNodes[1].dirtAmount - nodeData.dirtAmount then
      -- if v7 >= 0 then goto L137 end
    elseif self.spec_washable.washableNodes[1].dirtAmount - nodeData.dirtAmount < -(nodeData.maxDirtOffset * (v18 * 0.95 + 0.05)) and 0 < v7 then
    end
    if nodeData.wheel.hasSnowContact then
      -- if (v6 or 0) >= 1 then goto L148 end
    else
    end
    local v16 = math.min(v11 / 5, 2)
    local v20 = math.max(nodeData.wheel.snowScale + v15 * dt * nodeData.dirtColorChangeSpeed * v16, 0)
    local v19 = math.min(v20, 1)
    nodeData.wheel.snowScale = v19
    if nodeData.wheel.snowScale ~= nodeData.wheel.lastSnowScale then
      v18, v19 = v18:getDirtColors()
      local v20, v21, v22 = MathUtil.vector3ArrayLerp(v18, v19, nodeData.wheel.snowScale)
      self:setNodeDirtColor(nodeData, v20, v21, v22)
      nodeData.wheel.lastSnowScale = nodeData.wheel.snowScale
    end
    nodeData.wheel.forceWheelDirtUpdate = false
  end
  return v7
end
function Wheels:getAllowTireTracks()
  if self.currentUpdateDistance < Wheels.MAX_TIRE_TRACK_CREATION_DISTANCE and 0 >= self.spec_wheels.tyreTracksSegmentsCoeff then
  end
  return nodeData
end
function Wheels.setWheelPositionDirty(v0, nodeData)
  if nodeData ~= nil then
    nodeData.isPositionDirty = true
  end
end
function Wheels.setWheelTireFrictionDirty(v0, nodeData)
  if nodeData ~= nil then
    nodeData.isFrictionDirty = true
  end
end
function Wheels:updateWheelContact(wheel)
  local timeSinceLastRain, temperature, v7 = localToWorld(wheel.node, wheel.netInfo.x + wheel.xOffset, wheel.netInfo.y - wheel.radius, wheel.netInfo.z)
  if self.isServer and self.isAddedToPhysics and wheel.wheelShapeCreated then
    v7 = getWheelShapeContactPoint(wheel.node, wheel.wheelShape)
    if v7 == nil then
    end
    wheel.hasGroundContact = true
    temperature, v7 = getWheelShapeContactObject(wheel.node, wheel.wheelShape)
    if temperature == timeSinceLastRain.terrainRootNode then
      if v7 <= 0 then
        wheel.contact = Wheels.WHEEL_GROUND_CONTACT
        -- goto L119  (LOP_JUMP +45)
      end
      wheel.contact = Wheels.WHEEL_GROUND_HEIGHT_CONTACT
    elseif wheel.hasGroundContact then
      -- cmp-jump LOP_JUMPXEQKN R6 aux=0x19 -> L113
      wheel.contact = Wheels.WHEEL_OBJ_CONTACT
      local v9 = getRigidBodyType(temperature)
      if v9 == RigidBodyType.STATIC then
        v9 = getUserAttribute(temperature, "noTireTracks")
        if v9 == true then
        end
      end
      wheel.lastContactObjectAllowsTireTracks = v8
    else
      wheel.contact = Wheels.WHEEL_NO_CONTACT
    end
  end
  if wheel.contact == Wheels.WHEEL_GROUND_CONTACT then
    local temperature, v7, v8 = temperature:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    v9 = getDensityAtWorldPos(temperature, dt, allowsWashingByRain, rainScale)
    wheel.densityBits = v9
    local v10 = bitShiftRight(wheel.densityBits, v7)
    v9 = bitAND(v10, 2 ^ v8 - 1)
    wheel.densityType = v9
  else
    wheel.densityBits = 0
    wheel.densityType = 0
  end
  if wheel.contact ~= Wheels.WHEEL_NO_CONTACT then
    temperature = getDensityAtWorldPos(timeSinceLastRain.terrainDetailHeightId, dt, allowsWashingByRain, rainScale)
    v8 = bitAND(temperature, 2 ^ g_densityMapHeightManager.heightTypeNumChannels - 1)
    if v8 ~= self.spec_wheels.snowSystem.snowHeightTypeIndex then
    end
    wheel.hasSnowContact = true
  else
    wheel.hasSnowContact = false
  end
  if allowsWashingByRain >= self.waterY then
  end
  wheel.shallowWater = true
end
function Wheels:getTireTrackColor(wheel, wx, wy, wz, groundWetness)
  if wheel.contact == Wheels.WHEEL_GROUND_CONTACT then
    if wheel.densityType == 0 then
    end
    if true then
      local v14, v15, v16, v17 = v14:getFieldGroundTyreTrackColor(wheel.densityBits)
      if wheel.densityType == self.spec_wheels.tireTrackGroundGrassValue then
        -- goto L70  (LOP_JUMP +27)
      end
      -- if v1.densityType ~= v13.tireTrackGroundGrassCutValue then goto L70 end
    else
      local v13, v14, v15, v16, v17 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, wx, wy, wz, true, true, true, true, false)
    end
    wheel.dirtAmount = brakeForce
    wheel.lastColor[1] = temperature
    wheel.lastColor[2] = v7
    wheel.lastColor[3] = v8
    wheel.lastColor[4] = v9
    wheel.lastTerrainAttribute = v10
    return temperature, v7, v8, v9, v10
  end
  if wheel.contact == Wheels.WHEEL_OBJ_CONTACT and wheel.lastContactObjectAllowsTireTracks and 0 < wheel.dirtAmount then
    v14 = self:getLastSpeed()
    v13 = math.min(v14, 20)
    v13 = math.max(wheel.dirtAmount - self.lastMovedDistance / 30 * (1 + groundWetness) * (2 - v13 / 20), 0)
    wheel.dirtAmount = v13
  end
  return temperature, v7, v8, v9, v10
end
function Wheels:forceUpdateWheelPhysics(dt)
  -- TODO: structure LOP_FORNPREP (pc 7, target 19)
  WheelsUtil.updateWheelPhysics(self, self.spec_wheels.wheels[1], self.spec_wheels.brakePedal, dt)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 8)
end
function Wheels:onWheelSnowHeightChanged(heightPct, heightAbs)
  if heightPct <= 0 then
    -- TODO: structure LOP_FORNPREP (pc 11, target 34)
    if 0 < self.spec_wheels.wheels[1].snowScale then
      self.spec_wheels.wheels[1].snowScale = 0
      self.spec_wheels.wheels[1].forceWheelDirtUpdate = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 33, target 12)
    if rainScale then
      self:raiseActive()
    end
  end
end
function Wheels:addTireTrackNode(wheel, isAdditionalTrack, parent, linkNode, tireTrackAtlasIndex, width, radius, xOffset, inverted, activeFunc)
  if self.tireTrackSystem ~= nil then
    local v13 = v13:createTrack(width, tireTrackAtlasIndex)
    if {wheel = wheel, isAdditionalTrack = isAdditionalTrack, parent = parent, linkNode = linkNode, tireTrackAtlasIndex = tireTrackAtlasIndex, width = width, radius = radius, xOffset = xOffset, inverted = inverted, activeFunc = activeFunc, tireTrackIndex = v13}.tireTrackIndex ~= nil then
      table.insert(self.spec_wheels.tireTrackNodes, {wheel = wheel, isAdditionalTrack = isAdditionalTrack, parent = parent, linkNode = linkNode, tireTrackAtlasIndex = tireTrackAtlasIndex, width = width, radius = radius, xOffset = xOffset, inverted = inverted, activeFunc = activeFunc, tireTrackIndex = v13})
      return #self.spec_wheels.tireTrackNodes
    end
  end
end
function Wheels:updateTireTrackNode(tireTrackNode, allowTireTracks, groundWetness)
  if not allowTireTracks then
    timeSinceLastRain:cutTrack(tireTrackNode.tireTrackIndex)
    return
  end
  if tireTrackNode.activeFunc ~= nil then
    local timeSinceLastRain = tireTrackNode.activeFunc()
    if not timeSinceLastRain then
      timeSinceLastRain:cutTrack(tireTrackNode.tireTrackIndex)
      return
    end
  end
  if not tireTrackNode.isAdditionalTrack then
  else
    local v10 = getWorldTranslation(tireTrackNode.linkNode)
    local v8, v9, v10 = worldToLocal(...)
  end
  v8, v9, v10 = localToWorld(tireTrackNode.parent, timeSinceLastRain + tireTrackNode.xOffset, temperature - tireTrackNode.radius, v7)
  v10 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, v9, v10)
  v8 = math.max(...)
  local v8, v9, v10, v11, brakeForce = self:getTireTrackColor(rainScale, v8, v8, v10, groundWetness)
  if v8 ~= nil then
    local v13, v14, v15 = localDirectionToWorld(rainScale.node, -rainScale.directionX, -rainScale.directionY, -rainScale.directionZ)
    if tireTrackNode.inverted then
    end
    if brakeForce == nil then
    end
    v17:addTrackPoint(v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, true)
    return
  end
  v13:cutTrack(tireTrackNode.tireTrackIndex)
end
function Wheels:getCurrentSurfaceSound()
  for temperature, v7 in ipairs(self.spec_wheels.wheels) do
    if not v7.hasTireTracks and not (temperature == dt) then
      continue
    end
    if v7.contact == Wheels.WHEEL_GROUND_CONTACT then
      if v7.densityType == 0 then
      end
      if true then
        return wheel.surfaceNameToSound.field
      end
      if v9 then
        return wheel.surfaceNameToSound.shallowWater
      end
      if not v7.hasTireTracks then
        local v11, brakeForce, v13 = getWorldTranslation(v7.driveNode)
        local v14, v15, v16, v17, v18 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, v11, brakeForce, v13, true, true, true, true, false)
      end
      return wheel.surfaceIdToSound[v10]
    end
    if v7.contact == Wheels.WHEEL_GROUND_HEIGHT_CONTACT then
      if not v7.hasSnowContact then
        continue
      end
      return wheel.surfaceNameToSound.snow
    else
      if v7.contact == Wheels.WHEEL_OBJ_CONTACT then
        return wheel.surfaceNameToSound.asphalt
      end
      if not (v7.contact == Wheels.WHEEL_NO_CONTACT) then
        break
      end
    end
  end
end
function Wheels:getAreSurfaceSoundsActive()
  return self.isActiveForLocalSound
end
function Wheels:updateWheelDensityMapHeight(wheel, dt)
  if not self.isServer then
    return
  end
  if 0.0002 < self.lastSpeedReal then
    local temperature = math.max(self.lastMovedDistance * 1.2, 0.0003 * dt)
    local timeSinceLastRain = DensityMapHeightUtil.getRoundedHeightValue(self.spec_wheels.wheelSmoothAccumulation + temperature)
    self.spec_wheels.wheelSmoothAccumulation = self.spec_wheels.wheelSmoothAccumulation + temperature - timeSinceLastRain
  else
    self.spec_wheels.wheelSmoothAccumulation = 0
  end
  if rainScale == 0 then
    return
  end
  local v8, v9, v10 = localToWorld(wheel.node, wheel.netInfo.x + wheel.xOffset, wheel.netInfo.y - wheel.radius, wheel.netInfo.z)
  if 0 < wheel.smoothGroundRadius then
    v8 = DensityMapHeightUtil.getHeightTypeDescAtWorldPos(v8, v9, v10, wheel.smoothGroundRadius)
    if v8 ~= nil and v8.allowsSmoothing then
      v9 = v9:getTerrainDetailHeightUpdater()
      if v9 ~= nil then
        v10 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, v9, v10)
        local v14 = math.max((v9 - v10 + v8.collisionBaseOffset) / v8.collisionScale, v9 - v10 + v8.minCollisionOffset)
        local v13 = math.min(v14, v9 - v10 + v8.maxCollisionOffset)
        v13 = math.max(v13 + -0.1, 0)
        smoothDensityMapHeightAtWorldPos(v9, v8, v10 + v13, v10, rainScale, v8.index, 0, wheel.smoothGroundRadius, wheel.smoothGroundRadius + 1.2)
        if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
          DebugUtil.drawDebugCircle(v8, v10 + v13, v10, wheel.smoothGroundRadius, 10)
        end
      end
    end
    if wheel.additionalWheels ~= nil then
      for brakeForce, v13 in pairs(wheel.additionalWheels) do
        local v15, v16, v17 = localToLocal(v13.wheelTire, wheel.repr, v13.xOffset, 0, 0)
        local v18, v19, v20 = localToWorld(wheel.repr, v15, v16 - v13.radius, v17)
        v18 = DensityMapHeightUtil.getHeightTypeDescAtWorldPos(v18, v19, v20, v13.smoothGroundRadius)
        if not (v18 ~= nil) then
          continue
        end
        if not v18.allowsSmoothing then
          continue
        end
        v18 = v18:getTerrainDetailHeightUpdater()
        if not (v18 ~= nil) then
          continue
        end
        v19 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v18, v19, v20)
        local v23 = math.max((v19 - v19 + v18.collisionBaseOffset) / v18.collisionScale, v19 - v19 + v18.minCollisionOffset)
        local v22 = math.min(v23, v19 - v19 + v18.maxCollisionOffset)
        v22 = math.max(v22 + -0.1, 0)
        smoothDensityMapHeightAtWorldPos(v18, v18, v19 + v22, v20, rainScale, v18.index, 0, v13.smoothGroundRadius, v13.smoothGroundRadius + 1.2)
        if not (VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES) then
          continue
        end
        DebugUtil.drawDebugCircle(v18, v19 + v22, v20, v13.smoothGroundRadius, 10)
      end
    end
  end
end
function Wheels:updateWheelDestruction(wheel, dt)
  local doFruitDestruction = self:getIsWheelFoliageDestructionAllowed(wheel)
  if wheel.contact ~= Wheels.WHEEL_NO_CONTACT then
  end
  if not doFruitDestruction then
    -- if not v4 then goto L220 end
  end
  if doFruitDestruction then
    local timeSinceLastRain, temperature, v7 = getWorldTranslation(wheel.destructionStartNode)
    local v10 = self:getActiveFarm()
    local v8 = v8:canFarmAccessLand(v10, timeSinceLastRain, v7)
    if v8 then
      local v8, v9, v10 = getWorldTranslation(wheel.destructionWidthNode)
      local v11, brakeForce, v13 = getWorldTranslation(wheel.destructionHeightNode)
      self:destroyFruitArea(timeSinceLastRain, v7, v8, v10, v11, v13)
    end
  end
  if rainScale then
    temperature, v7, v8 = localToWorld(wheel.destructionStartNode, 0, 0, wheel.radius * 0.75 * self.movingDirection)
    v9, v10, v11 = localToWorld(wheel.destructionWidthNode, 0, 0, wheel.radius * 0.75 * self.movingDirection)
    local brakeForce, v13, v14 = localToWorld(wheel.destructionHeightNode, 0, 0, wheel.radius * 0.75 * self.movingDirection)
    self:destroySnowArea(temperature, v8, v9, v11, brakeForce, v14)
  end
  if wheel.additionalWheels ~= nil then
    for v8, v9 in pairs(wheel.additionalWheels) do
      v11 = math.min(0.5, 0.5 * v9.width)
      if wheel.repr ~= wheel.driveNode then
      end
      local v13, v14, v15 = localToLocal(v9.wheelTire, brakeForce, 0, 0, 0)
      if doFruitDestruction then
        local v16, v17, v18 = localToWorld(brakeForce, v13 + v10, v14, v15 - v11)
        local v21 = self:getActiveFarm()
        local v19 = v19:getIsOwnedByFarmAtWorldPosition(v21, v16, v18)
        if v19 then
          local v19, v20, v21 = localToWorld(brakeForce, v13 - v10, v14, v15 - v11)
          local v22, v23, v24 = localToWorld(brakeForce, v13 + v10, v14, v15 + v11)
          self:destroyFruitArea(v16, v18, v19, v21, v22, v24)
        end
      end
      if not rainScale then
        continue
      end
      v17, v18, v19 = localToWorld(brakeForce, v13 + v10, v14, v15 - v11 + wheel.radius * 0.75 * self.movingDirection)
      v20, v21, v22 = localToWorld(brakeForce, v13 - v10, v14, v15 - v11 + wheel.radius * 0.75 * self.movingDirection)
      local v23, v24, v25 = localToWorld(brakeForce, v13 + v10, v14, v15 + v11 + wheel.radius * 0.75 * self.movingDirection)
      self:destroySnowArea(v17, v19, v20, v22, v23, v25)
    end
  end
end
function Wheels:getIsWheelFoliageDestructionAllowed(wheel)
  local dt = self:getIsAIActive()
  if dt then
    return false
  end
  if wheel.contact ~= Wheels.WHEEL_GROUND_CONTACT then
    return false
  end
  if wheel.isCareWheel then
    return false
  end
  if self.getBlockFoliageDestruction ~= nil then
    dt = self:getBlockFoliageDestruction()
    if dt then
      return false
    end
  end
  return true
end
function Wheels:updateWheelSink(wheel, dt, groundWetness)
  if wheel.supportsWheelSink and self.isServer and self.isAddedToPhysics then
    local v7 = self:getLastSpeed()
    if wheel.contact ~= Wheels.WHEEL_NO_CONTACT then
      -- if 0.3 >= v7 then goto L230 end
      local v9, v10, v11 = getWorldTranslation(wheel.repr)
      if 0 < wheel.densityType then
        local v14 = math.floor(v9 * 100)
        local v15 = math.floor(v11 * 100)
        local v20 = getPerlinNoise2D(v14 * 0.01 * Wheels.perlinNoiseSink.randomFrequency, v15 * 0.01 * Wheels.perlinNoiseSink.randomFrequency, Wheels.perlinNoiseSink.persistence, Wheels.perlinNoiseSink.numOctaves, Wheels.perlinNoiseSink.randomSeed)
        local v21 = getPerlinNoise2D(v14 * 0.01 * Wheels.perlinNoiseWobble.randomFrequency, v15 * 0.01 * Wheels.perlinNoiseWobble.randomFrequency, Wheels.perlinNoiseWobble.persistence, Wheels.perlinNoiseWobble.numOctaves, Wheels.perlinNoiseWobble.randomSeed)
        local tireLoad = getWheelShapeContactForce(wheel.node, wheel.wheelShape)
        if tireLoad ~= nil then
          local v19, v20, v21 = getWheelShapeContactNormal(wheel.node, wheel.wheelShape)
          local v22, v23, v24 = localDirectionToWorld(wheel.node, 0, -1, 0)
          local v26 = MathUtil.dotProduct(v22, v23, v24, v19, v20, v21)
          v26 = math.max(v20 * 9.81, 0)
        else
        end
        v21 = math.max(0, tireLoad / 9.81 / wheel.maxLatStiffnessLoad)
        v19 = math.min(...)
        v20 = math.max(0.333 * (2 * v19 + groundWetness) * v16, v17)
      end
      if wheel.densityType == FieldGroundType.PLOWED and wheel.oppositeWheelIndex ~= nil and wheelMass.wheels[wheel.oppositeWheelIndex].densityType ~= nil and wheelMass.wheels[wheel.oppositeWheelIndex].densityType ~= FieldGroundType.PLOWED then
      end
      local v16 = math.min(additionalMass, wheel.maxWheelSink)
      local v13 = math.min(0.2 * wheel.radiusOriginal, v16 * brakeForce)
    elseif wheel.contact == Wheels.WHEEL_NO_CONTACT then
    end
    if wheel.sinkTarget < temperature then
      v19 = math.max(0, v7 - 0.2)
      local v17 = math.min(...)
      v9 = math.min(temperature, wheel.sinkTarget + 0.05 * v17 * dt / 1000 * v8)
      wheel.sinkTarget = v9
    elseif temperature < wheel.sinkTarget then
      v19 = math.max(0, v7 - 0.2)
      v17 = math.min(...)
      v9 = math.max(temperature, wheel.sinkTarget - 0.05 * v17 * dt / 1000 * v8)
      wheel.sinkTarget = v9
    end
    v9 = math.abs(wheel.sink - wheel.sinkTarget)
    if 0.001 < v9 then
      wheel.sink = wheel.sinkTarget
      if wheel.radiusOriginal - wheel.sink ~= wheel.radius then
        wheel.radius = wheel.radiusOriginal - wheel.sink
        if self.isServer then
          self:setWheelPositionDirty(wheel)
          wheel.sinkLongStiffnessFactor = 1 - 0.1 * wheel.sink / additionalMass * (1 + 0.4 * groundWetness)
          wheel.sinkLatStiffnessFactor = 1 - 0.2 * wheel.sink / additionalMass * (1 + 0.4 * groundWetness)
          self:setWheelTireFrictionDirty(wheel)
        end
      end
    end
  end
end
function Wheels:updateWheelFriction(wheel, dt, groundWetness)
  if self.isServer then
    if wheel.densityType == 0 then
    end
    if wheel.hasSnowContact then
    end
    if wheel.contact == Wheels.WHEEL_GROUND_CONTACT then
    end
    local v7 = v7(v8, true, additionalMass)
    local v8 = WheelsUtil.getTireFriction(wheel.tireType, v7, groundWetness, temperature)
    local v9 = self:getLastSpeed()
    if 0.2 < v9 and v8 ~= wheel.tireGroundFrictionCoeff then
      wheel.tireGroundFrictionCoeff = v8
      self:setWheelTireFrictionDirty(wheel)
    end
  end
end
function Wheels:updateWheelBase(wheel)
  if self.isServer and self.isAddedToPhysics then
    local additionalMass = createWheelShape(wheel.node, wheel.positionX - wheel.directionX * wheel.deltaY, wheel.positionY - wheel.directionY * wheel.deltaY, wheel.positionZ - wheel.directionZ * wheel.deltaY, wheel.radius, wheel.suspTravel, wheel.spring, wheel.damperCompressionLowSpeed, wheel.damperCompressionHighSpeed, wheel.damperCompressionLowSpeedThreshold, wheel.damperRelaxationLowSpeed, wheel.damperRelaxationHighSpeed, wheel.damperRelaxationLowSpeedThreshold, wheel.mass, 251, wheel.wheelShape)
    wheel.wheelShape = additionalMass
    local v7 = getParent(wheel.repr)
    local temperature, v7, v8 = localToLocal(v7, wheel.node, wheel.startPositionX, wheel.startPositionY + wheel.deltaY, wheel.startPositionZ)
    setWheelShapeForcePoint(wheel.node, wheel.wheelShape, wheel.positionX, wheel.positionY - wheel.directionY * wheel.deltaY - wheel.radius * wheel.forcePointRatio, wheel.positionZ - wheel.directionZ * wheel.deltaY)
    setWheelShapeSteeringCenter(wheel.node, wheel.wheelShape, temperature, v7, v8)
    setWheelShapeDirection(wheel.node, wheel.wheelShape, wheel.directionX, wheel.directionY, wheel.directionZ, wheel.axleX, wheel.axleY, wheel.axleZ)
    setWheelShapeWidth(wheel.node, wheel.wheelShape, wheel.wheelShapeWidth, wheel.widthOffset)
    if wheel.driveGroundParticleSystems ~= nil then
      for brakeForce, v13 in pairs(wheel.driveGroundParticleSystems) do
        for v17, tireLoad in ipairs(v13) do
          setTranslation(tireLoad.emitterShape, wheel.positionX + tireLoad.offsets[1], groundWetness + tireLoad.offsets[2], wheel.positionZ + tireLoad.offsets[3])
        end
      end
    end
  end
end
function Wheels:updateWheelTireFriction(wheel)
  if self.isServer and self.isAddedToPhysics then
    setWheelShapeTireFriction(wheel.node, wheel.wheelShape, wheel.sinkFrictionScaleFactor * wheel.maxLongStiffness, wheel.sinkLatStiffnessFactor * wheel.maxLatStiffness, wheel.maxLatStiffnessLoad, wheel.sinkFrictionScaleFactor * wheel.frictionScale * wheel.tireGroundFrictionCoeff)
  end
end
function Wheels:getDriveGroundParticleSystemsScale(particleSystem, speed)
  if particleSystem.wheel ~= nil then
    if particleSystem.onlyActiveOnGroundContact and particleSystem.wheel.contact ~= Wheels.WHEEL_GROUND_CONTACT and not particleSystem.wheel.hasSnowContact then
      return 0
    end
    if not Wheels.GROUND_PARTICLES[groundWetness.lastTerrainAttribute] and not groundWetness.hasSnowContact then
      return 0
    end
    local wheelMass = wheelMass:getFieldGroundValue(FieldGroundType.GRASS)
    if groundWetness.densityType == wheelMass then
      return 0
    end
  end
  if particleSystem.minSpeed < speed then
    if particleSystem.direction ~= 0 then
      if 0 >= particleSystem.direction then
      end
      if 0 >= self.movingDirection then
      end
      -- if v6 ~= true then goto L88 end
    end
    local v7 = math.min((speed - wheelMass) / (particleSystem.maxSpeed - wheelMass), 1)
    return MathUtil.lerp(particleSystem.minScale, particleSystem.maxScale, v7)
  end
  return 0
end
function Wheels.getIsVersatileYRotActive(v0, wheel)
  return true
end
function Wheels:getWheelFromWheelIndex(wheelIndex)
  return self.spec_wheels.wheels[wheelIndex]
end
function Wheels:getWheelByWheelNode(wheelNode)
  local groundWetness = type(wheelNode)
  if groundWetness == "string" and self.i3dMappings[wheelNode] ~= nil then
  end
  -- TODO: structure LOP_FORNPREP (pc 21, target 39)
  if dt.wheels[1].repr ~= wheelNode and dt.wheels[1].driveNode ~= wheelNode then
    -- if v2.wheels[1].linkNode ~= v1 then goto L38 end
  end
  return temperature
  -- TODO: structure LOP_FORNLOOP (pc 38, target 22)
  return nil
end
function Wheels:getWheels()
  return self.spec_wheels.wheels
end
function Wheels.destroyFruitArea(v0, wheel, dt, groundWetness, wheelMass, additionalMass, temperature)
  FSDensityMapUtil.updateWheelDestructionArea(wheel, dt, groundWetness, wheelMass, additionalMass, temperature)
end
function Wheels:destroySnowArea(x0, z0, x1, z1, x2, z2)
  local v9 = v9:getSnowHeightAtArea(x0, z0, x1, z1, x2, z2)
  local v10 = MathUtil.equalEpsilon(self.spec_wheels.snowSystem.height, v9, 0.005)
  if self.spec_wheels.snowSystem.height < 0.005 and 1 >= v9 then
  end
  if SnowSystem.MIN_LAYER_HEIGHT < v9 then
    if not v10 then
      -- if not v11 then goto L72 end
    end
    if v11 then
    end
    local v15 = math.min(brakeForce, v9)
    local v13 = math.floor(v15 / SnowSystem.MIN_LAYER_HEIGHT)
    if 0 < v13 then
      v14:removeSnow(x0, z0, x1, z1, x2, z2, v13)
    end
  end
end
function Wheels:brake(brakePedal)
  if brakePedal ~= self.spec_wheels.brakePedal then
    self.spec_wheels.brakePedal = brakePedal
    for temperature, v7 in pairs(self.spec_wheels.wheels) do
      WheelsUtil.updateWheelPhysics(self, v7, dt.brakePedal, 0)
    end
    SpecializationUtil.raiseEvent(self, "onBrake", dt.brakePedal)
  end
end
function Wheels:setCustomBrakeForce(wheel)
  self.spec_wheels.customBrakeForce = wheel
end
function Wheels:getBrakeForce()
  return self.spec_wheels.customBrakeForce or 0
end
function Wheels:updateWheelChocksPosition(isInParkingPosition, continueUpdate)
  for v7, v8 in pairs(self.spec_wheels.wheelChocks) do
    v8.wheel.updateWheelChock = continueUpdate
    local v9 = Utils.getNoNil(isInParkingPosition, v8.isParked)
    self:updateWheelChockPosition(v8, v9)
  end
end
function Wheels.updateWheelChockPosition(v0, wheel, dt)
  if dt == nil then
  end
  wheel.isInParkingPosition = dt
  if dt then
    if wheel.parkingNode ~= nil then
      setTranslation(wheel.node, 0, 0, 0)
      setRotation(wheel.node, 0, 0, 0)
      link(wheel.parkingNode, wheel.node)
      setVisibility(wheel.node, true)
      -- goto L200  (LOP_JUMP +159)
    end
    setVisibility(wheel.node, false)
  else
    setVisibility(wheel.node, true)
    local additionalMass = math.acos((wheel.wheel.radius - wheel.wheel.deformation - wheel.height) / wheel.wheel.radius)
    local v8 = math.sin(additionalMass)
    link(wheel.wheel.node, wheel.node)
    local v9 = getParent(wheel.wheel.repr)
    local v11 = getRotation(wheel.wheel.repr)
    local v8, v9, v10 = localRotationToLocal(...)
    if wheel.isInverted then
    end
    setRotation(wheel.node, 0, v9, 0)
    local v11, brakeForce, v13 = localDirectionToLocal(wheel.node, groundWetness.node, 0, 0, 1)
    local v14, v15, v16 = localDirectionToLocal(wheel.node, groundWetness.node, 1, 0, 0)
    local v17, tireLoad, v19 = localToLocal(groundWetness.driveNode, groundWetness.node, 0, 0, 0)
    setTranslation(wheel.node, v17 + v14 * wheel.offset[1] + v11 * (v7 + wheel.offset[3]), tireLoad + v15 * wheel.offset[1] + brakeForce * (v7 + wheel.offset[3]) - groundWetness.radius + groundWetness.deformation + wheel.offset[2], v19 + v16 * wheel.offset[1] + v13 * (v7 + wheel.offset[3]))
  end
  if wheel.parkedNode ~= nil then
    setVisibility(wheel.parkedNode, dt)
  end
  if wheel.linkedNode ~= nil then
    setVisibility(wheel.linkedNode, not dt)
  end
  return true
end
function Wheels:onLeaveVehicle()
  if self.isServer and self.isAddedToPhysics then
    for additionalMass, temperature in pairs(self.spec_wheels.wheels) do
      local brakeForce = self:getBrakeForce()
      setWheelShapeProps(temperature.node, temperature.wheelShape, 0, brakeForce * temperature.brakeFactor, temperature.steeringAngle, temperature.rotationDamping)
    end
  end
end
function Wheels:onPreAttach()
  self:updateWheelChocksPosition(true, false)
end
function Wheels:onPostDetach()
  self:updateWheelChocksPosition(false, true)
end
function Wheels:getSteeringRotTimeByCurvature(curvature)
  if curvature ~= 0 then
    if 0 < curvature then
    end
    for v7, v8 in ipairs(groundWetness.wheels) do
      if not (v8.rotSpeed ~= 0) then
        continue
      end
      local v9, v10, v11 = localToLocal(v8.repr, groundWetness.steeringCenterNode, 0, 0, 0)
      local v15 = math.abs(curvature)
      local tireLoad = math.abs(curvature)
      local v19 = math.abs(v9)
      local brakeForce = math.atan(v11 * v15 / (1 - tireLoad * v19))
      if 0 < curvature then
        local v14 = math.max(dt, -(brakeForce / v8.rotSpeed))
      else
        v14 = math.min(dt, brakeForce / v8.rotSpeed)
      end
    end
  end
  return dt
end
function Wheels:getTurningRadiusByRotTime(rotTime)
  if self.spec_wheels.steeringCenterNode ~= nil then
    for v7, v8 in ipairs(self.spec_wheels.wheels) do
      if not (v8.rotSpeed ~= 0) then
        continue
      end
      local v9 = math.abs(v8.rotSpeed)
      local v10 = math.abs(rotTime * v9)
      if not (0 < v10) then
        continue
      end
      local v11, brakeForce, v13 = localToLocal(v8.repr, dt.steeringCenterNode, 0, 0, 0)
      local v16 = math.abs(v13)
      local v17 = math.tan(v10)
      v16 = math.abs(v11)
      if not (v16 / v17 + v16 < groundWetness) then
        continue
      end
    end
  end
  return groundWetness
end
function Wheels:onRegisterAnimationValueTypes()
  self:registerAnimationValueType("steeringAngle", "startSteeringAngle", "endSteeringAngle", false, AnimationValueFloat, function(self, wheel, dt)
    local groundWetness = wheel:getValue(dt .. "#wheelIndex")
    self.wheelIndex = groundWetness
    if self.wheelIndex ~= nil then
      self:setWarningInformation("wheelIndex: " .. self.wheelIndex)
      self:addCompareParameters("wheelIndex")
      return true
    end
    return false
  end, function(self)
    if self.wheelIndex ~= nil then
      if self.wheel == nil then
        local wheel = wheel:getWheelFromWheelIndex(self.wheelIndex)
        self.wheel = wheel
        if self.wheel == nil then
          Logging.xmlWarning(u0.xmlFile, "Unknown wheel index '%s' for animation part.", self.wheelIndex)
          self.wheelIndex = nil
          return 0
        end
      end
      return self.wheel.steeringAngle
    end
    return 0
  end, function(self, wheel)
    if self.wheel ~= nil then
      self.wheel.steeringAngle = wheel
    end
  end)
  self:registerAnimationValueType("brakeFactor", "startBrakeFactor", "endBrakeFactor", false, AnimationValueFloat, function(self, wheel, dt)
    local groundWetness = wheel:getValue(dt .. "#wheelIndex")
    self.wheelIndex = groundWetness
    if self.wheelIndex ~= nil then
      self:setWarningInformation("wheelIndex: " .. self.wheelIndex)
      self:addCompareParameters("wheelIndex")
      return true
    end
    return false
  end, function(self)
    if self.wheel == nil then
      local wheel = wheel:getWheelFromWheelIndex(self.wheelIndex)
      if wheel == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown wheel index '%s' for animation part.", self.wheelIndex)
        self.startValue = nil
        return 0
      end
      self.wheel = wheel
    end
    return self.wheel.brakeFactor
  end, function(self, wheel)
    if self.wheel ~= nil then
      self.wheel.brakeFactor = wheel
      WheelsUtil.updateWheelPhysics(u0, self.wheel, u0.spec_wheels.brakePedal, 16.66)
    end
  end)
end
function Wheels:onPostAttachImplement(object, inputJointDescIndex, jointDescIndex)
  SpecializationUtil.raiseEvent(self, "onBrake", self.spec_wheels.brakePedal)
end
function Wheels:getTireNames()
  if self.spec_wheels ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 24)
    if self.spec_wheels.wheels[1].name ~= nil then
      {}[self.spec_wheels.wheels[1].name] = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 23, target 12)
    -- TODO: structure LOP_FORNPREP (pc 29, target 42)
    if wheel.dynamicallyLoadedWheels[1].name ~= nil then
      dt[wheel.dynamicallyLoadedWheels[1].name] = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 41, target 30)
  end
  return table.toList(dt)
end
function Wheels:loadBrandName(wheel, dt, groundWetness, wheelMass, additionalMass)
  local temperature = self:getValue(wheel .. "#brand")
  additionalMass.wheelBrandKey = wheel
  if temperature ~= nil then
    local v7 = v7:getBrandByName(temperature)
    if v7 ~= nil then
      additionalMass.wheelBrandName = v7.title
      additionalMass.wheelBrandIconFilename = v7.image
      table.insert(additionalMass.nameCompareParams, "wheelBrandName")
      return
    end
    Logging.xmlWarning(self, "Wheel brand '%s' is not defined for '%s'!", temperature, wheel)
  end
end
function Wheels.loadedBrandNames(xmlFile, baseKey, baseDir, customEnvironment, isMod, configurationItems, storeItem)
  for v11, brakeForce in ipairs(configurationItems) do
    if not (brakeForce.wheelBrandName ~= nil) then
      continue
    end
    break
  end
  if v7 then
    for v11, brakeForce in ipairs(configurationItems) do
      if not (brakeForce.wheelBrandName == nil) then
        continue
      end
      Logging.xmlWarning(xmlFile, "Wheel brand missing for wheel configuration '%s'!", brakeForce.wheelBrandKey)
    end
  end
end
function Wheels.getBrands(items)
  for temperature, v7 in ipairs(items) do
    if not (v7.wheelBrandName ~= nil) then
      continue
    end
    if not (dt[v7.wheelBrandName] == nil) then
      continue
    end
    table.insert(wheel, {title = v7.wheelBrandName, icon = v7.wheelBrandIconFilename})
    dt[v7.wheelBrandName] = true
  end
  return wheel
end
function Wheels.getWheelsByBrand(items, brand)
  for temperature, v7 in ipairs(items) do
    if not (v7.wheelBrandName == brand.title) then
      continue
    end
    table.insert(dt, v7)
  end
  return dt
end
function Wheels.getWheelMassFromExternalFile(filename, wheelConfigId)
  local wheelXMLFile = XMLFile.load("specWeightWheelXml", filename, Wheels.xmlSchema)
  if wheelXMLFile ~= nil then
    local wheelMass = wheelXMLFile:getValue("wheel.default.physics#mass", 0.1)
    local additionalMass = wheelXMLFile:getValue("wheel.default.additional#mass", 0)
    if wheelConfigId ~= nil then
      wheelXMLFile:iterate("wheel.configurations.configuration", function(filename, wheelConfigId)
        local dt = dt:getValue(wheelConfigId .. "#id")
        if dt == u1 then
          dt = dt:getValue(wheelConfigId .. ".physics#mass", u2)
          u2 = dt
          dt = dt:getValue(wheelConfigId .. ".additional#mass", u3)
          u3 = dt
          return false
        end
      end)
    end
    wheelXMLFile:delete()
  end
  return dt
end
function Wheels:loadSpecValueWheelWeight(wheel, dt)
  local groundWetness, wheelMass = Wheels.createConfigSaveIdMapping(self)
  self:iterate("vehicle.wheels.wheelConfigurations.wheelConfiguration", function(self, wheel)
    local dt = dt:getValue(wheel .. "#isDefault")
    if dt then
      u1 = self
      return false
    end
  end)
  local temperature = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration(%d)", 0)
  self:iterate(temperature .. ".wheels.wheel", function(self, wheel)
    local v8 = string.format(".wheels.wheel(%d).physics#mass", self - 1)
    local dt = Wheels.getConfigurationValue(...)
    if dt ~= nil then
      u5 = u5 + dt
      return
    end
    local v9 = string.format(".wheels.wheel(%d)#filename", self - 1)
    local groundWetness = Wheels.getConfigurationValue(...)
    if groundWetness ~= nil then
      local v10 = string.format(".wheels.wheel(%d)#configId", self - 1)
      local wheelMass = Wheels.getConfigurationValue(...)
      local additionalMass = Utils.getFilename(groundWetness, u6)
      local v7 = Wheels.getWheelMassFromExternalFile(additionalMass, wheelMass)
      u5 = u5 + v7
    else
      u5 = u5 + 0.1
    end
    v8 = string.format(".wheels.wheel(%d).additionalWheel", self - 1)
    wheelMass:iterate(u4 .. v8, function(self, wheel)
      local v8 = string.format(".wheels.wheel(%d).additionalWheel(%d)#filename", u5 - 1, self - 1)
      local dt = Wheels.getConfigurationValue(...)
      if dt ~= nil then
        local v9 = string.format(".wheels.wheel(%d).additionalWheel(%d)#configId", u5 - 1, self - 1)
        local groundWetness = Wheels.getConfigurationValue(...)
        local wheelMass = Utils.getFilename(dt, u6)
        local temperature = Wheels.getWheelMassFromExternalFile(wheelMass, groundWetness)
        u7 = u7 + temperature
      end
    end)
  end)
  return 0
end
function Wheels.loadSpecValueWheels(xmlFile, customEnvironment, baseDir)
  return nil
end
function Wheels.getSpecValueWheels(storeItem, realItem)
  if realItem == nil then
    return nil
  end
  local groundWetness = Wheels.getTireNames(realItem)
  return table.concat(groundWetness, " / ")
end
function Wheels:getVRamUsageFromXML()
  local wheel = self:hasProperty("vehicle.wheels")
  if not wheel then
    return 0, 0
  end
  self:iterate("vehicle.wheels.wheelConfigurations.wheelConfiguration", function(self, wheel)
    local dt = dt:getValue(wheel .. "#isDefault")
    if dt then
      u1 = self
      return false
    end
  end)
  local dt = string.format("vehicle.wheels.wheelConfigurations.wheelConfiguration(%d)", 0)
  self:iterate(dt .. ".wheels.wheel", function(self, wheel)
    local dt = dt:getString(wheel .. "#filename")
    if dt ~= nil and u1[dt] == nil then
      u2 = u2 + 1
      u1[dt] = true
    end
  end)
  return 0 * Wheels.VRAM_PER_WHEEL, 0
end
