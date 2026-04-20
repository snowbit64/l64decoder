-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Tween = {}
local Tween_mt = Class(Tween)
function Tween.new(setterFunction, startValue, endValue, duration, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  v5.setter = setterFunction
  v5.startValue = startValue
  v5.endValue = endValue
  v5.duration = duration
  v5.elapsedTime = 0
  if duration ~= 0 then
  end
  v5.isFinished = true
  v5.functionTarget = nil
  v5.curveFunc = Tween.CURVE.LINEAR
  return v5
end
function Tween:getDuration()
  return self.duration
end
function Tween:getFinished()
  return self.isFinished
end
function Tween:reset()
  self.elapsedTime = 0
  if self.duration ~= 0 then
  end
  self.isFinished = true
end
function Tween:setTarget(target)
  self.functionTarget = target
end
function Tween:update(dt)
  if self.isFinished then
    return
  end
  self.elapsedTime = self.elapsedTime + dt
  if self.duration <= self.elapsedTime then
    self.isFinished = true
    local v3 = self:tweenValue(1)
  else
    local v4 = self:tweenValue(self.elapsedTime / self.duration)
  end
  self:applyValue(v2)
end
function Tween:tweenValue(t)
  local v5 = self.curveFunc(t)
  return MathUtil.lerp(...)
end
function Tween:applyValue(newValue)
  if self.functionTarget ~= nil then
    self.setter(self.functionTarget, newValue)
    return
  end
  self.setter(newValue)
end
function Tween:setCurve(func)
  if not func then
  end
  self.curveFunc = v2
end
Tween.CURVE = {}
function Tween.CURVE.LINEAR(v0)
  return v0
end
function Tween.CURVE.EASE_IN(v0)
  return v0 * v0 * v0
end
function Tween.CURVE.EASE_OUT(v0)
  return (v0 - 1) * (v0 - 1) * (v0 - 1) + 1
end
function Tween.CURVE.EASE_IN_OUT(t)
  if t < 0.5 then
    local v3 = Tween.CURVE.EASE_IN(t * 2)
    return 0.5 * v3
  end
  local v4 = Tween.CURVE.EASE_OUT((t - 0.5) * 2)
  return 0.5 * v4 + 0.5
end
function Tween.CURVE.EASE_OUT_IN(t)
  if t < 0.5 then
    local v3 = Tween.CURVE.EASE_OUT(t * 2)
    return 0.5 * v3
  end
  local v4 = Tween.CURVE.EASE_IN((t - 0.5) * 2)
  return 0.5 * v4 + 0.5
end
function Tween.CURVE.EASE_IN_BACK(t)
  local v2 = math.pow(t, 2)
  return v2 * (2.70158 * t - 1.70158)
end
function Tween.CURVE.EASE_OUT_BACK(t)
  local v4 = math.pow(t - 1, 2)
  return v4 * (2.70158 * (t - 1) + 1.70158) + 1
end
function Tween.CURVE.EASE_IN_OUT_BACK(t)
  if t < 0.5 then
    local v3 = Tween.CURVE.EASE_IN_BACK(t * 2)
    return 0.5 * v3
  end
  local v4 = Tween.CURVE.EASE_OUT_BACK((t - 0.5) * 2)
  return 0.5 * v4 + 0.5
end
function Tween.CURVE.EASE_OUT_IN_BACK(t)
  if t < 0.5 then
    local v3 = Tween.CURVE.EASE_OUT_BACK(t * 2)
    return 0.5 * v3
  end
  local v4 = Tween.CURVE.EASE_IN_BACK((t - 0.5) * 2)
  return 0.5 * v4 + 0.5
end
