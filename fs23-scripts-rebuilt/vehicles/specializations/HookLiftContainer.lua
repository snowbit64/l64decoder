-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HookLiftContainer = {}
function HookLiftContainer.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Attachable, v0)
  end
  return v1
end
function HookLiftContainer.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("HookLiftContainer")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.hookLiftContainer#tiltContainerOnDischarge", "Tilt container on discharge", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function HookLiftContainer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToObject", HookLiftContainer.getCanDischargeToObject)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanDischargeToGround", HookLiftContainer.getCanDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", HookLiftContainer.isDetachAllowed)
end
function HookLiftContainer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", HookLiftContainer)
  SpecializationUtil.registerEventListener(vehicleType, "onStartTipping", HookLiftContainer)
  SpecializationUtil.registerEventListener(vehicleType, "onStopTipping", HookLiftContainer)
end
function HookLiftContainer:onLoad(savegame)
  local v3 = v3:getValue("vehicle.hookLiftContainer#tiltContainerOnDischarge", true)
  self.spec_hookLiftContainer.tiltContainerOnDischarge = v3
end
function HookLiftContainer:getCanDischargeToObject(superFunc, dischargeNode)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil and attacherVehicle.getIsTippingAllowed ~= nil then
    local v4 = attacherVehicle:getIsTippingAllowed()
    if not v4 then
      return false
    end
  end
  v4 = superFunc(self, dischargeNode)
  return v4
end
function HookLiftContainer:getCanDischargeToGround(superFunc, dischargeNode)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil and attacherVehicle.getIsTippingAllowed ~= nil then
    local v4 = attacherVehicle:getIsTippingAllowed()
    if not v4 then
      return false
    end
  end
  v4 = superFunc(self, dischargeNode)
  return v4
end
function HookLiftContainer:isDetachAllowed(superFunc)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil and attacherVehicle.getCanDetachContainer ~= nil then
    local v3 = attacherVehicle:getCanDetachContainer()
    if not v3 then
      return false, nil
    end
  end
  v3 = superFunc(self)
  return v3
end
function HookLiftContainer:onStartTipping(tipSideIndex)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil and attacherVehicle.startTipping ~= nil and self.spec_hookLiftContainer.tiltContainerOnDischarge then
    attacherVehicle:startTipping()
  end
end
function HookLiftContainer:onStopTipping()
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil and attacherVehicle.stopTipping ~= nil and self.spec_hookLiftContainer.tiltContainerOnDischarge then
    attacherVehicle:stopTipping()
  end
end
