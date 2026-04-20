-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskDischarge = {STATE_DRIVING = 0, STATE_DISCHARGE = 1}
local AITaskDischarge_mt = Class(AITaskDischarge, AITask)
function AITaskDischarge.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.vehicle = nil
  v3.unloadTrigger = nil
  v3.dischargeVehicle = nil
  v3.dischargeNode = nil
  v3.offsetZ = 0
  v3.maxSpeed = 5
  v3.state = AITaskDischarge.STATE_DRIVING
  return v3
end
function AITaskDischarge:reset()
  self.vehicle = nil
  self.unloadTrigger = nil
  self.dischargeVehicle = nil
  self.dischargeNode = nil
  self.offsetZ = 0
  self.state = AITaskDischarge.STATE_DRIVING
  local v2 = v2:superClass()
  v2.reset(self)
end
function AITaskDischarge:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AITaskDischarge:setUnloadTrigger(unloadTrigger)
  self.unloadTrigger = unloadTrigger
end
function AITaskDischarge:setDischargeNode(vehicle, dischargeNode, offsetZ)
  if vehicle ~= nil then
    self.offsetZ = offsetZ
    vehicle:setCurrentDischargeNodeIndex(dischargeNode.index)
  end
  self.dischargeNode = dischargeNode
  self.dischargeVehicle = vehicle
end
function AITaskDischarge:start()
  if self.isServer then
    local v1, v2, v3, v4 = v1:getAITargetPositionAndDirection()
    local v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1 + v3 * -self.offsetZ, 0, v2 + v4 * -self.offsetZ)
    v6:setAITarget(self, v1 + v3 * -self.offsetZ, v5, v2 + v4 * -self.offsetZ, v3, 0, v4, self.maxSpeed, true)
    self.state = AITaskDischarge.STATE_DRIVING
  end
  v2 = v2:superClass()
  v2.start(self)
end
function AITaskDischarge:onTargetReached()
  v1:unsetAITarget()
  local v1 = v1:getAICanStartDischarge(self.dischargeNode)
  if v1 then
    self.state = AITaskDischarge.STATE_DISCHARGE
    v1:startAIDischarge(self.dischargeNode, self)
    return
  end
  local v4 = AIMessageErrorUnloadingStationFull.new()
  v1:stopJob(...)
end
function AITaskDischarge.onError(v0, v1)
end
function AITaskDischarge:finishedDischarge()
  self.isFinished = true
end
