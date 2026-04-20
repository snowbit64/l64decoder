-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AchievementsScreen = {CONTROLS = {"contentBox", ACHIEVEMENT_LIST = "achievementList", STATS_VALUE = "statsValue", LOGO = "logo", SIDEBAR = "sidebar", SLIDER_BOX = "sliderBox", LIST_SLIDER = "listSlider", MAIN_CONTAINER = "mainContainer", CONTENT_CONTAINER = "contentContainer", BUTTON_BOX = "buttonBox", CHANGE_LANGUAGE_BUTTON = "changeLanguageButton"}}
local AchievementsScreen_mt = Class(AchievementsScreen, ScreenElement)
function AchievementsScreen.register()
  local v0 = AchievementsScreen.new()
  v1:loadGui("dataS/gui/AchievementsScreen.xml", "AchievementsScreen", v0)
  return v0
end
function AchievementsScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(AchievementsScreen.CONTROLS)
  v2.achievements = {}
  v2.needAchievementSync = false
  v2.returnScreenName = "MainScreen"
  return v2
end
function AchievementsScreen:createFromExistingGui(v1)
  local v2 = AchievementsScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function AchievementsScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if Platform.isMobile then
    self:updateInsets()
    self.mainContainer.absSize[1] = (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth
    self.contentContainer.absSize[1] = (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - 100 / g_screenWidth
    self.contentContainer.absSize[2] = (g_screenHeight - 250) / g_screenHeight
    v2:setAnchors(0, 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth - self.contentContainer.absSize[1], 1 - self.contentContainer.absSize[2], 1)
    self.mainContainer.absPosition[1] = 1 - (g_screenWidth - self.sidebar.absSize[1] * g_screenWidth - 50) / g_screenWidth
    v2:setAnchors(self.mainContainer.absPosition[1], 1, 0, 1)
    v2:setAnchors(0.5, 0.5, 0 + 4 / g_screenHeight, 1 - 4 / g_screenHeight)
    v2:updateAbsolutePosition()
  end
  if Platform.hasMainScreenLanguageSelection then
    v1:setVisible(true)
    v1:invalidateLayout()
  end
  local v1 = self:checkAchievementSynchronization()
  if v1 then
    self:getAchievements()
  else
    self:assignAchievementsStatsValue(false)
    v1:reloadData()
  end
  self:updateTheme()
  v1:setFocus(self.achievementList)
  v1:subscribe(MessageType.INSETS_CHANGED, self.updateInsets, self)
end
function AchievementsScreen.onClose(v0)
  v1:unsubscribe(MessageType.INSETS_CHANGED, v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
end
function AchievementsScreen:updateInsets()
  local v1, v2, v3, v4 = getSafeFrameInsets()
  v5:setSize(1 - v2, 1)
  v5:updateAbsolutePosition()
  if 1 - v2 < self.achievementList.absPosition[1] + self.achievementList.absSize[1] then
    self.achievementList.absSize[1] = 1 - v2 - self.achievementList.absPosition[1]
  end
  v9:updateView()
end
function AchievementsScreen:getAchievements()
  self.achievements = g_achievementManager.achievementList
  self:assignAchievementsStatsValue(true)
  v1:reloadData()
end
function AchievementsScreen:assignAchievementsStatsValue(achievementsAvailable)
  if achievementsAvailable then
    -- if g_achievementManager.numberOfUnlockedAchievements then goto L5 end
  end
  local v6 = v6:getText("ui_achievementStatsValue")
  local v5 = string.format(v6, 0, g_achievementManager.numberOfAchievements)
  v3:setText(v5, true)
  v3:invalidateLayout()
end
function AchievementsScreen:onCancelAchievementsSync()
  self.needAchievementSync = false
  self:changeScreen(MainScreen)
end
function AchievementsScreen:checkAchievementSynchronization()
  local achievementsAvailable = areAchievementsAvailable()
  if not achievementsAvailable and not self.needAchievementSync then
    self.needAchievementSync = true
    local v3 = v3:getText("ui_achievementsSynchronizing")
    local v7 = v7:getText("button_cancel")
    InfoDialog.show(v3, self.onCancelAchievementsSync, self, DialogElement.TYPE_LOADING, v7, InputAction.MENU_BACK)
    return achievementsAvailable
  end
  if achievementsAvailable and self.needAchievementSync then
    self.needAchievementSync = false
    self:getAchievements()
    v2:closeAllDialogs()
  end
  return achievementsAvailable
end
function AchievementsScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = getPlatformId()
  if v2 == PlatformId.ANDROID then
    v2 = getIsUserSignedIn()
    if not v2 then
      v2:changeScreen(nil, MainScreen)
      return
    end
  end
  self:checkAchievementSynchronization()
end
function AchievementsScreen:updateTheme()
  if Platform.gameLogos[g_languageShort] == nil then
  end
  if self.logo ~= nil then
    v2:setImageFilename(v1)
  end
end
function AchievementsScreen:onCareerClick(element)
  self:changeScreen(MainScreen)
  v2:setFocus(g_mainScreen.careerButton)
  v2:onCareerClick(element)
end
function AchievementsScreen:onCreditsClick(element)
  self:changeScreen(MainScreen)
  v2:setFocus(g_mainScreen.creditsButton)
  v2:onCreditsClick(element)
end
function AchievementsScreen.onChangeMobileSettingsClick(v0, v1)
  v2:onChangeMobileSettingsClick(v1)
end
function AchievementsScreen:getNumberOfItemsInSection(list, section)
  return #self.achievements
end
function AchievementsScreen:populateCellForItemInSection(list, section, index, cell)
  cell:setDisabled(not self.achievements[index].unlocked)
  local v6 = cell:getAttribute("title")
  v6:setText(self.achievements[index].name)
  v6 = cell:getAttribute("description")
  v6:setText(self.achievements[index].description)
  v6 = cell:getAttribute("icon")
  if self.achievements[index].unlocked then
    cell:applyProfile("achievementItem")
    v6:setImageFilename(self.achievements[index].imageFilename)
    local v7, v8, v9, v10, v11, v12, v13, v14 = unpack(self.achievements[index].imageUVs)
    v6:setImageUVs(nil, v7, v8, v9, v10, v11, v12, v13, v14)
    return
  end
  cell:applyProfile("achievementItemLocked")
  v6:applyProfile("achievementItemIcon")
end
function AchievementsScreen:onListSelectionChanged(list, section, index)
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
end
