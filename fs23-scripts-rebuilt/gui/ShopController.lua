-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopController = {}
local ShopController_mt = Class(ShopController)
ShopController.MAX_ATTRIBUTES_PER_ROW = 5
ShopController.COINS_CATEGORY = "COINS"
ShopController.SALES_CATEGORY = "SALES"
function ShopController.new()
  local v0 = setmetatable({}, u0)
  v0.client = nil
  v0.currentMission = nil
  v0.playerFarm = nil
  v0.playerFarmId = 0
  v0.isInitialized = false
  v0.isBuying = false
  v0.isSelling = false
  v0.buyVehicleNow = 0
  v0.buyObjectNow = 0
  v0.buyHandToolNow = 0
  v0.displayBrands = {}
  v0.displayVehicleCategories = {}
  v0.displayToolCategories = {}
  v0.displayObjectCategories = {}
  v0.displayPlaceableCategories = {}
  v0.displayPacks = {}
  v0.displayDLCs = {}
  v0.ownedFarmItems = {}
  v0.leasedFarmItems = {}
  v0.currentSellStoreItem = nil
  v0.currentSellItem = nil
  v0.buyItemFilename = nil
  v0.buyItemPrice = 0
  v0.buyItemIsOutsideBuy = false
  v0.buyItemConfigurations = nil
  v0.buyItemIsLeasing = false
  v0.buyItemLicensePlateData = nil
  v0.updateShopItemsCallback = nil
  v0.updateAllItemsCallback = nil
  v0.switchToConfigurationCallback = nil
  v0.saleItemBoughtCallback = nil
  v1:subscribe(BuyVehicleEvent, v0.onVehicleBuyEvent, v0)
  v1:subscribe(BuyObjectEvent, v0.onObjectBuyEvent, v0)
  v1:subscribe(BuyHandToolEvent, v0.onHandToolBuyEvent, v0)
  v1:subscribe(SellVehicleEvent, v0.onVehicleSellEvent, v0)
  v1:subscribe(SellHandToolEvent, v0.onHandToolSellEvent, v0)
  return v0
end
function ShopController:reset()
  self.isInitialized = false
  self.displayBrands = {}
  self.displayVehicleCategories = {}
  self.displayToolCategories = {}
  self.displayObjectCategories = {}
  self.displayPlaceableCategories = {}
  self.displayPacks = {}
  self.displayDLCs = {}
  self.ownedFarmItems = {}
  self.leasedFarmItems = {}
  self.currentSellItem = nil
  self.isBuying = false
  self.isSelling = false
end
function ShopController.delete(v0)
  v1:unsubscribeAll(v0)
end
function ShopController:addBrandForDisplay(brand)
  table.insert(self.displayBrands, {id = brand.index, iconFilename = brand.imageShopOverview, label = brand.title, sortValue = brand.name})
end
function ShopController:addCategoryForDisplay(category)
  if category["type"] == StoreManager.CATEGORY_TYPE.VEHICLE then
  elseif category["type"] == StoreManager.CATEGORY_TYPE.TOOL then
  else
    if category["type"] == StoreManager.CATEGORY_TYPE.OBJECT then
    elseif category["type"] == StoreManager.CATEGORY_TYPE.PLACEABLE then
    end
  end
  if Platform.isMobile and category["type"] ~= StoreManager.CATEGORY_TYPE.VEHICLE then
    -- if v1["type"] ~= StoreManager.CATEGORY_TYPE.TOOL then goto L53 end
  end
  if v2 ~= nil then
    table.insert(v2, {id = category.name, iconFilename = category.image, label = category.title, sortValue = category.orderId})
  end
end
function ShopController:load()
  if not self.isInitialized then
    local v5 = v5:getItems()
    for v7, v8 in ipairs(...) do
      if not (0 < #v8.categoryNames) then
        continue
      end
      if not v8.showInStore then
        continue
      end
      if v8.extraContentId ~= nil then
        local v9 = v9:getIsItemIdUnlocked(v8.extraContentId)
        if not v9 then
          continue
        end
      end
      v9 = v9:getBrandByIndex(v8.brandIndex)
      if v9 ~= nil and not category[v8.brandIndex] and v8.species ~= "placeable" then
        category[v8.brandIndex] = true
        if v9.name ~= "NONE" then
          self:addBrandForDisplay(v9)
        end
      end
      -- TODO: structure LOP_FORNPREP (pc 73, target 99)
      local v13 = v13:getCategoryByName(v8.categoryNames[1])
      if v13 ~= nil and not v2[v8.categoryNames[1]] then
        v2[v8.categoryNames[1]] = true
        self:addCategoryForDisplay(v13)
      end
      -- TODO: structure LOP_FORNLOOP (pc 98, target 74)
      if not (v8.customEnvironment ~= nil) then
        continue
      end
      if not (v3[v8.customEnvironment] == nil) then
        continue
      end
      if not (v8.species ~= "placeable") then
        continue
      end
      local v12 = v12:getModByName(v8.customEnvironment)
      if not v8.isMod then
      else
      end
      v10.sortValue = v12 .. v8.dlcTitle
      v3[v8.customEnvironment] = true
      table.insert(self.displayDLCs, v10)
    end
    v5 = v5:getPacks()
    for v7, v8 in pairs(...) do
      table.insert(self.displayPacks, {id = v8.name, iconFilename = v8.image, label = v8.title, sortValue = v8.orderId})
    end
    if Platform.hasInAppPurchases then
      v6 = v6:getCategoryByName(ShopController.COINS_CATEGORY)
      self:addCategoryForDisplay(...)
    end
    table.sort(self.displayBrands, ShopController.brandSortFunction)
    table.sort(self.displayToolCategories, ShopController.categorySortFunction)
    table.sort(self.displayObjectCategories, ShopController.categorySortFunction)
    table.sort(self.displayPlaceableCategories, ShopController.categorySortFunction)
    table.sort(self.displayVehicleCategories, ShopController.categorySortFunction)
    table.sort(self.displayPacks, ShopController.categorySortFunction)
    table.sort(self.displayDLCs, ShopController.brandSortFunction)
    self.isInitialized = true
  end
end
function ShopController:setClient(client)
  self.client = client
end
function ShopController:setCurrentMission(currentMission)
  self.currentMission = currentMission
  v2:setMission(currentMission)
end
function ShopController:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
  if playerFarm ~= nil then
    self.playerFarmId = playerFarm.farmId
    return
  end
  self.playerFarmId = 0
end
function ShopController:setUpdateShopItemsCallback(callback, target)
  self.updateShopItemsCallback = function()
    u0(u1)
  end
end
function ShopController:setUpdateAllItemsCallback(callback, target)
  self.updateAllItemsCallback = function()
    u0(u1)
  end
end
function ShopController:setSaleItemBoughtCallback(callback, target)
  self.saleItemBoughtCallback = function()
    u0(u1)
  end
end
function ShopController:setSwitchToConfigurationCallback(callback, target)
  self.switchToConfigurationCallback = function(...)
    u0(...)
  end
end
function ShopController.filterOwnedItemsByFarmId(ownedFarmItems, farmId)
  for v6, v7 in pairs(ownedFarmItems) do
    for v11, v12 in pairs(v7.items) do
      local v13 = v12:getOwnerFarmId()
      if not (v13 == farmId) then
        continue
      end
      if v2[v6] == nil then
        v2[v6] = {}
      end
      v13.numItems = v13.numItems + 1
      v13.items[v12] = v12
    end
  end
  return v2
end
function ShopController:setOwnedFarmItems(ownedFarmItems, playerFarmId)
  local v3 = ShopController.filterOwnedItemsByFarmId(ownedFarmItems, playerFarmId)
  self.ownedFarmItems = v3
end
function ShopController:setLeasedFarmItems(leasedFarmItems, playerFarmId)
  local v3 = ShopController.filterOwnedItemsByFarmId(leasedFarmItems, playerFarmId)
  self.leasedFarmItems = v3
end
function ShopController:update(dt)
  if 0 < self.buyVehicleNow then
    if self.buyVehicleNow == 2 then
      self.buyVehicleNow = 0
      local v2 = v2:getServerConnection()
      local v4 = BuyVehicleEvent.new(self.buyItemFilename, self.buyItemIsOutsideBuy, self.buyItemConfigurations, self.buyItemIsLeasing, self.playerFarmId, self.buyItemLicensePlateData, self.buyItemSaleItem)
      v2:sendEvent(...)
      -- if v0.buyItemIsOutsideBuy then goto L49 end
      self.updateShopItemsCallback()
    else
      self.buyVehicleNow = self.buyVehicleNow + 1
    end
  end
  if 0 < self.buyObjectNow then
    if self.buyObjectNow == 2 then
      self.buyObjectNow = 0
      v2 = v2:getServerConnection()
      v4 = BuyObjectEvent.new(self.buyItemFilename, self.buyItemIsOutsideBuy, self.playerFarmId)
      v2:sendEvent(...)
      -- if v0.buyItemIsOutsideBuy then goto L90 end
      self.updateShopItemsCallback()
    else
      self.buyObjectNow = self.buyObjectNow + 1
    end
  end
  if 0 < self.buyHandToolNow then
    if self.buyHandToolNow == 2 then
      self.buyHandToolNow = 0
      v2 = v2:getServerConnection()
      v4 = BuyHandToolEvent.new(self.buyItemFilename, self.playerFarmId)
      v2:sendEvent(...)
      -- if v0.buyItemIsOutsideBuy then goto L129 end
      self.updateShopItemsCallback()
      return
    end
    self.buyHandToolNow = self.buyHandToolNow + 1
  end
end
function ShopController:makeDisplayItem(category, v2, v3, v4, v5)
  StoreItemUtil.loadSpecsFromXML(category)
  if v3 == nil then
  end
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("operatingTime")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("power")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("transmission")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("fuel")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("electricCharge")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("methane")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("maxSpeed")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("neededPower")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("incomePerHour")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("capacity")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("weight")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("additionalWeight")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("wheels")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("balerBaleDensity")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("balerBaleSizeRound")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("balerBaleSizeSquare")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("baleWrapperBaleSizeRound")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("baleWrapperBaleSizeSquare")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("inlineWrapperBaleSizeRound")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("inlineWrapperBaleSizeSquare")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("baleLoaderBaleSizeRound")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("baleLoaderBaleSizeSquare")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("woodHarvesterMaxTreeSize")
  function(self)
    if Platform.gameplay.disabledShopSpecValues[self] ~= true then
      local category = category:getSpecTypeByName(self)
      if category ~= nil and category.species == u0.species then
        u1(self, category, u0, u2, u3, u4)
        if u0.bundleInfo ~= nil then
          for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
            if u3 == nil then
              u3 = {}
            end
            for v10, v11 in pairs(v6.preSelectedConfigurations) do
              u3[v10] = v11.configValue
            end
            u1(self, category, v6.item, nil, u3, u4)
          end
        end
      end
    end
  end("licensePlate")
  local v12 = v12:getAreSlotsVisible()
  if v12 then
    function(self)
      if Platform.gameplay.disabledShopSpecValues[self] ~= true then
        local category = category:getSpecTypeByName(self)
        if category ~= nil and category.species == u0.species then
          u1(self, category, u0, u2, u3, u4)
          if u0.bundleInfo ~= nil then
            for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
              if u3 == nil then
                u3 = {}
              end
              for v10, v11 in pairs(v6.preSelectedConfigurations) do
                u3[v10] = v11.configValue
              end
              u1(self, category, v6.item, nil, u3, u4)
            end
          end
        end
      end
    end("slots")
    function(self)
      if Platform.gameplay.disabledShopSpecValues[self] ~= true then
        local category = category:getSpecTypeByName(self)
        if category ~= nil and category.species == u0.species then
          u1(self, category, u0, u2, u3, u4)
          if u0.bundleInfo ~= nil then
            for v5, v6 in ipairs(u0.bundleInfo.bundleItems) do
              if u3 == nil then
                u3 = {}
              end
              for v10, v11 in pairs(v6.preSelectedConfigurations) do
                u3[v10] = v11.configValue
              end
              u1(self, category, v6.item, nil, u3, u4)
            end
          end
        end
      end
    end("placeableSlots")
  else
  end
  if v2 ~= nil and v2.propertyState ~= Vehicle.PROPERTY_STATE_OWNED then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L156
  end
  v11("dailyUpkeep")
  -- goto L159  (LOP_JUMP +3)
  v9.dailyUpkeep = true
  if category.lifetime == 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L168
  end
  v11("age")
  local v13 = v13:getSpecTypes()
  for v15, v16 in pairs(...) do
    if not (v9[v16.name] == nil) then
      continue
    end
    v11(v16.name)
  end
  v12 = v12:getSpecTypeByName("fillTypes")
  v13 = v13:getSpecTypeByName("seedFillTypes")
  v14 = v14:getSpecTypeByName("animalFoodFillTypes")
  v15 = v15:getSpecTypeByName("prodPointInputFillTypes")
  v16 = v16:getSpecTypeByName("prodPointOutputFillTypes")
  local v17 = v17:getSpecTypeByName("sellingStationFillTypes")
  local v18 = v18:getSpecTypeByName("buyingStationFillTypes")
  if category.bundleInfo ~= nil then
    for v30, v31 in ipairs(category.bundleInfo.bundleItems) do
      if v3 == nil then
      end
      for v35, v36 in pairs(v31.preSelectedConfigurations) do
        v3[v35] = v36.configValue
      end
      v32 = v26(v12, v31.item, nil, v3)
      v32 = v26(v13, v31.item, nil, v3)
      v32 = v26(v14, v31.item, nil, v3)
    end
  else
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v12, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v13, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v14, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v15, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v16, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v17, category, v2)
    v27 = function(self, category, v2, v3)
      if self ~= nil then
        local v5 = self.getValueFunc(category, v2, v3)
        if v5 ~= nil then
          for v9, v10 in pairs(v5) do
            local v11 = v11:getFillTypeByIndex(v10)
            if not (v11 ~= nil) then
              continue
            end
            table.insert(v4, v11.hudOverlayFilename)
          end
        end
      end
      return v4
    end(v18, category, v2)
  end
  v28 = table.concat(category.functions, " ")
  v29 = v29:getCategoryByName(category.categoryName)
  if g_currentMission ~= nil then
    v32 = StoreItemUtil.getIsHandTool(category)
    if v32 then
      v34 = v34:getFarmId()
      v32 = v32:getFarmById(...)
      if v32 ~= nil then
        v33 = v32:hasHandtool(category.xmlFilename)
        if v33 then
          -- goto L442  (LOP_JUMP +49)
        end
      end
    else
      v32 = StoreItemUtil.getIsLeasable(category)
      if v32 then
        v35 = v35:getFarmId()
        v32 = v32:getNumOwnedItems(...)
        -- if GS_IS_MOBILE_VERSION then goto L442 end
        v35 = v35:getFarmId()
        v32 = v32:getNumLeasedItems(...)
      else
        v32 = StoreItemUtil.getIsObject(category)
        if not v32 then
          v32 = v32:getNumOfItems(category, self.playerFarmId)
        end
      end
    end
  end
  if Platform.hasInAppPurchases and not v5 then
    v33 = v33:getProducts()
    for v35, v36 in ipairs(...) do
      local v37 = v36:isa(IAProductStoreItem)
      if not v37 then
        continue
      end
      v37 = v36:getIsStoreItemOfProduct(category)
      if not v37 then
        continue
      end
      v37 = v36:getHasBeenBought()
      if not not v37 then
        continue
      end
      v37 = v36:getDisplayItem(category, v2, v6, v7, v27, v28, v29.orderId, v30, v31, v4)
      return v37
    end
  end
  v32 = ShopDisplayItem.new(category, v2, v6, v7, v27, v28, v29.orderId, v30, v31, v4)
  return v32
end
function ShopController:updateDisplayItems(displayItems)
  for v6, v7 in ipairs(displayItems) do
    local v8 = v8:getItemByXMLFilename(v7.storeItem.xmlFilename)
    if v8 ~= nil then
      local v9 = self:makeDisplayItem(v8, nil)
      table.insert(v2, v9)
    else
      table.insert(v2, v7)
    end
  end
  return v2
end
function ShopController:getOwnedItems()
  for v5, v6 in pairs(self.ownedFarmItems) do
    for v10 in pairs(v6.items) do
      if not v5.canBeSold then
        continue
      end
      local v12 = self:makeDisplayItem(v5, v10)
      table.insert(category, v12)
    end
  end
  v2 = v2:getHandTools()
  for v6, v7 in ipairs(v2) do
    v8 = v8:getItemByXMLFilename(v7)
    if not (v8 ~= nil) then
      continue
    end
    v9 = self:makeDisplayItem(v8)
    table.insert(category, v9)
  end
  table.sort(category, ShopController.displayItemSortFunction)
  return category
end
function ShopController:getLeasedVehicles()
  for v5, v6 in pairs(self.leasedFarmItems) do
    for v10 in pairs(v6.items) do
      local v12 = self:makeDisplayItem(v5, v10)
      table.insert(category, v12)
    end
  end
  table.sort(category, ShopController.displayItemSortFunction)
  return category
end
function ShopController:getOwnedFarmItems()
  return self.ownedFarmItems
end
function ShopController:getLeasedFarmItems()
  return self.leasedFarmItems
end
function ShopController:getBrands()
  return self.displayBrands
end
function ShopController:getVehicleCategories()
  return self.displayVehicleCategories
end
function ShopController:getToolCategories()
  return self.displayToolCategories
end
function ShopController:getObjectCategories()
  return self.displayObjectCategories
end
function ShopController:getPlaceableCategories()
  return self.displayPlaceableCategories
end
function ShopController:getItemsByBrand(brandId)
  local v3 = v3:getCategoryByName("sales")
  local v4 = v4:getBrandByIndex(brandId)
  local v6 = v6:getItems()
  for v8, v9 in pairs(...) do
    if g_currentMission ~= nil then
      local v11, v12, v13 = v11:getBuyPrice(v9)
    end
    if v9.extraContentId ~= nil then
      v11 = v11:getIsItemIdUnlocked(v9.extraContentId)
    end
    if not not v9.isBundleItem then
      continue
    end
    if not v11 then
      continue
    end
    if not v9.showInStore then
      continue
    end
    if v9.brandIndex ~= brandId then
      if not (v10 ~= nil) then
        continue
      end
      if not (v4.title == v3.title) then
        continue
      end
    end
    if not (v9.species ~= "placeable") then
      continue
    end
    v12 = self:makeDisplayItem(v9)
    table.insert(v2, v12)
  end
  return v2
end
function ShopController:getItemsByCategory(categoryName)
  if categoryName == ShopController.COINS_CATEGORY then
    return self:getCoinItems()
  end
  if categoryName == ShopController.SALES_CATEGORY then
    v2 = self:getSaleItems()
    return v2
  end
  local v4 = v4:getItems()
  for v6, v7 in pairs(...) do
    if v7.extraContentId ~= nil then
      local v8 = v8:getIsItemIdUnlocked(v7.extraContentId)
    end
    if not not v7.isBundleItem then
      continue
    end
    if not v8 then
      continue
    end
    if not v7.showInStore then
      continue
    end
    if not (v7.species ~= "placeable") then
      continue
    end
    -- TODO: structure LOP_FORNPREP (pc 59, target 78)
    if categoryName == v7.categoryNames[1] then
      local v12 = self:makeDisplayItem(v7)
      table.insert(v2, v12)
    else
      -- TODO: structure LOP_FORNLOOP (pc 77, target 60)
    end
  end
  return v2
end
function ShopController:getSaleItems()
  local v2 = v2:getItems()
  for v6, v7 in ipairs(v2) do
    local v8 = v8:getItemByXMLFilename(v7.xmlFilename)
    local v9 = self:makeDisplayItem(v8, nil, v7.configurations, v7)
    table.insert(category, v9)
  end
  return category
end
function ShopController:getItemsByCategoryOwnedOrLeased(categoryName, owned, leased)
  if categoryName == ShopController.COINS_CATEGORY then
    return self:getCoinItems()
  end
  if owned then
  elseif leased then
  end
  for v9, v10 in pairs(v4) do
    if v9.canBeSold then
      if not v9.showInStore then
        -- if not v9.isBundleItem then goto L41 end
      end
      if v9.categoryName == categoryName then
      end
    end
    if v11 then
      if owned then
        if self.ownedFarmItems[v9] == nil then
        end
      elseif leased and self.leasedFarmItems[v9] == nil then
      end
    end
    if not v11 then
      continue
    end
    for v15 in pairs(v10.items) do
      local v17 = self:makeDisplayItem(v9, v15)
      table.insert(v5, v17)
    end
  end
  if self.playerFarm ~= nil then
    v6 = v6:getHandTools()
    for v10, v11 in ipairs(v6) do
      v12 = v12:getItemByXMLFilename(v11)
      if not (v12 ~= nil) then
        continue
      end
      if not (v12.categoryName == categoryName) then
        continue
      end
      v13 = self:makeDisplayItem(v12)
      table.insert(v5, v13)
    end
  end
  table.sort(v5, ShopController.displayItemSortFunction)
  return v5
end
function ShopController:getOwnedCategories()
  for v6, v7 in pairs(self.ownedFarmItems) do
    if not v6.canBeSold then
      continue
    end
    if not v6.showInStore and not v6.isBundleItem then
      continue
    end
    if not (v6.species ~= "placeable") then
      continue
    end
    if not (owned[v6.categoryName] == nil) then
      continue
    end
    for v12, v13 in pairs(v7.items) do
      if not (v13.getImageFilename ~= nil) then
        continue
      end
      local v14 = v13:getImageFilename()
    end
    owned[v6.categoryName] = v8
  end
  if self.playerFarm ~= nil then
    leased = leased:getHandTools()
    for v7, v8 in ipairs(leased) do
      v9 = v9:getItemByXMLFilename(v8)
      if not (v9 ~= nil) then
        continue
      end
      if not (owned[v9.categoryName] == nil) then
        continue
      end
      owned[v9.categoryName] = v9.imageFilename
    end
  end
  for v6, v7 in pairs(owned) do
    v8 = v8:getCategoryByName(v6)
    if not (v8 ~= nil) then
      continue
    end
    table.insert(categoryName, {id = v8.name, iconFilename = v7, label = v8.title, sortValue = v8.orderId})
  end
  table.sort(categoryName, ShopController.categorySortFunction)
  return categoryName
end
function ShopController:getLeasedCategories()
  for v6, v7 in pairs(self.leasedFarmItems) do
    owned[v6.categoryName] = v6.imageFilename
  end
  for v6, v7 in pairs(owned) do
    local v8 = v8:getCategoryByName(v6)
    if not (v8 ~= nil) then
      continue
    end
    table.insert(categoryName, {id = v8.name, iconFilename = v7, label = v8.title, sortValue = v8.orderId})
  end
  table.sort(categoryName, ShopController.categorySortFunction)
  return categoryName
end
function ShopController:getDLCCategories()
  return self.displayDLCs
end
function ShopController:getStorePacks()
  return self.displayPacks
end
function ShopController:getItemsByPack(packName)
  local leased = leased:getPackItems(packName)
  if leased == nil then
    return {}
  end
  -- TODO: structure LOP_FORNPREP (pc 14, target 39)
  local v7 = v7:getItemByXMLFilename(leased[1])
  if not v7.isBundleItem and v7.showInStore then
    local v8 = self:makeDisplayItem(v7)
    table.insert(owned, v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 38, target 15)
  return owned
end
function ShopController:getItemsByDLC(dlcId)
  local v4 = v4:getItems()
  for v6, v7 in pairs(...) do
    if not not v7.isBundleItem then
      continue
    end
    if not v7.showInStore then
      continue
    end
    if not (v7.customEnvironment == dlcId) then
      continue
    end
    if not (v7.species ~= "placeable") then
      continue
    end
    local v8 = self:makeDisplayItem(v7)
    table.insert(owned, v8)
  end
  return owned
end
function ShopController:getItemsWithFilenames(filenames)
  for v6, v7 in ipairs(filenames) do
    local v8 = v8:getItemByXMLFilename(v7)
    if not (v8 ~= nil) then
      continue
    end
    if not not v8.isBundleItem then
      continue
    end
    if not v8.showInStore then
      continue
    end
    local v9 = self:makeDisplayItem(v8)
    table.insert(owned, v9)
  end
  return owned
end
function ShopController:getItemsFromCombinations(combinations)
  -- TODO: structure LOP_FORNPREP (pc 5, target 41)
  local v7 = v7:getItemsByCombinationData(combinations[1])
  for v10 = 1, #v7 do
    local v11 = self:makeDisplayItem(v7[v10].storeItem, nil, v7[v10].configData)
    v11.configurations = v7[v10].configData
    table.insert(owned, v11)
    -- TODO: structure LOP_FORNLOOP (pc 39, target 17)
  end
  return owned
end
function ShopController:canBeBought(storeItem, price)
  if self.currentMission ~= nil then
    local v4 = v4:getMoney()
    if price > v4 then
    end
  end
  v4 = v4:hasEnoughSlots(storeItem)
  if not leased then
    local v6 = v6:getText(ShopController.L10N_SYMBOL.WARNING_NOT_ENOUGH_MONEY)
    InfoDialog.show(...)
  elseif not v4 then
    v6 = v6:getText(ShopController.L10N_SYMBOL.WARNING_NOT_ENOUGH_SLOTS)
    InfoDialog.show(...)
  end
  if storeItem.maxItemCount ~= nil and storeItem.maxItemCount ~= nil then
    v6 = v6:getNumOfItems(storeItem, self.playerFarmId)
    if v6 >= storeItem.maxItemCount then
    end
  end
  if not v5 then
    local v7 = v7:getText(ShopController.L10N_SYMBOL.WARNING_TOO_MANY_PLACEABLES)
    InfoDialog.show(...)
  end
  if v4 and leased then
  end
  return v6
end
function ShopController:buy(storeItem, saleItem, outsideBuy, configurations)
  if self.isSelling then
    return
  end
  if not outsideBuy then
    if saleItem ~= nil then
    else
      local v6 = v6:getBuyPrice(storeItem)
    end
  end
  v6 = StoreItemUtil.getIsVehicle(storeItem)
  if v6 then
    self:buyVehicle(storeItem, saleItem, v5, outsideBuy, configurations)
    return
  end
  v6 = self:canBeBought(storeItem, v5)
  if v6 then
    v6 = StoreItemUtil.getIsObject(storeItem)
    if v6 then
      self:buyObject(storeItem, v5, outsideBuy)
      return
    end
    v6 = StoreItemUtil.getIsHandTool(storeItem)
    if v6 then
      self:buyHandTool(storeItem, v5, outsideBuy)
    end
  end
end
function ShopController:buyVehicle(vehicleStoreItem, saleItem, price, outsideBuy, configurations)
  self.buyItemFilename = vehicleStoreItem.xmlFilename
  self.buyItemPrice = price
  self.buyItemIsOutsideBuy = outsideBuy or false
  self.buyItemConfigurations = nil
  self.buyItemLicensePlateData = nil
  self.buyItemIsLeasing = false
  self.buyItemSaleItem = saleItem
  local v6 = StoreItemUtil.getIsLeasable(vehicleStoreItem)
  if v6 and not GS_IS_MOBILE_VERSION then
    self.switchToConfigurationCallback(vehicleStoreItem, saleItem, configurations)
    return
  end
  v6 = self:canBeBought(vehicleStoreItem, price)
  if v6 then
    self:finalizeBuy()
  end
end
function ShopController:onYesNoBuyObject(yes)
  if yes then
    self.isBuying = true
    self.buyObjectNow = 1
  end
end
function ShopController:buyObject(objectStoreItem, price, outsideBuy)
  local v5 = v5:getText(ShopController.L10N_SYMBOL.BUY_CONFIRMATION)
  local v6 = v6:formatMoney(price, 0, true, true)
  local v4 = string.format(...)
  YesNoDialog.show(self.onYesNoBuyObject, self, v4)
  self.buyItemFilename = objectStoreItem.xmlFilename
  self.buyItemPrice = price
  self.buyItemIsOutsideBuy = outsideBuy
  self.buyItemConfigurations = nil
  self.buyItemLicensePlateData = nil
  self.buyItemIsLeasing = false
end
function ShopController:onYesNoBuyHandtool(yes)
  if yes then
    self.isBuying = true
    self.buyHandToolNow = 1
  end
end
function ShopController:buyHandTool(handToolStoreItem, price, outsideBuy)
  local v4 = v4:hasHandtool(handToolStoreItem.xmlFilename)
  if not v4 then
    local v5 = v5:getText(ShopController.L10N_SYMBOL.BUY_CONFIRMATION)
    local v6 = v6:formatMoney(price, 0, true, true)
    v4 = string.format(...)
    YesNoDialog.show(self.onYesNoBuyHandtool, self, v4)
    self.buyItemFilename = handToolStoreItem.xmlFilename
    self.buyItemPrice = price
    self.buyItemIsOutsideBuy = outsideBuy
    self.buyItemConfigurations = nil
    self.buyItemLicensePlateData = nil
    self.buyItemIsLeasing = false
    return
  end
  v5 = v5:getText(ShopController.L10N_SYMBOL.BUY_ALREADY_OWNED)
  InfoDialog.show(...)
end
function ShopController:sell(storeItem, concreteItem)
  self.isSelling = true
  self.currentSellStoreItem = storeItem
  self.currentSellItem = concreteItem
  local leased = StoreItemUtil.getIsPlaceable(storeItem)
  if leased then
    local v6 = v6:getFarmId()
    leased = leased:getNumOwnedItems(...)
    if leased == 1 then
      local leased, v4 = concreteItem:canBeSold()
      if v4 ~= nil then
        if leased then
          local v10 = v10:getText("button_ok")
          local v11 = v11:getText("button_cancel")
          YesNoDialog.show(...)
          return
        end
        InfoDialog.show(v4)
        self.isSelling = false
        return
      end
      self:sellPlaceableWarningInfoClickOk(true)
      return
    end
    v6 = v6:getFarmId()
    leased = leased:getNumOwnedItems(...)
    -- if 1 >= v3 then goto L117 end
    self:onSellCallback(true)
    return
  end
  if concreteItem ~= ShopDisplayItem.NO_CONCRETE_ITEM then
    v4 = v4:getSellPrice(concreteItem)
  else
    v4 = v4:getSellPrice(storeItem)
  end
  SellItemDialog.show(self.onSellCallback, self, concreteItem, leased, storeItem)
end
function ShopController:sellPlaceableWarningInfoClickOk(yes)
  if yes then
    local v6 = v6:getSellPrice(self.currentSellItem)
    SellItemDialog.show(...)
  end
end
function ShopController:onSellCallback(yes)
  self.isSelling = false
  if yes then
    self:onSellItem(self.currentSellStoreItem, self.currentSellItem)
    self.currentSellItem = nil
  end
end
function ShopController:onSellItem(storeItem, concreteItem)
  if self.isSelling then
    return
  end
  local leased = StoreItemUtil.getIsPlaceable(storeItem)
  if leased then
    self:sellPlaceable(storeItem, concreteItem)
    return
  end
  leased = StoreItemUtil.getIsHandTool(storeItem)
  if leased then
    self:sellHandTool(storeItem)
    return
  end
  self:sellVehicle(concreteItem)
end
function ShopController:sellHandTool(handToolStoreItem)
  local price = price:hasHandtool(handToolStoreItem.xmlFilename)
  if price then
    self.isSelling = true
    price = price:getText(ShopController.L10N_SYMBOL.SELLING_VEHICLE)
    MessageDialog.show(nil, nil, price)
    local leased = leased:getServerConnection()
    local v5 = SellHandToolEvent.new(handToolStoreItem.xmlFilename, self.playerFarmId)
    leased:sendEvent(...)
    return
  end
  self:onHandToolSellFailed()
end
function ShopController:sellVehicle(vehicle)
  self.isSelling = true
  local price = price:getHasPlayerPermission(Farm.PERMISSION.SELL_VEHICLE)
  if price and vehicle == self.currentMission.controlledVehicle then
    price:onLeaveVehicle()
  end
  if vehicle.propertyState == Vehicle.PROPERTY_STATE_OWNED then
    price = price:getText(ShopController.L10N_SYMBOL.SELLING_VEHICLE)
    MessageDialog.show(nil, nil, price)
  else
    price = price:getText(ShopController.L10N_SYMBOL.RETURNING_VEHICLE)
    MessageDialog.show(nil, nil, price)
  end
  price = NetworkUtil.getObjectId(vehicle)
  if price ~= nil then
    price = price:getServerConnection()
    local v4 = SellVehicleEvent.new(vehicle)
    price:sendEvent(...)
    return
  end
  if vehicle.propertyState ~= Vehicle.PROPERTY_STATE_OWNED then
  end
  self:onVehicleSellFailed(true, SellVehicleEvent.SELL_NO_PERMISSION)
end
function ShopController:setConfigurations(vehicle, leaseItem, storeItem, configs, originalPrice, licensePlateData, saleItem)
  if configs ~= nil then
    local v8, v9, v10 = v8:getBuyPrice(storeItem, configs, saleItem)
    self.buyItemFilename = storeItem.xmlFilename
    self.buyItemPrice = v8
    self.buyItemConfigurations = configs
    self.buyItemLicensePlateData = licensePlateData
    self.buyItemIsLeasing = leaseItem
    self.buyItemSaleItem = saleItem
    v11:setLastCreatedLicensePlate(licensePlateData)
    self:finalizeBuy()
  end
end
function ShopController:finalizeBuy()
  self.isBuying = true
  self.buyVehicleNow = 1
  local storeItem = storeItem:getText(ShopController.L10N_SYMBOL.BUYING_VEHICLE)
  if self.buyItemIsLeasing then
    local price = price:getText(ShopController.L10N_SYMBOL.LEASING_VEHICLE)
  end
  MessageDialog.show(nil, nil, storeItem)
end
function ShopController:onHandToolSellEvent(errorCode)
  if errorCode == SellHandToolEvent.STATE_SUCCESS then
    self:onHandToolSold()
    return
  end
  self:onHandToolSellFailed(errorCode)
end
function ShopController:onHandToolSold()
  storeItem:closeAllDialogs()
  local price = price:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_SUCCESS)
  InfoDialog.show(price, self.onSoldCallback, self, DialogElement.TYPE_INFO)
end
function ShopController:onHandToolSellFailed(state)
  price:closeAllDialogs()
  local price = price:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_FAILED)
  if state == SellHandToolEvent.STATE_IN_USE then
    local leased = leased:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_IN_USE)
  elseif state == SellHandToolEvent.STATE_NO_PERMISSION then
    leased = leased:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_NO_PERMISSION)
  end
  InfoDialog.show(price, self.onSoldCallback, self)
end
function ShopController:onVehicleBuyEvent(errorCode, leaseVehicle, price)
  if errorCode == BuyVehicleEvent.STATE_SUCCESS then
    self:onVehicleBought(leaseVehicle, price)
    return
  end
  self:onVehicleBuyFailed(leaseVehicle, errorCode)
end
function ShopController:onVehicleBought(leaseVehicle, price)
  leased:closeAllDialogs()
  if not leaseVehicle then
    local v4 = v4:getText(ShopController.L10N_SYMBOL.BUY_VEHICLE_SUCCESS)
    InfoDialog.show(v4, self.onBoughtCallback, self, DialogElement.TYPE_INFO)
  else
    v4 = v4:getText(ShopController.L10N_SYMBOL.LEASE_VEHICLE_SUCCESS)
    InfoDialog.show(v4, self.onBoughtCallback, self, DialogElement.TYPE_INFO)
  end
  self.updateShopItemsCallback()
end
function ShopController:onVehicleBuyFailed(leaseVehicle, errorCode)
  leased:closeAllDialogs()
  if errorCode == BuyVehicleEvent.STATE_NO_SPACE then
    local v4 = v4:getText(ShopController.L10N_SYMBOL.WARNING_NO_SPACE)
  elseif errorCode == BuyVehicleEvent.STATE_NO_PERMISSION then
    v4 = v4:getText(ShopController.L10N_SYMBOL.BUY_VEHICLE_NO_PERMISSION)
  else
    if errorCode == BuyVehicleEvent.STATE_NOT_ENOUGH_MONEY then
      v4 = v4:getText(ShopController.L10N_SYMBOL.WARNING_NOT_ENOUGH_MONEY)
    elseif errorCode == BuyVehicleEvent.STATE_TOO_MANY_BALES then
      v4 = v4:getText(ShopController.L10N_SYMBOL.WARNING_TOO_MANY_BALES)
    else
      if errorCode == BuyVehicleEvent.STATE_TOO_MANY_PALLETS then
        v4 = v4:getText(ShopController.L10N_SYMBOL.WARNING_TOO_MANY_PALLETS)
      else
        v4 = v4:getText(ShopController.L10N_SYMBOL.BUY_VEHICLE_FAILED_TO_LOAD)
      end
    end
  end
  InfoDialog.show(leased, self.onBoughtCallback, self)
end
function ShopController:onObjectBuyEvent(errorCode, price)
  if errorCode == BuyObjectEvent.STATE_SUCCESS then
    self:onObjectBought(price)
    return
  end
  self:onObjectBuyFailed(errorCode)
end
function ShopController:onObjectBought(price)
  errorCode:closeAllDialogs()
  errorCode:addMoneyChange(-price, self.playerFarmId, MoneyType.SHOP_VEHICLE_BUY)
  local leased = leased:getText(ShopController.L10N_SYMBOL.BUY_OBJECT_SUCCESS)
  InfoDialog.show(leased, self.onBoughtCallback, self, DialogElement.TYPE_INFO)
end
function ShopController:onObjectBuyFailed(errorCode)
  errorCode:closeAllDialogs()
  if errorCode == BuyObjectEvent.STATE_NO_SPACE then
    local leased = leased:getText(ShopController.L10N_SYMBOL.WARNING_NO_SPACE)
    InfoDialog.show(leased, self.onBoughtCallback, self)
    return
  end
  if errorCode == BuyObjectEvent.STATE_LIMIT_REACHED then
    leased = leased:getText(ShopController.L10N_SYMBOL.WARNING_TOO_MANY_PALLETS)
    InfoDialog.show(leased, self.onBoughtCallback, self)
    return
  end
  if errorCode == BuyObjectEvent.STATE_NOT_ENOUGH_MONEY then
    leased = leased:getText(ShopController.L10N_SYMBOL.WARNING_NOT_ENOUGH_MONEY)
    InfoDialog.show(leased, self.onBoughtCallback, self)
    return
  end
  leased = leased:getText(ShopController.L10N_SYMBOL.LOAD_OBJECT_FAILED)
  InfoDialog.show(leased, self.onBoughtCallback, self)
end
function ShopController:onHandToolBuyEvent(success, errorCode, price)
  if success then
    self:onHandToolBought(price)
    return
  end
  self:onHandToolBuyFailed(errorCode)
end
function ShopController:onHandToolBought(price)
  errorCode:closeAllDialogs()
  if not GS_IS_CONSOLE_VERSION then
    local errorCode = errorCode:getLastInputMode()
    -- if v2 ~= GS_INPUT_HELP_MODE_GAMEPAD then goto L37 end
  end
  local leased = leased:getText(ShopController.L10N_SYMBOL.BUY_CHAINSAW_THANKS)
  InfoDialog.show(leased, self.onBoughtCallback, self, DialogElement.TYPE_INFO)
  return
  leased = leased:getText(ShopController.L10N_SYMBOL.BUY_CHAINSAW_SUCCESS)
  InfoDialog.show(leased, self.onBoughtCallback, self, DialogElement.TYPE_INFO)
end
function ShopController:onHandToolBuyFailed(errorCode)
  errorCode:closeAllDialogs()
  local errorCode = errorCode:getText(ShopController.L10N_SYMBOL.LOAD_OBJECT_FAILED)
  if errorCode == BuyHandToolEvent.STATE_NO_PERMISSION then
    local leased = leased:getText(ShopController.L10N_SYMBOL.BUY_VEHICLE_NO_PERMISSION)
  elseif errorCode == BuyHandToolEvent.STATE_NOT_ENOUGH_MONEY then
    leased = leased:getText(ShopController.L10N_SYMBOL.WARNING_NOT_ENOUGH_MONEY)
  end
  InfoDialog.show(errorCode, self.onBoughtCallback, self)
end
function ShopController:onVehicleSellEvent(isDirectSell, errorCode, sellPrice, isOwned)
  if isDirectSell then
    return
  end
  if errorCode == SellVehicleEvent.SELL_SUCCESS then
    self:onVehicleSold(sellPrice, isOwned)
    return
  end
  self:onVehicleSellFailed(isOwned, errorCode)
end
function ShopController:onVehicleSold(sellPrice, isOwned)
  leased:closeAllDialogs()
  local leased = leased:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_SUCCESS)
  if not isOwned then
    local v4 = v4:getText(ShopController.L10N_SYMBOL.RETURN_VEHICLE_SUCCESS)
  end
  InfoDialog.show(leased, self.onSoldCallback, self, DialogElement.TYPE_INFO)
end
function ShopController:onVehicleSellFailed(isOwned, errorCode)
  leased:closeAllDialogs()
  if isOwned then
    if errorCode == SellVehicleEvent.SELL_NO_PERMISSION then
      local v4 = v4:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_NO_PERMISSION)
      -- goto L134  (LOP_JUMP +110)
    end
    if errorCode == SellVehicleEvent.SELL_VEHICLE_IN_USE then
      v4 = v4:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_IN_USE)
      -- goto L134  (LOP_JUMP +93)
    end
    if errorCode == SellVehicleEvent.SELL_LAST_VEHICLE then
      v4 = v4:getText(ShopController.L10N_SYMBOL.SELL_LAST_VEHICLE_FAILED)
      -- goto L134  (LOP_JUMP +76)
    end
    v4 = v4:getText(ShopController.L10N_SYMBOL.SELL_VEHICLE_FAILED)
  elseif errorCode == SellVehicleEvent.SELL_NO_PERMISSION then
    v4 = v4:getText(ShopController.L10N_SYMBOL.RETURN_VEHICLE_NO_PERMISSION)
  else
    if errorCode == SellVehicleEvent.SELL_VEHICLE_IN_USE then
      v4 = v4:getText(ShopController.L10N_SYMBOL.RETURN_VEHICLE_IN_USE)
    elseif errorCode == SellVehicleEvent.SELL_LAST_VEHICLE then
      v4 = v4:getText(ShopController.L10N_SYMBOL.RETURN_LAST_VEHICLE_FAILED)
    else
      v4 = v4:getText(ShopController.L10N_SYMBOL.RETURN_VEHICLE_FAILED)
    end
  end
  InfoDialog.show(leased, self.onSoldCallback, self)
end
function ShopController:onPlaceableSellEvent(errorCode, sellPrice)
  if errorCode == SellPlaceableEvent.STATE_SUCCESS then
    self:onPlaceableSold(sellPrice)
    return
  end
  self:onPlaceableSellFailed(errorCode)
end
function ShopController:onPlaceableSold(sellPrice)
  if self.ignoreSoldPlaceableEvent then
    return
  end
  errorCode:closeAllDialogs()
  local leased = leased:getText(ShopController.L10N_SYMBOL.SELL_OBJECT_SUCCESS)
  InfoDialog.show(leased, self.onSoldCallback, self, DialogElement.TYPE_INFO)
end
function ShopController:onPlaceableSellFailed(state)
  errorCode:closeAllDialogs()
  local errorCode = errorCode:getText(ShopController.L10N_SYMBOL.SELL_OBJECT_FAILED)
  if state == SellPlaceableEvent.STATE_IN_USE then
    local leased = leased:getText(ShopController.L10N_SYMBOL.SELL_OBJECT_IN_USE)
  elseif state == SellPlaceableEvent.STATE_NO_PERMISSION then
    leased = leased:getText(ShopController.L10N_SYMBOL.NO_PERMISSION)
  end
  InfoDialog.show(errorCode, self.onSoldCallback, self)
end
function ShopController:onBoughtCallback()
  self.isBuying = false
  self.updateAllItemsCallback()
  if self.buyItemSaleItem ~= nil then
    self.saleItemBoughtCallback()
  end
end
function ShopController:onSoldCallback()
  self.isSelling = false
  self.updateAllItemsCallback()
end
function ShopController:brandSortFunction(state)
  local leased = utf8ToUpper(self.sortValue)
  local v4 = utf8ToUpper(state.sortValue)
  if leased >= v4 then
  end
  return true
end
function ShopController:categorySortFunction(state)
  if self.sortValue >= state.sortValue then
  end
  return true
end
function ShopController:displayItemSortFunction(state)
  if self.orderValue == state.orderValue then
    local v4 = self:getSellPrice()
    local leased = state:getSellPrice()
    if v4 == leased then
      local v5 = self:getSortId()
      local v6 = state:getSortId()
      if v6 >= v5 then
      end
      return true
    end
    if leased >= errorCode then
    end
    return true
  end
  if self.orderValue >= state.orderValue then
  end
  return true
end
function ShopController.getCoinItems(v0)
  local errorCode = errorCode:getIsAvailable()
  if not errorCode then
    return {}
  end
  local leased = leased:getProducts()
  for v5, v6 in ipairs(...) do
    local v7 = v6:isa(IAProductCoins)
    if not v7 then
      continue
    end
    local v9 = v6:getDisplayItem(nil)
    table.insert(...)
  end
  return state
end
ShopController.PROFILE = {ICON_OWNED = "shopListAttributeIconOwned", ICON_LEASED = "shopListAttributeIconLeased"}
ShopController.L10N_SYMBOL = {BUY_CONFIRMATION = "shop_doYouWantToBuy", BUY_ALREADY_OWNED = "shop_messageAlreadyOwned", CANNOT_SELL_TOUR_ITEMS = "shop_messageTourItemsCannotBeSold", RETURNING_VEHICLE = "shop_messageReturningVehicle", SELLING_VEHICLE = "shop_messageSellingVehicle", LEASING_VEHICLE = "shop_messageLeasingVehicle", BUYING_VEHICLE = "shop_messageBuyingVehicle", LEASE_VEHICLE_SUCCESS = "shop_messageLeasingReady", BUY_VEHICLE_SUCCESS = "shop_messagePurchaseReady", BUY_VEHICLE_FAILED_TO_LOAD = "shop_messageFailedToLoadVehicle", BUY_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionToBuyVehicleText", BUY_OBJECT_SUCCESS = "shop_messageGardenCenterPurchaseReady", WARNING_NO_SPACE = "shop_messageNoSpace", WARNING_NOT_ENOUGH_SLOTS = "shop_messageNotEnoughSlotsToBuy", WARNING_NOT_ENOUGH_MONEY = "shop_messageNotEnoughMoneyToBuy", WARNING_TOO_MANY_BALES = "warning_tooManyBales", WARNING_TOO_MANY_PALLETS = "warning_tooManyPallets", WARNING_TOO_MANY_PLACEABLES = "warning_tooManyPlaceables", BUY_CHAINSAW_THANKS = "shop_messageThanksForBuying", BUY_CHAINSAW_SUCCESS = "shop_messageBoughtChainsaw", LOAD_OBJECT_FAILED = "shop_messageFailedToLoadObject", RETURN_VEHICLE_SUCCESS = "shop_messageReturnedVehicle", RETURN_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionToReturnVehicleText", RETURN_VEHICLE_IN_USE = "shop_messageReturnVehicleInUse", RETURN_VEHICLE_FAILED = "shop_messageFailedToReturnVehicle", RETURN_LAST_VEHICLE_FAILED = "shop_messageFailedToReturnLastVehicleText", SELL_VEHICLE_SUCCESS = "shop_messageSoldVehicle", SELL_VEHICLE_FAILED = "shop_messageFailedToSellVehicle", SELL_VEHICLE_IN_USE = "shop_messageSellVehicleInUse", SELL_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionToSellVehicleText", SELL_LAST_VEHICLE_FAILED = "shop_messageFailedToSellLastVehicleText", SELL_OBJECT_SUCCESS = "shop_messageSoldObject", SELL_OBJECT_FAILED = "shop_messageFailedToSellObject", SELL_OBJECT_IN_USE = "shop_messageObjectInUse", NO_PERMISSION = "shop_messageNoPermissionGeneral"}
