-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Windmill = {}
local Windmill_mt = Class(Windmill)
function Windmill.onCreate(v0, v1)
  local v4 = Windmill.new(v1)
  v2:addUpdateable(...)
end
function Windmill.new(name)
  setmetatable({}, u0)
  local soundId = createAudioSource("windmillSample", "data/maps/sounds/windmill.wav", 100, 30, 0.5, 0)
  link(name, soundId)
  local topId = getChildAt(name, 0)
  local v4 = getChildAt(topId, 0)
  v4 = getChildAt(topId, 1)
  v4 = getChildAt(topId, 2)
  v4 = math.random(0, 360)
  local v9 = MathUtil.degToRad(v4)
  rotate(...)
  local v5 = math.random(0, {rotorId = v4, lightUnlitId = v4, lightLitId = v4, blinkInterval = 1000}.blinkInterval)
  return {rotorId = v4, lightUnlitId = v4, lightLitId = v4, blinkInterval = 1000, currentBlinkTime = v5, lightOn = true, counter = 10}
end
function Windmill.delete(v0)
end
function Windmill:update(dt)
  rotate(self.rotorId, 0, 0, -0.002 * dt)
  if not g_currentMission.environment.isSunOn then
    self.currentBlinkTime = self.currentBlinkTime - dt
    -- if v0.currentBlinkTime >= 0 then goto L69 end
    self.lightOn = not self.lightOn
    self.currentBlinkTime = self.blinkInterval
    setVisibility(self.lightLitId, self.lightOn)
    setVisibility(self.lightUnlitId, not self.lightOn)
    return
  end
  if self.lightOn then
    self.lightOn = false
    setVisibility(self.lightLitId, self.lightOn)
    setVisibility(self.lightUnlitId, not self.lightOn)
  end
end
