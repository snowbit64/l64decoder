-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubItemsFrame = {}
local ShopItemsFrame_mt = Class(ModHubItemsFrame, TabbedMenuFrameElement)
ModHubItemsFrame.CONTROLS = {"headerText", "spaceUsageLabel", NAVIGATION_HEADER = "breadcrumbs", BASE_CATEGORY_LABEL = "baseCategoryLabel", CATEGORY_LABEL = "categoryLabel", ITEMS_LIST = "itemsList", NO_MODS = "noModsElement", DISCLAIMER = "disclaimerLabel", MOD_INFO_BOX = "modInfoBox", MOD_ATTRIBUTE_BOX = "modAttributeBox", MOD_ATTRIBUTE_NAME = "modAttributeName", MOD_ATTRIBUTE_AUTHOR = "modAttributeInfoAuthor", MOD_ATTRIBUTE_VERSION = "modAttributeInfoVersion", MOD_ATTRIBUTE_FILESIZE = "modAttributeInfoSize", MOD_ATTRIBUTE_RATING_STAR = "modAttributeRatingStar", MOD_ATTRIBUTE_RATING_BOX = "modAttributeRatingBox", MOD_ATTRIBUTE_PRICE = "modAttributePrice", MOD_ATTRIBUTE_SIZE_SPACE = "modAttributeInfoSizeSpace", MOD_ATTRIBUTE_RATING_SPACE = "modAttributeInfoRatingSpace", MOD_ATTRIBUTE_PRICE_SPACE = "modAttributeInfoPriceSpace"}
ModHubItemsFrame.NUM_ATTRIBUTES_PER_ROW = ModHubController.MAX_ATTRIBUTES_PER_ROW
function ModHubItemsFrame.register()
  local v0 = ModHubItemsFrame.new()
  v1:loadGui("dataS/gui/ModHubItemsFrame.xml", "ModHubItemsFrame", v0, true)
end
function ModHubItemsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubItemsFrame.CONTROLS)
  v2.categoryName = ""
  v2.updateModInterval = 1000
  v2.updateModTimer = v2.updateModInterval
  v2.notifyActivatedModItemCallback = u1
  v2.notifySelectedModItemCallback = u1
  v2.notifySearchCallback = u1
  v2.notifyToggleBetaCallback = u1
  v2.setModItems = nil
  v2.mods = {}
  return v2
end
function ModHubItemsFrame:createFromExistingGui(v1)
  local v2 = ModHubItemsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ModHubItemsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function ModHubItemsFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(ModHubItemsFrame.L10N_SYMBOL.BUTTON_DETAILS)
  self.detailsButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonDetails()
  end}
  v2 = v2:getText(ModHubItemsFrame.L10N_SYMBOL.BUTTON_SEARCH)
  self.searchButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonSearch()
  end}
  self.toggleTopButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = "", callback = function()
    self:onButtonShowToggle()
  end}
  local v1 = v1:hasText("modHub_authorDisclaimer")
  if v1 then
    local v7 = v7:getText("modHub_abuse")
    local v6 = v6:getText("modHub_authorDisclaimer")
    v1:setText(v7 .. " " .. v6)
  end
end
function ModHubItemsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateList()
  self:setSoundSuppressed(true)
  v1:setFocus(self.itemsList)
  self:setSoundSuppressed(false)
end
function ModHubItemsFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self.updateModTimer = self.updateModTimer - dt
  if self.updateModTimer <= 0 then
    self:updateDownloadStates()
  end
end
function ModHubItemsFrame:getMenuButtonInfo()
  if 0 < #self.mods then
    table.insert({}, self.detailsButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  if self.notifySearchCallback ~= u0 then
    table.insert(v1, self.searchButtonInfo)
  end
  if Platform.allowsScriptMods and self.notifyToggleBetaCallback ~= u0 and self.forcedModItems == nil then
    local v3 = self.getBetaToggleText()
    self.toggleTopButtonInfo.text = v3
    table.insert(v1, self.toggleTopButtonInfo)
  end
  return v1
end
function ModHubItemsFrame:setItemClickCallback(itemClickedCallback)
  if not itemClickedCallback then
  end
  self.notifyActivatedModItemCallback = v2
end
function ModHubItemsFrame:setItemSelectCallback(itemSelectedCallback)
  if not itemSelectedCallback then
  end
  self.notifySelectedModItemCallback = v2
end
function ModHubItemsFrame:setSearchCallback(searchCallback)
  self.notifySearchCallback = searchCallback
end
function ModHubItemsFrame:setToggleBetaCallback(callback)
  self.notifyToggleBetaCallback = callback
end
function ModHubItemsFrame:setBetaToggleTextCallback(callback)
  self.getBetaToggleText = callback
end
function ModHubItemsFrame:setCategory(categoryName)
  self.categoryName = categoryName
  local v3 = v3:getCategory(categoryName)
  self.title = v3.label
end
function ModHubItemsFrame:setCategoryId(categoryId)
  self.categoryId = categoryId
end
function ModHubItemsFrame:setModItems(modItems)
  self.forcedModItems = modItems
end
function ModHubItemsFrame:setListSizeLimit(limit)
  self.listSizeLimit = limit
end
function ModHubItemsFrame:setBreadcrumbs(list)
  v2:setText(list[#list])
  v2:setBreadcrumbs(list)
end
function ModHubItemsFrame:reload()
  self:updateList()
end
function ModHubItemsFrame:updateList()
  if self.forcedModItems ~= nil then
    self.mods = self.forcedModItems
  else
    local v1 = v1:getModsByCategory(self.categoryId, true)
    self.mods = v1
  end
  v1:reloadData()
  if 0 >= #self.mods then
  end
  v1:setVisible(true)
  if #self.mods ~= 0 then
  end
  v1:setVisible(true)
  self:updateDownloadStates()
  self:setMenuButtonInfoDirty()
end
function ModHubItemsFrame:getMainElementSize()
  return self.modInfoBox.size
end
function ModHubItemsFrame:getMainElementPosition()
  return self.modInfoBox.absPosition
end
function ModHubItemsFrame:updateDownloadStates()
  if 0 < #self.itemsList.elements then
    for v4, v5 in ipairs(self.itemsList.elements) do
      self:updateModDownloadState(v5, v5.indexInSection)
    end
  end
  self.updateModTimer = self.updateModInterval
end
function ModHubItemsFrame:updateModDownloadState(cell, index)
  if self.mods[index] == nil then
    return
  end
  local v4 = cell:getAttribute("nameLabel")
  v4 = v4:getText()
  local v5 = v3:getName()
  if v4 ~= v5 then
    return
  end
  v4 = v3:getIsDownloading()
  v5 = v3:getIsInstalled()
  local v6 = v3:getIsDownload()
  local fileSize = v3:getIsFailed()
  local v8 = v3:getIsUpdate()
  local v9 = cell:getAttribute("statusBox")
  if not v4 and not v5 and not v6 and not fileSize then
  end
  v9:setVisible(v11)
  if not v4 then
    -- if not v6 then goto L67 end
  end
  local v10 = v3:getDownloadedBytes()
  local v11 = v3:getFilesize()
  local v12 = MathUtil.clamp(v10 / v11, 0, 1)
  -- goto L69  (LOP_JUMP +2)
  if v5 then
  end
  v10 = cell:getAttribute("statusBar")
  v10:setSize(v10.parent.size[1] * v9, nil)
  if not v4 then
    -- if not v6 then goto L95 end
    -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000016 -> L95
  end
  v12 = string.format("%.0f %%", v9 * 100)
  -- goto L150  (LOP_JUMP +55)
  if v6 then
    v12 = v12:getText(ModHubItemsFrame.L10N_SYMBOL.STATUS_PENDING)
  elseif v8 then
    v12 = v12:getText(ModHubItemsFrame.L10N_SYMBOL.STATUS_UPDATE)
  else
    if v5 then
      v12 = v12:getText(ModHubItemsFrame.L10N_SYMBOL.STATUS_INSTALLED)
    elseif fileSize then
      v12 = v12:getText(ModHubItemsFrame.L10N_SYMBOL.STATUS_FAILED)
    end
  end
  v12 = cell:getAttribute("statusLabel")
  v12:setText(v11)
end
function ModHubItemsFrame:onActivateItem(_, clickedElement)
  self.notifyActivatedModItemCallback(self, self.mods[self.itemsList.selectedIndex].modId, self.categoryName)
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
end
function ModHubItemsFrame:onButtonDetails()
  self:onActivateItem()
end
function ModHubItemsFrame:onClickLeft()
  cell:scrollTo(self.itemsList.firstVisibleItem - self.itemsList.itemsPerCol)
end
function ModHubItemsFrame:onClickRight()
  cell:scrollTo(self.itemsList.firstVisibleItem + self.itemsList.itemsPerCol)
end
function ModHubItemsFrame:onListSelectionChanged(list, section, index)
  if self.mods[index] ~= nil then
    self.notifySelectedModItemCallback(self, self.mods[index].modId)
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
end
function ModHubItemsFrame:setModInfo(modInfo)
  local v4 = modInfo:getName()
  isDLC:setText(v4, true)
  v4 = modInfo:getAuthor()
  isDLC:setText(v4, true)
  v4 = modInfo:getVersionString()
  isDLC:setText(v4, true)
  local isDLC = modInfo:getIsDLC()
  local isTop = modInfo:getIsTop()
  if not isDLC then
    local fileSize = modInfo:getFilesize()
    local v8 = string.format("%.02f MB", fileSize / 1024 / 1024)
    v6:setText(v8, true)
    fileSize = modInfo:getRatingScore()
    -- TODO: structure LOP_FORNPREP (pc 58, target 106)
    if 1 - 0.75 <= fileSize / 100 and fileSize / 100 >= 1 - 0.25 then
    end
    v10:setVisible(v12)
    if v9 - 0.25 <= v6 then
      v10:applyProfile(ModHubItemsFrame.PROFILE.RATING_STAR_ACTIVE)
    else
      v10:applyProfile(ModHubItemsFrame.PROFILE.RATING_STAR)
    end
    -- TODO: structure LOP_FORNLOOP (pc 105, target 59)
    local v9 = v9:getText("modHub_flag_crossplay")
    fileSize:setText(v9, true)
  else
    local priceString = modInfo:getPriceString()
    v6:setText(priceString, true)
    local v6 = priceString:len()
    if 1 >= v6 then
    end
  end
  priceString:setVisible(not isDLC)
  priceString:setVisible(not isDLC)
  priceString:setVisible(not isDLC)
  priceString:setVisible(not isDLC)
  priceString:setVisible(v4)
  priceString:setVisible(v4)
  priceString:invalidateLayout()
end
function ModHubItemsFrame:onButtonSearch()
  self.notifySearchCallback(self.categoryId)
end
function ModHubItemsFrame:onButtonShowToggle()
  self.notifyToggleBetaCallback(self)
end
function ModHubItemsFrame:getNumberOfItemsInSection(list, section)
  if self.listSizeLimit ~= nil then
    return math.min(#self.mods, self.listSizeLimit)
  end
  return v3
end
function ModHubItemsFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = self.mods[index]:getNumUpdates()
  local fileSize = self.mods[index]:getNumNew()
  local v8 = self.mods[index]:getNumConflicts()
  local markerElement = cell:getAttribute("marker")
  if 0 >= v6 and 0 >= fileSize and 0 >= v8 then
  end
  markerElement:setVisible(v12)
  if 0 < v8 then
    markerElement:applyProfile("modHubMarkerConflict")
  elseif 0 < v6 then
    markerElement:applyProfile("modHubMarkerUpdate")
  else
    if 0 < fileSize then
      markerElement:applyProfile("modHubMarkerNew")
    end
  end
  local iconElement = cell:getAttribute("icon")
  local v14 = v5:getIsIconLocal()
  iconElement:setIsWebOverlay(not v14)
  local v13 = v5:getIconFilename()
  iconElement:setImageFilename(...)
  local v11 = cell:getAttribute("nameLabel")
  v13 = v5:getName()
  v11:setText(...)
  self:updateModDownloadState(cell, index)
end
ModHubItemsFrame.PROFILE = {LIST_ITEM_NEUTRAL = "modHubItemsListItem", LIST_ITEM_SELECTED = "modHubItemsListItemSelected", RATING_STAR_ACTIVE = "modHubAttributeRatingStarActive", RATING_STAR = "modHubAttributeRatingStar"}
ModHubItemsFrame.L10N_SYMBOL = {STATUS_PENDING = "modHub_pending", STATUS_UPDATE = "modHub_update", STATUS_INSTALLED = "modHub_installed", STATUS_FAILED = "modHub_failed", BUTTON_DETAILS = "button_detail", BUTTON_SEARCH = "modHub_search", BUTTON_SHOW_ALL = "button_modHubShowAll", BUTTON_SHOW_TOP = "button_modHubShowTop"}
