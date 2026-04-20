-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FinanceStats = {}
local FinanceStats_mt = Class(FinanceStats)
if GS_IS_MOBILE_VERSION then
  FinanceStats.statNames = {"harvestIncome", "incomeBga", "soldVehicles", "soldAnimals", "soldBales", "soldWool", "soldMilk", "soldProducts", "soldWood", "wagePayment", "newVehiclesCost", "newAnimalsCost", "fieldPurchase", "constructionCost", "propertyMaintenance", "purchaseFuel", "purchaseSeeds", "purchaseFertilizer", "animalUpkeep", "other"}
else
  FinanceStats.statNames = {"newVehiclesCost", "soldVehicles", "newAnimalsCost", "soldAnimals", "constructionCost", "soldBuildings", "fieldPurchase", "fieldSelling", "vehicleRunningCost", "vehicleLeasingCost", "propertyMaintenance", "propertyIncome", "productionCosts", "soldWood", "soldBales", "soldWool", "soldMilk", "soldProducts", "purchaseFuel", "purchaseSeeds", "purchaseFertilizer", "purchaseSaplings", "purchaseWater", "purchaseBales", "purchasePallets", "harvestIncome", "incomeBga", "missionIncome", "wagePayment", "other", "loanInterest"}
end
FinanceStats.statNameToIndex = {}
FinanceStats.statNamesI18n = {}
FinanceStats.filledI18N = false
for v4, v5 in ipairs(FinanceStats.statNames) do
  FinanceStats.statNameToIndex[v5] = v4
end
function FinanceStats.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  for v5, v6 in ipairs(FinanceStats.statNames) do
    v1[v6] = 0
    local v8 = v8:getText("finance_" .. v6)
    FinanceStats.statNamesI18n[v6] = v8
  end
  return v1
end
function FinanceStats:saveToXMLFile(xmlFile, key)
  for v6, v7 in ipairs(self.statNames) do
    xmlFile:setFloat(key .. "." .. v7, self[v7])
  end
end
function FinanceStats:loadFromXMLFile(xmlFile, key)
  for v6, v7 in ipairs(self.statNames) do
    local v8 = xmlFile:getFloat(key .. "." .. v7, 0)
    self[v7] = v8
  end
end
function FinanceStats:merge(other)
  for v5, v6 in ipairs(self.statNames) do
    self[v6] = self[v6] + other[v6]
  end
end
