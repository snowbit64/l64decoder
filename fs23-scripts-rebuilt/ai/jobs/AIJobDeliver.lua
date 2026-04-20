-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobDeliver = {START_ERROR_LIMIT_REACHED = 1, START_ERROR_VEHICLE_DELETED = 2, START_ERROR_NO_PERMISSION = 3, START_ERROR_VEHICLE_IN_USE = 4}
local AIJobDeliver_mt = Class(AIJobDeliver, AIJob)
function AIJobDeliver.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.dischargeNodeInfos = {}
  local v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToLoadingTask = v3
  v3 = AITaskWaitForFilling.new(isServer, v2)
  v2.waitForFillingTask = v3
  v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToUnloadingTask = v3
  v3 = AITaskDischarge.new(isServer, v2)
  v2.dischargeTask = v3
  v2:addTask(v2.driveToLoadingTask)
  v2:addTask(v2.waitForFillingTask)
  v2:addTask(v2.driveToUnloadingTask)
  v2:addTask(v2.dischargeTask)
  v3 = AIParameterVehicle.new()
  v2.vehicleParameter = v3
  v3 = AIParameterUnloadingStation.new()
  v2.unloadingStationParameter = v3
  v3 = AIParameterLooping.new()
  v2.loopingParameter = v3
  v3 = AIParameterPositionAngle.new(0.08726646259971647)
  v2.positionAngleParameter = v3
  v2:addNamedParameter("vehicle", v2.vehicleParameter)
  v2:addNamedParameter("unloadingStation", v2.unloadingStationParameter)
  v2:addNamedParameter("looping", v2.loopingParameter)
  v2:addNamedParameter("positionAngle", v2.positionAngleParameter)
  local v4 = v4:getText("ai_parameterGroupTitleVehicle")
  v3 = AIParameterGroup.new(...)
  v3:addParameter(v2.vehicleParameter)
  local v5 = v5:getText("ai_parameterGroupTitleUnloadingStation")
  v4 = AIParameterGroup.new(...)
  v4:addParameter(v2.unloadingStationParameter)
  local v6 = v6:getText("ai_parameterGroupTitleLoadingPosition")
  v5 = AIParameterGroup.new(...)
  v5:addParameter(v2.positionAngleParameter)
  local v7 = v7:getText("ai_parameterGroupTitleLooping")
  v6 = AIParameterGroup.new(...)
  v6:addParameter(v2.loopingParameter)
  table.insert(v2.groupedParameters, v3)
  table.insert(v2.groupedParameters, v4)
  table.insert(v2.groupedParameters, v5)
  table.insert(v2.groupedParameters, v6)
  return v2
end
function AIJobDeliver:setValues()
  self:resetTasks()
  local v1 = v1:getVehicle()
  if v1 == nil then
    return
  end
  local v2 = v2:getUnloadingStation()
  if v2 == nil then
    return
  end
  v3:setVehicle(v1)
  v3:setVehicle(v1)
  v3:setVehicle(v1)
  v3:setVehicle(v1)
  self.dischargeNodeInfos = {}
  local v4 = v2:getAISupportedFillTypes()
  for v6, v7 in pairs(...) do
    v8:addAllowedFillType(v6)
  end
  if v1.getAIDischargeNodes ~= nil then
    v4 = v1:getAIDischargeNodes()
    for v6, v7 in ipairs(...) do
      local v8, v9, v10 = v1:getAIDischargeNodeZAlignedOffset(v7, v1)
      table.insert(self.dischargeNodeInfos, {vehicle = v1, dischargeNode = v7, offsetZ = v10, dirty = true})
    end
  end
  v3 = v1:getChildVehicles()
  for v7, v8 in ipairs(v3) do
    if not (v8.getAIDischargeNodes ~= nil) then
      continue
    end
    v10 = v8:getAIDischargeNodes()
    for v12, v13 in ipairs(...) do
      local v14, v15, v16 = v8:getAIDischargeNodeZAlignedOffset(v13, v1)
      table.insert(self.dischargeNodeInfos, {vehicle = v8, dischargeNode = v13, offsetZ = v16, dirty = true})
    end
  end
  table.sort(self.dischargeNodeInfos, function(self, v1)
    if v1.offsetZ >= self.offsetZ then
    end
    return true
  end)
  for v7, v8 in ipairs(self.dischargeNodeInfos) do
    v9:addFillUnits(v8.vehicle, v8.dischargeNode.fillUnitIndex)
  end
  v5:setTargetOffset(-self.dischargeNodeInfos[#self.dischargeNodeInfos].offsetZ)
  v5:setTargetOffset(-self.dischargeNodeInfos[#self.dischargeNodeInfos].offsetZ)
  v5, v6 = v5:getPosition()
  if v5 ~= nil then
    v7:setTargetPosition(v5, v6)
  end
  v7, v8 = v7:getDirection()
  if v7 ~= nil then
    v9:setTargetDirection(v7, v8)
  end
end
function AIJobDeliver:validate(farmId)
  self:setParamterValid(true)
  local v2, v3 = v2:validate()
  if v2 and #self.dischargeNodeInfos == 0 then
    local v4 = v4:getText("ai_validationErrorNoAIDischargeNodesFound")
  end
  if not v2 then
    v4:setIsValid(false)
  end
  local v4, v5 = v4:validate()
  if not v4 then
    v6:setIsValid(false)
  end
  local v6, v7 = v6:validate()
  if not v6 then
    local v8 = v8:getText("ai_validationErrorNoLoadingPoint")
    v8:setIsValid(false)
  end
  if v2 and v4 then
  end
  if not v3 and not v5 then
  end
  return v8, v9
end
function AIJobDeliver:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  local v6 = v6:superClass()
  v6.applyCurrentState(self, vehicle, mission, farmId, isDirectStart)
  v5:setVehicle(vehicle)
  v5:setIsLooping(true)
  if vehicle.getLastJob ~= nil then
    local lastJob = vehicle:getLastJob()
    if lastJob ~= nil then
      local v10 = lastJob:isa(AIJobDeliver)
      if v10 then
        local v12 = v12:getUnloadingStation()
        v10:setUnloadingStation(...)
        v12 = v12:getIsLooping()
        v10:setIsLooping(...)
        local v10, v11 = v10:getPosition()
        v10 = v10:getAngle()
      end
    end
  end
  if v5 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L89
  end
  lastJob, v10, v11 = getWorldTranslation(vehicle.rootNode)
  if v7 == nil then
    lastJob, v10, v11 = localDirectionToWorld(vehicle.rootNode, 0, 0, 1)
    v12 = MathUtil.getYRotationFromDirection(lastJob, v11)
  end
  lastJob:setPosition(v5, v6)
  lastJob:setAngle(v7)
  v11 = v11:getUnloadingStations()
  for v13, v14 in pairs(...) do
    local v15 = v15:canPlayerAccess(v14)
    if not v15 then
      continue
    end
    v15 = v14:isa(UnloadingStation)
    if not v15 then
      continue
    end
    v15 = v14:getAISupportedFillTypes()
    local v16 = next(v15)
    if not (v16 ~= nil) then
      continue
    end
    table.insert(lastJob, v14)
  end
  table.sort(lastJob, function(self, vehicle)
    local farmId = self:getName()
    local isDirectStart = vehicle:getName()
    if farmId >= isDirectStart then
    end
    return true
  end)
  v10:setValidUnloadingStations(lastJob)
end
function AIJobDeliver:start(farmId)
  local v3 = v3:superClass()
  v3.start(self, farmId)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:createAgent(self.helperIndex)
    v2:aiJobStarted(self, self.helperIndex, farmId)
  end
end
function AIJobDeliver:stop(aiMessage)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:deleteAgent()
    v2:aiJobFinished()
  end
  local v3 = v3:superClass()
  v3.stop(self, aiMessage)
  self.dischargeNodeInfos = {}
end
function AIJobDeliver:startTask(task)
  if task == self.waitForFillingTask then
    for v5, v6 in ipairs(self.dischargeNodeInfos) do
      v6.dirty = true
    end
  end
  v3 = v3:superClass()
  v3.startTask(self, task)
end
function AIJobDeliver:getStartTaskIndex()
  for v5, v6 in ipairs(self.dischargeNodeInfos) do
    local v9 = v6.vehicle:getFillUnitFillLevel(v6.dischargeNode.fillUnitIndex)
    if not (v9 == 0) then
      continue
    end
    break
  end
  v2 = v2:getVehicle()
  v3, v4, v5 = getWorldTranslation(v2.rootNode)
  local v6, v7 = v6:getPosition()
  v9 = math.abs(v3 - v6)
  if v9 < 1 then
    v9 = math.abs(v5 - v7)
    if v9 >= 1 then
    end
  end
  if v8 then
    if not v1 then
      v9:skip()
    end
    return self.waitForFillingTask.taskIndex
  end
  if not v1 then
    v9:skip()
    v9:skip()
  end
  return self.driveToLoadingTask.taskIndex
end
function AIJobDeliver:getNextTaskIndex(isSkipTask)
  if self.currentTaskIndex ~= self.waitForFillingTask.taskIndex then
    -- if v0.currentTaskIndex ~= v0.dischargeTask.taskIndex then goto L146 end
  end
  if self.currentTaskIndex == self.dischargeTask.taskIndex then
  end
  local v5 = v5:getUnloadingStation()
  for v9, v10 in ipairs(self.dischargeNodeInfos) do
    if not v10.dirty then
      continue
    end
    local v13 = v10.vehicle:getFillUnitFillLevel(v10.dischargeNode.fillUnitIndex)
    if not (1 < v13) then
      continue
    end
    v13 = v10.vehicle:getFillUnitFillType(v10.dischargeNode.fillUnitIndex)
    if v2 ~= nil then
      local v14 = v2:getIsFillTypeSupported(v13)
      if v14 then
        v14:setDischargeNode(v10.vehicle, v10.dischargeNode, v10.offsetZ)
        v10.dirty = false
        return self.currentTaskIndex
      end
    end
    if not (v3 == nil) then
      continue
    end
    local v14, v15, v16, v17, v18 = v5:getAITargetPositionAndDirection(v13)
    if v18 ~= nil then
    else
      v10.dirty = false
    end
  end
  if v3 ~= nil then
    v6, v7, v8, v9, v10 = v5:getAITargetPositionAndDirection(v3)
    v11:setTargetPosition(v6, v7)
    v11:setTargetDirection(v8, v9)
    v11:setUnloadTrigger(v10)
    v11:setDischargeNode(v4.vehicle, v4.dischargeNode, v4.offsetZ)
    v4.dirty = false
    return self.driveToUnloadingTask.taskIndex
  end
  local v3 = v3:superClass()
  return v3.getNextTaskIndex(self, isSkipTask)
end
function AIJobDeliver:canContinueWork()
  local v1 = v1:getVehicle()
  if v1 == nil then
    local v3 = AIMessageErrorVehicleDeleted.new()
    return false
  end
  local v2 = v2:getUnloadingStation()
  if v2 == nil then
    local v4 = AIMessageErrorUnloadingStationDeleted.new()
    return false
  end
  if self.currentTaskIndex == self.waitForFillingTask.taskIndex then
    for v7, v8 in ipairs(self.dischargeNodeInfos) do
      local v11 = v8.vehicle:getFillUnitFillLevel(v8.dischargeNode.fillUnitIndex)
      if not (1 < v11) then
        continue
      end
      v11 = v8.vehicle:getFillUnitFillType(v8.dischargeNode.fillUnitIndex)
      local v12 = v2:getFreeCapacity(v11, self.startedFarmId)
      if not (0 < v12) then
        continue
      end
      break
    end
    if not v3 then
      v5 = AIMessageErrorUnloadingStationFull.new()
      return false
    end
  end
  return true, nil
end
function AIJobDeliver:getHasLoadedValidFillType()
  local v1 = v1:getUnloadingStation()
  for v5, v6 in ipairs(self.dischargeNodeInfos) do
    local v9 = v6.vehicle:getFillUnitFillLevel(v6.dischargeNode.fillUnitIndex)
    if not (1 < v9) then
      continue
    end
    v9 = v6.vehicle:getFillUnitFillType(v6.dischargeNode.fillUnitIndex)
    local v10 = v1:getIsFillTypeAISupported(v9)
    if not v10 then
      continue
    end
    return true
  end
  return false
end
function AIJobDeliver:getCanSkipTask()
  if self.currentTaskIndex == self.waitForFillingTask.taskIndex and not self.waitForFillingTask.isFinished then
    local v1 = self:getHasLoadedValidFillType()
    if v1 then
      return true
    end
  end
  return false
end
function AIJobDeliver:skipCurrentTask()
  if self.currentTaskIndex == self.waitForFillingTask.taskIndex then
    v1:skip()
  end
end
function AIJobDeliver.getIsAvailableForVehicle(v0, v1)
  if v1.createAgent ~= nil and v1.setAITarget ~= nil then
    local v2 = v1:getCanStartAIVehicle()
    -- if v2 then goto L14 end
  end
  return false
  if v1.getAIDischargeNodes ~= nil then
    v2 = v1:getAIDischargeNodes()
    local v3 = next(v2)
    if v3 ~= nil then
      return true
    end
  end
  v2 = v1:getChildVehicles()
  for v6, v7 in ipairs(v2) do
    if not (v7.getAIDischargeNodes ~= nil) then
      continue
    end
    local v8 = v7:getAIDischargeNodes()
    local v9 = next(v8)
    if not (v9 ~= nil) then
      continue
    end
    return true
  end
end
function AIJobDeliver:getTitle()
  local v1 = v1:getVehicle()
  if v1 ~= nil then
    return v1:getName()
  end
  return ""
end
function AIJobDeliver:getIsLooping()
  return v1:getIsLooping()
end
function AIJobDeliver:getIsStartable(connection)
  local v2 = v2:getAILimitedReached()
  if v2 then
    return false, AIJobDeliver.START_ERROR_LIMIT_REACHED
  end
  v2 = v2:getVehicle()
  if v2 == nil then
    return false, AIJobDeliver.START_ERROR_VEHICLE_DELETED
  end
  local v7 = v2:getOwnerFarmId()
  local v3 = v3:getHasPlayerPermission(...)
  if not v3 then
    return false, AIJobDeliver.START_ERROR_NO_PERMISSION
  end
  v3 = v2:getIsInUse(connection)
  if v3 then
    return false, AIJobDeliver.START_ERROR_VEHICLE_IN_USE
  end
  return true, AIJob.START_SUCCESS
end
function AIJobDeliver:getDescription()
  local v2 = v2:superClass()
  local v1 = v2.getDescription(self)
  v2 = self:getTaskByIndex(self.currentTaskIndex)
  if v2 == self.driveToLoadingTask then
    local v5 = v5:getText("ai_taskDescriptionDriveToLoadingStation")
    return v1 .. " - " .. v5
  end
  if v2 == self.waitForFillingTask then
    v5 = v5:getText("ai_taskDescriptionWaitForFilling")
    return v1 .. " - " .. v5
  end
  if v2 == self.driveToUnloadingTask then
    v5 = v5:getText("ai_taskDescriptionDriveToUnloadingStation")
    return v1 .. " - " .. v5
  end
  if v2 == self.dischargeTask then
    v5 = v5:getText("ai_taskDescriptionUnloading")
  end
  return v1
end
function AIJobDeliver.getIsStartErrorText(state)
  if state == AIJobDeliver.START_ERROR_LIMIT_REACHED then
    return v1:getText("ai_startStateLimitReached")
  end
  if state == AIJobDeliver.START_ERROR_VEHICLE_DELETED then
    v1 = v1:getText("ai_startStateVehicleDeleted")
    return v1
  end
  if state == AIJobDeliver.START_ERROR_NO_PERMISSION then
    v1 = v1:getText("ai_startStateNoPermission")
    return v1
  end
  if state == AIJobDeliver.START_ERROR_VEHICLE_IN_USE then
    v1 = v1:getText("ai_startStateVehicleInUse")
    return v1
  end
  v1 = v1:getText("ai_startStateSuccess")
  return v1
end
