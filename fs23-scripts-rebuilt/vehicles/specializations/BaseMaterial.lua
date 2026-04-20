-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaseMaterial = {}
function BaseMaterial.prerequisitesPresent(v0)
  return true
end
function BaseMaterial.initSpecialization()
  local v3 = v3:getText("configuration_baseColor")
  v0:addConfigurationType("baseMaterial", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_designColor")
  v0:addConfigurationType("designMaterial", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_designColor")
  v0:addConfigurationType("designMaterial2", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_designColor")
  v0:addConfigurationType("designMaterial3", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  Vehicle.xmlSchema:setXMLSpecializationType("BaseMaterial")
  MaterialUtil.registerBaseMaterialXMLPaths(Vehicle.xmlSchema, "vehicle.baseMaterial.material")
  BaseMaterial.registerBaseMaterialConfigurationsXMLPaths(Vehicle.xmlSchema, "baseMaterial")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "baseMaterial")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.baseMaterialConfigurations.baseMaterialConfiguration(?)")
  BaseMaterial.registerBaseMaterialConfigurationsXMLPaths(Vehicle.xmlSchema, "designMaterial")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "designMaterial")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.designMaterialConfigurations.designMaterialConfiguration(?)")
  BaseMaterial.registerBaseMaterialConfigurationsXMLPaths(Vehicle.xmlSchema, "designMaterial2")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "designMaterial2")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.designMaterial2Configurations.designMaterial2Configuration(?)")
  BaseMaterial.registerBaseMaterialConfigurationsXMLPaths(Vehicle.xmlSchema, "designMaterial3")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "designMaterial3")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.designMaterial3Configurations.designMaterial3Configuration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function BaseMaterial:registerBaseMaterialConfigurationsXMLPaths(v1)
  local v2 = string.format("vehicle.%sConfigurations", v1)
  self:register(XMLValueType.STRING, v2 .. ".material(?)#name", "Material name")
  self:register(XMLValueType.STRING, v2 .. ".material(?)#shaderParameter", "Material shader parameter")
  self:register(XMLValueType.COLOR, v2 .. ".material(?)#color", "Material color if it shouldn't be used from configuration")
  self:register(XMLValueType.INT, v2 .. ".material(?)#material", "Material id if it shouldn't be used from configuration")
  self:register(XMLValueType.BOOL, v2 .. ".material(?)#useContrastColor", "Use contrast color from configuration", false)
  self:register(XMLValueType.FLOAT, v2 .. ".material(?)#contrastThreshold", "Contrast color brightness threshold", 0.5)
end
function BaseMaterial.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "applyBaseMaterialConfiguration", BaseMaterial.applyBaseMaterialConfiguration)
  SpecializationUtil.registerFunction(vehicleType, "applyBaseMaterial", BaseMaterial.applyBaseMaterial)
  SpecializationUtil.registerFunction(vehicleType, "setBaseMaterialColor", BaseMaterial.setBaseMaterialColor)
end
function BaseMaterial.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BaseMaterial)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", BaseMaterial)
end
function BaseMaterial:onLoad(savegame)
  self.spec_baseMaterial.baseMaterials = {}
  self.spec_baseMaterial.nameToMaterial = {}
  MaterialUtil.loadBaseMaterialsFromXML(self.spec_baseMaterial.baseMaterials, self.xmlFile, "vehicle.baseMaterial.material", self.components, self.i3dMappings)
  -- TODO: structure LOP_FORNPREP (pc 27, target 37)
  self.spec_baseMaterial.nameToMaterial[self.spec_baseMaterial.baseMaterials[1].name] = self.spec_baseMaterial.baseMaterials[1]
  -- TODO: structure LOP_FORNLOOP (pc 36, target 28)
  if self.configurations.baseMaterial ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "baseMaterial", self.configurations.baseMaterial)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.baseMaterialConfigurations.baseMaterialConfiguration", self.configurations.baseMaterial, self.components, self)
  end
  if self.configurations.designMaterial ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "designMaterial", self.configurations.designMaterial)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.designMaterialConfigurations.designMaterialConfiguration", self.configurations.designMaterial, self.components, self)
  end
  if self.configurations.designMaterial2 ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "designMaterial2", self.configurations.designMaterial2)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.designMaterial2Configurations.designMaterial2Configuration", self.configurations.designMaterial2, self.components, self)
  end
  if self.configurations.designMaterial3 ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "designMaterial3", self.configurations.designMaterial3)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.designMaterial3Configurations.designMaterial3Configuration", self.configurations.designMaterial3, self.components, self)
  end
end
function BaseMaterial:onLoadFinished(savegame)
  self:applyBaseMaterial()
end
function BaseMaterial:applyBaseMaterial()
  for v5, v6 in ipairs(self.spec_baseMaterial.baseMaterials) do
    for v10, v11 in ipairs(self.components) do
      MaterialUtil.applyBaseMaterial(v11.node, v6)
    end
  end
end
function BaseMaterial:applyBaseMaterialConfiguration(xmlFile, configName, configId)
  local baseKey = string.format("vehicle.%sConfigurations", configName)
  while true do
    v7 = string.format("%s.material(%d)", baseKey, v6)
    v8 = xmlFile:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = xmlFile:getValue(v7 .. "#name")
    v9 = ClassUtil.getIsValidIndexName(v8)
    if not v9 then
      Logging.xmlWarning(xmlFile, "Given material name '%s' is not valid for material '%s'", v8, v7)
      return false
    end
    v9 = xmlFile:getValue(v7 .. "#shaderParameter")
    v10 = ClassUtil.getIsValidIndexName(v9)
    if not v10 then
      Logging.xmlWarning(xmlFile, "Given shader parameter '%s' is not valid for material '%s'", v8, v7)
      return false
    end
    if v4.nameToMaterial[v8] == nil then
      Logging.xmlWarning(xmlFile, "Given material name '%s' not found for material configuration '%s'", v8, v7)
      return false
    end
    if v10.nameToShaderParameter[v9] == nil then
      Logging.xmlWarning(xmlFile, "Given shader parameter '%s' not found for material configuration '%s'", v9, v7)
      return false
    end
    v12 = xmlFile:getValue(v7 .. "#color", nil, true)
    if v12 == nil then
      v13 = ConfigurationUtil.getColorByConfigId(self, configName, configId)
      if v13 == nil then
        Logging.xmlWarning(xmlFile, "Color not found for configId '%d' for material configuration '%s'", configId, v7)
        return false
      end
    end
    v13 = xmlFile:getValue(v7 .. "#material")
    if not v13 then
      v14 = ConfigurationUtil.getMaterialByConfigId(self, configName, configId)
    end
    v11.value[1] = v12[1]
    v11.value[2] = v12[2]
    v11.value[3] = v12[3]
    if not v14 then
    end
    v14[4] = v15
    v14 = xmlFile:getValue(v7 .. "#useContrastColor", false)
    if v14 then
      v14 = MathUtil.getBrightnessFromColor(v12[1], v12[2], v12[3])
      v15 = xmlFile:getValue(v7 .. "#contrastThreshold", 0.5)
      if v15 < v14 then
      else
      end
      v11.value[1] = 1 - v14
      v11.value[2] = 1 - v14
      v11.value[3] = 1 - v14
    end
  end
end
function BaseMaterial:setBaseMaterialColor(materialName, shaderParameterName, color, materialId)
  if self.spec_baseMaterial.nameToMaterial[materialName] ~= nil and self.spec_baseMaterial.nameToMaterial[materialName].nameToShaderParameter[shaderParameterName] ~= nil then
    self.spec_baseMaterial.nameToMaterial[materialName].nameToShaderParameter[shaderParameterName].value[1] = color[1]
    self.spec_baseMaterial.nameToMaterial[materialName].nameToShaderParameter[shaderParameterName].value[2] = color[2]
    self.spec_baseMaterial.nameToMaterial[materialName].nameToShaderParameter[shaderParameterName].value[3] = color[3]
    if not materialId then
    end
    v8[4] = v9
  end
  self:applyBaseMaterial()
end
