-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RestartManager = {START_SCREEN_MAIN = 1, START_SCREEN_JOIN_GAME = 2, START_SCREEN_MULTIPLAYER = 3, START_SCREEN_SETTINGS = 5, START_SCREEN_SETTINGS_ADVANCED = 6, START_SCREEN_GAMEPAD_SIGNIN = 7}
function RestartManager:init(v1)
  local v3 = string.find(v1, "-restart")
  if v3 == nil then
  end
  self.restarting = true
end
function RestartManager:handleRestart()
  local startScreen = getStartMode()
  if startScreen == RestartManager.START_SCREEN_MAIN then
    v2:showGui("MainScreen")
  elseif startScreen == RestartManager.START_SCREEN_JOIN_GAME then
    v2:onJoinGameClick()
  else
    if startScreen == RestartManager.START_SCREEN_MULTIPLAYER then
      v2:showGui("MainScreen")
      v2:onMultiplayerClickPerform()
    elseif startScreen == RestartManager.START_SCREEN_SETTINGS then
      v2:showGui("SettingsScreen")
      v2:showGeneralSettings()
    else
      if startScreen == RestartManager.START_SCREEN_SETTINGS_ADVANCED then
        v2:showGui("SettingsScreen")
        v2:showDisplaySettings()
      elseif startScreen == RestartManager.START_SCREEN_GAMEPAD_SIGNIN then
        v2:showGui("GamepadSigninScreen")
      end
    end
  end
  local v2 = promptUserConfirmScreenMode()
  if v2 then
    self.restartDisplayTime = 15000
    local v9 = v9:getText("dialog_keepDisplayProperties")
    local v8 = tostring(self.restartDisplayTime / 1000)
    v2 = YesNoDialog.show(self.restartDisplayOk, self, v9 .. "\n" .. v8)
    self.dialog = v2
    v2 = addTimer(1000, "restartDisplayTimeUpdate", self)
    self.restartDisplayTimerId = v2
  end
end
function RestartManager.setStartScreen(v0, startScreen)
  setStartMode(startScreen)
end
function RestartManager:restartDisplayTimeUpdate()
  self.restartDisplayTime = self.restartDisplayTime - 1000
  if 0 < self.restartDisplayTime then
    local v7 = v7:getText("dialog_keepDisplayProperties")
    local v6 = tostring(self.restartDisplayTime / 1000)
    startScreen:setText(v7 .. "\n" .. v6)
    setTimerTime(self.restartDisplayTimerId, 1000)
    return true
  end
  self.restartDisplayTime = nil
  self.restartDisplayTimerId = nil
  self:restartDisplayNotOk()
  return false
end
function RestartManager:restartDisplayOk(yes)
  removeTimer(self.restartDisplayTimerId)
  self.restartDisplayTime = nil
  self.restartDisplayTimerId = nil
  if yes then
    setUserConfirmScreenMode(true)
    return
  end
  self:restartDisplayNotOk()
end
function RestartManager.restartDisplayNotOk(v0)
  setUserConfirmScreenMode(false)
  doRestart(true, "")
end
