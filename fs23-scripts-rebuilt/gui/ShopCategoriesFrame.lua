-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopCategoriesFrame = {}
local ShopCategoriesFrame_mt = Class(ShopCategoriesFrame, TabbedMenuFrameElement)
function ShopCategoriesFrame.register()
  local v0 = ShopCategoriesFrame.new()
  v1:loadGui("dataS/gui/ShopCategoriesFrame.xml", "ShopCategoriesFrame", v0, true)
end
ShopCategoriesFrame.CONTROLS = {"categoryHeaderIcon", "categoryHeaderText", "categoryList", "noItemsText"}
function ShopCategoriesFrame.new(subclass_mt, shopController)
  if not shopController then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ShopCategoriesFrame.CONTROLS)
  v2.notifyActivatedCategoryCallback = u1
  v2.headerLabelText = ""
  v2.headerIconUVs = {}
  v2.categories = {}
  return v2
end
function ShopCategoriesFrame:createFromExistingGui(v1)
  local v2 = ShopCategoriesFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ShopCategoriesFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function ShopCategoriesFrame:initialize(categories, categoryClickedCallback, categorySelectedCallback, headerIconUVs, headerText, iconHeightWidthRatio, filter)
  self.headerLabelText = headerText
  self.headerIconUVs = headerIconUVs
  self.iconHeightWidthRatio = iconHeightWidthRatio
  self.filter = filter
  self:setCategories(categories)
  if not categoryClickedCallback then
  end
  self.notifyActivatedCategoryCallback = v8
  if not categorySelectedCallback then
  end
  self.notifySelectedCategoryCallback = v8
  if self.categoryHeaderText ~= nil then
    local v11 = unpack(headerIconUVs)
    v8:setImageUVs(...)
    v8:setText(headerText)
    v8:updateAbsolutePosition()
  end
  self:setTitle(headerText)
end
function ShopCategoriesFrame:setUseSections(use)
  self.useSections = use
end
function ShopCategoriesFrame:setCategories(categories)
  if self.useSections then
    self.categories = {}
    for v6, v7 in ipairs(categories) do
      local v8 = v8:sub(1, 1)
      v8 = v8:upper()
      if v2 ~= v8 then
        self.categories[#self.categories + 1] = {}
        self.categories[#self.categories].name = v8
      end
      self.categories[#self.categories][#self.categories[#self.categories] + 1] = v7
    end
  else
    self.categoryList.sectionHeaderCellName = nil
    self.categories = {categories}
  end
  v2:reloadData()
  if self.categoryList.totalItemCount ~= 0 then
  end
  v2:setVisible(true)
end
function ShopCategoriesFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self.notifySelectedCategoryCallback(nil)
  v1:reloadData()
  self:setSoundSuppressed(true)
  v1:setFocus(self.categoryList)
  self:setSoundSuppressed(false)
end
function ShopCategoriesFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function ShopCategoriesFrame:onOpenCategory()
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  if self.categories[self.categoryList.selectedSectionIndex] ~= nil and self.categories[self.categoryList.selectedSectionIndex][self.categoryList.selectedIndex] ~= nil then
    self.notifyActivatedCategoryCallback(self.categories[self.categoryList.selectedSectionIndex][self.categoryList.selectedIndex].id, self.headerIconUVs, self.headerLabelText, self.categories[self.categoryList.selectedSectionIndex][self.categoryList.selectedIndex].label, self.filter)
  end
end
function ShopCategoriesFrame:onListSelectionChanged(list, section, index)
  self.notifySelectedCategoryCallback(self.categories[section][index])
end
function ShopCategoriesFrame:onPageChanged(page, fromPage)
  local v4 = v4:superClass()
  v4.onPageChanged(self, page, fromPage)
  v4:scrollTo((page - 1) * self.categoryList.itemsPerRow * self.categoryList.itemsPerCol + 1)
end
function ShopCategoriesFrame:getNumberOfSections(list)
  return #self.categories
end
function ShopCategoriesFrame:getNumberOfItemsInSection(list, section)
  return #self.categories[section]
end
function ShopCategoriesFrame:populateCellForItemInSection(list, section, index, cell)
  if Platform.isMobile then
    if self.id == "pageShopVehicles" then
      local v6 = cell:getAttribute("icon")
      v6:applyProfile("shopCategoryItemImageVehicle")
    else
      v6 = cell:getAttribute("icon")
      v6:applyProfile("shopCategoryItemImageBrand")
    end
  end
  v6 = cell:getAttribute("icon")
  v6:setAspectRatio(self.iconHeightWidthRatio or 1)
  v6 = cell:getAttribute("icon")
  v6:setImageFilename(v5.iconFilename)
  v6 = cell:getAttribute("title")
  v6:setText(v5.label)
  v6 = cell:getAttribute("coinBg")
  if v6 ~= nil then
    if Platform.hasInAppPurchases and v5.id ~= "COINS" then
    end
    v6:setVisible(v9)
  end
end
function ShopCategoriesFrame:getTitleForSectionHeader(list, section)
  return self.categories[section].name or ""
end
