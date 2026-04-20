-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Timer = {}
local Timer_mt = Class(Timer)
function Timer.new(duration)
  local v1 = setmetatable({}, u0)
  v1.duration = duration
  v1.callback = nil
  v1.isRunning = false
  v1.timeLeft = duration
  v1:reset()
  return v1
end
function Timer:delete()
  self:reset()
end
function Timer:reset()
  v1:removeUpdateable(self)
  self.isRunning = false
end
function Timer:start(noReset)
  if self.duration == nil then
    Logging.error("Timer duration not set")
    printCallstack()
    return
  end
  self.isRunning = true
  if noReset ~= nil then
    -- if v1 then goto L22 end
  end
  self.timeLeft = self.duration
  v2:addUpdateable(self)
end
function Timer:startIfNotRunning()
  if not self.isRunning then
    self:start()
  end
end
function Timer:stop()
  v1:removeUpdateable(self)
  self.isRunning = false
end
function Timer:finish()
  v1:removeUpdateable(self)
  self.timeLeft = 0
  self.isRunning = false
  if self.callback ~= nil then
    self.callback(self)
  end
end
function Timer:getIsRunning()
  return self.isRunning
end
function Timer:setFinishCallback(callback)
  self.callback = callback
  return self
end
function Timer:getTimePassed()
  return self.duration - self.timeLeft
end
function Timer:getTimeLeft()
  return self.timeLeft
end
function Timer:setTimeLeft(timeLeftMs)
  self.timeLeft = timeLeftMs
end
function Timer:update(dt)
  if self.isRunning then
    self.timeLeft = self.timeLeft - dt
    if self.timeLeft <= 0 then
      self:finish()
    end
  end
end
function Timer.createOneshot(duration, callback)
  local timer = Timer.new(duration)
  timer:setFinishCallback(function()
    duration:delete()
    return u1()
  end)
  timer:start()
  return timer
end
function Timer:getDuration()
  return self.duration
end
function Timer:setDuration(duration)
  self.duration = duration
  return self
end
function Timer:writeUpdateStream(streamId)
  streamWriteInt32(streamId, self.timeLeft)
end
function Timer:readUpdateStream(streamId)
  local v2 = streamReadInt32(streamId)
  self.timeLeft = v2
end
