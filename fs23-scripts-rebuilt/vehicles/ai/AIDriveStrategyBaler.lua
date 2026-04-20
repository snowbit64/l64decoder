-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyBaler = {}
local AIDriveStrategyBaler_mt = Class(AIDriveStrategyBaler, AIDriveStrategy)
function AIDriveStrategyBaler.new(customMt)
  if customMt == nil then
  end
  local v1 = AIDriveStrategy.new(customMt)
  v1.balers = {}
  v1.slowDownFillLevel = 200
  v1.slowDownStartSpeed = 20
  return v1
end
function AIDriveStrategyBaler:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  local v2 = SpecializationUtil.hasSpecialization(Baler, self.vehicle.specializations)
  if v2 then
    table.insert(self.balers, self.vehicle)
  end
  v3 = v3:getAttachedAIImplements()
  for v5, v6 in pairs(...) do
    local v7 = SpecializationUtil.hasSpecialization(Baler, v6.object.specializations)
    if not v7 then
      continue
    end
    table.insert(self.balers, v6.object)
  end
end
function AIDriveStrategyBaler.update(v0, v1)
end
function AIDriveStrategyBaler:getDriveData(dt, vX, vY, vZ)
  for v10, v11 in pairs(self.balers) do
    if not v11.spec_baler.nonStopBaling then
      local v13 = v11:getFillUnitFillLevel(v11.spec_baler.fillUnitIndex)
      local v14 = v11:getFillUnitCapacity(v11.spec_baler.fillUnitIndex)
      if v14 - v13 < self.slowDownFillLevel and VehicleDebug.state == VehicleDebug.DEBUG_AI then
        local v18 = string.format("BALER -> Slow down because nearly full: %.2f", 2 + (v14 - v13) / self.slowDownFillLevel * self.slowDownStartSpeed)
        v16:addAIDebugText(...)
      end
      if v13 ~= v14 and not (v12.unloadingState ~= Baler.UNLOADING_CLOSED) then
        continue
      end
    else
      if not v11.spec_baler.platformDropInProgress then
        continue
      end
      if not (VehicleDebug.state == VehicleDebug.DEBUG_AI) then
        continue
      end
      local v15 = string.format("BALER -> Platform dropping active, reducing speed to %.1f km/h", v11.spec_baler.platformAIDropSpeed)
      v13:addAIDebugText(...)
    end
  end
  if not v5 then
    return 0, 1, true, 0, math.huge
  end
  return nil, nil, nil, v6, nil
end
function AIDriveStrategyBaler.updateDriving(v0, v1)
end
