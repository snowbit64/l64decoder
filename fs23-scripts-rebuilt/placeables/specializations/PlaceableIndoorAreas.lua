-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableIndoorAreas = {}
function PlaceableIndoorAreas.prerequisitesPresent(v0)
  return true
end
function PlaceableIndoorAreas.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadIndoorArea", PlaceableIndoorAreas.loadIndoorArea)
end
function PlaceableIndoorAreas.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableIndoorAreas)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableIndoorAreas)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableIndoorAreas)
end
function PlaceableIndoorAreas:registerXMLPaths(v1)
  self:setXMLSpecializationType("IndoorAreas")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".indoorAreas.indoorArea(?)#startNode", "Start node of indoor mask area")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".indoorAreas.indoorArea(?)#widthNode", "Width node of indoor mask area")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".indoorAreas.indoorArea(?)#heightNode", "Height node of indoor mask area")
  self:setXMLSpecializationType()
end
function PlaceableIndoorAreas:onLoad(savegame)
  self.spec_indoorAreas.resetIndoorMaskOnDelete = false
  self.spec_indoorAreas.areas = {}
  v3:iterate("placeable.indoorAreas.indoorArea", function(self, savegame)
    local v3 = v3:loadIndoorArea(u0.xmlFile, savegame, {})
    if v3 then
      table.insert(u1.areas, {})
    end
  end)
  local v3 = v3:hasProperty("placeable.indoorAreas")
  if not v3 then
    Logging.xmlWarning(self.xmlFile, "Missing indoor areas")
  end
end
function PlaceableIndoorAreas:onDelete()
  if self.spec_indoorAreas.areas ~= nil and self.spec_indoorAreas.resetIndoorMaskOnDelete and not self.isReloading then
    for v5, v6 in ipairs(self.spec_indoorAreas.areas) do
      v7:setPlaceableAreaInSnowMask(v6, IndoorMask.OUTDOOR)
    end
  end
end
function PlaceableIndoorAreas:loadIndoorArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Indoor area start node not defined for '%s'", key)
    return false
  end
  local v5 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Indoor area width node not defined for '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Indoor area height node not defined for '%s'", key)
    return false
  end
  area.start = v4
  area.width = v5
  area.height = v6
  return true
end
function PlaceableIndoorAreas:onFinalizePlacement()
  for v5, v6 in pairs(self.spec_indoorAreas.areas) do
    v7:setPlaceableAreaInSnowMask(v6, IndoorMask.INDOOR)
  end
  v1.resetIndoorMaskOnDelete = true
end
