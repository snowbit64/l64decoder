-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DensityMapHeightManager = {GENERATED_TIP_COLLISION_FILENAME = "infoLayer_tipCollisionGenerated.grle", GENERATED_PLACEMENT_COLLISION_FILENAME = "infoLayer_placementCollisionGenerated.grle", DEBUG_ENABLED = false}
local DensityMapHeightManager_mt = Class(DensityMapHeightManager, AbstractManager)
function DensityMapHeightManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.modDensityHeightMapTypeFilenames = {}
  return v1
end
function DensityMapHeightManager:initDataStructures()
  self.numHeightTypes = 0
  self.heightTypes = {}
  self.fillTypeNameToHeightType = {}
  self.fillTypeIndexToHeightType = {}
  self.heightTypeIndexToFillTypeIndex = {}
  self.fixedFillTypesAreas = {}
  self.convertingFillTypesAreas = {}
  self.tipTypeMappings = {}
  if self.terrainDetailHeightUpdater ~= nil then
    delete(self.terrainDetailHeightUpdater)
    self.terrainDetailHeightUpdater = nil
  end
  if self.tipCollisionMap ~= nil then
    if self.tipCollisionMapCreated then
      delete(self.tipCollisionMap)
      self.tipCollisionMapCreated = false
    end
    self.tipCollisionMap = nil
  end
  if self.placementCollisionMap ~= nil then
    if self.placementCollisionMapCreated then
      delete(self.placementCollisionMap)
      self.placementCollisionMapCreated = false
    end
    self.placementCollisionMap = nil
  end
  self.tipCollisionMask = CollisionFlag.GROUND_TIP_BLOCKING
  self.placementCollisionMask = 1048543
end
function DensityMapHeightManager:loadDefaultTypes(missionInfo, baseDirectory)
  self:initDataStructures()
  local xmlFile = loadXMLFile("heightTypes", "data/maps/maps_densityMapHeightTypes.xml")
  self:loadDensityMapHeightTypes(xmlFile, missionInfo, baseDirectory, true)
  delete(xmlFile)
end
function DensityMapHeightManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  addConsoleCommand("gsTipAnywhereAdd", "Tips a fillType", "consoleCommandTipAnywhereAdd", self)
  addConsoleCommand("gsTipAnywhereClear", "Clears tip area", "consoleCommandTipAnywhereClear", self)
  addConsoleCommand("gsDensityMapToggleDebug", "Toggles debug mode", "consoleCommandToggleDebug", self)
  self:loadDefaultTypes(missionInfo, baseDirectory)
  local success = XMLUtil.loadDataFromMapXML(xmlFile, "densityMapHeightTypes", baseDirectory, self, self.loadDensityMapHeightTypes, missionInfo, baseDirectory)
  -- TODO: structure LOP_FORNPREP (pc 51, target 76)
  local v9 = loadXMLFile("heightTypes", self.modDensityHeightMapTypeFilenames[#self.modDensityHeightMapTypeFilenames])
  self:loadDensityMapHeightTypes(v9, missionInfo, baseDirectory, false)
  delete(v9)
  self.modDensityHeightMapTypeFilenames[#self.modDensityHeightMapTypeFilenames] = nil
  -- TODO: structure LOP_FORNLOOP (pc 75, target 52)
  return success
end
function DensityMapHeightManager.unloadMapData(v0)
  local v2 = v2:superClass()
  v2.unloadMapData(v0)
  removeConsoleCommand("gsTipAnywhereAdd")
  removeConsoleCommand("gsTipAnywhereClear")
  removeConsoleCommand("gsDensityMapToggleDebug")
end
function DensityMapHeightManager:loadDensityMapHeightTypes(xmlFile, missionInfo, baseDirectory, isBaseType)
  local v5 = getXMLInt(xmlFile, "map.densityMapHeightTypes#firstChannel")
  if not v5 and not self.heightTypeFirstChannel then
  end
  self.heightTypeFirstChannel = v5
  v5 = getXMLInt(xmlFile, "map.densityMapHeightTypes#numChannels")
  if not v5 and not self.heightTypeNumChannels then
  end
  self.heightTypeNumChannels = v5
  while true do
    v6 = string.format("map.densityMapHeightTypes.densityMapHeightType(%d)", v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#fillTypeName")
    v8 = v8:getFillTypeIndexByName(v7)
    if v8 == nil then
      Logging.xmlError(xmlFile, "'%s' has invalid fill type '%s'!", v6, v7)
      return
    end
    if not self.fillTypeNameToHeightType[v7] then
    end
    v10 = getXMLFloat(xmlFile, v6 .. "#maxSurfaceAngle")
    if v10 ~= nil then
      v12 = math.rad(v10)
    end
    v12 = getXMLFloat(xmlFile, v6 .. "#fillToGroundScale")
    if not v12 and not v9.fillToGroundScale then
    end
    v15 = getXMLBool(xmlFile, v6 .. "#allowsSmoothing")
    v14 = Utils.getNoNil(v15, v9.allowsSmoothing)
    v13 = Utils.getNoNil(v14, false)
    v14 = getXMLFloat(xmlFile, v6 .. ".collision#scale")
    if not v14 and not v9.collisionScale then
    end
    v15 = getXMLFloat(xmlFile, v6 .. ".collision#baseOffset")
    if not v15 and not v9.collisionBaseOffset then
    end
    v16 = getXMLFloat(xmlFile, v6 .. ".collision#minOffset")
    if not v16 and not v9.minCollisionOffset then
    end
    v17 = getXMLFloat(xmlFile, v6 .. ".collision#maxOffset")
    if not v17 and not v9.maxCollisionOffset then
    end
    self:addDensityMapHeightType(v7, v11, v14, v15, v16, v17, v12, v13, isBaseType)
  end
  self:sortHeightTypes()
  return true
end
function DensityMapHeightManager:addModDensityMapHeightTypes(xmlFilename)
  table.insert(self.modDensityHeightMapTypeFilenames, xmlFilename)
end
function DensityMapHeightManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    return false
  end
  local xmlFile = XMLFile.load("densitymapHeightXML", xmlFilename)
  if xmlFile == nil then
    return false
  end
  self.tipTypeMappings = {}
  xmlFile:iterate("tipTypeMappings.tipTypeMapping", function(self, xmlFilename)
    local xmlFile = xmlFile:getString(xmlFilename .. "#fillType")
    local v3 = v3:getInt(xmlFilename .. "#index")
    if xmlFile ~= nil and v3 ~= nil then
      local v5 = xmlFile:lower()
      u1.tipTypeMappings[v5] = v3
    end
  end)
  xmlFile:delete()
  return true
end
function DensityMapHeightManager:saveToXMLFile(xmlFilename)
  local xmlFile = XMLFile.create("densityMapHeightXML", xmlFilename, "tipTypeMappings")
  if xmlFile ~= nil then
    for v6, v7 in ipairs(self.heightTypes) do
      local v8 = string.format("tipTypeMappings.tipTypeMapping(%d)", v6 - 1)
      xmlFile:setString(v8 .. "#fillType", v7.fillTypeName)
      xmlFile:setInt(v8 .. "#index", v7.index)
    end
    xmlFile:save()
    xmlFile:delete()
    return true
  end
  return false
end
function DensityMapHeightManager:sortHeightTypes()
  table.sort(self.heightTypes, u0)
  -- TODO: structure LOP_FORNPREP (pc 11, target 25)
  self.heightTypes[1].index = 1
  self.heightTypeIndexToFillTypeIndex[self.heightTypes[1].index] = self.heightTypes[1].fillTypeIndex
  -- TODO: structure LOP_FORNLOOP (pc 24, target 12)
end
function DensityMapHeightManager:addDensityMapHeightType(fillTypeName, maxSurfaceAngle, collisionScale, collisionBaseOffset, minCollisionOffset, maxCollisionOffset, fillToGroundScale, allowsSmoothing, isBaseType)
  if isBaseType and self.fillTypeNameToHeightType[fillTypeName] ~= nil then
    Logging.error("density height map for '%s' already exists!", fillTypeName)
    return nil
  end
  if self.fillTypeNameToHeightType[fillTypeName] == nil then
    if 2 ^ g_densityMapHeightManager.heightTypeNumChannels - 1 <= self.numHeightTypes then
      Logging.error("addDensityMapHeightType: maximum number of height types already registered.")
      return nil
    end
    self.numHeightTypes = self.numHeightTypes + 1
    local v11 = v11:getFillTypeIndexByName(fillTypeName)
    table.insert(self.heightTypes, {index = self.numHeightTypes, fillTypeName = fillTypeName, fillTypeIndex = v11})
    self.fillTypeNameToHeightType[fillTypeName] = {index = self.numHeightTypes, fillTypeName = fillTypeName, fillTypeIndex = v11}
    self.fillTypeIndexToHeightType[v11] = {index = self.numHeightTypes, fillTypeName = fillTypeName, fillTypeIndex = v11}
    self.heightTypeIndexToFillTypeIndex[{index = self.numHeightTypes, fillTypeName = fillTypeName, fillTypeIndex = v11}.index] = v11
  end
  v10.maxSurfaceAngle = maxSurfaceAngle
  v10.collisionScale = collisionScale
  v10.collisionBaseOffset = collisionBaseOffset
  v10.minCollisionOffset = minCollisionOffset
  v10.maxCollisionOffset = maxCollisionOffset
  v10.fillToGroundScale = fillToGroundScale
  v10.allowsSmoothing = allowsSmoothing
  return v10
end
function DensityMapHeightManager:getDensityMapHeightTypeByIndex(index)
  if index ~= nil then
    return self.heightTypes[index]
  end
  return nil
end
function DensityMapHeightManager:getFillTypeNameByDensityHeightMapIndex(index)
  if index ~= nil and self.heightTypes[index] ~= nil then
    return self.heightTypes[index].fillTypeName
  end
  return nil
end
function DensityMapHeightManager:getFillTypeIndexByDensityHeightMapIndex(index)
  if index ~= nil and self.heightTypes[index] ~= nil then
    return self.heightTypes[index].fillTypeIndex
  end
  return nil
end
function DensityMapHeightManager:getDensityMapHeightTypeByFillTypeName(fillTypeName)
  if fillTypeName ~= nil then
    return self.fillTypeNameToHeightType[fillTypeName]
  end
  return nil
end
function DensityMapHeightManager:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if fillTypeIndex ~= nil then
    return self.fillTypeIndexToHeightType[fillTypeIndex]
  end
  return nil
end
function DensityMapHeightManager:getDensityMapHeightTypeIndexByFillTypeName(fillTypeName)
  if fillTypeName ~= nil and self.fillTypeNameToHeightType[fillTypeName] ~= nil then
    return self.fillTypeNameToHeightType[fillTypeName].index
  end
  return nil
end
function DensityMapHeightManager:getDensityMapHeightTypeIndexByFillTypeIndex(fillTypeIndex)
  if fillTypeIndex ~= nil and self.fillTypeIndexToHeightType[fillTypeIndex] ~= nil then
    return self.fillTypeIndexToHeightType[fillTypeIndex].index
  end
  return nil
end
function DensityMapHeightManager:getDensityMapHeightTypes()
  return self.heightTypes
end
function DensityMapHeightManager:getFillTypeToDensityMapHeightTypes()
  return self.fillTypeIndexToHeightType
end
function DensityMapHeightManager:setFixedFillTypesArea(area, fillTypes)
  self.fixedFillTypesAreas[area] = {fillTypes = fillTypes}
end
function DensityMapHeightManager:removeFixedFillTypesArea(area)
  self.fixedFillTypesAreas[area] = nil
end
function DensityMapHeightManager:getFixedFillTypesAreas()
  return self.fixedFillTypesAreas
end
function DensityMapHeightManager:setConvertingFillTypeAreas(area, fillTypes, fillTypeTarget)
  self.convertingFillTypesAreas[area] = {fillTypes = fillTypes, fillTypeTarget = fillTypeTarget}
end
function DensityMapHeightManager:removeConvertingFillTypeAreas(area)
  self.convertingFillTypesAreas[area] = nil
end
function DensityMapHeightManager:getConvertingFillTypesAreas()
  return self.convertingFillTypesAreas
end
function DensityMapHeightManager:checkTypeMappings()
  if self.tipTypeMappings ~= nil then
    local v2 = next(self.tipTypeMappings)
    if v2 ~= nil then
      for v6, v7 in ipairs(self.heightTypes) do
        local v8 = v8:getFillTypeNameByIndex(v7.fillTypeIndex)
        if v1[v8] ~= nil then
          -- if v1[v8] == v7.index then goto L33 end
        end
        return false
      end
      for v7, v8 in pairs(v1) do
      end
      if v3 ~= v2 then
        return false
      end
    end
  end
  return true
end
function DensityMapHeightManager:initialize(isServer, tipCollisionMap, placementCollisionMap)
  self.tipToGroundIsAllowed = true
  local v5 = getDensityMapSize(g_currentMission.terrainDetailHeightId)
  local deform = TerrainDeformation.new(g_currentMission.terrainRootNode)
  local v7 = deform:getBlockedAreaMapSize()
  deform:cancel()
  deform:delete()
  self.worldToDensityMap = v5 / g_currentMission.terrainSize
  self.densityToWorldMap = g_currentMission.terrainSize / v5
  self.worldToPlacementMap = v7 / g_currentMission.terrainSize
  self.placementToWorldMap = g_currentMission.terrainSize / v7
  self.pendingCollisionRecalculateAreas = {}
  self.collisionRecalculateAreaSize = 16
  self.collisionRecalculateAreaWorldSize = self.collisionRecalculateAreaSize * self.densityToWorldMap
  local v8 = math.floor((v5 + self.collisionRecalculateAreaSize - 1) / self.collisionRecalculateAreaSize)
  self.numCollisionRecalculateAreasPerSide = v8
  v8 = getDensityMapMaxHeight(g_currentMission.terrainDetailHeightId)
  self.volumePerPixel = v8 * g_currentMission.terrainSize / v5 * g_currentMission.terrainSize / v5
  self.literPerPixel = 250 * v8 * self.volumePerPixel
  self.fillToGroundScale = self.worldToDensityMap ^ 2 / 250 * v8
  local v13 = getDensityMapHeightNumChannels(g_currentMission.terrainDetailHeightId)
  self.minValidLiterValue = self.literPerPixel / (2 ^ v13 - 1)
  self.minValidVolumeValue = self.volumePerPixel / (2 ^ v13 - 1)
  self.heightToDensityValue = (2 ^ v13 - 1) / v8
  local v11 = getDensityMapHeightFirstChannel(g_currentMission.terrainDetailHeightId)
  local v12 = getDensityMapHeightNumChannels(g_currentMission.terrainDetailHeightId)
  if v11 < self.heightTypeFirstChannel + self.heightTypeNumChannels and self.heightTypeFirstChannel < v11 + v12 then
    Logging.warning("Density map height type channels [%d-%d] are overlapping with the density map height channels [%d-%d]. This will lead to unexpected results.", self.heightTypeFirstChannel, self.heightTypeFirstChannel + self.heightTypeNumChannels - 1, v11, v11 + v12 - 1)
  end
  local v16 = createDensityMapHeightUpdater("TerrainDetailHeightUpdater", v4, v13, v14, CollisionMask.TERRAIN_DETAIL_HEIGHT)
  self.terrainDetailHeightUpdater = v16
  local heightTypes = self:getDensityMapHeightTypes()
  if heightTypes ~= nil then
    for v21, v22 in ipairs(heightTypes) do
      if self.tipTypeMappings ~= nil then
        local v24 = next(self.tipTypeMappings)
        if v24 ~= nil then
          v24 = v24:getFillTypeNameByIndex(v22.fillTypeIndex)
          local v25 = v24:lower()
          local v26 = Utils.getNoNil(self.tipTypeMappings[v25], -1)
          if 0 <= v26 then
          end
        end
      end
      setDensityMapHeightTypeProperties(self.terrainDetailHeightUpdater, v22.index, v23, v22.maxSurfaceAngle, v22.collisionScale, v22.collisionBaseOffset, v22.minCollisionOffset, v22.maxCollisionOffset)
    end
  end
  v18:constructFillTypeDistanceTextureArray(g_currentMission.terrainDetailHeightId, v13, v14, heightTypes)
  if self.tipTypeMappings ~= nil then
    for v23, v24 in pairs(self.tipTypeMappings) do
    end
    if v19 ~= v16 then
    end
  end
  initDensityMapHeightTypeProperties(self.terrainDetailHeightUpdater, v18)
  if isServer then
    self.tipCollisionMap = tipCollisionMap
    self.tipCollisionMapCreated = false
    if tipCollisionMap == 0 then
      v20 = createBitVectorMap("CollisionMap")
      self.tipCollisionMap = v20
      self.tipCollisionMapCreated = true
    end
    if not GS_IS_MOBILE_VERSION then
      v21 = v19:getIsTipCollisionValid(g_currentMission)
      if v21 then
        v22 = loadBitVectorMapFromFile(self.tipCollisionMap, v19.savegameDirectory .. "/" .. DensityMapHeightManager.GENERATED_TIP_COLLISION_FILENAME, 2)
        if v22 then
          v22 = setDensityMapHeightCollisionMap(self.terrainDetailHeightUpdater, self.tipCollisionMap, false)
          -- if not v22 then goto L312 end
        else
          Logging.warning("Failed to load savegame tip collision map '" .. v19.savegameDirectory .. "/" .. DensityMapHeightManager.GENERATED_TIP_COLLISION_FILENAME .. "'. Loading default tip collision map and recreating from placeables.")
        end
      end
    end
    if not v20 then
      if v19.isValid then
      end
      if not self.tipCollisionMapCreated then
        v22 = setDensityMapHeightCollisionMap(self.terrainDetailHeightUpdater, self.tipCollisionMap, v21)
        -- if v22 then goto L358 end
      end
      Logging.warning("No tip collision map defined. Creating empty tip placement collision map.")
      loadBitVectorMapNew(self.tipCollisionMap, v5, v5, 2, false)
      setDensityMapHeightCollisionMap(self.terrainDetailHeightUpdater, self.tipCollisionMap, v21)
    end
  end
  if not GS_IS_MOBILE_VERSION then
    self.placementCollisionMap = placementCollisionMap
    self.placementCollisionMapCreated = false
    if placementCollisionMap == 0 then
      v20 = createBitVectorMap("PlacementCollisionMap")
      self.placementCollisionMap = v20
      self.placementCollisionMapCreated = true
    end
    v21 = v19:getIsPlacementCollisionValid(g_currentMission)
    if v21 then
      v22 = loadBitVectorMapFromFile(self.placementCollisionMap, v19.savegameDirectory .. "/" .. DensityMapHeightManager.GENERATED_PLACEMENT_COLLISION_FILENAME, 1)
      if v22 then
      else
        Logging.warning("Failed to load savegame placement collision map '" .. v19.savegameDirectory .. "/" .. DensityMapHeightManager.GENERATED_PLACEMENT_COLLISION_FILENAME .. "'. Loading default placement collision map and recreating from placeables.")
      end
    end
    if not v20 and self.placementCollisionMapCreated then
      Logging.warning("No placement collision map defined. Creating empty placement collision map.")
      loadBitVectorMapNew(self.placementCollisionMap, v7, v7, 1, false)
    end
  end
  v20:constructDensityMapHeightTextureArrays(heightTypes)
  v20 = getNumOfChildren(g_currentMission.terrainDetailHeightTGId)
  -- TODO: structure LOP_FORNPREP (pc 440, target 461)
  v24 = getChildAt(g_currentMission.terrainDetailHeightTGId, 0)
  v25 = getHasClassId(v24, ClassIds.SHAPE)
  if v25 then
    v25:assignDensityMapHeightTextureArrays(v24)
  end
  -- TODO: structure LOP_FORNLOOP (pc 460, target 441)
end
function DensityMapHeightManager:getIsValid()
  if self.terrainDetailHeightUpdater == nil then
  end
  return true
end
function DensityMapHeightManager:getTerrainDetailHeightUpdater()
  return self.terrainDetailHeightUpdater
end
function DensityMapHeightManager:getMinValidLiterValue(fillTypeIndex)
  local heightType = self:getDensityMapHeightTypeByFillTypeIndex(fillTypeIndex)
  if heightType == nil then
    return 0
  end
  return self.minValidLiterValue / heightType.fillToGroundScale
end
function DensityMapHeightManager:update(dt)
  local v2 = self:getIsValid()
  if not v2 then
    return
  end
  for v7, v8 in pairs(self.pendingCollisionRecalculateAreas) do
    if not (v8 <= g_updateLoopIndex) then
      continue
    end
    self.pendingCollisionRecalculateAreas[v7] = nil
    local v9 = math.floor(v7 / self.numCollisionRecalculateAreasPerSide)
    self:updateCollisionMap((v7 - v9 * self.numCollisionRecalculateAreasPerSide) * self.collisionRecalculateAreaWorldSize - v3, v9 * self.collisionRecalculateAreaWorldSize - v3, (v7 - v9 * self.numCollisionRecalculateAreasPerSide) * self.collisionRecalculateAreaWorldSize - v3 + self.collisionRecalculateAreaWorldSize, v9 * self.collisionRecalculateAreaWorldSize - v3 + self.collisionRecalculateAreaWorldSize)
    if not (6 >= v2 + 1) then
      break
    end
  end
end
function DensityMapHeightManager:visualizeCollisionMap()
  if self.tipCollisionMap ~= nil then
    local v1 = getDensityMapSize(g_currentMission.terrainDetailHeightId)
    local v3 = getCamera(0)
    local v2, v3, v4 = getWorldTranslation(...)
    if g_currentMission.controlledVehicle ~= nil then
      if g_currentMission.controlledVehicle.selectedImplement ~= nil then
      end
      local v6, v7, v8 = getWorldTranslation(v5.components[1].node)
    end
    v6 = math.floor((v2 + g_currentMission.terrainSize * 0.5) * self.worldToDensityMap)
    v7 = math.floor((v4 + g_currentMission.terrainSize * 0.5) * self.worldToDensityMap)
    v8 = math.max(v6 - 25, 0)
    local v9 = math.max(v7 - 25, 0)
    local v10 = math.min(v6 + 25, v1 - 1)
    local v11 = math.min(v7 + 25, v1 - 1)
    local v16 = getCorrectTextSize(0.016)
    -- TODO: structure LOP_FORNPREP (pc 117, target 173)
    for v22 = v8, v10 do
      local v23 = getBitVectorMapPoint(self.tipCollisionMap, v22, v19, 0, 2)
      if 1 < v23 then
      elseif 0 < v23 then
      end
      local v27 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v22 * self.densityToWorldMap - v5, 0, v19 * self.densityToWorldMap - v5)
      local v31 = tostring(v23)
      Utils.renderTextAtWorldPosition(v22 * self.densityToWorldMap - v5, v27 + 0.05, v19 * self.densityToWorldMap - v5, v31, v16, 0, v15)
      -- TODO: structure LOP_FORNLOOP (pc 171, target 122)
    end
  end
end
function DensityMapHeightManager:visualizePlacementCollisionMap()
  if self.placementCollisionMap ~= nil then
    local densitySize = getDensityMapSize(g_currentMission.terrainDetailHeightId)
    local v3 = getCamera(0)
    local v2, v3, v4 = getWorldTranslation(...)
    if g_currentMission.controlledVehicle ~= nil then
      if g_currentMission.controlledVehicle.selectedImplement ~= nil then
      end
      local v6, v7, v8 = getWorldTranslation(v5.components[1].node)
    end
    v6 = math.floor((v2 + g_currentMission.terrainSize * 0.5) * self.worldToPlacementMap)
    v7 = math.floor((v4 + g_currentMission.terrainSize * 0.5) * self.worldToPlacementMap)
    v8 = math.max(v6 - 20, 0)
    local v9 = math.max(v7 - 20, 0)
    local v10 = math.min(v6 + 20, densitySize - 1)
    local v11 = math.min(v7 + 20, densitySize - 1)
    -- TODO: structure LOP_FORNPREP (pc 91, target 148)
    for v17 = v8, v10 do
      local v18 = getBitVectorMapPoint(self.placementCollisionMap, v17, v14, 0, 1)
      if 0 < v18 then
      end
      local v24 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v17 * self.placementToWorldMap - v5, 0, v14 * self.placementToWorldMap - v5)
      drawDebugLine(v17 * self.placementToWorldMap - v5, v24, v14 * self.placementToWorldMap - v5, v19, v20, v21, v17 * self.placementToWorldMap - v5, v24 + 1, v14 * self.placementToWorldMap - v5, v19, v20, v21, false)
      -- TODO: structure LOP_FORNLOOP (pc 146, target 96)
    end
  end
end
function DensityMapHeightManager:saveCollisionMap(directory)
  if self.tipCollisionMap ~= nil then
    saveBitVectorMapToFile(self.tipCollisionMap, directory .. "/" .. DensityMapHeightManager.GENERATED_TIP_COLLISION_FILENAME)
  end
end
function DensityMapHeightManager:prepareSaveCollisionMap(directory)
  if self.tipCollisionMap ~= nil then
    prepareSaveBitVectorMapToFile(self.tipCollisionMap, directory .. "/" .. DensityMapHeightManager.GENERATED_TIP_COLLISION_FILENAME)
  end
end
function DensityMapHeightManager:savePreparedCollisionMap(callback, callbackObject)
  if self.tipCollisionMap ~= nil then
    savePreparedBitVectorMapToFile(self.tipCollisionMap, callback, callbackObject)
  end
end
function DensityMapHeightManager:savePlacementCollisionMap(directory)
  if self.placementCollisionMap ~= nil then
    saveBitVectorMapToFile(self.placementCollisionMap, directory .. "/" .. DensityMapHeightManager.GENERATED_PLACEMENT_COLLISION_FILENAME)
  end
end
function DensityMapHeightManager:prepareSavePlacementCollisionMap(directory)
  if self.placementCollisionMap ~= nil then
    prepareSaveBitVectorMapToFile(self.placementCollisionMap, directory .. "/" .. DensityMapHeightManager.GENERATED_PLACEMENT_COLLISION_FILENAME)
  end
end
function DensityMapHeightManager:savePreparedPlacementCollisionMap(callback, callbackObject)
  if self.placementCollisionMap ~= nil then
    savePreparedBitVectorMapToFile(self.placementCollisionMap, callback, callbackObject)
  end
end
function DensityMapHeightManager:setCollisionMapAreaDirty(minX, minZ, maxX, maxZ, delayed)
  local v7 = math.floor((minX + g_currentMission.terrainSize * 0.5) / self.collisionRecalculateAreaWorldSize)
  local v8 = math.floor((minZ + g_currentMission.terrainSize * 0.5) / self.collisionRecalculateAreaWorldSize)
  local v9 = math.ceil((maxX + g_currentMission.terrainSize * 0.5) / self.collisionRecalculateAreaWorldSize)
  local v10 = math.ceil((maxZ + g_currentMission.terrainSize * 0.5) / self.collisionRecalculateAreaWorldSize)
  -- TODO: structure LOP_FORNPREP (pc 38, target 58)
  for v16 = v7, v9 do
    if delayed then
    end
    self.pendingCollisionRecalculateAreas[v17] = g_updateLoopIndex + v18
    -- TODO: structure LOP_FORNLOOP (pc 56, target 43)
  end
end
function DensityMapHeightManager:updateCollisionMap(minX, minZ, maxX, maxZ)
  if self.tipCollisionMap == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L75
  end
  local v6 = MathUtil.clamp(minX, -(g_currentMission.terrainSize * 0.5), g_currentMission.terrainSize * 0.5)
  v6 = MathUtil.clamp(minZ, -(g_currentMission.terrainSize * 0.5), g_currentMission.terrainSize * 0.5)
  v6 = MathUtil.clamp(maxX, -(g_currentMission.terrainSize * 0.5), g_currentMission.terrainSize * 0.5)
  v6 = MathUtil.clamp(maxZ, -(g_currentMission.terrainSize * 0.5), g_currentMission.terrainSize * 0.5)
  if self.tipCollisionMap ~= nil then
    updateTerrainCollisionMap(self.tipCollisionMap, g_currentMission.terrainRootNode, "tipCollision", 0, self.tipCollisionMask, v6, v6, v6, v6)
  end
  if self.placementCollisionMap ~= nil then
    updatePlacementCollisionMap(self.placementCollisionMap, g_currentMission.terrainRootNode, self.placementCollisionMask, minX, minZ, maxX, maxZ)
  end
end
function DensityMapHeightManager:consoleCommandTipAnywhereAdd(fillTypeName, amount, length, rows, spacing)
  if fillTypeName == nil then
    return "Error: No filltype given. " .. "gsTipAnywhereAdd fillTypeName amount length rows spacing"
  end
  local v6 = v6:getFillTypeIndexByName(fillTypeName)
  if v6 == nil then
    local v7 = v7:getFillTypeNamesByIndices(self.fillTypeIndexToHeightType)
    local v11 = table.concat(v7, ", ")
    return string.format(...)
  end
  if self.fillTypeIndexToHeightType[v6] == nil then
    v7 = v7:getFillTypeNamesByIndices(self.fillTypeIndexToHeightType)
    v11 = table.concat(v7, ", ")
    v8 = string.format(...)
    return v8
  end
  v7 = tonumber(amount)
  if v7 == nil then
    return "No amount given. " .. "gsTipAnywhereAdd fillTypeName amount length rows spacing"
  end
  v8 = tonumber(length)
  v7 = Utils.getNoNil(v8, 1)
  v8 = tonumber(rows)
  v7 = Utils.getNoNil(v8, 1)
  v8 = tonumber(spacing)
  v7 = Utils.getNoNil(v8, 3)
  if g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L166
    -- if not g_currentMission.player.isControlled then goto L166 end
    -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L166
    -- cmp-jump LOP_JUMPXEQKN R16 aux=0x1d -> L166
    local v16, v17, v18 = getWorldTranslation(g_currentMission.player.rootNode)
    v16 = math.sin(g_currentMission.player.rotY)
    v16 = math.cos(g_currentMission.player.rotY)
  elseif g_currentMission.controlledVehicle ~= nil then
    v16, v17, v18 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
    v16, v17, v18 = localDirectionToWorld(g_currentMission.controlledVehicle.rootNode, 0, 0, 1)
  end
  -- TODO: structure LOP_FORNPREP (pc 172, target 202)
  DensityMapHeightUtil.tipToGroundAroundLine(v9, amount, v6, v10 + ((rows - 1) * spacing * -0.5 + 0 * spacing) * v15, v11, v12 + ((rows - 1) * spacing * -0.5 + 0 * spacing) * -v13, v10 + ((rows - 1) * spacing * -0.5 + 0 * spacing) * v15 + length * v13, v11, v12 + ((rows - 1) * spacing * -0.5 + 0 * spacing) * -v13 + length * v15, 10, 40, nil, nil, nil, nil)
  -- TODO: structure LOP_FORNLOOP (pc 201, target 173)
  if v7.controlPlayer and v8 ~= nil then
    v17, v18 = DensityMapHeightUtil.getHeightAtWorldPos(v10, v11, v12)
    v8:moveTo(v10, v18, v12, false, false)
  end
  return "Tipped " .. amount .. "l of " .. fillTypeName
end
function DensityMapHeightManager.consoleCommandTipAnywhereClear(v0, fillTypeName)
  local amount = tonumber(fillTypeName)
  if amount == nil then
    return "Invalid size. " .. "gsTipAnywhereClear size"
  end
  if fillTypeName ~= nil then
    if g_currentMission.controlPlayer then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L54
      -- if not g_currentMission.player.isControlled then goto L54 end
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L54
      -- cmp-jump LOP_JUMPXEQKN R12 aux=0xc -> L54
    elseif g_currentMission.controlledVehicle ~= nil then
    end
    if v11 ~= nil then
      local v14, v15, v16 = localToWorld(v11, -(fillTypeName * 0.5), 0, fillTypeName * 0.5)
      v14, v15, v16 = localToWorld(v11, fillTypeName * 0.5, 0, fillTypeName * 0.5)
      v14, v15, v16 = localToWorld(v11, -(fillTypeName * 0.5), 0, -(fillTypeName * 0.5))
    end
  end
  DensityMapHeightUtil.clearArea(spacing, v6, v7, v8, v9, v10)
  return "Cleared area (" .. fillTypeName .. "m)"
end
function DensityMapHeightManager.consoleCommandToggleDebug(v0)
  DensityMapHeightManager.DEBUG_ENABLED = not DensityMapHeightManager.DEBUG_ENABLED
  local length = tostring(DensityMapHeightManager.DEBUG_ENABLED)
  return string.format(...)
end
local amount = DensityMapHeightManager.new()
g_densityMapHeightManager = v2
