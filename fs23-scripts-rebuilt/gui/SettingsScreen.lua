-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsScreen = {}
local SettingsScreen_mt = Class(SettingsScreen, TabbedMenuWithDetails)
SettingsScreen.CONTROLS = {PAGING_SETTINGS_GENERAL = "pageSettingsGeneral", PAGING_SETTINGS_DISPLAY = "pageSettingsDisplay", PAGING_SETTINGS_ADVANCED = "pageSettingsAdvanced", PAGING_SETTINGS_CONTROLS = "pageSettingsControls", PAGING_SETTINGS_CONSOLE = "pageSettingsConsole", PAGING_SETTINGS_DEVICE = "pageSettingsDevice", PAGING_SETTINGS_HDR = "pageSettingsHDR"}
function SettingsScreen.register()
  SettingsAdvancedFrame.register()
  SettingsConsoleFrame.register()
  SettingsControlsFrame.register()
  SettingsDeviceFrame.register()
  SettingsDisplayFrame.register()
  SettingsGeneralFrame.register()
  SettingsHDRFrame.register()
  local v0 = SettingsScreen.new()
  v1:loadGui("dataS/gui/SettingsScreen.xml", "SettingsScreen", v0)
  return v0
end
function SettingsScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsScreen.CONTROLS)
  return v2
end
function SettingsScreen:createFromExistingGui(v1)
  SettingsAdvancedFrame.createFromExistingGui(g_gui.frames.settingsAdvanced.target, "SettingsAdvancedFrame")
  SettingsConsoleFrame.createFromExistingGui(g_gui.frames.settingsConsole.target, "SettingsConsoleFrame")
  SettingsControlsFrame.createFromExistingGui(g_gui.frames.settingsControls.target, "SettingsControlsFrame")
  SettingsDeviceFrame.createFromExistingGui(g_gui.frames.settingsDevice.target, "SettingsDeviceFrame")
  SettingsDisplayFrame.createFromExistingGui(g_gui.frames.settingsDisplay.target, "SettingsDisplayFrame")
  SettingsGeneralFrame.createFromExistingGui(g_gui.frames.settingsGeneral.target, "SettingsGeneralFrame")
  SettingsHDRFrame.createFromExistingGui(g_gui.frames.settingsHDR.target, "SettingsHDRFrame")
  local v2 = SettingsScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, false)
  return v2
end
function SettingsScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v1 = self:makeSelfCallback(self.onButtonBack)
  self.clickBackCallback = v1
  v1:initialize()
  v1:initialize()
  v1:setOpenAdvancedSettingsCallback(function()
    self:onClickAdvancedSettings()
  end)
  v1:setOpenHDRSettingsCallback(function()
    self:onClickHDRSettings()
  end)
  v1:initialize()
  v1:initialize()
  v1:initialize()
  v1:setOpenHDRSettingsCallback(function()
    self:onClickHDRSettings()
  end)
  v1:initialize()
  v2 = ControlsController.new()
  v3:initialize(v2)
  v3:setRequestButtonUpdateCallback(function()
    local v2 = v2:getMenuButtonInfo()
    self:assignMenuButtonInfo(...)
  end)
  self:setupPages()
  self:setupMenuButtonInfo()
end
function SettingsScreen:setupPages()
  local v4 = self:makeIsVisibleOnPCOnlyPredicate()
  local v5 = self:makeIsVisibleOnPCandGGPPredicate()
  local v6 = self:makeHasInputDevices()
  local v7 = self:makeIsVisibleOnPCOnlyPredicate()
  local v8 = self:makeIsVisibleOnConsoleOnlyPredicate()
  for v5, v6 in ipairs({{self.pageSettingsGeneral, v4, SettingsScreen.TAB_UV.GENERAL_SETTINGS}, {self.pageSettingsDisplay, v5, SettingsScreen.TAB_UV.DISPLAY_SETTINGS}, {self.pageSettingsControls, v6, SettingsScreen.TAB_UV.CONTROLS_SETTINGS}, {self.pageSettingsDevice, v7, SettingsScreen.TAB_UV.DEVICE_SETTINGS}, {self.pageSettingsConsole, v8, SettingsScreen.TAB_UV.CONSOLE_SETTINGS}, {self.pageSettingsAdvanced, function()
    return false
  end, SettingsScreen.TAB_UV.DISPLAY_SETTINGS}, {self.pageSettingsHDR, function()
    return false
  end, SettingsScreen.TAB_UV.DISPLAY_SETTINGS}}) do
    local v7, v8, v9 = unpack(v6)
    self:registerPage(v7, v5, v8)
    local v10 = GuiUtils.getUVs(v9)
    self:addPageTab(v7, g_iconsUIFilename, v10)
  end
end
function SettingsScreen:setupMenuButtonInfo()
  local onButtonQuitFunction = self:makeSelfCallback(self.onButtonQuit)
  local onButtonSaveGameFunction = self:makeSelfCallback(self.onButtonSaveGame)
  local v6 = v6:getText(InGameMenu.L10N_SYMBOL.BUTTON_BACK)
  self.defaultMenuButtonInfo = {{inputAction = InputAction.MENU_BACK, text = v6, callback = self.clickBackCallback}}
  self.defaultMenuButtonInfoByActions[InputAction.MENU_BACK] = self.defaultMenuButtonInfo[1]
  self.defaultMenuButtonInfoByActions[InputAction.MENU_ACTIVATE] = self.defaultMenuButtonInfo[2]
  self.defaultMenuButtonInfoByActions[InputAction.MENU_CANCEL] = self.defaultMenuButtonInfo[3]
  {}[InputAction.MENU_BACK] = self.clickBackCallback
  {}[InputAction.MENU_CANCEL] = onButtonQuitFunction
  {}[InputAction.MENU_ACTIVATE] = onButtonSaveGameFunction
  self.defaultButtonActionCallbacks = {}
end
function SettingsScreen:onSaveChangesBackCallback(yes)
  if yes then
    v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
    if not GS_IS_CONSOLE_VERSION and not GS_PLATFORM_GGP then
      v2:setStartScreen(RestartManager.START_SCREEN_SETTINGS_ADVANCED)
      doRestart(false, "")
      return
    end
    self:changeScreen(MainScreen)
    return
  end
  v2:reset()
  self:changeScreen(MainScreen)
end
function SettingsScreen:exitMenu()
  local v1 = v1:hasChanges()
  if v1 then
    local v4 = v4:getText("ui_saveChanges")
    local v5 = v5:getText("ui_saveSettings")
    YesNoDialog.show(...)
    return
  end
  v1 = v1:requestClose(self.clickBackCallback)
  if v1 then
    self:changeScreen(MainScreen)
  end
end
function SettingsScreen:showDisplaySettings()
  self:goToPage(self.pageSettingsDisplay)
end
function SettingsScreen:showGeneralSettings()
  self:goToPage(self.pageSettingsGeneral)
end
function SettingsScreen:onClickAdvancedSettings()
  self:pushDetail(self.pageSettingsAdvanced)
end
function SettingsScreen:onClickHDRSettings()
  self:pushDetail(self.pageSettingsHDR)
end
function SettingsScreen.makeHasInputDevices(v0)
  return function()
    if not GS_IS_CONSOLE_VERSION then
      local v1 = getNumOfGamepads()
      if 0 >= v1 then
        local v0 = getIsKeyboardAvailable()
      end
    end
    return v0
  end
end
function SettingsScreen.makeIsAlwaysVisiblePredicate(v0)
  return function()
    return v0:getIsDetailMode()
  end
end
function SettingsScreen.makeIsVisibleOnConsoleOnlyPredicate(v0)
  return function()
    return GS_IS_CONSOLE_VERSION
  end
end
function SettingsScreen.makeIsVisibleOnPCOnlyPredicate(v0)
  return function()
    return not GS_IS_CONSOLE_VERSION
  end
end
function SettingsScreen.makeIsVisibleOnPCandGGPPredicate(v0)
  return function()
    if not not GS_IS_CONSOLE_VERSION then
    end
    return v0
  end
end
SettingsScreen.TAB_UV = {GENERAL_SETTINGS = {715, 0, 65, 65}, DISPLAY_SETTINGS = {780, 0, 65, 65}, CONSOLE_SETTINGS = {715, 0, 65, 65}, CONTROLS_SETTINGS = {845, 0, 65, 65}, DEVICE_SETTINGS = {780, 65, 65, 65}}
