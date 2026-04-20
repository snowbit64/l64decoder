-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SavegameUploadDialog = {}
local v0 = Class(SavegameUploadDialog, TextInputDialog)
SavegameUploadDialog.CONTROLS = {TEXT_INPUT = "textElement"}
function SavegameUploadDialog.register()
  local v0 = SavegameUploadDialog.new()
  v1:loadGui("dataS/gui/dialogs/SavegameUploadDialog.xml", "SavegameUploadDialog", v0)
  SavegameUploadDialog.INSTANCE = v0
end
function SavegameUploadDialog.show(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if SavegameUploadDialog.INSTANCE ~= nil then
    SavegameUploadDialog.INSTANCE:setButtonTexts(v6)
    SavegameUploadDialog.INSTANCE:setText(v8)
    SavegameUploadDialog.INSTANCE:setCallback(v0, v1, v2, v3, v4, v5, v7, v9)
    v11:showDialog("SavegameUploadDialog")
  end
end
function SavegameUploadDialog.new(v0, v1)
  if not v1 then
  end
  return v2(v3, v4)
end
function SavegameUploadDialog:createFromExistingGui(v1)
  SavegameUploadDialog.register()
  SavegameUploadDialog.show(self.onTextEntered, self.target, self.defaultText, self.dialogPrompt, self.imePrompt, self.maxCharacters, self.confirmText, self.callbackArgs, self.inputText, self.applyTextFilter)
end
