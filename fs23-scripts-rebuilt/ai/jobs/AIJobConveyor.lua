-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobConveyor = {START_ERROR_LIMIT_REACHED = 1, START_ERROR_VEHICLE_DELETED = 2, START_ERROR_NO_PERMISSION = 3, START_ERROR_VEHICLE_IN_USE = 4}
local AIJobConveyor_mt = Class(AIJobConveyor, AIJob)
function AIJobConveyor.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  local v3 = AITaskConveyor.new(isServer, v2)
  v2.conveyorTask = v3
  v2:addTask(v2.conveyorTask)
  v3 = AIParameterVehicle.new()
  v2.vehicleParameter = v3
  v2:addNamedParameter("vehicle", v2.vehicleParameter)
  local v4 = v4:getText("ai_parameterGroupTitleVehicle")
  v3 = AIParameterGroup.new(...)
  v3:addParameter(v2.vehicleParameter)
  table.insert(v2.groupedParameters, v3)
  return v2
end
function AIJobConveyor.getPricePerMs(v0)
  return 0.00005
end
function AIJobConveyor:start(farmId)
  local v3 = v3:superClass()
  v3.start(self, farmId)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:aiJobStarted(self, self.helperIndex, farmId)
  end
end
function AIJobConveyor:stop(aiMessage)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:aiJobFinished()
  end
  local v3 = v3:superClass()
  v3.stop(self, aiMessage)
end
function AIJobConveyor:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  local v6 = v6:superClass()
  v6.applyCurrentState(self, vehicle, mission, farmId, isDirectStart)
  v5:setVehicle(vehicle)
end
function AIJobConveyor.getIsAvailableForVehicle(v0, v1)
  if v1.spec_aiConveyorBelt ~= nil then
    local v2 = v1:getCanStartAIVehicle()
  end
  return v2
end
function AIJobConveyor:getTitle()
  local v1 = v1:getVehicle()
  if v1 ~= nil then
    return v1:getName()
  end
  return ""
end
function AIJobConveyor:setValues()
  self:resetTasks()
  local v3 = v3:getVehicle()
  v1:setVehicle(...)
end
function AIJobConveyor:validate(farmId)
  self:setParamterValid(true)
  local v2, v3 = v2:validate(false)
  if not v2 then
    v4:setIsValid(false)
  end
  return v2, v3
end
function AIJobConveyor:getIsStartable(connection)
  local v2 = v2:getAILimitedReached()
  if v2 then
    return false, AIJobConveyor.START_ERROR_LIMIT_REACHED
  end
  v2 = v2:getVehicle()
  if v2 == nil then
    return false, AIJobConveyor.START_ERROR_VEHICLE_DELETED
  end
  local v7 = v2:getOwnerFarmId()
  local v3 = v3:getHasPlayerPermission(...)
  if not v3 then
    return false, AIJobConveyor.START_ERROR_NO_PERMISSION
  end
  v3 = v2:getIsInUse(connection)
  if v3 then
    return false, AIJobConveyor.START_ERROR_VEHICLE_IN_USE
  end
  return true, AIJob.START_SUCCESS
end
function AIJobConveyor.getIsStartErrorText(state)
  if state == AIJobConveyor.START_ERROR_LIMIT_REACHED then
    return v1:getText("ai_startStateLimitReached")
  end
  if state == AIJobConveyor.START_ERROR_VEHICLE_DELETED then
    v1 = v1:getText("ai_startStateVehicleDeleted")
    return v1
  end
  if state == AIJobConveyor.START_ERROR_NO_PERMISSION then
    v1 = v1:getText("ai_startStateNoPermission")
    return v1
  end
  if state == AIJobConveyor.START_ERROR_VEHICLE_IN_USE then
    v1 = v1:getText("ai_startStateVehicleInUse")
    return v1
  end
  v1 = v1:getText("ai_startStateSuccess")
  return v1
end
