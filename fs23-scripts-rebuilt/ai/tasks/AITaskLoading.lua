-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskLoading = {STATE_DRIVING = 0, STATE_LOADING = 1}
local AITaskLoading_mt = Class(AITaskLoading, AITask)
function AITaskLoading.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.vehicle = nil
  v3.loadTrigger = nil
  v3.fillType = nil
  v3.loadVehicle = nil
  v3.fillUnitIndex = nil
  v3.offsetZ = 0
  v3.maxSpeed = 5
  return v3
end
function AITaskLoading:reset()
  self.vehicle = nil
  self.loadTrigger = nil
  self.loadVehicle = nil
  self.fillType = nil
  local v2 = v2:superClass()
  v2.reset(self)
end
function AITaskLoading:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AITaskLoading:setLoadTrigger(loadTrigger)
  self.loadTrigger = loadTrigger
end
function AITaskLoading:setFillType(fillType)
  self.fillType = fillType
end
function AITaskLoading:setFillUnit(vehicle, fillUnitIndex, offsetZ)
  self.offsetZ = offsetZ
  self.loadVehicle = vehicle
  self.fillUnitIndex = fillUnitIndex
end
function AITaskLoading:start()
  if self.isServer then
    local v1, v2, v3, v4 = v1:getAITargetPositionAndDirection()
    local v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1 + v3 * -self.offsetZ, 0, v2 + v4 * -self.offsetZ)
    v6:setAITarget(self, v1 + v3 * -self.offsetZ, v5, v2 + v4 * -self.offsetZ, v3, 0, v4, self.maxSpeed, true)
    self.state = AITaskLoading.STATE_DRIVING
  end
  v2 = v2:superClass()
  v2.start(self)
end
function AITaskLoading:stop(wasJobStopped)
  if wasJobStopped and not self.isFinished and self.state == AITaskLoading.STATE_LOADING then
    v2:aiCancelLoadingFromTrigger(self.loadTrigger, self.fillUnitIndex, self.fillType, self)
  end
  local v3 = v3:superClass()
  v3.start(self, wasJobStopped)
end
function AITaskLoading:finishedLoading()
  if self.loadVehicle ~= nil then
    v1:aiFinishLoading(self.fillUnitIndex, self)
  end
  self.isFinished = true
end
function AITaskLoading:onTargetReached()
  v1:unsetAITarget()
  self.state = AITaskLoading.STATE_LOADING
  v1:aiPrepareLoading(self.fillUnitIndex, self)
  v1:aiStartLoadingFromTrigger(self.loadTrigger, self.fillUnitIndex, self.fillType, self)
end
function AITaskLoading.onError(v0, v1)
end
