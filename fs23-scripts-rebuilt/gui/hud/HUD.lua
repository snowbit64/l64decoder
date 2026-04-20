-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/gui/hud/mapHotspots/MapHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/AIHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/AIPlaceableMarkerHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/AITargetHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/FieldHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/MissionHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/PlaceableHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/PlayerHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/TourHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/VehicleHotspot.lua")
source("dataS/scripts/gui/hud/mapHotspots/CollectibleHotspot.lua")
source("dataS/scripts/gui/hud/VehicleHUDExtension.lua")
source("dataS/scripts/gui/hud/HUDElement.lua")
source("dataS/scripts/gui/hud/HUDDisplayElement.lua")
source("dataS/scripts/gui/hud/HUDFrameElement.lua")
source("dataS/scripts/gui/hud/HUDTextButtonElement.lua")
source("dataS/scripts/gui/hud/GameInfoDisplay.lua")
source("dataS/scripts/gui/hud/SpeedMeterDisplay.lua")
source("dataS/scripts/gui/hud/FillLevelsDisplay.lua")
source("dataS/scripts/gui/hud/InputGlyphElement.lua")
source("dataS/scripts/gui/hud/ContextActionDisplay.lua")
source("dataS/scripts/gui/hud/AchievementMessage.lua")
source("dataS/scripts/gui/hud/IngameMap.lua")
source("dataS/scripts/gui/hud/IngameMapLayout.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutCircle.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutSquare.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutSquareLarge.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutNone.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutFullscreen.lua")
source("dataS/scripts/gui/hud/InputHelpDisplay.lua")
source("dataS/scripts/gui/hud/VehicleSchemaDisplay.lua")
source("dataS/scripts/gui/hud/HUDPopupMessage.lua")
source("dataS/scripts/gui/hud/SideNotification.lua")
source("dataS/scripts/gui/hud/TopNotification.lua")
source("dataS/scripts/gui/hud/GamePausedDisplay.lua")
source("dataS/scripts/gui/hud/HUDTextDisplay.lua")
source("dataS/scripts/gui/hud/ChatWindow.lua")
source("dataS/scripts/gui/hud/SpeakerDisplay.lua")
source("dataS/scripts/gui/hud/HUDRoundedBarElement.lua")
source("dataS/scripts/gui/hud/InfoDisplay.lua")
source("dataS/scripts/gui/hud/InfoHUDBox.lua")
source("dataS/scripts/gui/hud/KeyValueInfoHUDBox.lua")
source("dataS/scripts/gui/hud/KeyValueInfoHUDBoxMobile.lua")
HUD = {}
local HUD_mt = Class(HUD)
HUD.SCHEMA_OVERLAY_DEFINITIONS_PATH = "dataS/vehicleSchemaOverlays.xml"
HUD.MENU_BACKGROUND_PATH = "shared/splashBlur.png"
HUD.CONTEXT_PRIORITY = {LOW = 1, MEDIUM = 2, HIGH = 3}
HUD.GAME_INFO_PART = {NONE = 0, MONEY = 1, TIME = 2, TEMPERATURE = 4, WEATHER = 8, TUTORIAL = 16}
HUD.ACHIEVEMENT_DISPLAY_DURATION = 5000
HUD.FADE_FOLLOW_DELAY = 100
function HUD.new(isServer, isClient, isConsoleVersion, messageCenter, l10n, inputManager, inputDisplayManager, modManager, fillTypeManager, fruitTypeManager, guiSoundPlayer, currentMission, farmManager, farmlandManager, customMt)
  if not customMt then
  end
  local v15 = v15(v16, v17)
  v15.isServer = isServer
  v15.isClient = isClient
  v15.isConsoleVersion = isConsoleVersion
  v15.messageCenter = messageCenter
  v15.l10n = l10n
  v15.inputManager = inputManager
  v15.inputDisplayManager = inputDisplayManager
  v15.modManager = modManager
  v15.fillTypeManager = fillTypeManager
  v15.fruitTypeManager = fruitTypeManager
  v15.guiSoundPlayer = guiSoundPlayer
  local v16 = inputDisplayManager:getPlusOverlay()
  v15.plusOverlay = v16
  v15.currentMission = currentMission
  v15.farmManager = farmManager
  v15.farmlandManager = farmlandManager
  v15.environment = nil
  v15.missionInfo = nil
  v15.missionStats = nil
  v15.isVisible = true
  v15.controlPlayer = true
  v15.isMenuVisible = false
  v15.controlledVehicle = nil
  v15.displayComponents = {}
  v15.showTime = true
  v15.allowHelpText = false
  v15.showVehicleInfo = true
  v15.ingameMap = nil
  v15.gamePausedDisplay = nil
  v15.vehicleNameDisplay = nil
  v15.blinkingWarningDisplay = nil
  v15.fadeScreenElement = nil
  v15.popupMessage = nil
  v15.inGameIcon = nil
  v15.gameInfoDisplay = nil
  v15.vehicleSchema = nil
  v15.inputHelp = nil
  v15.speedMeter = nil
  v15.fillLevelsDisplay = nil
  v15.contextActionDisplay = nil
  v15.achievementMessage = nil
  v15.sideNotifications = nil
  v15.topNotification = nil
  v15.chatWindow = nil
  v15.speakerDisplay = nil
  v15.menuBackgroundOverlay = nil
  v15.fadeAnimation = TweenSequence.NO_SEQUENCE
  v15.fadeFollowDelay = 0
  v15.ingameNotificationTime = 12000
  v15.moneyChanges = {}
  v15.extraTexts = {}
  v15.warningsNumLines = {}
  v15.showWeatherForecast = true
  v15.showHudMissionBase = false
  v15.showVehicleSchema = true
  v15.chatMessagesShowNum = 7
  v15.chatMessagesShowOffset = 0
  v15.contextIconOverlays = {}
  v16 = v16:getValue("uiScale")
  v15:createDisplayComponents(v16)
  v15:subscribeMessages()
  addConsoleCommand("gsHudVisibility", "Toggle HUd visibility", "consoleCommandToggleVisibility", v15)
  if g_isDevelopmentVersion then
    addConsoleCommand("gsHUDToggleUIScale", "toggles ui scale", "consoleCommandToggleUIScale", v15)
  end
  return v15
end
function HUD.consoleCommandToggleUIScale(v0)
  local v1 = v1:getValue("uiScale")
  if 1.04 < v1 + 0.05 then
  end
  v3:setValue(SettingsModel.SETTING.UI_SCALE, v2, false)
  return string.format("New UI Scale: %d%%", v2 * 100)
end
function HUD:consoleCommandToggleVisibility()
  local v4 = self:getIsVisible()
  self:setIsVisible(not v4)
  local v1 = self:getIsVisible()
  if v1 then
    g_noHudModeEnabled = false
    return "HUD is now visible"
  end
  g_noHudModeEnabled = true
  return "Warning: HUD is now disabled. Use 'gsHudVisibility' to enable again"
end
function HUD:createDisplayComponents(uiScale)
  local v2 = IngameMap.new(self, g_baseHUDFilename, self.inputDisplayManager)
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
  v2 = HUDTextDisplay.new(0.5, g_safeFrameOffsetY, HUD.TEXT_SIZE.VEHICLE_NAME, RenderText.ALIGN_CENTER, HUD.COLOR.VEHICLE_NAME, true)
  self.vehicleNameDisplay = v2
  v2:setTextShadow(true, HUD.COLOR.VEHICLE_NAME_SHADOW)
  v2 = TweenSequence.new(self.vehicleNameDisplay)
  local v5 = Tween.new(self.vehicleNameDisplay.setAlpha, 0, 1, HUD.ANIMATION.VEHICLE_NAME_FADE)
  v2:addTween(...)
  v2:addInterval(HUD.ANIMATION.VEHICLE_NAME_SHOW)
  v5 = Tween.new(self.vehicleNameDisplay.setAlpha, 1, 0, HUD.ANIMATION.VEHICLE_NAME_FADE)
  v2:addTween(...)
  v3:setAnimation(v2)
  v3:setVisible(false, false)
  table.insert(self.displayComponents, self.vehicleNameDisplay)
  self.blinkingWarning = nil
  local v3 = HUDTextDisplay.new(0.5, 0.5, HUD.TEXT_SIZE.BLINKING_WARNING, RenderText.ALIGN_CENTER, HUD.COLOR.BLINKING_WARNING, true)
  self.blinkingWarningDisplay = v3
  v3 = TweenSequence.new(self.blinkingWarningDisplay)
  local v6 = MultiValueTween.new(self.blinkingWarningDisplay.setTextColorChannels, HUD.COLOR.BLINKING_WARNING_1, HUD.COLOR.BLINKING_WARNING_2, HUD.ANIMATION.BLINKING_WARNING_TIME)
  v3:addTween(...)
  v6 = MultiValueTween.new(self.blinkingWarningDisplay.setTextColorChannels, HUD.COLOR.BLINKING_WARNING_2, HUD.COLOR.BLINKING_WARNING_1, HUD.ANIMATION.BLINKING_WARNING_TIME)
  v3:addTween(...)
  v3:setLooping(true)
  fadeOverlay:setAnimation(v3)
  fadeOverlay:setVisible(false)
  table.insert(self.displayComponents, self.blinkingWarningDisplay)
  local fadeOverlay = Overlay.new(g_baseHUDFilename, 0, 0, 1, 1)
  local v7 = GuiUtils.getUVs(HUD.UV.AREA)
  fadeOverlay:setUVs(...)
  fadeOverlay:setColor(0, 0, 0, 0)
  v5 = HUDElement.new(fadeOverlay)
  self.fadeScreenElement = v5
  table.insert(self.displayComponents, self.fadeScreenElement)
  v5 = HUDPopupMessage.new(g_baseHUDFilename, self.l10n, self.inputManager, self.inputDisplayManager, self.ingameMap, self.guiSoundPlayer)
  self.popupMessage = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  table.insert(self.displayComponents, self.popupMessage)
  v5 = InGameIcon.new()
  self.inGameIcon = v5
  table.insert(self.displayComponents, self.inGameIcon)
  v7 = v7:getValue("moneyUnit")
  v5 = GameInfoDisplay.new(g_baseHUDFilename, v7, self.l10n)
  self.gameInfoDisplay = v5
  v5:setScale(uiScale)
  v5:setTemperatureVisible(false)
  table.insert(self.displayComponents, self.gameInfoDisplay)
  v5 = VehicleSchemaDisplay.new(self.modManager)
  self.vehicleSchema = v5
  v5:setScale(uiScale)
  v7 = v7:getValue("showHelpMenu")
  v5:setDocked(v7, false)
  v5:loadVehicleSchemaOverlays()
  table.insert(self.displayComponents, self.vehicleSchema)
  v5 = SpeakerDisplay.new(g_baseHUDFilename, self.ingameMap)
  self.speakerDisplay = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.speakerDisplay)
  v5 = ChatWindow.new(g_baseHUDFilename, self.speakerDisplay)
  self.chatWindow = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.chatWindow)
  v5 = InputHelpDisplay.new(g_baseHUDFilename, self.messageCenter, self.inputManager, self.inputDisplayManager, self.ingameMap, self.chatWindow, self.popupMessage, self.isConsoleVersion)
  self.inputHelp = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v7 = v7:getValue("showHelpMenu")
  v5:setVisible(v7, false)
  table.insert(self.displayComponents, self.inputHelp)
  v5 = SpeedMeterDisplay.new(g_baseHUDFilename)
  self.speedMeter = v5
  v5:setVehicle(self.controlledVehicle)
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.speedMeter)
  v5 = FillLevelsDisplay.new(g_baseHUDFilename)
  self.fillLevelsDisplay = v5
  v5:setVehicle(self.controlledVehicle)
  v5:refreshFillTypes(self.fillTypeManager)
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.fillLevelsDisplay)
  v5 = ContextActionDisplay.new(g_baseHUDFilename, self.inputDisplayManager)
  self.contextActionDisplay = v5
  v5:setScale(uiScale)
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.contextActionDisplay)
  v5 = AchievementMessage.new(g_baseHUDFilename, self.inputManager, self.guiSoundPlayer, self.contextActionDisplay)
  self.achievementMessage = v5
  v5:setScale(uiScale)
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.achievementMessage)
  v5 = SideNotification.new(nil, g_baseHUDFilename)
  self.sideNotifications = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(true, false)
  table.insert(self.displayComponents, self.sideNotifications)
  v5 = TopNotification.new(g_baseHUDFilename)
  self.topNotification = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.topNotification)
  v5 = InfoDisplay.new(g_baseHUDFilename)
  self.infoDisplay = v5
  v5:setScale(uiScale)
  v5:storeOriginalPosition()
  v5:setVisible(false, false)
  table.insert(self.displayComponents, self.infoDisplay)
end
function HUD:delete()
  for v4, v5 in pairs(self.displayComponents) do
    if not v5 then
      continue
    end
    v5:delete()
    self.displayComponents[v4] = nil
  end
  v1:delete()
  self.menuBackgroundOverlay = nil
  v1:unsubscribeAll(self)
  removeConsoleCommand("gsHudVisibility")
  removeConsoleCommand("consoleCommandToggleUIScale")
end
function HUD:subscribeMessages()
  v1:subscribe(MessageType.ACHIEVEMENT_UNLOCKED, self.showAchievementMessage, self)
  v1:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_HELP_MENU], self.setInputHelpVisible, self)
  v1:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.UI_SCALE], self.onUIScaleChanged, self)
end
function HUD:setScale(scale)
  for v5, v6 in pairs(self.displayComponents) do
    if not (v6.setScale ~= nil) then
      continue
    end
    v6:setScale(scale, scale)
  end
end
function HUD:drawControlledEntityHUD()
  if self.isVisible then
    if self.controlledVehicle ~= nil then
      -- if not v0.showVehicleInfo then goto L33 end
      v1:draw()
    elseif self.controlPlayer and self.player ~= nil then
      v1:draw()
      v1:draw()
    end
    v1:draw()
    v1:draw()
    v1:draw()
  end
end
function HUD:drawInputHelp()
  if self.isVisible then
    local v1 = v1:getVisible()
    if not v1 and self.fadeFollowDelay <= 0 then
      v1:draw()
      if not self.isMenuVisible then
        v1:draw()
      end
    end
  end
end
function HUD:drawTopNotification()
  v1:draw()
end
function HUD:drawBlinkingWarning()
  local v1 = v1:getVisible()
  if not v1 and self.blinkingWarning ~= nil then
    v1:draw()
  end
end
function HUD.drawPOIInfo(v0)
end
function HUD:drawFading()
  local v1 = v1:getVisible()
  if v1 and not self.isMenuVisible then
    v1:draw()
  end
end
function HUD.drawOverlayAtPositionWithDimensions(v0, v1, v2, v3, v4, v5)
  v1:setDimension(v4, v5)
  v1:setPosition(v2, v3)
  v1:render()
end
function HUD.drawOverlayAtPosition(v0, v1, v2, v3)
  v1:setPosition(v2, v3)
  v1:render()
end
function HUD:drawSideNotification()
  v1:draw()
end
function HUD:drawBaseHUD()
  v1:draw()
  v1:draw()
  self:drawSideNotification()
  v1:draw()
end
function HUD:drawCommunicationDisplay()
  if self.isVisible then
    local v1 = self:getIsFading()
    if not v1 then
      v1:draw()
      v1:draw()
    end
  end
end
function HUD:setTutorialProgress(progress)
  v2:setTutorialProgress(progress)
end
function HUD:drawGamePaused(beforeMissionStart)
  if beforeMissionStart then
    v2:render()
    return
  end
  v2:draw()
end
function HUD:drawVehicleName()
  if self.currentVehicleName == nil then
  end
  local v2 = v2:getVisible()
  if not v2 then
    v2 = v2:getVisible()
  end
  if not self.isMenuVisible and v1 and not v2 then
    v3:draw()
  end
end
function HUD:drawInGameMessageAndIcon()
  v1:draw()
  local v1, v2 = v1:getPosition()
  v3:setPosition(v1, v2)
  v3:draw()
end
function HUD:drawMissionCompleted()
  local v3 = v3:getText("ui_tutorial")
  local v4 = v4:getText("tutorial_messageTutorialAccomplished")
  self:showInGameMessage(v3, v4, -1, nil, self.onEndMissionCallback, self)
end
function HUD:drawMissionFailed()
  local v3 = v3:getText("ui_tutorial")
  local v4 = v4:getText("tutorial_messageTutorialFailed")
  self:showInGameMessage(v3, v4, -1, nil, self.onEndMissionCallback, self)
end
function HUD:showInGameMessage(title, message, duration, controlGlyphs, callback, callbackTarget)
  v7:showMessage(title, message, duration, controlGlyphs, callback, callbackTarget)
end
function HUD:isInGameMessageVisible()
  return v1:getVisible()
end
function HUD:showBlinkingWarning(text, duration, priority)
  if text == nil then
    return
  end
  if priority == nil then
  end
  if self.blinkingWarning ~= nil then
    -- if v0.blinkingWarning.priority > v3 then goto L46 end
    -- if v1 == v0.blinkingWarning.text then goto L46 end
  end
  self.blinkingWarning = {text = text, duration = duration or 2000, priority = priority}
  v4:setText(text)
  v4:setVisible(true, true)
  return
  if self.blinkingWarning ~= nil and self.blinkingWarning.priority == priority and text == self.blinkingWarning.text then
    self.blinkingWarning.duration = duration or 2000
  end
end
function HUD:addMoneyChange(moneyType, amount)
  if self.moneyChanges[moneyType.id] == nil then
    self.moneyChanges[moneyType.id] = 0
  end
  self.moneyChanges[moneyType.id] = self.moneyChanges[moneyType.id] + amount
end
function HUD:showMoneyChange(moneyType, text)
  if self.moneyChanges[moneyType.id] ~= nil and self.moneyChanges[moneyType.id] ~= 0 then
    if text == nil then
      local v4 = v4:getText(moneyType.title, moneyType.customEnv)
    end
    if text ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8 -> L40
    else
    end
    if 0 < v3 then
      if moneyType == MoneyType.COLLECTIBLE then
      end
      local v10 = v10:formatMoney(v3, 0, true)
      local v8 = string.format("+ %s%s", v10, text)
      self:addSideNotification(FSBaseMission.INGAME_NOTIFICATION_OK, v8, nil, v4)
    elseif v3 <= -1 then
      local v11 = math.abs(v3)
      local v9 = v9:formatMoney(v11, 0, true)
      local v7 = string.format("- %s%s", v9, text)
      self:addSideNotification(FSBaseMission.INGAME_NOTIFICATION_CRITICAL, v7, nil, GuiSoundPlayer.SOUND_SAMPLES.TRANSACTION)
    end
    self.moneyChanges[moneyType.id] = 0
  end
end
function HUD:addExtraPrintText(text)
  text:addHelpText(text)
end
function HUD:showVehicleName(vehicleName)
  text:setVisible(false, true)
  self.currentVehicleName = vehicleName
  text:setText(vehicleName)
  text:setVisible(true, true)
  self.vehicleNameTextTime = HUD.ANIMATION.VEHICLE_NAME_SHOW + HUD.ANIMATION.VEHICLE_NAME_FADE * 2
end
function HUD:addSideNotification(color, text, duration, sound)
  if not duration then
  end
  v5:addNotification(v7, v8, v9)
  if sound ~= nil then
    v5:playSample(sound)
  end
end
function HUD:addTopNotification(title, text, info, icon, duration, notification, iconFilename)
  v8:setNotification(title, text, info, icon, duration, iconFilename)
end
function HUD:hideTopNotification()
  moneyType:setVisible(false, true)
end
function HUD:getIsFading()
  local text = text:getFinished()
  if not not text then
    text = text:getAlpha()
    if 0 >= text then
    end
  end
  return moneyType
end
function HUD:setGameInfoPartVisibility(partFlags)
  local v3 = bitAND(partFlags, HUD.GAME_INFO_PART.MONEY)
  if v3 == 0 then
  end
  local v4 = bitAND(partFlags, HUD.GAME_INFO_PART.TIME)
  if v4 == 0 then
  end
  local v5 = bitAND(partFlags, HUD.GAME_INFO_PART.WEATHER)
  if v5 == 0 then
  end
  local v6 = bitAND(partFlags, HUD.GAME_INFO_PART.TUTORIAL)
  if v6 == 0 then
  end
  v6:setMoneyVisible(text)
  v6:setTimeVisible(v3)
  v6:setDateVisible(v3)
  v6:setTemperatureVisible(false)
  v6:setWeatherVisible(v4)
  v6:setTutorialVisible(true)
end
function HUD:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  self.isMenuVisible = isMenuVisible
  v3:onMenuVisibilityChange(isMenuVisible)
  v3:onMenuVisibilityChange(isMenuVisible)
  v3:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  v3:onMenuVisibilityChange(isMenuVisible)
  v3:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  v3:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
end
function HUD.onMapVisibilityChange(v0, moneyType)
end
function HUD:onPauseGameChange(isPaused, pauseText)
  if isPaused ~= nil then
    v3:setPaused(isPaused)
    v3:setVisible(isPaused)
  end
  v3:setPauseText(pauseText)
end
function HUD:setIsVisible(isVisible)
  self.isVisible = isVisible
  if not self.showWeatherForecast then
  end
  self.allowShowWeatherForecast = text
  if not self.showTime then
  end
  self.allowShowTime = text
  if not self.showVehicleInfo then
  end
  self.allowShowVehicleInfo = text
  local text = text:getValue("showHelpMenu")
  if not text then
  end
  self.allowHelpText = text
  if isVisible then
  end
  self.showWeatherForecast = text
  if isVisible then
  end
  text:setValue(v4, v5)
  if isVisible then
  end
  self.showTime = text
  if isVisible then
  end
  self.showVehicleInfo = text
  if self.showHudMissionBaseOriginal == nil then
    self.showHudMissionBaseOriginal = self.showHudMissionBase
  end
  if isVisible then
  end
  self.showHudMissionBase = text
  self.showVehicleSchema = isVisible
end
function HUD:setInputHelpVisible(isVisible)
  text:setVisible(isVisible, true)
  text:setDocked(isVisible, true)
end
function HUD:onUIScaleChanged(moneyType)
  self:setScale(moneyType)
end
function HUD:setInfoVisible(isVisible)
  text:setEnabled(isVisible)
  if self.controlledVehicle ~= nil and self.controlledVehicle.spec_motorized == nil then
  end
  text:onDetailViewVisibilityChange(v4, isVisible)
end
function HUD:addCustomInputHelpEntry(actionName1, actionName2, displayText, ignoreComboButtons)
  v5:addCustomEntry(actionName1, actionName2, displayText, ignoreComboButtons)
end
function HUD:clearCustomInputHelpEntries()
  moneyType:clearCustomEntries()
end
function HUD:getIsVisible()
  return self.isVisible
end
function HUD:setControlledVehicle(vehicle)
  self.controlledVehicle = vehicle
  text:setVehicle(vehicle)
  text:setVehicle(vehicle)
  if vehicle ~= nil and vehicle.spec_motorized == nil then
  end
  text:setVisible(v4, true)
  if vehicle ~= nil and vehicle.spec_motorized == nil then
  end
  local v5 = v5:getVisible()
  text:onDetailViewVisibilityChange(...)
  text:setVehicle(vehicle)
  if vehicle == nil then
  end
  text:setVisible(true, true)
  text:setVehicle(vehicle)
end
function HUD:setIsControllingPlayer(isControllingPlayer)
  self.controlPlayer = isControllingPlayer
end
function HUD:setMoneyUnit(unit)
  text:setMoneyUnit(unit)
end
function HUD:showAchievementMessage(achievementName, achievementDescription, iconFilename, iconUVs)
  v5:showMessage(achievementName, achievementDescription, iconFilename, iconUVs, HUD.ACHIEVEMENT_DISPLAY_DURATION)
end
function HUD:showAttachContext(attachVehicleName)
  text:setContext(InputAction.ATTACH, ContextActionDisplay.CONTEXT_ICON.ATTACH, attachVehicleName, HUD.CONTEXT_PRIORITY.LOW)
end
function HUD:showTipContext(fillTypeName)
  text:setContext(InputAction.TOGGLE_TIPSTATE, ContextActionDisplay.CONTEXT_ICON.TIP, fillTypeName, HUD.CONTEXT_PRIORITY.MEDIUM)
end
function HUD:showFuelContext(fuelingVehicleName)
  local text = text:getText("action_refuel")
  v3:setContext(InputAction.ACTIVATE_OBJECT, ContextActionDisplay.CONTEXT_ICON.FUEL, fuelingVehicleName, HUD.CONTEXT_PRIORITY.HIGH, text)
end
function HUD:showFillDogBowlContext(dogName)
  local text = text:getText("action_doghouseFillbowl")
  v4:setContext(InputAction.ACTIVATE_OBJECT, ContextActionDisplay.CONTEXT_ICON.FILL_BOWL, dogName or "", HUD.CONTEXT_PRIORITY.LOW, text)
end
function HUD:setPlayer(player)
  self.player = player
end
function HUD:setConnectedUsers(users)
  text:setUsers(users)
end
function HUD:updateMessageAndIcon(dt)
  text:update(dt)
  text:update(dt)
end
function HUD:update(dt)
  local text = text:getFinished()
  if not text then
    text:update(dt)
  end
  self.fadeFollowDelay = self.fadeFollowDelay - dt
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  text:update(dt)
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    text:update(dt)
    text:update(dt)
    local v4 = v4:getHasNewMessages()
    text:setHasUnreadMessages(...)
  end
end
function HUD:updateBlinkingWarning(dt)
  if self.blinkingWarning ~= nil then
    text:update(dt)
    self.blinkingWarning.duration = self.blinkingWarning.duration - dt
    if self.blinkingWarning.duration < 0 then
      self.blinkingWarning = nil
      text:setVisible(false, false)
    end
  end
end
function HUD:updateMap(dt)
  text:update(dt)
end
function HUD:updateVehicleName(dt)
  if self.currentVehicleName ~= nil then
    self.vehicleNameTextTime = self.vehicleNameTextTime - dt
    text:update(dt)
    if self.vehicleNameTextTime < 0 then
      self.currentVehicleName = nil
      text:setVisible(false, false)
    end
  end
end
function HUD:fadeScreen(direction, duration, callbackFunc, callbackTarget, arguments)
  if direction <= 0 then
  end
  local seq = TweenSequence.new(self.fadeScreenElement)
  local v10 = Tween.new(self.fadeScreenElement.setAlpha, v6, v7, duration)
  v10:setCurve(Tween.CURVE.EASE_IN)
  seq:addTween(v10)
  seq:addCallback(function()
    if u0 ~= nil then
      u0(u1, u2)
    end
    u3.fadeFollowDelay = HUD.FADE_FOLLOW_DELAY
  end)
  seq:start()
  self.fadeAnimation = seq
end
function HUD:loadIngameMap(ingameMapFilename, ingameMapWidth, ingameMapHeight, fieldColor, grassFieldColor)
  v6:loadMap(ingameMapFilename, ingameMapWidth, ingameMapHeight, fieldColor, grassFieldColor)
end
function HUD:setIngameMapSize(sizeIndex)
  if Platform.isMobile and sizeIndex == IngameMap.STATE_OFF then
  end
  text:toggleSize(sizeIndex)
end
function HUD:getIngameMap()
  return self.ingameMap
end
function HUD:isInGameMessageActive()
  return moneyType:getVisible()
end
function HUD:mouseEvent(posX, posY, isDown, isUp, button)
  v6:mouseEvent(posX, posY, isDown, isUp, button)
end
function HUD:setEnvironment(environment)
  self.environment = environment
  text:setEnvironment(environment)
end
function HUD:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
  text:refreshFillTypes(self.fillTypeManager)
  text:setMissionInfo(missionInfo)
end
function HUD:setMissionStats(missionStats)
  self.missionStats = missionStats
  text:setMissionStats(missionStats)
end
function HUD:setInGameIconOnPickup(fillType, amount, text, duration)
  if fillType == FillType.EGG then
    if self.inGameIcon.fileName ~= "dataS/menu/hud/egg.png" then
      v5:setIcon("dataS/menu/hud/egg.png")
    end
    v5:setText("+1")
    v5:showIcon(2000)
  end
end
function HUD:scrollChatMessages(delta)
  text:scrollChatMessages(delta)
end
function HUD:setChatWindowVisible(isVisible, animate)
  v3:setVisible(isVisible, animate)
end
function HUD:setChatMessagesReference(chatMessages)
  text:setChatMessages(chatMessages)
end
function HUD:addChatMessage(msg, sender, farmId)
  v4:addMessage(msg, sender, farmId)
  v4:setVisible(true, true)
end
function HUD:registerInput()
  moneyType:registerInput()
end
function HUD:addMapHotspot(hotspot)
  return text:addMapHotspot(hotspot)
end
function HUD:removeMapHotspot(hotspot)
  text:removeMapHotspot(hotspot)
end
HUD.UV = {AREA = {8, 8, 2, 2}}
HUD.COLOR = {TUTORIAL_STATUS_VALUE = {0.0075, 0.0075, 0.0075, 1}, TUTORIAL_STATUS_BACKGROUND = {0.0003, 0.5647, 0.9822, 1}, FIELD_JOB_ICON = {1, 0.491, 0, 1}, FIELD_JOB_TIME_BACKGROUND = {0.0075, 0.0075, 0.0075, 1}, RADIO_STREAM = {0.0003, 0.5647, 0.9822, 1}, FRAME_BACKGROUND = {0.01, 0.01, 0.01, 0.6}, BLINKING_WARNING = {1, 1, 0.25, 1}, BLINKING_WARNING_1 = {1, 1, 0.25, 1}, BLINKING_WARNING_2 = {0.75, 0, 0, 1}, VEHICLE_NAME = {1, 1, 1, 1}, VEHICLE_NAME_SHADOW = {0, 0, 0, 1}}
if GS_IS_MOBILE_VERSION then
else
end
text.BLINKING_WARNING = v3
text.VEHICLE_NAME = 36
moneyType.TEXT_SIZE = text
HUD.ANIMATION = {BLINKING_WARNING_TIME = 500, VEHICLE_NAME_FADE = 1000, VEHICLE_NAME_SHOW = 3000}
