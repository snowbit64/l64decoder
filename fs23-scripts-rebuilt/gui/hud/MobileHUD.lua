-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/gui/hud/HUDSliderElement.lua")
source("dataS/scripts/gui/hud/ControlBarDisplay.lua")
source("dataS/scripts/gui/hud/SpeedSliderDisplay.lua")
source("dataS/scripts/gui/hud/SteeringSliderDisplay.lua")
source("dataS/scripts/gui/hud/SwitchVehicleDisplay.lua")
source("dataS/scripts/gui/hud/PlayerControlPadDisplay.lua")
source("dataS/scripts/gui/hud/GameInfoDisplayMobile.lua")
source("dataS/scripts/gui/hud/IngameMapMobile.lua")
source("dataS/scripts/gui/hud/SideNotificationMobile.lua")
source("dataS/scripts/gui/hud/HUDPopupMessageMobile.lua")
source("dataS/scripts/gui/hud/HUDButtonElement.lua")
source("dataS/scripts/gui/hud/IntroductionHelpHUDUtil.lua")
source("dataS/scripts/gui/hud/InputGlyphMobileElement.lua")
source("dataS/scripts/gui/hud/POIInfoDisplay.lua")
MobileHUD = {}
local MobileHUD_mt = Class(MobileHUD, HUD)
function MobileHUD.new(isServer, isClient, isConsoleVersion, messageCenter, l10n, inputManager, inputDisplayManager, modManager, fillTypeManager, fruitTypeManager, guiSoundPlayer, currentMission, farmManager, farmlandManager)
  local v15 = v15:superClass()
  local v14 = v15.new(isServer, isClient, isConsoleVersion, messageCenter, l10n, inputManager, inputDisplayManager, modManager, fillTypeManager, fruitTypeManager, guiSoundPlayer, currentMission, farmManager, farmlandManager, u0)
  v14.lastMouseInput = {posX = 0, posY = 0, isDown = false, isUp = false, button = 0, touchIsDown = false}
  v15:subscribe(MessageType.AI_VEHICLE_STATE_CHANGE, v14.onAIVehicleStateChanged, v14)
  IntroductionHelpHUDUtil.init()
  return v14
end
function MobileHUD:delete()
  v1:removeAllTouchAreas()
  v1:unsubscribeAll(self)
  IntroductionHelpHUDUtil.delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function MobileHUD:createDisplayComponents(uiScale)
  self.buttons = {}
  local v2 = IngameMapMobile.new(self, g_baseHUDFilename, g_controlHUDFilename, self.inputDisplayManager)
  self.ingameMap = v2
  v2:setScale(uiScale)
  table.insert(self.displayComponents, self.ingameMap)
  v2 = GamePausedDisplay.new(g_baseHUDFilename)
  self.gamePausedDisplay = v2
  v2:setScale(uiScale)
  v2:setVisible(false)
  table.insert(self.displayComponents, self.gamePausedDisplay)
  v2 = Overlay.new(HUD.MENU_BACKGROUND_PATH, 0.5, 0, 1, g_screenWidth / g_screenHeight)
  self.menuBackgroundOverlay = v2
  v2:setAlignment(Overlay.ALIGN_VERTICAL_BOTTOM, Overlay.ALIGN_HORIZONTAL_CENTER)
  self.blinkingWarning = nil
  v2 = HUDTextDisplay.new(0.5, 0.5, HUD.TEXT_SIZE.BLINKING_WARNING, RenderText.ALIGN_CENTER, HUD.COLOR.BLINKING_WARNING, true)
  self.blinkingWarningDisplay = v2
  v2 = TweenSequence.new(self.blinkingWarningDisplay)
  local v5 = MultiValueTween.new(self.blinkingWarningDisplay.setTextColorChannels, HUD.COLOR.BLINKING_WARNING_1, HUD.COLOR.BLINKING_WARNING_2, HUD.ANIMATION.BLINKING_WARNING_TIME)
  v2:addTween(...)
  v5 = MultiValueTween.new(self.blinkingWarningDisplay.setTextColorChannels, HUD.COLOR.BLINKING_WARNING_2, HUD.COLOR.BLINKING_WARNING_1, HUD.ANIMATION.BLINKING_WARNING_TIME)
  v2:addTween(...)
  v2:setLooping(true)
  fadeOverlay:setAnimation(v2)
  fadeOverlay:setVisible(false)
  table.insert(self.displayComponents, self.blinkingWarningDisplay)
  local fadeOverlay = Overlay.new(g_baseHUDFilename, 0, 0, 1, 1)
  local v6 = GuiUtils.getUVs(HUD.UV.AREA)
  fadeOverlay:setUVs(...)
  fadeOverlay:setColor(0, 0, 0, 0)
  local v4 = HUDElement.new(fadeOverlay)
  self.fadeScreenElement = v4
  table.insert(self.displayComponents, self.fadeScreenElement)
  v4 = HUDPopupMessageMobile.new(g_baseHUDFilename, self.ingameMap)
  self.popupMessage = v4
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  table.insert(self.displayComponents, self.popupMessage)
  v4 = InGameIcon.new()
  self.inGameIcon = v4
  table.insert(self.displayComponents, self.inGameIcon)
  local v7 = v7:getValue("moneyUnit")
  v4 = GameInfoDisplayMobile.new(self, g_baseHUDFilename, v7, g_controlHUDFilename)
  self.gameInfoDisplay = v4
  v4:setScale(uiScale)
  v4:setTemperatureVisible(false)
  v4:setVehicle(self.controlledVehicle)
  table.insert(self.displayComponents, self.gameInfoDisplay)
  v4 = ControlBarDisplay.new(self, g_baseHUDFilename, g_controlHUDFilename)
  self.controlBarDisplay = v4
  v4:setVehicle(self.controlledVehicle)
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.controlBarDisplay)
  v4 = SwitchVehicleDisplay.new(self, g_baseHUDFilename, g_controlHUDFilename)
  self.switchVehicleDisplay = v4
  v4:setVehicle(self.controlledVehicle)
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.switchVehicleDisplay)
  v4 = SpeedSliderDisplay.new(self, g_baseHUDFilename, g_controlHUDFilename)
  self.speedSliderDisplay = v4
  v4:setVehicle(self.controlledVehicle)
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.speedSliderDisplay)
  v4 = SteeringSliderDisplay.new(self, g_baseHUDFilename)
  self.steeringSliderDisplay = v4
  v4:setVehicle(self.controlledVehicle)
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.steeringSliderDisplay)
  v4 = PlayerControlPadDisplay.new(self, g_baseHUDFilename)
  self.playerControlPadDisplay = v4
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.playerControlPadDisplay)
  v4 = AchievementMessage.new(g_baseHUDFilename, self.inputManager, self.guiSoundPlayer, nil)
  self.achievementMessage = v4
  v4:setScale(uiScale)
  v4:setVisible(false, false)
  table.insert(self.displayComponents, self.achievementMessage)
  v4 = SideNotificationMobile.new(g_baseHUDFilename)
  self.sideNotifications = v4
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(true, false)
  table.insert(self.displayComponents, self.sideNotifications)
  v4 = TopNotification.new(g_baseHUDFilename)
  self.topNotification = v4
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(false, false)
  table.insert(self.displayComponents, self.topNotification)
  v4 = InfoDisplay.new(g_baseHUDFilename)
  self.infoDisplay = v4
  v4:setScale(uiScale)
  v4:storeOriginalPosition()
  v4:setVisible(false, false)
  table.insert(self.displayComponents, self.infoDisplay)
  v4 = POIInfoDisplay.new(g_baseHUDFilename)
  self.poiInfoDisplay = v4
  v4:setScale(uiScale)
  table.insert(self.displayComponents, self.poiInfoDisplay)
end
function MobileHUD:drawControlledEntityHUD()
  if self.isVisible then
    if self.controlledVehicle ~= nil then
      -- if not v0.showVehicleInfo then goto L38 end
      v1:draw()
    elseif self.controlPlayer and self.player ~= nil then
      v1:draw()
      v1:draw()
      v1:draw()
    end
    v1:draw()
    v1:draw()
    v1:draw()
    v1:draw()
    v1:draw()
    v1:setText("")
  end
end
function MobileHUD:setPOIInfoText(v1)
  v2:setText(v1)
end
function MobileHUD.drawInputHelp(v0)
end
function MobileHUD.drawVehicleName(v0)
end
function MobileHUD.drawInGameMessageAndIcon(v0)
end
function MobileHUD.addExtraPrintText(v0, v1)
end
function MobileHUD.showVehicleName(v0, v1)
end
function MobileHUD.showAttachContext(v0, v1)
end
function MobileHUD.showTipContext(v0, v1)
end
function MobileHUD.showFuelContext(v0, v1)
end
function MobileHUD.showFillDogBowlContext(v0)
end
function MobileHUD:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  v3:onMenuVisibilityChange(isMenuVisible)
end
function MobileHUD.setInputHelpVisible(v0, v1)
end
function MobileHUD.addCustomInputHelpEntry(v0, v1, v2, v3, v4)
end
function MobileHUD.clearCustomInputHelpEntries(v0)
end
function MobileHUD:setControlledVehicle(vehicle)
  self.controlledVehicle = vehicle
  aiActive:setVehicle(vehicle)
  aiActive:setVehicle(vehicle)
  aiActive:setVehicle(vehicle)
  aiActive:setVehicle(vehicle)
  if vehicle ~= nil then
    local aiActive = vehicle:getIsAIActive()
    v3:onAIVehicleStateChanged(aiActive, vehicle)
    v3:onAIVehicleStateChanged(aiActive, vehicle)
    v3:onAIVehicleStateChanged(aiActive, vehicle)
  end
  aiActive:onInputHelpModeChange(self.lastInputHelpMode)
  aiActive:onInputHelpModeChange(self.lastInputHelpMode)
  aiActive:onInputHelpModeChange(self.lastInputHelpMode)
  aiActive:onInputHelpModeChange(self.lastInputHelpMode)
  aiActive:setVehicle(vehicle)
end
function MobileHUD:setIsControllingPlayer(isControllingPlayer)
  local v3 = v3:superClass()
  v3.setIsControllingPlayer(self, isControllingPlayer)
  if isControllingPlayer then
  end
  self.isControllingPlayer = isControllingPlayer
  v3:setPlayer(v2)
  v3:setPlayer(v2)
  v3:setPlayer(v2)
  v3:setPlayer(v2)
  v3:setPlayer(v2)
  v3:setPlayer(v2)
end
function MobileHUD:update(dt)
  local v2 = v2:getFinished()
  if not v2 then
    v2:update(dt)
  end
  self.fadeFollowDelay = self.fadeFollowDelay - dt
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2:update(dt)
  v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    v3:onInputHelpModeChange(v2)
    v3:onInputHelpModeChange(v2)
    v3:onInputHelpModeChange(v2)
    v3:onInputHelpModeChange(v2)
    v3:onInputHelpModeChange(v2)
    self.lastInputHelpMode = v2
  end
  local v3 = v3:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
  if self.lastGyroSteeringState ~= v3 then
    v4:onGyroscopeSteeringChanged(v3)
    v4:onGyroscopeSteeringChanged(v3)
    v4:onGyroscopeSteeringChanged(v3)
  end
  if self.lastMouseInput.touchIsDown then
    self:mouseEvent(self.lastMouseInput.posX, self.lastMouseInput.posY, true, false, self.lastMouseInput.button)
  end
  local v4 = v4:getIsGuiVisible()
  if not v4 then
    local v5 = Input.isKeyPressed(Input.KEY_lctrl)
    if v5 then
    end
    if self.debugMouseCursorActive ~= v4 then
      v5:setShowMouseCursor(v4, false)
      self.debugMouseCursorActive = v4
    end
  end
end
function MobileHUD.addTouchButton(v0, v1, v2, v3, v4, v5, v6, v7)
  return v8:registerTouchAreaOverlay(v1, v2, v3, v6, v4, v5, v7)
end
function MobileHUD.removeTouchButton(v0, v1)
  v2:removeTouchArea(v1)
end
function MobileHUD.hideTouchButton(v0, v1)
  v2:setTouchAreaVisibility(v1, false)
end
function MobileHUD.showTouchButton(v0, v1)
  v2:setTouchAreaVisibility(v1, true)
end
function MobileHUD:onAIVehicleStateChanged(state, vehicle)
  v3:onAIVehicleStateChanged(state, vehicle)
  v3:onAIVehicleStateChanged(state, vehicle)
  v3:onAIVehicleStateChanged(state, vehicle)
end
function MobileHUD:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
  v2:setMissionInfo(missionInfo)
end
function MobileHUD.scrollChatMessages(v0, v1, v2)
end
function MobileHUD.setChatWindowVisible(v0, v1, v2)
end
function MobileHUD.setChatMessagesReference(v0, v1)
end
function MobileHUD.addChatMessage(v0, v1, v2, v3)
end
function MobileHUD.setConnectedUsers(v0, v1)
end
function MobileHUD.setInfoVisible(v0, v1)
end
function MobileHUD:updateMap(dt)
  v2:update(dt)
end
function MobileHUD:registerInput()
  v1:registerInput()
end
function MobileHUD.showInGameMessage(v0, v1, v2, v3, v4, v5, v6)
  TourDialog.show(v1, v2, v4, v5, v6)
end
