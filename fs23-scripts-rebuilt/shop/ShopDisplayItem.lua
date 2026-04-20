-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopDisplayItem = {}
local ShopDisplayItem_mt = Class(ShopDisplayItem)
ShopDisplayItem.NO_CONCRETE_ITEM = {}
function ShopDisplayItem.new(storeItem, concreteItem, attributeIconProfiles, attributeValues, iconFilenames, functionText, orderValue, numOwned, numLeased, saleItem)
  local v10 = setmetatable({}, u0)
  v10.storeItem = storeItem
  if not concreteItem then
  end
  v10.concreteItem = v11
  if not attributeIconProfiles then
  end
  v10.attributeIconProfiles = v11
  if not attributeValues then
  end
  v10.attributeValues = v11
  if iconFilenames ~= nil then
    if not iconFilenames.fillTypeIconFilenames then
    end
    v10.fillTypeIconFilenames = v11
    if not iconFilenames.seedTypeIconFilenames then
    end
    v10.seedTypeIconFilenames = v11
    if not iconFilenames.foodFillTypeIconFilenames then
    end
    v10.foodFillTypeIconFilenames = v11
    if not iconFilenames.prodPointInputFillTypeIconFilenames then
    end
    v10.prodPointInputFillTypeIconFilenames = v11
    if not iconFilenames.prodPointOutputFillTypeIconFilenames then
    end
    v10.prodPointOutputFillTypeIconFilenames = v11
    if not iconFilenames.sellingStationFillTypesIconFilenames then
    end
    v10.sellingStationFillTypesIconFilenames = v11
    if not iconFilenames.buyingStationFillTypesIconFilenames then
    end
    v10.buyingStationFillTypesIconFilenames = v11
  end
  v10.functionText = functionText
  v10.orderValue = orderValue
  v10.numOwned = numOwned
  v10.numLeased = numLeased
  v10.saleItem = saleItem
  return v10
end
function ShopDisplayItem:getSellPrice()
  if self.saleItem ~= nil then
    return self.saleItem.price
  end
  if self.concreteItem ~= ShopDisplayItem.NO_CONCRETE_ITEM then
    return v1:getSellPrice()
  end
  return self.storeItem.price
end
function ShopDisplayItem:getSortId()
  if self.concreteItem ~= ShopDisplayItem.NO_CONCRETE_ITEM then
    return self.concreteItem.id
  end
  return self.storeItem.xmlFilename
end
function ShopDisplayItem:hasCombinationInfo()
  if self.saleItem ~= nil then
    return false
  end
  if self.storeItem.specs ~= nil and self.storeItem.specs.combinations ~= nil then
    if 0 >= #self.storeItem.specs.combinations then
    end
    return true
  end
  return false
end
