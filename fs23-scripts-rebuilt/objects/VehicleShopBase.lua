-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleShopBase = {}
local VehicleShopBase_mt = Class(VehicleShopBase)
function VehicleShopBase.onCreate(v0, v1)
  local v4 = VehicleShopBase.new(v1)
  v2:addUpdateable(...)
end
function VehicleShopBase.new(name)
  setmetatable({}, u0)
  local v2 = getChildAt({id = name}.id, 1)
  v2 = AnimCurve.new(linearInterpolator1)
  v2:addKeyframe({0.3, time = 0})
  v2:addKeyframe({0.3, time = 330})
  v2:addKeyframe({0.6, time = 360})
  v2:addKeyframe({1, time = 420})
  v2:addKeyframe({1, time = 1200})
  v2:addKeyframe({0.3, time = 1320})
  v2:addKeyframe({0.3, time = 1440})
  if g_currentMission ~= nil then
    g_currentMission.vehicleShopBase = {id = name, balloons = v2, alphaBadWeather = 0.4, timer = 0, updateDelay = 2000, alphaCurve = v2}
    if g_currentMission.environment ~= nil then
      local v6 = v6:get(g_currentMission.environment.dayTime / 60000)
      setShaderParameter({id = name, balloons = v2, alphaBadWeather = 0.4, timer = 0, updateDelay = 2000, alphaCurve = v2}.balloons, "alpha", v6, 0, 0, 0, true)
    end
  end
  setVisibility(v1.id, false)
  return v1
end
function VehicleShopBase.delete(v0)
end
function VehicleShopBase:update(dt)
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    local v2 = getVisibility(self.id)
    if v2 then
      self.timer = self.timer + dt
      if self.updateDelay < self.timer then
        self.timer = 0
      end
    end
  end
end
