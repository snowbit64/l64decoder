-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if GameInfoDisplayMobile ~= nil then
  g_currentMission.hud.gameInfoDisplay:delete()
end
GameInfoDisplayMobile = {}
local GameInfoDisplayMobile_mt = Class(GameInfoDisplayMobile, HUDDisplayElement)
GameInfoDisplayMobile.HIDE_TIME = 500
function GameInfoDisplayMobile.new(hud, hudAtlasPath, moneyUnit, l10n)
  local backgroundOverlay = GameInfoDisplayMobile.createBackground()
  local v6 = v6:superClass()
  local v5 = v6.new(backgroundOverlay, nil, u0)
  v5.hud = hud
  v5.uiScale = 1
  v5.hudAtlasPath = hudAtlasPath
  v5.controlHudAtlasPath = l10n
  v5.moneyUnit = moneyUnit
  v5.vehicle = nil
  v5.isRideable = false
  v5.buttons = {}
  v5.textElements = {}
  v5:createMenuButton()
  v5:createShopButton()
  v5:createMapButton()
  v5:createHelpButton()
  v5:createWeatherElement()
  v5:createMoneyElement()
  v5:createFuelFitnessElement()
  v6:subscribe(MessageType.INSETS_CHANGED, v5.updateInsets, v5)
  return v5
end
function GameInfoDisplayMobile:setVehicle(vehicle)
  self.vehicle = vehicle
  if vehicle ~= nil then
    local v2 = SpecializationUtil.hasSpecialization(Rideable, vehicle.specializations)
    self.isRideable = v2
  else
    self.isRideable = false
  end
  if vehicle == nil then
  end
  v2:setVisible(true)
end
function GameInfoDisplayMobile:createButton(v1, v2, v3, v4, v5)
  local v7 = unpack(GameInfoDisplayMobile.POSITION.BUTTON_OFFSET)
  local v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(v2)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = HUDButtonElement.new(self.hud, 0, 0)
  local v11 = v10:getWidth()
  local v12, v13 = self:getPosition()
  local v14 = self:getWidth()
  local v15 = self:getHeight()
  if v5 ~= nil then
    local v19 = v5:getPosition()
  end
  local v21 = v10:getHeight()
  v10:setPosition(v18 - v11, v17 + v7 - v21)
  local v25 = GuiUtils.getUVs(v3)
  v10:setIcon(...)
  v10:setAction(v4)
  v10:addTouchHandler(v1, self)
  v10.offsetX = v18 - v11 - v16
  v10.offsetY = v17 + v7 - v21 - v17
  table.insert(self.buttons, v10)
  self:addChild(v10)
  return v10
end
function GameInfoDisplayMobile:updateButtonPosition(v1, v2, v3)
  v1:setPosition(v2 + v1.offsetX * self.uiScale, nil)
end
function GameInfoDisplayMobile:createMenuButton()
  local v3 = self:createButton(self.onOpenMenu, GameInfoDisplayMobile.SIZE.ICON, GameInfoDisplayMobile.UV.MENU, InputAction.MENU)
  self.menuButton = v3
end
function GameInfoDisplayMobile:createShopButton()
  local v3 = self:createButton(self.onOpenShop, GameInfoDisplayMobile.SIZE.ICON, GameInfoDisplayMobile.UV.SHOP, InputAction.TOGGLE_STORE, self.menuButton)
  self.shopButton = v3
end
function GameInfoDisplayMobile:createMapButton()
  local v3 = self:createButton(self.onOpenMap, GameInfoDisplayMobile.SIZE.ICON, GameInfoDisplayMobile.UV.MAP, InputAction.TOGGLE_MAP, self.shopButton)
  self.mapButton = v3
end
function GameInfoDisplayMobile:createHelpButton()
  local v2 = unpack(GameInfoDisplayMobile.SIZE.BUTTON_HIGHLIGHT)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = Overlay.new(self.hudAtlasPath, 0, 0, v1, v2)
  local v6 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.BUTTON_HIGHLIGHT)
  v3:setUVs(...)
  local v4 = HUDElement.new(v3)
  self.helpHighlightElement = v4
  self:addChild(self.helpHighlightElement)
  v4:setVisible(false)
  v6 = self:createButton(self.onOpenHelp, GameInfoDisplayMobile.SIZE.ICON, GameInfoDisplayMobile.UV.HELP, InputAction.TOGGLE_HELP, self.mapButton)
  self.helpButton = v6
  local v6, v7 = self:getPosition()
  local v9 = self:getHeight()
  local v10 = self:getWidth()
  local v11 = unpack(GameInfoDisplayMobile.POSITION.BUTTON_HIGHLIGHT)
  v10, v11 = getNormalizedScreenValues(...)
  local v12, v13 = v12:getPosition()
  v14:setPosition(v12 + v10, v13 + v11)
  self.helpHighlightElement.offsetX = v12 + v10 - v6 + v10
  self.helpHighlightElement.offsetY = v13 + v11 - v7 + v9
end
function GameInfoDisplayMobile:createBackgroundElements(v1, v2, v3)
  local v5 = unpack(GameInfoDisplayMobile.SIZE.BG_LEFT)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(GameInfoDisplayMobile.SIZE.BG_RIGHT)
  local v6, v7 = getNormalizedScreenValues(...)
  local v8 = Overlay.new(self.hudAtlasPath, v1, v2, v4, v5)
  local v11 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.BG_LEFT)
  v8:setUVs(...)
  local v9 = HUDElement.new(v8)
  self:addChild(v9)
  local v12 = Overlay.new(self.hudAtlasPath, v1 + v4, v2, v3 - v4 - v6, v5)
  local v15 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.BG_MIDDLE)
  v12:setUVs(...)
  v15 = HUDElement.new(v12)
  v9:addChild(...)
  local v14 = Overlay.new(self.hudAtlasPath, v1 + v4 + v3 - v4 - v6, v2, v6, v5)
  local v17 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.BG_RIGHT)
  v14:setUVs(...)
  v17 = HUDElement.new(v14)
  v9:addChild(...)
  v9.totalSize = v3
  return v9
end
function GameInfoDisplayMobile:createWeatherElement()
  local v2 = unpack(GameInfoDisplayMobile.POSITION.WEATHER)
  local v1, v2 = getNormalizedScreenValues(...)
  self.weatherOffsetX = v1
  self.weatherOffsetY = v2
  v2 = unpack(GameInfoDisplayMobile.SIZE.WEATHER)
  v1, v2 = getNormalizedScreenValues(...)
  local v3 = self:getPosition()
  local v4 = math.max(v3, self.weatherOffsetX)
  local v6 = self:createBackgroundElements(v4, 1 + self.weatherOffsetY - v2, v1)
  self.weatherElement = v6
  local v7 = unpack(GameInfoDisplayMobile.SIZE.WEATHER_SEPARATOR)
  v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(GameInfoDisplayMobile.POSITION.WEATHER_SEPARATOR)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = Overlay.new(self.hudAtlasPath, v4 + v8, 1 + self.weatherOffsetY - v2 + v9, v6, v7)
  local v13 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v10:setUVs(...)
  v13 = HUDElement.new(v10)
  v11:addChild(...)
  for v15, v16 in pairs(GameInfoDisplayMobile.UV.SEASON_ICON) do
    local v17 = GuiUtils.getUVs(v16)
    v11[v15] = v17
  end
  v13 = unpack(GameInfoDisplayMobile.SIZE.SEASON_ICON)
  v12, v13 = getNormalizedScreenValues(...)
  v15 = unpack(GameInfoDisplayMobile.POSITION.SEASON_ICON)
  v14, v15 = getNormalizedScreenValues(...)
  v16 = Overlay.new(self.controlHudAtlasPath, v4 + v14, v5 + v15, v12, v13)
  v16:setUVs(v11[1])
  v17 = HUDElement.new(v16)
  v18:addChild(v17)
  local v18, v19 = getNormalizedScreenValues(0, GameInfoDisplayMobile.SIZE.MONTH_TEXT)
  local v21 = unpack(GameInfoDisplayMobile.POSITION.MONTH_TEXT)
  local v20, v21 = getNormalizedScreenValues(...)
  table.insert(self.textElements, function()
    self:setUVs(u1[u2.environment.currentSeason])
    local self = self:formatDayInPeriod(nil, nil, true)
    local v1, v2 = v1:getPosition()
    GameInfoDisplayMobile.drawText(v1 + u3 * u2.uiScale, v2 + u4 * u2.uiScale, u5 * u2.uiScale, true, RenderText.ALIGN_LEFT, u6, self)
  end)
  local v25 = unpack(GameInfoDisplayMobile.SIZE.TIME_ICON)
  local v24, v25 = getNormalizedScreenValues(...)
  local v27 = unpack(GameInfoDisplayMobile.POSITION.TIME_ICON)
  local v26, v27 = getNormalizedScreenValues(...)
  local v28 = Overlay.new(self.controlHudAtlasPath, v4 + v26, v5 + v27, v24, v25)
  local v31 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.TIME)
  v28:setUVs(...)
  local v29 = HUDElement.new(v28)
  v30:addChild(v29)
  local v30, v31 = getNormalizedScreenValues(0, GameInfoDisplayMobile.SIZE.TIME_TEXT)
  local v33 = unpack(GameInfoDisplayMobile.POSITION.TIME_TEXT)
  local v32, v33 = getNormalizedScreenValues(...)
  local v35 = unpack(GameInfoDisplayMobile.POSITION.TIME_TEXT_OFFSET)
  local v34, v35 = getNormalizedScreenValues(...)
  table.insert(self.textElements, function()
    local v1 = math.floor(u0.environment.dayTime / 3600000)
    local v2 = math.floor((u0.environment.dayTime / 3600000 - v1) * 60)
    local v3 = string.format("%02d", v1)
    local v4 = string.format("%02d", v2)
    local v5, v6 = v5:getPosition()
    GameInfoDisplayMobile.drawText(v5 + u1 * u0.uiScale - u3 * u0.uiScale, v6 + u2 * u0.uiScale, u4 * u0.uiScale, true, RenderText.ALIGN_RIGHT, u5, v3)
    GameInfoDisplayMobile.drawText(v5 + u1 * u0.uiScale, v6 + u2 * u0.uiScale, u4 * u0.uiScale, true, RenderText.ALIGN_CENTER, u5, ":")
    GameInfoDisplayMobile.drawText(v5 + u1 * u0.uiScale + u3 * u0.uiScale, v6 + u2 * u0.uiScale, u4 * u0.uiScale, true, RenderText.ALIGN_LEFT, u5, v4)
  end)
end
function GameInfoDisplayMobile:createMoneyElement()
  local v2 = unpack(GameInfoDisplayMobile.SIZE.MONEY)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GameInfoDisplayMobile.POSITION.MONEY)
  local v3, v4 = getNormalizedScreenValues(...)
  self.moneyOffsetX = v3
  self.moneyOffsetY = v4
  v3 = v3:getPosition()
  local v7 = self:createBackgroundElements(v3 + self.weatherElement.totalSize + self.moneyOffsetX, 1 + self.moneyOffsetY - v2, v1)
  self.moneyElement = v7
  for v11, v12 in pairs(GameInfoDisplayMobile.UV.MONEY_ICON) do
    local v13 = GuiUtils.getUVs(v12)
    v7[v11] = v13
  end
  v9 = unpack(GameInfoDisplayMobile.SIZE.MONEY_ICON)
  v8, v9 = getNormalizedScreenValues(...)
  v11 = unpack(GameInfoDisplayMobile.POSITION.MONEY_ICON)
  v10, v11 = getNormalizedScreenValues(...)
  v12 = Overlay.new(self.controlHudAtlasPath, v5 + v10, v6 + v11, v8, v9)
  v12:setUVs(v7[1])
  v13 = HUDElement.new(v12)
  v14:addChild(v13)
  local v14, v15 = getNormalizedScreenValues(0, GameInfoDisplayMobile.SIZE.MONEY_TEXT)
  local v17 = unpack(GameInfoDisplayMobile.POSITION.MONEY_TEXT)
  local v16, v17 = getNormalizedScreenValues(...)
  table.insert(self.textElements, function()
    self:setUVs(u1[u2.moneyUnit])
    if g_currentMission.player ~= nil then
      local v1 = v1:getFarmById(g_currentMission.player.farmId)
      if 100000000 <= v1.money then
        local v3 = math.min(v1.money / 1000000, 999999)
        local v5 = v5:formatNumber(v3, 2, true)
      else
        v3 = v3:formatMoney(v1.money, 0, false, true)
      end
    end
    local v1, v2 = v1:getPosition()
    GameInfoDisplayMobile.drawText(v1 + u3 * u2.uiScale, v2 + u4 * u2.uiScale, u5 * u2.uiScale, true, RenderText.ALIGN_RIGHT, u6, self)
  end)
end
function GameInfoDisplayMobile:createFuelFitnessElement()
  local v2 = unpack(GameInfoDisplayMobile.POSITION.FUEL)
  local v1, v2 = getNormalizedScreenValues(...)
  self.fuelOffsetX = v1
  self.fuelOffsetY = v2
  v2 = unpack(GameInfoDisplayMobile.SIZE.FUEL)
  v1, v2 = getNormalizedScreenValues(...)
  local v3 = v3:getPosition()
  local v7 = self:createBackgroundElements(v3 + self.moneyElement.totalSize + self.fuelOffsetX, 1 + self.fuelOffsetY - v2, v1)
  self.fuelFitnessElement = v7
  for v11, v12 in pairs(GameInfoDisplayMobile.UV.FUEL_ICON) do
    local v13 = GuiUtils.getUVs(v12)
    v7[v11] = v13
  end
  v9 = unpack(GameInfoDisplayMobile.SIZE.FUEL_ICON)
  v8, v9 = getNormalizedScreenValues(...)
  v11 = unpack(GameInfoDisplayMobile.POSITION.FUEL_ICON)
  v10, v11 = getNormalizedScreenValues(...)
  v12 = Overlay.new(self.controlHudAtlasPath, v5 + v10, v6 + v11, v8, v9)
  local v13, v14 = next(v7)
  v12:setUVs(v14)
  local v15 = HUDElement.new(v12)
  v16:addChild(v15)
  local v16 = GuiUtils.getUVs(GameInfoDisplayMobile.UV.HORSE)
  local v17, v18 = getNormalizedScreenValues(0, GameInfoDisplayMobile.SIZE.FUEL_TEXT)
  local v20 = unpack(GameInfoDisplayMobile.POSITION.FUEL_TEXT)
  local v19, v20 = getNormalizedScreenValues(...)
  table.insert(self.textElements, function()
    local self, v1 = self:getPosition()
    if u0.vehicle ~= nil then
      if u0.isRideable then
        local v4 = v4:getCluster()
        local v7 = v4:getRidingFactor()
        local v5 = math.floor(v7 * 100)
        if v5 <= 5 then
        end
        local v14 = string.format("%d%%", v5)
        GameInfoDisplayMobile.drawText(...)
        v7:setUVs(u6)
        return
      end
      if u0.vehicle.getConsumerFillUnitIndex ~= nil then
        v4 = v4:getConsumerFillUnitIndex(FillType.DIESEL)
        if not v4 then
          v4 = v4:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
          if not v4 then
            v4 = v4:getConsumerFillUnitIndex(FillType.METHANE)
          end
        end
        if v4 ~= nil then
          v7 = v7:getFillUnitFillType(v4)
          v5 = v5:getFillTypeNameByIndex(...)
          local v8 = v8:getFillUnitFillLevelPercentage(v4)
          local v6 = MathUtil.round(v8 * 100)
          if v6 <= 5 then
          end
          local v15 = string.format("%d%%", v6)
          GameInfoDisplayMobile.drawText(...)
          v8:setUVs(u7[v5])
        end
      end
    end
  end)
end
function GameInfoDisplayMobile.drawText(v0, v1, v2, v3, v4, v5, v6)
  setTextColor(v5[1], v5[2], v5[3], v5[4])
  setTextBold(v3)
  setTextAlignment(v4)
  renderText(v0, v1, v2, v6)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
end
function GameInfoDisplayMobile.drawTextElement(v0, v1)
  v1.updateFunc()
  setTextColor(v1.color[1], v1.color[2], v1.color[3], v1.color[4])
  setTextBold(v1.textBold)
  setTextAlignment(v1.textAlign)
  renderText(v1.posX, v1.posY, v1.textSize, v1.text)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
end
function GameInfoDisplayMobile.onOpenShop(v0)
  local v1 = v1:getIsSleeping()
  if v1 then
    return
  end
  v1:onToggleStore()
end
function GameInfoDisplayMobile.onOpenMap(v0)
  local v1 = v1:getIsSleeping()
  if v1 then
    return
  end
  v1:onToggleMap()
end
function GameInfoDisplayMobile.onOpenMenu(v0)
  local v1 = v1:getIsSleeping()
  if v1 then
    return
  end
  v1:onToggleMenu()
end
function GameInfoDisplayMobile.onOpenHelp(v0)
  local v1 = v1:getIsSleeping()
  if v1 then
    return
  end
  v1:onToggleHelp()
end
function GameInfoDisplayMobile:setMoneyUnit(moneyUnit)
  if moneyUnit ~= GS_MONEY_EURO and moneyUnit ~= GS_MONEY_POUND and moneyUnit ~= GS_MONEY_DOLLAR then
  end
  self.moneyUnit = moneyUnit
end
function GameInfoDisplayMobile:setMissionStats(missionStats)
  self.missionStats = missionStats
end
function GameInfoDisplayMobile:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
end
function GameInfoDisplayMobile:setEnvironment(environment)
  self.environment = environment
end
function GameInfoDisplayMobile.setMoneyVisible(v0, v1)
end
function GameInfoDisplayMobile.setTimeVisible(v0, v1)
end
function GameInfoDisplayMobile.setTemperatureVisible(v0, v1)
end
function GameInfoDisplayMobile.setWeatherVisible(v0, v1)
end
function GameInfoDisplayMobile.setDateVisible(v0, v1)
end
function GameInfoDisplayMobile.setTutorialVisible(v0, v1)
end
function GameInfoDisplayMobile.setTutorialProgress(v0, v1)
end
function GameInfoDisplayMobile:setHelpHighlighted(v1)
  self.isHelpHighlighted = v1
end
function GameInfoDisplayMobile.delete(v0)
  v1:unsubscribe(MessageType.INSETS_CHANGED, v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function GameInfoDisplayMobile:update(v1)
  self:updateButtons()
  local v3 = getCamera()
  local v2, v3, v4 = getWorldTranslation(...)
  local v5 = v5:getIsContextBasedHelpAvailable(v2, v3, v4)
  v6:setVisible(self.helpButtonActive and v5)
end
function GameInfoDisplayMobile:draw()
  for v4, v5 in ipairs(self.textElements) do
    v5()
  end
  v2 = v2:superClass()
  v2.draw(self)
end
function GameInfoDisplayMobile:updateButtons()
  local v5 = v5:getIsGuiVisible()
  if not v5 then
    local v7 = g_currentMission.guidedTour:getCanAccessHudButton("gameInfoDisplay_shop")
  end
  self.shopButtonActive = v7
  if not v5 then
    v7 = v6:getCanAccessHudButton("gameInfoDisplay_help")
  end
  self.helpButtonActive = v7
  if not v5 then
    v7 = v6:getCanAccessHudButton("gameInfoDisplay_map")
  end
  self.mapButtonActive = v7
  if not v5 then
    v7 = v6:getCanAccessHudButton("gameInfoDisplay_menu")
  end
  self.menuButtonActive = v7
  if v1 ~= self.shopButtonActive then
    v7:setDisabled(not self.shopButtonActive)
  end
  if v2 ~= self.helpButtonActive then
    v7:setDisabled(not self.helpButtonActive)
  end
  if v3 ~= self.mapButtonActive then
    v7:setDisabled(not self.mapButtonActive)
  end
  if v4 ~= self.menuButtonActive then
    v7:setDisabled(not self.menuButtonActive)
  end
end
function GameInfoDisplayMobile:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v3, v4, v5, v6 = GameInfoDisplayMobile.getBackgroundPositionAndSize(uiScale)
  self:setPosition(v3, v4)
  self:setDimension(v5, v6)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  self:updateButtonPosition(self.shopButton, v3 + v5, v4 + v6)
  self:updateButtonPosition(self.menuButton, v3 + v5, v4 + v6)
  self:updateButtonPosition(self.mapButton, v3 + v5, v4 + v6)
  self:updateButtonPosition(self.helpButton, v3 + v5, v4 + v6)
  self.helpHighlightElement:setPosition(v3 + v5 + self.helpHighlightElement.offsetX * self.uiScale, nil)
end
function GameInfoDisplayMobile:updateInsets()
  self:setScale(self.uiScale)
end
function GameInfoDisplayMobile.getBackgroundPositionAndSize(v0)
  local v2 = unpack(GameInfoDisplayMobile.POSITION.BACKGROUND)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(GameInfoDisplayMobile.SIZE.BACKGROUND)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5, v6, v7, v8 = getSafeFrameInsets()
  local v9 = math.max(v5, v1 * v0)
  v9 = math.max(v6, v1 * v0)
  return v9, 1 + v2 * v0 - v4 * v0, 1 - v9 - v9, v4
end
function GameInfoDisplayMobile.createBackground()
  local v0, v1, v2, v3 = GameInfoDisplayMobile.getBackgroundPositionAndSize(1)
  return Overlay.new(nil, v0, v1, v2, v3)
end
GameInfoDisplayMobile.SIZE = {BACKGROUND = {1251, 106}, BUTTON = {106, 106}, BUTTON_HIGHLIGHT = {114, 114}, ICON = {84, 84}, BG_LEFT = {38, 75}, BG_RIGHT = {38, 75}, BG_MIDDLE = {34, 75}, WEATHER = {493, 75}, WEATHER_SEPARATOR = {2, 65}, MONTH_TEXT = 54, SEASON_ICON = {65, 65}, TIME_ICON = {75, 75}, TIME_TEXT = 54, MONEY = {390, 75}, MONEY_ICON = {75, 75}, MONEY_TEXT = 54, FUEL = {262, 75}, FUEL_ICON = {75, 75}, FUEL_TEXT = 54}
GameInfoDisplayMobile.POSITION = {BG_LEFT = {38, 75}, BG_RIGHT = {38, 75}, BG_MIDDLE = {34, 75}, BUTTON_OFFSET = {-25, -35}, MENU = {-25, -35}, SHOP = {-25, -35}, MAP = {-25, -35}, HELP = {-25, -35}, BUTTON_HIGHLIGHT = {-4, -4}, WEATHER = {0, -35}, WEATHER_SEPARATOR = {232, 5}, SEASON_ICON = {10, 5}, MONTH_TEXT = {93, 18}, TIME_ICON = {246, 0}, TIME_TEXT = {400, 18}, TIME_TEXT_OFFSET = {5, 0}, MONEY = {15, -35}, MONEY_ICON = {5, 0}, MONEY_TEXT = {370, 18}, FUEL = {15, -35}, FUEL_ICON = {15, 0}, FUEL_TEXT = {242, 18}, BACKGROUND = {55, -1}}
{}[0] = {960, 48, 48, 48}
{}[GS_MONEY_DOLLAR] = {480, 192, 96, 96}
{}[GS_MONEY_POUND] = {576, 192, 96, 96}
{}[GS_MONEY_EURO] = {672, 192, 96, 96}
GameInfoDisplayMobile.UV = {BUTTON_NORMAL = {132, 908, 106, 106}, BUTTON_PRESSED = {238, 908, 106, 106}, BUTTON_DISABLED = {344, 908, 106, 106}, BUTTON_HIGHLIGHT = {801, 904, 114, 114}, SHOP = {576, 96, 96, 96}, MENU = {864, 0, 96, 96}, MAP = {480, 96, 96, 96}, HELP = {0, 288, 96, 96}, BG_LEFT = {454, 928, 38, 75}, BG_RIGHT = {526, 928, 38, 75}, BG_MIDDLE = {498, 928, 34, 75}, SEASON_ICON = {{960, 96, 48, 48}, {960, 144, 48, 48}, {960, 0, 48, 48}}, TIME = {384, 192, 96, 96}, MONEY_ICON = {}, FUEL_ICON = {DIESEL = {288, 192, 96, 96}, ELECTRICCHARGE = {768, 192, 96, 96}, METHANE = {864, 192, 96, 96}}, HORSE = {192, 192, 96, 96}}
GameInfoDisplayMobile.COLOR = {BACKGROUND = {1, 1, 1, 0.5}, SEPARATOR = {1, 1, 1, 0.5}, FUEL_EMPTY = {0.5029, 0.0152, 0.0152, 1}}
if v0 ~= nil then
  local v2 = GameInfoDisplayMobile.new(v0.hud, v0.hudAtlasPath, v0.moneyUnit, v0.controlHudAtlasPath)
  v2:setVehicle(v0.vehicle)
  v2:setScale(v0.uiScale)
  v2:setMoneyUnit(v0.moneyUnit)
  v2:setMissionStats(v0.missionStats)
  v2:setMissionInfo(v0.missionInfo)
  v2:setEnvironment(v0.environment)
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.gameInfoDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.gameInfoDisplay = v2
  Logging.info("Reloaded")
end
