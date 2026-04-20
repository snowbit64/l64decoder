-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SprayMission = {REWARD_PER_HA = 250, REIMBURSEMENT_PER_HA = 1000}
local SprayMission_mt = Class(SprayMission, AbstractFieldMission)
InitStaticObjectClass(SprayMission, "SprayMission", ObjectIds.MISSION_SPRAY)
function SprayMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.SPRAYER] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = SprayMission.REWARD_PER_HA
  v3.reimbursementPerHa = SprayMission.REIMBURSEMENT_PER_HA
  v3.reimbursementPerDifficulty = true
  if isServer then
    local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v7, v8, v9 = v7:getDensityMapData()
    local v10 = DensityMapModifier.new(v7, v8, v9, v3.mission.terrainRootNode)
    v3.completionModifier = v10
    v10 = DensityMapFilter.new(v4, v5, v6)
    v3.completionMaskFilter = v10
    v10:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v10 = DensityMapFilter.new(v3.completionModifier)
    v3.completionFilter = v10
  end
  return v3
end
function SprayMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  if self.status == AbstractMission.STATUS_RUNNING then
    local v6 = self:getNewWeedState()
    v3:setValueCompareParams(...)
  end
  return true
end
function SprayMission:resetField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 40)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, self.fieldState, self.growthState, self.sprayFactor, self.fieldSpraySet, self.fieldPlowFactor, self.weedState)
  -- TODO: structure LOP_FORNLOOP (pc 39, target 11)
end
function SprayMission:completeField()
  local weedState = self:getNewWeedState()
  local v5 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 13, target 42)
  v5:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, self.fieldState, self.growthState, self.sprayFactor, self.fieldSpraySet, self.fieldPlowFactor, weedState)
  -- TODO: structure LOP_FORNLOOP (pc 41, target 14)
end
function SprayMission:getNewWeedState()
  local v4 = v4:getHerbicideReplacements()
  for v6, v7 in ipairs(v4.weed.replacements) do
    if not (v6 == v1) then
      continue
    end
    return v7
  end
  return v1
end
function SprayMission:start(...)
  local v2 = v2:superClass()
  local v1 = v2.start(...)
  if not v1 then
    return false
  end
  local v4 = self:getNewWeedState()
  v1:setValueCompareParams(...)
  return true
end
function SprayMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  if v9 == nil then
    return false
  end
  if v9.minHarvestingGrowthState == 2 and v9.maxHarvestingGrowthState == 2 and v9.cutState == 3 then
    return false
  end
  local v10 = FieldUtil.getMaxGrowthState(self, v8)
  if v10 ~= 0 then
    -- if v9.minHarvestingGrowthState > v10 then goto L39 end
  end
  return false
  local v13 = v13:getHerbicideReplacements()
  if v13.weed.replacements[v5] ~= nil and v13.weed.replacements[v5] == 0 then
  end
  return v12, FieldManager.FIELDSTATE_GROWING, v10, v5
end
function SprayMission.getIsAvailable(v0)
  if g_currentMission.environment ~= nil and g_currentMission.environment.currentSeason == Environment.SEASON.WINTER then
    return false
  end
  local v3 = v3:superClass()
  return v3.getIsAvailable(v0)
end
function SprayMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_spraying")
  v2 = v2:getText("fieldJob_desc_action_spraying")
  v3 = v3:getText("fieldJob_desc_spraying")
  v2 = string.format(v3, self.field.fieldId)
  v3 = v3:getText("fieldJob_desc_fillTheUnit")
  local v5 = v5:getFillTypeByIndex(FillType.HERBICIDE)
  v2 = string.format(v3, v5.title)
  return {location = v2, jobType = v2, action = v2, description = v2, extraText = v2}
end
function SprayMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter, self.completionMaskFilter)
  return v8, v9
end
function SprayMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_WEEDED and v1 ~= FieldManager.FIELDEVENT_SPRAYED and v1 ~= FieldManager.FIELDEVENT_GROWN then
  end
  return not v3
end
v1:registerMissionType(SprayMission, "spray")
