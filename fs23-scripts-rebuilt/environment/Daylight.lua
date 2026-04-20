-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Daylight = {}
local Daylight_mt = Class(Daylight)
function Daylight.new(environment, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.environment = environment
  v2.dayStart = 6
  v2.dayEnd = 20
  v2.nightEnd = 8
  v2.nightStart = 18
  v2.logicalNightStart = 6
  v2.logicalNightEnd = 18
  v2.logicalNightStartMinutes = v2.logicalNightStart * 60
  v2.logicalNightEndMinutes = v2.logicalNightEnd * 60
  return v2
end
function Daylight.delete(v0)
end
function Daylight:load(xmlFile, baseKey)
  local v3 = xmlFile:getFloat(baseKey .. ".latitude", 50)
  self.latitude = v3
  self.latitudeInRadians = self.latitude * math.pi / 180
end
function Daylight.saveToXMLFile(v0, v1, v2)
end
function Daylight.loadFromXMLFile(v0, v1, v2)
end
function Daylight:setEnvironment(environment)
  self.environment = environment
end
function Daylight:setJulianDay(julianDay)
  if self.julianDay ~= julianDay then
    self.julianDay = julianDay
    local v2, v3, v4, v5 = self:calculateStartEndOfDay()
    self.dayStart = v2
    self.dayEnd = v3
    self.nightEnd = v4
    self.nightStart = v5
    v2 = MathUtil.lerp(self.dayEnd, self.nightStart, 0.3)
    self.logicalNightStart = v2
    v2 = MathUtil.lerp(self.nightEnd, self.dayStart, 0.8)
    self.logicalNightEnd = v2
    self.logicalNightStartMinutes = self.logicalNightStart * 60
    self.logicalNightEndMinutes = self.logicalNightEnd * 60
    v2:publishDelayed(MessageType.DAYLIGHT_CHANGED)
  end
end
function Daylight:getDaylightTimes()
  return self.dayStart, self.dayEnd, self.nightEnd, self.nightStart
end
function Daylight:getLogicalNightTime()
  return self.logicalNightStart, self.logicalNightEnd
end
function Daylight:getSunHeightAngle()
  local v4 = self:calculateSunDeclination()
  return self.latitudeInRadians - v4 - math.pi / 2
end
function Daylight:calculateStartEndOfDay()
  local sunDeclination = self:calculateSunDeclination()
  local v6 = self:calculateTime(-12, true, sunDeclination)
  v6 = self:calculateTime(-5, false, sunDeclination)
  v6 = self:calculateTime(14, false, sunDeclination)
  v6 = self:calculateTime(5, true, sunDeclination)
  v6 = math.max(v6, 1.01)
  if v6 == v6 then
  end
  v6 = math.min(v4, 22.99)
  v6 = math.min(v2, v6 - 0.01)
  return v1, v6, v3, v6
end
function Daylight:calculateTime(position, isDawn, sunDeclination)
  local v8 = math.sin(position * math.pi / 180)
  local v10 = math.sin(self.latitudeInRadians)
  local v11 = math.sin(sunDeclination)
  local v9 = math.cos(self.latitudeInRadians)
  v10 = math.cos(sunDeclination)
  if (v8 + v10 * v11) / v9 * v10 < -1 then
  elseif 1 < (v8 + v10 * v11) / v9 * v10 then
  else
    v10 = math.acos((v8 + v10 * v11) / v9 * v10)
  end
  if isDawn then
    return math.max(12 - v4 / 2, 0.01)
  end
  v7 = math.min(12 + v4 / 2, 23.99)
  return v7
end
function Daylight:calculateSunDeclination()
  local v8 = math.tan(0.0086 * (self.julianDay - 186))
  local v5 = math.atan(0.967 * v8)
  v5 = math.cos(0.216 + 2 * v5)
  return math.asin(0.4 * v5)
end
