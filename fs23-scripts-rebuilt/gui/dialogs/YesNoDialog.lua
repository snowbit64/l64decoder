-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

YesNoDialog = {CONTROLS = {DIALOG_TITLE = "dialogTitleElement", YES_BUTTON = "yesButton", NO_BUTTON = "noButton"}}
local YesNoDialog_mt = Class(YesNoDialog, MessageDialog)
function YesNoDialog.register()
  local v0 = YesNoDialog.new()
  v1:loadGui("dataS/gui/dialogs/YesNoDialog.xml", "YesNoDialog", v0)
  YesNoDialog.INSTANCE = v0
end
function YesNoDialog.show(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if YesNoDialog.INSTANCE ~= nil then
    YesNoDialog.INSTANCE:setCallback(v0, v1, v9)
    local v13 = Utils.getNoNil(v6, DialogElement.TYPE_QUESTION)
    YesNoDialog.INSTANCE:setDialogType(...)
    YesNoDialog.INSTANCE:setButtonTexts(v4, v5)
    YesNoDialog.INSTANCE:setButtonSounds(v7, v8)
    YesNoDialog.INSTANCE:setTitle(v3)
    YesNoDialog.INSTANCE:setText(v2)
    v11:showDialog("YesNoDialog")
    return YesNoDialog.INSTANCE
  end
  return nil
end
function YesNoDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.isBackAllowed = false
  v2.inputDelay = 250
  v2:registerControls(YesNoDialog.CONTROLS)
  return v2
end
function YesNoDialog:createFromExistingGui(v1)
  YesNoDialog.register()
  YesNoDialog.show(self.callbackFunc, self.target, self.yesNoText, self.yesNoTitle, self.yesButton.yesText, self.noButton.noText, self.dialogType, self.yesButton.clickSoundName, self.noButton.clickSoundName, self.callbackArgs)
end
function YesNoDialog:onCreate()
  local v2 = v2:superClass()
  v2.onCreate(self)
  if self.dialogTextElement ~= nil then
    self.defaultTextStartPosY = self.dialogTextElement.position[2]
  end
  self:setDialogType(DialogElement.TYPE_QUESTION)
  if self.dialogTitleElement ~= nil then
    self.defaultTitle = self.dialogTitleElement.text
  end
  self.defaultYesText = self.yesButton.text
  self.defaultNoText = self.noButton.text
end
function YesNoDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
end
function YesNoDialog:onClose()
  self:setDialogType(DialogElement.TYPE_QUESTION)
  self:setTitle(nil)
  self:setText(nil)
  self:setButtonTexts(self.defaultYesText, self.defaultNoText)
  local v2 = v2:superClass()
  v2.onClose(self)
end
function YesNoDialog:sendCallback(value)
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      if self.target ~= nil then
        self.callbackFunc(self.target, value, self.callbackArgs)
        return
      end
      self.callbackFunc(value, self.callbackArgs)
    end
  end
end
function YesNoDialog:setCallback(callbackFunc, target, args)
  self.callbackFunc = callbackFunc
  self.target = target
  self.callbackArgs = args
end
function YesNoDialog:setTitle(text)
  if self.dialogTitleElement ~= nil then
    local v4 = Utils.getNoNil(text, self.defaultTitle)
    v2:setText(...)
  end
  if GS_IS_MOBILE_VERSION and self.dialogTextElement ~= nil then
    local v2, v3 = v2:getTextHeight()
    self:resizeDialog(v2)
  end
end
function YesNoDialog:resizeDialog(v1)
  if GS_IS_MOBILE_VERSION then
    if self.dialogTitleElement ~= nil and self.dialogTitleElement.text ~= "" then
    end
    if self.defaultTextStartPosY ~= nil then
      v3:setPosition(nil, self.defaultTextStartPosY - v2)
    end
  end
  local v4 = v4:superClass()
  v4.resizeDialog(self, v1 + v2)
end
function YesNoDialog:setButtonTexts(yesText, noText)
  local v5 = Utils.getNoNil(yesText, self.defaultYesText)
  v3:setText(...)
  v5 = Utils.getNoNil(noText, self.defaultNoText)
  v3:setText(...)
end
function YesNoDialog:setButtonSounds(yesSound, noSound)
  local v4 = Utils.getNoNil(yesSound, self.yesButton.clickSoundName)
  self.yesButton.clickSoundName = v4
  v4 = Utils.getNoNil(noSound, self.noButton.clickSoundName)
  self.noButton.clickSoundName = v4
end
function YesNoDialog:onYes(sender)
  self:sendCallback(true)
end
function YesNoDialog:onNo(sender)
  self:sendCallback(false)
end
function YesNoDialog:inputEvent(v1, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, v1, v2, v3)
  if Platform.isAndroid and self.inputDisableTime <= 0 and v1 == InputAction.MENU_BACK then
    self:onNo()
  end
  return v3
end
