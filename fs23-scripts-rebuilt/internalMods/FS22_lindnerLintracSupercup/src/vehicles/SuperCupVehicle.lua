-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupVehicle = {MOD_NAME = g_currentModName}
function SuperCupVehicle.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Drivable, v0)
end
function SuperCupVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setAllowDriveSuperCup", SuperCupVehicle.setAllowDriveSuperCup)
  SpecializationUtil.registerFunction(vehicleType, "getAllowDriveSuperCup", SuperCupVehicle.getAllowDriveSuperCup)
end
function SuperCupVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsVehicleControlledByPlayer", SuperCupVehicle.getIsVehicleControlledByPlayer)
end
function SuperCupVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SuperCupVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", SuperCupVehicle)
end
function SuperCupVehicle:onLoad(savegame)
  local v3 = v3:format(SuperCupVehicle.MOD_NAME)
  self.spec_superCupVehicle = self[v3]
  self.spec_superCupVehicle.allowDriving = false
end
function SuperCupVehicle.onDelete(v0)
end
function SuperCupVehicle:setAllowDriveSuperCup(allowDriving, object, noEventSend)
  self.spec_superCupVehicle.superCupObject = object
  if self.spec_superCupVehicle.allowDriving ~= allowDriving then
    SuperCupDriverEvent.sendEvent(self, allowDriving, object, noEventSend)
    self.spec_superCupVehicle.allowDriving = allowDriving
    if self.spec_enterable ~= nil then
      self.spec_enterable.exitPoint = object.spec_superCup.superCup.superCupExitReferenceNode
    end
  end
end
function SuperCupVehicle:getAllowDriveSuperCup()
  return self.spec_superCupVehicle.allowDriving
end
function SuperCupVehicle:getIsVehicleControlledByPlayer(superFunc)
  local v2 = superFunc(self)
  if v2 then
    v2 = self:getAllowDriveSuperCup()
  end
  return v2
end
