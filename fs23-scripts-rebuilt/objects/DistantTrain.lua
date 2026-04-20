-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DistantTrain = {}
local DistantTrain_mt = Class(DistantTrain)
function DistantTrain.onCreate(v0, v1)
  local v4 = DistantTrain.new(v1)
  v2:addUpdateable(...)
end
function DistantTrain.new(id)
  local v1 = setmetatable({}, u0)
  local v2 = getChildAt(id, 0)
  v1.nurbsId = v2
  v2 = getChildAt(id, 1)
  v1.distantTrainId = v2
  v1.time = 1
  local v4 = getUserAttribute(id, "speed")
  local v3 = Utils.getNoNil(v4, 10)
  v1.timeScale = v3 / 100
  v4 = getUserAttribute(id, "delayMin")
  v3 = Utils.getNoNil(v4, 10)
  v1.delayMin = v3 * 1000
  v4 = getUserAttribute(id, "delayMax")
  v3 = Utils.getNoNil(v4, 30)
  v1.delayMax = v3 * 1000
  v2 = math.random(v1.delayMin, v1.delayMax)
  v1.currentDelay = v2
  v2, v3, v4 = getSplineDirection(v1.nurbsId, 0.5)
  setDirection(v1.distantTrainId, v2, 0, v4, 0, 1, 0)
  return v1
end
function DistantTrain.delete(v0)
end
function DistantTrain:update(dt)
  if 0 < self.currentDelay then
    self.currentDelay = self.currentDelay - dt
    return
  end
  self.time = self.time - 0.001 * dt * self.timeScale
  if self.time < 0 then
    self.time = 1
    local v2 = math.random(self.delayMin, self.delayMax)
    self.currentDelay = v2
  end
  local v2, v3, v4 = getSplinePosition(self.nurbsId, self.time)
  setTranslation(self.distantTrainId, v2, v3, v4)
end
