-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSDensityMapUtil = {}
DensityMapModifier.new = function(...)
  local v0 = u0(...)
  v0:setPolygonRoundingMode(DensityRoundingMode.INCLUSIVE)
  return v0
end
FSDensityMapUtil.functionCache = {}
function FSDensityMapUtil.clearCache()
  FSDensityMapUtil.functionCache = {}
end
function FSDensityMapUtil.getFieldDataAtWorldPosition(x, y, z)
  local v4, v5, v6 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v7 = getDensityAtWorldPos(v4, x, y, z)
  local v9 = bitShiftRight(v7, v5)
  local v8 = bitAND(v9, 2 ^ v6 - 1)
  if v8 == 0 then
  end
  return true, v7, v8
end
function FSDensityMapUtil.cutFruitArea(fruitIndex, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, destroySpray, useMinForageState, excludedSprayType, setsWeeds, limitToField)
  local v12 = v12:getFruitTypeByIndex(fruitIndex)
  if v12.terrainDataPlaneId == nil then
    return 0
  end
  if FSDensityMapUtil.functionCache.cutFruitArea == nil then
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v22 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.SOWN)
    v22 = DensityMapFilter.new(v19, v20, v21, g_currentMission.terrainRootNode)
    v22:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v22 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    v22 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v22 = DensityMapModifier.new(v19, v20, v21, g_currentMission.terrainRootNode)
    if Platform.gameplay.useRolling then
      local v22, v23, v24 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
      local v25 = DensityMapModifier.new(v22, v23, v24, g_currentMission.terrainRootNode)
      v25 = DensityMapFilter.new(v22, v23, v24, g_currentMission.terrainRootNode)
      v25:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    end
    if Platform.gameplay.usePlowCounter then
      v22, v23, v24 = v15:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      v25 = DensityMapModifier.new(v22, v23, v24, v14)
      v13.plowLevelModifier = v25
      v25 = DensityMapFilter.new(v22, v23, v24, v14)
      v13.plowLevelFilter = v25
      v25:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    end
    if Platform.gameplay.useLimeCounter then
      v22, v23, v24 = v15:getDensityMapData(FieldDensityMap.LIME_LEVEL)
      v25 = DensityMapModifier.new(v22, v23, v24, v14)
      v13.limeLevelModifier = v25
    end
    if Platform.gameplay.useStubbleShred then
      v22, v23, v24 = v15:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
      v25 = DensityMapModifier.new(v22, v23, v24, v14)
      v13.stubbleShredModifier = v25
      v25 = DensityMapFilter.new(v22, v23, v24, v14)
      v13.stubbleShredFilter = v25
      v25:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    end
    FSDensityMapUtil.functionCache.cutFruitArea = v13
  end
  if v12.cutState == 0 then
    return 0
  end
  if useMinForageState then
  end
  if v13.fruitValueModifiers[fruitIndex] == nil then
    v24 = DensityMapModifier.new(v12.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, g_currentMission.terrainRootNode)
    v24:setReturnValueShift(-1)
    v24 = DensityMapFilter.new(v12.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, g_currentMission.terrainRootNode)
    v13.fruitFilters[fruitIndex] = v24
  end
  v22:setValueCompareParams(DensityValueCompareType.BETWEEN, v15, v12.maxHarvestingGrowthState)
  v21:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v23, v24, v25 = v21:executeGet(v22)
  if v23 == 0 then
    return 0
  end
  v16:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v19:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v26, v27, v28 = v16:executeGet(v22)
  if destroySpray then
    FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, excludedSprayType)
    v16:executeSet(0, v22)
  end
  if 0 < v12.startSprayState then
    local v31 = math.min(v12.startSprayState, v20)
    v16:executeSet(v31, v22, v13.groundTypeFilter)
    FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, excludedSprayType)
  end
  FSDensityMapUtil.removeWeedBlockingState(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if g_currentMission.missionInfo.weedsEnabled then
    -- if not v12.plantsWeed then goto L432 end
    local v36 = FSDensityMapUtil.getWeedFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, fruitIndex)
    FSDensityMapUtil.setSparseWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  else
    FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  if Platform.gameplay.usePlowCounter then
    v17:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    if v12.lowSoilDensityRequired then
      local v35, v36, v37 = v17:executeGet(v22, v18)
    end
    if v12.increasesSoilDensity and v34.plowingRequiredEnabled then
      v17:executeAdd(-1, v22)
    end
  end
  if v12.needsRolling and Platform.gameplay.useRolling then
    v13.rollerLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    local v37, v38, v39 = v13.rollerLevelModifier:executeGet(v22, v13.rollerLevelFilter)
  end
  if v12.consumesLime and v34.limeRequired and Platform.gameplay.useLimeCounter then
    v13.limeLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v36, v37, v38, v39 = v13.limeLevelModifier:executeAdd(-1, v22)
  end
  if Platform.gameplay.useStubbleShred then
    v13.stubbleShredModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v36, v37, v38, v39 = v13.stubbleShredModifier:executeAdd(-1, v22, v13.stubbleShredFilter)
  end
  v35, v36, v37 = v19:executeGet(v22)
  -- TODO: structure LOP_FORNPREP (pc 576, target 592)
  v22:setValueCompareParams(DensityValueCompareType.EQUAL, v15)
  local v43, v44 = v21:executeGet(v22)
  if 0 < v44 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 591, target 577)
  v22:setValueCompareParams(DensityValueCompareType.BETWEEN, v15, v12.maxHarvestingGrowthState)
  if v12.harvestGroundTypeChange ~= nil then
    local v41 = g_currentMission.fieldGroundSystem:getFieldGroundValue(v12.harvestGroundTypeChange)
    v19:executeSet(v41, v22)
  end
  if limitToField then
  end
  local v41, v42, v43 = v21:executeSet(v14, v22, v40)
  if 0 < v42 then
    if v12.lowSoilDensityRequired then
      -- if not v34.plowingRequiredEnabled then goto L648 end
      local v50 = math.abs(v29)
    else
    end
    if v12.needsRolling then
      -- if not Platform.gameplay.useRolling then goto L662 end
      v50 = math.abs(v30)
    else
    end
    if v12.growthRequiresLime then
      -- if not v34.limeRequired then goto L679 end
      -- if not Platform.gameplay.useLimeCounter then goto L679 end
      v50 = math.abs(v31)
    else
    end
    if Platform.gameplay.useStubbleShred then
      v50 = math.abs(v32)
    else
    end
    if v12.beeYieldBonusPercentage ~= 0 then
      v50 = v50:getBeehiveInfluenceFactorAt(startWorldX, startWorldZ)
    end
  end
  if v12.allowsPartialGrowthState then
    local v51 = math.max(v12.maxHarvestingGrowthState - 1, 1)
    return v41 / v51, v43, v46, v44, v45, v33, v47, v48, v49, v39, v38, v35
  end
  return v42, v43, v46, v44, v45, v33, v47, v48, v49, v39, v38, v35
end
function FSDensityMapUtil.getFruitArea(fruitIndex, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, allowPreparing, useMinForageState)
  local v9 = v9:getFruitTypeByIndex(fruitIndex)
  if v9.terrainDataPlaneId == nil then
    return 0, 0
  end
  if FSDensityMapUtil.functionCache.getFruitArea == nil then
    FSDensityMapUtil.functionCache.getFruitArea = {fruitModifiers = {}, fruitFilter = {}}
  end
  if v10.fruitModifiers[fruitIndex] == nil then
    local v13 = DensityMapModifier.new(v9.terrainDataPlaneId, v9.startStateChannel, v9.numStateChannels, g_currentMission.terrainRootNode)
    v13:setReturnValueShift(-1)
    v10.fruitModifiers[fruitIndex] = v13
    local v14 = DensityMapFilter.new(v13)
    v10.fruitFilter[fruitIndex] = v14
  end
  if useMinForageState then
  end
  v11:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12:setValueCompareParams(DensityValueCompareType.BETWEEN, v13, v9.maxHarvestingGrowthState)
  local v14, v15, v16 = v11:executeGet(v12)
  if allowPreparing and 0 <= v9.minPreparingGrowthState and 0 <= v9.maxPreparingGrowthState then
    v12:setValueCompareParams(DensityValueCompareType.BETWEEN, v9.minPreparingGrowthState, v9.maxPreparingGrowthState)
    local v17, v18, v19 = v11:executeGet(v12)
  end
  -- TODO: structure LOP_FORNPREP (pc 133, target 149)
  v12:setValueCompareParams(DensityValueCompareType.EQUAL, v13)
  local v22, v23 = v11:executeGet(v12)
  if 0 < v23 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 148, target 134)
  return v14, v15, v16, v18
end
function FSDensityMapUtil.updateRollerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, angle)
  if not Platform.gameplay.useRolling then
    return 0
  end
  if FSDensityMapUtil.functionCache.updateRollerArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    local v19 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.ROLLED_SEEDBED)
    local v20 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.ROLLER_LINES)
    local v21, v22 = g_currentMission.fieldGroundSystem:getSowableRange()
    local v23, v24 = g_currentMission.fieldGroundSystem:getSowingRange()
    local v25 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v25 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v25 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.BETWEEN, v21, v22)
    v25 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v25 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.EQUAL, v20)
    v25 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.EQUAL, v19)
    v25 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.BETWEEN, v23, v24)
    local v26 = g_currentMission.stoneSystem:getMapHasStones()
    if v26 then
      local v26, v27, v28 = g_currentMission.stoneSystem:getDensityMapData()
      local v29 = g_currentMission.stoneSystem:getMinMaxValues()
      local v30 = DensityMapModifier.new(v26, v27, v28, g_currentMission.terrainRootNode)
      v30:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
      v30 = DensityMapFilter.new(v26, v27, v28, g_currentMission.terrainRootNode)
      v30:setValueCompareParams(DensityValueCompareType.EQUAL, v29)
    end
    v7.firstGrowthStateFilters = {}
    v27 = v27:getFruitTypes()
    for v29, v30 in pairs(...) do
      if not (v30.terrainDataPlaneId ~= nil) then
        continue
      end
      local v31 = DensityMapFilter.new(v30.terrainDataPlaneId, v30.startStateChannel, v30.numStateChannels)
      v31:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
      table.insert(v7.firstGrowthStateFilters, v31)
    end
    FSDensityMapUtil.functionCache.updateRollerArea = v7
  end
  if v7.stoneModifier ~= nil then
    v7.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  end
  v8:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v10:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v11:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  -- TODO: structure LOP_FORNPREP (pc 338, target 370)
  if v14 ~= nil then
    v14:executeAdd(-1, v15, v12, v13[1])
  end
  v26, v27, v28 = v8:executeSet(0, v9, v12, v25)
  v10:executeSet(v20, v12, v25)
  v11:executeSet(angle, v17, v25)
  -- TODO: structure LOP_FORNLOOP (pc 369, target 339)
  if v14 ~= nil then
    v14:executeAdd(-1, v15)
  end
  v22, v23, v24 = v8:executeSet(0, v9, v16)
  v10:executeSet(v19, v16)
  v11:executeSet(angle, v18)
  return v21 + v23
end
function FSDensityMapUtil.updateGrassRollerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, removeStones)
  if FSDensityMapUtil.functionCache.updateGrassRollerArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v19 = g_currentMission.fieldGroundSystem:getFieldSprayValue(FieldSprayType.FERTILIZER)
    local v20 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_TYPE)
    local v21 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    local v22 = v22:getFruitTypeByIndex(FruitType.GRASS)
    local v23 = v23:getFruitTypeByIndex(FruitType.MEADOW)
    local v24 = DensityMapModifier.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, g_currentMission.terrainRootNode)
    v24 = DensityMapFilter.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, g_currentMission.terrainRootNode)
    v24:setValueCompareParams(DensityValueCompareType.GREATER, 1)
    v24 = DensityMapModifier.new(v23.terrainDataPlaneId, v23.startStateChannel, v23.numStateChannels, g_currentMission.terrainRootNode)
    v24 = DensityMapFilter.new(v23.terrainDataPlaneId, v23.startStateChannel, v23.numStateChannels, g_currentMission.terrainRootNode)
    v24:setValueCompareParams(DensityValueCompareType.GREATER, 1)
    v24 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v24 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v24 = DensityMapFilter.new(v13, v14, v15)
    v24:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v24 = DensityMapFilter.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, g_currentMission.terrainRootNode)
    v24:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v24 = DensityMapFilter.new(v23.terrainDataPlaneId, v23.startStateChannel, v23.numStateChannels, g_currentMission.terrainRootNode)
    v24:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v24 = DensityMapFilter.new(v16, v17, v18)
    v24:setValueCompareParams(DensityValueCompareType.GREATER, v19)
    if 0 < v19 then
      v24 = DensityMapFilter.new(v16, v17, v18)
      v24:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v19 - 1)
    end
    v24 = DensityMapFilter.new(v10, v11, v12)
    v7.notMaxSprayLevelFilter = v24
    v24:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v21 - 1)
    v24 = DensityMapFilter.new(v16, v17, v18)
    v7.areaMaskedFilter = v24
    v24:setValueCompareParams(DensityValueCompareType.EQUAL, v20)
    v7.sprayType = v19
    v7.maskValue = v20
    local v25 = g_currentMission.stoneSystem:getMapHasStones()
    if v25 then
      local v25, v26, v27 = g_currentMission.stoneSystem:getDensityMapData()
      local v28 = g_currentMission.stoneSystem:getMinMaxValues()
      local v29 = DensityMapModifier.new(v25, v26, v27, v8)
      v7.stoneModifier = v29
      v29:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
      v29 = DensityMapFilter.new(v25, v26, v27, v8)
      v7.stoneFilter = v29
      v29:setValueCompareParams(DensityValueCompareType.EQUAL, v28)
    end
    FSDensityMapUtil.functionCache.updateGrassRollerArea = v7
  end
  v7.grassModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.meadowModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.sprayLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.sprayTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if removeStones ~= false and v7.stoneModifier ~= nil then
    v7.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  end
  v13:executeSet(v24, v9, v19, v21)
  if v20 ~= nil then
    v13:executeSet(v24, v9, v20, v21)
  end
  v13:executeSet(v24, v11, v19, v21)
  if v20 ~= nil then
    v13:executeSet(v24, v11, v20, v21)
  end
  v13:executeSet(0, v22, v16)
  v13:executeSet(0, v22, v17, v18)
  v25, v26, v27, v28 = v12:executeAdd(1, v22)
  v13:executeSet(v23, v22)
  v8:executeSet(1, v9)
  v10:executeSet(1, v11)
  if removeStones ~= false and v14 ~= nil then
    v14:executeAdd(-1, v15)
  end
  return v27, v28
end
function FSDensityMapUtil.addStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, delta, fieldFilter, customFilter)
  local v10 = g_currentMission.stoneSystem:getMapHasStones()
  if not v10 then
    return
  end
  if FSDensityMapUtil.functionCache.addStoneArea == nil then
    local v12, v13, v14 = v9:getDensityMapData()
    local v15, v16 = v9:getMinMaxValues()
    local v17 = v9:getMaskValue()
    local v18 = DensityMapModifier.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v18 = DensityMapFilter.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v18:setValueCompareParams(DensityValueCompareType.BETWEEN, v17, v16 - 1)
    v18 = DensityMapFilter.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v18:setValueCompareParams(DensityValueCompareType.GREATER, v16)
    FSDensityMapUtil.functionCache.addStoneArea = {stoneModifier = v18, stoneFilter = v18, stoneMaxReachedFilter = v18, stoneMaxValue = v16}
  end
  v10.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if fieldFilter == nil then
    v10.stoneModifier:executeAdd(delta, v10.stoneFilter, customFilter)
  else
    v10.stoneModifier:executeAdd(delta, v10.stoneFilter, fieldFilter, customFilter)
  end
  v11:executeSet(v14, v13)
end
function FSDensityMapUtil.removeStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v9 = g_currentMission.stoneSystem:getMapHasStones()
  if v9 then
    if FSDensityMapUtil.functionCache.removeStoneArea == nil then
      local v11, v12, v13 = g_currentMission.stoneSystem:getDensityMapData()
      local v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
      FSDensityMapUtil.functionCache.removeStoneArea = {stoneModifier = v14}
    end
    v9.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v12, v13, v14 = v9.stoneModifier:executeSet(0)
  end
  return v6, v7
end
function FSDensityMapUtil.getStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v7 = g_currentMission.stoneSystem:getMapHasStones()
  if not v7 then
    return
  end
  if FSDensityMapUtil.functionCache.getStoneArea == nil then
    local v9, v10, v11 = v6:getDensityMapData()
    local v12, v13 = v6:getMinMaxValues()
    local v14 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    -- TODO: structure LOP_FORNPREP (pc 41, target 64)
    local v17 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v17:setValueCompareParams(DensityValueCompareType.EQUAL, v12 + 0)
    table.insert({stoneModifier = v14, stoneFilters = {}}.stoneFilters, v17)
    -- TODO: structure LOP_FORNLOOP (pc 63, target 42)
    FSDensityMapUtil.functionCache.getStoneArea = {stoneModifier = v14, stoneFilters = {}}
  end
  v7.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  -- TODO: structure LOP_FORNPREP (pc 88, target 100)
  v12, v13 = v7.stoneModifier:executeGet(v7.stoneFilters[#v7.stoneFilters])
  if 0 < v12 then
    return #v7.stoneFilters
  end
  -- TODO: structure LOP_FORNLOOP (pc 99, target 89)
  return 0
end
function FSDensityMapUtil.updateStonePickerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, angle)
  local v8 = g_currentMission.stoneSystem:getMapHasStones()
  if not v8 then
    return 0, 0, 0
  end
  if FSDensityMapUtil.functionCache.updateStonePickerArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v17, v18, v19 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v20, v21, v22 = v7:getDensityMapData()
    local v23, v24 = v7:getMinMaxValues()
    local v25 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.CULTIVATED)
    local v26, v27 = g_currentMission.fieldGroundSystem:getSowableRange()
    local v28 = v7:getPickedValue()
    local v29 = DensityMapModifier.new(v20, v21, v22, g_currentMission.terrainRootNode)
    v29 = DensityMapFilter.new(v20, v21, v22, g_currentMission.terrainRootNode)
    v29:setValueCompareParams(DensityValueCompareType.BETWEEN, v23, v24)
    v29 = DensityMapFilter.new(v11, v12, v13, g_currentMission.terrainRootNode)
    v29:setValueCompareParams(DensityValueCompareType.BETWEEN, v26, v27)
    v29 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    v29 = DensityMapModifier.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v29 = DensityMapModifier.new(v17, v18, v19, g_currentMission.terrainRootNode)
    FSDensityMapUtil.functionCache.updateStonePickerArea = {stoneModifier = v29, stoneFilter = v29, sowableFilter = v29, groundTypeModifier = v29, groundAngleModifier = v29, stoneMinValue = v23, cultivatedType = v25, pickedValue = v28, sprayTypeModifier = v29}
  end
  v8.groundTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8.groundAngleModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8.sprayTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v18, v19, v20 = v8.stoneModifier:executeSet(v8.pickedValue, v8.stoneFilter, v8.sowableFilter)
  v8.groundTypeModifier:executeSet(v8.cultivatedType, v8.sowableFilter)
  v8.groundAngleModifier:executeSet(angle or 0, v8.sowableFilter)
  v8.sprayTypeModifier:executeSet(0, v8.sowableFilter)
  v21 = math.max(0, v18 - v19 * (v8.stoneMinValue - 1))
  if 0 < v19 then
  end
  return v21, v19, v20
end
function FSDensityMapUtil.removeFieldArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, deleteAll)
  if FSDensityMapUtil.functionCache.removeFieldArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v22 = DensityMapMultiModifier.new()
    local v23 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v22:addExecuteSet(0, v23)
    local v24 = DensityMapModifier.new(v19, v20, v21, g_currentMission.terrainRootNode)
    v22:addExecuteSet(0, v24)
    local v25 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v22:addExecuteSet(0, v25)
    local v26 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v22:addExecuteSet(0, v26)
    if Platform.gameplay.usePlowCounter then
      local v27, v28, v29 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      local v30 = DensityMapModifier.new(v27, v28, v29, g_currentMission.terrainRootNode)
      v22:addExecuteSet(0, v30)
    end
    if Platform.gameplay.useLimeCounter then
      v27, v28, v29 = v9:getDensityMapData(FieldDensityMap.LIME_LEVEL)
      v30 = DensityMapModifier.new(v27, v28, v29, v8)
      v22:addExecuteSet(0, v30)
    end
    v28 = v28:getFruitTypes()
    for v30, v31 in pairs(...) do
      if not (v31.terrainDataPlaneId ~= nil) then
        continue
      end
      if not deleteAll and not v31.destruction.canBeDestroyed then
        continue
      end
      local v32 = DensityMapModifier.new(v31.terrainDataPlaneId, v31.startStateChannel, v31.numStateChannels, v8)
      v32:setNewTypeIndexMode(DensityIndexCompareMode.ZERO)
      v22:addExecuteSet(0, v32)
    end
    -- TODO: structure LOP_FORNPREP (pc 171, target 192)
    v31 = getTerrainDetailNumChannels(g_currentMission.dynamicFoliageLayers[1])
    v32 = DensityMapModifier.new(g_currentMission.dynamicFoliageLayers[1], 0, v31, v8)
    v22:addExecuteSet(0, v32)
    -- TODO: structure LOP_FORNLOOP (pc 191, target 172)
    v7.removeFieldMultiModifier = v22
    FSDensityMapUtil.functionCache.removeFieldArea = v7
  end
  v7.removeFieldMultiModifier:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.removeFieldMultiModifier:execute(false)
end
function FSDensityMapUtil.updateCultivatorArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, createField, limitFruitDestructionToField, angle, blockedSprayTypeIndex, setsWeeds, disableStones)
  if FSDensityMapUtil.functionCache.updateCultivatorArea == nil then
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v22 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.CULTIVATED)
    local v23 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v23 = DensityMapModifier.new(v19, v20, v21, g_currentMission.terrainRootNode)
    v23 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v23:setValueCompareParams(DensityValueCompareType.EQUAL, v22)
    v23 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v23:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v23 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v23:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v22)
    local v24 = v24:getFruitTypes()
    for v26, v27 in pairs(...) do
      if not (v27.terrainDataPlaneId ~= nil) then
        continue
      end
      local v28 = DensityMapFilter.new(v27.terrainDataPlaneId, v27.startStateChannel, v27.numStateChannels, v14)
      v12.noFruitFilter = v28
      v28:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      v28:setTypeIndexCompareMode(DensityTypeCompareType.ALWAYS)
      break
    end
    FSDensityMapUtil.functionCache.updateCultivatorArea = v12
  end
  v21 = Utils.getNoNil(createField, true)
  v21 = Utils.getNoNil(limitFruitDestructionToField, true)
  FSDensityMapUtil.updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v21, false)
  v12.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12.modifierAngle:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v21, v22, v23 = v12.modifier:executeGet(v12.filterCultivatorArea)
  FSDensityMapUtil.removeSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, blockedSprayTypeIndex)
  if v21 then
  end
  if v13.stonesEnabled and disableStones ~= true then
    FSDensityMapUtil.addStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, 1, v17, v18)
  end
  if v13.weedsEnabled then
    FSDensityMapUtil.setSparseWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  v26, v27, v28 = v14:executeSet(v19, v17, v20)
  v15:executeSet(angle, v16)
  v26, v27, v28 = v14:executeGet(v16)
  DensityMapHeightUtil.clearArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return v27 - v22, v28
end
function FSDensityMapUtil.updateDiscHarrowArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, createField, limitFruitDestructionToField, angle, blockedSprayTypeIndex)
  local v10 = Utils.getNoNil(createField, true)
  v10 = Utils.getNoNil(limitFruitDestructionToField, true)
  if FSDensityMapUtil.functionCache.updateDiscHarrowArea == nil then
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v19 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
    local v20 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.SEEDBED)
    local v21, v22, v23 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v24 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    local v25 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v25 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v25 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.EQUAL, v20)
    v25 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.EQUAL, v19)
    v25 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v19)
    v25 = DensityMapModifier.new(v21, v22, v23, g_currentMission.terrainRootNode)
    v25 = DensityMapFilter.new(v21, v22, v23, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v24 - 1)
    FSDensityMapUtil.functionCache.updateDiscHarrowArea = {modifier = v25, modifierAngle = v25, fieldFilter = v25, seedbedTypeFilter = v25, stubbleTillageFilter = v25, notStubbleTillageFilter = v25, sprayLevelModifier = v25, sprayLevelFilter = v25, multiModifiers = {}, fruitFilter = {}, noFruitFilter = nil, stubbleTillageType = v19, seedbedType = v20}
  end
  if v10.multiModifiers[createField] == nil then
    if not createField then
    end
    v18 = DensityMapMultiModifier.new()
    v11[createField] = v18
    v19 = v19:getFruitTypes()
    for v21, v22 in pairs(...) do
      if not (v22.terrainDataPlaneId ~= nil) then
        continue
      end
      if v10.noFruitFilter == nil then
        v23 = DensityMapFilter.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, v13)
        v10.noFruitFilter = v23
        v23:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
        v23:setTypeIndexCompareMode(DensityTypeCompareType.ALWAYS)
      end
      if not v22.destruction.canBeDestroyed then
        continue
      end
      if v10.fruitFilter[v21] == nil then
        v24 = DensityMapFilter.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, v13)
        v24:setValueCompareParams(DensityValueCompareType.GREATER, 1)
        v10.fruitFilter[v21] = v24
      end
      v23:setValueCompareParams(DensityValueCompareType.GREATER, 1)
      v12:addExecuteSet(v10.stubbleTillageType, v10.modifier, v23, v15)
      v23:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v22.numGrowthStates)
      v23:setTypeIndexCompareMode(DensityTypeCompareType.EQUAL)
      v12:addExecuteAdd(1, v17, v16, v23, v15)
      if v14 == nil then
        v24 = DensityMapModifier.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels)
      else
        v14:resetDensityMapAndChannels(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels)
      end
      v14:setNewTypeIndexMode(DensityIndexCompareMode.ZERO)
      v23:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      if limitFruitDestructionToField then
        v12:addExecuteSet(0, v14, v23, v15)
      else
        v12:addExecuteSet(0, v14, v23)
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 377, target 408)
    v22 = getTerrainDetailNumChannels(g_currentMission.dynamicFoliageLayers[1])
    if v10.dynamicFoliageModifier[g_currentMission.dynamicFoliageLayers[1]] == nil then
      v24 = DensityMapModifier.new(g_currentMission.dynamicFoliageLayers[1], 0, v22, v13)
      v10.dynamicFoliageModifier[g_currentMission.dynamicFoliageLayers[1]] = v24
    end
    v12:addExecuteSet(0, v23, v15)
    -- TODO: structure LOP_FORNLOOP (pc 407, target 378)
  end
  if createField then
  end
  v21, v22, v23 = v13:executeGet(v16)
  local v24, v25, v26 = v13:executeGet()
  v13:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v14:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v13:executeSet(v19, v18, v15, v20)
  v14:executeSet(angle, v16)
  v14:executeSet(angle, v17)
  local v27, v28, v29 = v13:executeGet(v17)
  v12:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12:execute(false)
  local v30, v31, v32 = v13:executeGet(v16)
  local v33, v34, v35 = v13:executeGet(v17)
  FSDensityMapUtil.removeSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, blockedSprayTypeIndex)
  DensityMapHeightUtil.clearArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if g_currentMission.missionInfo.weedsEnabled then
    FSDensityMapUtil.setSparseWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  else
    FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  return v31 - v22 + v34 - v28, v26
end
function FSDensityMapUtil.updatePlowPackerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, angle)
  if FSDensityMapUtil.functionCache.updatePlowPackerArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v16 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.CULTIVATED)
    local v17 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.PLOWED)
    local v18 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.SEEDBED)
    local v19 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v19 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v19 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v19:setValueCompareParams(DensityValueCompareType.EQUAL, v16)
    v19 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v19:setValueCompareParams(DensityValueCompareType.EQUAL, v17)
    v19 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v19:setValueCompareParams(DensityValueCompareType.EQUAL, v18)
    FSDensityMapUtil.functionCache.updatePlowPackerArea = {modifier = v19, modifierAngle = v19, filterCultivatorArea = v19, filterPlowArea = v19, filterSeedbedArea = v19, seedbedType = v18}
  end
  v7.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.modifierAngle:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v14, v15, v16 = v7.modifier:executeGet(v7.filterSeedbedArea)
  local v19, v20, v21 = v7.modifier:executeSet(v7.seedbedType, v7.filterPlowArea)
  v19, v20, v21 = v7.modifier:executeSet(v7.seedbedType, v7.filterCultivatorArea)
  v7.modifierAngle:executeSet(angle or 0, v7.filterSeedbedArea)
  v19, v20, v21 = v7.modifier:executeGet(v7.filterSeedbedArea)
  return v20 - v15, v21
end
function FSDensityMapUtil.updateSubsoilerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, forced)
  if not Platform.gameplay.usePlowCounter then
    return 0, 0
  end
  if FSDensityMapUtil.functionCache.updateSubsoilerArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
    local v16 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.PLOW_LEVEL)
    local v17 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v17 = DensityMapFilter.new(v10, v11, v12)
    v17:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v17 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v17:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v16)
    FSDensityMapUtil.functionCache.updateSubsoilerArea = {modifier = v17, fieldFilter = v17, notMaxPlowLevelFilter = v17, plowLevelMaxValue = v16}
  end
  v7.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if forced then
  end
  if g_currentMission.missionInfo.stonesEnabled then
    FSDensityMapUtil.addStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, 2, v9, v10)
  end
  v12, v13, v14 = v8:executeSet(v11, v9)
  return v13, v14
end
function FSDensityMapUtil.updatePlowArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, createField, limitFruitDestructionToField, angle, resetPlowLevel, stonesDisabled)
  if FSDensityMapUtil.functionCache.updatePlowArea == nil then
    local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v17, v18, v19 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v20 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.PLOWED)
    local v21 = DensityMapModifier.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v21 = DensityMapModifier.new(v17, v18, v19, g_currentMission.terrainRootNode)
    v21 = DensityMapFilter.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v21:setValueCompareParams(DensityValueCompareType.EQUAL, v20)
    v21 = DensityMapFilter.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v21:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v21 = DensityMapFilter.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v21:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v20)
    if Platform.gameplay.usePlowCounter then
      local v21, v22, v23 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      local v24 = DensityMapModifier.new(v21, v22, v23, g_currentMission.terrainRootNode)
      v24 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.PLOW_LEVEL)
    end
    v11.noFruitFilter = nil
    v22 = v22:getFruitTypes()
    for v24, v25 in pairs(...) do
      if not (v25.terrainDataPlaneId ~= nil) then
        continue
      end
      local v26 = DensityMapFilter.new(v25.terrainDataPlaneId, v25.startStateChannel, v25.numStateChannels, v12)
      v11.noFruitFilter = v26
      v26:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      v26:setTypeIndexCompareMode(DensityTypeCompareType.ALWAYS)
      break
    end
    FSDensityMapUtil.functionCache.updatePlowArea = v11
  end
  v21 = Utils.getNoNil(createField, true)
  v21 = Utils.getNoNil(limitFruitDestructionToField, true)
  v21 = Utils.getNoNil(resetPlowLevel, true)
  FSDensityMapUtil.updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v21, false)
  v11.groundTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v11.angleModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v21, v22, v23 = v11.groundTypeModifier:executeGet(v11.plowStateFilter)
  if v21 then
    FSDensityMapUtil.clearDecoArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  if g_currentMission.missionInfo.stonesEnabled and stonesDisabled ~= true then
    FSDensityMapUtil.addStoneArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, 1, v16, v17)
  end
  local v25, v26, v27 = v12:executeSet(v19, v16, v20)
  if resetPlowLevel and v14 ~= nil then
    v14:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v14:executeSet(v18, v16)
  end
  v13:executeSet(angle, v16)
  FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, false)
  if g_currentMission.missionInfo.weedsEnabled then
    FSDensityMapUtil.setWeedBlockingState(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v15)
  end
  v25, v26, v27 = v12:executeGet(v15)
  return v26 - v22, v24
end
function FSDensityMapUtil.updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, onlyOnFields, deleteAll)
  local v8 = Utils.getNoNil(onlyOnFields, false)
  v8 = Utils.getNoNil(deleteAll, false)
  if FSDensityMapUtil.functionCache.updateDestroyCommonArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v17 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    local v18 = DensityMapFilter.new(v11, v12, v13)
    v18:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v18 = DensityMapModifier.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v18 = DensityMapFilter.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v18:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v17 - 1)
    FSDensityMapUtil.functionCache.updateDestroyCommonArea = {fieldFilter = v18, sprayLevelModifier = v18, sprayLevelFilter = v18, dynamicFoliageModifier = {}, fruitFilter = {}, preparingModifier = {}, preparingFilter = {}, multiModifiers = {}}
  end
  if v8.multiModifiers[onlyOnFields] == nil then
    v8.multiModifiers[onlyOnFields] = {}
  end
  if v9[onlyOnFields][deleteAll] == nil then
    v15 = DensityMapMultiModifier.new()
    v9[onlyOnFields][deleteAll] = v15
    if onlyOnFields then
    end
    v17 = v17:getFruitTypes()
    for v19, v20 in pairs(...) do
      if not (v20.terrainDataPlaneId ~= nil) then
        continue
      end
      if v8.fruitFilter[v19] == nil then
        local v22 = DensityMapFilter.new(v20.terrainDataPlaneId, v20.startStateChannel, v20.numStateChannels, v11)
        v22:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v20.numGrowthStates)
        v8.fruitFilter[v19] = v22
      end
      v21:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v20.numGrowthStates)
      v21:setTypeIndexCompareMode(DensityTypeCompareType.EQUAL)
      v10:addExecuteAdd(1, v13, v12, v21, v15)
      if v20.terrainDataPlaneIdPreparing ~= nil then
        if v8.preparingModifier[v19] == nil then
          local v23 = DensityMapModifier.new(v20.terrainDataPlaneIdPreparing, 0, 1)
          v8.preparingModifier[v19] = v23
        end
        if v8.preparingFilter[v19] == nil then
          local v24 = DensityMapFilter.new(v20.terrainDataPlaneIdPreparing, 0, 1)
          v24:setValueCompareParams(DensityValueCompareType.GREATER, 0)
          v8.preparingFilter[v19] = v24
        end
        v10:addExecuteSet(0, v22, v23)
      end
      if not deleteAll and not v20.destruction.canBeDestroyed then
        continue
      end
      if v14 == nil then
        v22 = DensityMapModifier.new(v20.terrainDataPlaneId, v20.startStateChannel, v20.numStateChannels)
      else
        v14:resetDensityMapAndChannels(v20.terrainDataPlaneId, v20.startStateChannel, v20.numStateChannels)
      end
      v14:setNewTypeIndexMode(DensityIndexCompareMode.ZERO)
      v21:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v10:addExecuteSet(0, v14, v21, v15)
    end
    -- TODO: structure LOP_FORNPREP (pc 301, target 332)
    v20 = getTerrainDetailNumChannels(g_currentMission.dynamicFoliageLayers[1])
    if v8.dynamicFoliageModifier[g_currentMission.dynamicFoliageLayers[1]] == nil then
      v22 = DensityMapModifier.new(g_currentMission.dynamicFoliageLayers[1], 0, v20, v11)
      v8.dynamicFoliageModifier[g_currentMission.dynamicFoliageLayers[1]] = v22
    end
    v10:addExecuteSet(0, v21, v15)
    -- TODO: structure LOP_FORNLOOP (pc 331, target 302)
  end
  v10:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v10:execute(false)
  FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  DensityMapHeightUtil.clearArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
end
function FSDensityMapUtil.updateWheelDestructionArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.updateWheelDestructionArea == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v12, v13, v14 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v15 = DensityMapModifier.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v15 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v15 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v15:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.updateWheelDestructionArea = {modifier = v15, multiModifier = nil, filter1 = v15, filter2 = v15}
  end
  v11:setIgnoreDensityChanges(true)
  if v6.multiModifier == nil then
    v11 = DensityMapMultiModifier.new()
    v6.multiModifier = v11
    v12 = v12:getFruitTypes()
    for v14, v15 in pairs(...) do
      if not (v15.terrainDataPlaneId ~= nil) then
        continue
      end
      if not (v15.destruction.filterStart ~= nil) then
        continue
      end
      v7:resetDensityMapAndChannels(v15.terrainDataPlaneId, v15.startStateChannel, v15.numStateChannels)
      v9:resetDensityMapAndChannels(v15.terrainDataPlaneId, v15.startStateChannel, v15.numStateChannels)
      if v15.destruction.onlyOnField then
      end
      v9:setValueCompareParams(DensityValueCompareType.BETWEEN, v15.destruction.filterStart, v15.destruction.filterEnd)
      v8:addExecuteSet(v15.destruction.state, v7, v9, v16)
    end
    -- TODO: structure LOP_FORNPREP (pc 164, target 184)
    v15 = getTerrainDetailNumChannels(g_currentMission.dynamicFoliageLayers[1])
    v7:resetDensityMapAndChannels(g_currentMission.dynamicFoliageLayers[1], 0, v15)
    v8:addExecuteSet(0, v7)
    -- TODO: structure LOP_FORNLOOP (pc 183, target 165)
  end
  v8:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8:execute(false)
  FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  v11:setIgnoreDensityChanges(false)
end
function FSDensityMapUtil.setGroundTypeLayerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, value)
  if FSDensityMapUtil.functionCache.setGroundTypeLayerArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v16 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v16 = DensityMapFilter.new(v13, v14, v15, g_currentMission.terrainRootNode)
    v16 = DensityMapFilter.new(v10, v11, v12)
    v16:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.setGroundTypeLayerArea = {groundLayerModifier = v16, sprayTypeFilter = v16, fieldFilter = v16}
  end
  v7.groundLayerModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, value - 1)
  v11, v12, v13 = v7.groundLayerModifier:executeSet(value, v7.sprayTypeFilter, v7.fieldFilter)
  v7.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.GREATER, value)
  v14, v15, v16 = v7.groundLayerModifier:executeSet(value, v7.sprayTypeFilter, v7.fieldFilter)
  return v12 + v15, v13 + v16
end
function FSDensityMapUtil.updateSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayTypeIndex, sprayAmount)
  local v10 = v10:getSprayTypeByIndex(sprayTypeIndex)
  if v10 ~= nil then
    if v10.isLime then
      local v11, v12 = FSDensityMapUtil.updateLimeArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v10.sprayGroundType)
      return v11, v12
    end
    if v10.isFertilizer then
      v11, v12 = FSDensityMapUtil.updateFertilizerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v10.sprayGroundType, sprayAmount)
      return v11, v12
    end
    if v10.isHerbicide then
      v11, v12 = FSDensityMapUtil.updateHerbicideArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v10.sprayGroundType)
    end
  end
  return v8, v9
end
function FSDensityMapUtil.removeSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, blockedSprayTypeIndex, customFilter)
  if FSDensityMapUtil.functionCache.removeSprayArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    v14 = DensityMapFilter.new(v11, v12, v13, g_currentMission.terrainRootNode)
    FSDensityMapUtil.functionCache.removeSprayArea = {modifier = v14, filter = v14}
  end
  v8.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if blockedSprayTypeIndex ~= nil then
    v11 = v11:getSprayTypeByIndex(blockedSprayTypeIndex)
    -- if 0 >= v11.sprayGroundType then goto L117 end
    v8.filter:setValueCompareParams(DensityValueCompareType.GREATER, v11.sprayGroundType)
    v8.modifier:executeSet(0, v8.filter, customFilter)
    -- if 0 >= v11.sprayGroundType then goto L117 end
    v8.filter:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v11.sprayGroundType - 1)
    v8.modifier:executeSet(0, v8.filter, customFilter)
    return
  end
  v10:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  v9:executeSet(0, v10, customFilter)
end
function FSDensityMapUtil.updateFertilizerArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, sprayType, sprayAmount)
  if FSDensityMapUtil.functionCache.updateFertilizerArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v17 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    local v18, v19, v20 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v21 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_TYPE)
    local v22 = DensityMapModifier.new(v18, v19, v20, g_currentMission.terrainRootNode)
    v22 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    local v23 = v23:getFruitTypes()
    for v25, v26 in pairs(...) do
      if not (v26.terrainDataPlaneId ~= nil) then
        continue
      end
      local v27 = DensityMapFilter.new(v26.terrainDataPlaneId, v26.startStateChannel, v26.numStateChannels)
      v27:setValueCompareParams(DensityValueCompareType.BETWEEN, v26.minHarvestingGrowthState, v26.maxHarvestingGrowthState)
      table.insert(v8.growingFruitFilters, v27)
    end
    v22 = DensityMapFilter.new(v18, v19, v20)
    v8.sprayTypeFilter = v22
    v22:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v22 = DensityMapFilter.new(v14, v15, v16)
    v8.outsideFieldFilter = v22
    v22:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v22 = DensityMapFilter.new(v11, v12, v13)
    v8.maskFilter = v22
    v22:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v17 - 1)
    v8.maskValue = v21
    FSDensityMapUtil.functionCache.updateFertilizerArea = v8
  end
  v8.sprayModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8.sprayLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v8.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.NOTEQUAL, sprayType)
  v8.sprayModifier:executeSet(v8.maskValue, v8.sprayTypeFilter, v8.maskFilter)
  v8.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, v8.maskValue)
  v8.sprayModifier:executeSet(0, v8.sprayTypeFilter, v8.outsideFieldFilter)
  -- TODO: structure LOP_FORNPREP (pc 222, target 231)
  v8.sprayModifier:executeSet(0, v8.sprayTypeFilter, v8.growingFruitFilters[1])
  -- TODO: structure LOP_FORNLOOP (pc 230, target 223)
  v22 = math.max(sprayAmount or 1, 1)
  -- TODO: structure LOP_FORNPREP (pc 244, target 256)
  v22, v23, v24, v25 = v8.sprayLevelModifier:executeAdd(1, v8.sprayTypeFilter, v8.maskFilter)
  -- TODO: structure LOP_FORNLOOP (pc 255, target 245)
  v8.sprayModifier:executeSet(sprayType, v8.sprayTypeFilter)
  return v24, v25
end
function FSDensityMapUtil.updateLimeArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, groundType)
  if FSDensityMapUtil.functionCache.updateLimeArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.LIME_LEVEL)
    local v19 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.LIME_LEVEL)
    local v20, v21 = g_currentMission.fieldGroundSystem:getSowableRange()
    local v22 = DensityMapModifier.new(v13, v14, v15, g_currentMission.terrainRootNode)
    local v23 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    local v24 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v24:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v19 - 1)
    local v25 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v25:setValueCompareParams(DensityValueCompareType.EQUAL, v19)
    local v26 = DensityMapFilter.new(v10, v11, v12)
    v26:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    local v27 = DensityMapFilter.new(v10, v11, v12)
    v27:setValueCompareParams(DensityValueCompareType.BETWEEN, v20, v21)
    local v28 = DensityMapMultiModifier.new()
    local v31 = v31:getFruitTypes()
    for v33, v34 in pairs(...) do
      if not (v34.terrainDataPlaneId ~= nil) then
        continue
      end
      if v29 == nil then
        local v35 = DensityMapFilter.new(v34.terrainDataPlaneId, v34.startStateChannel, v34.numStateChannels)
      else
        v29:resetDensityMapAndChannels(v34.terrainDataPlaneId, v34.startStateChannel, v34.numStateChannels)
      end
      v29:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
      v28:addExecuteSet(groundType, v22, v26, v29)
      v28:addExecuteSet(v19, v23, v26, v29, v24)
      v29:setValueCompareParams(DensityValueCompareType.GREATER, v34.cutState - 1)
      v28:addExecuteSet(groundType, v22, v26, v29)
      v28:addExecuteSet(v19, v23, v26, v29, v24)
    end
    v28:addExecuteSet(groundType, v22, v27)
    v28:addExecuteSet(v19, v23, v27, v24)
    FSDensityMapUtil.functionCache.updateLimeArea = v7
  end
  v7.modifierLimeLevel:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v11, v12, v13 = v7.modifierLimeLevel:executeGet(v7.filterLimeLevelMax)
  v7.multiModifier:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.multiModifier:execute(false)
  v14, v15, v16 = v7.modifierLimeLevel:executeGet(v7.filterLimeLevelMax)
  return v15 - v12, v13
end
function FSDensityMapUtil.updateHerbicideArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, groundType)
  local v10 = g_currentMission.weedSystem:getMapHasWeed()
  if v10 then
    if FSDensityMapUtil.functionCache.updateHerbicideArea == nil then
      local v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
      local v19, v20, v21 = g_currentMission.weedSystem:getDensityMapData()
      local v22, v23 = g_currentMission.fieldGroundSystem:getSowableRange()
      local v24 = g_currentMission.weedSystem:getHerbicideReplacements()
      local v25 = DensityMapModifier.new(v19, v20, v21, g_currentMission.terrainRootNode)
      v25 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
      v25 = DensityMapFilter.new(v13, v14, v15)
      v25:setValueCompareParams(DensityValueCompareType.BETWEEN, v22, v23)
      for v28, v29 in pairs(v24.weed.replacements) do
        local v30 = DensityMapFilter.new(v19, v20, v21, v11)
        v30:setValueCompareParams(DensityValueCompareType.EQUAL, v28)
        v10.weedFilters[v28] = v30
      end
      v10.fruitFilters = {}
      v26 = v26:getFruitTypes()
      for v28, v29 in pairs(...) do
        if not (v29.terrainDataPlaneId ~= nil) then
          continue
        end
        v30 = DensityMapFilter.new(v29.terrainDataPlaneId, v29.startStateChannel, v29.numStateChannels)
        v10.fruitFilters[v28] = v30
      end
      if v24.custom ~= nil then
        v25 = DensityMapMultiModifier.new()
        v10.multiModifierCustom = v25
        for v30, v31 in ipairs(v24.custom) do
          if not (v31.fruitType.terrainDataPlaneId ~= nil) then
            continue
          end
          if v25 == nil then
            local v33 = DensityMapModifier.new(v31.fruitType.terrainDataPlaneId, v31.fruitType.startStateChannel, v31.fruitType.numStateChannels, v11)
          else
            v25:resetDensityMapAndChannels(v31.fruitType.terrainDataPlaneId, v31.fruitType.startStateChannel, v31.fruitType.numStateChannels, v11)
          end
          if v26 == nil then
            v33 = DensityMapFilter.new(v32.terrainDataPlaneId, v32.startStateChannel, v32.numStateChannels, v11)
          else
            v26:resetDensityMapAndChannels(v32.terrainDataPlaneId, v32.startStateChannel, v32.numStateChannels, v11)
          end
          for v36, v37 in pairs(v31.replacements) do
            v26:setValueCompareParams(DensityValueCompareType.EQUAL, v36)
            v38:addExecuteSet(v37, v25, v26)
          end
        end
      end
      FSDensityMapUtil.functionCache.updateHerbicideArea = v10
    end
    v10.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v10.sprayModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    for v20, v21 in pairs(v10.replacements) do
      for v26, v27 in pairs(v13) do
        v28 = v28:getFruitTypeByIndex(v26)
        v27:setValueCompareParams(DensityValueCompareType.BETWEEN, 1, v28.minHarvestingGrowthState - 1)
        v14:executeSet(groundType, v27, v22)
        v29, v30, v31 = v11:executeSet(v21, v27, v22)
        v27:setValueCompareParams(DensityValueCompareType.EQUAL, v28.cutState + 1)
        v14:executeSet(groundType, v27, v22)
        local v32, v33, v34 = v11:executeSet(v21, v27, v22)
        if not (v28.destruction ~= nil) then
          continue
        end
        if not (v28.destruction.state ~= v28.cutState + 1) then
          continue
        end
        v27:setValueCompareParams(DensityValueCompareType.BETWEEN, v28.destruction.state, v28.destruction.state)
        v14:executeSet(groundType, v27, v22)
        v32, v33, v34 = v11:executeSet(v21, v27, v22)
      end
      v14:executeSet(groundType, v15, v22)
      v23, v24, v25 = v11:executeSet(v21, v15, v22)
    end
    if v16 ~= nil then
      v16:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
      v16:execute(false)
    end
  end
  return v7, v8
end
function FSDensityMapUtil.updateWeederArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, isHoeWeeder)
  local v11 = g_currentMission.weedSystem:getMapHasWeed()
  if v11 then
    if FSDensityMapUtil.functionCache.updateWeederArea == nil then
      FSDensityMapUtil.functionCache.updateWeederArea = {}
    end
    if v11[isHoeWeeder] == nil then
      local v15, v16, v17 = v7:getDensityMapData()
      local v18 = v7:getWeederReplacements(isHoeWeeder)
      local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v22, v23 = g_currentMission.fieldGroundSystem:getSowableRange()
      local v24 = DensityMapModifier.new(v15, v16, v17, g_currentMission.terrainRootNode)
      v24 = DensityMapFilter.new(v15, v16, v17, g_currentMission.terrainRootNode)
      v24:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v24 = DensityMapMultiModifier.new()
      v24 = DensityMapMultiModifier.new()
      local v25 = DensityMapFilter.new(v15, v16, v17, g_currentMission.terrainRootNode)
      local v26 = DensityMapFilter.new(v19, v20, v21)
      v26:setValueCompareParams(DensityValueCompareType.BETWEEN, v22, v23)
      for v30, v31 in pairs(v18.weed.replacements) do
        v25:setValueCompareParams(DensityValueCompareType.EQUAL, v30)
        local v33 = v33:getFruitTypes()
        for v35, v36 in pairs(...) do
          if v24 == nil then
            local v37 = DensityMapFilter.new(v36.terrainDataPlaneId, v36.startStateChannel, v36.numStateChannels, v13)
          else
            v24:resetDensityMapAndChannels(v36.terrainDataPlaneId, v36.startStateChannel, v36.numStateChannels, v13)
          end
          if isHoeWeeder then
          end
          v24:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v37)
          v38:addExecuteSet(v31, v12.weedModifier, v25, v24)
          v24:setValueCompareParams(DensityValueCompareType.EQUAL, v36.cutState)
          v38:addExecuteSet(v31, v12.weedModifier, v25, v24)
        end
        v32:addExecuteSet(v31, v12.weedModifier, v25, v26)
      end
      if v18.custom ~= nil then
        v27 = DensityMapMultiModifier.new()
        v12.multiModifierCustom = v27
        for v31, v32 in ipairs(v18.custom) do
          if not (v32.fruitType.terrainDataPlaneId ~= nil) then
            continue
          end
          if v27 == nil then
            v34 = DensityMapModifier.new(v32.fruitType.terrainDataPlaneId, v32.fruitType.startStateChannel, v32.fruitType.numStateChannels, v13)
          else
            v27:resetDensityMapAndChannels(v32.fruitType.terrainDataPlaneId, v32.fruitType.startStateChannel, v32.fruitType.numStateChannels, v13)
          end
          v25:resetDensityMapAndChannels(v33.terrainDataPlaneId, v33.startStateChannel, v33.numStateChannels, v13)
          for v37, v38 in pairs(v32.replacements) do
            v25:setValueCompareParams(DensityValueCompareType.EQUAL, v37)
            v39:addExecuteSet(v38, v27, v25)
          end
        end
      end
      FSDensityMapUtil.functionCache.updateWeederArea[isHoeWeeder] = v12
    end
    v12.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v18, v19, v20 = v12.weedModifier:executeGet(v12.allWeedFilter)
    v12.multiModifierGrowing:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v12.multiModifierGrowing:execute(false)
    v12.multiModifierSowable:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v12.multiModifierSowable:execute(false)
    if v12.multiModifierCustom ~= nil then
      v12.multiModifierCustom:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
      v12.multiModifierCustom:execute(false)
    end
    v18, v19, v20 = v13:executeGet(v14)
  end
  DensityMapHeightUtil.removeFromGroundByArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, FillType.GRASS_WINDROW)
  DensityMapHeightUtil.removeFromGroundByArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, FillType.DRYGRASS_WINDROW)
  return v9 - v10
end
function FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v9 = g_currentMission.weedSystem:getMapHasWeed()
  if v9 then
    if FSDensityMapUtil.functionCache.removeWeedArea == nil then
      local v11, v12, v13 = g_currentMission.weedSystem:getDensityMapData()
      local v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
      FSDensityMapUtil.functionCache.removeWeedArea = {weedModifier = v14}
    end
    v9.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v12, v13, v14 = v9.weedModifier:executeSet(0)
  end
  return v6, v7
end
function FSDensityMapUtil.setSparseWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v7 = g_currentMission.weedSystem:getMapHasWeed()
  if v7 then
    if FSDensityMapUtil.functionCache.setSparseWeedArea == nil then
      local v10, v11, v12 = g_currentMission.weedSystem:getDensityMapData()
      local v13, v14, v15 = g_currentMission.weedSystem:getInfoLayerData()
      local v16, v17, v18 = g_currentMission.weedSystem:getBlockingStateData()
      local v19 = g_currentMission.weedSystem:getSparseStartState()
      local v20, v21, v22 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v23 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
      v23 = DensityMapFilter.new(v20, v21, v22, g_currentMission.terrainRootNode)
      v23:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v23 = DensityMapFilter.new(v13, v17, v18, g_currentMission.terrainRootNode)
      v23:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v16)
      FSDensityMapUtil.functionCache.setSparseWeedArea = {weedModifier = v23, fieldFilter = v23, notWeedBlockedFilter = v23, sparseState = v19}
    end
    v7.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v7.weedModifier:executeSet(v7.sparseState, v7.fieldFilter, v7.notWeedBlockedFilter)
  end
end
function FSDensityMapUtil.setSowingWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v7 = g_currentMission.weedSystem:getMapHasWeed()
  if v7 then
    if FSDensityMapUtil.functionCache.setSowingWeedArea == nil then
      local v10, v11, v12 = g_currentMission.weedSystem:getDensityMapData()
      local v13, v14, v15 = g_currentMission.weedSystem:getInfoLayerData()
      local v16, v17, v18 = g_currentMission.weedSystem:getBlockingStateData()
      local v19 = g_currentMission.weedSystem:getSparseStartState()
      local v20 = g_currentMission.weedSystem:getDenseStartState()
      local v21, v22, v23 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v24, v25 = g_currentMission.fieldGroundSystem:getSowableRange()
      local v26 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
      local v27 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
      v27 = DensityMapFilter.new(v13, v17, v18, g_currentMission.terrainRootNode)
      v27:setValueCompareParams(DensityValueCompareType.NOTEQUAL, v16)
      v27 = DensityMapFilter.new(v21, v22, v23, g_currentMission.terrainRootNode)
      v27:setValueCompareParams(DensityValueCompareType.EQUAL, v26)
      v27 = DensityMapFilter.new(v21, v22, v23)
      v27:setValueCompareParams(DensityValueCompareType.BETWEEN, v24, v25)
      FSDensityMapUtil.functionCache.setSowingWeedArea = {weedModifier = v27, notBlockedFilter = v27, stubbleTillageFilter = v27, sowableFilter = v27, sparseState = v19, denseState = v20}
    end
    v7.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v7.weedModifier:executeSet(v7.sparseState, v7.sowableFilter, v7.notBlockedFilter)
    v7.weedModifier:executeSet(v7.denseState, v7.stubbleTillageFilter, v7.notBlockedFilter)
  end
end
function FSDensityMapUtil.setWeedBlockingState(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, customFilter1, customFilter2)
  local v9 = g_currentMission.weedSystem:getMapHasWeed()
  if v9 then
    if FSDensityMapUtil.functionCache.setWeedBlockingState == nil then
      local v11, v12, v13 = g_currentMission.weedSystem:getInfoLayerData()
      local v14, v15, v16 = g_currentMission.weedSystem:getBlockingStateData()
      local v17 = DensityMapModifier.new(v11, v15, v16, g_currentMission.terrainRootNode)
      FSDensityMapUtil.functionCache.setWeedBlockingState = {weedInfoModifier = v17, blockingValue = v14}
    end
    v9.weedInfoModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v9.weedInfoModifier:executeSet(v9.blockingValue, customFilter1, customFilter2)
  end
end
function FSDensityMapUtil.removeWeedBlockingState(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v7 = g_currentMission.weedSystem:getMapHasWeed()
  if v7 then
    if FSDensityMapUtil.functionCache.removeWeedBlockingState == nil then
      local v9, v10, v11 = g_currentMission.weedSystem:getInfoLayerData()
      local v12, v13, v14 = g_currentMission.weedSystem:getBlockingStateData()
      local v15 = DensityMapModifier.new(v9, v13, v14, g_currentMission.terrainRootNode)
      FSDensityMapUtil.functionCache.removeWeedBlockingState = {weedInfoModifier = v15}
    end
    v7.weedInfoModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v7.weedInfoModifier:executeSet(0)
  end
end
function FSDensityMapUtil.updateMulcherArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.updateMulcherArea == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v12 = DensityMapMultiModifier.new()
    if Platform.gameplay.useStubbleShred then
      local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
      local v17 = DensityMapModifier.new(v14, v15, v16, g_currentMission.terrainRootNode)
    end
    v14 = DensityMapModifier.new(v9, v10, v11, v7)
    v15, v16, v17 = v8:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v18 = DensityMapFilter.new(v15, v16, v17)
    local v21 = v21:getFruitTypes()
    for v23, v24 in pairs(...) do
      if not v24.destruction.canBeDestroyed then
        continue
      end
      v18:resetDensityMapAndChannels(v24.terrainDataPlaneId, v24.startStateChannel, v24.numStateChannels)
      v18:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v24.cutState)
      if v24.mulcher.hasChopperGroundLayer then
        local v25 = v8:getChopperTypeValue(v24.mulcher.chopperTypeIndex)
        if v25 ~= nil then
          v12:addExecuteSet(v25, v14, v18)
        end
      end
      if v13 ~= nil then
        v12:addExecuteAdd(1, v13, v18)
      end
      if v19 == nil then
        v25 = DensityMapModifier.new(v24.terrainDataPlaneId, v24.startStateChannel, v24.numStateChannels)
      else
        v19:resetDensityMapAndChannels(v24.terrainDataPlaneId, v24.startStateChannel, v24.numStateChannels)
      end
      if (v24.mulcher.state or 0) == 0 then
        v19:setNewTypeIndexMode(DensityIndexCompareMode.ZERO)
      end
      v18:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v12:addExecuteSet(v24.mulcher.state or 0, v19, v18)
    end
    if g_currentMission.weedSystem ~= nil then
      v21, v22, v23 = g_currentMission.weedSystem:getDensityMapData()
      v24 = DensityMapFilter.new(v21, v22, v23, v7)
      v25 = DensityMapModifier.new(v21, v22, v23, v7)
      local v26 = g_currentMission.weedSystem:getMulcherReplacements()
      if v26.weed ~= nil then
        for v30, v31 in pairs(v26.weed.replacements) do
          v24:setValueCompareParams(DensityValueCompareType.EQUAL, v30)
          v12:addExecuteSet(v31, v25, v24)
        end
      end
      if v26.custom ~= nil then
        for v30, v31 in ipairs(v26.custom) do
          if not (v31.fruitType.terrainDataPlaneId ~= nil) then
            continue
          end
          if v19 == nil then
            local v33 = DensityMapModifier.new(v31.fruitType.terrainDataPlaneId, v31.fruitType.startStateChannel, v31.fruitType.numStateChannels, v7)
          else
            v19:resetDensityMapAndChannels(v31.fruitType.terrainDataPlaneId, v31.fruitType.startStateChannel, v31.fruitType.numStateChannels, v7)
          end
          if v24 == nil then
            v33 = DensityMapFilter.new(v32.terrainDataPlaneId, v32.startStateChannel, v32.numStateChannels, v7)
          else
            v24:resetDensityMapAndChannels(v32.terrainDataPlaneId, v32.startStateChannel, v32.numStateChannels, v7)
          end
          for v36, v37 in pairs(v31.replacements) do
            v24:setValueCompareParams(DensityValueCompareType.EQUAL, v36)
            v12:addExecuteSet(v37, v19, v24)
          end
        end
      end
      v27 = v27:getFruitTypeByIndex(FruitType.MEADOW)
      if v27 ~= nil and v27.terrainDataPlaneId ~= nil then
        v29 = DensityMapModifier.new(v27.terrainDataPlaneId, v27.startStateChannel, v27.numStateChannels, v7)
        v29:setNewTypeIndexMode(DensityIndexCompareMode.UPDATE)
        if g_currentMission.foliageSystem ~= nil then
          v30 = v30:getDecoFoliages()
          for v34, v35 in pairs(v30) do
            if not v35.mowable then
              continue
            end
            if not (v35.terrainDataPlaneId ~= nil) then
              continue
            end
            if v28 == nil then
              v36 = DensityMapFilter.new(v35.terrainDataPlaneId, v35.startStateChannel, v35.numStateChannels, v7)
              v36:setValueCompareParams(DensityValueCompareType.GREATER, 0)
            else
              v28:resetDensityMapAndChannels(v35.terrainDataPlaneId, v35.startStateChannel, v35.numStateChannels, v7)
            end
            if not v27.regrows then
              continue
            end
            if not (v27.firstRegrowthState ~= nil) then
              continue
            end
            v12:addExecuteSet(v27.firstRegrowthState, v29, v28)
          end
        end
      end
    end
    FSDensityMapUtil.functionCache.updateMulcherArea = v6
  end
  DensityMapHeightUtil.clearArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  v6.multiModifier:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v8, v9 = v6.multiModifier:execute(false)
  v6.lastArea = v8
  v6.lastTotalArea = v9
  return v8 - v6.lastArea, v9 - v6.lastTotalArea
end
function FSDensityMapUtil.updateMowerArea(fruitType, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, limitToField)
  local v8 = v8:getFruitTypeByIndex(FruitType.MEADOW)
  if v8 ~= nil and v8.terrainDataPlaneId ~= nil then
    if FSDensityMapUtil.functionCache.updateMowerArea == nil then
      local v11 = DensityMapMultiModifier.new()
      local v13 = DensityMapModifier.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, g_currentMission.terrainRootNode)
      v13:setNewTypeIndexMode(DensityIndexCompareMode.UPDATE)
      if g_currentMission.foliageSystem ~= nil then
        local v14 = v14:getDecoFoliages()
        for v18, v19 in pairs(v14) do
          if not v19.mowable then
            continue
          end
          if not (v19.terrainDataPlaneId ~= nil) then
            continue
          end
          if v12 == nil then
            local v20 = DensityMapFilter.new(v19.terrainDataPlaneId, v19.startStateChannel, v19.numStateChannels, v10)
            v20:setValueCompareParams(DensityValueCompareType.GREATER, 0)
          else
            v12:resetDensityMapAndChannels(v19.terrainDataPlaneId, v19.startStateChannel, v19.numStateChannels, v10)
          end
          if not v8.regrows then
            continue
          end
          if not (v8.firstRegrowthState ~= nil) then
            continue
          end
          v11:addExecuteSet(v8.firstRegrowthState, v13, v12)
        end
      end
      v9.multiModifier = v11
      FSDensityMapUtil.functionCache.updateMowerArea = v9
    end
    if not limitToField then
      v9.multiModifier:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
      v9.multiModifier:execute(false)
    end
  end
  return FSDensityMapUtil.cutFruitArea(fruitType, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, false, nil, nil, limitToField)
end
function FSDensityMapUtil.getStubbleFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if not Platform.gameplay.useStubbleShred then
    return 1
  end
  if FSDensityMapUtil.functionCache.getStubbleFactor == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
    local v12 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.getStubbleFactor = {stubbleShredModifier = v12, stubbleShredFilter = v12}
  end
  v6.stubbleShredModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v8, v9, v10 = v6.stubbleShredModifier:executeGet(v6.stubbleShredFilter)
  return v9 / v10
end
function FSDensityMapUtil.getRollerFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if not Platform.gameplay.useRolling then
    return 1
  end
  if FSDensityMapUtil.functionCache.getRollerFactor == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    local v12 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.getRollerFactor = {rollerLevelModifier = v12, rollerLevelFilter = v12}
  end
  v6.rollerLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v8, v9, v10 = v6.rollerLevelModifier:executeGet(v6.rollerLevelFilter)
  return v9 / v10
end
function FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, force, excludeType)
  if FSDensityMapUtil.functionCache.resetSprayArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v17 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    v17 = DensityMapFilter.new(v11, v12, v13, g_currentMission.terrainRootNode)
    v17 = DensityMapFilter.new(v14, v15, v16, g_currentMission.terrainRootNode)
    v17:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.resetSprayArea = {resetModifier = v17, excludeFilter = v17, sprayLevelFilter = v17}
  end
  v8.resetModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if not force then
  end
  if excludeType == nil then
    v9:executeSet(0, v11)
    return
  end
  v10:setValueCompareParams(DensityValueCompareType.GREATER, excludeType)
  v9:executeSet(0, v10, v11)
  if 0 < excludeType then
    v10:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, excludeType - 1)
    v9:executeSet(0, v10, v11)
  end
end
function FSDensityMapUtil.updateSowingArea(fruitIndex, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, fieldGroundType, angle, growthState, blockedSprayTypeIndex)
  local v11 = v11:getFruitTypeByIndex(fruitIndex)
  if v11.terrainDataPlaneId == nil then
    return 0, 0
  end
  if FSDensityMapUtil.functionCache.updateSowingArea == nil then
    local v15, v16, v17 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v18, v19, v20 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v21, v22, v23 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    local v24 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.ROLLER_LEVEL)
    local v25 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.SOWN)
    local v26 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.DIRECT_SOWN)
    local v27 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.RIDGE)
    local v28 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
    local v29, v30 = g_currentMission.fieldGroundSystem:getSowableRange()
    local v31, v32 = g_currentMission.fieldGroundSystem:getSowingRange()
    local v33 = DensityMapModifier.new(v15, v16, v17, g_currentMission.terrainRootNode)
    v33 = DensityMapModifier.new(v18, v19, v20, g_currentMission.terrainRootNode)
    v33 = DensityMapFilter.new(v15, v16, v17)
    v33:setValueCompareParams(DensityValueCompareType.BETWEEN, v29, v30)
    v33 = DensityMapFilter.new(v15, v16, v17)
    v33:setValueCompareParams(DensityValueCompareType.BETWEEN, v31, v32)
    if Platform.gameplay.useRolling then
      v33 = DensityMapModifier.new(v21, v22, v23, g_currentMission.terrainRootNode)
    end
    v12.sownType = v25
    v12.directSownType = v26
    v12.ridgeType = v27
    v12.firstSowableValue = v29
    v12.lastSowableValue = v30
    v12.firstSowingValue = v31
    v12.lastSowingValue = v32
    v33 = DensityMapFilter.new(v15, v16, v17, v13)
    v12.stubbleTillageFilter = v33
    v33:setValueCompareParams(DensityValueCompareType.EQUAL, v28)
    v33 = DensityMapFilter.new(v15, v16, v17)
    v12.directSownFilter = v33
    v33:setValueCompareParams(DensityValueCompareType.EQUAL, v26)
    v33 = DensityMapFilter.new(v15, v16, v17)
    v12.sownFilter = v33
    v33:setValueCompareParams(DensityValueCompareType.EQUAL, v25)
    FSDensityMapUtil.functionCache.updateSowingArea = v12
  end
  if v12.fruitModifiers[fruitIndex] == nil then
    v15 = DensityMapModifier.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, g_currentMission.terrainRootNode)
    v15 = DensityMapFilter.new(v15)
    v12.fruitModifiers[fruitIndex] = v15
    v12.fruitFilters[fruitIndex] = v15
  end
  v13:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12.groundTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12.groundAngleModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  if Platform.gameplay.useRolling then
    v12.rollerLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    if v11.needsRolling then
    end
    v19:executeSet(v27, v17)
  end
  v14:setValueCompareParams(DensityValueCompareType.NOTEQUAL, growthState)
  v27, v28, v29 = v13:executeSet(growthState, v14, v17)
  if g_currentMission.missionInfo.weedsEnabled then
    -- if not v11.plantsWeed then goto L363 end
    FSDensityMapUtil.setSowingWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  else
    FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  FSDensityMapUtil.removeSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, blockedSprayTypeIndex, v17)
  if fieldGroundType ~= v26 then
    v31, v32, v33 = v15:executeSet(v24, v17, v21)
    local v34, v35, v36 = v15:executeGet(v22)
    if 0 < v36 and 0.5 < v35 / v36 then
      v15:executeSet(v24, v23)
    end
  end
  v31, v32, v33 = v15:executeSet(fieldGroundType, v17)
  v16:executeSet(angle, v18)
  return v28, v30 + v33
end
function FSDensityMapUtil.updateDirectSowingArea(fruitIndex, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, fieldGroundType, angle, growthState, blockedSprayTypeIndex)
  local v12 = g_fruitTypeManager:getFruitTypeByIndex(fruitIndex)
  if v12.terrainDataPlaneId == nil then
    return 0, 0
  end
  if FSDensityMapUtil.functionCache.updateDirectSowingArea == nil then
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
    local v22, v23, v24 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v25 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    local v26, v27, v28 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v29 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.SOWN)
    local v30 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.DIRECT_SOWN)
    local v31 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.RIDGE)
    local v32 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
    local v33, v34 = g_currentMission.fieldGroundSystem:getSowableRange()
    local v35, v36 = g_currentMission.fieldGroundSystem:getSowingRange()
    local v37, v38, v39 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    local v40 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.ROLLER_LEVEL)
    local v41 = DensityMapModifier.new(v22, v23, v24, g_currentMission.terrainRootNode)
    v41 = DensityMapFilter.new(v22, v23, v24)
    v41:setValueCompareParams(DensityValueCompareType.BETWEEN, 0, v25 - 1)
    v41 = DensityMapModifier.new(v26, v27, v28, g_currentMission.terrainRootNode)
    v41 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v41 = DensityMapModifier.new(v19, v20, v21, g_currentMission.terrainRootNode)
    v41 = DensityMapFilter.new(v16, v17, v18)
    v41:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v41 = DensityMapFilter.new(v16, v17, v18)
    v41:setValueCompareParams(DensityValueCompareType.BETWEEN, v33, v34)
    v41 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v41:setValueCompareParams(DensityValueCompareType.BETWEEN, v35, v36)
    v41 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v41:setValueCompareParams(DensityValueCompareType.EQUAL, v32)
    v41 = DensityMapFilter.new(v16, v17, v18)
    v41:setValueCompareParams(DensityValueCompareType.EQUAL, v30)
    v41 = DensityMapFilter.new(v16, v17, v18)
    v41:setValueCompareParams(DensityValueCompareType.EQUAL, v29)
    if Platform.gameplay.useRolling then
      v41 = DensityMapModifier.new(v37, v38, v39, g_currentMission.terrainRootNode)
    end
    v13.sownType = v29
    v13.directSownType = v30
    v13.ridgeType = v31
    FSDensityMapUtil.functionCache.updateDirectSowingArea = v13
  end
  if v13.multiModifiers[fruitIndex] == nil then
    v13.multiModifiers[fruitIndex] = {}
    v32 = DensityMapModifier.new(v12.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, g_currentMission.terrainRootNode)
    v13.fruitModifiers[fruitIndex] = v32
  end
  if v27[growthState] == nil then
    v34 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.STUBBLE_TILLAGE)
    v35 = DensityMapMultiModifier.new()
    v27[growthState] = v35
    v36 = v11:getFruitTypes()
    for v38, v39 in pairs(...) do
      if not (v39.terrainDataPlaneId ~= nil) then
        continue
      end
      if not v39.destruction.canBeDestroyed then
        continue
      end
      if v13.fruitFilters[v38] == nil then
        v41 = DensityMapFilter.new(v39.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, v29)
        v13.fruitFilters[v38] = v41
      end
      if 1 < v39.cutState then
        v40:setValueCompareParams(DensityValueCompareType.BETWEEN, 2, v39.cutState - 1)
        v32:addExecuteAdd(1, v22, v23, v16, v40)
        v32:addExecuteSet(1, v24, v16, v40)
      end
      if v39.allowsSeeding then
        if v38 ~= fruitIndex then
          v40:setValueCompareParams(DensityValueCompareType.GREATER, 0)
          v32:addExecuteSet(v34, v25, v16, v40)
        else
          local v45 = math.max(v39.maxHarvestingGrowthState, v39.cutState)
          v40:setValueCompareParams(...)
          v32:addExecuteSet(v34, v25, v16, v40)
        end
        if v39.mulcher.state ~= nil and 0 < v39.mulcher.state and v39.mulcher.state ~= growthState then
          v40:setValueCompareParams(DensityValueCompareType.EQUAL, v39.mulcher.state)
          v32:addExecuteSet(v34, v25, v16, v40)
        end
      end
      if v13.fruitModifiers[v38] == nil then
        local v42 = DensityMapModifier.new(v39.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, v29)
        v13.fruitModifiers[v38] = v42
      end
      if v38 ~= fruitIndex then
        local v46 = math.max(v39.maxHarvestingGrowthState, v39.cutState)
        v40:setValueCompareParams(...)
      else
        v46 = math.max(v39.maxHarvestingGrowthState, v39.cutState)
        v40:setValueCompareParams(...)
      end
      v32:addExecuteSet(0, v41, v40, v16)
    end
  end
  v28:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v25:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v26:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v32:updateParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v32:execute(false)
  if g_currentMission.missionInfo.weedsEnabled then
    -- if not v12.plantsWeed then goto L624 end
    FSDensityMapUtil.setSowingWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  else
    FSDensityMapUtil.removeWeedArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  if Platform.gameplay.useRolling then
    v30:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    if v12.needsRolling then
    end
    v30:executeSet(v33, v14)
  end
  v33, v34, v35 = v28:executeSet(growthState, v14)
  if fieldGroundType ~= v17 then
    v25:executeSet(v18, v14, v19)
    v36, v37, v38 = v25:executeGet(v20)
    if 0 < v38 and 0.5 < v37 / v38 then
      v25:executeSet(v18, v21)
    end
  end
  v25:executeSet(fieldGroundType, v14)
  v26:executeSet(angle, v15)
  FSDensityMapUtil.removeSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, blockedSprayTypeIndex)
  DensityMapHeightUtil.clearArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return v34, v35
end
function FSDensityMapUtil.updateFruitPreparerArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, startDropWorldX, startDropWorldZ, widthDropWorldX, widthDropWorldZ, heightDropWorldX, heightDropWorldZ)
  if FSDensityMapUtil.functionCache.updateFruitPreparerArea == nil then
    FSDensityMapUtil.functionCache.updateFruitPreparerArea = {fruitModifiers = {}, fruitFilters = {}, dropModifiers = {}, dropFilters = {}}
  end
  local v14 = v14:getFruitTypeByIndex(fruitId)
  if v13.fruitModifiers[fruitId] == nil then
    local v17 = DensityMapModifier.new(v14.terrainDataPlaneId, v14.startStateChannel, v14.numStateChannels, g_currentMission.terrainRootNode)
    v17 = DensityMapFilter.new(v17)
    v17:setValueCompareParams(DensityValueCompareType.BETWEEN, v14.minPreparingGrowthState, v14.maxPreparingGrowthState)
    local v18 = DensityMapModifier.new(v14.terrainDataPlaneIdPreparing, 0, 1, g_currentMission.terrainRootNode)
    local v19 = DensityMapFilter.new(v17)
    v19:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v13.dropModifiers[fruitId] = v18
    v13.dropFilters[fruitId] = v19
    v13.fruitFilters[fruitId] = v17
    v13.fruitModifiers[fruitId] = v17
  end
  v15:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v17, v18 = v15:executeSet(v14.preparedGrowthState, v13.fruitFilters[fruitId])
  if v14.terrainDataPlaneIdPreparing ~= nil and 0 < v18 then
    v13.dropModifiers[fruitId]:setParallelogramWorldCoords(startDropWorldX, startDropWorldZ, widthDropWorldX, widthDropWorldZ, heightDropWorldX, heightDropWorldZ, DensityCoordType.POINT_POINT_POINT)
    v13.dropModifiers[fruitId]:executeSet(1, v13.dropFilters[fruitId])
  end
  return v18
end
function FSDensityMapUtil.clearDecoArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.clearDecoArea == nil then
    if g_currentMission.foliageSystem ~= nil then
      local v8 = v8:getDecoFoliages()
    end
    if v7 ~= nil and 0 < #v7 then
      for v12, v13 in pairs(v7) do
        if not (v13.terrainDataPlaneId ~= nil) then
          continue
        end
        local v14 = DensityMapModifier.new(v13.terrainDataPlaneId, v13.startStateChannel, v13.numStateChannels, v8)
        v14:setNewTypeIndexMode(DensityIndexCompareMode.ZERO)
        local v15 = DensityMapFilter.new(v13.terrainDataPlaneId, v13.startStateChannel, v13.numStateChannels, v8)
        v15:setValueCompareParams(DensityValueCompareType.GREATER, 0)
        v6.decoModifiers[v12] = v14
        v6.decoFilters[v12] = v15
      end
      FSDensityMapUtil.functionCache.clearDecoArea = v6
    end
  end
  if v6 ~= nil then
    for v13, v14 in pairs(v6.decoFoliages) do
      if not (v14.terrainDataPlaneId ~= nil) then
        continue
      end
      if not (v6.decoModifiers[v13] ~= nil) then
        continue
      end
      if not (v6.decoFilters[v13] ~= nil) then
        continue
      end
      v6.decoModifiers[v13]:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
      local v17, v18, v19 = v6.decoModifiers[v13]:executeSet(0, v6.decoFilters[v13])
      if not (0 < v18) then
        continue
      end
      if not not v14.mowable then
        continue
      end
    end
    return v7, v8, v9
  end
  return 0, 0, false
end
function FSDensityMapUtil.createVineArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, customState)
  if FSDensityMapUtil.functionCache.createVineArea == nil then
    local v10 = g_currentMission.stoneSystem:getMapHasStones()
    if v10 then
      local v11, v12, v13 = g_currentMission.stoneSystem:getDensityMapData()
      local v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    end
    if Platform.gameplay.useLimeCounter then
      v12, v13, v14 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.LIME_LEVEL)
      if v12 ~= nil then
        local v15 = DensityMapModifier.new(v12, v13, v14, g_currentMission.terrainRootNode)
        v8.limeLevelModifier = v15
        v15 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.LIME_LEVEL)
        v8.limeLevelMaxValue = v15
      end
    end
    FSDensityMapUtil.functionCache.createVineArea = v8
  end
  if v8.fruitData[fruitId] == nil then
    v11 = v11:getFruitTypeByIndex(fruitId)
    v13, v14, v15 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v16 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.GRASS)
    if v11.terrainDataPlaneId == nil then
      return 0
    end
    local v17 = DensityMapModifier.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v17:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v17 = DensityMapFilter.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v17:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v17 = DensityMapModifier.new(v13, v14, v15, v10)
    v17:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v8.fruitData[fruitId] = {fruitModifier = v17, fruitFilter = v17, groundModifier = v17, grassType = v16}
  end
  v9.fruitModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v9.groundModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  FSDensityMapUtil.updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, false, false)
  if v8.stoneModifier ~= nil then
    v8.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v8.stoneModifier:executeSet(0)
  end
  if v15 ~= nil then
    v15:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v15:executeSet(v8.limeLevelMaxValue)
  end
  v16, v17 = v10:executeSet(customState or 1, v11)
  v12:executeSet(v13)
  return v17
end
function FSDensityMapUtil.destroyVineArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.destroyVineArea == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v13:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    FSDensityMapUtil.functionCache.destroyVineArea = {groundModifier = v13}
  end
  FSDensityMapUtil.updateDestroyCommonArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, false, true)
  v7.groundModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.groundModifier:executeSet(0)
end
function FSDensityMapUtil.updateVineAreaValues(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, values)
  if FSDensityMapUtil.functionCache.updateVineAreaValues == nil then
    FSDensityMapUtil.functionCache.updateVineAreaValues = {fruitData = {}}
  end
  if v8.fruitData[fruitId] == nil then
    local v11 = v11:getFruitTypeByIndex(fruitId)
    if v11.terrainDataPlaneId == nil then
      -- TODO: structure LOP_FORNPREP (pc 45, target 49)
      values[0] = 0
      -- TODO: structure LOP_FORNLOOP (pc 48, target 46)
      return 0
    end
    local v12 = DensityMapModifier.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v9.modifier = v12
    v12:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v9.filters = {}
    -- TODO: structure LOP_FORNPREP (pc 80, target 104)
    local v16 = DensityMapFilter.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v9.filters[0] = v16
    v15:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    -- TODO: structure LOP_FORNLOOP (pc 103, target 81)
    v8.fruitData[fruitId] = v9
  end
  v10:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  for v14, v15 in pairs(values) do
    local v17, v18, v19 = v17:executeGet(v9.filters[v14])
    values[v14] = v18
    local v20 = math.max(v10, v19)
  end
  return v10
end
function FSDensityMapUtil.setVineAreaValue(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  if FSDensityMapUtil.functionCache.setVineAreaValue == nil then
    FSDensityMapUtil.functionCache.setVineAreaValue = {fruitData = {}}
  end
  if v9.fruitData[v1] == nil then
    local v12 = v12:getFruitTypeByIndex(v1)
    local v13 = DensityMapModifier.new(v12.terrainDataPlaneId, v12.startStateChannel, v12.numStateChannels, g_currentMission.terrainRootNode)
    v9.fruitData[v1] = {modifier = v13}
  end
  v11:setParallelogramWorldCoords(v2, v3, v4, v5, v6, v7, DensityCoordType.POINT_POINT_POINT)
  v11:executeSet(v8)
end
function FSDensityMapUtil.updateVineCutArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  local v8 = v8:getFruitTypeByIndex(fruitId)
  if FSDensityMapUtil.functionCache.updateVineCutArea == nil then
    local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v14 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
    v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
    if Platform.gameplay.usePlowCounter then
      local v14, v15, v16 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      local v17 = DensityMapModifier.new(v14, v15, v16, g_currentMission.terrainRootNode)
    end
    v7.sprayLevelFilters = {}
    -- TODO: structure LOP_FORNPREP (pc 70, target 88)
    v17 = DensityMapFilter.new(v11, v12, v13, v9)
    v17:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
    v7.sprayLevelFilters[1] = v17
    -- TODO: structure LOP_FORNLOOP (pc 87, target 71)
    FSDensityMapUtil.functionCache.updateVineCutArea = v7
  end
  if v7.fruitData[fruitId] == nil then
    if v8.terrainDataPlaneId == nil then
      return 0
    end
    v11 = DensityMapModifier.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, v10)
    v9.fruitModifier = v11
    v11:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v9.transitionFilters = {}
    for v14, v15 in pairs(v8.harvestTransitions) do
      v16 = DensityMapFilter.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, v10)
      v16:setValueCompareParams(DensityValueCompareType.EQUAL, v14)
      v9.transitionFilters[v15] = v16
    end
    v11 = DensityMapFilter.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, v10)
    v9.harvestFilter = v11
    v11:setValueCompareParams(DensityValueCompareType.BETWEEN, v8.minHarvestingGrowthState, v8.maxHarvestingGrowthState)
    if v8.harvestWeedState ~= nil then
      v11 = DensityMapFilter.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, v10)
      v9.weedFilter = v11
      v11:setValueCompareParams(DensityValueCompareType.EQUAL, v8.harvestWeedState)
    end
    v7.fruitData[fruitId] = v9
  end
  v9.fruitModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v7.sprayLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  for v23, v24 in pairs(v7.sprayLevelFilters) do
    local v25, v26, v27 = v14:executeGet(v24)
    if not (0 < v26) then
      continue
    end
    if not (v19 < v23) then
      continue
    end
  end
  FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, nil)
  v14:executeSet(0, v13)
  if 0 < v8.startSprayState then
    v22 = math.min(v8.startSprayState, v15)
    v14:executeSet(v22, v13)
    FSDensityMapUtil.resetSprayArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, true, nil)
  end
  if v12 ~= nil then
    v21, v22, v23 = v10:executeGet(v12)
  end
  if v16 ~= nil then
    v16:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v23, v24, v25 = v16:executeAdd(-1, v13)
  end
  for v29, v30 in pairs(v11) do
    local v31, v32, v33 = v10:executeSet(v29, v30)
  end
  if 0 < v22 then
  end
  if v20 < v24 then
  end
  return v23, v24, 1 - v20 / v24, v19 / v15, v21 / v24
end
function FSDensityMapUtil.updateVinePrepareArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.updateVinePrepareArea == nil then
    FSDensityMapUtil.functionCache.updateVinePrepareArea = {fruitData = {}}
  end
  if v7.fruitData[fruitId] == nil then
    local v10 = v10:getFruitTypeByIndex(fruitId)
    if v10.terrainDataPlaneId == nil then
      return 0
    end
    if v10.witheredState == nil then
      return 0
    end
    local v11 = DensityMapModifier.new(v10.terrainDataPlaneId, v10.startStateChannel, v10.numStateChannels, v9)
    v11:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v11 = DensityMapFilter.new(v10.terrainDataPlaneId, v10.startStateChannel, v10.numStateChannels, v9)
    v11:setValueCompareParams(DensityValueCompareType.EQUAL, v10.witheredState)
    v7.fruitData[fruitId] = {fruitModifier = v11, fruitFilter = v11}
  end
  v8.fruitModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v11, v12, v13 = v8.fruitModifier:executeSet(1, v8.fruitFilter)
  return v12, v13
end
function FSDensityMapUtil.resetVineArea(fruitId, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, resetState)
  if FSDensityMapUtil.functionCache.resetVineArea == nil then
    FSDensityMapUtil.functionCache.resetVineArea = {fruitData = {}}
  end
  if v8.fruitData[fruitId] == nil then
    local v11 = v11:getFruitTypeByIndex(fruitId)
    if v11.terrainDataPlaneId == nil then
      return 0
    end
    local v12 = DensityMapModifier.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v9.fruitModifier = v12
    v12:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
    v12 = DensityMapFilter.new(v11.terrainDataPlaneId, v11.startStateChannel, v11.numStateChannels, v10)
    v9.fruitFilter = v12
    v12:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    v8.fruitData[fruitId] = v9
  end
  v9.fruitModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v12, v13, v14 = v9.fruitModifier:executeSet(resetState, v9.fruitFilter)
  return v13, v14
end
function FSDensityMapUtil.updateVineCultivatorArea(v0, v1, v2, v3, v4, v5, v6)
  if v6 == nil then
  end
  if v7 == nil then
    local v10, v11, v12 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v13 = g_currentMission.fieldGroundSystem:getFieldGroundValue(FieldGroundType.CULTIVATED)
    local v14 = DensityMapModifier.new(v10, v11, v12, g_currentMission.terrainRootNode)
    local v15 = DensityMapFilter.new(v10, v11, v12, g_currentMission.terrainRootNode)
    v15:setValueCompareParams(DensityValueCompareType.EQUAL, v13)
    local multiModifier = DensityMapMultiModifier.new()
    {}[true] = multiModifier
    multiModifier = DensityMapMultiModifier.new()
    {}[false] = multiModifier
    if Platform.gameplay.usePlowCounter then
      local v18, v19, v20 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      local v21 = DensityMapModifier.new(v18, v19, v20, g_currentMission.terrainRootNode)
    end
    v19 = v19:getFruitTypes()
    for v21, v22 in pairs(...) do
      if not (v22.terrainDataPlaneId ~= nil) then
        continue
      end
      if not (v22.cultivationStates ~= nil) then
        continue
      end
      if v16 == nil then
        local v23 = DensityMapFilter.new(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, v8)
      else
        v16:resetDensityMapAndChannels(v22.terrainDataPlaneId, v22.startStateChannel, v22.numStateChannels, v8)
      end
      for v26, v27 in ipairs(v22.cultivationStates) do
        v16:setValueCompareParams(DensityValueCompareType.EQUAL, v27)
        v28:addExecuteSet(v13, v14, v16)
        if not (multiModifier ~= nil) then
          continue
        end
        v28:addExecuteAdd(1, multiModifier, v16)
        v28:addExecuteAdd(1, multiModifier, v16)
      end
    end
    v7.multiModifiers = v15
    FSDensityMapUtil.functionCache.updateVineCultivatorArea = v7
  end
  v7.groundModifier:setParallelogramWorldCoords(v0, v1, v2, v3, v4, v5, DensityCoordType.POINT_POINT_POINT)
  v11, v12, v13 = v7.groundModifier:executeGet(v7.groundFilter)
  v14:updateParallelogramWorldCoords(v0, v1, v2, v3, v4, v5, DensityCoordType.POINT_POINT_POINT)
  v14:execute(false)
  local v14, v15, v16 = v7.groundModifier:executeGet(v7.groundFilter)
  FSDensityMapUtil.removeWeedArea(v0, v1, v2, v3, v4, v5)
  return v15 - v12
end
function FSDensityMapUtil.eraseTireTrack(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if g_currentMission.tireTrackSystem ~= nil then
    g_currentMission.tireTrackSystem:eraseParallelogram(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
end
function FSDensityMapUtil.getAreaDensity(id, firstChannel, numChannels, value, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.getAreaDensity == nil then
    local v12, v13, v14 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v15 = DensityMapFilter.new(v12, v13, v14)
    FSDensityMapUtil.functionCache.getAreaDensity = {filter = v15, densityMapIdToModifier = {}}
  end
  if v10.densityMapIdToModifier[id] == nil then
    v14 = DensityMapModifier.new(id, firstChannel, numChannels, g_currentMission.terrainRootNode)
    v10.densityMapIdToModifier[id] = v14
  end
  v11:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v12:setValueCompareParams(DensityValueCompareType.EQUAL, value)
  v13 = v11:executeGet(v12)
  return v13
end
function FSDensityMapUtil.getFruitTypeIndexAtWorldPos(x, z)
  if FSDensityMapUtil.functionCache.getFruitTypeIndexAtWorldPos == nil then
    local v5 = v5:getFruitTypes()
    for v7, v8 in pairs(...) do
      if not (v8.terrainDataPlaneId ~= nil) then
        continue
      end
      local v9 = DensityMapModifier.new(v8.terrainDataPlaneId, v8.startStateChannel, v8.numStateChannels, v3)
      v9:setPolygonRoundingMode(DensityRoundingMode.NEAREST)
      v2.fruitModifiers[v7] = v9
      local v10 = DensityMapFilter.new(v9)
      v10:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v2.fruitFilters[v7] = v10
    end
    FSDensityMapUtil.functionCache.getFruitTypeIndexAtWorldPos = v2
  end
  v7 = math.floor(x / g_currentMission.terrainSize / g_currentMission.fruitMapSize)
  v8 = math.floor(z / g_currentMission.terrainSize / g_currentMission.fruitMapSize)
  local v11 = v11:getFruitTypes()
  for v13, v14 in pairs(...) do
    v2.fruitModifiers[v13]:setParallelogramWorldCoords(v6, v7, v8, v7, v6, v9, DensityCoordType.POINT_POINT_POINT)
    local v17, v18, v19 = v2.fruitModifiers[v13]:executeGet(v2.fruitFilters[v13])
    if not (0 < v18) then
      continue
    end
    return v13, v17
  end
  return nil, nil
end
function FSDensityMapUtil.getIsFieldAtWorldPos(x, z)
  local v3 = getDensityAtWorldPos(g_currentMission.terrainDetailId, x, 0, z)
  if v3 == 0 then
  end
  return true
end
function FSDensityMapUtil.getFieldDensity(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.getFieldDensity == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v12 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v12:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    FSDensityMapUtil.functionCache.getFieldDensity = {modifier = v12, filter = v12}
  end
  v6.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v9 = v6.modifier:executeGet(v6.filter)
  return v9
end
function FSDensityMapUtil.getBushDensity(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.getBushDensity == nil then
    local bushId = getTerrainDataPlaneByName(g_currentMission.terrainRootNode, "decoBush")
    if bushId ~= 0 then
      local v9 = DensityMapModifier.new(bushId, 0, 4, g_currentMission.terrainRootNode)
      v9:setReturnValueShift(-1)
      v9 = DensityMapFilter.new(bushId, 0, 4, g_currentMission.terrainRootNode)
      v9:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      FSDensityMapUtil.functionCache.getBushDensity = {modifier = v9, filter = v9}
    else
      return 0, 0, 0
    end
  end
  v6.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v9 = v6.modifier:executeGet(v6.filter)
  return v9
end
function FSDensityMapUtil.convertToDensityMapAngle(angle, maxDensityValue)
  if Platform.id ~= PlatformId.XBOX_ONE and Platform.id ~= PlatformId.PS4 then
  end
  if v2 then
  end
  local value = math.floor(angle / math.pi * (maxDensityValue + 1) + 0.5)
  while maxDensityValue < value do
  end
  while true do
    if not (value < 0) then
      break
    end
  end
  if v2 then
  end
  return value
end
function FSDensityMapUtil.getWeedFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, fruitIndex)
  local v9 = g_currentMission.weedSystem:getMapHasWeed()
  if v9 then
    if FSDensityMapUtil.functionCache.getWeedFactor == nil then
      local v12, v13, v14 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local v15, v16, v17 = g_currentMission.weedSystem:getDensityMapData()
      local v18 = g_currentMission.weedSystem:getFactors()
      local v19 = DensityMapModifier.new(v15, v16, v17, g_currentMission.terrainRootNode)
      v19 = DensityMapFilter.new(v12, v13, v14)
      v19:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      for v22, v23 in pairs(v18) do
        local v24 = DensityMapFilter.new(v15, v16, v17, v10)
        v24:setValueCompareParams(DensityValueCompareType.EQUAL, v22)
        v9.weedStateFilters[v24] = v23
      end
      FSDensityMapUtil.functionCache.getWeedFactor = v9
    end
    if fruitIndex ~= nil and v9.fruitFilters[fruitIndex] == nil then
      v17 = v17:getFruitTypeByIndex(fruitIndex)
      v18 = DensityMapFilter.new(v17.terrainDataPlaneId, v17.startStateChannel, v17.numStateChannels)
      if not v17.minForageGrowthState then
      end
      v16:setValueCompareParams(v20, v21, v17.maxHarvestingGrowthState)
      v9.fruitFilters[fruitIndex] = v16
    end
    v10:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    v17, v18, v19 = v10:executeGet(v12, v16)
    if v18 ~= 0 then
      for v20, v21 in pairs(v11) do
        v22, v23, v24 = v10:executeGet(v20, v12, v16)
      end
    end
  end
  return v7
end
function FSDensityMapUtil.getFieldStatusAsync(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, callbackFunc, callbackTarget)
  v8:addTask(function()
    if FSDensityMapUtil.functionCache.getFieldStatusAsync == nil then
      local heightWorldX, heightWorldZ, callbackFunc = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local callbackTarget, v8, v9 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
      local v10 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
      local v11 = DensityMapFilter.new(heightWorldX, heightWorldZ, callbackFunc)
      v11:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v11 = DensityMapModifier.new(callbackTarget, v8, v9, g_currentMission.terrainRootNode)
      v11 = DensityMapFilter.new(callbackTarget, v8, v9, g_currentMission.terrainRootNode)
      if Platform.gameplay.usePlowCounter then
        local v11, v12, v13 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
        local v14 = DensityMapModifier.new(v11, v12, v13, g_currentMission.terrainRootNode)
        v14 = DensityMapFilter.new(v11, v12, v13, g_currentMission.terrainRootNode)
        v14:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      end
      if Platform.gameplay.useLimeCounter then
        v11, v12, v13 = widthWorldZ:getDensityMapData(FieldDensityMap.LIME_LEVEL)
        v14 = DensityMapModifier.new(v11, v12, v13, widthWorldX)
        startWorldX.limeLevelModifier = v14
        v14 = DensityMapFilter.new(v11, v12, v13, widthWorldX)
        startWorldX.limeLevelFilter = v14
        v14:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
      end
      v11 = startWorldZ:getMapHasWeed()
      if v11 then
        v11 = startWorldZ:getFieldInfoStates()
        v12, v13, v14 = startWorldZ:getDensityMapData()
        local v15 = DensityMapModifier.new(v12, v13, v14, widthWorldX)
        startWorldX.weedModifier = v15
        startWorldX.weedStateFilters = {}
        for v18, v19 in pairs(v11) do
          local v20 = DensityMapFilter.new(v12, v13, v14, widthWorldX)
          v20:setValueCompareParams(DensityValueCompareType.EQUAL, v18)
          startWorldX.weedStateFilters[v18] = v20
        end
      end
      startWorldX.fruitModifiers = {}
      startWorldX.fruitFilters = {}
      v12 = v12:getFruitTypes()
      for v14, v15 in pairs(...) do
        if not (v15.terrainDataPlaneId ~= nil) then
          continue
        end
        v16 = DensityMapModifier.new(v15.terrainDataPlaneId, v15.startStateChannel, v15.numStateChannels, widthWorldX)
        startWorldX.fruitModifiers[v14] = v16
        startWorldX.fruitFilters[v14] = {}
        -- TODO: structure LOP_FORNPREP (pc 227, target 246)
        local v21 = DensityMapFilter.new(v16)
        v21:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
        table.insert({}, v21)
        -- TODO: structure LOP_FORNLOOP (pc 245, target 228)
      end
      FSDensityMapUtil.functionCache.getFieldStatusAsync = startWorldX
    end
    local widthWorldZ, heightWorldX, heightWorldZ = FSDensityMapUtil.getFieldDensity(u0, u1, u2, u3, u4, u5)
    if heightWorldX == 0 then
      u6(u7, nil)
      return
    end
    callbackTarget = callbackTarget:getFarmlandIdAtWorldPosition((u0 + u2 + u4) / 3, (u1 + u3 + u5) / 3)
    callbackTarget = callbackTarget:getFarmlandOwner({fieldArea = heightWorldX, farmlandId = callbackTarget}.farmlandId)
    callbackTarget:addSubtask(function()
      local startWorldX, startWorldZ, widthWorldX = startWorldX:getDensityMapData(FieldDensityMap.GROUND_TYPE)
      local widthWorldZ = widthWorldZ:getFieldGroundValue(FieldGroundType.CULTIVATED)
      local heightWorldX, heightWorldZ, callbackFunc = FSDensityMapUtil.getAreaDensity(startWorldX, startWorldZ, widthWorldX, widthWorldZ, u1, u2, u3, u4, u5, u6)
      u7.cultivatorFactor = heightWorldZ / u8
    end)
    if Platform.gameplay.useLimeCounter then
      callbackTarget:addSubtask(function()
        u0.limeLevelModifier:setParallelogramWorldCoords(u1, u2, u3, u4, u5, u6, DensityCoordType.POINT_POINT_POINT)
        local widthWorldX, widthWorldZ, heightWorldX = u0.limeLevelModifier:executeGet(u0.limeLevelFilter, u7)
        u8.needsLimeFactor = widthWorldZ / u9
      end)
    end
    if Platform.gameplay.usePlowCounter then
      callbackTarget:addSubtask(function()
        u0.plowLevelModifier:setParallelogramWorldCoords(u1, u2, u3, u4, u5, u6, DensityCoordType.POINT_POINT_POINT)
        local widthWorldX, widthWorldZ, heightWorldX = u0.plowLevelModifier:executeGet(u0.plowLevelFilter, u7)
        u8.plowFactor = widthWorldZ / u9
      end)
    end
    if Platform.gameplay.useRolling then
      callbackTarget:addSubtask(function()
        local startWorldZ = FSDensityMapUtil.getRollerFactor(u1, u2, u3, u4, u5, u6)
        u0.needsRollingFactor = startWorldZ
      end)
    end
    if Platform.gameplay.useStubbleShred then
      callbackTarget:addSubtask(function()
        local startWorldZ = FSDensityMapUtil.getStubbleFactor(u1, u2, u3, u4, u5, u6)
        u0.stubbleFactor = startWorldZ
      end)
    end
    callbackTarget:addSubtask(function()
      u0.sprayLevelModifier:setParallelogramWorldCoords(u1, u2, u3, u4, u5, u6, DensityCoordType.POINT_POINT_POINT)
      u7.fertilizerFactor = 0
      -- TODO: structure LOP_FORNPREP (pc 27, target 48)
      u0.sprayLevelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
      local callbackFunc, callbackTarget, v8 = u0.sprayLevelModifier:executeGet(u0.sprayLevelFilter, u8)
      u7.fertilizerFactor = u7.fertilizerFactor + 1 * callbackTarget
      -- TODO: structure LOP_FORNLOOP (pc 47, target 28)
      u7.fertilizerFactor = u7.fertilizerFactor / u0.sprayLevelMaxValue * u9
    end)
    callbackFunc.fruits = {}
    callbackFunc.fruitPixels = {}
    v9 = v9:getFruitTypes()
    for v11, v12 in pairs(...) do
      if not (v12.terrainDataPlaneId ~= nil) then
        continue
      end
      v13:addSubtask(function()
        u0.fruitModifiers[u1]:setParallelogramWorldCoords(u2, u3, u4, u5, u6, u7, DensityCoordType.POINT_POINT_POINT)
        -- TODO: structure LOP_FORNPREP (pc 31, target 43)
        local callbackTarget, v8, v9 = u0.fruitModifiers[u1]:executeGet(u0.fruitFilters[u1][0 + 1], u9)
        if 0 < v8 then
        end
        -- TODO: structure LOP_FORNLOOP (pc 42, target 32)
        u10.fruits[u8.index] = widthWorldX
        u10.fruitPixels[u8.index] = widthWorldZ
        if u11 < widthWorldZ then
          u10.fruitTypeMax = u8.index
          u10.fruitStateMax = widthWorldX
          u11 = widthWorldZ
        end
      end)
    end
    if startWorldX.weedModifier ~= nil then
      callbackFunc.weed = {}
      startWorldX.weedModifier:setParallelogramWorldCoords(u0, u1, u2, u3, u4, u5, DensityCoordType.POINT_POINT_POINT)
      for v13, v14 in pairs(startWorldX.weedStateFilters) do
        v15:addSubtask(function()
          local startWorldX, startWorldZ, widthWorldX = startWorldX:executeGet(u1, u2)
          u3.weed[u4] = startWorldZ
        end)
      end
      v10:addSubtask(function()
        local widthWorldZ = FSDensityMapUtil.getWeedFactor(u1, u2, u3, u4, u5, u6)
        u0.weedFactor = 1 - widthWorldZ
      end)
    end
    v9:addSubtask(function()
      u0(u1, u2)
    end)
  end)
end
function FSDensityMapUtil.getStatus(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if FSDensityMapUtil.functionCache.getStatus == nil then
    local v9, v10, v11 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    local v12, v13, v14 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_LEVEL)
    local v16, v17, v18 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
    local v19, v20, v21 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.LIME_LEVEL)
    local v22 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.LIME_LEVEL)
    local v23, v24, v25 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.STUBBLE_SHRED)
    local v26 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.STUBBLE_SHRED)
    local v27, v28, v29 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.ROLLER_LEVEL)
    local v30 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.ROLLER_LEVEL)
    local v31 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.SPRAY_TYPE)
    local v32 = DensityMapModifier.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v32 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v32 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
    v32 = DensityMapModifier.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v32 = DensityMapFilter.new(v12, v13, v14, g_currentMission.terrainRootNode)
    v32 = DensityMapModifier.new(v16, v17, v18, g_currentMission.terrainRootNode)
    v32 = DensityMapFilter.new(v16, v17, v18, g_currentMission.terrainRootNode)
    if Platform.gameplay.usePlowCounter then
      local v32, v33, v34 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.PLOW_LEVEL)
      local v35 = g_currentMission.fieldGroundSystem:getMaxValue(FieldDensityMap.PLOW_LEVEL)
      local v36 = DensityMapModifier.new(v32, v33, v34, g_currentMission.terrainRootNode)
      v36 = DensityMapFilter.new(v32, v33, v34, g_currentMission.terrainRootNode)
    end
    if Platform.gameplay.useLimeCounter then
      v32 = DensityMapModifier.new(v19, v20, v21, v7)
      v6.limeLevelModifier = v32
      v32 = DensityMapFilter.new(v19, v20, v21, v7)
      v6.limeLevelFilter = v32
      v6.limeLevelMaxValue = v22
    end
    if Platform.gameplay.useStubbleShred then
      v32 = DensityMapModifier.new(v23, v24, v25, v7)
      v6.stubbleShredModifier = v32
      v32 = DensityMapFilter.new(v23, v24, v25, v7)
      v6.stubbleShredFilter = v32
      v6.stubbleShredLevelMaxValue = v26
    end
    if Platform.gameplay.useRolling then
      v32 = DensityMapModifier.new(v27, v28, v29, v7)
      v6.rollerLevelModifier = v32
      v32 = DensityMapFilter.new(v27, v28, v29, v7)
      v6.rollerLevelFilter = v32
      v6.rollerLevelMaxValue = v30
    end
    v33 = g_currentMission.stoneSystem:getMapHasStones()
    if v33 then
      v33, v34, v35 = g_currentMission.stoneSystem:getDensityMapData()
      v36 = DensityMapModifier.new(v33, v34, v35, v7)
      v6.stoneModifier = v36
      v36 = DensityMapFilter.new(v33, v34, v35, v7)
      v6.stoneFilter = v36
      v6.stoneNumChannels = v35
    end
    v34 = g_currentMission.weedSystem:getMapHasWeed()
    if v34 then
      v34, v35, v36 = g_currentMission.weedSystem:getDensityMapData()
      local v37 = DensityMapModifier.new(v34, v35, v36, v7)
      v6.weedModifier = v37
      v37 = DensityMapFilter.new(v34, v35, v36, v7)
      v6.weedFilter = v37
      v6.weedNumChannels = v36
      local v37, v38, v39 = g_currentMission.weedSystem:getInfoLayerData()
      local v40, v41, v42 = g_currentMission.weedSystem:getBlockingStateData()
      local v43 = DensityMapModifier.new(v37, v41, v42, v7)
      v6.weedBlockingModifier = v43
      v43 = DensityMapFilter.new(v37, v41, v42, v7)
      v6.weedBlockingFilter = v43
      v6.weedBlockingNumChannels = v42
    end
    FSDensityMapUtil.functionCache.getStatus = v6
  end
  v6.sprayLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v6.sprayTypeModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  local v15, v16, v17 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v6.modifier:resetDensityMapAndChannels(v15, v16, v17)
  v6.modifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
  v19 = FieldGroundType.getAllOrdered()
  for v26, v27 in pairs(v19) do
    v28, v29, v30 = FSDensityMapUtil.getAreaDensity(v15, v16, v17, v27, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
    if v20 then
      table.insert(v18, {name = "TotalPixels", value = v30})
      table.insert(v18, {name = "", value = ""})
    end
    v28 = FieldGroundType.getName(v27)
    table.insert(v18, {name = v28 .. " " .. v27, value = v21})
  end
  if v6.limeLevelModifier ~= nil and v6.limeLevelFilter ~= nil then
    v6.limeLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 500, target 529)
    v6.limeLevelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v28, v29, v30 = v6.limeLevelModifier:executeGet(v6.limeLevelFilter)
    table.insert(v18, {name = "lime " .. 0, value = v29})
    -- TODO: structure LOP_FORNLOOP (pc 528, target 501)
  end
  if v7 ~= nil and v6.plowLevelFilter ~= nil then
    v7:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 563, target 592)
    v6.plowLevelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v29, v30, v31 = v7:executeGet(v6.plowLevelFilter)
    table.insert(v18, {name = "plow " .. 0, value = v30})
    -- TODO: structure LOP_FORNLOOP (pc 591, target 564)
  end
  if v6.stubbleShredModifier ~= nil then
    v6.stubbleShredModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 626, target 655)
    v6.stubbleShredFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v31, v32, v33 = v6.stubbleShredModifier:executeGet(v6.stubbleShredFilter)
    table.insert(v18, {name = "stubbleShred " .. 0, value = v32})
    -- TODO: structure LOP_FORNLOOP (pc 654, target 627)
  end
  if v6.rollerLevelModifier ~= nil then
    v6.rollerLevelModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 689, target 718)
    v6.rollerLevelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v32, v33, v34 = v6.rollerLevelModifier:executeGet(v6.rollerLevelFilter)
    table.insert(v18, {name = "roller " .. 0, value = v33})
    -- TODO: structure LOP_FORNLOOP (pc 717, target 690)
  end
  table.insert(v18, {name = "", value = ""})
  -- TODO: structure LOP_FORNPREP (pc 737, target 766)
  v6.sprayLevelFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  v32, v33, v34 = v8:executeGet(v6.sprayLevelFilter)
  table.insert(v18, {name = "fertilizer " .. 0, value = v33})
  -- TODO: structure LOP_FORNLOOP (pc 765, target 738)
  table.insert(v18, {name = "", value = ""})
  -- TODO: structure LOP_FORNPREP (pc 786, target 899)
  v6.sprayTypeFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
  v34, v35, v36 = v9:executeGet(v6.sprayTypeFilter)
  for v38, v39 in pairs(v14.fieldSprayTypeValue) do
    if not (v39 == v33) then
      continue
    end
  end
  if v34 ~= nil then
    v35 = FieldSprayType.getName(v34)
    table.insert(v18, {name = v35 .. " " .. v33, value = v21})
  else
    v35 = v35:getChopperTypeValue(FieldChopperType.CHOPPER_STRAW)
    if v33 == v35 then
      table.insert(v18, {name = "Straw " .. v33, value = v21})
    else
      v35 = v35:getChopperTypeValue(FieldChopperType.CHOPPER_MAIZE)
      if v33 == v35 then
        table.insert(v18, {name = "Maize " .. v33, value = v21})
      elseif v33 == v30 then
        table.insert(v18, {name = "Mask " .. v33, value = v21})
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 898, target 787)
  if v6.stoneModifier ~= nil then
    v6.stoneModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 936, target 965)
    v6.stoneFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v36, v37, v38 = v6.stoneModifier:executeGet(v6.stoneFilter)
    table.insert(v18, {name = "stone " .. 0, value = v37})
    -- TODO: structure LOP_FORNLOOP (pc 964, target 937)
  end
  if v6.weedModifier ~= nil then
    v6.weedModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    v36 = FSDensityMapUtil.getWeedFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
    table.insert(v18, {name = "WeedFactor", value = v36})
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 1038, target 1067)
    v6.weedFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v37, v38, v39 = v6.weedModifier:executeGet(v6.weedFilter)
    table.insert(v18, {name = "weed " .. 0, value = v38})
    -- TODO: structure LOP_FORNLOOP (pc 1066, target 1039)
    v6.weedBlockingModifier:setParallelogramWorldCoords(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, DensityCoordType.POINT_POINT_POINT)
    table.insert(v18, {name = "", value = ""})
    -- TODO: structure LOP_FORNPREP (pc 1102, target 1131)
    v6.weedBlockingFilter:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    v39, v40, v41 = v6.weedBlockingModifier:executeGet(v6.weedBlockingFilter)
    table.insert(v18, {name = "weed blocking " .. 0, value = v40})
    -- TODO: structure LOP_FORNLOOP (pc 1130, target 1103)
  end
  table.insert(v18, {name = "", value = "", newColumn = true})
  v37 = v37:getFruitTypes()
  for v39, v40 in pairs(...) do
    if not (v40.terrainDataPlaneId ~= nil) then
      continue
    end
    v11:resetDensityMapAndChannels(v40.terrainDataPlaneId, v40.startStateChannel, v40.numStateChannels)
    v12:resetDensityMapAndChannels(v11)
    table.insert(v18, {name = v40.name, value = ""})
    -- TODO: structure LOP_FORNPREP (pc 1199, target 1252)
    v12:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
    local v44, v45, v46 = v11:executeGet(v12)
    if 0 < v45 and v40.minHarvestingGrowthState < 0 and 0 <= v40.maxHarvestingGrowthState then
      v44 = table.addElement(v33, v39)
      if v44 then
        table.insert(v34, v45)
      end
    end
    table.insert(v18, {name = "state " .. v43, value = v21})
    -- TODO: structure LOP_FORNLOOP (pc 1251, target 1200)
    if v40.terrainDataPlaneIdPreparing ~= nil then
      v11:resetDensityMapAndChannels(v40.terrainDataPlaneIdPreparing, 0, 1)
      v12:resetDensityMapAndChannels(v11)
      v12:setValueCompareParams(DensityValueCompareType.GREATER, 0)
      v41, v42, v43 = v11:executeGet(v12)
      table.insert(v18, {name = "state preparing", value = v42})
    end
    if (v35 + 1) % 3 ~= 0 then
    end
    v43.newColumn = true
    table.insert(v18, v43)
  end
  v18[#v18].newColumn = true
  v28:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  if v25 ~= nil then
    v25:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  if v24 ~= nil then
    v24:setValueCompareParams(DensityValueCompareType.GREATER, 0)
  end
  for v39, v40 in ipairs(v33) do
    v41 = v41:getFruitTypeByIndex(v40)
    local v47 = FSDensityMapUtil.getWeedFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, v40)
    table.insert(v18, {name = "weedFactor " .. v41.name, value = 1 - v47})
    v13:resetDensityMapAndChannels(v41.terrainDataPlaneId, v41.startStateChannel, v41.numStateChannels)
    v13:setValueCompareParams(DensityValueCompareType.BETWEEN, v41.minHarvestingGrowthState + 1, v41.maxHarvestingGrowthState)
    if v25 ~= nil then
      v43, v44, v45 = v7:executeGet(v25, v13)
      local v49 = string.format("%.4f | %d | %d ", v44 / v34[v39], v44, v34[v39])
      table.insert(v18, {name = "plowFactor " .. v41.name, value = v49})
    end
    v43, v44, v45 = v8:executeGet(v28, v13)
    if 0 < v44 then
    end
    local v50 = string.format("%.4f | %d | %d", v46, v43, v42 * v6.sprayLevelMaxValue)
    table.insert(v18, {name = "sprayFactor " .. v41.name, value = v50})
    if v23 ~= nil then
      local v47, v48, v49 = v23:executeGet(v24, v13)
      local v53 = string.format("%.4f | %d | %d", v48 / v42, v48, v42)
      table.insert(v18, {name = "limeFactor " .. v41.name, value = v53})
    end
    if v27 ~= nil then
      local v52 = FSDensityMapUtil.getRollerFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
      v50 = string.format(...)
      table.insert(v18, {name = "rollerFactor", value = v50})
    end
    if not (v26 ~= nil) then
      continue
    end
    v52 = FSDensityMapUtil.getStubbleFactor(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
    v50 = string.format(...)
    table.insert(v18, {name = "stubbleFactor", value = v50})
  end
  return v18
end
function FSDensityMapUtil.assert(bool, warning)
  if FSDensityMapUtil.DEBUG_ENABLED then
    assert(bool, warning)
  end
end
