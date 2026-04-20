-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

YieldMap = {MOD_NAME = g_currentModName}
local YieldMap_mt = Class(YieldMap, ValueMap)
function YieldMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.filename = "precisionFarming_yieldMap.grle"
  v2.name = "yieldMap"
  v2.id = "YIELD_MAP"
  v2.label = "ui_mapOverviewYield"
  v2.densityMapModifiersYield = {}
  v2.densityMapModifiersReset = {}
  local v4 = GuiUtils.getUVs({194, 27, 252, 12})
  v2.minimapGradientUVs = {}
  v4 = GuiUtils.getUVs({194, 43, 252, 12})
  v2.minimapGradientColorBlindUVs = {}
  local v3 = v3:getText("ui_mapOverviewYield", YieldMap.MOD_NAME)
  v2.minimapLabelName = v3
  v2.yieldMapSelected = false
  v2.selectedFarmland = nil
  v2.selectedField = nil
  v2.selectedFieldArea = nil
  return v2
end
function YieldMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.densityMapModifiersYield = {}
  self.densityMapModifiersReset = {}
  self.yieldMapSelected = false
  self.selectedFarmland = nil
  self.selectedField = nil
  self.selectedFieldArea = nil
end
function YieldMap.delete(v0)
  v1:removeStateChangeListener(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function YieldMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLInt(xmlFile, key .. ".yieldMap" .. ".bitVectorMap#numChannels")
  self.numChannels = v7 or 4
  self.maxValue = 2 ^ self.numChannels - 1
  v7 = getXMLInt(xmlFile, key .. ".yieldMap" .. ".bitVectorMap#sizeX")
  self.sizeX = v7 or 1024
  v7 = getXMLInt(xmlFile, key .. ".yieldMap" .. ".bitVectorMap#sizeY")
  self.sizeY = v7 or 1024
  local v6 = self:loadSavedBitVectorMap("YieldMap", self.filename, self.numChannels, self.sizeX)
  self.bitVectorMap = v6
  self:addBitVectorMapToSync(self.bitVectorMap)
  self:addBitVectorMapToSave(self.bitVectorMap, self.filename)
  self:addBitVectorMapToDelete(self.bitVectorMap)
  self.yieldValues = {}
  while true do
    v7 = string.format("%s.yieldValues.yieldValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v10 = getXMLInt(xmlFile, v7 .. "#value")
    v10 = getXMLInt(xmlFile, v7 .. "#displayValue")
    v10 = getXMLString(xmlFile, v7 .. "#color")
    v9 = string.getVectorN(v10, 3)
    v10 = getXMLString(xmlFile, v7 .. "#colorBlind")
    v9 = string.getVectorN(v10, 3)
    if {value = v10 or 0, displayValue = v10 or 100, color = v9, colorBlind = v9}.color ~= nil and {value = v10 or 0, displayValue = v10 or 100, color = v9, colorBlind = v9}.colorBlind == nil then
    end
    v8.showInMenu = v9
    table.insert(self.yieldValues, v8)
  end
  -- TODO: structure LOP_FORNPREP (pc 163, target 281)
  if self.yieldValues[1].color == nil and 1 < 1 then
    if self.yieldValues[1 - 1].color ~= nil and self.yieldValues[1 + 1].color ~= nil then
      self.yieldValues[1].color = {[1] = (self.yieldValues[1 - 1].color[1] + self.yieldValues[1 + 1].color[1]) * 0.5, [2] = (self.yieldValues[1 - 1].color[2] + self.yieldValues[1 + 1].color[2]) * 0.5, [3] = (self.yieldValues[1 - 1].color[3] + self.yieldValues[1 + 1].color[3]) * 0.5}
    end
    if self.yieldValues[v9 - 1].colorBlind ~= nil and self.yieldValues[v9 + 1].colorBlind ~= nil then
      self.yieldValues[v9].colorBlind = {[1] = (self.yieldValues[v9 - 1].colorBlind[1] + self.yieldValues[v9 + 1].colorBlind[1]) * 0.5, [2] = (self.yieldValues[v9 - 1].colorBlind[2] + self.yieldValues[v9 + 1].colorBlind[2]) * 0.5, [3] = (self.yieldValues[v9 - 1].colorBlind[3] + self.yieldValues[v9 + 1].colorBlind[3]) * 0.5}
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 280, target 164)
  v9 = self:getMinMaxValue()
  v7 = string.format(...)
  self.minimapGradientLabelName = v7
  self.sharedSoilStateMap = self.pfModule.sharedSoilStateMap
  v7:addStateChangeListener(self)
  return true
end
function YieldMap.update(v0, v1)
end
function YieldMap:setAreaYield(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, yieldPercentage)
  if self.densityMapModifiersYield.modifier ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L55
  end
  local v11 = DensityMapModifier.new(self.bitVectorMap, 0, self.numChannels)
  self.densityMapModifiersYield.modifier = v11
  local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v15 = DensityMapFilter.new(v11, v12, v13)
  self.densityMapModifiersYield.maskFilter = v15
  self.densityMapModifiersYield.maskFilter:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  local v10, v11, v12, v13, v14, v15 = u0(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, self.sizeX, g_currentMission.terrainSize)
  self.densityMapModifiersYield.modifier:setParallelogramDensityMapCoords(v10, v11, v12, v13, v14, v15, DensityCoordType.POINT_POINT_POINT)
  v10 = self:getNearestInternalYieldValueFromValue(yieldPercentage / 2 * 100)
  self.densityMapModifiersYield.modifier:executeSet(v10, self.densityMapModifiersYield.maskFilter)
  self:setMinimapRequiresUpdate(true)
end
function YieldMap:getNearestInternalYieldValueFromValue(value)
  if 0 < value then
    -- TODO: structure LOP_FORNPREP (pc 10, target 30)
    local v8 = math.abs(value - self.yieldValues[1].displayValue)
    if v8 < 10000 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 29, target 11)
  end
  return v3
end
function YieldMap:resetFarmlandYieldArea(farmlandId)
  if self.densityMapModifiersReset.modifier ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L46
  end
  local v6 = DensityMapModifier.new(self.bitVectorMap, 0, self.numChannels)
  self.densityMapModifiersReset.modifier = v6
  v6 = DensityMapFilter.new(v4.localMap, 0, v4.numberOfBits)
  self.densityMapModifiersReset.farmlandMask = v6
  self.densityMapModifiersReset.farmlandMask:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
  self.densityMapModifiersReset.modifier:executeSet(0, self.densityMapModifiersReset.farmlandMask)
  self:setMinimapRequiresUpdate(true)
  if g_server == nil and g_client ~= nil then
    local v5 = v5:getServerConnection()
    local v7 = ResetYieldMapEvent.new(farmlandId)
    v5:sendEvent(...)
  end
end
function YieldMap:buildOverlay(overlay, yieldFilter, isColorBlindMode)
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 1)
  -- TODO: structure LOP_FORNPREP (pc 20, target 69)
  if yieldFilter[1] then
    if isColorBlindMode then
    else
    end
    setDensityMapVisualizationOverlayStateColor(overlay, v4, 0, 0, 0, self.numChannels, v9.value, v10, v11, v12)
  end
  if v9.showInMenu then
  end
  -- TODO: structure LOP_FORNLOOP (pc 68, target 21)
end
function YieldMap.getMinimapZoomFactor(v0)
  return 3
end
function YieldMap:getMinMaxValue()
  if 0 < #self.yieldValues then
    return self.yieldValues[1].displayValue, self.yieldValues[#self.yieldValues].displayValue, #self.yieldValues
  end
  return 0, 1, 0
end
function YieldMap:getDisplayValues()
  if self.valuesToDisplay == nil then
    self.valuesToDisplay = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 79)
    if self.yieldValues[1].showInMenu then
      if not self.yieldValues[1].colorBlind then
      end
      v7[v8] = {v10}
      v6.colors[false] = {v5.color}
      local v7 = string.format("%d%%", v5.displayValue)
      v6.description = v7
      table.insert(self.valuesToDisplay, v6)
    end
    -- TODO: structure LOP_FORNLOOP (pc 78, target 14)
  end
  return self.valuesToDisplay
end
function YieldMap:getValueFilter()
  if self.valueFilter == nil then
    self.valueFilter = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 29)
    if self.yieldValues[1].showInMenu then
      table.insert(self.valueFilter, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 28, target 14)
  end
  return self.valueFilter
end
function YieldMap:onValueMapSelectionChanged(valueMap)
  if valueMap ~= self then
  end
  self.yieldMapSelected = true
  self:updateResetButton()
end
function YieldMap:onFarmlandSelectionChanged(farmlandId, fieldNumber, fieldArea)
  self.selectedFarmland = farmlandId
  self.selectedField = fieldNumber
  self.selectedFieldArea = fieldArea
  self:updateResetButton()
end
function YieldMap:onFarmlandStateChanged(farmlandId, farmId)
  if farmId == FarmlandManager.NO_OWNER_FARM_ID then
    self:resetFarmlandYieldArea(farmlandId)
  end
end
function YieldMap:setMapFrame(mapFrame)
  self.mapFrame = mapFrame
  self:updateResetButton()
end
function YieldMap:getIsResetButtonActive()
  if self.selectedFarmland ~= nil and self.selectedFieldArea ~= nil and 0 < self.selectedFieldArea then
  end
  return v1
end
function YieldMap:updateResetButton()
  v1:updateAdditionalFunctionButton()
end
function YieldMap:onClickButtonResetYield()
  local v1 = self:getIsResetButtonActive()
  if v1 and g_precisionFarming.farmlandStatistics ~= nil and g_precisionFarming.farmlandStatistics.selectedFarmlandId ~= nil then
    self:resetFarmlandYieldArea(g_precisionFarming.farmlandStatistics.selectedFarmlandId)
    v2:updatePrecisionFarmingOverlays()
    return true
  end
  return false
end
function YieldMap.getHelpLinePage(v0)
  return 6
end
function YieldMap:getRequiresAdditionalActionButton(farmlandId)
  return self:getIsResetButtonActive()
end
function YieldMap:getAdditionalActionButtonText()
  if self.selectedField ~= nil and self.selectedField ~= 0 then
    local v3 = v3:getText("ui_resetYield", YieldMap.MOD_NAME)
    return string.format(v3, self.selectedField)
  end
  v2 = v2:getText("ui_resetYieldAdditionalField", YieldMap.MOD_NAME)
  return v2
end
function YieldMap:onAdditionalActionButtonPressed()
  local v1 = self:getIsResetButtonActive()
  if v1 and g_precisionFarming.farmlandStatistics ~= nil and g_precisionFarming.farmlandStatistics.selectedFarmlandId ~= nil then
    self:resetFarmlandYieldArea(g_precisionFarming.farmlandStatistics.selectedFarmlandId)
    v2:updatePrecisionFarmingOverlays()
    return true
  end
end
