-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableLeveling = {}
function PlaceableLeveling.prerequisitesPresent(v0)
  return true
end
function PlaceableLeveling.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadLevelArea", PlaceableLeveling.loadLevelArea)
  SpecializationUtil.registerFunction(placeableType, "loadPaintArea", PlaceableLeveling.loadPaintArea)
  SpecializationUtil.registerFunction(placeableType, "addDeformationArea", PlaceableLeveling.addDeformationArea)
  SpecializationUtil.registerFunction(placeableType, "applyDeformation", PlaceableLeveling.applyDeformation)
  SpecializationUtil.registerFunction(placeableType, "getDeformationObjects", PlaceableLeveling.getDeformationObjects)
  SpecializationUtil.registerFunction(placeableType, "getRequiresLeveling", PlaceableLeveling.getRequiresLeveling)
end
function PlaceableLeveling.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableLeveling)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableLeveling)
  SpecializationUtil.registerEventListener(placeableType, "onPreFinalizePlacement", PlaceableLeveling)
end
function PlaceableLeveling:registerXMLPaths(v1)
  self:setXMLSpecializationType("Leveling")
  self:register(XMLValueType.BOOL, v1 .. ".leveling#requireLeveling", "If true, the ground around the placeable is leveled and all other leveling properties are used", false)
  self:register(XMLValueType.FLOAT, v1 .. ".leveling#maxSmoothDistance", "Radius around leveling areas where terrain will be smoothed towards the placeable", 3)
  self:register(XMLValueType.ANGLE, v1 .. ".leveling#maxSlope", "Maximum slope of terrain created by outside smoothing expressed as an angle in degrees", 45)
  self:register(XMLValueType.ANGLE, v1 .. ".leveling#maxEdgeAngle", "Maximum angle between polygons in smoothed areas expressed as an angle in degrees", 45)
  self:register(XMLValueType.STRING, v1 .. ".leveling#smoothingGroundType", "Ground type used to paint the smoothed ground from leveling areas up to the radius of 'maxSmoothDistance'  (one of the ground types defined in groundTypes.xml)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.levelAreas.levelArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.levelAreas.levelArea(?)#widthNode", "Width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.levelAreas.levelArea(?)#heightNode", "Height node")
  self:register(XMLValueType.STRING, v1 .. ".leveling.levelAreas.levelArea(?)#groundType", "Ground type name (one of the ground types defined in groundTypes.xml)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.paintAreas.paintArea(?)#startNode", "Start node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.paintAreas.paintArea(?)#widthNode", "Width node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".leveling.paintAreas.paintArea(?)#heightNode", "Height node")
  self:register(XMLValueType.STRING, v1 .. ".leveling.paintAreas.paintArea(?)#groundType", "Ground type name (one of the ground types defined in groundTypes.xml)")
  self:setXMLSpecializationType()
end
function PlaceableLeveling:onLoad(savegame)
  self.spec_leveling.writtenBlockedAreas = false
  local v4 = self.xmlFile:getValue("placeable.leveling#requireLeveling", false)
  self.spec_leveling.requiresLeveling = v4
  v4 = self.xmlFile:getValue("placeable.leveling#maxSmoothDistance", 3)
  self.spec_leveling.maxSmoothDistance = v4
  v4 = self.xmlFile:getValue("placeable.leveling#maxSlope", 45)
  self.spec_leveling.maxSlope = v4
  v4 = self.xmlFile:getValue("placeable.leveling#maxEdgeAngle", 45)
  self.spec_leveling.maxEdgeAngle = v4
  v4 = self.xmlFile:getValue("placeable.leveling#smoothingGroundType")
  self.spec_leveling.smoothingGroundType = v4
  v4 = v4:hasProperty("placeable.leveling")
  if not v4 then
    Logging.xmlWarning(self.xmlFile, "Missing leveling areas")
  end
  v2.levelAreas = {}
  v3:iterate("placeable.leveling.levelAreas.levelArea", function(self, savegame)
    local v3 = v3:loadLevelArea(u1, savegame, {})
    if v3 then
      table.insert(u2.levelAreas, {})
    end
  end)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.leveling.rampAreas.rampArea", "placeable.leveling.levelAreas.levelArea")
  v2.paintAreas = {}
  v3:iterate("placeable.leveling.paintAreas.paintArea", function(self, savegame)
    local v3 = v3:loadPaintArea(u1, savegame, {})
    if v3 then
      table.insert(u2.paintAreas, {})
    end
  end)
end
function PlaceableLeveling:onDelete()
  if self.spec_leveling.writtenBlockedAreas then
    local deformationObjects = self:getDeformationObjects(g_currentMission.terrainRootNode, true, false)
    for v6, v7 in ipairs(deformationObjects) do
      v7:unblockAreas()
      v7:delete()
    end
  end
end
function PlaceableLeveling:onPreFinalizePlacement()
  local deformationObjects = self:getDeformationObjects(g_currentMission.terrainRootNode, true, false)
  for v6, v7 in ipairs(deformationObjects) do
    v7:blockAreas()
    v7:delete()
  end
  v1.writtenBlockedAreas = true
end
function PlaceableLeveling:loadLevelArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Leveling area start node not defined for '%s'", key)
    return false
  end
  local v5 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Leveling area width node not defined for '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Leveling area height node not defined for '%s'", key)
    return false
  end
  area.start = v4
  area.width = v5
  area.height = v6
  local v7 = xmlFile:getValue(key .. "#groundType")
  area.groundType = v7
  return true
end
function PlaceableLeveling:loadPaintArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Paint area start node not defined for '%s'", key)
    return false
  end
  local v5 = xmlFile:getValue(key .. "#widthNode", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Paint area width node not defined for '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#heightNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlWarning(xmlFile, "Paint area height node not defined for '%s'", key)
    return false
  end
  area.start = v4
  area.width = v5
  area.height = v6
  local v7 = xmlFile:getValue(key .. "#groundType")
  area.groundType = v7
  return true
end
function PlaceableLeveling:getDeformationObjects(terrainRootNode, forBlockingOnly, isBlocking)
  if not forBlockingOnly then
  end
  if terrainRootNode ~= nil and terrainRootNode ~= 0 and 0 < #v4.levelAreas then
    local v6 = TerrainDeformation.new(terrainRootNode)
    if g_densityMapHeightManager.placementCollisionMap ~= nil then
      v6:setBlockedAreaMap(g_densityMapHeightManager.placementCollisionMap, 0)
    end
    for v10, v11 in pairs(v4.levelAreas) do
      if v11.groundType ~= nil then
        local v13 = v13:getTerrainLayerByType(v11.groundType)
      end
      self:addDeformationArea(v6, v11, v12, true)
    end
    if v4.smoothingGroundType ~= nil then
      v9 = v9:getTerrainLayerByType(v4.smoothingGroundType)
      v6:setOutsideAreaBrush(...)
    end
    v6:setOutsideAreaConstraints(v4.maxSmoothDistance, v4.maxSlope, v4.maxEdgeAngle)
    v6:setBlockedAreaMaxDisplacement(0.1)
    v6:setDynamicObjectCollisionMask(CollisionMask.LEVELING)
    v6:setDynamicObjectMaxDisplacement(0.3)
    table.insert(v5, v6)
  end
  if not forBlockingOnly and 0 < #v4.paintAreas then
    v6 = TerrainDeformation.new(terrainRootNode)
    for v10, v11 in pairs(v4.paintAreas) do
      if v11.groundType ~= nil then
        v13 = v13:getTerrainLayerByType(v11.groundType)
      end
      self:addDeformationArea(v6, v11, v12, true)
    end
    v6:enablePaintingMode()
    table.insert(v5, v6)
  end
  return v5
end
function PlaceableLeveling.addDeformationArea(v0, v1, v2, v3, v4)
  local v5, v6, v7 = getWorldTranslation(v2.start)
  local v8, v9, v10 = getWorldTranslation(v2.width)
  local v11, v12, v13 = getWorldTranslation(v2.height)
  v1:addArea(v5, v6, v7, v8 - v5, v9 - v6, v10 - v7, v11 - v5, v12 - v6, v13 - v7, v3, v4)
end
function PlaceableLeveling:getRequiresLeveling()
  return self.spec_leveling.requiresLeveling
end
function PlaceableLeveling:applyDeformation(isPreview, callback)
  local v3 = self:getDeformationObjects(g_currentMission.terrainRootNode)
  if #v3 == 0 then
    callback(TerrainDeformation.STATE_SUCCESS, 0, nil)
    return
  end
  v5:queueJob(v3[1], isPreview, "callback", {index = 1, volume = 0, deformationObjects = v3, finishCallback = callback, callback = function(self, isPreview, callback, v3)
    if isPreview ~= TerrainDeformation.STATE_SUCCESS then
      for v8, v9 in ipairs(self.deformationObjects) do
        table.insert(v4, v9)
      end
      v5:addTask(function()
        for v3, v4 in ipairs(u0) do
          v4:delete()
        end
      end)
      self.finishCallback(isPreview, self.volume, v3)
      return
    end
    self.volume = self.volume + callback
    self.index = self.index + 1
    if self.deformationObjects[self.index] ~= nil then
      v5:queueJob(self.deformationObjects[self.index], u0, "callback", self)
      return
    end
    for v9, v10 in ipairs(self.deformationObjects) do
      table.insert(v5, v10)
    end
    v6:addTask(function()
      for v3, v4 in ipairs(u0) do
        v4:delete()
      end
    end)
    self.finishCallback(TerrainDeformation.STATE_SUCCESS, self.volume, nil)
  end})
end
