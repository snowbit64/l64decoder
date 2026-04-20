-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PasswordDialog = {}
local v0 = Class(PasswordDialog, TextInputDialog)
function PasswordDialog.register()
  local v0 = PasswordDialog.new()
  v1:loadGui("dataS/gui/dialogs/PasswordDialog.xml", "PasswordDialog", v0)
  PasswordDialog.INSTANCE = v0
end
function PasswordDialog.show(v0, v1, v2, v3, v4)
  if PasswordDialog.INSTANCE ~= nil then
    PasswordDialog.INSTANCE:setButtonTexts(v4)
    PasswordDialog.INSTANCE:setCallback(v0, v1, v3, nil, nil, nil, v2, true)
    PasswordDialog.INSTANCE:setText(nil)
    v6:showDialog("PasswordDialog")
  end
end
function PasswordDialog.new(v0, v1)
  if not v1 then
  end
  return v2(v3, v4)
end
function PasswordDialog:createFromExistingGui(v1)
  PasswordDialog.register()
  PasswordDialog.show(self.onTextEntered, self.target, self.callbackArgs, self.defaultText, self.confirmText)
end
