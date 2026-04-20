-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerModel = {}
local PlayerModel_mt = Class(PlayerModel)
function PlayerModel.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.xmlFile = nil
  v1.isLoaded = false
  v1.sharedLoadRequestIds = {}
  v1.modelParts = {}
  v1.capsuleHeight = 0.8
  v1.capsuleRadius = 0.4
  v1.capsuleTotalHeight = v1.capsuleHeight + v1.capsuleRadius * 2
  v1.style = nil
  v1.ikChains = {}
  v1.soundInformation = {samples = {swim = {}, plunge = {}, horseBrush = {}}, distancePerFootstep = {crouch = 0.5, walk = 0.75, run = 1.5}, distanceSinceLastFootstep = 0}
  v1.particleSystemsInformation = {systems = {swim = {}, plunge = {}}, swimNode = nil, plungeNode = nil}
  v1.animationInformation = {player = 0, parameters = {forwardVelocity = {id = 1, value = 0, ["type"] = 1}, verticalVelocity = {id = 2, value = 0, ["type"] = 1}, yawVelocity = {id = 3, value = 0, ["type"] = 1}, absYawVelocity = {id = 4, value = 0, ["type"] = 1}, onGround = {id = 5, value = false, ["type"] = 0}, inWater = {id = 6, value = false, ["type"] = 0}, isCrouched = {id = 7, value = false, ["type"] = 0}, absForwardVelocity = {id = 8, value = 0, ["type"] = 1}, isCloseToGround = {id = 9, value = false, ["type"] = 0}, isUsingChainsawHorizontal = {id = 10, value = false, ["type"] = 0}, isUsingChainsawVertical = {id = 11, value = false, ["type"] = 0}}}
  return v1
end
function PlayerModel:delete()
  if self.xmlFile ~= nil then
    delete(self.xmlFile)
    self.xmlFile = nil
  end
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  if self.sharedLoadRequestIds ~= nil then
    for v4, v5 in pairs(self.sharedLoadRequestIds) do
      v6:releaseSharedI3DFile(v5)
    end
    self.sharedLoadRequestIds = nil
  end
  if self.pickUpKinematicHelperNode ~= nil then
    delete(self.pickUpKinematicHelperNode)
    self.pickUpKinematicHelperNode = nil
  end
  if self.leftArmToolNode ~= nil then
    delete(self.leftArmToolNode)
    self.leftArmToolNode = nil
  end
  if self.rightArmToolNode ~= nil then
    delete(self.rightArmToolNode)
    self.rightArmToolNode = nil
  end
  if self.particleSystemsInformation.swimNode ~= nil then
    delete(self.particleSystemsInformation.swimNode)
  end
  if self.particleSystemsInformation.plungeNode ~= nil then
    delete(self.particleSystemsInformation.plungeNode)
  end
  ParticleUtil.deleteParticleSystem(self.particleSystemsInformation.systems.swim)
  ParticleUtil.deleteParticleSystem(self.particleSystemsInformation.systems.plunge)
  if self.thirdPersonSpineNode ~= nil then
    delete(self.thirdPersonSpineNode)
  end
  for v4, v5 in pairs(self.ikChains) do
    IKUtil.deleteIKChain(self.ikChains, v4)
  end
  if self.isRealPlayer and Platform.hasPlayer then
    for v4, v5 in pairs(self.soundInformation.samples) do
      v6:deleteSample(v5)
    end
    v1:deleteSamples(self.soundInformation.surfaceSounds)
  end
  if self.rootNode ~= nil then
    delete(self.rootNode)
    self.rootNode = nil
  end
  if self.lightNode ~= nil then
    v1 = entityExists(self.lightNode)
    if v1 then
      delete(self.lightNode)
      self.lightNode = nil
    end
  end
  if self.animationInformation.player ~= 0 then
    delete(self.animationInformation.player)
    self.animationInformation.player = 0
  end
end
function PlayerModel:loadEmpty()
  local v1 = createTransformGroup("model_rootNode_dummy")
  self.rootNode = v1
  local v2 = getRootNode()
  link(v2, self.rootNode)
  v1 = createTransformGroup("camera_target_dummpy")
  self.firstPersonCameraTarget = v1
  link(self.rootNode, self.firstPersonCameraTarget)
  setTranslation(self.firstPersonCameraTarget, 0, 1.7, 0)
end
function PlayerModel:load(xmlFilename, isRealPlayer, isOwner, isAnimated, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  self.xmlFilename = xmlFilename
  local v8, v9 = Utils.getModNameAndBaseDirectory(xmlFilename)
  self.customEnvironment = v8
  self.baseDirectory = v9
  v8 = loadXMLFile("playerXML", xmlFilename)
  if v8 == 0 then
    asyncCallbackFunction(asyncCallbackObject, false, asyncCallbackArguments)
    return
  end
  v9 = getXMLString(v8, "player.filename")
  local v10 = Utils.getFilename(v9, self.baseDirectory)
  self.filename = v10
  self.xmlFile = v8
  self.isRealPlayer = isRealPlayer
  self.asyncLoadCallbackFunction = asyncCallbackFunction
  self.asyncLoadCallbackObject = asyncCallbackObject
  self.asyncLoadCallbackArguments = asyncCallbackArguments
  v10 = v10:loadSharedI3DFileAsync(self.filename, false, false, self.loadFileFinished, self, {isRealPlayer, isOwner, isAnimated})
  self.sharedLoadRequestId = v10
end
function PlayerModel:loadFileFinished(rootNode, failedReason, arguments)
  self.xmlFile = nil
  if failedReason == LoadI3DFailedReason.FILE_NOT_FOUND then
    Logging.error("Player model file '%s' does not exist!", self.filename)
    delete(self.xmlFile)
    return self.asyncLoadCallbackFunction(self.asyncLoadCallbackObject, false, self.asyncLoadCallbackArguments)
  end
  if failedReason ~= LoadI3DFailedReason.UNKNOWN and rootNode ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000010 -> L56
  end
  Logging.error("Failed to load player model %s", self.filename, failedReason)
  delete(v4)
  v5 = self.asyncLoadCallbackFunction(self.asyncLoadCallbackObject, false, self.asyncLoadCallbackArguments)
  return v5
  self.rootNode = rootNode
  if arguments[1] then
    local v10 = getXMLString(v4, "player.camera#index")
    local v8 = I3DUtil.indexToObject(...)
    if v8 == nil then
      Logging.devError("Error: Failed to find player camera position in '%s'", self.filename)
    end
    local v9, v10, v11 = localToLocal(v8, rootNode, 0, 0, 0)
    local target = createTransformGroup("1p_camera_target")
    link(rootNode, target)
    setTranslation(target, v9, v10, v11)
    self.firstPersonCameraTarget = target
  end
  if v5 then
    v10 = getXMLString(v4, "player.character.thirdPerson#animRootNode")
    v8 = I3DUtil.indexToObject(...)
    self.animRootThirdPerson = v8
    if self.animRootThirdPerson == nil then
      Logging.devError("Error: Failed to find animation root node in '%s'", self.filename)
      delete(v4)
      v8 = self.asyncLoadCallbackFunction(self.asyncLoadCallbackObject, false, self.asyncLoadCallbackArguments)
      return v8
    end
    v8 = getXMLFloat(v4, "player.character#physicsCapsuleHeight")
    self.capsuleHeight = v8
    v8 = getXMLFloat(v4, "player.character#physicsCapsuleRadius")
    self.capsuleRadius = v8
    self.capsuleTotalHeight = self.capsuleHeight + self.capsuleRadius * 2
  end
  v8 = PlayerStyle.new()
  self.style = v8
  v10 = getXMLString(v4, "player.character.thirdPerson#skeleton")
  v8 = I3DUtil.indexToObject(...)
  self.skeleton = v8
  if self.skeleton == nil then
    Logging.devError("Error: Failed to find skeleton root node in '%s'", self.filename)
  end
  v10 = getXMLString(v4, "player.character.thirdPerson#mesh")
  v8 = I3DUtil.indexToObject(...)
  self.mesh = v8
  if self.mesh == nil then
    Logging.devError("Error: Failed to find player mesh in '%s'", self.filename)
  end
  v10 = getXMLString(v4, "player.character.thirdPerson#spine")
  v8 = I3DUtil.indexToObject(...)
  self.thirdPersonSpineNode = v8
  v11 = getXMLString(v4, "player.character.thirdPerson#suspension")
  v9 = I3DUtil.indexToObject(...)
  v8 = Utils.getNoNil(v9, self.thirdPersonSpineNode)
  self.thirdPersonSuspensionNode = v8
  v10 = getXMLString(v4, "player.character.thirdPerson#rightHandNode")
  v8 = I3DUtil.indexToObject(...)
  self.thirdPersonRightHandNode = v8
  v10 = getXMLString(v4, "player.character.thirdPerson#leftHandNode")
  v8 = I3DUtil.indexToObject(...)
  self.thirdPersonLeftHandNode = v8
  v10 = getXMLString(v4, "player.character.thirdPerson#headNode")
  v8 = I3DUtil.indexToObject(...)
  self.thirdPersonHeadNode = v8
  v10 = getXMLString(v4, "player.light#index")
  v8 = I3DUtil.indexToObject(...)
  self.lightNode = v8
  if self.lightNode ~= nil then
    setVisibility(self.lightNode, false)
  end
  if self.mesh ~= nil then
    setClipDistance(self.mesh, 200)
  end
  v10 = getXMLString(v4, "player.pickUpKinematicHelper#index")
  v8 = I3DUtil.indexToObject(...)
  if v8 ~= nil then
    v9 = getRigidBodyType(v8)
    if v9 == RigidBodyType.KINEMATIC then
      self.pickUpKinematicHelperNode = v8
      v9 = createTransformGroup("pickUpKinematicHelperNodeChild")
      self.pickUpKinematicHelperNodeChild = v9
      link(self.pickUpKinematicHelperNode, self.pickUpKinematicHelperNodeChild)
      addToPhysics(self.pickUpKinematicHelperNode)
    else
      target = getName(v8)
      Logging.xmlWarning(...)
    end
  end
  self:loadIKChains(v4, rootNode, v5)
  if v7 and self.skeleton ~= nil then
    v9 = getNumOfChildren(self.skeleton)
    if 0 < v9 then
      v9 = v9:getNode(AnimationCache.CHARACTER)
      target = getParent(self.skeleton)
      cloneAnimCharacterSet(...)
      v11 = getChildAt(self.skeleton, 0)
      v10 = getAnimCharacterSet(...)
      target = createConditionalAnimation()
      self.animationInformation.player = target
      for v14, v15 in pairs(self.animationInformation.parameters) do
        conditionalAnimationRegisterParameter(self.animationInformation.player, v15.id, v15["type"], v14)
      end
      initConditionalAnimation(self.animationInformation.player, v10, self.xmlFilename, "player.conditionalAnimation")
      setConditionalAnimationSpecificParameterIds(self.animationInformation.player, self.animationInformation.parameters.absForwardVelocity.id, self.animationInformation.parameters.yawVelocity.id)
    end
  end
  if v5 then
    v9 = createTransformGroup("player_skeletonRootNode")
    self.skeletonRootNode = v9
    v10 = getRootNode()
    link(v10, self.rootNode)
    link(self.rootNode, self.skeletonRootNode)
    if self.animRootThirdPerson ~= nil then
      link(self.skeletonRootNode, self.animRootThirdPerson)
      if self.skeleton ~= nil then
        link(self.animRootThirdPerson, self.skeleton)
      end
    end
    v9 = createTransformGroup("leftArmToolNode")
    self.leftArmToolNode = v9
    v9 = createTransformGroup("rightArmToolNode")
    self.rightArmToolNode = v9
    if v6 then
      v11 = getXMLString(v4, "player.character.toolNode#firstPersonRotation")
      v10 = Utils.getNoNil(v11, "0 0 0")
      v9 = string.getVectorN(v10, 3)
      v10, v11, target = unpack(v9)
      v15 = math.rad(v10)
      local v16 = math.rad(v11)
      local v17 = math.rad(target)
      setRotation(...)
      v15 = getXMLString(v4, "player.character.toolNode#firstPersonTranslation")
      v14 = Utils.getNoNil(v15, "0 0 0")
      v13 = string.getVectorN(v14, 3)
      v14, v15, v16 = unpack(v13)
      setTranslation(self.rightArmToolNode, v14, v15, v16)
    else
      v11 = getXMLString(v4, "player.character.toolNode#thirdPersonRightNodeRotation")
      v10 = Utils.getNoNil(v11, "0 0 0")
      v9 = string.getVectorN(v10, 3)
      v10, v11, target = unpack(v9)
      v15 = math.rad(v10)
      v16 = math.rad(v11)
      v17 = math.rad(target)
      setRotation(...)
      v15 = getXMLString(v4, "player.character.toolNode#thirdPersonRightNodeTranslation")
      v14 = Utils.getNoNil(v15, "0 0 0")
      v13 = string.getVectorN(v14, 3)
      v14, v15, v16 = unpack(v13)
      setTranslation(self.rightArmToolNode, v14, v15, v16)
      link(self.thirdPersonRightHandNode, self.rightArmToolNode)
      local v19 = getXMLString(v4, "player.character.toolNode#thirdPersonLeftNodeRotation")
      local v18 = Utils.getNoNil(v19, "0 0 0")
      v17 = string.getVectorN(v18, 3)
      local v18, v19, v20 = unpack(v17)
      local v23 = math.rad(v18)
      local v24 = math.rad(v19)
      local v25 = math.rad(v20)
      setRotation(...)
      v23 = getXMLString(v4, "player.character.toolNode#thirdPersonLeftNodeTranslation")
      local v22 = Utils.getNoNil(v23, "0 0 0")
      local v21 = string.getVectorN(v22, 3)
      v22, v23, v24 = unpack(v21)
      setTranslation(self.leftArmToolNode, v22, v23, v24)
      link(self.thirdPersonLeftHandNode, self.leftArmToolNode)
      link(self.thirdPersonHeadNode, self.lightNode)
      local v27 = getXMLString(v4, "player.light#thirdPersonRotation")
      local v26 = Utils.getNoNil(v27, "0 0 0")
      v25 = string.getVectorN(v26, 3)
      local v26, v27, v28 = unpack(v25)
      local v31 = getXMLString(v4, "player.light#thirdPersonTranslation")
      local v30 = Utils.getNoNil(v31, "0 0 0")
      local v29 = string.getVectorN(v30, 3)
      local v30, v31, v32 = unpack(v29)
      local v35 = math.rad(v26)
      local v36 = math.rad(v27)
      local v37 = math.rad(v28)
      setRotation(...)
      setTranslation(self.lightNode, v30, v31, v32)
    end
    v10 = createTransformGroup("swimFXNode")
    self.particleSystemsInformation.swimNode = v10
    v10 = getRootNode()
    link(v10, self.particleSystemsInformation.swimNode)
    v10 = createTransformGroup("plungeFXNode")
    self.particleSystemsInformation.plungeNode = v10
    v10 = getRootNode()
    link(v10, self.particleSystemsInformation.plungeNode)
    ParticleUtil.loadParticleSystem(v4, self.particleSystemsInformation.systems.swim, "player.particleSystems.swim", self.particleSystemsInformation.swimNode, false, nil, self.baseDirectory)
    ParticleUtil.loadParticleSystem(v4, self.particleSystemsInformation.systems.plunge, "player.particleSystems.plunge", self.particleSystemsInformation.plungeNode, false, nil, self.baseDirectory)
  else
    if not v7 then
      v9 = createTransformGroup("characterLinkNode")
      link(self.rootNode, v9)
      link(v9, self.skeleton)
      v10, v11, target = localToLocal(self.thirdPersonSpineNode, self.skeleton, 0, 0, 0)
      setTranslation(v9, -v10, -v11, -target)
    else
      link(self.rootNode, self.skeleton)
    end
    if self.pickUpKinematicHelperNode ~= nil then
      delete(self.pickUpKinematicHelperNode)
      self.pickUpKinematicHelperNode = nil
    end
    if self.lightNode ~= nil then
      delete(self.lightNode)
      self.lightNode = nil
    end
  end
  if v5 and Platform.hasPlayer then
    self:loadSounds(v4, v6)
  end
  delete(v4)
  self.isLoaded = true
  v9 = self.asyncLoadCallbackFunction(self.asyncLoadCallbackObject, true, self.asyncLoadCallbackArguments)
  return v9
end
function PlayerModel:loadIKChains(xmlFile, rootNode, isRealPlayer)
  self.ikChains = {}
  while true do
    v5 = string.format("player.ikChains.ikChain(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    IKUtil.loadIKChain(xmlFile, v5, rootNode, rootNode, self.ikChains)
  end
  IKUtil.setIKChainInactive(self.ikChains, "spine")
  if isRealPlayer then
    IKUtil.deleteIKChain(self.ikChains, "rightFoot")
    IKUtil.deleteIKChain(self.ikChains, "leftFoot")
    IKUtil.deleteIKChain(self.ikChains, "rightArm")
    IKUtil.deleteIKChain(self.ikChains, "leftArm")
    IKUtil.deleteIKChain(self.ikChains, "spine")
  end
end
function PlayerModel:loadSounds(xmlFile, isOwner)
  self.soundInformation.surfaceSounds = {}
  self.soundInformation.surfaceIdToSound = {}
  self.soundInformation.surfaceNameToSound = {}
  self.soundInformation.currentSurfaceSound = nil
  if not isOwner then
    for v7, v8 in pairs(g_currentMission.surfaceSounds) do
      if not (v8["type"] == "footstep") then
        continue
      end
      if not (v8.sample ~= nil) then
        continue
      end
      local v9 = v9:cloneSample(v8.sample, self.rootNode, self)
      v9.sampleName = v8.name
      table.insert(v3.surfaceSounds, v9)
      v3.surfaceIdToSound[v8.materialId] = v9
      v3.surfaceNameToSound[v8.name] = v9
    end
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.water", "swim", self.baseDirectory, self.rootNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.swim = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.water", "swimIdle", self.baseDirectory, self.rootNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.swimIdle = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.water", "plunge", self.baseDirectory, self.rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.plunge = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.tools", "flashlight", self.baseDirectory, self.rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.flashlight = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.tools", "horseBrush", self.baseDirectory, self.rootNode, 1, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.horseBrush = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.jump", "takeoff", self.baseDirectory, self.rootNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.jump = v5
    v5 = v5:loadSampleFromXML(xmlFile, "player.sounds.jump", "landing", self.baseDirectory, self.rootNode, 0, AudioGroup.ENVIRONMENT, nil, nil)
    v3.samples.touchGround = v5
  else
    for v7, v8 in pairs(g_currentMission.surfaceSounds) do
      if not (v8["type"] == "footstep") then
        continue
      end
      if not (v8.sample ~= nil) then
        continue
      end
      v9 = v9:cloneSample2D(v8.sample, self)
      v9.sampleName = v8.name
      table.insert(v3.surfaceSounds, v9)
      v3.surfaceIdToSound[v8.materialId] = v9
      v3.surfaceNameToSound[v8.name] = v9
    end
    v3.samples = {}
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.water", "swim", self.baseDirectory, 0, AudioGroup.ENVIRONMENT)
    v3.samples.swim = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.water", "swimIdle", self.baseDirectory, 0, AudioGroup.ENVIRONMENT)
    v3.samples.swimIdle = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.water", "plunge", self.baseDirectory, 1, AudioGroup.ENVIRONMENT)
    v3.samples.plunge = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.tools", "flashlight", self.baseDirectory, 1, AudioGroup.ENVIRONMENT)
    v3.samples.flashlight = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.tools", "horseBrush", self.baseDirectory, 1, AudioGroup.ENVIRONMENT)
    v3.samples.horseBrush = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.jump", "takeoff", self.baseDirectory, 0, AudioGroup.ENVIRONMENT)
    v3.samples.jump = v5
    v5 = v5:loadSample2DFromXML(xmlFile, "player.sounds.jump", "landing", self.baseDirectory, 0, AudioGroup.ENVIRONMENT)
    v3.samples.touchGround = v5
    v3.samples.handtoolStop = {}
  end
  v6 = getXMLFloat(xmlFile, "player.sounds.footsteps#distancePerFootstepCrouch")
  v5 = Utils.getNoNil(v6, 0.5)
  v3.distancePerFootstep.crouch = v5
  v6 = getXMLFloat(xmlFile, "player.sounds.footsteps#distancePerFootstepWalk")
  v5 = Utils.getNoNil(v6, 0.75)
  v3.distancePerFootstep.walk = v5
  v6 = getXMLFloat(xmlFile, "player.sounds.footsteps#distancePerFootstepRun")
  v5 = Utils.getNoNil(v6, 1.5)
  v3.distancePerFootstep.run = v5
end
function PlayerModel.readStream(v0, v1, v2)
end
function PlayerModel.writeStream(v0, v1, v2)
end
function PlayerModel:setVisibility(isVisible)
  setVisibility(self.rootNode, isVisible)
end
function PlayerModel:getCapsuleSize()
  return self.capsuleRadius, self.capsuleHeight
end
function PlayerModel:getRootNode()
  return self.rootNode
end
function PlayerModel:setIKDirty()
  IKUtil.setIKChainDirty(self.ikChains, "rightFoot")
  IKUtil.setIKChainDirty(self.ikChains, "leftFoot")
  IKUtil.setIKChainDirty(self.ikChains, "rightArm")
  IKUtil.setIKChainDirty(self.ikChains, "leftArm")
  IKUtil.setIKChainDirty(self.ikChains, "spine")
end
function PlayerModel:getIKChains()
  return self.ikChains
end
function PlayerModel:enableTorch(enabled, playSound)
  if self.lightNode ~= nil then
    setVisibility(self.lightNode, enabled)
    if playSound then
      v3:playSample(self.soundInformation.samples.flashlight)
    end
  end
end
function PlayerModel:linkTorchToCamera(camera)
  if self.lightNode ~= nil then
    link(camera, self.lightNode)
  end
end
function PlayerModel:linkRightHandToCamera(camera)
  if self.rightArmToolNode ~= nil then
    if camera == nil then
      local v3 = getRootNode()
      link(v3, self.rightArmToolNode)
      return
    end
    link(camera, self.rightArmToolNode)
  end
end
function PlayerModel:getHasTorch()
  if self.lightNode == nil then
  end
  return true
end
function PlayerModel:applyCustomWorkStyle(presetName)
  if presetName ~= nil then
    local v3 = v3:getPresetByName(presetName)
  end
  if self.baseStyle ~= nil then
    if v2 ~= nil then
      v3 = PlayerStyle.new()
      v3:copyFrom(self.baseStyle)
      v3:setPreset(v2)
      self:setStyle(v3, true, nil)
      return
    end
    self:setStyle(self.baseStyle, false, nil)
  end
end
function PlayerModel:setStyle(playerStyle, isTempStyle, callback)
  if not isTempStyle then
    local v4 = PlayerStyle.new()
    self.baseStyle = v4
    v4:copyFrom(playerStyle)
  end
  if playerStyle.xmlFilename ~= self.xmlFilename then
    Logging.error("Can't set player style with different filename to player model")
    return
  end
  if self.setStyleFinishCallback ~= nil then
    self.setStyleFinishCallback(false)
  end
  self.setStyleFinishCallback = callback
  v4:copyFrom(playerStyle)
  self.sharedLoadRequestIds = {}
  for v8, v9 in pairs(self.modelParts) do
    delete(v9)
    self.modelParts[v8] = nil
  end
  self.filesToLoad = {}
  v5 = playerStyle:getRequiredNodeFiles()
  for v9, v10 in ipairs(v5) do
    if not (self.sharedLoadRequestIds[v10] == nil) then
      continue
    end
    local v12 = v12:loadSharedI3DFileAsync(v10, false, true, self.onModelPartLoaded, self, {filename = v10})
    self.sharedLoadRequestIds[v10] = v12
    self.filesToLoad[v10] = true
  end
  for v9, v10 in pairs(v4) do
    v11:releaseSharedI3DFile(v10)
  end
  self:tryFinish()
end
function PlayerModel:setStyleFinish()
  v1:apply(self.skeleton, self.mesh, nil, self.modelParts)
  for v4, v5 in pairs(self.modelParts) do
    delete(v5)
    self.modelParts[v4] = nil
  end
  if self.setStyleFinishCallback ~= nil then
    self.setStyleFinishCallback = nil
    self.setStyleFinishCallback(true)
  end
end
function PlayerModel:onModelPartLoaded(node, failedReason, args)
  self.filesToLoad[args.filename] = nil
  self.modelParts[args.filename] = node
  self:tryFinish()
end
function PlayerModel:tryFinish()
  local v1 = next(self.filesToLoad)
  if v1 == nil then
    self:setStyleFinish()
  end
end
function PlayerModel:getStyle(currentStyle)
  if currentStyle then
    return self.style
  end
  if not self.baseStyle then
  end
  return v2
end
function PlayerModel:getLastForwardVelocity()
  if self.animationInformation.player ~= 0 then
    return getConditionalAnimationFloatValue(self.animationInformation.player, self.animationInformation.parameters.absForwardVelocity.id)
  end
  return 0
end
function PlayerModel:setSkeletonRotation(yRot)
  if self.skeletonRootNode ~= nil then
    setRotation(self.skeletonRootNode, 0, yRot, 0)
  end
end
function PlayerModel:getKinematicHelpers()
  return self.pickUpKinematicHelperNode, self.pickUpKinematicHelperNodeChild
end
function PlayerModel:linkKinematicHelperToCamera(camera)
  if self.pickUpKinematicHelperNode ~= nil then
    if camera == nil then
      link(self.animRootThirdPerson, self.pickUpKinematicHelperNode)
      return
    end
    link(camera, self.pickUpKinematicHelperNode)
  end
end
function PlayerModel:updateAnimations(dt)
  if self.animationInformation.player ~= 0 then
    updateConditionalAnimation(self.animationInformation.player, dt)
  end
end
function PlayerModel:setAnimationParameters(isOnGround, isInWater, isCrouched, isCloseToGround, forwardVelocity, verticalVelocity, yawVelocity)
  if not self.isLoaded then
    return
  end
  self.animationInformation.parameters.forwardVelocity.value = forwardVelocity
  self.animationInformation.parameters.verticalVelocity.value = verticalVelocity
  self.animationInformation.parameters.yawVelocity.value = yawVelocity
  local v10 = math.abs(yawVelocity)
  self.animationInformation.parameters.absYawVelocity.value = v10
  self.animationInformation.parameters.onGround.value = isOnGround
  self.animationInformation.parameters.inWater.value = isInWater
  self.animationInformation.parameters.isCrouched.value = isCrouched
  v10 = math.abs(forwardVelocity)
  self.animationInformation.parameters.absForwardVelocity.value = v10
  self.animationInformation.parameters.isCloseToGround.value = isCloseToGround
  self.animationInformation.parameters.isUsingChainsawHorizontal.value = false
  self.animationInformation.parameters.isUsingChainsawVertical.value = false
  for v12, v13 in pairs(self.animationInformation.parameters) do
    if v13["type"] == 0 then
      setConditionalAnimationBoolValue(self.animationInformation.player, v13.id, v13.value)
    else
      if not (v13["type"] == 1) then
        continue
      end
      setConditionalAnimationFloatValue(self.animationInformation.player, v13.id, v13.value)
    end
  end
end
function PlayerModel:getFirstPersonCameraTargetNode()
  return self.firstPersonCameraTarget
end
function PlayerModel:getCurrentSurfaceSound(x, y, z, waterLevel, waterY)
  self.belowPlayerObject = nil
  raycastClosest(x, y + 0.5, z, 0, -1, 0, "groundRaycastCallback", 10, self, CollisionFlag.STATIC_WORLD + CollisionFlag.PLAYER + CollisionFlag.ANIMAL + CollisionFlag.TERRAIN)
  if self.belowPlayerObject ~= g_currentMission.terrainRootNode then
  end
  if y - waterY >= 0 then
  end
  if true and -0.6 > v8 then
  end
  if v9 and waterLevel < v8 then
  end
  if v7 then
    local v12 = v12:getSnowHeightAtArea(x, z, x + 0.1, z + 0.1, x + 0.1, z)
    if 0 < v12 then
      return self.soundInformation.surfaceNameToSound.snow, v10
    end
    local v13, v14 = FSDensityMapUtil.getFieldDataAtWorldPosition(x, y, z)
    if v13 then
      return self.soundInformation.surfaceNameToSound.field, v10
    end
    if v11 then
      return self.soundInformation.surfaceNameToSound.mediumWater, v10
    end
    if v10 then
      return self.soundInformation.surfaceNameToSound.shallowWater, v10
    end
    local v13, v14, v15, v16, v17 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, x, y, z, true, true, true, true, false)
    return self.soundInformation.surfaceIdToSound[v17], v10
  end
  return self.soundInformation.surfaceNameToSound.asphalt, v10
end
function PlayerModel:groundRaycastCallback(hitObjectId, x, y, z, distance)
  self.belowPlayerObject = hitObjectId
  return false
end
function PlayerModel:setSoundParameters(forwardVel, isCrouching, isWalking, isRunning, isSwimming, isPlungedInWater, isInWater, coveredGroundDistance, maxSwimmingSpeed, waterLevel, didJump, didTouchGround, waterY)
  if not self.isLoaded then
    return
  end
  if isCrouching then
  elseif isWalking then
  else
    if isRunning then
    end
  end
  if 0 >= v14 then
    -- if not v5 then goto L187 end
  end
  if 0 >= coveredGroundDistance - v15.distanceSinceLastFootstep - v14 then
    -- if not v5 then goto L187 end
  end
  local v17, v18, v19 = getWorldTranslation(self.rootNode)
  local v20, v21 = self:getCurrentSurfaceSound(v17, v18, v19, waterLevel, waterY)
  if not isInWater then
    local v22 = v22:getIsSamplePlaying(v15.samples.swim)
    if v22 then
      v22:stopSample(v15.samples.swim)
    end
    v22 = v22:getIsSamplePlaying(v15.samples.swimIdle)
    if v22 then
      v22:stopSample(v15.samples.swimIdle)
    end
  end
  if isInWater then
    -- if v21 then goto L176 end
    v22 = math.abs(forwardVel)
    if v22 < maxSwimmingSpeed * 0.75 then
      v22 = v22:getIsSamplePlaying(v15.samples.swim)
      if v22 then
        v22:stopSample(v15.samples.swim)
      end
      v22 = v22:getIsSamplePlaying(v15.samples.swimIdle)
      -- if v22 then goto L184 end
      v22:playSample(v15.samples.swimIdle)
      -- goto L184  (LOP_JUMP +47)
    end
    v22 = v22:getIsSamplePlaying(v15.samples.swimIdle)
    if v22 then
      v22:stopSample(v15.samples.swimIdle)
    end
    v22 = v22:getIsSamplePlaying(v15.samples.swim)
    -- if v22 then goto L184 end
    v22:playSample(v15.samples.swim)
  elseif v20 ~= nil then
    v22:playSample(v20)
  end
  v15.distanceSinceLastFootstep = coveredGroundDistance + v16
  if isPlungedInWater then
    v16:playSample(v15.samples.plunge)
  end
  if didJump then
    v16:playSample(v15.samples.jump)
  end
  if didTouchGround then
    v16:playSample(v15.samples.touchGround)
  end
end
function PlayerModel:updateFX(x, y, z, isInWater, plungedInWater, waterY)
  if isInWater then
    setWorldTranslation(self.particleSystemsInformation.swimNode, x, waterY, z)
    ParticleUtil.setEmittingState(self.particleSystemsInformation.systems.swim, true)
  else
    ParticleUtil.resetNumOfEmittedParticles(self.particleSystemsInformation.systems.swim)
    ParticleUtil.setEmittingState(self.particleSystemsInformation.systems.swim, false)
  end
  if plungedInWater then
    setWorldTranslation(self.particleSystemsInformation.plungeNode, x, waterY, z)
    ParticleUtil.resetNumOfEmittedParticles(self.particleSystemsInformation.systems.plunge)
    ParticleUtil.setEmittingState(self.particleSystemsInformation.systems.plunge, true)
  end
end
