-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStatistics = {MOD_NAME = g_currentModName}
local FarmlandStatistics_mt = Class(FarmlandStatistics)
function FarmlandStatistics.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.statistics = {}
  v2.statisticsByFarmland = {}
  v2.mapFrame = nil
  v2.selectedFarmlandId = nil
  v2.showTotal = false
  v2.updateValuesTimer = 0
  v2.updateValuesInterval = 1000
  v2.updateValuesIntervalMultiplayer = 5000
  v2.pfModule = pfModule
  local v3 = v3:getInputHelpMode()
  v2.lastInputHelpMode = v3
  return v2
end
function FarmlandStatistics.loadFromXML(v0, v1, v2, v3, v4, v5)
  v6:addStateChangeListener(v0)
  return true
end
function FarmlandStatistics:loadFromItemsXML(xmlFile, key)
  -- TODO: structure LOP_FORNPREP (pc 8, target 29)
  local v7 = string.format("%s.farmlandStatistic(%d)", key .. ".farmlandStatistics", 1 - 1)
  local v8 = xmlFile:hasProperty(v7)
  if v8 then
    self.statistics[1]:loadFromItemsXML(xmlFile, v7)
    -- TODO: structure LOP_FORNLOOP (pc 28, target 9)
  end
end
function FarmlandStatistics:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 8, target 25)
  local v8 = string.format("%s.farmlandStatistic(%d)", key .. ".farmlandStatistics", 1 - 1)
  self.statistics[1]:saveToXMLFile(xmlFile, v8, usedModNames)
  -- TODO: structure LOP_FORNLOOP (pc 24, target 9)
end
function FarmlandStatistics:delete()
  v1:removeStateChangeListener(self)
  self.statistics = {}
  self.statisticsByFarmland = {}
  self.selectedFarmlandId = nil
  self.showTotal = false
end
function FarmlandStatistics:update(dt)
  if self.selectedFarmlandId ~= nil then
    if g_server ~= nil then
      -- if v0.updateValuesInterval then goto L13 end
    end
    self.updateValuesTimer = self.updateValuesTimer + dt
    if self.updateValuesIntervalMultiplayer < self.updateValuesTimer then
      if self.statisticsByFarmland[self.selectedFarmlandId] ~= nil then
        if g_server ~= nil then
          -- if not v0.statisticsByFarmland[v0.selectedFarmlandId].hasChanged then goto L66 end
          self:openStatistics(self.selectedFarmlandId)
          self.statisticsByFarmland[self.selectedFarmlandId].hasChanged = false
        elseif g_server == nil and g_client ~= nil then
          local v4 = v4:getServerConnection()
          local v6 = RequestFarmlandStatisticsEvent.new(self.selectedFarmlandId)
          v4:sendEvent(...)
        end
      end
      self.updateValuesTimer = 0
    end
    local v3 = v3:getInputHelpMode()
    if v3 ~= self.lastInputHelpMode then
      self.lastInputHelpMode = v3
      self:updateButtonIcons()
    end
  end
end
function FarmlandStatistics:readStatisticFromStream(farmlandId, streamId, connection)
  local v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadFloat32(streamId)
    if g_farmlandManager.farmlands[farmlandId] ~= nil then
      g_farmlandManager.farmlands[farmlandId].totalFieldArea = v4
    end
  end
  if self.statisticsByFarmland[farmlandId] ~= nil then
    self.statisticsByFarmland[farmlandId]:onReadStream(streamId, connection)
  end
  self.selectedFarmlandId = farmlandId
  self:openStatistics(farmlandId, true)
  v5:updatePrecisionFarmingOverlays()
end
function FarmlandStatistics:writeStatisticToStream(farmlandId, streamId, connection)
  if g_farmlandManager.farmlands[farmlandId] == nil then
  end
  local v5 = v5(v6, true)
  if v5 then
    streamWriteFloat32(streamId, v4.totalFieldArea or 0)
  end
  if self.statisticsByFarmland[farmlandId] ~= nil then
    self.statisticsByFarmland[farmlandId]:onWriteStream(streamId, connection)
  end
end
function FarmlandStatistics:setMapFrame(mapFrame)
  self.mapFrame = mapFrame
  v2:setVisible(false)
  self:updateButtonIcons()
end
function FarmlandStatistics:updateButtonIcons()
  PrecisionFarmingGUI.updateButtonOnInputHelpChange(self.mapFrame.buttonSwitchValues, "ingameMenuPrecisionFarmingStatsSwitchButtonConsole", "ingameMenuPrecisionFarmingStatsSwitchButton")
  PrecisionFarmingGUI.updateButtonOnInputHelpChange(self.mapFrame.buttonResetStats, "ingameMenuPrecisionFarmingStatsResetButtonConsole", "ingameMenuPrecisionFarmingStatsResetButton")
  if self.mapFrame.buttonSwitchValues.inputActionName == nil then
    if self.showTotal then
      -- if FarmlandStatistics.UV.TOTAL then goto L42 end
    end
    local v5 = GuiUtils.getUVs(FarmlandStatistics.UV.PERIOD)
    v2:setImageUVs(...)
  end
end
function FarmlandStatistics:onClickButtonResetStats()
  if self.selectedFarmlandId ~= nil then
    self:resetStatistic(self.selectedFarmlandId, false)
    if g_server == nil and g_client ~= nil then
      local dt = dt:getServerConnection()
      local v3 = FarmlandStatisticsResetEvent.new(self.selectedFarmlandId)
      dt:sendEvent(...)
    end
    self:openStatistics(self.selectedFarmlandId)
  end
end
function FarmlandStatistics:onClickButtonSwitchValues()
  self.showTotal = not self.showTotal
  if self.selectedFarmlandId ~= nil then
    self:openStatistics(self.selectedFarmlandId)
  end
  if self.mapFrame ~= nil then
    dt:setDisabled(self.showTotal)
  end
end
function FarmlandStatistics:onClickMapFarmland(farmlandId)
  if farmlandId == self.selectedFarmlandId then
    self.selectedFarmlandId = nil
    self:closeStatistics()
    v2:onFarmlandSelectionChanged(nil, nil)
    return
  end
  local v2 = v2:getFarmlandOwner(farmlandId)
  if v2 ~= FarmlandManager.NO_OWNER_FARM_ID then
    local v3 = v3:getFarmId()
    if v2 == v3 then
      self.selectedFarmlandId = farmlandId
      self.updateValuesTimer = 0
      self:openStatistics(farmlandId)
      v3:updatePrecisionFarmingOverlays()
    end
  end
end
function FarmlandStatistics:onMenuCancel()
  if self.selectedFarmlandId ~= nil then
    self:onClickMapFarmland(self.selectedFarmlandId)
    return true
  end
  return false
end
function FarmlandStatistics:onMenuActivate()
  if self.selectedFarmlandId ~= nil then
    self:onClickButtonSwitchValues()
    return true
  end
  return false
end
function FarmlandStatistics:onClickSwitchMapMode()
  if self.selectedFarmlandId ~= nil and not self.showTotal then
    self:onClickButtonResetStats()
    return true
  end
  return false
end
function FarmlandStatistics:getSelectedFarmland()
  if self.selectedFarmlandId ~= nil then
    return self.selectedFarmlandId
  end
end
function FarmlandStatistics:openStatistics(farmlandId, noEventSend)
  if self.statisticsByFarmland[farmlandId] ~= nil then
    local v5, v6 = self:getFarmlandFieldInfo(farmlandId)
    if 0.01 <= v6 then
      self:updateButtonIcons()
      v7:setVisible(true)
      v7:setVisible(false)
      v7:setVisible(false)
      self.mapFrame:resetUIDeadzones()
      if v5 ~= 0 then
        local v9 = v9:getText("ui_economicAnalysisHeaderField")
        local v8 = string.format(v9, v5, v6)
      else
        v9 = v9:getText("ui_economicAnalysisHeaderAdditionalField")
        v8 = string.format(v9, v6)
      end
      v8:setText(v7)
      if self.showTotal then
      else
      end
      local v10 = v10:getText(v12)
      v8:setText(...)
      if self.showTotal then
      else
      end
      v10 = v10:getText(v12)
      v8:setText(...)
      local v27 = v4:getValue(self.showTotal, "soilSampleCosts")
      local v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(...)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 2, self.showTotal, "usedLime", "usedLimeRegular", FillType.LIME, true, true, true, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 3, self.showTotal, "usedMineralFertilizer", "usedMineralFertilizerRegular", FillType.FERTILIZER, true, true, true, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 4, self.showTotal, "usedLiquidFertilizer", "usedLiquidFertilizerRegular", FillType.LIQUIDFERTILIZER, false, true, true, false)
      function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 5, self.showTotal, "usedManure", "usedManureRegular", FillType.MANURE, true, true, false, false)
      function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 6, self.showTotal, "usedLiquidManure", "usedLiquidManureRegular", FillType.LIQUIDMANURE, false, true, false, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 7, self.showTotal, "usedSeeds", "usedSeedsRegular", FillType.SEEDS, true, true, true, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 8, self.showTotal, "usedHerbicide", "usedHerbicideRegular", FillType.HERBICIDE, false, true, true, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 9, self.showTotal, "usedFuel", nil, FillType.DIESEL, false, true, true, true)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 10, self.showTotal, "vehicleCosts", nil, 0, false, false, true, false)
      v14, v15 = function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 11, self.showTotal, "helperCosts", nil, 0, false, false, true, false)
      v14 = v4:getValue(self.showTotal, "yieldWeight")
      v15 = v4:getValue(self.showTotal, "yieldBestPrice")
      function(self, farmlandId, noEventSend, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        if v11 == nil then
        else
          local v15 = v11:len()
          if 0 < v15 then
          end
        end
        v15 = farmlandId:getValue(v3, v4)
        if v5 ~= nil then
          local v17 = type(v5)
          if v17 == "string" then
            v17 = farmlandId:getValue(v3, v5)
          else
            v17 = type(v5)
            if v17 == "number" then
            end
          end
        end
        if not v12 then
          v17 = v17:getFillLevelPrice(v15, v6)
        end
        if not v13 then
          v17 = v17:getFillLevelWeight(v15, v6)
        end
        if v8 then
          if v10 then
          else
            local v18 = MathUtil.round(v15)
          end
          if v7 then
          end
          local v20 = string.format(v17, v15, v13)
          v18:setText(...)
        else
          v17:setText("")
        end
        if v9 ~= nil then
          -- if not v9 then goto L115 end
        end
        local v19 = v19:formatMoney(v12)
        v17:setText(...)
        -- goto L122  (LOP_JUMP +7)
        v17:setText("")
        v17 = u1(self.statPercentageText[noEventSend], v15, v16, v12, v14)
        if v9 == false then
        end
        v19 = math.floor(v12)
        v18 = math.max(...)
        v20 = math.floor(v12 * (-v17 * 0.01 + 1))
        v19 = math.max(v20, 0)
        return v18
      end(v3, v4, 12, self.showTotal, "yield", "yieldRegular", 0, true, true, true, false, nil, v15, v14, true)
      local v17 = v4:getValue(self.showTotal, "yield")
      local v19 = v4:getValue(self.showTotal, "yieldRegular")
      local v18 = math.max(v19, 0.01)
      v19 = math.max(v17 / v18, 0.01)
      local v23 = math.abs(0 + v15 + v15 + v15 + v15 + v15 + v15 + v15 + v15 + v15 - 0 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14)
      function(self, farmlandId, noEventSend, v3, v4)
        if farmlandId ~= noEventSend then
          if noEventSend ~= 0 then
            local v8 = math.floor(-100 * (1 - farmlandId / noEventSend))
            -- cmp-jump LOP_JUMPXEQKN R5 aux=0x1 -> L60
            if v8 <= 0 then
            else
            end
            local v9 = string.format(v8, v5)
            if 0 >= v5 then
            end
          else
            v8 = math.floor(v3 or 0)
            if 0 < v8 then
              local v10 = v10:formatMoney(v3)
              v8 = string.format(...)
            else
            end
          end
          if v4 == true then
          end
          if v6 then
          else
          end
          self:applyProfile(v10, true)
          self:setText(v7)
          self:applyScreenAlignment()
          return v5
        end
        self:setText("")
        return v5
      end(v3.statTotalCostPercentageText, 0 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14, 0, v23, false)
      function(self, farmlandId, noEventSend, v3, v4)
        if farmlandId ~= noEventSend then
          if noEventSend ~= 0 then
            local v8 = math.floor(-100 * (1 - farmlandId / noEventSend))
            -- cmp-jump LOP_JUMPXEQKN R5 aux=0x1 -> L60
            if v8 <= 0 then
            else
            end
            local v9 = string.format(v8, v5)
            if 0 >= v5 then
            end
          else
            v8 = math.floor(v3 or 0)
            if 0 < v8 then
              local v10 = v10:formatMoney(v3)
              v8 = string.format(...)
            else
            end
          end
          if v4 == true then
          end
          if v6 then
          else
          end
          self:applyProfile(v10, true)
          self:setText(v7)
          self:applyScreenAlignment()
          return v5
        end
        self:setText("")
        return v5
      end(v3.statTotalEarningsPercentageText, v15, 0, v15 - v15 / v19, true)
      function(self, farmlandId, noEventSend, v3, v4)
        if farmlandId ~= noEventSend then
          if noEventSend ~= 0 then
            local v8 = math.floor(-100 * (1 - farmlandId / noEventSend))
            -- cmp-jump LOP_JUMPXEQKN R5 aux=0x1 -> L60
            if v8 <= 0 then
            else
            end
            local v9 = string.format(v8, v5)
            if 0 >= v5 then
            end
          else
            v8 = math.floor(v3 or 0)
            if 0 < v8 then
              local v10 = v10:formatMoney(v3)
              v8 = string.format(...)
            else
            end
          end
          if v4 == true then
          end
          if v6 then
          else
          end
          self:applyProfile(v10, true)
          self:setText(v7)
          self:applyScreenAlignment()
          return v5
        end
        self:setText("")
        return v5
      end(v3.statTotalPercentageText, v15, 0, 0 + v15 + v15 + v15 + v15 + v15 + v15 + v15 + v15 + v15 - 0 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 - v15 - v15 / v19, false)
      local v22 = v22:formatMoney(0 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14)
      v20:setText(...)
      v22 = v22:formatMoney(v15)
      v20:setText(...)
      v22 = v22:formatMoney(v15 - 0 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14 + v14)
      v20:setText(...)
    else
      self.selectedFarmlandId = nil
      self:closeStatistics()
    end
    v7:onFarmlandSelectionChanged(farmlandId, v5, v6)
  end
  if not noEventSend and g_server == nil and g_client ~= nil then
    v5 = v5:getServerConnection()
    local v7 = RequestFarmlandStatisticsEvent.new(farmlandId)
    v5:sendEvent(...)
  end
end
function FarmlandStatistics:buildOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 0.3)
  resetDensityMapVisualizationOverlay(overlay)
  if self.selectedFarmlandId ~= nil then
    local v2, v3 = self:getFarmlandFieldInfo(self.selectedFarmlandId)
    if 0 < v3 then
      local v4 = v4:getLocalMap()
      local v11 = getBitVectorMapNumChannels(v4)
      local v13 = unpack(MapOverlayGenerator.COLOR.FIELD_SELECTED)
      setDensityMapVisualizationOverlayStateColor(...)
    end
  end
end
function FarmlandStatistics:getFarmlandFieldInfo(farmlandId)
  return v2:getFarmlandFieldInfo(farmlandId)
end
function FarmlandStatistics:closeStatistics()
  v2:setVisible(false)
  v2:setVisible(true)
  v2:setVisible(true)
  self.mapFrame:resetUIDeadzones()
  v2:updatePrecisionFarmingOverlays()
end
function FarmlandStatistics:updateStatistic(farmlandId, name, value)
  if self.statisticsByFarmland[farmlandId] ~= nil then
    self.statisticsByFarmland[farmlandId]:updateStatistic(name, value)
  end
end
function FarmlandStatistics:resetStatistic(farmlandId, reloadValues, clearTotal)
  if self.statisticsByFarmland[farmlandId] ~= nil then
    self.statisticsByFarmland[farmlandId]:reset(clearTotal)
  end
  if reloadValues and self.selectedFarmlandId ~= nil then
    self:openStatistics(self.selectedFarmlandId)
  end
end
function FarmlandStatistics.getFillLevelWeight(v0, dt, v2)
  local v3 = v3:getFillTypeByIndex(v2)
  if v3 ~= nil then
    return dt * v3.massPerLiter / FillTypeManager.MASS_SCALE
  end
  return dt
end
function FarmlandStatistics:getFillLevelPrice(fillLevel, fillTypeIndex)
  if fillTypeIndex == "soilSamples" then
    return fillLevel * (self.pfModule.soilMap.pricePerSample[g_currentMission.missionInfo.economicDifficulty] or 0)
  end
  local v3 = v3:getFillTypeByIndex(fillTypeIndex)
  if v3 ~= nil then
    return fillLevel * v3.pricePerLiter
  end
  return fillLevel
end
function FarmlandStatistics:onFarmlandStateChanged(farmlandId, farmId)
  if farmId == FarmlandManager.NO_OWNER_FARM_ID then
    self:resetStatistic(farmlandId, nil, true)
  end
end
function FarmlandStatistics.overwriteGameFunctions(v0, dt)
  dt:overwriteGameFunction(FarmlandManager, "loadFarmlandData", function(v0, dt, v2)
    local v3 = v0(dt, v2)
    if not v3 then
      return false
    end
    v3 = v3:getFarmlands()
    if v3 ~= nil then
      for v7, v8 in pairs(v3) do
        local v9 = FarmlandStatistic.new(v7)
        u0.statisticsByFarmland[v7] = v9
        table.insert(u0.statistics, v9)
      end
    end
    return true
  end)
end
FarmlandStatistics.UV = {TOTAL = {128, 64, 64, 64}, PERIOD = {256, 64, 64, 64}}
