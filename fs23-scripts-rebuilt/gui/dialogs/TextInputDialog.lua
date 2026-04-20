-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TextInputDialog = {}
local TextInputDialog_mt = Class(TextInputDialog, YesNoDialog)
TextInputDialog.CONTROLS = {TEXT_INPUT = "textElement"}
function TextInputDialog.register()
  local v0 = TextInputDialog.new()
  v1:loadGui("dataS/gui/dialogs/TextInputDialog.xml", "TextInputDialog", v0)
  TextInputDialog.INSTANCE = v0
end
function TextInputDialog.show(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if TextInputDialog.INSTANCE ~= nil then
    TextInputDialog.INSTANCE:setText(v8)
    TextInputDialog.INSTANCE:setCallback(v0, v1, v2, v3, v4, v5, v7, v9)
    TextInputDialog.INSTANCE:setButtonTexts(v6)
    v11:showDialog("TextInputDialog")
  end
end
function TextInputDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(TextInputDialog.CONTROLS)
  v2.onTextEntered = u1
  v2.callbackArgs = nil
  v2.extraInputDisableTime = 0
  if GS_IS_CONSOLE_VERSION then
    local v3 = imeIsSupported()
  end
  v2.doHide = v3
  v2.disableOpenSound = true
  return v2
end
function TextInputDialog:createFromExistingGui(v1)
  TextInputDialog.register()
  TextInputDialog.show(self.onTextEntered, self.target, self.defaultText, self.dialogPrompt, self.imePrompt, self.maxCharacters, self.confirmText, self.callbackArgs, self.inputText, self.applyTextFilter)
end
function TextInputDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v2 = getPlatformId()
  if v2 == PlatformId.SWITCH then
  else
  end
  self.extraInputDisableTime = v1
  v1:setFocus(self.textElement)
  self.textElement.blockTime = 0
  v1:onFocusActivate()
  self:updateButtonVisibility()
end
function TextInputDialog:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  if not GS_IS_CONSOLE_VERSION then
    v1:setForcePressed(false)
  end
  self:updateButtonVisibility()
end
function TextInputDialog:setText(v1)
  local v3 = v3:superClass()
  v3.setText(self, v1)
  self.inputText = v1
end
function TextInputDialog:setButtonTexts(v1, v2)
  local v4 = v4:superClass()
  v4.setButtonTexts(self, v1, v2)
  self.confirmText = v1
end
function TextInputDialog:setCallback(v1, v2, v3, v4, v5, v6, v7, v8)
  if not v1 then
  end
  self.onTextEntered = v9
  self.target = v2
  self.callbackArgs = v7
  v9:setText(v3 or "")
  if not v6 then
  end
  v9.maxCharacters = v10
  self.applyTextFilter = v8 or true
  if v4 ~= nil then
    v9:setText(v4)
  end
  if v5 ~= nil then
    self.textElement.imeTitle = v5
    self.textElement.imeDescription = v5
    self.textElement.imePlaceholder = v5
  end
  self.dialogPrompt = v4
  self.imePrompt = v5
  self.maxCharacters = v6
  self.callbackArgs = v7
  self.applyTextFilter = v8
end
function TextInputDialog:sendCallback(clickOk)
  self:close()
  if self.target ~= nil then
    self.onTextEntered(self.target, self.textElement.text, clickOk, self.callbackArgs)
    return
  end
  self.onTextEntered(v2, clickOk, self.callbackArgs)
end
function TextInputDialog:onEnterPressed(element, dismissal)
  if not dismissal then
    return self:onClickOk()
  end
  return true
end
function TextInputDialog:onEscPressed(element)
  return self:onClickBack()
end
function TextInputDialog:onClickBack(forceBack, usedMenuButton)
  local v3 = self:isInputDisabled()
  if not v3 then
    self:sendCallback(false)
    return false
  end
  return true
end
function TextInputDialog:onClickOk()
  local v1 = self:isInputDisabled()
  if not v1 then
    if self.applyTextFilter then
      local v2 = filterText(self.textElement.text, true, true)
      if self.textElement.text ~= "" and self.textElement.text ~= v2 then
        v3:setText(v2)
        Logging.info("Entered text contains profanity and has been adjusted.")
        self.reactivateNextFrame = true
        self:updateButtonVisibility()
        return false
      end
    end
    self:sendCallback(true)
    self:updateButtonVisibility()
    return false
  end
  return true
end
function TextInputDialog:updateButtonVisibility()
  if self.yesButton ~= nil then
    v1:setVisible(not self.textElement.imeActive)
  end
  if self.noButton ~= nil then
    v1:setVisible(not self.textElement.imeActive)
  end
end
function TextInputDialog:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.reactivateNextFrame then
    self.textElement.blockTime = 0
    v2:onFocusActivate()
    self.reactivateNextFrame = false
    self:updateButtonVisibility()
  end
  if 0 < self.extraInputDisableTime then
    self.extraInputDisableTime = self.extraInputDisableTime - dt
  end
end
function TextInputDialog:isInputDisabled()
  if 0 < self.extraInputDisableTime then
  end
  return v1
end
function TextInputDialog.disableInputForDuration(v0, v1)
end
function TextInputDialog:getIsVisible()
  if self.doHide then
    return false
  end
  local v2 = v2:superClass()
  return v2.getIsVisible(self)
end
