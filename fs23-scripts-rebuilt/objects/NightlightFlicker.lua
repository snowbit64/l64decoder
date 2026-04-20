-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NightlightFlicker = {}
local NightlightFlicker_mt = Class(NightlightFlicker)
function NightlightFlicker.onCreate(v0, v1)
  local v4 = NightlightFlicker.new(v1)
  v2:addUpdateable(...)
end
function NightlightFlicker.new(id)
  setmetatable({}, u0)
  setVisibility({id = id, isVisible = false, isFlickerActive = false, nextFlicker = 0, flickerDuration = 100}.id, {id = id, isVisible = false, isFlickerActive = false, nextFlicker = 0, flickerDuration = 100}.isVisible)
  v2:subscribe(MessageType.WEATHER_CHANGED, {id = id, isVisible = false, isFlickerActive = false, nextFlicker = 0, flickerDuration = 100}.oNWeatherChanged, {id = id, isVisible = false, isFlickerActive = false, nextFlicker = 0, flickerDuration = 100})
  return {id = id, isVisible = false, isFlickerActive = false, nextFlicker = 0, flickerDuration = 100}
end
function NightlightFlicker.delete(v0)
  v1:unsubscribeAll(v0)
end
function NightlightFlicker:update(dt)
  if self.isVisible then
    self.nextFlicker = self.nextFlicker - dt
    if self.nextFlicker <= 0 then
      self.isFlickerActive = true
      setVisibility(self.id, false)
      local v6 = math.random()
      local v2 = math.floor(v6 * 1500 + self.flickerDuration + 10)
      self.nextFlicker = v2
    end
    if self.isFlickerActive then
      self.flickerDuration = self.flickerDuration - dt
      if self.flickerDuration <= 0 then
        self.isFlickerActive = false
        local v4 = math.random()
        v2 = math.floor(v4 * 200)
        self.flickerDuration = v2
        setVisibility(self.id, true)
      end
    end
  end
end
function NightlightFlicker:onWeatherChanged()
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    if g_currentMission.environment.isSunOn then
      local v3 = v3:getIsRaining()
    end
    self.isVisible = not v2
    setVisibility(self.id, self.isVisible)
  end
end
