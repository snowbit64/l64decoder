-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableVine = {}
function PlaceableVine.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableFence, v0)
end
function PlaceableVine.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateVineNode", PlaceableVine.updateVineNode)
  SpecializationUtil.registerFunction(placeableType, "updateVineVisuals", PlaceableVine.updateVineVisuals)
  SpecializationUtil.registerFunction(placeableType, "destroyVineArea", PlaceableVine.destroyVineArea)
  SpecializationUtil.registerFunction(placeableType, "getVineFruitTypeIndex", PlaceableVine.getVineFruitTypeIndex)
  SpecializationUtil.registerFunction(placeableType, "setShakingFactor", PlaceableVine.setShakingFactor)
  SpecializationUtil.registerFunction(placeableType, "harvestVine", PlaceableVine.harvestVine)
  SpecializationUtil.registerFunction(placeableType, "prepareVine", PlaceableVine.prepareVine)
  SpecializationUtil.registerFunction(placeableType, "getVineFruitType", PlaceableVine.getVineFruitType)
  SpecializationUtil.registerFunction(placeableType, "getHasSegmentTargetGrowthState", PlaceableVine.getHasSegmentTargetGrowthState)
  SpecializationUtil.registerFunction(placeableType, "getSegmentSideArea", PlaceableVine.getSegmentSideArea)
  SpecializationUtil.registerFunction(placeableType, "getSectionFactor", PlaceableVine.getSectionFactor)
  SpecializationUtil.registerFunction(placeableType, "getVineAreaByNode", PlaceableVine.getVineAreaByNode)
end
function PlaceableVine.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "doDeletePanel", PlaceableVine.doDeletePanel)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "generateSegmentPoles", PlaceableVine.generateSegmentPoles)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "deleteSegment", PlaceableVine.deleteSegment)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getCanBePlacedAt", PlaceableVine.getCanBePlacedAt)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getHasParallelSnapping", PlaceableVine.getHasParallelSnapping)
end
function PlaceableVine.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableVine)
  SpecializationUtil.registerEventListener(placeableType, "onCreateSegmentPanel", PlaceableVine)
end
function PlaceableVine:registerXMLPaths(v1)
  self:setXMLSpecializationType("Vine")
  self:register(XMLValueType.STRING, v1 .. ".vine#fruitType", "Vine fruit type")
  self:register(XMLValueType.FLOAT, v1 .. ".vine#width", "Vine width")
  self:register(XMLValueType.FLOAT, v1 .. ".vine#length", "Vine length")
  self:register(XMLValueType.FLOAT, v1 .. ".vine#thresholdFactor", "Section work threshold factor")
  self:register(XMLValueType.INT, v1 .. ".vine#numLODOffsets", "Vine num lod offsets")
  self:register(XMLValueType.INT, v1 .. ".vine#numSections", "Vine num sub sections")
  self:register(XMLValueType.INT, v1 .. ".vine.growthStates#previewNodeIndex", "Node index of preview node")
  self:register(XMLValueType.STRING, v1 .. ".vine.growthStates.growthState(?)#nodeIndex", "Growthstate node index. Relative to panel rootnode")
  self:register(XMLValueType.INT, v1 .. ".vine.growthStates.growthState(?).foliage(?)#state", "Growthstate")
  self:register(XMLValueType.INT, v1 .. ".vine.growthStates.growthState(?).foliage(?)#sectionState", "SectionState")
  self:register(XMLValueType.INT, v1 .. ".vine.resetStates.resetState(?)#state", "Reset state")
  self:register(XMLValueType.INT, v1 .. ".vine.resetStates.resetState(?)#targetState", "Reset target state")
  self:register(XMLValueType.FLOAT, v1 .. ".vine.resetStates.resetState(?)#threshold", "Threshold to apply reset")
  self:setXMLSpecializationType()
end
function PlaceableVine:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Vine")
  self:register(XMLValueType.INT, v1 .. "#startGrowthState", "Vineyard start growth state")
  self:setXMLSpecializationType()
end
function PlaceableVine:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.vine#fruitType")
  if v4 == nil then
    Logging.xmlWarning(self.xmlFile, "Missing fruit type name")
    return
  end
  local v5 = v5:getFruitTypeByName(v4)
  if v5 == nil then
    Logging.xmlWarning(v3, "Fruit type '%s' not defined", v4)
    return
  end
  v2.fruitType = v5
  local v6 = v3:getValue("placeable.vine#length", 1)
  v2.length = v6
  v6 = v3:getValue("placeable.vine#width", 1)
  v2.width = v6
  v6 = v3:getValue("placeable.vine#thresholdFactor", 0.5)
  v2.thresholdFactor = v6
  v6 = v3:getValue("placeable.vine#numLODOffsets", 0)
  v2.numLODOffsets = v6
  local v7 = v3:getValue("placeable.vine#numSections", 1)
  v6 = math.max(v7, 1)
  v2.numSections = v6
  v2.sectionLength = v2.length / v2.numSections
  v2.vineSegments = {}
  v2.nodes = {}
  v2.growthStates = {}
  v3:iterate("placeable.vine.growthStates.growthState", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#nodeIndex")
    if v2 == nil then
      Logging.xmlWarning(u0, "Missing growth state nodeIndex for '%s'", savegame)
      return
    end
    v4:iterate(savegame .. ".foliage", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#state")
      if v2 == nil then
        Logging.xmlWarning(u0, "Missing foliage state for '%s'", savegame)
        return
      end
      if v2 < 0 and u1.numStateChannels ^ 2 - 1 < v2 then
        Logging.xmlWarning(u0, "Invalid foliage state for '%s'", savegame)
        return
      end
      local v3 = v3:getValue(savegame .. "#sectionState")
      if v3 == nil then
        Logging.xmlWarning(u0, "Missing foliage sectionState for '%s'", savegame)
        return
      end
      table.insert(u2, {state = v2, sectionState = v3})
    end)
    if #{} == 0 then
      Logging.xmlWarning(u0, "Missing foliage states for growthstate '%s'", savegame)
      return
    end
    u2.growthStates[v2] = v3
  end)
  v6 = v3:getValue("placeable.vine.growthStates#previewNodeIndex", 0)
  v2.previewNodeIndex = v6
  v2.resetStates = {}
  v3:iterate("placeable.vine.resetStates.resetState", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#state")
    if v2 == nil then
      Logging.xmlWarning(u0, "Missing reset state for '%s'", savegame)
      return
    end
    local v3 = v3:getValue(savegame .. "#targetState")
    if v3 == nil then
      Logging.xmlWarning(u0, "Missing reset target state for '%s'", savegame)
      return
    end
    local v4 = v4:getValue(savegame .. "#threshold")
    if v4 == nil then
      Logging.xmlWarning(u0, "Missing reset state threshold for '%s'", savegame)
      return
    end
    {state = v2, targetState = v3, values = {}}.values[v2] = 0
    table.insert(u1.resetStates, {state = v2, targetState = v3, values = {}, threshold = v4})
  end)
  v2.startGrowthState = nil
  if savegame ~= nil then
    v6 = v6:getValue(savegame.key .. ".vine#startGrowthState")
    v2.startGrowthState = v6
  end
end
function PlaceableVine:deleteSegment(superFunc, segment)
  if self.spec_vine.vineSegments[segment] ~= nil then
    self.spec_vine.vineSegments[segment] = nil
  end
  superFunc(self, segment)
end
function PlaceableVine:generateSegmentPoles(superFunc, segment, sync)
  local previewSegment = self:getPreviewSegment()
  if segment ~= previewSegment then
  end
  if not true then
    if self.spec_vine.vineSegments[segment] ~= nil then
      for v11, v12 in ipairs(self.spec_vine.vineSegments[segment]) do
        v13:removeElement(self, v12.node, v6.width, v6.length)
        v6.nodes[v12.node] = nil
      end
    end
    v6.vineSegments[segment] = {}
  end
  superFunc(self, segment, sync)
end
function PlaceableVine:onCreateSegmentPanel(isPreview, segment, panel, poleIndex, dy, pole)
  local v8 = getAllowFoliageShadows()
  if not v8 then
    I3DUtil.interateRecursively(panel, function(self)
      local isPreview = getHasClassId(self, ClassIds.SHAPE)
      if isPreview then
        setShapeCastShadowmap(self, false)
      end
    end)
    if pole ~= nil then
      I3DUtil.interateRecursively(pole, function(self)
        local isPreview = getHasClassId(self, ClassIds.SHAPE)
        if isPreview then
          setShapeCastShadowmap(self, false)
        end
      end)
    end
  end
  if not isPreview then
    v8 = getChildAt(panel, 0)
    v7.nodes[v8] = {node = v8, poleIndex = poleIndex}
    table.insert(v7.vineSegments[segment], {node = v8, poleIndex = poleIndex})
    local v10, v11, v12 = getWorldTranslation(panel)
    local v13, v14, v15 = localDirectionToWorld(panel, 0, 0, 1)
    local v16, v17 = MathUtil.vector2Normalize(v13, v15)
    local v16, v17, v18 = MathUtil.crossProduct(v16, 0, v17, 0, 1, 0)
    local v19, v20 = MathUtil.vector2Normalize(v16, v18)
    for v23, v24 in pairs(v7.growthStates) do
      local v25 = I3DUtil.indexToObject(panel, v23)
      if v25 == nil then
        Logging.warning("Failed to get vine panel growth state node ('%s')", v23)
        return
      end
      v9.growthStates[v25] = {foliageStates = v24, value = 0, sectionStates = {}}
      setVisibility(v25, false)
      local v29 = getNumOfChildren(v25)
      -- TODO: structure LOP_FORNPREP (pc 127, target 205)
      v29 = getChildAt(v25, 0)
      local v30 = getNumOfChildren(v29)
      if 1 < v30 then
        local v33 = getNumOfChildren(v29)
        -- TODO: structure LOP_FORNPREP (pc 147, target 204)
        v33 = getChildAt(v29, 0)
        local v34, v35, v36 = getTranslation(v33)
        setTranslation(v33, v34, v35 + v36 / v7.length * -dy, v36)
        if 0 < v7.numLODOffsets then
          local v38 = getHasShaderParameter(v33, "uvOffset")
          if v38 then
            local v39 = math.random(0, v7.numLODOffsets - 1)
            setShaderParameter(v33, "uvOffset", v39 * 1 / v7.numLODOffsets, 0, 0, 0, false)
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 203, target 148)
      end
      -- TODO: structure LOP_FORNLOOP (pc 204, target 128)
    end
    v9.sections = {}
    v9.growthValues = {}
    -- TODO: structure LOP_FORNPREP (pc 223, target 338)
    v9.sections[1] = {v10 + v13 * v7.sectionLength * (1 - 1) + v16 * -v19, v12 + v15 * v7.sectionLength * (1 - 1) + v18 * -v19, v10 + v13 * v7.sectionLength * (1 - 1) + v16 * -v19 + v16 * v7.width, v12 + v15 * v7.sectionLength * (1 - 1) + v18 * -v19 + v18 * v7.width, v10 + v13 * v7.sectionLength * (1 - 1) + v16 * -v19 + v13 * v7.sectionLength, v12 + v15 * v7.sectionLength * (1 - 1) + v18 * -v19 + v15 * v7.sectionLength}
    v9.growthValues[1] = {totalArea = 0, values = {}}
    for v35, v36 in pairs(v9.growthStates) do
      for v40, v41 in ipairs(v36.foliageStates) do
        v9.growthValues[v25].values[v41.state] = 0
      end
    end
    v33 = FSDensityMapUtil.updateVineAreaValues(v7.fruitType.index, v26, v27, v28, v29, v30, v31, v9.growthValues[v25].values)
    v9.growthValues[v25].totalArea = v33
    for v35, v36 in pairs(v9.growthValues[v25].values) do
      if not (v21 < v36) then
        continue
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 337, target 224)
    if self.isLoadingFromSavegameXML then
      -- cmp-jump LOP_JUMPXEQKNIL R23 aux=0x0 -> L374
    end
    if v7.startGrowthState ~= nil then
    end
    -- TODO: structure LOP_FORNPREP (pc 355, target 374)
    FSDensityMapUtil.createVineArea(v7.fruitType.index, v9.sections[1][1], v9.sections[1][2], v9.sections[1][3], v9.sections[1][4], v9.sections[1][5], v9.sections[1][6], v20)
    -- TODO: structure LOP_FORNLOOP (pc 373, target 356)
    v23:addElement(self, v8, v7.width, v7.length)
    self:updateVineNode(v8, false)
    return
  end
  v8 = getChildAt(panel, 1)
  v12 = getNumOfChildren(v8)
  -- TODO: structure LOP_FORNPREP (pc 403, target 419)
  v13 = getChildAt(v8, 0)
  if 0 ~= v7.previewNodeIndex then
  end
  v12(v13, true)
  -- TODO: structure LOP_FORNLOOP (pc 418, target 404)
end
function PlaceableVine:doDeletePanel(superFunc, segment, segmentIndex, poleIndex)
  if segment ~= nil then
    -- if #v2.poles >= v4 then goto L8 end
  end
  return
  local previewSegment = self:getPreviewSegment()
  if segment ~= previewSegment then
  end
  if not true and self.spec_vine.vineSegments[segment] ~= nil then
    for v12, v13 in ipairs(self.spec_vine.vineSegments[segment]) do
      if not (v13.poleIndex == poleIndex) then
        continue
      end
      v7.nodes[v13.node] = nil
      table.remove(v8, v12)
      v14:removeElement(self, v13.node, v7.width, v7.length)
      self:destroyVineArea(v13)
      break
    end
  end
  superFunc(self, segment, segmentIndex, poleIndex)
end
function PlaceableVine:getCanBePlacedAt(superFunc, x, y, z, farmId)
  local v8 = self:getVineFruitTypeIndex()
  local v6 = v6:canFruitBePlanted(...)
  if not v6 then
    local v9 = v9:getText("warning_theSelectedFruitTypeCantBePlantedInThisPeriod")
    local v10 = v10:formatPeriod()
    v8 = string.format(...)
    return false
  end
  return superFunc(self, x, y, z)
end
function PlaceableVine.getHasParallelSnapping(v0, v1)
  return true
end
function PlaceableVine:destroyVineArea(data)
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 9, target 27)
    FSDensityMapUtil.destroyVineArea(self.spec_vine.fruitType.index, data.sections[1][1], data.sections[1][2], data.sections[1][3], data.sections[1][4], data.sections[1][5], data.sections[1][6])
    -- TODO: structure LOP_FORNLOOP (pc 26, target 10)
  end
end
function PlaceableVine:getVineFruitTypeIndex()
  return self.spec_vine.fruitType.index
end
function PlaceableVine:updateVineNode(node, isGrowing)
  if self.spec_vine.nodes[node] == nil then
    return
  end
  local v5 = entityExists(node)
  if not v5 then
    return
  end
  if isGrowing then
    local v5, v6, v7, v8, v9, v10 = self:getVineAreaByNode(node)
    for v14, v15 in ipairs(v3.resetStates) do
      local v16 = FSDensityMapUtil.updateVineAreaValues(v3.fruitType.index, v5, v6, v7, v8, v9, v10, v15.values)
      if 0 < v16 then
      end
      if not self.isServer then
        continue
      end
      if not (v17 < 1) then
        continue
      end
      if not (v15.threshold < v17) then
        continue
      end
      FSDensityMapUtil.resetVineArea(v3.fruitType.index, v5, v6, v7, v8, v9, v10, v15.targetState)
      break
    end
  end
  v4.totalArea = 0
  if v4.growthValues == nil then
    v4.growthValues = {}
  end
  -- TODO: structure LOP_FORNPREP (pc 93, target 162)
  if v4.growthValues[1] == nil then
    v4.growthValues[1] = {totalArea = 0, values = {}}
    for v12, v13 in pairs(v4.growthStates) do
      for v17, v18 in ipairs(v13.foliageStates) do
        v4.growthValues[v7].values[v18.state] = 0
      end
    end
  end
  v10 = FSDensityMapUtil.updateVineAreaValues(v3.fruitType.index, v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v4.growthValues[v7].values)
  v4.growthValues[v7].totalArea = v10
  -- TODO: structure LOP_FORNLOOP (pc 161, target 94)
  self:updateVineVisuals(v4)
end
function PlaceableVine:updateVineVisuals(data)
  for v8, v9 in pairs(data.growthStates) do
    setVisibility(v8, false)
    v9.value = 0
    -- TODO: structure LOP_FORNPREP (pc 22, target 58)
    v9.sectionStates[1] = 1
    for v17, v18 in ipairs(v9.foliageStates) do
      v9.value = v9.value + data.growthValues[v12].values[v18.state]
      if not (v13 <= data.growthValues[v12].values[v18.state]) then
        continue
      end
      v9.sectionStates[v12] = v18.sectionState
    end
    -- TODO: structure LOP_FORNLOOP (pc 57, target 23)
    if not (v3 < v9.value) then
      continue
    end
    if v4 ~= nil then
      setVisibility(v4, false)
    end
    setVisibility(v8, true)
    I3DUtil.setShaderParameterRec(v8, "hideSectionStates", v9.sectionStates[1], v9.sectionStates[2], v9.sectionStates[3], v2.sectionLength, false, nil)
  end
end
function PlaceableVine:harvestVine(node, startX, startY, startZ, currentX, currentY, currentZ, callback, target)
  if not self.isServer then
    return 0
  end
  if self.spec_vine.nodes[node] == nil then
    return 0
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 67)
  local v16 = self:getSectionFactor(node, 1, startX, startY, startZ, currentX, currentY, currentZ)
  if v10.thresholdFactor < v16 then
    local v18, v19, v20, v21, v22 = FSDensityMapUtil.updateVineCutArea(v10.fruitType.index, v11.sections[1][1], v11.sections[1][2], v11.sections[1][3], v11.sections[1][4], v11.sections[1][5], v11.sections[1][6])
    if 0 < v18 then
      callback(target, self, v18, v19, v20, v21, v22, v10.sectionLength)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 66, target 20)
  if v12 then
    self:updateVineNode(node, false)
  end
end
function PlaceableVine:setShakingFactor(node, worldX, worldY, worldZ, intensity)
  if self.spec_vine.nodes[node] == nil then
    return
  end
  for v11, v12 in pairs(v7.growthStates) do
    I3DUtil.setShaderParameterRec(v11, "harvestPosition", worldX, worldY, worldZ, intensity)
  end
end
function PlaceableVine:prepareVine(node, startX, startY, startZ, currentX, currentY, currentZ)
  if not self.isServer then
    return 0
  end
  if self.spec_vine.nodes[node] == nil then
    return 0
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 53)
  local v14 = self:getSectionFactor(node, 1, startX, startY, startZ, currentX, currentY, currentZ)
  if v8.thresholdFactor < v14 then
    local v16, v17 = FSDensityMapUtil.updateVinePrepareArea(v8.fruitType.index, v9.sections[1][1], v9.sections[1][2], v9.sections[1][3], v9.sections[1][4], v9.sections[1][5], v9.sections[1][6])
  end
  -- TODO: structure LOP_FORNLOOP (pc 52, target 20)
  if 0 < v10 then
    self:updateVineNode(node, false)
  end
  return v10
end
function PlaceableVine:getSectionFactor(node, i, startX, startY, startZ, currentX, currentY, currentZ)
  local v13, v14, v15 = worldToLocal(node, startX, startY, startZ)
  local v16, v17, v18 = worldToLocal(node, currentX, currentY, currentZ)
  if v18 < v15 then
  end
  if v15 < v12 and v11 < v18 then
    local v19 = math.max(v15, v11)
    local v20 = math.min(v18, v12)
    local v21 = math.abs(v19 - v20)
  end
  return v10
end
function PlaceableVine:getVineAreaByNode(node)
  local v3, v4, v5 = getWorldTranslation(node)
  local v6, v7, v8 = localDirectionToWorld(node, 0, 0, 1)
  local v9, v10, v11 = MathUtil.crossProduct(v6, 0, v8, 0, 1, 0)
  return v3 + v9 * -(self.spec_vine.width * 0.5), v5 + v11 * -(self.spec_vine.width * 0.5), v3 + v9 * -(self.spec_vine.width * 0.5) + v9 * self.spec_vine.width, v5 + v11 * -(self.spec_vine.width * 0.5) + v11 * self.spec_vine.width, v3 + v9 * -(self.spec_vine.width * 0.5) + v6 * self.spec_vine.length, v5 + v11 * -(self.spec_vine.width * 0.5) + v8 * self.spec_vine.length
end
function PlaceableVine:getVineFruitType()
  return self.spec_vine.fruitType.index
end
function PlaceableVine:getHasSegmentTargetGrowthState(v1, v2, v3, v4)
  if v2 ~= self.spec_vine.fruitType.index then
    return false
  end
  local v8 = v8:getFruitTypeByIndex(self.spec_vine.fruitType.index)
  if v4 then
  elseif v3 then
  else
    return
  end
  if v5.vineSegments[v1] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 46, target 70)
    for v16 = 1, #v5.vineSegments[v1][1].growthValues do
      for v19 = v6, v7 do
        if 0 < v13[v16].values[v19] then
          return true
        end
        -- TODO: structure LOP_FORNLOOP (pc 67, target 58)
      end
    end
  end
  return false
end
function PlaceableVine:getSegmentSideArea(v1, v2)
  local v3 = self:getSnapDistance()
  local v4, v5 = MathUtil.vector2Normalize(v1.x2 - v1.x1, v1.z2 - v1.z1)
  return v1.x1 + v5 * (v2 or 1) * v3 * 0.5, v1.z1 - v4 * (v2 or 1) * v3 * 0.5, v1.x1 + v5 * (v2 or 1) * v3 * 0.4, v1.z1 - v4 * (v2 or 1) * v3 * 0.4, v1.x2 + v5 * (v2 or 1) * v3 * 0.5, v1.z2 - v4 * (v2 or 1) * v3 * 0.5
end
