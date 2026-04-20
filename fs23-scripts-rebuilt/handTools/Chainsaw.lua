-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Chainsaw = {}
local Chainsaw_mt = Class(Chainsaw, HandTool)
InitStaticObjectClass(Chainsaw, "Chainsaw", ObjectIds.OBJECT_CHAINSAW)
Chainsaw.CAMERA_TRANSITION_STATES = {NONE = -1, IN = 0, CUT = 1, OUT = 2}
Chainsaw.SOUND_STATES = {START = 1, STOP = 2, IDLE = 3, ACTIVE = 4, CUT = 5, QUICKTAP = 6}
v1:addInitSchemaFunction(function()
  HandTool.xmlSchema:setXMLSpecializationType("Chainsaw")
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw.pricePerMinute", "Price per minute", 50)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw#quicktapThreshold", "Quick tab time threshold", 0)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw#cutSizeY", "Cut Size Y", 1.1)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw#cutSizeZ", "Cut Size Z", 1)
  HandTool.xmlSchema:register(XMLValueType.VECTOR_3, "handTool.chainsaw.cutAnimation#cutFocusOffset", "Offset for cutting focus point", "0 0 -1")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_3, "handTool.chainsaw.cutAnimation#cutFocusRotation", "Rotation for cutting focus point", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw.targetSelection#minCutDistance", "Minimum cut distance", 0.5)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw.targetSelection#maxCutDistance", "Maxium cut distance", 1)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw.targetSelection#cutDetectionDistance", "Cut detection distance", 10)
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.chainsaw.particleSystems.emitterShape(?)#node", "Emitter shape", 0)
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.chainsaw.particleSystems.emitterShape(?)#particleType", "Particle type")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_2, "handTool.chainsaw.equipment#uvs", "Equipment uvs", "0 0")
  HandTool.xmlSchema:register(XMLValueType.STRING, "handTool.chainsaw.ringSelector#file", "Ring selector i3d file")
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.chainsaw.ringSelector#scaleOffset", "Ring selector scale offset", 0.3)
  HandTool.xmlSchema:register(XMLValueType.VECTOR_TRANS, "handTool.handNode.thirdPersonCutting#position", "Third person cutting position", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.VECTOR_ROT, "handTool.handNode.thirdPersonCutting#rotation", "Third person cutting rotation", "0 0 0")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.handNode.thirdPersonCutting#referenceNode", "Third person cutting reference node")
  AnimationManager.registerAnimationNodesXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.chain")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "start")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "idle")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "cutStart")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "cutStop")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "cutLoop")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "activeStart")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "activeStop")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "activeLoop")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds", "stop")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.sounds.quickTapSounds", "quickTap(?)")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.treeSounds", "cut(?)")
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.branchSounds", "branch(?)")
  ParticleUtil.registerParticleCopyXMLPaths(HandTool.xmlSchema, "handTool.chainsaw.particleSystems.emitterShape(?)")
  HandTool.xmlSchema:setXMLSpecializationType()
end)
function Chainsaw.new(isServer, isClient, customMt)
  if not customMt then
  end
  return v3(v4, v5, v6)
end
function Chainsaw:postLoad(xmlFile)
  local v3 = v3:superClass()
  local v2 = v3.postLoad(self, xmlFile)
  if not v2 then
    return false
  end
  self.rotateInput = 0
  self.activatePressed = false
  self.eventIdRotateHandtool = ""
  self.rotationZ = 0
  self.rotationSpeedZ = 0.003
  v2 = xmlFile:getValue("handTool.chainsaw#cutSizeY", 1.1)
  self.cutSizeY = v2
  v2 = xmlFile:getValue("handTool.chainsaw#cutSizeZ", 1)
  self.cutSizeZ = v2
  self.isCutting = false
  self.waitingForResetAfterCut = false
  v2 = getChildAt(self.rootNode, 0)
  self.cutNode = v2
  v2 = getChildAt(self.cutNode, 0)
  self.graphicsNode = v2
  v2 = getChildAt(self.graphicsNode, 0)
  self.chainNode = v2
  v2 = getChildAt(self.graphicsNode, 1)
  self.psNode = v2
  v2 = getChildAt(self.graphicsNode, 5)
  self.cutPositionNode = v2
  v3 = xmlFile:getValue("handTool.chainsaw.pricePerMinute", 50)
  self.pricePerSecond = v3 / 1000
  v3 = xmlFile:getValue("handTool.chainsaw#quicktapThreshold", 0)
  self.quicktapThreshold = v3 * 1000
  v2 = xmlFile:getValue("handTool.chainsaw.targetSelection#minCutDistance", 0.5)
  self.minCutDistance = v2
  v2 = xmlFile:getValue("handTool.chainsaw.targetSelection#maxCutDistance", 1)
  self.maxCutDistance = v2
  v2 = xmlFile:getValue("handTool.chainsaw.targetSelection#cutDetectionDistance", 10)
  self.cutDetectionDistance = v2
  if self.isClient then
    self.particleSystems = {}
    xmlFile:iterate("handTool.chainsaw.particleSystems.emitterShape", function(self, xmlFile)
      local v2 = v2:getValue(xmlFile .. "#node", nil, u1.rootNode)
      local v3 = v3:getValue(xmlFile .. "#particleType")
      if v2 ~= nil then
        local v5 = v5:getParticleSystem(v3)
        if v5 ~= nil then
          local v6 = v6:getParticleMaterial(FillType.WOODCHIPS, v3, 1)
          if v6 ~= nil then
            ParticleUtil.setMaterial(v5, v6)
          end
          local filename = ParticleUtil.copyParticleSystem(u0, xmlFile, v5, v2)
          table.insert(...)
        end
      end
    end)
    if #self.particleSystems == 0 then
      self.particleSystems = nil
    end
    v2 = xmlFile:getValue("handTool.chainsaw.equipment#uvs", "0 0", true)
    self.equipmentUVs = v2
    v2 = v2:loadAnimations(xmlFile, "handTool.chainsaw.chain", self.rootNode, self, nil)
    self.chains = v2
    self.samples = {}
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "start", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samples.start = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "idle", self.baseDirectory, self.rootNode, 0, AudioGroup.VEHICLE, nil, nil)
    self.samples.idle = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "cutStart", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samples.cutStart = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "cutStop", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samples.cutStop = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "cutLoop", self.baseDirectory, self.rootNode, 0, AudioGroup.VEHICLE, nil, nil)
    self.samples.cutLoop = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "activeStart", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samples.activeStart = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "activeStop", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samples.activeStop = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "activeLoop", self.baseDirectory, self.rootNode, 0, AudioGroup.VEHICLE, nil, nil)
    self.samples.activeLoop = v3
    v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds", "stop", self.baseDirectory, self.rootNode, 0, AudioGroup.VEHICLE, nil, nil)
    self.samples.stop = v3
    self.samplesQuicktap = {}
    while true do
      v7 = string.format("quickTap(%d)", v2)
      v3 = v3:loadSampleFromXML(xmlFile, "handTool.chainsaw.sounds.quickTapSounds", v7, self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
      if not (v3 ~= nil) then
        break
      end
      table.insert(self.samplesQuicktap, v3)
    end
    self.samplesQuicktapCount = v2
    self.samplesTree = {}
    local v4 = v4:loadSampleFromXML(xmlFile, "handTool.chainsaw.treeSounds", "cut", self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
    self.samplesTree.cut = v4
    self.samplesBranch = {}
    while true do
      v8 = string.format("branch(%d)", v3)
      v4 = v4:loadSampleFromXML(xmlFile, "handTool.chainsaw.branchSounds", v8, self.baseDirectory, self.rootNode, 1, AudioGroup.VEHICLE, nil, nil)
      if not (v4 ~= nil) then
        break
      end
      table.insert(self.samplesBranch, v4)
    end
    self.samplesBranchCount = v3
    self.samplesBranchActiveTimer = 0
    v4 = createTransformGroup("cutSoundLinkNode")
    self.samplesTreeLinkNode = v4
    link(self.cutNode, self.samplesTreeLinkNode)
    if self.samplesTree.cut ~= nil and self.samplesTree.cut.soundNode ~= nil then
      link(self.samplesTreeLinkNode, self.samplesTree.cut.soundNode)
    end
    v4 = FSMUtil.create()
    self.soundFSM = v4
    v7 = ChainsawSoundStateStart.new(Chainsaw.SOUND_STATES.START, self, self.soundFSM)
    v4:addState(...)
    v7 = ChainsawSoundStateStop.new(Chainsaw.SOUND_STATES.STOP, self, self.soundFSM)
    v4:addState(...)
    v7 = ChainsawSoundStateIdle.new(Chainsaw.SOUND_STATES.IDLE, self, self.soundFSM)
    v4:addState(...)
    v7 = ChainsawSoundStateActive.new(Chainsaw.SOUND_STATES.ACTIVE, self, self.soundFSM)
    v4:addState(...)
    v7 = ChainsawSoundStateCut.new(Chainsaw.SOUND_STATES.CUT, self, self.soundFSM)
    v4:addState(...)
    v7 = ChainsawSoundStateQuicktap.new(Chainsaw.SOUND_STATES.QUICKTAP, self, self.soundFSM)
    v4:addState(...)
    v4 = xmlFile:getValue("handTool.chainsaw.ringSelector#scaleOffset", 0.3)
    self.ringSelectorScaleOffset = v4
    v4 = createTransformGroup("chainsaw_rotationNode")
    self.rotationNode = v4
    local v5 = getRootNode()
    link(v5, self.rotationNode)
    v4 = createTransformGroup("chainsaw_cameraFocus")
    self.chainsawCameraFocus = v4
    link(self.rotationNode, self.chainsawCameraFocus)
    v4 = createTransformGroup("chainsaw_splitShapeFocus")
    self.chainsawSplitShapeFocus = v4
    link(self.chainsawCameraFocus, self.chainsawSplitShapeFocus)
    v4 = xmlFile:getVector("handTool.chainsaw.cutAnimation#cutFocusOffset", "0 0 -1", 3)
    v7 = unpack(v4)
    setTranslation(...)
    v5 = xmlFile:getVector("handTool.chainsaw.cutAnimation#cutFocusRotation", "0 0 0", 3)
    local v6, v7, v8 = unpack(v5)
    local v11 = math.rad(v6)
    local v12 = math.rad(v7)
    local v13 = math.rad(v8)
    setRotation(...)
    local filename = xmlFile:getValue("handTool.chainsaw.ringSelector#file")
    if filename ~= nil then
      local v10 = Utils.getFilename(filename, self.baseDirectory)
      v10:pinSharedI3DFileInCache(v10)
      v10 = v10:loadSharedI3DFileAsync(v10, false, false, self.onRingSelectorLoaded, self, self.player)
      self.sharedLoadRequestIdRingSelector = v10
    end
  end
  if self.player ~= g_currentMission.player then
    v2 = xmlFile:getValue("handTool.handNode.thirdPersonCutting#position", "0 0 0", true)
    self.handNodePositionInCutting = v2
    v2 = xmlFile:getValue("handTool.handNode.thirdPersonCutting#rotation", "0 0 0", true)
    self.handNodeRotationInCutting = v2
    v2 = xmlFile:getValue("handTool.handNode.thirdPersonCutting#referenceNode", nil, self.rootNode)
    self.referenceNodeInCutting = v2
  end
  self.lastWorkTime = 0
  self.maxWorkTime = 300
  self.moveSpeedY = 0.0001
  self.speedFactor = 0
  self.defaultCutDuration = 8
  self.maxTrunkWidthSq = 1
  self.outDuration = 0.15
  self.inDuration = 0.15
  self.cutTimer = 0
  self.outTimer = self.outDuration
  self.transitionAlpha = 0
  self.cameraTransitionState = Chainsaw.CAMERA_TRANSITION_STATES.NONE
  self.minRotationZ = 1.5707963267948966
  self.maxRotationZ = -1.5707963267948966
  self.maxModelTranslation = 0
  self.cutFocusDistance = -1
  self.startCameraDirectionY = {0, 1, 0}
  self.startCameraDirectionZ = {0, 0, 1}
  self.endCameraDirectionY = {0, 1, 0}
  self.endCameraDirectionZ = {0, 0, 1}
  self.startChainsawPosition = {0, 0, 0}
  self.endChainsawPosition = {0, 0, 0}
  self.showNotOwnedWarning = false
  self.isCutting = false
  self.isHorizontalCut = false
  return true
end
function Chainsaw:delete()
  if self.isClient then
    ParticleUtil.deleteParticleSystems(self.particleSystems)
    v1:deleteSamples(self.samplesTree)
    v1:deleteSamples(self.samplesBranch)
    v1:deleteSamples(self.samples)
    v1:deleteSamples(self.samplesQuicktap)
    v1:deleteAnimations(self.chains)
    if self.ringSelector ~= nil then
      delete(self.ringSelector)
      self.ringSelector = nil
    end
    if self.chainsawCameraFocus ~= nil then
      delete(self.chainsawCameraFocus)
    end
    if self.sharedLoadRequestIdRingSelector ~= nil then
      v1:releaseSharedI3DFile(self.sharedLoadRequestIdRingSelector)
      self.sharedLoadRequestIdRingSelector = nil
    end
  end
  local v2 = v2:superClass()
  v2.delete(self)
  if self.rotationNode ~= nil then
    delete(self.rotationNode)
  end
end
function Chainsaw:cutRaycastCallback(hitObjectId, x, y, z, distance)
  setWorldTranslation(self.chainsawCameraFocus, x, y, z)
  self.cutFocusDistance = distance
end
function Chainsaw:updateCutRaycast()
  self.cutFocusDistance = -1
  setTranslation(self.chainsawCameraFocus, 0, 0, 0)
  local v1, v2, v3 = getWorldTranslation(self.player.cameraNode)
  local v4, v5, v6 = unProject(0.52, 0.4, 1)
  local v7, v8, v9 = MathUtil.vector3Normalize(v4, v5, v6)
  raycastClosest(v1, v2, v3, v7, v8, v9, "cutRaycastCallback", self.cutDetectionDistance, self, 16789504)
end
function Chainsaw:testTooLow(shape, minY, maxY, minZ, maxZ)
  local v6, v7, v8 = localToLocal(self.chainsawSplitShapeFocus, shape, 0, minY, minZ)
  local v9, v10, v11 = localToLocal(self.chainsawSplitShapeFocus, shape, 0, maxY, minZ)
  local v12, v13, v14 = localToLocal(self.chainsawSplitShapeFocus, shape, 0, maxY, maxZ)
  if v7 >= 0.01 and v10 >= 0.03 and v13 >= 0.01 then
  end
  if not v15 then
    local v16, v17, v18 = localToWorld(self.chainsawSplitShapeFocus, 0, minY, minZ)
    local v19, v20, v21 = localToWorld(self.chainsawSplitShapeFocus, 0, minY, maxZ)
    local v22, v23, v24 = localToWorld(self.chainsawSplitShapeFocus, 0, maxY, minZ)
    local v25, v26, v27 = localToWorld(self.chainsawSplitShapeFocus, 0, maxY, maxZ)
    local v28 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v16, v17, v18)
    local v29 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v19, v20, v21)
    local v30 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v22, v23, v24)
    local v31 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v25, v26, v27)
    if v28 >= 0.01 and v29 >= 0.01 and v30 >= 0.03 and v31 >= 0.01 then
    end
  end
  if v15 then
    return true
  end
  return false
end
function Chainsaw.getLookAt(v0, v1, v2, v3, v4)
  local v15 = getWorldTranslation(v1)
  local v17 = getParent(v1)
  local v16 = localDirectionToWorld(v17, 0, -1, 0)
  local v16, v17, v18 = MathUtil.vector3Normalize({}[1] - v2, {}[2] - v3, {}[3] - v4)
  v16, v17, v18 = MathUtil.crossProduct(v16, v17, v18, {}[1], {}[2], {}[3])
  v16, v17, v18 = MathUtil.vector3Normalize(v16, v17, v18)
  v16, v17, v18 = MathUtil.crossProduct(v16, v17, v18, v16, v17, v18)
  v16, v17, v18 = MathUtil.vector3Normalize(v16, v17, v18)
  return v16, v17, v18, v16, v17, v18
end
function Chainsaw:getCutStartEnd()
  local v2 = getWorldTranslation(self.ringSelector)
  local v3 = getScale(self.ringSelector)
  local v4 = localDirectionToWorld(self.ringSelector, 0, 1, 0)
  return {{}[1] - 0.5 * {}[1] * {}[1], {}[2] - 0.5 * {}[2] * {}[2], {}[3] - 0.5 * {}[3] * {}[3]}[1], {{}[1] - 0.5 * {}[1] * {}[1], {}[2] - 0.5 * {}[2] * {}[2], {}[3] - 0.5 * {}[3] * {}[3]}[2], {{}[1] - 0.5 * {}[1] * {}[1], {}[2] - 0.5 * {}[2] * {}[2], {}[3] - 0.5 * {}[3] * {}[3]}[3], {{}[1] + 0.5 * {}[1] * {}[1], {}[2] + 0.5 * {}[2] * {}[2], {}[3] + 0.5 * {}[3] * {}[3]}[1], {{}[1] + 0.5 * {}[1] * {}[1], {}[2] + 0.5 * {}[2] * {}[2], {}[3] + 0.5 * {}[3] * {}[3]}[2], {{}[1] + 0.5 * {}[1] * {}[1], {}[2] + 0.5 * {}[2] * {}[2], {}[3] + 0.5 * {}[3] * {}[3]}[3]
end
function Chainsaw:calculateCutDuration()
  local v1, v2, v3, v4, v5, v6 = self:getCutStartEnd()
  local v7 = MathUtil.vector3LengthSq(v4 - v1, v5 - v2, v6 - v3)
  local v8 = MathUtil.clamp(v7, 0, self.maxTrunkWidthSq)
  return v8 * self.defaultCutDuration / self.maxTrunkWidthSq
end
function Chainsaw:updateCuttingTimers(dt, isCutting)
  self.transitionAlpha = 0
  if isCutting then
    local v4 = self:calculateCutDuration()
    if self.cutTimer == 0 then
      self.outTimer = 0
      self.cameraTransitionState = Chainsaw.CAMERA_TRANSITION_STATES.IN
    elseif self.cutTimer == self.inDuration then
      self.cameraTransitionState = Chainsaw.CAMERA_TRANSITION_STATES.CUT
    end
    if 0 <= self.cutTimer and self.cutTimer < self.inDuration then
      local v5 = math.min(self.cutTimer + v3, self.inDuration)
      self.cutTimer = v5
      local v6 = MathUtil.clamp(self.cutTimer, 0, self.inDuration)
      self.transitionAlpha = v6 / self.inDuration
      return
    end
    if self.inDuration <= self.cutTimer and self.cutTimer < v4 then
      v5 = math.max(v4 - self.inDuration, 0)
      v6 = math.min(self.cutTimer + v3, v4)
      self.cutTimer = v6
      local v7 = MathUtil.clamp(self.cutTimer - self.inDuration, 0, v5)
      self.transitionAlpha = v7 / v5
      return
    end
    self.transitionAlpha = 1
    return
  end
  if self.outTimer == 0 then
    self.cutTimer = 0
    self.cameraTransitionState = Chainsaw.CAMERA_TRANSITION_STATES.OUT
  end
  if 0 <= self.outTimer and self.outTimer < self.outDuration then
    v4 = math.min(self.outTimer + v3, self.outDuration)
    self.outTimer = v4
    v5 = MathUtil.clamp(self.outTimer, 0, self.outDuration)
    self.transitionAlpha = v5 / self.outDuration
  end
end
function Chainsaw:resetTransitionState()
  if self.cameraTransitionState ~= Chainsaw.CAMERA_TRANSITION_STATES.NONE then
    self.cameraTransitionState = Chainsaw.CAMERA_TRANSITION_STATES.NONE
  end
end
function Chainsaw.updateCuttingCamera(v0, dt)
end
function Chainsaw:updateChainsawModel(isCutting)
  local v3 = getWorldTranslation(self.graphicsNode)
  if isCutting then
    local v5, v6, v7, v8, v9, v10 = self:getCutStartEnd()
    if self.cameraTransitionState == Chainsaw.CAMERA_TRANSITION_STATES.IN then
      self.startChainsawPosition = {}
      self.endChainsawPosition = {v5, v6, v7}
      -- goto L84  (LOP_JUMP +46)
    end
    -- if v0.cameraTransitionState ~= Chainsaw.CAMERA_TRANSITION_STATES.CUT then goto L84 end
    self.startChainsawPosition = v3
    self.endChainsawPosition = v4
  elseif self.cameraTransitionState == Chainsaw.CAMERA_TRANSITION_STATES.OUT then
    self.startChainsawPosition = {}
    setTranslation(self.graphicsNode, 0, 0, 0)
    local v4 = getWorldTranslation(self.graphicsNode)
    self.endChainsawPosition = {}
  end
  if not isCutting then
    -- if v0.outTimer >= v0.outDuration then goto L285 end
  end
  v4 = MathUtil.lerp(self.startChainsawPosition[1], self.endChainsawPosition[1], self.transitionAlpha)
  v5 = MathUtil.lerp(self.startChainsawPosition[2], self.endChainsawPosition[2], self.transitionAlpha)
  v6 = MathUtil.lerp(self.startChainsawPosition[3], self.endChainsawPosition[3], self.transitionAlpha)
  v5 = localToLocal(self.cutPositionNode, self.graphicsNode, 0, 0, 0)
  v6 = localDirectionToWorld(self.ringSelector, 0, 0, {}[3])
  v9 = getParent(self.graphicsNode)
  v8 = worldToLocal(v9, {{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[1], {{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[2], {{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[3])
  v8 = MathUtil.vector3Length({}[1], {}[2], {}[3])
  if self.maxModelTranslation < v8 then
    v10 = MathUtil.vector3Normalize({}[1], {}[2], {}[3])
    v10 = project({{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[1], {{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[2], {{}[1] - {}[1], {}[2] - {}[2], {}[3] - {}[3]}[3])
    setTranslation(self.graphicsNode, {{}[1] * self.maxModelTranslation, {}[2] * self.maxModelTranslation, {}[3] * self.maxModelTranslation}[1], {{}[1] * self.maxModelTranslation, {}[2] * self.maxModelTranslation, {}[3] * self.maxModelTranslation}[2], {{}[1] * self.maxModelTranslation, {}[2] * self.maxModelTranslation, {}[3] * self.maxModelTranslation}[3])
    local v11 = getWorldTranslation(self.graphicsNode)
    local v12 = project({}[1], {}[2], {}[3])
    local v13 = unProject({}[1], {}[2], {}[3])
    setWorldTranslation(self.graphicsNode, {}[1], {}[2], {}[3])
    return
  end
  setTranslation(self.graphicsNode, v7[1], v7[2], v7[3])
  return
  setTranslation(self.graphicsNode, 0, 0, 0)
end
function Chainsaw:getCutShapeInformation()
  local isCutting, isCutting, v3 = getWorldTranslation(self.chainsawSplitShapeFocus)
  local v4, v5, v6 = localDirectionToWorld(self.chainsawSplitShapeFocus, 1, 0, 0)
  local v7, v8, v9 = localDirectionToWorld(self.chainsawSplitShapeFocus, 0, 1, 0)
  return isCutting, isCutting, v3, v4, v5, v6, v7, v8, v9
end
function Chainsaw:update(dt, allowInput)
  local v4 = v4:superClass()
  v4.update(self, dt, allowInput)
  if self.isServer then
    v4:updateFarmStats(self.player.farmId, "expenses", self.pricePerSecond * dt / 1000)
    v4:addMoney(-(self.pricePerSecond * dt / 1000), self.player.farmId, MoneyType.VEHICLE_RUNNING_COSTS)
  end
  local v3, v4, v5 = getWorldRotation(self.player.cameraNode)
  setWorldRotation(self.rotationNode, v3, v4, v5)
  if self.isClient then
    if not self.isCutting then
      self:updateCutRaycast()
    end
    if self.showNotOwnedWarning then
      local v8 = v8:getText("warning_youAreNotAllowedToCutThisTree")
      v6:showBlinkingWarning(v8, 2000)
      self.showNotOwnedWarning = false
    end
  end
  self.shouldDelimb = false
  if allowInput then
    local v13 = math.random(-1, 1)
    local v12 = math.rad(...)
    local v14 = math.random(-1, 1)
    v13 = math.rad(...)
    setRotation(self.graphicsNode, v12 * 0.1, v13 * 0.1, -3.141592653589793)
    if self.curSplitShape == nil then
      if self.rotateInput == 0 then
      end
      if self.rotateInput ~= 0 then
        local v9 = MathUtil.clamp(self.rotationZ + self.rotationSpeedZ * self.rotateInput * dt, self.maxRotationZ, self.minRotationZ)
        self.rotationZ = v9
        setRotation(self.rootNode, self.handNodeRotation[1], self.handNodeRotation[2], self.handNodeRotation[3] - self.rotationZ)
        setRotation(self.chainsawCameraFocus, 0, 0, -self.rotationZ)
      end
    end
    if not self.waitingForResetAfterCut then
      if self.curSplitShape == nil then
        -- cmp-jump LOP_JUMPXEQKN R10 aux=0x8000002e -> L299
      end
      if self.curSplitShape ~= nil then
        local v10 = entityExists(self.curSplitShape)
        -- if v10 then goto L293 end
      end
      self.curSplitShape = nil
      local v10, v11, v12, v13, v14, v15, v16, v17, v18 = self:getCutShapeInformation()
      local v23, v24, v25, v26, v27 = findSplitShape(v10, v11, v12, v13, v14, v15, v16, v17, v18, self.cutSizeY, self.cutSizeZ)
      if v23 ~= nil and v23 ~= 0 then
        v23 = self:isCuttingAllowed(v10, v11, v12, v23)
        if v23 then
          self.showNotOwnedWarning = false
          v23 = self:testTooLow(v23, v24, v25, v26, v27)
          if self.cutFocusDistance >= 0 and self.cutDetectionDistance > self.cutFocusDistance then
          end
          if not v23 then
            -- if not v24 then goto L284 end
          end
          self.player.walkingIsLocked = false
          self.curSplitShape = nil
        else
          self.showNotOwnedWarning = true
        end
      end
      self.curSplitShapeMinY = v19
      self.curSplitShapeMaxY = v20
      self.curSplitShapeMinZ = v21
      self.curSplitShapeMaxZ = v22
      -- goto L295  (LOP_JUMP +2)
      self:updateRingSelector(self.curSplitShape)
    end
    if self.activatePressed then
      v10 = math.min(self.speedFactor + dt / self.maxWorkTime, 1)
      self.speedFactor = v10
      -- if v0.waitingForResetAfterCut then goto L591 end
      if self.minCutDistance <= self.cutFocusDistance and self.cutFocusDistance < self.maxCutDistance and self.ringSelector == nil then
      end
      self.shouldDelimb = v10
      if self.curSplitShape == nil then
        -- cmp-jump LOP_JUMPXEQKN R11 aux=0x8000002e -> L591
      end
      -- if not v10 then goto L591 end
      if self.curSplitShape ~= nil then
        v11 = entityExists(self.curSplitShape)
        -- if not v11 then goto L420 end
        local v11, v12, v13, v14, v15, v16, v17, v18, v19 = self:getCutShapeInformation()
        local v20, v21, v22, v23 = testSplitShape(self.curSplitShape, v11, v12, v13, v14, v15, v16, v17, v18, v19, self.cutSizeY, self.cutSizeZ)
        if v20 == nil then
          self.player.walkingIsLocked = false
          self.curSplitShape = nil
        else
          v24 = self:testTooLow(self.curSplitShape, v20, v21, v22, v23)
          if v24 then
            self.player.walkingIsLocked = false
            self.curSplitShape = nil
          end
        end
        self.curSplitShapeMinY = v20
        self.curSplitShapeMaxY = v21
        self.curSplitShapeMinZ = v22
        self.curSplitShapeMaxZ = v23
      elseif v9 ~= 0 then
        self.player.walkingIsLocked = true
        self.curSplitShape = v9
      end
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L591
      v11, v12, v13, v14, v15, v16, v17, v18, v19 = self:getCutShapeInformation()
      v20 = self:isCuttingAllowed(v11, v12, v13, self.curSplitShape)
      if v20 then
      end
      if 0 < self.cutTimer then
        v20 = math.min(self.lastWorkTime, self.maxWorkTime * 0.7)
        self.lastWorkTime = v20
      end
      v20 = self:calculateCutDuration()
      -- if v20 > v0.cutTimer then goto L591 end
      v21 = v21:getIsServer()
      if v21 then
        ChainsawUtil.cutSplitShape(self.curSplitShape, v11, v12, v13, v14, v15, v16, v17, v18, v19, self.cutSizeY, self.cutSizeZ, self.player.farmId)
      else
        v21 = v21:getServerConnection()
        v23 = ChainsawCutEvent.new(self.curSplitShape, v11, v12, v13, v14, v15, v16, v17, v18, v19, self.cutSizeY, self.cutSizeZ, self.player.farmId)
        v21:sendEvent(...)
      end
      self.waitingForResetAfterCut = true
      self.player.walkingIsLocked = false
      self.curSplitShape = nil
      self.curSplitShapeMinY = nil
      self:updateRingSelector(0)
    else
      v10 = math.max(self.speedFactor - dt / self.maxWorkTime, 0)
      self.speedFactor = v10
      self.waitingForResetAfterCut = false
      self.player.walkingIsLocked = false
      self.curSplitShape = nil
      self.curSplitShapeMinY = nil
      v10 = math.max(self.lastWorkTime - dt, 0)
      self.lastWorkTime = v10
      self.workUpPlayed = false
    end
    v10:lockInput(v6)
    self:updateCuttingTimers(dt, v7)
    self:updateCuttingCamera(v7)
    self:updateChainsawModel(v7)
    self:updateDelimb()
    if 0.7 >= self.rotationZ then
    end
    self:setCutting(v12, true, v8)
  end
  v7:update(dt)
  self:updateParticles()
  self.rotateInput = 0
  self.activatePressed = false
end
function Chainsaw:isCuttingAllowed(x, y, z, shape)
  local v5 = v5:canFarmAccessLand(self.player.farmId, x, z)
  if v5 then
    v5 = v5:getHasPlayerPermission("cutTrees")
  end
  return v5
end
function Chainsaw:updateDelimb()
  if self.shouldDelimb then
    local dt, allowInput, v3, v4, v5, v6, v7, v8, v9 = self:getCutShapeInformation()
    local v10 = v10:getIsServer()
    if v10 then
      findAndRemoveSplitShapeAttachments(dt, allowInput, v3, v4, v5, v6, v7, v8, v9, 0.7, self.cutSizeY, self.cutSizeZ)
      return
    end
    v10 = v10:getServerConnection()
    local v12 = ChainsawDelimbEvent.new(self.player, dt, allowInput, v3, v4, v5, v6, v7, v8, v9, false)
    v10:sendEvent(...)
  end
end
function Chainsaw:updateParticles()
  if self.particleSystems ~= nil then
    if self.isCutting and g_currentMission.time >= self.samplesBranchActiveTimer then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L29
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L29
      -- if v0.inDuration >= v0.cutTimer then goto L29 end
    end
    if self.isCutting and self.player.isOwner then
    end
    for v5, v6 in pairs(self.particleSystems) do
      ParticleUtil.setEmittingState(v6, dt)
    end
  end
end
function Chainsaw:onRingSelectorLoaded(node, failedReason, args)
  if node ~= 0 then
    if not self.isDeleted then
      local v4 = getChildAt(node, 0)
      self.ringSelector = v4
      setVisibility(self.ringSelector, false)
      link(self.chainsawSplitShapeFocus, self.ringSelector)
    end
    delete(node)
  end
end
function Chainsaw:updateRingSelector(shape)
  if self.ringSelector ~= nil then
    if shape ~= nil and shape == 0 then
    end
    if g_woodCuttingMarkerEnabled and allowInput then
      if self.cutFocusDistance ~= nil and 0 <= self.cutFocusDistance and self.cutFocusDistance < self.cutDetectionDistance and self.minCutDistance <= self.cutFocusDistance and self.cutFocusDistance >= self.maxCutDistance then
      end
      local v5 = getVisibility(self.ringSelector)
      if not v5 then
        -- if not v3 then goto L83 end
        local v5, v6, v7 = getWorldTranslation(self.ringSelector)
        local v8 = self:isCuttingAllowed(v5, v6, v7, shape)
        if v8 then
          setVisibility(self.ringSelector, true)
          -- goto L96  (LOP_JUMP +20)
        end
        setVisibility(self.ringSelector, false)
      else
        v5 = getVisibility(self.ringSelector)
        if v5 and not v3 then
          setVisibility(self.ringSelector, false)
        end
      end
      v5 = getVisibility(self.ringSelector)
      -- if not v5 then goto L212 end
      if v4 then
        setShaderParameter(self.ringSelector, "colorScale", 0.395, 0.925, 0.115, 1, false)
      else
        setShaderParameter(self.ringSelector, "colorScale", 0.098, 0.45, 0.96, 1, false)
      end
      if self.curSplitShapeMinY ~= nil then
        v5 = math.max(self.curSplitShapeMaxY - self.curSplitShapeMinY + self.ringSelectorScaleOffset, self.curSplitShapeMaxZ - self.curSplitShapeMinZ + self.ringSelectorScaleOffset)
        setScale(self.ringSelector, 1, v5, v5)
        v6, v7, v8 = localToWorld(self.chainsawSplitShapeFocus, 0, (self.curSplitShapeMinY + self.curSplitShapeMaxY) * 0.5, (self.curSplitShapeMinZ + self.curSplitShapeMaxZ) * 0.5)
        local v10 = getParent(self.ringSelector)
        local v9, v10, v11 = worldToLocal(v10, v6, v7, v8)
        setTranslation(self.ringSelector, v9, v10, v11)
        return
      end
      setScale(self.ringSelector, 1, 1, 1)
      return
    end
    setVisibility(self.ringSelector, false)
  end
end
function Chainsaw:setCutting(isCutting, isHorizontalCut, hasBeenCut, noEventSend)
  ChainsawStateEvent.sendEvent(self.player, isCutting, isHorizontalCut, hasBeenCut, noEventSend)
  if not self.player.isOwner then
    v5:setCuttingAnim(isCutting, isHorizontalCut)
    if self.isCutting ~= isCutting then
      if isCutting then
        local v7 = unpack(self.handNodePositionInCutting)
        setTranslation(...)
        v7 = unpack(self.handNodeRotationInCutting)
        setRotation(...)
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L143
        local v5, v6, v7 = getWorldTranslation(self.referenceNodeInCutting)
        local v9 = getParent(self.handNode)
        local v8, v9, v10 = worldToLocal(v9, v5, v6, v7)
        v8, v9, v10 = getTranslation(self.handNode)
        setTranslation(self.handNode, v8 - v8, v9 - v9, v10 - v10)
      else
        v7 = unpack(self.handNodePosition)
        setTranslation(...)
        v7 = unpack(self.handNodeRotation)
        setRotation(...)
        if self.referenceNode ~= nil then
          v5, v6, v7 = getWorldTranslation(self.referenceNode)
          v9 = getParent(self.handNode)
          v8, v9, v10 = worldToLocal(v9, v5, v6, v7)
          v8, v9, v10 = getTranslation(self.handNode)
          setTranslation(self.handNode, v8 - v8, v9 - v9, v10 - v10)
        end
      end
    end
  end
  self.isCutting = isCutting
  self.isHorizontalCut = isHorizontalCut
  self.hasBeenCut = hasBeenCut
end
function Chainsaw:getChainSpeedFactor()
  return self.speedFactor
end
function Chainsaw:onActivate(allowInput)
  local v3 = v3:superClass()
  v3.onActivate(self)
  self.rotationZ = 0
  setRotation(self.rootNode, self.handNodeRotation[1], self.handNodeRotation[2], self.handNodeRotation[3])
  setRotation(self.chainsawCameraFocus, 0, 0, self.rotationZ)
  self.startTime = g_currentMission.time
  if self.isClient then
    allowInput:startAnimations(self.chains)
  end
  self.cutTimer = 0
  setTranslation(self.graphicsNode, 0, 0, 0)
  allowInput:changeState(Chainsaw.SOUND_STATES.START)
end
function Chainsaw:onDeactivate(allowInput)
  local v3 = v3:superClass()
  v3.onDeactivate(self)
  self.speedFactor = 0
  self.curSplitShape = nil
  allowInput:lockInput(false)
  self.player.walkingIsLocked = false
  if self.isClient then
    allowInput:stopAnimations(self.chains)
    self.cutTimer = 0
    setTranslation(self.graphicsNode, 0, 0, 0)
    if self.particleSystems ~= nil then
      for v5, v6 in pairs(self.particleSystems) do
        ParticleUtil.resetNumOfEmittedParticles(v6)
        ParticleUtil.setEmittingState(v6, false)
      end
    end
    if self.ringSelector ~= nil then
      setVisibility(self.ringSelector, false)
    end
  end
  allowInput:changeState(Chainsaw.SOUND_STATES.STOP)
end
function Chainsaw:registerActionEvents()
  dt:beginActionEventsModification(Player.INPUT_CONTEXT_NAME)
  local dt, allowInput = dt:registerActionEvent(InputAction.AXIS_ROTATE_HANDTOOL, self, self.onInputRotate, false, false, true, true)
  local v6 = v6:getText("action_rotate")
  v3:setActionEventText(...)
  self.eventIdRotateHandtool = allowInput
  v3:endActionEventsModification()
end
function Chainsaw:onInputRotate(_, inputValue)
  self.rotateInput = self.rotateInput + inputValue
end
function Chainsaw:isBeingUsed()
  return self.isCutting
end
function Chainsaw:getNeedCustomWorkStyle()
  local dt = dt:getStyle()
  if dt == nil then
    return false
  end
  if dt.glovesConfig.selection == 0 then
    return true
  end
  if allowInput.items[v3] ~= nil then
    -- if v2.items[v3].isForestryItem then goto L32 end
  end
  return true
  if dt.headgearConfig.selection == 0 then
    return true
  end
  if v4.items[v5] ~= nil then
    -- if v4.items[v5].isForestryItem then goto L53 end
  end
  return true
  return false
end
