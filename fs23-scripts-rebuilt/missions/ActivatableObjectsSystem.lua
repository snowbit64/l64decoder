-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ActivatableObjectsSystem = {}
local ActivatableObjectsSystem_mt = Class(ActivatableObjectsSystem)
function ActivatableObjectsSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.objects = {}
  v2.currentActivatableObject = nil
  v2.inputContext = nil
  v2.actionEventId = nil
  return v2
end
function ActivatableObjectsSystem:activate(context)
  self.inputContext = context
  self.isActive = true
  self:updateObjects()
end
function ActivatableObjectsSystem:deactivate(context)
  self:removeInput(context)
  if self.currentActivatableObject ~= nil and self.currentActivatableObject.deactivate ~= nil then
    v2:deactivate()
  end
  self.currentActivatableObject = nil
  self.isActive = false
end
function ActivatableObjectsSystem:setPosition(x, y, z)
  self.posX = x
  self.posY = y
  self.posZ = z
end
function ActivatableObjectsSystem:update(dt)
  if self.isActive then
    self:updateObjects(dt)
  end
end
function ActivatableObjectsSystem:updateObjects(dt)
  local v4 = v4:getFarmId()
  for v8, v9 in pairs(self.objects) do
    if v9.getIsActivatable ~= nil then
      local v10 = v9:getIsActivatable()
      if not v10 then
        continue
      end
    end
    if v9.getHasAccess ~= nil then
      v10 = v9:getHasAccess(v4)
      if not v10 then
        continue
      end
    end
    if v9.getDistance ~= nil and self.posX ~= nil then
      local v11 = v9:getDistance(self.posX, self.posY, self.posZ)
    end
    if v2 ~= nil and not (v10 < v3) then
      continue
    end
  end
  if v2 ~= self.currentActivatableObject then
    self:removeInput(self.inputContext)
    if self.currentActivatableObject ~= nil and self.currentActivatableObject.deactivate ~= nil then
      v5:deactivate()
    end
    self.currentActivatableObject = v2
    if v2 ~= nil then
      if v2.activate ~= nil then
        v2:activate()
      end
      self:registerInput(self.inputContext)
    end
  end
  if v2 ~= nil then
    if self.actionEventId ~= nil then
      v5:setActionEventText(self.actionEventId, v2.activateText)
    end
    if v2.update ~= nil then
      v2:update(dt)
    end
  end
end
function ActivatableObjectsSystem:removeInput(inputContext)
  if inputContext ~= nil then
    v2:beginActionEventsModification(inputContext)
  end
  if self.currentActivatableObject ~= nil and self.currentActivatableObject.removeCustomInput ~= nil then
    v2:removeCustomInput()
  end
  if self.actionEventId ~= nil then
    v2:removeActionEvent(self.actionEventId)
    self.actionEventId = nil
  end
  if inputContext ~= nil then
    v2:endActionEventsModification()
  end
end
function ActivatableObjectsSystem:registerInput(inputContext)
  if self.currentActivatableObject ~= nil then
    if inputContext ~= nil then
      v3:beginActionEventsModification(inputContext)
    end
    if v2.registerCustomInput ~= nil then
      -- if Platform.isMobile then goto L24 end
      v2:registerCustomInput(inputContext)
    else
      local v3, v4 = v3:registerActionEvent(InputAction.ACTIVATE_OBJECT, self, self.onActivateObjectInput, false, true, false, true)
      v5:setActionEventText(v4, v2.activateText)
      v5:setActionEventTextPriority(v4, GS_PRIO_VERY_HIGH)
      v5:setActionEventTextVisibility(v4, true)
      self.actionEventId = v4
    end
    if inputContext ~= nil then
      v3:endActionEventsModification()
    end
  end
end
function ActivatableObjectsSystem:getActivatable()
  return self.currentActivatableObject
end
function ActivatableObjectsSystem:addActivatable(object)
  if object.activateText == nil then
    Logging.error("Given activatable object has no activateText")
    printCallstack()
    return
  end
  if self.objects[object] == nil then
    self.objects[object] = object
  end
end
function ActivatableObjectsSystem:removeActivatable(object)
  if object == nil then
    return
  end
  self.objects[object] = nil
  if object == self.currentActivatableObject then
    if object.deactivate ~= nil then
      object:deactivate()
    end
    self:removeInput(self.inputContext)
    self.currentActivatableObject = nil
  end
end
function ActivatableObjectsSystem:onActivateObjectInput(actionName, inputValue, callbackState, isAnalog)
  if self.currentActivatableObject ~= nil then
    v5:run()
  end
end
