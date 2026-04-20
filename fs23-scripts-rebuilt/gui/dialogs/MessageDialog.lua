-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MessageDialog = {CONTROLS = {"dialogElement", "dialogTextElement", "dialogBg"}}
local MessageDialog_mt = Class(MessageDialog, DialogElement)
function MessageDialog.register()
  local v0 = MessageDialog.new()
  v1:loadGui("dataS/gui/dialogs/MessageDialog.xml", "MessageDialog", v0)
  MessageDialog.INSTANCE = v0
  return v0
end
function MessageDialog.show(v0, v1, v2, v3, v4, v5)
  if MessageDialog.INSTANCE ~= nil then
    local v9 = Utils.getNoNil(v3, DialogElement.TYPE_LOADING)
    MessageDialog.INSTANCE:setDialogType(...)
    v9 = Utils.getNoNil(v4, true)
    MessageDialog.INSTANCE:setIsCloseAllowed(...)
    MessageDialog.INSTANCE:setText(v2)
    MessageDialog.INSTANCE:setUpdateCallback(v0, v1, v5)
    v7:showDialog("MessageDialog")
  end
end
function MessageDialog.hide()
  v0:closeDialogByName("MessageDialog")
end
function MessageDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(MessageDialog.CONTROLS)
  v2.isBackAllowed = false
  return v2
end
function MessageDialog:createFromExistingGui(v1)
  local v2 = MessageDialog.new()
  v3:loadGui(self.xmlFilename, v1, v2)
  MessageDialog.show(self.updateCallback, self.updateCallbackTarget, self.messageText, self.dialogType, self.isCloseAllowed)
  return v2
end
function MessageDialog:onCreate(element)
  self.defaultDialogHeight = self.dialogElement.size[2]
  if self.dialogTextElement ~= nil then
    local v2, v3 = v2:getTextHeight()
    self.defaultDialogHeight = self.defaultDialogHeight - v2
    self.defaultText = self.dialogTextElement.text
  end
  self:setDialogType(DialogElement.TYPE_WARNING)
end
function MessageDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  MessageDialog.INSTANCE.isOpen = true
  if not self.disableOpenSound then
    if self.dialogType == DialogElement.TYPE_WARNING then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    elseif self.dialogType ~= DialogElement.TYPE_LOADING then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.QUERY)
    end
  end
  if self.dialogBg ~= nil then
    local v1 = v1:getIsMenuVisible()
    if v1 then
      v1:applyProfile("dialogFullscreenBgWithMenu", true)
    else
      v1:applyProfile("dialogFullscreenBgNoMenu", true)
    end
  end
  if self.dialogElement ~= nil then
    v1 = v1:getIsMenuVisible()
    if v1 then
      v1:applyProfile("dialogElementWithMenu", true)
      return
    end
    v1:applyProfile("dialogElementNoMenu", true)
  end
end
function MessageDialog.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
  MessageDialog.INSTANCE.isOpen = false
end
function MessageDialog:setText(text)
  if self.dialogTextElement ~= nil then
    local v4 = Utils.getNoNil(text, self.defaultText)
    v2:setText(...)
    local v2, v3 = v2:getTextHeight()
    self:resizeDialog(v2)
  end
end
function MessageDialog.getIsOpen()
  if MessageDialog.INSTANCE ~= nil then
    return MessageDialog.INSTANCE.isOpen
  end
  return false
end
function MessageDialog:resizeDialog(heightOffset)
  v2:setSize(nil, self.defaultDialogHeight + heightOffset)
end
function MessageDialog:setUpdateCallback(callback, callbackTarget, args)
  self.updateCallback = callback
  self.updateCallbackTarget = callbackTarget
  self.updateCallbackArgs = args
end
function MessageDialog:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.updateCallback ~= nil then
    if self.updateCallbackTarget ~= nil then
      self.updateCallback(self.updateCallbackTarget, dt, self.updateCallbackArgs)
      return
    end
    self.updateCallback(dt, self.updateCallbackArgs)
  end
end
