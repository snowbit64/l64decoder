-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubController = {}
local ModHubController_mt = Class(ModHubController)
ModHubController.CATEGORY_ID_CONTEST = 7
ModHubController.CATEGORY_ID_DOWNLOAD = 1
ModHubController.CATEGORY_ID_UPDATE = 2
function ModHubController.new()
  local v0 = setmetatable({}, u0)
  v0.categories = {}
  v0.localCategories = {}
  v0.modIdToInfo = {}
  v0.categoryNameMapping = {}
  v0.hasChanges = false
  v0.hasTriggedUUIDInEngine = false
  v0.priceMapping = {en = "DLCPriceEUR", de = "DLCPriceEUR", pl = "DLCPriceEUR", cz = "DLCPriceEUR", fr = "DLCPriceEUR", es = "DLCPriceEUR", it = "DLCPriceEUR", pt = "DLCPriceEUR", hu = "DLCPriceEUR", nl = "DLCPriceEUR", da = "DLCPriceEUR", fi = "DLCPriceEUR", no = "DLCPriceEUR", sv = "DLCPriceEUR", jp = "DLCPriceUSD", ru = "DLCPriceUSD", cs = "DLCPriceUSD", ct = "DLCPriceUSD", br = "DLCPriceUSD", tr = "DLCPriceUSD", ro = "DLCPriceUSD", kr = "DLCPriceUSD", ea = "DLCPriceUSD", fc = "DLCPriceUSD"}
  local numLanguages = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 109, target 131)
  local v5 = getLanguageCode(0)
  if v0.priceMapping[v5] == nil then
    Logging.devError("ModHubController: Missing price mapping for '%s'", v5)
    v0.priceMapping[g_languageShort] = "DLCPriceUSD"
  end
  -- TODO: structure LOP_FORNLOOP (pc 130, target 110)
  v2:subscribe(MessageType.USER_PROFILE_CHANGED, v0.userProfileChanged, v0)
  return v0
end
function ModHubController:reset()
  self.isInitialized = false
  self.categories = {}
  self.categoryImageMapping = {}
  self.modIdToInfo = {}
  self.categoryNameMapping = {}
  self.categoryIsHidden = {}
  self.localCategories = {}
end
function ModHubController.delete(v0)
  v1:unsubscribeAll(v0)
end
function ModHubController:startModification()
  self.hasChanges = false
end
function ModHubController:endModification()
  if self.hasChanges then
    reloadDlcsAndMods()
  end
  self.hasChanges = false
end
function ModHubController:load()
  if not self.isInitialized then
    if not self.isReloading then
      self:loadCategoriesFromXML()
    end
    local numCategories = getNumModCategories()
    -- TODO: structure LOP_FORNPREP (pc 15, target 106)
    if 0 == ModHubController.CATEGORY_ID_CONTEST then
      -- if GS_IS_CONSOLE_VERSION then goto L105 end
      local v5 = getNumOfMods(0)
      -- if 0 >= v5 then goto L105 end
    end
    v5 = getModCategoryName(v4)
    if self.localCategories[v5] ~= nil then
      if not self.localCategories[v5].isTab then
      end
      if v6.title ~= nil then
        local v10 = v10:convertText(v6.title)
      end
      if v9 == nil then
        v10 = v10:getText("modHub_" .. v5)
      end
      local v10, v11, v12 = self:getCategoryData(v4 + 1)
      local v13 = ModCategoryInfo.new(v4 + 1, v9, v7, v5, v8)
      v13:setNumAvailableUpdates(v11)
      v13:setNumNewItems(v10)
      v13:setNumConflictedItems(v12)
      self.categoryNameMapping[v5] = v13
    else
      Logging.warning("Could not find modhub category %s in modHub.xml", v5)
    end
    -- TODO: structure LOP_FORNLOOP (pc 105, target 16)
    for v5, v6 in ipairs(self.localCategoriesSorted) do
      if not (self.categoryNameMapping[v6] ~= nil) then
        continue
      end
      table.insert(self.categories, self.categoryNameMapping[v6])
    end
    self.isInitialized = true
  end
end
function ModHubController:reload()
  self.categoryNameMapping = {}
  self.categories = {}
  self.isInitialized = false
  self.isReloading = true
  self:load()
end
function ModHubController:loadCategoriesFromXML()
  self.localCategories = {}
  self.localCategoriesSorted = {}
  local xmlFile = loadXMLFile("configFile", "dataS/modHub.xml")
  while true do
    v3 = string.format("modHub.categories.category(%d)", v2)
    v4 = hasXMLProperty(xmlFile, v3)
    if not v4 then
      break
    end
    v4 = getXMLString(xmlFile, v3 .. "#name")
    v5 = getXMLString(xmlFile, v3 .. "#imageFilename")
    if v4 ~= nil and v5 ~= nil then
      v8 = getXMLBool(xmlFile, v3 .. "#isTab")
      v7 = Utils.getNoNil(v8, false)
      v8 = getXMLBool(xmlFile, v3 .. "#isHidden")
      v7 = Utils.getNoNil(v8, false)
      v7 = getXMLString(xmlFile, v3 .. "#title")
      self.localCategories[v4] = {name = v4, imageFilename = v5, isTab = v7, isHidden = v7, title = v7}
      table.insert(self.localCategoriesSorted, v4)
    end
  end
  delete(xmlFile)
end
function ModHubController:getCategories()
  return self.categories
end
function ModHubController:getVisibleCategories()
  -- TODO: structure LOP_FORNPREP (pc 7, target 24)
  if not self.categories[1].isHidden then
    local v6 = self.categories[1]:getNumMods()
    if 0 < v6 then
      {}[#{} + 1] = self.categories[1]
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 8)
  return v1
end
function ModHubController:getCategoryData(categoryId)
  if 0 < categoryId then
    local v3 = getNumOfMods(categoryId - 1)
  end
  if categoryId == ModHubController.CATEGORY_ID_DOWNLOAD then
    return v2, 0, 0
  end
  if categoryId == ModHubController.CATEGORY_ID_UPDATE then
    return v3, v2, v5
  end
  local mods = self:getModsByCategory(categoryId)
  for v10, v11 in ipairs(mods) do
    local v12 = v11:getNumUpdates()
    v12 = v11:getNumConflicts()
    v12 = v11:getNumNew()
  end
  return v3, v4, v5
end
function ModHubController:getModsByCategory(categoryId, visibleOnly)
  local numOfMods = getNumOfMods(categoryId - 1)
  if 0 < numOfMods then
    -- TODO: structure LOP_FORNPREP (pc 12, target 48)
    local v8 = getModId(categoryId - 1, 0)
    local v9 = self:getModInfo(v8)
    if visibleOnly then
      local v10 = v9:getIsDLC()
      if v10 then
        v10 = v9:getPriceString()
        v10 = v10:len()
        if 1 >= v10 then
          v10 = v9:getIsInstalled()
          -- if not v10 then goto L47 end
        end
      end
    end
    table.insert(v3, v9)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 13)
  end
  return v3
end
function ModHubController:getCategory(name)
  return self.categoryNameMapping[name]
end
function ModHubController:getModInfo(modId)
  if self.modIdToInfo[modId] == nil then
    local v3 = type(modId)
    if v3 ~= "number" then
      return nil
    end
    local v5 = self:getPostFix()
    v3 = ModInfo.new(modId, v5, self.priceMapping[g_languageShort])
    self.modIdToInfo[modId] = v3
  end
  return v2
end
function ModHubController:getDependendMods(modId)
  local v6 = getModNumDependencies(modId)
  -- TODO: structure LOP_FORNPREP (pc 9, target 27)
  v6 = getModDependency(modId, 0)
  local v7 = self:getModInfo(v6)
  table.insert({}, v7)
  -- TODO: structure LOP_FORNLOOP (pc 26, target 10)
  return {}
end
function ModHubController.getPostFix(v0)
  if g_languageShort ~= "de" then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000003 -> L11
  end
  return g_languageShort
  return "en"
end
function ModHubController:getTotalFilesizeKb(modId)
  local modInfo = self:getModInfo(modId)
  local dependendMods = self:getDependendMods(modId)
  local v7 = modInfo:getFilesize()
  local v4 = math.floor((v7 + 1023) / 1024)
  for v8, v9 in ipairs(dependendMods) do
    if not not v9.isInstalled then
      continue
    end
    local v13 = v9:getFilesize()
    local v10 = math.floor((v13 + 1023) / 1024)
  end
  return v4
end
function ModHubController.getFreeModSpaceKb(v0)
  return getModFreeSpaceKb()
end
function ModHubController.getUsedModSpaceKb(v0)
  return getModUsedSpaceKb()
end
function ModHubController.getTotalModSpaceKb(v0)
  local v2 = getModFreeSpaceKb()
  local v3 = getModUsedSpaceKb()
  return v2 + v3
end
function ModHubController:isContestEnabled()
  if not self.isInitialized then
    return false
  end
  if self.isContestEnabledStored == nil then
    local v2 = getNumOfMods(ModHubController.CATEGORY_ID_CONTEST)
    if 0 >= v2 then
    end
    self.isContestEnabledStored = true
  end
  return self.isContestEnabledStored
end
function ModHubController:install(modId)
  local success = installMod(modId)
  if success then
    local dependendMods = self:getDependendMods(modId)
    for v8, v9 in ipairs(dependendMods) do
      if not not v9.isInstalled then
        continue
      end
      local v10 = installMod(v9.modId)
      if not not v10 then
        continue
      end
      table.insert(v4, v9)
    end
    self.addedToDownloadCallback()
  else
    self.modInstallFailedCallback()
  end
  if self.discSpaceChangedCallback ~= nil then
    self.discSpaceChangedCallback()
  end
end
function ModHubController:setModInstallFailedCallback(callback, target)
  self.modInstallFailedCallback = function()
    u0(u1)
  end
end
function ModHubController:setDependendModIstallFailedCallback(callback, target)
  self.dependendModInstallFailedCallback = function(self)
    u0(u1, self)
  end
end
function ModHubController:setAddedToDownloadCallback(callback, target)
  self.addedToDownloadCallback = function()
    u0(u1)
  end
end
function ModHubController:update(modId)
  local v2 = updateMod(modId)
  if v2 then
    local dependendMods = self:getDependendMods(modId)
    for v8, v9 in ipairs(dependendMods) do
      if not v9.isUpdate then
        continue
      end
      local v10 = updateMod(modId)
      if not not v10 then
        continue
      end
      table.insert(v3, v9)
    end
    self.addedToDownloadCallback()
  else
    self.modInstallFailedCallback()
  end
  if self.discSpaceChangedCallback ~= nil then
    self.discSpaceChangedCallback()
  end
end
function ModHubController:uninstall(modId)
  local mod = self:getModInfo(modId)
  local success = uninstallMod(modId)
  if success then
    self.hasChanges = true
    local v5 = v5:getModByFileHash(mod.hash)
    if v5 ~= nil then
      v5:removeMod(v5)
    end
    self.uninstalledCallback()
  else
    self.uninstallFailedCallback()
  end
  if self.discSpaceChangedCallback ~= nil then
    self.discSpaceChangedCallback()
  end
end
function ModHubController:setUninstallFailedCallback(callback, target)
  self.uninstallFailedCallback = function()
    u0(u1)
  end
end
function ModHubController:setUninstalledCallback(callback, target)
  self.uninstalledCallback = function()
    u0(u1)
  end
end
function ModHubController:setDiscSpaceChangedCallback(callback, target)
  self.discSpaceChangedCallback = function()
    local self = getModFreeSpaceKb()
    local callback = getModUsedSpaceKb()
    u0(u1, self, callback)
  end
end
function ModHubController:vote(modId, value)
  if not self.hasTriggedUUIDInEngine then
    getUniqueUserId()
    self.hasTriggedUUIDInEngine = true
  end
  setModHubRating(modId, value)
  if self.votedCallback ~= nil then
    self.votedCallback()
  end
end
function ModHubController:setVotedCallback(callback, target)
  self.votedCallback = function()
    u0(u1)
  end
end
function ModHubController:getVote(modId)
  if not self.hasTriggedUUIDInEngine then
    getUniqueUserId()
    self.hasTriggedUUIDInEngine = true
  end
  local v2, v3 = getModHubRating(modId)
  if v3 == 0 then
    return 0
  end
  return v2
end
function ModHubController.setShowAllMods(v0, v1)
  setEnableBetaMods(v1)
end
function ModHubController:searchMods(categoryId, text)
  local v3 = text:lower()
  if categoryId ~= nil then
    self:searchInCategory({}, categoryId, v3)
  else
    for v7, v8 in ipairs(self.categories) do
      local v9 = self:isCategorySearchable(v8)
      if not v9 then
        continue
      end
      v9 = self:searchInCategory(v3, v8.id, text)
    end
  end
  for v8, v9 in pairs(v3) do
    table.insert(v4, v9)
  end
  table.sort(v4, function(self, categoryId)
    if categoryId[2] >= self[2] then
    end
    return true
  end)
  for v8, v9 in ipairs(v4) do
    v4[v8] = v9[1]
  end
  return v4
end
function ModHubController.isCategorySearchable(v0, v1)
  if not not v1.isHidden and v1.name ~= "contest" and v1.name ~= "dlc" then
  end
  return v2
end
function ModHubController:searchInCategory(list, categoryId, text)
  local numOfMods = getNumOfMods(categoryId - 1)
  local postFix = self:getPostFix()
  if 0 < numOfMods then
    -- TODO: structure LOP_FORNPREP (pc 13, target 87)
    local v9 = getModId(categoryId - 1, 0)
    if list[v9] == nil then
      local v12 = getModMetaAttributeString(v9, "title_" .. postFix)
      local v13 = v12:lower()
      local v13, v14 = v13:find(text)
      if v13 ~= nil then
        local v15 = self:generateSearchScore(text, v12, v13, v14)
      else
        v15 = getModMetaAttributeString(v9, "author")
        local v16 = v15:lower()
        local v16, v17 = v16:find(text)
        if v16 ~= nil then
          v16 = self:generateSearchScore(text, v15, v16, v17)
        end
      end
      if v10 then
        v16 = self:getModInfo(v9)
        list[v9] = {v16, v11}
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 86, target 14)
  end
  return list
end
function ModHubController.generateSearchScore(v0, v1, v2, v3, v4)
  local v5 = v2:len()
  local v10 = v1:len()
  return 0.8 * v10 / v5 + 0.2 * (1 - v3 / v5)
end
function ModHubController:userProfileChanged()
  self.hasTriggedUUIDInEngine = false
  self:updateRecommendationSystem()
end
function ModHubController.updateRecommendationSystem(v0)
  local v1 = v1:getValue(GameSettings.SETTING.LAST_PLAYER_STYLE_MALE)
  local v2 = v2:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
  if g_gameSettings.joinGame.hasNoPassword == nil and g_gameSettings.createGame.useUpnp == nil then
  end
  if g_careerScreen.totalPlayedHours ~= nil then
  end
  setModDownloadManagerRecommenderParams(v2, v3, v1, v4, 0)
end
