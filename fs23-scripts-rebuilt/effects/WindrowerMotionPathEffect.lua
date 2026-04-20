-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WindrowerMotionPathEffect = {}
local WindrowerMotionPathEffect_mt = Class(WindrowerMotionPathEffect, TypedMotionPathEffect)
function WindrowerMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.workArea = nil
  v1.hasTestAreas = false
  v1.isLeft = false
  v1.windrowerStartFade = 0.2
  v1.windrowerEndFade = 0.8
  v1.windrowerFadeLength = v1.windrowerEndFade - v1.windrowerStartFade
  return v1
end
function WindrowerMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#isPickup", false)
  self.isPickup = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#isLeft", self.isLeft)
  self.isLeft = v6
  self.minFadeOrig = self.minFade
  v6 = xmlFile:getValue(key .. ".motionPathEffect#startFade", 0.2)
  self.windrowerStartFade = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#endFade", 0.8)
  self.windrowerEndFade = v6
  self.windrowerFadeLength = self.windrowerEndFade - self.windrowerStartFade
  return true
end
function WindrowerMotionPathEffect:update(dt)
  if self.workArea == nil and self.workAreaIndex ~= nil then
    local v2 = v2:getWorkAreaByIndex(self.workAreaIndex)
    self.workArea = v2
    if self.workArea ~= nil then
    end
    self.hasTestAreas = v2
  end
  if self.workArea ~= nil and self.hasTestAreas then
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L186 end
    end
    local v2, v3, v4, v5 = v2:getTestAreaWidthByWorkAreaIndex(self.workAreaIndex)
    if not self.isPickup then
      if v2 ~= -math.huge and v3 ~= math.huge then
        if self.isLeft then
        else
        end
      end
      if v6 <= 0.01 then
      elseif 0.99 <= v6 then
      end
      local v8 = MathUtil.sign(v7 - self.fadeOut)
      if v8 < 0 then
      end
      local v11 = MathUtil.clamp(self.fadeOut + dt * 0.001 * self.effectSpeedScale * v8, v9, v10)
      self.fadeOut = v11
      v11 = math.min(self.minFade, self.fadeOut)
      self.minFade = v11
      -- if not v0.immediateUpdate then goto L193 end
      self.fadeOut = v7
      self.minFade = v7
      self.immediateUpdate = false
    elseif v2 ~= -math.huge and v3 ~= math.huge then
      if self.isLeft then
        self.fadeVisibilityMin = 0.5 + v2 / v5 * 0.5
        self.fadeVisibilityMax = 1 - 0.5 + v3 / v4 * 0.5
      else
        self.fadeVisibilityMin = 0.5 + v3 / v4 * 0.5
        self.fadeVisibilityMax = 1 - 0.5 + v2 / v5 * 0.5
        -- goto L193  (LOP_JUMP +7)
        self.immediateUpdate = true
        self.minFade = self.minFadeOrig
      end
    end
  end
  v3 = v3:superClass()
  v3.update(self, dt)
end
function WindrowerMotionPathEffect:setWorkAreaIndex(workAreaIndex)
  self.workAreaIndex = workAreaIndex
end
function WindrowerMotionPathEffect.stop(v0)
  local v2 = v2:superClass()
  return v2.stop(v0)
end
function WindrowerMotionPathEffect.reset(v0)
  local v2 = v2:superClass()
  return v2.reset(v0)
end
function WindrowerMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function WindrowerMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function WindrowerMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function WindrowerMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function WindrowerMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function WindrowerMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function WindrowerMotionPathEffect:registerEffectXMLPaths(dt)
  TypedMotionPathEffect.registerEffectXMLPaths(self, dt)
  self:register(XMLValueType.BOOL, dt .. ".motionPathEffect#isPickup", "(WindrowerMotionPathEffect) Defines if the effect is a pickup effect and width is adjusted by hiding rows instead of the fade value", false)
  self:register(XMLValueType.BOOL, dt .. ".motionPathEffect#isLeft", "(WindrowerMotionPathEffect) Defines if rake is mounted on left or right side", false)
  self:register(XMLValueType.FLOAT, dt .. ".motionPathEffect#startFade", "(WindrowerMotionPathEffect) Start of fading depending on test area result", 0.2)
  self:register(XMLValueType.FLOAT, dt .. ".motionPathEffect#endFade", "(WindrowerMotionPathEffect) End of fading depending on test area result", 0.8)
end
