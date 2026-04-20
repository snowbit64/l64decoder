-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ValueInterpolator = {}
local ValueInterpolator_mt = Class(ValueInterpolator)
function ValueInterpolator.new(customKey, get, set, target, duration, speed, customMt)
  if not customMt then
  end
  local v7 = v7(v8, v9)
  v7.customKey = customKey
  v7.get = get
  v7.set = set
  v7.target = target
  v7.duration = duration
  local v9 = get()
  v7.cur = {}
  if v7.duration ~= nil then
    v7:updateSpeed()
  else
    v7.speed = {}
    -- TODO: structure LOP_FORNPREP (pc 45, target 50)
    v7.speed[1] = (speed or 1) / 1000
    -- TODO: structure LOP_FORNLOOP (pc 49, target 46)
  end
  -- TODO: structure LOP_FORNPREP (pc 56, target 69)
  local v12 = math.abs(v7.speed[1])
  if 0.000000001 < v12 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 68, target 57)
  if v8 then
    v9:addUpdateable(v7, customKey)
    return v7
  end
end
function ValueInterpolator:setUpdateFunc(updateFunc, updateTarget, ...)
  self.updateFunc = updateFunc
  self.updateTarget = updateTarget
  self.updateArgs = {}
end
function ValueInterpolator:setFinishedFunc(finishedFunc, finishedTarget, ...)
  self.finishedFunc = finishedFunc
  self.finishedTarget = finishedTarget
  self.finishedArgs = {}
end
function ValueInterpolator:setDeleteListenerObject(object)
  if object ~= nil then
    local v2 = object:isa(Object)
    if v2 then
      object:addDeleteListener(self, "onDeleteParent")
      self.deleteListenerObject = object
    end
  end
end
function ValueInterpolator.delete(v0)
end
function ValueInterpolator:getTarget()
  return self.target
end
function ValueInterpolator:updateSpeed()
  local v1 = type(self.duration)
  if v1 == "number" then
    self.speed = {}
    -- TODO: structure LOP_FORNPREP (pc 17, target 41)
    local v6 = math.abs(self.target[1] - self.cur[1])
    self.speed[1] = v6 / self.duration
    -- TODO: structure LOP_FORNLOOP (pc 35, target 18)
    return
  end
  self.speed = self.duration
end
function ValueInterpolator:update(dt)
  -- TODO: structure LOP_FORNPREP (pc 6, target 55)
  local v6 = MathUtil.sign(self.target[1] - self.cur[1])
  if v6 < 0 then
  end
  local v9 = v7(self.cur[v5] + self.speed[v5] * dt * v6, self.target[v5])
  self.cur[v5] = v9
  if v2 and self.cur[v5] ~= self.target[v5] then
  end
  -- TODO: structure LOP_FORNLOOP (pc 54, target 7)
  local v4 = unpack(self.cur)
  self.set(...)
  if self.updateFunc ~= nil then
    local v5 = unpack(self.updateArgs)
    self.updateFunc(...)
  end
  if self.duration ~= nil then
    local v3 = math.max(self.duration - dt, 1)
    self.duration = v3
  end
  if v2 then
    v3:removeUpdateable(self.customKey)
    if self.deleteListenerObject ~= nil then
      v3:removeDeleteListener("onDeleteParent")
    end
    if self.finishedFunc ~= nil then
      v5 = unpack(self.finishedArgs)
      self.finishedFunc(...)
    end
  end
end
function ValueInterpolator.removeInterpolator(key)
  local v1 = v1:getHasUpdateable(key)
  if v1 then
    v1:removeUpdateable(key)
  end
end
function ValueInterpolator.hasInterpolator(key)
  return v1:getHasUpdateable(key)
end
function ValueInterpolator:onDeleteParent()
  v1:removeUpdateable(self.customKey)
end
