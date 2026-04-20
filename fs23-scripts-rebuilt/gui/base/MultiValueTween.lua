-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MultiValueTween = {}
local MultiValueTween_mt = Class(MultiValueTween, Tween)
function MultiValueTween.new(setterFunction, startValues, endValues, duration, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7, v8, v9, v10)
  local v7 = unpack(startValues)
  v5.values = {}
  return v5
end
function MultiValueTween:setTarget(target)
  if self.functionTarget == nil then
  end
  local v4 = v4:superClass()
  v4.setTarget(self, target)
  if target ~= nil and not true then
    table.insert(self.values, 1, target)
    return
  end
  if target == nil and v2 then
    table.remove(self.values, 1)
    return
  end
  self.values[1] = target
end
function MultiValueTween:tweenValue(t)
  if self.functionTarget ~= nil then
  else
  end
  -- TODO: structure LOP_FORNPREP (pc 12, target 33)
  local v13 = self.curveFunc(t)
  local v10 = MathUtil.lerp(...)
  self.values[1 + v2] = v10
  -- TODO: structure LOP_FORNLOOP (pc 32, target 13)
  return self.values
end
function MultiValueTween:applyValue()
  local v2 = unpack(self.values)
  self.setter(...)
end
