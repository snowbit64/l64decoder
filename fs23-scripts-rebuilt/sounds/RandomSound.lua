-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RandomSound = {STATE_WAITING = 0, STATE_PLAYING = 1}
local RandomSound_mt = Class(RandomSound)
function RandomSound.onCreate(v0, v1)
  local v4 = RandomSound.new(v1)
  v2:addNonUpdateable(...)
end
function RandomSound.new(id, customMt)
  if customMt ~= nil then
    setmetatable({}, customMt)
  else
    setmetatable({}, u0)
  end
  v2.soundId = id
  local v4 = getUserAttribute(id, "randomMin")
  local v3 = Utils.getNoNil(v4, 1000)
  v2.randomMin = v3
  v4 = getUserAttribute(id, "randomMax")
  v3 = Utils.getNoNil(v4, 2000)
  v2.randomMax = v3
  v4 = getUserAttribute(id, "playByNight")
  v3 = Utils.getNoNil(v4, false)
  v2.playByNight = v3
  v4 = getAudioSourceSample(id)
  v3 = getSampleDuration(...)
  v2.playTime = v3
  setVisibility(id, false)
  v2.playState = RandomSound.STATE_WAITING
  v4 = v2:getRandomTime()
  v3 = addTimer(v4, "randomSoundTimerCallback", v2)
  v2.timerId = v3
  return v2
end
function RandomSound:delete()
  removeTimer(self.timerId)
end
function RandomSound:randomSoundTimerCallback()
  if self.playState == RandomSound.STATE_WAITING then
    if g_currentMission ~= nil and g_currentMission.isRunning and not self.playByNight and 18000000 < g_currentMission.environment.dayTime and g_currentMission.environment.dayTime >= 79200000 then
    end
    if randomDelay then
      setVisibility(self.soundId, true)
      setTimerTime(self.timerId, self.playTime)
    else
      setVisibility(self.soundId, false)
      setTimerTime(self.timerId, self.randomMax)
    end
    self.playState = RandomSound.STATE_PLAYING
  else
    setVisibility(self.soundId, false)
    local randomDelay = self:getRandomTime()
    setTimerTime(self.timerId, randomDelay)
    self.playState = RandomSound.STATE_WAITING
  end
  return true
end
function RandomSound:getRandomTime()
  return math.random(self.randomMin, self.randomMax)
end
