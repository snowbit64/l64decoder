-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlatformPrivilegeUtil = {}
function PlatformPrivilegeUtil.checkModDownload(callback, callbackTarget)
  local v2 = getNetworkError()
  if v2 then
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    return false
  end
  local v2, v3 = getModDownloadAvailability()
  if v2 ~= MultiplayerAvailability.AVAILABLE then
    if v2 == MultiplayerAvailability.AVAILABILITY_UNKNOWN then
      local v6 = v6:getText("ui_connectingPleaseWait")
      MessageDialog.show(PlatformPrivilegeUtil.checkModDownloadUpdateCallback, nil, v6, nil, nil, {showsNativeGUI = v3, callback = callback, callbackTarget = callbackTarget})
    elseif not v3 then
      local v5 = v5:getText("ui_missingUGCdownloadPrivilege")
      InfoDialog.show(...)
    end
    return false
  end
  return true
end
function PlatformPrivilegeUtil.checkModDownloadUpdateCallback(dt, args)
  local v2 = getNetworkError()
  if v2 then
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    return
  end
  local v2, v3 = getModDownloadAvailability()
  args.showsNativeGUI = args.showsNativeGUI or v3
  if v2 ~= MultiplayerAvailability.AVAILABILITY_UNKNOWN then
    MessageDialog.hide()
    if v2 == MultiplayerAvailability.AVAILABLE then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L60
      if args.callbackTarget ~= nil then
        args.callback(args.callbackTarget)
        return
      end
      args.callback()
      return
    end
    if not args.showsNativeGUI then
      local v5 = v5:getText("ui_missingUGCdownloadPrivilege")
      InfoDialog.show(...)
    end
  end
end
function PlatformPrivilegeUtil.checkModUse(callback, callbackTarget)
  local v2, v3 = getModUseAvailability(true)
  if v2 ~= MultiplayerAvailability.AVAILABLE then
    if v2 == MultiplayerAvailability.AVAILABILITY_UNKNOWN then
      local v6 = v6:getText("ui_connectingPleaseWait")
      MessageDialog.show(PlatformPrivilegeUtil.checkModUseUpdateCallback, nil, v6, nil, nil, {showsNativeGUI = v3, callback = callback, callbackTarget = callbackTarget})
    elseif not v3 then
      local v5 = v5:getText("ui_missingUGCdownloadPrivilege")
      InfoDialog.show(...)
    end
    return false
  end
  return true
end
function PlatformPrivilegeUtil.checkModUseUpdateCallback(dt, args)
  local v2, v3 = getModUseAvailability(true)
  args.showsNativeGUI = args.showsNativeGUI or v3
  if v2 ~= MultiplayerAvailability.AVAILABILITY_UNKNOWN then
    MessageDialog.hide()
    if v2 == MultiplayerAvailability.AVAILABLE then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L50
      if args.callbackTarget ~= nil then
        args.callback(args.callbackTarget)
        return
      end
      args.callback()
      return
    end
    if not args.showsNativeGUI then
      local v5 = v5:getText("ui_missingUGCdownloadPrivilege")
      InfoDialog.show(...)
    end
  end
end
function PlatformPrivilegeUtil.checkMultiplayer(callback, callbackTarget, callbackArgs, networkTimeout)
  local v4, v5 = getMultiplayerAvailability()
  local v6 = getNetworkError()
  if v6 then
    if networkTimeout ~= nil then
      local v8 = v8:getText("ui_connectingPleaseWait")
      MessageDialog.show(PlatformPrivilegeUtil.checkMultiplayerUpdateCallback, nil, v8, nil, nil, {showsNativeGUI = v5, callback = callback, callbackTarget = callbackTarget, callbackArgs = callbackArgs, networkTimeout = networkTimeout})
    else
      ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    end
    return false
  end
  if v4 ~= MultiplayerAvailability.AVAILABLE then
    if v4 == MultiplayerAvailability.AVAILABILITY_UNKNOWN then
      v8 = v8:getText("ui_connectingPleaseWait")
      MessageDialog.show(PlatformPrivilegeUtil.checkMultiplayerUpdateCallback, nil, v8, nil, nil, {showsNativeGUI = v5, callback = callback, callbackTarget = callbackTarget, callbackArgs = callbackArgs, networkTimeout = networkTimeout})
    elseif not v5 and GS_PLATFORM_XBOX then
      if v4 == MultiplayerAvailability.NOT_AVAILABLE then
        local v7 = v7:getText("ui_missingGoldForMultiplayer_xbox")
        InfoDialog.show(...)
      elseif v4 == MultiplayerAvailability.NO_PRIVILEGES then
        v7 = v7:getText("ui_missingPrivilegeMultiplayerSession_xbox")
        InfoDialog.show(...)
      end
    end
    return false
  end
  return true
end
function PlatformPrivilegeUtil.checkMultiplayerUpdateCallback(dt, args)
  if args.networkTimeout ~= nil then
    args.networkTimeout = args.networkTimeout - dt
    if args.networkTimeout <= 0 then
      args.networkTimeout = nil
    end
  end
  local callbackArgs = getNetworkError()
  if callbackArgs then
    if args.networkTimeout == nil then
      ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    end
    return
  end
  local callbackArgs, networkTimeout = getMultiplayerAvailability()
  args.showsNativeGUI = args.showsNativeGUI or networkTimeout
  if callbackArgs ~= MultiplayerAvailability.AVAILABILITY_UNKNOWN then
    MessageDialog.hide()
    if callbackArgs == MultiplayerAvailability.AVAILABLE then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L106
      if args.callbackTarget ~= nil then
        args.callback(args.callbackTarget, args.callbackArgs)
        return
      end
      args.callback(args.callbackArgs)
      return
    end
    if not args.showsNativeGUI and GS_PLATFORM_XBOX then
      if callbackArgs == MultiplayerAvailability.NOT_AVAILABLE then
        local v5 = v5:getText("ui_missingGoldForMultiplayer_xbox")
        InfoDialog.show(...)
        return
      end
      if callbackArgs == MultiplayerAvailability.NO_PRIVILEGES then
        v5 = v5:getText("ui_missingPrivilegeMultiplayerSession_xbox")
        InfoDialog.show(...)
      end
    end
  end
end
function PlatformPrivilegeUtil.getCanInvitePlayer(misson)
  if not GS_IS_CONSOLE_VERSION then
  end
  return callbackTarget
end
