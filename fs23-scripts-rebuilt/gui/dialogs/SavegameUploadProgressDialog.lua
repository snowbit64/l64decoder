-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SavegameUploadProgressDialog = {CONTROLS = {"progressBar", "dialogTextElement", "progressElement"}}
local v0 = Class(SavegameUploadProgressDialog, DialogElement)
function SavegameUploadProgressDialog.register()
  local v0 = SavegameUploadProgressDialog.new()
  v1:loadGui("dataS/gui/dialogs/SavegameUploadProgressDialog.xml", "SavegameUploadProgressDialog", v0)
  SavegameUploadProgressDialog.INSTANCE = v0
  return v0
end
function SavegameUploadProgressDialog.show(v0)
  if SavegameUploadProgressDialog.INSTANCE ~= nil then
    SavegameUploadProgressDialog.INSTANCE:setDialogType(DialogElement.TYPE_LOADING)
    SavegameUploadProgressDialog.INSTANCE:setIsCloseAllowed(false)
    SavegameUploadProgressDialog.INSTANCE:setProgress(v0 or 0)
    v2:showDialog("SavegameUploadProgressDialog")
  end
end
function SavegameUploadProgressDialog.hide()
  v0:closeDialogByName("SavegameUploadProgressDialog")
end
function SavegameUploadProgressDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SavegameUploadProgressDialog.CONTROLS)
  return v2
end
function SavegameUploadProgressDialog:createFromExistingGui(v1)
  local v2 = SavegameUploadProgressDialog.new()
  v3:loadGui(self.xmlFilename, v1, v2)
  SavegameUploadProgressDialog.show(self.messageText, self.progress, self.dialogType, self.isCloseAllowed)
  return v2
end
function SavegameUploadProgressDialog:onCreate(v1)
  self:setDialogType(DialogElement.TYPE_LOADING)
end
function SavegameUploadProgressDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  SavegameUploadProgressDialog.INSTANCE.isOpen = true
  if not self.disableOpenSound and self.dialogType ~= DialogElement.TYPE_LOADING then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.QUERY)
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
function SavegameUploadProgressDialog.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
  SavegameUploadProgressDialog.INSTANCE.isOpen = false
end
function SavegameUploadProgressDialog:setText(v1)
  if self.dialogTextElement ~= nil then
    local v4 = Utils.getNoNil(v1, self.defaultText)
    v2:setText(...)
  end
end
function SavegameUploadProgressDialog.getIsOpen()
  if SavegameUploadProgressDialog.INSTANCE ~= nil then
    return SavegameUploadProgressDialog.INSTANCE.isOpen
  end
  return false
end
function SavegameUploadProgressDialog:setProgress(v1)
  self.progress = v1
  local v4 = string.format("%d%%", v1)
  v2:setText(...)
end
