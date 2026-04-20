-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FertilizingCultivator = {}
function FertilizingCultivator.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Cultivator, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Sprayer, v0)
  end
  return v1
end
function FertilizingCultivator.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FertilizingCultivator")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fertilizingCultivator#needsSetIsTurnedOn", "Needs to be turned on to spray", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FertilizingCultivator.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processCultivatorArea", FertilizingCultivator.processCultivatorArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setSprayerAITerrainDetailProhibitedRange", FertilizingCultivator.setSprayerAITerrainDetailProhibitedRange)
end
function FertilizingCultivator.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FertilizingCultivator)
end
function FertilizingCultivator:onLoad(savegame)
  local v3 = v3:getValue("vehicle.fertilizingCultivator#needsSetIsTurnedOn", false)
  self.spec_fertilizingCultivator.needsSetIsTurnedOn = v3
  self.spec_sprayer.useSpeedLimit = false
  self:clearAITerrainDetailRequiredRange()
  self:updateCultivatorAIRequirements()
end
function FertilizingCultivator:processCultivatorArea(superFunc, workArea, dt)
  local v7, v8, v9 = getWorldTranslation(workArea.start)
  local v10, v11, v12 = getWorldTranslation(workArea.width)
  local v13, v14, v15 = getWorldTranslation(workArea.height)
  if self.spec_sprayer.workAreaParameters.sprayFillLevel > 0 then
    -- if not v0.spec_fertilizingCultivator.needsSetIsTurnedOn then goto L40 end
    local v19 = self:getIsTurnedOn()
    -- if v19 then goto L40 end
  end
  if v5.useDeepMode then
    local v21, v22 = FSDensityMapUtil.updateCultivatorArea(v7, v9, v10, v12, v13, v15, not v16.limitToField, v16.limitFruitDestructionToField, v16.angle, nil)
    v21 = FSDensityMapUtil.updateVineCultivatorArea(v7, v9, v10, v12, v13, v15)
  else
    v21, v22 = FSDensityMapUtil.updateDiscHarrowArea(v7, v9, v10, v12, v13, v15, not v16.limitToField, v16.limitFruitDestructionToField, v16.angle, nil)
    v21 = FSDensityMapUtil.updateVineCultivatorArea(v7, v9, v10, v12, v13, v15)
  end
  v16.lastChangedArea = v16.lastChangedArea + v19
  v16.lastTotalArea = v16.lastTotalArea + v20
  v16.lastStatsArea = v16.lastStatsArea + v19
  if v5.isSubsoiler then
    FSDensityMapUtil.updateSubsoilerArea(v7, v9, v10, v12, v13, v15)
  end
  FSDensityMapUtil.eraseTireTrack(v7, v9, v10, v12, v13, v15)
  if v18 ~= nil then
    if v6.doubledAmountIsActive then
    else
    end
    local v22, v23 = FSDensityMapUtil.updateSprayArea(v7, v9, v10, v12, v13, v15, v18, v21)
    v17.lastChangedArea = v17.lastChangedArea + v22
    v17.lastTotalArea = v17.lastTotalArea + v23
    v17.lastStatsArea = 0
    v17.isActive = true
  end
  v5.isWorking = true
  return v19, v20
end
function FertilizingCultivator:setSprayerAITerrainDetailProhibitedRange(superFunc, fillType)
  if self.addAITerrainDetailProhibitedRange ~= nil then
    self:clearAITerrainDetailProhibitedRange()
    local v3 = v3:getSprayTypeByFillTypeIndex(fillType)
    if v3 ~= nil then
      local v5, v6, v7 = v5:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
      local v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
      local v11 = v11:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
      self:addAITerrainDetailProhibitedRange(v3.sprayGroundType, v3.sprayGroundType, v6, v7)
    end
  end
end
