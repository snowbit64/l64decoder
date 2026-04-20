-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WindObject = {}
local WindObject_mt = Class(WindObject)
function WindObject.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.windDirectionX = 1
  v1.windDirectionZ = 1
  v1.windVelocity = 1
  v1.cirrusSpeedFactor = 1
  return v1
end
function WindObject:load(xmlFile, key)
  local v3 = xmlFile:getFloat(key .. "#angle", 0)
  local v5 = math.rad(v3)
  local v4, v5 = MathUtil.getDirectionFromYRotation(...)
  self.windDirectionX = v4
  self.windDirectionZ = v5
  self.windAngle = v3
  local v7 = xmlFile:getFloat(key .. "#speed", 30)
  local v6 = MathUtil.kmhToMps(...)
  self.windVelocity = v6
  v6 = xmlFile:getFloat(key .. "#cirrusSpeedFactor", 1)
  self.cirrusSpeedFactor = v6
  return true
end
function WindObject.delete(v0)
end
function WindObject:getValues()
  return self.windDirectionX, self.windDirectionZ, self.windVelocity, self.cirrusSpeedFactor
end
