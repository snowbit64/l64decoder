-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PrecisionFarmingSettings = {MOD_NAME = g_currentModName}
local PrecisionFarmingSettings_mt = Class(PrecisionFarmingSettings)
function PrecisionFarmingSettings.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  v2.elementsCreated = false
  local v3 = v3:getText("ui_header")
  v2.settingsHeadline = v3
  v2.settings = {}
  return v2
end
function PrecisionFarmingSettings:addSetting(name, title, description, callback, callbackTarget, default, isCheckbox, optionTexts)
  if default ~= nil then
  elseif isCheckbox then
  else
  end
  v9.callback = callback
  v9.callbackTarget = callbackTarget
  v9.isCheckbox = isCheckbox
  v9.optionTexts = optionTexts
  v9.element = nil
  table.insert(self.settings, v9)
  self:loadSettings()
  self:onSettingChanged(v9)
end
function PrecisionFarmingSettings:onSettingChanged(setting)
  if setting.callback ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L14
    setting.callback(setting.state)
  elseif setting.callback ~= nil and setting.callbackTarget ~= nil then
    setting.callback(setting.callbackTarget, setting.state)
  end
  self:saveSettings()
end
function PrecisionFarmingSettings:saveSettings()
  if g_savegameXML ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 44)
    if self.settings[1].isCheckbox then
      local isCheckbox = string.format("gameSettings.precisionFarming.settings.%s#state", self.settings[1].name)
      setXMLBool(g_savegameXML, isCheckbox, self.settings[1].state)
    else
      isCheckbox = string.format("gameSettings.precisionFarming.settings.%s#state", self.settings[1].name)
      setXMLInt(g_savegameXML, isCheckbox, self.settings[1].state)
    end
    -- TODO: structure LOP_FORNLOOP (pc 43, target 10)
  end
  setting:saveToXMLFile(g_savegameXML)
end
function PrecisionFarmingSettings:loadSettings()
  if g_savegameXML ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 54)
    if self.settings[1].isCheckbox then
      local optionTexts = string.format("gameSettings.precisionFarming.settings.%s#state", self.settings[1].name)
      local default = getXMLBool(...)
      local callbackTarget = Utils.getNoNil(default, self.settings[1].state)
      self.settings[1].state = callbackTarget
    else
      optionTexts = string.format("gameSettings.precisionFarming.settings.%s#state", self.settings[1].name)
      default = getXMLInt(...)
      callbackTarget = Utils.getNoNil(default, self.settings[1].state)
      self.settings[1].state = callbackTarget
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 10)
  end
end
function PrecisionFarmingSettings:onClickCheckbox(state, checkboxElement)
  -- TODO: structure LOP_FORNPREP (pc 5, target 26)
  if self.settings[1].element == checkboxElement then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    default.state = true
    self:onSettingChanged(default)
  end
  -- TODO: structure LOP_FORNLOOP (pc 25, target 6)
end
function PrecisionFarmingSettings:onClickMultiOption(state, optionElement)
  -- TODO: structure LOP_FORNPREP (pc 5, target 20)
  if self.settings[1].element == optionElement then
    self.settings[1].state = state
    self:onSettingChanged(self.settings[1])
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 6)
end
function PrecisionFarmingSettings.overwriteGameFunctions(v0, setting)
  setting:overwriteGameFunction(InGameMenuGeneralSettingsFrame, "onFrameOpen", function(v0, setting, title)
    v0(setting, title)
    if not u0.elementsCreated then
      -- TODO: structure LOP_FORNPREP (pc 15, target 44)
      local isCheckbox = setting.boxLayout.elements[1]:isa(TextElement)
      if isCheckbox then
        isCheckbox = setting.boxLayout.elements[1]:clone(setting.boxLayout)
        isCheckbox:setText(u0.settingsHeadline)
        isCheckbox:reloadFocusHandling(true)
      else
        -- TODO: structure LOP_FORNLOOP (pc 43, target 16)
      end
      -- TODO: structure LOP_FORNPREP (pc 50, target 143)
      if u0.settings[1].isCheckbox then
        isCheckbox = isCheckbox:clone(setting.boxLayout)
        u0.settings[1].element = isCheckbox
        function u0.settings[1].element.onClickCallback(v0, ...)
          setting:onClickCheckbox(...)
        end
        isCheckbox:reloadFocusHandling(true)
        isCheckbox:setIsChecked(u0.settings[1].state)
      else
        isCheckbox = isCheckbox:clone(setting.boxLayout)
        u0.settings[1].element = isCheckbox
        isCheckbox:setTexts(u0.settings[1].optionTexts)
        function u0.settings[1].element.onClickCallback(v0, ...)
          setting:onClickMultiOption(...)
        end
        isCheckbox:reloadFocusHandling(true)
        isCheckbox:setState(u0.settings[1].state)
      end
      isCheckbox:setText(default.title)
      isCheckbox:setText(default.description)
      -- TODO: structure LOP_FORNLOOP (pc 142, target 51)
      description:invalidateLayout()
      u0.elementsCreated = true
    end
  end)
  name:overwriteGameFunction(InGameMenuGameSettingsFrame, "onFrameOpen", function(v0, name, title)
    if name.checkLimeRequired ~= nil then
      description:setVisible(false)
      description:invalidateLayout()
    end
    v0(name, title)
  end)
end
