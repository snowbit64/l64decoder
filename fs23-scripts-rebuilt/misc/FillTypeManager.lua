-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillType = nil
FillTypeCategory = nil
FillTypeManager = {FILLTYPE_START_TOTAL_AMOUNT = 50000, SEND_NUM_BITS = 8, MASS_SCALE = 1}
FillTypeManager_mt:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("fillTypes")
  FillTypeManager.xmlSchema = v1
end)
FillTypeManager_mt:addInitSchemaFunction(function()
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. "#name", "Name of fill type")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. "#title", "Display name of fill type")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. "#achievementName", "Name of linked archivement")
  FillTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fillTypes.fillType(?)" .. "#showOnPriceTable", "Show fill type in pricing menu")
  FillTypeManager.xmlSchema:register(XMLValueType.VECTOR_3, "map.fillTypes.fillType(?)" .. "#fillPlaneColors", "Color of fill plane used in animal husbandry", "1 1 1")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. "#unitShort", "Unit short localization key")
  FillTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fillTypes.fillType(?)" .. ".physics#massPerLiter", "Mass per liter/unit in kilograms")
  FillTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fillTypes.fillType(?)" .. ".physics#maxPhysicalSurfaceAngle", "Max physical surface angle used on fill volumes")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".image#hud", "Path to hud image")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".pallet#filename", "Pallet xml filename which is spawned on unloading")
  FillTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fillTypes.fillType(?)" .. ".economy#pricePerLiter", "Price per liter")
  FillTypeManager.xmlSchema:register(XMLValueType.INT, "map.fillTypes.fillType(?)" .. ".economy.factors.factor(?)#period", "Period index")
  FillTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fillTypes.fillType(?)" .. ".economy.factors.factor(?)#value", "Price factor to apply in this period")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".textures#diffuse", "Path to fill plane diffuse map")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".textures#normal", "Path to fill plane normal map")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".textures#specular", "Path to fill plane specular map")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".textures#distance", "Path to fill plane distance diffuse map")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypes.fillType(?)" .. ".effects#prioritizedEffectType", "Defines which effect type is priorized in e.g. unloading effects", "ShaderPlaneEffect")
  FillTypeManager.xmlSchema:register(XMLValueType.VECTOR_4, "map.fillTypes.fillType(?)" .. ".effects#fillSmokeColor", "Color of smoke effects")
  FillTypeManager.xmlSchema:register(XMLValueType.VECTOR_4, "map.fillTypes.fillType(?)" .. ".effects#fruitSmokeColor", "Color of fruit smoke effects")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeCategories.fillTypeCategory(?)" .. "#name", "Name of category")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeCategories.fillTypeCategory(?)", "list of fillTypes, space separated")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeConverters.fillTypeConverter(?)" .. "#name", "Converter name")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeConverters.fillTypeConverter(?)" .. ".converter(?)#from", "From fill type")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeConverters.fillTypeConverter(?)" .. ".converter(?)#to", "To fill type")
  FillTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fillTypeConverters.fillTypeConverter(?)" .. ".converter(?)#factor", "Multiplied by factor")
  SoundManager.registerSampleXMLPaths(FillTypeManager.xmlSchema, "map.fillTypeSounds.fillTypeSound(?)", "sound")
  FillTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fillTypeSounds.fillTypeSound(?)" .. "#fillTypes", "list of fillTypes, space separated")
  FillTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fillTypeSounds.fillTypeSound(?)" .. "#isDefault", "Is default sound", false)
end)
local FillTypeManager_mt = Class(FillTypeManager, AbstractManager)
function FillTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function FillTypeManager:initDataStructures()
  self.fillTypes = {}
  self.nameToFillType = {}
  self.indexToFillType = {}
  self.nameToIndex = {}
  self.indexToName = {}
  self.indexToTitle = {}
  self.fillTypeConverters = {}
  self.converterNameToIndex = {}
  self.nameToConverter = {}
  self.categories = {}
  self.nameToCategoryIndex = {}
  self.categoryIndexToFillTypes = {}
  self.categoryNameToFillTypes = {}
  self.fillTypeIndexToCategories = {}
  self.fillTypeSamples = {}
  self.fillTypeToSample = {}
  self.fillTypeTextureDiffuseMap = nil
  self.fillTypeTextureNormalMap = nil
  self.fillTypeTextureSpecularMap = nil
  self.modsToLoad = {}
  FillType = self.nameToIndex
  FillTypeCategory = self.categories
end
function FillTypeManager:loadDefaultTypes()
  local xmlFile = loadXMLFile("fillTypes", "data/maps/maps_fillTypes.xml")
  self:loadFillTypes(xmlFile, nil, true, nil)
  delete(xmlFile)
end
function FillTypeManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadDefaultTypes()
  local v4 = XMLUtil.loadDataFromMapXML(xmlFile, "fillTypes", baseDirectory, self, self.loadFillTypes, baseDirectory, false, missionInfo.customEnvironment)
  if v4 then
    for v7, v8 in ipairs(self.modsToLoad) do
      local v9 = XMLFile.load("fillTypes", v8[1], FillTypeManager.xmlSchema)
      v10:loadFillTypes(v9, v8[2], false, v8[3])
      v9:delete()
    end
    self:constructFillTypeTextureArrays()
    return true
  end
  return false
end
function FillTypeManager:addModWithFillTypes(xmlFilename, baseDirectory, customEnvironment)
  table.insert(self.modsToLoad, {xmlFilename, baseDirectory, customEnvironment})
end
function FillTypeManager:unloadMapData()
  for v4, v5 in pairs(self.fillTypeSamples) do
    v6:deleteSample(v5.sample)
  end
  self:deleteFillTypeTextureArrays()
  self:deleteDensityMapHeightTextureArrays()
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function FillTypeManager:loadFillTypes(xmlFile, baseDirectory, isBaseType, customEnv)
  local v5 = type(xmlFile)
  if v5 ~= "table" then
    v5 = XMLFile.wrap(xmlFile, FillTypeManager.xmlSchema)
  end
  if isBaseType then
    self:addFillType("UNKNOWN", "Unknown", false, 0, 0, 0, "", baseDirectory, nil, nil, nil, nil, {}, nil, nil, nil, nil, nil, nil, nil, nil, isBaseType)
  end
  xmlFile:iterate("map.fillTypes.fillType", function(self, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#name")
    local isBaseType = isBaseType:getValue(xmlFile .. "#title")
    local customEnv = customEnv:getValue(xmlFile .. "#achievementName")
    local v5 = v5:getValue(xmlFile .. "#showOnPriceTable")
    local v6 = v6:getValue(xmlFile .. "#fillPlaneColors", "1.0 1.0 1.0", true)
    local v7 = v7:getValue(xmlFile .. "#unitShort", "")
    local v8 = v8:getValue(xmlFile .. ".physics#massPerLiter")
    if v8 then
    end
    local v10 = v10:getValue(xmlFile .. ".physics#maxPhysicalSurfaceAngle")
    local v11 = v11:getValue(xmlFile .. ".image#hud")
    local v12 = v12:getValue(xmlFile .. ".pallet#filename")
    local v13 = v13:getValue(xmlFile .. ".economy#pricePerLiter")
    v15:iterate(xmlFile .. ".economy.factors.factor", function(self, xmlFile)
      local baseDirectory = baseDirectory:getValue(xmlFile .. "#period")
      local isBaseType = isBaseType:getValue(xmlFile .. "#value")
      if baseDirectory ~= nil and isBaseType ~= nil then
        u1[baseDirectory] = isBaseType
      end
    end)
    local v15 = v15:getValue(xmlFile .. ".textures#diffuse")
    local v16 = v16:getValue(xmlFile .. ".textures#normal")
    local v17 = v17:getValue(xmlFile .. ".textures#specular")
    local v18 = v18:getValue(xmlFile .. ".textures#distance")
    local v20 = v20:getValue(xmlFile .. ".effects#prioritizedEffectType")
    v20 = v20:getValue(xmlFile .. ".effects#fillSmokeColor", nil, true)
    local v21 = v21:getValue(xmlFile .. ".effects#fruitSmokeColor", nil, true)
    v22:addFillType(baseDirectory, isBaseType, v5, v13, v9, v10, v11, u2, u3, v6, v7, v12, {}, v15, v16, v17, v18, v20 or "ShaderPlaneEffect", v20, v21, customEnv, u4 or false)
  end)
  xmlFile:iterate("map.fillTypeCategories.fillTypeCategory", function(self, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#name")
    local customEnv = customEnv:getValue(xmlFile)
    customEnv = customEnv:addFillTypeCategory(baseDirectory, u2)
    if customEnv ~= nil then
      local v5 = (customEnv or ""):split(" ")
      for v9, v10 in ipairs(v5) do
        local v11 = v11:getFillTypeByName(v10)
        if v11 ~= nil then
          local v12 = v12:addFillTypeToCategory(v11.index, customEnv)
          if not not v12 then
            continue
          end
          local v19 = tostring(v10)
          v19 = tostring(baseDirectory)
          Logging.warning("Could not add fillType '" .. v19 .. "' to fillTypeCategory '" .. v19 .. "'!")
        else
          v19 = tostring(v10)
          v19 = tostring(baseDirectory)
          Logging.warning("Unknown FillType '" .. v19 .. "' in fillTypeCategory '" .. v19 .. "'!")
        end
      end
    end
  end)
  xmlFile:iterate("map.fillTypeConverters.fillTypeConverter", function(self, xmlFile)
    local baseDirectory = baseDirectory:getValue(xmlFile .. "#name")
    local isBaseType = isBaseType:addFillTypeConverter(baseDirectory, u2)
    if isBaseType ~= nil then
      customEnv:iterate(xmlFile .. ".converter", function(self, xmlFile)
        local baseDirectory = baseDirectory:getValue(xmlFile .. "#from")
        local isBaseType = isBaseType:getValue(xmlFile .. "#to")
        local customEnv = customEnv:getValue(xmlFile .. "#factor")
        local v5 = v5:getFillTypeByName(baseDirectory)
        local v6 = v6:getFillTypeByName(isBaseType)
        if v5 ~= nil and v6 ~= nil and customEnv ~= nil then
          v7:addFillTypeConversion(u2, v5.index, v6.index, customEnv)
        end
      end)
    end
  end)
  xmlFile:iterate("map.fillTypeSounds.fillTypeSound", function(self, xmlFile)
    local v8 = getRootNode()
    local baseDirectory = baseDirectory:loadSampleFromXML(u0, xmlFile, "sound", u1, v8, 0, AudioGroup.VEHICLE, nil, nil)
    if baseDirectory ~= nil then
      local v5 = v5:getValue(xmlFile .. "#fillTypes")
      if (v5 or "") ~= nil then
        v5 = (v5 or ""):split(" ")
        for v9, v10 in ipairs(v5) do
          local v11 = v11:getFillTypeIndexByName(v10)
          if v11 ~= nil then
            table.insert(isBaseType.fillTypes, v11)
            u2.fillTypeToSample[v11] = baseDirectory
          else
            Logging.warning("Unable to load fill type '%s' for fillTypeSound '%s'", v10, xmlFile)
          end
        end
      end
      v5 = v5:getValue(xmlFile .. "#isDefault")
      if v5 then
        for v8, v9 in ipairs(u2.fillTypes) do
          if not (u2.fillTypeToSample[v8] == nil) then
            continue
          end
          u2.fillTypeToSample[v8] = baseDirectory
        end
      end
      table.insert(u2.fillTypeSamples, isBaseType)
    end
  end)
  return true
end
function FillTypeManager:addFillType(name, title, showOnPriceTable, pricePerLiter, massPerLiter, maxPhysicalSurfaceAngle, hudOverlayFilename, baseDirectory, customEnv, fillPlaneColors, unitShort, palletFilename, economicCurve, diffuseMapFilename, normalMapFilename, specularMapFilename, distanceFilename, prioritizedEffectType, fillSmokeColor, fruitSmokeColor, achievementName, isBaseType)
  local v23 = ClassUtil.getIsValidIndexName(name)
  if not v23 then
    local v25 = tostring(name)
    Logging.warning(...)
    return nil
  end
  v23 = name:upper()
  if isBaseType and self.nameToFillType[v23] ~= nil then
    Logging.warning("FillType '%s' already exists. Ignoring fillType!", v23)
    return nil
  end
  if self.nameToFillType[name] == nil then
    if 2 ^ FillTypeManager.SEND_NUM_BITS - 1 <= #self.fillTypes then
      Logging.error("FillTypeManager.addFillType too many fill types. Only %d fill types are supported", 2 ^ FillTypeManager.SEND_NUM_BITS - 1)
      return
    end
    v25 = v25:convertText(title, customEnv)
    if unitShort ~= nil then
      v25 = v25:convertText(unitShort, customEnv)
    end
    v23.unitShort = unitShort
    self.nameToFillType[name] = v23
    self.nameToIndex[name] = v23.index
    self.indexToName[v23.index] = name
    self.indexToTitle[v23.index] = v23.title
    self.indexToFillType[v23.index] = v23
    table.insert(self.fillTypes, v23)
  end
  if not achievementName then
  end
  v23.achievementName = v24
  local v26 = Utils.getNoNil(v23.showOnPriceTable, false)
  local v24 = Utils.getNoNil(...)
  v23.showOnPriceTable = v24
  v26 = Utils.getNoNil(v23.pricePerLiter, 0)
  v24 = Utils.getNoNil(...)
  v23.pricePerLiter = v24
  local v27 = Utils.getNoNil(v23.massPerLiter, 0.0001)
  v25 = Utils.getNoNil(...)
  v23.massPerLiter = v25 * FillTypeManager.MASS_SCALE
  v26 = Utils.getNoNil(v23.maxPhysicalSurfaceAngle, 0.5235987755982988)
  v24 = Utils.getNoNilRad(...)
  v23.maxPhysicalSurfaceAngle = v24
  if hudOverlayFilename then
    v24 = Utils.getFilename(hudOverlayFilename, baseDirectory)
    -- if v24 then goto L187 end
  end
  v23.hudOverlayFilename = v23.hudOverlayFilename
  if diffuseMapFilename ~= nil then
    v24 = Utils.getFilename(diffuseMapFilename, baseDirectory)
    if not v24 then
    end
    v23.diffuseMapFilename = v24
  end
  if normalMapFilename ~= nil then
    v24 = Utils.getFilename(normalMapFilename, baseDirectory)
    if not v24 then
    end
    v23.normalMapFilename = v24
  end
  if specularMapFilename ~= nil then
    v24 = Utils.getFilename(specularMapFilename, baseDirectory)
    if not v24 then
    end
    v23.specularMapFilename = v24
  end
  if distanceFilename ~= nil then
    v24 = Utils.getFilename(distanceFilename, baseDirectory)
    if not v24 then
    end
    v23.distanceFilename = v24
  end
  if v23.index ~= FillType.UNKNOWN then
    if v23.hudOverlayFilename ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R24 aux=0x80000037 -> L258
    end
    Logging.warning("FillType '%s' has no valid image assigned!", name)
  end
  if palletFilename ~= nil then
    v24 = Utils.getFilename(palletFilename, baseDirectory)
    if not v24 then
    end
    v24 = fileExists(v24)
    if v24 then
      v23.palletFilename = v24
    else
      Logging.error("Pallet xml '%s' in fillType '%s' does not exist", v24, v23.name)
    end
  end
  v23.previousHourPrice = v23.pricePerLiter
  v23.startPricePerLiter = v23.pricePerLiter
  v23.totalAmount = 0
  v23.fillPlaneColors = {}
  if fillPlaneColors ~= nil then
    if not fillPlaneColors[1] then
    end
    v24[1] = v25
    if not fillPlaneColors[2] then
    end
    v24[2] = v25
    if not fillPlaneColors[3] then
    end
    v24[3] = v25
  else
    v23.fillPlaneColors[1] = v23.fillPlaneColors[1] or 1
    v23.fillPlaneColors[2] = v23.fillPlaneColors[2] or 1
    v23.fillPlaneColors[3] = v23.fillPlaneColors[3] or 1
  end
  if not v23.economy then
  end
  v23.economy = v24
  -- TODO: structure LOP_FORNPREP (pc 366, target 395)
  if not economicCurve[Environment.PERIOD.EARLY_SPRING] and not v23.economy.factors[Environment.PERIOD.EARLY_SPRING] then
  end
  v27[v26] = v28
  v23.economy.history[v26] = v23.economy.factors[v26] * v23.pricePerLiter
  -- TODO: structure LOP_FORNLOOP (pc 394, target 367)
  if not prioritizedEffectType then
  end
  v23.prioritizedEffectType = v24
  if fillSmokeColor ~= nil and #fillSmokeColor == 4 then
    v23.fillSmokeColor = fillSmokeColor
  end
  if fruitSmokeColor ~= nil and #fruitSmokeColor == 4 then
    v23.fruitSmokeColor = fruitSmokeColor
  end
  return v23
end
function FillTypeManager:constructFillTypeTextureArrays()
  self:deleteFillTypeTextureArrays()
  local v1 = TextureArrayConstructor.new()
  local v2 = TextureArrayConstructor.new()
  local v3 = TextureArrayConstructor.new()
  self.fillTypeTextureArraySize = 0
  -- TODO: structure LOP_FORNPREP (pc 20, target 61)
  if self.fillTypes[1].diffuseMapFilename ~= nil and self.fillTypes[1].normalMapFilename ~= nil and self.fillTypes[1].specularMapFilename ~= nil then
    v1:addLayerFilename(self.fillTypes[1].diffuseMapFilename)
    v2:addLayerFilename(self.fillTypes[1].normalMapFilename)
    v3:addLayerFilename(self.fillTypes[1].specularMapFilename)
    self.fillTypeTextureArraySize = self.fillTypeTextureArraySize + 1
    self.fillTypes[1].textureArrayIndex = self.fillTypeTextureArraySize
  end
  -- TODO: structure LOP_FORNLOOP (pc 60, target 21)
  local v4 = v1:finalize(true, true, true)
  self.fillTypeTextureDiffuseMap = v4
  v4 = v2:finalize(true, false, true)
  self.fillTypeTextureNormalMap = v4
  v4 = v3:finalize(true, false, true)
  self.fillTypeTextureSpecularMap = v4
end
function FillTypeManager:getFillTypeTextureArrays()
  return self.fillTypeTextureDiffuseMap, self.fillTypeTextureNormalMap, self.fillTypeTextureSpecularMap, self.fillTypeTextureArraySize
end
function FillTypeManager:getFillTypeTextureArraySize()
  return self.fillTypeTextureArraySize
end
function FillTypeManager:assignFillTypeTextureArrays(nodeId, diffuse, normal, specular)
  local material = getMaterial(nodeId, 0)
  if self.fillTypeTextureDiffuseMap ~= nil and self.fillTypeTextureDiffuseMap ~= 0 and diffuse ~= false then
    local v6 = setMaterialDiffuseMap(material, self.fillTypeTextureDiffuseMap, false)
  end
  if self.fillTypeTextureNormalMap ~= nil and self.fillTypeTextureNormalMap ~= 0 and normal ~= false then
    v6 = setMaterialNormalMap(material, self.fillTypeTextureNormalMap, false)
  end
  if self.fillTypeTextureSpecularMap ~= nil and self.fillTypeTextureSpecularMap ~= 0 and specular ~= false then
    v6 = setMaterialGlossMap(material, self.fillTypeTextureSpecularMap, false)
  end
  setMaterial(nodeId, material, 0)
end
function FillTypeManager:constructDensityMapHeightTextureArrays(heightTypes)
  self:deleteDensityMapHeightTextureArrays()
  local v2 = TextureArrayConstructor.new()
  local v3 = TextureArrayConstructor.new()
  local v4 = TextureArrayConstructor.new()
  -- TODO: structure LOP_FORNPREP (pc 15, target 61)
  if self.fillTypes[heightTypes[1].fillTypeIndex] ~= nil then
    if self.fillTypes[heightTypes[1].fillTypeIndex].diffuseMapFilename ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L52
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L52
      v2:addLayerFilename(self.fillTypes[heightTypes[1].fillTypeIndex].diffuseMapFilename)
      v3:addLayerFilename(self.fillTypes[heightTypes[1].fillTypeIndex].normalMapFilename)
      v4:addLayerFilename(self.fillTypes[heightTypes[1].fillTypeIndex].specularMapFilename)
    else
      Logging.error("Failed to create density height map texture array. Fill type '%s' does not have textures defined!", heightTypes[1].fillTypeName)
      return false
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 60, target 16)
  local v5 = v2:finalize(true, true, true)
  self.densityMapHeightDiffuseMap = v5
  v5 = v3:finalize(true, false, true)
  self.densityMapHeightNormalMap = v5
  v5 = v4:finalize(true, false, true)
  self.densityMapHeightSpecularMap = v5
end
function FillTypeManager:deleteDensityMapHeightTextureArrays()
  if self.densityMapHeightDiffuseMap ~= nil then
    delete(self.densityMapHeightDiffuseMap)
    self.densityMapHeightDiffuseMap = nil
  end
  if self.densityMapHeightNormalMap ~= nil then
    delete(self.densityMapHeightNormalMap)
    self.densityMapHeightNormalMap = nil
  end
  if self.densityMapHeightSpecularMap ~= nil then
    delete(self.densityMapHeightSpecularMap)
    self.densityMapHeightSpecularMap = nil
  end
end
function FillTypeManager:assignDensityMapHeightTextureArrays(nodeId)
  if self.densityMapHeightDiffuseMap ~= nil and self.densityMapHeightNormalMap ~= nil and self.densityMapHeightSpecularMap ~= nil then
    local material = getMaterial(nodeId, 0)
    local v3 = setMaterialDiffuseMap(material, self.densityMapHeightDiffuseMap, false)
    v3 = setMaterialNormalMap(v3, self.densityMapHeightNormalMap, false)
    v3 = setMaterialGlossMap(v3, self.densityMapHeightSpecularMap, false)
    setMaterial(nodeId, v3, 0)
  end
end
function FillTypeManager:deleteFillTypeTextureArrays()
  if self.fillTypeTextureDiffuseMap ~= nil then
    delete(self.fillTypeTextureDiffuseMap)
    self.fillTypeTextureDiffuseMap = nil
  end
  if self.fillTypeTextureNormalMap ~= nil then
    delete(self.fillTypeTextureNormalMap)
    self.fillTypeTextureNormalMap = nil
  end
  if self.fillTypeTextureSpecularMap ~= nil then
    delete(self.fillTypeTextureSpecularMap)
    self.fillTypeTextureSpecularMap = nil
  end
end
function FillTypeManager:constructFillTypeDistanceTextureArray(terrainDetailHeightId, typeFirstChannel, typeNumChannels, heightTypes)
  local distanceConstr = TerrainDetailDistanceConstructor.new(typeFirstChannel, typeNumChannels)
  -- TODO: structure LOP_FORNPREP (pc 8, target 46)
  if self.fillTypes[heightTypes[1].fillTypeIndex] ~= nil then
    if self.fillTypes[heightTypes[1].fillTypeIndex].distanceFilename ~= nil then
      local v11 = v11:len()
      -- if 0 >= v11 then goto L37 end
      distanceConstr:addTexture(1 - 1, self.fillTypes[heightTypes[1].fillTypeIndex].distanceFilename, 3)
    else
      Logging.error("Failed to create density height map distance texture array. Fill type '%s' does not have distance texture defined!", heightTypes[1].fillTypeName)
      return false
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 45, target 9)
  distanceConstr:finalize(terrainDetailHeightId)
end
function FillTypeManager:getTextureArrayIndexByFillTypeIndex(index)
  if self.fillTypes[index] then
  end
  return v3
end
function FillTypeManager:getPrioritizedEffectTypeByFillTypeIndex(index)
  if self.fillTypes[index] then
  end
  return v3
end
function FillTypeManager:getSmokeColorByFillTypeIndex(index, fruitColor)
  if self.fillTypes[index] ~= nil then
    if not fruitColor then
      return self.fillTypes[index].fillSmokeColor
    end
    if not v3.fruitSmokeColor then
    end
    return v4
  end
  return nil
end
function FillTypeManager:getFillTypeByIndex(index)
  return self.fillTypes[index]
end
function FillTypeManager:getFillTypeNameByIndex(index)
  return self.indexToName[index]
end
function FillTypeManager:getFillTypeTitleByIndex(index)
  return self.indexToTitle[index]
end
function FillTypeManager:getFillTypeNamesByIndices(indices)
  for v6 in pairs(indices) do
    table.insert(v2, self.indexToName[v6])
  end
  return v2
end
function FillTypeManager:getFillTypeIndexByName(name)
  if name then
    local v4 = name:upper()
  end
  return v3[v4]
end
function FillTypeManager:getFillTypeByName(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if v2 then
    local v4 = name:upper()
    return self.nameToFillType[v4]
  end
  return nil
end
function FillTypeManager:getFillTypes()
  return self.fillTypes
end
function FillTypeManager:addFillTypeCategory(name, isBaseType)
  local v3 = ClassUtil.getIsValidIndexName(name)
  if not v3 then
    local v8 = tostring(name)
    print("Warning: '" .. v8 .. "' is not a valid name for a fillTypeCategory. Ignoring fillTypeCategory!")
    return nil
  end
  v3 = name:upper()
  if isBaseType and self.nameToCategoryIndex[v3] ~= nil then
    v8 = tostring(v3)
    print("Warning: FillTypeCategory '" .. v8 .. "' already exists. Ignoring fillTypeCategory!")
    return nil
  end
  if self.nameToCategoryIndex[name] == nil then
    table.insert(self.categories, name)
    self.categoryNameToFillTypes[name] = {}
    self.categoryIndexToFillTypes[#self.categories + 1] = {}
    self.nameToCategoryIndex[name] = #self.categories + 1
  end
  return v3
end
function FillTypeManager:addFillTypeToCategory(fillTypeIndex, categoryIndex)
  if categoryIndex ~= nil and fillTypeIndex ~= nil and self.categoryIndexToFillTypes[categoryIndex] ~= nil then
    self.categoryIndexToFillTypes[categoryIndex][fillTypeIndex] = true
    if self.fillTypeIndexToCategories[fillTypeIndex] == nil then
      self.fillTypeIndexToCategories[fillTypeIndex] = {}
    end
    self.fillTypeIndexToCategories[fillTypeIndex][categoryIndex] = true
    return true
  end
  return false
end
function FillTypeManager:getFillTypesByCategoryNames(names, warning, fillTypes)
  if not fillTypes then
  end
  local v5 = string.split(names, " ")
  for v9, v10 in pairs(v5) do
    local v11 = v10:upper()
    if self.categoryNameToFillTypes[v11] ~= nil then
      for v15, v16 in pairs(self.categoryNameToFillTypes[v11]) do
        if not (v4[v15] == nil) then
          continue
        end
        table.insert(fillTypes, v15)
        v4[v15] = true
      end
    else
      if not (warning ~= nil) then
        continue
      end
      v13 = string.format(warning, v11)
      print(...)
    end
  end
  return fillTypes
end
function FillTypeManager:getIsFillTypeInCategory(fillTypeIndex, categoryName)
  if self.nameToCategoryIndex[categoryName] ~= nil and self.fillTypeIndexToCategories[fillTypeIndex] then
    if self.fillTypeIndexToCategories[fillTypeIndex][self.nameToCategoryIndex[categoryName]] == nil then
    end
    return true
  end
  return false
end
function FillTypeManager:getFillTypesByNames(names, warning, fillTypes)
  if not fillTypes then
  end
  local fillTypeNames = string.split(names, " ")
  for v9, v10 in pairs(fillTypeNames) do
    local v11 = v10:upper()
    if self.nameToIndex[v11] ~= nil then
      if not (self.nameToIndex[v11] ~= FillType.UNKNOWN) then
        continue
      end
      if not (v4[self.nameToIndex[v11]] == nil) then
        continue
      end
      table.insert(fillTypes, self.nameToIndex[v11])
      v4[self.nameToIndex[v11]] = true
    else
      if not (warning ~= nil) then
        continue
      end
      local v13 = string.format(warning, v11)
      print(...)
    end
  end
  return fillTypes
end
function FillTypeManager.getFillTypesFromXML(v0, v1, v2, v3, v4)
  local v6 = v1:getValue(v2)
  local v7 = v1:getValue(v3)
  if v6 ~= nil and v7 == nil then
    local v15 = v1:getFilename()
    return v8:getFillTypesByCategoryNames(v6, "Warning: '" .. v15 .. "' has invalid fillTypeCategory '%s'.")
  end
  if v6 == nil and v7 ~= nil then
    v15 = v1:getFilename()
    v8 = v8:getFillTypesByNames(v7, "Warning: '" .. v15 .. "' has invalid fillType '%s'.")
    return v8
  end
  if v6 ~= nil and v7 ~= nil then
    Logging.xmlWarning(v1, "fillTypeCategories and fillTypeNames are both set, only one of the two allowed")
    return v5
  end
  if v4 ~= nil and v4 then
    Logging.xmlWarning(v1, "either the '%s' or '%s' attribute has to be set", v2, v3)
  end
  return v5
end
function FillTypeManager:addFillTypeConverter(name, isBaseType)
  local v3 = ClassUtil.getIsValidIndexName(name)
  if not v3 then
    local v8 = tostring(name)
    print("Warning: '" .. v8 .. "' is not a valid name for a fillTypeConverter. Ignoring fillTypeConverter!")
    return nil
  end
  v3 = name:upper()
  if isBaseType and self.nameToConverter[v3] ~= nil then
    v8 = tostring(v3)
    print("Warning: FillTypeConverter '" .. v8 .. "' already exists. Ignoring FillTypeConverter!")
    return nil
  end
  if self.converterNameToIndex[name] == nil then
    table.insert(self.fillTypeConverters, {})
    self.converterNameToIndex[name] = #self.fillTypeConverters
    self.nameToConverter[name] = {}
  end
  return v3
end
function FillTypeManager:addFillTypeConversion(converter, sourceFillTypeIndex, targetFillTypeIndex, conversionFactor)
  if converter ~= nil and self.fillTypeConverters[converter] ~= nil and sourceFillTypeIndex ~= nil and targetFillTypeIndex ~= nil then
    self.fillTypeConverters[converter][sourceFillTypeIndex] = {targetFillTypeIndex = targetFillTypeIndex, conversionFactor = conversionFactor}
  end
end
function FillTypeManager:getConverterDataByName(converterName)
  if converterName then
    local v4 = converterName:upper()
  end
  return v3[v4]
end
function FillTypeManager:getSampleByFillType(fillType)
  return self.fillTypeToSample[fillType]
end
local v1 = FillTypeManager.new()
g_fillTypeManager = v1
