-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHotspots = {}
function PlaceableHotspots.prerequisitesPresent(v0)
  return true
end
function PlaceableHotspots.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getHotspot", PlaceableHotspots.getHotspot)
end
function PlaceableHotspots.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHotspots)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHotspots)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableHotspots)
  SpecializationUtil.registerEventListener(placeableType, "onOwnerChanged", PlaceableHotspots)
end
function PlaceableHotspots:registerXMLPaths(v1)
  self:setXMLSpecializationType("Hotspots")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".hotspots.hotspot(?)#linkNode", "Node where hotspot is linked to")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".hotspots.hotspot(?)#teleportNode", "Node where player is teleported to. Teleporting is only available if this is set")
  self:register(XMLValueType.STRING, v1 .. ".hotspots.hotspot(?)#type", "Placeable hotspot type")
  self:register(XMLValueType.VECTOR_2, v1 .. ".hotspots.hotspot(?)#worldPosition", "Placeable world position")
  self:register(XMLValueType.VECTOR_3, v1 .. ".hotspots.hotspot(?)#teleportWorldPosition", "Placeable teleport world position")
  self:register(XMLValueType.STRING, v1 .. ".hotspots.hotspot(?)#text", "Placeable hotspot text")
  self:setXMLSpecializationType()
end
function PlaceableHotspots:onLoad(savegame)
  self.spec_hotspots.mapHotspots = {}
  v3:iterate("placeable.hotspots.hotspot", function(self, savegame)
    local v2 = PlaceableHotspot.new()
    v2:setPlaceable(u0)
    local v3 = v3:getValue(savegame .. "#type", "UNLOADING")
    local v4 = PlaceableHotspot.getTypeByName(v3)
    if v4 == nil then
      local v9 = table.concatKeys(PlaceableHotspot.TYPE, " ")
      Logging.xmlWarning(...)
    end
    v2:setPlaceableType(v4)
    local v5 = v5:getValue(savegame .. "#linkNode", nil, u0.components, u0.i3dMappings)
    if not v5 then
    end
    if v5 ~= nil then
      local v6, v7, v8 = getWorldTranslation(v5)
      v2:setWorldPosition(v6, v8)
    end
    v6 = v6:getValue(savegame .. "#teleportNode", nil, u0.components, u0.i3dMappings)
    if v6 ~= nil then
      v7, v8, v9 = getWorldTranslation(v6)
      v2:setTeleportWorldPosition(v7, v8, v9)
    end
    v7, v8 = v7:getValue(savegame .. "#worldPosition", nil)
    if v7 ~= nil then
      v2:setWorldPosition(v7, v8)
    end
    local v9, v10, v11 = v9:getValue(savegame .. "#teleportWorldPosition", nil)
    if v9 ~= nil then
      if g_currentMission ~= nil then
        local v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v9, 0, v11)
        local v12 = math.max(...)
      end
      v2:setTeleportWorldPosition(v9, v10, v11)
    end
    v12 = v12:getValue(savegame .. "#text", nil)
    if v12 ~= nil then
      local v13 = v13:convertText(v12, u0.customEnvironment)
      v2:setName(v13)
    end
    table.insert(u1.mapHotspots, v2)
  end)
end
function PlaceableHotspots:onDelete()
  v2:unsubscribeAll(self)
  if self.spec_hotspots.mapHotspots ~= nil then
    for v5, v6 in ipairs(self.spec_hotspots.mapHotspots) do
      v7:removeMapHotspot(v6)
      v6:delete()
    end
  end
end
function PlaceableHotspots:onPostFinalizePlacement()
  for v5, v6 in ipairs(self.spec_hotspots.mapHotspots) do
    v6:setOwnerFarmId(self.ownerFarmId)
    if self.ownerFarmId == AccessHandler.NOBODY then
    end
    v6:setVisible(true)
    v7:addMapHotspot(v6)
  end
end
function PlaceableHotspots:onOwnerChanged()
  if self.spec_hotspots.mapHotspots ~= nil then
    for v5, v6 in ipairs(self.spec_hotspots.mapHotspots) do
      v6:setOwnerFarmId(self.ownerFarmId)
      if self.ownerFarmId == AccessHandler.NOBODY then
      end
      v6:setVisible(true)
    end
  end
end
function PlaceableHotspots:getHotspot(index)
  return self.spec_hotspots.mapHotspots[index or 1]
end
