-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MotionPathEffectManager = {MOTION_PATH_SHADER_PARAMS = {"scrollPosition", "fadeProgress", "visibilityCut", "density", "verticalOffset", "subUVspeed", "subUVelements", "sizeScale"}}
local MotionPathEffectManager_mt = Class(MotionPathEffectManager, AbstractManager)
function MotionPathEffectManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.shaderParamCopyBuffer = {}
  -- TODO: structure LOP_FORNPREP (pc 17, target 34)
  table.insert(v1.shaderParamCopyBuffer, {0, 0, 0, 0})
  -- TODO: structure LOP_FORNLOOP (pc 33, target 18)
  return v1
end
function MotionPathEffectManager:initDataStructures()
  self.xmlFiles = {}
  self.sharedLoadRequestIds = {}
  self.effectsByType = {}
  self.effects = {}
end
function MotionPathEffectManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self, xmlFile, missionInfo, baseDirectory)
  self.baseDirectory = baseDirectory
  local v4, v5 = Utils.getModNameAndBaseDirectory(baseDirectory)
  MotionPathEffectManager.createMotionPathEffectXMLSchema()
  self:loadMotionPathEffects(xmlFile, "map.motionPathEffects.motionPathEffect", baseDirectory, v4)
  local externalXMLFilename = getXMLString(xmlFile, "map.motionPathEffects#filename")
  if externalXMLFilename ~= nil then
    local v7 = Utils.getFilename(externalXMLFilename, baseDirectory)
    v7 = XMLFile.load("motionPathXML", v7)
    if v7 ~= nil then
      self:loadMotionPathEffects(v7.handle, "motionPathEffects.motionPathEffect", baseDirectory, v4)
      v7:delete()
    end
  end
  return true
end
function MotionPathEffectManager:loadMotionPathEffects(xmlFileHandle, key, baseDirectory, customEnvironment)
  while true do
    v6 = string.format("%s(%d)", key, v5)
    v7 = hasXMLProperty(xmlFileHandle, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFileHandle, v6 .. "#filename")
    if v7 ~= nil then
      self:loadMotionPathEffectsXML(v7, baseDirectory, customEnvironment)
    end
  end
end
function MotionPathEffectManager:loadMotionPathEffectsXML(filename, baseDirectory, customEnvironment)
  local xmlFilename = Utils.getFilename(filename, baseDirectory)
  local v5 = XMLFile.load("mapMotionPathEffects", xmlFilename, MotionPathEffectManager.xmlSchema)
  if v5 ~= nil then
    self.xmlFiles[v5] = true
    v5.xmlReferences = 0
    while true do
      v7 = string.format("motionPathEffects.motionPathEffect(%d)", v6)
      v8 = v5:hasProperty(v7)
      if not v8 then
        break
      end
      v9 = v5:getValue(v7 .. "#effectClass", "MotionPathEffect")
      if v9 ~= nil then
        v10 = v10:getEffectClass(v9)
        if v10 == nil then
          if customEnvironment ~= nil and customEnvironment ~= "" then
            v11 = v11:getEffectClass(customEnvironment .. "." .. v9)
          end
          if v10 == nil then
            v11 = ClassUtil.getClassObject(v9)
          end
        end
        if v10 ~= nil then
          v10.loadEffectDefinitionFromXML(v8, v5, v7 .. ".typeDefinition")
          v8.effectClass = v10
          v8.effectClassName = v9
          v8.effectTypes = {}
          v11 = v5:getValue(v7 .. "#effectType", "DEFAULT")
          v8.effectTypeStr = v11
          v11 = v11:split(" ")
          -- TODO: structure LOP_FORNPREP (pc 110, target 122)
          v17 = v17:upper()
          table.insert(...)
          -- TODO: structure LOP_FORNLOOP (pc 121, target 111)
          v12 = v5:getValue(v7 .. "#filename")
          v8.filename = v12
          if v8.filename ~= nil then
            v5.xmlReferences = v5.xmlReferences + 1
            v12 = Utils.getFilename(v8.filename, baseDirectory)
            v8.filename = v12
            v13 = v13:loadSharedI3DFileAsync(v8.filename, false, false, self.motionPathEffectI3DFileLoaded, self, {motionPathEffect = v8, xmlFile = v5, motionPathEffectKey = v7, baseDirectory = baseDirectory})
            table.insert(self.sharedLoadRequestIds, v13)
            -- goto L192  (LOP_JUMP +14)
          end
          Logging.xmlError(v5, "Missing filename for motion path effect '%s'", v7)
        else
          Logging.xmlError(v5, "Unknown motion path effect class '%s' in '%s'", v9, v7)
        end
      end
    end
    if v5.xmlReferences == 0 then
      self.xmlFiles[v5] = nil
      v5:delete()
    end
  end
end
function MotionPathEffectManager:motionPathEffectI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    args.motionPathEffect.effectMeshes = {}
    args.xmlFile:iterate(args.motionPathEffectKey .. ".effectMeshes.effectMesh", function(self, i3dNode)
      local failedReason = failedReason:getValue(i3dNode .. "#node", nil, u1)
      if failedReason ~= nil and u2[failedReason] == nil then
        local v4 = v4:getValue(i3dNode .. "#rowLength", 30)
        v4 = v4:getValue(i3dNode .. "#numRows", 12)
        v4 = v4:getValue(i3dNode .. "#skipPositions", 0)
        v4 = v4:getValue(i3dNode .. "#numVariations", 1)
        if 1 < {node = failedReason, rowLength = v4, numRows = v4, skipPositions = v4, numVariations = v4}.numVariations then
          -- TODO: structure LOP_FORNPREP (pc 72, target 78)
          {node = failedReason, rowLength = v4, numRows = v4, skipPositions = v4, numVariations = v4, usedVariations = {}}.usedVariations[1] = false
          -- TODO: structure LOP_FORNLOOP (pc 77, target 73)
        end
        args.parent = u3
        v4:loadCustomShaderSettingsFromXML(args, u0, i3dNode)
        u3.effectClass.loadEffectMeshFromXML(args, u0, i3dNode)
        args.growthStates = u3.growthStates
        table.insert(u3.effectMeshes, args)
        u2[failedReason] = true
        return
      end
      if failedReason == nil then
        Logging.xmlError(u0, "Failed to load effect mesh node from xml (%s)", i3dNode)
        return
      end
      Logging.xmlError(u0, "Failed to load effect mesh node from xml. Node already used. (%s)", i3dNode)
    end)
    args.motionPathEffect.effectMaterials = {}
    args.xmlFile:iterate(args.motionPathEffectKey .. ".effectMaterials.effectMaterial", function(self, i3dNode)
      local failedReason = failedReason:getValue(i3dNode .. "#node", nil, u1)
      if failedReason ~= nil then
        local v4 = getMaterial(failedReason, 0)
        v4:iterate(i3dNode .. ".lod", function(self, i3dNode)
          local failedReason = failedReason:getValue(i3dNode .. "#node", nil, u1)
          if failedReason ~= nil then
            local v5 = getMaterial(failedReason, 0)
            table.insert(...)
          end
        end)
        v4 = v4:getValue(i3dNode .. ".textures#diffuse")
        if {node = failedReason, materialId = v4, parent = u2, lod = {}, customDiffuse = v4}.customDiffuse ~= nil then
          v4 = Utils.getFilename({node = failedReason, materialId = v4, parent = u2, lod = {}, customDiffuse = v4}.customDiffuse, u3)
          v4 = setMaterialDiffuseMapFromFile({node = failedReason, materialId = v4, parent = u2, lod = {}, customDiffuse = v4, customDiffuse = v4}.materialId, {node = failedReason, materialId = v4, parent = u2, lod = {}, customDiffuse = v4, customDiffuse = v4}.customDiffuse, true, true, false)
        end
        v4 = v4:getValue(i3dNode .. ".textures#normal")
        args.customNormal = v4
        if args.customNormal ~= nil then
          v4 = Utils.getFilename(args.customNormal, u3)
          args.customNormal = v4
          v4 = setMaterialNormalMapFromFile(args.materialId, args.customDiffuse, true, false, false)
          args.materialId = v4
        end
        v4 = v4:getValue(i3dNode .. ".textures#specular")
        args.customSpecular = v4
        if args.customSpecular ~= nil then
          v4 = Utils.getFilename(args.customSpecular, u3)
          args.customSpecular = v4
          v4 = setMaterialGlossMapFromFile(args.materialId, args.customSpecular, true, true, false)
          args.materialId = v4
        end
        setMaterial(failedReason, args.materialId, 0)
        v4:loadCustomShaderSettingsFromXML(args, u0, i3dNode)
        u2.effectClass.loadEffectMaterialFromXML(args, u0, i3dNode)
        table.insert(u2.effectMaterials, args)
        return
      end
      Logging.xmlError(u0, "Failed to load effect material from xml (%s)", i3dNode)
    end)
    self:loadCustomShaderSettingsFromXML(args.motionPathEffect, args.xmlFile, args.motionPathEffectKey .. ".customShaderDefaults")
    -- TODO: structure LOP_FORNPREP (pc 59, target 69)
    unlink(args.motionPathEffect.effectMeshes[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 68, target 60)
    -- TODO: structure LOP_FORNPREP (pc 74, target 84)
    unlink(args.motionPathEffect.effectMaterials[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 83, target 75)
    -- TODO: structure LOP_FORNPREP (pc 89, target 113)
    if self.effectsByType[args.motionPathEffect.effectTypes[1]] == nil then
      self.effectsByType[args.motionPathEffect.effectTypes[1]] = {}
    end
    table.insert(self.effectsByType[v12], v4)
    -- TODO: structure LOP_FORNLOOP (pc 112, target 90)
    table.insert(self.effects, v4)
    delete(i3dNode)
  end
  v5.xmlReferences = v5.xmlReferences - 1
  if v5.xmlReferences == 0 then
    self.xmlFiles[v5] = nil
    v5:delete()
  end
end
function MotionPathEffectManager.loadCustomShaderSettingsFromXML(v0, v1, v2, v3)
  local v4 = v2:getValue(v3 .. ".customShaderVariation#name")
  v1.customShaderVariation = v4
  v1.customShaderMaps = {}
  v2:iterate(v3 .. ".customShaderMap", function(v0, v1)
    local v3 = v3:getValue(v1 .. "#name")
    v3 = v3:getValue(v1 .. "#filename")
    v3 = Utils.getFilename({name = v3, filename = v3}.filename, u1.baseDirectory)
    if {name = v3, filename = v3, filename = v3}.name ~= nil and {name = v3, filename = v3, filename = v3}.filename ~= nil then
      v3 = createMaterialTextureFromFile({name = v3, filename = v3, filename = v3}.filename, true, false)
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L67
      table.insert(u2.customShaderMaps, {name = v3, filename = v3, filename = v3, texture = v3})
      return
    end
    Logging.xmlError(u0, "Failed to load custom shader map from '%s'", v1)
  end)
  v1.customShaderParameters = {}
  v2:iterate(v3 .. ".customShaderParameter", function(v0, v1)
    local v3 = v3:getValue(v1 .. "#name")
    v3 = v3:getValue(v1 .. "#value", "0 0 0 0", true)
    if {name = v3, value = v3}.name ~= nil and {name = v3, value = v3}.value ~= nil then
      table.insert(u1.customShaderParameters, {name = v3, value = v3})
      return
    end
    Logging.xmlError(u0, "Failed to load custom shader parameter from '%s'", v1)
  end)
end
function MotionPathEffectManager:unloadMapData()
  -- TODO: structure LOP_FORNPREP (pc 5, target 52)
  self:deleteCustomShaderMaps(self.effects[1])
  -- TODO: structure LOP_FORNPREP (pc 18, target 32)
  delete(self.effects[1].effectMeshes[1].node)
  self:deleteCustomShaderMaps(self.effects[1].effectMeshes[1])
  -- TODO: structure LOP_FORNLOOP (pc 31, target 19)
  for v7 = 1, #self.effects[1].effectMaterials do
    delete(v4.effectMaterials[v7].node)
    self:deleteCustomShaderMaps(v4.effectMaterials[v7])
    -- TODO: structure LOP_FORNLOOP (pc 50, target 38)
  end
  -- TODO: structure LOP_FORNPREP (pc 57, target 68)
  v5:releaseSharedI3DFile(self.sharedLoadRequestIds[1])
  -- TODO: structure LOP_FORNLOOP (pc 67, target 58)
  for v4, v5 in pairs(self.xmlFiles) do
    self.xmlFiles[v4] = nil
    v4:delete()
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function MotionPathEffectManager.deleteCustomShaderMaps(v0, v1)
  for v5, v6 in ipairs(v1.customShaderMaps) do
    if not (v6.texture ~= nil) then
      continue
    end
    delete(v6.texture)
    v6.texture = nil
  end
end
function MotionPathEffectManager:getSharedMotionPathEffect(motionPathEffectObject)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  local v6 = motionPathEffectObject:getIsSharedEffectMatching(self.effects[1], false)
  if v6 then
    return self.effects[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  -- TODO: structure LOP_FORNPREP (pc 22, target 34)
  v6 = motionPathEffectObject:getIsSharedEffectMatching(self.effects[1], true)
  if v6 then
    return self.effects[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 23)
end
function MotionPathEffectManager.getMotionPathEffectMesh(v0, v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  local v7 = v2:getIsEffectMeshMatching(v1.effectMeshes[1], false)
  if v7 then
    return v1.effectMeshes[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  -- TODO: structure LOP_FORNPREP (pc 22, target 34)
  v7 = v2:getIsEffectMeshMatching(v1.effectMeshes[1], true)
  if v7 then
    return v1.effectMeshes[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 23)
end
function MotionPathEffectManager.getMotionPathEffectMaterial(v0, v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  local v7 = v2:getIsEffectMaterialMatching(v1.effectMaterials[1], false)
  if v7 then
    return v1.effectMaterials[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  -- TODO: structure LOP_FORNPREP (pc 22, target 34)
  v7 = v2:getIsEffectMaterialMatching(v1.effectMaterials[1], true)
  if v7 then
    return v1.effectMaterials[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 23)
end
function MotionPathEffectManager:applyEffectConfiguration(sharedEffect, effectMesh, effectMaterial, clonedNode, textureEntityId, overwrittenSpeedScale)
  if sharedEffect ~= nil and clonedNode ~= nil then
    self:applyShaderSettingsParameters(clonedNode, sharedEffect)
    if effectMesh ~= nil then
      self:applyShaderSettingsParameters(clonedNode, effectMesh)
    end
    if effectMaterial ~= nil then
      self:applyShaderSettingsParameters(clonedNode, effectMaterial)
    end
    self:setEffectCustomMap(clonedNode, "shapeArray", textureEntityId)
    if effectMaterial ~= nil then
    end
    return overwrittenSpeedScale or v7
  end
  return overwrittenSpeedScale or 1
end
function MotionPathEffectManager:applyShaderSettingsParameters(node, target)
  -- TODO: structure LOP_FORNPREP (pc 5, target 18)
  self:setEffectCustomMap(node, target.customShaderMaps[1].name, target.customShaderMaps[1].texture)
  -- TODO: structure LOP_FORNLOOP (pc 17, target 6)
  if target.customShaderVariation ~= nil then
    self:setEffectCustomShaderVariation(node, target.customShaderVariation)
  end
  -- TODO: structure LOP_FORNPREP (pc 33, target 57)
  self:setEffectShaderParameter(node, target.customShaderParameters[1].name, target.customShaderParameters[1].value[1], target.customShaderParameters[1].value[2], target.customShaderParameters[1].value[3], target.customShaderParameters[1].value[4], false)
  -- TODO: structure LOP_FORNLOOP (pc 56, target 34)
end
function MotionPathEffectManager.setEffectShaderParameter(v0, v1, v2, v3, v4, v5, v6, v7)
  local v8 = getHasClassId(v1, ClassIds.SHAPE)
  if v8 then
    local v8, v9, v10, v11 = getShaderParameter(v1, v2)
    setShaderParameter(v1, v2, v3 or v8, v4 or v9, v5 or v10, v6 or v11, v7)
  end
  v8 = getNumOfChildren(v1)
  if 0 < v8 then
    -- TODO: structure LOP_FORNPREP (pc 32, target 61)
    local v12 = getChildAt(v1, 1 - 1)
    local v13 = getHasClassId(v12, ClassIds.SHAPE)
    if v13 then
      local v13, v14, v15, v16 = getShaderParameter(v12, v2)
      setShaderParameter(v12, v2, v3 or v13, v4 or v14, v5 or v15, v6 or v16, v7)
    end
    -- TODO: structure LOP_FORNLOOP (pc 60, target 33)
  end
end
function MotionPathEffectManager.getEffectShaderParameter(v0, v1, v2)
  local v3 = getHasClassId(v1, ClassIds.SHAPE)
  if v3 then
    v3 = getShaderParameter(v1, v2)
    return v3
  end
  v3 = getNumOfChildren(v1)
  if 0 < v3 then
    -- TODO: structure LOP_FORNPREP (pc 23, target 43)
    local v7 = getChildAt(v1, 1 - 1)
    local v8 = getHasClassId(v7, ClassIds.SHAPE)
    if v8 then
      v8 = getShaderParameter(v7, v2)
      return v8
    end
    -- TODO: structure LOP_FORNLOOP (pc 42, target 24)
  end
  return 0, 0, 0, 0
end
function MotionPathEffectManager.setEffectCustomShaderVariation(v0, v1, v2)
  local v3 = getHasClassId(v1, ClassIds.SHAPE)
  if v3 then
    v3 = getMaterial(v1, 0)
    local v4 = setMaterialCustomShaderVariation(v3, v2, false)
    if v4 ~= v3 then
      setMaterial(v1, v4, 0)
    end
  end
  v3 = getNumOfChildren(v1)
  if 0 < v3 then
    -- TODO: structure LOP_FORNPREP (pc 36, target 69)
    local v7 = getChildAt(v1, 1 - 1)
    local v8 = getHasClassId(v7, ClassIds.SHAPE)
    if v8 then
      v8 = getMaterial(v7, 0)
      local v9 = setMaterialCustomShaderVariation(v8, v2, false)
      if v9 ~= v8 then
        setMaterial(v7, v9, 0)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 68, target 37)
  end
end
function MotionPathEffectManager:setEffectCustomMapOnNode(node, name, textureEntityId)
  local material = getMaterial(node, 0)
  if textureEntityId ~= nil then
    local v5 = setMaterialCustomMap(material, name, textureEntityId, false)
    if v5 ~= material then
      -- TODO: structure LOP_FORNPREP (pc 23, target 50)
      local v9, v10, v11, v12 = getShaderParameter(node, MotionPathEffectManager.MOTION_PATH_SHADER_PARAMS[1])
      self.shaderParamCopyBuffer[1][1] = v9
      self.shaderParamCopyBuffer[1][2] = v10
      self.shaderParamCopyBuffer[1][3] = v11
      self.shaderParamCopyBuffer[1][4] = v12
      -- TODO: structure LOP_FORNLOOP (pc 49, target 24)
      setMaterial(node, v5, 0)
      -- TODO: structure LOP_FORNPREP (pc 63, target 94)
      setShaderParameter(node, MotionPathEffectManager.MOTION_PATH_SHADER_PARAMS[1], self.shaderParamCopyBuffer[1][1], self.shaderParamCopyBuffer[1][2], self.shaderParamCopyBuffer[1][3], self.shaderParamCopyBuffer[1][4])
      -- TODO: structure LOP_FORNLOOP (pc 93, target 64)
    end
  end
end
function MotionPathEffectManager:setEffectCustomMap(node, name, textureEntityId)
  local v4 = getHasClassId(node, ClassIds.SHAPE)
  if v4 then
    self:setEffectCustomMapOnNode(node, name, textureEntityId)
  end
  v4 = getNumOfChildren(node)
  if 0 < v4 then
    -- TODO: structure LOP_FORNPREP (pc 23, target 43)
    local v8 = getChildAt(node, 1 - 1)
    local v9 = getHasClassId(v8, ClassIds.SHAPE)
    if v9 then
      self:setEffectCustomMapOnNode(v8, name, textureEntityId)
    end
    -- TODO: structure LOP_FORNLOOP (pc 42, target 24)
  end
end
function MotionPathEffectManager.setEffectMaterial(v0, v1, v2)
  local v3 = getHasClassId(v1, ClassIds.SHAPE)
  if v3 then
    setMaterial(v1, v2.materialId, 0)
  end
  v3 = getNumOfChildren(v1)
  if 0 < v3 then
    -- TODO: structure LOP_FORNPREP (pc 24, target 57)
    local v7 = getChildAt(v1, 1 - 1)
    local v8 = getHasClassId(v7, ClassIds.SHAPE)
    if v8 then
      if 1 < 1 and v2.lod[1] ~= nil then
      end
      setMaterial(v7, v8, 0)
    end
    -- TODO: structure LOP_FORNLOOP (pc 56, target 25)
  end
end
function MotionPathEffectManager.createMotionPathEffectXMLSchema()
  if MotionPathEffectManager.xmlSchema == nil then
    local schema = XMLSchema.new("mapMotionPathEffects")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. "#effectClass", "Effect class name")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. "#effectType", "Effect type name (can be multiple)")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. "#filename", "Path to effects i3d file")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#rootNode", "(Only for automatic mesh generation) Mesh root node in maya file which has sub shapes")
    schema:register(XMLValueType.VECTOR_ROT, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#minRot", "(Only for automatic mesh generation) Min. random rotation")
    schema:register(XMLValueType.VECTOR_ROT, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#maxRot", "(Only for automatic mesh generation) Max. random rotation")
    schema:register(XMLValueType.VECTOR_SCALE, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#minScale", "(Only for automatic mesh generation) Min. random scale")
    schema:register(XMLValueType.VECTOR_SCALE, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#maxScale", "(Only for automatic mesh generation) Max. random scale")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#useFoliage", "(Only for automatic mesh generation) Name of foliage")
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#useFoliageStage", "(Only for automatic mesh generation) Foliage growth state")
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectGeneration#useFoliageLOD", "(Only for automatic mesh generation) LOD to use")
    MotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    CutterMotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    CultivatorMotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    PlowMotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    WindrowerMotionPathEffect.registerEffectDefinitionXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".typeDefinition")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#node", "Index path in effect i3d")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#sourceNode", "(Only for automatic mesh generation) Index path to source object in maya file")
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#rowLength", "Number of meshes on X axis (on effect texture)", 30)
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#numRows", "Number of meshes on Y axis (on effect texture)", 12)
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#skipPositions", "Number of skipped meshes on X axis", 0)
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#numVariations", "Number of sub random variations", 1)
    schema:register(XMLValueType.VECTOR_SCALE, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#boundingBox", "(Only for automatic mesh generation) Size of bounding box")
    schema:register(XMLValueType.VECTOR_TRANS, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)#boundingBoxCenter", "(Only for automatic mesh generation) Center of bounding box")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?).lod(?)#sourceNode", "(Only for automatic mesh generation) Custom node for LOD")
    schema:register(XMLValueType.FLOAT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?).lod(?)#distance", "(Only for automatic mesh generation) Distance of LOD")
    schema:register(XMLValueType.INT, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?).lod(?)#skipPositions", "(Only for automatic mesh generation) Custom skip positions")
    MotionPathEffectManager.registerCustomShaderSettingXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    MotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    CutterMotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    CultivatorMotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    PlowMotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    WindrowerMotionPathEffect.registerEffectMeshXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMeshes.effectMesh(?)")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials#rootNode", "(Only for automatic mesh generation) Node which will be copied over the effect i3d file (position index in i3d is then '0|1')")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)#node", "Material node")
    schema:register(XMLValueType.NODE_INDEX, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?).lod(?)#node", "LOD node")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?).textures#diffuse", "Path to custom diffuse map to apply")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?).textures#normal", "Path to custom normal map to apply")
    schema:register(XMLValueType.STRING, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?).textures#specular", "Path to custom specular map to apply")
    MotionPathEffectManager.registerCustomShaderSettingXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    MotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    CutterMotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    CultivatorMotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    PlowMotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    WindrowerMotionPathEffect.registerEffectMaterialXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".effectMaterials.effectMaterial(?)")
    MotionPathEffectManager.registerCustomShaderSettingXMLPaths(schema, "motionPathEffects.motionPathEffect(?)" .. ".customShaderDefaults")
    MotionPathEffectManager.xmlSchema = schema
  end
end
function MotionPathEffectManager:registerCustomShaderSettingXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".customShaderVariation#name", "Shader variation to apply")
  self:register(XMLValueType.STRING, v1 .. ".customShaderParameter(?)#name", "Name of shader parameter")
  self:register(XMLValueType.VECTOR_4, v1 .. ".customShaderParameter(?)#value", "Value of shader parameter")
  self:register(XMLValueType.STRING, v1 .. ".customShaderMap(?)#name", "Name of custom shader map")
  self:register(XMLValueType.STRING, v1 .. ".customShaderMap(?)#filename", "Path to texture file")
end
local v1 = MotionPathEffectManager.new()
g_motionPathEffectManager = v1
