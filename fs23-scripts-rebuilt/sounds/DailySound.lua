-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DailySound = {}
local DailySound_mt = Class(DailySound)
function DailySound.onCreate(v0, v1)
  local v4 = DailySound.new(v1)
  v2:addNonUpdateable(...)
end
function DailySound.new(id, customMt)
  if customMt ~= nil then
    setmetatable({}, customMt)
  else
    setmetatable({}, u0)
  end
  v2.soundId = id
  local v4 = getUserAttribute(id, "startTime")
  local v3 = Utils.getNoNil(v4, 0)
  v2.startTime = v3
  v4 = getUserAttribute(id, "endTime")
  v3 = Utils.getNoNil(v4, 24)
  v2.endTime = v3
  setVisibility(id, false)
  v2.isActive = false
  v2.oldIsActive = false
  v3 = addTimer(1000, "dailySoundTimerCallback", v2)
  v2.timerId = v3
  return v2
end
function DailySound:delete()
  removeTimer(self.timerId)
end
function DailySound:dailySoundTimerCallback()
  if g_currentMission ~= nil then
    if self.endTime < self.startTime then
      if self.startTime * 60 * 60 * 1000 >= g_currentMission.environment.dayTime and g_currentMission.environment.dayTime >= self.endTime * 60 * 60 * 1000 then
      end
      self.isActive = v1
    else
      if self.startTime * 60 * 60 * 1000 < g_currentMission.environment.dayTime and g_currentMission.environment.dayTime >= self.endTime * 60 * 60 * 1000 then
      end
      self.isActive = v1
    end
    if self.isActive ~= self.oldIsActive then
      setVisibility(self.soundId, self.isActive)
      self.oldIsActive = self.isActive
    end
  end
  return true
end
