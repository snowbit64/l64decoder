-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CultivateMission = {REWARD_PER_HA = 1500}
local CultivateMission_mt = Class(CultivateMission, AbstractFieldMission)
InitStaticObjectClass(CultivateMission, "CultivateMission", ObjectIds.MISSION_CULTIVATE)
function CultivateMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.CULTIVATOR] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = CultivateMission.REWARD_PER_HA
  v3.reimbursementPerHa = 0
  local v4, v5, v6 = v4:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v7 = DensityMapModifier.new(v4, v5, v6, v3.mission.terrainRootNode)
  v3.completionModifier = v7
  v7 = DensityMapFilter.new(v3.completionModifier)
  v3.completionFilter = v7
  v7 = v7:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
  local v8 = v8:getFieldGroundValue(FieldGroundType.CULTIVATED)
  v9:setValueCompareParams(DensityValueCompareType.BETWEEN, v7, v8)
  local v9 = v9:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  v3.sprayLevelMaxValue = v9
  return v3
end
function CultivateMission:finish(...)
  local v2 = v2:superClass()
  v2.finish(...)
  self.field.fruitType = FruitType.UNKNOWN
end
function CultivateMission:completeField()
  if self.field.fruitType == FruitType.OILSEEDRADISH then
    local v2 = math.min(self.sprayFactor * self.sprayLevelMaxValue + 1, self.sprayLevelMaxValue)
  end
  local v5 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 32, target 55)
  v5:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_CULTIVATED, 0, v1, self.fieldSpraySet, self.fieldPlowFactor)
  -- TODO: structure LOP_FORNLOOP (pc 54, target 33)
end
function CultivateMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  local v10, v11 = FieldUtil.getMeasurementPositionOfField(self)
  if v9 == nil then
    return false
  end
  if v9.minHarvestingGrowthState == 2 and v9.maxHarvestingGrowthState == 2 and v9.cutState == 3 then
    local v12, v13 = FieldUtil.getFruitArea(v10 - 1, v11 - 1, v10 + 1, v11 - 1, v10 - 1, v11 + 1, {}, {}, v8, 1, 2, 0, 0, 0, false)
    if 0 < v12 then
      return true, FieldManager.FIELDSTATE_GROWING, 2
    end
  end
  v12, v13 = FieldUtil.getFruitArea(v10 - 1, v11 - 1, v10 + 1, v11 - 1, v10 - 1, v11 + 1, {}, {}, v8, v9.cutState, v9.cutState, 0, 0, 0, false)
  if 0 < v12 then
    return true, FieldManager.FIELDSTATE_HARVESTED
  end
  local v15, v16 = FieldUtil.getFruitArea(v10 - 1, v11 - 1, v10 + 1, v11 - 1, v10 - 1, v11 + 1, {}, {}, v8, v9.witheredState, v9.witheredState, 0, 0, 0, false)
  if 0 < v15 then
    return true, FieldManager.FIELDSTATE_GROWING, v9.witheredState
  end
  return false
end
function CultivateMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_cultivating")
  v2 = v2:getText("fieldJob_desc_action_cultivating")
  v3 = v3:getText("fieldJob_desc_cultivating")
  v2 = string.format(v3, self.field.fieldId)
  return {location = v2, jobType = v2, action = v2, description = v2}
end
function CultivateMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function CultivateMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_PLOWED and v1 == FieldManager.FIELDEVENT_CULTIVATED then
  end
  return v2
end
v1:registerMissionType(CultivateMission, "cultivate")
