-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyVineyardHarvester = {}
local v0 = Class(AIDriveStrategyVineyardHarvester, AIDriveStrategyVineyard)
function AIDriveStrategyVineyardHarvester.new(v0)
  if not v0 then
  end
  local v1 = v1(v2)
  v1.combines = {}
  v1.notificationFullGrainTankShown = false
  v1.notificationGrainTankWarningShown = false
  v1.beaconLightsActive = false
  return v1
end
function AIDriveStrategyVineyardHarvester:setAIVehicle(v1)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, v1)
  -- TODO: structure LOP_FORNPREP (pc 17, target 40)
  local v6 = SpecializationUtil.hasSpecialization(Combine, v1.rootVehicle.childVehicles[1].specializations)
  if v6 then
    table.insert(self.combines, v1.rootVehicle.childVehicles[1])
  end
  -- TODO: structure LOP_FORNLOOP (pc 39, target 18)
end
function AIDriveStrategyVineyardHarvester.update(v0, v1)
  local v3 = v3:superClass()
  v3.update(v0, v1)
end
function AIDriveStrategyVineyardHarvester:getDriveData(v1, v2, v3, v4)
  local v6 = v6:superClass()
  local v5, v6, v7, v8, v9 = v6.getDriveData(self, v1, v2, v3, v4)
  -- TODO: structure LOP_FORNPREP (pc 18, target 326)
  local v15 = self.combines[1]:getFillUnitFillLevelPercentage(self.combines[1].spec_combine.fillUnitIndex)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v16:addAIDebugText("== AIDriveStrategyVineyardHarvester ==")
    local v18 = string.format("FillLevel: %.1f%%", v15 * 100)
    v16:addAIDebugText(...)
    if 1 <= v15 then
      v16:addAIDebugText(":Is Full:")
    end
  end
  if 0.8 < v15 then
    if not self.beaconLightsActive then
      v16:setAIMapHotspotBlinking(true)
      v16:setBeaconLightsVisibility(true)
      self.beaconLightsActive = true
    end
    if v15 < 1 and not self.notificationGrainTankWarningShown then
      local v16 = v16:getOwnerFarmId()
      if v16 == g_currentMission.player.farmId then
        local v20 = v20:getText("ai_messageErrorGrainTankIsNearlyFull")
        local v22 = v22:getCurrentHelper()
        local v19 = string.format(v20, v22.name)
        v16:addIngameNotification(...)
      end
    end
    self.notificationGrainTankWarningShown = true
  else
    if self.beaconLightsActive then
      v16:setAIMapHotspotBlinking(false)
      v16:setBeaconLightsVisibility(false)
      self.beaconLightsActive = false
    end
    self.notificationGrainTankWarningShown = false
  end
  if v15 == 1 then
    -- if v0.notificationFullGrainTankShown then goto L188 end
    v16 = v16:getOwnerFarmId()
    -- if v16 ~= g_currentMission.player.farmId then goto L188 end
    v20 = v20:getText("ai_messageErrorGrainTankIsFull")
    v22 = v22:getCurrentHelper()
    v19 = string.format(v20, v22.name)
    v16:addIngameNotification(...)
    self.notificationFullGrainTankShown = true
  else
    self.notificationFullGrainTankShown = false
  end
  if v13.getTipState ~= nil then
    local v17 = v13:getTipState()
    if v17 == Trailer.TIPSTATE_CLOSED then
    end
  elseif v13.getDischargeState ~= nil then
    v17 = v13:getDischargeState()
    if v17 == Dischargeable.DISCHARGE_STATE_OFF then
    end
  end
  if 1 > v15 then
    -- if not v16 then goto L325 end
  end
  if self.placeable ~= nil then
  end
  if v17 ~= nil then
    if self.segmentDirection < 0 then
    end
    local v22, v23 = MathUtil.vector2Normalize(v20 - v18, v21 - v19)
    local v24, v25, v26, v27 = MathUtil.getClosestPointOnLineSegment(v18 - v22, 0, v19 - v23, v20, 0, v21, v2, 0, v4)
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      if 0 < v27 then
        v28:addAIDebugText(":Reverse to segment start:")
      else
        v28:addAIDebugText(":Wait for discharge:")
      end
    end
    local v28 = self:getIsSegmentAvailable(self.placeable, v17, 1)
    if v28 then
      if 0 < v27 then
        return v24 - v22 * 5, v26 - v23 * 5, false, 10, 10
      end
      return 0, 0, false, 0, 0
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 325, target 19)
  return v5, v6, v7, v8, v9
end
