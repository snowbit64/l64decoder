-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InterpolatorAngle = {}
local InterpolatorAngle_mt = Class(InterpolatorAngle)
function InterpolatorAngle.new(value, customMt)
  if customMt == nil then
  end
  setmetatable(v2, v3)
  v2.value = value
  v2.lastValue = value
  v2.targetValue = value
  return v2
end
function InterpolatorAngle:setAngle(value)
  self.value = value
  self.lastValue = value
  self.targetValue = value
end
function InterpolatorAngle:setTargetAngle(targetValue)
  local v2 = self:clampValue(targetValue)
  self.targetValue = v2
  self.lastValue = self.value
  if math.pi < v2 - self.value then
    self.lastValue = self.value + 2 * math.pi
    return
  end
  if targetValue - self.value < -math.pi then
    self.lastValue = self.value - 2 * math.pi
  end
end
function InterpolatorAngle:getInterpolatedValue(interpolationAlpha)
  self.value = self.lastValue + interpolationAlpha * (self.targetValue - self.lastValue)
  local v2 = self:clampValue(self.value)
  self.value = v2
  if self.value ~= self.min then
    -- if v0.value ~= v0.max then goto L35 end
  end
  self:setAngle(self.value)
  return self.value
end
function InterpolatorAngle:clampValue(value)
  if self.min ~= nil then
    local v2 = math.max(value, self.min)
  end
  if self.max ~= nil then
    v2 = math.min(value, self.max)
  end
  return value
end
function InterpolatorAngle:setMinMax(min, max)
  local v3 = Utils.getNoNil(min, self.min)
  self.min = v3
  v3 = Utils.getNoNil(max, self.max)
  self.max = v3
end
