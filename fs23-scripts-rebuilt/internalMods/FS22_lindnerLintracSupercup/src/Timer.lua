-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Timer = {}
local Timer_mt = Class(Timer)
function Timer.new(v0, v1, v2, v3)
  local v4 = setmetatable({}, u0)
  v4.delay = v1
  v4.initialDelay = v1
  v4.elapsedDelay = v1
  v4.running = false
  v4.repeats = false
  v4.isStopWatch = false
  v4.actionListeners = {}
  SuperCupUtil.addToListIfNotExists(v2, v4.actionListeners)
  if not v3 then
  end
  v4.hostObject = v5
  if v4.hostObject.addUpdateable == nil then
  end
  assert(true, "Host object does not have the addUpdateable function!")
  if v4.hostObject.removeUpdateable == nil then
  end
  assert(true, "Host object does not have the removeUpdateable function!")
  return v4
end
function Timer.schedule(delay, actionListener)
  local v2 = v2:new(delay, actionListener)
  v2:start()
  return v2
end
function Timer:delete()
  self:clear()
end
function Timer:clear()
  self.running = false
  self.elapsedDelay = 0
  v1:removeUpdateable(self)
end
function Timer:getDelay()
  return self.delay
end
function Timer:setDelay(delay)
  self.delay = delay
end
function Timer:isRepeats()
  return self.repeats
end
function Timer:setIsRepeats(isRepeats)
  self.repeats = isRepeats
end
function Timer:setIsStopWatch(isStopWatch)
  self.isStopWatch = isStopWatch
  self:setDelay(0)
end
function Timer:start()
  v1:addUpdateable(self)
  self.running = true
  self.elapsedDelay = self.delay
end
function Timer:stop()
  v1:removeUpdateable(self)
  self.running = false
end
function Timer:restart()
  self:stop()
  self:start()
end
function Timer:fire()
  self:clear()
  for v4, v5 in ipairs(self.actionListeners) do
    v5()
  end
end
function Timer:isRunning()
  return self.running
end
function Timer:getElapsedTime()
  return self.elapsedDelay
end
function Timer:update(dt)
  if self.running then
    if self.isStopWatch then
      self.elapsedDelay = self.elapsedDelay + dt
      return
    end
    self.elapsedDelay = self.elapsedDelay - dt
    if self.elapsedDelay <= 0 then
      self:fire()
      if self.repeats then
        self:restart()
      end
    end
  end
end
function Timer:addActionListener(actionListener)
  SuperCupUtil.addToListIfNotExists(actionListener, self.actionListeners)
end
function Timer:removeActionListener(actionListener)
  table.removeElement(self.actionListeners, actionListener)
end
function Timer:getActionListeners()
  return self.actionListeners
end
