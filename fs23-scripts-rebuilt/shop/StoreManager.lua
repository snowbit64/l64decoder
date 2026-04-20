-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StoreManager = {}
local StoreManager_mt = Class(StoreManager, AbstractManager)
StoreManager.CATEGORY_TYPE = {NONE = "", VEHICLE = "VEHICLE", TOOL = "TOOL", OBJECT = "OBJECT", PLACEABLE = "PLACEABLE"}
function StoreManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function StoreManager:initDataStructures()
  self.numOfCategories = 0
  self.numOfPacks = 0
  self.categories = {}
  self.packs = {}
  self.items = {}
  self.xmlFilenameToItem = {}
  self.modStoreItems = {}
  self.modStorePacks = {}
  self.specTypes = {}
  self.nameToSpecType = {}
  self.vramUsageFunctions = {}
  self.constructionCategoriesByName = {}
  self.constructionCategories = {}
end
function StoreManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  local categoryXMLFile = XMLFile.load("storeCategoriesXML", "dataS/storeCategories.xml")
  categoryXMLFile:iterate("categories.category", function(self, xmlFile)
    missionInfo:loadCategoryFromXML(u1, xmlFile, "")
  end)
  categoryXMLFile:delete()
  v5 = XMLFile.load("storePacksXML", "dataS/storePacks.xml")
  v5:iterate("storePacks.storePack", function(self, xmlFile)
    local missionInfo = missionInfo:getString(xmlFile .. "#name")
    local baseDirectory = baseDirectory:getString(xmlFile .. "#title")
    local categoryXMLFile = categoryXMLFile:getString(xmlFile .. "#image")
    if baseDirectory ~= nil then
      local v5 = baseDirectory:sub(1, 6)
      if v5 == "$l10n_" then
        local v7 = baseDirectory:sub(7)
        v5 = v5:getText(...)
      end
    end
    v5:addPack(missionInfo, baseDirectory, categoryXMLFile, "")
  end)
  v5:delete()
  for v9, v10 in ipairs(self.modStorePacks) do
    self:addPack(v10.name, v10.title, v10.imageFilename, v10.baseDir)
  end
  if Platform.hasContruction then
    v6 = XMLFile.load("constructionXML", "dataS/constructionCategories.xml")
    if v6 ~= nil then
      v7 = v6:getString("constructionCategories#defaultIconFilename")
      v8 = v6:getVector("constructionCategories#refSize", {1024, 1024}, 2)
      v6:iterate("constructionCategories.category", function(self, xmlFile)
        local missionInfo = missionInfo:getString(xmlFile .. "#name")
        local v5 = v5:getString(xmlFile .. "#title")
        local baseDirectory = baseDirectory:convertText(...)
        local categoryXMLFile = categoryXMLFile:getString(xmlFile .. "#iconFilename")
        if not categoryXMLFile then
        end
        v5 = v5:getVector(xmlFile .. "#refSize", u2, 2)
        local v7 = v7:getString(xmlFile .. "#iconUVs", "0 0 1 1")
        local v6 = GuiUtils.getUVs(v7, v5)
        v7:addConstructionCategory(missionInfo, baseDirectory, categoryXMLFile, v6, "")
        v7:iterate(xmlFile .. ".tab", function(self, xmlFile)
          local missionInfo = missionInfo:getString(xmlFile .. "#name")
          local v5 = v5:getString(xmlFile .. "#title")
          local baseDirectory = baseDirectory:convertText(...)
          local categoryXMLFile = categoryXMLFile:getString(xmlFile .. "#iconFilename")
          if not categoryXMLFile then
          end
          v5 = v5:getVector(xmlFile .. "#refSize", u2, 2)
          local v7 = v7:getString(xmlFile .. "#iconUVs", "0 0 1 1")
          local v6 = GuiUtils.getUVs(v7, v5)
          v7:addConstructionTab(u4, missionInfo, baseDirectory, categoryXMLFile, v6, "")
        end)
      end)
      v6:delete()
    end
  end
  v6 = self:getDefaultStoreItemsFilename()
  self:loadItemsFromXML(v6, "", nil)
  if xmlFile ~= nil then
    v7 = getXMLString(xmlFile, "map.storeItems#filename")
    if v7 ~= nil then
      v8 = Utils.getFilename(v7, baseDirectory)
      self:loadItemsFromXML(v8, baseDirectory, missionInfo.customEnvironment)
    end
  end
  for v10, v11 in ipairs(self.modStoreItems) do
    v12:addSubtask(function()
      self:loadItem(u1.xmlFilename, u1.baseDir, u1.customEnvironment, u1.isMod, u1.isBundleItem, u1.dlcTitle, u1.extraContentId)
    end)
  end
  addConsoleCommand("gsStoreItemsReload", "Reloads storeItem data", "consoleCommandReloadStoreItems", self)
  return true
end
function StoreManager.unloadMapData(v0)
  local v2 = v2:superClass()
  v2.unloadMapData(v0)
  removeConsoleCommand("gsStoreItemsReload")
end
function StoreManager.getDefaultStoreItemsFilename(v0)
  return "dataS/storeItems.xml"
end
function StoreManager.loadItemsFromXML(v0, v1, v2, v3)
  local v4 = XMLFile.load("storeItemsXML", v1)
  v4:iterate("storeItems.storeItem", function(v0, v1)
    local v2 = v2:getString(v1 .. "#xmlFilename")
    local v3 = v3:getString(v1 .. "#extraContentId")
    v4:addSubtask(function()
      local v2 = Utils.getFilename(u0, u1)
      local v3, v4 = Utils.getModNameAndBaseDirectory(v2)
      if v3 ~= nil then
        local v5 = v5:getModByName(v3)
        if v5 ~= nil then
        end
      end
      v5:loadItem(u0, u1, u3, v0, false, v1, u4)
    end)
  end)
  v4:delete()
end
function StoreManager:loadCategoryFromXML(xmlFile, key, baseDir, customEnv)
  local v5 = xmlFile:getString(key .. "#name")
  local v6 = xmlFile:getString(key .. "#title")
  local imageFilename = xmlFile:getString(key .. "#image")
  local v8 = xmlFile:getString(key .. "#type")
  local v9 = xmlFile:getInt(key .. "#orderId")
  if v6 ~= nil then
    local v10 = v6:sub(1, 6)
    if v10 == "$l10n_" then
      local v12 = v6:sub(7)
      v10 = v10:getText(v12, customEnv)
    end
  end
  self:addCategory(v5, v6, imageFilename, v8, baseDir, v9)
end
function StoreManager:addCategory(name, title, imageFilename, type, baseDir, orderId)
  if name ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L10
  end
  print("Warning: Could not register store category. Name is missing or empty!")
  return false
  local v7 = ClassUtil.getIsValidIndexName(name)
  if not v7 then
    local v12 = tostring(name)
    print("Warning: '" .. v12 .. "' is no valid name for a category!")
    return false
  end
  if title ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000000 -> L38
  end
  print("Warning: Could not register store category. Title is missing or empty!")
  return false
  if imageFilename ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000000 -> L48
  end
  print("Warning: Could not register store category. Image is missing or empty!")
  return false
  if baseDir == nil then
    print("Warning: Could not register store category. Basedirectory not defined!")
    return false
  end
  v7 = name:upper()
  if GS_PLATFORM_SWITCH and v7 == "COINS" then
    return false
  end
  if self.categories[name] == nil then
    self.numOfCategories = self.numOfCategories + 1
    local v9 = Utils.getFilename(imageFilename, baseDir)
    if StoreManager.CATEGORY_TYPE[type] ~= nil then
      -- if v4 then goto L106 end
    end
    v8["type"] = StoreManager.CATEGORY_TYPE.NONE
    if not orderId then
    end
    v8.orderId = v9
    v7[name] = v8
    return true
  end
  return false
end
function StoreManager:removeCategory(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if not v2 then
    local v7 = tostring(name)
    print("Warning: '" .. v7 .. "' is no valid name for a category!")
    return
  end
  v2 = name:upper()
  for v5, v6 in pairs(self.items) do
    if not (v6.category == name) then
      continue
    end
    v6.category = "MISC"
  end
  self.categories[name] = nil
end
function StoreManager:getCategoryByName(name)
  if name ~= nil then
    local v4 = name:upper()
    return self.categories[v4]
  end
  return nil
end
function StoreManager:addConstructionCategory(name, title, iconFilename, iconUVs, baseDir)
  local v6 = name:upper()
  if self.constructionCategoriesByName[v6] ~= nil then
    Logging.warning("Construction category '%s' already exists.", v6)
    return
  end
  local v7 = Utils.getFilename(iconFilename, baseDir)
  table.insert(self.constructionCategories, {name = name, title = title, iconFilename = v7, iconUVs = iconUVs, tabs = {}, index = #self.constructionCategories + 1})
  self.constructionCategoriesByName[name] = {name = name, title = title, iconFilename = v7, iconUVs = iconUVs, tabs = {}, index = #self.constructionCategories + 1}
end
function StoreManager:getConstructionCategoryByName(name)
  if name ~= nil then
    local v4 = name:upper()
    return self.constructionCategoriesByName[v4]
  end
  return nil
end
function StoreManager:addConstructionTab(categoryName, name, title, iconFilename, iconUVs, baseDir)
  local category = self:getConstructionCategoryByName(categoryName)
  if category == nil then
    return
  end
  local v11 = name:upper()
  v11 = Utils.getFilename(iconFilename, baseDir)
  table.insert(category.tabs, {name = v11, title = title, iconFilename = v11, iconUVs = iconUVs, index = #category.tabs + 1})
end
function StoreManager:getConstructionTabByName(name, categoryName)
  local category = self:getConstructionCategoryByName(categoryName)
  if category ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L10
  end
  return nil
  local v4 = name:upper()
  for v7, v8 in ipairs(category.tabs) do
    if not (v8.name == name) then
      continue
    end
    return v8
  end
  return nil
end
function StoreManager:getConstructionCategories()
  return self.constructionCategories
end
function StoreManager:addVRamUsageFunction(func)
  table.insert(self.vramUsageFunctions, func)
end
function StoreManager:addSpecType(name, profile, loadFunc, getValueFunc, species, relatedConfigurations, configDataFunc)
  local v8 = ClassUtil.getIsValidIndexName(name)
  if not v8 then
    local v13 = tostring(name)
    print("Warning: '" .. v13 .. "' is no valid name for a spec type!")
    return
  end
  if self.nameToSpecType == nil then
    printCallstack()
  end
  if self.nameToSpecType[name] ~= nil then
    print("Error: spec type name '" .. name .. "' is already in use!")
    return
  end
  if not relatedConfigurations then
  end
  v8.relatedConfigurations = v9
  v8.configDataFunc = configDataFunc
  self.nameToSpecType[name] = v8
  table.insert(self.specTypes, v8)
end
function StoreManager:getSpecTypes()
  return self.specTypes
end
function StoreManager:getSpecTypeByName(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if not v2 then
    local v7 = tostring(name)
    print("Warning: '" .. v7 .. "' is no valid name for a spec type!")
    return
  end
  return self.nameToSpecType[name]
end
function StoreManager:getSpecTypeByProfile(v1)
  -- TODO: structure LOP_FORNPREP (pc 5, target 18)
  if self.specTypes[1].profile == v1 then
    return self.specTypes[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 6)
end
function StoreManager:addItem(storeItem)
  if self.xmlFilenameToItem[storeItem.xmlFilenameLower] ~= nil then
    if self.xmlFilenameToItem[storeItem.xmlFilenameLower].isBundleItem and not storeItem.isBundleItem then
      self.xmlFilenameToItem[storeItem.xmlFilenameLower].isBundleItem = storeItem.isBundleItem
      self.xmlFilenameToItem[storeItem.xmlFilenameLower].showInStore = storeItem.showInStore
    end
    return false
  end
  table.insert(self.items, storeItem)
  storeItem.id = #self.items
  self.xmlFilenameToItem[storeItem.xmlFilenameLower] = storeItem
  return true
end
function StoreManager:removeItemByIndex(index)
  if self.items[index] ~= nil then
    self.xmlFilenameToItem[self.items[index].xmlFilenameLower] = nil
    local numItems = table.getn(self.items)
    if index < numItems then
      self.items[index] = self.items[numItems]
      self.items[index].id = index
    end
    table.remove(self.items, numItems)
  end
end
function StoreManager:getItems()
  return self.items
end
function StoreManager:getItemByIndex(index)
  if index ~= nil then
    return self.items[index]
  end
  return nil
end
function StoreManager:getItemByXMLFilename(xmlFilename)
  if xmlFilename ~= nil then
    local v4 = xmlFilename:lower()
    return self.xmlFilenameToItem[v4]
  end
end
function StoreManager.getIsItemUnlocked(v0, v1)
  if v1 ~= nil then
    if v1.extraContentId ~= nil then
      local v2 = v2:getIsItemIdUnlocked(v1.extraContentId)
      -- if not v2 then goto L16 end
    end
    return true
  end
  return false
end
function StoreManager:getItemsByCombinationData(combinationData)
  if combinationData.xmlFilename ~= nil then
    local v5 = v5:lower()
    if self.xmlFilenameToItem[v5] == nil then
      v5 = v5:lower()
      if self.xmlFilenameToItem[v5] == nil then
        Logging.warning("Could not find combination vehicle '%s'", combinationData.xmlFilename)
      end
    end
    local v4 = self:getIsItemUnlocked(v3)
    -- if not v4 then goto L264 end
    table.insert(v2, {storeItem = v3})
    return v2
  end
  for v6, v7 in ipairs(self.items) do
    local v8 = self:getIsItemUnlocked(v7)
    if not v8 then
      continue
    end
    if combinationData.filterCategories ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 69, target 91)
      for v14 = 1, #v7.categoryNames do
        local v15 = v15:upper()
        if v15 == v7.categoryNames[v14] then
        else
          -- TODO: structure LOP_FORNLOOP (pc 89, target 76)
        end
      end
    end
    if not v8 then
      continue
    end
    if combinationData.filterSpec == nil then
      table.insert(v2, {storeItem = v7})
    else
      local desc = self:getSpecTypeByName(combinationData.filterSpec)
      if not (desc ~= nil) then
        continue
      end
      if not (desc.species == v7.species) then
        continue
      end
      StoreItemUtil.loadSpecsFromXML(v7)
      local v10, v11 = desc.getValueFunc(v7, nil, nil, nil, true, true)
      if not (v10 ~= nil) then
        continue
      end
      if combinationData.filterSpec == "weight" then
      end
      if v12 <= v10 then
        -- if v10 > v13 then goto L158 end
        table.insert(v2, {storeItem = v7})
      elseif desc.configDataFunc ~= nil then
        v14 = desc.configDataFunc(v7)
        if not (v14 ~= nil) then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 171, target 262)
        if v12 <= v14[1].value and v14[1].value <= v13 then
          {}[v14[1].name] = v14[1].index
          table.insert(v2, {storeItem = v7, configData = {}})
        end
        -- TODO: structure LOP_FORNLOOP (pc 199, target 172)
      else
        if not (0 < #desc.relatedConfigurations) then
          continue
        end
        if not (v7.configurations ~= nil) then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 216, target 262)
        if v7.configurations[desc.relatedConfigurations[1]] ~= nil then
          -- TODO: structure LOP_FORNPREP (pc 231, target 261)
          {}[desc.relatedConfigurations[1]] = 1
          local v23 = desc.getValueFunc(v7, nil, {}, nil, true, true)
          if v12 <= v23 and v23 <= v13 then
            table.insert(v2, {storeItem = v7, configData = {}})
          end
          -- TODO: structure LOP_FORNLOOP (pc 260, target 232)
        end
        -- TODO: structure LOP_FORNLOOP (pc 261, target 217)
      end
    end
  end
  return v2
end
function StoreManager:getItemByCustomEnvironment(customEnvironment)
  for v6, v7 in ipairs(self.items) do
    if not (v7.customEnvironment == customEnvironment) then
      continue
    end
    table.insert(v2, v7)
  end
  return v2
end
function StoreManager:addModStoreItem(xmlFilename, baseDir, customEnvironment, isMod, isBundleItem, dlcTitle)
  table.insert(self.modStoreItems, {xmlFilename = xmlFilename, baseDir = baseDir, customEnvironment = customEnvironment, isMod = isMod, isBundleItem = isBundleItem, dlcTitle = dlcTitle})
end
function StoreManager:loadItem(rawXMLFilename, baseDir, customEnvironment, isMod, isBundleItem, dlcTitle, extraContentId, ignoreAdd)
  local desc = Utils.getFilename(rawXMLFilename, baseDir)
  local v10 = loadXMLFile("storeItemXML", desc)
  if v10 == 0 then
    return nil
  end
  local v11 = getXMLRootName(v10)
  local v14 = getXMLString(v10, v11 .. ".storeData" .. ".species")
  if (v14 or "vehicle") == "vehicle" then
  elseif (v14 or "vehicle") == "handTool" then
  else
    if (v14 or "vehicle") == "placeable" then
    end
  end
  if v14 ~= nil then
    delete(v10)
    local v15 = XMLFile.load("storeManagerLoadItemXml", desc, v14)
  else
    Logging.xmlError(v10, "Unable to get xml schema for species '%s' in '%s'", v13, desc)
    return nil
  end
  v15 = Utils.getFilenameInfo(desc, true)
  local v16 = v15:sub(1, 1)
  local v17 = v15:sub(1, 1)
  v17 = v17:lower()
  if v16 ~= v17 then
    Logging.xmlDevWarning(v10, "Filename is starting with upper case character. Please follow the lower camel case naming convention.")
  end
  v17 = v15:sub(1, 1)
  v16 = tonumber(...)
  if v16 ~= nil then
    Logging.xmlDevWarning(v10, "Filename is starting with a number. Please start always with a character.")
  end
  v16 = desc:split("/")
  if 4 <= #v16 and v16[#v16 - 3] == "vehicles" then
    local v19 = v19:lower()
    local v20 = v20:lower()
    local v18 = string.startsWith(...)
    if v18 then
      Logging.xmlDevWarning(v10, "Vehicle filename '%s' starts with brand name '%s'.", v15, v16[#v16 - 2])
    end
  end
  v18 = v10:hasProperty(v12)
  if not v18 then
    Logging.xmlError(v10, "No storeData found. StoreItem will be ignored!")
    v10:delete()
    return nil
  end
  v19 = v10:getValue(v12 .. ".name", nil, customEnvironment, true)
  if v19 == nil then
    Logging.xmlWarning(v10, "Name missing for storeitem. Ignoring store item!")
  end
  if v19 ~= nil then
    v20 = v10:getValue(v12 .. ".name#params")
    if v20 ~= nil then
      local v21 = v20:split("|")
      -- TODO: structure LOP_FORNPREP (pc 194, target 204)
      local v24 = v24:convertText(v21[1], customEnvironment)
      v21[1] = v24
      -- TODO: structure LOP_FORNLOOP (pc 203, target 195)
      local v23 = unpack(v21)
      v21 = string.format(...)
    end
  end
  v20 = v10:getValue(v12 .. ".image", "")
  if v20 == "" then
  end
  if v20 == nil then
    v21 = v10:getValue(v12 .. ".showInStore", true)
    if v21 then
      Logging.xmlWarning(v10, "Image icon is missing for storeitem. Ignoring store item!")
    end
  end
  if not v18 then
    v10:delete()
    return nil
  end
  local v22 = desc:lower()
  if v20 then
    v22 = Utils.getFilename(v20, baseDir)
  end
  v21.imageFilename = v22
  v21.species = v13
  v22 = StoreItemUtil.getFunctionsFromXML(v10, v12, customEnvironment)
  v21.functions = v22
  v21.specs = nil
  v22 = StoreItemUtil.getBrandIndexFromXML(v10, v12)
  v21.brandIndex = v22
  v22 = v10:getValue(v12 .. ".brand", "")
  v21.brandNameRaw = v22
  v22 = v10:getValue(v12 .. ".brand#customIcon")
  v21.customBrandIcon = v22
  v22 = v10:getValue(v12 .. ".brand#imageOffset")
  v21.customBrandIconOffset = v22
  if v21.customBrandIcon ~= nil then
    v22 = Utils.getFilename(v21.customBrandIcon, baseDir)
    v21.customBrandIcon = v22
  end
  v22 = v10:getValue(v12 .. ".canBeSold", true)
  v21.canBeSold = v22
  v22 = v10:getValue(v12 .. ".showInStore", not isBundleItem)
  v21.showInStore = v22
  v21.isBundleItem = isBundleItem
  v22 = v10:getValue(v12 .. ".allowLeasing", true)
  v21.allowLeasing = v22
  v22 = v10:getValue(v12 .. ".maxItemCount")
  v21.maxItemCount = v22
  v22 = v10:getValue(v12 .. ".rotation", 0)
  v21.rotation = v22
  v22 = v10:getValue(v12 .. ".shopDynamicTitle", false)
  v21.shopDynamicTitle = v22
  v22 = v10:getValue(v12 .. ".shopTranslationOffset", nil, true)
  v21.shopTranslationOffset = v22
  v22 = v10:getValue(v12 .. ".shopRotationOffset", nil, true)
  v21.shopRotationOffset = v22
  v22 = v10:getValue(v12 .. ".shopIgnoreLastComponentPositions", false)
  v21.shopIgnoreLastComponentPositions = v22
  v22 = v10:getValue(v12 .. ".shopLoadingDelay#initial")
  v21.shopInitialLoadingDelay = v22
  v22 = v10:getValue(v12 .. ".shopLoadingDelay#config")
  v21.shopConfigLoadingDelay = v22
  v22 = v10:getValue(v12 .. ".shopHeight", 0)
  v21.shopHeight = v22
  v22 = v10:getValue(v12 .. ".financeCategory")
  v21.financeCategory = v22
  v22 = v10:getValue(v12 .. ".shopFoldingState", 0)
  v21.shopFoldingState = v22
  v22 = v10:getValue(v12 .. ".shopFoldingTime")
  v21.shopFoldingTime = v22
  v22, v23, v24 = StoreItemUtil.getVRamUsageFromXML(v10, v12)
  for v28, v29 in ipairs(self.vramUsageFunctions) do
    local v30, v31 = v29(v10)
  end
  v21.sharedVramUsage = v22
  v21.perInstanceVramUsage = v23
  v21.ignoreVramUsage = v24
  v21.dlcTitle = dlcTitle
  v21.isMod = isMod
  v21.customEnvironment = customEnvironment
  v21.categoryNames = {}
  v25 = v10:getValue(v12 .. ".category")
  v26 = v25:split(" ")
  -- TODO: structure LOP_FORNPREP (pc 513, target 539)
  v30 = self:getCategoryByName(v26[1])
  if v30 == nil then
    local v34 = tostring(v26[1])
    Logging.xmlWarning(...)
  end
  table.insert(v21.categoryNames, v30.name)
  -- TODO: structure LOP_FORNLOOP (pc 538, target 514)
  if #v21.categoryNames == 0 then
    Logging.xmlWarning(v10, "No categories defined in store data! Using 'misc' instead!")
    table.insert(v21.categoryNames, "MISC")
  end
  v21.categoryName = v21.categoryNames[1]
  if v13 == "vehicle" then
    v27, v28 = StoreItemUtil.getConfigurationsFromXML(v10, v11, baseDir, customEnvironment, isMod, v21)
    v21.configurations = v27
    v21.defaultConfigurationIds = v28
    v27 = StoreItemUtil.getSubConfigurationsFromXML(v21.configurations)
    v21.subConfigurations = v27
    v27 = StoreItemUtil.getConfigurationSetsFromXML(v21, v10, v11, baseDir, customEnvironment, isMod)
    v21.configurationSets = v27
    v27 = v10:hasProperty("vehicle.licensePlates.licensePlate(0)")
    v21.hasLicensePlates = v27
  end
  v27 = v10:getValue(v12 .. ".price", 0)
  v21.price = v27
  if v21.price < 0 then
    Logging.xmlWarning(v10, "Price has to be greater than 0. Using default 10.000 instead!")
    v21.price = 10000
  end
  v27 = v10:getValue(v12 .. ".dailyUpkeep", 0)
  v21.dailyUpkeep = v27
  v27 = v10:getValue(v12 .. ".runningLeasingFactor", EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR)
  v21.runningLeasingFactor = v27
  v27 = v10:getValue(v12 .. ".lifetime", 600)
  v21.lifetime = v27
  v10:iterate("handTool.storeData.storePacks.storePack", function(self, rawXMLFilename)
    local baseDir = baseDir:getValue(rawXMLFilename)
    customEnvironment:addPackItem(baseDir, u2)
  end)
  v10:iterate("vehicle.storeData.storePacks.storePack", function(self, rawXMLFilename)
    local baseDir = baseDir:getValue(rawXMLFilename)
    customEnvironment:addPackItem(baseDir, u2)
  end)
  v28 = v10:hasProperty(v12 .. ".bundleElements")
  if v28 then
    while true do
      v34 = string.format(v12 .. ".bundleElements.bundleElement(%d)", v33)
      v35 = v10:hasProperty(v34)
      if not v35 then
        break
      end
      v35 = v10:getValue(v34 .. ".xmlFilename")
      v36 = v10:getValue(v34 .. ".offset", "0 0 0", true)
      v37 = v10:getValue(v34 .. ".rotationOffset", "0 0 0", true)
      v38 = v10:getValue(v34 .. ".yRotation", 0)
      v37[2] = v37[2] + v38
      if v35 ~= nil then
        v39 = Utils.getFilename(v35, baseDir)
        v40 = self:getItemByXMLFilename(v39)
        if v40 == nil then
          v41 = self:loadItem(v35, baseDir, customEnvironment, isMod, true, dlcTitle, nil, true)
          table.insert(v27, v41)
        end
        if v40 ~= nil then
          v41 = math.min(v30, v40.lifetime)
          if v40.configurations ~= nil then
            if not v21.configurations then
            end
            v21.configurations = v41
            for v44, v45 in pairs(v40.configurations) do
              if v21.configurations[v44] ~= nil then
                -- TODO: structure LOP_FORNPREP (pc 815, target 843)
                if v21.configurations[v44][1] == nil then
                  v21.configurations[v44][1] = v45[1]
                else
                  v21.configurations[v44][1].price = v21.configurations[v44][1].price + v45[1].price
                end
                -- TODO: structure LOP_FORNLOOP (pc 832, target 816)
              else
                v47 = table.copy(v45, math.huge)
                v21.configurations[v44] = v47
              end
            end
          end
          if v40.defaultConfigurationIds ~= nil then
            if not v21.defaultConfigurationIds then
            end
            v21.defaultConfigurationIds = v41
          end
          if v40.subConfigurations ~= nil then
            if not v21.subConfigurations then
            end
            v21.subConfigurations = v41
            for v44, v45 in pairs(v40.subConfigurations) do
              v21.subConfigurations[v44] = v45
            end
          end
          if v40.configurationSets ~= nil then
            if not v21.configurationSets then
            end
            v21.configurationSets = v41
            for v44, v45 in pairs(v40.configurationSets) do
              v21.configurationSets[v44] = v45
            end
          end
          v10:iterate(v34 .. ".configurations.configuration", function(self, rawXMLFilename)
            local baseDir = baseDir:getValue(rawXMLFilename .. "#name")
            local customEnvironment = customEnvironment:getValue(rawXMLFilename .. "#value")
            if baseDir ~= nil and customEnvironment ~= nil then
              local isMod = isMod:getValue(rawXMLFilename .. "#allowChange", false)
              local isBundleItem = isBundleItem:getValue(rawXMLFilename .. "#hideOption", false)
              local dlcTitle = dlcTitle:getValue(rawXMLFilename .. "#disableOption", false)
              if not dlcTitle then
                u1[baseDir] = {configValue = customEnvironment, allowChange = isMod, hideOption = isBundleItem}
                return
              end
              if u2.configurations[baseDir] ~= nil then
                -- TODO: structure LOP_FORNPREP (pc 62, target 73)
                if 1 == customEnvironment then
                  u2.configurations[baseDir][1].isSelectable = not u2.configurations[baseDir][1].isSelectable
                end
                -- TODO: structure LOP_FORNLOOP (pc 72, target 63)
              end
            end
          end)
          if not v21.hasLicensePlates then
          end
          v21.hasLicensePlates = v42
          table.insert(v28.bundleItems, {item = v40, xmlFilename = v40.xmlFilename, offset = v36, rotationOffset = v37, rotation = 0, price = v40.price, preSelectedConfigurations = v41})
        end
      end
    end
    while true do
      v34 = string.format(v12 .. ".attacherInfo.attach(%d)", v33)
      v35 = v10:hasProperty(v34)
      if not v35 then
        break
      end
      v35 = v10:getValue(v34 .. "#bundleElement0")
      v36 = v10:getValue(v34 .. "#bundleElement1")
      v37 = v10:getValue(v34 .. "#attacherJointIndex")
      v38 = v10:getValue(v34 .. "#inputAttacherJointIndex")
      if v35 ~= nil and v36 ~= nil and v37 ~= nil and v38 ~= nil then
        table.insert(v28.attacherInfo, {bundleElement0 = v35, bundleElement1 = v36, attacherJointIndex = v37, inputAttacherJointIndex = v38})
      end
    end
    v21.price = v29
    v21.dailyUpkeep = v31
    v21.runningLeasingFactor = v32
    v21.lifetime = v30
    v21.bundleInfo = v28
  end
  if Platform.hasContruction then
    v28 = v10:hasProperty(v12 .. ".brush")
    if v28 then
      -- if not v21.showInStore then goto L1117 end
      v28 = v10:getValue(v12 .. ".brush.type")
      -- cmp-jump LOP_JUMPXEQKNIL R28 aux=0x0 -> L1153
      -- cmp-jump LOP_JUMPXEQKS R28 aux=0xdb -> L1153
      v10:iterate(v12 .. ".brush.parameters.parameter", function(self, rawXMLFilename)
        local baseDir = baseDir:getValue(rawXMLFilename)
        local customEnvironment = customEnvironment:getValue(rawXMLFilename .. "#isFilename", false)
        if customEnvironment then
          customEnvironment = Utils.getFilename(baseDir, u1)
        end
        u2[self] = baseDir
      end)
      v30 = v10:getValue(v12 .. ".brush.category")
      if v30 ~= nil then
        v31 = self:getConstructionCategoryByName(v30)
        if v31 ~= nil then
          v34 = v10:getValue(v12 .. ".brush.tab")
          local v32 = self:getConstructionTabByName(v34, v31.name)
          if v32 ~= nil then
            v21.brush = {["type"] = v28, parameters = {}, category = v31, tab = v32}
            -- goto L1153  (LOP_JUMP +58)
          end
          Logging.xmlWarning(v10, "Missing brush tab")
          -- goto L1153  (LOP_JUMP +52)
        end
        Logging.xmlWarning(v10, "Missing brush category: %s", v12 .. ".brush.category")
        -- goto L1153  (LOP_JUMP +43)
      end
      Logging.xmlWarning(v10, "Unknown brush category '%s'", v30)
    elseif v21.species == "placeable" and v21.showInStore then
      if self.constructionCategories[1] ~= nil then
        v21.brush = {["type"] = "placeable", parameters = {}, category = self.constructionCategories[1], tab = self.constructionCategories[1].tabs[1]}
      else
        Logging.xmlDevWarning(v10, "Construction category not found for '%s'", v12)
      end
    end
  end
  if not ignoreAdd then
    self:addItem(v21)
    -- TODO: structure LOP_FORNPREP (pc 1161, target 1167)
    self:addItem(v27[1])
    -- TODO: structure LOP_FORNLOOP (pc 1166, target 1162)
  end
  v10:delete()
  return v21
end
function StoreManager:addPack(name, title, imageFilename, baseDir)
  if name ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L10
  end
  print("Warning: Could not register store pack. Name is missing or empty!")
  return false
  local isBundleItem = ClassUtil.getIsValidIndexName(name)
  if not isBundleItem then
    local v10 = tostring(name)
    print("Warning: '" .. v10 .. "' is no valid name for a store pack!")
    return false
  end
  if title ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000000 -> L38
  end
  print("Warning: Could not register store pack. Title is missing or empty!")
  return false
  if imageFilename ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000000 -> L48
  end
  print("Warning: Could not register store pack. Image is missing or empty!")
  return false
  if baseDir == nil then
    print("Warning: Could not register store pack. Basedirectory not defined!")
    return false
  end
  isBundleItem = name:upper()
  if self.packs[isBundleItem] == nil then
    self.numOfPacks = self.numOfPacks + 1
    local extraContentId = Utils.getFilename(imageFilename, baseDir)
    self.packs[isBundleItem] = {name = isBundleItem, title = title, image = extraContentId, baseDir = baseDir, orderId = self.numOfPacks, items = {}}
    return true
  end
  return false
end
function StoreManager:addModStorePack(rawXMLFilename, baseDir, customEnvironment, isMod)
  table.insert(self.modStorePacks, {name = rawXMLFilename, title = baseDir, imageFilename = customEnvironment, baseDir = isMod})
end
function StoreManager:addPackItem(name, itemFilename)
  if name ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L9
  end
  Logging.warning("Could not add pack item. Name is missing or empty.")
  return
  if self.packs[name] == nil then
    Logging.warning("Could not add pack item. Pack '%s' does not exist.", name)
    return
  end
  if itemFilename ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000000 -> L30
  end
  Logging.warning("Could not add pack item to '%s'. Item filename is missing.", name)
  return
  table.insert(self.packs[name].items, itemFilename)
end
function StoreManager:getPacks()
  return self.packs
end
function StoreManager:getPackItems(name)
  if self.packs[name] == nil then
    return nil
  end
  return baseDir.items
end
function StoreManager:consoleCommandReloadStoreItems()
  for isMod, isBundleItem in ipairs(self.items) do
    local extraContentId = self:loadItem(isBundleItem.rawXMLFilename, isBundleItem.baseDir, isBundleItem.customEnvironment, isBundleItem.isMod, isBundleItem.isBundleItem, isBundleItem.dlcTitle, isBundleItem.extraContentId, true)
    self.items[isMod] = extraContentId
    if not (self.items[isMod] ~= nil) then
      continue
    end
    self.xmlFilenameToItem[self.items[isMod].xmlFilenameLower] = self.items[isMod]
  end
  rawXMLFilename:publish(MessageType.STORE_ITEMS_RELOADED)
end
function StoreManager:registerStoreDataXMLPaths(rawXMLFilename)
  self:register(XMLValueType.L10N_STRING, rawXMLFilename .. ".storeData.name", "Name of store item", nil, true)
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.name#params", "Parameters to add to name")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.species", "Store species", "vehicle")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.image", "Path to store icon", nil, true)
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brand", "Brand identifier", "LIZARD")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brand#customIcon", "Custom brand icon to display in the shop config screen")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brand#imageOffset", "Offset of custom brand icon")
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.canBeSold", "Defines of the vehicle can be sold", true)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.showInStore", "Defines of the vehicle is shown in shop", true)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.allowLeasing", "Defines of the vehicle can be leased", true)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.maxItemCount", "Defines the max. amount vehicle of this type")
  self:register(XMLValueType.ANGLE, rawXMLFilename .. ".storeData.rotation", "Y rotation of the vehicle", 0)
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.category", "Store category", "misc")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.storePacks.storePack(?)", "Store pack")
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.price", "Store price", 10000)
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.dailyUpkeep", "Daily up keep", 0)
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.runningLeasingFactor", "Running leasing factor", EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR)
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.lifetime", "Lifetime of vehicle used to calculate price drop, in months", 600)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.shopDynamicTitle", "Vehicle brand icon and vehicle name is dynamically updated based on the selected configuration in the shop", false)
  self:register(XMLValueType.VECTOR_TRANS, rawXMLFilename .. ".storeData.shopTranslationOffset", "Translation offset for shop spawning and store icon", 0)
  self:register(XMLValueType.VECTOR_ROT, rawXMLFilename .. ".storeData.shopRotationOffset", "Rotation offset for shop spawning and store icon", 0)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.shopIgnoreLastComponentPositions", "If set to true the component positions from last spawning are now reused", false)
  self:register(XMLValueType.TIME, rawXMLFilename .. ".storeData.shopLoadingDelay#initial", "Delay of initial shop loading until the vehicle is displayed. (Used e.g. to hide vehicle while components still moving)")
  self:register(XMLValueType.TIME, rawXMLFilename .. ".storeData.shopLoadingDelay#config", "Delay of shop loading after config change until the vehicle is displayed. (Used e.g. to hide vehicle while components still moving)")
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.shopHeight", "Height of vehicle for shop placement", 0)
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.financeCategory", "Finance category name")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.shopFoldingState", "Inverts the shop folding state if set to '1'", 0)
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.shopFoldingTime", "Defines a custom folding time for the shop")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.vertexBufferMemoryUsage", "Vertex buffer memory usage", 0)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.indexBufferMemoryUsage", "Index buffer memory usage", 0)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.textureMemoryUsage", "Texture memory usage", 0)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.instanceVertexBufferMemoryUsage", "Instance vertex buffer memory usage", 0)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.instanceIndexBufferMemoryUsage", "Instance index buffer memory usage", 0)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.ignoreVramUsage", "Ignore VRAM usage", false)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.audioMemoryUsage", "Audio memory usage", 0)
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).xmlFilename", "XML filename")
  self:register(XMLValueType.VECTOR_TRANS, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).offset", "Translation offset of vehicle")
  self:register(XMLValueType.VECTOR_ROT, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).rotationOffset", "Rotation offset of vehicle")
  self:register(XMLValueType.ANGLE, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).yRotation", "Y rotation of vehicle")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).configurations.configuration(?)#name", "Name of configuration")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).configurations.configuration(?)#value", "Configuration index that is forced for this config")
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).configurations.configuration(?)#allowChange", "Allow change of option", false)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).configurations.configuration(?)#hideOption", "Hide the option completely", false)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.bundleElements.bundleElement(?).configurations.configuration(?)#disableOption", "Disabled this particular config option", false)
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.attacherInfo.attach(?)#bundleElement0", "First bundle element")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.attacherInfo.attach(?)#bundleElement1", "Second bundle element")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.attacherInfo.attach(?)#attacherJointIndex", "Attacher joint index")
  self:register(XMLValueType.INT, rawXMLFilename .. ".storeData.attacherInfo.attach(?)#inputAttacherJointIndex", "Input attacher joint index")
  self:register(XMLValueType.L10N_STRING, rawXMLFilename .. ".storeData.functions.function(?)", "Function description text")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brush.type", "Brush type")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brush.category", "Brush category")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brush.tab", "Brush tab")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brush.parameters.parameter(?)", "Brush parameter value")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.brush.parameters.parameter(?)#isFilename", "Whether the parameter is a filename")
  self:register(XMLValueType.ANGLE, rawXMLFilename .. ".storeData.storeIconRendering.settings#cameraYRot", "Y Rot of camera", "Setting from Icon Generator")
  self:register(XMLValueType.ANGLE, rawXMLFilename .. ".storeData.storeIconRendering.settings#cameraXRot", "X Rot of camera", "Setting from Icon Generator")
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.storeIconRendering.settings#advancedBoundingBox", "Advanced BB is used for icon placement", "Setting from Icon Generator")
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.storeIconRendering.settings#centerIcon", "Center item on icon", "Setting from Icon Generator")
  self:register(XMLValueType.FLOAT, rawXMLFilename .. ".storeData.storeIconRendering.settings#lightIntensity", "Intensity of light sources", "Setting from Icon Generator")
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.storeIconRendering.settings#showTriggerMarkers", "Show trigger markers on icon (for placeables)", false)
  self:register(XMLValueType.BOOL, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle#useClipPlane", "Clip plane is used")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle.object(?)#filename", "Path to i3d file")
  self:register(XMLValueType.NODE_INDEX, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle.object(?).node(?)#node", "Index Path of node to load")
  self:register(XMLValueType.VECTOR_TRANS, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle.object(?).node(?)#translation", "Translation", "0 0 0")
  self:register(XMLValueType.VECTOR_ROT, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle.object(?).node(?)#rotation", "Rotation", "0 0 0")
  self:register(XMLValueType.VECTOR_SCALE, rawXMLFilename .. ".storeData.storeIconRendering.objectBundle.object(?).node(?)#scale", "Scale", "1 1 1")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.storeIconRendering.shaderParameter(?)#name", "Name if shader parameter")
  self:register(XMLValueType.STRING, rawXMLFilename .. ".storeData.storeIconRendering.shaderParameter(?)#values", "Values of shader parameter")
end
local rawXMLFilename = StoreManager.new()
g_storeManager = v1
