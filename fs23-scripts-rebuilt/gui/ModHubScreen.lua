-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubScreen = {}
local ModHubScreen_mt = Class(ModHubScreen, TabbedMenuWithDetails)
ModHubScreen.SPECIAL_LIST_LIMIT = 42
ModHubScreen.CONTROLS = {PAGE_LOADING = "pageLoading", PAGE_CATEGORIES = "pageCategories", PAGE_INSTALLED = "pageInstalled", PAGE_LATEST = "pageLatest", PAGE_UPDATES = "pageUpdates", PAGE_DLCS = "pageDLCs", PAGE_EXTRA_CONTENT = "pageExtraContent", PAGE_DOWNLOADS = "pageDownloads", PAGE_BEST = "pageBest", PAGE_MOST_DOWNLOADED = "pageMostDownloaded", PAGE_CONTEST = "pageContest", PAGE_RECOMMENDED = "pageRecommended", PAGE_ITEMS = "pageItems", PAGE_DETAILS = "pageDetails", PAGE_SEARCH = "pageSearch", LOADING = "loadingElement"}
function ModHubScreen.register()
  ModHubCategoriesFrame.register()
  ModHubDetailsFrame.register()
  ModHubExtraContentFrame.register()
  ModHubItemsFrame.register()
  ModHubLoadingFrame.register()
  local v0 = ModHubScreen.new()
  v1:loadGui("dataS/gui/ModHubScreen.xml", "ModHubScreen", v0)
  return v0
end
function ModHubScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubScreen.CONTROLS)
  v2.checkForLoaded = true
  v2.isLoading = true
  v2.showingAllMods = false
  return v2
end
function ModHubScreen:createFromExistingGui(v1)
  ModHubCategoriesFrame.createFromExistingGui(g_gui.frames.modHubCategories.target, "ModHubCategoriesFrame")
  ModHubDetailsFrame.createFromExistingGui(g_gui.frames.modHubDetails.target, "ModHubDetailsFrame")
  ModHubExtraContentFrame.createFromExistingGui(g_gui.frames.modHubExtraContent.target, "ModHubExtraContentFrame")
  ModHubItemsFrame.createFromExistingGui(g_gui.frames.modHubItems.target, "ModHubItemsFrame")
  local v2 = ModHubScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, false)
  return v2
end
function ModHubScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v1 = v1:getValue(GameSettings.SETTING.SHOW_ALL_MODS)
  self.showingAllMods = v1
  v1:setShowAllMods(self.showingAllMods)
  self:setupPages()
  self:setupMenuButtonInfo()
end
function ModHubScreen:setupPages()
  local pagePredicate = self:makeIsModHubEnabledPredicate()
  local contestPredicate = self:makeIsContestEnabledPredicate()
  local detailsPredicate = self:makeIsModHubItemsEnabledPredicate()
  local v7 = self:makeIsLoadingEnabledPredicate()
  for v8, v9 in ipairs({{self.pageLoading, v7, ModHubScreen.TAB_UV.CATEGORIES}, {self.pageCategories, pagePredicate, ModHubScreen.TAB_UV.CATEGORIES}, {self.pageInstalled, pagePredicate, ModHubScreen.TAB_UV.INSTALLED}, {self.pageUpdates, pagePredicate, ModHubScreen.TAB_UV.UPDATES}, {self.pageDownloads, pagePredicate, ModHubScreen.TAB_UV.DOWNLOADS}, {self.pageDLCs, pagePredicate, ModHubScreen.TAB_UV.DLCS}, {self.pageExtraContent, pagePredicate, ModHubScreen.TAB_UV.EXTRA_CONTENT}, {self.pageBest, pagePredicate, ModHubScreen.TAB_UV.BEST}, {self.pageMostDownloaded, pagePredicate, ModHubScreen.TAB_UV.MOST_DOWNLOADED}, {self.pageLatest, pagePredicate, ModHubScreen.TAB_UV.LATEST}, {self.pageContest, contestPredicate, ModHubScreen.TAB_UV.CONTEST}, {self.pageRecommended, pagePredicate, ModHubScreen.TAB_UV.RECOMMENDED}, {self.pageItems, detailsPredicate, ModHubScreen.TAB_UV.BEST}, {self.pageDetails, detailsPredicate, ModHubScreen.TAB_UV.BEST}, {self.pageSearch, detailsPredicate, ModHubScreen.TAB_UV.BEST}}) do
    local v10, v11, v12 = unpack(v9)
    self:registerPage(v10, v8, v11)
    local v13 = GuiUtils.getUVs(v12)
    self:addPageTab(v10, g_iconsUIFilename, v13)
  end
end
function ModHubScreen:setupMenuButtonInfo()
  local v4 = v4:getText(ModHubScreen.L10N_SYMBOL.BUTTON_BACK)
  self.defaultMenuButtonInfo = {{inputAction = InputAction.MENU_BACK, text = v4, callback = self.clickBackCallback}}
  self.defaultMenuButtonInfoByActions[InputAction.MENU_BACK] = self.defaultMenuButtonInfo[1]
  {}[InputAction.MENU_BACK] = self.clickBackCallback
  self.defaultButtonActionCallbacks = {}
  self:assignMenuButtonInfo(self.defaultMenuButtonInfo)
end
function ModHubScreen:initializePages()
  onSearchButtonCallback:setShowAllMods(self.showingAllMods)
  onSearchButtonCallback:load()
  onSearchButtonCallback:setDiscSpaceChangedCallback(self.updateDiscSpace, self)
  local onSearchButtonCallback = self:makeSelfCallback(self.onSearchButton)
  local onToggleCallback = self:makeSelfCallback(self.onToggleBeta)
  local getBetaToggleTextCallback = self:makeSelfCallback(self.getBetaToggleText)
  local v6 = v6:getVisibleCategories()
  local v7 = self:makeSelfCallback(self.onClickCategory)
  local v8 = v8:getText(ModHubScreen.L10N_SYMBOL.HEADER_MOD_HUB)
  clickItemCallback:initialize(v6, v7, v8, ModHubScreen.CATEGORY_IMAGE_HEIGHT_WIDTH_RATIO)
  clickItemCallback:setSearchCallback(onSearchButtonCallback)
  v6 = self:getBreadcrumbs(self.pageCategories)
  clickItemCallback:setBreadcrumbs(...)
  clickItemCallback:setToggleBetaCallback(onToggleCallback)
  clickItemCallback:setBetaToggleTextCallback(getBetaToggleTextCallback)
  v6 = v6:getText(ModHubScreen.L10N_SYMBOL.HEADER_EXTRA_CONTENT)
  clickItemCallback:initialize(...)
  v6 = self:getBreadcrumbs(self.pageExtraContent, true)
  clickItemCallback:setBreadcrumbs(...)
  local clickItemCallback = self:makeClickItemCallback()
  local onSelectItemCallback = self:makeSelfCallback(self.onSelectItem)
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageInstalled, "installed")
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageLatest, "latest", ModHubScreen.SPECIAL_LIST_LIMIT)
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageUpdates, "update")
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageDLCs, "dlc", nil, true)
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageDownloads, "download")
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageBest, "best", ModHubScreen.SPECIAL_LIST_LIMIT)
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageMostDownloaded, "most_downloaded", ModHubScreen.SPECIAL_LIST_LIMIT)
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageContest, "contest")
  function(self, onSearchButtonCallback, onToggleCallback, getBetaToggleTextCallback)
    local clickItemCallback = clickItemCallback:getCategory(onSearchButtonCallback)
    if clickItemCallback ~= nil then
      self:initialize()
      self:setCategoryId(clickItemCallback.id)
      self:setCategory(onSearchButtonCallback)
      local v7 = v7:getBreadcrumbs(self, getBetaToggleTextCallback)
      self:setBreadcrumbs(...)
      self:setItemClickCallback(u1)
      self:setItemSelectCallback(u2)
      self:setSearchCallback(u3)
      self:setToggleBetaCallback(u4)
      self:setBetaToggleTextCallback(u5)
      if onToggleCallback ~= nil then
        self:setListSizeLimit(onToggleCallback)
      end
    end
  end(self.pageRecommended, "recommended")
  v7:initialize()
  v7:setItemClickCallback(clickItemCallback)
  v7:setItemSelectCallback(onSelectItemCallback)
  v7:initialize()
  v7:setItemClickCallback(clickItemCallback)
  v7:setItemSelectCallback(onSelectItemCallback)
  v7:setSearchCallback(onSearchButtonCallback)
  v7:setToggleBetaCallback(onToggleCallback)
  v7:setBetaToggleTextCallback(getBetaToggleTextCallback)
  v7:initialize()
end
function ModHubScreen:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  v1:reset()
  self.showingAllMods = false
end
function ModHubScreen:onOpen(element)
  v2:startModification()
  local v2 = modDownloadManagerLoaded()
  if v2 then
    self:setIsLoading(false)
    self.checkForLoaded = false
  else
    self:setIsLoading(true)
  end
  local v3 = v3:superClass()
  v3.onOpen(self)
end
function ModHubScreen.onClose(v0, v1)
  v2:endModification()
  local v3 = v3:superClass()
  v3.onClose(v0)
end
function ModHubScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = getModDownloadAvailability()
  if v2 == MultiplayerAvailability.NOT_AVAILABLE then
    self:changeScreen(MainScreen)
    return
  end
  v2 = getNetworkError()
  if v2 then
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
    return
  end
  if self.checkForLoaded then
    v2 = modDownloadManagerLoaded()
    if v2 then
      self.checkForLoaded = false
      self:setIsLoading(false)
    end
  end
end
function ModHubScreen:setIsLoading(loading)
  self.isLoading = loading
  if not loading and not self.initialized then
    self:initializePages()
    self.initialized = true
  end
end
function ModHubScreen:exitMenu()
  self:changeScreen(MainScreen)
end
function ModHubScreen:getBreadcrumbs(page, isDLC)
  local v4 = v4:superClass()
  local v3 = v4.getBreadcrumbs(self, page)
  local v6 = self:getStack(page)
  if v6[1].page ~= self.pageCategories then
    if isDLC then
      local v8 = v8:getText("button_downloadableContent")
      table.insert(...)
      return v3
    end
    v8 = v8:getText("modHub_title")
    table.insert(...)
  end
  return v3
end
function ModHubScreen:onClickCategory(categoryId, categoryName)
  v3:setCategoryId(categoryId)
  v3:setCategory(categoryName)
  self:pushDetail(self.pageItems)
  local v5 = self:getBreadcrumbs()
  v3:setBreadcrumbs(...)
end
function ModHubScreen.onSelectItem(v0, v1, v2)
  local v3 = v3:getModInfo(v2)
  v1:setModInfo(v3)
end
function ModHubScreen:updateDiscSpace(freeSpaceKb, usedSpaceKb)
  local topFrame = self:getTopFrame()
  if topFrame ~= self.pageLoading and topFrame ~= self.pageExtraContent then
    if Platform.hasLimitedModSpace then
      v6:setVisible(true)
      local v10 = v10:formatNumber(usedSpaceKb / 1024, 2, true)
      local v11 = v11:formatNumber((freeSpaceKb + usedSpaceKb) / 1024, 2, true)
      local v8 = string.format("%s / %s Mb (%0.f%%)", v10, v11, usedSpaceKb / 1024 / (freeSpaceKb + usedSpaceKb) / 1024 * 100)
      v6:setText(...)
      return
    end
    v4:setVisible(false)
  end
end
function ModHubScreen:onSearchButton(categoryId)
  local v2 = v2:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SEARCH)
  local v3 = v3:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SEARCH)
  local v4 = v4:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SEARCH)
  TextInputDialog.show(self.onSearchFinished, self, nil, v2, v3, 40, v4, categoryId, nil, false)
end
function ModHubScreen:onSearchFinished(text, ok, categoryId)
  if ok then
    local v4 = text:len()
    if 0 < v4 then
      v4 = v4:searchMods(categoryId, text)
      v5:setModItems(v4)
      local v10 = v10:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SEARCH)
      v10 = text:lower()
      self.pageSearch.title = v10 .. " '" .. v10 .. "'"
      self:pushDetail(self.pageSearch)
      local v8 = self:getBreadcrumbs()
      v6:setBreadcrumbs(...)
    end
  end
end
function ModHubScreen:onToggleBeta(page)
  self.showingAllMods = not self.showingAllMods
  v2:setShowAllMods(self.showingAllMods)
  v2:reload()
  v2:setValue(GameSettings.SETTING.SHOW_ALL_MODS, self.showingAllMods, true)
  page:reload()
  local v4 = v4:getVisibleCategories()
  v2:setCategories(...)
end
function ModHubScreen:getBetaToggleText()
  if self.showingAllMods then
    return v1:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SHOW_CROSSPLAY)
  end
  v1 = v1:getText(ModHubScreen.L10N_SYMBOL.BUTTON_SHOW_ALL)
  return v1
end
function ModHubScreen:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if not v4 and self.currentPage == self.pageDetails then
    v4 = v4:inputEvent(action, value, v4)
  end
  return eventUsed
end
function ModHubScreen:onDetailOpened(...)
  local v2 = v2:superClass()
  v2.onDetailOpened(...)
  local v3 = v3:getFreeModSpaceKb()
  local v4 = v4:getUsedModSpaceKb()
  self:updateDiscSpace(...)
end
function ModHubScreen:onPageChange(...)
  local v2 = v2:superClass()
  v2.onPageChange(...)
  local v3 = v3:getFreeModSpaceKb()
  local v4 = v4:getUsedModSpaceKb()
  self:updateDiscSpace(...)
end
function ModHubScreen.makeClickItemCallback(v0)
  return function(v0, v1, v2)
    local v3 = v3:getModInfo(v1)
    v4:setModInfo(v3)
    v4:pushDetail(u0.pageDetails)
    local v6 = v6:getBreadcrumbs()
    v4:setBreadcrumbs(...)
  end
end
function ModHubScreen.makeIsLoadingEnabledPredicate(v0)
  return function()
    return u0.isLoading
  end
end
function ModHubScreen.makeIsModHubEnabledPredicate(v0)
  return function()
    if not u0.isLoading then
      local v1 = v1:getIsDetailMode()
    end
    return v0
  end
end
function ModHubScreen.makeIsModHubItemsEnabledPredicate(v0)
  return function()
    return false
  end
end
function ModHubScreen.makeIsContestEnabledPredicate(v0)
  return function()
    if not u0.isLoading then
      local v1 = v1:getIsDetailMode()
      if not v1 then
        local v0 = v0:isContestEnabled()
      end
    end
    return v0
  end
end
function ModHubScreen:openWithModId(modId)
  local v2 = v2:getModInfo(modId)
  if v2 ~= nil then
    v3:showGui("ModHubScreen")
    v3:setModInfo(v2)
    self:pushDetail(self.pageDetails)
    local v5 = self:getBreadcrumbs()
    v3:setBreadcrumbs(...)
  end
end
function ModHubScreen:openDownloads()
  v1:showGui("ModHubScreen")
  self:goToPage(self.pageDownloads, true)
end
ModHubScreen.L10N_SYMBOL = {HEADER_MOD_HUB = "modHub_title", HEADER_EXTRA_CONTENT = "modHub_extraContent", BUTTON_BACK = "button_back", BUTTON_SEARCH = "modHub_search", BUTTON_SHOW_ALL = "button_modHubShowAll", BUTTON_SHOW_CROSSPLAY = "button_modHubShowCrossplay"}
ModHubScreen.TAB_UV = {CATEGORIES = {0, 195, 65, 65}, DLCS = {65, 195, 65, 65}, BEST = {130, 195, 65, 65}, MOST_DOWNLOADED = {195, 195, 65, 65}, LATEST = {260, 195, 65, 65}, CONTEST = {325, 195, 65, 65}, RECOMMENDED = {390, 195, 65, 65}, DOWNLOADS = {455, 195, 65, 65}, UPDATES = {520, 195, 65, 65}, INSTALLED = {585, 195, 65, 65}, EXTRA_CONTENT = {650, 195, 65, 65}}
ModHubScreen.CATEGORY_IMAGE_HEIGHT_WIDTH_RATIO = 1
