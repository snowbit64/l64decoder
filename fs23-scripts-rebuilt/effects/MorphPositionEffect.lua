-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MorphPositionEffect = {}
local MorphPositionEffect_mt = Class(MorphPositionEffect, ShaderPlaneEffect)
function MorphPositionEffect.new(customMt)
  if customMt == nil then
  end
  return ShaderPlaneEffect.new(customMt)
end
function MorphPositionEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = Effect.getValue(xmlFile, key, node, "speed", 1)
  self.speed = v6
  self.fadeCur = {0, 0}
  self.fadeDir = {0, 0}
  v6 = Effect.getValue(xmlFile, key, node, "scrollLength", 1)
  self.scrollLength = v6
  v7 = Effect.getValue(xmlFile, key, node, "scrollSpeed", 1)
  self.scrollSpeed = v7 * 0.001
  self.scrollPosition = 0
  self.scrollUpdate = true
  setShaderParameter(self.node, "morphPosition", 0, 1, 1, 0, false)
  setShaderParameter(self.node, "pervMorphPosition", 0, 1, 1, 0, false)
  setVisibility(self.node, false)
  return true
end
function MorphPositionEffect:update(dt)
  if self.state ~= ShaderPlaneEffect.STATE_OFF then
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF then
    end
    local v7 = math.min(1, self.fadeCur[1] + self.fadeDir[1] * dt / v3)
    local v5 = math.max(...)
    self.fadeCur[1] = v5
    v7 = math.min(1, self.fadeCur[2] + self.fadeDir[2] * dt / v3)
    v5 = math.max(0, v7, self.offset)
    self.fadeCur[2] = v5
    if self.state ~= ShaderPlaneEffect.STATE_OFF and self.state ~= ShaderPlaneEffect.STATE_TURNING_OFF then
      self.fadeCur[1] = self.offset
    end
    v4:setPrevShaderParameter(self.node, "morphPosition", self.fadeCur[1], self.fadeCur[2], 1, self.speed, false, "prevMorphPosition")
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF and self.fadeCur[1] == 1 then
      self.fadeCur[1] = 0
      self.fadeCur[2] = 0
      self.state = ShaderPlaneEffect.STATE_OFF
    end
    setVisibility(self.node, v4)
    if self.state == ShaderPlaneEffect.STATE_TURNING_ON and self.fadeCur[1] == 0 then
      -- cmp-jump LOP_JUMPXEQKN R5 aux=0x17 -> L167
    end
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF and self.fadeCur[1] == 1 then
      -- cmp-jump LOP_JUMPXEQKN R5 aux=0x17 -> L167
    end
  else
  end
  if self.scrollUpdate then
    self.scrollPosition = (self.scrollPosition + dt * self.scrollSpeed) % self.scrollLength
    local v3, v4, v5, v6 = getShaderParameter(self.node, "offsetUV")
    setShaderParameter(self.node, "offsetUV", self.scrollPosition, v4, v5, v6, false)
  end
  if not v2 then
    if self.state == ShaderPlaneEffect.STATE_TURNING_ON then
      self.state = ShaderPlaneEffect.STATE_ON
      return
    end
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF then
      self.state = ShaderPlaneEffect.STATE_OFF
    end
  end
end
function MorphPositionEffect:start(skipDelay)
  if self.startDelay ~= 0 then
    -- if not v1 then goto L60 end
  end
  local v2 = self:canStart()
  if v2 and self.state ~= ShaderPlaneEffect.STATE_TURNING_ON and self.state ~= ShaderPlaneEffect.STATE_ON then
    self.state = ShaderPlaneEffect.STATE_TURNING_ON
    local v3 = math.min(self.offset, 0)
    local v4 = math.min(self.offset, self.fadeCur[2])
    self.fadeCur = {}
    self.fadeDir = {0, 1}
    return true
    -- goto L64  (LOP_JUMP +4)
    return false, self.startDelay
  end
  return false
end
function MorphPositionEffect:stop(skipDelay)
  if self.stopDelay ~= 0 then
    -- if not v1 then goto L32 end
  end
  if self.state ~= ShaderPlaneEffect.STATE_TURNING_OFF and self.state ~= ShaderPlaneEffect.STATE_OFF then
    self.state = ShaderPlaneEffect.STATE_TURNING_OFF
    self.fadeDir = {1, 1}
    return true
    -- goto L36  (LOP_JUMP +4)
    return false, self.stopDelay
  end
  return false
end
function MorphPositionEffect:reset()
  local v2 = math.min(self.offset, 0)
  local v3 = math.min(self.offset, 0)
  self.fadeCur = {}
  self.fadeDir = {0, 1}
  v1:setPrevShaderParameter(self.node, "morphPosition", self.fadeCur[1], self.fadeCur[2], 0, self.scrollSpeed, false, "prevMorphPosition")
  setVisibility(self.node, false)
  self.state = ShaderPlaneEffect.STATE_OFF
end
function MorphPositionEffect:setScrollUpdate(state)
  if state == nil then
    self.scrollUpdate = not self.scrollUpdate
    return
  end
  self.scrollUpdate = state
end
function MorphPositionEffect:getIsVisible()
  if 0 >= self.fadeCur[1] then
  end
  return true
end
function MorphPositionEffect:getIsFullyVisible()
  if self.fadeCur[2] == 1 and self.fadeCur[1] ~= 0 then
  end
  return v1
end
function MorphPositionEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#speed", "speed", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#scrollLength", "(MorphPositionEffect) scroll length", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#scrollSpeed", "(MorphPositionEffect) scroll speed", 1)
end
