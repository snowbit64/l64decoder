-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TemperatureUpdater = {}
local TemperatureUpdater_mt = Class(TemperatureUpdater)
function TemperatureUpdater.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.dayLength = 1
  v1.isDirty = false
  v1.currentMin = 15
  v1.currentMax = 20
  v1.targetMin = 15
  v1.targetMax = 20
  v1.changeDuration = 3600000
  return v1
end
function TemperatureUpdater.delete(v0)
end
function TemperatureUpdater:update(dt)
  if self.isDirty then
    if self.currentMax < self.targetMax then
      local v3 = math.min(self.currentMax + dt / self.changeDuration, self.targetMax)
      self.currentMax = v3
    else
      v3 = math.max(self.currentMax - dt / self.changeDuration, self.targetMax)
      self.currentMax = v3
    end
    if self.currentMin < self.targetMin then
      v3 = math.min(self.currentMin + v2, self.targetMin)
      self.currentMin = v3
    else
      v3 = math.max(self.currentMin - v2, self.targetMin)
      self.currentMin = v3
    end
    if self.currentMin == self.targetMin and self.currentMax == self.targetMax then
    end
    self.isDirty = v3
  end
end
function TemperatureUpdater:setDayLength(dayLength)
  self.dayLength = dayLength
end
function TemperatureUpdater:getCurrentValues()
  return self.currentMin, self.currentMax
end
function TemperatureUpdater:setTargetValues(targetMin, targetMax, immediate)
  self.isDirty = not immediate
  self.targetMin = targetMin
  self.targetMax = targetMax
  if immediate then
    self.currentMin = targetMin
    self.currentMax = targetMax
  end
end
function TemperatureUpdater:getTemperatureAtTime(dayTime)
  local v9 = math.sin(2 * math.pi * dayTime / self.dayLength - 2.5)
  return 0.5 * (self.currentMax - self.currentMin) * v9 + self.currentMin + 0.5 * (self.currentMax - self.currentMin)
end
