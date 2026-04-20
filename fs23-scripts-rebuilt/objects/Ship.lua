-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Ship = {}
local Ship_mt = Class(Ship)
function Ship.onCreate(v0, v1)
  local v4 = Ship.new(v1)
  v2:addUpdateable(...)
end
function Ship.new(id)
  setmetatable({}, u0)
  local v2 = getChildAt(id, 0)
  local v4 = getChildAt(id, 1)
  table.insert(...)
  table.insert({nurbsId = v2, shipIds = {}, times = {}}.times, 0)
  v2 = getSplineLength({nurbsId = v2, shipIds = {}, times = {}}.nurbsId)
  local v5 = getUserAttribute(id, "speed")
  v4 = Utils.getNoNil(v5, 10)
  v4 = getUserAttribute(id, "numShips")
  local v3 = Utils.getNoNil(v4, 1)
  -- TODO: structure LOP_FORNPREP (pc 70, target 104)
  local v7 = clone({nurbsId = v2, shipIds = {}, times = {}, timeScale = v4 / 3.6}.shipIds[1], false, true)
  link(id, v7)
  table.insert({nurbsId = v2, shipIds = {}, times = {}, timeScale = v4 / 3.6}.shipIds, v7)
  table.insert({nurbsId = v2, shipIds = {}, times = {}, timeScale = v4 / 3.6}.times, 1 / v3 * (2 - 1))
  -- TODO: structure LOP_FORNLOOP (pc 103, target 71)
  if v2 ~= 0 then
  end
  v1.initCount = 0
  return v1
end
function Ship.delete(v0)
end
function Ship:update(dt)
  if 0 < self.initCount then
    local v5 = table.getn(self.shipIds)
    -- TODO: structure LOP_FORNPREP (pc 13, target 96)
    self.times[1] = self.times[1] - 0.001 * dt * self.timeScale
    if self.times[1] < 0 then
      self.times[1] = self.times[1] + 1
    end
    if 1 < self.times[v4] then
      self.times[v4] = self.times[v4] - 1
    end
    local v5, v6, v7 = getSplinePosition(self.nurbsId, self.times[v4])
    local v8, v9, v10 = getSplineOrientation(self.nurbsId, self.times[v4], 0, -1, 0)
    setTranslation(self.shipIds[v4], v5, v6, v7)
    setRotation(self.shipIds[v4], v8, v9, v10)
    -- TODO: structure LOP_FORNLOOP (pc 89, target 14)
    return
  end
  self.initCount = self.initCount + 1
end
