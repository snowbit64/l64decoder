-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableTipOcclusionAreas = {}
function PlaceableTipOcclusionAreas.prerequisitesPresent(v0)
  return true
end
function PlaceableTipOcclusionAreas.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadTipOcclusionArea", PlaceableTipOcclusionAreas.loadTipOcclusionArea)
  SpecializationUtil.registerFunction(placeableType, "updateTipOcclusionAreas", PlaceableTipOcclusionAreas.updateTipOcclusionAreas)
end
function PlaceableTipOcclusionAreas.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableTipOcclusionAreas)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableTipOcclusionAreas)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableTipOcclusionAreas)
end
function PlaceableTipOcclusionAreas:registerXMLPaths(v1)
  self:setXMLSpecializationType("TipOcclusionAreas")
  self:register(XMLValueType.FLOAT, v1 .. ".tipOcclusionUpdateArea#sizeX", "Size X")
  self:register(XMLValueType.FLOAT, v1 .. ".tipOcclusionUpdateArea#sizeZ", "Size Z")
  self:register(XMLValueType.FLOAT, v1 .. ".tipOcclusionUpdateArea#centerX", "Center position X", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".tipOcclusionUpdateArea#centerZ", "Center position Z", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".tipOcclusionUpdateAreas.tipOcclusionUpdateArea(?)#startNode", "Start node of tipOcclusion update area")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".tipOcclusionUpdateAreas.tipOcclusionUpdateArea(?)#endNode", "End node of tipOcclusion update area")
  self:setXMLSpecializationType()
end
function PlaceableTipOcclusionAreas:onLoad(savegame)
  self.spec_tipOcclusionAreas.updateTipOcclusionAreasOnDelete = false
  self.spec_tipOcclusionAreas.areas = {}
  self.xmlFile:iterate("placeable.tipOcclusionUpdateAreas.tipOcclusionUpdateArea", function(self, savegame)
    local v3 = v3:loadTipOcclusionArea(u1, savegame, {})
    if v3 then
      table.insert(u2.areas, {})
    end
  end)
  local v4 = self.xmlFile:hasProperty("placeable.tipOcclusionUpdateArea")
  if v4 then
    v4 = self.xmlFile:getValue("placeable.tipOcclusionUpdateArea#sizeX")
    local v5 = self.xmlFile:getValue("placeable.tipOcclusionUpdateArea#sizeZ")
    if v4 ~= nil and v5 ~= nil then
      local v6 = self.xmlFile:getValue("placeable.tipOcclusionUpdateArea#centerX", 0)
      local v7 = self.xmlFile:getValue("placeable.tipOcclusionUpdateArea#centerZ", 0)
      {center = {}}.center.x = v6
      {center = {}}.center.z = v7
      {center = {}, size = {}}.size.x = v4
      {center = {}, size = {}}.size.z = v5
      table.insert(self.spec_tipOcclusionAreas.areas, {center = {}, size = {}})
    end
  end
end
function PlaceableTipOcclusionAreas:onDelete()
  if self.isServer and not self.isReloading and self.spec_tipOcclusionAreas.updateTipOcclusionAreasOnDelete then
    self:updateTipOcclusionAreas()
    self.spec_tipOcclusionAreas.updateTipOcclusionAreasOnDelete = false
  end
end
function PlaceableTipOcclusionAreas:loadTipOcclusionArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  local v5 = xmlFile:getValue(key .. "#endNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Missing tip occlusion update area start node for '%s'", key)
    return false
  end
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Missing tip occlusion update area end node for '%s'", key)
    return false
  end
  local v6, v7, v8 = localToLocal(v4, self.rootNode, 0, 0, 0)
  local v9, v10, v11 = localToLocal(v5, self.rootNode, 0, 0, 0)
  local v12 = math.abs(v9 - v6)
  local v13 = math.abs(v11 - v8)
  area.center = {x = (v9 + v6) * 0.5, z = (v11 + v8) * 0.5}
  area.size = {x = v12, z = v13}
  area.startNode = v4
  area.endNode = v5
  return true
end
function PlaceableTipOcclusionAreas:onFinalizePlacement()
  if self.isServer then
    if self.isLoadedFromSavegame and g_currentMission.missionInfo.isValid then
      local v2 = g_currentMission.missionInfo:getIsTipCollisionValid(g_currentMission)
      if v2 then
        v2 = g_currentMission.missionInfo:getIsPlacementCollisionValid(g_currentMission)
        -- if v2 then goto L26 end
      end
    end
    self:updateTipOcclusionAreas()
    self.spec_tipOcclusionAreas.updateTipOcclusionAreasOnDelete = true
  end
end
function PlaceableTipOcclusionAreas:updateTipOcclusionAreas()
  if self.isServer then
    for v5, v6 in pairs(self.spec_tipOcclusionAreas.areas) do
      local v11, v12, v13 = localToWorld(self.rootNode, v6.center.x + v6.size.x * 0.5, 0, v6.center.z + v6.size.z * 0.5)
      local v14, v15, v16 = localToWorld(self.rootNode, v6.center.x - v6.size.x * 0.5, 0, v6.center.z + v6.size.z * 0.5)
      local v17, v18, v19 = localToWorld(self.rootNode, v6.center.x + v6.size.x * 0.5, 0, v6.center.z - v6.size.z * 0.5)
      local v20, v21, v22 = localToWorld(self.rootNode, v6.center.x - v6.size.x * 0.5, 0, v6.center.z - v6.size.z * 0.5)
      local v23 = math.min(v11, v14, v17, v20)
      local v24 = math.max(v11, v14, v17, v20)
      local v25 = math.min(v13, v16, v19, v22)
      local v26 = math.max(v13, v16, v19, v22)
      v27:setCollisionMapAreaDirty(v23, v25, v24, v26, true)
    end
  end
end
