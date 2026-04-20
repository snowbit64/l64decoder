-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScore = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, YIELD_INCREASE = 0.15, SCORE_UPDATE_TIME = 2500, GUI_ELEMENTS = EnvironmentalScore.MOD_DIR .. "gui/ui_elements.png"}
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScoreValue.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScoreHerbicide.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScoreNitrogen.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScorePH.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScoreSoilSample.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/environmentalScore/EnvironmentalScoreTillage.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/events/EnvironmentalScoreEvent.lua")
source(EnvironmentalScore.MOD_DIR .. "scripts/events/RequestEnvironmentalScoreEvent.lua")
local EnvironmentalScore_mt = Class(EnvironmentalScore)
function EnvironmentalScore.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.pfModule = pfModule
  v2.mapFrame = nil
  local v3 = MoneyType.register("other", "info_environmentalScoreReward", SoilMap.MOD_NAME)
  v2.moneyChangeTypePos = v3
  v3 = MoneyType.register("other", "info_environmentalScorePenalty", SoilMap.MOD_NAME)
  v2.moneyChangeTypeNeg = v3
  v2.scoreUpdateTimer = 0
  v2.harvestedStates = {}
  v2.farmRevenueIncrease = {}
  v2.farmRevenueIncreaseMessageDirty = false
  v2.overwrittenWindowState = false
  v3 = v3:getInputHelpMode()
  v2.currentInputHelpMode = v3
  v2.scoreValues = {}
  v2.scoreObjects = {}
  local v4 = EnvironmentalScoreHerbicide.new(pfModule)
  v2.scoreObjects.EnvironmentalScoreHerbicide = v4
  v4 = EnvironmentalScoreNitrogen.new(pfModule)
  v2.scoreObjects.EnvironmentalScoreNitrogen = v4
  v4 = EnvironmentalScorePH.new(pfModule)
  v2.scoreObjects.EnvironmentalScorePH = v4
  v4 = EnvironmentalScoreSoilSample.new(pfModule)
  v2.scoreObjects.EnvironmentalScoreSoilSample = v4
  v4 = EnvironmentalScoreTillage.new(pfModule)
  v2.scoreObjects.EnvironmentalScoreTillage = v4
  v2.ui = {}
  local v6, v7 = getNormalizedScreenValues(110, 110)
  v2.ui.fieldInfoWidth = v6
  v2.ui.fieldInfoHeight = v7
  local v5, v6 = getNormalizedScreenValues(0, 65)
  v2.ui.fieldInfoHeightSmall = v6
  v6, v7 = getNormalizedScreenValues(92, 11)
  v2.ui.scoreBarMainWidth = v6
  v2.ui.scoreBarMainHeight = v7
  v6, v7 = getNormalizedScreenValues(2, 15)
  v2.ui.scoreBarMainIndicatorWidth = v6
  v2.ui.scoreBarMainIndicatorHeight = v7
  v6, v7 = getNormalizedScreenValues(70, 5)
  v2.ui.scoreBarSmallWidth = v6
  v2.ui.scoreBarSmallHeight = v7
  v6, v7 = getNormalizedScreenValues(40, 40)
  v2.ui.iconWidth = v6
  v2.ui.iconHeight = v7
  v5, v6 = getNormalizedScreenValues(0, 4)
  v2.ui.scoreBarOffset = v6
  v5, v6 = getNormalizedScreenValues(0, 2)
  v2.ui.topOffset = v6
  v5, v6 = getNormalizedScreenValues(0, 5)
  v2.ui.spacingY = v6
  v5, v6 = getNormalizedScreenValues(0, 12)
  v2.ui.fieldInfoHeightOffset = v6
  v5, v6 = getNormalizedScreenValues(0, 30)
  v2.ui.textSizeHeader = v6
  v5, v6 = getNormalizedScreenValues(0, 7)
  v2.ui.textOffsetHeader = v6
  v5 = Overlay.new(EnvironmentalScore.GUI_ELEMENTS, 0, 0, v2.ui.iconWidth, v2.ui.iconHeight)
  v2.ui.iconOverlay = v5
  v6 = GuiUtils.getUVs({512, 64, 64, 64})
  v4:setUVs(...)
  v4:setColor(1, 1, 1, 1)
  v5 = Overlay.new(EnvironmentalScore.GUI_ELEMENTS, 0, 0, v2.ui.scoreBarMainWidth, v2.ui.scoreBarMainHeight)
  v2.ui.gradientOverlay = v5
  v6 = GuiUtils.getUVs({194, 27, 252, 12})
  v4:setUVs(...)
  v4:setColor(1, 1, 1, 1)
  v5 = Overlay.new(g_baseHUDFilename, 0, 0, v2.ui.scoreBarSmallWidth, v2.ui.scoreBarSmallHeight)
  v2.ui.gradientIndicatorOverlay = v5
  v6 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v4:setUVs(...)
  v4:setColor(1, 1, 1, 1)
  v5 = Overlay.new(g_baseHUDFilename, 0, 0, v2.ui.scoreBarSmallWidth, v2.ui.scoreBarSmallHeight)
  v2.ui.smallBarOverlay = v5
  v6 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v4:setUVs(...)
  v4:setColor(1, 1, 1, 1)
  v2.ui.colorBackground = {0.018, 0.016, 0.015, 0.6}
  v2.ui.colorMainUI = {0.0227, 0.5346, 0.8519, 1}
  v2.ui.farmlandData = {}
  v4:subscribe(MessageType.PERIOD_CHANGED, v2.onPeriodChanged, v2)
  return v2
end
function EnvironmentalScore:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:unsubscribe(MessageType.PERIOD_CHANGED, self)
end
function EnvironmentalScore:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v6 = v6:getText("environmentalScore_rewardPos", EnvironmentalScore.MOD_NAME)
  self.infoTextPos = v6
  v6 = v6:getText("environmentalScore_rewardNeg", EnvironmentalScore.MOD_NAME)
  self.infoTextNeg = v6
  v6 = v6:getText("environmentalScore_rewardNone", EnvironmentalScore.MOD_NAME)
  self.infoTextNone = v6
  while true do
    v7 = string.format("%s.scoreValues.scoreValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v9 = getXMLString(xmlFile, v7 .. "#id")
    if {id = v9}.id ~= nil then
      v9 = v9:upper()
      v11 = getXMLString(xmlFile, v7 .. "#name")
      v9 = v9:convertText(v11, EnvironmentalScore.MOD_NAME)
      v9 = getXMLString(xmlFile, v7 .. "#className")
      if v9 ~= nil and self.scoreObjects[v9] ~= nil then
        v10:loadFromXML(xmlFile, v7, baseDirectory, configFileName, mapFilename)
      end
      if v8.name ~= nil then
        if v8.object ~= nil then
          v11 = getXMLInt(xmlFile, v7 .. "#maxScore")
          v8.maxScore = v11 or 10
          v8.curScore = v8.maxScore * 0.5
          table.insert(self.scoreValues, v8)
          -- goto L167  (LOP_JUMP +17)
        end
        Logging.warning("Missing score object className in '%s'", v7)
        -- goto L167  (LOP_JUMP +11)
      end
      Logging.warning("Missing scoreValue name in '%s'", v7)
    else
      Logging.warning("Missing scoreValue id in '%s'", v7)
    end
  end
  return true
end
function EnvironmentalScore:loadFromItemsXML(xmlFile, key)
  -- TODO: structure LOP_FORNPREP (pc 8, target 24)
  if self.scoreValues[1].object ~= nil then
    v7:loadFromItemsXML(xmlFile, key .. ".environmentalScore")
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 9)
  xmlFile:iterate(key .. ".harvestedStates.harvestedState", function(self, xmlFile)
    local key = key:getInt(xmlFile .. "#farmlandId")
    local v3 = v3:getInt(xmlFile .. "#state")
    if key ~= nil and v3 ~= nil then
      u1.harvestedStates[key] = v3
    end
  end)
end
function EnvironmentalScore:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 8, target 25)
  if self.scoreValues[1].object ~= nil then
    v8:saveToXMLFile(xmlFile, key .. ".environmentalScore", usedModNames)
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 9)
  for v8, v9 in pairs(self.harvestedStates) do
    local v12 = string.format("%s.harvestedStates.harvestedState(%d)#farmlandId", key, v4)
    xmlFile:setInt(v12, v8)
    v12 = string.format("%s.harvestedStates.harvestedState(%d)#state", key, v4)
    xmlFile:setInt(v12, v9)
  end
end
function EnvironmentalScore:readStream(streamId, connection, farmId)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  if self.scoreValues[1].object ~= nil then
    v8:readStream(streamId, connection, farmId)
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
end
function EnvironmentalScore:writeStream(streamId, connection, farmId)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  if self.scoreValues[1].object ~= nil then
    v8:writeStream(streamId, connection, farmId)
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
end
function EnvironmentalScore:update(dt)
  if self.mapFrame ~= nil then
    if g_inputBinding.mousePosXLast ~= nil and self.mapFrame.envScoreWindow.absPosition[1] < g_inputBinding.mousePosXLast and g_inputBinding.mousePosXLast < self.mapFrame.envScoreWindow.absPosition[1] + self.mapFrame.envScoreWindow.absSize[1] and self.mapFrame.envScoreWindow.absPosition[2] < g_inputBinding.mousePosYLast and g_inputBinding.mousePosYLast < self.mapFrame.envScoreWindow.absPosition[2] + self.mapFrame.envScoreWindow.absSize[2] then
    end
    if v6 then
      -- if v0.envScoreWindowSize * 2.692 then goto L71 end
    end
    local v9 = MathUtil.sign(self.envScoreWindowSize - v7)
    local v13 = MathUtil.clamp(v7 + v9 * dt / 1000, self.envScoreWindowSize, self.envScoreWindowSize * 2.692)
    v10:setSize(...)
    self.scoreUpdateTimer = self.scoreUpdateTimer + dt
    if EnvironmentalScore.SCORE_UPDATE_TIME < self.scoreUpdateTimer then
      self:updateUI()
      self.scoreUpdateTimer = 0
    end
  end
  if self.farmRevenueIncreaseMessageDirty then
    for v6, v7 in pairs(self.farmRevenueIncrease) do
      if v7.revenue ~= 0 then
        -- if 1000 >= g_time - v7.lastSellTime then goto L160 end
        v7.lastSellTime = 0
        if v7.revenue < 0 then
          -- if v0.moneyChangeTypeNeg then goto L150 end
        end
        v8:showMoneyChange(self.moneyChangeTypePos, nil, nil, v6)
        v7.revenue = 0
      elseif not (v7.revenue ~= 0) then
        continue
      end
    end
    if not v2 then
      self.farmRevenueIncreaseMessageDirty = false
    end
  end
end
function EnvironmentalScore:toggleWindowSize(state)
  if state == nil then
  end
  self.overwrittenWindowState = state
end
function EnvironmentalScore:setInputHelpMode(currentInputHelpMode)
  self.currentInputHelpMode = currentInputHelpMode
end
function EnvironmentalScore:setMapFrame(mapFrame)
  self.mapFrame = mapFrame
  self.envScoreWindowSize = self.mapFrame.envScoreWindow.size[2]
  self:updateUI()
end
function EnvironmentalScore.onMapFrameOpen(v0, dt)
  if g_server == nil and g_client ~= nil then
    local v2 = v2:getFarmId()
    if v2 ~= FarmManager.SPECTATOR_FARM_ID then
      local totalScore = totalScore:getServerConnection()
      local v5 = RequestEnvironmentalScoreEvent.new(v2)
      totalScore:sendEvent(...)
    end
  end
  v5 = v5:getFarmId()
  if v5 ~= FarmManager.SPECTATOR_FARM_ID then
    v5 = v5:getIsVisible()
  end
  v2:setVisible(v4)
end
function EnvironmentalScore:onHarvestScoreReset(farmlandId)
  -- TODO: structure LOP_FORNPREP (pc 5, target 26)
  if self.scoreValues[1].object ~= nil and self.scoreValues[1].object.onHarvestScoreReset ~= nil then
    v6:onHarvestScoreReset(farmlandId)
  end
  -- TODO: structure LOP_FORNLOOP (pc 25, target 6)
end
function EnvironmentalScore:getFarmlandScore(farmlandId)
  -- TODO: structure LOP_FORNPREP (pc 6, target 24)
  local v7 = v7:getScore(farmlandId)
  -- TODO: structure LOP_FORNLOOP (pc 23, target 7)
  return 0 + v7 * self.scoreValues[1].maxScore
end
function EnvironmentalScore:getTotalScore(farmId)
  if farmId ~= FarmManager.SPECTATOR_FARM_ID then
    for v6, v7 in pairs(g_farmlandManager.farmlandMapping) do
      if not (v7 == farmId) then
        continue
      end
      local v8 = v8:getFarmlandById(v6)
      if not (v8 ~= nil) then
        continue
      end
      if not (v8.totalFieldArea ~= nil) then
        continue
      end
      if not (0.01 < v8.totalFieldArea) then
        continue
      end
    end
    if 0 < v2 then
      for v7, v8 in pairs(g_farmlandManager.farmlandMapping) do
        if not (v8 == farmId) then
          continue
        end
        local v9 = v9:getFarmlandById(v7)
        if not (v9 ~= nil) then
          continue
        end
        if not (v9.totalFieldArea ~= nil) then
          continue
        end
        if not (0.01 < v9.totalFieldArea) then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 69, target 91)
        local v15 = v15:getScore(v7)
        -- TODO: structure LOP_FORNLOOP (pc 90, target 70)
      end
      return totalScore
    end
  end
  return 50
end
function EnvironmentalScore:getSellPriceFactor(farmId)
  local totalScore = self:getTotalScore(farmId)
  local v4 = math.abs((totalScore / 100 - 0.5) / 0.5 * EnvironmentalScore.YIELD_INCREASE)
  if v4 < 0.01 then
    return 0
  end
  return totalScore
end
function EnvironmentalScore:updateUI()
  if self.mapFrame ~= nil then
    local dt = dt:getFarmId()
    local v2 = self:getTotalScore(dt)
    local v4 = self:getTotalScore(dt)
    local v8 = MathUtil.round(v2)
    local v6 = string.format(...)
    v4:setText(...)
    v4:setSize(self.mapFrame.envScoreBarStatic.size[1] * v4 / 100)
    v4 = GuiOverlay.getOverlayUVs(self.mapFrame.envScoreBarStatic.overlay, true)
    v5:setImageUVs(true, v4[1], v4[2], v4[3], v4[4], (v4[5] - v4[1]) * v4 / 100 + v4[1], v4[6], (v4[7] - v4[3]) * v4 / 100 + v4[3], v4[8])
    v6:setPosition(self.mapFrame.envScoreBarStatic.position[1] + self.mapFrame.envScoreBarStatic.size[1] * v4 / 100 - self.mapFrame.envScoreBarIndicator.size[1] * 0.5)
    v6:setPosition(self.mapFrame.envScoreBarStatic.position[1] + self.mapFrame.envScoreBarStatic.size[1] * v4 / 100 - self.mapFrame.envScoreBarNumber.size[1] * 0.5)
    -- TODO: structure LOP_FORNPREP (pc 137, target 223)
    if self.mapFrame.envScoreDistributionText[1] ~= nil then
      if self.scoreValues[1].object ~= nil then
        for v15, v16 in pairs(g_farmlandManager.farmlandMapping) do
          if not (v16 == dt) then
            continue
          end
          local v17 = v17:getScore(v15)
        end
        if 0 < v11 then
        end
      end
      v11:setText(v9.name)
      v15 = MathUtil.round(v10 * v9.maxScore, 1)
      v13 = string.format(...)
      v11:setText(...)
      v11:setSize(self.mapFrame.envScoreDistributionBarBackground[v8].size[1] * v10)
    end
    -- TODO: structure LOP_FORNLOOP (pc 222, target 138)
    v8 = self:getSellPriceFactor(dt)
    v6 = MathUtil.round(v8 * 100)
    if 1 <= v6 then
      -- if v0.infoTextPos then goto L245 end
    end
    if v6 <= -1 then
      -- if v0.infoTextNeg then goto L245 end
    end
    v12 = math.abs(v6)
    local v10 = string.format(...)
    v8:setText(...)
  end
end
function EnvironmentalScore:onDraw(element, ingameMap)
  local totalScore = totalScore:getFarmId()
  if totalScore ~= FarmManager.SPECTATOR_FARM_ID then
    for v6, v7 in pairs(ingameMap.hotspots) do
      if not (v7.getField ~= nil) then
        continue
      end
      local v8, v9 = v7:getWorldPosition()
      local v16 = v7:getWidth()
      local v17 = v7:getHeight()
      local v19 = v7:getIsPersistent()
      local v12, v13, v14, v15 = v12:getMapObjectPosition(...)
      if not v15 then
        continue
      end
      local v22 = v7:getWidth()
      v22 = v7:getField()
      self:onDrawFieldNumber(...)
    end
    totalScore = totalScore:getFarmId()
    for v7, v8 in pairs(g_farmlandManager.farmlandMapping) do
      if not (v8 == totalScore) then
        continue
      end
      if not (g_fieldManager.farmlandIdFieldMapping[v7] == nil) then
        continue
      end
      v9 = v9:getFarmlandById(v7)
      if not (v9.totalFieldArea ~= nil) then
        continue
      end
      if not (0.01 < v9.totalFieldArea) then
        continue
      end
      if v9.xWorldPos == 0 and not (v9.zWorldPos ~= 0) then
        continue
      end
      v12, v13, v14, v15 = v12:getMapObjectPosition((v9.xWorldPos + ingameMap.worldCenterOffsetX) / ingameMap.worldSizeX * 0.5 + 0.25, (v9.zWorldPos + ingameMap.worldCenterOffsetZ) / ingameMap.worldSizeZ * 0.5 + 0.25, 0.0001, 0.0001, 0, true)
      v22 = v22:getIconZoom()
      self:drawFarmlandScore(...)
    end
  end
end
function EnvironmentalScore:onDrawFieldNumber(element, ingameMap, x, y, field)
  if field.farmland ~= nil and field.farmland.totalFieldArea ~= nil and 0.01 < field.farmland.totalFieldArea then
    local v8 = v8:getFarmId()
    if g_farmlandManager.farmlandMapping[field.farmland.id] == v8 then
      local v13 = v13:getIconZoom()
      self:drawFarmlandScore(...)
    end
  end
end
function EnvironmentalScore:drawFarmlandScore(x, y, dataKey, farmlandId, zoom)
  local v9 = math.max(zoom / 1.5 - 0.55, 0)
  local v7 = math.min(v9 / 0.05, 1)
  if v7 == 0 then
    return
  end
  if self.ui.farmlandData[dataKey] == nil then
    self.ui.farmlandData[dataKey] = {state = 0}
  end
  if self.currentInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    -- if v1 - v0.ui.fieldInfoWidth * v6 * 0.5 >= 0.5 then goto L113 end
    -- if 0.5 >= v1 - v0.ui.fieldInfoWidth * v6 * 0.5 + v0.ui.fieldInfoWidth * v6 then goto L113 end
    -- if v2 - ((v0.ui.fieldInfoHeight - v0.ui.fieldInfoHeightSmall) * v8.state + v0.ui.fieldInfoHeightSmall) * v6 - v0.ui.fieldInfoHeightOffset * v6 >= 0.5 then goto L113 end
    -- if 0.5 >= v2 - ((v0.ui.fieldInfoHeight - v0.ui.fieldInfoHeightSmall) * v8.state + v0.ui.fieldInfoHeightSmall) * v6 - v0.ui.fieldInfoHeightOffset * v6 + ((v0.ui.fieldInfoHeight - v0.ui.fieldInfoHeightSmall) * v8.state + v0.ui.fieldInfoHeightSmall) * v6 then goto L113 end
  elseif g_inputBinding.mousePosXLast ~= nil and x - self.ui.fieldInfoWidth * v6 * 0.5 < g_inputBinding.mousePosXLast and g_inputBinding.mousePosXLast < x - self.ui.fieldInfoWidth * v6 * 0.5 + self.ui.fieldInfoWidth * v6 and y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 < g_inputBinding.mousePosYLast and g_inputBinding.mousePosYLast < y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 then
  end
  if v13 then
  else
  end
  local v15 = MathUtil.sign(v14 - v8.state)
  local v16 = MathUtil.clamp(v8.state + v15 * g_currentDt / 150, 0, 1)
  v8.state = v16
  drawFilledRect(v11, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6, v9, ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6, self.ui.colorBackground[1], self.ui.colorBackground[2], self.ui.colorBackground[3], self.ui.colorBackground[4] * v7)
  score:setDimension(self.ui.iconWidth * v6, self.ui.iconHeight * v6)
  score:setColor(self.ui.colorMainUI[1], self.ui.colorMainUI[2], self.ui.colorMainUI[3], self.ui.colorMainUI[4] * v7)
  score:setPosition(v11 + v9 * 0.3 - self.ui.iconWidth * v6 * 0.5, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.topOffset * v6 - self.ui.iconHeight * v6)
  score:render()
  setTextColor(1, 1, 1, v7)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_CENTER)
  local score = self:getFarmlandScore(farmlandId)
  local v23 = string.format("%d", score)
  renderText(...)
  v21:setDimension(self.ui.scoreBarMainWidth * v6, self.ui.scoreBarMainHeight * v6)
  v21:setColor(1, 1, 1, v7)
  v21:setPosition(v11 + v9 * 0.5 - self.ui.gradientOverlay.width * 0.5, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.topOffset * v6 - self.ui.iconOverlay.height - self.ui.spacingY * v6 - self.ui.gradientOverlay.height)
  v21:render()
  v21:setDimension(self.ui.scoreBarMainIndicatorWidth * v6, self.ui.scoreBarMainIndicatorHeight * v6)
  v21:setColor(1, 1, 1, v7)
  v21:setPosition(v11 + v9 * 0.5 - self.ui.gradientOverlay.width * 0.5 - self.ui.scoreBarMainIndicatorWidth * v6 * 0.5 + self.ui.gradientOverlay.width * score / 100, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.topOffset * v6 - self.ui.iconOverlay.height - self.ui.spacingY * v6 - self.ui.gradientOverlay.height - (self.ui.scoreBarMainIndicatorHeight - self.ui.scoreBarMainHeight) * 0.5 * v6)
  v21:render()
  if v8.state == 1 then
    -- TODO: structure LOP_FORNPREP (pc 481, target 647)
    v26:setPosition(v11 + v9 * 0.5 - self.ui.scoreBarSmallWidth * v6 * 0.5, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + self.ui.spacingY * v6 + (self.ui.scoreBarSmallHeight * v6 + self.ui.scoreBarOffset * v6) * (#self.scoreValues - 1))
    v26:setDimension(self.ui.scoreBarSmallWidth * v6, self.ui.scoreBarSmallHeight * v6)
    v26:setColor(self.ui.colorBackground[1], self.ui.colorBackground[2], self.ui.colorBackground[3], self.ui.colorBackground[4] * v7)
    v26:render()
    v26:setPosition(v11 + v9 * 0.5 - self.ui.scoreBarSmallWidth * v6 * 0.5, y - ((self.ui.fieldInfoHeight - self.ui.fieldInfoHeightSmall) * v8.state + self.ui.fieldInfoHeightSmall) * v6 - self.ui.fieldInfoHeightOffset * v6 + self.ui.spacingY * v6 + (self.ui.scoreBarSmallHeight * v6 + self.ui.scoreBarOffset * v6) * (#self.scoreValues - 1))
    local v31 = v31:getScore(farmlandId)
    v26:setDimension(self.ui.scoreBarSmallWidth * v31 * v6, self.ui.scoreBarSmallHeight * v6)
    v26:setColor(self.ui.colorMainUI[1], self.ui.colorMainUI[2], self.ui.colorMainUI[3], self.ui.colorMainUI[4] * v7)
    v26:render()
    -- TODO: structure LOP_FORNLOOP (pc 646, target 482)
  end
end
function EnvironmentalScore:onPeriodChanged(currentPeriod)
  for zoom, v6 in pairs(self.harvestedStates) do
    if v6 == 2 then
      self.harvestedStates[zoom] = 0
      self:onHarvestScoreReset(zoom)
    end
    if not (v6 == 1) then
      continue
    end
    self.harvestedStates[zoom] = 2
  end
end
function EnvironmentalScore:overwriteGameFunctions(pfModule)
  for zoom, v6 in pairs(self.scoreObjects) do
    v6:overwriteGameFunctions(pfModule)
  end
  pfModule:overwriteGameFunction(CoverMap, "updateCoverArea", function(self, pfModule, y, dataKey, farmlandId, zoom, v6, v7, v8, v9)
    local v10, v11 = self(pfModule, y, dataKey, farmlandId, zoom, v6, v7, v8, v9)
    local v12 = v12:getFarmlandIdAtWorldPosition(dataKey, farmlandId)
    if v12 ~= nil then
      u0.harvestedStates[v12] = 1
    end
    return v10, v11
  end)
  pfModule:overwriteGameFunction(SellingStation, "sellFillType", function(self, pfModule, y, dataKey, farmlandId, zoom, v6)
    local v7 = self(pfModule, y, dataKey, farmlandId, zoom, v6)
    local v9 = v9:getSellPriceFactor(y)
    if v7 * v9 ~= 0 then
      if u0.farmRevenueIncrease[y] == nil then
        u0.farmRevenueIncrease[y] = {revenue = 0, lastSellTime = g_time}
      end
      u0.farmRevenueIncrease[y].revenue = u0.farmRevenueIncrease[y].revenue + v8
      u0.farmRevenueIncrease[y].lastSellTime = g_time
      if v8 < 0 then
        -- if u0.moneyChangeTypeNeg then goto L69 end
      end
      v9:addMoney(v11, v12, u0.moneyChangeTypePos, true)
      u0.farmRevenueIncreaseMessageDirty = true
    end
    return v7
  end)
end
