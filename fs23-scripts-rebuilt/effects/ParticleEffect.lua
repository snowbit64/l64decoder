-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ParticleEffect = {}
local ParticleEffect_mt = Class(ParticleEffect, Effect)
function ParticleEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.isActive = false
  v1.currentFillType = FillType.UNKNOWN
  return v1
end
function ParticleEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  self.emitterShape = self.node
  v6 = createTransformGroup("emitterShapeTrans")
  self.emitterShapeTrans = v6
  v7 = getParent(self.emitterShape)
  local v9 = getChildIndex(self.emitterShape)
  link(...)
  link(self.emitterShapeTrans, self.emitterShape)
  v6 = Effect.getValue(xmlFile, key, node, "emitCountScale", 1)
  self.emitCountScale = v6
  v6 = Effect.getValue(xmlFile, key, node, "particleType", "unloading")
  self.particleType = v6
  v6 = Effect.getValue(xmlFile, key, node, "materialType")
  self.materialType = v6
  v6 = Effect.getValue(xmlFile, key, node, "useFruitColor", false)
  self.useFruitColor = v6
  v6 = Effect.getValue(xmlFile, key, node, "worldSpace", true)
  self.worldSpace = v6
  v6 = Effect.getValue(xmlFile, key, node, "delay", 0)
  self.delay = v6
  v6 = Effect.getValue(xmlFile, key, node, "startTime", self.delay)
  self.startTime = v6
  self.startTimeMs = self.startTime * 1000
  v6 = Effect.getValue(xmlFile, key, node, "stopTime", self.delay)
  self.stopTime = v6
  self.stopTimeMs = self.stopTime * 1000
  v6 = Effect.getValue(xmlFile, key, node, "lifespan")
  self.lifespan = v6
  v6 = Effect.getValue(xmlFile, key, node, "extraDistance", 0.5)
  self.extraDistance = v6
  v6 = Effect.getValue(xmlFile, key, node, "ignoreDistanceLifeSpan", false)
  self.ignoreDistanceLifeSpan = v6
  v6 = Effect.getValue(xmlFile, key, node, "spriteScale", 1)
  self.spriteScale = v6
  v6 = Effect.getValue(xmlFile, key, node, "spriteGainScale", self.spriteScale)
  self.spriteGainScale = v6
  self.realStartTime = math.huge
  self.realStopTime = math.huge
  v6 = Effect.getValue(xmlFile, key, node, "useCuttingWidth", true)
  self.useCuttingWidth = v6
  self.particleSystem = nil
  return true
end
function ParticleEffect:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  ParticleUtil.deleteParticleSystem(self.particleSystem)
end
function ParticleEffect:isRunning()
  return self.isActive
end
function ParticleEffect:start()
  local v1 = self:canStart()
  if v1 and self.particleSystem ~= nil then
    if self.totalWidth ~= nil and 0 >= self.totalWidth then
    end
    v1(v2, v3)
    self.isActive = true
    self.realStartTime = g_time
    self.realStopTime = math.huge
    return true
  end
  return false
end
function ParticleEffect:stop()
  ParticleUtil.setEmittingState(self.particleSystem, false)
  if self.particleSystem ~= nil then
    self.realStopTime = g_time
  end
  self.isActive = false
end
function ParticleEffect:reset()
  ParticleUtil.resetNumOfEmittedParticles(self.particleSystem)
end
function ParticleEffect:setFruitType(fruitType)
  local v2 = v2:getFillTypeIndexByFruitTypeIndex(fruitType)
  self.useFruitColor = true
  self:setFillType(v2)
end
function ParticleEffect:setFillType(fillType)
  if self.currentFillType == fillType then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L427
  end
  if self.particleSystem == nil then
    local v3 = v3:getParticleSystem(self.particleType)
    if v3 ~= nil then
      local v4 = clone(v3.shape, true, false, true)
      ParticleUtil.loadParticleSystemFromNode(v4, {}, false, self.worldSpace, v3.forceFullLifespan)
      ParticleUtil.setEmitterShape({}, self.emitterShape)
      ParticleUtil.initEmitterScale({}, {}.emitterShapeSize / {}.defaultEmitterShapeSize * self.emitCountScale)
      ParticleUtil.setEmitCountScale({}, 1)
      if self.lifespan ~= nil then
        ParticleUtil.setParticleLifespan({}, self.lifespan * 1000)
      end
      ParticleUtil.setParticleStartStopTime(v5, self.startTime, self.stopTime)
      if self.spriteScale ~= 1 then
        local v8 = ParticleUtil.getParticleSystemSpriteScaleX(v5)
        ParticleUtil.setParticleSystemSpriteScaleX(v5, v8 * self.spriteScale)
        local v9 = ParticleUtil.getParticleSystemSpriteScaleY(v5)
        ParticleUtil.setParticleSystemSpriteScaleY(v5, v9 * self.spriteScale)
      end
      if self.spriteGainScale ~= 1 then
        v8 = ParticleUtil.getParticleSystemSpriteScaleXGain(v5)
        ParticleUtil.setParticleSystemSpriteScaleXGain(v5, v8 * self.spriteGainScale)
        v9 = ParticleUtil.getParticleSystemSpriteScaleYGain(v5)
        ParticleUtil.setParticleSystemSpriteScaleYGain(v5, v9 * self.spriteGainScale)
      end
      if not v5.worldSpace then
        v9 = getParent(v6)
        local v11 = getChildIndex(v6)
        link(...)
        local v10 = getTranslation(v6)
        setTranslation(...)
        v10 = getRotation(v6)
        setRotation(...)
        link(v5.shape, v6)
        setTranslation(v6, 0, 0, 0)
        setRotation(v6, 0, 0, 0)
        ParticleUtil.setParticleSystemVelocityScale(v5, 0)
      end
      if self.materialType ~= nil then
        v8 = v8:getBaseMaterialByName(self.materialType)
        if v8 ~= nil then
          ParticleUtil.setMaterial(v5, v8)
          -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L290
          -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L290
          setMaterial(v5.shape, v8, 0)
          v9 = getMaterialCustomShaderFilename(v8)
          v9 = v9:contains("psSubUVShader")
          if v9 then
            local v9, v10, v11, v12 = v9:getFillTypeTextureArrays()
            -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L290
            local v13 = getMaterial(v5.shape, 0)
            v13 = setMaterialCustomMap(v13, "fillTypeColorMap", v9, false)
            -- if v13 == v13 then goto L290 end
            setMaterial(v5.shape, v13, 0)
            -- goto L290  (LOP_JUMP +17)
          end
          v9:assignFillTypeTextureArrays(v5.shape, true, true, true)
        else
          Logging.error("Failed to assign material to shader plane effect. Base Material '%s' not found!", self.materialType)
        end
      end
      self.particleSystem = v5
      self.distanceToLifespans = {}
      -- TODO: structure LOP_FORNPREP (pc 299, target 353)
      v12 = AnimCurve.new(linearInterpolator1)
      -- TODO: structure LOP_FORNPREP (pc 310, target 336)
      local v17, v18 = getParticleSystemAverageSpeed(self.particleSystem.geometry)
      v12:addKeyframe({1 * 100, time = v17 * 1 * 100 * (1 - 0) + 0.00000717 * 1 * 100 * 1 * 100})
      -- TODO: structure LOP_FORNLOOP (pc 335, target 311)
      table.insert(self.distanceToLifespans, v12)
      -- TODO: structure LOP_FORNLOOP (pc 344, target 300)
    else
      Logging.error("Failed to find particle system for type '%s'.", self.particleType)
    end
  end
  if self.materialType ~= nil and self.particleSystem ~= nil and self.particleSystem.shape ~= nil then
    v3 = v3:getTextureArrayIndexByFillTypeIndex(fillType)
    if v3 ~= nil then
      setShaderParameter(self.particleSystem.shape, "fillTypeId", v3 - 1, 0, 0, 0, false)
    end
    v4 = v4:lower()
    v4 = v4:contains("smoke")
    if not v4 then
      v4 = v4:lower()
      v4 = v4:contains("smoke")
      -- if not v4 then goto L425 end
    end
    v4 = v4:getSmokeColorByFillTypeIndex(fillType, self.useFruitColor)
    if v4 ~= nil then
      self:setColor(v4[1], v4[2], v4[3], v4[4])
    end
  end
  self.currentFillType = fillType
  return v2
end
function ParticleEffect:setColor(r, g, b, a)
  if self.particleSystem ~= nil then
    local v5 = getHasShaderParameter(self.particleSystem.shape, "colorAlpha")
    if v5 then
      setShaderParameter(self.particleSystem.shape, "colorAlpha", r, g, b, a, false)
    end
  end
end
function ParticleEffect:setMinMaxWidth(minValue, maxValue, minWidthNorm, maxWidthNorm, reset)
  if self.useCuttingWidth then
    local widthX = math.abs(minValue - maxValue)
    local v8, v9, v10 = getScale(self.emitterShape)
    setScale(self.emitterShape, widthX, v9, v10)
    local v11, v12, v13 = getTranslation(self.emitterShape)
    setTranslation(self.emitterShape, -(maxValue - widthX * 0.5), v12, v13)
    ParticleUtil.setEmitCountScale(self.particleSystem, widthX)
    self.totalWidth = widthX
    if self.isActive then
      if 0 >= widthX then
      end
      v14(v15, true)
    end
  end
end
function ParticleEffect:setDistance(distance, terrain)
  if self.particleSystem ~= nil and not self.ignoreDistanceLifeSpan and not self.particleSystem.forceFullLifespan then
    local v3, v4, v5 = localDirectionToWorld(self.particleSystem.emitterShape, 0, 1, 0)
    local v7 = math.floor(v4 / 1 * #self.distanceToLifespans)
    local v10 = MathUtil.clamp(v7, 1, #self.distanceToLifespans)
    local v9 = self.distanceToLifespans[v10]:get(distance + self.extraDistance)
    ParticleUtil.setParticleLifespan(self.particleSystem, v9)
  end
end
function ParticleEffect:setDensity(density)
  if self.particleSystem ~= nil then
    ParticleUtil.setEmitCountScale(self.particleSystem, self.emitCountScale * density)
  end
end
function ParticleEffect:getIsVisible()
  return self:getIsFullyVisible()
end
function ParticleEffect:getIsFullyVisible()
  if self.realStartTime + self.startTimeMs < g_time and g_time >= self.realStopTime + self.stopTimeMs then
  end
  return v1
end
function ParticleEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#emitCountScale", "(ParticleEffect) Emit count scale", 1)
  self:register(XMLValueType.STRING, v1 .. "#particleType", "(ParticleEffect) Particle type", "unloading")
  self:register(XMLValueType.STRING, v1 .. "#materialType", "(ParticleEffect) Material type")
  self:register(XMLValueType.BOOL, v1 .. "#useFruitColor", "(ParticleEffect) Apply the fruit color to the smoke effect instead of the fill color", false)
  self:register(XMLValueType.BOOL, v1 .. "#worldSpace", "(ParticleEffect) World space", true)
  self:register(XMLValueType.FLOAT, v1 .. "#delay", "(ParticleEffect) Delay", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#startTime", "(ParticleEffect) Start time", "delay")
  self:register(XMLValueType.FLOAT, v1 .. "#stopTime", "(ParticleEffect) Stop time", "delay")
  self:register(XMLValueType.FLOAT, v1 .. "#lifespan", "(ParticleEffect) Lifespan")
  self:register(XMLValueType.FLOAT, v1 .. "#extraDistance", "(ParticleEffect) Extra distance", 0.5)
  self:register(XMLValueType.BOOL, v1 .. "#ignoreDistanceLifeSpan", "(ParticleEffect) Ignore distance based lifespan and apply fixed lifespan", false)
  self:register(XMLValueType.FLOAT, v1 .. "#spriteScale", "(ParticleEffect) Scale factor that is applied on sprite scale loaded from particle system", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#spriteGainScale", "(ParticleEffect) Scale factor that is applied on sprite gain scale loaded from particle system", "#spriteScale value")
  self:register(XMLValueType.BOOL, v1 .. "#useCuttingWidth", "(ParticleEffect) Use cutting width", true)
end
