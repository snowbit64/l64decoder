-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ScrollingAnimation = {STATE_OFF = 0, STATE_ON = 1, STATE_TURNING_OFF = 2}
local ScrollingAnimation_mt = Class(ScrollingAnimation, Animation)
function ScrollingAnimation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.state = ScrollingAnimation.STATE_OFF
  v1.node = nil
  v1.shaderParameterName = nil
  v1.scrollPosition = 0
  v1.scrollSpeed = 0
  v1.scrollLength = 1
  v1.shaderParameterComponent = 1
  v1.currentAlpha = 0
  v1.initialTurnOnFadeTime = 1000
  v1.turnOnOffVariance = nil
  v1.turnOnFadeTime = 0
  v1.turnOffFadeTime = 0
  v1.owner = nil
  v1.speedFunc = function()
    return 1
  end
  v1.speedFuncTarget = v1
  return v1
end
function ScrollingAnimation:load(xmlFile, key, rootNodes, owner, i3dMapping)
  local v6 = xmlFile:hasProperty(key)
  if not v6 then
    return nil
  end
  self.owner = owner
  v6 = xmlFile:getValue(key .. "#node", nil, rootNodes, i3dMapping)
  self.node = v6
  if self.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for scrolling animation '%s'!", key)
    return nil
  end
  v6 = xmlFile:getValue(key .. "#shaderParameterName", "offsetUV")
  self.shaderParameterName = v6
  v6 = xmlFile:getValue(key .. "#shaderParameterPrevName")
  self.shaderParameterPrevName = v6
  v6 = getHasShaderParameter(self.node, self.shaderParameterName)
  if not v6 then
    local v9 = getName(self.node)
    Logging.xmlWarning(xmlFile, "Node '%s' has no shader parameter '%s' for animationNode '%s'!", v9, self.shaderParameterName, key)
    return nil
  end
  if self.shaderParameterPrevName ~= nil then
    v6 = getHasShaderParameter(self.node, self.shaderParameterPrevName)
    -- if v6 then goto L128 end
    v9 = getName(self.node)
    Logging.xmlWarning(xmlFile, "Node '%s' has no shader parameter '%s' (prev) for animationNode '%s'!", v9, self.shaderParameterPrevName, key)
    return nil
  else
    local v10 = v10:sub(1, 1)
    v10 = v10:upper()
    v9 = v9:sub(2)
    local v7 = getHasShaderParameter(self.node, "prev" .. v10 .. v9)
    if v7 then
      self.shaderParameterPrevName = "prev" .. v10 .. v9
    end
  end
  v6 = xmlFile:getValue(key .. "#type")
  if v6 ~= nil then
    v7 = v7:getFillTypeIndexByName(v6)
    self.fillTypeIndex = v7
  end
  local v8 = xmlFile:getValue(key .. "#scrollSpeed", 1)
  self.scrollSpeed = v8 * 0.001
  v7 = xmlFile:getValue(key .. "#scrollLength", 1)
  self.scrollLength = v7
  v7 = xmlFile:getValue(key .. "#shaderParameterComponent", 1)
  self.shaderParameterComponent = v7
  v9 = xmlFile:getValue(key .. "#turnOnFadeTime", 2)
  v7 = math.max(v9 * 1000, 1)
  self.turnOnFadeTime = v7
  v9 = xmlFile:getValue(key .. "#turnOffFadeTime", 2)
  v7 = math.max(v9 * 1000, 1)
  self.turnOffFadeTime = v7
  v7 = xmlFile:getValue(key .. "#turnOnOffVariance")
  self.turnOnOffVariance = v7
  if self.turnOnOffVariance ~= nil then
    self.initialTurnOnFadeTime = self.turnOnFadeTime
    self.initialTurnOffFadeTime = self.turnOffFadeTime
    self.turnOnOffVariance = self.turnOnOffVariance * 1000
  end
  v7 = xmlFile:getValue(key .. "#speedFunc")
  if v7 ~= nil then
    if owner[v7] ~= nil then
      self.speedFunc = owner[v7]
      self.speedFuncTarget = self.owner
      v8 = xmlFile:getValue(key .. "#speedFuncParam")
      self.speedFuncParam = v8
    else
      Logging.xmlWarning(xmlFile, "Could not find speed function '%s' for scrolling animation '%s'!", v7, key)
    end
  end
  v8 = xmlFile:getValue(key .. "#minAlphaForTurnOff", 0)
  self.minAlphaForTurnOff = v8
  self.delayedTurnOff = false
  v8 = xmlFile:getValue(key .. "#turnedOffPosition")
  self.turnedOffPosition = v8
  if self.turnedOffPosition ~= nil then
    self.turnOffFadeTimeOrigin = self.turnOffFadeTime
    v8 = xmlFile:getValue(key .. "#turnedOffSubDivisions", 1)
    self.turnedOffSubDivisions = v8
  end
  return self
end
function ScrollingAnimation:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.state == ScrollingAnimation.STATE_ON then
    local v2 = math.min(1, self.currentAlpha + dt / self.turnOnFadeTime)
    self.currentAlpha = v2
  elseif self.state == ScrollingAnimation.STATE_TURNING_OFF then
    v2 = math.max(0, self.currentAlpha - dt / self.turnOffFadeTime)
    self.currentAlpha = v2
  end
  if 0 < self.currentAlpha then
    v2 = self.speedFunc(self.speedFuncTarget, self.speedFuncParam)
    local v3, v4, v5, v6 = getShaderParameter(self.node, self.shaderParameterName)
    if self.shaderParameterComponent == 1 then
      local v7 = self:updateScrollPosition(v3, dt, v2)
    elseif self.shaderParameterComponent == 2 then
      v7 = self:updateScrollPosition(v4, dt, v2)
    else
      if self.shaderParameterComponent == 3 then
        v7 = self:updateScrollPosition(v5, dt, v2)
      else
        v7 = self:updateScrollPosition(v6, dt, v2)
      end
    end
    if self.shaderParameterPrevName ~= nil then
      v7:setPrevShaderParameter(self.node, self.shaderParameterName, v3, v4, v5, v6, false, self.shaderParameterPrevName)
    else
      setShaderParameter(self.node, self.shaderParameterName, v3, v4, v5, v6, false)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L174
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L174
    v7:setMovingToolDirty(self.node)
  else
    self.state = ScrollingAnimation.STATE_OFF
  end
  if self.delayedTurnOff and self.minAlphaForTurnOff <= self.currentAlpha then
    self.delayedTurnOff = false
    self:stop()
  end
  self:updateDuplicates()
end
function ScrollingAnimation:isRunning()
  if self.state == ScrollingAnimation.STATE_OFF then
  end
  return true
end
function ScrollingAnimation:start()
  if self.state ~= ScrollingAnimation.STATE_ON then
    if self.state == ScrollingAnimation.STATE_OFF and self.turnOnOffVariance ~= nil and self.currentAlpha == 0 then
      local v3 = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOnFadeTime = self.initialTurnOnFadeTime + v3
      v3 = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOffFadeTime = self.initialTurnOffFadeTime + v3
    end
    self.state = ScrollingAnimation.STATE_ON
    self:updateDuplicates()
    return true
  end
  return false
end
function ScrollingAnimation:stop()
  if self.state ~= ScrollingAnimation.STATE_OFF then
    if 0 < self.minAlphaForTurnOff and self.currentAlpha < self.minAlphaForTurnOff then
      self.delayedTurnOff = true
      self.state = RotationAnimation.STATE_ON
      return true
    end
    self.state = ScrollingAnimation.STATE_TURNING_OFF
    self:updateDuplicates()
    if self.turnedOffPosition ~= nil then
      local dt = self.speedFunc(self.speedFuncTarget)
      local v2, v3, v4, v5 = getShaderParameter(self.node, self.shaderParameterName)
      if self.shaderParameterComponent == 1 then
      elseif self.shaderParameterComponent == 2 then
      else
        if self.shaderParameterComponent == 3 then
        end
      end
      local v10 = MathUtil.sign(self.scrollSpeed)
      local v7 = Animation.calculateTurnOffFadeTime(self.currentAlpha, self.scrollSpeed * dt, v10, v6, self.turnedOffPosition, self.turnOffFadeTimeOrigin, self.scrollLength, self.turnedOffSubDivisions)
      self.turnOffFadeTime = v7
    end
    return true
  end
  return false
end
function ScrollingAnimation:reset()
  self.currentAlpha = 0
  self.state = ScrollingAnimation.STATE_OFF
  self:updateDuplicates()
end
function ScrollingAnimation:setFillType(fillTypeIndex)
  if self.fillTypeIndex ~= nil then
    if self.fillTypeIndex ~= fillTypeIndex then
    end
    v2(v3, true)
  end
end
function ScrollingAnimation:updateScrollPosition(scrollPosition, dt, speedFactor)
  return (scrollPosition + self.currentAlpha * dt * self.scrollSpeed * speedFactor) % self.scrollLength
end
function ScrollingAnimation:isDuplicate(otherAnimation)
  local v2 = otherAnimation:isa(ScrollingAnimation)
  if v2 and self.parent == otherAnimation.parent and self.node == otherAnimation.node then
    return true
  end
  return false
end
function ScrollingAnimation:updateDuplicate(otherAnimation)
  otherAnimation.currentAlpha = self.currentAlpha
  otherAnimation.state = self.state
end
function ScrollingAnimation:registerAnimationClassXMLPaths(dt)
  self:register(XMLValueType.NODE_INDEX, dt .. "#node", "Node")
  self:register(XMLValueType.STRING, dt .. "#shaderParameterName", "Shader parameter name")
  self:register(XMLValueType.STRING, dt .. "#shaderParameterPrevName", "Prev Shader parameter name", "automatically calculated from #shaderParameterName")
  self:register(XMLValueType.STRING, dt .. "#type", "(ScrollingAnimation) Fill type name")
  self:register(XMLValueType.FLOAT, dt .. "#scrollSpeed", "(ScrollingAnimation) Scroll speed", 1)
  self:register(XMLValueType.FLOAT, dt .. "#scrollLength", "(ScrollingAnimation) Scroll length", 1)
  self:register(XMLValueType.FLOAT, dt .. "#shaderParameterComponent", "(ScrollingAnimation) Shader parameter component", 1)
  self:register(XMLValueType.FLOAT, dt .. "#turnOnFadeTime", "Turn on fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOffFadeTime", "Turn off fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOnOffVariance", "Turn off time variance")
  self:register(XMLValueType.FLOAT, dt .. "#turnedOffPosition", "(ScrollingAnimation) Target position while turned off")
  self:register(XMLValueType.FLOAT, dt .. "#turnedOffSubDivisions", "Amount of sub divisions which have the same state", 1)
  self:register(XMLValueType.FLOAT, dt .. "#minAlphaForTurnOff", "Min. alpha for turn off (speed [0-1])", 0)
  self:register(XMLValueType.STRING, dt .. "#speedFunc", "Lua speed function")
  self:register(XMLValueType.STRING, dt .. "#speedFuncParam", "Additional string parameter that is passed to the speedFunc")
end
