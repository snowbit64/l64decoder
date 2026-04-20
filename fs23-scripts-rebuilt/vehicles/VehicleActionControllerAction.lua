-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleActionControllerAction = {}
local VehicleActionControllerAction_mt = Class(VehicleActionControllerAction)
function VehicleActionControllerAction.new(parent, name, inputAction, priority, customMt)
  if customMt == nil then
  end
  local v5 = setmetatable({}, customMt)
  v5.parent = parent
  v5.name = name
  v5.inputAction = inputAction
  v5.priority = priority
  v5.lastDirection = -1
  v5.lastValidDirection = 0
  v5.isSaved = false
  v5.resetOnDeactivation = true
  v5.identifier = ""
  v5.aiEventListener = {}
  return v5
end
function VehicleActionControllerAction:remove()
  v1:removeAction(self)
end
function VehicleActionControllerAction:updateParent(parent)
  if parent ~= self.parent then
    v2:removeAction(self)
    parent:addAction(self)
  end
  self.parent = parent
end
function VehicleActionControllerAction:setCallback(callbackTarget, inputCallback, inputCallbackRev)
  self.callbackTarget = callbackTarget
  self.inputCallback = inputCallback
  self.inputCallbackRev = inputCallbackRev
  self.identifier = callbackTarget.configFileName or ""
end
function VehicleActionControllerAction:setFinishedFunctions(finishedFunctionTarget, finishedFunc, finishedResult, finishedResultRev, finishedFuncRev)
  self.finishedFunctionTarget = finishedFunctionTarget
  self.finishedFunc = finishedFunc
  self.finishedFuncRev = finishedFuncRev
  self.finishedResult = finishedResult
  self.finishedResultRev = finishedResultRev
end
function VehicleActionControllerAction:setDeactivateFunction(deactivateFunctionTarget, deactivateFunc, inverseDeactivateFunc)
  self.deactivateFunctionTarget = deactivateFunctionTarget
  self.deactivateFunc = deactivateFunc
  local v4 = Utils.getNoNil(inverseDeactivateFunc, false)
  self.inverseDeactivateFunc = v4
end
function VehicleActionControllerAction:setIsAvailableFunction(v1)
  self.availableFunc = v1
end
function VehicleActionControllerAction:setIsAccessibleFunction(v1)
  self.accessibleFunc = v1
end
function VehicleActionControllerAction:setActionIcons(v1, v2, v3)
  self.iconPos = v1
  self.iconNeg = v2
  self.iconChangeColor = v3
end
function VehicleActionControllerAction:setResetOnDeactivation(resetOnDeactivation)
  self.resetOnDeactivation = resetOnDeactivation
end
function VehicleActionControllerAction:setIsSaved(isSaved)
  self.isSaved = isSaved
end
function VehicleActionControllerAction:getIsSaved()
  return self.isSaved
end
function VehicleActionControllerAction:isAvailable()
  if self.availableFunc ~= nil then
    return self.availableFunc()
  end
  return true
end
function VehicleActionControllerAction:isAccessible()
  if self.accessibleFunc ~= nil then
    return self.accessibleFunc()
  end
  return true
end
function VehicleActionControllerAction:getControlledActionIcons()
  return self.iconPos, self.iconNeg, self.iconChangeColor
end
function VehicleActionControllerAction:getLastDirection()
  return self.lastDirection
end
function VehicleActionControllerAction:getDoResetOnDeactivation()
  return self.resetOnDeactivation
end
function VehicleActionControllerAction:addAIEventListener(sourceVehicle, eventName, direction, forceUntilFinished)
  self.sourceVehicle = sourceVehicle
  table.insert(self.aiEventListener, {eventName = eventName, direction = direction, forceUntilFinished = forceUntilFinished})
end
function VehicleActionControllerAction.registerActionEvents(v0, v1, v2, v3, v4, v5)
end
function VehicleActionControllerAction:actionEvent(actionName, inputValue, actionIndex, isAnalog)
  self:doAction()
end
function VehicleActionControllerAction:doAction(v1, v2)
  if v1 == nil then
  end
  self.lastDirection = v1
  local v3 = self.inputCallback(self.callbackTarget, v1, v2)
  if v3 then
    self.lastValidDirection = self.lastDirection
  end
  return v3
end
function VehicleActionControllerAction:getIsFinished(direction)
  if self.finishedFunc ~= nil then
    if 0 < direction then
      local v3 = self.finishedFunc(self.finishedFunctionTarget)
      if v3 ~= self.finishedResult then
      end
      return true
    end
    v3 = self.finishedFunc(self.finishedFunctionTarget)
    if v3 ~= self.finishedResultRev then
    end
    return true
  end
  return true
end
function VehicleActionControllerAction:getSourceVehicle()
  return self.sourceVehicle
end
function VehicleActionControllerAction:onAIEvent(eventName)
  for v5, v6 in ipairs(self.aiEventListener) do
    if not (v6.eventName == eventName) then
      continue
    end
    local v7 = self:doAction(v6.direction, true)
    if not v7 then
      -- if not v6.forceUntilFinished then goto L25 end
      self.forceDirectionUntilFinished = v6.direction
    else
      if self.forceDirectionUntilFinished ~= nil and v6.direction ~= self.forceDirectionUntilFinished then
        self.forceDirectionUntilFinished = nil
      end
      v7:stopActionSequence()
    end
  end
end
function VehicleActionControllerAction:update(dt)
  if self.deactivateFunc ~= nil and self.lastDirection == 1 then
    local v2 = self.deactivateFunc(self.deactivateFunctionTarget)
    if v2 == not self.inverseDeactivateFunc and self.parent.currentSequenceIndex == nil and self.forceDirectionUntilFinished == nil then
      v2:startActionSequence()
    end
  end
end
function VehicleActionControllerAction:updateForAI(dt)
  if self.forceDirectionUntilFinished ~= nil then
    local v2 = self:doAction(self.forceDirectionUntilFinished)
    if v2 then
      self.forceDirectionUntilFinished = nil
      v2:stopActionSequence()
    end
  end
end
function VehicleActionControllerAction:getDebugText()
  if self.finishedFunc ~= nil then
    local v2 = self.finishedFunc(self.finishedFunctionTarget)
    v2 = type(v2)
    if v2 == "number" then
      v2 = string.format("%.1f", v2)
    end
  end
  if self.callbackTarget ~= nil then
    local v3 = v3:getName()
  end
  if self.lastDirection == 1 then
    -- if v0.finishedResult then goto L53 end
  end
  v3 = v3(v4, v5, v6, v7, v8, self.finishedResultRev)
  return v3
end
