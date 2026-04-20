-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotStateLoading = {}
local FeedingRobotStateLoading_mt = Class(FeedingRobotStateLoading, FeedingRobotState)
function FeedingRobotStateLoading.new(feedingRobot, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.feedingRobot = feedingRobot
  return v2
end
function FeedingRobotStateLoading:isDone()
  return self.feedingRobot.isLoadingFinished
end
function FeedingRobotStateLoading.raiseActive(v0)
  return false
end
