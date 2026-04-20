-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CultivatorMotionPathEffect = {}
local CultivatorMotionPathEffect_mt = Class(CultivatorMotionPathEffect, TypedMotionPathEffect)
function CultivatorMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  local v2 = ValueDelay.new(500)
  v1.shapeVariationStateDelay = v2
  v1.shapeVariationStateSmoothed = 0
  local v3 = math.random(75, 100)
  v1.densityScale = v3 * 0.01
  return v1
end
function CultivatorMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#isCultivatorSweepEffect", false)
  self.isCultivatorSweepEffect = v6
  self.minDensity = 0.4
  self.maxDensitySpeed = 4
  if self.isCultivatorSweepEffect then
    self.minDensity = 0
    self.maxDensitySpeed = 10
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#minDensity", self.minDensity)
  self.minDensity = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#maxDensitySpeed", self.maxDensitySpeed)
  self.maxDensitySpeed = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#densityScale", self.densityScale)
  self.densityScale = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#maxVariationState", 1)
  self.maxVariationState = v6
  return true
end
function CultivatorMotionPathEffect:update(dt)
  local v2 = v2:getLastSpeed()
  if self.isCultivatorSweepEffect then
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L50 end
    end
    local v3 = MathUtil.clamp((v2 - 5) / 10, 0, 1)
    self.effectSpeedScale = self.effectSpeedScaleOrig * (0.5 + v3 * 0.5)
  else
    v3 = MathUtil.clamp(v2 / 10, 0, 1)
    self.effectSpeedScale = self.effectSpeedScaleOrig * (0.5 + v3 * 0.5)
  end
  if self.state == MotionPathEffect.STATE_ON and v2 < 1 then
    v3:stopEffect(self)
  end
  if self.state == MotionPathEffect.STATE_TURNING_OFF then
    local v5 = MathUtil.clamp(v2 / 10, 0.4, 1)
    self.effectSpeedScale = self.effectSpeedScaleOrig * v5
    local v3, v4, v5 = getTranslation(self.effectNode)
    setTranslation(self.effectNode, v3, v4 - dt * 0.001, v5)
    -- if v4 - v1 * 0.001 >= -0.5 then goto L129 end
    self.fadeIn = self.minFade
    self.fadeOut = self.minFade
    self.state = MotionPathEffect.STATE_OFF
    setTranslation(self.effectNode, 0, 0, 0)
  else
    setTranslation(self.effectNode, 0, 0, 0)
  end
  v4 = v4:superClass()
  v4.update(self, dt)
  if self.currentEffectNode ~= nil then
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L233 end
    end
    v5 = math.min(v2 / self.maxDensitySpeed, 1)
    self:setDensity((v5 * (1 - self.minDensity) + self.minDensity) * self.densityScale)
    if self.isCultivatorSweepEffect then
      local v7 = MathUtil.clamp((v2 - 5) / 10, 0, self.maxVariationState)
      self.shapeVariationStateSmoothed = self.shapeVariationStateSmoothed * 0.985 + v7 * 0.015
      local v8 = math.floor(self.shapeVariationStateSmoothed * 2)
      v8 = math.floor(self.shapeVariationStateSmoothed * 2 + 1)
    end
    v7:setEffectShaderParameter(self.currentEffectNode, "scrollPosition", nil, v4, v5, v6, false)
    if self.state == MotionPathEffect.STATE_OFF then
      v3:reset()
      self.shapeVariationStateSmoothed = 0
    end
  end
end
function CultivatorMotionPathEffect.stop(v0)
  local v2 = v2:superClass()
  return v2.stop(v0)
end
function CultivatorMotionPathEffect.reset(v0)
  local v2 = v2:superClass()
  return v2.reset(v0)
end
function CultivatorMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function CultivatorMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function CultivatorMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function CultivatorMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function CultivatorMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function CultivatorMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function CultivatorMotionPathEffect:registerEffectXMLPaths(v1)
  TypedMotionPathEffect.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.BOOL, v1 .. ".motionPathEffect#isCultivatorSweepEffect", "(CultivatorMotionPathEffect) Is sweep effect", false)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#minDensity", "(CultivatorMotionPathEffect) Min. Density", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#maxDensitySpeed", "(CultivatorMotionPathEffect) Speed at which the density is 1", 8)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#densityScale", "(CultivatorMotionPathEffect) Density Scale", "Random between 0.75 and 1")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#maxVariationState", "(CultivatorMotionPathEffect) Max. variation state", "Max state of variation depending on speed (0 -> slow, 0.5 -> normal, 1 -> fast)")
end
