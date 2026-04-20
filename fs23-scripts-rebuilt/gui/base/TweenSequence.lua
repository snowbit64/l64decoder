-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TweenSequence = {}
local TweenSequence_mt = Class(TweenSequence, Tween)
function TweenSequence.new(functionTarget)
  local v1 = Tween.new(nil, nil, nil, nil, u0)
  v1.functionTarget = functionTarget
  v1.callbackStates = {}
  v1.callbacksCalled = {}
  v1.tweenUpdateRanges = {}
  v1.callbackInstants = {}
  v1.isLooping = false
  v1.totalDuration = 0
  v1.isFinished = true
  return v1
end
function TweenSequence:insertTween(tween, instant)
  local v7 = tween:getDuration()
  self.tweenUpdateRanges[tween] = {instant, instant + v7}
  local v5 = tween:getDuration()
  local v3 = math.max(instant + v5, self.totalDuration)
  self.totalDuration = v3
  if self.functionTarget ~= nil then
    tween:setTarget(self.functionTarget)
  end
end
function TweenSequence:addTween(tween)
  self:insertTween(tween, self.totalDuration)
end
function TweenSequence:insertInterval(interval, instant)
  for v6, v7 in pairs(self.tweenUpdateRanges) do
    if not (instant <= v7[1]) then
      continue
    end
    self.tweenUpdateRanges[v6][1] = v7[1] + interval
    self.tweenUpdateRanges[v6][2] = v7[2] + interval
  end
  for v6, v7 in pairs(self.callbackInstants) do
    if not (instant <= v7) then
      continue
    end
    self.callbackInstants[v6] = v7 + interval
  end
  self.totalDuration = self.totalDuration + interval
end
function TweenSequence:addInterval(interval)
  self:insertInterval(interval, self.totalDuration)
end
function TweenSequence:insertCallback(callback, callbackState, instant)
  self.callbackInstants[callback] = instant
  self.callbackStates[callback] = callbackState
  self.callbacksCalled[callback] = false
end
function TweenSequence:addCallback(callback, callbackState)
  self:insertCallback(callback, callbackState, self.totalDuration)
end
function TweenSequence:getDuration()
  return self.totalDuration
end
function TweenSequence:setTarget(target)
  self.functionTarget = target
end
function TweenSequence:setLooping(isLooping)
  self.isLooping = isLooping
end
function TweenSequence:start()
  self.isFinished = false
end
function TweenSequence:stop()
  self.isFinished = true
end
function TweenSequence:reset()
  self.elapsedTime = 0
  self.isFinished = true
  for v4 in pairs(self.tweenUpdateRanges) do
    v4:reset()
  end
  for v4 in pairs(self.callbacksCalled) do
    self.callbacksCalled[v4] = false
  end
end
function TweenSequence:update(dt)
  if not self.isFinished then
    self.elapsedTime = self.elapsedTime + dt
    local v3 = self:updateTweens(self.elapsedTime, dt)
    self:updateCallbacks()
    if self.totalDuration <= self.elapsedTime and v3 then
      if self.isLooping then
        self:reset()
        self:start()
        return
      end
      self.isFinished = true
    end
  end
end
function TweenSequence:updateTweens(lastInstant, dt)
  for v7, v8 in pairs(self.tweenUpdateRanges) do
    local v10 = v7:getFinished()
    if not not v10 then
      continue
    end
    if not (v8[1] <= self.elapsedTime) then
      continue
    end
    v10 = math.min(self.elapsedTime - v8[1], dt)
    v7:update(v10)
    if v3 then
      local v11 = v7:getFinished()
    end
  end
  return v3
end
function TweenSequence:updateCallbacks()
  for v4, v5 in pairs(self.callbackInstants) do
    if not not self.callbacksCalled[v4] then
      continue
    end
    if not (v5 <= self.elapsedTime) then
      continue
    end
    if self.functionTarget ~= nil then
      v4(self.functionTarget, self.callbackStates[v4])
    else
      v4(self.callbackStates[v4])
    end
    self.callbacksCalled[v4] = true
  end
end
local v2 = TweenSequence.new()
TweenSequence.NO_SEQUENCE = v2
function TweenSequence.NO_SEQUENCE.addTween()
end
function TweenSequence.NO_SEQUENCE.addInterval()
end
function TweenSequence.NO_SEQUENCE.addCallback()
end
function TweenSequence.NO_SEQUENCE.insertTween()
end
function TweenSequence.NO_SEQUENCE.insertInterval()
end
function TweenSequence.NO_SEQUENCE.insertCallback()
end
function TweenSequence.NO_SEQUENCE.getFinished()
  return true
end
