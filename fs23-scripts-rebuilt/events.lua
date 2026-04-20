-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

function mouseEvent(posX, posY, isDown, isUp, button)
  if g_currentTest ~= nil then
    g_currentTest.mouseEvent(posX, posY, isDown, isUp, button)
    return
  end
  Input.updateMouseButtonState(button, isDown)
  v5:mouseEvent(posX, posY, isDown, isUp, button)
  if Platform.hasTouchInput then
    if button ~= Input.MOUSE_BUTTON_WHEEL_UP and button ~= Input.MOUSE_BUTTON_WHEEL_DOWN then
      touchEvent(posX, posY, isDown, isUp, TouchHandler.MOUSE_TOUCH_ID)
      -- goto L107  (LOP_JUMP +58)
    end
    if g_currentMission ~= nil then
      local v5 = v5:getAllowsGuiDisplay()
      -- if not v5 then goto L107 end
    end
    v5:mouseEvent(posX, posY, isDown, isUp, button)
  else
    if g_currentMission ~= nil then
      v5 = v5:getAllowsGuiDisplay()
      -- if not v5 then goto L90 end
    end
    v5:mouseEvent(posX, posY, isDown, isUp, button)
    if g_currentMission ~= nil and g_currentMission.isLoaded then
      v5:mouseEvent(posX, posY, isDown, isUp, button)
    end
  end
  g_lastMousePosX = posX
  g_lastMousePosY = posY
end
function touchEvent(posX, posY, isDown, isUp, touchId)
  if g_touchHandler ~= nil then
    v5:onTouchEvent(posX, posY, isDown, isUp, touchId)
  end
  if g_touchHandler.customContext == nil then
    if g_currentMission ~= nil then
      local v5 = v5:getAllowsGuiDisplay()
      -- if not v5 then goto L38 end
    end
    v5:touchEvent(posX, posY, isDown, isUp, touchId)
    if g_inputBinding ~= nil then
      v5:touchEvent(posX, posY, isDown, isUp, touchId)
    end
  end
end
function keyEvent(unicode, sym, modifier, isDown)
  if g_currentTest ~= nil then
    g_currentTest.keyEvent(unicode, sym, modifier, isDown)
    return
  end
  Input.updateKeyState(sym, isDown)
  v4:keyEvent(unicode, sym, modifier, isDown)
  if g_currentMission ~= nil then
    local v4 = v4:getAllowsGuiDisplay()
    -- if not v4 then goto L45 end
  end
  v4:keyEvent(unicode, sym, modifier, isDown)
  if g_currentMission ~= nil and g_currentMission.isLoaded then
    v4:keyEvent(unicode, sym, modifier, isDown)
  end
end
function onUserSignedOut()
  g_gamepadSigninScreen.forceShowSigninGui = true
  forceEndFrameRepeatMode()
  if g_currentMission ~= nil then
    if g_currentMission.isMissionStarted then
      v0:pauseGame()
      v0:disconnectFromMasterServer()
      v0:showGui("GamepadSigninScreen")
      return
    end
    OnInGameMenuMenu(true)
    return
  end
  v0:disconnectFromMasterServer()
  v0:shutdownAll()
  v0:showGui("GamepadSigninScreen")
end
function finishedUserProfileSync()
  if GS_PLATFORM_XBOX then
    loadUserSettings(g_gameSettings)
    v0:publish(MessageType.USER_PROFILE_CHANGED)
    return
  end
  if GS_IS_NETFLIX_VERSION then
    if g_currentMission ~= nil then
      OnInGameMenuMenu()
      return
    end
    local v0 = getLanguage()
    if g_language ~= v0 then
      doRestart(false, "")
    end
  end
end
function onWaitForPendingGameSession()
  if g_currentMission == nil then
    if g_startupScreen == nil then
      g_skipStartupScreen = true
    else
      v0:onStartupEnd()
    end
  end
  local v1 = v1:getText("ui_waitForPendingGameSession")
  local v4 = v4:getText("button_cancel")
  InfoDialog.show(...)
end
function onMultiplayerInviteSent()
  if g_currentMission ~= nil then
    -- if g_currentMission.missionDynamicInfo.isMultiplayer then goto L48 end
    Logging.info("Switching to multiplayer game")
    v1:saveSavegame(g_currentMission.missionInfo)
    g_savegameController.onSaveCompleteCallback = onMultiplayerInviteSaveCompleteCallback
    v1:startSavingGameDisplay()
    g_multiplayerInviteSentData = {savegameIndex = g_currentMission.missionInfo.savegameIndex}
    return true
  else
    onMultiplayerInviteStartSavegame()
    return true
  end
  return false
end
function onMultiplayerInviteSaveCompleteCallback(_, errorCode)
  g_savegameController.onSaveCompleteCallback = function()
  end
  v2:notifySaveComplete()
  MessageDialog.hide()
  if errorCode == Savegame.ERROR_OK then
    OnInGameMenuMenu()
    onMultiplayerInviteStartSavegame(g_multiplayerInviteSentData.savegameIndex)
    g_multiplayerInviteSentData = nil
    return
  end
  local v6 = v6:getText("ui_savingFailedContinueWithoutSaving")
  local v8 = v8:getText("button_continue")
  local v9 = v9:getText("button_cancel")
  YesNoDialog.show(...)
end
function onMultiplayerInviteStartSavegame(savegameIndex)
  v1:setIsMultiplayer(true)
  v1:showGui("CareerScreen")
  if savegameIndex ~= nil then
    g_careerScreen.selectedIndex = savegameIndex
    local v1 = v1:getSavegame(g_careerScreen.selectedIndex)
    g_careerScreen.currentSavegame = v1
    v2:onStartAction()
    if v1 ~= SavegameController.NO_SAVEGAME then
      -- if v1.isValid then goto L42 end
    end
    return
    if g_gui.currentGuiName == "ModSelectionScreen" then
      v2:onClickOk()
    end
  end
end
function onRemovedFromInvite()
  if g_currentMission ~= nil then
    Logging.info("You have been uninvited by the host")
    OnInGameMenuMenu()
    local v1 = v1:getText("ui_uninvited")
    InfoDialog.show(...)
  end
end
function acceptedGameInvite(platformServerId, requestUserName)
  v2:closeDialogByName("InfoDialog")
  if g_currentMission ~= nil then
    g_invitePlatformServerId = platformServerId
    g_inviteRequestUserName = requestUserName
    OnInGameMenuMenu()
    if g_pendingRestartData ~= nil then
      return
    end
    g_invitePlatformServerId = nil
    g_inviteRequestUserName = nil
  end
  if Platform.isXbox then
    if g_gui.currentGuiName ~= "GamepadSigninScreen" then
      -- if g_isSignedIn then goto L51 end
    end
    g_tempDeepLinkingInfo = {platformServerId = platformServerId, requestUserName = requestUserName}
    return
  end
  if Platform.isXbox and requestUserName ~= "" then
    local v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    if v2 ~= requestUserName then
      g_tempDeepLinkingInfo = {platformServerId = platformServerId, requestUserName = requestUserName}
      local v4 = v4:getText("dialog_signinWithUserToAcceptInvite")
      local v3 = string.format(v4, requestUserName)
      InfoDialog.show(v3, u0)
      return
    end
  end
  if not Platform.isXbox then
    -- if not Platform.isPlaystation then goto L112 end
  end
  v2 = PlatformPrivilegeUtil.checkMultiplayer(acceptedGameInvitePerformConnect, nil, platformServerId, 30000)
  if v2 then
    acceptedGameInvitePerformConnect(platformServerId)
    return
    acceptedGameInvitePerformConnect(platformServerId)
  end
end
function acceptedGameInvitePerformConnect(platformServerId)
  connectToServer(platformServerId)
end
function acceptedGameCreate()
  if g_currentMission ~= nil then
    OnInGameMenuMenu()
  end
  g_createGameScreen.usePendingInvites = true
  v0:setIsMultiplayer(true)
  v0:showGui("CareerScreen")
end
function onDeepLinkingFailed()
  g_deepLinkingInfo = nil
  g_showDeeplinkingFailedMessage = true
end
function onFriendListChanged()
  v0:reconnectToMasterServer()
end
function onBlockedListChanged()
end
function notifyWindowGainedFocus()
  u0 = true
end
function notifyWindowLostFocus()
  u0 = false
end
function getHasWindowFocus()
  return u0
end
function notifyAppSuspended()
  g_appIsSuspended = true
  if g_messageCenter ~= nil then
    v0:publish(MessageType.APP_SUSPENDED)
  end
end
function notifyAppResumed()
  g_appIsSuspended = false
  if g_messageCenter ~= nil then
    v0:publish(MessageType.APP_RESUMED)
  end
end
function notifyWindowSizeChanged()
  Logging.info("Window size changed. Restarting application")
  v0:publish(MessageType.APP_SUSPENDED)
  if g_currentMission ~= nil then
    OnInGameMenuMenu()
    return
  end
  v0:setStartScreen(RestartManager.START_SCREEN_MAIN)
  doRestart(false, "")
end
