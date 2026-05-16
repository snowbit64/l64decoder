-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AchievementManager = {}
local AchievementManager_mt = Class(AchievementManager, AbstractManager)
function AchievementManager.new(v0)
  if not v0 then
  end
  return v1(v2)
end
function AchievementManager:initDataStructures()
  self.achievementList = {}
  self.achievementListById = {}
  self.achievementListByName = {}
  self.achievementPlates = nil
  self.numberOfAchievements = 0
  self.numberOfUnlockedAchievements = 0
  self.achievementsValid = false
  self.achievementTimer = 0
  self.achievementTimeInterval = 30000
  self.fillTypeAchievements = {}
end
function AchievementManager:load()
  local xmlFile = loadXMLFile("achievementsXML", "dataS/achievements.xml")
  local xmlFileContent = saveXMLFileToMemory(xmlFile)
  initAchievements(xmlFileContent)
  self.numberOfAchievements = 0
  while true do
    v5 = string.format("achievements.achievement(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#id")
    v7 = getXMLString(xmlFile, v5 .. "#idName")
    v8 = getXMLInt(xmlFile, v5 .. "#score")
    v9 = getXMLInt(xmlFile, v5 .. "#targetScore")
    v10 = getXMLBool(xmlFile, v5 .. "#showScore")
    v11 = getXMLString(xmlFile, v5 .. "#imageFilename")
    v13 = getXMLString(xmlFile, v5 .. "#imageSize")
    v12 = GuiUtils.get2DArray(v13, {2048, 2048})
    v15 = getXMLString(xmlFile, v5 .. "#imageUVs")
    v14 = Utils.getNoNil(v15, "0 0 1 1")
    v13 = GuiUtils.getUVs(v14, v12)
    v15 = getXMLString(xmlFile, v5 .. "#psn_type")
    v14 = Utils.getNoNil(v15, "")
    if v6 ~= nil and v7 ~= nil then
      if v14 == "P" then
        -- if not v1 then goto L173 end
      end
      v15 = v15:getText("achievement_name" .. v7)
      v16 = v16:getText("achievement_desc" .. v7)
      v20 = v20:getMeasuringUnit(true)
      v17 = string.gsub(...)
      v20 = v20:getCurrencySymbol(true)
      v17 = string.gsub(...)
      self:addAchievement(v6, v7, v15, v17, v8, v9, v10, v11, v13)
    end
  end
  delete(xmlFile)
  v5 = areAchievementsAvailable()
  if v5 then
    self:loadAchievementsState(false)
  end
  return true
end
function AchievementManager:loadMapData()
  if g_currentMission.missionInfo.isNewSPCareer then
    self.startPlayTime = nil
    self.startMoney = nil
    self.startFieldJobMissionCount = nil
    self.startCultivatedHectares = nil
    self.startSownHectares = nil
    self.startFertilizedHectares = nil
    self.startThreshedHectares = nil
    self.startCutTreeCount = nil
    self.startBreedCowsCount = nil
    self.startBreedSheepCount = nil
    self.startBreedPigsCount = nil
    self.startBreedChickenCount = nil
    self.startPetDogCount = nil
    self.startTractorDistance = nil
    self.startTruckDistance = nil
    self.startCarDistance = nil
    self.repairVehicleCount = nil
    self.repaintVehicleCount = nil
    self.startHorseDistance = nil
    self.startHorseJumpCount = nil
    self.startSoldCottonBales = nil
    self.startWrappedBales = nil
  else
    local v1 = v1:farmStats()
    local v5 = v1:getTotalValue("playTime")
    local v2 = math.floor(v5 / 60 + 0.0001)
    self.startPlayTime = v2
    v2 = v2:getFarmById(0)
    self.startMoney = v2.money
    local v3 = v1:getTotalValue("fieldJobMissionCount")
    self.startFieldJobMissionCount = v3
    v3 = v1:getTotalValue("cultivatedHectares")
    self.startCultivatedHectares = v3
    v3 = v1:getTotalValue("sownHectares")
    self.startSownHectares = v3
    v3 = v1:getTotalValue("sprayedHectares")
    self.startFertilizedHectares = v3
    v3 = v1:getTotalValue("threshedHectares")
    self.startThreshedHectares = v3
    v3 = v1:getTotalValue("cutTreeCount")
    self.startCutTreeCount = v3
    v3 = v1:getTotalValue("breedCowsCount")
    self.startBreedCowsCount = v3
    v3 = v1:getTotalValue("breedSheepCount")
    self.startBreedSheepCount = v3
    v3 = v1:getTotalValue("breedPigsCount")
    self.startBreedPigsCount = v3
    v3 = v1:getTotalValue("breedChickenCount")
    self.startBreedChickenCount = v3
    v3 = v1:getTotalValue("petDogCount")
    self.startPetDogCount = v3
    v3 = v1:getTotalValue("tractorDistance")
    self.startTractorDistance = v3
    v3 = v1:getTotalValue("truckDistance")
    self.startTruckDistance = v3
    v3 = v1:getTotalValue("carDistance")
    self.startCarDistance = v3
    v3 = v1:getTotalValue("repairVehicleCount")
    self.startRepairVehicleCount = v3
    v3 = v1:getTotalValue("repaintVehicleCount")
    self.startRepaintVehicleCount = v3
    v3 = v1:getTotalValue("horseDistance")
    self.startHorseDistance = v3
    v3 = v1:getTotalValue("horseJumpCount")
    self.startHorseJumpCount = v3
    v3 = v1:getTotalValue("soldCottonBales")
    self.startSoldCottonBales = v3
    v3 = v1:getTotalValue("wrappedBales")
    self.startWrappedBales = v3
  end
  self.fillTypeAchievements = {}
  v2 = v2:getFillTypes()
  for v4, v5 in ipairs(...) do
    if not (v5.achievementName ~= nil) then
      continue
    end
    if not (self.achievementListByName[v5.achievementName] ~= nil) then
      continue
    end
    if not g_currentMission.missionInfo.isNewSPCareer then
    end
    table.insert(self.fillTypeAchievements, v7)
  end
  return true
end
function AchievementManager:addAchievement(id, idName, name, description, score, targetScore, showScore, imageFilename, imageUVs)
  local v11 = tostring(id)
  table.insert(self.achievementList, {id = v11, idName = idName, name = name, description = description, score = score, targetScore = targetScore, showScore = showScore, imageFilename = imageFilename, imageUVs = imageUVs, unlocked = false})
  self.achievementListById[id] = {id = v11, idName = idName, name = name, description = description, score = score, targetScore = targetScore, showScore = showScore, imageFilename = imageFilename, imageUVs = imageUVs, unlocked = false}
  self.achievementListByName[idName] = {id = v11, idName = idName, name = name, description = description, score = score, targetScore = targetScore, showScore = showScore, imageFilename = imageFilename, imageUVs = imageUVs, unlocked = false}
  self.numberOfAchievements = self.numberOfAchievements + 1
  return {id = v11, idName = idName, name = name, description = description, score = score, targetScore = targetScore, showScore = showScore, imageFilename = imageFilename, imageUVs = imageUVs, unlocked = false}
end
function AchievementManager:resetAchievementsState()
  self.numberOfUnlockedAchievements = 0
  for v4, v5 in pairs(self.achievementList) do
    v5.unlocked = false
  end
  self.achievementsValid = false
end
function AchievementManager:loadAchievementsState(showGui)
  self.numberOfUnlockedAchievements = 0
  for v5, v6 in pairs(self.achievementList) do
    local v9 = tonumber(v6.id)
    local v8 = getAchievement(...)
    v6.unlocked = v8
    if not v6.unlocked then
      continue
    end
    if not v6.unlocked and showGui then
      v8 = hasNativeAchievementGUI()
      if not v8 then
        v8:publish(MessageType.ACHIEVEMENT_UNLOCKED, v6.name, v6.description, v6.imageFilename, v6.imageUVs)
      end
    end
    self.numberOfUnlockedAchievements = self.numberOfUnlockedAchievements + 1
  end
  self.achievementsValid = true
end
function AchievementManager:updatePlates()
  if self.achievementPlates ~= nil then
    local achievementsParentId = getChild(self.achievementPlates, "achievements")
    if achievementsParentId ~= 0 then
      local numChildren = getNumOfChildren(achievementsParentId)
      -- TODO: structure LOP_FORNPREP (pc 19, target 55)
      local v6 = getChildAt(achievementsParentId, 0)
      local v7 = getUserAttribute(v6, "id")
      if v7 ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L49
        -- if not v0.achievementListById[v7].unlocked then goto L49 end
        setVisibility(v6, true)
      else
        setVisibility(v6, false)
      end
      -- TODO: structure LOP_FORNLOOP (pc 54, target 20)
    end
  end
end
function AchievementManager:handleStandardScoreAchievement(idName, currentScore, startScore)
  if self.achievementListByName[idName] ~= nil and not self.achievementListByName[idName].unlocked then
    if not g_currentMission.missionInfo.isNewSPCareer and startScore ~= nil and currentScore == startScore then
    end
    if not v5 then
      v4.score = currentScore
      local v7 = tonumber(v4.id)
      setAchievementProgress(v7, v4.score, v4.targetScore)
    end
  end
end
function AchievementManager:tryUnlock(idName, score)
  if self.achievementListByName[idName] ~= nil and not self.achievementListByName[idName].unlocked then
    self.achievementListByName[idName].score = score
    local v5 = tonumber(self.achievementListByName[idName].id)
    setAchievementProgress(v5, score, self.achievementListByName[idName].targetScore)
  end
end
function AchievementManager:update(dt)
  local v2 = areAchievementsAvailable()
  if not v2 then
    return
  end
  v2 = getHaveAchievementsChanged()
  if v2 then
    self.achievementsValid = false
  end
  if not self.achievementsValid then
    self:loadAchievementsState(true)
  end
  if g_currentMission ~= nil then
    v2 = v2:isa(FSCareerMissionInfo)
    if v2 and not g_currentMission.missionDynamicInfo.isMultiplayer and g_currentMission.gameStarted then
      self:updateAchievements(dt)
    end
  end
end
function AchievementManager:updateAchievements(dt)
  self.achievementTimer = self.achievementTimer + dt
  if self.achievementTimeInterval <= self.achievementTimer then
    local v4 = v4:getFarmId()
    local v2 = v2:getFarmById(...)
    if v2 == nil then
      return
    end
    local v10 = v2.stats:getTotalValue("playTime")
    local v7 = math.floor(v10 / 60 + 0.0001)
    self:handleStandardScoreAchievement("PlayTime", v7, self.startPlayTime)
    self:handleStandardScoreAchievement("Money", v2.money, self.startMoney)
    v4 = v2.stats:getTotalValue("cultivatedHectares")
    self:handleStandardScoreAchievement("CultivateFirst", v4, self.startCultivatedHectares)
    self:handleStandardScoreAchievement("Cultivate", v4, self.startCultivatedHectares)
    local v5 = v2.stats:getTotalValue("sownHectares")
    self:handleStandardScoreAchievement("SowFirst", v5, self.startSownHectares)
    self:handleStandardScoreAchievement("Sow", v5, self.startSownHectares)
    local v6 = v2.stats:getTotalValue("sprayedHectares")
    self:handleStandardScoreAchievement("FertilizeFirst", v6, self.startFertilizedHectares)
    self:handleStandardScoreAchievement("Fertilize", v6, self.startFertilizedHectares)
    v7 = v2.stats:getTotalValue("threshedHectares")
    self:handleStandardScoreAchievement("HarvestedFirst", v7, self.startThreshedHectares)
    self:handleStandardScoreAchievement("Harvested", v7, self.startThreshedHectares)
    local v11 = v2.stats:getTotalValue("breedCowsCount")
    self:handleStandardScoreAchievement("BreedCows", v11, self.startBreedCowsCount)
    v11 = v2.stats:getTotalValue("breedSheepCount")
    self:handleStandardScoreAchievement("BreedSheep", v11, self.startBreedSheepCount)
    v11 = v2.stats:getTotalValue("breedPigsCount")
    self:handleStandardScoreAchievement("BreedPigs", v11, self.startBreedPigsCount)
    v11 = v2.stats:getTotalValue("breedChickenCount")
    self:handleStandardScoreAchievement("BreedChicken", v11, self.startBreedChickenCount)
    v11 = v2.stats:getTotalValue("tractorDistance")
    self:handleStandardScoreAchievement("TractorDriving", v11, self.startTractorDistance)
    v11 = v2.stats:getTotalValue("truckDistance")
    self:handleStandardScoreAchievement("TruckDriving", v11, self.startTruckDistance)
    v11 = v2.stats:getTotalValue("carDistance")
    self:handleStandardScoreAchievement("CarDriving", v11, self.startCarDistance)
    local v8 = v2.stats:getTotalValue("horseDistance")
    self:handleStandardScoreAchievement("HorseRidingFirst", v8, self.startHorseDistance)
    self:handleStandardScoreAchievement("HorseRiding", v8, self.startHorseDistance)
    for v12, v13 in ipairs(self.fillTypeAchievements) do
      self:handleStandardScoreAchievement(v13.name, v13.fillType.totalAmount, v13.startValue)
    end
    self.achievementTimer = 0
  end
end
