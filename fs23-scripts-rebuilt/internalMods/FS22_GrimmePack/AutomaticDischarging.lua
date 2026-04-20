-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutomaticDischarging = {}
function AutomaticDischarging.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Dischargeable, v0)
end
function AutomaticDischarging.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleDischargeToGround", AutomaticDischarging.getCanToggleDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeRaycast", AutomaticDischarging.handleDischargeRaycast)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToGround", AutomaticDischarging.getCanDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDischargeNodeActive", AutomaticDischarging.getIsDischargeNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToLand", AutomaticDischarging.getCanDischargeToLand)
end
function AutomaticDischarging.registerEventListeners(vehicleType)
end
function AutomaticDischarging.getCanToggleDischargeToGround(v0)
  return false
end
function AutomaticDischarging:handleDischargeRaycast(superFunc, dischargeNode, ...)
  superFunc(...)
  local v3 = self:getCanDischargeToGround(dischargeNode)
  if v3 then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_GROUND)
  end
end
function AutomaticDischarging:getCanDischargeToGround(superFunc, ...)
  local v2 = superFunc(...)
  if not v2 then
    return false
  end
  v2 = self:getIsTurnedOn()
  return v2
end
function AutomaticDischarging:getIsDischargeNodeActive(superFunc, ...)
  local v2 = superFunc(...)
  if not v2 then
    return false
  end
  v2 = self:getIsTurnedOn()
  return v2
end
function AutomaticDischarging:getCanDischargeToLand(superFunc, dischargeNode)
  if dischargeNode == nil then
    return false
  end
  local v4, v5, v6 = localToWorld(dischargeNode.info.node, -dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  local v7, v8, v9 = localToWorld(dischargeNode.info.node, dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  local activeFarm = self:getActiveFarm()
  local v11 = v11:canFarmAccessLand(activeFarm, v4, v6)
  if not v11 then
    v11 = v11:getIsMissionWorkAllowed(activeFarm, v4, v6)
    if not v11 then
      return false
    end
  end
  v11 = v11:canFarmAccessLand(activeFarm, v7, v9)
  if not v11 then
    v11 = v11:getIsMissionWorkAllowed(activeFarm, v7, v9)
    if not v11 then
      return false
    end
  end
  return true
end
