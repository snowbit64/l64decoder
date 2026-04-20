-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ItemSystem = {}
local ItemSystem_mt = Class(ItemSystem)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("savegame_items")
  ItemSystem.xmlSchemaSavegame = v1
end)
v1:addInitSchemaFunction(function()
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.BOOL, "items#loadAnyFarmInSingleplayer", "Load any farm in singleplayer", false)
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.STRING, "items.item(?)#className", "Class name")
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.INT, "items.item(?)#id", "Save id")
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.BOOL, "items.item(?)#defaultFarmProperty", "Is property of default farm", false)
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.INT, "items.item(?)#farmId", "Farm id")
  ItemSystem.xmlSchemaSavegame:register(XMLValueType.STRING, "items.item(?)#modName", "Name of mod")
end)
function ItemSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.itemsToSave = {}
  v2.sortedItemsToSave = {}
  v2.loadItemsById = {}
  return v2
end
function ItemSystem:delete()
  for v4, v5 in pairs(self.itemsToSave) do
    v6:delete()
  end
end
function ItemSystem:deleteAll()
  for v5, v6 in pairs(self.itemsToSave) do
    v7:delete()
  end
  return v1
end
function ItemSystem:loadItems(xmlFilename, resetItems, missionInfo, missionDynamicInfo, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  local xmlFile = XMLFile.load("ItemsXMLFile", xmlFilename, ItemSystem.xmlSchemaSavegame)
  self:loadItemsFromXML(xmlFile, xmlFilename, resetItems, missionInfo, missionDynamicInfo, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
end
function ItemSystem:loadItemsFromXML(xmlFile, xmlFilename, resetItems, missionInfo, missionDynamicInfo, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  self.loadItemsById = {}
  local v10 = self:loadNextItemsFromSavegame({xmlFile = xmlFile, xmlFilename = xmlFilename, resetItems = resetItems, missionInfo = missionInfo, missionDynamicInfo = missionDynamicInfo, index = 0, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
  if not v10 then
    self:loadItemsFromSavegameFinished({xmlFile = xmlFile, xmlFilename = xmlFilename, resetItems = resetItems, missionInfo = missionInfo, missionDynamicInfo = missionDynamicInfo, index = 0, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
  end
end
function ItemSystem:loadNextItemsFromSavegame(loadingData)
  if g_currentMission.cancelLoading then
    return false
  end
  local v6 = loadingData.xmlFile:getValue("items#loadAnyFarmInSingleplayer", false)
  loadingData.index = loadingData.index + 1
  local v8 = string.format("items.item(%d)", loadingData.index)
  local v9 = loadingData.xmlFile:hasProperty(v8)
  if not v9 then
    return false
  end
  v9 = v2:getValue(v8 .. "#className")
  if v9 == nil then
    Logging.xmlError(v2, "No className given for item '%s'", v8)
    self:loadItemsFromSavegameStepFinished(nil, false, loadingData)
    return true
  end
  local v10 = v2:getValue(v8 .. "#defaultFarmProperty")
  local v11 = v2:getValue(v8 .. "#farmId")
  if v10 and v3.isCompetitiveMultiplayer then
    local v13 = v13:getFarmById(v11)
    if v13 == nil then
    end
  end
  if v10 and v3.loadDefaultFarm and not v4.isMultiplayer and v11 ~= FarmManager.SINGLEPLAYER_FARM_ID then
  end
  if not v3.isValid and not not v10 and not v13 then
  end
  local v15 = v2:getValue(v8 .. "#modName")
  if v15 ~= nil and not g_modIsLoaded[v15] then
    Logging.xmlError(v2, "Could not load item because mod '%s' is not available or loaded for '%s'", v15, v8)
    self:loadItemsFromSavegameStepFinished(nil, false, loadingData)
    return true
  end
  if not v14 then
    Logging.xmlInfo(v2, "Item is not allowed to be loaded", v8)
    self:loadItemsFromSavegameStepFinished(nil, false, loadingData)
    return true
  end
  local v16 = ClassUtil.getClassObject(v9)
  if v16 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x80000000 -> L176
  end
  Logging.xmlError(v2, "Class '%s' not defined  for item '%s'", v9, v8)
  self:loadItemsFromSavegameStepFinished(nil, false, loadingData)
  return true
  local v18 = v18:getIsServer()
  local v19 = v19:getIsClient()
  local v17 = v16.new(...)
  loadingData.key = v8
  loadingData.className = v9
  loadingData.loadDefaultProperty = v13
  loadingData.defaultItemsToSPFarm = v6
  loadingData.farmId = v11
  if v17.loadAsyncFromXMLFile ~= nil then
    v17:loadAsyncFromXMLFile(v2, v8, v5, self.loadItemsFromSavegameStepFinished, self, loadingData)
  elseif v17.loadFromXMLFile ~= nil then
    v18 = v17:loadFromXMLFile(v2, v8, v5)
    self:loadItemsFromSavegameStepFinished(v17, v18, loadingData)
  end
  return true
end
function ItemSystem:loadItemsFromSavegameStepFinished(item, success, loadingData)
  if g_currentMission.cancelLoading then
    self:loadItemsFromSavegameFinished(loadingData)
    return
  end
  if item ~= nil then
    if success then
      if loadingData.loadDefaultProperty and loadingData.defaultItemsToSPFarm and loadingData.farmId ~= FarmManager.SINGLEPLAYER_FARM_ID then
        item:setOwnerFarmId(FarmManager.SINGLEPLAYER_FARM_ID)
      end
      local v4 = v4:getValue(loadingData.key .. "#id")
      if v4 ~= nil then
        self.loadItemsById[v4] = item
      end
      item:register()
      self:addItemToSave(item)
    else
      Logging.xmlError(loadingData.xmlFile, "Item '%s' could not be loaded correctly", item.configFileName)
      item:delete()
    end
  end
  v4 = self:loadNextItemsFromSavegame(loadingData)
  if not v4 then
    self:loadItemsFromSavegameFinished(loadingData)
  end
end
function ItemSystem.loadItemsFromSavegameFinished(v0, loadingData)
  v2:addTask(function()
    v0:delete()
    if u0.asyncCallbackFunction ~= nil then
      u0.asyncCallbackFunction(u0.asyncCallbackObject, u0.asyncCallbackArguments)
    end
  end)
end
function ItemSystem:getItemBySaveId(saveId)
  return self.loadItemsById[saveId]
end
function ItemSystem:save(xmlFilename, usedModNames)
  local xmlFile = XMLFile.create("itemsXMLFile", xmlFilename, "items", ItemSystem.xmlSchemaSavegame)
  if xmlFile ~= nil then
    self:saveToXML(xmlFile, usedModNames)
    xmlFile:delete()
  end
end
function ItemSystem:saveToXML(xmlFile, usedModNames)
  if xmlFile ~= nil then
    for v8, v9 in pairs(self.itemsToSave) do
      if v9.item.getNeedsSaving ~= nil then
        local v10 = v10:getNeedsSaving()
        if not v10 then
          continue
        end
      end
      v9.item.currentSavegameItemId = v3
    end
    for v8, v9 in pairs(self.itemsToSave) do
      if v9.item.getNeedsSaving ~= nil then
        v10 = v10:getNeedsSaving()
        if not v10 then
          continue
        end
      end
      v10 = string.format("%s.item(%d)", "items", v4)
      xmlFile:setValue(v10 .. "#className", v9.className)
      xmlFile:setValue(v10 .. "#id", v9.item.currentSavegameItemId)
      local v12 = ClassUtil.getClassModName(v9.className)
      if v9.item.customEnvironment == nil then
      end
      if v11 ~= nil then
        if usedModNames ~= nil then
          usedModNames[v11] = v11
        end
        xmlFile:setValue(v10 .. "#modName", v11)
      end
      if v12 ~= nil and usedModNames ~= nil then
        usedModNames[v12] = v12
      end
      v13:saveToXMLFile(xmlFile, v10, usedModNames)
    end
    xmlFile:save()
  end
end
function ItemSystem:addItemToSave(item)
  if item.saveToXMLFile == nil then
    Logging.error("Adding item which does not have a saveToXMLFile function")
    return
  end
  if self.mission.objectsToClassName[item] == nil then
    Logging.error("Adding item which does not have a className registered. Use registerObjectClassName(object,className)")
    return
  end
  if self.itemsToSave[item] ~= nil then
    return
  end
  self.itemsToSave[item] = {item = item, className = self.mission.objectsToClassName[item]}
  table.addElement(self.sortedItemsToSave, self.itemsToSave[item])
end
function ItemSystem:removeItemToSave(item)
  table.removeElement(self.sortedItemsToSave, self.itemsToSave[item])
  self.itemsToSave[item] = nil
end
