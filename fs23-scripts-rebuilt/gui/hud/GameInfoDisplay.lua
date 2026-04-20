-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GameInfoDisplay = {}
local GameInfoDisplay_mt = Class(GameInfoDisplay, HUDDisplayElement)
function GameInfoDisplay.new(hudAtlasPath, moneyUnit, l10n)
  local backgroundOverlay = GameInfoDisplay.createBackground()
  local v5 = v5:superClass()
  local v4 = v5.new(backgroundOverlay, nil, u0)
  v4.moneyUnit = moneyUnit
  v4.l10n = l10n
  v4.missionStats = nil
  v4.environment = nil
  v4.showMoney = true
  v4.showWeather = true
  v4.showTemperature = true
  v4.showTime = true
  v4.showDate = true
  v4.showTutorialProgress = false
  v4.infoBoxes = {}
  v4.moneyBox = nil
  v4.moneyIconOverlay = nil
  v4.timeBox = nil
  v4.clockElement = nil
  v4.timeScaleArrow = nil
  v4.timeScaleArrowFast = nil
  v4.clockHandLarge = nil
  v4.clockHandSmall = nil
  v4.dateBox = nil
  v4.seasonElement = nil
  v4.monthMaxSize = 0
  v4.temperatureBox = nil
  v4.temperatureIconStable = nil
  v4.temperatureIconRising = nil
  v4.temperatureIconDropping = nil
  v4.weatherBox = nil
  v4.weatherTypeIcons = {}
  v4.tutorialBox = nil
  v4.tutorialProgressBar = nil
  v4.boxHeight = 0
  v4.boxMarginWidth = 0
  v4.boxMarginHeight = 0
  v4.moneyBoxWidth = 0
  v4.moneyTextSize = 0
  v4.moneyTextPositionX = 0
  v4.moneyTextPositionY = 0
  v4.monthText = ""
  v4.timeTextPositionX = 0
  v4.timeTextPositionY = 0
  v4.timeTextSize = 0
  v4.timeScaleTextPositionX = 0
  v4.timeScaleTextPositionY = 0
  v4.timeScaleTextSize = 0
  v4.timeText = ""
  v4.clockHandLargePivotX = 0
  v4.clockHandLargePivotY = 0
  v4.clockHandSmallPivotX = 0
  v4.clockHandSmallPivotY = 0
  v4.dateTextPositionX = 0
  v4.dateTextPositionY = 0
  v4.temperatureHighTextPositionX = 0
  v4.temperatureHighTextPositionY = 0
  v4.temperatureLowTextPositionX = 0
  v4.temperatureLowTextPositionY = 0
  v4.temperatureTextSize = 0
  v4.temperatureDayText = ""
  v4.temperatureNightText = ""
  v4.tutorialBarWidth = 0
  v4.tutorialBarHeight = 0
  v4.tutorialTextPositionX = 0
  v4.tutorialTextPositionX = 0
  v4.tutorialTextSize = 0
  local v6 = l10n:getText(GameInfoDisplay.L10N_SYMBOL.TUTORIAL)
  v5 = utf8ToUpper(...)
  v4.tutorialText = v5
  v4.weatherAnimation = TweenSequence.NO_SEQUENCE
  v4.currentWeather = ""
  v4.nextWeather = ""
  v4.temperatureAnimation = TweenSequence.NO_SEQUENCE
  v4.lastTutorialProgress = 1
  v4:createComponents(hudAtlasPath)
  return v4
end
function GameInfoDisplay:setMoneyUnit(moneyUnit)
  if moneyUnit ~= GS_MONEY_EURO and moneyUnit ~= GS_MONEY_POUND and moneyUnit ~= GS_MONEY_DOLLAR then
  end
  self.moneyUnit = moneyUnit
  local v2 = v2:getCurrencySymbol(true)
  self.moneyCurrencyText = v2
end
function GameInfoDisplay:setMissionStats(missionStats)
  self.missionStats = missionStats
end
function GameInfoDisplay:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
end
function GameInfoDisplay:setEnvironment(environment)
  self.environment = environment
end
function GameInfoDisplay:setMoneyVisible(isVisible)
  self.showMoney = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setTimeVisible(isVisible)
  self.showTime = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setTemperatureVisible(isVisible)
  self.showTemperature = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setWeatherVisible(isVisible)
  self.showWeather = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setTutorialVisible(isVisible)
  self.showTutorialProgress = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setDateVisible(isVisible)
  self.showDate = isVisible
  v2:setVisible(isVisible)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:setTutorialProgress(progress)
  if self.showTutorialProgress and progress ~= self.lastTutorialProgress then
    local v2 = MathUtil.clamp(progress, 0, 1)
    self.lastTutorialProgress = v2
    v2:setDimension(self.tutorialBarWidth * v2)
  end
end
function GameInfoDisplay:update(dt)
  if self.showTime then
    self:updateTime()
  end
  if self.showTemperature then
    self:updateTemperature()
  end
  if self.showWeather then
    self:updateWeather(dt)
  end
  self:updateBackground()
end
function GameInfoDisplay:updateBackground()
  local v1 = self:getVisibleWidth()
  v2:setDimension(v1 + g_safeFrameOffsetX)
  local v6 = self:getVisibleWidth()
  v2:setPosition(self.backgroundBaseX - v6)
end
function GameInfoDisplay:updateTime()
  local v2 = math.floor(self.environment.dayTime / 3600000)
  local v3 = math.floor((self.environment.dayTime / 3600000 - v2) * 60)
  local v4 = string.format("%02d:%02d", v2, v3)
  self.timeText = v4
  v4 = v4:getEffectiveTimeScale()
  if v4 < 1 then
    local v5 = string.format("%0.1f", v4)
    self.timeScaleText = v5
  else
    v5 = string.format("%d", v4)
    self.timeScaleText = v5
  end
  v5 = v5:formatDayInPeriod(nil, nil, true)
  self.monthText = v5
  v5:setUVs(self.seasonOverlayUVs[self.environment.currentSeason])
  v7:setRotation(-(v1 % 12 / 12) * math.pi * 2)
  v7:setRotation(-(v1 - v2) * math.pi * 2)
  if 1 >= v4 then
  end
  v8:setVisible(not true)
  v8:setVisible(true)
end
function GameInfoDisplay:updateTemperature()
  local v1, v2 = v1:getCurrentMinMaxTemperatures()
  local v3 = string.format("%d?", v2)
  self.temperatureDayText = v3
  v3 = string.format("%d?", v1)
  self.temperatureNightText = v3
  v3 = v3:getCurrentTemperatureTrend()
  if v3 ~= 0 then
  end
  v4:setVisible(true)
  if 0 >= v3 then
  end
  v4:setVisible(true)
  if v3 >= 0 then
  end
  v4:setVisible(true)
end
function GameInfoDisplay:getWeatherStates()
  local v2, v3 = self.environment:getDayAndDayTime(self.environment.dayTime + 21600000, self.environment.currentMonotonicDay)
  local v4 = v4:getCurrentWeatherType()
  local v5 = v5:getNextWeatherType(v2, v3)
  return v4, v5
end
function GameInfoDisplay:updateWeather(dt)
  local v2 = v2:getIsReady()
  if not v2 then
    return
  end
  local v2, v3 = self:getWeatherStates()
  if not v2 then
  end
  if not v3 then
  end
  if self.currentWeather == v2 and self.nextWeather == v4 then
  end
  if v4 then
    self.currentWeather = v2
    self.nextWeather = v3
    self:animateWeatherChange()
  end
  local v5 = v5:getFinished()
  if not v5 then
    v5:update(dt)
  end
end
function GameInfoDisplay:getVisibleWidth()
  for v5, v6 in pairs(self.infoBoxes) do
    local v7 = v6:getVisible()
    if not v7 then
      continue
    end
    local v8 = v6:getWidth()
  end
  if self.currentWeather == self.nextWeather then
    v2, v3 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.WEATHER_BOX)
  end
  return v1
end
function GameInfoDisplay:updateSizeAndPositions()
  local width = self:getVisibleWidth()
  local v5 = self:getHeight()
  self:setDimension(...)
  local v3 = self:getScale()
  local v2, v3 = GameInfoDisplay.getBackgroundPosition(...)
  v5 = self:getHeight()
  self:setPosition(v2 - width, v3 - v5)
  for v10, v11 in ipairs(self.infoBoxes) do
    local v12 = v11:getVisible()
    if not v12 then
      continue
    end
    if 1 < v10 then
    end
    local v18 = v11:getWidth()
    v11:setPosition(v5 - v18 - v13, v4)
    local v16 = v11:getWidth()
    v14:setVisible(not v6)
  end
  self:storeScaledValues()
end
function GameInfoDisplay:draw()
  local v2 = v2:superClass()
  v2.draw(self)
  if self.showMoney then
    self:drawMoneyText()
  end
  if self.showTime then
    self:drawTimeText()
  end
  if self.showDate then
    self:drawDateText()
  end
  if self.showTemperature then
    self:drawTemperatureText()
  end
  if self.showTutorialProgress then
    self:drawTutorialText()
  end
end
function GameInfoDisplay:drawMoneyText()
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v2 = unpack(GameInfoDisplay.COLOR.TEXT)
  setTextColor(...)
  if g_currentMission.player ~= nil then
    local v1 = v1:getFarmById(g_currentMission.player.farmId)
    v2 = v2:formatMoney(v1.money, 0, false, true)
    renderText(self.moneyTextPositionX, self.moneyTextPositionY, self.moneyTextSize, v2)
  end
  setTextAlignment(RenderText.ALIGN_CENTER)
  v2 = unpack(GameInfoDisplay.COLOR.ICON)
  setTextColor(...)
  renderText(self.moneyCurrencyPositionX, self.moneyCurrencyPositionY, self.moneyTextSize, self.moneyCurrencyText)
end
function GameInfoDisplay:drawTimeText()
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v2 = unpack(GameInfoDisplay.COLOR.TEXT)
  setTextColor(...)
  renderText(self.timeTextPositionX, self.timeTextPositionY, self.timeTextSize, self.timeText)
  renderText(self.timeScaleTextPositionX, self.timeScaleTextPositionY, self.timeScaleTextSize, self.timeScaleText)
end
function GameInfoDisplay:drawDateText()
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v2 = unpack(GameInfoDisplay.COLOR.TEXT)
  setTextColor(...)
  renderText(self.monthTextPositionX, self.monthTextPositionY, self.monthTextSize, self.monthText)
end
function GameInfoDisplay:drawTemperatureText()
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v2 = unpack(GameInfoDisplay.COLOR.TEXT)
  setTextColor(...)
  renderText(self.temperatureHighTextPositionX, self.temperatureHighTextPositionY, self.temperatureTextSize, self.temperatureDayText)
  renderText(self.temperatureLowTextPositionX, self.temperatureLowTextPositionY, self.temperatureTextSize, self.temperatureNightText)
end
function GameInfoDisplay:drawTutorialText()
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v2 = unpack(GameInfoDisplay.COLOR.TEXT)
  setTextColor(...)
  renderText(self.tutorialTextPositionX, self.tutorialTextPositionY, self.tutorialTextSize, self.tutorialText)
end
function GameInfoDisplay:animateWeatherChange()
  local sequence = TweenSequence.new()
  for v5, v6 in pairs(self.weatherTypeIcons) do
    if v5 ~= self.currentWeather then
    end
    if v5 ~= self.nextWeather then
    end
    if v7 or true then
      local v10 = v6:getVisible()
      -- if v10 then goto L34 end
      self:addActiveWeatherAnimation(sequence, v7, v6)
    elseif not (v7 or true) then
      v10 = v6:getVisible()
      -- if not v10 then goto L45 end
      self:addInactiveWeatherAnimation(sequence, v6)
    else
      self:addBecomeCurrentWeatherAnimation(sequence, v6)
    end
  end
  if self.currentWeather == self.nextWeather then
  end
  self:addWeatherPositionAnimation(sequence, true)
  sequence:start()
  self.weatherAnimation = sequence
end
function GameInfoDisplay.addActiveWeatherAnimation(v0, sequence, v2, v3)
  if v2 then
  end
  local v6 = TweenSequence.new(v3)
  local v7 = MultiValueTween.new(v3.setColor, {v4[1], v4[2], v4[3], 0}, v4, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  v6:insertTween(v7, 0)
  v6:insertCallback(v3.setVisible, true, 0)
  v6:start()
  sequence:insertTween(v6, 0)
end
function GameInfoDisplay.addInactiveWeatherAnimation(v0, sequence, v2)
  local v4 = v2:getColor()
  local v5 = TweenSequence.new(v2)
  local v6 = MultiValueTween.new(v2.setColor, {}, {{}[1], {}[2], {}[3], 0}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  v5:insertTween(v6, 0)
  v5:addCallback(v2.setVisible, false)
  v5:start()
  sequence:insertTween(v5, 0)
end
function GameInfoDisplay.addBecomeCurrentWeatherAnimation(v0, sequence, v2)
  local v4 = v2:getColor()
  v4 = MultiValueTween.new(v2.setColor, {}, GameInfoDisplay.COLOR.ICON, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  v4:setTarget(v2)
  sequence:insertTween(v4, 0)
end
function GameInfoDisplay:addWeatherPositionAnimation(animationSequence, isWeatherChanging)
  local v4, v5 = v4:getPosition()
  local v9 = v9:getWidth()
  local v10 = v10:getHeight()
  local v11 = self.weatherTypeIcons[self.currentWeather]:getHeight()
  if isWeatherChanging then
    v11 = self.weatherTypeIcons[self.currentWeather]:getPosition()
    local v13 = self.weatherTypeIcons[self.currentWeather]:getWidth()
    local v8 = MultiValueTween.new(self.weatherTypeIcons[self.currentWeather].setPosition, {}, {v4 + v9 * 0.5 - v13, v5 + (v10 - v11) * 0.5}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
    v8:setTarget(self.weatherTypeIcons[self.currentWeather])
    animationSequence:insertTween(v8, 0)
    v10 = self.weatherTypeIcons[self.nextWeather]:getVisible()
    if v10 then
      v13 = self.weatherTypeIcons[self.nextWeather]:getPosition()
      v10 = MultiValueTween.new(self.weatherTypeIcons[self.nextWeather].setPosition, {}, {v4 + v9 * 0.5, v5 + (v10 - v11) * 0.5}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
      v10:setTarget(self.weatherTypeIcons[self.nextWeather])
      animationSequence:insertTween(v10, 0)
      return
    end
    v9:setPosition(v6, v7)
    return
  end
  v8, v9 = v3:getPosition()
  if v8 == v6 then
    -- if v9 == v7 then goto L148 end
    v10 = v10:getFinished()
    -- if not v10 then goto L148 end
  end
  v13 = v3:getPosition()
  v10 = MultiValueTween.new(v3.setPosition, {}, {v6, v7}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  v10:setTarget(v3)
  animationSequence:insertTween(v10, 0)
end
function GameInfoDisplay.getBackgroundPosition(uiScale)
  local v2 = unpack(GameInfoDisplay.POSITION.SELF)
  local sequence, v2 = getNormalizedScreenValues(...)
  return 1 + sequence * uiScale - g_safeFrameOffsetX, 1 - g_safeFrameOffsetY + v2 * uiScale
end
function GameInfoDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  self:storeScaledValues()
  self:updateSizeAndPositions()
end
function GameInfoDisplay:storeScaledValues()
  local sequence = self:scalePixelToScreenHeight(GameInfoDisplay.BOX_HEIGHT)
  self.boxHeight = sequence
  local sequence, v2 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.BOX_MARGIN)
  self.boxMarginWidth = sequence
  self.boxMarginHeight = v2
  sequence = self:scalePixelToScreenWidth(GameInfoDisplay.SIZE.MONEY_BOX[1])
  self.moneyBoxWidth = sequence
  sequence = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.MONEY)
  self.moneyTextSize = sequence
  sequence, v2 = sequence:getPosition()
  local v3, v4 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.MONEY_TEXT)
  local v7 = v7:getWidth()
  self.moneyTextPositionX = sequence + v7 + v3
  local v9 = v9:getHeight()
  self.moneyTextPositionY = v2 + v9 * 0.5 - self.moneyTextSize * 0.5 + v4
  local v5, v6 = v5:getPosition()
  self.moneyCurrencyPositionX = self.moneyIconOverlay.width * 0.5 + v5
  self.moneyCurrencyPositionY = self.moneyIconOverlay.height * 0.5 + v6 - self.moneyTextSize * 0.5 + v4
  local v7, v8 = v7:getPosition()
  local v11 = v11:getWidth()
  local v10 = v10:getHeight()
  local v11, v12 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TIME_TEXT)
  self.timeTextPositionX = v7 + v11
  self.timeTextPositionY = v8 + v10 * 0.5 + v12
  v11 = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.TIME)
  self.timeTextSize = v11
  v11, v12 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TIME_SCALE_TEXT)
  self.timeScaleTextPositionX = v7 + v11
  self.timeScaleTextPositionY = v8 + v10 * 0.5 + v12
  v11 = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.TIME_SCALE)
  self.timeScaleTextSize = v11
  v11, v12 = self:normalizeUVPivot(GameInfoDisplay.PIVOT.CLOCK_HAND_LARGE, GameInfoDisplay.SIZE.CLOCK_HAND_LARGE, GameInfoDisplay.UV.CLOCK_HAND_LARGE)
  self.clockHandLargePivotX = v11
  self.clockHandLargePivotY = v12
  v11, v12 = self:normalizeUVPivot(GameInfoDisplay.PIVOT.CLOCK_HAND_SMALL, GameInfoDisplay.SIZE.CLOCK_HAND_SMALL, GameInfoDisplay.UV.CLOCK_HAND_SMALL)
  self.clockHandSmallPivotX = v11
  self.clockHandSmallPivotY = v12
  v11 = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.MONTH)
  self.monthTextSize = v11
  v11, v12 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.MONTH_TEXT)
  v11, v12 = v11:getPosition()
  self.monthTextPositionX = v11 + self.seasonOverlay.width + v11
  local v17 = v17:getHeight()
  self.monthTextPositionY = v12 + v12 + (v17 - self.monthTextSize) * 0.5
  local v13 = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.TEMPERATURE)
  self.temperatureTextSize = v13
  local v13, v14 = v13:getPosition()
  v17 = v17:getWidth()
  local v16 = v16:getHeight()
  local v17, v18 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TEMPERATURE_HIGH)
  self.temperatureHighTextPositionX = v13 + v17 + v17
  self.temperatureHighTextPositionY = v14 + v16 * 0.5 + v18
  v17, v18 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TEMPERATURE_LOW)
  self.temperatureLowTextPositionX = v13 + v17 + v17
  self.temperatureLowTextPositionY = v14 + v16 * 0.5 + v18
  v17, v18 = v17:getPosition()
  local v19, v20 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TUTORIAL_PROGRESS_BAR)
  self.tutorialBarWidth = v19
  self.tutorialBarHeight = v20
  v19, v20 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TUTORIAL_TEXT)
  v19 = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.TUTORIAL)
  self.tutorialTextSize = v19
  self.tutorialTextPositionX = v17 + v19
  self.tutorialTextPositionY = v18 + (self.tutorialBarHeight - self.tutorialTextSize) * 0.5 + v20
end
function GameInfoDisplay.createBackground()
  local v0, sequence = GameInfoDisplay.getBackgroundPosition(1)
  local v3 = unpack(GameInfoDisplay.SIZE.SELF)
  local v2, v3 = getNormalizedScreenValues(...)
  return Overlay.new(nil, v0 - v2 + g_safeFrameOffsetX, sequence - v3, v2 + g_safeFrameOffsetX, v3)
end
function GameInfoDisplay:createBackgroundOverlay()
  local sequence, v2 = GameInfoDisplay.getBackgroundPosition(1)
  local v4 = unpack(GameInfoDisplay.SIZE.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(g_baseUIFilename, sequence - v3 + g_safeFrameOffsetX, v2 - v4, v3 + g_safeFrameOffsetX, v4)
  v5:setUVs(g_colorBgUVs)
  v5:setColor(0, 0, 0, 0.75)
  local v6 = HUDElement.new(v5)
  self:addChild(v6)
  return v6
end
function GameInfoDisplay:createComponents(hudAtlasPath)
  local v2, v3 = GameInfoDisplay.getBackgroundPosition(1)
  local v5 = self:getHeight()
  local v5, v6 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.BOX_MARGIN)
  local v7 = self:createBackgroundOverlay()
  self.backgroundOverlay = v7
  self.backgroundBaseX = v2
  local v8 = self:createMoneyBox(hudAtlasPath, v2, v3 - v5)
  self.moneyBox.separator = {setVisible = function()
  end}
  local v9 = self:createTimeBox(hudAtlasPath, v8 - v5 - v5, v3 - v5)
  local v11 = self:getHeight()
  local v10 = self:createVerticalSeparator(hudAtlasPath, v8 - v5, v3 - v5 + v11 * 0.5)
  v11:addChild(v10)
  self.timeBox.separator = v10
  v11 = self:createDateBox(hudAtlasPath, v9 - v5 - v5, v3 - v5)
  v11 = self:createVerticalSeparator(hudAtlasPath, v9 - v5, v3 - v5 + v11 * 0.5)
  v11:addChild(v11)
  self.dateBox.separator = v11
  v11 = self:createTemperatureBox(hudAtlasPath, v11 - v5 - v5, v3 - v5)
  v11 = self:createVerticalSeparator(hudAtlasPath, v11 - v5, v3 - v5 + v11 * 0.5)
  v11:addChild(v11)
  self.temperatureBox.separator = v11
  v11 = self:createWeatherBox(hudAtlasPath, v11 - v5 - v5, v3 - v5)
  v11 = self:createVerticalSeparator(hudAtlasPath, v11 - v5, v3 - v5 + v11 * 0.5)
  v11:addChild(v11)
  self.weatherBox.separator = v11
  self:createTutorialBox(hudAtlasPath, v11 - v5 - v5, v3 - v5)
  v11 = self:createVerticalSeparator(hudAtlasPath, v11 - v5, v3 - v5 + v11 * 0.5)
  v11:addChild(v11)
  self.tutorialBox.separator = v11
  v11 = self:getVisibleWidth()
  local v15 = self:getHeight()
  self:setDimension(...)
end
function GameInfoDisplay:createMoneyBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.MONEY_ICON)
  local v6, v7 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.MONEY_BOX)
  local v10 = Overlay.new(nil, rightX - v6, bottomY, v6, v7)
  local v11 = HUDElement.new(v10)
  self.moneyBox = v11
  self:addChild(v11)
  table.insert(self.infoBoxes, self.moneyBox)
  local v12 = Overlay.new(hudAtlasPath, rightX - v6, bottomY + (v7 - v5) * 0.5, v4, v5)
  local v15 = GuiUtils.getUVs(GameInfoDisplay.UV.MONEY_ICON)
  v12:setUVs(...)
  v15 = unpack(GameInfoDisplay.COLOR.ICON)
  v12:setColor(...)
  self.moneyIconOverlay = v12
  v15 = HUDElement.new(v12)
  v11:addChild(...)
  local v13 = v13:getCurrencySymbol(true)
  self.moneyCurrencyText = v13
  return rightX - v6
end
function GameInfoDisplay:createTimeBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TIME_BOX)
  local v7 = Overlay.new(nil, rightX - v4, bottomY, v4, v5)
  local v8 = HUDElement.new(v7)
  self.timeBox = v8
  self:addChild(v8)
  table.insert(self.infoBoxes, self.timeBox)
  local v9, v10 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TIME_ICON)
  local v12 = Overlay.new(hudAtlasPath, rightX - v4, bottomY + (v5 - v10) * 0.5, v9, v10)
  local v15 = GuiUtils.getUVs(GameInfoDisplay.UV.TIME_ICON)
  v12:setUVs(...)
  v15 = unpack(GameInfoDisplay.COLOR.ICON)
  v12:setColor(...)
  local v13 = HUDElement.new(v12)
  self.clockElement = v13
  v8:addChild(v13)
  local v14 = self:createClockHand(hudAtlasPath, rightX - v4 + v9 * 0.5, bottomY + (v5 - v10) * 0.5 + v10 * 0.5, GameInfoDisplay.SIZE.CLOCK_HAND_SMALL, GameInfoDisplay.UV.CLOCK_HAND_SMALL, GameInfoDisplay.COLOR.CLOCK_HAND_SMALL, GameInfoDisplay.PIVOT.CLOCK_HAND_SMALL)
  self.clockHandSmall = v14
  v13:addChild(self.clockHandSmall)
  v14 = self:createClockHand(hudAtlasPath, rightX - v4 + v9 * 0.5, bottomY + (v5 - v10) * 0.5 + v10 * 0.5, GameInfoDisplay.SIZE.CLOCK_HAND_LARGE, GameInfoDisplay.UV.CLOCK_HAND_LARGE, GameInfoDisplay.COLOR.CLOCK_HAND_LARGE, GameInfoDisplay.PIVOT.CLOCK_HAND_LARGE)
  self.clockHandLarge = v14
  v13:addChild(self.clockHandLarge)
  v14, v15 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TIME_SCALE_ARROW)
  local v16 = self:createTimeScaleArrow(hudAtlasPath, rightX - v4 + v9 + v14, bottomY + v5 * 0.5 + v15, GameInfoDisplay.SIZE.TIME_SCALE_ARROW, GameInfoDisplay.UV.TIME_SCALE_ARROW)
  self.timeScaleArrow = v16
  v8:addChild(self.timeScaleArrow)
  v16 = self:createTimeScaleArrow(hudAtlasPath, rightX - v4 + v9 + v14, bottomY + v5 * 0.5 + v15, GameInfoDisplay.SIZE.TIME_SCALE_ARROW_FAST, GameInfoDisplay.UV.TIME_SCALE_ARROW_FAST)
  self.timeScaleArrowFast = v16
  v8:addChild(self.timeScaleArrowFast)
  return rightX - v4
end
function GameInfoDisplay:createDateBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.DATE_BOX)
  local textSize = self:scalePixelToScreenHeight(GameInfoDisplay.TEXT_SIZE.MONTH)
  -- TODO: structure LOP_FORNPREP (pc 22, target 44)
  local v11 = v11:formatPeriod(1, true)
  local v12 = getTextWidth(textSize, v11)
  local v13 = math.max(0, v12)
  -- TODO: structure LOP_FORNLOOP (pc 43, target 23)
  local v9 = Overlay.new(nil, rightX - v4 + v13, bottomY, v4 + v13, v5)
  local v10 = HUDElement.new(v9)
  self.dateBox = v10
  self:addChild(self.dateBox)
  table.insert(self.infoBoxes, self.dateBox)
  v10, v11 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.SEASON_ICON)
  v12, v13 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.SEASON_ICON)
  self.seasonOverlayUVs = {}
  for v18, v19 in pairs(GameInfoDisplay.UV.SEASON) do
    local v21 = GuiUtils.getUVs(v19)
    self.seasonOverlayUVs[v18] = v21
  end
  v15 = Overlay.new(hudAtlasPath, v8, v14 + v13, v10, v11)
  self.seasonOverlay = v15
  v15:setUVs(self.seasonOverlayUVs[0])
  v17 = unpack(GameInfoDisplay.COLOR.ICON)
  v15:setColor(...)
  v15 = HUDElement.new(self.seasonOverlay)
  self.seasonElement = v15
  v15:addChild(self.seasonElement)
  return rightX - v4
end
function GameInfoDisplay:createTemperatureBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TEMPERATURE_BOX)
  local v7 = Overlay.new(nil, rightX - v4, bottomY, v4, v5)
  local v8 = HUDElement.new(v7)
  self.temperatureBox = v8
  self:addChild(v8)
  table.insert(self.infoBoxes, self.temperatureBox)
  local v9 = self:createTemperatureIcon(hudAtlasPath, rightX - v4, bottomY, v5, GameInfoDisplay.UV.TEMPERATURE_ICON_STABLE, GameInfoDisplay.COLOR.ICON)
  self.temperatureIconStable = v9
  v8:addChild(self.temperatureIconStable)
  v9 = self:createTemperatureIcon(hudAtlasPath, rightX - v4, bottomY, v5, GameInfoDisplay.UV.TEMPERATURE_ICON_RISING, GameInfoDisplay.COLOR.ICON)
  self.temperatureIconRising = v9
  v8:addChild(self.temperatureIconRising)
  v9 = self:createTemperatureIcon(hudAtlasPath, rightX - v4, bottomY, v5, GameInfoDisplay.UV.TEMPERATURE_ICON_DROPPING, GameInfoDisplay.COLOR.ICON)
  self.temperatureIconDropping = v9
  v8:addChild(self.temperatureIconDropping)
  return rightX - v4
end
function GameInfoDisplay:createWeatherBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.WEATHER_BOX)
  local v7 = Overlay.new(nil, rightX - v4, bottomY, v4, v5)
  local v8 = HUDElement.new(v7)
  self.weatherBox = v8
  self:addChild(v8)
  table.insert(self.infoBoxes, self.weatherBox)
  self.weatherBoxRight = rightX
  local weatherUvs = self:getWeatherUVs()
  for v13, v14 in pairs(weatherUvs) do
    local v15 = self:createWeatherIcon(hudAtlasPath, v13, v5, v14, GameInfoDisplay.COLOR.ICON)
    v8:addChild(v15)
    self.weatherTypeIcons[v13] = v15
  end
  return rightX - v4
end
function GameInfoDisplay.getWeatherUVs(v0)
  {}[WeatherType.SUN] = GameInfoDisplay.UV.WEATHER_ICON_CLEAR
  {}[WeatherType.RAIN] = GameInfoDisplay.UV.WEATHER_ICON_RAIN
  {}[WeatherType.CLOUDY] = GameInfoDisplay.UV.WEATHER_ICON_CLOUDY
  {}[WeatherType.SNOW] = GameInfoDisplay.UV.WEATHER_ICON_SNOW
  return {}
end
function GameInfoDisplay:createWeatherIcon(hudAtlasPath, weatherId, boxHeight, uvs, color)
  local v6, v7 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.WEATHER_ICON)
  local v8 = Overlay.new(hudAtlasPath, 0, 0, v6, v7)
  local v11 = GuiUtils.getUVs(uvs)
  v8:setUVs(...)
  local v9 = HUDElement.new(v8)
  v9:setVisible(false)
  return v9
end
function GameInfoDisplay:createTemperatureIcon(hudAtlasPath, leftX, bottomY, boxHeight, uvs, color)
  local v7, v8 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TEMPERATURE_ICON)
  local v10 = Overlay.new(hudAtlasPath, leftX, bottomY + (boxHeight - v8) * 0.5, v7, v8)
  local v13 = GuiUtils.getUVs(uvs)
  v10:setUVs(...)
  v13 = unpack(color)
  v10:setColor(...)
  return HUDElement.new(v10)
end
function GameInfoDisplay:createClockHand(hudAtlasPath, posX, posY, size, uvs, color, pivot)
  local v8, v9 = self:normalizeUVPivot(pivot, size, uvs)
  local v10, v11 = self:scalePixelToScreenVector(size)
  local v12 = Overlay.new(hudAtlasPath, posX - v8, posY - v9, v10, v11)
  local v15 = GuiUtils.getUVs(uvs)
  v12:setUVs(...)
  v15 = unpack(color)
  v12:setColor(...)
  local v13 = HUDElement.new(v12)
  v13:setRotationPivot(v8, v9)
  return v13
end
function GameInfoDisplay:createTimeScaleArrow(hudAtlasPath, posX, posY, size, uvs)
  local v6, v7 = self:scalePixelToScreenVector(size)
  local v8 = Overlay.new(hudAtlasPath, posX, posY, v6, v7)
  local v11 = GuiUtils.getUVs(uvs)
  v8:setUVs(...)
  v11 = unpack(GameInfoDisplay.COLOR.ICON)
  v8:setColor(...)
  return HUDElement.new(v8)
end
function GameInfoDisplay:createVerticalSeparator(hudAtlasPath, posX, centerPosY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.SEPARATOR)
  local v6 = math.max(v4, 1 / g_screenWidth)
  v6 = Overlay.new(hudAtlasPath, posX - v6 * 0.5, centerPosY - v5 * 0.5, v6, v5)
  local v9 = GuiUtils.getUVs(GameInfoDisplay.UV.SEPARATOR)
  v6:setUVs(...)
  v9 = unpack(GameInfoDisplay.COLOR.SEPARATOR)
  v6:setColor(...)
  return HUDElement.new(v6)
end
function GameInfoDisplay:createTutorialBox(hudAtlasPath, rightX, bottomY)
  local v4, v5 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TUTORIAL_BOX)
  local v7 = Overlay.new(nil, rightX - v4, bottomY, v4, v5)
  local v8 = HUDElement.new(v7)
  self.tutorialBox = v8
  self:addChild(v8)
  table.insert(self.infoBoxes, self.tutorialBox)
  local v9, v10 = self:scalePixelToScreenVector(GameInfoDisplay.POSITION.TUTORIAL_PROGRESS_BAR)
  local v11, v12 = self:scalePixelToScreenVector(GameInfoDisplay.SIZE.TUTORIAL_PROGRESS_BAR)
  local v17 = Overlay.new(hudAtlasPath, rightX - v11 + v9 - 1 / g_screenWidth, bottomY + (v5 - v12) * 0.5 + v10 + v12, v11 + 1 / g_screenWidth * 2, 1 / g_screenHeight)
  local v18 = Overlay.new(hudAtlasPath, rightX - v11 + v9 - 1 / g_screenWidth, bottomY + (v5 - v12) * 0.5 + v10 - 1 / g_screenHeight, v11 + 1 / g_screenWidth * 2, 1 / g_screenHeight)
  local v19 = Overlay.new(hudAtlasPath, rightX - v11 + v9 - 1 / g_screenWidth, bottomY + (v5 - v12) * 0.5 + v10, 1 / g_screenWidth, v12)
  local v20 = Overlay.new(hudAtlasPath, rightX - v11 + v9 + v11, bottomY + (v5 - v12) * 0.5 + v10, 1 / g_screenWidth, v12)
  for v24, v25 in pairs({v17, v18, v19, v20}) do
    local v28 = GuiUtils.getUVs(GameInfoDisplay.UV.SEPARATOR)
    v25:setUVs(...)
    v28 = unpack(GameInfoDisplay.COLOR.SEPARATOR)
    v25:setColor(...)
    local v26 = HUDElement.new(v25)
    v27:addChild(v26)
  end
  v21 = Overlay.new(hudAtlasPath, v13, v14, v11, v12)
  v24 = GuiUtils.getUVs(GameInfoDisplay.UV.SEPARATOR)
  v21:setUVs(...)
  v24 = unpack(GameInfoDisplay.COLOR.TUTORIAL_PROGRESS_BAR)
  v21:setColor(...)
  v22 = HUDElement.new(v21)
  v23:addChild(v22)
  self.tutorialProgressBar = v22
  return rightX - v4
end
{}[0] = {384, 240, 48, 48}
GameInfoDisplay.UV = {SEPARATOR = {8, 8, 1, 1}, MONEY_ICON = {144, 144, 48, 48}, TIME_ICON = {144, 144, 48, 48}, CLOCK_HAND_LARGE = {216, 154, 3, 16}, CLOCK_HAND_SMALL = {263, 159, 3, 11}, TIME_SCALE_ARROW = {286, 164, 24, 15}, TIME_SCALE_ARROW_FAST = {286, 146, 24, 15}, TEMPERATURE_ICON_STABLE = {336, 192, 48, 48}, TEMPERATURE_ICON_RISING = {384, 192, 48, 48}, TEMPERATURE_ICON_DROPPING = {432, 192, 48, 48}, WEATHER_ICON_CLEAR = {0, 240, 48, 48}, WEATHER_ICON_CLOUDY = {48, 240, 48, 48}, WEATHER_ICON_MIXED = {96, 240, 48, 48}, WEATHER_ICON_RAIN = {144, 240, 48, 48}, WEATHER_ICON_SNOW = {192, 240, 48, 48}, WEATHER_ICON_HAIL = {240, 240, 48, 48}, WEATHER_ICON_FOG = {288, 240, 48, 48}, WEATHER_ICON_WINDY = {240, 192, 48, 48}, WEATHER_ICON_THUNDER = {288, 192, 48, 48}, SEASON = {{432, 240, 48, 48}, {480, 240, 48, 48}, {336, 240, 48, 48}}}
GameInfoDisplay.PIVOT = {CLOCK_HAND_LARGE = {1.5, 1.5}, CLOCK_HAND_SMALL = {1.5, 1.5}}
GameInfoDisplay.TEXT_SIZE = {MONEY = 20, TIME = 20, TIME_SCALE = 16, TEMPERATURE = 21, TUTORIAL = 21, MONTH = 20}
GameInfoDisplay.BOX_HEIGHT = 75
GameInfoDisplay.SIZE = {SELF = {960, GameInfoDisplay.BOX_HEIGHT}, BOX_MARGIN = {12, 0}, MONEY_BOX = {200, GameInfoDisplay.BOX_HEIGHT}, TIME_BOX = {100, GameInfoDisplay.BOX_HEIGHT}, DATE_BOX = {60, GameInfoDisplay.BOX_HEIGHT}, TEMPERATURE_BOX = {72, GameInfoDisplay.BOX_HEIGHT}, WEATHER_BOX = {80, GameInfoDisplay.BOX_HEIGHT}, TUTORIAL_BOX = {320, GameInfoDisplay.BOX_HEIGHT}, MONEY_ICON = {40, 40}, TIME_ICON = {40, 40}, CLOCK_HAND_SMALL = {3, 8}, CLOCK_HAND_LARGE = {3, 10}, TIME_SCALE_ARROW = {24, 15}, TIME_SCALE_ARROW_FAST = {24, 15}, SEASON_ICON = {40, 40}, TEMPERATURE_ICON = {34, 34}, WEATHER_ICON = {40, 40}, TUTORIAL_PROGRESS_BAR = {120, 24}, SEPARATOR = {1, 35}}
GameInfoDisplay.POSITION = {SELF = {0, -8}, TIME_SCALE_ARROW = {5, -16}, MONEY_TEXT = {0, 3}, TIME_TEXT = {45, 2}, TIME_SCALE_TEXT = {74, -14}, SEASON_ICON = {0, 0}, MONTH_TEXT = {4, 0}, TEMPERATURE_HIGH = {0, 1.5}, TEMPERATURE_LOW = {0, -16.5}, TUTORIAL_PROGRESS_BAR = {0, 0}, TUTORIAL_TEXT = {-12, 2}}
GameInfoDisplay.COLOR = {TEXT = {1, 1, 1, 1}, ICON = {0.0003, 0.5647, 0.9822, 1}, ICON_WEATHER_NEXT = {0.6, 0.6, 0.6, 1}, CLOCK_HAND_LARGE = {0.0003, 0.5647, 0.9822, 1}, CLOCK_HAND_SMALL = {0.0003, 0.5647, 0.9822, 0.8}, TUTORIAL_PROGRESS_BAR = {0.0227, 0.5346, 0.8519, 1}, TUTORIAL_PROGRESS_BAR_HIGHLIGHT = {1, 0.773, 0.5, 1}, SEPARATOR = {1, 1, 1, 0.2}}
GameInfoDisplay.ANIMATION = {TUTORIAL_PROGRESS_BAR_FLASH = 250}
GameInfoDisplay.L10N_SYMBOL = {TUTORIAL = "fieldJob_progress"}
