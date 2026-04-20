-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreeSaplingPallet = {}
function TreeSaplingPallet.prerequisitesPresent(v0)
  return true
end
function TreeSaplingPallet.initSpecialization()
  local v3 = v3:getText("configuration_treeType")
  v0:addConfigurationType("treeSaplingType", v3, "treeSaplingPallet", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("TreeSaplingPallet")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.treeSaplingPallet#fillUnitIndex", "Index of the saplings fill unit", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.treeSaplingPallet#treeType", "Tree Type Name", "spruce1")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.treeSaplingPallet#filename", "Custom tree sapling i3d file")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?)#fillUnitIndex", "Index of the saplings fill unit", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?)#treeType", "Tree Type Name", "spruce1")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?)#filename", "Custom tree sapling i3d file")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treeSaplingPallet.saplingNodes.saplingNode(?)#node", "Sapling link node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.treeSaplingPallet.saplingNodes.saplingNode(?)#randomize", "Randomize rotation and scale of saplings", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?).saplingNodes.saplingNode(?)#node", "Sapling link node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?).saplingNodes.saplingNode(?)#randomize", "Randomize rotation and scale of saplings", true)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TreeSaplingPallet.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "onTreeSaplingLoaded", TreeSaplingPallet.onTreeSaplingLoaded)
  SpecializationUtil.registerFunction(vehicleType, "getTreeType", TreeSaplingPallet.getTreeType)
  SpecializationUtil.registerFunction(vehicleType, "updateTreeSaplingPalletNodes", TreeSaplingPallet.updateTreeSaplingPalletNodes)
end
function TreeSaplingPallet.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "showInfo", TreeSaplingPallet.showInfo)
end
function TreeSaplingPallet.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TreeSaplingPallet)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", TreeSaplingPallet)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", TreeSaplingPallet)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", TreeSaplingPallet)
end
function TreeSaplingPallet:onLoad(savegame)
  local treeSaplingTypeConfigurationId = Utils.getNoNil(self.configurations.treeSaplingType, 1)
  local v4 = string.format("vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration(%d)", treeSaplingTypeConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.treeSaplingPallet.treeSaplingTypeConfigurations.treeSaplingTypeConfiguration", treeSaplingTypeConfigurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v5 = v5:getValue(v4 .. "#fillUnitIndex", 1)
  v2.fillUnitIndex = v5
  v5 = v5:getValue(v4 .. "#treeType", "spruce1")
  v2.treeTypeName = v5
  v5 = v5:getTreeTypeDescFromName(v2.treeTypeName)
  v2.treeTypeDesc = v5
  v2.saplingNodes = {}
  v5 = v5:getTreeTypeFilename(v2.treeTypeDesc, 1)
  v2.treeTypeFilename = v5
  if v2.treeTypeFilename ~= nil then
    v5 = v5:getValue(v4 .. "#filename")
    if v5 ~= nil then
      local v6 = Utils.getFilename(v5, self.baseDirectory)
    else
    end
    local v7 = v7:hasProperty(v4 .. ".saplingNodes.saplingNode")
    if not v7 then
    end
    v7:iterate(v6, function(self, savegame)
      local treeSaplingTypeConfigurationId = treeSaplingTypeConfigurationId:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = treeSaplingTypeConfigurationId}.node ~= nil then
        treeSaplingTypeConfigurationId = treeSaplingTypeConfigurationId:getValue(savegame .. "#randomize", true)
        if treeSaplingTypeConfigurationId then
          local v6 = math.random(0, math.pi * 2)
          setRotation({node = treeSaplingTypeConfigurationId}.node, 0, v6, 0)
          local v7 = math.random(90, 110)
          setScale({node = treeSaplingTypeConfigurationId}.node, 1, v7 / 100, 1)
        end
        treeSaplingTypeConfigurationId = treeSaplingTypeConfigurationId:loadSubSharedI3DFile(u1, false, false, u0.onTreeSaplingLoaded, u0, {entry = v2})
        v2.sharedLoadRequestId = treeSaplingTypeConfigurationId
        table.insert(u2.saplingNodes, v2)
      end
    end)
  end
  if v2.treeTypeDesc ~= nil then
    v5 = v5:getText("configuration_treeType", self.customEnvironment)
    v2.infoBoxLineTitle = v5
    v5 = v5:getText(self.spec_treeSaplingPallet.treeTypeDesc.nameI18N, self.customEnvironment)
    v2.infoBoxLineValue = v5
  end
end
function TreeSaplingPallet:onLoadFinished()
  self:updateTreeSaplingPalletNodes()
end
function TreeSaplingPallet:onDelete()
  if self.spec_treeSaplingPallet.saplingNodes ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 27)
    if self.spec_treeSaplingPallet.saplingNodes[1].sharedLoadRequestId ~= nil then
      v6:releaseSharedI3DFile(self.spec_treeSaplingPallet.saplingNodes[1].sharedLoadRequestId)
    end
    -- TODO: structure LOP_FORNLOOP (pc 26, target 12)
    v1.saplingNodes = {}
  end
end
function TreeSaplingPallet.onTreeSaplingLoaded(v0, v1, v2, v3)
  if v1 ~= 0 then
    local v7 = getChildAt(v1, 0)
    link(...)
    delete(v1)
  end
end
function TreeSaplingPallet:getTreeType()
  return self.spec_treeSaplingPallet.treeTypeName
end
function TreeSaplingPallet:updateTreeSaplingPalletNodes()
  local v2 = self:getFillUnitFillLevel(self.spec_treeSaplingPallet.fillUnitIndex)
  local v3 = self:getFillUnitCapacity(self.spec_treeSaplingPallet.fillUnitIndex)
  -- TODO: structure LOP_FORNPREP (pc 17, target 45)
  local v11 = MathUtil.round(v2)
  if 1 > v11 then
  end
  v8(v9, true)
  I3DUtil.setShaderParameterRec(v7.node, "hideByIndex", v3 - v2, 0, 0, 0)
  -- TODO: structure LOP_FORNLOOP (pc 44, target 18)
end
function TreeSaplingPallet:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  self:updateTreeSaplingPalletNodes()
end
function TreeSaplingPallet:showInfo(superFunc, box)
  if self.spec_treeSaplingPallet.infoBoxLineTitle ~= nil then
    box:addLine(self.spec_treeSaplingPallet.infoBoxLineTitle, self.spec_treeSaplingPallet.infoBoxLineValue)
  end
  superFunc(self, box)
end
