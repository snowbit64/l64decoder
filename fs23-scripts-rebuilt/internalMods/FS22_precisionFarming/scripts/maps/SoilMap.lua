-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoilMap = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = g_currentModDirectory .. "gui/ui_elements.png", SAMPLING_RADIUS = 35, SAMPLING_PROVIDER_MULTIPLIER = 1.75}
source(g_currentModDirectory .. "scripts/gui/SoilSampleYesNoDialog.lua")
local SoilMap_mt = Class(SoilMap, ValueMap)
function SoilMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.filename = "precisionFarming_soilMap.grle"
  v2.name = "soilMap"
  v2.id = "SOIL_MAP"
  v2.label = "ui_mapOverviewSoilType"
  v2.pendingSoilSamplesPerFarm = {}
  local v3 = MoneyType.register("other", "info_samplesAnalysed", SoilMap.MOD_NAME)
  v2.moneyChangeType = v3
  v2.densityMapModifiersUncover = {}
  v2.densityMapModifiersSellFarmland = {}
  v2.densityMapModifiersFieldInfo = {}
  v2.mapFrame = nil
  local v3, v4 = getNormalizedScreenValues(85, 85)
  local v5 = Overlay.new(SoilMap.GUI_ELEMENTS, 0, 0, v3, v4)
  local v8 = GuiUtils.getUVs({3, 67, 122, 122})
  v5:setUVs(...)
  v5:setColor(0.1, 0.5, 0.1, 0.5)
  local v6 = HUDElement.new(v5)
  v2.samplingCircleElement = v6
  v2.minimapSamplingState = false
  v2.minimapUpdateTimer = 0
  v6 = v6:getText("ui_mapOverviewSoilType", SoilMap.MOD_NAME)
  v2.minimapLabelName = v6
  return v2
end
function SoilMap:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  self.pendingSoilSamplesPerFarm = {}
  self.densityMapModifiersUncover = {}
  self.densityMapModifiersSellFarmland = {}
  self.densityMapModifiersFieldInfo = {}
  self.loadFilename = nil
  self.coverMap = self.pfModule.coverMap
  local soilSampleYesNoDialog = SoilSampleYesNoDialog.new()
  v2:loadGui(SoilMap.MOD_DIR .. "gui/SoilSampleYesNoDialog.xml", "SoilSampleYesNoDialog", soilSampleYesNoDialog)
end
function SoilMap:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  if g_currentMission.missionInfo.savegameDirectory ~= nil then
  end
  if v7 ~= nil then
    local v8 = fileExists(v7)
    -- if not v8 then goto L26 end
    self.loadFilename = v7
  else
    v8 = Utils.getFilename(v6.mapXMLFilename, g_currentMission.baseDirectory)
    local v9 = loadXMLFile("MapXML", v8)
    self.mapXMLFile = v9
    if self.mapXMLFile ~= nil then
      v9 = getXMLString(self.mapXMLFile, "map.precisionFarming.soilMap#filename")
      if v9 ~= nil then
        local v10 = Utils.getFilename(v9, g_currentMission.baseDirectory)
        v10 = fileExists(v10)
        if v10 then
          self.loadFilename = v10
        end
      end
      delete(self.mapXMLFile)
    end
    while true do
      v10 = string.format("%s.predefinedMaps.predefinedMap(%d)", key, v9)
      v11 = hasXMLProperty(xmlFile, v10)
      if not v11 then
        break
      end
      v11 = getXMLString(xmlFile, v10 .. "#filename")
      if v11 ~= nil then
        v12 = Utils.getFilename(v11, baseDirectory)
        v12 = fileExists(v12)
        if v12 then
          v12 = getXMLBool(xmlFile, v10 .. "#isDefault")
          if v12 ~= nil and v12 and self.loadFilename == nil then
            self.loadFilename = v12
          end
          v13 = getXMLString(xmlFile, v10 .. "#mapIdentifier")
          -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L155
          v14 = mapFilename:find(v13)
          -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L155
          -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L155
          self.loadFilename = v11
          -- goto L155  (LOP_JUMP +13)
        end
        Logging.xmlWarning(configFileName, "Soil map '%s' could not be found", key)
      else
        Logging.xmlWarning(configFileName, "Unknown filename in '%s'", key)
      end
    end
  end
  v9 = getXMLInt(xmlFile, key .. ".bitVectorMap#numChannels")
  self.numChannels = v9 or 3
  v8 = createBitVectorMap("SoilMap")
  self.bitVectorMap = v8
  if self.loadFilename ~= nil then
    v8 = loadBitVectorMapFromFile(self.bitVectorMap, self.loadFilename, self.numChannels)
    if not v8 then
      Logging.xmlWarning(configFileName, "Error while loading soil map '%s'", self.loadFilename)
      self.loadFilename = nil
    else
      v8, v9 = getBitVectorMapSize(self.bitVectorMap)
      if v8 ~= 1024 then
        self.loadFilename = nil
        Logging.xmlWarning(configFileName, "Found soil map with wrong size '%s'. Soil map needs to be 1024x1024!", self.loadFilename)
      else
        Logging.info("Load soil map '%s'", self.loadFilename)
      end
    end
  end
  if self.loadFilename == nil then
    loadBitVectorMapNew(self.bitVectorMap, 1024, 1024, self.numChannels, false)
  end
  self:addBitVectorMapToSync(self.bitVectorMap)
  self:addBitVectorMapToSave(self.bitVectorMap, self.filename)
  self:addBitVectorMapToDelete(self.bitVectorMap)
  v8, v9 = getBitVectorMapSize(self.bitVectorMap)
  self.sizeX = v8
  self.sizeY = v9
  v9 = getXMLInt(xmlFile, key .. ".bitVectorMap#typeFirstChannel")
  self.typeFirstChannel = v9 or 0
  v9 = getXMLInt(xmlFile, key .. ".bitVectorMap#typeNumChannels")
  self.typeNumChannels = v9 or 2
  v9 = getXMLInt(xmlFile, key .. ".bitVectorMap#coverChannel")
  self.coverChannel = v9 or 2
  v10 = getXMLString(xmlFile, key .. ".sampling#sampledColor")
  v8 = string.getVectorN(v10 or "0 0 0", 3)
  self.sampledColor = v8
  v10 = getXMLString(xmlFile, key .. ".sampling#sampledColorBlind")
  v8 = string.getVectorN(v10 or "0 0 0", 3)
  self.sampledColorBlind = v8
  v10 = getXMLString(xmlFile, key .. ".sampling#name")
  v8 = v8:convertText(v10, SoilMap.MOD_NAME)
  self.sampledText = v8
  v10 = getXMLString(xmlFile, key .. ".sampling#pricePerSample")
  v8 = string.getVectorN(v10 or "50 100 150", 3)
  self.pricePerSample = v8
  v10 = getXMLFloat(xmlFile, key .. ".sampling#analyseTimeSecPerSample")
  self.analyseTimePerSample = (v10 or 5) * 1000
  self.texts = {}
  v12 = getXMLString(xmlFile, key .. ".sampling.texts#idleText")
  v9 = v9:convertText(v12 or "$l10n_ui_laboratory_idle", SoilMap.MOD_NAME)
  self.texts.laboratoryIdle = v9
  v12 = getXMLString(xmlFile, key .. ".sampling.texts#analyseText")
  v9 = v9:convertText(v12 or "$l10n_ui_laboratory_analyse", SoilMap.MOD_NAME)
  self.texts.laboratoryAnalyse = v9
  v9 = v9:getText("fieldInfo_soil", SoilMap.MOD_NAME)
  self.texts.fieldInfoSoil = v9
  v9 = v9:getText("fieldInfo_noSoilDataFound", SoilMap.MOD_NAME)
  self.texts.fieldInfoNoData = v9
  v9 = v9:getText("ui_purchaseSoilMaps", SoilMap.MOD_NAME)
  self.texts.purchaseSoilMaps = v9
  self.soilTypes = {}
  while true do
    v9 = string.format("%s.soilTypes.soilType(%d)", key, v8)
    v10 = hasXMLProperty(xmlFile, v9)
    if not v10 then
      break
    end
    v13 = getXMLString(xmlFile, v9 .. "#name")
    v11 = v11:convertText(v13, SoilMap.MOD_NAME)
    v12 = getXMLFloat(xmlFile, v9 .. "#yieldPotential")
    v12 = getXMLString(xmlFile, v9 .. "#color")
    v11 = string.getVectorN(v12, 3)
    if not v11 then
    end
    v10.color = v11
    v12 = getXMLString(xmlFile, v9 .. "#colorBlind")
    v11 = string.getVectorN(v12, 3)
    if not v11 then
    end
    v10.colorBlind = v11
    table.insert(self.soilTypes, v10)
  end
  self.pHMap = self.pfModule.pHMap
  self.nitrogenMap = self.pfModule.nitrogenMap
  v9:addStateChangeListener(self)
  return true
end
function SoilMap:initTerrain(mission, terrainId, filename)
  local v5 = v5:superClass()
  v5.initTerrain(self, mission, terrainId, filename)
  if self.pHMap ~= nil and self.pHMap.newBitVectorMap then
    local v4 = getTimeSec()
    v5:setInitialState(self.bitVectorMap, self.typeFirstChannel, self.typeNumChannels, self.coverChannel)
    local v9 = getTimeSec()
    Logging.devInfo("Initialized pH Map in %d ms", (v9 - v4) * 1000)
  end
  if self.nitrogenMap ~= nil and self.nitrogenMap.newBitVectorMap then
    v4 = getTimeSec()
    v5:setInitialState(self.bitVectorMap, self.typeFirstChannel, self.typeNumChannels, self.coverChannel)
    v9 = getTimeSec()
    Logging.devInfo("Initialized nitrogen Map in %d ms", (v9 - v4) * 1000)
  end
end
function SoilMap:delete()
  v1:removeStateChangeListener(self)
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function SoilMap.loadFromItemsXML(v0, v1, v2)
  v1:iterate(v2 .. ".soilMap" .. "pendingSoilSamples", function(v0, v1)
    local v2 = v2:getInt(v1 .. "#farmId")
    local v3 = v3:getFloat(v1 .. "#timer", u1.analyseTimePerSample)
    local v4 = v4:getInt(v1 .. "#toAnalyse")
    local v5 = v5:getInt(v1 .. "#totalAnalysed")
    if v2 ~= nil and v4 ~= nil and v5 ~= nil then
      u1.pendingSoilSamplesPerFarm[v2] = {toAnalyse = v4, totalAnalysed = v5, timer = v3}
    end
  end)
end
function SoilMap:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in pairs(self.pendingSoilSamplesPerFarm) do
    local v10 = string.format("%s.pendingSoilSamples(%d)", key, v4)
    xmlFile:setInt(v10 .. "#farmId", v8)
    xmlFile:setFloat(v10 .. "#timer", v9.timer)
    xmlFile:setInt(v10 .. "#toAnalyse", v9.toAnalyse)
    xmlFile:setInt(v10 .. "#totalAnalysed", v9.totalAnalysed)
  end
end
function SoilMap:update(dt)
  for v5, v6 in pairs(self.pendingSoilSamplesPerFarm) do
    local v10 = v10:getEffectiveTimeScale()
    v6.timer = v6.timer - dt * v10
    if not (v6.timer <= 0) then
      continue
    end
    v6.toAnalyse = v6.toAnalyse - 1
    if v6.toAnalyse <= 0 then
      price:uncoverAnalysedArea(v5)
      local price = self:getPricePerSoilSample()
      v8:addMoney(-(price * v6.totalAnalysed), v5, self.moneyChangeType, true, true)
      self.pendingSoilSamplesPerFarm[v5] = nil
    else
      v6.timer = self.analyseTimePerSample
    end
    self:updateLaboratoryText()
  end
  if self.minimapSamplingState then
    v2:setColor(0.5, 0.5, 0.1, IngameMap.alpha)
  end
  if 0 < self.minimapUpdateTimer then
    self.minimapUpdateTimer = self.minimapUpdateTimer - dt
    if self.minimapUpdateTimer <= 0 then
      self:setMinimapRequiresUpdate(true)
    end
  end
end
function SoilMap:setMapFrame(mapFrame)
  self.mapFrame = mapFrame
  self:updateLaboratoryText()
end
function SoilMap:updateLaboratoryText()
  if self.mapFrame ~= nil then
    local v1 = v1:getFarmId()
    if self.pendingSoilSamplesPerFarm[v1] ~= nil then
      local v4 = string.format(self.texts.laboratoryAnalyse, self.pendingSoilSamplesPerFarm[v1].totalAnalysed)
      v2:setText(v4, true)
      return
    end
    v2:setText(self.texts.laboratoryIdle, true)
  end
end
function SoilMap.sendSoilSamplesByFarm(v0, v1)
  for v5, v6 in pairs(g_currentMission.vehicles) do
    local v7 = SpecializationUtil.hasSpecialization(SoilSampler, v6.specializations)
    if not v7 then
      continue
    end
    v7 = v6:getOwnerFarmId()
    if not (v7 == v1) then
      continue
    end
    v6:sendTakenSoilSamples()
  end
end
function SoilMap:analyseSoilSamples(farmId, numSamples)
  if self.pendingSoilSamplesPerFarm[farmId] == nil then
    self.pendingSoilSamplesPerFarm[farmId] = {toAnalyse = numSamples, totalAnalysed = numSamples, timer = self.analyseTimePerSample}
  else
    self.pendingSoilSamplesPerFarm[farmId].toAnalyse = self.pendingSoilSamplesPerFarm[farmId].toAnalyse + numSamples
    self.pendingSoilSamplesPerFarm[farmId].totalAnalysed = self.pendingSoilSamplesPerFarm[farmId].totalAnalysed + numSamples
    self.pendingSoilSamplesPerFarm[farmId].timer = self.analyseTimePerSample
  end
  self:updateLaboratoryText()
end
function SoilMap:onAnalyseArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, state, farmId)
  self.minimapUpdateTimer = 250
end
function SoilMap:onUncoverArea(maskFilter, farmIdFilter, farmId)
  if self.densityMapModifiersUncover.modifier == nil then
    local v6 = DensityMapModifier.new(self.bitVectorMap, self.coverChannel, 1)
    self.densityMapModifiersUncover.modifier = v6
    self.densityMapModifiersUncover.modifier:setParallelogramDensityMapCoords(0, 0, 0, self.sizeY, self.sizeX, 0, DensityCoordType.POINT_POINT_POINT)
  end
  v4:executeSet(1, maskFilter, farmIdFilter)
  v5:updatePrecisionFarmingOverlays()
  self:setMinimapRequiresUpdate(true)
end
function SoilMap:onFarmlandStateChanged(farmlandId, farmId)
  if farmId == FarmlandManager.NO_OWNER_FARM_ID then
    if self.densityMapModifiersSellFarmland.modifier ~= nil and self.densityMapModifiersSellFarmland.modifierCover ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L79
    end
    local v8 = DensityMapModifier.new(self.bitVectorMap, self.coverChannel, 1)
    self.densityMapModifiersSellFarmland.modifier = v8
    v8 = DensityMapModifier.new(self.coverMap.bitVectorMap, self.coverMap.firstChannel, self.coverMap.numChannels)
    self.densityMapModifiersSellFarmland.modifierCover = v8
    v8 = DensityMapFilter.new(v6.localMap, 0, v6.numberOfBits)
    self.densityMapModifiersSellFarmland.farmlandMask = v8
    self.densityMapModifiersSellFarmland.farmlandMask:setValueCompareParams(DensityValueCompareType.EQUAL, farmlandId)
    self.densityMapModifiersSellFarmland.modifier:executeSet(0, self.densityMapModifiersSellFarmland.farmlandMask)
    self.densityMapModifiersSellFarmland.modifierCover:executeSet(0, self.densityMapModifiersSellFarmland.farmlandMask)
    if self.pfModule.pHMap ~= nil then
      v7:setInitialState(self.bitVectorMap, self.typeFirstChannel, self.typeNumChannels, self.coverChannel, self.densityMapModifiersSellFarmland.farmlandMask)
    end
    if self.pfModule.nitrogenMap ~= nil then
      v7:setInitialState(self.bitVectorMap, self.typeFirstChannel, self.typeNumChannels, self.coverChannel, v5)
    end
    v7:updatePrecisionFarmingOverlays()
    self:setMinimapRequiresUpdate(true)
  end
end
function SoilMap:getTypeIndexAtWorldPos(x, z)
  local v3 = v3:getIsUncoveredAtBitVectorPos((x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY)
  if v3 then
    local v4 = getBitVectorMapPoint(self.bitVectorMap, (x + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeX, (z + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize * self.sizeY, self.typeFirstChannel, self.typeNumChannels)
    return v4 + 1
  end
  return 0
end
function SoilMap:buildOverlay(overlay, valueFilter, isColorBlindMode)
  resetDensityMapVisualizationOverlay(overlay)
  setOverlayColor(overlay, 1, 1, 1, 1)
  if self.coverMap ~= nil then
    if isColorBlindMode then
    end
    setDensityMapVisualizationOverlayStateColor(overlay, self.coverMap.bitVectorMap, 0, 0, self.coverMap.firstChannel, self.coverMap.numChannels, self.coverMap.sampledValue, coverMask[1], coverMask[2], coverMask[3])
  end
  local coverMask = bitShiftLeft(1, self.coverChannel)
  -- TODO: structure LOP_FORNPREP (pc 59, target 86)
  if valueFilter[1] then
    if isColorBlindMode then
    end
    setDensityMapVisualizationOverlayStateColor(overlay, v5, v5, coverMask, self.typeFirstChannel, self.typeNumChannels, v8 - 1, v10[1], v10[2], v10[3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 85, target 60)
end
function SoilMap:getDisplayValues()
  if self.valuesToDisplay == nil then
    self.valuesToDisplay = {}
    -- TODO: structure LOP_FORNPREP (pc 13, target 78)
    {colors = {}}.colors[true] = {{self.soilTypes[1].colorBlind[1], self.soilTypes[1].colorBlind[2], self.soilTypes[1].colorBlind[3]}}
    {colors = {}}.colors[false] = {{self.soilTypes[1].color[1], self.soilTypes[1].color[2], self.soilTypes[1].color[3]}}
    table.insert(self.valuesToDisplay, {colors = {}, description = self.soilTypes[1].name})
    -- TODO: structure LOP_FORNLOOP (pc 77, target 14)
    {colors = {}}.colors[true] = {{self.sampledColorBlind[1], self.sampledColorBlind[2], self.sampledColorBlind[3]}}
    {colors = {}}.colors[false] = {{self.sampledColor[1], self.sampledColor[2], self.sampledColor[3]}}
    table.insert(self.valuesToDisplay, {colors = {}, description = self.sampledText})
  end
  return self.valuesToDisplay
end
function SoilMap:getSoilTypeByIndex(soilTypeIndex)
  return self.soilTypes[soilTypeIndex]
end
function SoilMap:getYieldPotentialBySoilTypeIndex(soilTypeIndex)
  if self.soilTypes[soilTypeIndex] == nil then
    return 1
  end
  return self.soilTypes[soilTypeIndex].yieldPotential
end
function SoilMap:getValueFilter()
  if self.valueFilter ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L43
  end
  self.valueFilter = {}
  self.valueFilterEnabled = {}
  -- TODO: structure LOP_FORNPREP (pc 22, target 43)
  table.insert(self.valueFilter, true)
  if 1 > #self.soilTypes then
  end
  table.insert(v6, true)
  -- TODO: structure LOP_FORNLOOP (pc 42, target 23)
  return self.valueFilter, self.valueFilterEnabled
end
function SoilMap:getMinimapValueFilter()
  if self.minimapValueFilter == nil then
    self.minimapValueFilter = {}
    -- TODO: structure LOP_FORNPREP (pc 14, target 24)
    table.insert(self.minimapValueFilter, true)
    -- TODO: structure LOP_FORNLOOP (pc 23, target 15)
  end
  return self.minimapValueFilter, self.minimapValueFilter
end
function SoilMap:getMinimapAdditionalElement()
  return self.samplingCircleElement
end
function SoilMap.getMinimapZoomFactor(v0)
  return 3
end
function SoilMap.getMinimapUpdateTimeLimit(v0)
  return 5
end
function SoilMap:setMinimapSamplingState(state)
  self.minimapSamplingState = state
  if not state then
    v2:setColor(0.1, 0.5, 0.1, 0.5)
  end
end
function SoilMap:collectFieldInfos(fieldInfoDisplayExtension)
  fieldInfoDisplayExtension:addFieldInfo(self.texts.fieldInfoSoil, self, self.updateFieldInfoDisplay, 1)
end
function SoilMap:updateFieldInfoDisplay(fieldInfo, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if self.densityMapModifiersFieldInfo.modifier == nil then
    local v11 = DensityMapModifier.new(self.bitVectorMap, self.typeFirstChannel, self.typeNumChannels)
    self.densityMapModifiersFieldInfo.modifier = v11
    v11 = DensityMapFilter.new(self.bitVectorMap, self.coverChannel, 1)
    self.densityMapModifiersFieldInfo.maskFilter = v11
    self.densityMapModifiersFieldInfo.maskFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  end
  v8:setParallelogramDensityMapCoords(self.sizeX * (startWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (startWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (widthWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, self.sizeX * (heightWorldZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize, DensityCoordType.POINT_POINT_POINT)
  local v10, v11, v12 = v8:executeGet(v9)
  local v14 = math.floor(v10 / v11)
  if self.soilTypes[v14 + 1] ~= nil then
    return self.soilTypes[v14 + 1].name
  end
  return self.texts.fieldInfoNoData
end
function SoilMap.getHelpLinePage(v0)
  return 2
end
function SoilMap.getRequiresAdditionalActionButton(v0, v1)
  if v1 == nil then
  end
  return true
end
function SoilMap:getAdditionalActionButtonText()
  return self.texts.purchaseSoilMaps
end
function SoilMap:onAdditionalActionButtonPressed(farmlandId)
  local v2, v3 = v2:getFarmlandFieldInfo(farmlandId)
  if 0 < v3 then
    local v4 = v4:showDialog("SoilSampleYesNoDialog")
    if v4 ~= nil then
      local v7 = self:getNumSoilSamplesPerHa()
      local v5 = math.ceil(v7 * v3)
      v7:setData(v2, v3, v5, (self.pricePerSample[g_currentMission.missionInfo.economicDifficulty] or 0) * v5, (self.pricePerSample[g_currentMission.missionInfo.economicDifficulty] or 0) * v5 * (SoilMap.SAMPLING_PROVIDER_MULTIPLIER - 1))
      v7:setCallback(self.onSoilSampleDialogCallback, self, farmlandId)
    end
  end
end
function SoilMap:onSoilSampleDialogCallback(yes, farmlandId)
  if yes then
    if g_server == nil and g_client ~= nil then
      local v3 = v3:getServerConnection()
      local v5 = PurchaseSoilMapsEvent.new(farmlandId)
      v3:sendEvent(...)
      return
    end
    self:purchaseSoilMaps(farmlandId)
  end
end
function SoilMap.getNumSoilSamplesPerHa(v0)
  return 10000 / (SoilMap.SAMPLING_RADIUS * 0.5) ^ 2 * math.pi
end
function SoilMap:purchaseSoilMaps(farmlandId)
  if g_farmlandManager.farmlands[farmlandId] ~= nil then
  end
  if 0 < v2 then
    local v6 = self:getNumSoilSamplesPerHa()
    local v4 = math.ceil(v6 * v2)
    local v5 = v5:getFarmlandOwner(farmlandId)
    v6 = self:getPricePerSoilSample()
    v7:addMoney(-(v6 * v4 * SoilMap.SAMPLING_PROVIDER_MULTIPLIER), v5, self.moneyChangeType, true, true)
    if self.pfModule.farmlandStatistics ~= nil then
      v7:updateStatistic(farmlandId, "numSoilSamples", v4)
      v7:updateStatistic(farmlandId, "soilSampleCosts", v6 * v4 * SoilMap.SAMPLING_PROVIDER_MULTIPLIER)
    end
    if self.coverMap ~= nil then
      v7:uncoverFarmlandArea(farmlandId)
    end
  end
end
function SoilMap:getPricePerSoilSample()
  return self.pricePerSample[g_currentMission.missionInfo.economicDifficulty] or 0
end
function SoilMap.overwriteGameFunctions(v0, v1)
  local v3 = v3:superClass()
  v3.overwriteGameFunctions(v0, v1)
end
