-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FeedingRobotState = {}
local FeedingRobotState_mt = Class(FeedingRobotState)
function FeedingRobotState:registerXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. ".animatedObject(?)#index", "Animated object index")
  self:register(XMLValueType.INT, v1 .. ".animatedObject(?)#direction", "Animated object direction")
  self:register(XMLValueType.INT, v1 .. ".animatedObject(?)#time", "Animated object time")
  self:register(XMLValueType.BOOL, v1 .. ".animatedObject(?)#reset", "Animated object reset on state deactivate")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function FeedingRobotState.new(feedingRobot, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.feedingRobot = feedingRobot
  v2.animatedObjects = {}
  return v2
end
function FeedingRobotState:load(xmlFile, key)
  xmlFile:iterate(key .. ".animatedObject", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#index")
    if key ~= nil and u1.feedingRobot.animatedObjects[key] ~= nil then
      local v4 = v4:getValue(xmlFile .. "#direction", 1)
      v4 = v4:getValue(xmlFile .. "#time", 1)
      v4 = v4:getValue(xmlFile .. "#reset", false)
      table.insert(u1.animatedObjects, {object = u1.feedingRobot.animatedObjects[key], direction = v4, time = v4, reset = v4})
    end
  end)
  self.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key, self.objectChanges, self.feedingRobot.components, self.feedingRobot)
end
function FeedingRobotState:isDone()
  for v5, v6 in ipairs(self.animatedObjects) do
    if v6.object.animation.direction ~= 0 and v6.object.animation.direction ~= v6.direction then
      return false
    end
    local v8 = math.abs(v7.time - v6.time)
    if not (0.001 < v8) then
      continue
    end
    return false
  end
  return v1
end
function FeedingRobotState.update(v0, v1)
end
function FeedingRobotState:activate()
  if self.feedingRobot.isServer then
    for v4, v5 in ipairs(self.animatedObjects) do
      if v5.reset then
        v6:setAnimTime(0)
      end
      v6:setDirection(v5.direction)
    end
  end
  ObjectChangeUtil.setObjectChanges(self.objectChanges, true)
end
function FeedingRobotState.deactivate(v0)
end
function FeedingRobotState.raiseActive(v0)
  return true
end
