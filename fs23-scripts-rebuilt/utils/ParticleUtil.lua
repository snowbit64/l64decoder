-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ParticleUtil = {}
function ParticleUtil:loadParticleSystemData(v1, v2)
  local v3 = type(self)
  if v3 == "table" then
  end
  v3 = getXMLString(self, v2 .. "#node")
  v1.nodeStr = v3
  v3 = getXMLString(self, v2 .. "#file")
  v1.psFile = v3
  local v4 = getXMLString(self, v2 .. "#position")
  local v3, v4, v5 = string.getVector(...)
  v1.posX = v3
  v1.posY = v4
  v1.posZ = v5
  v4 = getXMLString(self, v2 .. "#rotation")
  v3, v4, v5 = string.getVector(...)
  v1.rotX = v3
  v1.rotY = v4
  v1.rotZ = v5
  v3 = MathUtil.degToRad(v1.rotX)
  v1.rotX = v3
  v3 = MathUtil.degToRad(v1.rotY)
  v1.rotY = v3
  v3 = MathUtil.degToRad(v1.rotZ)
  v1.rotZ = v3
  v4 = getXMLBool(self, v2 .. "#worldSpace")
  v3 = Utils.getNoNil(v4, true)
  v1.worldSpace = v3
  v3 = getXMLString(self, v2 .. "#particleNode")
  v1.psRootNodeStr = v3
  v4 = getXMLBool(self, v2 .. "#forceFullLifespan")
  v3 = Utils.getNoNil(v4, false)
  v1.forceFullLifespan = v3
  v4 = getXMLBool(self, v2 .. "#useEmitterVisibility")
  v3 = Utils.getNoNil(v4, false)
  v1.useEmitterVisibility = v3
end
function ParticleUtil.loadParticleSystem(xmlFile, particleSystem, baseString, linkNodes, defaultEmittingState, defaultPsFile, baseDir, defaultLinkNode)
  ParticleUtil.loadParticleSystemData(xmlFile, {}, baseString)
  return ParticleUtil.loadParticleSystemFromData({}, particleSystem, linkNodes, defaultEmittingState, defaultPsFile, baseDir, defaultLinkNode)
end
function ParticleUtil:loadParticleSystemFromData(v1, v2, v3, v4, v5, v6)
  if v6 == nil then
    local v7 = type(v2)
    if v7 == "table" then
    end
  end
  local v8 = I3DUtil.indexToObject(v2, self.nodeStr)
  v7 = Utils.getNoNil(v8, v6)
  if self.psFile == nil then
  end
  if v8 == nil then
    return
  end
  local v9 = Utils.getFilename(v8, v5)
  v1.isValid = false
  local v10 = v10:loadSharedI3DFileAsync(v9, true, true, ParticleUtil.particleI3DFileLoaded, ParticleUtil, {data = self, particleSystem = v1, linkNode = v7, psFile = v9, defaultEmittingState = v3})
  v1.sharedLoadRequestId = v10
  return true
end
function ParticleUtil.particleI3DFileLoaded(_, i3dNode, failedReason, args)
  if i3dNode == 0 then
    print("Error: failed to load particle system " .. args.psFile)
    return
  end
  if v4.psRootNodeStr ~= nil then
    local v10 = I3DUtil.indexToObject(v9, v4.psRootNodeStr)
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L40
  else
    v10 = getChildAt(i3dNode, 0)
  end
  if v6 ~= nil then
    link(v6, v9)
  end
  if v4.posX ~= nil and v4.posY ~= nil and v4.posZ ~= nil then
    setTranslation(v9, v4.posX, v4.posY, v4.posZ)
  end
  if v4.rotX ~= nil and v4.rotY ~= nil and v4.rotZ ~= nil then
    setRotation(v9, v4.rotX, v4.rotY, v4.rotZ)
  end
  ParticleUtil.loadParticleSystemFromNode(v9, v5, v8, v4.worldSpace, v4.forceFullLifespan, v7)
  if v9 ~= i3dNode then
    delete(i3dNode)
  end
end
function ParticleUtil.loadParticleSystemFromNode(rootNode, particleSystem, defaultEmittingState, worldSpace, forceFullLifespan, file)
  if defaultEmittingState == nil then
  end
  local v6 = getHasClassId(rootNode, ClassIds.SHAPE)
  if v6 then
    v6 = getGeometry(rootNode)
    if v6 ~= 0 then
      local v7 = getHasClassId(v6, ClassIds.PARTICLE_SYSTEM)
      if v7 then
        v7 = getEmitterShape(v6)
        particleSystem.emitterShape = v7
        v7 = getEmitterSurfaceSize(v6)
        particleSystem.emitterShapeSize = v7
        v7 = getEmitterSurfaceSize(v6)
        particleSystem.defaultEmitterShapeSize = v7
        if worldSpace then
          v7 = getParent(rootNode)
          if particleSystem.emitterShape ~= 0 then
            local v8 = getParent(particleSystem.emitterShape)
            if v8 == rootNode then
              local v8, v9, v10 = getScale(particleSystem.emitterShape)
              local v15 = getWorldTranslation(particleSystem.emitterShape)
              local v13 = worldToLocal(...)
              setTranslation(...)
              v13 = localDirectionToWorld(particleSystem.emitterShape, 0, 0, 1)
              local v11, v12, v13 = worldDirectionToLocal(...)
              local v16 = localDirectionToWorld(particleSystem.emitterShape, 0, 1, 0)
              local v14, v15, v16 = worldDirectionToLocal(...)
              setDirection(particleSystem.emitterShape, v11, v12, v13, v14, v15, v16)
              link(v7, particleSystem.emitterShape)
              setScale(particleSystem.emitterShape, v8, v9, v10)
            end
          end
          v9 = getRootNode()
          link(v9, rootNode)
          setTranslation(rootNode, 0, 0, 0)
          setRotation(rootNode, 0, 0, 0)
        end
        setObjectMask(rootNode, 16711807)
        particleSystem.geometry = v6
        particleSystem.shape = rootNode
        particleSystem.worldSpace = worldSpace
        particleSystem.forceFullLifespan = forceFullLifespan
        v7 = getParticleSystemLifespan(v6)
        particleSystem.originalLifespan = v7
        particleSystem.isValid = true
        setEmittingState(v6, defaultEmittingState)
      end
    end
  end
  particleSystem.isEmitting = defaultEmittingState
  return rootNode
end
function ParticleUtil:deleteParticleSystem()
  if self ~= nil and self.shape ~= nil then
    local v1 = entityExists(self.shape)
    if v1 then
      delete(self.shape)
    end
    self.shape = nil
    if self.sharedLoadRequestId ~= nil then
      v1:releaseSharedI3DFile(self.sharedLoadRequestId)
      self.sharedLoadRequestId = nil
    end
  end
end
function ParticleUtil.deleteParticleSystems(particleSystems)
  if particleSystems ~= nil then
    for v4, v5 in pairs(particleSystems) do
      ParticleUtil.deleteParticleSystem(v5)
    end
  end
end
function ParticleUtil:setEmittingState(v1, v2, v3)
  if self ~= nil and self.isValid and self.isEmitting ~= v1 then
    self.isEmitting = v1
    if v2 == nil then
    end
    if v3 == nil then
    end
    if v1 then
      -- if not v2 then goto L31 end
      resetEmitStartTimer(self.geometry)
    elseif v3 then
      resetEmitStopTimer(self.geometry)
    end
    setEmittingState(self.geometry, v1)
    if v1 and self.useEmitterVisibility then
      local v6 = getEffectiveVisibility(self.emitterShape)
      setVisibility(...)
    end
  end
end
function ParticleUtil:getParticleSystemAverageSpeed()
  if self ~= nil and self.isValid then
    return getParticleSystemAverageSpeed(self.geometry)
  end
end
function ParticleUtil:setParticleSystemTimeScale(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemTimeScale(self.geometry, v1)
  end
end
function ParticleUtil:setEmitCountScale(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setEmitCountScale(self.geometry, v1)
  end
end
function ParticleUtil:setParticleLifespan(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemLifespan(self.geometry, v1, true)
  end
end
function ParticleUtil:addParticleSystemSimulationTime(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    addParticleSystemSimulationTime(self.geometry, v1)
  end
end
function ParticleUtil:setParticleStartStopTime(v1, v2)
  if self ~= nil and self.isValid and v1 ~= nil and v2 ~= nil then
    setEmitStartTime(self.geometry, v1 * 1000)
    setEmitStopTime(self.geometry, v2 * 1000)
  end
end
function ParticleUtil:getParticleSystemSpeed()
  if self ~= nil and self.isValid then
    return getParticleSystemSpeed(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpeed(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpeed(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemSpeedRandom()
  if self ~= nil and self.isValid then
    return getParticleSystemSpeedRandom(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpeedRandom(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpeedRandom(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemNormalSpeed()
  if self ~= nil and self.isValid then
    return getParticleSystemNormalSpeed(self.geometry)
  end
end
function ParticleUtil:setParticleSystemNormalSpeed(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemNormalSpeed(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemTangentSpeed()
  if self ~= nil and self.isValid then
    return getParticleSystemTangentSpeed(self.geometry)
  end
end
function ParticleUtil:setParticleSystemTangentSpeed(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemTangentSpeed(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemSpriteScaleX()
  if self ~= nil and self.isValid then
    return getParticleSystemSpriteScaleX(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpriteScaleX(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpriteScaleX(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemSpriteScaleY()
  if self ~= nil and self.isValid then
    return getParticleSystemSpriteScaleY(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpriteScaleY(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpriteScaleY(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemSpriteScaleXGain()
  if self ~= nil and self.isValid then
    return getParticleSystemSpriteScaleXGain(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpriteScaleXGain(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpriteScaleXGain(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemSpriteScaleYGain()
  if self ~= nil and self.isValid then
    return getParticleSystemSpriteScaleYGain(self.geometry)
  end
end
function ParticleUtil:setParticleSystemSpriteScaleYGain(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setParticleSystemSpriteScaleYGain(self.geometry, v1)
  end
end
function ParticleUtil:getParticleSystemVelocityScale()
  if self ~= nil and self.isValid then
    return getEmitterShapeVelocityScale(self.geometry)
  end
  return nil
end
function ParticleUtil:setParticleSystemVelocityScale(v1)
  if self ~= nil and self.isValid and v1 ~= nil then
    setEmitterShapeVelocityScale(self.geometry, v1)
  end
end
function ParticleUtil:resetNumOfEmittedParticles()
  if self ~= nil and self.isValid then
    resetNumOfEmittedParticles(self.geometry)
  end
end
function ParticleUtil:setEmitterShape(v1)
  if self ~= nil and self.isValid and v1 ~= nil and self.geometry ~= nil and self.geometry ~= 0 then
    local v2 = getHasClassId(self.geometry, ClassIds.PARTICLE_SYSTEM)
    if v2 then
      setEmitterShape(self.geometry, v1)
      self.emitterShape = v1
      v2 = getEmitterSurfaceSize(self.geometry)
      self.emitterShapeSize = v2
    end
  end
end
function ParticleUtil:initEmitterScale(v1)
  if self ~= nil and self.isValid then
    local v5 = getNumOfParticlesToEmitPerMs(self.geometry)
    setNumOfParticlesToEmitPerMs(self.geometry, v5 * v1)
    local v6 = getMaxNumOfParticles(self.geometry)
    local v4 = math.ceil(v6 * v1)
    setMaxNumOfParticles(...)
  end
end
function ParticleUtil:setMaterial(v1)
  if self ~= nil and self.isValid then
    setMaterial(self.shape, v1, 0)
  end
end
function ParticleUtil:copyParticleSystem(v1, v2, v3)
  if v1 ~= nil then
    local v5 = self:getValue(v1 .. "#worldSpace", {worldSpace = true, emitCountScale = 1, useEmitterVisibility = false}.worldSpace)
    v5 = self:getValue(v1 .. "#emitCountScale", {worldSpace = true, emitCountScale = 1, useEmitterVisibility = false, worldSpace = v5}.emitCountScale)
    v5 = self:getValue(v1 .. "#delay")
    v5 = self:getValue(v1 .. "#startTime", {worldSpace = true, emitCountScale = 1, useEmitterVisibility = false, worldSpace = v5, emitCountScale = v5, delay = v5}.delay)
    v5 = self:getValue(v1 .. "#stopTime", {worldSpace = true, emitCountScale = 1, useEmitterVisibility = false, worldSpace = v5, emitCountScale = v5, delay = v5, startTime = v5}.delay)
    v5 = self:getValue(v1 .. "#lifespan")
    v5 = self:getValue(v1 .. "#useEmitterVisibility", {worldSpace = true, emitCountScale = 1, useEmitterVisibility = false, worldSpace = v5, emitCountScale = v5, delay = v5, startTime = v5, stopTime = v5, lifespan = v5}.useEmitterVisibility)
  end
  v4.isValid = true
  v5 = clone(v2.shape, true, false, true)
  setObjectMask(v5, 16711807)
  ParticleUtil.loadParticleSystemFromNode(v5, v4, false, v4.worldSpace, v2.forceFullLifespan)
  if v3 ~= nil then
    ParticleUtil.setEmitterShape(v4, v3)
    ParticleUtil.initEmitterScale(v4, v4.emitterShapeSize / v4.defaultEmitterShapeSize * v4.emitCountScale)
    ParticleUtil.setEmitCountScale(v4, 1)
    if v4.lifespan ~= nil then
      ParticleUtil.setParticleLifespan(v4, v4.lifespan * 1000)
      v4.originalLifespan = v4.lifespan * 1000
    end
    ParticleUtil.setParticleStartStopTime(v4, v4.startTime, v4.stopTime)
    if not v4.worldSpace then
      local v8 = getParent(v3)
      local v10 = getChildIndex(v3)
      link(...)
      local v9 = getTranslation(v3)
      setTranslation(...)
      v9 = getRotation(v3)
      setRotation(...)
      link(v4.shape, v3)
      setTranslation(v3, 0, 0, 0)
      setRotation(v3, 0, 0, 0)
    end
  end
  return v4
end
function ParticleUtil:registerParticleXMLPaths(v1, v2)
  self:setXMLSharedRegistration("ParticleSystem", v1)
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#node", "Particle link node")
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#file", "Particle file name")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "." .. v2 .. "#position", "Particle position")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "." .. v2 .. "#rotation", "Particle rotation")
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#worldSpace", "Is world space", true)
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#particleNode", "Particle node in loaded file")
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#forceFullLifespan", "Force full lifespan", false)
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#useEmitterVisibility", "Use emitter visibility to show/hide particles", false)
  self:setXMLSharedRegistration()
end
function ParticleUtil:registerParticleCopyXMLPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. "#worldSpace", "Is world space", true)
  self:register(XMLValueType.FLOAT, v1 .. "#emitCountScale", "Emit count scale", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#delay", "Activation delay")
  self:register(XMLValueType.FLOAT, v1 .. "#startTime", "Start time", "Delay value")
  self:register(XMLValueType.FLOAT, v1 .. "#stopTime", "Stop time", "Delay value")
  self:register(XMLValueType.FLOAT, v1 .. "#lifespan", "Lifespan")
  self:register(XMLValueType.BOOL, v1 .. "#useEmitterVisibility", "use emitter shape visibility", true)
end
