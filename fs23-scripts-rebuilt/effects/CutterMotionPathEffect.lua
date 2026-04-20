-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CutterMotionPathEffect = {DEFAULT_FOLIAGE_CLIP_DISTANCE = 80}
local CutterMotionPathEffect_mt = Class(CutterMotionPathEffect, TypedMotionPathEffect)
function CutterMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.minValue = 0
  v1.maxValue = 0
  local v2 = ValueDelay.new(400, -1)
  v1.minValueDelay = v2
  v2 = ValueDelay.new(400, -1)
  v1.maxValueDelay = v2
  v1.effectMinValue = 0
  v1.effectMaxValue = 0
  return v1
end
function CutterMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. "#useMaxValue", false)
  self.useMaxValue = v6
  v6 = xmlFile:getValue(key .. "#widthScale", 1)
  self.widthScale = v6
  v6 = xmlFile:getValue(key .. "#offset", 0)
  self.offset = v6
  v6 = xmlFile:getValue(key .. "#minOffset", 0)
  self.minOffset = v6
  v6 = xmlFile:getValue(key .. "#maxOffset", 0)
  self.maxOffset = v6
  v6 = xmlFile:getValue(key .. "#minDensity", 0.25)
  self.minDensity = v6
  v6 = xmlFile:getValue(key .. "#maxDensitySpeed", 8)
  self.maxDensitySpeed = v6
  local v10 = getFoliageViewDistanceCoeff()
  setClipDistance(self.effectNode, CutterMotionPathEffect.DEFAULT_FOLIAGE_CLIP_DISTANCE * v10)
  return true
end
function CutterMotionPathEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.currentEffectNode ~= nil then
    v4:setEffectShaderParameter(self.currentEffectNode, "fadeProgress", self.fadeIn, self.fadeOut, 0.5 + (self.maxOffset + self.effectMaxValue) * 0.5, 0.5 - (self.minOffset + self.effectMinValue) * 0.5, false)
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L83 end
    end
    local v4 = v4:getLastSpeed()
    local v7 = math.min(v4 / self.maxDensitySpeed, 1)
    self:setDensity(v7 * (1 - self.minDensity) + self.minDensity)
  end
end
function CutterMotionPathEffect:stop()
  v1:reset()
  v1:reset()
  local v2 = v2:superClass()
  return v2.stop(self)
end
function CutterMotionPathEffect:reset()
  self.effectMinValue = 0
  self.effectMaxValue = 0
  local v2 = v2:superClass()
  return v2.reset(self)
end
function CutterMotionPathEffect:setMinMaxWidth(minWidth, maxWidth, minWidthNorm, maxWidthNorm, reset)
  if minWidthNorm == 0 then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x0 -> L56
  end
  if self.textureRealWidth ~= nil then
  end
  local v6 = v6:add(minWidthNorm + 1)
  v6 = v6:add(2 - maxWidthNorm + 1)
  self.effectMinValue = (v6 - 1) * self.widthScale - self.offset
  self.effectMaxValue = (2 - v6 + 1) * self.widthScale + self.offset
  return
  v6:reset()
  v6:reset()
end
function CutterMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function CutterMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function CutterMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function CutterMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function CutterMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function CutterMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function CutterMotionPathEffect:registerEffectXMLPaths(v1)
  TypedMotionPathEffect.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.BOOL, v1 .. "#useMaxValue", "(CutterMotionPathEffect) Use max width of effect", false)
  self:register(XMLValueType.FLOAT, v1 .. "#widthScale", "(CutterMotionPathEffect) Width scale (Percentage)", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#offset", "(CutterMotionPathEffect) Width offset (Percentage)", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#minOffset", "(CutterMotionPathEffect) Width offset in min direction", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#maxOffset", "(CutterMotionPathEffect) Width offset in max direction", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#minDensity", "(CutterMotionPathEffect) Min. Density", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. "#maxDensitySpeed", "(CutterMotionPathEffect) Speed at which the density is 1", 8)
end
