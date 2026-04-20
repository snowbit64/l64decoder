-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NetflixSigninScreen = {CONTROLS = {START_TEXT = "startText", LOGO = "logo", TRACTOR = "backgroundTractor"}}
local v0 = Class(NetflixSigninScreen, ScreenElement)
function NetflixSigninScreen.register()
  local v0 = NetflixSigninScreen.new()
  v1:loadGui("dataS/gui/GamepadSigninScreen.xml", "NetflixSigninScreen", v0)
  return v0
end
function NetflixSigninScreen.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(NetflixSigninScreen.CONTROLS)
  return v2
end
function NetflixSigninScreen:createFromExistingGui(v1)
  local v2 = NetflixSigninScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function NetflixSigninScreen.onCreate(v0)
end
function NetflixSigninScreen:onOpen()
  g_isSignedIn = false
  if not g_menuMusicIsPlayingStarted then
    g_menuMusicIsPlayingStarted = true
    playStreamedSample(g_menuMusic, 0)
  end
  v1:setImageFilename("dataS/menu/main_logo_en.png")
  v1:setText("")
end
function NetflixSigninScreen.onClose(v0)
end
function NetflixSigninScreen:update(v1)
  local v3 = v3:superClass()
  v3.update(self, v1)
  local v2 = getIsUserSignedIn()
  if v2 then
    g_isSignedIn = true
    loadUserSettings(g_gameSettings)
    self:changeScreen(MainScreen)
  end
end
