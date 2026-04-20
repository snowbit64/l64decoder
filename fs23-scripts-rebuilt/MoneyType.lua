-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MoneyType = {}
function MoneyType.register(statistic, title, customEnv)
  u0 = u0 + 1
  u1[u0] = {id = u0, statistic = statistic, title = title, customEnv = customEnv}
  return {id = u0, statistic = statistic, title = title, customEnv = customEnv}
end
function MoneyType.registerWithId(id, statistic, title, customEnv)
  if u0[id] == nil then
    u0[id] = {id = id, statistic = statistic, title = title, customEnv = customEnv}
  end
  local v5 = math.max(u1, id)
  u1 = v5
  return v4
end
function MoneyType.getMoneyTypeById(id)
  return u0[id]
end
function MoneyType.getMoneyTypeByName(name)
  if name ~= nil then
    local v1 = string.upper(name)
    return MoneyType[v1]
  end
  return nil
end
function MoneyType.reset()
  u0 = MoneyType.LAST_ID
end
local v3 = MoneyType.register("other", "finance_other")
MoneyType.OTHER = v3
v3 = MoneyType.register("newVehiclesCost", "finance_newVehiclesCost")
MoneyType.SHOP_VEHICLE_BUY = v3
v3 = MoneyType.register("soldVehicles", "finance_soldVehicles")
MoneyType.SHOP_VEHICLE_SELL = v3
v3 = MoneyType.register("constructionCost", "finance_constructionCost")
MoneyType.SHOP_PROPERTY_BUY = v3
v3 = MoneyType.register("soldBuildings", "finance_soldBuildings")
MoneyType.SHOP_PROPERTY_SELL = v3
v3 = MoneyType.register("soldMilk", "finance_soldMilk")
MoneyType.SOLD_MILK = v3
v3 = MoneyType.register("harvestIncome", "finance_harvestIncome")
MoneyType.HARVEST_INCOME = v3
v3 = MoneyType.register("wagePayment", "finance_wagePayment")
MoneyType.AI = v3
v3 = MoneyType.register("missionIncome", "finance_missionIncome")
MoneyType.MISSIONS = v3
v3 = MoneyType.register("soldAnimals", "finance_soldAnimals")
MoneyType.SOLD_ANIMALS = v3
v3 = MoneyType.register("newAnimalsCost", "finance_newAnimalsCost")
MoneyType.NEW_ANIMALS_COST = v3
v3 = MoneyType.register("animalUpkeep", "finance_animalUpkeep")
MoneyType.ANIMAL_UPKEEP = v3
v3 = MoneyType.register("purchaseSeeds", "finance_purchaseSeeds")
MoneyType.PURCHASE_SEEDS = v3
v3 = MoneyType.register("purchaseFertilizer", "finance_purchaseFertilizer")
MoneyType.PURCHASE_FERTILIZER = v3
v3 = MoneyType.register("purchaseFuel", "finance_purchaseFuel")
MoneyType.PURCHASE_FUEL = v3
v3 = MoneyType.register("purchaseSaplings", "finance_purchaseSaplings")
MoneyType.PURCHASE_SAPLINGS = v3
v3 = MoneyType.register("purchaseWater", "finance_purchaseWater")
MoneyType.PURCHASE_WATER = v3
v3 = MoneyType.register("purchaseBales", "finance_purchaseBales")
MoneyType.PURCHASE_BALES = v3
v3 = MoneyType.register("purchasePallets", "finance_purchasePallets")
MoneyType.PURCHASE_PALLETS = v3
v3 = MoneyType.register("fieldPurchase", "finance_fieldPurchase")
MoneyType.FIELD_BUY = v3
v3 = MoneyType.register("fieldSelling", "finance_fieldSelling")
MoneyType.FIELD_SELL = v3
v3 = MoneyType.register("vehicleLeasingCost", "finance_vehicleLeasingCost")
MoneyType.LEASING_COSTS = v3
v3 = MoneyType.register("loanInterest", "finance_loanInterest")
MoneyType.LOAN_INTEREST = v3
v3 = MoneyType.register("vehicleRunningCost", "finance_vehicleRunningCost")
MoneyType.VEHICLE_RUNNING_COSTS = v3
v3 = MoneyType.register("vehicleRunningCost", "finance_vehicleRunningCost")
MoneyType.VEHICLE_REPAIR = v3
v3 = MoneyType.register("propertyMaintenance", "finance_propertyMaintenance")
MoneyType.PROPERTY_MAINTENANCE = v3
v3 = MoneyType.register("propertyIncome", "finance_propertyIncome")
MoneyType.PROPERTY_INCOME = v3
v3 = MoneyType.register("loan", "finance_other")
MoneyType.LOAN = v3
v3 = MoneyType.register("productionCosts", "finance_productionCosts")
MoneyType.PRODUCTION_COSTS = v3
v3 = MoneyType.register("soldProducts", "finance_soldProducts")
MoneyType.SOLD_PRODUCTS = v3
v3 = MoneyType.register("incomeBga", "finance_incomeBga")
MoneyType.INCOME_BGA = v3
v3 = MoneyType.register("soldWood", "finance_soldWood")
MoneyType.SOLD_WOOD = v3
v3 = MoneyType.register("soldBales", "finance_soldBales")
MoneyType.SOLD_BALES = v3
v3 = MoneyType.register("expenses", "finance_other")
MoneyType.BOUGHT_MATERIALS = v3
v3 = MoneyType.register("other", "finance_transfer")
MoneyType.TRANSFER = v3
v3 = MoneyType.register("other", "finance_collectible")
MoneyType.COLLECTIBLE = v3
MoneyType.LAST_ID = 0
