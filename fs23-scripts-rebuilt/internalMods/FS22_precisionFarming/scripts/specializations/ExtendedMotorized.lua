-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedMotorized = {MOD_NAME = g_currentModName}
function ExtendedMotorized.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Motorized, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ExtendedMotorized.registerFunctions(v0)
end
function ExtendedMotorized.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateConsumers", ExtendedMotorized.updateConsumers)
end
function ExtendedMotorized.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ExtendedMotorized)
end
function ExtendedMotorized:onLoad(savegame)
  self.spec_extendedMotorized = self["spec_" .. ExtendedMotorized.MOD_NAME .. ".extendedMotorized"]
  if g_precisionFarming ~= nil then
    self.spec_extendedMotorized.farmlandStatistics = g_precisionFarming.farmlandStatistics
  end
end
function ExtendedMotorized:updateConsumers(superFunc, dt, accInput)
  superFunc(self, dt, accInput)
  local v4, v5, v6 = self:getPFStatisticInfo()
  if v4 ~= nil and v6 ~= nil and v5 then
    for v11, v12 in pairs(self.spec_motorized.consumers) do
      if not v12.permanentConsumption then
        continue
      end
      if not (0 < v12.usage) then
        continue
      end
      local v13 = self:getFillUnitByIndex(v12.fillUnitIndex)
      if not (v13 ~= nil) then
        continue
      end
      if not (v13.lastValidFillType == FillType.DIESEL) then
        continue
      end
      v4:updateStatistic(v6, "usedFuel", v7.lastFuelUsage / 60 / 60 / 1000 * dt)
    end
  end
end
