-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FertilizingSowingMachine = {}
function FertilizingSowingMachine.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(SowingMachine, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Sprayer, v0)
  end
  return v1
end
function FertilizingSowingMachine.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FertilizingSowingMachine")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fertilizingSowingMachine#needsSetIsTurnedOn", "Needs to be turned on to spray", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FertilizingSowingMachine.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processSowingMachineArea", FertilizingSowingMachine.processSowingMachineArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUseSprayerAIRequirements", FertilizingSowingMachine.getUseSprayerAIRequirements)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreEffectsVisible", FertilizingSowingMachine.getAreEffectsVisible)
end
function FertilizingSowingMachine.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FertilizingSowingMachine)
end
function FertilizingSowingMachine:onLoad(savegame)
  local v3 = v3:getValue("vehicle.fertilizingSowingMachine#needsSetIsTurnedOn", false)
  self.spec_fertilizingSowingMachine.needsSetIsTurnedOn = v3
  self.spec_sprayer.needsToBeFilledToTurnOn = false
  self.spec_sprayer.useSpeedLimit = false
end
function FertilizingSowingMachine:processSowingMachineArea(superFunc, workArea, dt)
  local v13 = self:getLastSpeed()
  if 0.5 >= v13 then
  end
  v11.isWorking = true
  if not v8.isActive then
    return 0, 0
  end
  local v11 = self:getIsAIActive()
  if v11 then
    -- if g_currentMission.missionInfo.helperBuySeeds then goto L56 end
  end
  if v8.seedsVehicle == nil then
    v11 = self:getIsAIActive()
    if v11 then
      local v14 = AIMessageErrorOutOfFill.new()
      self.rootVehicle:stopCurrentAIJob(...)
    end
    return 0, 0
  end
  if not g_currentMission.missionInfo.helperBuyFertilizer then
    v11 = self:getIsAIActive()
    if v11 then
      if v7.sprayFillType ~= nil then
        -- if v7.sprayFillType ~= FillType.UNKNOWN then goto L89 end
      end
      if v7.lastAIHasSprayed ~= nil then
        v14 = AIMessageErrorOutOfFill.new()
        self.rootVehicle:stopCurrentAIJob(...)
        v7.lastAIHasSprayed = nil
        -- goto L92  (LOP_JUMP +3)
        v7.lastAIHasSprayed = true
      end
    end
  end
  if not v8.canFruitBePlanted then
    return 0, 0
  end
  if v7.sprayFillLevel > 0 then
    -- if not v4.needsSetIsTurnedOn then goto L113 end
    local v12 = self:getIsTurnedOn()
    -- if v12 then goto L113 end
  end
  v12, v13, v14 = getWorldTranslation(workArea.start)
  local v15, v16, v17 = getWorldTranslation(workArea.width)
  local v18, v19, v20 = getWorldTranslation(workArea.height)
  if not v5.useDirectPlanting then
    local v21, v22 = FSDensityMapUtil.updateSowingArea(v8.seedsFruitType, v12, v14, v15, v17, v18, v20, v8.fieldGroundType, v8.angle, nil, nil)
  else
    v21, v22 = FSDensityMapUtil.updateDirectSowingArea(v8.seedsFruitType, v12, v14, v15, v17, v18, v20, v8.fieldGroundType, v8.angle, nil, nil)
  end
  self.spec_sowingMachine.isProcessing = self.spec_sowingMachine.isWorking
  if v11 ~= nil then
    if v6.doubledAmountIsActive then
    else
    end
    local v22, v23 = FSDensityMapUtil.updateSprayArea(v12, v14, v15, v17, v18, v20, v11, v21)
    v7.lastChangedArea = v7.lastChangedArea + v22
    v7.lastTotalArea = v7.lastTotalArea + v23
    v7.lastStatsArea = 0
    v7.isActive = true
    v7.lastSprayTime = g_time
    local v24 = self:getLastTouchedFarmlandFarmId()
    local v27 = v27:getFruitPixelsToSqm()
    local v25 = MathUtil.areaToHa(...)
    v26:updateFarmStats(v24, "sprayedHectares", v25)
    v26:updateFarmStats(v24, "sprayedTime", dt / 60000)
    v26:updateFarmStats(v24, "sprayUsage", v7.usage)
  end
  v8.lastChangedArea = v8.lastChangedArea + v9
  v8.lastStatsArea = v8.lastStatsArea + v9
  v8.lastTotalArea = v8.lastTotalArea + v10
  FSDensityMapUtil.eraseTireTrack(v12, v14, v15, v17, v18, v20)
  self:updateMissionSowingWarning(v12, v14)
  return v9, v10
end
function FertilizingSowingMachine.getUseSprayerAIRequirements(v0, v1)
  return false
end
function FertilizingSowingMachine:getAreEffectsVisible(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v5 = self:getSprayerFillUnitIndex()
    local v3 = self:getFillUnitFillType(...)
    if v3 == FillType.UNKNOWN then
    end
  end
  return v2
end
