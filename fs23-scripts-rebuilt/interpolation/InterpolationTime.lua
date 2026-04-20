-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InterpolationTime = {}
local InterpolationTime_mt = Class(InterpolationTime)
function InterpolationTime.new(maxInterpolationAlpha, customMt)
  if customMt == nil then
  end
  setmetatable(v2, v3)
  v2.maxInterpolationAlpha = maxInterpolationAlpha
  v2.interpolationAlpha = maxInterpolationAlpha
  v2.interpolationDuration = 80
  v2.isDirty = false
  v2.lastPhysicsNetworkTime = nil
  return v2
end
function InterpolationTime:startNewPhase(interpolationDuration)
  self.interpolationDuration = interpolationDuration
  self.interpolationAlpha = 0
  self.isDirty = true
end
function InterpolationTime:startNewPhaseNetwork()
  if self.lastPhysicsNetworkTime ~= nil then
    local v2 = math.min(g_packetPhysicsNetworkTime - self.lastPhysicsNetworkTime, 3 * g_client.tickDuration)
  end
  self.lastPhysicsNetworkTime = g_packetPhysicsNetworkTime
  if self.interpolationAlpha < 1 then
    local v3 = math.min((1 - self.interpolationAlpha) * self.interpolationDuration * 0.95 + g_clientInterpDelay * 0.05, 3 * g_clientInterpDelay)
  end
  self.interpolationDuration = v2 + v1
  self.interpolationAlpha = 0
  self.isDirty = true
end
function InterpolationTime:reset()
  self.interpolationAlpha = self.maxInterpolationAlpha
  self.isDirty = false
end
function InterpolationTime:update(dt)
  if self.maxInterpolationAlpha <= self.interpolationAlpha + dt / self.interpolationDuration then
    self.isDirty = false
  end
  self.interpolationAlpha = v2
end
function InterpolationTime:getAlpha()
  return self.interpolationAlpha
end
function InterpolationTime:isInterpolating()
  if self.interpolationAlpha >= self.maxInterpolationAlpha then
  end
  return true
end
