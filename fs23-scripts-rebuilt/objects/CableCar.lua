-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CableCar = {}
local CableCar_mt = Class(CableCar)
function CableCar.onCreate(v0, v1)
  local v4 = CableCar.new(v1)
  v2:addUpdateable(...)
end
function CableCar.new(id)
  setmetatable({}, u0)
  local v2 = getChildAt(id, 0)
  local v4 = getChildAt(id, 1)
  table.insert(...)
  table.insert({nurbsId = v2, cableCarIds = {}, times = {}}.times, 0)
  local v5 = getChildAt(id, 1)
  v4 = getChildAt(v5, 0)
  table.insert(...)
  v2 = getSplineLength({nurbsId = v2, cableCarIds = {}, times = {}, truckIds = {}}.nurbsId)
  v5 = getUserAttribute(id, "speed")
  v4 = Utils.getNoNil(v5, 10)
  v4 = getUserAttribute(id, "numCableCars")
  local v3 = Utils.getNoNil(v4, 1)
  -- TODO: structure LOP_FORNPREP (pc 89, target 134)
  local v7 = clone({nurbsId = v2, cableCarIds = {}, times = {}, truckIds = {}, timeScale = v4 / 3.6}.cableCarIds[1], false, true)
  link(id, v7)
  table.insert({nurbsId = v2, cableCarIds = {}, times = {}, truckIds = {}, timeScale = v4 / 3.6}.cableCarIds, v7)
  table.insert({nurbsId = v2, cableCarIds = {}, times = {}, truckIds = {}, timeScale = v4 / 3.6}.times, 1 / v3 * (2 - 1))
  local v10 = getChildAt(v7, 0)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 133, target 90)
  if v2 ~= 0 then
  end
  return v1
end
function CableCar.delete(v0)
end
function CableCar:update(dt)
  local v5 = table.getn(self.cableCarIds)
  -- TODO: structure LOP_FORNPREP (pc 8, target 109)
  self.times[1] = self.times[1] - 0.001 * dt * self.timeScale
  if self.times[1] < 0 then
    self.times[1] = self.times[1] + 1
  end
  if 1 < self.times[v4] then
    self.times[v4] = self.times[v4] - 1
  end
  local v5, v6, v7 = getSplinePosition(self.nurbsId, self.times[v4])
  local v8, v9, v10 = getSplineDirection(self.nurbsId, self.times[v4])
  setTranslation(self.cableCarIds[v4], v5, v6, v7)
  setDirection(self.cableCarIds[v4], v8, 0, v10, 0, 1, 0)
  local v11, v12, v13 = worldDirectionToLocal(self.cableCarIds[v4], v8, v9, v10, 0, 1, 0)
  setDirection(self.truckIds[v4], 0, v12, v13, 0, 1, 0)
  -- TODO: structure LOP_FORNLOOP (pc 108, target 9)
end
