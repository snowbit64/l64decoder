-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InfoDialog = {CONTROLS = {OK_BUTTON = "okButton"}}
local InfoDialog_mt = Class(InfoDialog, MessageDialog)
function InfoDialog.register()
  local v0 = InfoDialog.new()
  v1:loadGui("dataS/gui/dialogs/InfoDialog.xml", "InfoDialog", v0)
  InfoDialog.INSTANCE = v0
end
function InfoDialog.show(v0, v1, v2, v3, v4, v5, v6)
  if InfoDialog.INSTANCE ~= nil then
    InfoDialog.INSTANCE:setCallback(v1, v2, v6)
    local v10 = Utils.getNoNil(v3, DialogElement.TYPE_WARNING)
    InfoDialog.INSTANCE:setDialogType(...)
    InfoDialog.INSTANCE:setButtonTexts(v4)
    InfoDialog.INSTANCE:setButtonAction(v5)
    InfoDialog.INSTANCE:setText(v0)
    v8:showDialog("InfoDialog")
  end
end
function InfoDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InfoDialog.CONTROLS)
  v2.buttonAction = InputAction.MENU_ACCEPT
  v2.isBackAllowed = false
  v2.inputDelay = 250
  return v2
end
function InfoDialog:createFromExistingGui(v1)
  InfoDialog.register()
  InfoDialog.show(self.infoText, self.callbackFunc, self.target, self.dialogType, self.okButton.text, self.buttonAction, self.args)
end
function InfoDialog:onCreate()
  local v2 = v2:superClass()
  v2.onCreate(self)
  self:setDialogType(DialogElement.TYPE_INFO)
  self.defaultOkText = self.okButton.text
end
function InfoDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
end
function InfoDialog:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self:setButtonTexts(self.defaultOkText)
  self.buttonAction = InputAction.MENU_ACCEPT
  self:setButtonAction(InputAction.MENU_ACCEPT)
  self:setText("")
end
function InfoDialog:setText(v1)
  local v3 = v3:superClass()
  v3.setText(self, v1)
  self.infoText = v1
end
function InfoDialog:acceptDialog(inputAction, force)
  if inputAction ~= self.buttonAction then
    -- if not v2 then goto L37 end
  end
  if self.inputDelay < self.time then
    self:close()
    if self.onOk ~= nil then
      if self.target ~= nil then
        self.onOk(self.target, self.args)
      else
        self.onOk(self.args)
      end
    end
    return false
  end
  return true
end
function InfoDialog:onClickBack(forceBack, usedMenuButton)
  if not usedMenuButton then
    return self:acceptDialog(InputAction.MENU_BACK, true)
  end
  return true
end
function InfoDialog:onClickOk()
  return self:acceptDialog(self.buttonAction, false)
end
function InfoDialog:setCallback(onOk, target, args)
  self.onOk = onOk
  self.target = target
  self.args = args
end
function InfoDialog:setButtonTexts(okText)
  if self.okButton ~= nil then
    local v4 = Utils.getNoNil(okText, self.defaultOkText)
    v2:setText(...)
  end
end
function InfoDialog:setButtonAction(buttonAction)
  if buttonAction ~= nil then
    self.buttonAction = buttonAction
    v2:setInputAction(buttonAction)
  end
end
function InfoDialog:inputEvent(v1, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, v1, v2, v3)
  if Platform.isAndroid and self.inputDisableTime <= 0 and v1 == InputAction.MENU_BACK then
    self:onClickOk()
  end
  return v3
end
