-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobFieldWork = {START_ERROR_LIMIT_REACHED = 1, START_ERROR_VEHICLE_DELETED = 2, START_ERROR_NO_PERMISSION = 3, START_ERROR_VEHICLE_IN_USE = 4}
local AIJobFieldWork_mt = Class(AIJobFieldWork, AIJob)
function AIJobFieldWork.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  local v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToTask = v3
  v3 = AITaskFieldWork.new(isServer, v2)
  v2.fieldWorkTask = v3
  v2:addTask(v2.driveToTask)
  v2:addTask(v2.fieldWorkTask)
  v2.isDirectStart = false
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
function AIJobFieldWork:getStartTaskIndex()
  if self.isDirectStart then
    return 2
  end
  local v1 = v1:getVehicle()
  local v2, v3, v4 = getWorldTranslation(v1.rootNode)
  local v5, v6 = v5:getPosition()
  local v8 = MathUtil.vector2Length(v2 - v5, v4 - v6)
  if v8 >= 3 then
  end
  if true then
    return 2
  end
  return 1
end
function AIJobFieldWork:start(farmId)
  local v3 = v3:superClass()
  v3.start(self, farmId)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:createAgent(self.helperIndex)
    v2:aiJobStarted(self, self.helperIndex, farmId)
  end
end
function AIJobFieldWork:stop(aiMessage)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:deleteAgent()
    v2:aiJobFinished()
  end
  local v3 = v3:superClass()
  v3.stop(self, aiMessage)
end
function AIJobFieldWork:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  local v6 = v6:superClass()
  v6.applyCurrentState(self, vehicle, mission, farmId, isDirectStart)
  v5:setVehicle(vehicle)
  if vehicle.getLastJob ~= nil then
    local lastJob = vehicle:getLastJob()
    if not isDirectStart and lastJob ~= nil then
      local v10 = lastJob:isa(AIJobFieldWork)
      if v10 then
        local v10, v11 = v10:getPosition()
        v10 = v10:getAngle()
      end
    end
  end
  lastJob = vehicle:getDirectionSnapAngle()
  local v14 = v14:getGroundAngleMaxValue()
  local v12 = math.max(v14 + 1, 4)
  v11 = math.max(lastJob, math.pi / v12)
  v11:setSnappingAngle(v11)
  if v5 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L96
  end
  local v11, v12, v13 = getWorldTranslation(vehicle.rootNode)
  if v7 == nil then
    v11, v12, v13 = localDirectionToWorld(vehicle.rootNode, 0, 0, 1)
    v14 = MathUtil.getYRotationFromDirection(v11, v13)
  end
  v11:setPosition(v5, v6)
  v11:setAngle(v7)
end
function AIJobFieldWork.getIsAvailableForVehicle(v0, v1)
  if v1.getCanStartFieldWork then
    local v2 = v1:getCanStartFieldWork()
  end
  return v2
end
function AIJobFieldWork:getShowTarget()
  if self.currentTaskIndex ~= 1 then
  end
  return true
end
function AIJobFieldWork:getTarget()
  if self.driveToTask.dirX ~= nil then
    local v2 = MathUtil.getYRotationFromDirection(self.driveToTask.dirX, self.driveToTask.dirZ)
  end
  return self.driveToTask.x, self.driveToTask.z, v1
end
function AIJobFieldWork:getTitle()
  local v1 = v1:getVehicle()
  if v1 ~= nil then
    return v1:getName()
  end
  return ""
end
function AIJobFieldWork:setValues()
  self:resetTasks()
  local v1 = v1:getVehicle()
  v2:setVehicle(v1)
  v2:setVehicle(v1)
  local v2 = v2:getAngle()
  local v3, v4 = v3:getPosition()
  local v5, v6 = MathUtil.getDirectionFromYRotation(v2)
  v7:setTargetDirection(v5, v6)
  v7:setTargetPosition(v3, v4)
end
function AIJobFieldWork:validate(farmId)
  self:setParamterValid(true)
  local v2, v3 = v2:validate()
  if not v2 then
    v4:setIsValid(false)
  end
  return v2, v3
end
function AIJobFieldWork:getDescription()
  local v2 = v2:superClass()
  local v1 = v2.getDescription(self)
  v2 = self:getTaskByIndex(self.currentTaskIndex)
  if v2 == self.driveToTask then
    local v5 = v5:getText("ai_taskDescriptionDriveToField")
    return v1 .. " - " .. v5
  end
  if v2 == self.fieldWorkTask then
    v5 = v5:getText("ai_taskDescriptionFieldWork")
  end
  return v1
end
function AIJobFieldWork:getIsStartable(connection)
  local v2 = v2:getAILimitedReached()
  if v2 then
    return false, AIJobFieldWork.START_ERROR_LIMIT_REACHED
  end
  v2 = v2:getVehicle()
  if v2 == nil then
    return false, AIJobFieldWork.START_ERROR_VEHICLE_DELETED
  end
  local v7 = v2:getOwnerFarmId()
  local v3 = v3:getHasPlayerPermission(...)
  if not v3 then
    return false, AIJobFieldWork.START_ERROR_NO_PERMISSION
  end
  v3 = v2:getIsInUse(connection)
  if v3 then
    return false, AIJobFieldWork.START_ERROR_VEHICLE_IN_USE
  end
  return true, AIJob.START_SUCCESS
end
function AIJobFieldWork.getIsStartErrorText(state)
  if state == AIJobFieldWork.START_ERROR_LIMIT_REACHED then
    return v1:getText("ai_startStateLimitReached")
  end
  if state == AIJobFieldWork.START_ERROR_VEHICLE_DELETED then
    v1 = v1:getText("ai_startStateVehicleDeleted")
    return v1
  end
  if state == AIJobFieldWork.START_ERROR_NO_PERMISSION then
    v1 = v1:getText("ai_startStateNoPermission")
    return v1
  end
  if state == AIJobFieldWork.START_ERROR_VEHICLE_IN_USE then
    v1 = v1:getText("ai_startStateVehicleInUse")
    return v1
  end
  v1 = v1:getText("ai_startStateSuccess")
  return v1
end
function AIJobFieldWork.getPricePerMs(v0)
  return 0.0005
end
