-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotStateFilling = {}
local FeedingRobotStateFilling_mt = Class(FeedingRobotStateFilling, FeedingRobotState)
function FeedingRobotStateFilling:registerXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#deltaFillLevel", "Delta fill level")
end
function FeedingRobotStateFilling.new(feedingRobot, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.deltaFillLevel = nil
  return v2
end
function FeedingRobotStateFilling:load(xmlFile, key)
  local v4 = v4:superClass()
  v4.load(self, xmlFile, key)
  local v3 = xmlFile:getValue(key .. "#deltaFillLevel")
  self.deltaFillLevel = v3
end
function FeedingRobotStateFilling:deactivate()
  if self.deltaFillLevel ~= nil then
    v3:setFillScale((self.feedingRobot.robot.fillPlane.fillLevel + self.deltaFillLevel) / self.feedingRobot.robot.fillPlane.capacity)
  end
end
