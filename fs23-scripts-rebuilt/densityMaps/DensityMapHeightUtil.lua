-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DensityMapHeightUtil = {lastVehiclesInRange = {}, terrainDetailHeightId = nil, typeFirstChannel = nil, typeNumChannels = nil, heightFirstChannel = nil, heightNumChannels = nil, modifiersCache = nil}
function DensityMapHeightUtil.initTerrain(currentMission, detailId, detailHeightId)
  DensityMapHeightUtil.terrainDetailHeightId = detailHeightId
  DensityMapHeightUtil.typeFirstChannel = g_densityMapHeightManager.heightTypeFirstChannel
  DensityMapHeightUtil.typeNumChannels = g_densityMapHeightManager.heightTypeNumChannels
  local v4 = getDensityMapHeightFirstChannel(detailHeightId)
  DensityMapHeightUtil.heightFirstChannel = v4
  v4 = getDensityMapHeightNumChannels(detailHeightId)
  DensityMapHeightUtil.heightNumChannels = v4
  DensityMapHeightUtil.modifiersCache = {}
end
function DensityMapHeightUtil.clearCache()
  DensityMapHeightUtil.lastVehiclesInRange = {}
  DensityMapHeightUtil.terrainDetailHeightId = nil
  DensityMapHeightUtil.typeFirstChannel = nil
  DensityMapHeightUtil.typeNumChannels = nil
  DensityMapHeightUtil.heightFirstChannel = nil
  DensityMapHeightUtil.heightNumChannels = nil
  DensityMapHeightUtil.modifiersCache = nil
end
function DensityMapHeightUtil.getCanTipToGround(fillTypeIndex)
  local v1 = v1:getIsValid()
  if not v1 then
    return false
  end
  v1 = v1:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if v1 == nil then
    return false
  end
  return true
end
function DensityMapHeightUtil.getFillTypeAtLine(sx, sy, sz, ex, ey, ez, radius)
  local v7 = v7:getIsValid()
  if v7 then
    local v8 = v8:getTerrainDetailHeightUpdater()
    v7 = getDensityMapHeightTypeAtWorldLine(v8, sx, sy, sz, ex, ey, ez, radius)
    v8 = v8:getFillTypeIndexByDensityHeightMapIndex(v7)
    if v8 ~= nil then
      return v8
    end
  end
  return FillType.UNKNOWN
end
function DensityMapHeightUtil.getFillTypeAtArea(x0, z0, x1, z1, x2, z2)
  if DensityMapHeightUtil.modifiersCache.getFillTypeAtArea == nil then
    local v7 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    v7 = v7:getDensityMapHeightTypes()
    if v7 ~= nil then
      for v11, v12 in ipairs(v7) do
        local v13 = DensityMapFilter.new(v6.typeModifier)
        v13:setValueCompareParams(DensityValueCompareType.EQUAL, v12.index)
        v6.typeFilters[v12] = v13
      end
    end
    DensityMapHeightUtil.modifiersCache.getFillTypeAtArea = v6
  end
  v7 = v7:getIsValid()
  if not v7 then
    return FillType.UNKNOWN
  end
  v6.typeModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  v9 = v6.typeModifier:executeGet()
  if 0 < v9 then
    for v14, v15 in pairs(v6.typeFilters) do
      local v16 = v8:executeGet(v15)
      if not (0 < v16) then
        continue
      end
      return v14.fillTypeIndex
    end
  end
  return v7
end
function DensityMapHeightUtil.getFillLevelAtArea(fillTypeIndex, x0, z0, x1, z1, x2, z2)
  local v7 = v7:getIsValid()
  if not v7 then
    return 0, 0, 0
  end
  v7 = v7:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if v7 == nil then
    return 0, 0, 0
  end
  if DensityMapHeightUtil.modifiersCache.getFillLevelAtArea == nil then
    local v9 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.heightFirstChannel, DensityMapHeightUtil.heightNumChannels)
    v9:setPolygonRoundingMode(DensityRoundingMode.NEAREST_EXPAND)
    v9 = DensityMapFilter.new({heightModifier = v9}.heightModifier)
    v9:setValueCompareParams(DensityValueCompareType.GREATER, 0)
    DensityMapHeightUtil.modifiersCache.getFillLevelAtArea = {heightModifier = v9, heightFilter = v9, typeFilters = {}}
  end
  if v8.typeFilters[fillTypeIndex] == nil then
    local v12 = DensityMapFilter.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    v12:setValueCompareParams(DensityValueCompareType.EQUAL, v7.index)
    v8.typeFilters[fillTypeIndex] = v12
  end
  v9:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  local v12, v13, v14 = v9:executeGet(v10, v11)
  local v16 = v16:getMinValidLiterValue(fillTypeIndex)
  return v12 * v16, v13, v14
end
function DensityMapHeightUtil.getValueAtArea(x0, z0, x1, z1, x2, z2, filterSnow)
  if DensityMapHeightUtil.modifiersCache.getValueAtArea == nil then
    local v8 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.heightFirstChannel, DensityMapHeightUtil.heightNumChannels)
    DensityMapHeightUtil.modifiersCache.getValueAtArea = {heightModifier = v8}
    v8 = DensityMapFilter.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    local v11 = v11:getDensityMapHeightTypeIndexByFillTypeIndex(FillType.SNOW)
    v8:setValueCompareParams(...)
  end
  if filterSnow then
  end
  v8:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  return v8:executeGet(v9)
end
function DensityMapHeightUtil.getHeightAtWorldPos(x, y, z)
  return getDensityHeightAtWorldPos(DensityMapHeightUtil.terrainDetailHeightId, x, y, z)
end
function DensityMapHeightUtil.getCollisionHeightAtWorldPos(x, y, z)
  local v3 = v3:getIsValid()
  if v3 then
    local v4 = v4:getTerrainDetailHeightUpdater()
    v3 = getDensityMapCollisionHeightAtWorldPos(v4, x, y, z)
    return v3
  end
  return 0, 0
end
function DensityMapHeightUtil.getVehiclesInRange(refVehicle, x, y, z, radiusSq)
  -- TODO: structure LOP_FORNPREP (pc 7, target 15)
  DensityMapHeightUtil.lastVehiclesInRange[#DensityMapHeightUtil.lastVehiclesInRange] = nil
  -- TODO: structure LOP_FORNLOOP (pc 14, target 8)
  for v8, v9 in pairs(g_currentMission.vehicles) do
    if not (v9 ~= refVehicle) then
      continue
    end
    if not (v9.components ~= nil) then
      continue
    end
    for v13, v14 in pairs(v9.components) do
      local v15, v16, v17 = getWorldTranslation(v14.node)
      local v18 = MathUtil.vector3LengthSq(x - v15, y - v16, z - v17)
      if not (v18 < radiusSq) then
        continue
      end
      table.insert(DensityMapHeightUtil.lastVehiclesInRange, v9)
      break
    end
  end
  return DensityMapHeightUtil.lastVehiclesInRange
end
function DensityMapHeightUtil:tipToGroundAroundLine(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
  local v16 = v16:getIsValid()
  if not v16 then
    return 0, 0
  end
  v16 = v16:getDensityMapHeightTypeByFillTypeIndex(v2)
  if v16 == nil then
    return 0, 0
  end
  if v13 == nil and self ~= nil and self.getTipOcclusionAreas ~= nil then
    local v17 = self:getTipOcclusionAreas()
  end
  if v10 == nil then
    v17 = getDensityMapMaxHeight(DensityMapHeightUtil.terrainDetailHeightId)
    local v18 = math.tan(v16.maxSurfaceAngle)
  end
  if v9 == nil then
  end
  if v11 == nil then
  end
  if v12 == nil then
  end
  if v15 == nil then
  end
  if v1 < 0 then
  end
  if 0 < v1 then
    v17 = v17:getFixedFillTypesAreas()
    if v17 ~= nil then
      for v21, v22 in pairs(v17) do
        if not (v21 ~= nil) then
          continue
        end
        if not (v22 ~= nil) then
          continue
        end
        for v27, v28 in pairs(v22.fillTypes) do
          if not (v27 == v2) then
            continue
          end
        end
        if not (v21 ~= nil) then
          continue
        end
        if not not v23 then
          continue
        end
        v24, v25, v26 = getWorldTranslation(v21.start)
        local v27, v28, v29 = getWorldTranslation(v21.width)
        local v30, v31, v32 = getWorldTranslation(v21.height)
        local v33 = MathUtil.hasRectangleLineIntersection2D(v24, v26, v27 - v24, v29 - v26, v30 - v24, v32 - v26, v3, v5, v6 - v3, v8 - v5)
        if not v33 then
          continue
        end
        return 0, 0
      end
    end
    v18 = v18:getConvertingFillTypesAreas()
    if v18 ~= nil then
      for v22, v23 in pairs(v18) do
        if not (v22 ~= nil) then
          continue
        end
        if not (v23 ~= nil) then
          continue
        end
        v24, v25, v26 = getWorldTranslation(v22.start)
        v27, v28, v29 = getWorldTranslation(v22.width)
        v30, v31, v32 = getWorldTranslation(v22.height)
        v33 = MathUtil.hasRectangleLineIntersection2D(v24, v26, v27 - v24, v29 - v26, v30 - v24, v32 - v26, v3, v5, v6 - v3, v8 - v5)
        if not v33 then
          continue
        end
        if v23.fillTypes[v2] == true then
          v33 = v33:getDensityMapHeightTypeByFillTypeIndex(v23.fillTypeTarget)
          if not (v33 == nil) then
            continue
          end
          return 0, 0
        else
          return 0, 0
        end
      end
    end
  end
  if v14 ~= nil and v14 then
    if v13 ~= nil then
      v18 = v18:getTerrainDetailHeightUpdater()
      if v18 ~= nil then
        for v22, v23 in pairs(v13) do
          v24, v25, v26 = getWorldTranslation(v23.start)
          v27, v28, v29 = getWorldTranslation(v23.width)
          v30, v31, v32 = getWorldTranslation(v23.height)
          if v23.allowPropagation == nil then
          end
          addDensityMapHeightOcclusionArea(v18, v24, v25, v26, v27 - v24, v28 - v25, v29 - v26, v30 - v24, v31 - v25, v32 - v26, v33)
          if not (VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES) then
            continue
          end
          drawDebugTriangle(v24, v25, v26, v27, v28, v29, v30, v31, v32, 1, 0, 0, 0.5, false)
          drawDebugTriangle(v27 + v30 - v24, v28 + v31 - v25, v29 + v32 - v26, v30, v31, v32, v27, v28, v29, 1, 0, 0, 0.5, false)
          drawDebugTriangle(v30, v31, v32, v27, v28, v29, v24, v25, v26, 1, 0, 0, 0.5, false)
          drawDebugTriangle(v27, v28, v29, v30, v31, v32, v27 + v30 - v24, v28 + v31 - v25, v29 + v32 - v26, 1, 0, 0, 0.5, false)
        end
      end
    end
    v18 = v18:getTerrainDetailHeightUpdater()
    if v18 ~= nil then
      v19 = MathUtil.vector3Length(v3 - v6, v4 - v7, v5 - v8)
      v24 = DensityMapHeightUtil.getVehiclesInRange(self, 0.5 * (v3 + v6), 0.5 * (v4 + v7), 0.5 * (v5 + v8), (20 + 0.5 * v19 + v10) ^ 2)
      if v24 ~= nil then
        for v28, v29 in pairs(v24) do
          if not (v29.getTipOcclusionAreas ~= nil) then
            continue
          end
          v30 = v29:getTipOcclusionAreas()
          for v34, v35 in pairs(v30) do
            local v36, v37, v38 = getWorldTranslation(v35.start)
            local v39, v40, v41 = getWorldTranslation(v35.width)
            local v42, v43, v44 = getWorldTranslation(v35.height)
            addDensityMapHeightOcclusionArea(v18, v36, v37, v38, v39 - v36, v40 - v37, v41 - v38, v42 - v36, v43 - v37, v44 - v38, false)
            if not (VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES) then
              continue
            end
            drawDebugTriangle(v36, v37, v38, v39, v40, v41, v42, v43, v44, 1, 0, 0, 0.5, false)
            drawDebugTriangle(v39 + v42 - v36, v40 + v43 - v37, v41 + v44 - v38, v42, v43, v44, v39, v40, v41, 1, 0, 0, 0.5, false)
            drawDebugTriangle(v42, v43, v44, v39, v40, v41, v36, v37, v38, 1, 0, 0, 0.5, false)
            drawDebugTriangle(v39, v40, v41, v42, v43, v44, v39 + v42 - v36, v40 + v43 - v37, v41 + v44 - v38, 1, 0, 0, 0.5, false)
          end
        end
      end
    end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
    drawDebugLine(v3, v4, v5, 0, 1, 1, v6, v7, v8, 0, 1, 1)
    drawDebugLine(v3, v4, v5, 0, 1, 1, v3, v4, v5, 0, 1, 1)
    drawDebugLine(v6, v7, v8, 0, 1, 1, v6, v7, v8, 0, 1, 1)
  end
  v19 = v19:getTerrainDetailHeightUpdater()
  if v19 ~= nil then
    if not v15 then
      v23 = v23:getMinValidLiterValue(v2)
      v21 = math.max(...)
    end
    v21, v22 = addDensityMapHeightAtWorldLine(v19, v3, v4, v5, v6, v7, v8, v20, v16.index, v9, v10, v12, v11, v15)
    if not v15 then
      v21 = math.min(v21, v20)
    end
  end
  v21 = math.abs(v1)
  v22 = math.abs(v18 / v17)
  if v21 - v22 < 0.001 then
  end
  return v18, v11
end
function DensityMapHeightUtil.getCanTipToGroundAroundLine(vehicle, delta, fillTypeIndex, sx, sy, sz, ex, ey, ez, innerRadius, radius, lineOffset, limitToLineHeight, occlusionAreas, useOcclusionAreas)
  local v15, v16 = DensityMapHeightUtil.tipToGroundAroundLine(vehicle, delta, fillTypeIndex, sx, sy, sz, ex, ey, ez, innerRadius, radius, lineOffset, limitToLineHeight, occlusionAreas, useOcclusionAreas, false)
  if v15 == 0 then
  end
  return true
end
function DensityMapHeightUtil.removeFromGroundByArea(x0, z0, x1, z1, x2, z2, fillTypeIndex)
  local v7 = v7:getIsValid()
  if not v7 then
    return 0
  end
  v7 = v7:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if v7 == nil then
    return 0
  end
  if DensityMapHeightUtil.modifiersCache.removeFromGroundByArea == nil then
    local v9 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.heightFirstChannel, DensityMapHeightUtil.heightNumChannels)
    v9 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    DensityMapHeightUtil.modifiersCache.removeFromGroundByArea = {heightModifier = v9, typeModifier = v9, typeFilters = {}}
  end
  if v8.typeFilters[v7] == nil then
    local v10 = DensityMapFilter.new(v8.typeModifier)
    v10:setValueCompareParams(DensityValueCompareType.EQUAL, v7.index)
    v8.typeFilters[v7] = v10
  end
  v8.heightModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  v8.typeModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  v8.typeModifier:executeSet(0, v9)
  local v12 = v8.heightModifier:executeSet(0, v9)
  local v14 = v14:getMinValidLiterValue(fillTypeIndex)
  return v12 * v14
end
function DensityMapHeightUtil.changeFillTypeAtArea(x0, z0, x1, z1, x2, z2, fillTypeIndex, newFillTypeIndex)
  local v8 = v8:getIsValid()
  if not v8 then
    return 0
  end
  v8 = v8:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  local v9 = v9:getDensityMapHeightTypeByFillTypeIndex(newFillTypeIndex)
  if v8 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L26
  end
  return 0
  if DensityMapHeightUtil.modifiersCache.changeFillTypeAtArea == nil then
    local v11 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    DensityMapHeightUtil.modifiersCache.changeFillTypeAtArea = {typeModifier = v11, typeFilters = {}}
  end
  if v10.typeFilters[v8] == nil then
    local v12 = DensityMapFilter.new(v10.typeModifier)
    v12:setValueCompareParams(DensityValueCompareType.EQUAL, v8.index)
    v10.typeFilters[v8] = v12
  end
  v10.typeModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  local v13 = v10.typeModifier:executeSet(v9.index, v11)
  local v15 = v15:getMinValidLiterValue(fillTypeIndex)
  return v13 * v15
end
function DensityMapHeightUtil.clearArea(x0, z0, x1, z1, x2, z2)
  if DensityMapHeightUtil.modifiersCache.clearArea == nil then
    local v7 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.heightFirstChannel, DensityMapHeightUtil.heightNumChannels)
    v7 = DensityMapModifier.new(DensityMapHeightUtil.terrainDetailHeightId, DensityMapHeightUtil.typeFirstChannel, DensityMapHeightUtil.typeNumChannels)
    DensityMapHeightUtil.modifiersCache.clearArea = {heightModifier = v7, typeModifier = v7}
  end
  v6.heightModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  v6.typeModifier:setParallelogramWorldCoords(x0, z0, x1, z1, x2, z2, DensityCoordType.POINT_POINT_POINT)
  v6.heightModifier:executeSet(0)
  v6.typeModifier:executeSet(0)
end
function DensityMapHeightUtil.getDefaultMaxRadius(fillTypeIndex)
  local v1 = v1:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if v1 == nil then
    return 0
  end
  local v3 = getDensityMapMaxHeight(DensityMapHeightUtil.terrainDetailHeightId)
  local v4 = math.tan(v1.maxSurfaceAngle)
  return v3 / v4
end
function DensityMapHeightUtil.getRoundedHeightValue(height)
  local v1 = v1:getIsValid()
  if not v1 then
    return height
  end
  local v2 = math.floor(height * g_densityMapHeightManager.heightToDensityValue)
  return v2 / g_densityMapHeightManager.heightToDensityValue
end
function DensityMapHeightUtil.getHeightTypeDescAtWorldPos(x, y, z, radius)
  local v4 = v4:getTerrainDetailHeightUpdater()
  local v5 = getDensityMapHeightTypeAtWorldPos(v4, x, y, z, radius)
  if v5 ~= nil then
    return v6:getDensityMapHeightTypeByIndex(v5)
  end
  return nil
end
function DensityMapHeightUtil.getLineByAreaDimensions(sx, sy, sz, wx, wy, wz, hx, hy, hz, radiusOverlap)
  local v16 = MathUtil.vector3Length(wx - sx, wy - sy, wz - sz)
  local v17 = MathUtil.vector3Length(hx - sx, hy - sy, hz - sz)
  if v17 < v16 then
    if radiusOverlap ~= nil and radiusOverlap then
    end
    return sx + v13 * v17 * 0.5 + v10 * v25, sy + v14 * v17 * 0.5 + v11 * v25, sz + v15 * v17 * 0.5 + v12 * v25, wx + v13 * v17 * 0.5 - v10 * v25, wy + v14 * v17 * 0.5 - v11 * v25, wz + v15 * v17 * 0.5 - v12 * v25, v24
  end
  if radiusOverlap ~= nil and radiusOverlap then
  end
  return sx + v10 * v16 * 0.5 + v13 * v25, sy + v11 * v16 * 0.5 + v14 * v25, sz + v12 * v16 * 0.5 + v15 * v25, hx + v10 * v16 * 0.5 - v13 * v25, hy + v11 * v16 * 0.5 - v14 * v25, hz + v12 * v16 * 0.5 - v15 * v25, v24
end
function DensityMapHeightUtil.getLineByArea(start, width, height, radiusOverlap)
  local v4, v5, v6 = getWorldTranslation(start)
  local v7, v8, v9 = getWorldTranslation(width)
  local v10, v11, v12 = getWorldTranslation(height)
  return DensityMapHeightUtil.getLineByAreaDimensions(v4, v5, v6, v7, v8, v9, v10, v11, v12, radiusOverlap)
end
function DensityMapHeightUtil.getAreaPartitions(start, width, height)
  local v3, v4, v5 = getWorldTranslation(start)
  local v6, v7, v8 = getWorldTranslation(width)
  local v9, v10, v11 = getWorldTranslation(height)
  local v13 = MathUtil.vector3Length(v9 - v3, v10 - v4, v11 - v5)
  local v14, v15, v16 = MathUtil.vector3Normalize(v9 - v3, v10 - v4, v11 - v5)
  if 4 < v13 then
    local v18 = math.ceil(v13 / 4)
    -- TODO: structure LOP_FORNPREP (pc 39, target 146)
    local v22 = createTransformGroup("start" .. 1)
    local v23 = createTransformGroup("width" .. 1)
    local v24 = createTransformGroup("height" .. 1)
    link(start, v22)
    link(width, v23)
    link(height, v24)
    setWorldTranslation(v22, v3 + v14 * v13 / v18 * (1 - 1), v4 + v15 * v13 / v18 * (1 - 1), v5 + v16 * v13 / v18 * (1 - 1))
    setWorldTranslation(v23, v6 + v14 * v13 / v18 * (1 - 1), v7 + v15 * v13 / v18 * (1 - 1), v8 + v16 * v13 / v18 * (1 - 1))
    setWorldTranslation(v24, v3 + v14 * v13 / v18 * 1, v4 + v15 * v13 / v18 * 1, v5 + v16 * v13 / v18 * 1)
    table.insert({}, {start = v22, width = v23, height = v24})
    -- TODO: structure LOP_FORNLOOP (pc 131, target 40)
    return {}
  end
  table.insert(v12, {start = start, width = width, height = height})
  return v12
end
function DensityMapHeightUtil.smoothAroundLine(node, width, radius, overlap, smoothAmount)
  local v5 = math.ceil(width / radius * 2 / overlap)
  -- TODO: structure LOP_FORNPREP (pc 13, target 107)
  local v11, v12, v13 = localToWorld(node, -(width * 0.5) + width / v5 * 0.5 * 2 * (1 - 0.5), 0, 0)
  if not nil then
    local v15 = DensityMapHeightUtil.getHeightTypeDescAtWorldPos(v11, v12, v13, width / v5 * 0.5 * overlap)
  end
  if v15 ~= nil and v15.allowsSmoothing then
    v15 = v15:getTerrainDetailHeightUpdater()
    if v15 ~= nil then
      local v16 = DensityMapHeightUtil.getHeightAtWorldPos(v11, v12, v13)
      if v12 < v16 then
        smoothDensityMapHeightAtWorldPos(v15, v11, v16 - v15.collisionBaseOffset, v13, smoothAmount, v15.index, 0, v14, v14 + 1.2)
        if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
          DebugUtil.drawDebugGizmoAtWorldPos(v11, v12, v13, 0, 0, 1, 0, 1, 0, "", false)
          DebugUtil.drawDebugCircle(v11, v16 - v15.collisionBaseOffset, v13, v14, 10)
        end
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 106, target 14)
end
