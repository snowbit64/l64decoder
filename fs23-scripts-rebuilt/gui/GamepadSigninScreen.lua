-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GamepadSigninScreen = {CONTROLS = {START_TEXT = "startText", LOGO = "logo", TRACTOR = "backgroundTractor"}}
local GamepadSigninScreen_mt = Class(GamepadSigninScreen, ScreenElement)
function GamepadSigninScreen.register()
  local v0 = GamepadSigninScreen.new()
  v1:loadGui("dataS/gui/GamepadSigninScreen.xml", "GamepadSigninScreen", v0)
  return v0
end
function GamepadSigninScreen.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(GamepadSigninScreen.CONTROLS)
  v2.textSpeed = 600
  v2.textTime = 0
  v2.textDir = 1
  v2.textColor1 = {1, 1, 1, 1}
  v2.textColor2 = {1, 1, 1, 0}
  v2.textColor = {1, 1, 0.25, 1}
  v2.forceShowSigninGui = false
  v2.requestCounter = -1
  return v2
end
function GamepadSigninScreen:createFromExistingGui(v1)
  local v2 = GamepadSigninScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function GamepadSigninScreen.onCreate(v0)
end
function GamepadSigninScreen:onOpen()
  g_isSignedIn = false
  if not g_menuMusicIsPlayingStarted then
    g_menuMusicIsPlayingStarted = true
    playStreamedSample(g_menuMusic, 0)
  end
  if g_currentMission ~= nil and g_currentMission.missionDynamicInfo.isMultiplayer then
    v1:cancelPlayersSynchronizing()
  end
  if g_modNameToDirectory[g_uniqueDlcNamePrefix .. "claasPack"] ~= nil then
    v1:setImageFilename("dataS/menu/main_platinum_logo_en.png")
  else
    v1:setImageFilename("dataS/menu/main_logo_en.png")
  end
  self.requestCounter = 2
end
function GamepadSigninScreen.onClose(v0)
end
function GamepadSigninScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = isGamepadSigninPending()
  if not v2 then
    local v4 = v4:getText("ui_consolePressStart")
    v2:setText(...)
  else
    v2:setText("...")
  end
  self.textTime = self.textTime + self.textDir * dt
  if self.textSpeed < self.textTime then
    self.textTime = self.textSpeed
    self.textDir = -self.textDir
  end
  if self.textTime < 0 then
    self.textTime = 0
    self.textDir = -self.textDir
  end
  -- TODO: structure LOP_FORNPREP (pc 76, target 92)
  self.textColor[1] = (1 - self.textTime / self.textSpeed) * self.textColor1[1] + self.textColor2[1] * self.textTime / self.textSpeed
  -- TODO: structure LOP_FORNLOOP (pc 91, target 77)
  if 0 <= self.requestCounter then
    self.requestCounter = self.requestCounter - 1
    if self.requestCounter < 0 then
      requestGamepadSignin(Input.BUTTON_2, self.forceShowSigninGui, true)
    end
  end
  local v5 = unpack(self.textColor)
  v3:setTextColor(...)
  v3:setText2Color(self.startText.text2Color[1], self.startText.text2Color[2], self.startText.text2Color[3], self.startText.textColor[4])
end
function GamepadSigninScreen:onYesNoSigninAccept(yes)
  if yes then
    self.forceShowSigninGui = true
    self:changeScreen(GamepadSigninScreen)
    return
  end
  g_tempDeepLinkingInfo = nil
  self:changeScreen(MainScreen)
end
function GamepadSigninScreen:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_ACCEPT and self.requestCounter < 0 then
    self:signIn()
  end
  return eventUsed
end
function GamepadSigninScreen:signIn()
  v1:resetAchievementsState()
  self.forceShowSigninGui = false
  g_isSignedIn = true
  if g_currentMission == nil then
  end
  if GS_PLATFORM_XBOX then
    local v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    if v2 ~= g_currentPlayingUserName then
    end
    g_currentPlayingUserName = v2
  end
  if g_tempDeepLinkingInfo ~= nil then
    if GS_PLATFORM_XBOX and g_tempDeepLinkingInfo.requestUserName ~= "" then
      local v3 = v3:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
      if v3 ~= g_tempDeepLinkingInfo.requestUserName then
        local v7 = v7:getText("ui_signinWithUserToAcceptInviteRetry")
        local v6 = string.format(v7, g_tempDeepLinkingInfo.requestUserName)
        YesNoDialog.show(...)
        return
      end
    end
    g_tempDeepLinkingInfo = nil
    local v4 = PlatformPrivilegeUtil.checkMultiplayer(acceptedGameInvitePerformConnect, nil, g_tempDeepLinkingInfo.platformServerId, 30000)
    -- if not v4 then goto L143 end
    acceptedGameInvitePerformConnect(g_tempDeepLinkingInfo.platformServerId)
    return
  end
  if v1 then
    if g_currentMission.missionDynamicInfo.isMultiplayer then
      v2:cancelPlayersSynchronizing()
      self:changeScreen(InGameMenu)
      v2:setMasterServerConnectionFailed(MasterServerConnection.FAILED_CONNECTION_LOST)
      return
    end
    g_currentMission.userSigninPaused = false
    v2:tryUnpauseGame()
    self:changeScreen(nil)
    return
  end
  if g_currentMission ~= nil then
    OnInGameMenuMenu()
  end
  self:changeScreen(MainScreen)
end
