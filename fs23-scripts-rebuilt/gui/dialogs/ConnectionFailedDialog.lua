-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionFailedDialog = {}
local ConnectionFailedDialog_mt = Class(ConnectionFailedDialog, InfoDialog)
removeActivation = nil
function ConnectionFailedDialog.register()
  local v0 = ConnectionFailedDialog.new()
  v1:loadGui("dataS/gui/dialogs/ConnectionFailedDialog.xml", "ConnectionFailedDialog", v0)
  ConnectionFailedDialog.INSTANCE = v0
  return v0
end
function ConnectionFailedDialog.show(v0, v1, v2, v3)
  if ConnectionFailedDialog.INSTANCE ~= nil then
    ConnectionFailedDialog.INSTANCE:setCallback(v1, v2, v3)
    ConnectionFailedDialog.INSTANCE:setButtonTexts(nil)
    ConnectionFailedDialog.INSTANCE:setDialogType(DialogElement.TYPE_WARNING)
    ConnectionFailedDialog.INSTANCE:setText(v0)
    v5:showDialog("ConnectionFailedDialog")
  end
end
function ConnectionFailedDialog.new(target, custom_mt)
  if not custom_mt then
  end
  return v2(v3, v4)
end
function ConnectionFailedDialog:createFromExistingGui(v1)
  ConnectionFailedDialog.register()
  ConnectionFailedDialog.show(self.connectionFailedText, self.onOk, self.target, self.args)
end
function ConnectionFailedDialog:setText(text)
  local v3 = v3:superClass()
  v3.setText(self, text)
  if g_dedicatedServer ~= nil then
    print("Error: " .. text)
  end
  self.connectionFailedText = text
end
function ConnectionFailedDialog.onWrongVersion(v0, v1)
  openWebFile("fs2019Update.php", "")
  if v1 ~= nil then
    v2:showGui(v1[1])
  end
end
function ConnectionFailedDialog.onInvalidKey(v0, v1)
  openWebFile("fs2019Purchase.php", "")
  if v1 ~= nil then
    v2:showGui(v1[1])
  end
end
function ConnectionFailedDialog.onOkCallback(v0, v1)
  if v1 ~= nil then
    v2:showGui(v1[1])
  end
end
function ConnectionFailedDialog.showMasterServerConnectionFailedReason(reason, nextScreenName)
  print("Error: Failed to connect: " .. reason)
  if GS_PLATFORM_PLAYSTATION then
    local v3 = getNetworkError()
    if v3 then
      v3 = string.gsub(v3, "Network", "dialog_network")
    end
  end
  if MasterServerConnection.FAILED_NONE == reason then
    print("Error: reason is none, this should never happen.")
  elseif MasterServerConnection.FAILED_WRONG_VERSION == reason then
    local v4 = v4:getText("ui_outdatedGameVersion")
    ConnectionFailedDialog.show(v4, g_connectionFailedDialog.onWrongVersion, g_connectionFailedDialog, {nextScreenName})
  else
    if MasterServerConnection.FAILED_PERMANENT_BAN == reason then
      if g_dedicatedServer ~= nil then
        u0()
      end
      v4 = v4:getText("ui_permanentBan")
      ConnectionFailedDialog.show(v4, g_connectionFailedDialog.onInvalidKey, g_connectionFailedDialog, {nextScreenName})
    else
      if MasterServerConnection.FAILED_UNKNOWN == reason then
        v4 = v4:getText(v2 or "ui_connectionFailed")
      elseif MasterServerConnection.FAILED_MAINTENANCE == reason then
        v4 = v4:getText("ui_serverMaintenance")
      else
        if MasterServerConnection.FAILED_TEMPORARY_BAN == reason then
          if g_dedicatedServer ~= nil then
            u0()
          end
          v4 = v4:getText("ui_temporaryBan")
        elseif MasterServerConnection.FAILED_CONNECTION_LOST == reason then
          v4 = v4:getText(v2 or "ui_masterServerConnectionLost")
        else
          if MasterServerConnection.FAILED_WRONG_PASSWORD == reason then
            v4 = v4:getText(v2 or "ui_wrongPassword")
          elseif MasterServerConnection.FAILED_CONSOLE_USER_FAILED_AUTHENTICATION == reason then
            v4 = v4:getText(v2 or "ui_connectionFailed")
          end
        end
      end
      ConnectionFailedDialog.show(v3, g_connectionFailedDialog.onOkCallback, g_connectionFailedDialog, {nextScreenName})
    end
  end
  g_deepLinkingInfo = nil
  if g_dedicatedServer ~= nil then
    doExit()
  end
end
