-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SprayType = nil
SprayTypeManager = {}
local SprayTypeManager_mt = Class(SprayTypeManager, AbstractManager)
function SprayTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function SprayTypeManager:initDataStructures()
  self.numSprayTypes = 0
  self.sprayTypes = {}
  self.nameToSprayType = {}
  self.nameToIndex = {}
  self.indexToName = {}
  self.fillTypeIndexToSprayType = {}
  SprayType = self.nameToIndex
end
function SprayTypeManager:loadDefaultTypes()
  local xmlFile = loadXMLFile("sprayTypes", "data/maps/maps_sprayTypes.xml")
  self:loadSprayTypes(xmlFile, nil, true)
  delete(xmlFile)
end
function SprayTypeManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadDefaultTypes()
  return XMLUtil.loadDataFromMapXML(xmlFile, "sprayTypes", baseDirectory, self, self.loadSprayTypes, missionInfo)
end
function SprayTypeManager:loadSprayTypes(xmlFile, missionInfo, isBaseType)
  while true do
    v5 = string.format("map.sprayTypes.sprayType(%d)", v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = getXMLString(xmlFile, v5 .. "#name")
    v7 = getXMLFloat(xmlFile, v5 .. "#litersPerSecond")
    v8 = getXMLString(xmlFile, v5 .. "#type")
    v11 = getXMLString(xmlFile, v5 .. "#sprayGroundType")
    v9 = v9:getFieldSprayValueByName(...)
    self:addSprayType(v6, v7, v8, v9, isBaseType)
  end
  return true
end
function SprayTypeManager:addSprayType(name, litersPerSecond, typeName, sprayGroundType, isBaseType)
  local v6 = ClassUtil.getIsValidIndexName(name)
  if not v6 then
    local v11 = tostring(name)
    print("Warning: '" .. v11 .. "' is not a valid name for a sprayType. Ignoring sprayType!")
    return nil
  end
  v6 = name:upper()
  v6 = v6:getFillTypeByName(v6)
  if v6 == nil then
    local v12 = tostring(v6)
    print("Warning: Missing fillType '" .. v12 .. "' for sprayType definition. Ignoring sprayType!")
    return
  end
  if isBaseType and self.nameToSprayType[name] ~= nil then
    v12 = tostring(name)
    print("Warning: SprayType '" .. v12 .. "' already exists. Ignoring sprayType!")
    return nil
  end
  if self.nameToSprayType[name] == nil then
    self.numSprayTypes = self.numSprayTypes + 1
    local v8 = Utils.getNoNil(litersPerSecond, 0)
    v8 = typeName:upper()
    if v8 ~= "FERTILIZER" then
    end
    v7.isFertilizer = true
    if typeName ~= "LIME" then
    end
    v7.isLime = true
    if typeName ~= "HERBICIDE" then
    end
    v7.isHerbicide = true
    if not v7.isFertilizer and not v7.isLime and not v7.isHerbicide then
      local v15 = tostring(name)
      v15 = tostring(typeName)
      print("Warning: SprayType '" .. v15 .. "' type '" .. v15 .. "' is invalid. Possible values are 'FERTILIZER', 'HERBICIDE' or 'LIME'. Ignoring sprayType!")
      return nil
    end
    table.insert(self.sprayTypes, v7)
    self.nameToSprayType[name] = v7
    self.nameToIndex[name] = self.numSprayTypes
    self.indexToName[self.numSprayTypes] = name
    self.fillTypeIndexToSprayType[v6.index] = v7
  end
  if not litersPerSecond and not v7.litersPerSecond then
  end
  v7.litersPerSecond = v8
  if not sprayGroundType and not v7.sprayGroundType then
  end
  v7.sprayGroundType = v8
  return v7
end
function SprayTypeManager:getSprayTypeByIndex(index)
  if index ~= nil then
    return self.sprayTypes[index]
  end
  return nil
end
function SprayTypeManager:getSprayTypeByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.nameToSprayType[v2]
  end
  return nil
end
function SprayTypeManager:getFillTypeNameByIndex(index)
  if index ~= nil then
    return self.indexToName[index]
  end
  return nil
end
function SprayTypeManager:getFillTypeIndexByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.nameToIndex[v2]
  end
  return nil
end
function SprayTypeManager:getFillTypeByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.nameToSprayType[v2]
  end
  return nil
end
function SprayTypeManager:getSprayTypeByFillTypeIndex(index)
  if index ~= nil then
    return self.fillTypeIndexToSprayType[index]
  end
  return nil
end
function SprayTypeManager:getSprayTypeIndexByFillTypeIndex(index)
  if index ~= nil and self.fillTypeIndexToSprayType[index] ~= nil then
    return self.fillTypeIndexToSprayType[index].index
  end
  return nil
end
function SprayTypeManager:getSprayTypes()
  return self.sprayTypes
end
local v1 = SprayTypeManager.new()
g_sprayTypeManager = v1
