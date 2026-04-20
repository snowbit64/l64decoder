-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/AIConveyorBeltSetAngleEvent.lua")
AIConveyorBelt = {}
function AIConveyorBelt.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AIFieldWorker, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Motorized, v0)
  end
  return v1
end
function AIConveyorBelt.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AIConveyorBelt")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.conveyorBelt#minAngle", "Min angle", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.conveyorBelt#maxAngle", "Max angle", 45)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.conveyorBelt#stepSize", "Step size", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.ai.conveyorBelt#speed", "Speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.ai.conveyorBelt#direction", "Direction", -1)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).aiConveyorBelt#currentAngle", "Current angle", 45)
end
function AIConveyorBelt.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setAIConveyorBeltAngle", AIConveyorBelt.setAIConveyorBeltAngle)
  SpecializationUtil.registerFunction(vehicleType, "getDirectionAndSpeedToTargetAngle", AIConveyorBelt.getDirectionAndSpeedToTargetAngle)
end
function AIConveyorBelt.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getStartableAIJob", AIConveyorBelt.getStartableAIJob)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getHasStartableAIJob", AIConveyorBelt.getHasStartableAIJob)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartFieldWork", AIConveyorBelt.getCanStartFieldWork)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartAIVehicle", AIConveyorBelt.getCanStartAIVehicle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", AIConveyorBelt.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAINeedsTrafficCollisionBox", AIConveyorBelt.getAINeedsTrafficCollisionBox)
end
function AIConveyorBelt.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onAIFieldWorkerStart", AIConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", AIConveyorBelt)
end
function AIConveyorBelt:onLoad(savegame)
  local v3 = v3:hasProperty("vehicle.ai.conveyorBelt")
  self.spec_aiConveyorBelt.isAllowed = v3
  v3 = v3:getValue("vehicle.ai.conveyorBelt#minAngle", 5)
  self.spec_aiConveyorBelt.minAngle = v3
  v3 = v3:getValue("vehicle.ai.conveyorBelt#maxAngle", 45)
  self.spec_aiConveyorBelt.maxAngle = v3
  v3 = v3:getValue("vehicle.ai.conveyorBelt#stepSize", 5)
  self.spec_aiConveyorBelt.stepSize = v3
  self.spec_aiConveyorBelt.currentAngle = self.spec_aiConveyorBelt.maxAngle
  self.spec_aiConveyorBelt.minTargetWorldYRot = 0
  self.spec_aiConveyorBelt.maxTargetWorldYRot = 0
  self.spec_aiConveyorBelt.currentDirection = 0
  self.spec_aiConveyorBelt.currentSpeed = 0
  v3 = v3:createJob(AIJobType.CONVEYOR)
  self.spec_aiConveyorBelt.conveyorJob = v3
  v3 = v3:getValue("vehicle.ai.conveyorBelt#speed", 1)
  self.spec_aiConveyorBelt.speed = v3
  v3 = v3:getValue("vehicle.ai.conveyorBelt#direction", -1)
  self.spec_aiConveyorBelt.direction = v3
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdate", AIConveyorBelt)
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", AIConveyorBelt)
  end
end
function AIConveyorBelt:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v3 = v3:getValue(savegame.key .. ".aiConveyorBelt#currentAngle", self.spec_aiConveyorBelt.currentAngle)
    self.spec_aiConveyorBelt.currentAngle = v3
  end
end
function AIConveyorBelt:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#currentAngle", self.spec_aiConveyorBelt.currentAngle)
end
function AIConveyorBelt:onReadStream(streamId, connection)
  local v5 = streamReadInt8(streamId)
  self:setAIConveyorBeltAngle(v5, true)
end
function AIConveyorBelt:onWriteStream(streamId, connection)
  streamWriteInt8(streamId, self.spec_aiConveyorBelt.currentAngle)
end
function AIConveyorBelt:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsAIActive()
  if v5 then
    local v6, v7 = self:getDirectionAndSpeedToTargetAngle(self.spec_aiConveyorBelt.currentDirection, self.spec_aiConveyorBelt.minTargetWorldYRot, self.spec_aiConveyorBelt.maxTargetWorldYRot)
    self.spec_aiConveyorBelt.currentDirection = v6
    self.spec_aiConveyorBelt.currentSpeed = v7
    v6 = self:getMotor()
    local v8 = math.abs(self.spec_aiConveyorBelt.currentSpeed * self.spec_aiConveyorBelt.speed)
    v6:setSpeedLimit(...)
    WheelsUtil.updateWheelsPhysics(self, dt, self.spec_aiConveyorBelt.currentSpeed * self.spec_aiConveyorBelt.speed * self.spec_aiConveyorBelt.direction, self.spec_aiConveyorBelt.currentDirection * self.spec_aiConveyorBelt.direction, false, true)
  end
end
function AIConveyorBelt:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_aiConveyorBelt.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
    v7:setActionEventActive(self.spec_aiConveyorBelt.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, isActiveForInputIgnoreSelection)
    if isActiveForInputIgnoreSelection then
      local v11 = v11:getText("action_conveyorBeltChangeAngle")
      local v12 = string.format("%.0f", self.spec_aiConveyorBelt.currentAngle)
      local v10 = string.format(...)
      v7:setActionEventText(...)
    end
  end
end
function AIConveyorBelt:setAIConveyorBeltAngle(angle, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L35
  end
  if g_server ~= nil then
    local v5 = AIConveyorBeltSetAngleEvent.new(self, angle)
    v3:broadcastEvent(v5, nil, nil, self)
  else
    local v3 = v3:getServerConnection()
    v5 = AIConveyorBeltSetAngleEvent.new(self, angle)
    v3:sendEvent(...)
  end
  self.spec_aiConveyorBelt.currentAngle = angle
end
function AIConveyorBelt:getDirectionAndSpeedToTargetAngle(direction, minAngle, maxAngle)
  local v4, v5, v6 = localDirectionToWorld(self.components[1].node, 0, 0, 1)
  local v7 = MathUtil.getYRotationFromDirection(v4, v6)
  if 0 < direction then
    if maxAngle < v7 then
      return -1, 0
    end
  elseif direction < 0 then
    if v7 < minAngle then
      return 1, 0
    end
  else
  end
  local v12 = math.deg(v8)
  local v10 = MathUtil.clamp(v12 / 2.5, 0.1, 1)
  return direction, v10 * direction
end
function AIConveyorBelt:getCanStartAIVehicle(superFunc)
  local minAngle = superFunc(self)
  if not minAngle then
    return false
  end
  return self.spec_aiConveyorBelt.isAllowed
end
function AIConveyorBelt:getCanStartFieldWork()
  return self:getCanStartAIVehicle()
end
function AIConveyorBelt:getStartableAIJob(superFunc)
  local minAngle = self:getCanStartFieldWork()
  if minAngle then
    self.spec_aiConveyorBelt.conveyorJob:applyCurrentState(self, g_currentMission, g_currentMission.player.farmId, false)
    self.spec_aiConveyorBelt.conveyorJob:setValues()
    local v4 = self.spec_aiConveyorBelt.conveyorJob:validate(false)
    if v4 then
      return self.spec_aiConveyorBelt.conveyorJob
    end
  end
  return nil
end
function AIConveyorBelt.getHasStartableAIJob(v0, direction)
  return true
end
function AIConveyorBelt.getCanBeSelected(v0, direction)
  return true
end
function AIConveyorBelt.getAINeedsTrafficCollisionBox(v0, direction)
  return false
end
function AIConveyorBelt:onAIFieldWorkerStart()
  local minAngle, maxAngle, v4 = localDirectionToWorld(self.components[1].node, 0, 0, 1)
  local v5 = MathUtil.getYRotationFromDirection(minAngle, v4)
  local v8 = math.rad(self.spec_aiConveyorBelt.currentAngle)
  self.spec_aiConveyorBelt.minTargetWorldYRot = v5 - v8 / 2
  v8 = math.rad(self.spec_aiConveyorBelt.currentAngle)
  self.spec_aiConveyorBelt.maxTargetWorldYRot = v5 + v8 / 2
  self.spec_aiConveyorBelt.currentDirection = 1
end
function AIConveyorBelt:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_aiConveyorBelt.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_aiConveyorBelt.isAllowed then
      local v4, v5 = self:addActionEvent(self.spec_aiConveyorBelt.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, AIConveyorBelt.actionEventChangeAngle, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
    end
  end
end
function AIConveyorBelt:actionEventChangeAngle(actionName, inputValue, callbackState, isAnalog)
  if self.spec_aiConveyorBelt.maxAngle < self.spec_aiConveyorBelt.currentAngle + self.spec_aiConveyorBelt.stepSize then
  end
  self:setAIConveyorBeltAngle(v6)
end
