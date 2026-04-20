-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotStateEvent = {}
local FeedingRobotStateEvent_mt = Class(FeedingRobotStateEvent, Event)
InitStaticEventClass(FeedingRobotStateEvent, "FeedingRobotStateEvent", EventIds.EVENT_FEEDING_ROBOT_STATE)
function FeedingRobotStateEvent.emptyNew()
  return Event.new(u0)
end
function FeedingRobotStateEvent.new(feedingRobot, state)
  local v2 = FeedingRobotStateEvent.emptyNew()
  v2.feedingRobot = feedingRobot
  v2.state = state
  return v2
end
function FeedingRobotStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.feedingRobot = v3
  v3 = streamReadUInt8(streamId)
  self.state = v3
  self:run(connection)
end
function FeedingRobotStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.feedingRobot)
  streamWriteUInt8(streamId, self.state)
end
function FeedingRobotStateEvent:run(connection)
  if self.feedingRobot ~= nil then
    v2:setState(self.state)
  end
end
