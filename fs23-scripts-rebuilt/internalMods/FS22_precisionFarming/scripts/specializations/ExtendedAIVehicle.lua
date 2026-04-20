-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedAIVehicle = {MOD_NAME = g_currentModName}
function ExtendedAIVehicle.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AIFieldWorker, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ExtendedAIVehicle.registerFunctions(v0)
end
function ExtendedAIVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateAIFieldWorkerLowFrequency", ExtendedAIVehicle.updateAIFieldWorkerLowFrequency)
end
function ExtendedAIVehicle.registerEventListeners(vehicleType)
end
function ExtendedAIVehicle:updateAIFieldWorkerLowFrequency(superFunc, dt)
  local v3 = self:getIsAIActive()
  if v3 then
    local v6 = AIJobFieldWork.getPricePerMs(nil)
    local v5, v6, v7 = self:getPFStatisticInfo()
    if v5 ~= nil and v7 ~= nil then
      v5:updateStatistic(v7, "helperCosts", -(-dt * g_currentMission.missionInfo.buyPriceMultiplier * v6))
    end
  end
  superFunc(self, dt)
end
