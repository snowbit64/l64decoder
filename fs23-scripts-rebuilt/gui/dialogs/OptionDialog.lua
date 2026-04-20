-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

OptionDialog = {CONTROLS = {"optionElement"}}
local OptionDialog_mt = Class(OptionDialog, YesNoDialog)
function OptionDialog.register()
  local v0 = OptionDialog.new()
  v1:loadGui("dataS/gui/dialogs/OptionDialog.xml", "OptionDialog", v0)
  OptionDialog.INSTANCE = v0
end
function OptionDialog.show(v0, v1, v2, v3)
  if OptionDialog.INSTANCE ~= nil then
    OptionDialog.INSTANCE:setCallback(v0)
    OptionDialog.INSTANCE:setText(v1)
    OptionDialog.INSTANCE:setTitle(v2)
    OptionDialog.INSTANCE:setOptions(v3)
    v5:showDialog("OptionDialog")
  end
end
function OptionDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(OptionDialog.CONTROLS)
  return v2
end
function OptionDialog:createFromExistingGui(v1)
  OptionDialog.register()
  OptionDialog.show(self.callbackFunc, self.optionText, self.optionTitle, self.options)
end
function OptionDialog:onClickOk()
  if self.areButtonsDisabled then
    return true
  end
  local v3 = v3:getState()
  self:sendCallback(...)
  return false
end
function OptionDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(0)
  return false
end
function OptionDialog:setOptions(options)
  self.options = options
  v2:setTexts(options)
end
function OptionDialog:setText(v1)
  local v3 = v3:superClass()
  v3.setText(self, v1)
  self.optionText = v1
end
function OptionDialog:setTitle(v1)
  local v3 = v3:superClass()
  v3.setTitle(self, v1)
  self.optionTitle = v1
end
