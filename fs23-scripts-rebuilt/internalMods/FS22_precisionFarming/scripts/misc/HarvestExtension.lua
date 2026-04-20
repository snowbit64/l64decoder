-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HarvestExtension = {YIELD_DEBUG = false, MOD_NAME = g_currentModName}
local HarvestExtension_mt = Class(HarvestExtension)
function HarvestExtension.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.pfModule = pfModule
  v2.debugValues = {nActualValue = 0, nTargetValue = 0, nFactor = 0, regularNFactor = 0, nRegularValue = 0, yieldPotential = 0, ignoreOverfertilization = false, pHActualValue = 0, pHTargetValue = 0, pHRegularValue = 0, pHFactor = 0, regularPHFactor = 0, plowFactor = 0, weedFactor = 0, stubbleFactor = 0, rollerFactor = 0, yieldFactor = 0, yieldFactorRegular = 0, seedRateYieldFactor = 0, lastSeedRateFound = 0, lastSeedRateTarget = 0}
  v3:subscribe(MessageType.UNLOADING_STATIONS_CHANGED, v2.onUnloadingStationsChanged, v2)
  addConsoleCommand("pfShowYieldDebug", "Displayes precision farming yield debug", "toggleYieldDebug", v2)
  return v2
end
function HarvestExtension.delete(v0)
  v1:unsubscribeAll(v0)
  removeConsoleCommand("pfShowYieldDebug")
end
function HarvestExtension.loadFromXML(v0, v1, v2, v3, v4, v5)
  return true
end
function HarvestExtension.toggleYieldDebug(v0)
  HarvestExtension.YIELD_DEBUG = not HarvestExtension.YIELD_DEBUG
end
function HarvestExtension.update(v0, v1)
end
function HarvestExtension:draw()
  if HarvestExtension.YIELD_DEBUG then
    local v11 = self.pfModule.nitrogenMap:getNitrogenValueFromInternalValue(self.debugValues.nActualValue)
    local v12 = self.pfModule.nitrogenMap:getNitrogenValueFromInternalValue(self.debugValues.nTargetValue)
    local v13 = self.pfModule.nitrogenMap:getNitrogenValueFromInternalValue(self.debugValues.nRegularValue)
    local v9 = string.format("Nitrogen: Actual: %d | Target: %d | Regular: %d => Factor: %d%% | Regular Factor: %d%%", v11, v12, v13, self.debugValues.nFactor * 100, self.debugValues.regularNFactor * 100)
    renderText(...)
    v9 = string.format("Nitrogen: Yield Potential: %d%% | ignoreOverfertilization: %s", self.debugValues.yieldPotential * 100, self.debugValues.ignoreOverfertilization)
    renderText(...)
    v12 = self.pfModule.seedRateMap:getRateLabelByIndex(self.debugValues.lastSeedRateTarget)
    v13 = self.pfModule.seedRateMap:getRateLabelByIndex(self.debugValues.lastSeedRateFound)
    v9 = string.format(...)
    renderText(...)
    v11 = self.pfModule.pHMap:getPhValueFromInternalValue(self.debugValues.pHActualValue)
    v12 = self.pfModule.pHMap:getPhValueFromInternalValue(self.debugValues.pHTargetValue)
    v13 = self.pfModule.pHMap:getPhValueFromInternalValue(self.debugValues.pHRegularValue)
    v9 = string.format("pH: Actual: %.3f | Target: %.3f | Regular: %.3f => Factor: %d%% | Regular Factor: %d%%", v11, v12, v13, self.debugValues.pHFactor * 100, self.debugValues.regularPHFactor * 100)
    renderText(...)
    v9 = string.format("Plow Factor: %d%% | Weed Factor: %d%% | Stubble Factor: %d%% | Roller Factor: %d%%", self.debugValues.plowFactor * 100, self.debugValues.weedFactor * 100, self.debugValues.stubbleFactor * 100, self.debugValues.rollerFactor * 100)
    renderText(...)
    v9 = string.format("Yield: %d%% | Regular Yield: %d%%", self.debugValues.yieldFactor * self.debugValues.yieldPotential / 2 * 100, self.debugValues.yieldFactorRegular * self.debugValues.yieldPotential / 2 * 100)
    renderText(...)
    self.pfModule.nitrogenMap:drawYieldDebug(self.debugValues.nActualValue, self.debugValues.nTargetValue)
    self.pfModule.pHMap:drawYieldDebug(self.debugValues.pHActualValue, self.debugValues.pHTargetValue)
  end
end
function HarvestExtension:onUnloadingStationsChanged()
  local v1 = v1:getUnloadingStations()
  self.unloadingStations = v1
end
function HarvestExtension.getYieldFromArea(v0, v1, v2, v3, v4)
  local v5 = v5:getFruitPixelsToSqm()
  if v3 ~= FruitType.UNKNOWN then
    local v7 = v7:getFruitTypeByIndex(v3)
  end
  local v9 = v2:getLastTouchedFarmlandFarmId()
  if v9 ~= AccessHandler.EVERYONE then
    local v10 = v1:getVehicleDamage()
    if 0 < v10 then
    end
  end
  return v8
end
function HarvestExtension:getBestPriceForFillType(fillType)
  if self.unloadingStations == nil then
    local v2 = v2:getUnloadingStations()
    self.unloadingStations = v2
  end
  for v6, v7 in pairs(self.unloadingStations) do
    if not (v7.getEffectiveFillTypePrice ~= nil) then
      continue
    end
    local v8 = v7:getIsFillTypeAllowed(fillType.index)
    if not v8 then
      continue
    end
    if v7.getAppearsOnStats ~= nil then
      v8 = v7:getAppearsOnStats()
      if not v8 then
        continue
      end
    end
    local v10 = v7:getEffectiveFillTypePrice(fillType.index, ToolType.UNDEFINED)
    v8 = math.max(...)
  end
  if v2 == 0 then
  end
  return v2
end
function HarvestExtension:updateLatestFactors(pfModule, vehicle, requiresPHFactorUpdate, requiresNFactorUpdate)
  if requiresNFactorUpdate then
    local v8, v9, v10, v11, v12 = v8:updateLastNitrogenValues()
    if -1 < v8 and -1 < v9 then
      local v13 = v13:getYieldFactorByLevelDifference(v8 - v9, v12)
      vehicle.lastNFactor = v13
      vehicle.lastYieldPotential = v10
      v13 = v13:getYieldFactorByLevelDifference(v11 - v9, v12)
      vehicle.lastRegularNFactor = v13
      vehicle.lastNActualValue = v8
      vehicle.lastNTargetValue = v9
      vehicle.lastIgnoreOverfertilization = v12
      if HarvestExtension.YIELD_DEBUG then
        self.debugValues.nActualValue = v8
        self.debugValues.nTargetValue = v9
        self.debugValues.yieldPotential = v10
        self.debugValues.nRegularValue = v11
        self.debugValues.ignoreOverfertilization = v12
        self.debugValues.nFactor = v13
        self.debugValues.regularNFactor = v13
      end
    end
  end
  if requiresPHFactorUpdate then
    v10, v11, v12 = v10:updateLastPhValues()
    if -1 < v10 and -1 < v11 and -1 < v12 then
      v13 = v13:getYieldFactorByLevelDifference(v10 - v11)
      vehicle.lastPHFactor = v13
      v13 = v13:getYieldFactorByLevelDifference(v12 - v11)
      vehicle.lastRegularPHFactor = v13
      vehicle.lastPHActualValue = v10
      vehicle.lastPHTargetValue = v11
      if HarvestExtension.YIELD_DEBUG then
        self.debugValues.pHFactor = v13
        self.debugValues.regularPHFactor = v13
        self.debugValues.pHActualValue = v10
        self.debugValues.pHTargetValue = v11
        self.debugValues.pHRegularValue = v12
      end
    end
  end
  v10, v11, v12 = v10:updateLastYieldValues()
  if not v10 and not vehicle.lastSeedRateMultiplier then
  end
  if v13 ~= nil then
    vehicle.lastSeedRateMultiplier = v13
    if HarvestExtension.YIELD_DEBUG then
      self.debugValues.seedRateYieldFactor = v13
      if not v11 then
      end
      v13.lastSeedRateFound = v14
      if not v12 then
      end
      v13.lastSeedRateTarget = v14
    end
  end
  local v14 = math.min(v6, v5)
  local v17 = math.min(v9, v8)
  return v5
end
function HarvestExtension:preProcessMowerArea(vehicle, workArea, dt)
  local v15, v16, v17 = getWorldTranslation(workArea.start)
  v15, v16, v17 = getWorldTranslation(workArea.width)
  v15, v16, v17 = getWorldTranslation(workArea.height)
  if vehicle.spec_mower.pfFruitTypeConverters == nil then
    vehicle.spec_mower.pfFruitTypeConverters = {}
    for v18, v19 in pairs(vehicle.spec_mower.fruitTypeConverters) do
      table.insert(v4.pfFruitTypeConverters, v18)
    end
  end
  v15, v16 = v15:updateCoverArea(v4.pfFruitTypeConverters, v6, v7, v8, v9, v10, v11)
  v17 = v5:getIsMaizePlusActive()
  if v17 then
    v17, v18 = v17:updateCoverArea(v4.pfFruitTypeConverters, v6, v7, v8, v9, v10, v11, true)
  end
  local v17, v18, v19, v20, v21 = self:updateLatestFactors(v5, vehicle, v13, v14)
  self.replaceMowerMultiplierCurrentYieldPotential = v19
  self.replaceMowerMultiplierNFactor = v17
  self.replaceMowerMultiplierRegularNFactor = v18
  self.replaceMowerMultiplierPHFactor = v20
  self.replaceMowerMultiplierRegularPHFactor = v21
  self.replaceMowerMultiplier = true
end
function HarvestExtension:postProcessMowerArea(vehicle, workArea, dt, lastRealArea)
  self.replaceMowerMultiplier = false
  local v14, v15, v16 = getWorldTranslation(workArea.start)
  v14, v15, v16 = getWorldTranslation(workArea.width)
  v14, v15, v16 = getWorldTranslation(workArea.height)
  v14 = v14:getFarmlandIdAtWorldPosition((v14 + v14) * 0.5, (v16 + v16) * 0.5)
  v15 = v15:getMissionAtWorldPosition(v14, v16)
  if not v15 then
    v15 = v15:getMissionAtWorldPosition(v14, v16)
    if not v15 then
      v15 = v15:getMissionAtWorldPosition(v14, v16)
    end
  end
  self:setLastScoringValues(lastRealArea, v14, vehicle.lastNActualValue, vehicle.lastNTargetValue, vehicle.lastPHActualValue, vehicle.lastPHTargetValue, vehicle.lastIgnoreOverfertilization)
  if 0 < lastRealArea and self.replaceMowerNewMultiplier ~= nil and self.replaceMowerRegularMultiplier ~= nil and v15 == nil then
    local dropArea = vehicle:getDropArea(workArea)
    if dropArea ~= nil then
    elseif v5.fillUnitIndex ~= nil then
      local v20 = vehicle:getFillUnitFillType(v5.fillUnitIndex)
    end
    if v18 ~= nil and v18 ~= FillType.UNKNOWN then
      if v6.yieldMap ~= nil then
        v20:setAreaYield(v7, v8, v9, v10, v11, v12, self.replaceMowerRegularMultiplier)
      end
      if HarvestExtension.YIELD_DEBUG then
        self.debugValues.yieldFactor = self.replaceMowerNewMultiplier
        self.debugValues.yieldFactorRegular = self.replaceMowerRegularMultiplier
      end
      v20 = v20:getFillTypeByIndex(v18)
      local v22, v23, v24 = vehicle:getPFStatisticInfo()
      if v22 ~= nil and v14 ~= nil then
        v22:updateStatistic(v14, "yield", workArea.lastPickupLiters)
        v22:updateStatistic(v14, "yieldWeight", workArea.lastPickupLiters * v20.massPerLiter / FillTypeManager.MASS_SCALE)
        v22:updateStatistic(v14, "yieldRegular", v17)
        local v25 = self:getBestPriceForFillType(v20)
        v22:updateStatistic(v14, "yieldBestPrice", v25 * workArea.lastPickupLiters)
      end
    end
  end
end
function HarvestExtension.setLastScoringValues(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7)
end
function HarvestExtension.overwriteGameFunctions(v0, vehicle)
  vehicle:overwriteGameFunction(Cutter, "processCutterArea", function(v0, vehicle, workArea, dt)
    if vehicle.spec_cutter.workAreaParameters.combineVehicle ~= nil then
      local v17, v18, dropArea = getWorldTranslation(workArea.start)
      v17, v18, dropArea = getWorldTranslation(workArea.width)
      v17, v18, dropArea = getWorldTranslation(workArea.height)
      v17, v18 = v17:updateCoverArea(vehicle.spec_cutter.workAreaParameters.fruitTypesToUse, v17, dropArea, v17, dropArea, v17, dropArea, vehicle.spec_cutter.allowsForageGrowthState)
      dropArea = dropArea:getFarmlandIdAtWorldPosition((v17 + v17) * 0.5, (dropArea + dropArea) * 0.5)
      dropArea = dropArea:getMissionAtWorldPosition(v17, dropArea)
      if not dropArea then
        dropArea = dropArea:getMissionAtWorldPosition(v17, dropArea)
        if not dropArea then
          dropArea = dropArea:getMissionAtWorldPosition(v17, dropArea)
        end
      end
    end
    local v17, v18, dropArea, v20, v21 = v17:updateLatestFactors(u0, vehicle, v15, v16)
    u1.checkMultiplier = true
    local v22, v23 = v0(vehicle, workArea, dt)
    u1.checkMultiplier = false
    v24:setLastScoringValues(v22, v13, vehicle.lastNActualValue, vehicle.lastNTargetValue, vehicle.lastPHActualValue, vehicle.lastPHTargetValue, vehicle.lastIgnoreOverfertilization)
    if 0 < v22 and u1.lastMultiplier ~= nil and v5 ~= nil and v14 == nil then
      if vehicle.smoothedYieldFactor == nil then
        vehicle.smoothedYieldFactor = 0
      end
      vehicle.smoothedYieldFactor = vehicle.smoothedYieldFactor * 0.95 + u1.lastWeedFactor * 0.05
      u1.lastWeedFactor = vehicle.smoothedYieldFactor
      lastRealArea.workAreaParameters.lastRealArea = v22 / u1.lastMultiplier * 1.05 * (1 + v17 * 0.5 + v20 * 0.2 + 0 + u1.lastPlowFactor * 0.1 + u1.lastWeedFactor * 0.15 + u1.lastStubbleFactor * 0.025 + u1.lastRollerFactor * 0.025) * dropArea
      if u0.yieldMap ~= nil then
        v29:setAreaYield(v6, v7, v8, v9, v10, v11, (1 + v17 * 0.5 + v20 * 0.2 + 0 + u1.lastPlowFactor * 0.1 + u1.lastWeedFactor * 0.15 + u1.lastStubbleFactor * 0.025 + u1.lastRollerFactor * 0.025) * dropArea)
      end
      if HarvestExtension.YIELD_DEBUG then
        u1.debugValues.yieldFactor = v26
        u1.debugValues.yieldFactorRegular = v27
        u1.debugValues.plowFactor = u1.lastPlowFactor
        u1.debugValues.weedFactor = u1.lastWeedFactor
        u1.debugValues.stubbleFactor = u1.lastStubbleFactor
        u1.debugValues.rollerFactor = u1.lastRollerFactor
      end
      local v29 = v29:getFillTypeIndexByFruitTypeIndex(v24)
      if lastRealArea.fruitTypeConverters[v24] ~= nil then
      end
      local v31 = v31:getFillTypeByIndex(v29)
      local v33 = v33:getYieldFromArea(v5, vehicle, v24, lastRealArea.workAreaParameters.lastRealArea)
      local v35 = v35:getYieldFromArea(v5, vehicle, v24, v28)
      local v35, v36, v37 = vehicle:getPFStatisticInfo()
      if v35 ~= nil and v13 ~= nil then
        v35:updateStatistic(v13, "yield", v33 * v30)
        v35:updateStatistic(v13, "yieldWeight", v33 * v30 * v31.massPerLiter / FillTypeManager.MASS_SCALE)
        v35:updateStatistic(v13, "yieldRegular", v35 * v30)
        local v38 = v38:getBestPriceForFillType(v31)
        v35:updateStatistic(v13, "yieldBestPrice", v38 * v33 * v30)
      end
    end
    u1.lastMultiplier = nil
    u1.lastPlowFactor = nil
    u1.lastWeedFactor = nil
    u1.lastStubbleFactor = nil
    u1.lastRollerFactor = nil
    return v22, v23
  end)
  vehicle:overwriteGameFunction(FSBaseMission, "getHarvestScaleMultiplier", function(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9)
    local v10 = v0(vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9)
    if u0.checkMultiplier then
      u0.lastMultiplier = v10
      u0.lastPlowFactor = lastRealArea
      u0.lastWeedFactor = v6
      u0.lastStubbleFactor = v7
      u0.lastRollerFactor = v8
    end
    if u0.replaceMowerMultiplier then
      u0.replaceMowerRegularMultiplier = (1 + lastRealArea * 0.1 + v6 * 0.15 + v7 * 0.025 + v8 * 0.025 + u0.replaceMowerMultiplierRegularNFactor * 0.5 + u0.replaceMowerMultiplierRegularPHFactor * 0.2) * u0.replaceMowerMultiplierCurrentYieldPotential
      u0.replaceMowerNewMultiplier = (1 + lastRealArea * 0.1 + v6 * 0.15 + v7 * 0.025 + v8 * 0.025 + u0.replaceMowerMultiplierNFactor * 0.5 + u0.replaceMowerMultiplierPHFactor * 0.2) * u0.replaceMowerMultiplierCurrentYieldPotential
    end
    return v10
  end)
  vehicle:overwriteGameFunction(FSDensityMapUtil, "updateDestroyCommonArea", function(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8)
    v9:updateDestroyCommonArea(vehicle, workArea, dt, lastRealArea, v5, v6)
    v0(vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8)
    v9:postUpdateDestroyCommonArea(vehicle, workArea, dt, lastRealArea, v5, v6)
  end)
  vehicle:overwriteGameFunction(FSDensityMapUtil, "updateDiscHarrowArea", function(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9, v10)
    v11:updateDestroyCommonArea(vehicle, workArea, dt, lastRealArea, v5, v6)
    local v11, v12 = v0(vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9, v10)
    v13:postUpdateDestroyCommonArea(vehicle, workArea, dt, lastRealArea, v5, v6)
    return v11, v12
  end)
  vehicle:overwriteGameFunction(FSDensityMapUtil, "updateDirectSowingArea", function(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9, v10, v11)
    v12:updateDestroyCommonArea(workArea, dt, lastRealArea, v5, v6, v7)
    local v12, v13 = v0(vehicle, workArea, dt, lastRealArea, v5, v6, v7, v8, v9, v10, v11)
    v14:postUpdateDestroyCommonArea(workArea, dt, lastRealArea, v5, v6, v7)
    return v12, v13
  end)
  vehicle:overwriteGameFunction(FSDensityMapUtil, "getWeedFactor", function(v0, vehicle, workArea, dt, lastRealArea, v5, v6, v7)
    local v8 = v0(vehicle, workArea, dt, lastRealArea, v5, v6, v7)
    if 0 < v8 then
      return 1
    end
    return 0
  end)
end
