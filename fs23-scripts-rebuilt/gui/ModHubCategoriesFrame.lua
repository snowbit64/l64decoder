-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubCategoriesFrame = {}
local ModHubCategoriesFrame_mt = Class(ModHubCategoriesFrame, TabbedMenuFrameElement)
ModHubCategoriesFrame.CONTROLS = {"headerText", "spaceUsageLabel", CATEGORY_LIST = "categoryList", NAV_HEADER = "breadcrumbs"}
function ModHubCategoriesFrame.register()
  local v0 = ModHubCategoriesFrame.new()
  v1:loadGui("dataS/gui/ModHubCategoriesFrame.xml", "ModHubCategoriesFrame", v0, true)
end
function ModHubCategoriesFrame.new(subclass_mt, modHubController)
  if not modHubController then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubCategoriesFrame.CONTROLS)
  v2.notifyActivatedCategoryCallback = u1
  v2.notifySearchCallback = u1
  v2.notifyToggleBetaCallback = u1
  v2.categories = {}
  return v2
end
function ModHubCategoriesFrame:createFromExistingGui(v1)
  local v2 = ModHubCategoriesFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ModHubCategoriesFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function ModHubCategoriesFrame:initialize(categories, categoryClickedCallback, headerText, iconHeightWidthRatio)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v6 = v6:getText("button_detail")
  self.detailsButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v6, callback = function()
    self:onButtonDetails()
  end}
  v6 = v6:getText("modHub_search")
  self.searchButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v6, callback = function()
    self:onButtonSearch()
  end}
  self.toggleTopButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = "", callback = function()
    self:onButtonShowToggle()
  end}
  self.title = headerText
  self.iconHeightWidthRatio = iconHeightWidthRatio
  v5:setText(headerText)
  if not categoryClickedCallback then
  end
  self.notifyActivatedCategoryCallback = v5
  self:setCategories(categories)
end
function ModHubCategoriesFrame:setCategories(categories)
  self.categories = categories
  v2:reloadData()
  self:setMenuButtonInfoDirty()
end
function ModHubCategoriesFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:setMenuButtonInfoDirty()
  v1:forceSelectionUpdate()
end
function ModHubCategoriesFrame.reload(v0)
end
function ModHubCategoriesFrame:getMainElementSize()
  return self.categoryList.size
end
function ModHubCategoriesFrame:getMainElementPosition()
  return self.categoryList.absPosition
end
function ModHubCategoriesFrame:getMenuButtonInfo()
  if 0 < #self.categories then
    table.insert({}, self.detailsButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  table.insert(v1, self.searchButtonInfo)
  if Platform.allowsScriptMods then
    local v3 = self.getBetaToggleText()
    self.toggleTopButtonInfo.text = v3
    table.insert(v1, self.toggleTopButtonInfo)
  end
  return v1
end
function ModHubCategoriesFrame:setSearchCallback(searchCallback)
  self.notifySearchCallback = searchCallback
end
function ModHubCategoriesFrame:setToggleBetaCallback(callback)
  self.notifyToggleBetaCallback = callback
end
function ModHubCategoriesFrame.setBreadcrumbs(v0, v1)
end
function ModHubCategoriesFrame:setBetaToggleTextCallback(callback)
  self.getBetaToggleText = callback
end
function ModHubCategoriesFrame:onActivateCategory()
  self.notifyActivatedCategoryCallback(self.categories[self.categoryList.selectedIndex].id, self.categories[self.categoryList.selectedIndex].name)
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
end
function ModHubCategoriesFrame:onListSelectionChanged(list, section, itemIndex)
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
end
function ModHubCategoriesFrame:onButtonDetails()
  self:onActivateCategory()
end
function ModHubCategoriesFrame:onButtonSearch()
  self.notifySearchCallback()
end
function ModHubCategoriesFrame:onButtonShowToggle()
  self.notifyToggleBetaCallback(self)
end
function ModHubCategoriesFrame:getNumberOfItemsInSection(list, section)
  return #self.categories
end
function ModHubCategoriesFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("markerNew")
  if 0 >= self.categories[index].numNewItems then
  end
  v6:setVisible(true)
  v6 = cell:getAttribute("markerUpdate")
  if 0 >= v5.numAvailableUpdates then
  end
  v6:setVisible(true)
  v6 = cell:getAttribute("markerConflict")
  if 0 >= v5.numConflictedItems then
  end
  v6:setVisible(true)
  v6 = cell:getAttribute("markerBox")
  v6:invalidateLayout()
  v6 = cell:getAttribute("image")
  v6:setImageFilename(v5.iconFilename)
  v6:setSize(nil, v6.size[2] * (self.iconHeightWidthRatio or 1))
  local v7 = cell:getAttribute("text")
  v7:setText(v5.label)
end
