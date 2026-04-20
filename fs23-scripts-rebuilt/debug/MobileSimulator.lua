-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MobileSimulator = {NOTCH_STATE_OFF = 0, NOTCH_STATE_LEFT = 1, NOTCH_STATE_RIGHT = 2, NOTCH_STATE_BOTH = 3, SIGNED_IN = true, NOTCH_STATE = MobileSimulator.NOTCH_STATE_OFF, NOTCH_WIDTH = 0.03694581280788178, NOTCH_HEIGHT = 0.5573333333333333, INSET_LEFT = 0.04926108374384237, INSET_RIGHT = 0.04926108374384237, INSET_BOTTOM = 0, INSET_TOP = 0}
{}[MobileSimulator.NOTCH_STATE_OFF] = {0, 0, 0, 0}
{}[MobileSimulator.NOTCH_STATE_LEFT] = {MobileSimulator.INSET_LEFT, 0, 0, 0}
{}[MobileSimulator.NOTCH_STATE_RIGHT] = {0, MobileSimulator.INSET_RIGHT, 0, 0}
{}[MobileSimulator.NOTCH_STATE_BOTH] = {MobileSimulator.INSET_LEFT, MobileSimulator.INSET_RIGHT, 0, 0}
MobileSimulator.INSETS = {}
function MobileSimulator.init()
  function userSignout()
    MobileSimulator.SIGNED_IN = false
    Logging.devInfo("MobileSimulator - Signed out!")
  end
  function requestUserSignin()
    MobileSimulator.SIGNED_IN = true
    Logging.devInfo("MobileSimulator - Signed in!")
  end
  function getIsUserSignedIn()
    return MobileSimulator.SIGNED_IN
  end
  function keyEvent(v0, v1, v2, v3)
    if v3 and v1 == Input.KEY_1 then
      MobileSimulator.SIGNED_IN = not MobileSimulator.SIGNED_IN
      Logging.devInfo("MobileSimulator - Signed in state: %s", MobileSimulator.SIGNED_IN)
    end
    u0(v0, v1, v2, v3)
  end
  function draw()
    u0()
    new2DLayer()
    if u1.NOTCH_STATE ~= u1.NOTCH_STATE_OFF then
      if u1.NOTCH_STATE == u1.NOTCH_STATE_RIGHT then
      end
      drawFilledRectRound(v0, 0.5 - u1.NOTCH_HEIGHT * 0.5, u1.NOTCH_WIDTH * 2, u1.NOTCH_HEIGHT, 1, 0, 0, 0, 1)
    end
    local v0, v1, v2, v3 = getSafeFrameInsets()
    drawLine2D(v0 + 2 / g_screenWidth, 0, v0 + 2 / g_screenWidth, 1, 2 / g_screenWidth, 1, 0, 0, 1)
    drawLine2D(v0 + 2 / g_screenWidth, 1 - v2 - 2 / g_screenHeight, 1 - v1, 1 - v2 - 2 / g_screenHeight, 2 / g_screenHeight, 1, 0, 0, 1)
    drawLine2D(1 - v1, 0, 1 - v1, 1, 2 / g_screenWidth, 1, 0, 0, 1)
    drawLine2D(v0 + 2 / g_screenWidth, v3, 1 - v1, v3, 2 / g_screenHeight, 1, 0, 0, 1)
  end
  function getSafeFrameInsets()
    return MobileSimulator.INSETS[u0.NOTCH_STATE][1], MobileSimulator.INSETS[u0.NOTCH_STATE][2], MobileSimulator.INSETS[u0.NOTCH_STATE][3], MobileSimulator.INSETS[u0.NOTCH_STATE][4]
  end
  if GS_IS_NETFLIX_VERSION then
    function showNetflixButton()
      log("NETFLIX: showNetflixButton")
    end
    function hideNetflixButton()
      log("NETFLIX: hideNetflixButton")
    end
  end
  addConsoleCommand("gsMobileSimulatorToggleNotch", "mobile simulator toggle notch", "toggleNotch", MobileSimulator)
  print("\n\n  ##################   Warning: Mobile Simulator active!   ##################\n\n")
end
function MobileSimulator.toggleNotch()
  MobileSimulator.NOTCH_STATE = MobileSimulator.NOTCH_STATE + 1
  if 3 < MobileSimulator.NOTCH_STATE then
    MobileSimulator.NOTCH_STATE = MobileSimulator.NOTCH_STATE_OFF
  end
end
