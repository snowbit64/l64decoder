-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeedMission = {REWARD_PER_HA = 450}
local WeedMission_mt = Class(WeedMission, AbstractFieldMission)
InitStaticObjectClass(WeedMission, "WeedMission", ObjectIds.MISSION_WEED)
function WeedMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.WEEDER] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = WeedMission.REWARD_PER_HA
  v3.reimbursementPerHa = 0
  local v4, v5, v6 = v4:getDensityMapData()
  local v7 = DensityMapModifier.new(v4, v5, v6, v3.mission.terrainRootNode)
  v3.completionModifier = v7
  v7 = DensityMapFilter.new(v3.completionModifier)
  v3.completionFilter = v7
  v7:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  return v3
end
function WeedMission:completeField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 39)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, self.fieldState, self.growthState, self.sprayFactor, self.fieldSpraySet, self.fieldPlowFactor, 0)
  -- TODO: structure LOP_FORNLOOP (pc 38, target 11)
end
function WeedMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  if v5 ~= 3 then
    return false
  end
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  if v9 == nil then
    return false
  end
  if v9.minHarvestingGrowthState == 2 and v9.maxHarvestingGrowthState == 2 and v9.cutState == 3 then
    return false
  end
  local v10 = FieldUtil.getMaxGrowthState(self, v8)
  if v10 ~= 0 then
    -- if 2 >= v10 then goto L42 end
  end
  return false
  return true, FieldManager.FIELDSTATE_GROWING, v10, v5
end
function WeedMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_weeding")
  v2 = v2:getText("fieldJob_desc_action_weeding")
  v3 = v3:getText("fieldJob_desc_weeding")
  v2 = string.format(v3, self.field.fieldId)
  return {location = v2, jobType = v2, action = v2, description = v2}
end
function WeedMission.getIsAvailable(v0)
  if g_currentMission.environment ~= nil and g_currentMission.environment.currentSeason == Environment.SEASON.WINTER then
    return false
  end
  local v3 = v3:superClass()
  return v3.getIsAvailable(v0)
end
function WeedMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function WeedMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_WEEDED and v1 ~= FieldManager.FIELDEVENT_SPRAYED and v1 ~= FieldManager.FIELDEVENT_GROWN then
  end
  return not v3
end
v1:registerMissionType(WeedMission, "weed")
