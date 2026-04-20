-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShakeAnimation = {STATE_OFF = 0, STATE_ON = 1, STATE_TURNING_OFF = 2}
local ShakeAnimation_mt = Class(ShakeAnimation, Animation)
function ShakeAnimation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.state = ShakeAnimation.STATE_OFF
  v1.node = nil
  v1.turnOnOffVariance = nil
  v1.turnOnFadeTime = 0
  v1.turnOffFadeTime = 0
  v1.initialTurnOnFadeTime = 1000
  v1.currentAlpha = 0
  v1.owner = nil
  v1.speedFunc = function()
    return 1
  end
  v1.speedFuncTarget = v1
  return v1
end
function ShakeAnimation:load(xmlFile, key, rootNodes, owner, i3dMapping)
  local v6 = xmlFile:hasProperty(key)
  if not v6 then
    return nil
  end
  self.owner = owner
  v6 = xmlFile:getValue(key .. "#node", nil, rootNodes, i3dMapping)
  self.node = v6
  if self.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for shake animation '%s'!", key)
    return nil
  end
  v6 = getHasShaderParameter(self.node, "shaking")
  if not v6 then
    local v9 = getName(self.node)
    Logging.xmlWarning(xmlFile, "Node '%s' has no shader parameter 'shaking' for shake animation '%s'!", v9, key)
    return nil
  end
  local v8 = xmlFile:getValue(key .. "#turnOnFadeTime", 2)
  v6 = math.max(v8 * 1000, 1)
  self.turnOnFadeTime = v6
  v8 = xmlFile:getValue(key .. "#turnOffFadeTime", 2)
  v6 = math.max(v8 * 1000, 1)
  self.turnOffFadeTime = v6
  v6 = xmlFile:getValue(key .. "#turnOnOffVariance")
  self.turnOnOffVariance = v6
  if self.turnOnOffVariance ~= nil then
    self.initialTurnOnFadeTime = self.turnOnFadeTime
    self.initialTurnOffFadeTime = self.turnOffFadeTime
    self.turnOnOffVariance = self.turnOnOffVariance * 1000
  end
  v6 = xmlFile:getValue(key .. "#shaking", "0 0 0 0", true)
  self.shaking = v6
  return self
end
function ShakeAnimation:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.state == ShakeAnimation.STATE_ON then
    if self.currentAlpha >= 1 then
    end
    v3 = math.min(1, self.currentAlpha + dt / self.turnOnFadeTime)
    self.currentAlpha = v3
  elseif self.state == ShakeAnimation.STATE_TURNING_OFF then
    if 0 >= self.currentAlpha then
    end
    v3 = math.max(0, self.currentAlpha - dt / self.turnOffFadeTime)
    self.currentAlpha = v3
  end
  if v2 then
    v5:setPrevShaderParameter(self.node, "shaking", self.shaking[1] * self.currentAlpha, self.shaking[2] * self.currentAlpha, self.shaking[3] * self.currentAlpha, self.shaking[4] * self.currentAlpha, false, "prevShaking")
  end
  if self.state == ShakeAnimation.STATE_TURNING_OFF and self.currentAlpha == 0 then
    self.state = ShakeAnimation.STATE_OFF
  end
  self:updateDuplicates()
end
function ShakeAnimation:isRunning()
  if self.state == ShakeAnimation.STATE_OFF then
  end
  return true
end
function ShakeAnimation:start()
  if self.state ~= ShakeAnimation.STATE_ON then
    if self.state == ShakeAnimation.STATE_OFF and self.turnOnOffVariance ~= nil and self.currentAlpha == 0 then
      local v3 = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOnFadeTime = self.initialTurnOnFadeTime + v3
      v3 = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOffFadeTime = self.initialTurnOffFadeTime + v3
    end
    self.state = ShakeAnimation.STATE_ON
    self:updateDuplicates()
    return true
  end
  return false
end
function ShakeAnimation:stop()
  if self.state ~= ShakeAnimation.STATE_OFF then
    self.state = ShakeAnimation.STATE_TURNING_OFF
    self:updateDuplicates()
    return true
  end
  return false
end
function ShakeAnimation:reset()
  self.currentAlpha = 0
  self.state = ShakeAnimation.STATE_OFF
  self:updateDuplicates()
end
function ShakeAnimation:isDuplicate(otherAnimation)
  local v2 = otherAnimation:isa(ShakeAnimation)
  if v2 and self.parent == otherAnimation.parent and self.node == otherAnimation.node then
    return true
  end
  return false
end
function ShakeAnimation:updateDuplicate(otherAnimation)
  otherAnimation.currentAlpha = self.currentAlpha
  otherAnimation.state = self.state
end
function ShakeAnimation:registerAnimationClassXMLPaths(dt)
  self:register(XMLValueType.NODE_INDEX, dt .. "#node", "Node")
  self:register(XMLValueType.VECTOR_4, dt .. "#shaking", "(ShakeAnimation) Shaking scale for shader parameters", "0 0 0 0")
  self:register(XMLValueType.FLOAT, dt .. "#turnOnFadeTime", "Turn on fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOffFadeTime", "Turn off fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOnOffVariance", "Turn off time variance")
  self:register(XMLValueType.STRING, dt .. "#speedFunc", "Lua speed function")
end
