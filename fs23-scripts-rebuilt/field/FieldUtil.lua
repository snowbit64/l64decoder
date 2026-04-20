-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldUtil = {FILTER_EMPTY = {}}
function FieldUtil.onCreate(_, id)
  local v5 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 7, target 32)
  v5 = getChildAt(id, 0)
  local field = Field.new()
  local v7 = field:load(v5)
  if v7 then
    v7:addField(field)
  else
    field:delete()
  end
  -- TODO: structure LOP_FORNLOOP (pc 31, target 8)
end
function FieldUtil.initTerrain(terrainDetailId)
  local v4, v5, v6 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
  local v7 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  local v8 = DensityMapModifier.new(v4, v5, v6, g_currentMission.terrainRootNode)
  u0 = v8
  u1 = v7
  if Platform.gameplay.usePlowCounter then
    local v8, v9, v10 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
    local v11 = DensityMapModifier.new(v8, v9, v10, g_currentMission.terrainRootNode)
    u2 = v11
    v11 = DensityMapFilter.new(v8, v9, v10)
    u3 = v11
    v11:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  if Platform.gameplay.useLimeCounter then
    v8, v9, v10 = v2:getDensityMapData(FieldDensityMap.LIME_LEVEL)
    v11 = DensityMapModifier.new(v8, v9, v10, v3)
    u4 = v11
    v11 = DensityMapFilter.new(v8, v9, v10)
    u5 = v11
    v11:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  v8, v9, v10 = v8:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v11 = DensityMapFilter.new(v8, v9, v10)
  u6 = v11
  v11:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  v11 = v11:getFruitTypeByIndex(FruitType.WHEAT)
  local v12 = DensityMapModifier.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v3)
  u7 = v12
  local v12, v13, v14 = v12:getDensityMapData()
  if v12 ~= nil then
    local v15 = DensityMapModifier.new(v12, v13, v14, v3)
    u8 = v15
    v15 = DensityMapFilter.new(u8)
    u9 = v15
    u10 = 2 ^ v14 - 1
  end
end
function FieldUtil.getSprayFactor(field)
  local v1, v2 = FieldUtil.getMeasurementPositionOfField(field)
  v3:setParallelogramWorldCoords(v1 - 1, v2 - 1, 2, 0, 0, 2, DensityCoordType.POINT_VECTOR_VECTOR)
  local v3, v4, v5 = v3:executeGet()
  return v3 / v4 * u1
end
function FieldUtil:getPlowFactor(v1)
  if not Platform.gameplay.usePlowCounter then
    return 1
  end
  local v2 = v2:getFruitTypeByIndex(self.fruitType)
  if v1 ~= true then
    if v2 ~= nil then
      -- if not v2.lowSoilDensityRequired then goto L22 end
    end
    if not g_currentMission.missionInfo.plowingRequiredEnabled then
      return 1
    end
  end
  local v3, v4 = FieldUtil.getMeasurementPositionOfField(self)
  v5:setParallelogramWorldCoords(v3 - 1, v4 - 1, 2, 0, 0, 2, DensityCoordType.POINT_VECTOR_VECTOR)
  local v5, v6, v7 = v5:executeGet(u1, u2)
  return v6 / v7
end
function FieldUtil:getLimeFactor()
  if not Platform.gameplay.useLimeCounter then
    return 1
  end
  local v1 = v1:getFruitTypeByIndex(self.fruitType)
  if g_currentMission.missionInfo.limeRequired then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L22
    -- if v1.growthRequiresLime then goto L22 end
  end
  return 1
  local v2, v3 = FieldUtil.getMeasurementPositionOfField(self)
  v4:setParallelogramWorldCoords(v2 - 1, v3 - 1, 2, 0, 0, 2, DensityCoordType.POINT_VECTOR_VECTOR)
  local v4, v5, v6 = v4:executeGet(u1, u2)
  return v5 / v6
end
function FieldUtil.getWeedFactor(field)
  local v1, v2 = FieldUtil.getMeasurementPositionOfField(field)
  local v5 = FSDensityMapUtil.getWeedFactor(v1 - 1, v2 - 1, v1 + 1, v2 - 1, v1 - 1, v2 + 1)
  return 1 - v5
end
function FieldUtil.getStubbleFactor(field)
  local v1, v2 = FieldUtil.getMeasurementPositionOfField(field)
  return FSDensityMapUtil.getStubbleFactor(v1 - 1, v2 - 1, v1 + 1, v2 - 1, v1 - 1, v2 + 1)
end
function FieldUtil.getRollerFactor(field)
  local v1, v2 = FieldUtil.getMeasurementPositionOfField(field)
  return FSDensityMapUtil.getRollerFactor(v1 - 1, v2 - 1, v1 + 1, v2 - 1, v1 - 1, v2 + 1)
end
function FieldUtil:updateFieldPartitions(v1, v2)
  if v1 == nil then
    return
  end
  local v3 = Utils.getNoNil(v2, 400)
  local v4 = getNumOfChildren(self.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 16, target 176)
  local v8 = getChildAt(self.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  local v20, v21, v22, v23, v24, v25 = MathUtil.getXZWidthAndHeight(v11, v13, v14, v16, v17, v19)
  local v26 = MathUtil.vector2Length(v22, v23)
  local v27 = MathUtil.vector2Length(v24, v25)
  local v28, v29, v30 = MathUtil.crossProduct(v22, 0, v23, v24, 0, v25)
  local v31 = math.abs(v29)
  local v35 = math.sqrt(v26 * v31 / v3 * v27)
  local v33 = math.floor(v35 + 0.5)
  v31 = math.max(...)
  local v32 = math.ceil(v31 / v31 * v3)
  for v41 = 0, v31 - 1 do
    for v44 = 0, v32 - 1 do
      if v41 < v31 - 1 then
      else
      end
      if v44 < v32 - 1 then
        v45.heightX = v35 * v38
        v45.heightZ = v36 * v38
      else
        v45.heightX = v35
        v45.heightZ = v36
      end
      table.insert(v1, v45)
      -- TODO: structure LOP_FORNLOOP (pc 173, target 124)
    end
  end
end
function FieldUtil:getMeasurementPositionOfField()
  local v1 = getChildAt(self.fieldDimensions, 0)
  local v2 = getChildAt(v1, 0)
  local v3 = getChildAt(v1, 1)
  local v4, v5, v6 = getWorldTranslation(v2)
  local v7, v8, v9 = getWorldTranslation(v1)
  local v10, v11, v12 = getWorldTranslation(v3)
  return (v4 + v7 + v10) / 3, (v6 + v9 + v12) / 3
end
function FieldUtil:getCenterOfField()
  local v4 = getNumOfChildren(self.fieldDimensions)
  -- TODO: structure LOP_FORNPREP (pc 11, target 46)
  local v8 = getChildAt(self.fieldDimensions, 1 - 1)
  local v9 = getChildAt(v8, 0)
  local v10 = getChildAt(v8, 1)
  local v11, v12, v13 = getWorldTranslation(v9)
  local v14, v15, v16 = getWorldTranslation(v8)
  local v17, v18, v19 = getWorldTranslation(v10)
  -- TODO: structure LOP_FORNLOOP (pc 45, target 12)
  if 0 < 0 + 3 then
  end
  return v1, v2
end
function FieldUtil.getMaxHarvestState(field, fruitType)
  local v2 = v2:getFruitTypeByIndex(fruitType)
  if v2 == nil then
    return nil
  end
  local v3, v4 = FieldUtil.getMeasurementPositionOfField(field)
  if v2.preparedGrowthState ~= -1 then
  end
  local v7, v8 = FieldUtil.getFruitArea(v3 - 1, v4 - 1, v3 + 1, v4 - 1, v3 - 1, v4 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, fruitType, v5, v6, 0, 0, 0, false)
  if 0 < v7 then
    -- TODO: structure LOP_FORNPREP (pc 62, target 94)
    local v14, v15 = FieldUtil.getFruitArea(v3 - 1, v4 - 1, v3 + 1, v4 - 1, v3 - 1, v4 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, fruitType, v5, v5, 0, 0, 0, false)
    if 0 < v14 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 93, target 63)
    return v10
  end
  return nil
end
function FieldUtil.getMaxGrowthState(field, fruitType)
  local v2 = v2:getFruitTypeByIndex(fruitType)
  if v2 == nil then
    return nil
  end
  local v5, v6 = FieldUtil.getMeasurementPositionOfField(field)
  if v2.preparedGrowthState ~= -1 then
  end
  -- TODO: structure LOP_FORNPREP (pc 30, target 62)
  local v11, v12 = FieldUtil.getFruitArea(v5 - 1, v6 - 1, v5 + 1, v6 - 1, v5 - 1, v6 + 1, FieldUtil.FILTER_EMPTY, FieldUtil.FILTER_EMPTY, fruitType, 0, 0, 0, 0, 0, false)
  if v4 < v11 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 61, target 31)
  return v3
end
function FieldUtil.getMaxWeedState(field)
  if u0 ~= nil then
    local v3, v4 = FieldUtil.getMeasurementPositionOfField(field)
    v5:setParallelogramWorldCoords(v3 - 1, v4 - 1, 2, 0, 0, 2, DensityCoordType.POINT_VECTOR_VECTOR)
    -- TODO: structure LOP_FORNPREP (pc 26, target 45)
    v8:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    local v8, v9 = v8:executeGet(u2, u3)
    if 0 < v8 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 44, target 27)
    return v1
  end
  return 0
end
function FieldUtil.getFruitArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, terrainDetailRequiredValueRanges, terrainDetailProhibitValueRanges, requiredFruitType, requiredMinGrowthState, requiredMaxGrowthState, prohibitedFruitType, prohibitedMinGrowthState, prohibitedMaxGrowthState, useWindrowed)
  local v16, v17, v18 = v16:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  if requiredFruitType ~= FruitType.UNKNOWN then
    local v19 = v19:getFruitTypeByIndex(requiredFruitType)
    if v19 ~= nil and v19.terrainDataPlaneId ~= nil then
      if useWindrowed then
        return 0, 1
      end
      v15:addRequiredCropType(v19.terrainDataPlaneId, requiredMinGrowthState, requiredMaxGrowthState, v19.startStateChannel, v19.numStateChannels, 0, 0)
    end
  end
  if prohibitedFruitType ~= FruitType.UNKNOWN then
    v19 = v19:getFruitTypeByIndex(prohibitedFruitType)
    if v19 ~= nil and v19.terrainDataPlaneId ~= nil then
      v15:addProhibitedCropType(v19.terrainDataPlaneId, prohibitedMinGrowthState, prohibitedMaxGrowthState, v19.startStateChannel, v19.numStateChannels, v17, v18)
    end
  end
  for v22, v23 in pairs(terrainDetailRequiredValueRanges) do
    v15:addRequiredGroundValue(v23[1], v23[2], v23[3], v23[4])
  end
  for v22, v23 in pairs(terrainDetailProhibitValueRanges) do
    v15:addProhibitedGroundValue(v23[1], v23[2], v23[3], v23[4])
  end
  local v19, v20, v21, v22, v23, v24 = MathUtil.getXZWidthAndHeight(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return v15:getParallelogram(v19, v20, v21, v22, v23, v24, true)
end
function FieldUtil.setAreaFruit(dimensions, fruitTypeIndex, state)
  local numDimensions = getNumOfChildren(dimensions)
  -- TODO: structure LOP_FORNPREP (pc 7, target 49)
  local v7 = getChildAt(dimensions, 1 - 1)
  local v8 = getChildAt(v7, 0)
  local v9 = getChildAt(v7, 1)
  local v10, v11, v12 = getWorldTranslation(v8)
  local v13, v14, v15 = getWorldTranslation(v7)
  local v16, v17, v18 = getWorldTranslation(v9)
  FieldUtil.setFruit(v10, v12, v13, v15, v16, v18, fruitTypeIndex, state)
  -- TODO: structure LOP_FORNLOOP (pc 48, target 8)
end
function FieldUtil.setFruit(x, z, xWidth, zWidth, xHeight, zHeight, fruitTypeIndex, state)
  local v8 = v8:getFruitTypeByIndex(fruitTypeIndex)
  v9:resetDensityMapAndChannels(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels)
  v9:setParallelogramWorldCoords(x, z, xWidth, zWidth, xHeight, zHeight, DensityCoordType.POINT_POINT_POINT)
  v9:executeSet(state)
end
