-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowMission = {REWARD_PER_HA = 2100}
local PlowMission_mt = Class(PlowMission, AbstractFieldMission)
InitStaticObjectClass(PlowMission, "PlowMission", ObjectIds.MISSION_PLOW)
function PlowMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.PLOW] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = PlowMission.REWARD_PER_HA
  v3.reimbursementPerHa = 0
  local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v7 = DensityMapModifier.new(v4, v5, v6, v3.mission.terrainRootNode)
  v3.completionModifier = v7
  v7 = DensityMapFilter.new(v3.completionModifier)
  v3.completionFilter = v7
  v7 = v7:getFieldGroundValue(FieldGroundType.PLOWED)
  v8:setValueCompareParams(DensityValueCompareType.EQUAL, v7)
  return v3
end
function PlowMission:finish(...)
  local v2 = v2:superClass()
  v2.finish(...)
  self.field.fruitType = FruitType.UNKNOWN
end
function PlowMission:completeField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 34)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_PLOWED, 0, self.sprayFactor, self.fieldSpraySet, self.plowLevelMaxValue)
  -- TODO: structure LOP_FORNLOOP (pc 33, target 11)
end
function PlowMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  local v10, v11 = FieldUtil.getMeasurementPositionOfField(self)
  if 0 >= v3 then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L19
  end
  return false
  local v12, v13 = FieldUtil.getFruitArea(v10 - 1, v11 - 1, v10 + 1, v11 - 1, v10 - 1, v11 + 1, {}, {}, v8, v9.cutState, v9.cutState, 0, 0, 0, false)
  if 0 < v12 then
    return true, FieldManager.FIELDSTATE_HARVESTED
  end
  local v15, v16 = FieldUtil.getFruitArea(v10 - 1, v11 - 1, v10 + 1, v11 - 1, v10 - 1, v11 + 1, {}, {}, v8, v9.numGrowthStates, v9.numGrowthStates, 0, 0, 0, false)
  if 0 < v15 then
    return true, FieldManager.FIELDSTATE_GROWING, v9.numGrowthStates + 1
  end
  return false
end
function PlowMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_plowing")
  v2 = v2:getText("fieldJob_desc_action_plowing")
  v3 = v3:getText("fieldJob_desc_plowing")
  v2 = string.format(v3, self.field.fieldId)
  return {location = v2, jobType = v2, action = v2, description = v2}
end
function PlowMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function PlowMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_PLOWED and v1 == FieldManager.FIELDEVENT_CULTIVATED then
  end
  return v2
end
v1:registerMissionType(PlowMission, "plow")
