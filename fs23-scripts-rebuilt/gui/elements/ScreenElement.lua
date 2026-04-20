-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ScreenElement = {CONTROLS = {PAGE_SELECTOR = "pageSelector"}}
local ScreenElement_mt = Class(ScreenElement, FrameElement)
function ScreenElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.isBackAllowed = true
  v2.handleCursorVisibility = true
  v2.returnScreenName = nil
  v2.returnScreen = nil
  v2.returnScreenClass = nil
  v2.isOpen = false
  v2.lastMouseCursorState = false
  v2.isInitialized = false
  v2.nextClickSoundMuted = false
  v2:registerControls(ScreenElement.CONTROLS)
  return v2
end
function ScreenElement:onOpen()
  local rootElement = self:getRootElement()
  for v5, v6 in ipairs(rootElement.elements) do
    v6:onOpen()
  end
  if not self.isInitialized then
    self:initializeScreen()
  end
  v2 = v2:getShowMouseCursor()
  self.lastMouseCursorState = v2
  v2:setShowMouseCursor(true)
  self.isOpen = true
end
function ScreenElement:initializeScreen()
  self.isInitialized = true
  if self.pageSelector ~= nil and self.pageSelector.disableButtonSounds ~= nil then
    v1:disableButtonSounds()
  end
end
function ScreenElement:onClose()
  local rootElement = self:getRootElement()
  for v5, v6 in ipairs(rootElement.elements) do
    v6:onClose()
  end
  if self.handleCursorVisibility then
    v2:setShowMouseCursor(self.lastMouseCursorState)
  end
  self.isOpen = false
end
function ScreenElement.onClickOk(v0)
  return true
end
function ScreenElement.onClickActivate(v0)
  return true
end
function ScreenElement.onClickCancel(v0)
  return true
end
function ScreenElement.onClickMenuExtra1(v0)
  return true
end
function ScreenElement.onClickMenuExtra2(v0)
  return true
end
function ScreenElement.onClickMenu(v0)
  return true
end
function ScreenElement.onClickShop(v0)
  return true
end
function ScreenElement:onPagePrevious()
  v1:inputLeft(true)
end
function ScreenElement:onPageNext()
  v1:inputRight(true)
end
function ScreenElement:onClickBack(forceBack, usedMenuButton)
  if not self.isBackAllowed then
    -- if not v1 then goto L28 end
  end
  if self.returnScreenName ~= nil then
    v4:showGui(self.returnScreenName)
    return false
  end
  if self.returnScreenClass ~= nil then
    self:changeScreen(self.returnScreenClass)
  end
  return v3
end
function ScreenElement:onBackAction()
  return self:onClickBack()
end
function ScreenElement.invalidateScreen(v0)
end
function ScreenElement:callButtonsWithAction(v1)
  -- TODO: structure LOP_FORNPREP (pc 3, target 39)
  local v6 = self[1]:isa(ButtonElement)
  if v6 and self[1].isTriggerableByGlobalAction then
    v6 = self[1]:getIsActive()
    if v6 and self[1].inputActionName == v1 then
      self[1]:sendAction()
      return true
    end
  end
  v6 = ScreenElement.callButtonsWithAction(v5.elements, v1)
  if v6 then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 38, target 4)
  return false
end
function ScreenElement:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if self.inputDisableTime <= 0 then
    if self.pageSelector ~= nil then
      if action ~= InputAction.MENU_PAGE_PREV then
        -- if v1 ~= InputAction.MENU_PAGE_NEXT then goto L46 end
      end
      if action == InputAction.MENU_PAGE_PREV then
        self:onPagePrevious()
      elseif action == InputAction.MENU_PAGE_NEXT then
        self:onPageNext()
      end
    end
    if not eventUsed then
      v4 = ScreenElement.callButtonsWithAction(self.elements, action)
    end
  end
  return eventUsed
end
function ScreenElement:inputReleaseEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputReleaseEvent(self, action, value, eventUsed)
  if self.pageSelector ~= nil then
    if action ~= InputAction.MENU_PAGE_PREV then
      -- if v1 ~= InputAction.MENU_PAGE_NEXT then goto L37 end
    end
    self.pageSelector.leftDelayTime = 0
    self.pageSelector.rightDelayTime = 0
    return true
  end
end
function ScreenElement:setReturnScreen(screenName, screen)
  self.returnScreenName = screenName
  self.returnScreen = screen
end
function ScreenElement:setReturnScreenClass(returnScreenClass)
  self.returnScreenClass = returnScreenClass
end
function ScreenElement:getIsOpen()
  return self.isOpen
end
function ScreenElement:canReceiveFocus()
  if not self.visible then
    return false
  end
  -- TODO: structure LOP_FORNPREP (pc 10, target 21)
  local v4 = v4:canReceiveFocus()
  if not v4 then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 11)
  return true
end
function ScreenElement:setNextScreenClickSoundMuted(value)
  if value == nil then
  end
  self.nextClickSoundMuted = value
end
