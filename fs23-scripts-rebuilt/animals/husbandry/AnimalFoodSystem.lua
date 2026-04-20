-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalFoodSystem = {}
local AnimalFoodSystem_mt = Class(AnimalFoodSystem)
AnimalFoodSystem.FOOD_CONSUME_TYPE_SERIAL = 1
AnimalFoodSystem.FOOD_CONSUME_TYPE_PARALLEL = 2
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("animalFood")
  AnimalFoodSystem.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.animals.animal(?)#animalType", "Animal type name")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.animals.animal(?)#consumptionType", "Food consumption type", "SERIAL")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.animals.animal(?).foodGroup(?)#title", "Food group title")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.FLOAT, "animalFood.animals.animal(?).foodGroup(?)#productionWeight", "Food group production weight", 0)
  AnimalFoodSystem.xmlSchema:register(XMLValueType.FLOAT, "animalFood.animals.animal(?).foodGroup(?)#eatWeight", "Food group eat weight", 1)
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.animals.animal(?).foodGroup(?)#fillTypes", "Food group fill types")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.mixtures.mixture(?)#fillType", "Mixture fill type")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.mixtures.mixture(?)#animalType", "Mixture animal type")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.FLOAT, "animalFood.mixtures.mixture(?).ingredient(?)#weight", "Mixture ingredient weight", 0)
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.mixtures.mixture(?).ingredient(?)#fillTypes", "Mixture ingredient fill types")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.recipes.recipe(?)#fillType", "Recipe fill type")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.recipes.recipe(?).ingredient(?)#name", "Ingredient name")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.recipes.recipe(?).ingredient(?)#title", "Ingredient title")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.INT, "animalFood.recipes.recipe(?).ingredient(?)#minPercentage", "Ingredient min percentage")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.INT, "animalFood.recipes.recipe(?).ingredient(?)#maxPercentage", "Ingredient max percentage")
  AnimalFoodSystem.xmlSchema:register(XMLValueType.STRING, "animalFood.recipes.recipe(?).ingredient(?)#fillTypes", "Ingredient fill types")
end)
function AnimalFoodSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.animalFood = {}
  v2.indexToAnimalFood = {}
  v2.animalTypeIndexToFood = {}
  v2.mixtures = {}
  v2.recipes = {}
  v2.recipeFillTypeIndexToRecipe = {}
  v2.animalMixtures = {}
  v2.mixtureFillTypeIndexToMixture = {}
  return v2
end
function AnimalFoodSystem.delete(v0)
end
function AnimalFoodSystem:loadMapData(xmlFile, missionInfo)
  local v3 = getXMLString(xmlFile, "map.animals.food#filename")
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000003 -> L16
  end
  Logging.xmlInfo(xmlFile, "No animals food xml given at 'map.animals.food#filename'")
  return false
  local v4 = Utils.getFilename(v3, self.mission.baseDirectory)
  v4 = XMLFile.load("animalFood", v4, AnimalFoodSystem.xmlSchema)
  if v4 == nil then
    return false
  end
  local v5, v6 = Utils.getModNameAndBaseDirectory(v3)
  self.customEnvironment = v5
  local v7 = self:loadAnimalFood(v4, self.mission.baseDirectory)
  if not v7 then
    v4:delete()
    return false
  end
  v7 = self:loadMixtures(v4, self.mission.baseDirectory)
  if not v7 then
    v4:delete()
    return false
  end
  v7 = self:loadRecipes(v4, self.mission.baseDirectory)
  if not v7 then
    v4:delete()
    return false
  end
  v4:delete()
  return true
end
function AnimalFoodSystem:loadAnimalFood(xmlFile)
  xmlFile:iterate("animalFood.animals.animal", function(self, xmlFile)
    local v2 = v2:getValue(xmlFile .. "#animalType")
    local v3 = v3:getTypeIndexByName(v2)
    if v3 ~= nil then
      local v5 = v5:loadAnimalFoodData({}, u0, xmlFile)
      -- if not v5 then goto L64 end
      table.insert(u1.animalFood, {index = #u1.animalFood + 1, animalTypeIndex = v3})
      u1.indexToAnimalFood[{index = #u1.animalFood + 1, animalTypeIndex = v3}.index] = {index = #u1.animalFood + 1, animalTypeIndex = v3}
      u1.animalTypeIndexToFood[v3] = {index = #u1.animalFood + 1, animalTypeIndex = v3}
      return
    end
    Logging.xmlWarning(u0, "Animal type '%s' not defined for foodgroup '%s'", v2, xmlFile)
  end)
  for v5, v6 in pairs(self.animalFood) do
    if not (v6.consumptionType == AnimalFoodSystem.FOOD_CONSUME_TYPE_PARALLEL) then
      continue
    end
    for v12, v13 in pairs(v6.groups) do
    end
    for v12, v13 in pairs(v6.groups) do
      if 0 < v7 then
        v13.productionWeight = v13.productionWeight / v7
      end
      if not (0 < v8) then
        continue
      end
      v13.eatWeight = v13.eatWeight / v8
    end
  end
  return true
end
function AnimalFoodSystem.loadAnimalFoodData(v0, v1, v2, v3)
  local v5 = v2:getValue(v3 .. "#consumptionType", "SERIAL")
  local v6 = v5:upper()
  if v6 == "PARALLEL" then
  end
  v2:iterate(v3 .. ".foodGroup", function(v0, v1)
    local v2 = v2:getValue(v1 .. "#title")
    if v2 == nil then
      Logging.xmlError(u0, "Missing title for animal food group '%s'", v1)
      return false
    end
    local v4 = v4:convertText(v2, u1.customEnvironment)
    v4 = v4:getValue(v1 .. "#productionWeight", 0)
    v4 = v4:getValue(v1 .. "#eatWeight", 1)
    v4 = v4:getFillTypesFromXML({title = v4, productionWeight = v4, eatWeight = v4, fillTypes = {}}.fillTypes, u2, u0, v1 .. "#fillTypes")
    if v4 then
      table.insert(u3, {title = v4, productionWeight = v4, eatWeight = v4, fillTypes = {}})
    end
  end)
  v1.groups = {}
  v1.consumptionType = v4
  return true
end
function AnimalFoodSystem:loadMixtures(xmlFile)
  xmlFile:iterate("animalFood.mixtures.mixture", function(self, xmlFile)
    local v2 = v2:getValue(xmlFile .. "#fillType")
    if v2 == nil then
      Logging.xmlError(u0, "Missing fillType for food mixture '%s'", xmlFile)
      return false
    end
    local v3 = v3:getFillTypeIndexByName(v2)
    if v3 == nil then
      Logging.xmlError(u0, "FillType '%s' not defined for food mixture '%s'", v2, xmlFile)
      return false
    end
    if u1.mixtureFillTypeIndexToMixture[v3] ~= nil then
      Logging.xmlError(u0, "FillType '%s' already defined for mixture '%s'", v2, xmlFile)
      return false
    end
    local v4 = v4:getValue(xmlFile .. "#animalType")
    if v4 == nil then
      Logging.xmlError(u0, "Missing animal type for food mixture '%s'", xmlFile)
      return false
    end
    local v5 = v5:getTypeIndexByName(v4)
    if v5 == nil then
      Logging.xmlError(u0, "Animal type '%s' not defined for food mixture '%s'", v4, xmlFile)
      return false
    end
    local v7 = v7:loadMixture({}, u0, xmlFile)
    if v7 then
      table.insert(u1.mixtures, {index = #u1.mixtures + 1})
      if not u1.animalMixtures[v5] then
      end
      v7[v5] = v8
      table.insert(u1.animalMixtures[v5], v3)
      u1.mixtureFillTypeIndexToMixture[v3] = v6
    end
  end)
  for v5, v6 in pairs(self.mixtures) do
    for v11, v12 in pairs(v6.ingredients) do
    end
    if not (0 < v7) then
      continue
    end
    for v11, v12 in pairs(v6.ingredients) do
      v12.weight = v12.weight / v7
    end
  end
  return true
end
function AnimalFoodSystem.loadMixture(v0, v1, v2, v3)
  v2:iterate(v3 .. ".ingredient", function(v0, v1)
    local v3 = v3:getValue(v1 .. "#weight", 0)
    v3 = v3:getFillTypesFromXML({fillTypes = {}, weight = v3}.fillTypes, u2, u0, v1 .. "#fillTypes")
    if v3 then
      table.insert(u3, {fillTypes = {}, weight = v3})
    end
  end)
  v1.ingredients = {}
  return true
end
function AnimalFoodSystem.loadRecipes(v0, v1)
  v1:iterate("animalFood.recipes.recipe", function(v0, v1)
    local v2 = v2:getValue(v1 .. "#fillType")
    if v2 == nil then
      Logging.xmlError(u0, "Missing fillType for recipe '%s'", v1)
      return false
    end
    local v3 = v3:getFillTypeIndexByName(v2)
    if v3 == nil then
      Logging.xmlError(u0, "Recipe filltype '%s' not defined for '%s'", v2, v1)
      return false
    end
    if u1.recipeFillTypeIndexToRecipe[v3] ~= nil then
      Logging.xmlError(u0, "Recipe '%s' already defined in '%s'", v2, v1)
      return false
    end
    local v5 = v5:loadRecipe({}, u0, v1)
    if v5 then
      table.insert(u1.recipes, {index = #u1.recipes + 1, fillType = v3})
      u1.recipeFillTypeIndexToRecipe[v3] = {index = #u1.recipes + 1, fillType = v3}
    end
  end)
  return true
end
function AnimalFoodSystem.loadRecipe(v0, v1, v2, v3)
  v2:iterate(v3 .. ".ingredient", function(v0, v1)
    local v3 = v3:getValue(v1 .. "#name")
    local v5 = v5:getValue(v1 .. "#title")
    v3 = v3:convertText(v5, u1.customEnvironment)
    local v4 = v4:getValue(v1 .. "#minPercentage", 0)
    v4 = v4:getValue(v1 .. "#maxPercentage", 75)
    u2 = u2 + {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100, ratio = {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.maxPercentage - {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.minPercentage, fillTypes = {}}.ratio
    v3 = v3:getFillTypesFromXML({name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100, ratio = {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.maxPercentage - {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.minPercentage, fillTypes = {}}.fillTypes, u3, u0, v1 .. "#fillTypes")
    if v3 then
      table.insert(u4, {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100, ratio = {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.maxPercentage - {name = v3, title = v3, minPercentage = v4 / 100, maxPercentage = v4 / 100}.minPercentage, fillTypes = {}})
    end
  end)
  for v10, v11 in ipairs({}) do
    v11.ratio = v11.ratio / v5
  end
  if #v4 == 0 then
    Logging.xmlWarning(v2, "No ingredients defined for recipe '%s'", v3)
    return false
  end
  v1.ingredients = v4
  return true
end
function AnimalFoodSystem.getFillTypesFromXML(v0, v1, v2, v3, v4)
  local v5 = v3:getValue(v4)
  if v5 == nil then
    Logging.xmlError(v3, "Missing fillTypes for ingredient '%s'", v4)
    return false
  end
  local v6 = string.split(v5, " ")
  for v10, v11 in pairs(v6) do
    local v12 = v12:getFillTypeIndexByName(v11)
    if v12 ~= nil then
      if v2[v12] == nil then
        table.addElement(v1, v12)
        continue
      end
      Logging.xmlWarning(v3, "FillType '%s' already used in other ingredient", v11)
    else
      Logging.xmlWarning(v3, "FillType '%s' not defined. Ignoring it", v11)
    end
  end
  if #v1 == 0 then
    Logging.xmlError(v3, "No fillTypes defined - '%s'", v4)
    return false
  end
  return true
end
function AnimalFoodSystem:getAnimalFood(animalTypeIndex)
  return self.animalTypeIndexToFood[animalTypeIndex]
end
function AnimalFoodSystem:getRecipeByFillTypeIndex(fillTypeIndex)
  return self.recipeFillTypeIndexToRecipe[fillTypeIndex]
end
function AnimalFoodSystem:getMixtureByFillType(fillTypeIndex)
  return self.mixtureFillTypeIndexToMixture[fillTypeIndex]
end
function AnimalFoodSystem:getMixturesByAnimalTypeIndex(animalTypeIndex)
  return self.animalMixtures[animalTypeIndex]
end
function AnimalFoodSystem:consumeFood(animalTypeIndex, amountToConsume, fillLevels, consumedFood)
  if self.animalTypeIndexToFood[animalTypeIndex] ~= nil then
    if self.animalTypeIndexToFood[animalTypeIndex].consumptionType == AnimalFoodSystem.FOOD_CONSUME_TYPE_SERIAL then
      return self:consumeFoodSerially(amountToConsume, self.animalTypeIndexToFood[animalTypeIndex].groups, fillLevels, consumedFood)
    end
    if v5.consumptionType == AnimalFoodSystem.FOOD_CONSUME_TYPE_PARALLEL then
      v6 = self:consumeFoodParallelly(amountToConsume, v5.groups, fillLevels, consumedFood)
      return v6
    end
  end
  return 0
end
function AnimalFoodSystem:consumeFoodSerially(amount, foodGroups, fillLevels, consumedFood)
  if 0 < amount then
    for v10, v11 in ipairs(foodGroups) do
      local v13 = self:consumeFoodGroup(v11, amount, fillLevels, consumedFood)
    end
  end
  return v5
end
function AnimalFoodSystem:consumeFoodParallelly(amount, foodGroups, fillLevels, consumedFood)
  if 0 < amount then
    for v9, v10 in pairs(foodGroups) do
      local v11 = self:getTotalFillLevelInGroup(v10, fillLevels)
      local v13 = math.min(v11, amount * v10.eatWeight)
      local v14 = self:consumeFoodGroup(v10, v13, fillLevels, consumedFood)
    end
  end
  return v5
end
function AnimalFoodSystem.consumeFoodGroup(v0, v1, v2, v3, v4)
  for v8, v9 in pairs(v1.fillTypes) do
    if not (v3[v9] ~= nil) then
      continue
    end
    local v11 = math.min(v2, v3[v9])
    local v12 = math.min(v3[v9], v11)
    local v13 = math.max(v2 - v12, 0)
    v4[v9] = v12
    if not (v13 == 0) then
      continue
    end
    return v13
  end
  return v2
end
function AnimalFoodSystem.getTotalFillLevelInGroup(v0, v1, v2)
  for v7, v8 in pairs(v1.fillTypes) do
    if not (v2[v8] ~= nil) then
      continue
    end
  end
  return v3
end
