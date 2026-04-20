-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MobileSettingsScreen = {CONTROLS = {"achievementsButton", LOGO = "logo", SIDEBAR = "sidebar", MAIN_CONTAINER = "mainContainer", CONTENT_CONTAINER = "contentContainer", BUTTON_BOX = "buttonBox", LANGUAGE_TEXT = "languageText", LANGUAGE_ELEMENT = "languageElement", CLOUD_SYNC_TEXT = "cloudSyncText", CLOUD_SYNC_ELEMENT = "cloudSyncElement", CHANGE_LANGUAGE_BUTTON = "changeLanguageButton"}}
local v0 = Class(MobileSettingsScreen, ScreenElement)
function MobileSettingsScreen.register()
  local v0 = MobileSettingsScreen.new()
  v1:loadGui("dataS/gui/MobileSettingsScreen.xml", "MobileSettingsScreen", v0)
  return v0
end
function MobileSettingsScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(MobileSettingsScreen.CONTROLS)
  v2.returnScreenName = "MainScreen"
  return v2
end
function MobileSettingsScreen:createFromExistingGui(v1)
  local v2 = MobileSettingsScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function MobileSettingsScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if Platform.isMobile then
    v2:setSize((g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth)
    v2:setSize((g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - 110 / g_screenWidth)
    v2:setSize((g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - 100 / g_screenWidth, (g_screenHeight - 250) / g_screenHeight)
    v2:setAnchors(0, 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - self.contentContainer.absSize[1], 1 - self.contentContainer.absSize[2], 1)
    self.mainContainer.absPosition[1] = 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth
    v2:setAnchors(self.mainContainer.absPosition[1], 1, 0, 1)
    v2:updateAbsolutePosition()
  end
  self:updateTheme()
  local v3 = v3:getLanguageTexts()
  v1:setTexts(...)
  v3 = v3:getValue(SettingsModel.SETTING.LANGUAGE)
  v1:setState(...)
  local v1 = getPlatformId()
  if v1 == PlatformId.ANDROID then
    local v4 = getIsUserSignedIn()
    v1:setDisabled(not v4)
  end
  v4 = v4:getText("cloudSync_wifiOnly")
  local v5 = v5:getText("cloudSync_always")
  v1:setTexts({})
  v4 = v4:getValue(SettingsModel.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION)
  if v4 then
  else
  end
  v1:setState(v3)
  v1:setVisible(Platform.hasCloudSyncSetting)
  v1:setVisible(Platform.hasCloudSyncSetting)
  v1:invalidateLayout()
end
function MobileSettingsScreen:updateTheme()
  if Platform.gameLogos[g_languageShort] == nil then
  end
  if self.logo ~= nil then
    v2:setImageFilename(v1)
  end
end
function MobileSettingsScreen:onCareerClick(v1)
  self:changeScreen(MainScreen)
  v2:setFocus(g_mainScreen.careerButton)
  v2:onCareerClick(v1)
end
function MobileSettingsScreen:onAchievementsClick(v1)
  self:changeScreen(AchievementsScreen)
  v2:setFocus(g_mainScreen.achievementsButton)
  v2:onAchievementsClick(v1)
end
function MobileSettingsScreen:onCreditsClick(v1)
  self:changeScreen(MainScreen)
  v2:setFocus(g_mainScreen.creditsButton)
  v2:onCreditsClick(v1)
end
function MobileSettingsScreen:onClickOk()
  if Platform.hasCloudSyncSetting then
    local v2 = v2:getState()
    if v2 ~= 2 then
    end
    setCloudAllowMeteredConnection(true)
    v2:setValue(SettingsModel.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION, true)
    v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_GAMEPLAY_SETTINGS)
  end
  v2 = getLanguage()
  local v3 = setLanguage(g_availableLanguagesTable[self.languageElement.state])
  if v3 then
    local v6 = v6:getText("ui_languageChange")
    local v5 = string.format(v6, self.languageElement.texts[self.languageElement.state])
  else
    v5 = v5:getText("ui_languageChangeFailed")
  end
  if v2 == v1 then
  end
  if v3 then
    -- if not true then goto L90 end
  end
  InfoDialog.show(v4, function(self)
    if u0 then
      doRestart(false, "")
    end
  end, nil, DialogElement.TYPE_INFO)
end
