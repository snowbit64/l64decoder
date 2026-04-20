-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IntroductionHelpSystem = {}
local v0 = Class(IntroductionHelpSystem)
IntroductionHelpSystem.FILENAME = "dataS/introductionHints.xml"
function IntroductionHelpSystem.new(v0)
  if not v0 then
  end
  local v1 = v1(v2, v3)
  v1.registeredElements = {}
  v1.registeredHints = {}
  v1.shownHints = {}
  v1.drawHelpQueue = {}
  v1.currentElementName = nil
  v2:subscribe(MessageType.GUI_BEFORE_OPEN, v1.onMenuOpen, v1)
  v2:subscribe(MessageType.APP_SUSPENDED, v1.onAppSuspended, v1)
  return v1
end
function IntroductionHelpSystem.delete(v0)
  v1:unsubscribeAll(v0)
end
function IntroductionHelpSystem:registerHelp(v1, v2, v3, v4, v5, v6)
  if v3 == nil then
    Logging.devError("Could not register introduction help. Drawfunction is not defined!")
    printCallstack()
    return
  end
  if self.registeredElements[v1] == nil then
    self.registeredElements[v1] = {name = v1, alreadyShown = false, waitingForDraw = false, canReset = true}
  end
  v7.drawFunction = v3
  v7.availableFunction = v4
  v7.registerCustomInputFunction = v5
  v7.unregisterCustomInputFunction = v6
  v7.target = v2
end
function IntroductionHelpSystem:registerHint(v1, v2, v3)
  if self.registeredHints[v1] == nil then
    local v5 = Utils.getNoNil(v3, false)
    if v3 then
      table.insert(self.shownHints, v2)
    end
    self.registeredHints[v1] = v4
  end
end
function IntroductionHelpSystem:loadShownElements()
  if g_currentMission.missionInfo ~= nil then
  end
  local v3 = string.split(v2, " ")
  for v7, v8 in ipairs(v3) do
    if not (v8 ~= "") then
      continue
    end
    if self.registeredElements[v8] == nil then
      self.registeredElements[v8] = {}
    end
    self.registeredElements[v8].alreadyShown = true
    self.registeredElements[v8].canReset = false
  end
  if v1 ~= nil then
  end
  v5 = string.split(v4, " ")
  for v9, v10 in ipairs(v5) do
    if not (v10 ~= "") then
      continue
    end
    if not (self.registeredHints[v10] == false) then
      continue
    end
    self.registeredHints[v10].alreadyShown = true
    table.insert(self.shownHints, self.registeredHints[v10].text)
  end
end
function IntroductionHelpSystem.loadHelpElementsFromXML(v0)
  local v1 = XMLFile.load("introductionHelpElementsXML", IntroductionHelpSystem.FILENAME)
  if not v1 then
    return
  end
  v1:iterate("hints.hint", function(v0, v1)
    local v2 = v2:getString(v1 .. "#id")
    local v3 = v3:getString(v1 .. "#text")
    if v2 ~= nil and v3 ~= nil then
      local v4 = v4:convertText(v3)
      v4 = v4:getBool(v1 .. "#initialActive", false)
      v5:registerHint(v2, v4, v4)
    end
  end)
  v1:delete()
end
function IntroductionHelpSystem:saveShownElements()
  for v5, v6 in pairs(self.registeredElements) do
    if not v6.alreadyShown then
      continue
    end
  end
  if g_currentMission.missionInfo ~= nil then
    g_currentMission.missionInfo.introductionHelpShownElements = v1
  end
  for v7, v8 in pairs(self.registeredHints) do
    if not v8.alreadyShown then
      continue
    end
  end
  if v2 ~= nil then
    v2.introductionHelpShownHints = v3
  end
end
function IntroductionHelpSystem.setIsActive(v0, v1)
  if g_currentMission.missionInfo ~= nil then
    g_currentMission.missionInfo.introductionHelpActive = v1
  end
end
function IntroductionHelpSystem.getIsActive(v0)
  local v2 = v2:getIsRunning()
  if not v2 then
  end
  return v1
end
function IntroductionHelpSystem:getIsHelpVisible()
  if self.currentElement == nil then
  end
  return true
end
function IntroductionHelpSystem:showHelp(v1, v2, v3, v4, v5, v6)
  if self.registeredElements[v1] ~= nil and self.registeredElements[v1].drawFunction ~= nil then
    if not self.registeredElements[v1].alreadyShown then
      -- if not v0.registeredElements[v1].waitingForDraw then goto L16 end
    end
    if v2 then
      v7.waitingForDraw = true
      local v8 = Utils.getNoNil(v3, true)
      v7.blockInput = v8
      v7.customText = v4
      v7.callback = v5
      v7.callbackTarget = v6
      table.insert(self.drawHelpQueue, v7)
    end
  end
end
function IntroductionHelpSystem:hideHelp(v1, v2)
  if self.registeredElements[v1] ~= nil then
    if not self.registeredElements[v1].canReset then
      -- if not v2 then goto L43 end
    end
    v3.waitingForDraw = false
    table.removeElement(self.drawHelpQueue, v3)
    if v3 == self.currentElement then
      self:revertInputContext()
      if self.currentElement.callback ~= nil then
        self.currentElement.callback(self.currentElement.callbackTarget)
      end
      self.currentElement = nil
    end
  end
end
function IntroductionHelpSystem:hideAll()
  for v4, v5 in ipairs(self.drawHelpQueue) do
    self.registeredElements[v5.name].alreadyShown = true
  end
  self:saveShownElements()
  self.drawHelpQueue = {}
  if self.currentElement ~= nil then
    self:onContinueNext()
  end
end
function IntroductionHelpSystem:showHint(v1, v2, v3)
  if self.registeredHints[v1] ~= nil and not self.registeredHints[v1].alreadyShown then
    InfoDialog.show(self.registeredHints[v1].text, v2, v3)
    table.insert(self.shownHints, self.registeredHints[v1].text)
    self.registeredHints[v1].alreadyShown = true
    self:saveShownElements()
  end
end
function IntroductionHelpSystem:resetElement(v1, v2)
  if self.registeredElements[v1] ~= nil then
    if not self.registeredElements[v1].canReset then
      -- if not v2 then goto L46 end
    end
    v3.alreadyShown = false
    v3.waitingForDraw = false
    table.removeElement(self.drawHelpQueue, v3)
    if v3 == self.currentElement then
      self:revertInputContext()
      if self.currentElement.callback ~= nil then
        self.currentElement.callback(self.currentElement.callbackTarget)
      end
      self.currentElement = nil
    end
  end
end
function IntroductionHelpSystem.getCanShowHelp(v0)
  local v1 = v1:getIsGuiVisible()
  if v1 then
    return false
  end
  if g_appIsSuspended then
    return false
  end
  return true
end
function IntroductionHelpSystem:update(v1)
  if self.currentElement == nil then
    local v2 = self:getCanShowHelp()
    if v2 then
      while true do
        if not (0 < #self.drawHelpQueue) then
          break
        end
        v2 = table.remove(self.drawHelpQueue, 1)
        self.registeredElements[v2.name].alreadyShown = true
        self:saveShownElements()
        if v2.availableFunction ~= nil then
          v3 = v2.availableFunction(v2.target)
          if not v3 then
          end
        end
        if not (v2 ~= nil) then
          continue
        end
        if v2.blockInput then
          if v2.registerCustomInputFunction == nil then
            v3:setContext(v2.name)
            v3:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onContinueNext, false, true, false, true)
            -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L108
            v3:setCustomContext(v2.name, true)
            v3 = v3:registerTouchArea(0, 0, 1, 1, 0, 0, TouchHandler.TRIGGER_UP, self.onContinueNextTouch, self)
            self.currentTouchArea = v3
          else
            v2.registerCustomInputFunction(v2.target)
          end
        end
        self.currentElement = v2
        break
      end
    end
  end
  if self.currentElement ~= nil and self.currentElement.availableFunction ~= nil then
    v2 = self.currentElement.availableFunction(self.currentElement.target)
    if not v2 then
      self:onContinueNext()
    end
  end
end
function IntroductionHelpSystem:draw()
  if self.currentElement ~= nil then
    new2DLayer()
    drawFilledRect(0, 0, 1, 1, 0, 0, 0, 0.48)
    self.currentElement.drawFunction(self.currentElement.target, self.currentElement.customText)
  end
end
function IntroductionHelpSystem:onMenuOpen()
  if self.currentElement ~= nil then
  end
end
function IntroductionHelpSystem:onAppSuspended()
  if self.currentElement ~= nil then
  end
end
function IntroductionHelpSystem:revertInputContext()
  if self.currentElement ~= nil and self.currentElement.blockInput then
    if self.currentElement.unregisterCustomInputFunction == nil then
      if g_touchHandler ~= nil then
        v2:revertCustomContext()
        if self.currentTouchArea ~= nil then
          v2:removeTouchArea(self.currentTouchArea)
          self.currentTouchArea = nil
        end
      end
      v2:removeActionEventsByTarget(self)
      v2:revertContext()
      return
    end
    v1.unregisterCustomInputFunction(v1.target)
  end
end
function IntroductionHelpSystem:onContinueNextTouch()
  local v1 = v1:getIsGuiVisible()
  if not v1 then
    self:onContinueNext()
  end
end
function IntroductionHelpSystem:onContinueNext()
  if self.currentElement ~= nil then
    self.currentElement.canReset = false
    self:revertInputContext()
    if self.currentElement.callback ~= nil then
      self.currentElement.callback(self.currentElement.callbackTarget)
    end
    self.currentElement = nil
  end
end
function IntroductionHelpSystem:getShownHints()
  return self.shownHints
end
function IntroductionHelpSystem:resetHelpSystem()
  for v4, v5 in pairs(self.registeredElements) do
    v5.alreadyShown = false
    if not (v5.waitingForDraw ~= nil) then
      continue
    end
    v5.waitingForDraw = false
  end
end
function IntroductionHelpSystem:resetHelpSystemWithDraw()
  for v4, v5 in pairs(self.registeredElements) do
    if not (v5.alreadyShown == true) then
      continue
    end
    v5.waitingForDraw = true
    v5.alreadyShown = false
    table.insert(self.drawHelpQueue, v5)
  end
end
