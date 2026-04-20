-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleActionController = {}
local VehicleActionController_mt = Class(VehicleActionController)
source("dataS/scripts/vehicles/VehicleActionControllerAction.lua")
function VehicleActionController.new(vehicle, customMt)
  if customMt == nil then
  end
  local v2 = setmetatable({}, customMt)
  v2.vehicle = vehicle
  v2.actions = {}
  v2.actionsByPrio = {}
  v2.sortedActions = {}
  v2.sortedActionsRev = {}
  v2.currentSequenceActions = {}
  v2.actionEvents = {}
  v2.lastDirection = -1
  v2.pendingControllerReactivation = false
  v2.loadedNumActions = 0
  return v2
end
function VehicleActionController:saveToXMLFile(xmlFile, key, usedModNames)
  if 0 < #self.actions then
    xmlFile:setValue(key .. "#lastDirection", self.lastDirection)
    xmlFile:setValue(key .. "#numActions", #self.actions)
    for v8, v9 in ipairs(self.actions) do
      local v10 = v9:getIsSaved()
      if not v10 then
        continue
      end
      v10 = string.format("%s.action(%d)", key, v4)
      xmlFile:setValue(v10 .. "#name", v9.name)
      xmlFile:setValue(v10 .. "#identifier", v9.identifier)
      local v14 = v9:getLastDirection()
      xmlFile:setValue(...)
    end
  end
end
function VehicleActionController:load(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v2 = v2:getValue(savegame.key .. ".actionController#lastDirection", self.lastDirection)
    self.lastDirection = v2
    v2 = v2:getValue(savegame.key .. ".actionController#numActions", 0)
    self.loadedNumActions = v2
    self.loadTime = g_time
    self.loadedActions = {}
    while true do
      v4 = string.format("%s.actionController.action(%d)", savegame.key, v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v6 = v6:getValue(v4 .. "#name")
      v6 = v6:getValue(v4 .. "#identifier")
      v6 = v6:getValue(v4 .. "#lastDirection")
      if 0 < {name = v6, identifier = v6, lastDirection = v6}.lastDirection then
      end
      table.insert(self.loadedActions, v5)
    end
    if not v2 then
      self.loadedNumActions = 0
      self.loadedActions = {}
    end
  end
end
function VehicleActionController:registerAction(name, inputAction, prio)
  local action = VehicleActionControllerAction.new(self, name, inputAction, prio)
  self:addAction(action)
  return action
end
function VehicleActionController:addAction(action)
  table.insert(self.actions, action)
  self:updateSortedActions()
  self.actionsDirty = true
  v2:requestActionEventUpdate()
end
function VehicleActionController:removeAction(action)
  if Platform.gameplay.automaticVehicleControl then
    local v2 = action:getLastDirection()
    if v2 == 1 then
      v2 = action:getDoResetOnDeactivation()
      if v2 then
        action:doAction()
      end
    end
  end
  for v5, v6 in ipairs(self.actions) do
    if not (v6 == action) then
      continue
    end
    table.remove(self.actions, v5)
    break
  end
  if #self.actions == 0 then
    self.lastDirection = -1
  end
  self:updateSortedActions()
end
function VehicleActionController:updateSortedActions()
  self.actionsByPrio = {}
  for v5, v6 in ipairs(self.actions) do
    if v1[v6.priority] == nil then
      table.insert(self.actionsByPrio, {v6})
      v1[v6.priority] = {v6}
    else
      table.insert(v1[v6.priority], v6)
    end
  end
  v3 = table.copy(self.actionsByPrio)
  self.sortedActions = v3
  table.sort(self.sortedActions, function(self, v1)
    if v1[1].priority >= self[1].priority then
    end
    return true
  end)
  v4 = table.copy(self.actionsByPrio)
  self.sortedActionsRev = v4
  table.sort(self.sortedActionsRev, function(self, v1)
    if self[1].priority >= v1[1].priority then
    end
    return true
  end)
end
function VehicleActionController:activate()
  if self.pendingControllerReactivation then
    if self.vehicle == self.vehicle.rootVehicle then
      self.lastDirection = -self.lastDirection
      self:startActionSequence(true)
    end
    self.pendingControllerReactivation = false
  end
end
function VehicleActionController:deactivate()
  if self.vehicle == self.vehicle.rootVehicle and 0 < self.lastDirection then
    self.pendingControllerReactivation = true
  end
end
function VehicleActionController:registerActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if 0 < #self.actions and self.vehicle.rootVehicle == self.vehicle then
    v3:clearActionEventsTable(self.actionEvents)
    for v6, v7 in ipairs(self.actions) do
      v7:registerActionEvents(self, self.vehicle, self.actionEvents, isActiveForInput, isActiveForInputIgnoreSelection)
    end
    if self.actionEventId ~= nil then
      v3:removeActionEvent(self.actionEventId)
    end
    v3, v4, v5 = v3:registerActionEvent(InputAction.VEHICLE_ACTION_CONTROL, self, VehicleActionController.actionSequenceEvent, false, true, false, true)
    self.actionEventId = v4
  end
end
function VehicleActionController:actionEvent(actionName, inputValue, actionIndex, isAnalog)
  self:doAction(actionIndex)
end
function VehicleActionController:doAction(actionIndex, customTable, direction)
  local actions = self:getActionsByIndex(actionIndex, customTable)
  if actions ~= nil then
    for v9, v10 in ipairs(actions) do
      local v11 = v10:doAction(direction)
    end
    return v5
  end
  return false
end
function VehicleActionController:actionSequenceEvent()
  if self.loadedNumActions ~= 0 then
    return
  end
  if self.vehicle.getAreControlledActionsAccessible ~= nil then
    local v1 = v1:getAreControlledActionsAccessible()
    if not v1 then
      return
    end
  end
  if self.vehicle.getAreControlledActionsAvailable ~= nil then
    v1 = v1:getAreControlledActionsAvailable()
    if not v1 then
      return
    end
    local v1, v2 = v1:getAreControlledActionsAllowed()
    if not v1 then
      if v2 ~= nil then
        v3:showBlinkingWarning(v2, 2500)
      end
      return
    end
  end
  self:startActionSequence()
end
function VehicleActionController:startActionSequence(force)
  self.currentSequenceActions = self.sortedActionsRev
  if 0 < -self.lastDirection then
    self.currentSequenceActions = self.sortedActions
  end
  if not force then
    for v7, v8 in ipairs(self.currentSequenceActions) do
      for v12, v13 in ipairs(v8) do
        if v13.lastValidDirection ~= v2 then
        end
      end
    end
    if v3 then
      self.lastDirection = v2
      self:startActionSequence(true)
      return
    end
  end
  if self.currentSequenceIndex ~= nil then
    self.currentSequenceIndex = self.currentMaxSequenceIndex - self.currentSequenceIndex - 1
  else
    self.currentSequenceIndex = 1
    self.currentMaxSequenceIndex = #self.currentSequenceActions
  end
  self.lastDirection = v2
  local v3 = self:doAction(self.currentSequenceIndex, self.currentSequenceActions, self.lastDirection)
  if not v3 then
    if self.currentMaxSequenceIndex == 1 then
      self.lastDirection = -v2
      self:stopActionSequence()
      return
    end
    self:continueActionSequence()
  end
end
function VehicleActionController:continueActionSequence()
  self.currentSequenceIndex = self.currentSequenceIndex + 1
  local success = self:doAction(self.currentSequenceIndex, self.currentSequenceActions, self.lastDirection)
  if self.currentMaxSequenceIndex <= self.currentSequenceIndex then
    self:stopActionSequence()
    return
  end
  if not success then
    self:continueActionSequence()
  end
end
function VehicleActionController:stopActionSequence()
  self.currentSequenceActions = nil
  self.currentSequenceIndex = nil
  self.currentMaxSequenceIndex = nil
end
function VehicleActionController:getActionsByIndex(actionIndex, customTable)
  if customTable ~= nil then
    return customTable[actionIndex]
  end
  return self.actionsByPrio[actionIndex]
end
function VehicleActionController:getAreControlledActionsAvailable()
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v4 = v4:isAvailable()
  if not v4 then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  if 0 >= #self.actions then
  end
  return true
end
function VehicleActionController:getAreControlledActionsAccessible()
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v4 = v4:isAccessible()
  if not v4 then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  if 0 >= #self.actions then
  end
  return true
end
function VehicleActionController:getControlledActionIcons()
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  local v4, v5, v6 = v4:getControlledActionIcons()
  if v4 ~= nil then
    return v4, v5, v6
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function VehicleActionController:playControlledActions()
  if self.loadedNumActions == 0 then
    self:startActionSequence()
  end
end
function VehicleActionController:resetCurrentState()
  self.lastDirection = -1
end
function VehicleActionController:getActionControllerDirection()
  return -self.lastDirection
end
function VehicleActionController:update(dt)
  if self.currentSequenceIndex ~= nil and self.currentSequenceIndex <= self.currentMaxSequenceIndex then
    local v2 = self:getActionsByIndex(self.currentSequenceIndex, self.currentSequenceActions)
    if v2 ~= nil then
      for v7, v8 in ipairs(v2) do
        local v9 = v8:getIsFinished(self.lastDirection)
        if not not v9 then
          continue
        end
        break
      end
      if v3 then
        if self.currentSequenceIndex < self.currentMaxSequenceIndex then
          self:continueActionSequence()
        else
          self:stopActionSequence()
        end
      end
    end
  end
  for v5, v6 in ipairs(self.actions) do
    v6:update(dt)
  end
  if self.loadedNumActions ~= 0 and self.loadedNumActions == #self.actions and self.loadTime + 500 < g_time then
    if self.vehicle.startMotor ~= nil then
      v3 = v3:getIsMotorStarted(true)
    end
    if v2 then
      for v6, v7 in ipairs(self.loadedActions) do
        for v11, v12 in ipairs(self.actions) do
          if not (v12.name == v7.name) then
            continue
          end
          if not (v12.identifier == v7.identifier) then
            continue
          end
          local v13 = v12:getLastDirection()
          if not (v13 ~= v7.lastDirection) then
            continue
          end
          v12:doAction()
        end
      end
      self.loadedNumActions = 0
      self.actionsDirty = false
    end
  end
  if self.actionsDirty and self.loadedNumActions == 0 then
    for v5, v6 in ipairs(self.actions) do
      v7 = v6:getLastDirection()
      if not (v7 ~= self.lastDirection) then
        continue
      end
      v6:doAction()
    end
    self.actionsDirty = nil
  end
end
function VehicleActionController:updateForAI(dt)
  for v5, v6 in ipairs(self.actions) do
    v6:updateForAI(dt)
  end
end
function VehicleActionController:onAIEvent(sourceVehicle, eventName)
  for v6, v7 in ipairs(self.actions) do
    local v8 = v7:getSourceVehicle()
    if not (v8 == sourceVehicle) then
      continue
    end
    v7:onAIEvent(eventName)
  end
end
function VehicleActionController:drawDebugRendering()
  if self.lastDirection == 1 then
  else
  end
  local v4 = v4(v5, v6)
  v3(v4, self.sortedActions, -1, 0.2, 0.3)
  if self.lastDirection == 1 then
  else
  end
  local v5 = string.format("Current Action Sequence (%s)", v3)
  v2(v5, self.currentSequenceActions, self.currentSequenceIndex, 0.4, 0.3)
end
function VehicleActionController:registerXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. "#lastDirection", "Last action controller direction")
  self:register(XMLValueType.INT, v1 .. "#numActions", "Action controller actions")
  self:register(XMLValueType.STRING, v1 .. ".action(?)#name", "Action name")
  self:register(XMLValueType.STRING, v1 .. ".action(?)#identifier", "Action identifier")
  self:register(XMLValueType.INT, v1 .. ".action(?)#lastDirection", "Last action direction")
end
