-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FrameElement = {}
local FrameElement_mt = Class(FrameElement, GuiElement)
function FrameElement.new(target, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.controlIDs = {}
  v2.changeScreenCallback = u1
  v2.toggleCustomInputContextCallback = u1
  v2.playSampleCallback = u1
  v2.hasCustomInputContext = false
  v2.time = 0
  v2.inputDisableTime = 0
  v2.playHoverSoundOnFocus = false
  return v2
end
function FrameElement:clone(parent, includeId, suppressOnCreate)
  local v5 = v5:superClass()
  local v4 = v5.clone(self, parent, includeId, suppressOnCreate)
  v4:exposeControlsAsFields(self.name)
  v4.changeScreenCallback = self.changeScreenCallback
  v4.toggleCustomInputContextCallback = self.toggleCustomInputContextCallback
  v4.playSampleCallback = self.playSampleCallback
  v4.hasCustomInputContext = self.hasCustomInputContext
  return v4
end
function FrameElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  for v5, v6 in pairs(src.controlIDs) do
    self.controlIDs[v5] = false
  end
end
function FrameElement:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  for v4, v5 in pairs(self.controlIDs) do
    self.controlIDs[v4] = nil
    self[v4] = nil
  end
end
function FrameElement:getRootElement()
  if 0 < #self.elements then
    return self.elements[1]
  end
  local newRoot = GuiElement.new()
  self:addElement(newRoot)
  return newRoot
end
function FrameElement:registerControls(controlIDs)
  for v5, v6 in pairs(controlIDs) do
    if self.controlIDs[v6] then
      local v9 = tostring(v6)
      Logging.warning(...)
    else
      self.controlIDs[v6] = false
    end
  end
end
function FrameElement:exposeControlsAsFields(viewName)
  local allChildren = self:getDescendants()
  for v6, v7 in pairs(allChildren) do
    if not v7.id then
      continue
    end
    if not (v7.id ~= "") then
      continue
    end
    local v8, v9 = GuiElement.extractIndexAndNameFromID(v7.id)
    if not (self.controlIDs[v9] ~= nil) then
      continue
    end
    if v8 then
      if not self[v9] then
        self[v9] = {}
      end
      self[v9][v8] = v7
    else
      self[v9] = v7
    end
    self.controlIDs[v9] = true
  end
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L68 end
  end
  for v6, v7 in pairs(self.controlIDs) do
    if not not v7 then
      continue
    end
    local v10 = tostring(viewName)
    local v11 = tostring(v6)
    Logging.warning(...)
  end
end
function FrameElement:disableInputForDuration(duration)
  local v2 = MathUtil.clamp(duration, 0, 10000)
  self.inputDisableTime = v2
end
function FrameElement:isInputDisabled()
  if 0 >= self.inputDisableTime then
  end
  return true
end
function FrameElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self.time = self.time + dt
  if 0 < self.inputDisableTime then
    self.inputDisableTime = self.inputDisableTime - dt
  end
end
function FrameElement:setChangeScreenCallback(callback)
  if not callback then
  end
  self.changeScreenCallback = v2
end
function FrameElement:setInputContextCallback(callback)
  if not callback then
  end
  self.toggleCustomInputContextCallback = v2
end
function FrameElement:setPlaySampleCallback(callback)
  if not callback then
  end
  self.playSampleCallback = v2
end
function FrameElement:changeScreen(targetScreenClass, returnScreenClass)
  self.changeScreenCallback(self, targetScreenClass, returnScreenClass)
end
function FrameElement:toggleCustomInputContext(isContextActive, contextName)
  if self.hasCustomInputContext then
    -- if not v1 then goto L8 end
  end
  if not self.hasCustomInputContext and isContextActive then
    self.toggleCustomInputContextCallback(isContextActive, contextName)
    self.hasCustomInputContext = isContextActive
  end
end
function FrameElement:playSample(sampleName)
  local v2 = self:getSoundSuppressed()
  if not v2 then
    self.playSampleCallback(sampleName)
  end
end
