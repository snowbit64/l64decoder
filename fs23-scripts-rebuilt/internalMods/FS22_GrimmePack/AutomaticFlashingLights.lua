-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutomaticFlashingLights = {}
function AutomaticFlashingLights.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Lights, v0)
  end
  return v1
end
function AutomaticFlashingLights.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onUpdateTick", AutomaticFlashingLights)
  SpecializationUtil.registerEventListener(v0, "onFillUnitFillLevelChanged", AutomaticFlashingLights)
end
function AutomaticFlashingLights:onUpdateTick(v1)
  local v2 = self:getTurnLightState()
  if v2 == Lights.TURNLIGHT_HAZARD then
    self.spec_dischargeable.lastTimeDischarged = self.spec_dischargeable.lastTimeDischarged or 0
    if 1000 < g_time - self.spec_dischargeable.lastTimeDischarged then
      self:setTurnLightState(Lights.TURNLIGHT_OFF, true, true)
    end
  end
end
function AutomaticFlashingLights:onFillUnitFillLevelChanged(v1, v2, v3, v4, v5, v6)
  if v2 < 0 then
    local v7 = self:getTurnLightState()
    if v7 ~= Lights.TURNLIGHT_HAZARD then
      self:setTurnLightState(Lights.TURNLIGHT_HAZARD, true, true)
    end
    self.spec_dischargeable.lastTimeDischarged = g_time
  end
end
