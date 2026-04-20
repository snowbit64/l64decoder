-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConfigurationUtil = {SEND_NUM_BITS = 7, SELECTOR_MULTIOPTION = 0, SELECTOR_COLOR = 1}
function ConfigurationUtil:addBoughtConfiguration(v1, v2)
  local v3 = v3:getConfigurationIndexByName(v1)
  if v3 ~= nil then
    if self.boughtConfigurations[v1] == nil then
      self.boughtConfigurations[v1] = {}
    end
    self.boughtConfigurations[v1][v2] = true
  end
end
function ConfigurationUtil:hasBoughtConfiguration(v1, v2)
  if self.boughtConfigurations[v1] ~= nil and self.boughtConfigurations[v1][v2] then
    return true
  end
  return false
end
function ConfigurationUtil:setConfiguration(v1, v2)
  self.configurations[v1] = v2
end
function ConfigurationUtil:getColorByConfigId(v1, v2)
  if v2 ~= nil then
    local v3 = v3:getItemByXMLFilename(self.configFileName)
    if v3.configurations ~= nil and v3.configurations[v1][v2] ~= nil then
      local v5, v6, v7 = unpack(v3.configurations[v1][v2].color)
      return {v5, v6, v7, v3.configurations[v1][v2].material}
    end
  end
  return nil
end
function ConfigurationUtil.getSaveIdByConfigId(v0, v1, v2)
  local v3 = v3:getItemByXMLFilename(v0)
  if v3.configurations ~= nil and v3.configurations[v1] ~= nil and v3.configurations[v1][v2] ~= nil then
    return v3.configurations[v1][v2].saveId
  end
  return nil
end
function ConfigurationUtil.getConfigIdBySaveId(v0, v1, v2)
  local v3 = v3:getItemByXMLFilename(v0)
  if v3.configurations ~= nil and v3.configurations[v1] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 18, target 29)
    if v3.configurations[v1][1].saveId == v2 then
      return v3.configurations[v1][1].index
    end
    -- TODO: structure LOP_FORNLOOP (pc 28, target 19)
  end
  return 1
end
function ConfigurationUtil:getMaterialByConfigId(v1, v2)
  if v2 ~= nil then
    local v3 = v3:getItemByXMLFilename(self.configFileName)
    if v3.configurations ~= nil and v3.configurations[v1][v2] ~= nil then
      return v3.configurations[v1][v2].material
    end
  end
  return nil
end
function ConfigurationUtil.applyConfigMaterials(object, xmlFile, configName, configId)
  local v4 = v4:getConfigurationDescByName(configName)
  if v4.xmlKey ~= nil then
  else
  end
  local v6 = string.format("vehicle%s.%sConfigurations.%sConfiguration(%d)", v5, configName, configName, configId - 1)
  local v7 = xmlFile:hasProperty(v6)
  if v7 then
    xmlFile:iterate(v6 .. ".material", function(object, xmlFile)
      local configName = configName:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
      local configId = configId:getValue(xmlFile .. "#refNode", nil, u1.components, u1.i3dMappings)
      if configName ~= nil and configId ~= nil then
        local v4 = getMaterial(configName, 0)
        local v5 = getMaterial(configId, 0)
        for v9, v10 in pairs(u1.components) do
          ConfigurationUtil.replaceMaterialRec(u1, v10.node, v4, v5)
        end
      end
      v4 = v4:getValue(xmlFile .. "#name")
      if v4 ~= nil then
        v5 = v5:getValue(xmlFile .. "#shaderParameter")
        if v5 ~= nil then
          v6 = v6:getValue(xmlFile .. "#color", nil, true)
          if v6 ~= nil then
            v7 = v7:getValue(xmlFile .. "#materialId")
            if u1.setBaseMaterialColor ~= nil then
              v8:setBaseMaterialColor(v4, v5, v6, v7)
            end
          end
        end
      end
    end)
  end
end
function ConfigurationUtil:getOverwrittenMaterialColors(v1, v2)
  for v6, v7 in pairs(self.configurations) do
    local v8 = v8:getConfigurationDescByName(v6)
    if v8.xmlKey ~= nil then
    else
    end
    local v10 = string.format("vehicle%s.%sConfigurations.%sConfiguration(%d)", v9, v6, v6, v7 - 1)
    local v11 = v1:hasProperty(v10)
    if not v11 then
      continue
    end
    v1:iterate(v10 .. ".material", function(self, v1)
      local v2 = v2:getValue(v1 .. "#name")
      if v2 ~= nil then
        for v6, v7 in pairs(u1) do
          if not (v2 == v6) then
            continue
          end
          local v8 = v8:getValue(v1 .. "#color", nil, true)
          if not (v8 ~= nil) then
            continue
          end
          if not (0 < #v8) then
            continue
          end
          local v9 = v9:getValue(v1 .. "#materialId")
          u1[v6][1] = v8[1]
          u1[v6][2] = v8[2]
          u1[v6][3] = v8[3]
          u1[v6][4] = v9
        end
      end
    end)
  end
end
function ConfigurationUtil.replaceMaterialRec(object, node, oldMaterial, newMaterial)
  local v4 = getHasClassId(node, ClassIds.SHAPE)
  if v4 then
    v4 = getMaterial(node, 0)
    if v4 == oldMaterial then
      setMaterial(node, newMaterial, 0)
    end
  end
  v4 = getNumOfChildren(node)
  if 0 < v4 then
    -- TODO: structure LOP_FORNPREP (pc 30, target 45)
    local v10 = getChildAt(node, 0)
    ConfigurationUtil.replaceMaterialRec(object, v10, oldMaterial, newMaterial)
    -- TODO: structure LOP_FORNLOOP (pc 44, target 31)
  end
end
function ConfigurationUtil:setColor(v1, v2, v3)
  local v4 = ConfigurationUtil.getColorByConfigId(self, v2, v3)
  if v4 ~= nil then
    local v5, v6, v7, v8 = unpack(v4)
    while true do
      v10 = string.format("vehicle.%sConfigurations.colorNode(%d)", v2, v9)
      v11 = v1:hasProperty(v10)
      if not v11 then
        break
      end
      v11 = v1:getValue(v10 .. "#node", nil, self.components, self.i3dMappings)
      if v11 ~= nil then
        v12 = getHasClassId(v11, ClassIds.SHAPE)
        if v12 then
          if v8 == nil then
            v12, v13, v14, v15 = getShaderParameter(v11, "colorScale")
            _ = v12
            _ = v13
            _ = v14
          end
          v12 = v1:getValue(v10 .. "#recursive", false)
          if v12 then
            I3DUtil.setShaderParameterRec(v11, "colorScale", v5, v6, v7, v8)
            -- goto L101  (LOP_JUMP +22)
          end
          setShaderParameter(v11, "colorScale", v5, v6, v7, v8, false)
        else
          v17 = getName(v11)
          print("Warning: Could not set vehicle color to '" .. v17 .. "' because node is not a shape!")
        end
      end
    end
  end
end
function ConfigurationUtil:getConfigurationValue(v1, v2, v3, v4, v5, v6)
  local v7 = type(v2)
  if v7 == "table" then
    printCallstack()
  end
  if v1 ~= nil then
    local v8 = self:getValue(v1 .. v2 .. v3)
  end
  if v7 == nil and v5 ~= nil then
    v8 = self:getValue(v5 .. v2 .. v3)
  end
  if v7 == nil and v6 ~= nil then
    v8 = self:getValue(v6 .. v2 .. v3)
  end
  v8 = Utils.getNoNil(v7, v4)
  return v8
end
function ConfigurationUtil:getXMLConfigurationKey(v1, v2, v3, v4)
  local v5 = Utils.getNoNil(v1, 1)
  local v6 = string.format(v2 .. "(%d)", v5 - 1)
  if v1 ~= nil then
    local v7 = self:hasProperty(v6)
    if not v7 then
      local v18 = tostring(v1)
      print("Warning: Invalid " .. v4 .. " index '" .. v18 .. "' in '" .. v2 .. "'. Using default " .. v4 .. " settings instead!")
    end
  end
  v7 = self:hasProperty(v6)
  if not v7 then
  end
  v7 = self:hasProperty(v6)
  if not v7 then
  end
  return v6, v5
end
function ConfigurationUtil:getConfigColorSingleItemLoad(v1, v2, v3, v4, v5)
  local v6 = self:getValue(v1 .. "#color", "1 1 1", true)
  v5.color = v6
  v6 = self:getValue(v1 .. "#uiColor", v5.color, true)
  v5.uiColor = v6
  v6 = self:getValue(v1 .. "#material")
  v5.material = v6
  v6 = ConfigurationUtil.loadConfigurationNameFromXML(self, v1, v3)
  v5.name = v6
end
function ConfigurationUtil:getConfigColorPostLoad(v1, v2, v3, v4, v5, v6)
  local v7 = self:getValue(v1 .. "#defaultColorIndex")
  local v8 = self:getValue(v1 .. "#useDefaultColors", false)
  if v8 then
    v8 = self:getValue(v1 .. "#price", 1000)
    for v12, v13 in pairs(g_vehicleColors) do
      local v14 = StoreItemUtil.addConfigurationItem(v5, "", "", v8, 0, false)
      if v13.r ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L62
        -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L62
        v14.color = {v13.r, v13.g, v13.b, 1}
      elseif v13.brandColor ~= nil then
        local v15 = v15:getBrandColorByName(v13.brandColor)
        v14.color = v15
        if v14.color == nil then
          v14.color = {1, 1, 1, 1}
          Logging.warning("Unable to find brandColor '%s' in g_vehicleColors", v13.brandColor)
        end
      end
      v15 = v15:convertText(v13.name)
      v14.name = v15
      if not (v12 == v7) then
        continue
      end
      v14.isDefault = true
      v14.price = 0
    end
  end
  if v7 == nil then
    for v12, v13 in ipairs(v5) do
      if not (v13.isDefault ~= nil) then
        continue
      end
      if not v13.isDefault then
        continue
      end
    end
    if not v8 and 0 < #v5 then
      v5[1].isDefault = true
      v5[1].price = 0
    end
  end
end
function ConfigurationUtil:getConfigMaterialSingleItemLoad(v1, v2, v3, v4, v5)
  local v6 = self:getValue(v1 .. "#color", "1 1 1", true)
  v5.color = v6
  v6 = self:getValue(v1 .. "#material")
  v5.material = v6
end
function ConfigurationUtil:getStoreAdditionalConfigData(v1, v2, v3, v4, v5)
  local v6 = self:getValue(v1 .. "#vehicleType")
  v5.vehicleType = v6
end
function ConfigurationUtil:getColorFromString()
  if self ~= nil then
    local v1 = v1:getBrandColorByName(self)
    if not v1 then
      local v2 = self:getVector()
    end
    if v1 ~= nil and #v1 >= 3 then
      -- if 4 >= #v1 then goto L35 end
    end
    print("Error: Invalid color string '" .. self .. "'")
    return nil
    return v1
  end
  return nil
end
function ConfigurationUtil:loadConfigurationNameFromXML(v1, v2)
  local v3 = self:getValue(v1 .. "#name", nil, v2, false)
  local v4 = self:getValue(v1 .. "#params")
  if v4 ~= nil then
    local v5 = v4:split("|")
    -- TODO: structure LOP_FORNPREP (pc 25, target 35)
    local v8 = v8:convertText(v5[1], v2)
    v5[1] = v8
    -- TODO: structure LOP_FORNLOOP (pc 34, target 26)
    local v7 = unpack(v5)
    v5 = string.format(...)
  end
  return v3
end
function ConfigurationUtil:registerColorConfigurationXMLPaths(v1)
  local v2 = string.format("vehicle.%sConfigurations", v1)
  self:register(XMLValueType.INT, v2 .. "#defaultColorIndex", "Default color index on start")
  self:register(XMLValueType.BOOL, v2 .. "#useDefaultColors", "Use default colors", false)
  self:register(XMLValueType.INT, v2 .. "#price", "Default color price", 1000)
  self:register(XMLValueType.NODE_INDEX, v2 .. ".colorNode(?)#node", "Color node")
  self:register(XMLValueType.BOOL, v2 .. ".colorNode(?)#recursive", "Apply recursively")
  local v3 = string.format("%s.%sConfiguration(?)", v2, v1)
  self:register(XMLValueType.COLOR, v3 .. "#color", "Configuration color", "1 1 1 1")
  self:register(XMLValueType.COLOR, v3 .. "#uiColor", "Configuration UI color", "1 1 1 1")
  self:register(XMLValueType.INT, v3 .. "#material", "Configuration material")
  self:register(XMLValueType.L10N_STRING, v3 .. "#name", "Color name")
end
function ConfigurationUtil:registerMaterialConfigurationXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".material(?)#node", "Material node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".material(?)#refNode", "Material reference node")
  self:register(XMLValueType.STRING, v1 .. ".material(?)#name", "Material name")
  self:register(XMLValueType.STRING, v1 .. ".material(?)#shaderParameter", "Material shader parameter name")
  self:register(XMLValueType.COLOR, v1 .. ".material(?)#color", "Color")
  self:register(XMLValueType.INT, v1 .. ".material(?)#materialId", "Material id")
end
function ConfigurationUtil.isColorMetallic(materialId)
  if materialId ~= 2 and materialId ~= 3 and materialId ~= 19 and materialId ~= 30 and materialId ~= 31 and materialId ~= 35 then
  end
  return v1
end
