-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopItemsFrame = {}
local ShopItemsFrame_mt = Class(ShopItemsFrame, TabbedMenuFrameElement)
ShopItemsFrame.CONTROLS = {"itemsHeaderIcon", "itemsHeaderText", "shopSlotsIcon", "shopSlotsText", "currentBalanceLabel", "currentBalanceText", "breadcrumbs", "itemsList", "noItemsText", "baseInfoLayout", "itemInfoTitle", "itemInfoDescription", "fruitIconTemplate", "attributesLayout", "attrValue", "attrIcon", "attrIconsLayout", "itemDetailName", "itemDetailOwned", "detailSeparator", "shopListAttributeInfoIcon", "shopListAttributeInfo", "detailBox", "attrVehicleValue", "attrVehicleValueIcon", "priceBox", "moneySlotBox"}
ShopItemsFrame.SLOTS_USAGE_CRITICAL_THRESHOLD = 0.9
function ShopItemsFrame.register()
  local v0 = ShopItemsFrame.new()
  v1:loadGui("dataS/gui/ShopItemsFrame.xml", "ShopItemsFrame", v0, true)
end
function ShopItemsFrame.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ShopItemsFrame.CONTROLS)
  v2.notifyActivatedDisplayItemCallback = u1
  v2.notifySelectedDisplayItemCallback = u1
  v2.displayItems = {}
  v2.clonedElements = {}
  v2.marqueeBoxes = {}
  return v2
end
function ShopItemsFrame:createFromExistingGui(v1)
  local v2 = ShopItemsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ShopItemsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDelegate(self)
  v1:setDataSource(self)
end
function ShopItemsFrame:initialize()
  local v1 = v1:getAreSlotsVisible()
  v2:setVisible(v1)
  v2:setVisible(v1)
  if self.moneySlotBox ~= nil then
    v2:invalidateLayout()
  end
end
function ShopItemsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:setSoundSuppressed(true)
  v1:setFocus(self.itemsList)
  if self.categoryHasChanged then
    self.itemsList.setNextOpenIndex = 1
    self.categoryHasChanged = false
  end
  v1:forceSelectionUpdate()
  v1:makeSelectedCellVisible()
  self:setSoundSuppressed(false)
end
function ShopItemsFrame:setItemClickCallback(itemClickedCallback)
  if not itemClickedCallback then
  end
  self.notifyActivatedDisplayItemCallback = v2
end
function ShopItemsFrame:setItemSelectCallback(itemSelectedCallback)
  if not itemSelectedCallback then
  end
  self.notifySelectedDisplayItemCallback = v2
end
function ShopItemsFrame:setHeader(headerIconUVs, headerText)
  local v6 = unpack(headerIconUVs)
  v3:setImageUVs(...)
  v3:setText(headerText)
  v3:updateAbsolutePosition()
end
function ShopItemsFrame:setCategory(categoryIconUVs, rootName, categoryName, isSpecial, secondaryCategoryName, headerTitleOverride)
  if rootName == nil then
    v7:setBreadcrumbs({categoryName, secondaryCategoryName})
  else
    v7:setBreadcrumbs({rootName, categoryName, secondaryCategoryName})
  end
  if not categoryIconUVs then
  end
  if not headerTitleOverride and not secondaryCategoryName then
  end
  self:setHeader(v9, v10)
  if self.categoryName == categoryName then
  end
  self.categoryHasChanged = true
  self.rootName = rootName
  self.categoryName = categoryName
  self.secondaryCategoryName = secondaryCategoryName
  self.iconUVs = categoryIconUVs
  if not headerTitleOverride and not secondaryCategoryName then
  end
  self:setTitle(v9)
end
function ShopItemsFrame:setShowBalance(doShowBalance)
  v2:setVisible(doShowBalance)
  v2:setVisible(doShowBalance)
end
function ShopItemsFrame:setShowNavigation(doShowNavigation)
  if self.breadcrumbs ~= nil then
    v2:setVisible(doShowNavigation)
  end
end
function ShopItemsFrame:setCurrentBalance(balance, balanceString)
  local v4 = math.floor(balance)
  if v4 <= -1 then
  end
  if self.currentBalanceText.profile ~= v3 then
    v4:applyProfile(v3)
  end
  v4:setText(balanceString)
end
function ShopItemsFrame:setSlotsUsage(slotsUsage, maxSlots)
  local v3 = v3:getAreSlotsVisible()
  if v3 then
    local text = string.format("%0d / %0d", slotsUsage, maxSlots)
    if ShopItemsFrame.SLOTS_USAGE_CRITICAL_THRESHOLD <= slotsUsage / maxSlots then
    end
    v6:applyProfile(v5)
    v6:setText(text)
  end
  text:setVisible(v3)
  text:setVisible(v3)
  if self.moneySlotBox ~= nil then
    text:invalidateLayout()
  end
end
function ShopItemsFrame:setDisplayItems(displayItems, areItemsOwned)
  self:setSoundSuppressed(true)
  if not displayItems then
  end
  self.displayItems = v3
  self.areItemsOwned = areItemsOwned
  v3:setVisible(false)
  v3:setVisible(false)
  v3:reloadData()
  if 0 >= #displayItems then
  end
  v3:setVisible(true)
  if #displayItems ~= 0 then
  end
  v3:setVisible(true)
end
function ShopItemsFrame.getStoreItemDisplayPrice(v0, v1, v2, v3, v4)
  local v6 = StoreItemUtil.getIsHandTool(v1)
  if v4 ~= nil then
    local v7 = StoreItemUtil.getPriceWithBoughtConfigurations(v1, v4.boughtConfigurations, "price")
    local v10 = v10:formatMoney(v4.price, 0, true, true)
    return string.format("%s (%d%%)", v10, -(1 - v4.price / v7) * 100)
  end
  if v3 then
    if v2 ~= nil then
      -- if v2.propertyState ~= Vehicle.PROPERTY_STATE_LEASED then goto L47 end
    end
    -- if not v6 then goto L86 end
    v7, v8 = v7:getSellPrice(v2 or v1)
    return v9:formatMoney(v7, 0, true, true)
  end
  if v1.isInAppPurchase then
    return v1.price
  end
  v7, v8, v9 = v7:getBuyPrice(v1)
  v10 = v10:formatMoney(v7, 0, true, true)
  return v10
end
function ShopItemsFrame:assignItemFillTypesData(baseIconProfile, iconFilenames, attributeIndex)
  if self.attrIconsLayout[attributeIndex] == nil then
    return attributeIndex
  end
  if #self.attrValue >= attributeIndex and iconFilenames ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000002 -> L23
  end
  v5:setVisible(false)
  return attributeIndex
  v7:applyProfile(baseIconProfile)
  v7:setVisible(true)
  v7:setVisible(true)
  v7:setVisible(false)
  -- TODO: structure LOP_FORNPREP (pc 60, target 105)
  local v10 = v10:clone(v4)
  v10:setVisible(true)
  table.insert(self.clonedElements, v10)
  v10:applyProfile(ShopItemsFrame.PROFILE.ICON_FRUIT_TYPE)
  v10:setImageFilename(iconFilenames[1])
  -- TODO: structure LOP_FORNLOOP (pc 104, target 61)
  local v7 = math.min(self.attributesLayout.absSize[1] * 0.75, 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3])
  v4:setPosition(0)
  v8:setSize(v7, nil)
  v4:setSize(0 + v10.absSize[1] + v10.margin[1] + v10.margin[3], nil)
  v4:invalidateLayout()
  if v7 < 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3] then
    self.marqueeBoxes[v4] = 0
  else
    self.marqueeBoxes[v4] = nil
  end
  return attributeIndex + 1
end
function ShopItemsFrame:assignItemTextData(displayItem)
  if Platform.isMobile and self.attrVehicleValue ~= nil then
    if self.areItemsOwned and displayItem.concreteItem ~= ShopDisplayItem.NO_CONCRETE_ITEM then
    end
    local v6 = self:getStoreItemDisplayPrice(v2, v3, self.areItemsOwned)
    v4:setText(...)
    v4:setVisible(not v2.isInAppPurchase)
    v4:setVisible(not v2.isInAppPurchase)
  end
  -- TODO: structure LOP_FORNPREP (pc 55, target 126)
  if 1 <= #displayItem.attributeValues and displayItem.attributeIconProfiles[1] ~= nil and displayItem.attributeIconProfiles[1] ~= "" then
    v9:setText(displayItem.attributeValues[1])
    v9:updateAbsolutePosition()
    v9:applyProfile(displayItem.attributeIconProfiles[1])
    if displayItem.attributeValues[1] ~= nil and displayItem.attributeValues[1] == "" then
    end
  end
  v7:setVisible(v6)
  v7:setVisible(v6)
  v7:setVisible(false)
  if v6 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 125, target 56)
  return v2
end
function ShopItemsFrame:assignItemAttributeData(displayItem)
  for v5, v6 in pairs(self.clonedElements) do
    v6:delete()
    self.clonedElements[v5] = nil
  end
  for v5, v6 in pairs(self.marqueeBoxes) do
    self.marqueeBoxes[v5] = nil
  end
  v2 = self:assignItemTextData(displayItem)
  v3 = self:assignItemFillTypesData(ShopItemsFrame.PROFILE.ICON_FILL_TYPES, displayItem.fillTypeIconFilenames, v2 + 1)
  v4 = self:assignItemFillTypesData(ShopItemsFrame.PROFILE.ICON_FILL_TYPES, displayItem.foodFillTypeIconFilenames, v3)
  v4 = self:assignItemFillTypesData(ShopItemsFrame.PROFILE.ICON_SEED_FILL_TYPES, displayItem.seedTypeIconFilenames, v4)
  if not GS_IS_MOBILE_VERSION and v4 == 1 then
  end
  v4:setVisible(v6)
  if not not GS_IS_MOBILE_VERSION and #displayItem.attributeValues ~= 0 then
  end
  v5:setText(displayItem.functionText)
  v5:setVisible(v4)
  if displayItem.functionText ~= "" then
  end
  v5:setVisible(v7)
  if displayItem.concreteItem ~= nil and displayItem.concreteItem.getName ~= nil then
    v6 = v6:getName()
  end
  v6 = v6:getBrandByIndex(displayItem.storeItem.brandIndex)
  if displayItem.concreteItem ~= nil and displayItem.concreteItem.getBrand ~= nil then
    local v9 = v9:getBrand()
    local v7 = v7:getBrandByIndex(...)
  end
  if v6 ~= nil then
  end
  v7:setText(v5)
  if displayItem.numOwned ~= nil then
    if displayItem.numLeased == nil then
      local v10 = v10:getText("ui_shop_numOwnedFormat")
      v9 = string.format(v10, displayItem.numOwned)
      v7:setText(...)
    else
      v10 = v10:getText("ui_shop_numOwnedLeasedFormat")
      v9 = string.format(v10, displayItem.numOwned, displayItem.numLeased)
      v7:setText(...)
    end
  end
  v7:invalidateLayout()
end
function ShopItemsFrame:onOpenItem(v1, v2, v3, v4, v5)
  local v7 = v7:getLastInputMode()
  if self.displayItems[self.itemsList.selectedIndex] ~= nil and v7 == GS_INPUT_HELP_MODE_TOUCH then
    -- if v5 then goto L23 end
  end
  if v7 ~= GS_INPUT_HELP_MODE_TOUCH then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
    self.notifyActivatedDisplayItemCallback(v6)
  end
end
function ShopItemsFrame:onListSelectionChanged(list, section, index)
  self:updateItemAttributeData(index)
end
function ShopItemsFrame:updateItemAttributeData(index)
  if not index then
  end
  if self.displayItems[v2] ~= nil then
    local v3 = self:getIsVisible()
    if v3 then
      self:assignItemAttributeData(self.displayItems[v2])
      self.notifySelectedDisplayItemCallback(self.displayItems[v2], v2)
    end
  end
end
function ShopItemsFrame:getSelectedDisplayItem()
  return self.displayItems[self.itemsList.selectedIndex]
end
function ShopItemsFrame:getNumberOfItemsInSection(list, section)
  return #self.displayItems
end
function ShopItemsFrame:populateCellForItemInSection(list, section, index, cell)
  if self.displayItems[index].storeItem.brandIndex ~= nil then
    local v7 = cell:getAttribute("brandIcon")
    if self.displayItems[index].concreteItem.getBrand ~= nil then
      local v9 = v9:getBrand()
    end
    v9 = v9:getBrandByIndex(v8)
    if not v6.customBrandIcon then
    end
    v7:setImageFilename(v12)
    v7:setVisible(true)
    local v10 = cell:getAttribute("icon")
    v10:applyProfile("shopItemsListItemImage")
  else
    v7 = cell:getAttribute("brandIcon")
    v7:setVisible(false)
    v7 = cell:getAttribute("icon")
    v7:applyProfile("shopItemsListItemImageWithoutBrand")
  end
  if v6.isInAppPurchase then
    v7 = cell:getAttribute("priceTag")
    local v8 = cell:getAttribute("priceTagText")
    v9 = cell:getAttribute("icon")
    v9:setImageFilename(v6.imageFilename)
    v9 = cell:getAttribute("title")
    v9:setText(v6.title)
    if v6.canBeRecovered then
      v7:applyProfile("shopItemsListItemPriceTagRecoverable")
    else
      v7:applyProfile("shopItemsListItemPriceTag")
    end
    v10 = getTextWidth(v8.textSize, v6.priceText)
    v7:setSize(v10 + CORNER_WIDTH * 2)
    v7:setVisible(true)
    v8:setSize(v10 + CORNER_WIDTH * 2)
    v8:setText(v6.priceText)
    return
  end
  if v5.concreteItem.getImageFilename ~= nil then
    v8 = v8:getImageFilename()
  end
  v8 = cell:getAttribute("icon")
  v8:setImageFilename(v7)
  if v5.concreteItem.getName ~= nil then
    v9 = v9:getName()
  end
  v9 = cell:getAttribute("title")
  v9:setText(v8)
  if self.areItemsOwned and v5.concreteItem ~= ShopDisplayItem.NO_CONCRETE_ITEM then
  end
  if Platform.isMobile then
    v10 = cell:getAttribute("value")
    v10:setVisible(false)
  else
    v10 = cell:getAttribute("value")
    local v12 = self:getStoreItemDisplayPrice(v6, v9, self.areItemsOwned, v5.saleItem)
    v10:setText(...)
  end
  if v6.isMod then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L240
    v10 = cell:getAttribute("modDlc")
    v10:setText("Mod")
  elseif v6.isMod then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L259
    v10 = cell:getAttribute("modDlc")
    v10:setText(v6.dlcTitle .. " (Mod)")
  else
    if v6.dlcTitle ~= nil then
      v10 = cell:getAttribute("modDlc")
      v10:setText(v6.dlcTitle)
    else
      v10 = cell:getAttribute("modDlc")
      v10:setText("")
    end
  end
  v10 = cell:getAttribute("priceTag")
  v10:setVisible(false)
end
function ShopItemsFrame:update(dt)
  local index = index:superClass()
  index.update(self, dt)
  self:updateMarqueeAnimation(dt)
end
function ShopItemsFrame:updateMarqueeAnimation(dt)
  for v5, v6 in pairs(self.marqueeBoxes) do
    if 9000 * (v5.absSize[1] - v5.parent.absSize[1]) / v5.parent.absSize[1] <= v6 + dt then
    end
    local v16 = math.abs(v6)
    local v12 = MathUtil.smoothstep(0.2, 0.8, v16 / v11)
    v5:setPosition(-(v9 * v12))
    self.marqueeBoxes[v5] = v6
  end
end
ShopItemsFrame.PROFILE = {ICON_FILL_TYPES = "shopListAttributeIconFillTypes", ICON_SEED_FILL_TYPES = "shopListAttributeIconSeeds", ICON_FRUIT_TYPE = "shopListAttributeFruitIcon", ICON_FILL_TYPES_PLUS = "shopListAttributeIconPlus", BALANCE_POSITIVE = "shopMoney", BALANCE_NEGATIVE = "shopMoneyNeg"}
