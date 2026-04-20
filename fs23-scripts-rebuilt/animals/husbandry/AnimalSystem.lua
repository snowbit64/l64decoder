-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalType = nil
AnimalSubType = nil
AnimalSystem = {}
local AnimalSystem_mt = Class(AnimalSystem)
AnimalSystem.SEND_NUM_BITS = 4
function AnimalSystem.new(isServer, mission, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.mission = mission
  v3.subTypeIndexToAnimalData = {}
  v3.types = {}
  v3.nameToType = {}
  v3.nameToTypeIndex = {}
  v3.typeIndexToName = {}
  v3.subTypes = {}
  v3.nameToSubType = {}
  v3.nameToSubTypeIndex = {}
  v3.fillTypeIndexToSubType = {}
  AnimalType = v3.nameToTypeIndex
  AnimalSubType = v3.nameToSubTypeIndex
  return v3
end
function AnimalSystem.delete(v0)
end
function AnimalSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.customEnvironment = missionInfo.customEnvironment
  local v4 = getXMLString(xmlFile, "map.animals#filename")
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x80000004 -> L20
  end
  Logging.xmlInfo(xmlFile, "No animals xml given at 'map.animals#filename'")
  return false
  local v5 = Utils.getFilename(v4, baseDirectory)
  v5 = XMLFile.load("animals", v5)
  if v5 == nil then
    return false
  end
  self:loadAnimals(v5, baseDirectory)
  v5:delete()
  if 0 >= #self.types then
  end
  return true
end
function AnimalSystem.loadAnimals(v0, v1, v2)
  v1:iterate("animals.animal", function(v0, v1)
    if 2 ^ AnimalSystem.SEND_NUM_BITS - 1 <= #u0.types then
      Logging.xmlWarning(u1, "Maximum number of supported animal types reached. Ignoring remaining types")
      return false
    end
    local v2 = v2:getString(v1 .. "#type")
    if v2 == nil then
      Logging.xmlError(u1, "Missing animal type. '%s'", v1)
      return false
    end
    local v3 = v2:upper()
    if u0.nameToTypeIndex[v3] ~= nil then
      Logging.xmlError(u1, "Animal type '%s' already defined. '%s'", v3, v1)
      return false
    end
    v3 = v3:getString(v1 .. ".configFilename")
    if v3 == nil then
      Logging.xmlError(u1, "Missing config file for animal type '%s'. '%s'", v2, v1)
      return false
    end
    local v4 = v4:getString(v1 .. "#clusterClass")
    if v4 == nil then
      Logging.xmlError(u1, "Missing animal clusterClass for '%s'!", v1)
      return false
    end
    local v5 = v5:getString(v1 .. "#statsBreeding")
    local v6 = ClassUtil.getIsValidClassName(v4)
    if not v6 then
      local v9 = tostring(v4)
      Logging.xmlError(u1, "Invalid animal clusterClass name '%s' for '%s'!", v9, v1)
      return false
    end
    v6 = ClassUtil.getClassObject(v4)
    if v6 == nil then
      v9 = tostring(v4)
      Logging.xmlError(u1, "Unknown animal clusterClass '%s' for '%s'!", v9, v1)
      return false
    end
    local v7 = ClassUtil.getClassObject(v4)
    v7:loadAnimalConfig({name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}}, u2)
    v7 = v7:loadSubTypes({name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}}, u1, v1, u2)
    if v7 then
      table.insert(u0.types, {name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}})
      u0.nameToType[v2] = {name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}}
      u0.nameToTypeIndex[v2] = {name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}}.typeIndex
      u0.typeIndexToName[{name = v2, typeIndex = #u0.types + 1, configFilename = v3, clusterClass = v7, statsBreedingName = v5, subTypes = {}}.typeIndex] = v2
    end
  end)
end
function AnimalSystem.loadAnimalConfig(v0, v1, v2)
  v1.animals = {}
  local v3 = Utils.getFilename(v1.configFilename, v2)
  local v4 = XMLFile.load("animalsConfig", v3)
  if v4 == nil then
    return false
  end
  v4:iterate("animalHusbandry.animals.animal", function(v0, v1)
    local v4 = v4:getString(v1 .. ".assets#filename")
    local v3 = Utils.getFilename(v4, u1)
    v4 = v4:getString(v1 .. ".assets#filenamePosed")
    v3 = Utils.getFilename(v4, u1)
    v3:iterate(v1 .. ".assets.texture", function(v0, v1)
      local v4 = v4:getInt(v1 .. "#numTilesU", 1)
      local v3 = math.max(v4, 1)
      v4 = v4:getInt(v1 .. "#tileUIndex", 0)
      v3 = MathUtil.clamp(v4, 0, {numTilesU = v3}.numTilesU - 1)
      v4 = v4:getInt(v1 .. "#numTilesV", 1)
      v3 = math.max(v4, 1)
      v4 = v4:getInt(v1 .. "#tileVIndex", 0)
      v3 = MathUtil.clamp(v4, 0, {numTilesU = v3, tileUIndex = v3, numTilesV = v3}.numTilesV - 1)
      v3 = v3:getBool(v1 .. "#mirrorV", false)
      v3 = v3:getBool(v1 .. "#multi", true)
      table.insert(u1.variations, {numTilesU = v3, tileUIndex = v3, numTilesV = v3, tileVIndex = v3, mirrorV = v3, multi = v3})
    end)
    table.insert(u2.animals, {filename = v3, filenamePosed = v3, variations = {}})
  end)
  v4:delete()
  return true
end
function AnimalSystem.loadSubTypes(v0, v1, v2, v3, v4)
  v2:iterate(v3 .. ".subType", function(v0, v1)
    local v2 = v2:getString(v1 .. "#subType")
    if v2 == nil then
      Logging.xmlError(u0, "Missing animal subtype. '%s'", v1)
      return false
    end
    local v3 = v2:upper()
    if u1.nameToSubTypeIndex[v3] ~= nil then
      Logging.xmlError(u0, "Animal subtype '%s' already defined. '%s'", v3, v1)
      return false
    end
    v3 = v3:getString(v1 .. "#fillTypeName")
    local v4 = v4:getFillTypeIndexByName(v3)
    if v4 == nil then
      Logging.xmlError(u0, "FillType '%s' for animal subtype '%s' not defined!", v3, v1)
      return false
    end
    table.insert(u2.subTypes, {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex}.subTypeIndex)
    local v6 = v6:loadSubType(u2, {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex}, u0, v1, u3)
    if v6 then
      table.insert(u1.subTypes, {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex})
      u1.nameToSubType[v2] = {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex}
      u1.nameToSubTypeIndex[v2] = {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex}.subTypeIndex
      u1.fillTypeIndexToSubType[v4] = {name = v2, subTypeIndex = #u1.subTypes + 1, fillTypeIndex = v4, typeIndex = u2.typeIndex}
    end
  end)
  return true
end
function AnimalSystem:loadSubType(animalType, subType, xmlFile, subTypeKey, baseDirectory)
  local v6 = xmlFile:getString(subTypeKey .. ".rideable#filename")
  if v6 ~= nil then
    local v7 = Utils.getFilename(v6, baseDirectory)
    subType.rideableFilename = v7
  end
  local v8 = self:loadAnimCurve(xmlFile, subTypeKey .. ".input.straw")
  v8 = self:loadAnimCurve(xmlFile, subTypeKey .. ".input.water")
  v8 = self:loadAnimCurve(xmlFile, subTypeKey .. ".input.food")
  subType.input = {straw = v8, water = v8, food = v8}
  local v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".output.milk")
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".output.manure")
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".output.liquidManure")
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".output.pallets")
  subType.output = {milk = v9, manure = v9, liquidManure = v9, pallets = v9}
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".buyPrice")
  subType.buyPrice = v9
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".transportPrice")
  subType.transportPrice = v9
  v9 = self:loadAnimCurve(xmlFile, subTypeKey .. ".sellPrice")
  subType.sellPrice = v9
  v9 = xmlFile:getBool(subTypeKey .. ".reproduction#supported", true)
  subType.supportsReproduction = v9
  v9 = xmlFile:getInt(subTypeKey .. ".reproduction#minAgeMonth", 18)
  subType.reproductionMinAgeMonth = v9
  v9 = xmlFile:getInt(subTypeKey .. ".reproduction#durationMonth", 10)
  subType.reproductionDurationMonth = v9
  local v10 = xmlFile:getFloat(subTypeKey .. ".reproduction#minHealthFactor", 0.75)
  v9 = MathUtil.clamp(v10, 0, 1)
  subType.reproductionMinHealth = v9
  v10 = xmlFile:getInt(subTypeKey .. ".health#increasePerHour", 10)
  v9 = MathUtil.clamp(v10, 0, 100)
  subType.healthIncreaseHour = v9
  v10 = xmlFile:getInt(subTypeKey .. ".health#decreasePerHour", 25)
  v9 = MathUtil.clamp(v10, 0, 100)
  subType.healthDecreaseHour = v9
  v10 = xmlFile:getFloat(subTypeKey .. ".health#thresholdFactor", 0.7)
  v9 = MathUtil.clamp(v10, 0, 1)
  subType.healthThresholdFactor = v9
  v10 = xmlFile:getFloat(subTypeKey .. ".health#ridingThreshold", 0.4)
  v9 = MathUtil.clamp(v10, 0, 1)
  subType.ridingThresholdFactor = v9
  subType.visuals = {}
  xmlFile:iterate(subTypeKey .. ".visuals.visual", function(self, animalType)
    local subType = subType:loadVisualData(u1, u2, animalType, u3)
    if subType ~= nil then
      if #u4.visuals == 0 then
        -- cmp-jump LOP_JUMPXEQKN R4 aux=0x2 -> L50
        Logging.xmlWarning(u2, "First visual must have minAge = 0 for '%s'", animalType)
      elseif subType.minAge <= u4.visuals[#u4.visuals].minAge then
        Logging.xmlWarning(u2, "Visual minAge has to be greater than predecessor minAge. '%s'", animalType)
      end
      if xmlFile then
        table.insert(u4.visuals, subType)
      end
    end
  end)
  if #subType.visuals == 0 then
    Logging.xmlWarning(xmlFile, "No visuals defined for '%s'", subTypeKey)
    return false
  end
  return true
end
function AnimalSystem.loadAnimCurve(v0, animalType, subType)
  local xmlFile = animalType:hasProperty(subType)
  if not xmlFile then
    return nil
  end
  xmlFile = AnimCurve.new(linearInterpolator1)
  animalType:iterate(subType .. ".key", function(v0, animalType)
    local subType = subType:getInt(animalType .. "#ageMonth")
    local xmlFile = xmlFile:getInt(animalType .. "#value")
    if subType == nil then
      Logging.xmlWarning(u0, "Missing ageMonth for '%s'", animalType)
      return
    end
    if xmlFile == nil then
      Logging.xmlWarning(u0, "Missing value for '%s'", animalType)
      return
    end
    subTypeKey:addKeyframe({xmlFile, time = subType})
  end)
  return xmlFile
end
function AnimalSystem:loadVisualData(animalType, xmlFile, key, baseDirectory)
  local baseDirectory = xmlFile:hasProperty(key)
  if not baseDirectory then
    return nil
  end
  baseDirectory = xmlFile:getInt(key .. "#visualAnimalIndex")
  if baseDirectory == nil then
    Logging.xmlError(xmlFile, "Missing animal index for '%s'", key)
    return nil
  end
  if animalType.animals[baseDirectory] == nil then
    Logging.xmlError(xmlFile, "Animal index not defined for '%s'", key)
    return nil
  end
  local v7 = xmlFile:getString(key .. "#image")
  if v7 == nil then
    Logging.xmlError(xmlFile, "Missing store image for '%s'", key)
    return nil
  end
  local storeName = xmlFile:getString(key .. "#name")
  if storeName == nil then
    Logging.xmlError(xmlFile, "Missing store name for '%s'", key)
    return nil
  end
  local v9 = xmlFile:getInt(key .. "#minAge", 0)
  if v9 < 0 then
    Logging.xmlError(xmlFile, "Invalid minAge for '%s'", key)
    return nil
  end
  xmlFile:iterate(key .. ".description", function(self, animalType)
    local xmlFile = xmlFile:getString(animalType)
    if xmlFile ~= nil then
      local baseDirectory = baseDirectory:convertText(xmlFile, u2.customEnvironment)
      table.insert(...)
    end
  end)
  if #{} == 0 then
    Logging.xmlError(xmlFile, "Missing description for '%s'", key)
    return nil
  end
  local v12 = v12:convertText(storeName, self.customEnvironment)
  v12 = Utils.getFilename(v7, baseDirectory)
  v12 = xmlFile:getBool(key .. "#canBeBought", false)
  v12 = table.concat(v10, " ")
  return {store = {name = v12, imageFilename = v12, canBeBought = v12, description = v12}, visualAnimalIndex = baseDirectory, minAge = v9, visualAnimal = v6}
end
function AnimalSystem:getAnimalBuyPrice(subTypeIndex, age)
  if self.subTypes[subTypeIndex] == nil then
    return nil
  end
  return subTypeKey:get(age)
end
function AnimalSystem:getAnimalTransportFee(subTypeIndex, age)
  if self.subTypes[subTypeIndex] == nil then
    return 0
  end
  return subTypeKey:get(age)
end
function AnimalSystem:getVisualAnimalIndexByAge(subTypeIndex, age)
  local visual = self:getVisualByAge(subTypeIndex, age)
  if visual == nil then
    return nil
  end
  return visual.visualAnimalIndex
end
function AnimalSystem:getVisualByAge(subTypeIndex, age)
  if self.subTypes[subTypeIndex] == nil then
    return nil
  end
  for v8, v9 in ipairs(xmlFile.visuals) do
    if not (v9.minAge <= age) then
      continue
    end
  end
  return subTypeKey
end
function AnimalSystem:getSubTypeByIndex(index)
  return self.subTypes[index]
end
function AnimalSystem:getSubTypeByName(name)
  local subTypeKey = name:upper()
  return self.nameToSubType[subTypeKey]
end
function AnimalSystem:getSubTypeIndexByName(name)
  local subTypeKey = name:upper()
  return self.nameToSubTypeIndex[subTypeKey]
end
function AnimalSystem:getTypeByIndex(index)
  return self.types[index]
end
function AnimalSystem:getTypeByName(name)
  local subTypeKey = name:upper()
  return self.nameToType[subTypeKey]
end
function AnimalSystem:getTypeIndexByName(name)
  local subTypeKey = name:upper()
  return self.nameToTypeIndex[subTypeKey]
end
function AnimalSystem:getSubTypeByFillTypeIndex(fillTypeIndex)
  return self.fillTypeIndexToSubType[fillTypeIndex]
end
function AnimalSystem:getSubTypeIndexByFillTypeIndex(fillTypeIndex)
  if self.fillTypeIndexToSubType[fillTypeIndex] ~= nil then
    return self.fillTypeIndexToSubType[fillTypeIndex].subTypeIndex
  end
  return nil
end
function AnimalSystem:getTypeIndexBySubTypeIndex(subTypeIndex)
  return self.subTypes[subTypeIndex].typeIndex
end
function AnimalSystem:getTypes()
  return self.types
end
function AnimalSystem:getClusterClassBySubTypeIndex(subTypeIndex)
  local subType = self:getSubTypeByIndex(subTypeIndex)
  local xmlFile = self:getTypeByIndex(subType.typeIndex)
  return xmlFile.clusterClass
end
function AnimalSystem:createClusterFromSubTypeIndex(subTypeIndex)
  local subType = self:getSubTypeByIndex(subTypeIndex)
  local xmlFile = self:getTypeByIndex(subType.typeIndex)
  local subTypeKey = xmlFile.clusterClass.new()
  subTypeKey.subTypeIndex = subTypeIndex
  return subTypeKey
end
