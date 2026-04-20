-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotStateDriving = {}
local FeedingRobotStateDriving_mt = Class(FeedingRobotStateDriving, FeedingRobotState)
function FeedingRobotStateDriving.new(feedingRobot, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.startFillScale = 0
  return v2
end
function FeedingRobotStateDriving:isDone()
  if self.feedingRobot.spline.time ~= 1 then
  end
  return true
end
function FeedingRobotStateDriving:update(dt)
  if self.feedingRobot.isServer then
    if self.feedingRobot.robot.isBlocked then
    end
    local v4 = MathUtil.clamp(v2.speed + v3 * g_physicsDt / 1000, 0, v2.maxSpeed)
    v2.speed = v4
    if 0 < v2.speed then
      v4:addSplineDelta(dt * v2.speed)
    end
  end
  local v2 = v2:getFeedingFactor()
  v4:setFillScale(self.startFillScale - self.startFillScale * v2)
end
function FeedingRobotStateDriving:activate()
  v1:startAnimations(self.feedingRobot.robot.mixerAnimationNodes)
  v1:resetRobot()
  self.startFillScale = self.feedingRobot.robot.fillPlane.fillLevel / self.feedingRobot.robot.fillPlane.capacity
end
function FeedingRobotStateDriving:deactivate()
  v1:stopAnimations(self.feedingRobot.robot.mixerAnimationNodes)
  v1:resetRobot()
  v1:setFillScale(0)
  self.startFillScale = 0
end
