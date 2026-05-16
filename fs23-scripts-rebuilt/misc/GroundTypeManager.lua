-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GroundTypeManager = {}
local GroundTypeManager_mt = Class(GroundTypeManager, AbstractManager)
function GroundTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function GroundTypeManager:initDataStructures()
  self.groundTypes = {}
  self.groundTypeMappings = {}
  self.terrainLayerMapping = {}
end
function GroundTypeManager:loadGroundTypes()
  self.groundTypes = {}
  local xmlFile = loadXMLFile("fuitTypes", "data/maps/groundTypes.xml")
  while true do
    v3 = string.format("groundTypes.groundType(%d)", v2)
    v4 = hasXMLProperty(xmlFile, v3)
    if not v4 then
      break
    end
    v4 = getXMLString(xmlFile, v3 .. "#name")
    if v4 ~= nil then
      v7 = getXMLString(xmlFile, v3 .. "#fallbacks")
      v6 = string.split(v7, " ")
      self.groundTypes[v4] = {fallbacks = v6}
    else
      Logging.xmlWarning(xmlFile, "Missing groundType name for '%s'", v3)
    end
  end
  delete(xmlFile)
end
function GroundTypeManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadGroundTypes()
  return XMLUtil.loadDataFromMapXML(xmlFile, "groundTypeMappings", baseDirectory, self, self.loadGroundTypeMappings, missionInfo)
end
function GroundTypeManager:loadGroundTypeMappings(xmlFile, missionInfo)
  while true do
    v4 = string.format("map.groundTypeMappings.groundTypeMapping(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLString(xmlFile, v4 .. "#type")
    if v5 ~= nil then
      v6 = getXMLString(xmlFile, v4 .. "#layer")
      if v6 ~= nil then
        v7 = getXMLString(xmlFile, v4 .. "#title")
        if v7 ~= nil then
          self.groundTypeMappings[{typeName = v5, layerName = v6, title = v7}.typeName] = {typeName = v5, layerName = v6, title = v7}
          -- goto L73  (LOP_JUMP +20)
        end
        Logging.xmlWarning(xmlFile, "Missing groudTypeMapping title for '%s'", v4)
        -- goto L73  (LOP_JUMP +13)
      end
      Logging.xmlWarning(xmlFile, "Missing groudTypeMapping layerName for '%s'", v4)
    else
      Logging.xmlWarning(xmlFile, "Missing groudTypeMapping type for '%s'", v4)
    end
  end
  return true
end
function GroundTypeManager:initTerrain(terrainRootNode)
  self.terrainLayerMapping = {}
  local numLayers = getTerrainNumOfLayers(terrainRootNode)
  -- TODO: structure LOP_FORNPREP (pc 11, target 21)
  local v6 = getTerrainLayerName(terrainRootNode, 0)
  self.terrainLayerMapping[v6] = 0
  -- TODO: structure LOP_FORNLOOP (pc 20, target 12)
end
function GroundTypeManager:getTerrainTitleByType(typeName)
  return self.groundTypeMappings[typeName].title
end
function GroundTypeManager:getTerrainLayerByType(typeName)
  if typeName ~= nil and self.groundTypeMappings[typeName] ~= nil then
  end
  if v2 ~= nil and self.terrainLayerMapping[v2] ~= nil then
    return self.terrainLayerMapping[v2]
  end
  if self.groundTypes[typeName] ~= nil then
    for v7, v8 in pairs(self.groundTypes[typeName].fallbacks) do
      if self.groundTypeMappings[v8] ~= nil then
        if not (self.groundTypeMappings[v8].layerName ~= nil) then
          continue
        end
        if not (self.terrainLayerMapping[self.groundTypeMappings[v8].layerName] ~= nil) then
          continue
        end
        return self.terrainLayerMapping[self.groundTypeMappings[v8].layerName]
      else
        Logging.warning("Unknown fallback layer '%s' for ground type '%s'", v8, typeName)
      end
    end
  end
  return 0
end
local v1 = GroundTypeManager.new()
g_groundTypeManager = v1
