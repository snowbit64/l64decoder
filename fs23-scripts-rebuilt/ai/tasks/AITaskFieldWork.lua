-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITaskFieldWork = {}
local AITaskFieldWork_mt = Class(AITaskFieldWork, AITask)
function AITaskFieldWork.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.vehicle = nil
  return v3
end
function AITaskFieldWork:reset()
  self.vehicle = nil
  local v2 = v2:superClass()
  v2.reset(self)
end
function AITaskFieldWork.update(v0, v1)
end
function AITaskFieldWork:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AITaskFieldWork:start()
  if self.isServer then
    v1:startFieldWorker()
  end
  local v2 = v2:superClass()
  v2.start(self)
end
function AITaskFieldWork:stop(wasJobStopped)
  local v3 = v3:superClass()
  v3.stop(self, wasJobStopped)
  if self.isServer then
    v2:stopFieldWorker()
  end
end
