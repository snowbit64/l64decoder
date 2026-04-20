-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IAProduct = {}
local IAProduct_mt = Class(IAProduct)
function IAProduct.new(productId, coins, imageFilename)
  if not imageFilename then
  end
  local v3 = v3(v4, v5)
  v3.productId = productId
  v3.isConsumable = coins
  return v3
end
function IAProduct:loadFromXMLFile(v1, v2)
  local v3 = v1:getString(v2 .. "#imageFilename")
  self.imageFilename = v3
  return true
end
function IAProduct:getId()
  return self.productId
end
function IAProduct:getPriceText()
  local v1 = v1:getIsAvailable()
  if v1 then
    local v2 = inAppGetProductPrice(self.productId)
    return v2 or "Unknown"
  end
  v1 = v1:getText("ui_modUnavailable")
  return v1
end
function IAProduct:getTitle()
  local v2 = inAppGetProductDescription(self.productId)
  return v2 or "Unknown"
end
function IAProduct:getImageFilename()
  return self.imageFilename
end
function IAProduct:getHasBeenBought()
  if self.isConsumable then
    return false
  end
  local v2 = inAppGetProductPurchaseState(self.productId)
  if v2 ~= InAppPurchasePurchaseState.PURCHASED then
  end
  return true
end
function IAProduct.getDisplayItem(v0)
  return nil
end
function IAProduct.onProductBought(v0, v1)
  v1(true)
end
