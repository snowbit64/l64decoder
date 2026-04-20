-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuidedTourHelp = {}
function GuidedTourHelp.init()
  GuidedTourHelp.registerHelpCalendar()
  GuidedTourHelp.registerHelpTime()
  GuidedTourHelp.registerHelpBalance()
  GuidedTourHelp.registerHelpFuel()
  GuidedTourHelp.registerHelpMenu()
  GuidedTourHelp.registerHelpMap()
  GuidedTourHelp.registerHelpShop()
  GuidedTourHelp.registerHelpIngameMenu()
  GuidedTourHelp.registerHelpMiniMap()
  GuidedTourHelp.registerHelpSwitchVehicle()
  GuidedTourHelp.registerHelpVehicleSteering()
  GuidedTourHelp.registerHelpVehicleThrottle()
  GuidedTourHelp.registerHelpPlayerJump()
  GuidedTourHelp.registerHelpPlayerMove()
  GuidedTourHelp.registerHelpActivateObject()
  GuidedTourHelp.registerHelpEnterVehicle()
  GuidedTourHelp.registerHelpTurnOnEquipment()
  GuidedTourHelp.registerHelpExitVehicle()
  GuidedTourHelp.registerHelpAttachEquipment()
  GuidedTourHelp.registerHelpDetachEquipment()
  GuidedTourHelp.registerHelpHireAI()
  GuidedTourHelp.registerHelpToggleSeeds()
  GuidedTourHelp.registerHelpFillLevelDisplay()
  GuidedTourHelp.registerHelpCabinView()
  GuidedTourHelp.registerHelpCabinViewLeave()
  GuidedTourHelp.registerHelpCameraZoom()
  GuidedTourHelp.registerHelpCameraMovement()
end
function GuidedTourHelp.registerHelpCalendar()
  local v2 = unpack(GuidedTourHelp.OFFSET.CALENDAR)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = v5:getText("introduction_monthInfo")
  v6:registerHelp("guidedTourHelpCalendar", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.weatherElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.weatherElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpTime()
  local v2 = unpack(GuidedTourHelp.OFFSET.TIME)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = v5:getText("introduction_timeInfo")
  v6:registerHelp("guidedTourHelpTime", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.weatherElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.weatherElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpBalance()
  local v2 = unpack(GuidedTourHelp.OFFSET.BALANCE)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = v5:getText("introduction_balance")
  v6:registerHelp("guidedTourHelpBalance", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.moneyElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.moneyElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpFuel()
  local v2 = unpack(GuidedTourHelp.OFFSET.FUEL)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = v5:getText("introduction_fuelLevel")
  v6:registerHelp("guidedTourHelpFuel", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.fuelFitnessElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.fuelFitnessElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    IntroductionHelpHUDUtil.drawHelp(v4 + u0 * v3 + u1 * v3, v5 + u2 * v3 + u3 * v3, u4, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpMenu()
  local v2 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_showHelp")
  v4:registerHelp("guidedTourHelpMenu", {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.gameInfoDisplay.helpButton:getPosition()
    local v8 = g_currentMission.hud.gameInfoDisplay.helpButton:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.gameInfoDisplay.helpButton:getPosition()
    local v8 = g_currentMission.hud.gameInfoDisplay.helpButton:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
  v5:registerHelp("guidedTourHelpMenuSimple", {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.gameInfoDisplay.helpButton:getPosition()
    local v8 = g_currentMission.hud.gameInfoDisplay.helpButton:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.gameInfoDisplay.helpButton:getPosition()
    local v8 = g_currentMission.hud.gameInfoDisplay.helpButton:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpMap()
  local v2 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_showMap")
  v4:registerHelp("guidedTourHelpMap", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.mapButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.mapButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpShop()
  local v2 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_openShop")
  v4:registerHelp("guidedTourHelpShop", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.shopButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.shopButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpIngameMenu()
  local v2 = unpack(GuidedTourHelp.OFFSET.HELP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_ingameMenu")
  v4:registerHelp("guidedTourHelpIngameMenu", {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.menuButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.gameInfoDisplay.menuButton == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v8 = v2:getWidth()
    IntroductionHelpHUDUtil.drawHelp(v4 + v8 * 0.5 + u0 * v3, v5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_TOP)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpMiniMap()
  local v2 = unpack(GuidedTourHelp.OFFSET.MINI_MAP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_openMinimap")
  v4:registerHelp("guidedTourHelpMiniMap", {draw = function(v0, v1)
    if g_currentMission.hud.ingameMap.buttonElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v6 = v2:getWidth()
    local v7 = v2:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 + u0 * v3, v5 + v7 * 0.5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_LEFT)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    if g_currentMission.hud.ingameMap.buttonElement == nil then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = v2:getPosition()
    local v6 = v2:getWidth()
    local v7 = v2:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 + u0 * v3, v5 + v7 * 0.5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_LEFT)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpSwitchVehicle()
  local v2 = v2:getText("introduction_switchVehicle")
  local v5 = unpack(GuidedTourHelp.OFFSET.SWITCH_VEHICLE)
  local v4, v5 = getNormalizedScreenValues(...)
  v6:registerHelp("guidedTourHelpSwitchVehicle", {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
  end, clear = function()
    if g_touchHandler ~= nil then
      v0:revertCustomContext()
      if u0 ~= nil then
        v0:removeTouchArea(u0)
      end
      if u1 ~= nil then
        v0:removeTouchArea(u1)
      end
    end
    v0:removeActionEventsByTarget(u2)
    v0:revertContext()
    v0:hideHelp("guidedTourHelpSwitchVehicle", true)
  end, callback = function()
    u0.clear()
    v0:onSwitchRight(0, 0, false)
  end, callbackBack = function()
    u0.clear()
    v0:onSwitchLeft(0, 0, false)
  end, register = function()
    v0:setContext("guidedTourHelpSwitchVehicle")
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE, u0, u0.callback, false, true, false, true)
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, u0, u0.callbackBack, false, true, false, true)
    if g_touchHandler ~= nil then
      v2:setCustomContext("guidedTourHelpSwitchVehicle", true)
      local v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchRightOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v2
      v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchLeftOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callbackBack, u0, nil)
      u2 = v2
    end
  end, unregister = function()
  end}, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
  end, clear = function()
    if g_touchHandler ~= nil then
      v0:revertCustomContext()
      if u0 ~= nil then
        v0:removeTouchArea(u0)
      end
      if u1 ~= nil then
        v0:removeTouchArea(u1)
      end
    end
    v0:removeActionEventsByTarget(u2)
    v0:revertContext()
    v0:hideHelp("guidedTourHelpSwitchVehicle", true)
  end, callback = function()
    u0.clear()
    v0:onSwitchRight(0, 0, false)
  end, callbackBack = function()
    u0.clear()
    v0:onSwitchLeft(0, 0, false)
  end, register = function()
    v0:setContext("guidedTourHelpSwitchVehicle")
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE, u0, u0.callback, false, true, false, true)
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, u0, u0.callbackBack, false, true, false, true)
    if g_touchHandler ~= nil then
      v2:setCustomContext("guidedTourHelpSwitchVehicle", true)
      local v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchRightOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v2
      v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchLeftOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callbackBack, u0, nil)
      u2 = v2
    end
  end, unregister = function()
  end}.draw, nil, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
  end, clear = function()
    if g_touchHandler ~= nil then
      v0:revertCustomContext()
      if u0 ~= nil then
        v0:removeTouchArea(u0)
      end
      if u1 ~= nil then
        v0:removeTouchArea(u1)
      end
    end
    v0:removeActionEventsByTarget(u2)
    v0:revertContext()
    v0:hideHelp("guidedTourHelpSwitchVehicle", true)
  end, callback = function()
    u0.clear()
    v0:onSwitchRight(0, 0, false)
  end, callbackBack = function()
    u0.clear()
    v0:onSwitchLeft(0, 0, false)
  end, register = function()
    v0:setContext("guidedTourHelpSwitchVehicle")
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE, u0, u0.callback, false, true, false, true)
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, u0, u0.callbackBack, false, true, false, true)
    if g_touchHandler ~= nil then
      v2:setCustomContext("guidedTourHelpSwitchVehicle", true)
      local v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchRightOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v2
      v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchLeftOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callbackBack, u0, nil)
      u2 = v2
    end
  end, unregister = function()
  end}.register, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
  end, clear = function()
    if g_touchHandler ~= nil then
      v0:revertCustomContext()
      if u0 ~= nil then
        v0:removeTouchArea(u0)
      end
      if u1 ~= nil then
        v0:removeTouchArea(u1)
      end
    end
    v0:removeActionEventsByTarget(u2)
    v0:revertContext()
    v0:hideHelp("guidedTourHelpSwitchVehicle", true)
  end, callback = function()
    u0.clear()
    v0:onSwitchRight(0, 0, false)
  end, callbackBack = function()
    u0.clear()
    v0:onSwitchLeft(0, 0, false)
  end, register = function()
    v0:setContext("guidedTourHelpSwitchVehicle")
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE, u0, u0.callback, false, true, false, true)
    v0:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, u0, u0.callbackBack, false, true, false, true)
    if g_touchHandler ~= nil then
      v2:setCustomContext("guidedTourHelpSwitchVehicle", true)
      local v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchRightOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v2
      v2 = v2:registerTouchAreaOverlay(g_currentMission.hud.switchVehicleDisplay.switchLeftOverlay, 0.2, 0.5, TouchHandler.TRIGGER_UP, u0.callbackBack, u0, nil)
      u2 = v2
    end
  end, unregister = function()
  end}.unregister)
  v7:registerHelp("guidedTourHelpSwitchVehicleSimple", {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.switchVehicleDisplay.middleElement:getPosition()
    local v6 = g_currentMission.hud.switchVehicleDisplay.middleElement:getWidth()
    local v7 = g_currentMission.hud.switchVehicleDisplay.middleElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v3, v5 + v7 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil, nil, nil)
end
function GuidedTourHelp.registerHelpVehicleSteering()
  local v2 = unpack(GuidedTourHelp.OFFSET.VEHICLE_STEERING)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_steerVehicle")
  v4:registerHelp("guidedTourHelpVehicleSteer", {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then
      local v3 = v3:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
      -- if not v3 then goto L18 end
    end
    return
    local v4 = v4:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getPosition()
    local v7 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getWidth()
    local v8 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v4, v6 + v8 + u1 * v4, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsSliderActive()
  end}, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then
      local v3 = v3:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
      -- if not v3 then goto L18 end
    end
    return
    local v4 = v4:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getPosition()
    local v7 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getWidth()
    local v8 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v4, v6 + v8 + u1 * v4, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsSliderActive()
  end}.draw, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then
      local v3 = v3:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
      -- if not v3 then goto L18 end
    end
    return
    local v4 = v4:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getPosition()
    local v7 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getWidth()
    local v8 = g_currentMission.hud.steeringSliderDisplay.backgroundHudElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v4, v6 + v8 + u1 * v4, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsSliderActive()
  end}.getIsActive)
end
function GuidedTourHelp.registerHelpPlayerJump()
  local v2 = unpack(GuidedTourHelp.OFFSET.PLAYER_JUMP)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_jump")
  v4:registerHelp("guidedTourHelpPlayerJump", {draw = function(v0, v1)
    local v2 = v2:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getPosition()
    local v6 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getWidth()
    local v7 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v2, v5 + v7 + u1 * v2, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {draw = function(v0, v1)
    local v2 = v2:getValue(GameSettings.SETTING.UI_SCALE)
    local v4, v5 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getPosition()
    local v6 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getWidth()
    local v7 = g_currentMission.hud.speedSliderDisplay.playerJumpButtonElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v4 + v6 * 0.5 + u0 * v2, v5 + v7 + u1 * v2, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil)
end
function GuidedTourHelp.registerHelpVehicleThrottle()
  local v2 = unpack(GuidedTourHelp.OFFSET.VEHICLE_THROTTLE)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_throttle")
  v4:registerHelp("guidedTourHelpVehicleThrottle", {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getPosition()
    local v7 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + u0 * v3, v6 + v7 * 0.5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_RIGHT)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsVehicleThrottleActive()
  end}, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getPosition()
    local v7 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + u0 * v3, v6 + v7 * 0.5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_RIGHT)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsVehicleThrottleActive()
  end}.draw, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getPosition()
    local v7 = g_currentMission.hud.speedSliderDisplay.sliderBackgroundElement:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + u0 * v3, v6 + v7 * 0.5 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_RIGHT)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsVehicleThrottleActive()
  end}.getIsActive)
end
function GuidedTourHelp.registerHelpPlayerMove()
  local v2 = unpack(GuidedTourHelp.OFFSET.PLAYER_MOVE)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getText("introduction_moveCharacter")
  v4:registerHelp("guidedTourHelpPlayerMove", {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.playerControlPadDisplay:getPosition()
    local v7 = g_currentMission.hud.playerControlPadDisplay:getWidth()
    local v8 = g_currentMission.hud.playerControlPadDisplay:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v3, v6 + v8 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsPlayerMoveActive()
  end}, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.playerControlPadDisplay:getPosition()
    local v7 = g_currentMission.hud.playerControlPadDisplay:getWidth()
    local v8 = g_currentMission.hud.playerControlPadDisplay:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v3, v6 + v8 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsPlayerMoveActive()
  end}.draw, {draw = function(v0, v1)
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      return
    end
    local v3 = v3:getValue(GameSettings.SETTING.UI_SCALE)
    local v5, v6 = g_currentMission.hud.playerControlPadDisplay:getPosition()
    local v7 = g_currentMission.hud.playerControlPadDisplay:getWidth()
    local v8 = g_currentMission.hud.playerControlPadDisplay:getHeight()
    IntroductionHelpHUDUtil.drawHelp(v5 + v7 * 0.5 + u0 * v3, v6 + v8 + u1 * v3, u2, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end, getIsActive = function()
    return v0:getIsPlayerMoveActive()
  end}.getIsActive)
end
function GuidedTourHelp.registerHelpActivateObject()
  local v1 = v1:getText("introduction_activateObject")
  v3:registerHelp("guidedTourHelpActivateObject", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpActivateObject", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpActivateObject", u1, g_currentMission.hud.controlBarDisplay.customControls.activateObject)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpActivateObject", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpActivateObject", u1, g_currentMission.hud.controlBarDisplay.customControls.activateObject)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpActivateObject", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpActivateObject", u1, g_currentMission.hud.controlBarDisplay.customControls.activateObject)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpActivateObject", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpActivateObject", u1, g_currentMission.hud.controlBarDisplay.customControls.activateObject)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpEnterVehicle()
  local v1 = v1:getText("introduction_enterVehicle")
  v3:registerHelp("guidedTourHelpEnterVehicle", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpEnterVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpEnterVehicle", u1, g_currentMission.hud.controlBarDisplay.playerControls.enter_vehicle)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpEnterVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpEnterVehicle", u1, g_currentMission.hud.controlBarDisplay.playerControls.enter_vehicle)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpEnterVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpEnterVehicle", u1, g_currentMission.hud.controlBarDisplay.playerControls.enter_vehicle)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpEnterVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpEnterVehicle", u1, g_currentMission.hud.controlBarDisplay.playerControls.enter_vehicle)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpTurnOnEquipment()
  local v1 = v1:getText("introduction_turnOnEquipment")
  v3:registerHelp("guidedTourHelpTurnOnEquipment", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpTurnOnEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpTurnOnEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.turnOn)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpTurnOnEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpTurnOnEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.turnOn)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpTurnOnEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpTurnOnEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.turnOn)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpTurnOnEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpTurnOnEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.turnOn)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpExitVehicle()
  local v1 = v1:getText("introduction_exitVehicle")
  v3:registerHelp("guidedTourHelpExitVehicle", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpExitVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpExitVehicle", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.leave)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpExitVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpExitVehicle", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.leave)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpExitVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpExitVehicle", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.leave)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpExitVehicle", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpExitVehicle", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.leave)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpAttachEquipment()
  local v1 = v1:getText("introduction_attachEquipment")
  v3:registerHelp("guidedTourHelpAttachEquipment", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpAttachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpAttachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpAttachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpAttachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpAttachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpAttachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpAttachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpAttachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpDetachEquipment()
  local v1 = v1:getText("introduction_detachEquipment")
  v3:registerHelp("guidedTourHelpDetachEquipment", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpDetachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpDetachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpDetachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpDetachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpDetachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpDetachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpDetachEquipment", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpDetachEquipment", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.attach)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpHireAI()
  local v1 = v1:getText("introduction_hireAIHelp")
  v3:registerHelp("guidedTourHelpHireAI", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpHireAI", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpHireAI", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.ai)
    u0 = v0
  end, unregister = function()
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpHireAI", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpHireAI", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.ai)
    u0 = v0
  end, unregister = function()
  end}.draw, nil, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpHireAI", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpHireAI", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.ai)
    u0 = v0
  end, unregister = function()
  end}.register, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(u0.button, u1)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpHireAI", u0, u1)
    u0.button.buttonCallback()
  end, register = function()
    local v0 = GuidedTourHelp.controlBarRegisterContext("guidedTourHelpHireAI", u1, g_currentMission.hud.controlBarDisplay.vehicleControls.ai)
    u0 = v0
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpToggleSeeds()
  local v1 = v1:getText("introduction_toggleSeeds")
  v3:registerHelp("guidedTourHelpToggleSeeds", {draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds, u0)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpToggleSeeds", u0, u1)
    ControlBarDisplay.onChangeSeedCallback(g_currentMission.hud.controlBarDisplay.fillLevelControls[1])
  end, register = function()
    v0:setContext("guidedTourHelpToggleSeeds")
    v0:registerActionEvent(InputAction.TOGGLE_SEEDS, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v1:setCustomContext("guidedTourHelpToggleSeeds", true)
      local v1 = v1:registerTouchAreaOverlay(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds.overlay, 0.2, 0.2, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v1
    end
  end, unregister = function()
  end}, {draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds, u0)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpToggleSeeds", u0, u1)
    ControlBarDisplay.onChangeSeedCallback(g_currentMission.hud.controlBarDisplay.fillLevelControls[1])
  end, register = function()
    v0:setContext("guidedTourHelpToggleSeeds")
    v0:registerActionEvent(InputAction.TOGGLE_SEEDS, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v1:setCustomContext("guidedTourHelpToggleSeeds", true)
      local v1 = v1:registerTouchAreaOverlay(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds.overlay, 0.2, 0.2, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v1
    end
  end, unregister = function()
  end}.draw, nil, {draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds, u0)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpToggleSeeds", u0, u1)
    ControlBarDisplay.onChangeSeedCallback(g_currentMission.hud.controlBarDisplay.fillLevelControls[1])
  end, register = function()
    v0:setContext("guidedTourHelpToggleSeeds")
    v0:registerActionEvent(InputAction.TOGGLE_SEEDS, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v1:setCustomContext("guidedTourHelpToggleSeeds", true)
      local v1 = v1:registerTouchAreaOverlay(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds.overlay, 0.2, 0.2, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v1
    end
  end, unregister = function()
  end}.register, {draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds, u0)
  end, callback = function()
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpToggleSeeds", u0, u1)
    ControlBarDisplay.onChangeSeedCallback(g_currentMission.hud.controlBarDisplay.fillLevelControls[1])
  end, register = function()
    v0:setContext("guidedTourHelpToggleSeeds")
    v0:registerActionEvent(InputAction.TOGGLE_SEEDS, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v1:setCustomContext("guidedTourHelpToggleSeeds", true)
      local v1 = v1:registerTouchAreaOverlay(g_currentMission.hud.controlBarDisplay.buttonToggleSeeds.overlay, 0.2, 0.2, TouchHandler.TRIGGER_UP, u0.callback, u0, nil)
      u1 = v1
    end
  end, unregister = function()
  end}.unregister)
end
function GuidedTourHelp.registerHelpFillLevelDisplay()
  local v0 = v0:getText("introduction_fillLevel")
  v2:registerHelp("guidedTourHelpFillLevelDisplay", {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonShowFillLevel, u0)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}, {button = nil, draw = function(v0, v1)
    GuidedTourHelp.drawControlBarHelp(g_currentMission.hud.controlBarDisplay.buttonShowFillLevel, u0)
    IntroductionHelpHUDUtil.drawSkipMessage(v1)
  end}.draw, nil, nil, nil)
end
function GuidedTourHelp.registerHelpCabinView()
  local v1 = v1:getText("introduction_enterCabinTouch")
  local v2 = v2:getText("introduction_enterCabinGamepad")
  v4:registerHelp("guidedTourHelpCabinView", {glyph = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinView", u1, nil)
    Enterable.actionEventCameraSwitch(g_currentMission.hud.controlBarDisplay.vehicle)
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinView")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinView", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
  end, unregister = function()
    v0:delete()
  end}, {glyph = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinView", u1, nil)
    Enterable.actionEventCameraSwitch(g_currentMission.hud.controlBarDisplay.vehicle)
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinView")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinView", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
  end, unregister = function()
    v0:delete()
  end}.draw, nil, {glyph = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinView", u1, nil)
    Enterable.actionEventCameraSwitch(g_currentMission.hud.controlBarDisplay.vehicle)
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinView")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinView", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
  end, unregister = function()
    v0:delete()
  end}.register, {glyph = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinView", u1, nil)
    Enterable.actionEventCameraSwitch(g_currentMission.hud.controlBarDisplay.vehicle)
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinView")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinView", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
  end, unregister = function()
    v0:delete()
  end}.unregister)
end
function GuidedTourHelp.registerHelpCabinViewLeave()
  local v1 = v1:getText("introduction_leaveCabinTouch")
  local v2 = v2:getText("introduction_leaveCabinGamepad")
  v4:registerHelp("guidedTourHelpCabinViewLeave", {glyph = nil, vehicle = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinViewLeave", u1, nil)
    Enterable.actionEventCameraSwitch(u1.vehicle)
    local v0 = v0:getActiveCamera()
    v0:resetCamera()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinViewLeave")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinViewLeave", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
  end}, {glyph = nil, vehicle = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinViewLeave", u1, nil)
    Enterable.actionEventCameraSwitch(u1.vehicle)
    local v0 = v0:getActiveCamera()
    v0:resetCamera()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinViewLeave")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinViewLeave", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
  end}.draw, nil, {glyph = nil, vehicle = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinViewLeave", u1, nil)
    Enterable.actionEventCameraSwitch(u1.vehicle)
    local v0 = v0:getActiveCamera()
    v0:resetCamera()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinViewLeave")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinViewLeave", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
  end}.register, {glyph = nil, vehicle = nil, draw = function(v0, v1)
    local v4 = v4:getLastInputMode()
    if v4 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(v3, v2)
  end, callback = function()
    if g_touchHandler ~= nil and u0 ~= nil then
      v0:removeGestureListener(u0)
    end
    GuidedTourHelp.controlBarRevertContext("guidedTourHelpCabinViewLeave", u1, nil)
    Enterable.actionEventCameraSwitch(u1.vehicle)
    local v0 = v0:getActiveCamera()
    v0:resetCamera()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setAction(InputAction.CAMERA_SWITCH)
    u0.glyph = v2
    v3:setContext("guidedTourHelpCabinViewLeave")
    v3:registerActionEvent(InputAction.CAMERA_SWITCH, u0, u0.callback, false, true, false, true)
    if g_touchHandler ~= nil then
      v3:setCustomContext("guidedTourHelpCabinViewLeave", true)
      local v3 = v3:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, u0.callback, u0)
      u1 = v3
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
  end}.unregister)
end
function GuidedTourHelp.registerHelpCameraMovement()
  local v2 = v2:getText("introduction_cameraMovement")
  v4:registerHelp("guidedTourHelpCameraMovement", {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v4 = math.abs(v0.lastInputValues.upDown)
    u0.distance = u0.distance + v4
    v4 = math.abs(v0.lastInputValues.leftRight)
    u0.distance = u0.distance + v4
    if 5 < u0.distance then
      if g_touchHandler ~= nil then
        if u1 ~= nil then
          v1:removeGestureListener(u1)
        end
        if u2 ~= nil then
          v1:removeGestureListener(u2)
        end
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraMovement", u0, nil)
    end
  end, onUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookUpDown(...)
    u0.tryFinish()
  end, onLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookLeftRight(...)
    u0.tryFinish()
  end, onTouchUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookUpDown(...)
    u0.tryFinish()
  end, onTouchLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookLeftRight(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.AXIS_LOOK_UPDOWN_VEHICLE, InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1600, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraMovement")
    v4:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, u0, u0.onUpDown, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, u0, u0.onLeftRight, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraMovement", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, u0.onTouchUpDown, u0)
      u1 = v4
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_X, u0.onTouchLeftRight, u0)
      u2 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v4 = math.abs(v0.lastInputValues.upDown)
    u0.distance = u0.distance + v4
    v4 = math.abs(v0.lastInputValues.leftRight)
    u0.distance = u0.distance + v4
    if 5 < u0.distance then
      if g_touchHandler ~= nil then
        if u1 ~= nil then
          v1:removeGestureListener(u1)
        end
        if u2 ~= nil then
          v1:removeGestureListener(u2)
        end
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraMovement", u0, nil)
    end
  end, onUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookUpDown(...)
    u0.tryFinish()
  end, onLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookLeftRight(...)
    u0.tryFinish()
  end, onTouchUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookUpDown(...)
    u0.tryFinish()
  end, onTouchLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookLeftRight(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.AXIS_LOOK_UPDOWN_VEHICLE, InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1600, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraMovement")
    v4:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, u0, u0.onUpDown, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, u0, u0.onLeftRight, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraMovement", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, u0.onTouchUpDown, u0)
      u1 = v4
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_X, u0.onTouchLeftRight, u0)
      u2 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.draw, nil, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v4 = math.abs(v0.lastInputValues.upDown)
    u0.distance = u0.distance + v4
    v4 = math.abs(v0.lastInputValues.leftRight)
    u0.distance = u0.distance + v4
    if 5 < u0.distance then
      if g_touchHandler ~= nil then
        if u1 ~= nil then
          v1:removeGestureListener(u1)
        end
        if u2 ~= nil then
          v1:removeGestureListener(u2)
        end
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraMovement", u0, nil)
    end
  end, onUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookUpDown(...)
    u0.tryFinish()
  end, onLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookLeftRight(...)
    u0.tryFinish()
  end, onTouchUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookUpDown(...)
    u0.tryFinish()
  end, onTouchLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookLeftRight(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.AXIS_LOOK_UPDOWN_VEHICLE, InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1600, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraMovement")
    v4:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, u0, u0.onUpDown, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, u0, u0.onLeftRight, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraMovement", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, u0.onTouchUpDown, u0)
      u1 = v4
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_X, u0.onTouchLeftRight, u0)
      u2 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.register, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v4 = math.abs(v0.lastInputValues.upDown)
    u0.distance = u0.distance + v4
    v4 = math.abs(v0.lastInputValues.leftRight)
    u0.distance = u0.distance + v4
    if 5 < u0.distance then
      if g_touchHandler ~= nil then
        if u1 ~= nil then
          v1:removeGestureListener(u1)
        end
        if u2 ~= nil then
          v1:removeGestureListener(u2)
        end
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraMovement", u0, nil)
    end
  end, onUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookUpDown(...)
    u0.tryFinish()
  end, onLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.actionEventLookLeftRight(...)
    u0.tryFinish()
  end, onTouchUpDown = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookUpDown(...)
    u0.tryFinish()
  end, onTouchLeftRight = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventLookLeftRight(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.AXIS_LOOK_UPDOWN_VEHICLE, InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1600, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraMovement")
    v4:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, u0, u0.onUpDown, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, u0, u0.onLeftRight, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraMovement", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, u0.onTouchUpDown, u0)
      u1 = v4
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_AXIS_X, u0.onTouchLeftRight, u0)
      u2 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.unregister)
end
function GuidedTourHelp.registerHelpCameraZoom()
  local v1 = v1:getText("introduction_cameraZoom")
  v3:registerHelp("guidedTourHelpCameraZoom", {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, zoomTargetStart = 0, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v5 = math.abs(v0.zoomTarget - u0.zoomTargetStart)
    u0.distance = u0.distance + v5
    u0.zoomTargetStart = v0.zoomTarget
    if 10 < u0.distance then
      if g_touchHandler ~= nil and u1 ~= nil then
        v2:removeGestureListener(u1)
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraZoom", u0, nil)
    end
  end, onTouchZoom = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventZoomInOut(...)
    u0.tryFinish()
  end, onZoomIn = function(v0, ...)
    Enterable.actionEventCameraZoomIn(...)
    u0.tryFinish()
  end, onZoomOut = function(v0, ...)
    Enterable.actionEventCameraZoomOut(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.CAMERA_ZOOM_OUT, InputAction.CAMERA_ZOOM_IN})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1517, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraZoom")
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_IN, u0, u0.onZoomIn, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_OUT, u0, u0.onZoomOut, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraZoom", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_PINCH, u0.onTouchZoom, u0)
      u1 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
    v4 = v4:getActiveCamera()
    u0.zoomTargetStart = v4.zoomTarget
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, zoomTargetStart = 0, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v5 = math.abs(v0.zoomTarget - u0.zoomTargetStart)
    u0.distance = u0.distance + v5
    u0.zoomTargetStart = v0.zoomTarget
    if 10 < u0.distance then
      if g_touchHandler ~= nil and u1 ~= nil then
        v2:removeGestureListener(u1)
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraZoom", u0, nil)
    end
  end, onTouchZoom = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventZoomInOut(...)
    u0.tryFinish()
  end, onZoomIn = function(v0, ...)
    Enterable.actionEventCameraZoomIn(...)
    u0.tryFinish()
  end, onZoomOut = function(v0, ...)
    Enterable.actionEventCameraZoomOut(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.CAMERA_ZOOM_OUT, InputAction.CAMERA_ZOOM_IN})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1517, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraZoom")
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_IN, u0, u0.onZoomIn, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_OUT, u0, u0.onZoomOut, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraZoom", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_PINCH, u0.onTouchZoom, u0)
      u1 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
    v4 = v4:getActiveCamera()
    u0.zoomTargetStart = v4.zoomTarget
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.draw, nil, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, zoomTargetStart = 0, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v5 = math.abs(v0.zoomTarget - u0.zoomTargetStart)
    u0.distance = u0.distance + v5
    u0.zoomTargetStart = v0.zoomTarget
    if 10 < u0.distance then
      if g_touchHandler ~= nil and u1 ~= nil then
        v2:removeGestureListener(u1)
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraZoom", u0, nil)
    end
  end, onTouchZoom = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventZoomInOut(...)
    u0.tryFinish()
  end, onZoomIn = function(v0, ...)
    Enterable.actionEventCameraZoomIn(...)
    u0.tryFinish()
  end, onZoomOut = function(v0, ...)
    Enterable.actionEventCameraZoomOut(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.CAMERA_ZOOM_OUT, InputAction.CAMERA_ZOOM_IN})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1517, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraZoom")
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_IN, u0, u0.onZoomIn, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_OUT, u0, u0.onZoomOut, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraZoom", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_PINCH, u0.onTouchZoom, u0)
      u1 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
    v4 = v4:getActiveCamera()
    u0.zoomTargetStart = v4.zoomTarget
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.register, {glyphGamepad = nil, glyphTouch = nil, vehicle = nil, zoomTargetStart = 0, distance = 0, draw = function(v0, v1)
    local v3 = v3:getLastInputMode()
    if v3 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    IntroductionHelpHUDUtil.drawMessage(u1, v2)
  end, tryFinish = function()
    local v0 = v0:getActiveCamera()
    local v5 = math.abs(v0.zoomTarget - u0.zoomTargetStart)
    u0.distance = u0.distance + v5
    u0.zoomTargetStart = v0.zoomTarget
    if 10 < u0.distance then
      if g_touchHandler ~= nil and u1 ~= nil then
        v2:removeGestureListener(u1)
      end
      GuidedTourHelp.controlBarRevertContext("guidedTourHelpCameraZoom", u0, nil)
    end
  end, onTouchZoom = function(v0, ...)
    local v2 = v2:getActiveCamera()
    VehicleCamera.touchEventZoomInOut(...)
    u0.tryFinish()
  end, onZoomIn = function(v0, ...)
    Enterable.actionEventCameraZoomIn(...)
    u0.tryFinish()
  end, onZoomOut = function(v0, ...)
    Enterable.actionEventCameraZoomOut(...)
    u0.tryFinish()
  end, register = function()
    local v0, v1 = getNormalizedScreenValues(60, 60)
    local v2 = InputGlyphElement.new(g_inputDisplayManager, v0, v1)
    v2:setActions({InputAction.CAMERA_ZOOM_OUT, InputAction.CAMERA_ZOOM_IN})
    u0.glyphGamepad = v2
    local v3, v4 = getNormalizedScreenValues(72, 72)
    v3 = Overlay.new("dataS/menu/controllerSymbols2048.png", 0, 0, v3, v4)
    local v6 = GuiUtils.getUVs({1517, 192, 72, 72}, {2048, 1024})
    v3:setUVs(...)
    local v5 = HUDElement.new(v3)
    u0.glyphTouch = v5
    v4:setContext("guidedTourHelpCameraZoom")
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_IN, u0, u0.onZoomIn, false, true, true, true, nil)
    v4:registerActionEvent(InputAction.CAMERA_ZOOM_OUT, u0, u0.onZoomOut, false, true, true, true, nil)
    if g_touchHandler ~= nil then
      v4:setCustomContext("guidedTourHelpCameraZoom", true)
      v4 = v4:registerGestureListener(TouchHandler.GESTURE_PINCH, u0.onTouchZoom, u0)
      u1 = v4
    end
    u0.vehicle = g_currentMission.hud.controlBarDisplay.vehicle
    v4 = v4:getActiveCamera()
    u0.zoomTargetStart = v4.zoomTarget
  end, unregister = function()
    v0:delete()
    v0:delete()
  end}.unregister)
end
function GuidedTourHelp:drawControlBarHelp(v1)
  if self == nil then
    return
  end
  local v2, v3 = getNormalizedScreenValues(0, 20)
  local v4 = v4:getValue(GameSettings.SETTING.UI_SCALE)
  local v5, v6 = self:getPosition()
  local v9 = self:getWidth()
  local v8 = self:getHeight()
  IntroductionHelpHUDUtil.drawHelp(v5 + v9 * 0.5 + v2 * v4, v6 + v8 + v3 * v4, v1, IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM)
end
function GuidedTourHelp.controlBarRegisterContext(v0, v1, v2)
  v1.button = v2.button
  v4:setContext(v0)
  v4:registerActionEvent(v2.inputAction, v1, v1.callback, false, true, false, true)
  if g_touchHandler ~= nil then
    v4:setCustomContext(v0, true)
    local v4 = v4:registerTouchAreaOverlay(v1.button.overlay, 0.2, 0.2, TouchHandler.TRIGGER_UP, v1.callback, v1, nil)
  end
  return v3
end
function GuidedTourHelp.controlBarRevertContext(v0, v1, v2)
  if g_touchHandler ~= nil then
    v3:revertCustomContext()
    if v2 ~= nil then
      v3:removeTouchArea(v2)
    end
  end
  v3:removeActionEventsByTarget(v1)
  v3:revertContext()
  v3:hideHelp(v0, true)
end
GuidedTourHelp.OFFSET = {HELP = {0, -20}, CALENDAR = {145, 0}, TIME = {400, 0}, BALANCE = {200, 0}, FUEL = {150, 0}, MINI_MAP = {20, 0}, SWITCH_VEHICLE = {0, 20}, VEHICLE_STEERING = {0, 20}, PLAYER_JUMP = {0, 20}, VEHICLE_THROTTLE = {-20, 0}, PLAYER_MOVE = {0, 20}}
