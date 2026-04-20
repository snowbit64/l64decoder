-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopMenu = {}
local ShopMenu_mt = Class(ShopMenu, TabbedMenuWithDetails)
ShopMenu.CONTROLS = {"pageShopBrands", "pageShopVehicles", "pageShopTools", "pageShopObjects", "pageShopGarageOwned", "pageShopGarageLeased", "pageShopDLCs", "pageShopPacks", "pageShopOthers", "pageUsedSale", "pageShopItemDetails", "pageShopItemCombinations", "subPageSelector"}
ShopMenu.DETAILS = {BRAND = 1, VEHICLE = 2}
ShopMenu.FILTER = {OWNED = 1, LEASED = 2}
function ShopMenu.register()
  ShopCategoriesFrame.register()
  ShopItemsFrame.register()
  ShopOthersFrame.register()
  local v0 = ShopMenu.new()
  v1:loadGui("dataS/gui/ShopMenu.xml", "ShopMenu", v0)
  return v0
end
function ShopMenu.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ShopMenu.CONTROLS)
  v2.performBackgroundBlur = true
  v2.gameState = GameState.MENU_SHOP
  v2.restorePageIndex = 2
  v2.useStack = true
  v2.playerFarm = nil
  v2.playerFarmId = 0
  v2.currentUserId = -1
  v2.isShowingOwnedPage = false
  v2.paused = false
  v2.isMissionTourActive = false
  v2.client = nil
  v2.server = nil
  v2.isMasterUser = false
  v2.isServer = false
  v2.currentBalanceValue = 0
  v2.timeSinceLastMoneyUpdate = 0
  v2.needMoneyUpdate = true
  v2.selectedDisplayElement = nil
  v2.currentDisplayItems = nil
  v2.defaultMenuButtonInfo = {}
  v2.shopMenuButtonInfo = {}
  v2.buyButtonInfo = {}
  v2.shopDetailsButtonInfo = {}
  v2.shopDetailsButtonInfoWithCombinations = {}
  v2.itemDetailsButtonInfo = {}
  v2.garageMenuButtonInfo = {}
  v2.switchOwnedLeasedButtonInfo = {}
  v2.sellButtonInfo = {}
  v2.showCategoriesButtonInfo = {}
  v2.backButtonInfo = {}
  local v5 = v2:makeSelfCallback(v2.exitMenuFromConfig)
  v3:setRequestExitCallback(...)
  v3:subscribe(MessageType.STORE_ITEMS_RELOADED, v2.onStoreItemsReloaded, v2)
  v3:subscribe(MessageType.VEHICLE_SALES_CHANGED, v2.onVehicleSaleChanged, v2)
  return v2
end
function ShopMenu:createFromExistingGui(v1)
  ShopCategoriesFrame.createFromExistingGui(g_gui.frames.shopCategories.target, "ShopCategoriesFrame")
  ShopItemsFrame.createFromExistingGui(g_gui.frames.shopItems.target, "ShopItemsFrame")
  ShopOthersFrame.createFromExistingGui(g_gui.frames.shopOthers.target, "ShopOthersFrame")
  local v2 = ShopMenu.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  v2.client = self.client
  v2.server = self.server
  v2:onLoadMapFinished()
  v2:setPlayerFarm(self.playerFarm)
  v2:setCurrentUserId(self.currentUserId)
  g_currentMission.shop = v2
  return v2
end
function ShopMenu:setClient(client)
  self.client = client
  v2:setClient(client)
end
function ShopMenu:setServer(server)
  self.server = server
  if server == nil then
  end
  self.isServer = true
end
function ShopMenu:updateGarageItems()
  if self.isShowingOwnedPage then
    local v1 = v1:getItemsByCategoryOwnedOrLeased(self.currentCategoryName, not self.isShowingLeasedPage, self.isShowingLeasedPage)
    if #v1 == 0 then
      self:onButtonBack()
      -- goto L33  (LOP_JUMP +11)
    end
    v2:setDisplayItems(v1, true)
  else
    self:updateCurrentDisplayItems()
  end
  local v3 = v3:getOwnedCategories()
  v1:setCategories(...)
  v3 = v3:getLeasedCategories()
  v1:setCategories(...)
end
function ShopMenu:onVehicleSaleChanged()
  local v3 = v3:getItemsByCategory(ShopController.SALES_CATEGORY)
  v1:setDisplayItems(...)
end
function ShopMenu:onLoadMapFinished()
  self:initializePages()
  self:onMissionTourStateChanged(false)
end
function ShopMenu:initializePages()
  v1:load()
  local v1 = self:makeSelfCallback(self.onButtonBack)
  self.clickBackCallback = v1
  v1:setCurrentMission(g_currentMission)
  v1:setClient(g_client)
  local v3 = self:makeSelfCallback(self.updateCurrentDisplayItems)
  v1:setUpdateShopItemsCallback(...)
  v3 = self:makeSelfCallback(self.updateGarageItems)
  v1:setUpdateAllItemsCallback(...)
  v1:setSaleItemBoughtCallback(self.closeConfigScreen, self)
  v1:setSwitchToConfigurationCallback(self.showConfigurationScreen, self)
  v1:load()
  v1 = self:makeSelfCallback(self.onSelectCategory)
  clickItemCategoryCallback:setUseSections(not GS_IS_MOBILE_VERSION)
  local v4 = v4:getBrands()
  local v5 = self:makeSelfCallback(self.onClickBrand)
  local v7 = GuiUtils.getUVs(ShopMenu.TAB_UV.BRANDS)
  local v8 = v8:getText(ShopMenu.L10N_SYMBOL.HEADER_BRANDS)
  clickItemCategoryCallback:initialize(v4, v5, v1, v7, v8, ShopMenu.BRAND_IMAGE_HEIGHT_WIDTH_RATIO)
  local clickItemCategoryCallback = self:makeSelfCallback(self.onClickItemCategory)
  v5 = v5:getVehicleCategories()
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.VEHICLES)
  local v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_VEHICLES)
  v3:initialize(...)
  v5 = v5:getToolCategories()
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.TOOLS)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_TOOLS)
  v3:initialize(...)
  v5 = v5:getObjectCategories()
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.OBJECTS)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_OBJECTS)
  v3:initialize(...)
  v5 = v5:getOwnedCategories()
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.OWNED)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_GARAGE_OWNED)
  v3:initialize(v5, clickItemCategoryCallback, v1, v8, v9, nil, ShopMenu.FILTER.OWNED)
  v5 = v5:getLeasedCategories()
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.LEASED)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_GARAGE_LEASED)
  v3:initialize(v5, clickItemCategoryCallback, v1, v8, v9, nil, ShopMenu.FILTER.LEASED)
  v5 = v5:getDLCCategories()
  local v6 = self:makeSelfCallback(self.onClickDLC)
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.DLCS)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_DLCS)
  v3:initialize(...)
  v5 = v5:getStorePacks()
  v6 = self:makeSelfCallback(self.onClickPack)
  v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.PACKS)
  v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_PACKS)
  v3:initialize(...)
  v6 = GuiUtils.getUVs(ShopMenu.TAB_UV.OTHERS)
  v7 = v7:getText(ShopMenu.L10N_SYMBOL.HEADER_OTHERS)
  v3:initialize(...)
  v3:initialize()
  v5 = self:makeClickBuyItemCallback()
  v3:setItemClickCallback(...)
  v5 = self:makeSelfCallback(self.onSelectItemBuyDetail)
  v3:setItemSelectCallback(...)
  v5 = GuiUtils.getUVs(ShopMenu.TAB_UV.SALE)
  v6 = v6:getText("ui_usedVehicleSale")
  v3:setHeader(...)
  v5 = GuiUtils.getUVs(ShopMenu.TAB_UV.SALE)
  v7 = v7:getText("ui_usedVehicleSale")
  v3:setCategory(v5, nil, v7, nil, nil, nil)
  v3:initialize()
  v3:initialize()
  v5 = self:makeClickBuyItemCallback()
  v3:setItemClickCallback(...)
  v5 = self:makeSelfCallback(self.onSelectItemBuyDetail)
  v3:setItemSelectCallback(...)
  self:setDetailButtons()
end
function ShopMenu:setDetailButtons()
  if not self.isShowingOwnedPage then
    local v3 = self:makeClickBuyItemCallback()
    v1:setItemClickCallback(...)
    v3 = self:makeSelfCallback(self.onSelectItemBuyDetail)
    v1:setItemSelectCallback(...)
    return
  end
  v3 = self:makeClickSellItemCallback()
  v1:setItemClickCallback(...)
  v3 = self:makeSelfCallback(self.onSelectItemSellDetail)
  v1:setItemSelectCallback(...)
end
function ShopMenu:setupMenuPages()
  local v4 = self:makeIsShopBrandsEnabledPredicate()
  local v5 = self:makeIsShopVehiclesEnabledPredicate()
  local v6 = self:makeIsShopToolsEnabledPredicate()
  local v7 = self:makeIsShopObjectsEnabledPredicate()
  local v8 = self:makeIsShopPacksEnabledPredicate()
  local v9 = self:makeIsShopUsedEnabledPredicate()
  local v10 = self:makeIsShopGarageEnabledPredicate()
  local v11 = self:makeIsShopLeasedEnabledPredicate()
  local v12 = self:makeIsDLCPageEnabledPredicate()
  local v13 = self:makeIsShopOthersEnabledPredicate()
  local v14 = self:makeIsShopItemsEnabledPredicate()
  local v15 = self:makeIsShopCombinationsEnabledPredicate()
  for v5, v6 in ipairs({{self.pageShopBrands, v4, ShopMenu.TAB_UV.BRANDS}, {self.pageShopVehicles, v5, ShopMenu.TAB_UV.VEHICLES}, {self.pageShopTools, v6, ShopMenu.TAB_UV.TOOLS}, {self.pageShopObjects, v7, ShopMenu.TAB_UV.OBJECTS}, {self.pageShopPacks, v8, ShopMenu.TAB_UV.PACKS}, {self.pageUsedSale, v9, ShopMenu.TAB_UV.SALE}, {self.pageShopGarageOwned, v10, ShopMenu.TAB_UV.OWNED}, {self.pageShopGarageLeased, v11, ShopMenu.TAB_UV.LEASED}, {self.pageShopDLCs, v12, ShopMenu.TAB_UV.DLCS}, {self.pageShopOthers, v13, ShopMenu.TAB_UV.OTHERS}, {self.pageShopItemDetails, v14, ShopMenu.TAB_UV.VEHICLES}, {self.pageShopItemCombinations, v15, ShopMenu.TAB_UV.SALE}}) do
    v7, v8, v9 = unpack(v6)
    self:registerPage(v7, v5, v8)
    v11 = GuiUtils.getUVs(v9)
    self:addPageTab(v7, g_iconsUIFilename, v11)
  end
end
function ShopMenu:setupMenuButtonInfo()
  local v2 = v2:superClass()
  v2.setupMenuButtonInfo(self)
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_BACK)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v2, callback = self.clickBackCallback}
  v2 = v2:getText("button_select")
  self.selectButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = self.onButtonSelect}
  if Platform.isMobile then
    self.defaultMenuButtonInfo = {self.backButtonInfo, self.onButtonSelect}
  else
    self.defaultMenuButtonInfo = {self.backButtonInfo, self.onButtonSelect}
  end
  self.defaultMenuButtonInfoByActions[InputAction.MENU_BACK] = self.defaultMenuButtonInfo[1]
  {}[InputAction.MENU_BACK] = self.clickBackCallback
  self.defaultButtonActionCallbacks = {}
  if Platform.isMobile then
    self.shopMenuButtonInfo = {self.backButtonInfo}
  else
    self.shopMenuButtonInfo = {self.backButtonInfo, self.selectButtonInfo}
  end
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_SHOW_CATEGORIES)
  v2 = self:makeSelfCallback(self.showCategories)
  self.showCategoriesButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = v2, profile = "buttonSwitch"}
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_SHOW_BRANDS)
  v2 = self:makeSelfCallback(self.showBrands)
  self.showBrandsButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = v2, profile = "buttonSwitch"}
  if Platform.isMobile then
    self.shopMenuButtonInfoBrands = {self.backButtonInfo, self.showBrandsButtonInfo}
  else
    self.shopMenuButtonInfo = {self.backButtonInfo, self.selectButtonInfo}
  end
  if Platform.isMobile then
    self.shopMenuButtonInfoCategories = {self.backButtonInfo, self.showCategoriesButtonInfo}
  else
    self.shopMenuButtonInfo = {self.backButtonInfo, self.selectButtonInfo}
  end
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_BUY)
  v2 = self:makeSelfCallback(self.onButtonAcceptItem)
  self.buyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = v2, profile = "buttonBuy"}
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_INFO)
  v2 = self:makeSelfCallback(self.onButtonInfo)
  self.itemDetailsButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = v2, profile = "buttonShowInfo"}
  if Platform.isMobile then
    self.shopDetailsButtonInfo = {self.backButtonInfo, self.buyButtonInfo, self.itemDetailsButtonInfo}
  else
    self.shopDetailsButtonInfo = {self.backButtonInfo, self.buyButtonInfo}
  end
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_COMBINATIONS)
  v2 = self:makeSelfCallback(self.onButtonCombinations)
  self.combinationsButtonInfo = {inputAction = InputAction.MENU_EXTRA_2, text = v2, callback = v2, profile = "buttonCombinations"}
  if Platform.isMobile then
    self.shopDetailsButtonInfoWithCombinations = {self.backButtonInfo, self.buyButtonInfo, self.combinationsButtonInfo, self.itemDetailsButtonInfo}
  else
    self.shopDetailsButtonInfoWithCombinations = {self.backButtonInfo, self.buyButtonInfo, self.combinationsButtonInfo}
  end
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_SELL)
  v2 = self:makeSelfCallback(self.onButtonAcceptItem)
  self.sellButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = v2, profile = "buttonSell"}
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_HOTSPOT)
  v2 = self:makeSelfCallback(self.onButtonToggleHotspot)
  self.hotspotButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = v2, profile = "buttonHotspot"}
  if Platform.isMobile then
    self.garageMenuButtonInfo = {self.backButtonInfo}
  else
    self.garageMenuButtonInfo = {self.backButtonInfo, self.hotspotButtonInfo}
  end
  v1:setMenuButtonInfo(self.garageMenuButtonInfo)
  v1:setMenuButtonInfo(self.garageMenuButtonInfo)
end
function ShopMenu:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:subscribe(MessageType.VEHICLE_REPAIRED, self.onVehicleRepairRepaintEvent, self)
  v1:subscribe(MessageType.VEHICLE_REPAINTED, self.onVehicleRepairRepaintEvent, self)
  v1:subscribe(MessageType.MONEY_CHANGED, self.onMoneyChanged, self)
  v1:subscribe(MessageType.MISSION_TOUR_STARTED, self.onMissionTourStateChanged, self, true)
  v1:subscribe(MessageType.MISSION_TOUR_FINISHED, self.onMissionTourStateChanged, self, false)
  self:setupMenuPages()
end
function ShopMenu:setPlayerFarm(farm)
  self.playerFarm = farm
  if farm ~= nil then
    self.playerFarmId = farm.farmId
  else
    self.playerFarmId = 0
  end
  v2:setPlayerFarm(farm)
  local v2 = self:getIsOpen()
  if v2 then
    self:updatePages()
  end
end
function ShopMenu.setCurrentMission(v0, v1)
  v2:setCurrentMission(v1)
end
function ShopMenu:setCurrentUserId(currentUserId)
  self.currentUserId = currentUserId
end
function ShopMenu:exitMenuFromConfig()
  v1:changeScreen(ShopMenu)
  self:exitMenu()
end
function ShopMenu:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  v1:reset()
  self.isMasterUser = false
  self.isServer = false
  self.selectedDisplayElement = nil
  self.selectedCategory = nil
  if GS_IS_MOBILE_VERSION then
    self.restorePageIndex = 2
  end
end
function ShopMenu:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  local v4 = v4:getBalance()
  self:onMoneyChanged(...)
  v1:onMenuVisibilityChange(true, false)
  self:updateGarageItems()
  self:onVehicleSaleChanged()
  self:updateSubPageSelector()
end
function ShopMenu:onClose(element)
  local v3 = v3:superClass()
  v3.onClose(self)
  self.mouseDown = false
  self.alreadyClosed = true
  self.isShowingOwnedPage = false
  if not self.closingForConfigurationScreen then
    self.currentDisplayItems = nil
    v2:showMoneyChange(MoneyType.SHOP_VEHICLE_BUY)
    v2:showMoneyChange(MoneyType.SHOP_VEHICLE_SELL)
    v2:showMoneyChange(MoneyType.SHOP_PROPERTY_BUY)
    v2:showMoneyChange(MoneyType.SHOP_PROPERTY_SELL)
    v2:showMoneyChange(MoneyType.LEASING_COSTS)
    v2:showMoneyChange(MoneyType.PURCHASE_SEEDS)
    v2:showMoneyChange(MoneyType.PURCHASE_FERTILIZER)
    v2:showMoneyChange(MoneyType.PURCHASE_FUEL)
    v2:showMoneyChange(MoneyType.PURCHASE_SAPLINGS)
    v2:showMoneyChange(MoneyType.PURCHASE_PALLETS)
    v2:showMoneyChange(MoneyType.PURCHASE_BALES)
    v2:showMoneyChange(MoneyType.OTHER)
    v2:showMoneyChange(MoneyType.BOUGHT_MATERIALS)
  end
  self.closingForConfigurationScreen = false
end
function ShopMenu:onMissionTourStateChanged(isMissionTourActive)
  self.isMissionTourActive = isMissionTourActive
end
function ShopMenu:onButtonSelect()
  if self.selectedCategory ~= nil then
    local v1 = self:getIsDetailMode()
    if not v1 then
      v1 = self:getTopFrame()
      v1:onOpenCategory()
      self:updateSubPageSelector()
    end
  end
end
function ShopMenu:onButtonInfo()
  InfoDialog.show(self.selectedDisplayElement.functionText)
end
function ShopMenu:onButtonShop()
  self:popDetail()
end
function ShopMenu:popDetail()
  local v2 = v2:superClass()
  v2.popDetail(self)
  self:updateSubPageSelector()
end
function ShopMenu:onButtonCombinations()
  local v2 = v2:getItemsFromCombinations(self.selectedDisplayElement.storeItem.specs.combinations)
  self.currentDisplayItems = v2
  v3:setDisplayItems(v2, false)
  local v5 = v5:getText("ui_combinationsFor")
  local v4 = string.format(v5, self.selectedDisplayElement.storeItem.name)
  local v11 = v11:getText("ui_combinations")
  v5:setCategory(self.pageShopItemDetails.iconUVs, self.pageShopItemDetails.rootName, self.pageShopItemDetails.categoryName, nil, v11, v4)
  self:setDetailButtons()
  self:pushDetail(self.pageShopItemCombinations)
end
function ShopMenu:onVehicleRepairRepaintEvent(vehicle, _)
  if self.selectedDisplayElement ~= nil and self.selectedDisplayElement.concreteItem == vehicle then
    local v7 = v7:hasCombinationInfo()
    self:updateGarageButtonInfo(...)
  end
end
function ShopMenu:onButtonAcceptItem()
  local v1 = self:getIsDetailMode()
  if v1 then
    v1 = self:getTopFrame()
    v1:onOpenItem(nil, nil, nil, nil, true)
  end
end
function ShopMenu:setIsGamePaused(paused)
  self.paused = paused
  if self.currentPage ~= nil then
    self:updateButtonsPanel(self.currentPage)
  end
end
function ShopMenu:onDetailClosed(detailPage)
  self.currentDisplayItems = nil
end
function ShopMenu:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  v2:update(dt)
  self:updateCurrentBalanceDisplay(dt)
end
function ShopMenu.setConfigurations(v0, v1, v2, v3, v4, v5, v6, v7)
  v8:setConfigurations(v1, v2, v3, v4, v5, v6, v7)
end
function ShopMenu:showConfigurationScreen(storeItem, saleItem, configurations)
  local v4 = v4:hasEnoughSlots(storeItem)
  if not v4 then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    local v6 = v6:getText(ShopConfigScreen.L10N_SYMBOL.TOO_FEW_SLOTS)
    InfoDialog.show(...)
    return
  end
  self.closingForConfigurationScreen = true
  self:changeScreen(ShopConfigScreen)
  v5:setReturnScreen(self.name)
  v5:setStoreItem(storeItem, nil, saleItem, nil, configurations)
  v5:setCallbacks(self.setConfigurations, self)
end
function ShopMenu:updateCurrentBalanceDisplay(dt)
  self.timeSinceLastMoneyUpdate = self.timeSinceLastMoneyUpdate + dt
  if self.needMoneyUpdate and TabbedMenu.MONEY_UPDATE_INTERVAL <= self.timeSinceLastMoneyUpdate then
    local v6 = v6:formatMoney(self.currentBalanceValue, 0, false)
    local v5 = v5:getCurrencySymbol(true)
    v3:setCurrentBalance(self.currentBalanceValue, v6 .. " " .. v5)
    v3:setCurrentBalance(self.currentBalanceValue, v6 .. " " .. v5)
    v3:setCurrentBalance(self.currentBalanceValue, v6 .. " " .. v5)
    self.timeSinceLastMoneyUpdate = 0
    self.needMoneyUpdate = false
  end
end
function ShopMenu:updateCurrentDisplayItems()
  if self.currentDisplayItems ~= nil then
    local v1 = v1:updateDisplayItems(self.currentDisplayItems)
    if #v1 == 0 then
      self:onButtonBack()
      return
    end
    v2:setDisplayItems(v1, false)
    self:setDetailButtons()
  end
end
function ShopMenu.updatePageControlVisibility(v0)
end
function ShopMenu:onStoreItemsReloaded()
  self:updateCurrentDisplayItems()
end
function ShopMenu:updateSubPageSelector()
  if self.subPageSelector ~= nil then
    if GS_IS_MOBILE_VERSION and self.currentPage == self.pageShopItemDetails then
      if self.currentItemDetailsType == ShopMenu.DETAILS.BRAND then
        local v4 = v4:getBrands()
        for v8, v9 in ipairs(v4) do
          if not v2 then
          end
          table.insert(v10, v9.label)
          if not (v9.id == self.currentBrandId) then
            continue
          end
        end
      elseif self.currentItemDetailsType == ShopMenu.DETAILS.VEHICLE then
        v4 = v4:getVehicleCategories()
        for v8, v9 in ipairs(v4) do
          if not v2 then
          end
          table.insert(v10, v9.label)
          if not (v9.id == self.currentCategoryName) then
            continue
          end
        end
      end
      if v2 ~= nil then
        v4:setTexts(v2)
        v4:setState(v3)
      end
    end
    v2:setVisible(v1)
    v2:setVisible(not v1)
  end
end
function ShopMenu:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if not v4 and action == InputAction.TOGGLE_STORE then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.BACK)
    self:exitMenu()
  end
  return eventUsed
end
function ShopMenu:onClickMenu()
  self:exitMenu()
  return true
end
function ShopMenu:exitMenu()
  v1:setDisplayItems({}, false)
  v1:setDisplayItems({}, false)
  v1:setDisplayItems({}, false)
  self.selectedDisplayElement = nil
  self.currentDisplayItems = nil
  local v2 = v2:superClass()
  v2.exitMenu(self)
end
function ShopMenu:onPageNext()
  if Platform.isMobile then
    -- if not v0.subPageSelector.visible then goto L36 end
    if #self.subPageSelector.texts < self.subPageSelector.state + 1 then
    end
    v2:setState(v1, true)
    return
  end
  local v2 = self:superClass()
  v2.onPageNext(self)
end
function ShopMenu:onPagePrevious()
  if Platform.isMobile then
    -- if not v0.subPageSelector.visible then goto L35 end
    if self.subPageSelector.state - 1 == 0 then
    end
    v2:setState(v1, true)
    return
  end
  local v2 = self:superClass()
  v2.onPagePrevious(self)
end
function ShopMenu:onMoneyChanged(farmId, newMoneyValue)
  if farmId == self.playerFarmId then
    local v3 = self:getIsVisible()
    if v3 then
      self.currentBalanceValue = newMoneyValue
      self.needMoneyUpdate = true
    end
  end
end
function ShopMenu:onSlotUsageChanged(currentSlotUsage, maxSlotUsage)
  if self.pageShopItemDetails ~= nil then
    v3:setSlotsUsage(currentSlotUsage, maxSlotUsage)
  end
  if self.pageShopItemCombinations ~= nil then
    v3:setSlotsUsage(currentSlotUsage, maxSlotUsage)
  end
  if self.pageUsedSale ~= nil then
    v3:setSlotsUsage(currentSlotUsage, maxSlotUsage)
  end
end
function ShopMenu:onSelectCategory(category, selectedElement)
  self.selectedCategory = category
end
function ShopMenu:onSelectItemBuyDetail(displayItem, selectedElementIndex)
  self.selectedDisplayElement = displayItem
  local isVehicle = StoreItemUtil.getIsVehicle(displayItem.storeItem)
  local isConfigurable = StoreItemUtil.getIsConfigurable(displayItem.storeItem)
  if isVehicle then
    -- if not v4 then goto L33 end
    -- if Platform.isMobile then goto L33 end
    local v6 = v6:getText(ShopMenu.L10N_SYMBOL.BUTTON_CUSTOMIZE)
    self.buyButtonInfo.text = v6
  else
    local isHandTool = StoreItemUtil.getIsHandTool(displayItem.storeItem)
    if not isConfigurable then
      -- if v5 then goto L59 end
      -- if Platform.isMobile then goto L59 end
      local v7 = v7:getText(ShopMenu.L10N_SYMBOL.BUTTON_DETAILS)
      self.buyButtonInfo.text = v7
    else
      v7 = v7:getText(ShopMenu.L10N_SYMBOL.BUTTON_BUY)
      self.buyButtonInfo.text = v7
    end
  end
  if isVehicle then
    -- if not Platform.isMobile then goto L104 end
    -- if not v1.storeItem.canBeRecovered then goto L104 end
    v6 = v6:getText(ShopMenu.L10N_SYMBOL.BUTTON_RECOVER)
    self.buyButtonInfo.text = v6
    self.buyButtonInfo.profile = "buttonRecover"
  elseif displayItem.storeItem.isInAppPurchase then
    if not displayItem.storeItem.isInAppPurchaseConsumable then
      v6 = v6:getText(ShopMenu.L10N_SYMBOL.BUTTON_UNLOCK)
      self.buyButtonInfo.text = v6
    end
    self.buyButtonInfo.profile = "buttonBuyIAP"
  else
    self.buyButtonInfo.profile = "buttonBuy"
  end
  self:updateButtonsPanel(self.pageShopItemDetails)
end
function ShopMenu:onSelectItemSellDetail(displayItem, selectedElementIndex)
  self.selectedDisplayElement = displayItem
  if displayItem.concreteItem.propertyState ~= nil and displayItem.concreteItem.propertyState == Vehicle.PROPERTY_STATE_LEASED then
  end
  local v10 = displayItem:hasCombinationInfo()
  self:updateGarageButtonInfo(...)
end
function ShopMenu:updateGarageButtonInfo(isOwned, numItems, hasCombinations)
  local buttons = self:getPageButtonInfo(self.pageShopItemDetails)
  -- TODO: structure LOP_FORNPREP (pc 8, target 12)
  buttons[1] = nil
  -- TODO: structure LOP_FORNLOOP (pc 11, target 9)
  table.insert(buttons, self.backButtonInfo)
  if 0 < numItems then
    table.insert(buttons, self.sellButtonInfo)
    if isOwned then
      local v6 = v6:getText(ShopMenu.L10N_SYMBOL.BUTTON_SELL)
      self.sellButtonInfo.text = v6
    else
      v6 = v6:getText(ShopMenu.L10N_SYMBOL.BUTTON_RETURN)
      self.sellButtonInfo.text = v6
    end
  end
  if not Platform.isMobile and self.selectedDisplayElement ~= nil and self.selectedDisplayElement.concreteItem.getMapHotspot ~= nil then
    table.insert(buttons, self.hotspotButtonInfo)
  end
  if hasCombinations then
    table.insert(buttons, self.combinationsButtonInfo)
  end
  self:updateButtonsPanel(self.pageShopItemDetails)
end
function ShopMenu:getPageButtonInfo(page)
  local isVehicle = self:getIsDetailMode()
  if isVehicle then
    if page ~= self.pageShopGarageOwned then
      -- if v1 ~= v0.pageShopGarageLeased then goto L16 end
    end
    return self.garageMenuButtonInfo
    if self.selectedDisplayElement ~= nil then
      isVehicle = isVehicle:hasCombinationInfo()
      if isVehicle then
        isVehicle = self:getTopFrame()
        if isVehicle ~= self.pageShopItemCombinations then
          return self.shopDetailsButtonInfoWithCombinations
        end
      end
    end
    return self.shopDetailsButtonInfo
  end
  if page == self.pageShopItemDetails then
    isVehicle = isVehicle:hasCombinationInfo()
    if isVehicle then
      isVehicle = self:getTopFrame()
      if isVehicle ~= self.pageShopItemCombinations then
        return self.shopDetailsButtonInfoWithCombinations
      end
    end
    return self.shopDetailsButtonInfo
  end
  if Platform.isMobile and page == self.pageShopBrands then
    return self.shopMenuButtonInfoCategories
  end
  if Platform.isMobile and page == self.pageShopVehicles then
    return self.shopMenuButtonInfoBrands
  end
  return self.shopMenuButtonInfo
end
function ShopMenu:onClickBrand(brandId, _, _, categoryDisplayName)
  self.isShowingOwnedPage = false
  self.isShowingLeasedPage = false
  local isHandTool = isHandTool:getItemsByBrand(brandId)
  self.currentDisplayItems = isHandTool
  v6:setDisplayItems(isHandTool, false)
  local v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.BRANDS)
  local v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_BRANDS)
  v6:setCategory(v8, v9, categoryDisplayName)
  self.currentItemDetailsType = ShopMenu.DETAILS.BRAND
  self.currentBrandId = brandId
  self:setDetailButtons()
  self:pushDetail(self.pageShopItemDetails)
  self:updateSubPageSelector()
end
function ShopMenu:onClickPack(packName, _, _, categoryDisplayName)
  self.isShowingOwnedPage = false
  self.isShowingLeasedPage = false
  local isHandTool = isHandTool:getItemsByPack(packName)
  self.currentDisplayItems = isHandTool
  v6:setDisplayItems(isHandTool, false)
  local v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.PACKS)
  local v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_PACKS)
  v6:setCategory(v8, v9, categoryDisplayName)
  self:setDetailButtons()
  self:pushDetail(self.pageShopItemDetails)
end
function ShopMenu:onClickDLC(dlcId, _, _, categoryDisplayName)
  self.isShowingOwnedPage = false
  self.isShowingLeasedPage = false
  local isHandTool = isHandTool:getItemsByDLC(dlcId)
  self.currentDisplayItems = isHandTool
  v6:setDisplayItems(isHandTool, false)
  local v8 = GuiUtils.getUVs(ShopMenu.TAB_UV.DLCS)
  local v9 = v9:getText(ShopMenu.L10N_SYMBOL.HEADER_DLCS)
  v6:setCategory(v8, v9, categoryDisplayName)
  self:setDetailButtons()
  self:pushDetail(self.pageShopItemDetails)
end
function ShopMenu:onClickSubPageSelection(state)
  if self.currentPage == self.pageShopItemDetails then
    if self.currentItemDetailsType == ShopMenu.DETAILS.BRAND then
      local selectedElementIndex = selectedElementIndex:getBrands()
      self:popDetail()
      self:onClickBrand(selectedElementIndex[state].id, nil, nil, selectedElementIndex[state].label)
      return
    end
    if self.currentItemDetailsType == ShopMenu.DETAILS.VEHICLE then
      selectedElementIndex = selectedElementIndex:getVehicleCategories()
      self:popDetail()
      local v7 = GuiUtils.getUVs(ShopMenu.TAB_UV.VEHICLES)
      local v8 = v8:getText(ShopMenu.L10N_SYMBOL.HEADER_VEHICLES)
      self:onClickItemCategory(selectedElementIndex[state].id, v7, v8, selectedElementIndex[state].label, self.currentCategoryFilter)
    end
  end
end
function ShopMenu:onClickItemCategory(categoryName, baseCategoryIconUVs, baseCategoryDisplayName, categoryDisplayName, filter)
  if filter == nil then
  end
  self.isShowingOwnedPage = true
  if filter ~= ShopMenu.FILTER.LEASED then
  end
  self.isShowingLeasedPage = true
  if self.isShowingOwnedPage then
    if filter ~= ShopMenu.FILTER.OWNED then
    end
    if filter ~= ShopMenu.FILTER.LEASED then
    end
    local v7 = v7:getItemsByCategoryOwnedOrLeased(v9, v10, true)
  else
    v7 = v7:getItemsByCategory(categoryName)
  end
  self.currentCategoryName = categoryName
  self.currentDisplayItems = v6
  self.currentCategoryFilter = filter
  self.currentItemDetailsType = ShopMenu.DETAILS.VEHICLE
  v7:setDisplayItems(v6, self.isShowingOwnedPage)
  self:setDetailButtons()
  self:updateSubPageSelector()
  if categoryName == ShopController.COINS_CATEGORY then
    local v8 = v8:getIsAvailable()
    if not v8 then
      local v9 = v9:getText("ui_iap_notAvailable")
      InfoDialog.show(v9, nil, nil, DialogElement.TYPE_INFO)
      return
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 117, target 129)
  if self.currentDisplayItems[1].storeItem.isInAppPurchase then
  else
    -- TODO: structure LOP_FORNLOOP (pc 128, target 118)
  end
  if v8 then
    v9:setPendingPurchaseCallback(function()
      local self = self:getIsOpen()
      if self then
        self:updateCurrentDisplayItems()
      end
    end)
  else
    v9:setPendingPurchaseCallback(nil)
  end
  v9:setCategory(baseCategoryIconUVs, baseCategoryDisplayName, categoryDisplayName, v7)
  self:pushDetail(self.pageShopItemDetails)
  self:updateSubPageSelector()
end
function ShopMenu:buyItem(displayItem)
  if GS_IS_MOBILE_VERSION then
    if displayItem.storeItem.isInAppPurchase then
      return self:purchaseInAppProduct(displayItem.storeItem.product)
    end
    local isConfigurable = isConfigurable:getBuyPrice(selectedElementIndex)
    if 0 < isConfigurable then
      local isHandTool = isHandTool:getMoney()
      if isConfigurable > isHandTool then
      end
    end
    isHandTool = isHandTool:hasEnoughSlots(selectedElementIndex)
    if not isVehicle then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
      local v6 = v6:getIsAvailable()
      if v6 then
        local v10 = v10:getText("shop_messageNotEnoughMoneyToBuy_buyCoins")
        local v11 = v11:getText("ui_buy")
        YesNoDialog.show(...)
        return
      end
      local v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.NOT_ENOUGH_MONEY_BUY)
      InfoDialog.show(...)
      return
    end
    if not isHandTool then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
      v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.TOO_FEW_SLOTS)
      InfoDialog.show(...)
      return
    end
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
    v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.CONFIRM_BUY)
    local v8 = v8:formatMoney(isConfigurable, 0, true, true)
    v6 = string.format(...)
    self.currentBuyDialogItem = displayItem
    YesNoDialog.show(self.onYesNoBuy, self, v6)
    return
  end
  selectedElementIndex:buy(displayItem.storeItem, displayItem.saleItem, false, displayItem.configurations)
end
function ShopMenu:onYesNoBuy(yes)
  if yes then
    selectedElementIndex:buy(self.currentBuyDialogItem.storeItem, self.currentBuyDialogItem.saleItem, false)
  end
  self.currentBuyDialogItem = nil
end
function ShopMenu.purchaseInAppProduct(v0, displayItem)
  local selectedElementIndex = selectedElementIndex:tryPerformPendingPurchase(displayItem, function(v0, displayItem)
    if v0 then
      local isVehicle = isVehicle:getText(ShopMenu.IAP_ERROR_TEXTS[InAppPurchase.ERROR_OK])
      InfoDialog.show(isVehicle, nil, nil, DialogElement.TYPE_INFO)
      selectedElementIndex:updateCurrentDisplayItems()
      return
    end
    local selectedElementIndex = selectedElementIndex:getText(ShopMenu.IAP_ERROR_TEXTS[InAppPurchase.ERROR_FAILED])
    if displayItem ~= nil then
    end
    InfoDialog.show(selectedElementIndex, nil, nil, DialogElement.TYPE_INFO)
  end)
  if not selectedElementIndex then
    selectedElementIndex = selectedElementIndex:getIsAvailable()
    if not selectedElementIndex then
      local isVehicle = isVehicle:getText("ui_iap_notAvailable")
      InfoDialog.show(isVehicle, nil, nil, DialogElement.TYPE_INFO)
      return
    end
    selectedElementIndex:purchase(displayItem, function(v0, displayItem, selectedElementIndex)
      if displayItem then
        return
      end
      local isConfigurable = isConfigurable:getText(ShopMenu.IAP_ERROR_TEXTS[selectedElementIndex])
      InfoDialog.show(isConfigurable, nil, nil, DialogElement.TYPE_INFO)
    end)
  end
end
function ShopMenu:showCoinShop()
  self:changeScreen(ShopMenu)
  self:goToPage(self.pageShopVehicles)
  local v6 = v6:getText("ui_coins")
  self:onClickItemCategory(...)
end
function ShopMenu:onButtonToggleHotspot()
  local displayItem = self:getIsDetailMode()
  if displayItem then
    displayItem = self:getTopFrame()
    displayItem = displayItem:getSelectedDisplayItem()
    local isVehicle = displayItem.concreteItem:getMapHotspot()
    if isVehicle == g_currentMission.currentMapTargetHotspot then
      isVehicle:setMapTargetHotspot()
      return
    end
    local isHandTool = selectedElementIndex:getMapHotspot()
    isVehicle:setMapTargetHotspot(...)
  end
end
function ShopMenu:showCategories()
  self:goToPage(self.pageShopVehicles)
end
function ShopMenu:showBrands()
  self:goToPage(self.pageShopBrands)
end
function ShopMenu.closeConfigScreen(v0)
  displayItem:changeScreen(ShopMenu)
end
function ShopMenu:onButtonConstruction()
  self:changeScreen(ConstructionScreen)
end
function ShopMenu:getIsDetailMode()
  local selectedElementIndex = selectedElementIndex:superClass()
  local displayItem = selectedElementIndex.getIsDetailMode(self)
  if not displayItem and self.currentPage ~= self.pageUsedSale then
  end
  return displayItem
end
function ShopMenu.makeIsShopBrandsEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if not not displayItem and u0.currentPage ~= u0.pageUsedSale then
    end
    return v0
  end
end
function ShopMenu.makeIsShopVehiclesEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if not not displayItem and u0.currentPage ~= u0.pageUsedSale then
    end
    return v0
  end
end
function ShopMenu.makeIsShopToolsEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopObjectsEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopPacksEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopUsedEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopGarageEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if not not displayItem and u0.currentPage ~= u0.pageUsedSale then
    end
    return v0
  end
end
function ShopMenu.makeIsShopLeasedEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopOthersEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:getIsDetailMode()
    if displayItem then
      -- if u0.currentPage ~= u0.pageUsedSale then goto L17 end
    end
    return not GS_IS_MOBILE_VERSION
  end
end
function ShopMenu.makeIsShopItemsEnabledPredicate(v0)
  return function()
    local displayItem = displayItem:superClass()
    local v0 = displayItem.getIsDetailMode(u0)
    if v0 then
      displayItem = displayItem:getTopFrame()
      if displayItem ~= u0.pageShopItemDetails and u0.currentPage ~= u0.pageUsedSale then
      end
    end
    return v0
  end
end
function ShopMenu.makeIsShopCombinationsEnabledPredicate(v0)
  return function()
    local v0 = v0:getIsDetailMode()
    if v0 then
      local displayItem = displayItem:getTopFrame()
      if displayItem == u0.pageShopItemCombinations then
      end
    end
    return v0
  end
end
function ShopMenu.makeIsLandscapingEnabledPredicate(v0)
  return function()
    local v0 = v0:getUserPermissions(u0.currentUserId)
    if not v0[Farm.PERMISSION.LANDSCAPING] then
    end
    return not u0.isMissionTourActive and displayItem
  end
end
function ShopMenu.makeIsDLCPageEnabledPredicate(v0)
  return function()
    local selectedElementIndex = selectedElementIndex:getDLCCategories()
    if 0 >= #selectedElementIndex then
    end
    return true
  end
end
function ShopMenu.makeClickBuyItemCallback(v0)
  return function(v0)
    displayItem:buyItem(v0)
  end
end
function ShopMenu.makeClickSellItemCallback(v0)
  return function(self)
    displayItem:sell(self.storeItem, self.concreteItem)
  end
end
ShopMenu.TAB_UV = {VEHICLES = {260, 0, 65, 65}, BRANDS = {65, 65, 65, 65}, TOOLS = {130, 65, 65, 65}, OBJECTS = {195, 65, 65, 65}, PLACEABLES = {260, 65, 65, 65}, LANDSCAPING = {585, 65, 65, 65}, OWNED = {325, 65, 65, 65}, LEASED = {390, 65, 65, 65}, DLCS = {520, 65, 65, 65}, PACKS = {455, 65, 65, 65}, SALE = {845, 65, 65, 65}, OTHERS = {0, 260, 65, 65}}
if GS_IS_MOBILE_VERSION then
else
end
selectedElementIndex.HEADER_VEHICLES = isVehicle
selectedElementIndex.HEADER_TOOLS = "ui_tools"
selectedElementIndex.HEADER_PLACEABLES = "category_placeables"
selectedElementIndex.HEADER_OBJECTS = "ui_objects"
selectedElementIndex.HEADER_ANIMALS = "category_animals"
selectedElementIndex.HEADER_SALES = "category_sales"
selectedElementIndex.HEADER_GARAGE_OWNED = "ui_garageOwned"
selectedElementIndex.HEADER_GARAGE_LEASED = "ui_garageLeased"
selectedElementIndex.HEADER_PACKS = "ui_storePacks"
selectedElementIndex.HEADER_OTHERS = "ui_storeOthers"
selectedElementIndex.HEADER_DLCS = "ui_modsAndDlcs"
selectedElementIndex.LEASED_ITEMS = "shop_leasedItems"
selectedElementIndex.OWNED_ITEMS = "shop_ownedItems"
selectedElementIndex.BUTTON_BACK = "button_back"
selectedElementIndex.BUTTON_GARAGE = "button_garage"
selectedElementIndex.BUTTON_INFO = "button_detail"
selectedElementIndex.BUTTON_SHOP = "ui_shop"
selectedElementIndex.BUTTON_CUSTOMIZE = "button_configurate"
selectedElementIndex.BUTTON_BUY = "button_buy"
selectedElementIndex.BUTTON_DETAILS = "button_detail"
selectedElementIndex.BUTTON_SELL = "button_sell"
selectedElementIndex.BUTTON_RETURN = "button_return"
selectedElementIndex.BUTTON_BRANDS = "button_shop_brands"
selectedElementIndex.BUTTON_CATEGORIES = "button_shop_categories"
selectedElementIndex.BUTTON_RECOVER = "button_recover"
selectedElementIndex.BUTTON_UNLOCK = "ui_iap_unlock"
selectedElementIndex.BUTTON_COMBINATIONS = "ui_combinations"
selectedElementIndex.BUTTON_HOTSPOT = "button_showOnMap"
selectedElementIndex.BUTTON_SHOW_CATEGORIES = "button_showCategories"
selectedElementIndex.BUTTON_SHOW_BRANDS = "button_showBrands"
selectedElementIndex.NOT_ENOUGH_MONEY_BUY = "shop_messageNotEnoughMoneyToBuy"
selectedElementIndex.MESSAGE_NO_PERMISSION = "shop_messageNoPermissionGeneral"
displayItem.L10N_SYMBOL = selectedElementIndex
{}[InAppPurchase.ERROR_FAILED] = "ui_iap_errorFailed"
{}[InAppPurchase.ERROR_NETWORK_UNAVAILABLE] = "ui_iap_errorNetworkUnavailable"
{}[InAppPurchase.ERROR_CANCELLED] = "ui_iap_errorCancelled"
{}[InAppPurchase.ERROR_PURCHASE_IN_PROGRESS] = "ui_iap_purchaseInProgress"
{}[InAppPurchase.ERROR_OK] = "ui_iap_purchaseComplete"
{}[InAppPurchase.ERROR_PENDING_PAYMENT] = "ui_iap_pendingPayment"
ShopMenu.IAP_ERROR_TEXTS = {}
ShopMenu.BRAND_IMAGE_HEIGHT_WIDTH_RATIO = 2
