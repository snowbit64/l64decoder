-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableClearAreas = {}
function PlaceableClearAreas.prerequisitesPresent(v0)
  return true
end
function PlaceableClearAreas.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadClearArea", PlaceableClearAreas.loadClearArea)
end
function PlaceableClearAreas.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableClearAreas)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableClearAreas)
end
function PlaceableClearAreas:registerXMLPaths(v1)
  self:setXMLSpecializationType("ClearAreas")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearAreas.clearArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearAreas.clearArea(?)#widthNode", "Width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".clearAreas.clearArea(?)#heightNode", "Height node")
  self:setXMLSpecializationType()
end
function PlaceableClearAreas:onLoad(savegame)
  self.spec_clearAreas.areas = {}
  v3:iterate("placeable.clearAreas.clearArea", function(self, savegame)
    local v3 = v3:loadClearArea(u0.xmlFile, savegame, {})
    if v3 then
      table.insert(u1.areas, {})
    end
  end)
  local v3 = v3:hasProperty("placeable.clearAreas")
  if not v3 then
    Logging.xmlWarning(self.xmlFile, "Missing clear areas")
  end
end
function PlaceableClearAreas:loadClearArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Clear area start node not defined for '%s'", key)
    return false
  end
  local v5 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Clear area width node not defined for '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Clear area height node not defined for '%s'", key)
    return false
  end
  area.start = v4
  area.width = v5
  area.height = v6
  return true
end
function PlaceableClearAreas:onPostFinalizePlacement()
  if self.isServer and not self.isLoadedFromSavegame then
    for v5, v6 in pairs(self.spec_clearAreas.areas) do
      local v7, v8, v9 = getWorldTranslation(v6.start)
      local v10, v11, v12 = getWorldTranslation(v6.width)
      local v13, v14, v15 = getWorldTranslation(v6.height)
      FSDensityMapUtil.removeFieldArea(v7, v9, v10, v12, v13, v15, false)
      FSDensityMapUtil.removeWeedArea(v7, v9, v10, v12, v13, v15)
      FSDensityMapUtil.removeStoneArea(v7, v9, v10, v12, v13, v15)
      FSDensityMapUtil.eraseTireTrack(v7, v9, v10, v12, v13, v15)
      FSDensityMapUtil.clearDecoArea(v7, v9, v10, v12, v13, v15)
      DensityMapHeightUtil.clearArea(v7, v9, v10, v12, v13, v15)
    end
  end
end
