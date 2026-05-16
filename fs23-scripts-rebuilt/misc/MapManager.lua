-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapManager = {}
local MapManager_mt = Class(MapManager, AbstractManager)
function MapManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function MapManager:initDataStructures()
  self.maps = {}
  self.idToMap = {}
end
function MapManager:addMapItem(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
  if self.idToMap[v1] ~= nil then
    Logging.warning("Duplicate map id '%s'. Ignoring this map definition.", v1)
    return false
  end
  local v17 = tostring(v1)
  table.insert(self.maps, {id = v17, scriptFilename = v2, mapXMLFilename = v4, className = v3, defaultVehiclesXMLFilename = v5, defaultPlaceablesXMLFilename = v6, defaultItemsXMLFilename = v7, title = v8, description = v9, iconFilename = v10, baseDirectory = v11, customEnvironment = v12, isMultiplayerSupported = v13, isModMap = v14, prohibitOtherMods = v15})
  self.idToMap[v1] = {id = v17, scriptFilename = v2, mapXMLFilename = v4, className = v3, defaultVehiclesXMLFilename = v5, defaultPlaceablesXMLFilename = v6, defaultItemsXMLFilename = v7, title = v8, description = v9, iconFilename = v10, baseDirectory = v11, customEnvironment = v12, isMultiplayerSupported = v13, isModMap = v14, prohibitOtherMods = v15}
  return true
end
function MapManager:loadMapFromXML(xmlFile, baseName, modDir, modName, isMultiplayerSupported, isDLCFile, isModMap, isInternalMod)
  local mapId = xmlFile:getString(baseName .. "#id", "")
  if mapId == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#id'.", modName or "Basemap", baseName)
    return false
  end
  if modName ~= nil then
  end
  local v11 = xmlFile:getString(baseName .. "#defaultVehiclesXMLFilename", "")
  local v12 = xmlFile:getString(baseName .. "#defaultPlaceablesXMLFilename", "")
  local v13 = xmlFile:getString(baseName .. "#defaultItemsXMLFilename", "")
  local v14 = xmlFile:getI18NValue(baseName .. ".title", "", v10, true)
  local v15 = xmlFile:getI18NValue(baseName .. ".description", "", v10, true)
  local mapClassName = xmlFile:getString(baseName .. "#className", "Mission00")
  local mapFilename = xmlFile:getString(baseName .. "#filename", "$dataS/scripts/missions/mission00.lua")
  local v18 = xmlFile:getString(baseName .. "#configFilename", "")
  local v19 = xmlFile:getI18NValue(baseName .. ".iconFilename", "", v10, true)
  if modName ~= nil then
  end
  local v21 = mapClassName:find("[^%w_]")
  if v21 ~= nil then
    Logging.error("Failed to load map '%s'. Invalid map class name: '%s'. No whitespaces allowed.", v20, mapClassName)
    return false
  end
  if mapClassName == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#className'.", v20, baseName)
    return false
  end
  if v14 == "" then
    Logging.error("Failed to load map '%s'. Missing element '%s.title'.", v20, baseName)
    return false
  end
  if mapFilename == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#filename'.", v20, baseName)
    return false
  end
  if v11 == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#defaultVehiclesXMLFilename'.", v20, baseName)
    return false
  end
  if v12 == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#defaultPlaceablesXMLFilename'.", v20, baseName)
    return false
  end
  if v13 == "" then
    Logging.error("Failed to load map '%s'. Missing attribute '%s#defaultItemsXMLFilename'.", v20, baseName)
    return false
  end
  if v19 == "" then
    Logging.error("Failed to load map '%s'. Missing element '%s.iconFilename'.", v20, baseName)
    return false
  end
  local v22, v23 = Utils.getFilename(mapFilename, modDir)
  if v23 then
  end
  if not isDLCFile then
    -- if not v8 then goto L205 end
  end
  v23 = xmlFile:getBool(baseName .. ".prohibitOtherMods", nil)
  v23 = Utils.getFilename(v18, modDir)
  local v24, v25 = Utils.getModNameAndBaseDirectory(v23)
  if modName ~= nil then
  end
  local v26 = Utils.getFilename(v19, modDir)
  v26 = Utils.getFilename(v11, modDir)
  v26 = Utils.getFilename(v12, modDir)
  v26 = Utils.getFilename(v13, modDir)
  if GS_IS_CONSOLE_VERSION and not isDLCFile and v21 then
    -- if not v8 then goto L269 end
  end
  v26 = self:addMapItem(mapId, mapFilename, mapClassName, v18, v11, v12, v13, v14, v15, v19, modDir, v24, isMultiplayerSupported, isModMap, v22)
  return v26
  Logging.error("Can't register map '%s' with scripts on consoles.", mapId)
  return false
end
function MapManager.getModNameFromMapId(v0, v1)
  local v2 = string.split(v1, ".")
  if 1 < #v2 then
    return v2[1]
  end
  return nil
end
function MapManager:getMapById(id)
  return self.idToMap[id]
end
function MapManager:removeMapItem(index)
  if self.maps[index] ~= nil then
    self.idToMap[self.maps[index].id] = nil
    table.remove(self.maps, index)
  end
end
function MapManager:getNumOfMaps()
  return table.getn(self.maps)
end
function MapManager:getMapDataByIndex(index)
  return self.maps[index]
end
function MapManager:getMapByConfigFilename(xmlFilename)
  for v5, v6 in ipairs(self.maps) do
    if not (v6.mapXMLFilename == xmlFilename) then
      continue
    end
    return v6
  end
  return nil
end
local v1 = MapManager.new()
g_mapManager = v1
