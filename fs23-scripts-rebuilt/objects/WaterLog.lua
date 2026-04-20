-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WaterLog = {STATE_EMERGING = 0, STATE_PAUSING = 1, STATE_MOVING = 2}
local WaterLog_mt = Class(WaterLog)
function WaterLog.onCreate(v0, v1)
  local v4 = WaterLog.new(v1)
  v2:addUpdateable(...)
end
function WaterLog.new(id)
  setmetatable({}, u0)
  local v2 = getChildAt(id, 0)
  v2 = getChildAt(id, 1)
  local v3 = getUserAttribute(id, "speed")
  v2 = Utils.getNoNil(v3, 0.001)
  v3 = getUserAttribute(id, "emergeTime")
  v2 = Utils.getNoNil(v3, 15000)
  v3 = getUserAttribute(id, "pauseTime")
  v2 = Utils.getNoNil(v3, 15000)
  return {splineId = v2, waterLogId = v2, splinePos = 0, speed = v2, emergeTime = v2, emergeTimer = {splineId = v2, waterLogId = v2, splinePos = 0, speed = v2, emergeTime = v2}.emergeTime, pauseTime = v2, pauseTimer = {splineId = v2, waterLogId = v2, splinePos = 0, speed = v2, emergeTime = v2, emergeTimer = {splineId = v2, waterLogId = v2, splinePos = 0, speed = v2, emergeTime = v2}.emergeTime, pauseTime = v2}.pauseTime, state = WaterLog.STATE_EMERGING}
end
function WaterLog.delete(v0)
end
function WaterLog:update(dt)
  if self.state == WaterLog.STATE_EMERGING then
    self.emergeTimer = self.emergeTimer - dt
    if self.emergeTimer < 0 then
      self.emergeTimer = 0
      self.state = WaterLog.STATE_PAUSING
    end
    local v2, v3, v4 = getSplinePosition(self.splineId, 0)
    local v5, v6, v7 = getSplineOrientation(self.splineId, 0, 0, -1, 0)
    setTranslation(self.waterLogId, v2, v3 - 3.5 * self.emergeTimer / self.emergeTime, v4)
    setRotation(self.waterLogId, v5, v6, v7)
    return
  end
  if self.state == WaterLog.STATE_PAUSING then
    self.pauseTimer = self.pauseTimer - dt
    -- if v0.pauseTimer >= 0 then goto L166 end
    self.splinePos = 0
    self.state = WaterLog.STATE_MOVING
    return
  end
  if self.state == WaterLog.STATE_MOVING then
    self.splinePos = self.splinePos + dt * self.speed * 0.01
    if 1 < self.splinePos then
      self.splinePos = 1
      self.emergeTimer = self.emergeTime
      self.pauseTimer = self.pauseTime
      self.state = WaterLog.STATE_EMERGING
    end
    v2, v3, v4 = getSplinePosition(self.splineId, self.splinePos)
    v5, v6, v7 = getSplineOrientation(self.splineId, self.splinePos, 0, -1, 0)
    setTranslation(self.waterLogId, v2, v3, v4)
    setRotation(self.waterLogId, v5, v6, v7)
  end
end
