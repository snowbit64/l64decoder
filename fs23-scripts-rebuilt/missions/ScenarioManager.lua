-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ScenarioManager = {}
local ScenarioManager_mt = Class(ScenarioManager, AbstractManager)
function ScenarioManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function ScenarioManager:initDataStructures()
  self.scenarios = {}
  self.idToScenario = {}
end
function ScenarioManager:addScenarioItem(id, configXMLFilename, mapXMLFilename, vehiclesXMLFilename, placeablesXMLFilename, itemsXMLFilename, difficulty, title, description, iconFilename, isMod)
  if self.idToScenario[id] ~= nil then
    print("Warning: Duplicate scenario id (" .. id .. "). Ignoring this scenario definition.")
    return
  end
  local v13 = tostring(id)
  table.insert(self.scenarios, {id = v13, configXMLFilename = configXMLFilename, mapXMLFilename = mapXMLFilename, vehiclesXMLFilename = vehiclesXMLFilename, placeablesXMLFilename = placeablesXMLFilename, itemsXMLFilename = itemsXMLFilename, title = title, description = description, iconFilename = iconFilename, isMod = isMod, difficulty = difficulty})
  self.idToScenario[id] = {id = v13, configXMLFilename = configXMLFilename, mapXMLFilename = mapXMLFilename, vehiclesXMLFilename = vehiclesXMLFilename, placeablesXMLFilename = placeablesXMLFilename, itemsXMLFilename = itemsXMLFilename, title = title, description = description, iconFilename = iconFilename, isMod = isMod, difficulty = difficulty}
end
function ScenarioManager:loadScenarioFromXML(xmlFile, baseName, modDir, modName, isDLCFile)
  local scenarioId = xmlFile:getString(baseName .. "#id", "")
  local v7 = xmlFile:getString(baseName .. "#mapXMLFilename", "")
  local v8 = xmlFile:getString(baseName .. "#vehiclesXMLFilename", "")
  local v9 = xmlFile:getString(baseName .. "#placeablesXMLFilename", "")
  local v10 = xmlFile:getString(baseName .. "#itemsXMLFilename", "")
  local v11 = xmlFile:getI18NValue(baseName .. ".title", "", modName, true)
  local v12 = xmlFile:getI18NValue(baseName .. ".description", "", modName, true)
  local v13 = xmlFile:getString(baseName .. "#configXMLFilename", "")
  local v14 = xmlFile:getI18NValue(baseName .. ".iconFilename", "", modName, true)
  local v15 = xmlFile:getInt(baseName .. "#difficulty", 1)
  if scenarioId == "" then
    local v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#id'.")
    return
  end
  if v11 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing element: '" .. v23 .. ".title'.")
    return
  end
  if v12 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing element: '" .. v23 .. ".description'.")
    return
  end
  if v7 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#mapXMLFilename'.")
    return
  end
  if v13 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#configXMLFilename'.")
    return
  end
  if v8 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#vehiclesXMLFilename'.")
    return
  end
  if v9 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#placeablesXMLFilename'.")
    return
  end
  if v10 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing attribute '" .. v23 .. "#itemsXMLFilename'.")
    return
  end
  if v14 == "" then
    v23 = tostring(modName)
    v23 = tostring(baseName)
    print("Error: Failed to load mod scenario '" .. v23 .. "'. Missing element: '" .. v23 .. ".iconFilename'.")
    return
  end
  local v16 = Utils.getFilename(v13, modDir)
  local v17 = Utils.getFilename(v14, modDir)
  v17 = Utils.getFilename(v7, modDir)
  v17 = Utils.getFilename(v8, modDir)
  v17 = Utils.getFilename(v9, modDir)
  v17 = Utils.getFilename(v10, modDir)
  self:addScenarioItem(modName .. "." .. scenarioId, v16, v17, v17, v17, v17, v15, v11, v12, v17, true)
end
function ScenarioManager.getModNameFromScenarioId(v0, v1)
  local v2 = string.split(v1, ".")
  if 1 < #v2 then
    return v2[1]
  end
  return nil
end
function ScenarioManager:getScenarioById(id)
  return self.idToScenario[id]
end
function ScenarioManager:removeScenarioItem(index)
  if self.scenarios[index] ~= nil then
    self.idToMap[self.scenarios[index].id] = nil
    table.remove(self.scenarios, index)
  end
end
function ScenarioManager:getNumScenarios()
  return table.getn(self.scenarios)
end
function ScenarioManager:getScenarioByIndex(index)
  return self.scenarios[index]
end
local v1 = ScenarioManager.new()
g_scenarioManager = v1
