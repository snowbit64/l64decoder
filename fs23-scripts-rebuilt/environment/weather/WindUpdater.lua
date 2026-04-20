-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WindUpdater = {MAX_SPEED = 28}
local WindUpdater_mt = Class(WindUpdater)
function WindUpdater.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.listeners = {}
  v1.isDirty = false
  v1.alpha = 1
  v1.duration = 1
  v1.currentDirX = 1
  v1.currentDirZ = 0
  v1.currentVelocity = 1
  v1.currentCirrusSpeedFactor = 1
  v1.lastDirX = 1
  v1.lastDirZ = 0
  v1.lastVelocity = 1
  v1.lastCirrusSpeedFactor = 1
  v1.targetDirX = 1
  v1.targetDirZ = 0
  v1.targetVelocity = 1
  v1.targetCirrusSpeedFactor = 1
  v1.randomWindWaving = true
  return v1
end
function WindUpdater.delete(v0)
end
function WindUpdater:update(dt)
  if self.alpha ~= 1 then
    local v2 = math.min(self.alpha + dt / self.duration, 1)
    self.alpha = v2
    v2 = MathUtil.lerp(self.lastDirX, self.targetDirX, self.alpha)
    self.currentDirX = v2
    v2 = MathUtil.lerp(self.lastDirZ, self.targetDirZ, self.alpha)
    self.currentDirZ = v2
    v2 = MathUtil.lerp(self.lastVelocity, self.targetVelocity, self.alpha)
    self.currentVelocity = v2
    v2 = MathUtil.lerp(self.lastCirrusSpeedFactor, self.targetCirrusSpeedFactor, self.alpha)
    self.currentCirrusSpeedFactor = v2
    self.isDirty = true
  end
  if self.isDirty then
    if not self.randomWindWaving then
      local inputSpeed = MathUtil.clamp(self.currentVelocity / WindUpdater.MAX_SPEED, 0, 1)
      setSharedShaderParameter(...)
    end
    setSharedShaderParameter(Shader.PARAM_SHARED_WIND_DIR_X, self.currentDirX)
    setSharedShaderParameter(Shader.PARAM_SHARED_WIND_DIR_Z, self.currentDirZ)
    for v5, v6 in ipairs(self.listeners) do
      v6:setWindValues(self.currentDirX, self.currentDirZ, self.currentVelocity, self.currentCirrusSpeedFactor)
    end
    self.isDirty = false
  end
  if self.randomWindWaving then
    local v7 = math.sin(g_time / 60000)
    local v8 = math.sin(2.2 * g_time / 60000 + 5.52)
    v7 = math.sin(2.9 * g_time / 60000 + 0.93)
    v5 = MathUtil.clamp(self.currentVelocity / WindUpdater.MAX_SPEED, 0, 1)
    v7 = MathUtil.clamp(v5 * 0.05 * (v7 + v8 + v7) / 4 + v5, 0, 1)
    setSharedShaderParameter(Shader.PARAM_SHARED_WIND_SPEED, v7)
  end
end
function WindUpdater:getCurrentValues()
  return self.currentDirX, self.currentDirZ, self.currentVelocity, self.currentCirrusSpeedFactor
end
function WindUpdater:setTargetValues(windDirX, windDirZ, windVelocity, cirrusCloudSpeedFactor, duration)
  self.alpha = 0
  local v6 = math.max(1, duration)
  self.duration = v6
  self.lastDirX = self.currentDirX
  self.lastDirZ = self.currentDirZ
  self.lastVelocity = self.currentVelocity
  self.lastCirrusSpeedFactor = self.currentCirrusSpeedFactor
  self.targetDirX = windDirX
  self.targetDirZ = windDirZ
  self.targetVelocity = windVelocity
  self.targetCirrusSpeedFactor = cirrusCloudSpeedFactor
end
function WindUpdater:addWindChangedListener(listener)
  table.addElement(self.listeners, listener)
end
function WindUpdater:removeWindChangedListener(listener)
  table.removeElement(self.listeners, listener)
end
