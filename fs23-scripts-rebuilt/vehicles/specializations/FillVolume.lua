-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillVolume = {SEND_NUM_BITS = 6, SEND_MAX_SIZE = 15}
local v3 = math.pow(2, FillVolume.SEND_NUM_BITS)
FillVolume.SEND_PRECISION = FillVolume.SEND_MAX_SIZE / v3
function FillVolume.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(FillUnit, specializations)
end
function FillVolume.initSpecialization()
  local v3 = v3:getText("configuration_fillVolume")
  v0:addConfigurationType("fillVolume", v3, "fillVolume", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("FillVolume")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#node", "Fill volume node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#fillUnitFactor", "Fill unit factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#allSidePlanes", "All side planes", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#retessellateTop", "Retessellate top plane for better triangulation quality", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#defaultFillType", "Default fill type name")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#forcedVolumeFillType", "Forced fill type name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#maxDelta", "Max. heap size above above input surface [m]", 1)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#maxAllowedHeapAngle", "Max. allowed heap surface slope angle [deg]", 35)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#maxSurfaceDistanceError", "Max. allowed distance from input mesh surface to created fill plane mesh [m]", 0.05)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#maxSubDivEdgeLength", "Max. length of sub division edges [m]", 0.9)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?)#syncMaxSubDivEdgeLength", "Max. length of sub division edges used to sync in multiplayer [m]", 1.35)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)" .. ".volumes.volume(?).deformNode(?)#node", "Deformer node")
  FillVolume.registerInfoNodeXMLPaths(Vehicle.xmlSchema, "vehicle.fillVolume.loadInfos.loadInfo(?)")
  FillVolume.registerInfoNodeXMLPaths(Vehicle.xmlSchema, "vehicle.fillVolume.unloadInfos.unloadInfo(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.fillVolume.heightNodes.heightNode(?)#fillVolumeIndex", "Fill volume index")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.fillVolume.heightNodes.heightNode(?).refNode(?)#node", "Reference node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#node", "Height node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_SCALE, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#baseScale", "Base scale", "1 1 1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#scaleAxis", "Scale axis", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_SCALE, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#scaleMax", "Max. scale", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#transAxis", "Translation axis", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#transMax", "Max. translation", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#minHeight", "Min. fill volume height used for heigth node", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#heightOffset", "Fill plane height offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fillVolume.heightNodes.heightNode(?).node(?)#orientateToWorldY", "Orientate to world Y", false)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".fillVolume#fillVolumeIndex", "Fill Unit index which includes the deformers", 1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".fillVolume#deformerNodeIndices", "Indices of deformer nodes to update")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_PART_XML_KEY .. ".fillVolume#fillVolumeIndex", "Fill Unit index which includes the deformers", 1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".fillVolume#deformerNodeIndices", "Indices of deformer nodes to update")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FillVolume:registerInfoNodeXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".node(?)#node", "Info node")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#width", "Info width", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#length", "Info length", 1)
  self:register(XMLValueType.INT, v1 .. ".node(?)#fillVolumeHeightIndex", "Fill volume height index")
  self:register(XMLValueType.INT, v1 .. ".node(?)#priority", "Priority", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#minHeight", "Min. height")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#maxHeight", "Max. height")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#minFillLevelPercentage", "Min. fill level percentage")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#maxFillLevelPercentage", "Min. fill level percentage")
  self:register(XMLValueType.FLOAT, v1 .. ".node(?)#heightForTranslation", "Min. height for translation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".node(?)#translationStart", "Translation start")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".node(?)#translationEnd", "Translation end")
end
function FillVolume.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadFillVolume", FillVolume.loadFillVolume)
  SpecializationUtil.registerFunction(vehicleType, "loadFillVolumeInfo", FillVolume.loadFillVolumeInfo)
  SpecializationUtil.registerFunction(vehicleType, "loadFillVolumeHeightNode", FillVolume.loadFillVolumeHeightNode)
  SpecializationUtil.registerFunction(vehicleType, "getFillVolumeLoadInfo", FillVolume.getFillVolumeLoadInfo)
  SpecializationUtil.registerFunction(vehicleType, "getFillVolumeUnloadInfo", FillVolume.getFillVolumeUnloadInfo)
  SpecializationUtil.registerFunction(vehicleType, "getFillVolumeIndicesByFillUnitIndex", FillVolume.getFillVolumeIndicesByFillUnitIndex)
  SpecializationUtil.registerFunction(vehicleType, "setFillVolumeForcedFillTypeByFillUnitIndex", FillVolume.setFillVolumeForcedFillTypeByFillUnitIndex)
  SpecializationUtil.registerFunction(vehicleType, "setFillVolumeForcedFillType", FillVolume.setFillVolumeForcedFillType)
  SpecializationUtil.registerFunction(vehicleType, "getFillVolumeUVScrollSpeed", FillVolume.getFillVolumeUVScrollSpeed)
end
function FillVolume.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setMovingToolDirty", FillVolume.setMovingToolDirty)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadExtraDependentParts", FillVolume.loadExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateExtraDependentParts", FillVolume.updateExtraDependentParts)
end
function FillVolume.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FillVolume)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", FillVolume)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", FillVolume)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", FillVolume)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", FillVolume)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", FillVolume)
end
function FillVolume:onLoad(savegame)
  local fillVolumeConfigurationId = Utils.getNoNil(self.configurations.fillVolume, 1)
  local v4 = string.format("vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration(%d).volumes", fillVolumeConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.fillVolume.fillVolumeConfigurations.fillVolumeConfiguration", fillVolumeConfigurationId, self.components, self)
  self.spec_fillVolume.volumes = {}
  self.spec_fillVolume.fillVolumeDeformersByNode = {}
  self.spec_fillVolume.fillUnitFillVolumeMapping = {}
  v5:iterate(v4 .. ".volume", function(self, savegame)
    local fillVolumeConfigurationId = fillVolumeConfigurationId:loadFillVolume(u0.xmlFile, savegame, {})
    if fillVolumeConfigurationId then
      table.insert(u1.volumes, {})
    end
  end)
  for v8, v9 in ipairs(self.spec_fillVolume.fillUnitFillVolumeMapping) do
    for v13, v14 in ipairs(v9.fillVolumes) do
      v14.fillUnitFactor = v14.fillUnitFactor / v9.sumFactors
    end
  end
  for v8, v9 in ipairs(v2.volumes) do
    v10 = self:getFillUnitCapacity(v9.fillUnitIndex)
    v12 = createFillPlaneShape(v9.baseNode, "fillPlane", v10 * v9.fillUnitFactor, v9.maxDelta, v9.maxSurfaceAngle, v9.maxPhysicalSurfaceAngle, v9.maxSurfaceDistanceError, v9.maxSubDivEdgeLength, v9.syncMaxSubDivEdgeLength, v9.allSidePlanes, v9.retessellateTop)
    v9.volume = v12
    if v9.volume ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R12 aux=0x8000002a -> L140
    end
    local v20 = getName(v9.baseNode)
    local v19 = tostring(...)
    print("Warning: fillVolume '" .. v19 .. "' could not create actual fillVolume in '" .. self.configFileName .. "'! Simplifying the mesh could help")
    v9.volume = nil
    continue
    setVisibility(v9.volume, false)
    -- TODO: structure LOP_FORNPREP (pc 151, target 199)
    local v16 = findPolyline(v9.volume, v9.deformers[#v9.deformers].posX, v9.deformers[#v9.deformers].posZ)
    v9.deformers[#v9.deformers].polyline = v16
    if v9.deformers[#v9.deformers].polyline == nil and v9.deformers[#v9.deformers].polyline ~= -1 then
      local v24 = getName(v9.deformers[#v9.deformers].node)
      local v23 = tostring(...)
      print("Warning: Could not find 'polyline' for '" .. v23 .. "' in '" .. self.configFileName .. "'")
      table.remove(v9.deformers, #v9.deformers)
    end
    -- TODO: structure LOP_FORNLOOP (pc 198, target 152)
    link(v9.baseNode, v9.volume)
    v12 = v12:getBaseMaterialByName("fillPlane")
    if v12 ~= nil then
      setMaterial(v9.volume, v12, 0)
      v13:assignFillTypeTextureArrays(v9.volume, true, true, true)
    else
      Logging.error("Failed to assign material to fill volume. Base Material 'fillPlane' not found!")
    end
    fillPlaneAdd(v9.volume, 1, 0, 1, 0, 11, 0, 0, 0, 0, 11)
    v13 = getFillPlaneHeightAtLocalPos(v9.volume, 0, 0)
    v9.heightOffset = v13
    fillPlaneAdd(v9.volume, -1, 0, 1, 0, 11, 0, 0, 0, 0, 11)
  end
  v2.loadInfos = {}
  v5:iterate("vehicle.fillVolume.loadInfos.loadInfo", function(self, savegame)
    local fillVolumeConfigurationId = fillVolumeConfigurationId:loadFillVolumeInfo(u0.xmlFile, savegame, {})
    if fillVolumeConfigurationId then
      table.insert(u1.loadInfos, {})
    end
  end)
  v2.unloadInfos = {}
  v5:iterate("vehicle.fillVolume.unloadInfos.unloadInfo", function(self, savegame)
    local fillVolumeConfigurationId = fillVolumeConfigurationId:loadFillVolumeInfo(u0.xmlFile, savegame, {})
    if fillVolumeConfigurationId then
      table.insert(u1.unloadInfos, {})
    end
  end)
  v2.heightNodes = {}
  v2.fillVolumeIndexToHeightNode = {}
  v5:iterate("vehicle.fillVolume.heightNodes.heightNode", function(self, savegame)
    local fillVolumeConfigurationId = fillVolumeConfigurationId:loadFillVolumeHeightNode(u0.xmlFile, savegame, {})
    if fillVolumeConfigurationId then
      table.insert(u1.heightNodes, {})
      if u1.fillVolumeIndexToHeightNode[{}.fillVolumeIndex] == nil then
        u1.fillVolumeIndexToHeightNode[{}.fillVolumeIndex] = {}
      end
      table.insert(u1.fillVolumeIndexToHeightNode[v2.fillVolumeIndex], v2)
    end
  end)
  v2.lastPositionInfo = {0, 0}
  v2.lastPositionInfoSent = {0, 0}
  v2.availableFillNodes = {}
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x8000002a -> L365
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x8000002a -> L365
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", FillVolume)
end
function FillVolume:onDelete()
  if self.spec_fillVolume.volumes ~= nil then
    for v5, v6 in ipairs(self.spec_fillVolume.volumes) do
      if v6.volume ~= nil then
        delete(v6.volume)
      end
      v6.volume = nil
    end
  end
end
function FillVolume:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      local v8 = streamReadUIntN(streamId, FillVolume.SEND_NUM_BITS)
      local v10 = math.pow(2, FillVolume.SEND_NUM_BITS)
      local v9 = streamReadUIntN(streamId, FillVolume.SEND_NUM_BITS)
      local v11 = math.pow(2, FillVolume.SEND_NUM_BITS)
      self.spec_fillVolume.lastPositionInfo[1] = v8 / (v10 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
      self.spec_fillVolume.lastPositionInfo[2] = v9 / (v11 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
    end
  end
end
function FillVolume:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_fillVolume.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      v8 = math.pow(2, FillVolume.SEND_NUM_BITS)
      streamWriteUIntN(streamId, (v4.lastPositionInfoSent[1] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v8 - 1), FillVolume.SEND_NUM_BITS)
      local v9 = math.pow(2, FillVolume.SEND_NUM_BITS)
      streamWriteUIntN(streamId, (v4.lastPositionInfoSent[2] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v9 - 1), FillVolume.SEND_NUM_BITS)
      local v11 = math.floor((v4.lastPositionInfoSent[1] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v8 - 1))
      local v13 = math.pow(2, FillVolume.SEND_NUM_BITS)
      v4.lastPositionInfoSent[1] = v11 / (v13 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
      v11 = math.floor((v4.lastPositionInfoSent[2] + FillVolume.SEND_MAX_SIZE * 0.5) / FillVolume.SEND_MAX_SIZE * (v9 - 1))
      v13 = math.pow(2, FillVolume.SEND_NUM_BITS)
      v4.lastPositionInfoSent[2] = v11 / (v13 - 1) * FillVolume.SEND_MAX_SIZE - FillVolume.SEND_MAX_SIZE * 0.5
    end
  end
end
function FillVolume:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    for v9, v10 in pairs(self.spec_fillVolume.volumes) do
      for v14, v15 in ipairs(v10.deformers) do
        if not v15.isDirty then
          continue
        end
        if not (v15.polyline ~= nil) then
          continue
        end
        if not (v15.polyline ~= -1) then
          continue
        end
        v15.isDirty = false
        local v16, v17, v18 = localToLocal(v15.node, v15.baseNode, 0, 0, 0)
        local v19 = math.abs(v16 - v15.posX)
        if 0.0001 >= v19 then
          v19 = math.abs(v18 - v15.posZ)
          if not (0.0001 < v19) then
            continue
          end
        end
        v15.lastPosX = v16
        v15.lastPosZ = v18
        setPolylineTranslation(v10.volume, v15.polyline, v16 - v15.initPos[1], v18 - v15.initPos[3])
      end
      v11, v12, v13 = self:getFillVolumeUVScrollSpeed(v10.index)
      if v11 == 0 and v12 == 0 and not (v13 ~= 0) then
        continue
      end
      v10.uvPosition[1] = v10.uvPosition[1] + v11 * dt / 1000
      v10.uvPosition[2] = v10.uvPosition[2] + v12 * dt / 1000
      v10.uvPosition[3] = v10.uvPosition[3] + v13 * dt / 1000
      setShaderParameter(v10.volume, "uvOffset", v10.uvPosition[1], v10.uvPosition[2], v10.uvPosition[3], 0, false)
    end
    for v9, v10 in pairs(v5.heightNodes) do
      if not v10.isDirty then
        continue
      end
      v10.isDirty = false
      if not (v5.volumes[v10.fillVolumeIndex].baseNode ~= nil) then
        continue
      end
      if not (v5.volumes[v10.fillVolumeIndex].volume ~= nil) then
        continue
      end
      for v20, v21 in pairs(v10.refNodes) do
        local v22, v23, v24 = localToLocal(v21.refNode, v12, 0, 0, 0)
        local v26 = getFillPlaneHeightAtLocalPos(v13, v22, v24)
        v26 = math.min(v14, v26 - v11.heightOffset)
        v26 = math.max(v15, v26 - v11.heightOffset)
        local v26, v27, v28 = localToWorld(v12, v22, v26 - v11.heightOffset, v24)
        local v29 = math.max(v16, v27)
      end
      v10.currentMinHeight = v14
      v10.currentMaxHeight = v15
      v10.currentMaxHeightWorld = v16
      for v20, v21 in pairs(v10.nodes) do
        v22 = math.max(v14 + v21.heightOffset, v21.minHeight)
        if 0 < v21.scaleMax[1] then
          v26 = math.min(v21.scaleMax[1], v21.scaleAxis[1] * v22)
        end
        if 0 < v21.scaleMax[2] then
          v26 = math.min(v21.scaleMax[2], v24)
        end
        if 0 < v21.scaleMax[3] then
          v26 = math.min(v21.scaleMax[3], v25)
        end
        if 0 < v21.transMax[1] then
          v29 = math.min(v21.transMax[1], v21.transAxis[1] * v22)
        end
        if 0 < v21.transMax[2] then
          v29 = math.min(v21.transMax[2], v27)
        end
        if 0 < v21.transMax[3] then
          v29 = math.min(v21.transMax[3], v28)
        end
        setScale(v21.node, v21.baseScale[1] + v23, v21.baseScale[2] + v24, v21.baseScale[3] + v25)
        setTranslation(v21.node, v21.basePosition[1] + v26, v21.basePosition[2] + v27, v21.basePosition[3] + v28)
        if not v21.orientateToWorldY then
          continue
        end
        local v30 = getParent(v21.node)
        local v29, v30, v31 = localDirectionToWorld(v30, 0, 1, 0)
        local v32 = math.acos(v30)
        setRotation(v21.node, v32, 0, 0)
      end
    end
  end
end
function FillVolume:loadFillVolume(xmlFile, key, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  entry.baseNode = v5
  if entry.baseNode == nil then
    local v12 = tostring(key)
    print("Warning: fillVolume '" .. v12 .. "' has an invalid 'node' in '" .. self.configFileName .. "'!")
    return false
  end
  v5 = xmlFile:getValue(key .. "#fillUnitIndex")
  entry.fillUnitIndex = v5
  if v5 == nil then
    local v13 = tostring(key)
    print("Warning: fillVolume '" .. v13 .. "' has no 'fillUnitIndex' given in '" .. self.configFileName .. "'!")
    return false
  end
  local v6 = self:getFillUnitExists(v5)
  if not v6 then
    v13 = tostring(key)
    print("Warning: fillVolume '" .. v13 .. "' has an invalid 'fillUnitIndex' in '" .. self.configFileName .. "'!")
    return false
  end
  v6 = xmlFile:getValue(key .. "#fillUnitFactor", 1)
  entry.fillUnitFactor = v6
  if v4.fillUnitFillVolumeMapping[v5] == nil then
    v4.fillUnitFillVolumeMapping[v5] = {fillVolumes = {}, sumFactors = 0}
  end
  table.insert(v4.fillUnitFillVolumeMapping[v5].fillVolumes, entry)
  v4.fillUnitFillVolumeMapping[v5].sumFactors = entry.fillUnitFactor
  v6 = xmlFile:getValue(key .. "#allSidePlanes", true)
  entry.allSidePlanes = v6
  v6 = xmlFile:getValue(key .. "#retessellateTop", false)
  entry.retessellateTop = v6
  v6 = xmlFile:getValue(key .. "#defaultFillType")
  if v6 ~= nil then
    local v7 = v7:getFillTypeIndexByName(v6)
    if v7 == nil then
      local v17 = tostring(v6)
      v17 = tostring(key)
      print("Warning: Invalid defaultFillType '" .. v17 .. "' for '" .. v17 .. "' in '" .. self.configFileName .. "'")
      return false
    end
    entry.defaultFillType = v7
  else
    v7 = self:getFillUnitFirstSupportedFillType(v5)
    entry.defaultFillType = v7
  end
  v7 = xmlFile:getValue(key .. "#forcedVolumeFillType")
  if v7 ~= nil then
    local v8 = v8:getFillTypeIndexByName(v7)
    if v8 ~= nil then
      entry.forcedVolumeFillType = v8
    else
      local v18 = tostring(v7)
      v18 = tostring(key)
      print("Warning: Invalid forcedVolumeFillType '" .. v18 .. "' for '" .. v18 .. "' in '" .. self.configFileName .. "'")
      return false
    end
  end
  v8 = xmlFile:getValue(key .. "#maxDelta", 1)
  entry.maxDelta = v8
  v8 = xmlFile:getValue(key .. "#maxAllowedHeapAngle", 35)
  entry.maxSurfaceAngle = v8
  entry.maxPhysicalSurfaceAngle = 0.6108652381980153
  v8 = xmlFile:getValue(key .. "#maxSurfaceDistanceError", 0.05)
  entry.maxSurfaceDistanceError = v8
  v8 = xmlFile:getValue(key .. "#maxSubDivEdgeLength", 0.9)
  entry.maxSubDivEdgeLength = v8
  v8 = xmlFile:getValue(key .. "#syncMaxSubDivEdgeLength", 1.35)
  entry.syncMaxSubDivEdgeLength = v8
  entry.uvPosition = {0, 0, 0}
  entry.deformers = {}
  while true do
    v9 = string.format("%s.deformNode(%d)", key, v8)
    v10 = xmlFile:hasProperty(v9)
    if not v10 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, v9 .. "#index", v9 .. "#node")
    v10 = xmlFile:getValue(v9 .. "#node", nil, self.components, self.i3dMappings)
    if v10 ~= nil then
      v12 = localToLocal(v10, entry.baseNode, 0, 0, 0)
      table.insert(entry.deformers, {node = v10, initPos = {}, posX = {}[1], posZ = {}[3], polyline = nil, volume = entry.volume, baseNode = entry.baseNode})
      v4.fillVolumeDeformersByNode[v10] = {node = v10, initPos = {}, posX = {}[1], posZ = {}[3], polyline = nil, volume = entry.volume, baseNode = entry.baseNode}
    end
  end
  entry.lastFillType = FillType.UNKNOWN
  return true
end
function FillVolume:loadFillVolumeInfo(xmlFile, key, entry)
  entry.nodes = {}
  while true do
    v7 = string.format(".node(%d)", v4)
    v6 = xmlFile:hasProperty(key .. v7)
    if not v6 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. v7 .. "#index", key .. v7 .. "#node")
    v6 = xmlFile:getValue(key .. v7 .. "#node", nil, self.components, self.i3dMappings)
    if v6 ~= nil then
      v8 = xmlFile:getValue(key .. v7 .. "#width", 1)
      v8 = xmlFile:getValue(key .. v7 .. "#length", 1)
      v8 = xmlFile:getValue(key .. v7 .. "#fillVolumeHeightIndex")
      v8 = xmlFile:getValue(key .. v7 .. "#priority", 1)
      v8 = xmlFile:getValue(key .. v7 .. "#minHeight")
      v8 = xmlFile:getValue(key .. v7 .. "#maxHeight")
      v8 = xmlFile:getValue(key .. v7 .. "#minFillLevelPercentage")
      v8 = xmlFile:getValue(key .. v7 .. "#maxFillLevelPercentage")
      v8 = xmlFile:getValue(key .. v7 .. "#heightForTranslation")
      v8 = xmlFile:getValue(key .. v7 .. "#translationStart", nil, true)
      v8 = xmlFile:getValue(key .. v7 .. "#translationEnd", nil, true)
      table.insert(entry.nodes, {node = v6, width = v8, length = v8, fillVolumeHeightIndex = v8, priority = v8, minHeight = v8, maxHeight = v8, minFillLevelPercentage = v8, maxFillLevelPercentage = v8, heightForTranslation = v8, translationStart = v8, translationEnd = v8, translationAlpha = 0})
    else
      Logging.xmlWarning(self.xmlFile, "Missing node for '%s'", key .. v7)
    end
  end
  table.sort(entry.nodes, function(self, xmlFile)
    if xmlFile.priority >= self.priority then
    end
    return true
  end)
  return true
end
function FillVolume:loadFillVolumeHeightNode(xmlFile, key, entry)
  entry.isDirty = false
  local v4 = xmlFile:getValue(key .. "#fillVolumeIndex", 1)
  entry.fillVolumeIndex = v4
  if self.spec_fillVolume.volumes[entry.fillVolumeIndex] == nil then
    Logging.xmlWarning(self.xmlFile, "Invalid fillVolumeIndex '%d' for heightNode '%s'. Igoring heightNode!", entry.fillVolumeIndex, key)
    return false
  end
  entry.refNodes = {}
  while true do
    v7 = string.format(".refNode(%d)", v4)
    v6 = xmlFile:hasProperty(key .. v7)
    if not v6 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. v7 .. "#index", key .. v7 .. "#node")
    v6 = xmlFile:getValue(key .. v7 .. "#node", nil, self.components, self.i3dMappings)
    if v6 ~= nil then
      table.insert(entry.refNodes, {refNode = v6})
    else
      Logging.xmlWarning(self.xmlFile, "Missing node for '%s'", key .. v7)
    end
  end
  entry.nodes = {}
  while true do
    v7 = string.format(".node(%d)", v4)
    v6 = xmlFile:hasProperty(key .. v7)
    if not v6 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. v7 .. "#index", key .. v7 .. "#node")
    v6 = xmlFile:getValue(key .. v7 .. "#node", nil, self.components, self.i3dMappings)
    if v6 ~= nil then
      v8 = xmlFile:getValue(key .. v7 .. "#baseScale", "1 1 1", true)
      v8 = xmlFile:getValue(key .. v7 .. "#scaleAxis", "0 0 0", true)
      v8 = xmlFile:getValue(key .. v7 .. "#scaleMax", "0 0 0", true)
      v9 = getTranslation(v6)
      v8 = xmlFile:getValue(key .. v7 .. "#transAxis", "0 0 0", true)
      v8 = xmlFile:getValue(key .. v7 .. "#transMax", "0 0 0", true)
      v8 = xmlFile:getValue(key .. v7 .. "#minHeight", 0)
      v8 = xmlFile:getValue(key .. v7 .. "#heightOffset", 0)
      v8 = xmlFile:getValue(key .. v7 .. "#orientateToWorldY", false)
      table.insert(entry.nodes, {node = v6, baseScale = v8, scaleAxis = v8, scaleMax = v8, basePosition = {}, transAxis = v8, transMax = v8, minHeight = v8, heightOffset = v8, orientateToWorldY = v8})
    else
      Logging.xmlWarning(self.xmlFile, "Missing node for '%s'", key .. v7)
    end
  end
  return true
end
function FillVolume:getFillVolumeLoadInfo(loadInfoIndex)
  return self.spec_fillVolume.loadInfos[loadInfoIndex]
end
function FillVolume:getFillVolumeUnloadInfo(unloadInfoIndex)
  return self.spec_fillVolume.unloadInfos[unloadInfoIndex]
end
function FillVolume:getFillVolumeIndicesByFillUnitIndex(fillUnitIndex)
  for v7, v8 in ipairs(self.spec_fillVolume.volumes) do
    if not (v8.fillUnitIndex == fillUnitIndex) then
      continue
    end
    table.insert(v3, v7)
  end
  return v3
end
function FillVolume:setFillVolumeForcedFillTypeByFillUnitIndex(fillUnitIndex, forcedFillType)
  for v7, v8 in ipairs(self.spec_fillVolume.volumes) do
    if not (v8.fillUnitIndex == fillUnitIndex) then
      continue
    end
    self:setFillVolumeForcedFillType(v7, forcedFillType)
  end
end
function FillVolume:setFillVolumeForcedFillType(fillVolumeIndex, forcedFillType)
  if self.spec_fillVolume.volumes[fillVolumeIndex] ~= nil then
    self.spec_fillVolume.volumes[fillVolumeIndex].forcedFillType = forcedFillType
  end
end
function FillVolume.getFillVolumeUVScrollSpeed(v0)
  return 0, 0, 0
end
function FillVolume:setMovingToolDirty(superFunc, node, forceUpdate, dt)
  superFunc(self, node, forceUpdate, dt)
  if self.spec_fillVolume.fillVolumeDeformersByNode ~= nil and self.spec_fillVolume.fillVolumeDeformersByNode[node] ~= nil then
    self.spec_fillVolume.fillVolumeDeformersByNode[node].isDirty = true
  end
end
function FillVolume.loadExtraDependentParts(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. ".fillVolume#fillVolumeIndex", 1)
  local v6 = v2:getValue(v3 .. ".fillVolume#deformerNodeIndices", nil, true)
  if v6 ~= nil and 0 < #v6 then
    v4.fillVolumeIndex = v5
    v4.deformerNodes = {}
    local v10 = table.getn(v6)
    -- TODO: structure LOP_FORNPREP (pc 43, target 53)
    table.insert(v4.deformerNodes, v6[1])
    -- TODO: structure LOP_FORNLOOP (pc 52, target 44)
  end
  return true
end
function FillVolume:updateExtraDependentParts(superFunc, part, dt)
  superFunc(self, part, dt)
  if part.deformerNodes ~= nil then
    if part.fillVolumeIndex ~= nil then
      part.fillVolume = self.spec_fillVolume.volumes[part.fillVolumeIndex]
      if part.fillVolume == nil then
        local v8 = getName(part.node)
        Logging.xmlWarning(...)
        part.deformerNodes = nil
      end
      part.fillVolumeIndex = nil
    end
    if part.fillVolume ~= nil then
      for v7, v8 in pairs(part.deformerNodes) do
        if part.fillVolume.deformers[v8] == nil then
          part.deformerNodes[v7] = nil
        else
          part.fillVolume.deformers[v8].isDirty = true
        end
      end
    end
  end
end
function FillVolume:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, _, toolType, fillPositionData, appliedDelta)
  if self.spec_fillVolume.fillUnitFillVolumeMapping[fillUnitIndex] == nil then
    return
  end
  local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
  local fillType = self:getFillUnitFillType(fillUnitIndex)
  for v14, v15 in ipairs(v8.fillVolumes) do
    if v15.baseNode ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x80000000 -> L31
    end
    return
    if v15.forcedFillType ~= nil then
    end
    if fillLevel == 0 then
      v15.forcedFillType = nil
    end
    if fillType ~= v15.lastFillType then
      local v19 = v19:getFillTypeByIndex(fillType)
      if v19 ~= nil then
      end
      if v18 ~= nil and v15.volume ~= nil then
        setFillPlaneMaxPhysicalSurfaceAngle(v15.volume, v18)
        v15.maxPhysicalSurfaceAngle = v18
      end
    end
    if 0 >= fillLevel then
    end
    v18(v19, true)
    if fillType ~= FillType.UNKNOWN and fillType ~= v15.lastFillType then
      local v18 = v18:getTextureArrayIndexByFillTypeIndex(fillType)
      if v18 ~= nil then
        setShaderParameter(v15.volume, "fillTypeId", v18 - 1, 0, 0, 0, false)
      end
    end
    if fillPositionData ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 115, target 121)
      v7.availableFillNodes[#v7.availableFillNodes] = nil
      -- TODO: structure LOP_FORNLOOP (pc 120, target 116)
      if fillPositionData.nodes ~= nil then
        while true do
          -- cmp-jump LOP_JUMPXEQKN R19 aux=0x8000000a -> L357
          -- if 1 > v18 then goto L357 end
          for v22, v23 in pairs(fillPositionData.nodes) do
            if not (v18 <= v23.priority) then
              continue
            end
            if v23.minHeight == nil then
              -- cmp-jump LOP_JUMPXEQKNIL R25 aux=0x0 -> L298
            end
            if v23.fillVolumeHeightIndex ~= nil then
              -- cmp-jump LOP_JUMPXEQKNIL R26 aux=0x0 -> L210
              for v29, v30 in pairs(v7.heightNodes[v23.fillVolumeHeightIndex].refNodes) do
                v31, v32, v33 = localToLocal(v30.refNode, v16, 0, 0, 0)
                v37 = getFillPlaneHeightAtLocalPos(v17, v31, v33)
                v34 = math.max(v25, v37 - v15.heightOffset)
              end
            else
              v26, v27, v28 = localToLocal(v23.node, v16, 0, 0, 0)
              v32 = getFillPlaneHeightAtLocalPos(v17, v26, v28)
              v29 = math.max(-math.huge, v32 - v15.heightOffset)
            end
            if v23.minHeight ~= nil and v25 < v23.minHeight then
            end
            if v23.maxHeight ~= nil and v23.maxHeight < v25 then
            end
            if v23.heightForTranslation ~= nil then
              if v23.heightForTranslation < v25 then
                v23.translationAlpha = v23.translationAlpha + 0.01
                v26, v27, v28 = MathUtil.vector3ArrayLerp(v23.translationStart, v23.translationEnd, v23.translationAlpha)
                setTranslation(v23.node, v26, v27, v28)
              else
                v23.translationAlpha = v23.translationAlpha - 0.01
              end
              v26 = MathUtil.clamp(v23.translationAlpha, 0, 1)
              v23.translationAlpha = v26
            end
            if v23.minFillLevelPercentage == nil then
              -- cmp-jump LOP_JUMPXEQKNIL R25 aux=0x0 -> L329
            end
            v26 = self:getFillUnitCapacity(fillUnitIndex)
            if v23.minFillLevelPercentage ~= nil and fillLevel / v26 < v23.minFillLevelPercentage then
            end
            if v23.maxFillLevelPercentage ~= nil and v23.maxFillLevelPercentage < v25 then
            end
            if not v24 then
              continue
            end
            table.insert(v7.availableFillNodes, v23)
          end
          -- if 0 < #v7.availableFillNodes then goto L357 end
        end
      else
        table.insert(v7.availableFillNodes, fillPositionData)
      end
      -- TODO: structure LOP_FORNPREP (pc 365, target 495)
      local v25, v26, v27 = getWorldTranslation(v7.availableFillNodes[1].node)
      v28, v29, v30 = localDirectionToWorld(v7.availableFillNodes[1].node, v7.availableFillNodes[1].width, 0, 0)
      v31, v32, v33 = localDirectionToWorld(v7.availableFillNodes[1].node, 0, 0, v7.availableFillNodes[1].length)
      if VehicleDebug.state == VehicleDebug.DEBUG then
        drawDebugLine(v25, v26, v27, 1, 0, 0, v25 + v28, v26 + v29, v27 + v30, 1, 0, 0)
        drawDebugLine(v25, v26, v27, 0, 0, 1, v25 + v31, v26 + v32, v27 + v33, 0, 0, 1)
        drawDebugPoint(v25, v26, v27, 1, 1, 1, 1)
        drawDebugPoint(v25 + v28, v26 + v29, v27 + v30, 1, 0, 0, 1)
        drawDebugPoint(v25 + v31, v26 + v32, v27 + v33, 0, 0, 1, 1)
      end
      fillPlaneAdd(v15.volume, appliedDelta / v18, v25 - (v28 + v31) / 2, v26 - (v29 + v32) / 2, v27 - (v30 + v33) / 2, v28, v29, v30, v31, v32, v33)
      local v34, v35, v36 = localToLocal(v24.node, v15.volume, 0, 0, 0)
      -- TODO: structure LOP_FORNLOOP (pc 494, target 366)
      v23 = math.abs((v19 + v34) / v18 - v7.lastPositionInfoSent[1])
      if FillVolume.SEND_PRECISION >= v23 then
        v23 = math.abs((v20 + v36) / v18 - v7.lastPositionInfoSent[2])
        -- if FillVolume.SEND_PRECISION >= v23 then goto L631 end
      end
      v7.lastPositionInfoSent[1] = v21
      v7.lastPositionInfoSent[2] = v22
      self:raiseDirtyFlags(v7.dirtyFlag)
    else
      if v15.maxPhysicalSurfaceAngle ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R19 aux=0x8000000a -> L547
      end
      v19, v20, v21 = localToWorld(v15.volume, -10 * 0.5, 0, -10 * 0.5)
      local v22, v23, v24 = localDirectionToWorld(v15.volume, 10, 0, 0)
      v25, v26, v27 = localDirectionToWorld(v15.volume, 0, 0, 10)
      if not self.isServer and v7.lastPositionInfo[1] ~= 0 and v7.lastPositionInfo[2] ~= 0 then
        v28, v29, v30 = localToWorld(v15.volume, v7.lastPositionInfo[1], 0, v7.lastPositionInfo[2])
      end
      v29 = math.floor(appliedDelta / 400)
      v28 = MathUtil.clamp(v29, 1, 25)
      -- TODO: structure LOP_FORNPREP (pc 614, target 631)
      fillPlaneAdd(v15.volume, appliedDelta / v28, v19, v20, v21, v22, v23, v24, v25, v26, v27)
      -- TODO: structure LOP_FORNLOOP (pc 630, target 615)
    end
    if v7.fillVolumeIndexToHeightNode[v15.index] ~= nil then
      for v22, v23 in ipairs(v7.fillVolumeIndexToHeightNode[v15.index]) do
        v23.isDirty = true
      end
    end
    for v22, v23 in pairs(v15.deformers) do
      v23.isDirty = true
    end
    v15.lastFillType = fillType
  end
end
