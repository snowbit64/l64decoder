-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyStonePicker = {}
local AIDriveStrategyStonePicker_mt = Class(AIDriveStrategyStonePicker, AIDriveStrategy)
function AIDriveStrategyStonePicker.new(customMt)
  if customMt == nil then
  end
  local v1 = AIDriveStrategy.new(customMt)
  v1.stonePickers = {}
  v1.notificationFullTankShown = false
  return v1
end
function AIDriveStrategyStonePicker:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  local v2 = SpecializationUtil.hasSpecialization(StonePicker, self.vehicle.specializations)
  if v2 then
    table.insert(self.stonePickers, self.vehicle)
  end
  v3 = v3:getAttachedAIImplements()
  for v5, v6 in pairs(...) do
    local v7 = SpecializationUtil.hasSpecialization(StonePicker, v6.object.specializations)
    if not v7 then
      continue
    end
    table.insert(self.stonePickers, v6.object)
  end
end
function AIDriveStrategyStonePicker.update(v0, v1)
end
function AIDriveStrategyStonePicker:getDriveData(dt, vX, vY, vZ)
  for v10, v11 in pairs(self.stonePickers) do
    local v13 = v11:getFillUnitFillLevel(v11.spec_stonePicker.fillUnitIndex)
    local v14 = v11:getFillUnitCapacity(v11.spec_stonePicker.fillUnitIndex)
    if v11.getDischargeState ~= nil then
      local v15 = v11:getDischargeState()
      if v15 ~= Dischargeable.DISCHARGE_STATE_OFF then
        v15 = v11:getCurrentDischargeNode()
        if v15 ~= nil then
          local v16, v17 = v11:getDischargeTargetObject(v15)
          if v16 ~= nil then
            -- if v13 > 0 then goto L52 end
          end
          v11:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
        end
      end
    end
    if v11.getTipState ~= nil then
      v15 = v11:getTipState()
      if v15 ~= Trailer.TIPSTATE_CLOSED then
      end
    end
    if v14 <= v13 then
      if VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v17 = string.format("STONE PICKER -> full")
        v15:addAIDebugText(...)
      end
      if self.notificationFullTankShown ~= true then
        local v19 = v19:getText("ai_messageErrorTankIsFull")
        local v21 = v21:getCurrentHelper()
        local v18 = string.format(v19, v21.name)
        v15:addIngameNotification(...)
        self.notificationFullTankShown = true
      end
      if not (v11.getCurrentDischargeNode ~= nil) then
        continue
      end
      v15 = v11:getCurrentDischargeNode()
      if not (v15 ~= nil) then
        continue
      end
      v16, v17 = v11:getDischargeTargetObject(v15)
      if not (v16 ~= nil) then
        continue
      end
      v11:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT)
    else
      self.notificationFullTankShown = false
    end
  end
  if not v5 then
    return 0, 1, true, 0, math.huge
  end
  return nil, nil, nil, v6, nil
end
function AIDriveStrategyStonePicker.updateDriving(v0, v1)
end
