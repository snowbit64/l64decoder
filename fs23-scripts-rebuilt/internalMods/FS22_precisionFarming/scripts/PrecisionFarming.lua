-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PrecisionFarming = {MOD_NAME = g_currentModName, BASE_DIRECTORY = g_currentModDirectory}
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/AdditionalFieldBuyInfoEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/CropSensorStateEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/ExtendedSowingMachineRateEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/ExtendedSprayerAmountEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/ExtendedSprayerDefaultFruitTypeEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/FarmlandStatisticsEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/FarmlandStatisticsResetEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/PurchaseSoilMapsEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/RequestFarmlandStatisticsEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/RequestFieldBuyInfoEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/ResetYieldMapEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/SoilSamplerStartEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/events/SoilSamplerSendEvent.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/ValueMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/SoilMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/YieldMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/PHMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/NitrogenMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/SeedRateMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/maps/CoverMap.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/gui/PrecisionFarmingGUI.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/gui/InGameMenuPFFrame.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/gui/InGameMenuMapFrameExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/gui/InGameMenuExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/gui/ShopConfigScreenExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/hud/InGameMapExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/hud/InputHelpDisplayExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/AdditionalFieldBuyInfo.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/AdditionalSpecializations.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/AIExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/CropSensorLinkageData.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/ExtendedWeedControl.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/FieldInfoDisplayExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/HarvestExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/HelplineExtension.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/ManureSensorLinkageData.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/PrecisionFarmingDebug.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/PrecisionFarmingSettings.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/misc/UsageBuffer.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/environmentalScore/EnvironmentalScore.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/statistics/FarmlandStatistics.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/statistics/FarmlandStatistic.lua")
source(PrecisionFarming.BASE_DIRECTORY .. "scripts/statistics/FarmlandStatisticCounter.lua")
local PrecisionFarming_mt = Class(PrecisionFarming)
function PrecisionFarming.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.overwrittenGameFunctions = {}
  v1.valueMaps = {}
  v1.visualizationOverlays = {}
  local v2 = PrecisionFarmingSettings.new(v1)
  v1.precisionFarmingSettings = v2
  local v4 = SoilMap.new(v1)
  v1:registerValueMap(...)
  v4 = PHMap.new(v1)
  v1:registerValueMap(...)
  v4 = NitrogenMap.new(v1)
  v1:registerValueMap(...)
  v4 = YieldMap.new(v1)
  v1:registerValueMap(...)
  v4 = SeedRateMap.new(v1)
  v1:registerValueMap(...)
  v4 = CoverMap.new(v1)
  v1:registerValueMap(...)
  v2 = InGameMenuMapFrameExtension.new()
  v1.inGameMenuMapFrameExtension = v2
  v2 = InputHelpDisplayExtension.new(v1)
  v1.inputHelpDisplayExtension = v2
  v2 = ShopConfigScreenExtension.new()
  v1.shopConfigScreenExtension = v2
  v2 = InGameMenuExtension.new()
  v1.inGameMenuExtension = v2
  v2 = InGameMapExtension.new(v1)
  v1.inGameMapExtension = v2
  v2 = AIExtension.new()
  v1.aiExtension = v2
  v2 = FieldInfoDisplayExtension.new(v1)
  v1.fieldInfoDisplayExtension = v2
  v2 = HarvestExtension.new(v1)
  v1.harvestExtension = v2
  v2 = HelplineExtension.new(v1)
  v1.helplineExtension = v2
  v2 = FarmlandStatistics.new(v1)
  v1.farmlandStatistics = v2
  v2 = AdditionalFieldBuyInfo.new(v1)
  v1.additionalFieldBuyInfo = v2
  v2 = CropSensorLinkageData.new(v1)
  v1.cropSensorLinkageData = v2
  v2 = EnvironmentalScore.new(v1)
  v1.environmentalScore = v2
  v2 = ExtendedWeedControl.new(v1)
  v1.extendedWeedControl = v2
  v2 = ManureSensorLinkageData.new(v1)
  v1.manureSensorLinkageData = v2
  v2 = PrecisionFarmingDebug.new(v1)
  v1.precisionFarmingDebug = v2
  v1.firstTimeRun = false
  v1.firstTimeRunDelay = 2000
  return v1
end
function PrecisionFarming:initialize()
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  v4:initialize(self)
  v4:overwriteGameFunctions(self)
  -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
  v1:overwriteGameFunctions(self)
end
function PrecisionFarming:loadMap(filename)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    local v3 = getXMLBool(g_savegameXML, "gameSettings.precisionFarming#initialized")
    local v2 = Utils.getNoNil(v3, false)
    if not v2 then
      self.firstTimeRun = true
      setXMLBool(g_savegameXML, "gameSettings.precisionFarming#initialized", true)
      v2:saveToXMLFile(g_savegameXML)
    end
    self.mapFilename = filename
    v2 = Utils.getFilename("PrecisionFarming.xml", PrecisionFarming.BASE_DIRECTORY)
    self.configFileName = v2
    v2 = loadXMLFile("ConfigXML", self.configFileName)
    -- TODO: structure LOP_FORNPREP (pc 59, target 76)
    v6:loadFromXML(v2, "precisionFarming", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    -- TODO: structure LOP_FORNLOOP (pc 75, target 60)
    -- TODO: structure LOP_FORNPREP (pc 81, target 98)
    v6:postLoad(v2, "precisionFarming", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    -- TODO: structure LOP_FORNLOOP (pc 97, target 82)
    v3:loadFromXML(v2, "precisionFarming.aiExtension", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.fieldInfoDisplayExtension", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.harvestExtension", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.helplineExtension", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.farmlandStatistics", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.additionalFieldBuyInfo", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.cropSensorLinkageData", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.manureSensorLinkageData", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.environmentalScore", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    v3:loadFromXML(v2, "precisionFarming.extendedWeedControl", PrecisionFarming.BASE_DIRECTORY, self.configFileName, filename)
    delete(v2)
  end
end
function PrecisionFarming:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
end
function PrecisionFarming:initTerrain(mission, terrainId, filename)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  v7:initTerrain(mission, terrainId, filename)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function PrecisionFarming:deleteMap()
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    -- TODO: structure LOP_FORNPREP (pc 13, target 25)
    resetDensityMapVisualizationOverlay(self.visualizationOverlays[#self.visualizationOverlays])
    self.visualizationOverlays[#self.visualizationOverlays] = nil
    -- TODO: structure LOP_FORNLOOP (pc 24, target 14)
    -- TODO: structure LOP_FORNPREP (pc 30, target 38)
    v4:delete()
    -- TODO: structure LOP_FORNLOOP (pc 37, target 31)
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
    -- TODO: structure LOP_FORNPREP (pc 113, target 129)
    self.overwrittenGameFunctions[#self.overwrittenGameFunctions].object[self.overwrittenGameFunctions[#self.overwrittenGameFunctions].funcName] = self.overwrittenGameFunctions[#self.overwrittenGameFunctions].oldFunc
    self.overwrittenGameFunctions[#self.overwrittenGameFunctions] = nil
    -- TODO: structure LOP_FORNLOOP (pc 128, target 114)
  end
end
function PrecisionFarming:loadFromItemsXML(xmlFile, key)
  -- TODO: structure LOP_FORNPREP (pc 5, target 15)
  v6:loadFromItemsXML(xmlFile, key)
  -- TODO: structure LOP_FORNLOOP (pc 14, target 6)
  v3:loadFromItemsXML(xmlFile, key)
  v3:loadFromItemsXML(xmlFile, key)
  v3:loadFromItemsXML(xmlFile, key)
end
function PrecisionFarming:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  v7:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  v4:saveToXMLFile(xmlFile, key, usedModNames)
  v4:saveToXMLFile(xmlFile, key, usedModNames)
  v4:saveToXMLFile(xmlFile, key, usedModNames)
end
function PrecisionFarming:addSetting(...)
  v1:addSetting(...)
end
function PrecisionFarming:registerVisualizationOverlay(overlay)
  table.insert(self.visualizationOverlays, overlay)
end
function PrecisionFarming:update(dt)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    -- TODO: structure LOP_FORNPREP (pc 13, target 22)
    v5:update(dt)
    -- TODO: structure LOP_FORNLOOP (pc 21, target 14)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    v2:update(dt)
    if self.firstTimeRun then
      local v2 = math.max(self.firstTimeRunDelay - dt, 0)
      self.firstTimeRunDelay = v2
      if self.firstTimeRunDelay == 0 then
        v2 = v2:getAllowFirstTimeEvent()
        if v2 then
          v2:onFirstTimeRun()
          self.firstTimeRun = false
        end
      end
    end
  end
end
function PrecisionFarming:draw()
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    v1:draw()
  end
end
function PrecisionFarming:registerValueMap(object)
  table.insert(self.valueMaps, object)
  self[object.name] = object
  object.valueMapIndex = #self.valueMaps
end
function PrecisionFarming:getValueMaps()
  return self.valueMaps
end
function PrecisionFarming:getValueMap(index)
  return self.valueMaps[index]
end
function PrecisionFarming:updatePrecisionFarmingOverlays()
  v1:updatePrecisionFarmingOverlays()
  v1:updatePrecisionFarmingOverlays()
end
function PrecisionFarming:onValueMapSelectionChanged(valueMap)
  v2:onValueMapSelectionChanged(valueMap)
end
function PrecisionFarming:onFarmlandSelectionChanged(farmlandId, fieldNumber, fieldArea)
  v4:onFarmlandSelectionChanged(farmlandId, fieldNumber, fieldArea)
end
function PrecisionFarming:collectFieldInfos(fieldInfoDisplayExtension)
  -- TODO: structure LOP_FORNPREP (pc 5, target 14)
  v5:collectFieldInfos(fieldInfoDisplayExtension)
  -- TODO: structure LOP_FORNLOOP (pc 13, target 6)
end
function PrecisionFarming.getIsMaizePlusActive(v0)
  return g_modIsLoaded.FS22_MaizePlus
end
function PrecisionFarming:getCropSensorLinkageData(configFileName)
  return v2:getCropSensorLinkageData(configFileName)
end
function PrecisionFarming:getClonedCropSensorNode(typeName)
  return v2:getClonedCropSensorNode(typeName)
end
function PrecisionFarming:getManureSensorLinkageData(configFileName)
  return v2:getManureSensorLinkageData(configFileName)
end
function PrecisionFarming:getClonedManureSensorNode(typeName)
  return v2:getClonedManureSensorNode(typeName)
end
function PrecisionFarming.getFarmlandFieldInfo(v0, v1)
  if g_farmlandManager.farmlands[v1] ~= nil then
  end
  local v5 = v5:getFields()
  if v5 ~= nil then
    for v9, v10 in pairs(v5) do
      if not (v10.farmland ~= nil) then
        continue
      end
      if not (v10.farmland.id == v1) then
        continue
      end
      return v10.fieldId, v3
    end
  end
  return v2, v3
end
function PrecisionFarming:overwriteGameFunction(object, funcName, newFunc)
  if object == nil then
    Logging.error("Failed to overwrite '%s'", funcName)
    printCallstack()
    return
  end
  if object[funcName] ~= nil then
    object[funcName] = function(...)
      return u0(...)
    end
  end
  table.insert(self.overwrittenGameFunctions, {object = object, funcName = funcName, oldFunc = v4})
end
local v1 = PrecisionFarming.new()
g_precisionFarming = v1
addModEventListener(g_precisionFarming)
local v3 = Utils.prependedFunction(TypeManager.validateTypes, function(self)
  if self.typeName == "vehicle" and g_modIsLoaded[PrecisionFarming.MOD_NAME] and g_iconGenerator == nil then
    v1:initialize()
  end
end)
TypeManager.validateTypes = v3
local v4 = Utils.prependedFunction(ItemSystem.save, function(PrecisionFarming_mt, v1, v2)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    local v4 = XMLFile.create("precisionFarmingXML", g_currentMission.missionInfo.savegameDirectory .. "/precisionFarming.xml", "precisionFarming")
    if v4 ~= nil then
      v5:saveToXMLFile(v4, "precisionFarming", v2)
      v4:save()
      v4:delete()
    end
  end
end)
ItemSystem.save = v4
local v5 = Utils.prependedFunction(ItemSystem.loadItems, function(PrecisionFarming_mt, v1, ...)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] and g_currentMission.missionInfo.savegameDirectory ~= nil then
    local v4 = fileExists(g_currentMission.missionInfo.savegameDirectory .. "/precisionFarming.xml")
    if v4 then
      v4 = XMLFile.load("precisionFarmingXML", g_currentMission.missionInfo.savegameDirectory .. "/precisionFarming.xml")
      if v4 ~= nil then
        v5:loadFromItemsXML(v4, "precisionFarming")
        v4:delete()
      end
    end
  end
end)
ItemSystem.loadItems = v5
local v6 = Utils.prependedFunction(Gui.unloadMapData, function(PrecisionFarming_mt, v1)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    v2:unloadMapData()
  end
end)
Gui.unloadMapData = v6
local v7 = Utils.appendedFunction(FSBaseMission.initTerrain, function(PrecisionFarming_mt, v1, v2)
  if g_modIsLoaded[PrecisionFarming.MOD_NAME] then
    v3:initTerrain(PrecisionFarming_mt, v1, v2)
  end
end)
FSBaseMission.initTerrain = v7
