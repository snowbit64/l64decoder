-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FruitType = nil
FruitTypeCategory = nil
FruitTypeConverter = nil
FruitTypeManager = {SEND_NUM_BITS = 6}
FruitTypeManager_mt:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("fruitTypes")
  FruitTypeManager.xmlSchema = v1
end)
FruitTypeManager_mt:addInitSchemaFunction(function()
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. "#name", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. "#shownOnMap", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. "#useForFieldJob", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".general#startStateChannel", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".general#numStateChannels", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".cultivation#needsSeeding", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".cultivation#allowsSeeding", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".cultivation#directionSnapAngle", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".cultivation#alignsToSun", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".cultivation#seedUsagePerSqm", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".cultivation#plantsWeed", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".cultivation#needsRolling", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".cultivation.state(?)#state", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest#weedState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest#minHarvestingGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest#maxHarvestingGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest#cutState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest#minForageGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".harvest#allowsPartialGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".harvest#literPerSqm", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".harvest#cutHeight", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".harvest#forageCutHeight", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".harvest#beeYieldBonusPercentage", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".harvest#chopperTypeName", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest.transition(?)#srcState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".harvest.transition(?)#targetState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".harvestGroundTypeChange#groundType", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#witheredState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#numGrowthStates", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#growthStateTime", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".growth#resetsSpray", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".growth#growthRequiresLime", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".growth#regrows", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#firstRegrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#minWitheredState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growth#maxWitheredState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".preparing#outputName", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".preparing#minGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".preparing#maxGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".preparing#preparedGrowthState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".growthGroundTypeChange#state", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".growthGroundTypeChange#groundType", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".growthGroundTypeChange#groundTypeMask", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".windrow#name", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypes.fruitType(?)" .. ".windrow#litersPerSqm", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".cropCare#maxWeederState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".cropCare#maxWeederHoeState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".options#lowSoilDensityRequired", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".options#increasesSoilDensity", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".options#consumesLime", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".options#startSprayState", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".destruction#canBeDestroyed", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".destruction#filterStart", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".destruction#filterEnd", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".destruction#state", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.INT, "map.fruitTypes.fruitType(?)" .. ".mulcher#state", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.BOOL, "map.fruitTypes.fruitType(?)" .. ".mulcher#hasChopperGroundLayer", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypes.fruitType(?)" .. ".mulcher#chopperTypeName", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.VECTOR_4, "map.fruitTypes.fruitType(?)" .. ".mapColors#default", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.VECTOR_4, "map.fruitTypes.fruitType(?)" .. ".mapColors#colorBlind", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypeCategories.fruitTypeCategory(?)" .. "#name", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypeCategories.fruitTypeCategory(?)", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypeConverters.fruitTypeConverter(?)" .. "#name", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypeConverters.fruitTypeConverter(?)" .. ".converter(?)#from", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.STRING, "map.fruitTypeConverters.fruitTypeConverter(?)" .. ".converter(?)#to", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypeConverters.fruitTypeConverter(?)" .. ".converter(?)#factor", "")
  FruitTypeManager.xmlSchema:register(XMLValueType.FLOAT, "map.fruitTypeConverters.fruitTypeConverter(?)" .. ".converter(?)#windrowFactor", "")
end)
local FruitTypeManager_mt = Class(FruitTypeManager, AbstractManager)
function FruitTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function FruitTypeManager:initDataStructures()
  self.fruitTypes = {}
  self.indexToFruitType = {}
  self.nameToIndex = {}
  self.nameToFruitType = {}
  self.fruitTypeIndexToFillType = {}
  self.fillTypeIndexToFruitTypeIndex = {}
  self.fruitTypeConverters = {}
  self.converterNameToIndex = {}
  self.nameToConverter = {}
  self.windrowFillTypes = {}
  self.fruitTypeIndexToWindrowFillTypeIndex = {}
  self.modFoliageTypesToLoad = {}
  self.numCategories = 0
  self.categories = {}
  self.indexToCategory = {}
  self.categoryToFruitTypes = {}
  FruitType = self.nameToIndex
  FruitType.UNKNOWN = 0
  FruitTypeCategory = self.categories
  FruitTypeConverter = self.converterNameToIndex
end
function FruitTypeManager:loadDefaultTypes()
  local xmlFile = loadXMLFile("fuitTypes", "data/maps/maps_fruitTypes.xml")
  self:loadFruitTypes(xmlFile, nil, true)
  delete(xmlFile)
end
function FruitTypeManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadDefaultTypes()
  return XMLUtil.loadDataFromMapXML(xmlFile, "fruitTypes", baseDirectory, self, self.loadFruitTypes, missionInfo)
end
function FruitTypeManager:loadFruitTypes(xmlFile, missionInfo, isBaseType)
  while true do
    v5 = string.format("map.fruitTypes.fruitType(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#name")
    v7 = getXMLBool(xmlFile, v5 .. "#shownOnMap")
    v8 = getXMLBool(xmlFile, v5 .. "#useForFieldJob")
    v9 = getXMLFloat(xmlFile, v5 .. "#missionMultiplier")
    v10 = self:addFruitType(v6, v7, v8, v9, isBaseType)
    if v10 ~= nil then
      if true then
        v12 = self:loadFruitTypeGeneral(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeWindrow(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeGrowth(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeHarvest(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeCultivation(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypePreparing(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeCropCare(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeOptions(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeMapColors(v10, xmlFile, v5)
      end
      if v12 then
        v12 = self:loadFruitTypeDestruction(v10, xmlFile, v5)
      end
      if v12 and self.indexToFruitType[v10.index] == nil then
        if 2 ^ FruitTypeManager.SEND_NUM_BITS - 1 <= #self.fruitTypes then
          Logging.error("FruitTypeManager.loadFruitTypes too many fruit types. Only %d fruit types are supported", 2 ^ FruitTypeManager.SEND_NUM_BITS - 1)
          return
        end
        table.insert(self.fruitTypes, v10)
        self.nameToFruitType[v10.name] = v10
        self.nameToIndex[v10.name] = v10.index
        self.indexToFruitType[v10.index] = v10
        self.fillTypeIndexToFruitTypeIndex[v10.fillType.index] = v10.index
        self.fruitTypeIndexToFillType[v10.index] = v10.fillType
      end
    end
  end
  while true do
    v5 = string.format("map.fruitTypeCategories.fruitTypeCategory(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#name")
    v7 = getXMLString(xmlFile, v5)
    v8 = self:addFruitTypeCategory(v6, isBaseType)
    if v8 ~= nil then
      v9 = string.split(v7, " ")
      for v13, v14 in ipairs(v9) do
        v15 = self:getFruitTypeByName(v14)
        if v15 ~= nil then
          v16 = self:addFruitTypeToCategory(v15.index, v8)
          if not not v16 then
            continue
          end
          v23 = tostring(v14)
          v23 = tostring(v6)
          print("Warning: Could not add fruitType '" .. v23 .. "' to fruitTypeCategory '" .. v23 .. "'!")
        else
          v23 = tostring(v14)
          v23 = tostring(v6)
          print("Warning: FruitType '" .. v23 .. "' referenced in fruitTypeCategory '" .. v23 .. "' is not defined!")
        end
      end
    end
  end
  while true do
    v5 = string.format("map.fruitTypeConverters.fruitTypeConverter(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#name")
    v7 = self:addFruitTypeConverter(v6, isBaseType)
    if v7 ~= nil then
      while true do
        v9 = string.format("%s.converter(%d)", v5, v8)
        v10 = hasXMLProperty(xmlFile, v9)
        if not v10 then
          break
        end
        v10 = getXMLString(xmlFile, v9 .. "#from")
        v11 = getXMLString(xmlFile, v9 .. "#to")
        v12 = getXMLFloat(xmlFile, v9 .. "#factor")
        v13 = getXMLFloat(xmlFile, v9 .. "#windrowFactor")
        v14 = self:getFruitTypeByName(v10)
        v15 = v15:getFillTypeByName(v11)
        if v14 ~= nil and v15 ~= nil and v12 ~= nil then
          self:addFruitTypeConversion(v7, v14.index, v15.index, v12, v13)
        end
      end
    end
  end
  return true
end
function FruitTypeManager:addFruitType(name, shownOnMap, useForFieldJob, missionMultiplier, isBaseType)
  local v6 = ClassUtil.getIsValidIndexName(name)
  if not v6 then
    local v11 = tostring(name)
    print("Warning: '" .. v11 .. "' is not a valid name for a fruitType. Ignoring fruitType!")
    return nil
  end
  v6 = name:upper()
  local v7 = v7:getFillTypeByName(v6)
  if v7 == nil then
    local v13 = tostring(name)
    print("Warning: Missing fillType '" .. v13 .. "' for fruitType definition. Ignoring fruitType!")
    return nil
  end
  if isBaseType and self.nameToFruitType[v6] ~= nil then
    v13 = tostring(name)
    print("Warning: FillType '" .. v13 .. "' already exists. Ignoring fillType!")
    return nil
  end
  if self.nameToFruitType[v6] == nil then
  end
  v11 = Utils.getNoNil(v8.shownOnMap, true)
  local v9 = Utils.getNoNil(...)
  v8.shownOnMap = v9
  v11 = Utils.getNoNil(v8.useForFieldJob, true)
  v9 = Utils.getNoNil(...)
  v8.useForFieldJob = v9
  v11 = Utils.getNoNil(v8.missionMultiplier, 1)
  v9 = Utils.getNoNil(...)
  v8.missionMultiplier = v9
  return v8
end
function FruitTypeManager.loadFruitTypeGeneral(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLInt(v2, v3 .. ".general#startStateChannel")
    local v6 = Utils.getNoNil(v1.startStateChannel, 0)
    local v4 = Utils.getNoNil(...)
    v1.startStateChannel = v4
    v5 = getXMLInt(v2, v3 .. ".general#numStateChannels")
    v6 = Utils.getNoNil(v1.numStateChannels, 4)
    v4 = Utils.getNoNil(...)
    v1.numStateChannels = v4
  end
  return true
end
function FruitTypeManager:loadFruitTypeWindrow(fruitType, xmlFile, key)
  if fruitType ~= nil then
    local v4 = getXMLString(xmlFile, key .. ".windrow#name")
    local windrowLitersPerSqm = getXMLFloat(xmlFile, key .. ".windrow#litersPerSqm")
    if v4 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L22
    end
    return true
    local v6 = v6:getFillTypeByName(v4)
    if v6 == nil then
      local v12 = tostring(v4)
      print("Warning: Mission fillType '" .. v12 .. "' for windrow definition. Ignoring windrow!")
      return false
    end
    fruitType.hasWindrow = true
    fruitType.windrowName = v6.name
    fruitType.windrowLiterPerSqm = windrowLitersPerSqm
    self.windrowFillTypes[v6.index] = true
    self.fruitTypeIndexToWindrowFillTypeIndex[fruitType.index] = v6.index
    self.fillTypeIndexToFruitTypeIndex[v6.index] = fruitType.index
  end
  return true
end
function FruitTypeManager.loadFruitTypeGrowth(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLBool(v2, v3 .. ".growth#isGrowing")
    local v6 = Utils.getNoNil(v1.isGrowing, true)
    local v4 = Utils.getNoNil(...)
    v1.isGrowing = v4
    if v1.isGrowing then
      v5 = getXMLInt(v2, v3 .. ".growth#numGrowthStates")
      v6 = Utils.getNoNil(v1.numGrowthStates, 0)
      v4 = Utils.getNoNil(...)
      v1.numGrowthStates = v4
      v5 = getXMLBool(v2, v3 .. ".growth#resetsSpray")
      v6 = Utils.getNoNil(v1.resetsSpray, true)
      v4 = Utils.getNoNil(...)
      v1.resetsSpray = v4
      v5 = getXMLInt(v2, v3 .. ".growth#requiresLime")
      v6 = Utils.getNoNil(v1.growthRequiresLime, true)
      v4 = Utils.getNoNil(...)
      v1.growthRequiresLime = v4
      v4 = getXMLInt(v2, v3 .. ".growth#witheredState")
      if not v4 then
      end
      v1.witheredState = v4
      v5 = getXMLInt(v2, v3 .. ".growthGroundTypeChange#state")
      v6 = Utils.getNoNil(v1.groundTypeChangeGrowthState, -1)
      v4 = Utils.getNoNil(...)
      v1.groundTypeChangeGrowthState = v4
      v4 = getXMLString(v2, v3 .. ".growthGroundTypeChange#groundType")
      if v4 ~= nil then
        v5 = FieldGroundType.getByName(v4)
        if v5 == nil then
          Logging.warning("Invalid groundTypeChanged name '%s'. Ignoring growth data!", v4)
          return false
        end
        v1.groundTypeChangeType = v5
      end
      v1.groundTypeChangeMaskTypes = {}
      v5 = getXMLString(v2, v3 .. ".growthGroundTypeChange#groundTypeMask")
      if v5 ~= nil then
        v6 = v5:split(" ")
        for v10, v11 in ipairs(v6) do
          local v12 = FieldGroundType.getByName(v11)
          if v12 ~= nil then
            table.insert(v1.groundTypeChangeMaskTypes, v12)
          else
            Logging.warning("Invalid groundTypeChangeMask name '%s'. Ignoring growth data!", v11)
            return false
          end
        end
      end
      v7 = getXMLBool(v2, v3 .. ".growth#regrows")
      v8 = Utils.getNoNil(v1.regrows, false)
      v6 = Utils.getNoNil(...)
      v1.regrows = v6
      if v1.regrows then
        v7 = getXMLInt(v2, v3 .. ".growth#firstRegrowthState")
        v8 = Utils.getNoNil(v1.firstRegrowthState, 1)
        v6 = Utils.getNoNil(...)
        v1.firstRegrowthState = v6
      end
    end
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeHarvest(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLInt(v2, v3 .. ".harvest#minHarvestingGrowthState")
    local v6 = Utils.getNoNil(v1.minHarvestingGrowthState, 0)
    local v4 = Utils.getNoNil(...)
    v1.minHarvestingGrowthState = v4
    v5 = getXMLInt(v2, v3 .. ".harvest#maxHarvestingGrowthState")
    v6 = Utils.getNoNil(v1.maxHarvestingGrowthState, 0)
    v4 = Utils.getNoNil(...)
    v1.maxHarvestingGrowthState = v4
    v5 = getXMLInt(v2, v3 .. ".harvest#minForageGrowthState")
    v6 = Utils.getNoNil(v1.minForageGrowthState, v1.minHarvestingGrowthState)
    v4 = Utils.getNoNil(...)
    v1.minForageGrowthState = v4
    v5 = getXMLInt(v2, v3 .. ".harvest#cutState")
    v6 = Utils.getNoNil(v1.cutState, 0)
    v4 = Utils.getNoNil(...)
    v1.cutState = v4
    v5 = getXMLBool(v2, v3 .. ".harvest#allowsPartialGrowthState")
    v6 = Utils.getNoNil(v1.allowsPartialGrowthState, false)
    v4 = Utils.getNoNil(...)
    v1.allowsPartialGrowthState = v4
    v5 = getXMLFloat(v2, v3 .. ".harvest#literPerSqm")
    v6 = Utils.getNoNil(v1.literPerSqm, 0)
    v4 = Utils.getNoNil(...)
    v1.literPerSqm = v4
    v5 = getXMLFloat(v2, v3 .. ".harvest#cutHeight")
    v4 = Utils.getNoNil(v5, v1.cutHeight)
    v1.cutHeight = v4
    v5 = getXMLFloat(v2, v3 .. ".harvest#forageCutHeight")
    if not v1.forageCutHeight then
    end
    v4 = v4(v5, v6)
    v1.forageCutHeight = v4
    v5 = getXMLFloat(v2, v3 .. ".harvest#beeYieldBonusPercentage")
    v1.beeYieldBonusPercentage = v5 or 0
    v4 = getXMLString(v2, v3 .. ".harvestGroundTypeChange#groundType")
    if v4 ~= nil then
      v5 = FieldGroundType.getByName(v4)
      if v5 ~= nil then
        v1.harvestGroundTypeChange = v5
      end
    end
    v6 = getXMLString(v2, v3 .. ".harvest#chopperTypeName")
    if (v6 or nil) ~= nil then
      v6 = v6:getChopperTypeIndexByName(v6 or nil)
      v1.chopperTypeIndex = v6
      if v1.chopperTypeIndex == nil then
        Logging.warning("Invalid chopperTypeName name '%s' for '%s'.", v6 or nil, v3 .. ".harvest")
      end
    end
    while true do
      v8 = string.format("%s.harvest.transition(%d)", v3, v7)
      v9 = hasXMLProperty(v2, v8)
      if not v9 then
        break
      end
      v9 = getXMLInt(v2, v8 .. "#srcState")
      v10 = getXMLInt(v2, v8 .. "#targetState")
      if v9 ~= nil and v10 ~= nil then
        if v6 == nil then
        end
        v6[v9] = v10
      end
    end
    v1.harvestTransitions = v6
    v9 = getXMLInt(v2, v3 .. ".harvest#weedState")
    v10 = Utils.getNoNil(v1.harvestWeedState, nil)
    v8 = Utils.getNoNil(...)
    v1.harvestWeedState = v8
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeCultivation(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLBool(v2, v3 .. ".cultivation#needsSeeding")
    local v6 = Utils.getNoNil(v1.needsSeeding, true)
    local v4 = Utils.getNoNil(...)
    v1.needsSeeding = v4
    v5 = getXMLBool(v2, v3 .. ".cultivation#allowsSeeding")
    v6 = Utils.getNoNil(v1.allowsSeeding, true)
    v4 = Utils.getNoNil(...)
    v1.allowsSeeding = v4
    v5 = getXMLFloat(v2, v3 .. ".cultivation#directionSnapAngle")
    v6 = Utils.getNoNil(v1.directionSnapAngle, 0)
    v4 = Utils.getNoNilRad(...)
    v1.directionSnapAngle = v4
    v5 = getXMLBool(v2, v3 .. ".cultivation#alignsToSun")
    v6 = Utils.getNoNil(v1.alignsToSun, false)
    v4 = Utils.getNoNil(...)
    v1.alignsToSun = v4
    v5 = getXMLFloat(v2, v3 .. ".cultivation#seedUsagePerSqm")
    v6 = Utils.getNoNil(v1.seedUsagePerSqm, 0.1)
    v4 = Utils.getNoNil(...)
    v1.seedUsagePerSqm = v4
    v5 = getXMLBool(v2, v3 .. ".cultivation#plantsWeed")
    v6 = Utils.getNoNil(v1.plantsWeed, true)
    v4 = Utils.getNoNil(...)
    v1.plantsWeed = v4
    v5 = getXMLBool(v2, v3 .. ".cultivation#needsRolling")
    v6 = Utils.getNoNil(v1.needsRolling, true)
    v4 = Utils.getNoNil(...)
    v1.needsRolling = v4
    while true do
      v6 = string.format("%s.cultivation.state(%d)", v3, v5)
      v7 = hasXMLProperty(v2, v6)
      if not v7 then
        break
      end
      v7 = getXMLInt(v2, v6 .. "#state")
      if v7 ~= nil then
        if v4 == nil then
        end
        table.insert(v4, v7)
      end
    end
    v1.cultivationStates = v4
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypePreparing(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLString(v2, v3 .. ".preparing#outputName")
    local v4 = Utils.getNoNil(v5, v1.preparingOutputName)
    v1.preparingOutputName = v4
    v5 = getXMLInt(v2, v3 .. ".preparing#minGrowthState")
    local v6 = Utils.getNoNil(v1.minPreparingGrowthState, -1)
    v4 = Utils.getNoNil(...)
    v1.minPreparingGrowthState = v4
    v5 = getXMLInt(v2, v3 .. ".preparing#maxGrowthState")
    v6 = Utils.getNoNil(v1.maxPreparingGrowthState, -1)
    v4 = Utils.getNoNil(...)
    v1.maxPreparingGrowthState = v4
    v5 = getXMLInt(v2, v3 .. ".preparing#preparedGrowthState")
    v6 = Utils.getNoNil(v1.preparedGrowthState, -1)
    v4 = Utils.getNoNil(...)
    v1.preparedGrowthState = v4
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeCropCare(v0, v1, v2, v3)
  if v1 ~= nil then
    local v4 = getXMLInt(v2, v3 .. ".cropCare#maxWeederState")
    if not v4 and not v1.maxWeederState then
    end
    v1.maxWeederState = v4
    v4 = getXMLInt(v2, v3 .. ".cropCare#maxWeederHoeState")
    if not v4 and not v1.maxWeederHoeState then
    end
    v1.maxWeederHoeState = v4
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeOptions(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLBool(v2, v3 .. ".options#increasesSoilDensity")
    local v6 = Utils.getNoNil(v1.increasesSoilDensity, false)
    local v4 = Utils.getNoNil(...)
    v1.increasesSoilDensity = v4
    v5 = getXMLBool(v2, v3 .. ".options#lowSoilDensityRequired")
    v6 = Utils.getNoNil(v1.lowSoilDensityRequired, true)
    v4 = Utils.getNoNil(...)
    v1.lowSoilDensityRequired = v4
    v5 = getXMLBool(v2, v3 .. ".options#consumesLime")
    v6 = Utils.getNoNil(v1.consumesLime, true)
    v4 = Utils.getNoNil(...)
    v1.consumesLime = v4
    v6 = getXMLInt(v2, v3 .. ".options#startSprayState")
    local v7 = Utils.getNoNil(v1.startSprayState, 0)
    v5 = Utils.getNoNil(...)
    v4 = math.max(v5, 0)
    v1.startSprayState = v4
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeMapColors(v0, v1, v2, v3)
  if v1 ~= nil then
    local v5 = getXMLString(v2, v3 .. ".mapColors#default")
    local v6 = getXMLString(v2, v3 .. ".mapColors#colorBlind")
    v6 = GuiUtils.getColorArray(v5 or "1 1 1 1")
    if not v6 then
    end
    v1.defaultMapColor = v6
    v6 = GuiUtils.getColorArray(v5)
    if not v6 then
    end
    v1.colorBlindMapColor = v6
    return true
  end
  return false
end
function FruitTypeManager.loadFruitTypeDestruction(v0, v1, v2, v3)
  if v1 ~= nil then
    if not v1.destruction then
    end
    v1.destruction = v4
    local v4 = hasXMLProperty(v2, v3 .. ".destruction")
    if v4 then
      local v6 = getXMLBool(v2, v3 .. ".destruction#onlyOnField")
      local v7 = Utils.getNoNil(v1.destruction.onlyOnField, true)
      local v5 = Utils.getNoNil(...)
      v1.destruction.onlyOnField = v5
      v5 = getXMLInt(v2, v3 .. ".destruction#filterStart", v1.destruction.filterStart)
      v1.destruction.filterStart = v5
      v5 = getXMLInt(v2, v3 .. ".destruction#filterEnd", v1.destruction.filterEnd)
      v1.destruction.filterEnd = v5
      v5 = getXMLInt(v2, v3 .. ".destruction#state")
      if not v5 and not v1.destruction.state then
      end
      v4.state = v5
      v6 = getXMLBool(v2, v3 .. ".destruction#canBeDestroyed")
      v7 = Utils.getNoNil(v4.canBeDestroyed, true)
      v5 = Utils.getNoNil(...)
      v4.canBeDestroyed = v5
    end
    if not v1.mulcher then
    end
    v1.mulcher = v4
    v6 = getXMLInt(v2, v3 .. ".mulcher#state")
    if not v1.mulcher.state then
    end
    v5 = v5(v6, v7)
    v4.state = v5
    v6 = getXMLBool(v2, v3 .. ".mulcher#hasChopperGroundLayer")
    v7 = Utils.getNoNil(v1.mulcher.hasChopperGroundLayer, true)
    v5 = Utils.getNoNil(...)
    v1.mulcher.hasChopperGroundLayer = v5
    v5 = getXMLString(v2, v3 .. ".harvest#chopperTypeName")
    if (v5 or "CHOPPER_STRAW") ~= nil then
      v6 = v6:getChopperTypeIndexByName(v5 or "CHOPPER_STRAW")
      v1.mulcher.chopperTypeIndex = v6
    end
    v6 = getXMLString(v2, v3 .. ".mapColors#default")
    v7 = getXMLString(v2, v3 .. ".mapColors#colorBlind")
    v7 = GuiUtils.getColorArray(v6 or "1 1 1 1")
    if not v7 then
    end
    v1.defaultMapColor = v7
    v7 = GuiUtils.getColorArray(v6)
    if not v7 then
    end
    v1.colorBlindMapColor = v7
    return true
  end
  return false
end
function FruitTypeManager:getFruitTypeByIndex(index)
  return self.indexToFruitType[index]
end
function FruitTypeManager:getFruitTypeNameByIndex(index)
  if self.indexToFruitType[index] ~= nil then
    return self.indexToFruitType[index].name
  end
  return nil
end
function FruitTypeManager:getFruitTypeByName(name)
  if name then
    local v4 = string.upper(name)
  end
  return v3[v4]
end
function FruitTypeManager:getFruitTypes()
  return self.fruitTypes
end
function FruitTypeManager:getFruitTypeIndexByFillTypeIndex(index)
  return self.fillTypeIndexToFruitTypeIndex[index]
end
function FruitTypeManager:getFruitTypeByFillTypeIndex(index)
  return self.fruitTypes[self.fillTypeIndexToFruitTypeIndex[index]]
end
function FruitTypeManager:getIsFruitGrowing(index, growthState)
  local fruitType = self:getFruitTypeByIndex(index)
  if 0 <= fruitType.minPreparingGrowthState then
    local v5 = math.min(fruitType.minHarvestingGrowthState - 1, fruitType.minPreparingGrowthState - 1)
  end
  if fruitType and 0 < growthState and growthState > v4 then
  end
  return v5
end
function FruitTypeManager:getIsFruitPreparableForHarvest(index, growthState)
  local fruitType = self:getFruitTypeByIndex(index)
  if fruitType and 0 <= fruitType.minPreparingGrowthState and fruitType.minPreparingGrowthState <= growthState and growthState > fruitType.maxPreparingGrowthState then
  end
  return v4
end
function FruitTypeManager:getIsFruitHarvestable(index, growthState)
  local fruitType = self:getFruitTypeByIndex(index)
  if fruitType and fruitType.minHarvestingGrowthState <= growthState and growthState > fruitType.maxHarvestingGrowthState then
  end
  return v4
end
function FruitTypeManager:getIsFruitWithered(index, growthState)
  local fruitType = self:getFruitTypeByIndex(index)
  if 0 <= fruitType.maxPreparingGrowthState then
  end
  if fruitType and growthState ~= v4 then
  end
  return v5
end
function FruitTypeManager:getIsFruitCut(index, growthState)
  local fruitType = self:getFruitTypeByIndex(index)
  if fruitType and growthState ~= fruitType.cutState then
  end
  return v4
end
function FruitTypeManager:getFillTypeIndexByFruitTypeIndex(index)
  if self.fruitTypeIndexToFillType[index] ~= nil then
    return self.fruitTypeIndexToFillType[index].index
  end
  return nil
end
function FruitTypeManager:getFillTypeByFruitTypeIndex(index)
  return self.fruitTypeIndexToFillType[index]
end
function FruitTypeManager:getCutHeightByFruitTypeIndex(index, isForageCutter)
  if isForageCutter then
    if self.indexToFruitType[index] then
      -- if v0.indexToFruitType[v1].forageCutHeight then goto L12 end
      -- if v0.indexToFruitType[v1].cutHeight then goto L12 end
    end
    return 0.15
  end
  if v3 then
    -- if v3.cutHeight then goto L18 end
  end
  return 0.15
end
function FruitTypeManager:addFruitTypeCategory(name, isBaseType)
  local v3 = ClassUtil.getIsValidIndexName(name)
  if not v3 then
    local v8 = tostring(name)
    print("Warning: '" .. v8 .. "' is not a valid name for a fruitTypeCategory. Ignoring fruitTypeCategory!")
    return nil
  end
  v3 = name:upper()
  if isBaseType and self.categories[v3] ~= nil then
    v8 = tostring(v3)
    print("Warning: FruitTypeCategory '" .. v8 .. "' already exists. Ignoring fruitTypeCategory!")
    return nil
  end
  if self.categories[name] == nil then
    self.numCategories = self.numCategories + 1
    self.categories[name] = self.numCategories
    self.indexToCategory[self.numCategories] = name
    self.categoryToFruitTypes[self.numCategories] = {}
  end
  return v3
end
function FruitTypeManager:addFruitTypeToCategory(fruitTypeIndex, categoryIndex)
  if categoryIndex ~= nil and fruitTypeIndex ~= nil then
    table.insert(self.categoryToFruitTypes[categoryIndex], fruitTypeIndex)
    return true
  end
  return false
end
function FruitTypeManager:getFruitTypesByCategoryNames(names, warning)
  local v5 = string.split(names, " ")
  for v9, v10 in pairs(v5) do
    local v11 = v10:upper()
    if self.categoryToFruitTypes[self.categories[v11]] ~= nil then
      for v16, v17 in ipairs(self.categoryToFruitTypes[self.categories[v11]]) do
        if not (v4[v17] == nil) then
          continue
        end
        table.insert(v3, v17)
        v4[v17] = true
      end
    else
      if not (warning ~= nil) then
        continue
      end
      v14 = string.format(warning, v11)
      print(...)
    end
  end
  return v3
end
function FruitTypeManager:getFruitTypesByNames(names, warning)
  local v5 = string.split(names, " ")
  for v9, v10 in pairs(v5) do
    local v11 = v10:upper()
    if self.nameToIndex[v11] ~= nil then
      if not (v4[self.nameToIndex[v11]] == nil) then
        continue
      end
      table.insert(v3, self.nameToIndex[v11])
      v4[self.nameToIndex[v11]] = true
    else
      if not (warning ~= nil) then
        continue
      end
      local v13 = string.format(warning, v11)
      print(...)
    end
  end
  return v3
end
function FruitTypeManager:getFillTypesByFruitTypeNames(names, warning)
  local fruitTypeNames = string.split(names, " ")
  for v9, v10 in pairs(fruitTypeNames) do
    local v12 = self:getFruitTypeByName(v10)
    if v12 ~= nil then
      local v13 = self:getFillTypeByFruitTypeIndex(v12.index)
    end
    if v11 ~= nil then
      if not (v4[v11.index] == nil) then
        continue
      end
      table.insert(v3, v11.index)
      v4[v11.index] = true
    else
      if not (warning ~= nil) then
        continue
      end
      local v14 = string.format(warning, v10)
      print(...)
    end
  end
  return v3
end
function FruitTypeManager:getFillTypesByFruitTypeCategoryName(fruitTypeCategories, warning)
  local v5 = string.split(fruitTypeCategories, " ")
  for v9, v10 in pairs(v5) do
    local v11 = v10:upper()
    if self.categories[v11] ~= nil then
      for v15, v16 in ipairs(self.categoryToFruitTypes[self.categories[v11]]) do
        local v17 = self:getFillTypeByFruitTypeIndex(v16)
        if not (v17 ~= nil) then
          continue
        end
        if not (v4[v17.index] == nil) then
          continue
        end
        table.insert(v3, v17.index)
        v4[v17.index] = true
      end
    else
      if not (warning ~= nil) then
        continue
      end
      v13 = string.format(warning, v11)
      print(...)
    end
  end
  return v3
end
function FruitTypeManager:isFillTypeWindrow(index)
  if index ~= nil then
    if self.windrowFillTypes[index] ~= true then
    end
    return true
  end
  return false
end
function FruitTypeManager:getWindrowFillTypeIndexByFruitTypeIndex(index)
  return self.fruitTypeIndexToWindrowFillTypeIndex[index]
end
function FruitTypeManager:getFillTypeLiterPerSqm(fillType, defaultValue)
  local v5 = self:getFruitTypeIndexByFillTypeIndex(fillType)
  if self.fruitTypes[v5] ~= nil then
    if self.fruitTypes[v5].hasWindrow then
      return self.fruitTypes[v5].windrowLiterPerSqm
    end
    return v3.literPerSqm
  end
  return defaultValue
end
function FruitTypeManager:addFruitTypeConverter(name, isBaseType)
  local v3 = ClassUtil.getIsValidIndexName(name)
  if not v3 then
    local v8 = tostring(name)
    print("Warning: '" .. v8 .. "' is not a valid name for a fruitTypeConverter. Ignoring fruitTypeConverter!")
    return nil
  end
  v3 = name:upper()
  if isBaseType and self.converterNameToIndex[v3] ~= nil then
    v8 = tostring(v3)
    print("Warning: FruitTypeConverter '" .. v8 .. "' already exists. Ignoring fruitTypeConverter!")
    return nil
  end
  if self.converterNameToIndex[name] == nil then
    table.insert(self.fruitTypeConverters, {})
    self.converterNameToIndex[name] = #self.fruitTypeConverters
    self.nameToConverter[name] = {}
  end
  return v3
end
function FruitTypeManager:addFruitTypeConversion(converter, fruitTypeIndex, fillTypeIndex, conversionFactor, windrowConversionFactor)
  if converter ~= nil and self.fruitTypeConverters[converter] ~= nil and fruitTypeIndex ~= nil and fillTypeIndex ~= nil then
    self.fruitTypeConverters[converter][fruitTypeIndex] = {fillTypeIndex = fillTypeIndex, conversionFactor = conversionFactor, windrowConversionFactor = windrowConversionFactor}
  end
end
function FruitTypeManager:getConverterDataByName(converterName)
  if converterName then
    local v4 = converterName:upper()
  end
  return v3[v4]
end
function FruitTypeManager:addModFoliageType(name, filename)
  table.insert(self.modFoliageTypesToLoad, {name = name, filename = filename})
end
local v1 = FruitTypeManager.new()
g_fruitTypeManager = v1
