-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HelperManager = {}
local HelperManager_mt = Class(HelperManager, AbstractManager)
function HelperManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function HelperManager:initDataStructures()
  self.numHelpers = 0
  self.helpers = {}
  self.nameToIndex = {}
  self.indexToHelper = {}
  self.availableHelpers = {}
end
function HelperManager:loadDefaultTypes(missionInfo, baseDirectory)
  local xmlFile = loadXMLFile("helpers", "data/maps/maps_helpers.xml")
  self:loadHelpers(xmlFile, missionInfo, baseDirectory, true)
  delete(xmlFile)
end
function HelperManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadDefaultTypes()
  return XMLUtil.loadDataFromMapXML(xmlFile, "helpers", baseDirectory, self, self.loadHelpers, missionInfo, baseDirectory)
end
function HelperManager:loadHelpers(xmlFile, missionInfo, baseDirectory, isBaseType)
  while true do
    v6 = string.format("map.helpers.helper(%d)", v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#name")
    v8 = getXMLString(xmlFile, v6 .. "#title")
    v9 = getXMLString(xmlFile, v6 .. "#modelFilename")
    v11 = getXMLString(xmlFile, v6 .. "#color")
    v10 = string.getVectorN(v11, 3)
    if not v10 then
    end
    self:addHelper(v7, v8, v10, v9, baseDirectory, isBaseType)
  end
  return true
end
function HelperManager:addHelper(name, title, color, modelFilename, baseDir, isBaseType)
  local v7 = ClassUtil.getIsValidIndexName(name)
  if not v7 then
    local v12 = tostring(name)
    print("Warning: '" .. v12 .. "' is not a valid name for a helper. Ignoring helper!")
    return nil
  end
  v7 = name:upper()
  if isBaseType and self.nameToIndex[v7] ~= nil then
    v12 = tostring(v7)
    print("Warning: Helper '" .. v12 .. "' already exists. Ignoring helper!")
    return nil
  end
  if self.helpers[name] == nil then
    if modelFilename ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R4 aux=0x8000000e -> L63
    end
    local v13 = tostring(name)
    print("Warning: Missing helper config file for helper '" .. v13 .. "'. Ignoring helper!")
    return nil
    self.numHelpers = self.numHelpers + 1
    if title ~= nil then
      local v8 = v8:convertText(title)
    end
    v8 = Utils.getFilename(modelFilename, baseDir)
    v7.modelFilename = v8
    self.helpers[name] = v7
    self.nameToIndex[name] = self.numHelpers
    self.indexToHelper[self.numHelpers] = v7
    table.insert(self.availableHelpers, v7)
    return v7
  end
  if title ~= nil then
    v8 = v8:convertText(title)
    v7.title = v8
  end
  if modelFilename ~= nil then
    v8 = Utils.getFilename(modelFilename, baseDir)
    v7.modelFilename = v8
  end
  return v7
end
function HelperManager:getRandomHelper()
  local v3 = math.random(1, #self.availableHelpers)
  return self.availableHelpers[v3]
end
function HelperManager:getRandomHelperModel()
  local v4 = math.random(1, self.numHelpers)
  return self.indexToHelper[v4].modelFilename
end
function HelperManager:getRandomIndex()
  return math.random(1, self.numHelpers)
end
function HelperManager:getHelperByIndex(index)
  if index ~= nil then
    return self.indexToHelper[index]
  end
  return nil
end
function HelperManager:getHelperByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.helpers[v2]
  end
  return nil
end
function HelperManager:useHelper(helper)
  for v5, v6 in pairs(self.availableHelpers) do
    if not (v6 == helper) then
      continue
    end
    table.remove(self.availableHelpers, v5)
    return true
  end
  return false
end
function HelperManager:releaseHelper(helper)
  table.insert(self.availableHelpers, helper)
end
function HelperManager:getNumOfHelpers()
  return self.numHelpers
end
local v1 = HelperManager.new()
g_helperManager = v1
