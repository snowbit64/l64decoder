-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VineCutter = {}
function VineCutter.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    local v1 = SpecializationUtil.hasSpecialization(VineCutter, self.specializations)
    return v1, false
  end, AIDriveStrategyVineyardHarvester)
  Vehicle.xmlSchema:setXMLSpecializationType("VineCutter")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.vineCutter#fruitType", "Fruit type")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function VineCutter.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(VineDetector, v0)
end
function VineCutter.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getCombine", VineCutter.getCombine)
  SpecializationUtil.registerFunction(vehicleType, "harvestCallback", VineCutter.harvestCallback)
end
function VineCutter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", VineCutter.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartVineDetection", VineCutter.getCanStartVineDetection)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsValidVinePlaceable", VineCutter.getIsValidVinePlaceable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleVinePlaceable", VineCutter.handleVinePlaceable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "clearCurrentVinePlaceable", VineCutter.clearCurrentVinePlaceable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementUseVineSegment", VineCutter.getAIImplementUseVineSegment)
end
function VineCutter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", VineCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", VineCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", VineCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", VineCutter)
end
function VineCutter:onLoad(savegame)
  local v3 = v3:getValue("vehicle.vineCutter#fruitType")
  local v4 = v4:getFruitTypeByName(v3)
  if v4 ~= nil then
    self.spec_vineCutter.inputFruitTypeIndex = v4.index
  else
    self.spec_vineCutter.inputFruitTypeIndex = FruitType.GRAPE
  end
  local v5 = v5:getFillTypeIndexByFruitTypeIndex(v2.inputFruitTypeIndex)
  v2.outputFillTypeIndex = v5
  v2.showFarmlandNotOwnedWarning = false
  v5 = v5:getText("warning_youDontHaveAccessToThisLand")
  v2.warningYouDontHaveAccessToThisLand = v5
end
function VineCutter:onPostLoad(savegame)
  if self.addCutterToCombine ~= nil then
    self:addCutterToCombine(self)
  end
end
function VineCutter:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_vineCutter.showFarmlandNotOwnedWarning then
    v5:showBlinkingWarning(self.spec_vineCutter.warningYouDontHaveAccessToThisLand)
  end
end
function VineCutter:onTurnedOff()
  self:cancelVineDetection()
  if self.spec_vineCutter.lastHarvestingPlaceable ~= nil and self.spec_vineCutter.lastHarvestingNode ~= nil then
    v2:setShakingFactor(self.spec_vineCutter.lastHarvestingNode, 0, 0, 0, 0)
  end
  v1.showFarmlandNotOwnedWarning = false
end
function VineCutter:getCanStartVineDetection(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  v2 = self:getIsTurnedOn()
  if not v2 then
    return false
  end
  if self.movingDirection < 0 then
    return false
  end
  return true
end
function VineCutter:getIsValidVinePlaceable(superFunc, placeable)
  local v3 = superFunc(self, placeable)
  if not v3 then
    return false
  end
  local v4 = placeable:getVineFruitType()
  if v4 ~= self.spec_vineCutter.inputFruitTypeIndex then
    return false
  end
  return true
end
function VineCutter:handleVinePlaceable(superFunc, node, placeable, x, y, z, distance)
  self.spec_vineCutter.showFarmlandNotOwnedWarning = false
  local v9 = superFunc(self, node, placeable, x, y, z, distance)
  if not v9 then
    return false
  end
  v9 = v9:getFarmlandIdAtWorldPosition(x, z)
  if v9 == nil then
    v8.showFarmlandNotOwnedWarning = true
    return false
  end
  if v9 == FarmlandManager.NOT_BUYABLE_FARM_ID then
    v8.showFarmlandNotOwnedWarning = true
    return false
  end
  local v10 = v10:getFarmlandOwner(v9)
  local farmId = self:getOwnerFarmId()
  if v10 ~= 0 then
    local v12 = v12:canFarmAccessOtherId(farmId, v10)
  end
  if not v12 then
    v8.showFarmlandNotOwnedWarning = true
    return false
  end
  local v13, v14, v15 = self:getCombine()
  if v13 == nil and v15 ~= nil then
  end
  if v13 == nil then
    if v8.lastHarvestingNode ~= nil then
      v16:setShakingFactor(v8.lastHarvestingNode, 0, 0, 0, 0)
    end
    return false
  end
  if placeable ~= nil then
    local v16, v17, v18 = self:getFirstVineHitPosition()
    local v19, v20, v21 = self:getCurrentVineHitPosition()
    v8.currentCombineVehicle = v13
    v8.lastTouchedFarmlandFarmId = v10
    placeable:harvestVine(node, v16, v17, v18, v19, v20, v21, self.harvestCallback, self)
    placeable:setShakingFactor(node, v19, v20, v21, 1)
    if v8.lastHarvestingNode ~= nil and v8.lastHarvestingNode ~= node then
      v22:setShakingFactor(v8.lastHarvestingNode, v19, v20, v21, 0)
    end
    v8.lastHarvestingNode = node
    v8.lastHarvestingPlaceable = placeable
    return true
  end
  return false
end
function VineCutter:clearCurrentVinePlaceable(superFunc)
  superFunc(self)
  if self.spec_vineCutter.lastHarvestingPlaceable ~= nil and self.spec_vineCutter.lastHarvestingNode ~= nil then
    v3:setShakingFactor(self.spec_vineCutter.lastHarvestingNode, 0, 0, 0, 0)
  end
  v2.lastHarvestingPlaceable = nil
  v2.lastHarvestingNode = nil
  v2.showFarmlandNotOwnedWarning = false
end
function VineCutter:getAIImplementUseVineSegment(v1, v2, v3, v4)
  if 0 <= v4 then
    return v2:getHasSegmentTargetGrowthState(v3, self.spec_vineCutter.inputFruitTypeIndex, true, false)
  end
  return false
end
function VineCutter:harvestCallback(placeable, area, totalArea, weedFactor, sprayFactor, plowFactor, sectionLength)
  local v9 = v9:getHarvestScaleMultiplier(self.spec_vineCutter.inputFruitTypeIndex, sprayFactor, plowFactor, 1, weedFactor, 1, 1, 0)
  v11:addCutterArea(area, area * v9, self.spec_vineCutter.inputFruitTypeIndex, self.spec_vineCutter.outputFillTypeIndex, 0, nil, self.spec_vineCutter.lastTouchedFarmlandFarmId, 1)
  if self.spec_vineCutter.inputFruitTypeIndex == FruitType.GRAPE then
    v11:updateFarmStats(self.spec_vineCutter.lastTouchedFarmlandFarmId, "harvestedGrapes", sectionLength)
    return
  end
  if v8.inputFruitTypeIndex == FruitType.OLIVE then
    v11:updateFarmStats(v8.lastTouchedFarmlandFarmId, "harvestedOlives", sectionLength)
    return
  end
  local v13 = v13:getFruitPixelsToSqm()
  local v11 = MathUtil.areaToHa(...)
  v12:updateFarmStats(v8.lastTouchedFarmlandFarmId, "threshedHectares", v11)
  v12:updateFarmStats(v8.lastTouchedFarmlandFarmId, "workedHectares", v11)
end
function VineCutter:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
  end
  return v2
end
function VineCutter:getCombine()
  if self.verifyCombine ~= nil then
    return self:verifyCombine(self.spec_vineCutter.inputFruitTypeIndex, self.spec_vineCutter.outputFillTypeIndex)
  end
  if self.getAttacherVehicle ~= nil then
    v2 = self:getAttacherVehicle()
    if v2 ~= nil and v2.verifyCombine ~= nil then
      return v2:verifyCombine(v1.inputFruitTypeIndex, v1.outputFillTypeIndex)
    end
  end
  return nil
end
function VineCutter.getDefaultSpeedLimit()
  return 5
end
