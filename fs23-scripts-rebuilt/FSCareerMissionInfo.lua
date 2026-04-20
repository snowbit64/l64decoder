-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSCareerMissionInfo = {}
local FSCareerMissionInfo_mt = Class(FSCareerMissionInfo, FSMissionInfo)
FSCareerMissionInfo.SavegameRevision = 2
if GS_PLATFORM_PLAYSTATION then
  FSCareerMissionInfo.MaxSavegameSize = 52428800
else
  FSCareerMissionInfo.MaxSavegameSize = 26214400
end
FSCareerMissionInfo.BUY_PRICE_MULTIPLIER = {0.5, 0.75, 1}
FSCareerMissionInfo.SELL_PRICE_MULTIPLIER = {2, 1.5, 1}
function FSCareerMissionInfo.new(baseDirectory, customEnvironment, savegameIndex, customMt)
  if customMt == nil then
  end
  local v5 = v5:superClass()
  local v4 = v5.new(baseDirectory, customEnvironment, customMt)
  v4.savegameIndex = savegameIndex
  v5 = v4:getSavegameDirectory(v4.savegameIndex)
  v4.savegameDirectory = v5
  local v9 = v9:getText("ui_savegame")
  v4.displayName = v9 .. " " .. v4.savegameIndex
  v4.xmlKey = "careerSavegame"
  v4.tipTypeMappings = {}
  return v4
end
function FSCareerMissionInfo:delete()
  if self.xmlFile ~= nil then
    delete(self.xmlFile)
  end
end
function FSCareerMissionInfo:loadDefaults()
  local v2 = v2:superClass()
  v2.loadDefaults(self)
  self.supportsSaving = true
  self.isValid = false
  self.isInvalidUser = false
  self.isCorruptFile = false
  self.saveDateFormatted = "--/--/--"
  self.saveDate = nil
  self.resetVehicles = false
  self.vehiclesXML = nil
  self.itemsXML = nil
  self.placeablesXML = nil
  self.aiSystemXML = nil
  self.onCreateObjectsXML = nil
  self.environmentXML = nil
  self.vehicleSaleXML = nil
  self.economyXML = nil
  self.farmlandXML = nil
  self.npcXML = nil
  self.missionsXML = nil
  self.fieldsXML = nil
  self.farmsXML = nil
  self.playersXML = nil
  self.densityMapHeightXML = nil
  self.treePlantXML = nil
  self.savegameDirectory = nil
  self.densityMapRevision = -1
  self.terrainTextureRevision = -1
  self.terrainLodTextureRevision = -1
  self.splitShapesRevision = -1
  self.tipCollisionRevision = -1
  self.placementCollisionRevision = -1
  self.navigationCollisionRevision = -1
  self.tipTypeMappings = {}
  self.mapId = nil
  self.autoSaveInterval = AutoSaveManager.DEFAULT_INTERVAL
  self.mods = {}
  self.guidedTourActive = true
  self.guidedTourStep = 0
  self.guidedTourSaveStep = 0
  self.guidedTourVersion = 1
  self.guidedTourState = ""
  self.guidedTourLastVehicleName = ""
  self.slotUsage = 0
  self.plannedDaysPerPeriod = 1
  self.timeScale = Platform.gameplay.defaultTimeScale
  self.dirtInterval = 3
  self.trafficEnabled = true
  self.scenarioId = nil
  self.introductionHelpShownElements = ""
  self.introductionHelpShownHints = ""
  self.introductionHelpActive = false
end
function FSCareerMissionInfo:loadFromXML(xmlFile)
  local v3 = getXMLInt(xmlFile, self.xmlKey .. "#revision")
  if v3 ~= FSCareerMissionInfo.SavegameRevision then
    return false
  end
  local v4 = getXMLBool(xmlFile, v2 .. "#valid")
  self.isValid = v4
  if self.isValid == nil then
    return false
  end
  if self.isValid then
    v4 = getXMLString(xmlFile, v2 .. ".settings.mapId")
    if v4 == nil then
      return false
    end
    local v5 = getXMLString(xmlFile, v2 .. ".settings.mapTitle")
    self.mapTitle = v5
    self:setMapId(v4)
    self.isInvalidUser = false
    local v6 = getXMLString(xmlFile, v2 .. ".settings.savegameName")
    v5 = Utils.getNoNil(v6, self.savegameName)
    self.savegameName = v5
    v6 = getXMLString(xmlFile, v2 .. ".settings.creationDate")
    v5 = Utils.getNoNil(v6, self.creationDate)
    self.creationDate = v5
    local v7 = getXMLString(xmlFile, v2 .. ".scenario#id")
    self:setScenarioId(...)
    v6 = getXMLBool(xmlFile, v2 .. ".guidedTour#active")
    v5 = Utils.getNoNil(v6, self.guidedTourActive)
    self.guidedTourActive = v5
    v6 = getXMLInt(xmlFile, v2 .. ".guidedTour#currentStepIndex")
    v5 = Utils.getNoNil(v6, self.guidedTourStep)
    self.guidedTourStep = v5
    self.guidedTourSaveStep = self.guidedTourStep
    v6 = getXMLString(xmlFile, v2 .. ".guidedTour#state")
    v5 = Utils.getNoNil(v6, self.guidedTourState)
    self.guidedTourState = v5
    v6 = getXMLString(xmlFile, v2 .. ".guidedTour#lastVehicleName")
    v5 = Utils.getNoNil(v6, self.guidedTourLastVehicleName)
    self.guidedTourLastVehicleName = v5
    v6 = getXMLInt(xmlFile, v2 .. ".guidedTour#version")
    v5 = Utils.getNoNil(v6, self.guidedTourVersion)
    self.guidedTourVersion = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.densityMapRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.densityMapRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.terrainTextureRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.terrainTextureRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.terrainLodTextureRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.terrainLodTextureRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.splitShapesRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.splitShapesRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.tipCollisionRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.tipCollisionRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.placementCollisionRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.placementCollisionRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.navigationCollisionRevision")
    v5 = Utils.getNoNil(v6, -1)
    self.navigationCollisionRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapDensityMapRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapDensityMapRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapTerrainTextureRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapTerrainTextureRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapTerrainLodTextureRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapTerrainLodTextureRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapSplitShapesRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapSplitShapesRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapTipCollisionRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapTipCollisionRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapPlacementCollisionRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapPlacementCollisionRevision = v5
    v6 = getXMLInt(xmlFile, v2 .. ".settings.mapNavigationCollisionRevision")
    v5 = Utils.getNoNil(v6, 1)
    self.mapNavigationCollisionRevision = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.resetVehicles")
    v5 = Utils.getNoNil(v6, self.resetVehicles)
    self.resetVehicles = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.stopAndGoBraking")
    v5 = Utils.getNoNil(v6, true)
    self.stopAndGoBraking = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.trailerFillLimit")
    v5 = Utils.getNoNil(v6, false)
    self.trailerFillLimit = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.fruitDestruction")
    v5 = Utils.getNoNil(v6, true)
    self.fruitDestruction = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.plowingRequiredEnabled")
    v5 = Utils.getNoNil(v6, true)
    self.plowingRequiredEnabled = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.stonesEnabled")
    v5 = Utils.getNoNil(v6, true)
    self.stonesEnabled = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.weedsEnabled")
    v5 = Utils.getNoNil(v6, true)
    self.weedsEnabled = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.limeRequired")
    v5 = Utils.getNoNil(v6, true)
    self.limeRequired = v5
    v6 = getXMLBool(xmlFile, v2 .. ".settings.automaticMotorStartEnabled")
    v5 = Utils.getNoNil(v6, true)
    self.automaticMotorStartEnabled = v5
    v5 = getXMLBool(xmlFile, v2 .. ".settings.fuelUsageLow")
    if v5 == true then
    else
    end
    local v8 = getXMLInt(xmlFile, v2 .. ".settings.fuelUsage")
    v7 = Utils.getNoNil(v8, v6)
    self.fuelUsage = v7
    v8 = getXMLBool(xmlFile, v2 .. ".settings.helperBuyFuel")
    v7 = Utils.getNoNil(v8, true)
    self.helperBuyFuel = v7
    v8 = getXMLBool(xmlFile, v2 .. ".settings.helperBuySeeds")
    v7 = Utils.getNoNil(v8, true)
    self.helperBuySeeds = v7
    v8 = getXMLBool(xmlFile, v2 .. ".settings.helperBuyFertilizer")
    v7 = Utils.getNoNil(v8, true)
    self.helperBuyFertilizer = v7
    v8 = getXMLInt(xmlFile, v2 .. ".settings.helperSlurrySource")
    v7 = Utils.getNoNil(v8, 2)
    self.helperSlurrySource = v7
    v8 = getXMLInt(xmlFile, v2 .. ".settings.helperManureSource")
    v7 = Utils.getNoNil(v8, 2)
    self.helperManureSource = v7
    v8 = getXMLInt(xmlFile, v2 .. ".settings.difficulty")
    v7 = Utils.getNoNil(v8, 1)
    self.difficulty = v7
    self:updateDifficultyProperties()
    v8 = getXMLInt(xmlFile, v2 .. ".settings.economicDifficulty")
    v7 = Utils.getNoNil(v8, self.difficulty)
    self.economicDifficulty = v7
    v7 = self:getBuyPriceMultiplier()
    self.buyPriceMultiplier = v7
    v7 = self:getSellPriceMultiplier()
    self.sellPriceMultiplier = v7
    v8 = getXMLString(xmlFile, v2 .. ".settings.saveDate")
    v7 = Utils.getNoNil(v8, nil)
    self.saveDate = v7
    v8 = getXMLString(xmlFile, v2 .. ".settings.saveDateFormatted")
    v7 = Utils.getNoNil(v8, self.saveDate)
    self.saveDateFormatted = v7
    v8 = getXMLFloat(xmlFile, v2 .. ".settings.timeScale")
    v7 = Utils.getNoNil(v8, Platform.gameplay.defaultTimeScale)
    self.timeScale = v7
    v8 = getXMLBool(xmlFile, v2 .. ".settings.trafficEnabled")
    v7 = Utils.getNoNil(v8, true)
    self.trafficEnabled = v7
    v8 = getXMLInt(xmlFile, v2 .. ".settings.dirtInterval")
    v7 = Utils.getNoNil(v8, 3)
    self.dirtInterval = v7
    if Platform.gameplay.supportSeasonalGrowth then
      v8 = getXMLInt(xmlFile, v2 .. ".settings.growthMode")
      v7 = Utils.getNoNil(v8, GrowthSystem.MODE.SEASONAL)
      self.growthMode = v7
    end
    if Platform.gameplay.supportSnow then
      v8 = getXMLBool(xmlFile, v2 .. ".settings.isSnowEnabled")
      v7 = Utils.getNoNil(v8, true)
      self.isSnowEnabled = v7
    end
    v7 = getXMLInt(xmlFile, v2 .. ".settings.fixedSeasonalVisuals")
    self.fixedSeasonalVisuals = v7
    v8 = getXMLInt(xmlFile, v2 .. ".settings.plannedDaysPerPeriod")
    self.plannedDaysPerPeriod = v8 or 1
    v8 = getXMLFloat(xmlFile, v2 .. ".settings.autoSaveInterval")
    v7 = Utils.getNoNil(v8, AutoSaveManager.DEFAULT_INTERVAL)
    self.autoSaveInterval = v7
    v8 = getXMLString(xmlFile, v2 .. ".map.foundHelpIcons")
    v7 = Utils.getNoNil(v8, "00000000000000000000")
    self.foundHelpIcons = v7
    v8 = getXMLFloat(xmlFile, v2 .. ".statistics.playTime")
    v7 = Utils.getNoNil(v8, 0)
    self.playTime = v7
    local v9 = getXMLString(xmlFile, v2 .. ".statistics.money")
    v8 = tonumber(...)
    v7 = Utils.getNoNil(v8, 0)
    self.money = v7
    v8 = getXMLInt(xmlFile, v2 .. ".slotSystem#slotUsage")
    self.slotUsage = v8 or 0
    v8 = getXMLBool(xmlFile, v2 .. ".introductionHelp#active")
    v7 = Utils.getNoNil(v8, false)
    self.introductionHelpActive = v7
    v8 = getXMLString(xmlFile, v2 .. ".introductionHelp.shownElements")
    v7 = Utils.getNoNil(v8, "")
    self.introductionHelpShownElements = v7
    v8 = getXMLString(xmlFile, v2 .. ".introductionHelp.shownHints")
    v7 = Utils.getNoNil(v8, "")
    self.introductionHelpShownHints = v7
    self.mapsSplitShapeFileIds = {}
    v8 = getXMLInt(xmlFile, v2 .. ".mapsSplitShapeFileIds#count")
    v7 = Utils.getNoNil(v8, 0)
    -- TODO: structure LOP_FORNPREP (pc 846, target 873)
    local v11 = string.format("%s.mapsSplitShapeFileIds.id(%d)", v2, 1 - 1)
    local v13 = getXMLInt(xmlFile, v11 .. "#id")
    local v12 = Utils.getNoNil(v13, -1)
    table.insert(self.mapsSplitShapeFileIds, v12)
    -- TODO: structure LOP_FORNLOOP (pc 872, target 847)
    if self.mapId ~= nil then
      v9 = v9:split(".")
    end
    self.mods = {}
    while true do
      v12 = string.format(".mod(%d)", v9)
      v11 = hasXMLProperty(xmlFile, v2 .. v12)
      if not v11 then
        break
      end
      v11 = getXMLString(xmlFile, v2 .. v12 .. "#modName")
      v12 = getXMLString(xmlFile, v2 .. v12 .. "#title")
      v13 = getXMLString(xmlFile, v2 .. v12 .. "#version")
      v14 = getXMLString(xmlFile, v2 .. v12 .. "#fileHash")
      v16 = getXMLBool(xmlFile, v2 .. v12 .. "#required")
      v15 = Utils.getNoNil(v16, true)
      if v11 ~= nil and v12 ~= nil then
        table.insert(self.mods, {modName = v11, title = v12, version = v13, fileHash = v14, required = v15})
      end
      if self.mapTitle == nil and v8 ~= nil and #v8 == 2 and v11 == v8[1] then
        self.mapTitle = v12 .. " - " .. v8[2]
      end
    end
  end
  return true
end
function FSCareerMissionInfo:saveToXMLFile()
  if self.xmlFile ~= nil then
    delete(self.xmlFile)
  end
  local v1 = createXMLFile("careerSavegameXML", "", "careerSavegame")
  self.xmlFile = v1
  setXMLInt(v1, self.xmlKey .. "#revision", FSCareerMissionInfo.SavegameRevision)
  setXMLBool(v1, self.xmlKey .. "#valid", self.isValid)
  if self.isValid then
    setXMLString(v1, self.xmlKey .. ".settings.savegameName", self.savegameName)
    setXMLString(v1, self.xmlKey .. ".settings.creationDate", self.creationDate)
    setXMLString(v1, self.xmlKey .. ".settings.mapId", self.mapId)
    setXMLString(v1, self.xmlKey .. ".settings.mapTitle", self.map.title)
    setXMLString(v1, self.xmlKey .. ".settings.saveDateFormatted", self.saveDateFormatted)
    setXMLString(v1, self.xmlKey .. ".settings.saveDate", self.saveDate)
    if self.scenarioId ~= nil then
      setXMLString(v1, self.xmlKey .. ".scenario#id", self.scenarioId)
    end
    setXMLBool(v1, v2 .. ".guidedTour#active", self.guidedTourActive)
    setXMLInt(v1, v2 .. ".guidedTour#currentStepIndex", self.guidedTourSaveStep)
    setXMLString(v1, v2 .. ".guidedTour#state", self.guidedTourState)
    setXMLString(v1, v2 .. ".guidedTour#lastVehicleName", self.guidedTourLastVehicleName or "")
    setXMLInt(v1, v2 .. ".guidedTour#version", self.guidedTourVersion or 1)
    setXMLBool(v1, v2 .. ".settings.resetVehicles", self.resetVehicles)
    setXMLBool(v1, v2 .. ".settings.trafficEnabled", self.trafficEnabled)
    setXMLBool(v1, v2 .. ".settings.stopAndGoBraking", self.stopAndGoBraking)
    setXMLBool(v1, v2 .. ".settings.trailerFillLimit", self.trailerFillLimit)
    setXMLBool(v1, v2 .. ".settings.automaticMotorStartEnabled", self.automaticMotorStartEnabled)
    setXMLInt(v1, v2 .. ".settings.growthMode", self.growthMode)
    if self.fixedSeasonalVisuals ~= nil then
      setXMLInt(v1, v2 .. ".settings.fixedSeasonalVisuals", self.fixedSeasonalVisuals)
    end
    setXMLInt(v1, v2 .. ".settings.plannedDaysPerPeriod", self.plannedDaysPerPeriod)
    setXMLBool(v1, v2 .. ".settings.fruitDestruction", self.fruitDestruction)
    setXMLBool(v1, v2 .. ".settings.plowingRequiredEnabled", self.plowingRequiredEnabled)
    setXMLBool(v1, v2 .. ".settings.stonesEnabled", self.stonesEnabled)
    setXMLBool(v1, v2 .. ".settings.weedsEnabled", self.weedsEnabled)
    setXMLBool(v1, v2 .. ".settings.limeRequired", self.limeRequired)
    setXMLBool(v1, v2 .. ".settings.isSnowEnabled", self.isSnowEnabled)
    setXMLInt(v1, v2 .. ".settings.fuelUsage", self.fuelUsage)
    setXMLBool(v1, v2 .. ".settings.helperBuyFuel", self.helperBuyFuel)
    setXMLBool(v1, v2 .. ".settings.helperBuySeeds", self.helperBuySeeds)
    setXMLBool(v1, v2 .. ".settings.helperBuyFertilizer", self.helperBuyFertilizer)
    setXMLInt(v1, v2 .. ".settings.helperSlurrySource", self.helperSlurrySource)
    setXMLInt(v1, v2 .. ".settings.helperManureSource", self.helperManureSource)
    setXMLInt(v1, v2 .. ".settings.densityMapRevision", self.densityMapRevision)
    setXMLInt(v1, v2 .. ".settings.terrainTextureRevision", self.terrainTextureRevision)
    setXMLInt(v1, v2 .. ".settings.terrainLodTextureRevision", self.terrainLodTextureRevision)
    setXMLInt(v1, v2 .. ".settings.splitShapesRevision", self.splitShapesRevision)
    setXMLInt(v1, v2 .. ".settings.tipCollisionRevision", self.tipCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.placementCollisionRevision", self.placementCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.navigationCollisionRevision", self.navigationCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.mapDensityMapRevision", self.mapDensityMapRevision)
    setXMLInt(v1, v2 .. ".settings.mapTerrainTextureRevision", self.mapTerrainTextureRevision)
    setXMLInt(v1, v2 .. ".settings.mapTerrainLodTextureRevision", self.mapTerrainLodTextureRevision)
    setXMLInt(v1, v2 .. ".settings.mapSplitShapesRevision", self.mapSplitShapesRevision)
    setXMLInt(v1, v2 .. ".settings.mapTipCollisionRevision", self.mapTipCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.mapPlacementCollisionRevision", self.mapPlacementCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.mapNavigationCollisionRevision", self.mapNavigationCollisionRevision)
    setXMLInt(v1, v2 .. ".settings.difficulty", self.difficulty)
    setXMLInt(v1, v2 .. ".settings.economicDifficulty", self.economicDifficulty)
    setXMLInt(v1, v2 .. ".settings.dirtInterval", self.dirtInterval)
    setXMLFloat(v1, v2 .. ".settings.timeScale", self.timeScale)
    local v6 = v6:getInterval()
    setXMLFloat(...)
    setXMLString(v1, v2 .. ".map.foundHelpIcons", self.foundHelpIcons)
    setXMLBool(v1, v2 .. ".introductionHelp#active", self.introductionHelpActive)
    setXMLString(v1, v2 .. ".introductionHelp.shownElements", self.introductionHelpShownElements)
    setXMLString(v1, v2 .. ".introductionHelp.shownHints", self.introductionHelpShownHints)
    for v8, v9 in ipairs(g_farmManager.farms) do
      if not not v9.isSpectator then
        continue
      end
      local v12 = v12:getTotalValue("playTime")
      local v10 = math.max(...)
    end
    v9 = math.floor(v3 + 0.0001)
    v8 = tostring(...)
    setXMLString(...)
    setXMLFloat(v1, v2 .. ".statistics.playTime", v4)
    v5:saveToXMLFile(v1, v2 .. ".slotSystem")
    v5:saveToXMLFile(self.savegameDirectory .. "/collectibles.xml")
    v5 = createXMLFile("environmentXMLFile", self.environmentXML, "environment")
    if v5 ~= nil then
      if g_currentMission ~= nil then
        v6:saveToXMLFile(v5, "environment")
        v6:saveToXMLFile(v5, "environment.snow")
        v6:saveToXMLFile(v5, "environment.growth")
      end
      saveXMLFile(v5)
      delete(v5)
    end
    v9 = table.getn(self.mapsSplitShapeFileIds)
    setXMLInt(...)
    for v9, v10 in ipairs(self.mapsSplitShapeFileIds) do
      local v16 = string.format("%s.mapsSplitShapeFileIds.id(%d)", v2, v9 - 1)
      setXMLInt(v1, v16 .. "#id", v10)
    end
    if g_currentMission ~= nil then
      v7:setSaveIds()
      VehicleLoadingUtil.setSaveIds(g_currentMission.vehicles)
      VehicleLoadingUtil.save(self.vehiclesXML, {})
      v7:save(self.placeablesXML, {})
      v7:save(self.itemsXML, {})
      v7:save(self.aiSystemXML, {})
      v7:save(self.onCreateObjectsXML, {})
    end
    v7 = createXMLFile("economyXML", self.economyXML, "economy")
    if v7 ~= nil then
      if g_currentMission ~= nil then
        v8:saveToXMLFile(v7, "economy")
      end
      saveXMLFile(v7)
      delete(v7)
    end
    v8:saveToXMLFile(self.farmlandXML)
    v8:saveToXMLFile(self.npcXML)
    v8:saveToXMLFile(self.fieldsXML)
    v8:saveToXMLFile(self.missionsXML)
    v8:saveToXMLFile(self.farmsXML)
    v8:saveToXMLFile(self.playersXML)
    v8:saveToXMLFile(self.densityMapHeightXML)
    v8:saveToXMLFile(self.treePlantXML)
    v8:saveToXMLFile(self.vehicleSaleXML)
    v8 = ClassUtil.getClassModName(self.mapId)
    if v8 ~= nil then
      v6[v8] = v8
    end
    for v12, v13 in pairs(g_currentMission.missionDynamicInfo.mods) do
      v6[v13.modName] = v13.modName
    end
    for v13, v14 in pairs(v6) do
      local v15 = v15:getModByName(v13)
      if not (v15 ~= nil) then
        continue
      end
      if v13 ~= v8 then
      end
      local v21 = string.format(".mod(%d)#modName", v9)
      setXMLString(v1, v2 .. v21, v15.modName)
      v21 = string.format(".mod(%d)#title", v9)
      setXMLString(v1, v2 .. v21, v15.title)
      v21 = string.format(".mod(%d)#version", v9)
      setXMLString(v1, v2 .. v21, v15.version)
      v21 = string.format(".mod(%d)#required", v9)
      setXMLBool(v1, v2 .. v21, true)
      v21 = string.format(".mod(%d)#fileHash", v9)
      local v20 = tostring(v15.fileHash)
      setXMLString(...)
    end
    saveXMLFile(v1)
  end
end
function FSCareerMissionInfo:loadFromMission(mission)
  self.mapDensityMapRevision = mission.mapDensityMapRevision
  self.mapTerrainTextureRevision = mission.mapTerrainTextureRevision
  self.mapTerrainLodTextureRevision = mission.mapTerrainLodTextureRevision
  self.mapSplitShapesRevision = mission.mapSplitShapesRevision
  self.mapTipCollisionRevision = mission.mapTipCollisionRevision
  self.mapPlacementCollisionRevision = mission.mapPlacementCollisionRevision
  self.mapNavigationCollisionRevision = mission.mapNavigationCollisionRevision
  self.mapsSplitShapeFileIds = {}
  for v5, v6 in ipairs(mission.mapsSplitShapeFileIds) do
    table.insert(self.mapsSplitShapeFileIds, v6)
  end
  v2 = getDate("%Y-%m-%d")
  self.saveDate = v2
  v2 = v2:getCurrentDate()
  self.saveDateFormatted = v2
end
function FSCareerMissionInfo:setSavegameDirectory(directory)
  self.savegameDirectory = directory
  if directory ~= nil then
    self.vehiclesXML = self.savegameDirectory .. "/vehicles.xml"
    self.itemsXML = self.savegameDirectory .. "/items.xml"
    self.placeablesXML = self.savegameDirectory .. "/placeables.xml"
    self.aiSystemXML = self.savegameDirectory .. "/aiSystem.xml"
    self.onCreateObjectsXML = self.savegameDirectory .. "/onCreateObjects.xml"
    self.environmentXML = self.savegameDirectory .. "/environment.xml"
    self.vehicleSaleXML = self.savegameDirectory .. "/sales.xml"
    self.economyXML = self.savegameDirectory .. "/economy.xml"
    self.farmlandXML = self.savegameDirectory .. "/farmland.xml"
    self.npcXML = self.savegameDirectory .. "/npc.xml"
    self.missionsXML = self.savegameDirectory .. "/missions.xml"
    self.fieldsXML = self.savegameDirectory .. "/fields.xml"
    self.farmsXML = self.savegameDirectory .. "/farms.xml"
    self.playersXML = self.savegameDirectory .. "/players.xml"
    self.densityMapHeightXML = self.savegameDirectory .. "/densityMapHeight.xml"
    self.treePlantXML = self.savegameDirectory .. "/treePlant.xml"
    return
  end
  self.vehiclesXML = nil
  self.itemsXML = nil
  self.placeablesXML = nil
  self.aiSystemXML = nil
  self.onCreateObjectsXML = nil
  self.environmentXML = nil
  self.vehicleSaleXML = nil
  self.economyXML = nil
  self.farmlandXML = nil
  self.npcXML = nil
  self.missionsXML = nil
  self.fieldsXML = nil
  self.farmsXML = nil
  self.playersXML = nil
  self.densityMapHeightXML = nil
  self.treePlantXML = nil
end
function FSCareerMissionInfo.getSavegameDirectory(v0, v1)
  local v6 = getUserProfileAppPath()
  return v6 .. "savegame" .. v1
end
function FSCareerMissionInfo.getSavegameAutoBackupBasePath(v0)
  local v4 = getUserProfileAppPath()
  return v4 .. "savegameBackup"
end
function FSCareerMissionInfo.getSavegameAutoBackupDirectoryBase(v0, v1)
  return "savegame" .. v1 .. "_backup"
end
function FSCareerMissionInfo.getSavegameAutoBackupLatestFilename(v0, v1)
  return "savegame" .. v1 .. "_backupLatest.txt"
end
function FSCareerMissionInfo:getStateI18NKey()
  if self.hasConflict and not self.isSoftConflict then
    return "savegame_state_conflicted"
  end
  if self.uploadState == UploadState.UPLOADED then
    return "savegame_state_uploaded"
  end
  if self.uploadState == UploadState.NOT_UPLOADED then
    return "savegame_state_not_uploaded"
  end
  if self.uploadState == UploadState.UPLOADING then
    return "savegame_state_uploading"
  end
end
function FSCareerMissionInfo:setMapId(mapId)
  self.mapId = mapId
  local v2 = v2:getMapById(self.mapId)
  if v2 == nil then
    return false
  end
  self.map = v2
  self.mapTitle = v2.title
  self.scriptFilename = v2.scriptFilename
  self.scriptClass = v2.className
  self.mapXMLFilename = v2.mapXMLFilename
  self.defaultVehiclesXMLFilename = v2.defaultVehiclesXMLFilename
  self.defaultItemsXMLFilename = v2.defaultItemsXMLFilename
  self.defaultPlaceablesXMLFilename = v2.defaultPlaceablesXMLFilename
  self.customEnvironment = v2.customEnvironment
  self.baseDirectory = v2.baseDirectory
  return true
end
function FSCareerMissionInfo:setScenarioId(scenarioId)
  if scenarioId ~= nil then
    self.scenarioId = scenarioId
    local v2 = v2:getScenarioById(scenarioId)
    if v2 == nil then
      self.scenarioId = nil
      return false
    end
    self.scenario = v2
    self.defaultVehiclesXMLFilename = v2.vehiclesXMLFilename
    self.defaultItemsXMLFilename = v2.itemsXMLFilename
    self.defaultPlaceablesXMLFilename = v2.placeablesXMLFilename
  end
end
function FSCareerMissionInfo:updateDifficultyProperties()
  if self.difficulty == 1 then
    self.hasInitiallyOwnedFarmlands = true
    self.initialLoan = 0
    self.initialMoney = 100000
    self.loadDefaultFarm = true
    self.economicDifficulty = 1
    return
  end
  if self.difficulty == 2 then
    self.hasInitiallyOwnedFarmlands = false
    self.initialLoan = 0
    self.initialMoney = 1500000
    self.loadDefaultFarm = false
    self.economicDifficulty = 2
    return
  end
  self.hasInitiallyOwnedFarmlands = false
  self.initialLoan = 200000
  self.initialMoney = 500000
  self.loadDefaultFarm = false
  self.economicDifficulty = 3
end
function FSCareerMissionInfo:setDifficulty(difficulty)
  self.difficulty = difficulty
  if self.difficulty == 1 then
    self.stopAndGoBraking = true
    self.trailerFillLimit = false
    self.automaticMotorStartEnabled = true
    if Platform.gameplay.supportSeasonalGrowth then
      -- if GrowthSystem.MODE.SEASONAL then goto L23 end
    end
    self.growthMode = GrowthSystem.MODE.DAILY
    self.isSnowEnabled = Platform.gameplay.supportSnow
    self.helperBuyFuel = true
    self.helperBuySeeds = true
    self.helperBuyFertilizer = true
    self.helperSlurrySource = 2
    self.helperManureSource = 2
    self.fuelUsage = 1
    self.plowingRequiredEnabled = false
  elseif self.difficulty == 2 then
    self.stopAndGoBraking = true
    self.trailerFillLimit = false
    self.automaticMotorStartEnabled = true
    if Platform.gameplay.supportSeasonalGrowth then
      -- if GrowthSystem.MODE.SEASONAL then goto L72 end
    end
    self.growthMode = GrowthSystem.MODE.DAILY
    self.isSnowEnabled = Platform.gameplay.supportSnow
    self.helperBuyFuel = true
    self.helperBuySeeds = true
    self.helperBuyFertilizer = true
    self.helperSlurrySource = 2
    self.helperManureSource = 2
    self.fuelUsage = 2
  else
    self.stopAndGoBraking = false
    self.trailerFillLimit = false
    self.automaticMotorStartEnabled = false
    if Platform.gameplay.supportSeasonalGrowth then
      -- if GrowthSystem.MODE.SEASONAL then goto L114 end
    end
    self.growthMode = GrowthSystem.MODE.DAILY
    self.isSnowEnabled = Platform.gameplay.supportSnow
    self.helperBuyFuel = false
    self.helperBuySeeds = false
    self.helperBuyFertilizer = false
    self.helperSlurrySource = 1
    self.helperManureSource = 1
    self.fuelUsage = 3
  end
  if Platform.gameplay.defaultPlowingRequiredEnabled ~= nil then
    self.plowingRequiredEnabled = Platform.gameplay.defaultPlowingRequiredEnabled
  end
  local v2 = self:getBuyPriceMultiplier()
  self.buyPriceMultiplier = v2
  v2 = self:getSellPriceMultiplier()
  self.sellPriceMultiplier = v2
  self:updateDifficultyProperties()
end
function FSCareerMissionInfo:getIsDensityMapValid(mission)
  if self.isValid and self.densityMapRevision == g_densityMapRevision and self.mapDensityMapRevision ~= mission.mapDensityMapRevision then
  end
  return v2
end
function FSCareerMissionInfo:getIsTerrainTextureValid(mission)
  if self.isValid and self.terrainTextureRevision == g_terrainTextureRevision and self.mapTerrainTextureRevision ~= mission.mapTerrainTextureRevision then
  end
  return v2
end
function FSCareerMissionInfo:getIsTerrainLodTextureValid(mission)
  if self.isValid and self.terrainLodTextureRevision == g_terrainLodTextureRevision and self.mapTerrainLodTextureRevision ~= mission.mapTerrainLodTextureRevision then
  end
  return v2
end
function FSCareerMissionInfo:getAreSplitShapesValid(mission)
  if self.isValid and self.splitShapesRevision == g_splitShapesRevision and self.mapSplitShapesRevision ~= mission.mapSplitShapesRevision then
  end
  return v2
end
function FSCareerMissionInfo:getIsTipCollisionValid(mission)
  if self.isValid and self.tipCollisionRevision == g_tipCollisionRevision and self.mapTipCollisionRevision ~= mission.mapTipCollisionRevision then
  end
  return v2
end
function FSCareerMissionInfo:getIsPlacementCollisionValid(mission)
  if self.isValid and self.placementCollisionRevision == g_placementCollisionRevision and self.mapPlacementCollisionRevision ~= mission.mapPlacementCollisionRevision then
  end
  return v2
end
function FSCareerMissionInfo:getIsNavigationCollisionValid(mission)
  if self.isValid and self.navigationCollisionRevision == g_navigationCollisionRevision and self.mapNavigationCollisionRevision ~= mission.mapNavigationCollisionRevision then
  end
  return v2
end
function FSCareerMissionInfo:getSellPriceMultiplier()
  return Utils.getNoNil(FSCareerMissionInfo.SELL_PRICE_MULTIPLIER[self.economicDifficulty], 1)
end
function FSCareerMissionInfo:getBuyPriceMultiplier()
  return Utils.getNoNil(FSCareerMissionInfo.BUY_PRICE_MULTIPLIER[self.economicDifficulty], 1)
end
function FSCareerMissionInfo:getIsLoadedFromSavegame()
  return self.isValid
end
