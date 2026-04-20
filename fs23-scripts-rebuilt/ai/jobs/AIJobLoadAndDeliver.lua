-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJobLoadAndDeliver = {START_ERROR_LIMIT_REACHED = 1, START_ERROR_VEHICLE_DELETED = 2, START_ERROR_NO_PERMISSION = 3, START_ERROR_VEHICLE_IN_USE = 4}
local AIJobLoadAndDeliver_mt = Class(AIJobLoadAndDeliver, AIJob)
function AIJobLoadAndDeliver.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.dischargeNodeInfos = {}
  v2.loadingNodeInfos = {}
  local v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToLoadingTask = v3
  v3 = AITaskLoading.new(isServer, v2)
  v2.loadingTask = v3
  v3 = AITaskDriveTo.new(isServer, v2)
  v2.driveToUnloadingTask = v3
  v3 = AITaskDischarge.new(isServer, v2)
  v2.dischargeTask = v3
  v2:addTask(v2.driveToLoadingTask)
  v2:addTask(v2.loadingTask)
  v2:addTask(v2.driveToUnloadingTask)
  v2:addTask(v2.dischargeTask)
  v3 = AIParameterVehicle.new()
  v2.vehicleParameter = v3
  v3 = AIParameterUnloadingStation.new()
  v2.unloadingStationParameter = v3
  v3 = AIParameterLoadingStation.new()
  v2.loadingStationParameter = v3
  v3 = AIParameterFillType.new()
  v2.fillTypeParameter = v3
  v3 = AIParameterLooping.new()
  v2.loopingParameter = v3
  v2:addNamedParameter("vehicle", v2.vehicleParameter)
  v2:addNamedParameter("loadingStation", v2.loadingStationParameter)
  v2:addNamedParameter("fillType", v2.fillTypeParameter)
  v2:addNamedParameter("unloadingStation", v2.unloadingStationParameter)
  v2:addNamedParameter("looping", v2.loopingParameter)
  local v4 = v4:getText("ai_parameterGroupTitleVehicle")
  v3 = AIParameterGroup.new(...)
  v3:addParameter(v2.vehicleParameter)
  local v5 = v5:getText("ai_parameterGroupTitleLoadingStation")
  v4 = AIParameterGroup.new(...)
  v4:addParameter(v2.loadingStationParameter)
  v4:addParameter(v2.fillTypeParameter)
  local v6 = v6:getText("ai_parameterGroupTitleUnloadingStation")
  v5 = AIParameterGroup.new(...)
  v5:addParameter(v2.unloadingStationParameter)
  local v7 = v7:getText("ai_parameterGroupTitleLooping")
  v6 = AIParameterGroup.new(...)
  v6:addParameter(v2.loopingParameter)
  table.insert(v2.groupedParameters, v3)
  table.insert(v2.groupedParameters, v4)
  table.insert(v2.groupedParameters, v5)
  table.insert(v2.groupedParameters, v6)
  return v2
end
function AIJobLoadAndDeliver:setValues()
  self:resetTasks()
  local v1 = v1:getVehicle()
  if v1 == nil then
    return
  end
  local v2 = v2:getLoadingStation()
  if v2 == nil then
    return
  end
  local v3 = v3:getUnloadingStation()
  if v3 == nil then
    return
  end
  local v4 = v4:getFillTypeIndex()
  v5:setVehicle(v1)
  v5:setVehicle(v1)
  v5:setVehicle(v1)
  v5:setVehicle(v1)
  self.loadingNodeInfos = {}
  self.dischargeNodeInfos = {}
  if v1.getAIFillUnits ~= nil then
    local v6 = v1:getAIFillUnits()
    for v8, v9 in ipairs(...) do
      local v11, v12, v13 = v1:getAILoadingNodeZAlignedOffset(v9.fillUnitIndex, v1)
      table.insert(self.loadingNodeInfos, {vehicle = v1, fillUnitIndex = v9.fillUnitIndex, offsetZ = v13, isDirty = true})
    end
  end
  if v1.getAIDischargeNodes ~= nil then
    v6 = v1:getAIDischargeNodes()
    for v8, v9 in ipairs(...) do
      local v10, v11, v12 = v1:getAIDischargeNodeZAlignedOffset(v9, v1)
      table.insert(self.dischargeNodeInfos, {vehicle = v1, dischargeNode = v9, offsetZ = v12, isDirty = true})
    end
  end
  v5 = v1:getChildVehicles()
  for v9, v10 in ipairs(v5) do
    if v10.getAIDischargeNodes ~= nil then
      v12 = v10:getAIDischargeNodes()
      for v14, v15 in ipairs(...) do
        local v16, v17, v18 = v10:getAIDischargeNodeZAlignedOffset(v15, v1)
        table.insert(self.dischargeNodeInfos, {vehicle = v10, dischargeNode = v15, offsetZ = v18, isDirty = true})
      end
    end
    if not (v10.getAIFillUnits ~= nil) then
      continue
    end
    v12 = v10:getAIFillUnits()
    for v14, v15 in ipairs(...) do
      local v17, v18, v19 = v10:getAILoadingNodeZAlignedOffset(v15.fillUnitIndex, v1)
      table.insert(self.loadingNodeInfos, {vehicle = v10, fillUnitIndex = v15.fillUnitIndex, offsetZ = v19, isDirty = true})
    end
  end
  table.sort(self.dischargeNodeInfos, function(self, v1)
    if v1.offsetZ >= self.offsetZ then
    end
    return true
  end)
  table.sort(self.loadingNodeInfos, function(self, v1)
    if v1.offsetZ >= self.offsetZ then
    end
    return true
  end)
  if 0 < #self.dischargeNodeInfos then
  end
  v7:setTargetOffset(-v6)
  if 0 < #self.loadingNodeInfos then
  end
  v8:setTargetOffset(-v7)
  if v4 ~= nil then
    if v2 ~= nil then
      v8, v9, v10, v11, v12 = v2:getAITargetPositionAndDirection(v4)
      if v12 ~= nil then
        v13:setTargetPosition(v8, v9)
        v13:setTargetDirection(v10, v11)
        v13:setLoadTrigger(v12)
      end
    end
    if v3 ~= nil then
      v8, v9, v10, v11, v12 = v3:getAITargetPositionAndDirection(v4)
      if v12 ~= nil then
        v13:setTargetPosition(v8, v9)
        v13:setTargetDirection(v10, v11)
        v13:setUnloadTrigger(v12)
      end
    end
    v8:setFillType(v4)
  end
end
function AIJobLoadAndDeliver:validate(farmId)
  self:setParamterValid(true)
  local v2, v3 = v2:validate()
  if v2 then
    if #self.dischargeNodeInfos == 0 then
      local fillTypes = fillTypes:getText("ai_validationErrorNoAIDischargeNodesFound")
    elseif #self.loadingNodeInfos == 0 then
      fillTypes = fillTypes:getText("ai_validationErrorNoAILoadingNodesFound")
    end
  end
  if not v2 then
    fillTypes:setIsValid(false)
  end
  local fillTypes, v5 = fillTypes:validate()
  if not fillTypes then
    v6:setIsValid(false)
  end
  local v6 = v6:getFillTypeIndex()
  local v7, v8 = v7:validate(v6, farmId)
  if not v7 then
    v9:setIsValid(false)
  end
  local v9, v10 = v9:validate(v6, farmId)
  if not v9 then
    v11:setIsValid(false)
  end
  if v2 and fillTypes and v7 then
  end
  if not v3 and not v5 and not v8 then
  end
  return v11, v12
end
function AIJobLoadAndDeliver:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  local v6 = v6:superClass()
  v6.applyCurrentState(self, vehicle, mission, farmId, isDirectStart)
  lastJob:setVehicle(vehicle)
  lastJob:setIsLooping(true)
  if vehicle.getLastJob ~= nil then
    local lastJob = vehicle:getLastJob()
    if lastJob ~= nil then
      v6 = lastJob:isa(AIJobLoadAndDeliver)
      if v6 then
        local v8 = v8:getUnloadingStation()
        v6:setUnloadingStation(...)
        v8 = v8:getLoadingStation()
        v6:setLoadingStation(...)
        v8 = v8:getIsLooping()
        v6:setIsLooping(...)
      end
    end
  end
  local v7 = v7:getUnloadingStations()
  for v9, v10 in pairs(...) do
    local v11 = v11:canPlayerAccess(v10)
    if not v11 then
      continue
    end
    v11 = v10:isa(UnloadingStation)
    if not v11 then
      continue
    end
    v11 = v10:getAISupportedFillTypes()
    local v12 = next(v11)
    if not (v12 ~= nil) then
      continue
    end
    table.insert(lastJob, v10)
  end
  table.sort(lastJob, function(self, vehicle)
    local farmId = self:getName()
    local isDirectStart = vehicle:getName()
    if farmId >= isDirectStart then
    end
    return true
  end)
  v6:setValidUnloadingStations(lastJob)
  v8 = v8:getLoadingStations()
  for v10, v11 in pairs(...) do
    v12 = v12:canPlayerAccess(v11)
    if not v12 then
      continue
    end
    v12 = v11:getAISupportedFillTypes()
    local v13 = next(v12)
    if not (v13 ~= nil) then
      continue
    end
    table.insert(v6, v11)
  end
  table.sort(v6, function(self, vehicle)
    local farmId = self:getName()
    local isDirectStart = vehicle:getName()
    if farmId >= isDirectStart then
    end
    return true
  end)
  v7:setValidLoadingStations(v6)
  v7 = v7:getLoadingStation()
  self:updateFillTypes(v7)
end
function AIJobLoadAndDeliver:updateFillTypes(loadingStation)
  if loadingStation ~= nil then
    local fillTypes = loadingStation:getAISupportedFillTypes()
    for v6, v7 in pairs(...) do
      local v8 = loadingStation:getFillLevel(v6, g_currentMission.player.farmId)
      v2[v6] = v8
    end
  end
  v3:setValidFillTypes(v2)
end
function AIJobLoadAndDeliver:onParameterValueChanged(parameter)
  if parameter == self.loadingStationParameter then
    local v2 = v2:getLoadingStation()
    self:updateFillTypes(v2)
  end
end
function AIJobLoadAndDeliver:start(farmId)
  local v3 = v3:superClass()
  v3.start(self, farmId)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:createAgent(self.helperIndex)
    v2:aiJobStarted(self, self.helperIndex, farmId)
  end
end
function AIJobLoadAndDeliver:stop(aiMessage)
  if self.isServer then
    local v2 = v2:getVehicle()
    v2:deleteAgent()
    v2:aiJobFinished()
  end
  local v3 = v3:superClass()
  v3.stop(self, aiMessage)
  self.loadingNodeInfos = {}
  self.dischargeNodeInfos = {}
end
function AIJobLoadAndDeliver:startTask(task)
  if task == self.driveToLoadingTask then
    for v5, v6 in ipairs(self.dischargeNodeInfos) do
      v6.isDirty = true
    end
  elseif task == self.driveToUnloadingTask then
    for v5, v6 in ipairs(self.loadingNodeInfos) do
      v6.isDirty = true
    end
  end
  v3 = v3:superClass()
  v3.startTask(self, task)
end
function AIJobLoadAndDeliver:getStartTaskIndex()
  for v5, v6 in ipairs(self.loadingNodeInfos) do
    local v9 = v6.vehicle:getFillUnitFillLevel(v6.fillUnitIndex)
    if not (v9 == 0) then
      continue
    end
    break
  end
  if not task then
    return self.driveToUnloadingTask.taskIndex
  end
  return self.driveToLoadingTask.taskIndex
end
function AIJobLoadAndDeliver:canStartWork()
  local v3 = v3:getFillTypeIndex()
  for v7, v8 in ipairs(self.loadingNodeInfos) do
    local v11 = v8.vehicle:getFillUnitFillType(v8.fillUnitIndex)
    local v12 = v8.vehicle:getFillUnitFillLevel(v8.fillUnitIndex)
    if v12 == 0 then
      break
    elseif not (v11 == v3) then
      continue
    end
  end
  if not task and not v2 then
    v5 = AIMessageErrorNoValidFillTypeLoaded.new()
    return false
  end
  return true, nil
end
function AIJobLoadAndDeliver:canContinueWork()
  local task = task:getVehicle()
  if task == nil then
    local v3 = AIMessageErrorVehicleDeleted.new()
    return false
  end
  local v2 = v2:getLoadingStation()
  if v2 == nil then
    local fillTypes = AIMessageErrorLoadingStationDeleted.new()
    return false
  end
  v3 = v3:getUnloadingStation()
  if v3 == nil then
    local v5 = AIMessageErrorUnloadingStationDeleted.new()
    return false
  end
  fillTypes = fillTypes:getFillTypeIndex()
  v5 = v3:getFreeCapacity(fillTypes, self.startedFarmId)
  if v5 <= 0 then
    local v6 = AIMessageErrorUnloadingStationFull.new()
    return false
  end
  if self.currentTaskIndex == self.loadingTask.taskIndex then
    v5 = v2:getFillLevel(fillTypes, self.startedFarmId)
    if v5 <= 0 then
      for v9, v10 in ipairs(self.loadingNodeInfos) do
        local v13 = v10.vehicle:getFillUnitFillLevel(v10.fillUnitIndex)
        if not (0 < v13) then
          continue
        end
        v13 = v10.vehicle:getFillUnitFillType(v10.fillUnitIndex)
        if not (v13 == fillTypes) then
          continue
        end
        break
      end
      if v5 then
        v7 = AIMessageSuccessSiloEmpty.new()
        return false
      end
    end
  end
  return true, nil
end
function AIJobLoadAndDeliver:getNextTaskIndex(isSkipTask)
  if self.currentTaskIndex ~= self.driveToLoadingTask.taskIndex then
    -- if v0.currentTaskIndex ~= v0.loadingTask.taskIndex then goto L58 end
  end
  for v5, v6 in ipairs(self.loadingNodeInfos) do
    if not v6.isDirty then
      continue
    end
    local v9 = v6.vehicle:getFillUnitFillLevel(v6.fillUnitIndex)
    if v9 == 0 then
      v9:setFillUnit(v6.vehicle, v6.fillUnitIndex, v6.offsetZ)
      v6.isDirty = false
      return self.loadingTask.taskIndex
    end
    v6.isDirty = false
  end
  -- goto L130  (LOP_JUMP +72)
  if self.currentTaskIndex ~= self.driveToUnloadingTask.taskIndex then
    -- if v0.currentTaskIndex ~= v0.dischargeTask.taskIndex then goto L130 end
  end
  v2 = v2:getFillTypeIndex()
  for v6, v7 in ipairs(self.dischargeNodeInfos) do
    if not v7.isDirty then
      continue
    end
    local v10 = v7.vehicle:getFillUnitFillLevel(v7.dischargeNode.fillUnitIndex)
    if 1 < v10 then
      v10 = v7.vehicle:getFillUnitFillType(v7.dischargeNode.fillUnitIndex)
      if v10 == v2 then
        v10:setDischargeNode(v7.vehicle, v7.dischargeNode, v7.offsetZ)
        v7.isDirty = false
        return self.dischargeTask.taskIndex
      end
    end
    v7.isDirty = false
  end
  v3 = v3:superClass()
  v2 = v3.getNextTaskIndex(self, isSkipTask)
  return v2
end
function AIJobLoadAndDeliver.getIsAvailableForVehicle(v0, task)
  if task.createAgent ~= nil and task.setAITarget ~= nil then
    local v2 = task:getCanStartAIVehicle()
    -- if v2 then goto L14 end
  end
  return false
  v2 = task:getChildVehicles()
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
  if task.getAIDischargeNodes ~= nil then
    fillTypes = task:getAIDischargeNodes()
    v5 = next(fillTypes)
    if v5 ~= nil then
    end
  end
  if not v3 then
    fillTypes = task:getChildVehicles()
    for v7, v8 in ipairs(fillTypes) do
      if not (v8.getAIDischargeNodes ~= nil) then
        continue
      end
      v9 = v8:getAIDischargeNodes()
      local v10 = next(v9)
      if not (v10 ~= nil) then
        continue
      end
      break
    end
  end
  if not v3 then
    return false
  end
  if task.getAIFillUnits ~= nil then
    v5 = task:getAIFillUnits()
    v6 = next(v5)
    if v6 ~= nil then
    end
  end
  if not fillTypes then
    v5 = task:getChildVehicles()
    for v8, v9 in ipairs(v5) do
      if not (v9.getAIFillUnits ~= nil) then
        continue
      end
      v10 = v9:getAIFillUnits()
      local v11 = next(v10)
      if not (v11 ~= nil) then
        continue
      end
      break
    end
  end
  if not fillTypes then
    return false
  end
  return true
end
function AIJobLoadAndDeliver:getTitle()
  local task = task:getVehicle()
  if task ~= nil then
    return task:getName()
  end
  return ""
end
function AIJobLoadAndDeliver:getDescription()
  local v2 = v2:superClass()
  local task = v2.getDescription(self)
  v2 = self:getTaskByIndex(self.currentTaskIndex)
  if v2 == self.driveToLoadingTask then
    local v5 = v5:getText("ai_taskDescriptionDriveToLoadingStation")
    return task .. " - " .. v5
  end
  if v2 == self.loadingTask then
    v5 = v5:getText("ai_taskDescriptionLoading")
    return task .. " - " .. v5
  end
  if v2 == self.driveToUnloadingTask then
    v5 = v5:getText("ai_taskDescriptionDriveToUnloadingStation")
    return task .. " - " .. v5
  end
  if v2 == self.dischargeTask then
    v5 = v5:getText("ai_taskDescriptionUnloading")
  end
  return task
end
function AIJobLoadAndDeliver:getIsLooping()
  return task:getIsLooping()
end
function AIJobLoadAndDeliver:getIsStartable(connection)
  local v2 = v2:getAILimitedReached()
  if v2 then
    return false, AIJobLoadAndDeliver.START_ERROR_LIMIT_REACHED
  end
  v2 = v2:getVehicle()
  if v2 == nil then
    return false, AIJobLoadAndDeliver.START_ERROR_VEHICLE_DELETED
  end
  local v7 = v2:getOwnerFarmId()
  local v3 = v3:getHasPlayerPermission(...)
  if not v3 then
    return false, AIJobLoadAndDeliver.START_ERROR_NO_PERMISSION
  end
  v3 = v2:getIsInUse(connection)
  if v3 then
    return false, AIJobLoadAndDeliver.START_ERROR_VEHICLE_IN_USE
  end
  return true, AIJob.START_SUCCESS
end
function AIJobLoadAndDeliver.getIsStartErrorText(state)
  if state == AIJobLoadAndDeliver.START_ERROR_LIMIT_REACHED then
    return task:getText("ai_startStateLimitReached")
  end
  if state == AIJobLoadAndDeliver.START_ERROR_VEHICLE_DELETED then
    task = task:getText("ai_startStateVehicleDeleted")
    return task
  end
  if state == AIJobLoadAndDeliver.START_ERROR_NO_PERMISSION then
    task = task:getText("ai_startStateNoPermission")
    return task
  end
  if state == AIJobLoadAndDeliver.START_ERROR_VEHICLE_IN_USE then
    task = task:getText("ai_startStateVehicleInUse")
    return task
  end
  task = task:getText("ai_startStateSuccess")
  return task
end
