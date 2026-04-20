-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskDriveTo = {STATE_PREPARE_DRIVING = 1, STATE_DRIVE_TO_OFFSET_POS = 2, STATE_DRIVE_TO_FINAL_POS = 3, PREPARE_TIMEOUT = 2000}
local AITaskDriveTo_mt = Class(AITaskDriveTo, AITask)
function AITaskDriveTo.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.x = nil
  v3.z = nil
  v3.dirX = nil
  v3.dirZ = nil
  v3.vehicle = nil
  v3.state = AITaskDriveTo.STATE_DRIVE_TO_OFFSET_POS
  v3.maxSpeed = 10
  v3.offset = 0
  v3.prepareTimeout = 0
  return v3
end
function AITaskDriveTo:reset()
  self.vehicle = nil
  self.x = nil
  self.z = nil
  self.dirX = nil
  self.dirZ = nil
  self.state = AITaskDriveTo.STATE_DRIVE_TO_OFFSET_POS
  self.maxSpeed = 10
  self.offset = 0
  local v2 = v2:superClass()
  v2.reset(self)
end
function AITaskDriveTo:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AITaskDriveTo:setTargetOffset(offset)
  self.offset = offset
end
function AITaskDriveTo:setTargetPosition(x, z)
  self.x = x
  self.z = z
  -- if not v0.isActive then goto L7 end
end
function AITaskDriveTo:setTargetDirection(dirX, dirZ)
  self.dirX = dirX
  self.dirZ = dirZ
  -- if not v0.isActive then goto L7 end
end
function AITaskDriveTo:update(dt)
  if self.isServer and self.state == AITaskDriveTo.STATE_PREPARE_DRIVING then
    local v2, v3 = v2:getIsAIReadyToDrive()
    if v2 then
      self:startDriving()
      return
    end
    local v4 = v4:getIsAIPreparingToDrive()
    if not v4 then
      self.prepareTimeout = self.prepareTimeout + dt
      if AITaskDriveTo.PREPARE_TIMEOUT < self.prepareTimeout then
        if not v3 then
        end
        local v6 = v6(v7)
        v4:stopCurrentAIJob(...)
      end
    end
  end
end
function AITaskDriveTo:start()
  if self.isServer then
    self.state = AITaskDriveTo.STATE_PREPARE_DRIVING
    v1:prepareForAIDriving()
    self.isActive = true
  end
  local v2 = v2:superClass()
  v2.start(self)
end
function AITaskDriveTo:stop(wasJobStopped)
  local v3 = v3:superClass()
  v3.stop(self, wasJobStopped)
  if self.isServer then
    v2:unsetAITarget()
    self.isActive = false
  end
end
function AITaskDriveTo:startDriving()
  local y = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.x, 0, self.z)
  self.state = AITaskDriveTo.STATE_DRIVE_TO_FINAL_POS
  if self.offset ~= 0 then
    self.state = AITaskDriveTo.STATE_DRIVE_TO_OFFSET_POS
  end
  v4:setAITarget(self, v2, y, v3, self.dirX, 0, self.dirZ)
end
function AITaskDriveTo:onTargetReached()
  if self.state == AITaskDriveTo.STATE_DRIVE_TO_OFFSET_POS then
    local y = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.x, 0, self.z)
    v2:setAITarget(self, self.x, y, self.z, self.dirX, 0, self.dirZ, self.maxSpeed, true)
    self.state = AITaskDriveTo.STATE_DRIVE_TO_FINAL_POS
    return
  end
  self.isFinished = true
end
function AITaskDriveTo.onError(v0, v1)
end
