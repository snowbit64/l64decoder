-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FertilizeMission = {REWARD_PER_HA = 320, REIMBURSEMENT_PER_HA = 1150}
local FertilizeMission_mt = Class(FertilizeMission, AbstractFieldMission)
InitStaticObjectClass(FertilizeMission, "FertilizeMission", ObjectIds.MISSION_FERTILIZE)
function FertilizeMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.SPRAYER] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = FertilizeMission.REWARD_PER_HA
  v3.reimbursementPerHa = FertilizeMission.REIMBURSEMENT_PER_HA
  v3.reimbursementPerDifficulty = true
  local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
  local v7 = DensityMapModifier.new(v4, v5, v6, v3.mission.terrainRootNode)
  v3.completionModifier = v7
  v7 = DensityMapFilter.new(v3.completionModifier)
  v3.completionFilter = v7
  local v7, v8, v9 = v7:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v10 = DensityMapFilter.new(v7, v8, v9)
  v3.completionMaskFilter = v10
  v10:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  return v3
end
function FertilizeMission:completeField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 48)
  local v12 = math.min(self.sprayFactor * self.sprayLevelMaxValue + 1, self.sprayLevelMaxValue)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, self.fieldState, self.growthState, v12, true, self.fieldPlowFactor)
  -- TODO: structure LOP_FORNLOOP (pc 47, target 11)
end
function FertilizeMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  local v10 = v10:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  if v9 == nil then
    return false
  end
  if v9.minHarvestingGrowthState == 2 and v9.maxHarvestingGrowthState == 2 and v9.cutState == 3 then
    return false
  end
  if v2 then
    return false
  end
  if v10 <= v11 then
    return false
  end
  if v5 ~= 2 then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x8000000f -> L47
  end
  return false
  local v12 = FieldUtil.getMaxGrowthState(self, v8)
  if v12 ~= 0 then
    -- if v9.minHarvestingGrowthState > v12 then goto L60 end
  end
  return false
  return true, FieldManager.FIELDSTATE_GROWING, v12
end
function FertilizeMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_fertilizing")
  v2 = v2:getText("fieldJob_desc_action_fertilizing")
  v3 = v3:getText("fieldJob_desc_fertilizing")
  v2 = string.format(v3, self.field.fieldId)
  v3 = v3:getText("fieldJob_desc_fillTheUnit")
  local v5 = v5:getFillTypeByIndex(FillType.FERTILIZER)
  v2 = string.format(v3, v5.title)
  return {location = v2, jobType = v2, action = v2, description = v2, extraText = v2}
end
function FertilizeMission.getIsAvailable(v0)
  if g_currentMission.environment ~= nil and g_currentMission.environment.currentSeason == Environment.SEASON.WINTER then
    return false
  end
  local v3 = v3:superClass()
  return v3.getIsAvailable(v0)
end
function FertilizeMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v10:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  v11:setValueCompareParams(DensityValueCompareType.GREATER, self.sprayFactor * self.sprayLevelMaxValue)
  local v11, v12, v13 = v11:executeGet(self.completionFilter, self.completionMaskFilter)
  return v12, v13
end
function FertilizeMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_GROWN and v1 == FieldManager.FIELDEVENT_FERTILIZED then
  end
  return v2
end
v1:registerMissionType(FertilizeMission, "fertilize")
