-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InterpolatorValue = {}
local InterpolatorValue_mt = Class(InterpolatorValue)
function InterpolatorValue.new(value, customMt)
  if customMt == nil then
  end
  local v3 = setmetatable({}, v2)
  v3.value = value
  v3.lastValue = value
  v3.targetValue = value
  return v3
end
function InterpolatorValue:setValue(value)
  self.value = value
  self.lastValue = value
  self.targetValue = value
end
function InterpolatorValue:setTargetValue(value)
  local v2 = self:clampValue(value)
  self.targetValue = v2
  self.lastValue = self.value
end
function InterpolatorValue:getInterpolatedValue(interpolationAlpha)
  self.value = self.lastValue + interpolationAlpha * (self.targetValue - self.lastValue)
  local v2 = self:clampValue(self.value)
  self.value = v2
  if self.value ~= self.min then
    -- if v0.value ~= v0.max then goto L35 end
  end
  self:setValue(self.value)
  return self.value
end
function InterpolatorValue:clampValue(value)
  if self.min ~= nil then
    local v2 = math.max(value, self.min)
  end
  if self.max ~= nil then
    v2 = math.min(value, self.max)
  end
  return value
end
function InterpolatorValue:setMinMax(min, max)
  local v3 = Utils.getNoNil(min, self.min)
  self.min = v3
  v3 = Utils.getNoNil(max, self.max)
  self.max = v3
end
