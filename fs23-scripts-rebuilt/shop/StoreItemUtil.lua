-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StoreItemUtil = {}
function StoreItemUtil:getIsVehicle()
  if self ~= nil and self.species ~= nil and self.species ~= "" and self.species ~= "vehicle" then
  end
  return v1
end
function StoreItemUtil:getIsAnimal()
  if self ~= nil and self.species ~= nil and self.species ~= "" and self.species ~= "placeable" and self.species ~= "object" and self.species ~= "handTool" and self.species == "vehicle" then
  end
  return v1
end
function StoreItemUtil:getIsPlaceable()
  if self ~= nil and self.species ~= "placeable" then
  end
  return v1
end
function StoreItemUtil:getIsObject()
  if self ~= nil and self.species ~= "object" then
  end
  return v1
end
function StoreItemUtil:getIsHandTool()
  if self ~= nil and self.species ~= "handTool" then
  end
  return v1
end
function StoreItemUtil:getIsConfigurable()
  if self ~= nil and self.configurations == nil then
  end
  if v1 then
    for v6, v7 in pairs(self.configurations) do
      -- TODO: structure LOP_FORNPREP (pc 21, target 34)
      if v7[1].isSelectable ~= false then
        -- if 1 >= 0 + 1 then goto L33 end
      else
        -- TODO: structure LOP_FORNLOOP (pc 33, target 22)
      end
      if not not v2 then
        break
      end
    end
  end
  return v1 and v2
end
function StoreItemUtil:getIsLeasable()
  if self ~= nil and self.runningLeasingFactor ~= nil then
    local v2 = StoreItemUtil.getIsPlaceable(self)
  end
  return v1
end
function StoreItemUtil:getDefaultConfigId(v1)
  return StoreItemUtil.getDefaultConfigIdFromItems(self.configurations[v1])
end
function StoreItemUtil.getDefaultConfigIdFromItems(configItems)
  if configItems ~= nil then
    for v4, v5 in pairs(configItems) do
      if not v5.isDefault then
        continue
      end
      if not (v5.isSelectable ~= false) then
        continue
      end
      return v4
    end
    for v4, v5 in pairs(configItems) do
      if not (v5.isSelectable ~= false) then
        continue
      end
      return v4
    end
  end
  return 1
end
function StoreItemUtil.getDefaultPrice(storeItem, configurations)
  return StoreItemUtil.getCosts(storeItem, configurations, "price")
end
function StoreItemUtil.getDailyUpkeep(storeItem, configurations)
  return StoreItemUtil.getCosts(storeItem, configurations, "dailyUpkeep")
end
function StoreItemUtil:getCosts(v1, v2)
  if self ~= nil then
    if self[v2] == nil then
    end
    if self.configurations ~= nil then
      for v7, v8 in pairs(v1) do
        if not (self.configurations[v7] ~= nil) then
          continue
        end
        if not (self.configurations[v7][v8] ~= nil) then
          continue
        end
        if not (self.configurations[v7][v8][v2] ~= nil) then
          continue
        end
        local v12 = tonumber(self.configurations[v7][v8][v2])
      end
    end
    return v3
  end
  return 0
end
function StoreItemUtil:getPriceWithBoughtConfigurations(v1, v2)
  if self ~= nil then
    if self[v2] == nil then
    end
    if self.configurations ~= nil then
      for v7, v8 in pairs(v1) do
        for v12, v13 in pairs(v8) do
          if not v13 then
            continue
          end
          if not (self.configurations[v7] ~= nil) then
            continue
          end
          if not (self.configurations[v7][v12] ~= nil) then
            continue
          end
          if not (self.configurations[v7][v12][v2] ~= nil) then
            continue
          end
          local v17 = tonumber(self.configurations[v7][v12][v2])
        end
      end
    end
    return v3
  end
  return 0
end
function StoreItemUtil:renameDuplicatedConfigurationNames(v1)
  if v1.name ~= nil then
    while true do
      -- TODO: structure LOP_FORNPREP (pc 11, target 43)
      if self[1] ~= v1 and self[1].name == v2 then
        -- TODO: structure LOP_FORNPREP (pc 26, target 40)
        if self[1][v1.nameCompareParams[1]] ~= v1[v1.nameCompareParams[1]] then
        end
        -- TODO: structure LOP_FORNLOOP (pc 39, target 27)
        if not v8 then
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 42, target 12)
      if not v3 then
        continue
      end
      local v5 = string.format("%s (%d)", v1.name, v4)
    end
    v1.name = v2
  end
end
function StoreItemUtil.addConfigurationItem(configurationItems, name, desc, price, dailyUpkeep, isDefault, overwrittenTitle, saveId, brandIndex, isSelectable, vehicleBrand, vehicleName, vehicleIcon)
  table.insert(configurationItems, {name = name, desc = desc, price = price, dailyUpkeep = dailyUpkeep, isDefault = isDefault, isSelectable = isSelectable, overwrittenTitle = overwrittenTitle})
  if not saveId then
    local v14 = tostring({name = name, desc = desc, price = price, dailyUpkeep = dailyUpkeep, isDefault = isDefault, isSelectable = isSelectable, overwrittenTitle = overwrittenTitle, index = #configurationItems}.index)
  end
  v13.saveId = v14
  v13.brandIndex = brandIndex
  v13.nameCompareParams = {}
  v13.vehicleBrand = vehicleBrand
  v13.vehicleName = vehicleName
  v13.vehicleIcon = vehicleIcon
  return v13
end
function StoreItemUtil:getFunctionsFromXML(v1, v2)
  while true do
    v5 = string.format(v1 .. ".functions.function(%d)", v3)
    v6 = self:hasProperty(v5)
    if not v6 then
      break
    end
    v6 = self:getValue(v5, nil, v2, true)
    if v6 ~= nil then
      table.insert(v4, v6)
    end
  end
  return v4
end
function StoreItemUtil:loadSpecsFromXML()
  if self.specs == nil then
    local v1 = XMLFile.load("storeItemXML", self.xmlFilename, self.xmlSchema)
    local v3 = v3:getSpecTypes()
    local v2 = StoreItemUtil.getSpecsFromXML(v3, self.species, v1, self.customEnvironment, self.baseDir)
    self.specs = v2
    v1:delete()
  end
  if self.bundleInfo ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 45, target 55)
    StoreItemUtil.loadSpecsFromXML(self.bundleInfo.bundleItems[1].item)
    -- TODO: structure LOP_FORNLOOP (pc 54, target 46)
  end
end
function StoreItemUtil.getSpecsFromXML(specTypes, species, xmlFile, customEnvironment, baseDirectory)
  for v9, v10 in pairs(specTypes) do
    if not (v10.species == species) then
      continue
    end
    if not (v10.loadFunc ~= nil) then
      continue
    end
    local v12 = v10.loadFunc(xmlFile, customEnvironment, baseDirectory)
    v5[v10.name] = v12
  end
  return v5
end
function StoreItemUtil:getBrandIndexFromXML(v1)
  local v2 = self:getValue(v1 .. ".brand", "")
  return v3:getBrandIndexByName(v2)
end
function StoreItemUtil:getVRamUsageFromXML(v1)
  local v2 = self:getValue(v1 .. ".vertexBufferMemoryUsage", 0)
  local v3 = self:getValue(v1 .. ".indexBufferMemoryUsage", 0)
  local v4 = self:getValue(v1 .. ".textureMemoryUsage", 0)
  local v5 = self:getValue(v1 .. ".instanceVertexBufferMemoryUsage", 0)
  local v6 = self:getValue(v1 .. ".instanceIndexBufferMemoryUsage", 0)
  local v7 = self:getValue(v1 .. ".ignoreVramUsage", false)
  return v2 + v3 + v4, v5 + v6, v7
end
function StoreItemUtil:getConfigurationsFromXML(v1, v2, v3, v4, v5)
  local v9 = v9:getSortedConfigurationTypes()
  for v13, v14 in pairs(v9) do
    local v15 = v15:getConfigurationDescByName(v14)
    if v15.xmlKey ~= nil then
    else
    end
    if v15.preLoadFunc ~= nil then
      v15.preLoadFunc(self, v1 .. v18 .. "." .. v14 .. "Configurations", v2, v3, v4, v16)
    end
    local v20 = self:getValue(v19 .. "#title", nil, v3, false)
    while true do
      if 2 ^ ConfigurationUtil.SEND_NUM_BITS < v17 then
        Logging.xmlWarning(self, "Maximum number of configurations are reached for %s. Only %d configurations per type are allowed!", v14, 2 ^ ConfigurationUtil.SEND_NUM_BITS)
      end
      v22 = string.format(v19 .. "." .. v14 .. "Configuration(%d)", v17)
      v23 = self:hasProperty(v22)
      if not v23 then
        break
      end
      v23 = ConfigurationUtil.loadConfigurationNameFromXML(self, v22, v3)
      v24 = self:getValue(v22 .. "#desc", nil, v3, false)
      v25 = self:getValue(v22 .. "#price", 0)
      v26 = self:getValue(v22 .. "#dailyUpkeep", 0)
      v27 = self:getValue(v22 .. "#isDefault", false)
      v28 = self:getValue(v22 .. "#isSelectable", true)
      v29 = self:getValue(v22 .. "#saveId")
      v30 = self:getValue(v22 .. "#vehicleBrand")
      v31 = v31:getBrandIndexByName(v30)
      v32 = self:getValue(v22 .. "#vehicleName")
      v33 = self:getValue(v22 .. "#vehicleIcon")
      if v33 ~= nil then
        v34 = Utils.getFilename(v33, v2)
      end
      v34 = self:getValue(v22 .. "#displayBrand")
      v35 = v35:getBrandIndexByName(v34)
      v36 = StoreItemUtil.addConfigurationItem(v16, v23, v24, v25, v26, v27, v20, v29, v35, v28, v31, v32, v33)
      if v29 ~= nil then
        if v21[v29] == true then
          Logging.xmlWarning(self, "Duplicated saveId '%s' in '%s' configurations", v29, v14)
        else
          v21[v29] = true
        end
      end
      if v15.singleItemLoadFunc ~= nil then
        v15.singleItemLoadFunc(self, v22, v2, v3, v4, v36)
      end
      StoreItemUtil.renameDuplicatedConfigurationNames(v16, v36)
    end
    if v15.postLoadFunc ~= nil then
      v15.postLoadFunc(self, v19, v2, v3, v4, v16, v5)
    end
    if not (0 < #v16) then
      continue
    end
    v22 = StoreItemUtil.getDefaultConfigIdFromItems(v16)
    v7[v14] = v22
    v6[v14] = v16
  end
  if v8 == 0 then
  end
  return v6, v7
end
function StoreItemUtil:getConfigurationSetsFromXML(v1, v2, v3, v4, v5)
  local v6 = string.format("%s.configurationSets", v2)
  local v7 = v1:getValue(v6 .. "#title", nil, v4, false)
  while true do
    v10 = string.format("%s.configurationSet(%d)", v6, v9)
    v11 = v1:hasProperty(v10)
    if not v11 then
      break
    end
    v12 = v1:getValue(v10 .. "#name", nil, v4, false)
    v12 = v1:getValue(v10 .. "#params")
    if v12 ~= nil then
      v13 = v12:split("|")
      -- TODO: structure LOP_FORNPREP (pc 57, target 67)
      v16 = v16:convertText(v13[1], v4)
      v13[1] = v16
      -- TODO: structure LOP_FORNLOOP (pc 66, target 58)
      v15 = unpack(v13)
      v13 = string.format(...)
    end
    v13 = v1:getValue(v10 .. "#isDefault", false)
    v11.isDefault = v13
    v11.overwrittenTitle = v7
    v11.configurations = {}
    while true do
      v14 = string.format("%s.configuration(%d)", v10, v13)
      v15 = v1:hasProperty(v14)
      if not v15 then
        break
      end
      v15 = v1:getValue(v14 .. "#name")
      if v15 ~= nil then
        if self.configurations[v15] ~= nil then
          v16 = v1:getValue(v14 .. "#index")
          -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L165
          if self.configurations[v15][v16] ~= nil then
            v11.configurations[v15] = v16
            -- goto L165  (LOP_JUMP +28)
          end
          Logging.xmlWarning(v1, "Index '" .. v16 .. "' not defined for configuration '" .. v15 .. "'!")
          -- goto L165  (LOP_JUMP +17)
        end
        Logging.xmlWarning(v1, "Configuration name '" .. v15 .. "' is not defined!")
      else
        Logging.xmlWarning(v1, "Missing name for configuration set item '" .. v10 .. "'!")
      end
    end
    table.insert(v8, v11)
  end
  return v8
end
function StoreItemUtil.getSubConfigurationsFromXML(configurations)
  if configurations ~= nil then
    for v5, v6 in pairs(configurations) do
      local v7 = v7:getConfigurationDescByName(v5)
      if not v7.hasSubselection then
        continue
      end
      local v8 = v7.getSubConfigurationValuesFunc(v6)
      if not (1 < #v8) then
        continue
      end
      v1[v5] = {subConfigValues = v8, subConfigItemMapping = {}}
      for v13, v14 in ipairs(v8) do
        local v15 = v7.getItemsBySubConfigurationIdentifierFunc(v6, v14)
        v9[v14] = v15
      end
    end
  end
  return v1
end
function StoreItemUtil:getSubConfigurationIndex(v1, v2)
  for v8, v9 in ipairs(self.subConfigurations[v1].subConfigValues) do
    for v14, v15 in ipairs(v3.subConfigItemMapping[v9]) do
      if not (v15.index == v2) then
        continue
      end
      return v8
    end
  end
  return nil
end
function StoreItemUtil:getFilteredConfigurationIndex(v1, v2)
  if self.subConfigurations[v1] ~= nil then
    for v8, v9 in ipairs(self.subConfigurations[v1].subConfigValues) do
      for v14, v15 in ipairs(v3.subConfigItemMapping[v9]) do
        if not (v15.index == v2) then
          continue
        end
        return v14
      end
    end
  end
  return v2
end
function StoreItemUtil:getSubConfigurationItems(v1, v2)
  return self.subConfigurations[v1].subConfigItemMapping[self.subConfigurations[v1].subConfigValues[v2]]
end
function StoreItemUtil:getConfigurationsMatchConfigSets(v1)
  for v5, v6 in pairs(v1) do
    for v11, v12 in pairs(v6.configurations) do
      if not (self[v11] ~= v12) then
        continue
      end
      break
    end
    if not v7 then
      continue
    end
    return true
  end
  return false
end
function StoreItemUtil:getClosestConfigurationSet(v1)
  for v7, v8 in pairs(v1) do
    for v13, v14 in pairs(v8.configurations) do
      if not (self[v13] == v14) then
        continue
      end
    end
    if not (v3 < v9) then
      continue
    end
  end
  return v2, v3
end
function StoreItemUtil.getSizeValues(xmlFilename, baseName, rotationOffset, configurations)
  local xmlFile = XMLFile.load("storeItemGetSizeXml", xmlFilename, Vehicle.xmlSchema)
  if xmlFile ~= nil then
    local v6 = StoreItemUtil.getSizeValuesFromXML(xmlFile, baseName, rotationOffset, configurations)
    xmlFile:delete()
  end
  return v5
end
function StoreItemUtil.getSizeValuesFromXML(xmlFile, baseName, rotationOffset, configurations)
  return StoreItemUtil.getSizeValuesFromXMLByKey(xmlFile, baseName, "base", "size", "size", rotationOffset, configurations, Vehicle.DEFAULT_SIZE)
end
function StoreItemUtil:getSizeValuesFromXMLByKey(v1, v2, v3, v4, v5, v6, v7)
  local v8 = string.format("%s.%s.%s", v1, v2, v3)
  local v10 = self:getValue(v8 .. "#width", v7.width)
  v10 = self:getValue(v8 .. "#length", v7.length)
  v10 = self:getValue(v8 .. "#height", v7.height)
  v10 = self:getValue(v8 .. "#widthOffset", v7.widthOffset)
  v10 = self:getValue(v8 .. "#lengthOffset", v7.lengthOffset)
  v10 = self:getValue(v8 .. "#heightOffset", v7.heightOffset)
  if v6 ~= nil then
    for v13, v14 in pairs(v6) do
      local v15 = v15:getConfigurationAttribute(v13, "xmlKey")
      if v15 ~= nil then
      else
      end
      local v16 = string.format("%s%s.%sConfigurations.%sConfiguration(%d).%s", v1, v15, v13, v13, v14 - 1, v4)
      local v17 = self:getValue(v16 .. "#width")
      local v18 = self:getValue(v16 .. "#length")
      local v19 = self:getValue(v16 .. "#height")
      local v20 = self:getValue(v16 .. "#widthOffset")
      local v21 = self:getValue(v16 .. "#lengthOffset")
      local v22 = self:getValue(v16 .. "#heightOffset")
      if v17 ~= nil then
        local v23 = math.max(v9.width, v17)
        v9.width = v23
      end
      if v18 ~= nil then
        v23 = math.max(v9.length, v18)
        v9.length = v23
      end
      if v19 ~= nil then
        v23 = math.max(v9.height, v19)
        v9.height = v23
      end
      if v20 ~= nil then
        if v9.widthOffset < 0 then
          v23 = math.min(v9.widthOffset, v20)
          v9.widthOffset = v23
        else
          v23 = math.max(v9.widthOffset, v20)
          v9.widthOffset = v23
        end
      end
      if v21 ~= nil then
        if v9.lengthOffset < 0 then
          v23 = math.min(v9.lengthOffset, v21)
          v9.lengthOffset = v23
        else
          v23 = math.max(v9.lengthOffset, v21)
          v9.lengthOffset = v23
        end
      end
      if not (v22 ~= nil) then
        continue
      end
      if v9.heightOffset < 0 then
        v23 = math.min(v9.heightOffset, v22)
        v9.heightOffset = v23
      else
        v23 = math.max(v9.heightOffset, v22)
        v9.heightOffset = v23
      end
    end
  end
  v10 = math.floor(v5 / 1.5707963267948966 + 0.5)
  if v10 * 1.5707963267948966 % 2 * math.pi < 0 then
  end
  v10 = math.floor(v5 / 1.5707963267948966 + 0.5)
  if v10 == 1 then
    v9.width = v9.length
    v9.length = v9.width
    v9.widthOffset = v9.lengthOffset
    v9.lengthOffset = -v9.widthOffset
    return v9
  end
  if v10 == 2 then
    v9.widthOffset = -v9.widthOffset
    v9.lengthOffset = -v9.lengthOffset
    return v9
  end
  if v10 == 3 then
    v9.width = v9.length
    v9.length = v9.width
    v9.widthOffset = -v9.lengthOffset
    v9.lengthOffset = v9.widthOffset
  end
  return v9
end
function StoreItemUtil:registerConfigurationSetXMLPaths(v1)
  self:register(XMLValueType.L10N_STRING, v1 .. ".configurationSets" .. "#title", "Title to display in config screen")
  self:register(XMLValueType.L10N_STRING, v1 .. ".configurationSets" .. ".configurationSet(?)" .. "#name", "Set name")
  self:register(XMLValueType.STRING, v1 .. ".configurationSets" .. ".configurationSet(?)" .. "#params", "Parameters to insert into name")
  self:register(XMLValueType.BOOL, v1 .. ".configurationSets" .. ".configurationSet(?)" .. "#isDefault", "Is default set")
  self:register(XMLValueType.STRING, v1 .. ".configurationSets" .. ".configurationSet(?)" .. ".configuration(?)#name", "Configuration name")
  self:register(XMLValueType.INT, v1 .. ".configurationSets" .. ".configurationSet(?)" .. ".configuration(?)#index", "Selected index")
end
