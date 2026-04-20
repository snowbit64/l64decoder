-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Rideable = {}
source("dataS/scripts/vehicles/specializations/events/JumpEvent.lua")
source("dataS/scripts/vehicles/specializations/events/RideableStableNotificationEvent.lua")
Rideable.GAITTYPES = {MIN = 1, BACKWARDS = 1, STILL = 2, WALK = 3, TROT = 4, CANTER = 5, GALLOP = 6, MAX = 6}
Rideable.HOOVES = {FRONT_LEFT = 1, FRONT_RIGHT = 2, BACK_LEFT = 3, BACK_RIGHT = 4}
Rideable.GROUND_RAYCAST_OFFSET = 1.2
Rideable.GROUND_RAYCAST_MAXDISTANCE = 5
Rideable.GROUND_RAYCAST_COLLISIONMASK = 59
function Rideable.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(CCTDrivable, specializations)
end
function Rideable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Rideable")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#speedBackwards", "Backward speed", -1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#speedWalk", "Walk speed", 2.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#speedCanter", "Canter speed", 3.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#speedTrot", "Trot speed", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#speedGallop", "Gallop speed", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#minTurnRadiusBackwards", "Min turning radius backward", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#minTurnRadiusWalk", "Min turning radius walk", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#minTurnRadiusCanter", "Min turning radius canter", 2.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#minTurnRadiusTrot", "Min turning radius trot", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#minTurnRadiusGallop", "Min turning radius gallop", 10)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.rideable#turnSpeed", "Turn speed (deg/s)", 45)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable#jumpHeight", "Jump height", 2)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable#proxy", "Proxy node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontLeft#node", "Hoof node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemSlow#node", "Slow step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemSlow#particleType", "Slow step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemSlow")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemFast#node", "Fast step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemFast#particleType", "Fast step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofFrontLeft.particleSystemFast")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontRight#node", "Hoof node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemSlow#node", "Slow step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemSlow#particleType", "Slow step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemSlow")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemFast#node", "Fast step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemFast#particleType", "Fast step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofFrontRight.particleSystemFast")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackLeft#node", "Hoof node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemSlow#node", "Slow step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemSlow#particleType", "Slow step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemSlow")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemFast#node", "Fast step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemFast#particleType", "Fast step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofBackLeft.particleSystemFast")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackRight#node", "Hoof node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemSlow#node", "Slow step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemSlow#particleType", "Slow step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemSlow")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemFast#node", "Fast step particle emitterShape")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemFast#particleType", "Fast step particle type")
  ParticleUtil.registerParticleCopyXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.modelInfo.hoofBackRight.particleSystemFast")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#animationNode", "Animation node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#meshNode", "Mesh node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#equipmentNode", "Equipment node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#reinsNode", "Reins node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#reinLeftNode", "Rein left node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.rideable.modelInfo#reinRightNode", "Rein right node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable.sounds#breathIntervalNoEffort", "Breath interval no effort", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable.sounds#breathIntervalEffort", "Breath interval effort", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable.sounds#minBreathIntervalIdle", "Min. breath interval idle", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.rideable.sounds#maxBreathIntervalIdle", "Max. breath interval idle", 1)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.sounds", "halt")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.sounds", "breathingNoEffort")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.rideable.sounds", "breathingEffort")
  function(v0)
    v1:register(XMLValueType.STRING, v0 .. ".item(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#entryTransitionDuration", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#exitTransitionDuration", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#speedScaleType", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips#speedScaleParameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).clips#blended", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameter", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameterType", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#clipName", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips.clip(?)#blendingThreshold", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#parameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#equal", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#between", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#greater", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#lower", "")
  end("vehicle.conditionalAnimation")
  function(v0)
    v1:register(XMLValueType.STRING, v0 .. ".item(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#entryTransitionDuration", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#exitTransitionDuration", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#speedScaleType", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips#speedScaleParameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).clips#blended", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameter", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameterType", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#clipName", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips.clip(?)#blendingThreshold", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#parameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#equal", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#between", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#greater", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#lower", "")
  end("vehicle.riderConditionalAnimation")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).rideable#animalType", "Animal type name")
end
function Rideable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getIsRideableJumpAllowed", Rideable.getIsRideableJumpAllowed)
  SpecializationUtil.registerFunction(vehicleType, "jump", Rideable.jump)
  SpecializationUtil.registerFunction(vehicleType, "setCurrentGait", Rideable.setCurrentGait)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentGait", Rideable.getCurrentGait)
  SpecializationUtil.registerFunction(vehicleType, "setRideableSteer", Rideable.setRideableSteer)
  SpecializationUtil.registerFunction(vehicleType, "resetInputs", Rideable.resetInputs)
  SpecializationUtil.registerFunction(vehicleType, "updateKinematic", Rideable.updateKinematic)
  SpecializationUtil.registerFunction(vehicleType, "testCCTMove", Rideable.testCCTMove)
  SpecializationUtil.registerFunction(vehicleType, "updateAnimation", Rideable.updateAnimation)
  SpecializationUtil.registerFunction(vehicleType, "updateSound", Rideable.updateSound)
  SpecializationUtil.registerFunction(vehicleType, "updateRiding", Rideable.updateRiding)
  SpecializationUtil.registerFunction(vehicleType, "updateDirt", Rideable.updateDirt)
  SpecializationUtil.registerFunction(vehicleType, "calculateLegsDistance", Rideable.calculateLegsDistance)
  SpecializationUtil.registerFunction(vehicleType, "setWorldPositionQuat", Rideable.setWorldPositionQuat)
  SpecializationUtil.registerFunction(vehicleType, "updateFootsteps", Rideable.updateFootsteps)
  SpecializationUtil.registerFunction(vehicleType, "getPosition", Rideable.getPosition)
  SpecializationUtil.registerFunction(vehicleType, "getRotation", Rideable.getRotation)
  SpecializationUtil.registerFunction(vehicleType, "setEquipmentVisibility", Rideable.setEquipmentVisibility)
  SpecializationUtil.registerFunction(vehicleType, "getHoofSurfaceSound", Rideable.getHoofSurfaceSound)
  SpecializationUtil.registerFunction(vehicleType, "groundRaycastCallback", Rideable.groundRaycastCallback)
  SpecializationUtil.registerFunction(vehicleType, "unlinkReins", Rideable.unlinkReins)
  SpecializationUtil.registerFunction(vehicleType, "updateInputText", Rideable.updateInputText)
  SpecializationUtil.registerFunction(vehicleType, "setPlayerToEnter", Rideable.setPlayerToEnter)
  SpecializationUtil.registerFunction(vehicleType, "endFade", Rideable.endFade)
  SpecializationUtil.registerFunction(vehicleType, "setCluster", Rideable.setCluster)
  SpecializationUtil.registerFunction(vehicleType, "getCluster", Rideable.getCluster)
end
function Rideable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadPositionUpdateStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onWritePositionUpdateStream", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateInterpolation", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", Rideable)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleCharacterChanged", Rideable)
end
function Rideable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPosition", Rideable.setWorldPosition)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPositionQuaternion", Rideable.setWorldPositionQuaternion)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateVehicleSpeed", Rideable.updateVehicleSpeed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getName", Rideable.getName)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFullName", Rideable.getFullName)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeReset", Rideable.getCanBeReset)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getMapHotspotRotation", Rideable.getMapHotspotRotation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShowInVehiclesOverview", Rideable.getShowInVehiclesOverview)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "periodChanged", Rideable.periodChanged)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "dayChanged", Rideable.dayChanged)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getImageFilename", Rideable.getImageFilename)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "showInfo", Rideable.showInfo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "deleteVehicleCharacter", Rideable.deleteVehicleCharacter)
end
function Rideable:onLoad(savegame)
  self.highPrecisionPositionSynchronization = true
  self.spec_rideable.leaveTimer = 15000
  self.spec_rideable.currentDirtScale = 0
  local v3 = v3:getValue("horseAbandonTimerDuration")
  self.spec_rideable.abandonTimerDuration = v3
  self.spec_rideable.abandonTimer = self.spec_rideable.abandonTimerDuration
  self.spec_rideable.fadeDuration = 400
  self.spec_rideable.isRideableRemoved = false
  self.spec_rideable.justSpawned = true
  self.spec_rideable.meshNode = nil
  self.spec_rideable.animationNode = nil
  self.spec_rideable.charsetId = nil
  self.spec_rideable.animationPlayer = nil
  self.spec_rideable.animationParameters = {forwardVelocity = {id = 1, value = 0, ["type"] = 1}, verticalVelocity = {id = 2, value = 0, ["type"] = 1}, yawVelocity = {id = 3, value = 0, ["type"] = 1}, absForwardVelocity = {id = 4, value = 0, ["type"] = 1}, onGround = {id = 5, value = false, ["type"] = 0}, inWater = {id = 6, value = false, ["type"] = 0}, closeToGround = {id = 7, value = false, ["type"] = 0}, leftRightWeight = {id = 8, value = 0, ["type"] = 1}, absYawVelocity = {id = 9, value = 0, ["type"] = 1}, halted = {id = 10, value = false, ["type"] = 0}, smoothedForwardVelocity = {id = 11, value = 0, ["type"] = 1}, absSmoothedForwardVelocity = {id = 12, value = 0, ["type"] = 1}}
  self.spec_rideable.acceletateEventId = ""
  self.spec_rideable.brakeEventId = ""
  self.spec_rideable.steerEventId = ""
  self.spec_rideable.jumpEventId = ""
  self.spec_rideable.currentTurnAngle = 0
  self.spec_rideable.currentTurnSpeed = 0
  self.spec_rideable.currentSpeed = 0
  self.spec_rideable.currentSpeedY = 0
  self.spec_rideable.cctMoveQueue = {}
  self.spec_rideable.currentCCTPosX = 0
  self.spec_rideable.currentCCTPosY = 0
  self.spec_rideable.currentCCTPosZ = 0
  self.spec_rideable.lastCCTPosX = 0
  self.spec_rideable.lastCCTPosY = 0
  self.spec_rideable.lastCCTPosZ = 0
  self.spec_rideable.topSpeeds = {}
  local v5 = v5:getValue("vehicle.rideable#speedBackwards", -1)
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.BACKWARDS] = v5
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.STILL] = 0
  v5 = v5:getValue("vehicle.rideable#speedWalk", 2.5)
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.WALK] = v5
  v5 = v5:getValue("vehicle.rideable#speedCanter", 3.5)
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.CANTER] = v5
  v5 = v5:getValue("vehicle.rideable#speedTrot", 5)
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.TROT] = v5
  v5 = v5:getValue("vehicle.rideable#speedGallop", 10)
  self.spec_rideable.topSpeeds[Rideable.GAITTYPES.GALLOP] = v5
  self.spec_rideable.minTurnRadius = {}
  v5 = v5:getValue("vehicle.rideable#minTurnRadiusBackwards", 1)
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.BACKWARDS] = v5
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.STILL] = 1
  v5 = v5:getValue("vehicle.rideable#minTurnRadiusWalk", 1)
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.WALK] = v5
  v5 = v5:getValue("vehicle.rideable#minTurnRadiusCanter", 2.5)
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.CANTER] = v5
  v5 = v5:getValue("vehicle.rideable#minTurnRadiusTrot", 5)
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.TROT] = v5
  v5 = v5:getValue("vehicle.rideable#minTurnRadiusGallop", 10)
  self.spec_rideable.minTurnRadius[Rideable.GAITTYPES.GALLOP] = v5
  self.spec_rideable.groundRaycastResult = {y = 0, object = nil, distance = 0}
  self.spec_rideable.haltTimer = 0
  self.spec_rideable.smoothedLeftRightWeight = 0
  self.spec_rideable.interpolationDt = 16
  self.spec_rideable.ridingTimer = 0
  self.spec_rideable.doHusbandryCheck = 0
  v3 = v3:getValue("vehicle.rideable#proxy", nil, self.components, self.i3dMappings)
  self.spec_rideable.proxy = v3
  if self.spec_rideable.proxy ~= nil then
    setRigidBodyType(self.spec_rideable.proxy, RigidBodyType.NONE)
  end
  v3 = getCollisionMask(self.components[1].node)
  v2.collisionMask = v3
  v2.maxAcceleration = 5
  v2.maxDeceleration = 10
  v2.gravity = -18.8
  v2.frontCheckDistance = 0
  v2.backCheckDistance = 0
  v2.isOnGround = true
  v2.isCloseToGround = true
  if v2.topSpeeds[Rideable.GAITTYPES.MIN] >= v2.topSpeeds[Rideable.GAITTYPES.MAX] then
  end
  assert(true)
  v3 = v3:getValue("vehicle.rideable#turnSpeed", 45)
  v2.maxTurnSpeed = v3
  v3 = v3:getValue("vehicle.rideable#jumpHeight", 2)
  v2.jumpHeight = v3
  v2.hooves = {}
  function(self, savegame, v2)
    local v4 = v4:getValue(v2 .. "#node", nil, u0.components, u0.i3dMappings)
    v4 = v4:getValue(v2 .. ".particleSystemSlow#node", nil, u0.components, u0.i3dMappings)
    local v5 = v5:getValue(v2 .. ".particleSystemSlow#particleType")
    if v5 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step slow particleType in '%s'", v2 .. ".particleSystemSlow")
      return
    end
    local v6 = v6:getParticleSystem(v5)
    if v6 ~= nil then
      local v7 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemSlow", v6, v4)
      v3.psSlow = v7
      local v8 = getRootNode()
      link(v8, v3.psSlow.emitterShape)
    end
    v7 = v7:getValue(v2 .. ".particleSystemFast#node", nil, u0.components, u0.i3dMappings)
    v8 = v8:getValue(v2 .. ".particleSystemFast#particleType")
    if v8 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step fast particleType in '%s'", v2 .. ".particleSystemFast")
      return
    end
    local v9 = v9:getParticleSystem(v8)
    if v9 ~= nil then
      local v10 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemFast", v9, v7)
      v3.psFast = v10
      local v11 = getRootNode()
      link(v11, v3.psFast.emitterShape)
    end
    self[savegame] = v3
  end(v2.hooves, Rideable.HOOVES.FRONT_LEFT, "vehicle.rideable.modelInfo.hoofFrontLeft")
  function(self, savegame, v2)
    local v4 = v4:getValue(v2 .. "#node", nil, u0.components, u0.i3dMappings)
    v4 = v4:getValue(v2 .. ".particleSystemSlow#node", nil, u0.components, u0.i3dMappings)
    local v5 = v5:getValue(v2 .. ".particleSystemSlow#particleType")
    if v5 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step slow particleType in '%s'", v2 .. ".particleSystemSlow")
      return
    end
    local v6 = v6:getParticleSystem(v5)
    if v6 ~= nil then
      local v7 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemSlow", v6, v4)
      v3.psSlow = v7
      local v8 = getRootNode()
      link(v8, v3.psSlow.emitterShape)
    end
    v7 = v7:getValue(v2 .. ".particleSystemFast#node", nil, u0.components, u0.i3dMappings)
    v8 = v8:getValue(v2 .. ".particleSystemFast#particleType")
    if v8 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step fast particleType in '%s'", v2 .. ".particleSystemFast")
      return
    end
    local v9 = v9:getParticleSystem(v8)
    if v9 ~= nil then
      local v10 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemFast", v9, v7)
      v3.psFast = v10
      local v11 = getRootNode()
      link(v11, v3.psFast.emitterShape)
    end
    self[savegame] = v3
  end(v2.hooves, Rideable.HOOVES.FRONT_RIGHT, "vehicle.rideable.modelInfo.hoofFrontRight")
  function(self, savegame, v2)
    local v4 = v4:getValue(v2 .. "#node", nil, u0.components, u0.i3dMappings)
    v4 = v4:getValue(v2 .. ".particleSystemSlow#node", nil, u0.components, u0.i3dMappings)
    local v5 = v5:getValue(v2 .. ".particleSystemSlow#particleType")
    if v5 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step slow particleType in '%s'", v2 .. ".particleSystemSlow")
      return
    end
    local v6 = v6:getParticleSystem(v5)
    if v6 ~= nil then
      local v7 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemSlow", v6, v4)
      v3.psSlow = v7
      local v8 = getRootNode()
      link(v8, v3.psSlow.emitterShape)
    end
    v7 = v7:getValue(v2 .. ".particleSystemFast#node", nil, u0.components, u0.i3dMappings)
    v8 = v8:getValue(v2 .. ".particleSystemFast#particleType")
    if v8 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step fast particleType in '%s'", v2 .. ".particleSystemFast")
      return
    end
    local v9 = v9:getParticleSystem(v8)
    if v9 ~= nil then
      local v10 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemFast", v9, v7)
      v3.psFast = v10
      local v11 = getRootNode()
      link(v11, v3.psFast.emitterShape)
    end
    self[savegame] = v3
  end(v2.hooves, Rideable.HOOVES.BACK_LEFT, "vehicle.rideable.modelInfo.hoofBackLeft")
  function(self, savegame, v2)
    local v4 = v4:getValue(v2 .. "#node", nil, u0.components, u0.i3dMappings)
    v4 = v4:getValue(v2 .. ".particleSystemSlow#node", nil, u0.components, u0.i3dMappings)
    local v5 = v5:getValue(v2 .. ".particleSystemSlow#particleType")
    if v5 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step slow particleType in '%s'", v2 .. ".particleSystemSlow")
      return
    end
    local v6 = v6:getParticleSystem(v5)
    if v6 ~= nil then
      local v7 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemSlow", v6, v4)
      v3.psSlow = v7
      local v8 = getRootNode()
      link(v8, v3.psSlow.emitterShape)
    end
    v7 = v7:getValue(v2 .. ".particleSystemFast#node", nil, u0.components, u0.i3dMappings)
    v8 = v8:getValue(v2 .. ".particleSystemFast#particleType")
    if v8 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing horse step fast particleType in '%s'", v2 .. ".particleSystemFast")
      return
    end
    local v9 = v9:getParticleSystem(v8)
    if v9 ~= nil then
      local v10 = ParticleUtil.copyParticleSystem(u0.xmlFile, v2 .. ".particleSystemFast", v9, v7)
      v3.psFast = v10
      local v11 = getRootNode()
      link(v11, v3.psFast.emitterShape)
    end
    self[savegame] = v3
  end(v2.hooves, Rideable.HOOVES.BACK_RIGHT, "vehicle.rideable.modelInfo.hoofBackRight")
  local v4 = self:calculateLegsDistance(v2.hooves[Rideable.HOOVES.FRONT_LEFT].node, v2.hooves[Rideable.HOOVES.FRONT_RIGHT].node)
  v2.frontCheckDistance = v4
  v4 = self:calculateLegsDistance(v2.hooves[Rideable.HOOVES.BACK_LEFT].node, v2.hooves[Rideable.HOOVES.BACK_RIGHT].node)
  v2.backCheckDistance = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#animationNode", nil, self.components, self.i3dMappings)
  v2.animationNode = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#meshNode", nil, self.components, self.i3dMappings)
  v2.meshNode = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#equipmentNode", nil, self.components, self.i3dMappings)
  v2.equipmentNode = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#reinsNode", nil, self.components, self.i3dMappings)
  v2.reinsNode = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#reinLeftNode", nil, self.components, self.i3dMappings)
  v2.leftReinNode = v4
  v4 = v4:getValue("vehicle.rideable.modelInfo#reinRightNode", nil, self.components, self.i3dMappings)
  v2.rightReinNode = v4
  v4 = getParent(v2.leftReinNode)
  v2.leftReinParentNode = v4
  v4 = getParent(v2.rightReinNode)
  v2.rightReinParentNode = v4
  if v2.animationNode ~= nil then
    v4 = getAnimCharacterSet(v2.animationNode)
    v2.charsetId = v4
    v4 = createConditionalAnimation()
    if v4 ~= 0 then
      v2.animationPlayer = v4
      for v8, v9 in pairs(v2.animationParameters) do
        conditionalAnimationRegisterParameter(v2.animationPlayer, v9.id, v9["type"], v8)
      end
      initConditionalAnimation(v2.animationPlayer, v2.charsetId, self.configFileName, "vehicle.conditionalAnimation")
      setConditionalAnimationSpecificParameterIds(v2.animationPlayer, v2.animationParameters.absForwardVelocity.id, v2.animationParameters.absYawVelocity.id)
    end
  end
  v2.surfaceSounds = {}
  v2.surfaceIdToSound = {}
  v2.surfaceNameToSound = {}
  v2.currentSurfaceSound = nil
  for v7, v8 in pairs(g_currentMission.surfaceSounds) do
    if not (v8["type"] == "hoofstep") then
      continue
    end
    if not (v8.sample ~= nil) then
      continue
    end
    v9 = v9:cloneSample(v8.sample, self.components[1].node, self)
    v9.sampleName = v8.name
    table.insert(v2.surfaceSounds, v9)
    v2.surfaceIdToSound[v8.materialId] = v9
    v2.surfaceNameToSound[v8.name] = v9
  end
  v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.rideable.sounds", "halt", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
  v2.horseStopSound = v4
  v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.rideable.sounds", "breathingNoEffort", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
  v2.horseBreathSoundsNoEffort = v4
  v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.rideable.sounds", "breathingEffort", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
  v2.horseBreathSoundsEffort = v4
  v5 = v5:getValue("vehicle.rideable.sounds#breathIntervalNoEffort", 1)
  v2.horseBreathIntervalNoEffort = v5 * 1000
  v5 = v5:getValue("vehicle.rideable.sounds#breathIntervalEffort", 1)
  v2.horseBreathIntervalEffort = v5 * 1000
  v5 = v5:getValue("vehicle.rideable.sounds#minBreathIntervalIdle", 1)
  v2.horseBreathMinIntervalIdle = v5 * 1000
  v5 = v5:getValue("vehicle.rideable.sounds#maxBreathIntervalIdle", 1)
  v2.horseBreathMaxIntervalIdle = v5 * 1000
  v2.currentBreathTimer = 0
  v2.inputValues = {axisSteer = 0, axisSteerSend = 0, currentGait = Rideable.GAITTYPES.STILL}
  self:resetInputs()
  v4 = InterpolatorValue.new(0)
  v2.interpolatorIsOnGround = v4
  if self.isServer then
    v4 = InterpolatorAngle.new(0)
    v2.interpolatorTurnAngle = v4
    self.networkTimeInterpolator.maxInterpolationAlpha = 1.2
  end
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
  if savegame ~= nil then
    v6 = savegame.xmlFile:getString(savegame.key .. ".rideable" .. "#subType", "HORSE_GRAY")
    v7 = v7:getSubTypeByName(v6)
    if v7 ~= nil then
      v8 = v8:createClusterFromSubTypeIndex(v7.subTypeIndex)
      v8:loadFromXMLFile(savegame.xmlFile, savegame.key .. ".rideable" .. ".animal")
      self:setCluster(v8)
    else
      Logging.xmlError(self.xmlFile, "No animal sub type found!", v2.fillUnitIndex)
      self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
      return
    end
  end
  v4:addRideable(self)
end
function Rideable:onLoadFinished()
  self:raiseActive()
end
function Rideable:setWorldPosition(superFunc, x, y, z, xRot, yRot, zRot, i, changeInterp)
  superFunc(self, x, y, z, xRot, yRot, zRot, i, changeInterp)
  if self.isServer and i == 1 then
    local v11, v12, v13 = localDirectionToWorld(self.rootNode, 0, 0, 1)
    local v14 = MathUtil.getYRotationFromDirection(v11, v13)
    self.spec_rideable.currentTurnAngle = v14
    if changeInterp then
      v14:setAngle(self.spec_rideable.currentTurnAngle)
    end
  end
end
function Rideable:setWorldPositionQuaternion(superFunc, x, y, z, qx, qy, qz, qw, i, changeInterp)
  superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
  if self.isServer and i == 1 then
    local v12, v13, v14 = localDirectionToWorld(self.rootNode, 0, 0, 1)
    local v15 = MathUtil.getYRotationFromDirection(v12, v14)
    self.spec_rideable.currentTurnAngle = v15
    if changeInterp then
      v15:setAngle(self.spec_rideable.currentTurnAngle)
    end
  end
end
function Rideable:updateVehicleSpeed(superFunc, dt)
  if self.isServer then
    superFunc(self, self.spec_rideable.interpolationDt)
    return
  end
  superFunc(self, dt)
end
function Rideable:calculateLegsDistance(leftLegNode, rightLegNode)
  if leftLegNode ~= nil and rightLegNode ~= nil then
    local v4, v5, v6 = localToLocal(leftLegNode, self.rootNode, 0, 0, 0)
    local v7, v8, v9 = localToLocal(rightLegNode, self.rootNode, 0, 0, 0)
  end
  return v3
end
function Rideable:onDelete()
  v2:removeRideable(self)
  v2:deleteSamples(self.spec_rideable.surfaceSounds)
  v2:deleteSample(self.spec_rideable.horseStopSound)
  v2:deleteSample(self.spec_rideable.horseBreathSoundsNoEffort)
  v2:deleteSample(self.spec_rideable.horseBreathSoundsEffort)
  if self.spec_rideable.hooves ~= nil then
    for v5, v6 in pairs(self.spec_rideable.hooves) do
      if v6.psSlow ~= nil then
        ParticleUtil.deleteParticleSystem(v6.psSlow)
        delete(v6.psSlow.emitterShape)
      end
      if not (v6.psFast ~= nil) then
        continue
      end
      ParticleUtil.deleteParticleSystem(v6.psFast)
      delete(v6.psFast.emitterShape)
    end
  end
  if v1.animationPlayer ~= nil then
    delete(v1.animationPlayer)
    v1.animationPlayer = nil
  end
end
function Rideable:onReadStream(streamId, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v5:setValue(1)
    else
      v5:setValue(0)
    end
  end
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_SUB_TYPE)
    local v5 = v5:createClusterFromSubTypeIndex(v4)
    v5:readStream(streamId, connection)
    self:setCluster(v5)
  end
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = NetworkUtil.readNodeObject(streamId)
    self:setPlayerToEnter(v4)
  end
end
function Rideable:onWriteStream(streamId, connection)
  local v4 = connection:getIsServer()
  if not v4 then
    streamWriteBool(streamId, self.spec_rideable.isOnGround)
  end
  if v3.cluster == nil then
  end
  v4 = v4(v5, true)
  if v4 then
    local v6 = v6:getSubTypeIndex()
    streamWriteUIntN(streamId, v6, AnimalCluster.NUM_BITS_SUB_TYPE)
    v4:writeStream(streamId, connection)
  end
  if v3.playerToEnter == nil then
  end
  v4 = v4(v5, true)
  if v4 then
    NetworkUtil.writeNodeObject(streamId, v3.playerToEnter)
  end
end
function Rideable:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if not v5 then
    local v6 = streamReadFloat32(streamId)
    self.spec_rideable.inputValues.axisSteer = v6
    v6 = streamReadUInt8(streamId)
    self.spec_rideable.inputValues.currentGait = v6
    return
  end
  v5 = streamReadFloat32(streamId)
  v4.haltTimer = v5
  if 0 < v4.haltTimer then
    v4.inputValues.currentGait = Rideable.GAITTYPES.STILL
    v4.inputValues.axisSteerSend = 0
  end
  v5 = streamReadBool(streamId)
  if v5 then
    v5:readUpdateStream(streamId, connection)
    self:updateDirt()
  end
end
function Rideable:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if v5 then
    streamWriteFloat32(streamId, self.spec_rideable.inputValues.axisSteerSend)
    streamWriteUInt8(streamId, self.spec_rideable.inputValues.currentGait)
    return
  end
  streamWriteFloat32(streamId, v4.haltTimer)
  if v4.cluster == nil then
  end
  v5 = v5(v6, true)
  if v5 then
    v5:writeUpdateStream(streamId, connection)
  end
end
function Rideable:onReadPositionUpdateStream(streamId, connection)
  local isOnGround = streamReadBool(streamId)
  if isOnGround then
    v5:setValue(1)
    return
  end
  v5:setValue(0)
end
function Rideable:onWritePositionUpdateStream(streamId, connection, dirtyMask)
  streamWriteBool(streamId, self.spec_rideable.isOnGround)
end
function Rideable.endFade(v0)
end
function Rideable:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_rideable.cluster ~= nil then
    local v6 = v6:getSubTypeIndex()
    local v7 = g_currentMission.animalSystem:getSubTypeByIndex(v6)
    xmlFile:setString(key .. "#subType", v7.name)
    v8:saveToXMLFile(xmlFile, key .. ".animal", usedModNames)
  end
end
function Rideable:setCluster(cluster)
  self.spec_rideable.cluster = cluster
  if cluster ~= nil then
    local subTypeIndex = cluster:getSubTypeIndex()
    local v8 = cluster:getAge()
    local v5 = g_currentMission.animalSystem:getVisualByAge(...)
    I3DUtil.setShaderParameterRec(self.spec_rideable.meshNode, "atlasInvSizeAndOffsetUV", nil, nil, v5.visualAnimal.variations[1].tileUIndex / v5.visualAnimal.variations[1].numTilesU, v5.visualAnimal.variations[1].tileVIndex / v5.visualAnimal.variations[1].numTilesV)
    self:updateDirt()
  end
end
function Rideable:updateDirt()
  if Platform.gameplay.needHorseCleaning and self.spec_rideable.cluster ~= nil and self.spec_rideable.cluster.getDirtFactor ~= nil then
    local v4 = self.spec_rideable.cluster:getDirtFactor()
  end
  I3DUtil.setShaderParameterRec(v1.meshNode, "RDT", nil, v3, nil, nil)
end
function Rideable:getCluster()
  return self.spec_rideable.cluster
end
function Rideable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_rideable.playerToEnter ~= nil and self.spec_rideable.checkPlayerToEnter and self.spec_rideable.playerToEnter == g_currentMission.player then
    isEntered:requestToEnterVehicle(self)
    self.spec_rideable.checkPlayerToEnter = false
  end
  local isEntered = self:getIsEntered()
  if isEntered then
    if isActiveForInputIgnoreSelection then
      self:updateInputText()
    end
    if not self.isServer then
      v5.inputValues.axisSteerSend = v5.inputValues.axisSteer
      self:raiseDirtyFlags(v5.dirtyFlag)
      self:resetInputs()
    end
  end
  self:updateAnimation(dt)
  if self.isClient then
    self:updateSound(dt)
  end
  if self.isServer then
    self:updateRiding(dt)
  end
  if 0 < v5.haltTimer then
    self:setCurrentGait(Rideable.GAITTYPES.STILL)
    v5.haltTimer = v5.haltTimer - dt
  end
  local v7 = self:getIsActiveForInput(true)
  if v7 then
    v7 = v7:getInputHelpMode()
    if v7 == GS_INPUT_HELP_MODE_GAMEPAD then
      -- if not GS_PLATFORM_SWITCH then goto L126 end
    end
    local v8 = v8:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
    if v8 then
      local v8, v9, v10 = getGravityDirection()
      local v11 = MathUtil.getSteeringAngleFromDeviceGravity(v8, v9, v10)
      self:setRideableSteer(v11)
    end
  end
  if self.isServer and 0 < v5.doHusbandryCheck then
    v5.doHusbandryCheck = v5.doHusbandryCheck - dt
    v7, v8 = v7:getHusbandryInRideableRange(self)
    if v7 then
      if v8 ~= nil then
        v10 = self:getCluster()
        v8:addCluster(v10)
        v11:removeVehicle(self)
      else
      end
      if v5.lastOwner ~= nil then
        local v14 = v14:getName()
        local v12 = RideableStableNotificationEvent.new(...)
        v10:sendEvent(v12, nil, true)
      end
    end
    v5.lastOwner = nil
  end
end
function Rideable:onUpdateInterpolation(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    local v6 = self:getIsControlled()
    if not v6 then
      self:setCurrentGait(Rideable.GAITTYPES.STILL)
    end
    if v5.cctMoveQueue[1] ~= nil then
      local v8 = getIsPhysicsUpdateIndexSimulated(v5.cctMoveQueue[1].physicsIndex)
      if v8 then
      end
    end
    v5.interpolationDt = v6
    self:testCCTMove(v6)
    self:updateKinematic(dt)
    v8 = self:getIsEntered()
    if v8 then
      self:resetInputs()
    end
    local v9, v10, v11 = self:getCCTWorldTranslation()
    v12:setTargetPosition(v9, v10, v11)
    v12:setTargetAngle(v5.currentTurnAngle)
    local v15 = self:getIsCCTOnGround()
    if v15 then
    else
    end
    v12:setTargetValue(v14)
    v13:startNewPhase(v6 + 30)
    v13:update(v6)
    local v13, v14, v15 = v13:getInterpolatedValues(self.networkTimeInterpolator.interpolationAlpha)
    setTranslation(self.rootNode, v13, v14, v15)
    v13 = v13:getInterpolatedValue(self.networkTimeInterpolator.interpolationAlpha)
    local v14, v15, v16 = localDirectionToWorld(self.rootNode, 0, 0, 1)
    local v19 = math.sin(v13)
    local v18 = math.cos(v13)
    local v22 = math.min(v15 * v15, 0.9)
    v19 = math.sqrt(1 - v22)
    setDirection(self.rootNode, v19 * v19, v15, v18 * v19, 0, 1, 0)
  end
  v6 = self:getIsEntered()
  if not v6 and 0 < v5.leaveTimer then
    v5.leaveTimer = v5.leaveTimer - dt
    self:raiseActive()
  end
  v8 = v8:getAlpha()
  v6 = v6:getInterpolatedValue(...)
  if 0.9 >= v6 then
  end
  v5.isOnGround = true
  v5.isCloseToGround = false
  if v5.isOnGround then
    local v7 = math.abs(v5.currentSpeed)
    if 0.001 >= v7 then
      v7 = math.abs(v5.currentTurnSpeed)
      -- if 0.001 >= v7 then goto L365 end
    end
    v7, v8, v9 = getWorldTranslation(self.rootNode)
    local v10, v11, v12 = localDirectionToWorld(self.rootNode, 0, 0, 1)
    v5.groundRaycastResult.y = v8 + v11 * v5.frontCheckDistance + Rideable.GROUND_RAYCAST_OFFSET - Rideable.GROUND_RAYCAST_MAXDISTANCE
    raycastClosest(v7 + v10 * v5.frontCheckDistance, v8 + v11 * v5.frontCheckDistance + Rideable.GROUND_RAYCAST_OFFSET, v9 + v12 * v5.frontCheckDistance, 0, -1, 0, "groundRaycastCallback", Rideable.GROUND_RAYCAST_MAXDISTANCE, self, Rideable.GROUND_RAYCAST_COLLISIONMASK)
    v5.groundRaycastResult.y = v8 + v11 * v5.backCheckDistance + Rideable.GROUND_RAYCAST_OFFSET - Rideable.GROUND_RAYCAST_MAXDISTANCE
    raycastClosest(v7 + v10 * v5.backCheckDistance, v8 + v11 * v5.backCheckDistance + Rideable.GROUND_RAYCAST_OFFSET, v9 + v12 * v5.backCheckDistance, 0, -1, 0, "groundRaycastCallback", Rideable.GROUND_RAYCAST_MAXDISTANCE, self, Rideable.GROUND_RAYCAST_COLLISIONMASK)
    setDirection(self.rootNode, v7 + v10 * v5.frontCheckDistance - v7 + v10 * v5.backCheckDistance, v5.groundRaycastResult.y - v5.groundRaycastResult.y, v9 + v12 * v5.frontCheckDistance - v9 + v12 * v5.backCheckDistance, 0, 1, 0)
    return
  end
  v7, v8, v9 = getWorldTranslation(self.rootNode)
  v5.groundRaycastResult.distance = Rideable.GROUND_RAYCAST_MAXDISTANCE
  raycastClosest(v7, v8, v9, 0, -1, 0, "groundRaycastCallback", Rideable.GROUND_RAYCAST_MAXDISTANCE, self, Rideable.GROUND_RAYCAST_COLLISIONMASK)
  if v5.groundRaycastResult.distance >= 1.25 then
  end
  v5.isCloseToGround = true
end
function Rideable:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if isActiveForInputIgnoreSelection and self.spec_rideable.cluster ~= nil then
    local v9 = v9:getText("infohud_riding")
    local v11 = v11:getRidingFactor()
    local v7 = string.format("%s: %d %%", v9, v11 * 100)
    v5:addExtraPrintText(...)
  end
end
function Rideable:onSetBroken()
  self:unlinkReins()
end
function Rideable:testCCTMove(dt)
  self.spec_rideable.lastCCTPosX = self.spec_rideable.currentCCTPosX
  self.spec_rideable.lastCCTPosY = self.spec_rideable.currentCCTPosY
  self.spec_rideable.lastCCTPosZ = self.spec_rideable.currentCCTPosZ
  local v3, v4, v5 = getWorldTranslation(self.spec_cctdrivable.cctNode)
  self.spec_rideable.currentCCTPosX = v3
  self.spec_rideable.currentCCTPosY = v4
  self.spec_rideable.currentCCTPosZ = v5
  while true do
    if not (v2.cctMoveQueue[1] ~= nil) then
      break
    end
    v5 = getIsPhysicsUpdateIndexSimulated(v2.cctMoveQueue[1].physicsIndex)
    if not v5 then
      break
    end
    table.remove(v2.cctMoveQueue, 1)
  end
  v5 = math.sqrt(v3 * v3 + v4 * v4)
  if 0.001 * dt < v5 then
    local v8 = math.sqrt((v2.currentCCTPosX - v2.lastCCTPosX) * (v2.currentCCTPosX - v2.lastCCTPosX) + (v2.currentCCTPosZ - v2.lastCCTPosZ) * (v2.currentCCTPosZ - v2.lastCCTPosZ))
    if v8 <= v5 * 0.7 and v2.haltTimer <= 0 then
      self:setCurrentGait(Rideable.GAITTYPES.STILL)
      v2.haltTimer = 900
      if v2.horseStopSound ~= nil then
        v9:playSample(v2.horseStopSound)
      end
    end
  end
end
function Rideable:getIsRideableJumpAllowed(allowWhileJump)
  if not self.spec_rideable.isOnGround and not allowWhileJump then
    return false
  end
  if v2.inputValues.currentGait < Rideable.GAITTYPES.CANTER then
    return false
  end
  if self.isBroken then
    return false
  end
  return true
end
function Rideable:jump()
  if not self.isServer then
    local v2 = v2:getServerConnection()
    local v4 = JumpEvent.new(self)
    v2:sendEvent(...)
  else
    v4 = self:getOwnerFarmId()
    local v2, v3 = v2:updateFarmStats(v4, "horseJumpCount", 1)
    if v2 ~= nil then
      v4:tryUnlock("HorseJumpsFirst", v2)
      v4:tryUnlock("HorseJumps", v2)
    end
  end
  v2 = math.sqrt(-2 * v1.gravity * v1.jumpHeight)
  v1.currentSpeedY = v2
end
function Rideable:setCurrentGait(gait)
  self.spec_rideable.inputValues.currentGait = gait
end
function Rideable:getCurrentGait()
  return self.spec_rideable.inputValues.currentGait
end
function Rideable:setRideableSteer(axisSteer)
  if axisSteer ~= 0 then
    self.spec_rideable.inputValues.axisSteer = -axisSteer
  end
end
function Rideable:resetInputs()
  self.spec_rideable.inputValues.axisSteer = 0
end
function Rideable:updateKinematic(dt)
  if self.spec_rideable.topSpeeds[self.spec_rideable.inputValues.currentGait] == 0 then
  end
  if not v2.isOnGround then
  end
  local v7 = MathUtil.clamp(v4 - v2.currentSpeed, -v5, v5)
  if v2.haltTimer <= 0 then
    v2.currentSpeed = v2.currentSpeed + v7
  else
    v2.currentSpeed = 0
  end
  v2.currentSpeedY = v2.currentSpeedY + v2.gravity * v3
  local v14 = MathUtil.clamp((v2.topSpeeds[Rideable.GAITTYPES.MAX] - v2.currentSpeed) / (v2.topSpeeds[Rideable.GAITTYPES.MAX] - v2.topSpeeds[Rideable.GAITTYPES.WALK]), 0, 1)
  if not v2.isOnGround then
  end
  if self.isServer then
    local v13 = self:getIsEntered()
    if not v13 then
      v13 = self:getIsControlled()
      if not v13 and v2.inputValues.axisSteer ~= 0 then
        v2.inputValues.axisSteer = 0
      end
    end
  end
  local v15 = MathUtil.clamp(v2.maxTurnSpeed * v2.inputValues.axisSteer - v2.currentTurnSpeed, -v12, v12)
  v2.currentTurnSpeed = v2.currentTurnSpeed + v15
  if 0 <= v7 then
  else
  end
  v2.currentTurnAngle = v16 + v18 * v19
  local v17 = math.sin(v2.currentTurnAngle)
  v17 = math.cos(v2.currentTurnAngle)
  self:moveCCT(v17 * v7, v9, v17 * v7, true)
  local v20 = getPhysicsUpdateIndex()
  table.insert(v2.cctMoveQueue, {physicsIndex = v20, moveX = v17 * v7, moveY = v9, moveZ = v17 * v7, dt = dt})
end
function Rideable:groundRaycastCallback(hitObjectId, x, y, z, distance)
  if hitObjectId == self.spec_cctdrivable.cctNode then
    return true
  end
  v6.groundRaycastResult.y = y
  v6.groundRaycastResult.object = hitObjectId
  v6.groundRaycastResult.distance = distance
  return false
end
function Rideable:updateAnimation(dt)
  local v6 = MathUtil.clamp(self.lastSignedSpeedReal * 1000, self.spec_rideable.topSpeeds[Rideable.GAITTYPES.BACKWARDS], self.spec_rideable.topSpeeds[Rideable.GAITTYPES.MAX])
  v6 = MathUtil.clamp(self.lastSignedSpeed * 1000, self.spec_rideable.topSpeeds[Rideable.GAITTYPES.BACKWARDS], self.spec_rideable.topSpeeds[Rideable.GAITTYPES.MAX])
  if self.isServer then
  else
    local v8, v9, v10 = mathQuaternionRotateVector(self.components[1].networkInterpolators.quaternion.lastQuaternionX, self.components[1].networkInterpolators.quaternion.lastQuaternionY, self.components[1].networkInterpolators.quaternion.lastQuaternionZ, self.components[1].networkInterpolators.quaternion.lastQuaternionW, 0, 0, 1)
    local v11, v12, v13 = mathQuaternionRotateVector(self.components[1].networkInterpolators.quaternion.targetQuaternionX, self.components[1].networkInterpolators.quaternion.targetQuaternionY, self.components[1].networkInterpolators.quaternion.targetQuaternionZ, self.components[1].networkInterpolators.quaternion.targetQuaternionW, 0, 0, 1)
    local v14 = MathUtil.getYRotationFromDirection(v8, v10)
    local v15 = MathUtil.getYRotationFromDirection(v11, v13)
    if math.pi < v15 - v14 then
    elseif v15 - v14 < -math.pi then
    end
  end
  v10 = math.abs(v4)
  if 0.01 < v10 then
    -- TODO: structure LOP_FORNPREP (pc 191, target 205)
    v15 = math.abs(v4 - v2.topSpeeds[1])
    if v15 < math.huge then
    end
    -- TODO: structure LOP_FORNLOOP (pc 204, target 192)
  else
  end
  if v9 < v2.smoothedLeftRightWeight then
    v10 = math.max(v9, v2.smoothedLeftRightWeight - 0.002 * dt, -1)
    v2.smoothedLeftRightWeight = v10
  else
    v10 = math.min(v9, v2.smoothedLeftRightWeight + 0.002 * dt, 1)
    v2.smoothedLeftRightWeight = v10
  end
  v3.forwardVelocity.value = v4
  v11 = math.abs(v4)
  v3.absForwardVelocity.value = v11
  v3.verticalVelocity.value = v8
  v3.yawVelocity.value = v6
  v11 = math.abs(v6)
  v3.absYawVelocity.value = v11
  v3.leftRightWeight.value = v2.smoothedLeftRightWeight
  v3.onGround.value = v2.isOnGround
  v3.closeToGround.value = v2.isCloseToGround
  v3.inWater.value = self.isInWater
  if 0 >= v2.haltTimer then
  end
  v10.value = true
  v3.smoothedForwardVelocity.value = v5
  v11 = math.abs(v5)
  v3.absSmoothedForwardVelocity.value = v11
  if v2.animationPlayer ~= nil then
    for v13, v14 in pairs(v3) do
      if v14["type"] == 0 then
        setConditionalAnimationBoolValue(v2.animationPlayer, v14.id, v14.value)
      else
        if not (v14["type"] == 1) then
          continue
        end
        setConditionalAnimationFloatValue(v2.animationPlayer, v14.id, v14.value)
      end
    end
    updateConditionalAnimation(v2.animationPlayer, dt)
  end
  if self.getIsEntered ~= nil then
    v10 = self:getIsEntered()
  end
  if self.getIsControlled ~= nil then
    v11 = self:getIsControlled()
  end
  if not v10 then
    -- if not v11 then goto L438 end
  end
  v12 = self:getVehicleCharacter()
  if v12 ~= nil and v12.animationCharsetId ~= nil and v12.animationPlayer ~= nil then
    for v16, v17 in pairs(v3) do
      if v17["type"] == 0 then
        setConditionalAnimationBoolValue(v12.animationPlayer, v17.id, v17.value)
      else
        if not (v17["type"] == 1) then
          continue
        end
        setConditionalAnimationFloatValue(v12.animationPlayer, v17.id, v17.value)
      end
    end
    updateConditionalAnimation(v12.animationPlayer, dt)
  end
  v15 = math.abs(v4)
  self:updateFootsteps(...)
end
function Rideable:updateSound(dt)
  if self.spec_rideable.horseBreathSoundsEffort ~= nil and self.spec_rideable.horseBreathSoundsNoEffort ~= nil and self.spec_rideable.isOnGround then
    self.spec_rideable.currentBreathTimer = self.spec_rideable.currentBreathTimer - dt
    local v3 = math.max(self.spec_rideable.currentBreathTimer, 0)
    self.spec_rideable.currentBreathTimer = v3
    if self.spec_rideable.currentBreathTimer == 0 then
      if self.spec_rideable.inputValues.currentGait == Rideable.GAITTYPES.GALLOP then
        v3:playSample(self.spec_rideable.horseBreathSoundsEffort)
        self.spec_rideable.currentBreathTimer = self.spec_rideable.horseBreathIntervalEffort
        return
      end
      v3:playSample(v2.horseBreathSoundsNoEffort)
      if v2.inputValues.currentGait == Rideable.GAITTYPES.STILL then
        local v6 = math.random()
        v2.currentBreathTimer = v2.horseBreathMinIntervalIdle + v6 * (v2.horseBreathMaxIntervalIdle - v2.horseBreathMinIntervalIdle)
        return
      end
      v2.currentBreathTimer = v2.horseBreathIntervalNoEffort
    end
  end
end
function Rideable:setWorldPositionQuat(x, y, z, qx, qy, qz, qw, changeInterp)
  setWorldTranslation(self.rootNode, x, y, z)
  setWorldQuaternion(self.rootNode, qx, qy, qz, qw)
  if changeInterp then
    v10:setPosition(x, y, z)
    v10:setQuaternion(qx, qy, qz, qw)
  end
end
function Rideable:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_rideable.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v6, v7 = self:addActionEvent(self.spec_rideable.actionEvents, InputAction.AXIS_ACCELERATE_VEHICLE, self, Rideable.actionEventAccelerate, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_VERY_HIGH)
      v6:setActionEventTextVisibility(v7, false)
      self.spec_rideable.acceletateEventId = v7
      v6, v7 = self:addActionEvent(self.spec_rideable.actionEvents, InputAction.AXIS_BRAKE_VEHICLE, self, Rideable.actionEventBrake, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_HIGH)
      v6:setActionEventTextVisibility(v7, false)
      self.spec_rideable.brakeEventId = v7
      v6, v7 = self:addActionEvent(self.spec_rideable.actionEvents, InputAction.AXIS_MOVE_SIDE_VEHICLE, self, Rideable.actionEventSteer, false, false, true, true, nil)
      v6:setActionEventTextVisibility(v7, false)
      self.spec_rideable.steerEventId = v7
      v6, v7 = self:addActionEvent(self.spec_rideable.actionEvents, InputAction.JUMP, self, Rideable.actionEventJump, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_VERY_LOW)
      v6:setActionEventTextVisibility(v7, false)
      self.spec_rideable.jumpEventId = v7
    end
  end
end
function Rideable:onEnterVehicle(isControlling)
  if self.isClient then
    self.spec_rideable.playerToEnter = nil
    self.spec_rideable.checkPlayerToEnter = false
    self.spec_rideable.currentSpeed = 0
    self.spec_rideable.currentTurnSpeed = 0
    self:setCurrentGait(Rideable.GAITTYPES.STILL)
    self.spec_rideable.isOnGround = false
  end
  if self.isServer then
    local v3 = self:getOwner()
    v2.lastOwner = v3
    setCollisionMask(self.components[1].node, 0)
    v2.doHusbandryCheck = 0
  end
end
function Rideable:onVehicleCharacterChanged(character)
  if self.isClient then
    link(character.playerModel.thirdPersonLeftHandNode, self.spec_rideable.leftReinNode)
    link(character.playerModel.thirdPersonRightHandNode, self.spec_rideable.rightReinNode)
    setVisibility(self.spec_rideable.reinsNode, true)
    if character ~= nil and character.animationCharsetId ~= nil and character.animationPlayer ~= nil then
      for v6, v7 in pairs(self.spec_rideable.animationParameters) do
        conditionalAnimationRegisterParameter(character.animationPlayer, v7.id, v7["type"], v6)
      end
      initConditionalAnimation(character.animationPlayer, character.animationCharsetId, self.configFileName, "vehicle.riderConditionalAnimation")
      setConditionalAnimationSpecificParameterIds(character.animationPlayer, v2.animationParameters.absForwardVelocity.id, v2.animationParameters.absYawVelocity.id)
      self:setEquipmentVisibility(true)
      conditionalAnimationZeroiseTrackTimes(character.animationPlayer)
      conditionalAnimationZeroiseTrackTimes(v2.animationPlayer)
    end
    v3 = self:getIsControlled()
    if v3 then
      v3 = v3:getAlpha()
      if 0 < v3 then
        v3:fadeScreen(-1, v2.fadeDuration, self.endFade, self)
      end
    end
  end
end
function Rideable:onLeaveVehicle()
  if self.isClient then
    self.spec_rideable.inputValues.currentGait = Rideable.GAITTYPES.STILL
    self:resetInputs()
    local v2 = v2:getAlpha()
    if 0 < v2 then
      v2:fadeScreen(-1, self.spec_rideable.fadeDuration, self.endFade, self)
    end
  end
  if self.isServer then
    setCollisionMask(self.components[1].node, dt.collisionMask)
    dt.doHusbandryCheck = 5000
  end
  dt.leaveTimer = 15000
end
function Rideable:unlinkReins()
  if self.isClient then
    link(self.spec_rideable.leftReinParentNode, self.spec_rideable.leftReinNode)
    link(self.spec_rideable.rightReinParentNode, self.spec_rideable.rightReinNode)
    setVisibility(self.spec_rideable.reinsNode, false)
  end
end
function Rideable:setEquipmentVisibility(val)
  if self.isClient and self.spec_rideable.equipmentNode ~= nil then
    setVisibility(self.spec_rideable.equipmentNode, val)
    setVisibility(self.spec_rideable.reinsNode, val)
  end
end
function Rideable:actionEventAccelerate(actionName, inputValue, callbackState, isAnalog)
  if self.spec_enterable.isEntered and self.spec_enterable.isControlled and self.spec_rideable.haltTimer <= 0 and self.spec_rideable.isOnGround then
    local v11 = self:getCurrentGait()
    local v9 = math.min(v11 + 1, Rideable.GAITTYPES.MAX)
    self:setCurrentGait(...)
  end
end
function Rideable:actionEventBrake(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getIsEntered()
  if v6 and self.spec_rideable.haltTimer <= 0 and self.spec_rideable.isOnGround then
    local v10 = self:getCurrentGait()
    local v8 = math.max(v10 - 1, 1)
    self:setCurrentGait(...)
  end
end
function Rideable:actionEventSteer(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getIsEntered()
  if v6 and self.spec_rideable.haltTimer <= 0 then
    self:setRideableSteer(inputValue)
  end
end
function Rideable:actionEventJump(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getIsRideableJumpAllowed()
  if v5 then
    self:jump()
  end
end
function Rideable:updateFootsteps(dt, speed)
  if 0.001 < speed then
    local v4, v5, v6 = localDirectionToWorld(self.rootNode, 0, 0, 1)
    local v7 = MathUtil.getYRotationFromDirection(v4, v6)
    for v11, v12 in pairs(self.spec_rideable.hooves) do
      local v13, v14, v15 = getWorldTranslation(v12.node)
      v3.groundRaycastResult.object = 0
      v3.groundRaycastResult.y = v14 - 1
      raycastClosest(v13, v14 + Rideable.GROUND_RAYCAST_OFFSET, v15, 0, -1, 0, "groundRaycastCallback", Rideable.GROUND_RAYCAST_MAXDISTANCE, self, Rideable.GROUND_RAYCAST_COLLISIONMASK)
      if v3.groundRaycastResult.object ~= g_currentMission.terrainRootNode then
      end
      if v14 - v3.groundRaycastResult.y >= 0.05 then
      end
      if true then
        -- if v12.onGround then goto L249 end
        local v19, v20, v21, v22, v23 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, v13, v14, v15, true, true, true, true, false)
        v12.onGround = true
        if v3.inputValues.currentGait < Rideable.GAITTYPES.CANTER then
          -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x0 -> L223
          -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x0 -> L223
          ParticleUtil.resetNumOfEmittedParticles(v12.psSlow)
          ParticleUtil.setEmittingState(v12.psSlow, true)
          setShaderParameter(v12.psSlow.shape, "psColor", v19, v20, v21, 1, false)
          setWorldTranslation(v12.psSlow.emitterShape, v13, v17, v15)
          setWorldRotation(v12.psSlow.emitterShape, 0, v7, 0)
        elseif v12.psFast ~= nil and v12.psFast.emitterShape ~= nil then
          ParticleUtil.resetNumOfEmittedParticles(v12.psFast)
          ParticleUtil.setEmittingState(v12.psFast, true)
          setShaderParameter(v12.psFast.shape, "psColor", v19, v20, v21, 1, false)
          setWorldTranslation(v12.psFast.emitterShape, v13, v17, v15)
          setWorldRotation(v12.psSlow.emitterShape, 0, v7, 0)
        end
        local v24 = self:getHoofSurfaceSound(v13, v14, v15, v16)
        if not (v24 ~= nil) then
          continue
        end
        local v25 = string.format("%s - %s", v24.sampleName, v24.filename)
        v12.sampleDebug = v25
        v25:playSample(v24)
      else
        if not not true then
          continue
        end
        if not v12.onGround then
          continue
        end
        v12.onGround = false
        if v12.psSlow ~= nil and v12.psSlow.emitterShape ~= nil then
          ParticleUtil.setEmittingState(v12.psSlow, false)
        end
        if not (v12.psFast ~= nil) then
          continue
        end
        if not (v12.psFast.emitterShape ~= nil) then
          continue
        end
        ParticleUtil.setEmittingState(v12.psFast, false)
      end
    end
  end
end
function Rideable:updateRiding(dt)
  if self.spec_rideable.cluster ~= nil and self.spec_rideable.currentSpeed ~= 0 then
    local v3 = v3:getDailyRidingTime()
    if self.spec_rideable.inputValues.currentGait == Rideable.GAITTYPES.CANTER then
    elseif self.spec_rideable.inputValues.currentGait == Rideable.GAITTYPES.GALLOP then
    end
    speed.ridingTimer = speed.ridingTimer + dt * v5
    if v4 < speed.ridingTimer then
      speed.ridingTimer = 0
      v7:changeRiding(1)
      v7:changeDirt(1)
    end
    if 0.001 < self.lastMovedDistance then
      local v10 = self:getOwnerFarmId()
      v8:updateFarmStats(v10, "horseDistance", self.lastMovedDistance * 0.001)
    end
    self:updateDirt()
  end
end
function Rideable:getHoofSurfaceSound(x, y, z, hitTerrain)
  if hitTerrain then
    local v6 = v6:getSnowHeightAtArea(x, z, x + 0.1, z + 0.1, x + 0.1, z)
    if 0 < v6 then
      return self.spec_rideable.surfaceNameToSound.snow
    end
    local v7, v8 = FSDensityMapUtil.getFieldDataAtWorldPosition(x, y, z)
    if v7 then
      return v5.surfaceNameToSound.field
    end
    if self.isInShallowWater then
      return v5.surfaceNameToSound.shallowWater
    end
    if self.isInMediumWater then
      return v5.surfaceNameToSound.mediumWater
    end
    local v7, v8, v9, v10, v11 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, x, y, z, true, true, true, true, false)
    return v5.surfaceIdToSound[v11]
  end
  return v5.surfaceNameToSound.asphalt
end
function Rideable:getPosition()
  return getWorldTranslation(self.rootNode)
end
function Rideable:getRotation()
  return getWorldRotation(self.rootNode)
end
function Rideable:setPlayerToEnter(player)
  self.spec_rideable.playerToEnter = player
  self.spec_rideable.checkPlayerToEnter = true
  self:raiseActive()
end
function Rideable:getName(superFunc)
  return v3:getName()
end
function Rideable:getFullName(superFunc)
  return self:getName()
end
function Rideable.getCanBeReset(v0, dt)
  return false
end
function Rideable.getMapHotspotRotation(v0, dt, speed)
  if not speed then
    return 0
  end
  return dt(v0, speed)
end
function Rideable.getShowInVehiclesOverview(v0, dt)
  return false
end
function Rideable:periodChanged(superFunc)
  superFunc(self)
  if self.spec_rideable.cluster ~= nil then
    v3:onPeriodChanged()
  end
end
function Rideable:dayChanged(superFunc)
  superFunc(self)
  if self.spec_rideable.cluster ~= nil then
    v3:onDayChanged()
  end
end
function Rideable:getImageFilename(superFunc)
  local imageFilename = superFunc(self)
  local cluster = self:getCluster()
  if cluster ~= nil then
    local v7 = cluster:getAge()
    local v4 = v4:getVisualByAge(...)
  end
  return imageFilename
end
function Rideable:deleteVehicleCharacter(superFunc)
  self:setEquipmentVisibility(false)
  self:unlinkReins()
  superFunc(self)
end
function Rideable:showInfo(superFunc, box)
  if self.spec_rideable.cluster ~= nil then
    v4:showInfo(box)
  end
  superFunc(self, box)
end
function Rideable:updateDebugValues(values)
  for v6, v7 in pairs(self.spec_rideable.hooves) do
    table.insert(values, {name = "hoof sample " .. v6, value = v7.sampleDebug})
  end
end
function Rideable:updateInputText()
  if self.spec_rideable.inputValues.currentGait == Rideable.GAITTYPES.BACKWARDS then
    local v5 = v5:getText("action_stop")
    speed:setActionEventText(...)
    speed:setActionEventActive(self.spec_rideable.acceletateEventId, true)
    speed:setActionEventTextVisibility(self.spec_rideable.acceletateEventId, true)
    speed:setActionEventActive(self.spec_rideable.brakeEventId, false)
    speed:setActionEventTextVisibility(self.spec_rideable.brakeEventId, false)
    speed:setActionEventActive(self.spec_rideable.jumpEventId, false)
    speed:setActionEventTextVisibility(self.spec_rideable.jumpEventId, false)
    return
  end
  if dt.inputValues.currentGait == Rideable.GAITTYPES.STILL then
    v5 = v5:getText("action_walk")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.acceletateEventId, true)
    speed:setActionEventTextVisibility(dt.acceletateEventId, true)
    v5 = v5:getText("action_walkBackwards")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.brakeEventId, true)
    speed:setActionEventTextVisibility(dt.brakeEventId, true)
    speed:setActionEventActive(dt.jumpEventId, false)
    speed:setActionEventTextVisibility(dt.jumpEventId, false)
    return
  end
  if dt.inputValues.currentGait == Rideable.GAITTYPES.WALK then
    v5 = v5:getText("action_trot")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.acceletateEventId, true)
    speed:setActionEventTextVisibility(dt.acceletateEventId, true)
    v5 = v5:getText("action_stop")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.brakeEventId, true)
    speed:setActionEventTextVisibility(dt.brakeEventId, true)
    speed:setActionEventActive(dt.jumpEventId, false)
    speed:setActionEventTextVisibility(dt.jumpEventId, false)
    return
  end
  if dt.inputValues.currentGait == Rideable.GAITTYPES.TROT then
    v5 = v5:getText("action_canter")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.acceletateEventId, true)
    speed:setActionEventTextVisibility(dt.acceletateEventId, true)
    v5 = v5:getText("action_walk")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.brakeEventId, true)
    speed:setActionEventTextVisibility(dt.brakeEventId, true)
    speed:setActionEventActive(dt.jumpEventId, false)
    speed:setActionEventTextVisibility(dt.jumpEventId, false)
    return
  end
  if dt.inputValues.currentGait == Rideable.GAITTYPES.CANTER then
    v5 = v5:getText("action_gallop")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.acceletateEventId, true)
    speed:setActionEventTextVisibility(dt.acceletateEventId, true)
    v5 = v5:getText("action_trot")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.brakeEventId, true)
    speed:setActionEventTextVisibility(dt.brakeEventId, true)
    v5 = v5:getText("input_JUMP")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.jumpEventId, true)
    speed:setActionEventTextVisibility(dt.jumpEventId, true)
    return
  end
  if dt.inputValues.currentGait == Rideable.GAITTYPES.GALLOP then
    speed:setActionEventActive(dt.acceletateEventId, false)
    speed:setActionEventTextVisibility(dt.acceletateEventId, false)
    v5 = v5:getText("action_canter")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.brakeEventId, true)
    speed:setActionEventTextVisibility(dt.brakeEventId, true)
    v5 = v5:getText("input_JUMP")
    speed:setActionEventText(...)
    speed:setActionEventActive(dt.jumpEventId, true)
    speed:setActionEventTextVisibility(dt.jumpEventId, true)
  end
end
