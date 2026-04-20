-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputEvent = {}
local InputEvent_mt = Class(InputEvent)
function InputEvent.new(actionName, targetObject, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, orderValue)
  local v9 = setmetatable({}, u0)
  v9.actionName = actionName
  v9.targetObject = targetObject
  v9.callback = callback
  v9.triggerDown = triggerDown
  v9.triggerUp = triggerUp
  v9.triggerAlways = triggerAlways
  v9.callbackState = callbackState
  v9.orderValue = orderValue
  local v10 = v9:makeId()
  v9.id = v10
  v9.ignoreComboMask = false
  v9.isActive = startActive
  v9.contextDisplayText = nil
  v9.contextDisplayIconName = nil
  v9.displayIsVisible = true
  v9.displayPriority = GS_PRIO_VERY_LOW
  v9.hasFrameTriggered = false
  return v9
end
function InputEvent:setIgnoreComboMask(ignoreComboMask)
  self.ignoreComboMask = ignoreComboMask
end
function InputEvent:getIgnoreComboMask()
  return self.ignoreComboMask
end
function InputEvent:notifyInput(binding)
  if self.triggerUp then
  end
  if self.triggerDown and binding.isDown then
  end
  if self.triggerDown and self.triggerAlways then
  end
  if not self.triggerDown then
  end
  if not self.hasFrameTriggered then
    if not v2 and not v3 and not v4 then
      -- if not v5 then goto L60 end
    end
    self.hasFrameTriggered = true
    binding:setFrameTriggered(not v5)
    self.callback(self.targetObject, self.actionName, binding.inputValue, self.callbackState, binding.isAnalog, binding.isMouse, binding.deviceCategory, binding)
  end
end
function InputEvent:frameReset()
  self.hasFrameTriggered = false
end
function InputEvent:makeId()
  local v3 = tostring(self.actionName)
  local v4 = tostring(self.targetObject)
  local v6 = self:getTriggerCode()
  local v5 = tostring(...)
  return string.format(...)
end
function InputEvent:getTriggerCode()
  if self.triggerDown then
  else
  end
  if self.triggerUp then
  else
  end
  if self.triggerAlways then
  else
  end
  return v1 + v2 + v3
end
function InputEvent:initializeDisplayText(inputAction)
  self.contextDisplayText = inputAction.displayNamePositive
end
function InputEvent:toString()
  return string.format("[%s: target=%s, triggerUp=%s, triggerDown=%s, triggerAlways=%s, isActive=%s, isVisible=%s, hasFrameTriggered=%s]", self.actionName, self.targetObject, self.triggerUp, self.triggerDown, self.triggerAlways, self.isActive, self.displayIsVisible, self.hasFrameTriggered)
end
InputEvent_mt.__tostring = InputEvent.toString
local v2 = InputEvent.new("", {}, function()
end, false, false, false, false, 0, 0)
InputEvent.NO_EVENT = v2
