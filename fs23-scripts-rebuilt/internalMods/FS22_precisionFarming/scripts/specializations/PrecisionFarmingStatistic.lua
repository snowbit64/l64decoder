-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PrecisionFarmingStatistic = {MOD_NAME = g_currentModName}
function PrecisionFarmingStatistic.prerequisitesPresent(v0)
  return true
end
function PrecisionFarmingStatistic.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getPFStatisticInfo", PrecisionFarmingStatistic.getPFStatisticInfo)
  SpecializationUtil.registerFunction(vehicleType, "getPFYieldMap", PrecisionFarmingStatistic.getPFYieldMap)
end
function PrecisionFarmingStatistic.registerOverwrittenFunctions(vehicleType)
end
function PrecisionFarmingStatistic.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", PrecisionFarmingStatistic)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", PrecisionFarmingStatistic)
end
function PrecisionFarmingStatistic:onLoad(savegame)
  self.spec_precisionFarmingStatistic = self["spec_" .. PrecisionFarmingStatistic.MOD_NAME .. ".precisionFarmingStatistic"]
  if g_precisionFarming ~= nil then
    self.spec_precisionFarmingStatistic.soilMap = g_precisionFarming.soilMap
    self.spec_precisionFarmingStatistic.phMap = g_precisionFarming.phMap
    self.spec_precisionFarmingStatistic.yieldMap = g_precisionFarming.yieldMap
    self.spec_precisionFarmingStatistic.farmlandStatistics = g_precisionFarming.farmlandStatistics
  end
  v3.isOnField = false
  v3.isOnFieldSmoothed = false
  v3.isOnFieldLastPos = {0, 0}
  v3.farmlandId = 0
  v3.mission = nil
  v3.lastUpdateDistance = 0
  v3.updateDistance = 0.5
end
function PrecisionFarmingStatistic:onUpdateTick(dt, isActive, isActiveForInput, isSelected)
  self.spec_precisionFarmingStatistic.lastUpdateDistance = self.spec_precisionFarmingStatistic.lastUpdateDistance + self.lastMovedDistance
  if self.spec_precisionFarmingStatistic.updateDistance >= self.spec_precisionFarmingStatistic.lastUpdateDistance then
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000005 -> L85
  end
  v5.lastUpdateDistance = 0
  local v6, v7, v8 = getWorldTranslation(self.rootNode)
  local v9 = v9:getFarmlandIdAtWorldPosition(v6, v8)
  v5.farmlandId = v9
  v9 = v9:getMissionAtWorldPosition(v6, v8)
  v5.mission = v9
  v9 = self:getIsOnField()
  if v9 ~= v5.isOnField then
    if v9 then
      v5.isOnFieldSmoothed = true
    else
      v5.isOnFieldLastPos[1] = v6
      v5.isOnFieldLastPos[2] = v8
    end
  end
  if v5.isOnFieldSmoothed ~= v9 then
    local v10 = MathUtil.vector2Length(v6 - v5.isOnFieldLastPos[1], v8 - v5.isOnFieldLastPos[2])
    if 20 < v10 then
      v5.isOnFieldSmoothed = v9
    end
  end
  v5.isOnField = v9
end
function PrecisionFarmingStatistic:getPFStatisticInfo()
  return self.spec_precisionFarmingStatistic.farmlandStatistics, self.spec_precisionFarmingStatistic.isOnField, self.spec_precisionFarmingStatistic.farmlandId, self.spec_precisionFarmingStatistic.isOnFieldSmoothed, self.spec_precisionFarmingStatistic.mission
end
function PrecisionFarmingStatistic:getPFYieldMap()
  return self.spec_precisionFarmingStatistic.yieldMap
end
