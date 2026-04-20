-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFoliageAreas = {}
function PlaceableFoliageAreas.prerequisitesPresent(v0)
  return true
end
function PlaceableFoliageAreas.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadFoliageArea", PlaceableFoliageAreas.loadFoliageArea)
end
function PlaceableFoliageAreas.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableFoliageAreas)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableFoliageAreas)
end
function PlaceableFoliageAreas:registerXMLPaths(v1)
  self:setXMLSpecializationType("FoliageAreas")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".foliageAreas.foliageArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".foliageAreas.foliageArea(?)#widthNode", "Width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".foliageAreas.foliageArea(?)#heightNode", "Height node")
  self:register(XMLValueType.STRING, v1 .. ".foliageAreas.foliageArea(?)#fruitType", "Fruit type name")
  self:register(XMLValueType.STRING, v1 .. ".foliageAreas.foliageArea(?)#decoFoliage", "Deco foliage name")
  self:register(XMLValueType.INT, v1 .. ".foliageAreas.foliageArea(?)#state", "Fruit type state")
  self:setXMLSpecializationType()
end
function PlaceableFoliageAreas:onLoad(savegame)
  self.spec_foliageAreas.areas = {}
  v3:iterate("placeable.foliageAreas.foliageArea", function(self, savegame)
    local v3 = v3:loadFoliageArea(u0.xmlFile, savegame, {})
    if v3 then
      table.insert(u1.areas, {})
    end
  end)
end
function PlaceableFoliageAreas:loadFoliageArea(xmlFile, key, area)
  local fruitTypeName = xmlFile:getValue(key .. "#fruitType")
  local v5 = xmlFile:getValue(key .. "#decoFoliage")
  if fruitTypeName ~= nil and v5 ~= nil then
    Logging.xmlInfo(xmlFile, "Foliage area fruit type and decoFoliage defined defined for '%s'. Ignoring decoFoliage", fruitTypeName, key)
  end
  if fruitTypeName ~= nil then
    local v8 = v8:getFruitTypeByName(fruitTypeName)
    if v8 == nil then
      Logging.xmlWarning(xmlFile, "Foliage area fruit type '%s' not defined for '%s'", fruitTypeName, key)
      return false
    end
    v8 = xmlFile:getValue(key .. "#state", v6.maxHarvestingGrowthState - 1)
  end
  if v5 ~= nil then
    v8 = v8:getIsDecoLayerDefined(v5)
    if not v8 then
      Logging.xmlInfo(xmlFile, "Foliage area decoFoliage '%s' not defined on current map for '%s'", v5, key)
      return false
    end
  end
  v8 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v8 == nil then
    Logging.xmlWarning(xmlFile, "Foliage area start node not defined for '%s'", key)
    return false
  end
  local v9 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v9 == nil then
    Logging.xmlWarning(xmlFile, "Foliage area width node not defined for '%s'", key)
    return false
  end
  local v10 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v10 == nil then
    Logging.xmlWarning(xmlFile, "Foliage area height node not defined for '%s'", key)
    return false
  end
  area.start = v8
  area.width = v9
  area.height = v10
  area.fruitState = v7
  area.fruitType = v6
  area.decoFoliage = v5
  return true
end
function PlaceableFoliageAreas:onPostFinalizePlacement()
  if self.isServer then
    for v5, v6 in pairs(self.spec_foliageAreas.areas) do
      local v7, v8, v9 = getWorldTranslation(v6.start)
      local v10, v11, v12 = getWorldTranslation(v6.width)
      local v13, v14, v15 = getWorldTranslation(v6.height)
      if v6.fruitType ~= nil then
        FieldUtil.setFruit(v7, v9, v10, v12, v13, v15, v6.fruitType.index, v6.fruitState)
      else
        v16:applyDecoFoliage(v6.decoFoliage, v7, v9, v10, v12, v13, v15)
      end
    end
  end
end
