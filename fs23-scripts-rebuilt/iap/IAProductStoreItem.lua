-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IAProductStoreItem = {}
local v0 = Class(IAProductStoreItem, IAProduct)
IAProductStoreItem.ADDITIONAL_SPECS = {workingWidth = true}
IAProductStoreItem.COMBINED_SPECS = {slots = true}
function IAProductStoreItem.new(v0, v1)
  local v2 = IAProduct.new(v0, v1, u0)
  v2.items = {}
  v2.pendingStoreItemPurchases = {}
  return v2
end
function IAProductStoreItem:loadFromXMLFile(v1, v2)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, v1, v2)
  if not v3 then
    return false
  end
  v3 = v1:getString(v2 .. "#title")
  self.title = v3
  v3 = v1:getString(v2 .. "#imageFilename")
  self.imageFilename = v3
  v1:iterate(v2 .. ".item", function(self, v1)
    local v2 = v2:getString(v1 .. "#xmlFilename")
    if v2 ~= nil then
      table.insert(u1.items, v2)
    end
  end)
  if #self.items == 0 then
    Logging.xmlWarning(v1, "Failed to load IAP Product. Missing xmlFilename definition. (%s)", v2)
    return false
  end
  return true
end
function IAProductStoreItem:onVehicleBuyEvent(v1)
  if v1 == BuyVehicleEvent.STATE_SUCCESS then
    if 0 < #self.pendingStoreItemPurchases then
      local v2 = v2:getServerConnection()
      local v9 = v9:getFarmId()
      local v4 = BuyVehicleEvent.new(self.pendingStoreItemPurchases[1], false, {}, false, v9, nil, nil, 0)
      v2:sendEvent(...)
      table.remove(self.pendingStoreItemPurchases, 1)
      return
    end
    v2:unsubscribe(BuyVehicleEvent, self)
    self:onProductBoughtFinished(true)
    return
  end
  self.pendingStoreItemPurchases = {}
  if v1 == BuyVehicleEvent.STATE_NO_SPACE then
    local v3 = v3:getText(ShopController.L10N_SYMBOL.WARNING_NO_SPACE)
  end
  v3:unsubscribe(BuyVehicleEvent, self)
  self:onProductBoughtFinished(false, v2)
end
function IAProductStoreItem:getIsStoreItemOfProduct(v1)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  if v1.xmlFilename == self.items[1] then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  return false
end
function IAProductStoreItem:getDisplayItem(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  if v1.xmlFilename ~= self.items[1] then
    return nil
  end
  if self.title ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 22, target 42)
    local v16 = v16:getItemByXMLFilename(self.items[1])
    if v16 ~= nil then
      table.insert({}, v16.name)
    end
    -- TODO: structure LOP_FORNLOOP (pc 41, target 23)
    local v15 = unpack(v12)
    local v13 = string.format(...)
  end
  v13 = self:getId()
  v13 = self:getPriceText()
  if not self.imageFilename then
  end
  v12.imageFilename = v13
  v12.xmlFilename = v1.xmlFilename
  v12.product = self
  v13 = v13:getHasPendingPurchase(self)
  v12.canBeRecovered = v13
  if 0 < #self.items then
    -- TODO: structure LOP_FORNPREP (pc 108, target 205)
    v16 = v16:getItemByXMLFilename(self.items[2])
    local v17 = v17:makeDisplayItem(v16, nil, nil, nil, true)
    if v17 ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 134, target 204)
      local v22 = v22:getSpecTypeByProfile(v17.attributeIconProfiles[1])
      if IAProductStoreItem.ADDITIONAL_SPECS[v22.name] then
        table.insert(v3, v17.attributeIconProfiles[1])
        table.insert(v4, v17.attributeValues[1])
      end
      if IAProductStoreItem.COMBINED_SPECS[v22.name] then
        -- TODO: structure LOP_FORNPREP (pc 181, target 203)
        if v3[1] == v22.profile then
          local v28 = tonumber(v4[1])
          local v29 = tonumber(v17.attributeValues[v20])
          local v26 = tostring(v28 + v29)
          v4[1] = v26
        end
        -- TODO: structure LOP_FORNLOOP (pc 202, target 182)
      end
      -- TODO: structure LOP_FORNLOOP (pc 203, target 135)
    end
    -- TODO: structure LOP_FORNLOOP (pc 204, target 109)
  end
  v13 = ShopDisplayItem.new(v12, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  return v13
end
function IAProductStoreItem:onProductBought(v1)
  if g_currentMission ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 39)
    local v6 = v6:getItemByXMLFilename(self.items[1])
    if v6 ~= nil then
      table.insert(self.pendingStoreItemPurchases, self.items[1])
    else
      Logging.error("Unable to buy IAP store item '%s", self.items[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 38, target 10)
    if 0 < #self.pendingStoreItemPurchases then
      self.boughtCallback = v1
      v3:subscribe(BuyVehicleEvent, self.onVehicleBuyEvent, self)
      local v3 = v3:getServerConnection()
      local v10 = v10:getFarmId()
      local v5 = BuyVehicleEvent.new(self.pendingStoreItemPurchases[1], false, {}, false, v10, nil, nil, 0)
      v3:sendEvent(...)
      table.remove(self.pendingStoreItemPurchases, 1)
      return
    end
  end
  v1(false)
end
function IAProductStoreItem:onProductBoughtFinished(v1, v2)
  if g_currentMission ~= nil then
    g_currentMission:saveSavegame()
  end
  self.boughtCallback(v1, v2)
  self.boughtCallback = nil
end
