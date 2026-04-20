-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NightGlower = {}
local NightGlower_mt = Class(NightGlower)
function NightGlower.onCreate(v0, v1)
  local v4 = NightGlower.new(v1)
  v2:addUpdateable(...)
end
function NightGlower.new(id)
  setmetatable({}, u0)
  setShaderParameter({id = id, isSunOn = true, maxGlow = {1, 6, 3}, minGlow = {1, 3, 1}, timer = 0}.id, "colorTint", 1, 1, 1, 1, false)
  v2:subscribe(MessageType.WEATHER_CHANGED, {id = id, isSunOn = true, maxGlow = {1, 6, 3}, minGlow = {1, 3, 1}, timer = 0}.onWeatherChanged, {id = id, isSunOn = true, maxGlow = {1, 6, 3}, minGlow = {1, 3, 1}, timer = 0})
  return {id = id, isSunOn = true, maxGlow = {1, 6, 3}, minGlow = {1, 3, 1}, timer = 0}
end
function NightGlower.delete(v0)
  v1:unsubscribeAll(v0)
end
function NightGlower:update(dt)
  if not self.isSunOn then
    self.timer = (self.timer + dt * 0.001) % 2 * math.pi
    local v4 = math.sin(self.timer)
    {0, 0, 0}[1] = (v4 + 1) / 2 * self.maxGlow[1] + (1 - (v4 + 1) / 2) * self.minGlow[1]
    {0, 0, 0}[2] = (v4 + 1) / 2 * self.maxGlow[2] + (1 - (v4 + 1) / 2) * self.minGlow[2]
    {0, 0, 0}[3] = (v4 + 1) / 2 * self.maxGlow[3] + (1 - (v4 + 1) / 2) * self.minGlow[3]
    setShaderParameter(self.id, "colorTint", {0, 0, 0}[1], {0, 0, 0}[2], {0, 0, 0}[3], 1, false)
  end
end
function NightGlower:onWeatherChanged()
  self.isSunOn = g_currentMission.environment.isSunOn
  if self.isSunOn then
    setShaderParameter(self.id, "colorTint", 1, 1, 1, 1, false)
  end
end
