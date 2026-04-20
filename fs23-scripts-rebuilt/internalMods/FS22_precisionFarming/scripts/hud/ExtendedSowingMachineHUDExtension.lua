-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSowingMachineHUDExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = ExtendedSowingMachineHUDExtension.MOD_DIR .. "gui/ui_elements.png"}
local ExtendedSowingMachineHUDExtension_mt = Class(ExtendedSowingMachineHUDExtension, VehicleHUDExtension)
function ExtendedSowingMachineHUDExtension:new(v1, v2, v3)
  local v4 = VehicleHUDExtension.new(u0, self, v1, v2, v3)
  v4.extendedSowingMachine = self.spec_extendedSowingMachine
  local v6, v7 = getNormalizedScreenValues(0, 41 * v1)
  v4.displayHeight = v7
  v4.uiTextColor = v2
  v6, v7 = getNormalizedScreenValues(0, 20 * v1)
  v4.textHeightHeadline = v7
  v6, v7 = getNormalizedScreenValues(0, 3 * v1)
  v4.textOffsetHeadline = v7
  v6, v7 = getNormalizedScreenValues(190 * v1, 0)
  v4.textMaxWidthHeadline = v6
  v6, v7 = getNormalizedScreenValues(330 * v1, 15 * v1)
  v4.rateTextOffsetX = v6
  v4.rateTextHeight = v7
  v6, v7 = getNormalizedScreenValues(0 * v1, 10 * v1)
  v4.rateTextOffsetY = v7
  v6, v7 = getNormalizedScreenValues(230 * v1, 15 * v1)
  v4.modeTextOffsetX = v6
  v4.modeTextHeight = v7
  v6, v7 = getNormalizedScreenValues(0, 2 * v1)
  v4.modeTextOffset = v7
  v6, v7 = getNormalizedScreenValues(290 * v1, 12 * v1)
  v4.naTextOffsetX = v6
  v4.naTextHeight = v7
  v6, v7 = getNormalizedScreenValues(0, 1 * v1)
  v4.naTextOffset = v7
  v6 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.DOT_EMPTY)
  v4.dotEmptyUVs = v6
  v6 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.DOT_FILLED)
  v4.dotFilledUVs = v6
  v6 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.DOT_FILL)
  v4.dotFillUVs = v6
  v4.dots = {}
  v6, v7 = getNormalizedScreenValues(12 * v1, 12 * v1)
  -- TODO: structure LOP_FORNPREP (pc 159, target 196)
  local v11 = Overlay.new(ExtendedSowingMachineHUDExtension.GUI_ELEMENTS, 0, 0, v6, v7)
  v11:setUVs(v4.dotEmptyUVs)
  v11:setColor(1, 1, 1, 1)
  table.insert(v4.dots, v11)
  v4:addComponentForCleanup(v11)
  -- TODO: structure LOP_FORNLOOP (pc 195, target 160)
  local v8, v9 = getNormalizedScreenValues(35 * v1, 0 * v1)
  v4.dotsFullWidth = v8
  v4.seedsOverlayUVs = {}
  v9 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.SEEDS[1])
  v4.seedsOverlayUVs[1] = v9
  v9 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.SEEDS[2])
  v4.seedsOverlayUVs[2] = v9
  v9 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.SEEDS[3])
  v4.seedsOverlayUVs[3] = v9
  v8, v9 = getNormalizedScreenValues(30 * v1, 30 * v1)
  local v10 = Overlay.new(ExtendedSowingMachineHUDExtension.GUI_ELEMENTS, 0, 0, v8, v9)
  v4.seedsOverlay = v10
  v10:setUVs(v4.seedsOverlayUVs[1])
  v10:setColor(1, 1, 1, 1)
  v4:addComponentForCleanup(v4.seedsOverlay)
  v10, v11 = getNormalizedScreenValues(0 * v1, 0)
  v4.seedOverlayOffsetX = v10
  v10, v11 = getNormalizedScreenValues(9 * v1, 4 * v1)
  v10 = Overlay.new(ExtendedSowingMachineHUDExtension.GUI_ELEMENTS, 0, 0, v10, v11)
  v4.recommendOverlay = v10
  local v12 = GuiUtils.getUVs(ExtendedSowingMachineHUDExtension.UV.BAR)
  v10:setUVs(...)
  v10:setColor(0.25, 0.25, 0.25, 1)
  v4:addComponentForCleanup(v4.recommendOverlay)
  v10, v11 = getNormalizedScreenValues(0, 0 * v1)
  v4.recommendOverlayOffsetY = v11
  v4.texts = {}
  v11 = v11:getText("hudExtensionSowingMachine_headline", ExtendedSowingMachineHUDExtension.MOD_NAME)
  v4.texts.headline = v11
  v11 = v11:getText("hudExtensionSowingMachine_seedRate", ExtendedSowingMachineHUDExtension.MOD_NAME)
  v4.texts.seedRate = v11
  v11 = v11:getText("hudExtensionSowingMachine_auto", ExtendedSowingMachineHUDExtension.MOD_NAME)
  v4.texts.auto = v11
  v11 = v11:getText("hudExtensionSowingMachine_notAvailable", ExtendedSowingMachineHUDExtension.MOD_NAME)
  v4.texts.notAvailable = v11
  v4.seedRateMap = g_precisionFarming.seedRateMap
  v11 = v11:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v4.isColorBlindMode = v11 or false
  v10:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], v4.setColorBlindMode, v4)
  return v4
end
function ExtendedSowingMachineHUDExtension.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
  v1:unsubscribeAll(v0)
end
function ExtendedSowingMachineHUDExtension:setColorBlindMode(isActive)
  if isActive ~= self.isColorBlindMode then
    self.isColorBlindMode = isActive
  end
end
function ExtendedSowingMachineHUDExtension.getPriority(v0)
  return 1
end
function ExtendedSowingMachineHUDExtension:canDraw()
  local v1 = v1:getIsActiveForInput(true, true)
  if not v1 then
    return false
  end
  return true
end
function ExtendedSowingMachineHUDExtension:getDisplayHeight()
  local v2 = self:canDraw()
  if v2 then
    -- if v0.displayHeight then goto L8 end
  end
  return 0
end
function ExtendedSowingMachineHUDExtension:getHelpEntryCountReduction()
  local v2 = self:canDraw()
  if v2 then
    return 1
  end
  return 0
end
function ExtendedSowingMachineHUDExtension:draw(leftPosX, rightPosX, posY)
  local v4 = self:canDraw()
  if not v4 then
    return
  end
  local v5 = unpack(self.uiTextColor)
  setTextColor(...)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
  u0(leftPosX, posY + self.displayHeight * 0.55, self.textHeightHeadline, self.texts.headline, self.textMaxWidthHeadline)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextBold(false)
  if not self.extendedSowingMachine.seedRateAutoMode then
    local v8 = v8:getSeedRateByFruitTypeAndIndex(self.vehicle.spec_sowingMachine.workAreaParameters.seedsFruitType, self.extendedSowingMachine.manualSeedRate)
  end
  v8 = v8:getIsFruitTypeSupported(v5)
  if v8 then
    setTextAlignment(RenderText.ALIGN_CENTER)
    local v15 = string.format(self.texts.seedRate, v6)
    u0(...)
    -- TODO: structure LOP_FORNPREP (pc 124, target 247)
    self.dots[1]:setPosition(leftPosX + self.rateTextOffsetX + (1 / 2 - 1) * self.dotsFullWidth - self.dots[1].width * 0.5, posY + self.displayHeight * 0.5 - self.rateTextHeight * 0.5 + self.rateTextOffsetY - self.dots[1].height * 1.5)
    if v7 < 1 then
      self.dots[1]:setUVs(self.dotEmptyUVs)
      self.dots[1]:setColor(1, 1, 1, 0.4)
      self.dots[1]:render()
    else
      self.dots[1]:setUVs(self.dotFilledUVs)
      self.dots[1]:setColor(1, 1, 1, 0.4)
      self.dots[1]:render()
      local v17 = v17:getDisplayValues()
      self.dots[1]:setUVs(self.dotFillUVs)
      self.dots[1]:setColor(v17[v7].colors[self.isColorBlindMode][1][1], v17[v7].colors[self.isColorBlindMode][1][2], v17[v7].colors[self.isColorBlindMode][1][3], 1)
      self.dots[1]:render()
    end
    if not v4.seedRateAutoMode and v4.seedRateRecommendation ~= nil and v13 <= v4.seedRateRecommendation then
      v17:setPosition(v15 + v14.width * 0.5 - self.recommendOverlay.width * 0.5, v16 - self.recommendOverlay.height + self.recommendOverlayOffsetY)
      v17:render()
    end
    -- TODO: structure LOP_FORNLOOP (pc 246, target 125)
    -- if not v4.seedRateAutoMode then goto L319 end
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
    u0(leftPosX + self.modeTextOffsetX, posY + self.displayHeight * 0.52, self.modeTextHeight, self.texts.auto)
  else
    local v11 = v11:getFillTypeIndexByFruitTypeIndex(v5)
    local v9 = v9:getFillTypeByIndex(...)
    if v9 ~= nil then
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
      local v14 = string.format(self.texts.notAvailable, v9.title)
      u0(...)
    end
  end
  if v7 ~= 0 then
    -- if v8 then goto L324 end
  end
  v15 = math.min(2, 3)
  v14 = math.max(v15, 1)
  v10:setUVs(self.seedsOverlayUVs[v14])
  v10:setPosition(rightPosX - self.seedsOverlay.width, posY + self.displayHeight * 0.5 - self.seedsOverlay.height * 0.5)
  v10:render()
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  return posY
end
ExtendedSowingMachineHUDExtension.COLOR = {}
ExtendedSowingMachineHUDExtension.UV = {SEEDS = {{454, 5, 52, 53}, {582, 5, 52, 53}, {646, 5, 52, 53}}, DOT_EMPTY = {517, 5, 19, 19}, DOT_FILLED = {517, 28, 19, 19}, DOT_FILL = {538, 5, 19, 19}, BAR = {541, 27, 13, 5}}
