-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Gui = {}
local Gui_mt = Class(Gui)
Gui.CONFIGURATION_CLASS_MAPPING = {}
Gui.ELEMENT_PROCESSING_FUNCTIONS = {}
Gui.NAV_AXES = {InputAction.MENU_AXIS_LEFT_RIGHT, InputAction.MENU_AXIS_UP_DOWN}
Gui.NAV_ACTIONS = {InputAction.MENU_ACCEPT, InputAction.MENU_ACTIVATE, InputAction.MENU_CANCEL, InputAction.MENU_BACK, InputAction.MENU, InputAction.TOGGLE_STORE, InputAction.TOGGLE_MAP, InputAction.MENU_PAGE_PREV, InputAction.MENU_PAGE_NEXT, InputAction.MENU_EXTRA_1, InputAction.MENU_EXTRA_2}
Gui.GUI_PROFILE_BASE = "baseReference"
Gui.INPUT_CONTEXT_MENU = "MENU"
Gui.INPUT_CONTEXT_DIALOG = "DIALOG"
function Gui.new()
  local v0 = setmetatable({}, u0)
  local v1 = GuiSoundPlayer.new(g_soundManager)
  v0.guiSoundPlayer = v1
  v1:setSoundPlayer(v0.guiSoundPlayer)
  v0.screens = {}
  v0.screenControllers = {}
  v0.dialogs = {}
  v0.profiles = {}
  v0.traits = {}
  v0.presets = {}
  v0.focusElements = {}
  v0.guis = {}
  v0.nameScreenTypes = {}
  v0.currentGuiName = ""
  v0.currentlyReloading = false
  v0.frames = {}
  v0.isInputListening = false
  v0.actionEventIds = {}
  v0.frameInputTarget = nil
  v0.frameInputHandled = false
  v1 = v0:makeChangeScreenClosure()
  v0.changeScreenClosure = v1
  v1 = v0:makeToggleCustomInputContextClosure()
  v0.toggleCustomInputContextClosure = v1
  v1 = v0:makePlaySampleClosure()
  v0.playSampleClosure = v1
  v1:clearGroupRegion(AdsSystem.OCCLUSION_GROUP.UI)
  v1:addGroupRegion(AdsSystem.OCCLUSION_GROUP.UI, 0, 0, 1, 1)
  v1:setGroupActive(AdsSystem.OCCLUSION_GROUP.UI, false)
  return v0
end
function Gui:delete()
  v1:delete()
  for v4, v5 in pairs(self.guis) do
    v5:delete()
    v6:delete()
  end
  for v4, v5 in pairs(self.frames) do
    v6:delete()
    v5:delete()
  end
  self.currentGui = nil
end
function Gui:loadPresets(xmlFile, rootKey)
  while true do
    v5 = string.format("%s.Preset(%d)", rootKey, v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#name")
    v7 = getXMLString(xmlFile, v5 .. "#value")
    if v6 ~= nil and v7 ~= nil then
      v8 = v7:startsWith("$preset_")
      if v8 then
        v8 = string.gsub(v7, "$preset_", "")
        if v3[v8] ~= nil then
        else
          Logging.devWarning("Preset '%s' is not defined in Preset!", v8)
        end
      end
      if self.presets[v6] ~= nil then
        -- if not v0.currentlyReloading then goto L67 end
      end
      v3[v6] = v7
      self.presets[v6] = v7
      -- goto L73  (LOP_JUMP +6)
      Logging.xmlError(xmlFile, "GUI-Preset name '%s' already defined!", v6)
    end
  end
  return v3
end
function Gui:loadTraits(xmlFile, rootKey, presets)
  while true do
    v5 = GuiProfile.new(self.profiles, self.traits)
    v6 = v5:loadFromXML(xmlFile, rootKey .. ".Trait(" .. v4 .. ")", presets, true)
    if not v6 then
      break
    end
    if self.traits[v5.name] ~= nil then
      -- if not v0.currentlyReloading then goto L36 end
    end
    self.traits[v5.name] = v5
    -- goto L43  (LOP_JUMP +7)
    Logging.xmlError(xmlFile, "GUI-Trait name '%s' already defined!", v5.name)
  end
end
function Gui:loadProfileSet(xmlFile, rootKey, presets, categoryName)
  while true do
    v6 = GuiProfile.new(self.profiles, self.traits)
    v7 = v6:loadFromXML(xmlFile, rootKey .. ".Profile(" .. v5 .. ")", presets, false)
    if not v7 then
      break
    end
    if self.profiles[v6.name] ~= nil then
      -- if not v0.currentlyReloading then goto L119 end
    end
    v6.category = categoryName
    self.profiles[v6.name] = v6
    while true do
      v9 = hasXMLProperty(xmlFile, rootKey .. ".Profile(" .. v5 .. ").Variant(" .. v7 .. ")")
      -- if not v9 then goto L126 end
      v9 = getXMLString(xmlFile, rootKey .. ".Profile(" .. v5 .. ").Variant(" .. v7 .. ")" .. "#name")
      if v9 ~= nil then
        v10 = GuiProfile.new(self.profiles, self.traits)
        v11 = v10:loadFromXML(xmlFile, rootKey .. ".Profile(" .. v5 .. ").Variant(" .. v7 .. ")", presets, false, true)
        -- if not v11 then goto L126 end
        if v10.parent == nil then
          v10.parent = v6.name
        end
        v10.category = categoryName
        v10.name = v9 .. "_" .. v6.name
        if self.profiles[v10.name] ~= nil then
          -- if not v0.currentlyReloading then goto L109 end
        end
        self.profiles[v10.name] = v10
        -- goto L116  (LOP_JUMP +7)
        Logging.xmlError(xmlFile, "GUI-Profile name '%s' already defined!", v10.name)
      end
    end
    -- goto L126  (LOP_JUMP +7)
    Logging.xmlError(xmlFile, "GUI-Profile name '%s' already defined!", v6.name)
  end
end
function Gui:loadProfiles(xmlFilename)
  local xmlFile = loadXMLFile("Temp", xmlFilename)
  if xmlFile ~= nil and xmlFile ~= 0 then
    self:loadPresets(xmlFile, "GuiProfiles.Presets")
    self:loadTraits(xmlFile, "GuiProfiles.Traits", self.presets)
    self:loadProfileSet(xmlFile, "GuiProfiles", self.presets)
    while true do
      v4 = string.format("GuiProfiles.Category(%d)", v3)
      v5 = hasXMLProperty(xmlFile, v4)
      if not v5 then
        break
      end
      v5 = getXMLString(xmlFile, v4 .. "#name")
      self:loadProfileSet(xmlFile, v4, self.presets, v5)
    end
    delete(xmlFile)
    return true
  end
  Logging.error("Could not open guiProfile-config '%s'!", xmlFilename)
  return false
end
function Gui:loadGui(xmlFilename, name, controller, isFrame)
  local xmlFile = loadXMLFile("Temp", xmlFilename)
  if xmlFile ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000003 -> L13
  end
  if self.currentlyReloading then
    self:loadProfileSet(xmlFile, "GUI.GuiProfiles", self.presets)
    v7:setGui(name)
    local v7 = GuiElement.new(controller)
    v7.name = name
    v7.xmlFilename = xmlFilename
    controller.name = name
    controller.xmlFilename = xmlFilename
    v7:loadFromXML(xmlFile, "GUI")
    if isFrame then
      controller.name = v7.name
    end
    self:loadGuiRec(xmlFile, "GUI", v6, controller)
    if not isFrame then
      v6:applyScreenAlignment()
      v6:updateAbsolutePosition()
    end
    controller:addElement(v6)
    controller:exposeControlsAsFields(name)
    controller:onGuiSetupFinished()
    v6:raiseCallback("onCreateCallback", v6, v6.onCreateArgs)
    if isFrame then
      self:addFrame(controller, v6)
    else
      self.guis[name] = v6
      local v8 = controller:class()
      self.nameScreenTypes[name] = v8
      local v9 = controller:class()
      self:addScreen(v9, controller, v6)
    end
    delete(xmlFile)
    return v6
  end
  Logging.error("Could not open gui-config '%s'!", xmlFilename)
  return v6
end
function Gui:loadGuiRec(xmlFile, xmlNodePath, parentGuiElement, target)
  while true do
    v7 = getXMLString(xmlFile, xmlNodePath .. ".GuiElement(" .. v5 .. ")" .. "#type")
    if not (v7 ~= nil) then
      break
    end
    if Gui.CONFIGURATION_CLASS_MAPPING[v7] then
      v10 = Gui.CONFIGURATION_CLASS_MAPPING[v7].new(target)
    else
      v10 = GuiElement.new(target)
    end
    v8.typeName = v7
    v8:loadFromXML(xmlFile, v6)
    parentGuiElement:addElement(v8)
    if Gui.ELEMENT_PROCESSING_FUNCTIONS[v7] then
      v11 = Gui.ELEMENT_PROCESSING_FUNCTIONS[v7](self, v8)
    end
    self:loadGuiRec(xmlFile, v6, v8, target)
    if v8.onElementCreated ~= nil then
      v8:onElementCreated()
    end
    v8:raiseCallback("onCreateCallback", v8, v8.onCreateArgs)
  end
end
function Gui:resolveFrameReference(frameRefElement)
  if self.frames[frameRefElement.referencedFrameName or ""] ~= nil then
    v6:setGui(frameRefElement.name or frameRefElement.referencedFrameName or "")
    local v7 = self.frames[frameRefElement.referencedFrameName or ""].parent:clone(frameRefElement.parent, true, true)
    v7.name = frameRefElement.name or frameRefElement.referencedFrameName or ""
    v7.positionOrigin = frameRefElement.parent.positionOrigin
    v7.screenAlign = frameRefElement.parent.screenAlign
    local v10 = unpack(frameRefElement.parent.size)
    v7:setSize(...)
    local v8 = v7:getRootElement()
    v8.positionOrigin = frameRefElement.parent.positionOrigin
    v8.screenAlign = frameRefElement.parent.screenAlign
    local v11 = unpack(frameRefElement.parent.size)
    v8:setSize(...)
    v7:setTarget(v7, self.frames[frameRefElement.referencedFrameName or ""].parent, true)
    v7.id = frameRefElement.id
    if frameRefElement.target then
      frameRefElement.target[frameRefElement.id] = v7
    end
    v10:loadElementFromCustomValues(v7, nil, nil, false, false)
    frameRefElement:unlinkElement()
    frameRefElement:delete()
    return v7
  end
  return frameRefElement
end
function Gui:getProfile(profileName)
  if profileName ~= nil then
    for v7, v8 in ipairs(Platform.guiPrefixes) do
      if not (self.profiles[v8 .. v3] ~= nil) then
        continue
      end
    end
    if not v2 and Platform.isConsole and self.profiles["console_" .. profileName] ~= nil then
    end
    if not v2 and Platform.isMobile and self.profiles["mobile_" .. profileName] ~= nil then
    end
  end
  if profileName then
    -- if v0.profiles[v1] then goto L69 end
  end
  if profileName and profileName ~= "" then
    v4 = tostring(profileName)
    Logging.warning(...)
  end
  return self.profiles[Gui.GUI_PROFILE_BASE]
end
function Gui:getIsGuiVisible()
  if self.currentGui == nil then
    local v1 = self:getIsDialogVisible()
  end
  return v1
end
function Gui:getIsMenuVisible()
  if self.currentGui == nil then
  end
  return true
end
function Gui:getIsDialogVisible()
  if 0 >= #self.dialogs then
  end
  return true
end
function Gui:getIsOverlayGuiVisible()
  if self.screens[ConstructionScreen] == nil then
    return false
  end
  if self.currentGui ~= self.screens[ConstructionScreen] then
  end
  return true
end
function Gui:showGui(guiName)
  if guiName == nil then
  end
  return self:changeScreen(self.guis[self.currentGui], self.nameScreenTypes[guiName])
end
function Gui:showDialog(guiName, closeAllOthers)
  self.currentDialogName = guiName
  self.currentDialog = guiName
  if self.guis[guiName] ~= nil then
    if closeAllOthers then
      for v8, v9 in ipairs(self.dialogs) do
        if not (v9 ~= v3) then
          continue
        end
        self:closeDialog(v9)
      end
    end
    if self.currentListener == v3 then
      return v3
    end
    if self.currentListener ~= nil then
      v7 = v7:getFocusedElement()
      self.focusElements[self.currentListener] = v7
    end
    v5 = self:getIsGuiVisible()
    if not v5 then
      self:enterMenuContext()
    end
    local v10 = tostring(guiName)
    self:enterMenuContext(Gui.INPUT_CONTEXT_DIALOG .. "_" .. v10)
    v5:setGui(guiName)
    table.insert(self.dialogs, v3)
    v3:onOpen()
    self.currentListener = v3
    if v4 ~= nil and v4 == v3 then
    end
    v5:publish(v7, v8, v9)
    v3.blurAreaActive = false
    if v3.target.getBlurArea ~= nil then
      v5, v6, v7, v8 = v5:getBlurArea()
      if v5 ~= nil then
        v3.blurAreaActive = true
        v9:pushArea(v5, v6, v7, v8)
      end
    end
  end
  return v3
end
function Gui:closeDialogByName(guiName)
  if self.guis[guiName] ~= nil then
    self:closeDialog(self.guis[guiName])
  end
end
function Gui:closeDialog(gui)
  for v5, v6 in ipairs(self.dialogs) do
    if not (v6 == gui) then
      continue
    end
    v6:onClose()
    table.remove(self.dialogs, v5)
    if gui.blurAreaActive then
      v7:popArea()
      gui.blurAreaActive = false
    end
    if self.currentListener == gui then
      if 0 < #self.dialogs then
        self.currentListener = self.dialogs[#self.dialogs]
      elseif self.currentGui == gui then
        self.currentListener = nil
        self.currentGui = nil
      else
        self.currentListener = self.currentGui
      end
      if self.currentListener ~= nil then
        v7:setGui(self.currentListener.name)
        if self.focusElements[self.currentListener] ~= nil then
          v7:setFocus(self.focusElements[self.currentListener])
          self.focusElements[self.currentListener] = nil
        end
      end
    end
    v7:revertContext(false)
    break
  end
  v2 = self:getIsGuiVisible()
  if not v2 then
    self:changeScreen(nil)
  end
end
function Gui:closeAllDialogs()
  for v4, v5 in ipairs(self.dialogs) do
    self:closeDialog(v5)
  end
end
function Gui:registerMenuInput()
  self.actionEventIds = {}
  for v4, v5 in ipairs(Gui.NAV_ACTIONS) do
    local v6, v7 = v6:registerActionEvent(v5, self, self.onMenuInput, false, true, false, true)
    v8:setActionEventTextVisibility(v7, false)
    if self.actionEventIds[v5] == nil then
      self.actionEventIds[v5] = {}
    end
    table.addElement(self.actionEventIds[v5], v7)
    if v5 ~= InputAction.MENU_PAGE_PREV and not (v5 == InputAction.MENU_PAGE_NEXT) then
      continue
    end
    local v8, v9 = v8:registerActionEvent(v5, self, self.onReleaseInput, true, false, false, true)
    v8:setActionEventTextVisibility(v9, false)
    table.addElement(self.actionEventIds[v5], v9)
  end
  for v4, v5 in pairs(Gui.NAV_AXES) do
    v6, v7 = v6:registerActionEvent(v5, self, self.onMenuInput, false, true, true, true)
    v8:setActionEventTextVisibility(v7, false)
    if self.actionEventIds[v5] == nil then
      self.actionEventIds[v5] = {}
    end
    table.addElement(self.actionEventIds[v5], v7)
    v8, v9 = v8:registerActionEvent(v5, self, self.onReleaseMovement, true, false, false, true)
    v8:setActionEventTextVisibility(v9, false)
    table.addElement(self.actionEventIds[v5], v9)
  end
  self.isInputListening = true
end
function Gui:mouseEvent(posX, posY, isDown, isUp, button)
  if self.currentListener ~= nil then
    local v7 = v7:mouseEvent(posX, posY, isDown, isUp, button)
  end
  if not v6 and self.currentListener ~= nil and self.currentListener.target ~= nil and self.currentListener.target.mouseEvent ~= nil then
    v7:mouseEvent(posX, posY, isDown, isUp, button)
  end
end
function Gui:touchEvent(posX, posY, isDown, isUp, touchId)
  if self.currentListener ~= nil and self.currentListener.touchEvent ~= nil then
    local v7 = v7:touchEvent(posX, posY, isDown, isUp, touchId)
  end
  if not v6 and self.currentListener ~= nil and self.currentListener.target ~= nil and self.currentListener.target.touchEvent ~= nil then
    v7:touchEvent(posX, posY, isDown, isUp, touchId)
  end
end
function Gui:keyEvent(unicode, sym, modifier, isDown)
  if self.currentListener ~= nil then
    local v6 = v6:keyEvent(unicode, sym, modifier, isDown)
  end
  if self.currentListener ~= nil and self.currentListener.target ~= nil and not v5 and self.currentListener.target.keyEvent ~= nil then
    v6:keyEvent(unicode, sym, modifier, isDown, v5)
  end
end
function Gui:update(dt)
  for v5, v6 in pairs(self.dialogs) do
    if not (v6.target ~= nil) then
      continue
    end
    v7:update(dt)
  end
  if self.currentGui ~= nil then
    if self.currentGui.target ~= nil and self.currentGui.target.preUpdate ~= nil then
      v3:preUpdate(dt)
    end
    if v2 == self.currentGui and v2 == self.currentGui and v2.target ~= nil and v2.target.update ~= nil then
      v3:update(dt)
    end
  end
  self.frameInputTarget = nil
  self.frameInputHandled = false
end
function Gui:draw()
  if self.currentGui ~= nil and self.currentGui.target ~= nil and self.currentGui.target.draw ~= nil then
    gui:draw()
  end
  for v4, v5 in pairs(self.dialogs) do
    if not (v5.target ~= nil) then
      continue
    end
    v6:draw()
  end
  if g_uiDebugEnabled then
    setTextAlignment(RenderText.ALIGN_CENTER)
    if FocusManager.currentFocusData.focusElement == nil then
    elseif not FocusManager.currentFocusData.focusElement.id and not FocusManager.currentFocusData.focusElement.profile then
      -- goto L72  (LOP_JUMP +0)
    end
    v3(v4, v5, v6, v8 .. v9)
    if gui ~= nil then
      local v10 = v10:getNextFocusElement(gui, FocusManager.TOP)
      if v10 == nil then
      elseif not v10.id and not v10.profile then
        -- goto L103  (LOP_JUMP +0)
      end
      v3(v4, v5, v6, v8 .. v9)
      v10 = v10:getNextFocusElement(gui, FocusManager.BOTTOM)
      if v10 == nil then
      elseif not v10.id and not v10.profile then
        -- goto L132  (LOP_JUMP +0)
      end
      v3(v4, v5, v6, v8 .. v9)
      v10 = v10:getNextFocusElement(gui, FocusManager.LEFT)
      if v10 == nil then
      elseif not v10.id and not v10.profile then
        -- goto L161  (LOP_JUMP +0)
      end
      v3(v4, v5, v6, v8 .. v9)
      v10 = v10:getNextFocusElement(gui, FocusManager.RIGHT)
      if v10 == nil then
      elseif not v10.id and not v10.profile then
        -- goto L190  (LOP_JUMP +0)
      end
      v3(v4, v5, v6, v8 .. v9)
      drawFilledRect(gui.absPosition[1] - 3 / g_screenWidth, gui.absPosition[2] - 3 / g_screenHeight, gui.absSize[1] + 2 * 3 / g_screenWidth, 3 / g_screenHeight, 1, 0.5, 0, 1)
      drawFilledRect(gui.absPosition[1] - 3 / g_screenWidth, gui.absPosition[2] + gui.absSize[2], gui.absSize[1] + 2 * 3 / g_screenWidth, 3 / g_screenHeight, 1, 0.5, 0, 1)
      drawFilledRect(gui.absPosition[1] - 3 / g_screenWidth, gui.absPosition[2], 3 / g_screenWidth, gui.absSize[2], 1, 0.5, 0, 1)
      drawFilledRect(gui.absPosition[1] + gui.absSize[1], gui.absPosition[2], 3 / g_screenWidth, gui.absSize[2], 1, 0.5, 0, 1)
    end
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
end
function Gui:notifyControls(action, value)
  if self.frameInputTarget == nil then
    self.frameInputTarget = self.currentListener
  end
  local v4 = v4:isFocusInputLocked(action, value)
  if not v4 then
    if not v3 and self.frameInputTarget ~= nil then
      local v5 = v5:inputEvent(action, value)
    end
    if not v3 and self.frameInputTarget ~= nil and self.frameInputTarget.target ~= nil then
      v5 = v5:inputEvent(action, value)
    end
    v5 = v5:getFocusedElement()
    if not v3 and v5 ~= nil then
      local v6 = v5:getIsActive()
      if v6 then
        v6 = v5:inputEvent(action, value)
      end
    end
    if not v3 then
      v6 = v6:inputEvent(action, value, v3)
    end
  end
  self.frameInputHandled = v3
end
function Gui:onMenuInput(actionName, inputValue)
  if not self.frameInputHandled and self.isInputListening then
    self:notifyControls(actionName, inputValue)
  end
end
function Gui:onReleaseMovement(action)
  self:onReleaseInput(action)
  v2:releaseMovementFocusInput(action)
end
function Gui:onReleaseInput(action)
  if not self.frameInputHandled and self.isInputListening then
    local v2 = v2:isFocusInputLocked(action)
    if not v2 then
      if self.frameInputTarget ~= nil then
        v3:inputReleaseEvent(action)
      end
      if self.frameInputTarget ~= nil and self.frameInputTarget.target ~= nil then
        v3:inputReleaseEvent(action)
      end
      local v3 = v3:getFocusedElement()
      if v3 ~= nil then
        local v4 = v3:getIsActive()
        if v4 then
          v3:inputReleaseEvent(action)
        end
      end
    end
  end
end
function Gui:hasElementInputFocus(element)
  if self.currentListener ~= nil and self.currentListener.target ~= element then
  end
  return v2
end
function Gui:getScreenInstanceByClass(screenClass)
  return self.screenControllers[screenClass]
end
function Gui:changeScreen(source, screenClass, returnScreenClass)
  if screenClass ~= nil and self.screenControllers[screenClass] == nil then
    local v7 = ClassUtil.getClassName(screenClass)
    Logging.devWarning(...)
    return nil
  end
  self:closeAllDialogs()
  local v6 = self:getIsGuiVisible()
  if source ~= nil then
    source:onClose()
  end
  if source == nil and self.currentGui ~= nil then
    v7:onClose()
  end
  if v6 then
    -- if v6.name then goto L48 end
  end
  self.currentGui = v6
  self.currentGuiName = ""
  self.currentListener = v6
  if v6 ~= nil and v5 then
    v8:publish(MessageType.GUI_BEFORE_OPEN)
    self:enterMenuContext()
  end
  v8:setGui(v7)
  if v6 ~= nil and self.screenControllers[screenClass] ~= nil then
    if not returnScreenClass then
    end
    v4:setReturnScreenClass(v10)
    v6:onOpen()
    if v5 then
      v8:publish(MessageType.GUI_AFTER_OPEN)
    end
  end
  local v8 = self:getIsGuiVisible()
  if not v8 then
    v8:publish(MessageType.GUI_BEFORE_CLOSE)
    self:leaveMenuContext()
    v8:publish(MessageType.GUI_AFTER_CLOSE)
  end
  if self.currentGui == nil then
  end
  v8:setGroupActive(v10, true)
  return v6
end
function Gui.makeChangeScreenClosure(v0)
  return function(v0, gui, v2)
    v3:changeScreen(v0, gui, v2)
  end
end
function Gui:toggleCustomInputContext(isActive, contextName)
  if isActive then
    self:enterMenuContext(contextName)
    return
  end
  self:leaveMenuContext()
end
function Gui.makeToggleCustomInputContextClosure(v0)
  return function(v0, gui)
    v2:toggleCustomInputContext(v0, gui)
  end
end
function Gui.makePlaySampleClosure(v0)
  return function(v0)
    gui:playSample(v0)
  end
end
function Gui:assignPlaySampleCallback(guiElement)
  local v2 = guiElement:hasIncluded(PlaySampleMixin)
  if v2 then
    guiElement:setPlaySampleCallback(self.playSampleClosure)
  end
  return guiElement
end
function Gui:enterMenuContext(contextName)
  if not contextName then
  end
  v2:setContext(v4, true, false)
  self:registerMenuInput()
  self.isInputListening = true
end
function Gui:leaveMenuContext()
  if self.isInputListening then
    gui:revertContext(false)
    local gui = self:getIsGuiVisible()
    self.isInputListening = gui
  end
end
function Gui:addFrame(frameController, frameRootElement)
  self.frames[frameController.name] = frameRootElement
  frameController:setChangeScreenCallback(self.changeScreenClosure)
  frameController:setInputContextCallback(self.toggleCustomInputContextClosure)
  frameController:setPlaySampleCallback(self.playSampleClosure)
end
function Gui:addScreen(screenClass, screenInstance, screenRootElement)
  self.screens[screenClass] = screenRootElement
  self.screenControllers[screenClass] = screenInstance
  screenInstance:setChangeScreenCallback(self.changeScreenClosure)
  screenInstance:setInputContextCallback(self.toggleCustomInputContextClosure)
  screenInstance:setPlaySampleCallback(self.playSampleClosure)
end
function Gui:setCurrentMission(currentMission)
  for v5, v6 in pairs(self.screenControllers) do
    if not (v6.setCurrentMission ~= nil) then
      continue
    end
    v6:setCurrentMission(currentMission)
  end
end
function Gui:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  if not Platform.isMobile then
    v4:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  end
  if Platform.hasWardrobe then
    v4:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  end
end
function Gui:unloadMapData()
  gui:unloadMapData()
  if Platform.hasWardrobe then
    gui:unloadMapData()
  end
end
function Gui:setClient(client)
  for v5, v6 in pairs(self.screenControllers) do
    if not (v6.setClient ~= nil) then
      continue
    end
    v6:setClient(client)
  end
end
function Gui:setServer(server)
  for v5, v6 in pairs(self.screenControllers) do
    if not (v6.setServer ~= nil) then
      continue
    end
    v6:setServer(server)
  end
end
function Gui:setIsMultiplayer(isMultiplayer)
  for v6, v7 in pairs({CareerScreen}) do
    if not (self.screenControllers[v7] ~= nil) then
      continue
    end
    self.screenControllers[v7]:setIsMultiplayer(isMultiplayer)
  end
end
function Gui.showLicensePlateDialog(v0, gui)
  if gui ~= nil then
    LicensePlateDialog.show(gui.licensePlateData, gui.callback, gui.target)
  end
end
function Gui.showYesNoDialog(v0, gui)
  if gui ~= nil then
    YesNoDialog.show(gui.callback, gui.target, gui.text, gui.title, gui.yesText, gui.noText, gui.dialogType, gui.yesSound, gui.noSound, gui.callbackArgs)
  end
end
function Gui.showAnimalTradingDialog(v0, gui)
  if gui ~= nil then
    AnimalTradingDialog.show(gui.callback, gui.target, gui.animalIndex, gui.isHorse, gui.infoIcon, gui.maxAnimals, gui.isBuying, gui.selectionState, gui.getPriceFunc)
  end
end
function Gui.showTextInputDialog(v0, gui)
  if gui ~= nil then
    TextInputDialog.show(gui.callback, gui.target, gui.defaultText, gui.dialogPrompt, gui.imePrompt, gui.maxCharacters, gui.confirmText, gui.callbackArgs, gui.text, gui.applyTextFilter)
  end
end
function Gui.showPasswordDialog(v0, gui)
  if gui ~= nil then
    PasswordDialog.show(gui.callback, gui.target, gui.callbackArgs, gui.defaultPassword, gui.confirmButtonText)
  end
end
function Gui.showLeaseYesNoDialog(v0, gui)
  if gui ~= nil then
    LeaseYesNoDialog.show(gui.callback, gui.target, gui.costsBase, gui.initialCosts, gui.costsPerOperatingHour, gui.costsPerDay)
  end
end
function Gui.showOptionDialog(v0, gui)
  if gui ~= nil then
    OptionDialog.show(gui.callback, gui.text, gui.title, gui.options)
  end
end
function Gui.showInfoDialog(v0, gui)
  if gui ~= nil then
    InfoDialog.show(gui.text, gui.callback, gui.target, gui.dialogType, gui.okText, gui.buttonAction, gui.callbackArgs)
  end
end
function Gui.showMessageDialog(v0, gui)
  if gui ~= nil then
    if gui.visible then
      MessageDialog.show(gui.callback, gui.target, gui.text, gui.dialogType, gui.isCloseAllowed, gui.callbackArgs)
      return
    end
    MessageDialog.hide()
  end
end
function Gui.showConnectionFailedDialog(v0, gui)
  if gui ~= nil then
    ConnectionFailedDialog.show(gui.text, gui.callback, gui.target, gui.callbackArgs)
  end
end
function Gui.showDenyAcceptDialog(v0, gui)
  if gui ~= nil then
    DenyAcceptDialog.show(gui.callback, gui.target, gui.connection, gui.nickname, gui.platformId, gui.splitShapesWithinLimits)
  end
end
function Gui.showSiloDialog(v0, gui)
  if gui ~= nil then
    SiloDialog.show(gui.callback, gui.target, gui.title, gui.fillLevels, gui.hasInfiniteCapacity)
  end
end
function Gui.showRefillDialog(v0, gui)
  if gui ~= nil then
    RefillDialog.show(gui.callback, gui.target, gui.freeCapacities, gui.priceFactor)
  end
end
function Gui.showAnimalDialog(v0, gui)
  if gui ~= nil then
    AnimalDialog.show(gui.callback, gui.target, gui.title, gui.husbandries)
  end
end
function Gui.showSellItemDialog(v0, gui)
  if gui ~= nil then
    SellItemDialog.show(gui.callback, gui.target, gui.item, gui.price, gui.storeItem)
  end
end
function Gui.showEditFarmDialog(v0, gui)
  if gui ~= nil then
    EditFarmDialog.show(gui.farmId)
  end
end
function Gui.showPlaceableInfoDialog(v0, gui)
  if gui ~= nil then
    PlaceableInfoDialog.show(gui.callback, gui.placeable)
  end
end
function Gui.showUnblockDialog(v0, gui)
  if gui ~= nil then
    UnBanDialog.show(gui.callback, gui.target, gui.useLocal)
  end
end
function Gui.showSleepDialog(v0, gui)
  if gui ~= nil then
    SleepDialog.show(gui.text, gui.callback, gui.target)
  end
end
function Gui.showTransferMoneyDialog(v0, gui)
  if gui ~= nil then
    TransferMoneyDialog.show(gui.callback, gui.target, gui.farm)
  end
end
function Gui.showServerSettingsDialog(v0, gui)
  ServerSettingsDialog.show()
end
function Gui.showVoteDialog(v0, gui)
  if gui ~= nil then
    VoteDialog.show(gui.callback, gui.target, gui.value)
  end
end
function Gui.showGameRateDialog(v0, gui)
  GameRateDialog.show()
end
function Gui.showModHubScreenshotDialog(v0, gui)
  if gui ~= nil then
    ModHubScreenshotDialog.show(gui.modInfo)
  end
end
function Gui.initGuiLibrary(baseDir)
  source(baseDir .. "/base/GuiProfile.lua")
  source(baseDir .. "/base/GuiUtils.lua")
  source(baseDir .. "/base/GuiOverlay.lua")
  source(baseDir .. "/base/GuiDataSource.lua")
  source(baseDir .. "/base/GuiMixin.lua")
  source(baseDir .. "/base/IndexChangeSubjectMixin.lua")
  source(baseDir .. "/base/PlaySampleMixin.lua")
  source(baseDir .. "/base/Tween.lua")
  source(baseDir .. "/base/MultiValueTween.lua")
  source(baseDir .. "/base/TweenSequence.lua")
  source(baseDir .. "/elements/GuiElement.lua")
  source(baseDir .. "/elements/FrameElement.lua")
  source(baseDir .. "/elements/ScreenElement.lua")
  source(baseDir .. "/elements/DialogElement.lua")
  source(baseDir .. "/elements/BitmapElement.lua")
  source(baseDir .. "/elements/ClearElement.lua")
  source(baseDir .. "/elements/TextElement.lua")
  source(baseDir .. "/elements/ButtonElement.lua")
  source(baseDir .. "/elements/ToggleButtonElement.lua")
  source(baseDir .. "/elements/ColorPickButtonElement.lua")
  source(baseDir .. "/elements/VideoElement.lua")
  source(baseDir .. "/elements/SliderElement.lua")
  source(baseDir .. "/elements/TextInputElement.lua")
  source(baseDir .. "/elements/ListElement.lua")
  source(baseDir .. "/elements/MultiTextOptionElement.lua")
  source(baseDir .. "/elements/CheckedOptionElement.lua")
  source(baseDir .. "/elements/ListItemElement.lua")
  source(baseDir .. "/elements/AnimationElement.lua")
  source(baseDir .. "/elements/TimerElement.lua")
  source(baseDir .. "/elements/BoxLayoutElement.lua")
  source(baseDir .. "/elements/FlowLayoutElement.lua")
  source(baseDir .. "/elements/PagingElement.lua")
  source(baseDir .. "/elements/TableElement.lua")
  source(baseDir .. "/elements/TableHeaderElement.lua")
  source(baseDir .. "/elements/IngameMapElement.lua")
  source(baseDir .. "/elements/IndexStateElement.lua")
  source(baseDir .. "/elements/FrameReferenceElement.lua")
  source(baseDir .. "/elements/RenderElement.lua")
  source(baseDir .. "/elements/BreadcrumbsElement.lua")
  source(baseDir .. "/elements/ThreePartBitmapElement.lua")
  source(baseDir .. "/elements/PictureElement.lua")
  source(baseDir .. "/elements/ScrollingLayoutElement.lua")
  source(baseDir .. "/elements/MultiOptionElement.lua")
  source(baseDir .. "/elements/TextBackdropElement.lua")
  source(baseDir .. "/elements/InputGlyphElementUI.lua")
  source(baseDir .. "/elements/TerrainLayerElement.lua")
  source(baseDir .. "/elements/SmoothListElement.lua")
  source(baseDir .. "/elements/DynamicFadedBitmapElement.lua")
  source(baseDir .. "/elements/PlatformIconElement.lua")
  source(baseDir .. "/elements/OptionToggleElement.lua")
  source(baseDir .. "/elements/RoundCornerElement.lua")
  Gui.CONFIGURATION_CLASS_MAPPING.button = ButtonElement
  Gui.CONFIGURATION_CLASS_MAPPING.toggleButton = ToggleButtonElement
  Gui.CONFIGURATION_CLASS_MAPPING.video = VideoElement
  Gui.CONFIGURATION_CLASS_MAPPING.slider = SliderElement
  Gui.CONFIGURATION_CLASS_MAPPING.text = TextElement
  Gui.CONFIGURATION_CLASS_MAPPING.textInput = TextInputElement
  Gui.CONFIGURATION_CLASS_MAPPING.bitmap = BitmapElement
  Gui.CONFIGURATION_CLASS_MAPPING.clear = ClearElement
  Gui.CONFIGURATION_CLASS_MAPPING.list = ListElement
  Gui.CONFIGURATION_CLASS_MAPPING.multiTextOption = MultiTextOptionElement
  Gui.CONFIGURATION_CLASS_MAPPING.checkedOption = CheckedOptionElement
  Gui.CONFIGURATION_CLASS_MAPPING.listItem = ListItemElement
  Gui.CONFIGURATION_CLASS_MAPPING.animation = AnimationElement
  Gui.CONFIGURATION_CLASS_MAPPING.timer = TimerElement
  Gui.CONFIGURATION_CLASS_MAPPING.boxLayout = BoxLayoutElement
  Gui.CONFIGURATION_CLASS_MAPPING.flowLayout = FlowLayoutElement
  Gui.CONFIGURATION_CLASS_MAPPING.paging = PagingElement
  Gui.CONFIGURATION_CLASS_MAPPING.table = TableElement
  Gui.CONFIGURATION_CLASS_MAPPING.tableHeader = TableHeaderElement
  Gui.CONFIGURATION_CLASS_MAPPING.ingameMap = IngameMapElement
  Gui.CONFIGURATION_CLASS_MAPPING.indexState = IndexStateElement
  Gui.CONFIGURATION_CLASS_MAPPING.frameReference = FrameReferenceElement
  Gui.CONFIGURATION_CLASS_MAPPING.render = RenderElement
  Gui.CONFIGURATION_CLASS_MAPPING.breadcrumbs = BreadcrumbsElement
  Gui.CONFIGURATION_CLASS_MAPPING.threePartBitmap = ThreePartBitmapElement
  Gui.CONFIGURATION_CLASS_MAPPING.picture = PictureElement
  Gui.CONFIGURATION_CLASS_MAPPING.scrollingLayout = ScrollingLayoutElement
  Gui.CONFIGURATION_CLASS_MAPPING.multiOption = MultiOptionElement
  Gui.CONFIGURATION_CLASS_MAPPING.optionToggle = OptionToggleElement
  Gui.CONFIGURATION_CLASS_MAPPING.textBackdrop = TextBackdropElement
  Gui.CONFIGURATION_CLASS_MAPPING.inputGlyph = InputGlyphElementUI
  Gui.CONFIGURATION_CLASS_MAPPING.colorPickButton = ColorPickButtonElement
  Gui.CONFIGURATION_CLASS_MAPPING.terrainLayer = TerrainLayerElement
  Gui.CONFIGURATION_CLASS_MAPPING.smoothList = SmoothListElement
  Gui.CONFIGURATION_CLASS_MAPPING.dynamicFadedBitmap = DynamicFadedBitmapElement
  Gui.CONFIGURATION_CLASS_MAPPING.platformIcon = PlatformIconElement
  Gui.CONFIGURATION_CLASS_MAPPING.roundCorner = RoundCornerElement
  Gui.ELEMENT_PROCESSING_FUNCTIONS.frameReference = Gui.resolveFrameReference
  Gui.ELEMENT_PROCESSING_FUNCTIONS.button = Gui.assignPlaySampleCallback
  Gui.ELEMENT_PROCESSING_FUNCTIONS.slider = Gui.assignPlaySampleCallback
  Gui.ELEMENT_PROCESSING_FUNCTIONS.multiTextOption = Gui.assignPlaySampleCallback
  Gui.ELEMENT_PROCESSING_FUNCTIONS.checkedOption = Gui.assignPlaySampleCallback
  Gui.ELEMENT_PROCESSING_FUNCTIONS.smoothList = Gui.assignPlaySampleCallback
end
