-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyCombine = {}
local AIDriveStrategyCombine_mt = Class(AIDriveStrategyCombine, AIDriveStrategy)
function AIDriveStrategyCombine.new(customMt)
  if customMt == nil then
  end
  local v1 = AIDriveStrategy.new(customMt)
  v1.combines = {}
  v1.notificationFullGrainTankShown = false
  v1.notificationGrainTankWarningShown = false
  v1.beaconLightsActive = false
  v1.slowDownFillLevel = 200
  v1.slowDownStartSpeed = 20
  v1.forageHarvesterFoundTimer = 0
  return v1
end
function AIDriveStrategyCombine:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  local v2 = SpecializationUtil.hasSpecialization(Combine, self.vehicle.specializations)
  if v2 then
    table.insert(self.combines, self.vehicle)
  end
  for v5, v6 in pairs(self.vehicle.rootVehicle.childVehicles) do
    local v7 = SpecializationUtil.hasSpecialization(Combine, v6.specializations)
    if not v7 then
      continue
    end
    table.insert(self.combines, v6)
  end
end
function AIDriveStrategyCombine:update(dt)
  for v5, v6 in pairs(self.combines) do
    if not (v6.spec_pipe ~= nil) then
      continue
    end
    local v8 = v6:getCurrentDischargeNode()
    if v8 ~= nil then
      local v9 = v6:getFillUnitCapacity(v8.fillUnitIndex)
    end
    if not (v7 == math.huge) then
      continue
    end
    if not (self.vehicle.rootVehicle.getAIFieldWorkerIsTurning ~= nil) then
      continue
    end
    local v10 = self.vehicle.rootVehicle:getAIFieldWorkerIsTurning()
    if not not v10 then
      continue
    end
    v10 = NetworkUtil.getObject(v6.spec_pipe.nearestObjectInTriggers.objectId)
    if not (v10 ~= nil) then
      continue
    end
    local v12 = v6:getDischargeFillType(v8)
    if v12 == FillType.UNKNOWN then
      local v13 = v10:getFillUnitFillType(v6.spec_pipe.nearestObjectInTriggers.fillUnitIndex)
      if v13 == FillType.UNKNOWN then
        v13 = v10:getFillUnitFirstSupportedFillType(v6.spec_pipe.nearestObjectInTriggers.fillUnitIndex)
      end
      v6:setForcedFillTypeIndex(v12)
    else
      v6:setForcedFillTypeIndex(nil)
    end
  end
end
function AIDriveStrategyCombine:getDriveData(dt, vX, vY, vZ)
  if self.vehicle.rootVehicle.getAIFieldWorkerIsTurning ~= nil then
    local v6 = self.vehicle.rootVehicle:getAIFieldWorkerIsTurning()
  end
  for v13, v14 in pairs(self.combines) do
    if not (v14.spec_pipe ~= nil) then
      continue
    end
    local v19 = v14:getCurrentDischargeNode()
    if v19 ~= nil then
      local v20 = v14:getFillUnitFillLevel(v19.fillUnitIndex)
      v20 = v14:getFillUnitCapacity(v19.fillUnitIndex)
    end
    v20 = NetworkUtil.getObject(v14.spec_pipe.nearestObjectInTriggers.objectId)
    if v20 ~= nil then
    end
    if v14.spec_pipe.nearestObjectInTriggerIgnoreFillLevel then
    end
    if v16 == math.huge then
      if v14.spec_pipe.targetState ~= 2 then
        v14:setPipeState(2)
      end
      -- if v6 then goto L377 end
      local v22, v23 = v14:getDischargeTargetObject(v19)
      if v17 and v22 == nil then
      end
      -- if VehicleDebug.state ~= VehicleDebug.DEBUG_AI then goto L377 end
      if not v17 then
        v24:addAIDebugText("COMBINE -> Waiting for trailer enter the trigger")
        -- goto L377  (LOP_JUMP +272)
      end
      -- if not v17 then goto L377 end
      -- cmp-jump LOP_JUMPXEQKNIL R22 aux=0x80000000 -> L377
      v24:addAIDebugText("COMBINE -> Waiting for pipe hitting the trailer")
    else
      if 0.8 * v16 < v15 then
        if not self.beaconLightsActive then
          v23:setAIMapHotspotBlinking(true)
          v23:setBeaconLightsVisibility(true)
          self.beaconLightsActive = true
        end
        -- if v0.notificationGrainTankWarningShown then goto L198 end
        v23 = v23:getOwnerFarmId()
        -- if v23 ~= g_currentMission.player.farmId then goto L198 end
        local v27 = v27:getText("ai_messageErrorGrainTankIsNearlyFull")
        local v29 = v29:getCurrentHelper()
        local v26 = string.format(v27, v29.name)
        v23:addIngameNotification(...)
        self.notificationGrainTankWarningShown = true
      else
        if self.beaconLightsActive then
          v23:setAIMapHotspotBlinking(false)
          v23:setBeaconLightsVisibility(false)
          self.beaconLightsActive = false
        end
        self.notificationGrainTankWarningShown = false
      end
      if v15 == v16 then
        self.wasCompletelyFull = true
        -- if v0.notificationFullGrainTankShown then goto L246 end
        v23 = v23:getOwnerFarmId()
        -- if v23 ~= g_currentMission.player.farmId then goto L246 end
        v27 = v27:getText("ai_messageErrorGrainTankIsFull")
        v29 = v29:getCurrentHelper()
        v26 = string.format(v27, v29.name)
        v23:addIngameNotification(...)
        self.notificationFullGrainTankShown = true
      else
        self.notificationFullGrainTankShown = false
      end
      if v17 then
      end
      if not v17 and v15 < v16 * 0.8 then
        self.wasCompletelyFull = false
        v23 = v14:getIsTurnedOn()
        if not v23 then
          v23 = v14:getCanBeTurnedOn()
          if v23 then
            v14:aiImplementStartLine()
          end
        end
      end
      if not v17 and not v18 and v15 < v16 then
      end
      if v15 < 0.1 then
        if not v14.spec_pipe.aiFoldedPipeUsesTrailerSpace then
          if not v17 and not v18 then
          end
          v23 = v14:getIsTurnedOn()
          if not v23 then
            v23 = v14:getCanBeTurnedOn()
            if v23 then
              v14:aiImplementStartLine()
            end
          end
        end
        self.wasCompletelyFull = false
      end
      if v21 ~= v22 then
        v14:setPipeState(v22)
      end
      if v15 >= v16 then
      end
      if v22 == 2 and self.wasCompletelyFull and VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v23:addAIDebugText("COMBINE -> Waiting for trailer to unload")
      end
      if v6 and v17 then
        v23 = v14:getCanDischargeToObject(v19)
        if v23 then
          if v15 ~= 0 then
          end
          if VehicleDebug.state == VehicleDebug.DEBUG_AI and not true then
            v23:addAIDebugText("COMBINE -> Unload to trailer on headland")
          end
        end
      end
      if v16 - v15 < self.slowDownFillLevel and VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v26 = string.format("COMBINE -> Slow down because nearly full: %.2f", 2 + (v16 - v15) / self.slowDownFillLevel * self.slowDownStartSpeed)
        v24:addAIDebugText(...)
      end
    end
    if not not v17 then
      continue
    end
    if not v14.spec_combine.isSwathActive then
      continue
    end
    if not v14.spec_combine.strawPSenabled then
      continue
    end
  end
  if v6 and v8 then
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v10:addAIDebugText("COMBINE -> Waiting for straw to drop")
    end
    v11 = v11:getAIDirectionNode()
    v10, v11, v12 = localToWorld(v11, 0, 0, -10)
    v13 = MathUtil.vector2Length(vX - v10, vZ - v12)
    return v10, v12, false, 10, v13
  end
  if not v7 then
    return 0, 1, true, 0, math.huge
  end
  return nil, nil, nil, v9, nil
end
function AIDriveStrategyCombine.updateDriving(v0, v1)
end
