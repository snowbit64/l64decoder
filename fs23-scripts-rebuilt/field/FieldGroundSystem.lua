-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldGroundSystem = {}
FieldDensityMap = {GROUND_TYPE = 1, GROUND_ANGLE = 2, SPRAY_TYPE = 3, SPRAY_LEVEL = 4, LIME_LEVEL = 5, PLOW_LEVEL = 6, STUBBLE_SHRED = 7, ROLLER_LEVEL = 8}
FieldChopperType = {CHOPPER_STRAW = 1, CHOPPER_MAIZE = 2}
local FieldGroundSystem_mt = Class(FieldGroundSystem)
function FieldGroundSystem.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.baseDirectory = ""
  v1:initDataStructures()
  return v1
end
function FieldGroundSystem:initDataStructures()
  self.fieldGroundTypeValue = {}
  self.fieldGroundTypeTyreTrackColor = {}
  self.fieldSprayTypeValue = {}
  self.fieldSprayTypeTyreTrackColor = {}
  self.fieldChopperTypeValue = {}
  self.fieldChopperTypeTyreTrackColor = {}
  self.densityMaps = {}
end
function FieldGroundSystem:loadGroundTypes(filename)
  local xmlFile = XMLFile.load("fieldGround", filename)
  self:loadDensityMapFromXML(FieldDensityMap.GROUND_TYPE, xmlFile, "fieldGround.densityMaps.groundTypes")
  self:loadDensityMapFromXML(FieldDensityMap.GROUND_ANGLE, xmlFile, "fieldGround.densityMaps.groundAngle")
  self:loadDensityMapFromXML(FieldDensityMap.SPRAY_TYPE, xmlFile, "fieldGround.densityMaps.sprayTypes")
  self:loadDensityMapFromXML(FieldDensityMap.SPRAY_LEVEL, xmlFile, "fieldGround.densityMaps.sprayLevel", 3)
  if Platform.gameplay.usePlowCounter then
    self:loadDensityMapFromXML(FieldDensityMap.PLOW_LEVEL, xmlFile, "fieldGround.densityMaps.plowLevel")
  end
  if Platform.gameplay.useLimeCounter then
    self:loadDensityMapFromXML(FieldDensityMap.LIME_LEVEL, xmlFile, "fieldGround.densityMaps.limeLevel")
  end
  if Platform.gameplay.useStubbleShred then
    self:loadDensityMapFromXML(FieldDensityMap.STUBBLE_SHRED, xmlFile, "fieldGround.densityMaps.stubbleShredLevel")
  end
  if Platform.gameplay.useRolling then
    self:loadDensityMapFromXML(FieldDensityMap.ROLLER_LEVEL, xmlFile, "fieldGround.densityMaps.rollerLevel")
  end
  local v4, v5, v6 = self:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  self.groundTypesFirstChannel = v5
  self.groundTypesNumChannels = v6
  v4 = self:getMaxValue(FieldDensityMap.GROUND_TYPE)
  self.groundTypesMaxValue = v4
  v4, v5, v6 = self:getDensityMapData(FieldDensityMap.GROUND_ANGLE)
  self.angleFirstChannel = v5
  self.angleNumChannels = v6
  v4 = self:getMaxValue(FieldDensityMap.GROUND_ANGLE)
  self.angleMaxValue = v4
  v4, v5, v6 = self:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
  self.sprayTypesFirstChannel = v5
  self.sprayTypesNumChannels = v6
  v4 = self:getMaxValue(FieldDensityMap.SPRAY_TYPE)
  self.sprayTypesMaxValue = v4
  self:loadGroundIdFromXML(FieldGroundType.STUBBLE_TILLAGE, xmlFile, "fieldGround.densityMaps.groundTypes.stubbleTillage", FieldGroundType.STUBBLE_TILLAGE, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.CULTIVATED, xmlFile, "fieldGround.densityMaps.groundTypes.cultivated", FieldGroundType.CULTIVATED, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.SEEDBED, xmlFile, "fieldGround.densityMaps.groundTypes.seedbed", FieldGroundType.SEEDBED, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.ROLLED_SEEDBED, xmlFile, "fieldGround.densityMaps.groundTypes.rolledSeedbed", FieldGroundType.ROLLED_SEEDBED, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.PLOWED, xmlFile, "fieldGround.densityMaps.groundTypes.plowed", FieldGroundType.PLOWED, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.SOWN, xmlFile, "fieldGround.densityMaps.groundTypes.sown", FieldGroundType.SOWN, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.DIRECT_SOWN, xmlFile, "fieldGround.densityMaps.groundTypes.directSown", FieldGroundType.DIRECT_SOWN, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.PLANTED, xmlFile, "fieldGround.densityMaps.groundTypes.planted", FieldGroundType.PLANTED, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.RIDGE, xmlFile, "fieldGround.densityMaps.groundTypes.ridge", FieldGroundType.RIDGE, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.ROLLER_LINES, xmlFile, "fieldGround.densityMaps.groundTypes.rollerLines", FieldGroundType.ROLLER_LINES, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.HARVEST_READY, xmlFile, "fieldGround.densityMaps.groundTypes.harvestReady", FieldGroundType.HARVEST_READY, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.HARVEST_READY_OTHER, xmlFile, "fieldGround.densityMaps.groundTypes.harvestReadyOther", FieldGroundType.HARVEST_READY_OTHER, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.GRASS, xmlFile, "fieldGround.densityMaps.groundTypes.grass", FieldGroundType.GRASS, {1, 1, 1, 1})
  self:loadGroundIdFromXML(FieldGroundType.GRASS_CUT, xmlFile, "fieldGround.densityMaps.groundTypes.grassCut", FieldGroundType.GRASS_CUT, {1, 1, 1, 1})
  self:loadSprayIdFromXML(FieldSprayType.FERTILIZER, xmlFile, "fieldGround.densityMaps.sprayTypes.fertilizer", FieldSprayType.FERTILIZER, {1, 1, 1, 1})
  self:loadSprayIdFromXML(FieldSprayType.MANURE, xmlFile, "fieldGround.densityMaps.sprayTypes.manure", FieldSprayType.MANURE, {1, 1, 1, 1})
  self:loadSprayIdFromXML(FieldSprayType.LIQUID_MANURE, xmlFile, "fieldGround.densityMaps.sprayTypes.liquidManure", FieldSprayType.LIQUID_MANURE, {1, 1, 1, 1})
  if Platform.gameplay.useLimeCounter then
    self:loadSprayIdFromXML(FieldSprayType.LIME, xmlFile, "fieldGround.densityMaps.sprayTypes.lime", FieldSprayType.LIME, {1, 1, 1, 1})
  end
  self:loadChopperIdFromXML(FieldChopperType.CHOPPER_STRAW, xmlFile, "fieldGround.densityMaps.sprayTypes.straw", 5, {1, 1, 1, 1})
  self:loadChopperIdFromXML(FieldChopperType.CHOPPER_MAIZE, xmlFile, "fieldGround.densityMaps.sprayTypes.maize", 6, {1, 1, 1, 1})
  if not self.firstSowableValue then
  end
  v4 = xmlFile:getInt(v6, v7)
  self.firstSowableValue = v4
  if not self.lastSowableValue then
  end
  v4 = xmlFile:getInt(v6, v7)
  self.lastSowableValue = v4
  if not self.firstSowingValue then
  end
  v4 = xmlFile:getInt(v6, v7)
  self.firstSowingValue = v4
  if not self.lastSowingValue then
  end
  v4 = xmlFile:getInt(v6, v7)
  self.lastSowingValue = v4
  xmlFile:delete()
end
function FieldGroundSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  self.baseDirectory = baseDirectory
  self:loadGroundTypes("data/maps/maps_fieldGround.xml")
  local v4 = getXMLString(xmlFile, "map.fieldGround#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, baseDirectory)
    self:loadGroundTypes(v5)
  end
  return true
end
function FieldGroundSystem:delete()
  for v4, v5 in pairs(self.densityMaps) do
    if not (v5.map ~= nil) then
      continue
    end
    if not v5.canBeDeleted then
      continue
    end
    delete(v5.map)
  end
  self.densityMaps = {}
end
function FieldGroundSystem:initTerrain(mission, terrainNode, terrainDetailId)
  for v7, v8 in pairs(self.densityMaps) do
    if v8.useTerrainDetailId then
      v8.map = terrainDetailId
      local size = getDensityMapSize(terrainDetailId)
      v8.width = size
      v8.height = size
      local v10 = getDensityMapFilename(terrainDetailId)
      v8.filename = v10
      v8.isBitVector = false
      v8.canBeDeleted = false
    else
      size = createBitVectorMap("densityMap")
      v8.map = size
      if mission.missionInfo.isValid and v8.filename ~= nil then
      end
      if v11 then
        local v13 = loadBitVectorMapFromFile(v8.map, size, v8.numChannels)
        if not v13 then
          local v18 = tostring(size)
          Logging.warning("Loading density map file '" .. v18 .. "' failed! Loading default density map.")
        end
      end
      if not v11 then
        if v8.path ~= nil then
          v13 = loadBitVectorMapFromFile(v8.map, v8.path, v8.numChannels)
          -- if v13 then goto L110 end
          v18 = tostring(v8.path)
          Logging.error("Loading default density map file '" .. v18 .. "' failed!")
        else
        end
      end
      if v12 then
        loadBitVectorMapNew(v8.map, 1024, 1024, v8.numChannels, false)
        Logging.error("Missing field density map data for '%s'! Creating empty default", v8.key)
      end
      local v13, v14 = getBitVectorMapSize(v8.map)
      v8.width = v13
      v8.height = v14
      v8.isBitVector = true
      v8.canBeDeleted = true
    end
  end
end
function FieldGroundSystem:addDensityMapSyncer(densityMapSyncer)
  for v6, v7 in pairs(self.densityMaps) do
    if not (v2[v7.map] == nil) then
      continue
    end
    densityMapSyncer:addDensityMap(v7.map)
    v2[v7.map] = true
  end
end
function FieldGroundSystem:getDensityMaps()
  return self.densityMaps
end
function FieldGroundSystem:loadDensityMapFromXML(identifier, xmlFile, key, forcedMaxValue)
  local v5 = xmlFile:hasProperty(key)
  if not v5 then
    return
  end
  if not self.densityMaps[identifier] then
  end
  local v6 = xmlFile:getInt(key .. "#firstChannel")
  if not v6 and not v5.firstChannel then
  end
  v5.firstChannel = v6
  v6 = xmlFile:getInt(key .. "#numChannels")
  if not v6 and not v5.numChannels then
  end
  v5.numChannels = v6
  local v8 = Utils.getNoNil(v5.canBeDeleted, false)
  v6 = Utils.getNoNil(...)
  v5.canBeDeleted = v6
  local v7 = xmlFile:getBool(key .. "#useDefaultTerrainDetail")
  v8 = Utils.getNoNil(v5.useTerrainDetailId, false)
  v6 = Utils.getNoNil(...)
  v5.useTerrainDetailId = v6
  if not v5.useTerrainDetailId then
    v6 = xmlFile:getString(key .. "#filename")
    if v6 ~= nil then
      v7 = Utils.getFilename(v6, self.baseDirectory)
      v5.path = v7
      v7 = Utils.getFilenameFromPath(v5.path)
      v5.filename = v7
    end
    if v5.path == nil then
      Logging.xmlError(xmlFile, "Invalid file given for densityMap in '%s'. Using default terrain detail instead", key)
      v5.useTerrainDetailId = true
    end
  end
  v7 = math.max(v5.maxValue or 2 ^ v5.numChannels - 1, 2 ^ v5.numChannels - 1)
  v8 = xmlFile:getInt(key .. "#maxValue")
  if v8 ~= nil then
    local v9 = math.min(v8, 2 ^ v5.numChannels - 1)
  end
  if forcedMaxValue ~= nil then
    v9 = math.min(v7, forcedMaxValue)
  end
  v5.maxValue = v7
  v5.key = key
  self.densityMaps[identifier] = v5
  return true
end
function FieldGroundSystem:loadGroundIdFromXML(identifier, xmlFile, key, defaultValue, defaultColor)
  local v6 = xmlFile:getInt(key .. "#value")
  if not v6 and not self.fieldGroundTypeValue[identifier] then
  end
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Missing xml element '%s'! Using default value '%d'", key, defaultValue)
  end
  if self.groundTypesMaxValue < v6 then
    Logging.xmlError(xmlFile, "Invalid value for xml element '%s'! Using value '0'", key)
  end
  self.fieldGroundTypeValue[identifier] = v6
  local colorStr = xmlFile:getString(key .. "#tireTrackColor")
  if colorStr ~= nil then
    local v10 = colorStr:getVector()
    if #{} ~= 4 then
      Logging.xmlError(xmlFile, "Invalid number of values (should be 4) for xml element '%s'!", key)
    end
  end
  if not v8 and not self.fieldGroundTypeTyreTrackColor[identifier] then
  end
  v9[identifier] = v10
end
function FieldGroundSystem:loadSprayIdFromXML(identifier, xmlFile, key, defaultValue, defaultColor)
  local v6 = xmlFile:hasProperty(key)
  if not v6 then
    return
  end
  v6 = xmlFile:getInt(key .. "#value")
  if not v6 and not self.fieldSprayTypeValue[identifier] then
  end
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Missing xml element '%s'! Using default value '%d'", key, defaultValue)
  end
  if v6 == self.sprayTypesMaxValue then
    Logging.xmlError(xmlFile, "Value '%d' is reserved and cannot be used in xml element '%s'! Using value '0'", self.sprayTypesMaxValue, key)
  end
  if self.sprayTypesMaxValue < v6 then
    Logging.xmlError(xmlFile, "Invalid value for xml element '%s'! Using value '0'", key)
  end
  self.fieldSprayTypeValue[identifier] = v6
  local colorStr = xmlFile:getString(key .. "#tireTrackColor")
  if colorStr ~= nil then
    local v10 = colorStr:getVector()
    if #{} ~= 4 then
      Logging.xmlError(xmlFile, "Invalid number of values (should be 4) for xml element '%s'!", key)
    end
  end
  if not v8 and not self.fieldSprayTypeTyreTrackColor[identifier] then
  end
  v9[identifier] = v10
end
function FieldGroundSystem:loadChopperIdFromXML(identifier, xmlFile, key, defaultValue, defaultColor)
  local v6 = xmlFile:hasProperty(key)
  if not v6 then
    return
  end
  v6 = xmlFile:getInt(key .. "#value")
  if not v6 and not self.fieldChopperTypeValue[identifier] then
  end
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Missing xml element '%s'! Using default value '%d'", key, defaultValue)
  end
  if v6 == self.sprayTypesMaxValue then
    Logging.xmlError(xmlFile, "Value '%d' is reserved and cannot be used in xml element '%s'! Using value '0'", self.sprayTypesMaxValue, key)
  end
  if self.sprayTypesMaxValue < v6 then
    Logging.xmlError(xmlFile, "Invalid value for xml element '%s'! Using value '0'", key)
  end
  self.fieldChopperTypeValue[identifier] = v6
  local colorStr = xmlFile:getString(key .. "#tireTrackColor")
  if colorStr ~= nil then
    local v10 = colorStr:getVector()
    if #{} ~= 4 then
      Logging.xmlError(xmlFile, "Invalid number of values (should be 4) for xml element '%s'!", key)
    end
  end
  if not v8 and not self.fieldChopperTypeTyreTrackColor[v6] then
  end
  v9[v6] = v10
end
function FieldGroundSystem:getFieldGroundValueByName(groundTypeName)
  local groundType = FieldGroundType.getByName(groundTypeName)
  if groundType == nil then
    return nil
  end
  return self.fieldGroundTypeValue[groundType]
end
function FieldGroundSystem:getFieldGroundValue(groundType)
  return self.fieldGroundTypeValue[groundType] or 0
end
function FieldGroundSystem:getFieldGroundTyreTrackColor(densityBits)
  local sprayMask = bitShiftLeft(2 ^ self.sprayTypesNumChannels - 1, self.sprayTypesFirstChannel)
  local groundMask = bitShiftLeft(2 ^ self.groundTypesNumChannels - 1, self.groundTypesFirstChannel)
  local v5 = bitAND(densityBits, groundMask)
  local v4 = bitShiftRight(v5, self.groundTypesFirstChannel)
  local v6 = bitAND(densityBits, sprayMask)
  v5 = bitShiftRight(v6, self.sprayTypesFirstChannel)
  if 0 < v5 and self.fieldSprayTypeTyreTrackColor[v5] == nil then
  end
  if v6 ~= nil then
    return v6[1], v6[2], v6[3], v6[4]
  end
  return 0, 0, 0, 0
end
function FieldGroundSystem:getFieldSprayValueByName(sprayTypeName)
  if sprayTypeName == nil then
    return 0
  end
  local v2 = string.upper(sprayTypeName)
  if FieldSprayType[v2] == nil then
    return 0
  end
  return self.fieldSprayTypeValue[v2] or 0
end
function FieldGroundSystem:getFieldSprayValue(sprayType)
  return self.fieldSprayTypeValue[sprayType] or 0
end
function FieldGroundSystem:getSowableRange()
  return self.firstSowableValue, self.lastSowableValue
end
function FieldGroundSystem:getSowingRange()
  return self.firstSowingValue, self.lastSowingValue
end
function FieldGroundSystem:getGroundAngleMaxValue()
  return self.angleMaxValue
end
function FieldGroundSystem.getChopperTypeIndexByName(v0, v1)
  if v1 == nil then
    return 0
  end
  local v2 = string.upper(v1)
  return FieldChopperType[v2]
end
function FieldGroundSystem:getChopperTypeValue(chopperType)
  return self.fieldChopperTypeValue[chopperType]
end
function FieldGroundSystem:getDensityMapData(levelType)
  if self.densityMaps[levelType] == nil then
    return nil
  end
  return v2.map, v2.firstChannel, v2.numChannels
end
function FieldGroundSystem:getMaxValue(levelType)
  if self.densityMaps[levelType] == nil then
    return nil
  end
  return v2.maxValue
end
function FieldGroundSystem:getSize(levelType)
  if self.densityMaps[levelType] == nil then
    return nil, nil
  end
  return v2.width, v2.height
end
