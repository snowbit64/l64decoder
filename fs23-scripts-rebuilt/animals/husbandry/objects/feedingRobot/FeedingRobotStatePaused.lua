-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotStatePaused = {}
local FeedingRobotStatePaused_mt = Class(FeedingRobotStatePaused, FeedingRobotState)
function FeedingRobotStatePaused.new(feedingRobot, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.feedingRobot = feedingRobot
  return v2
end
function FeedingRobotStatePaused:isDone()
  return self.feedingRobot.requestedStart
end
function FeedingRobotStatePaused:deactivate()
  self.feedingRobot.requestedStart = false
end
function FeedingRobotStatePaused.raiseActive(v0)
  return false
end
