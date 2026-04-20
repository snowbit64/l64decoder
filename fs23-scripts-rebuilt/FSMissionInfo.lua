-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSMissionInfo = {}
local FSMissionInfo_mt = Class(FSMissionInfo, MissionInfo)
function FSMissionInfo.new(baseDirectory, customEnvironment, customMt)
  local v4 = v4:superClass()
  if not customMt then
  end
  return v3(v4, v5, v6)
end
function FSMissionInfo:loadDefaults()
  local v2 = v2:superClass()
  v2.loadDefaults(self)
  self.automaticMotorStartEnabled = true
  self.stopAndGoBraking = true
  self.trailerFillLimit = true
  self.fruitDestruction = Platform.gameplay.defaultFruitDestruction
  self.plowingRequiredEnabled = true
  self.stonesEnabled = true
  self.weedsEnabled = true
  self.limeRequired = true
  self.fuelUsage = 2
  self.helperBuyFuel = false
  self.helperBuySeeds = false
  self.helperBuyFertilizer = false
  self.helperSlurrySource = 2
  self.helperManureSource = 2
  self.difficulty = 1
  self.economicDifficulty = 2
  self.buyPriceMultiplier = 1
  self.sellPriceMultiplier = 1
  self.fuelUsage = 0
  self.seedUsage = 0
  self.sprayUsage = 0
  self.traveledDistance = 0
  self.workedHectares = 0
  self.cultivatedHectares = 0
  self.sownHectares = 0
  self.sprayedHectares = 0
  self.threshedHectares = 0
  self.harvestedGrapes = 0
  self.harvestedOlives = 0
  self.revenue = 0
  self.expenses = 0
  self.playTime = 0
  local v1 = getDate("%Y-%m-%d")
  self.creationDate = v1
  self.saveDate = nil
  self.dayTime = 400
  self.timeScale = Platform.gameplay.defaultTimeScale
  self.timeScaleMultiplier = 1
  self.isSnowEnabled = Platform.gameplay.supportSnow
  if Platform.gameplay.supportSeasonalGrowth then
    -- if GrowthSystem.MODE.SEASONAL then goto L137 end
  end
  self.growthMode = GrowthSystem.MODE.DAILY
  self.trafficEnabled = true
  self.dirtInterval = 3
  self.foundHelpIcons = "00000000000000000000"
  v1 = v1:getText("defaultSavegameName")
  self.savegameName = v1
end
function FSMissionInfo.getIsDensityMapValid(v0, v1)
  return false
end
function FSMissionInfo.getIsTerrainLodTextureValid(v0, v1)
  return false
end
function FSMissionInfo.getAreSplitShapesValid(v0, v1)
  return false
end
function FSMissionInfo.getIsTipCollisionValid(v0, v1)
  return false
end
function FSMissionInfo.getIsPlacementCollisionValid(v0, v1)
  return false
end
function FSMissionInfo.getIsNavigationCollisionValid(v0, v1)
  return false
end
function FSMissionInfo.getIsLoadedFromSavegame(v0)
  return true
end
function FSMissionInfo:getEffectiveTimeScale()
  return self.timeScale * (self.timeScaleMultiplier or 1)
end
