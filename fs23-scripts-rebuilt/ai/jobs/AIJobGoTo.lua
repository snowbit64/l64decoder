-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobGoTo = {START_ERROR_LIMIT_REACHED = 1, START_ERROR_VEHICLE_DELETED = 2, START_ERROR_NO_PERMISSION = 3, START_ERROR_VEHICLE_IN_USE = 4}
local AIJobGoTo_mt = Class(AIJobGoTo, AIJob)
function AIJobGoTo.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  local v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToTask = v3
  v2:addTask(v2.driveToTask)
  v3 = AIParameterVehicle.new()
  v2.vehicleParameter = v3
  v3 = AIParameterPositionAngle.new(0)
  v2.positionAngleParameter = v3
  v2:addNamedParameter("vehicle", v2.vehicleParameter)
  v2:addNamedParameter("positionAngle", v2.positionAngleParameter)
  local v4 = v4:getText("ai_parameterGroupTitleVehicle")
  v3 = AIParameterGroup.new(...)
  v3:addParameter(v2.vehicleParameter)
  local v5 = v5:getText("ai_parameterGroupTitlePosition")
  v4 = AIParameterGroup.new(...)
  v4:addParameter(v2.positionAngleParameter)
  table.insert(v2.groupedParameters, v3)
  table.insert(v2.groupedParameters, v4)
  return v2
end
function AIJobGoTo:start(farmId)
  local v3 = v3:superClass()
  v3.start(self, farmId)
  local v2 = v2:getVehicle()
  if v2 ~= nil then
    if self.isServer then
      v2:createAgent(self.helperIndex)
    end
    v2:aiJobStarted(self, self.helperIndex, farmId)
  end
end
function AIJobGoTo:stop(aiMessage)
  local v2 = v2:getVehicle()
  if v2 ~= nil then
    if self.isServer then
      v2:deleteAgent()
    end
    v2:aiJobFinished()
  end
  local v4 = v4:superClass()
  v4.stop(self, aiMessage)
end
function AIJobGoTo.getShowTarget(v0)
  return true
end
function AIJobGoTo:getTarget()
  if self.driveToTask.dirX ~= nil then
    local v2 = MathUtil.getYRotationFromDirection(self.driveToTask.dirX, self.driveToTask.dirZ)
  end
  return self.driveToTask.x, self.driveToTask.z, v1
end
function AIJobGoTo.getIsAvailableForVehicle(v0, v1)
  if v1.createAgent ~= nil and v1.setAITarget ~= nil then
    local v2 = v1:getCanStartAIVehicle()
    -- if v2 then goto L14 end
  end
  return false
  return true
end
function AIJobGoTo:getTitle()
  local v1 = v1:getVehicle()
  if v1 ~= nil then
    return v1:getName()
  end
  return ""
end
function AIJobGoTo:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  local v6 = v6:superClass()
  v6.applyCurrentState(self, vehicle, mission, farmId, isDirectStart)
  v5:setVehicle(vehicle)
  if vehicle.getLastJob ~= nil then
    local lastJob = vehicle:getLastJob()
    if not isDirectStart and lastJob ~= nil then
      local v10 = lastJob:isa(AIJobGoTo)
      if v10 then
        local v10, v11 = v10:getPosition()
        v10 = v10:getAngle()
      end
    end
  end
  lastJob:setSnappingAngle(0)
  if v5 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L70
  end
  lastJob, v10, v11 = getWorldTranslation(vehicle.rootNode)
  if v7 == nil then
    lastJob, v10, v11 = localDirectionToWorld(vehicle.rootNode, 0, 0, 1)
    local v12 = MathUtil.getYRotationFromDirection(lastJob, v11)
  end
  lastJob:setPosition(v5, v6)
  lastJob:setAngle(v7)
end
function AIJobGoTo:setValues()
  self:resetTasks()
  local v3 = v3:getVehicle()
  v1:setVehicle(...)
  local v1 = v1:getAngle()
  local v2, v3 = v2:getPosition()
  local v4, v5 = MathUtil.getDirectionFromYRotation(v1)
  v6:setTargetDirection(v4, v5)
  v6:setTargetPosition(v2, v3)
end
function AIJobGoTo:validate(farmId)
  self:setParamterValid(true)
  local v2, v3 = v2:validate()
  if not v2 then
    v4:setIsValid(false)
  end
  local v4, v5 = v4:validate()
  if not v4 then
    v6:setIsValid(false)
  end
  return v2 and v4, v3 or v5
end
function AIJobGoTo:getDescription()
  local v2 = v2:superClass()
  local v1 = v2.getDescription(self)
  v2 = self:getTaskByIndex(self.currentTaskIndex)
  if v2 == self.driveToTask then
    local v5 = v5:getText("ai_taskDescriptionDriveToTarget")
  end
  return v1
end
function AIJobGoTo:getIsStartable(connection)
  local v2 = v2:getAILimitedReached()
  if v2 then
    return false, AIJobGoTo.START_ERROR_LIMIT_REACHED
  end
  v2 = v2:getVehicle()
  if v2 == nil then
    return false, AIJobGoTo.START_ERROR_VEHICLE_DELETED
  end
  local v7 = v2:getOwnerFarmId()
  local v3 = v3:getHasPlayerPermission(...)
  if not v3 then
    return false, AIJobGoTo.START_ERROR_NO_PERMISSION
  end
  v3 = v2:getIsInUse(connection)
  if v3 then
    return false, AIJobGoTo.START_ERROR_VEHICLE_IN_USE
  end
  return true, AIJob.START_SUCCESS
end
function AIJobGoTo.getIsStartErrorText(state)
  if state == AIJobGoTo.START_ERROR_LIMIT_REACHED then
    return v1:getText("ai_startStateLimitReached")
  end
  if state == AIJobGoTo.START_ERROR_VEHICLE_DELETED then
    v1 = v1:getText("ai_startStateVehicleDeleted")
    return v1
  end
  if state == AIJobGoTo.START_ERROR_NO_PERMISSION then
    v1 = v1:getText("ai_startStateNoPermission")
    return v1
  end
  if state == AIJobGoTo.START_ERROR_VEHICLE_IN_USE then
    v1 = v1:getText("ai_startStateVehicleInUse")
    return v1
  end
  v1 = v1:getText("ai_startStateSuccess")
  return v1
end
