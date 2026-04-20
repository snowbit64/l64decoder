-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IAProductCoins = {}
local v0 = Class(IAProductCoins, IAProduct)
function IAProductCoins.new(v0, v1)
  return IAProduct.new(v0, v1, u0)
end
function IAProductCoins:loadFromXMLFile(v1, v2)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, v1, v2)
  if not v3 then
    return false
  end
  v3 = v1:getInt(v2 .. "#coins")
  self.coins = v3
  if self.coins == nil then
    Logging.xmlWarning(v1, "Failed to load IAP Product. Missing coins definition. (%s)", v2)
    return false
  end
  return true
end
function IAProductCoins:getDisplayItem(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  local v12 = self:getId()
  v12 = self:getPriceText()
  v12 = self:getTitle()
  v12 = self:getImageFilename()
  v12 = v12:getHasPendingPurchase(self)
  local v18 = v18:getText("function_coins")
  v12 = ShopDisplayItem.new({name = v12, isInAppPurchase = true, isInAppPurchaseConsumable = true, priceText = v12, title = v12, imageFilename = v12, product = self, canBeRecovered = v12}, nil, nil, nil, nil, v18, self.productId)
  return v12
end
function IAProductCoins:onProductBought(v1)
  if g_currentMission ~= nil then
    g_currentMission:addPurchasedMoney(self.coins)
    g_currentMission:saveSavegame()
  end
  local v4 = v4:superClass()
  v4.onProductBought(self, v1)
end
