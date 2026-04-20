-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceablePlacement = {}
function PlaceablePlacement.prerequisitesPresent(v0)
  return true
end
function PlaceablePlacement.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "loadTestArea", PlaceablePlacement.loadTestArea)
  SpecializationUtil.registerFunction(placeableType, "startPlacementCheck", PlaceablePlacement.startPlacementCheck)
  SpecializationUtil.registerFunction(placeableType, "getPlacementRotation", PlaceablePlacement.getPlacementRotation)
  SpecializationUtil.registerFunction(placeableType, "getPlacementPosition", PlaceablePlacement.getPlacementPosition)
  SpecializationUtil.registerFunction(placeableType, "getPositionSnapSize", PlaceablePlacement.getPositionSnapSize)
  SpecializationUtil.registerFunction(placeableType, "getPositionSnapOffset", PlaceablePlacement.getPositionSnapOffset)
  SpecializationUtil.registerFunction(placeableType, "getRotationSnapAngle", PlaceablePlacement.getRotationSnapAngle)
  SpecializationUtil.registerFunction(placeableType, "getHasOverlap", PlaceablePlacement.getHasOverlap)
  SpecializationUtil.registerFunction(placeableType, "getHasOverlapWithPlaces", PlaceablePlacement.getHasOverlapWithPlaces)
  SpecializationUtil.registerFunction(placeableType, "getHasOverlapWithZones", PlaceablePlacement.getHasOverlapWithZones)
  SpecializationUtil.registerFunction(placeableType, "getTestParallelogramAtWorldPosition", PlaceablePlacement.getTestParallelogramAtWorldPosition)
  SpecializationUtil.registerFunction(placeableType, "playPlaceSound", PlaceablePlacement.playPlaceSound)
  SpecializationUtil.registerFunction(placeableType, "playDestroySound", PlaceablePlacement.playDestroySound)
end
function PlaceablePlacement.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceablePlacement)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceablePlacement)
  SpecializationUtil.registerEventListener(placeableType, "onPreFinalizePlacement", PlaceablePlacement)
end
function PlaceablePlacement:registerXMLPaths(v1)
  self:setXMLSpecializationType("Placement")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".placement#pos1Node", "Position node 1 (Required if alignToWorldY is false to calculate the terrain alignment)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".placement#pos2Node", "Position node 2 (Required if alignToWorldY is false to calculate the terrain alignment)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".placement#pos3Node", "Position node 3 (Required if alignToWorldY is false to calculate the terrain alignment)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".placement.testAreas.testArea(?)#startNode", "Start node of box for testing overlap")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".placement.testAreas.testArea(?)#endNode", "End node of box for testing overlap")
  self:register(XMLValueType.BOOL, v1 .. ".placement#useRandomYRotation", "Use random Y rotation", false)
  self:register(XMLValueType.BOOL, v1 .. ".placement#useManualYRotation", "Use manual Y rotation", false)
  self:register(XMLValueType.BOOL, v1 .. ".placement#alignToWorldY", "Placeable is aligned to world Y instead of terrain", true)
  self:register(XMLValueType.FLOAT, v1 .. ".placement#placementPositionSnapSize", "Position snap size", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".placement#placementPositionSnapOffset", "Position snap offset", 0)
  self:register(XMLValueType.ANGLE, v1 .. ".placement#placementRotationSnapAngle", "Rotation snap angle", 0)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".placement.sounds", "place")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".placement.sounds", "placeLayered")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".placement.sounds", "destroy")
  self:setXMLSpecializationType()
end
function PlaceablePlacement:onLoad(savegame)
  self.spec_placement.testAreas = {}
  self.xmlFile:iterate("placeable.placement.testAreas.testArea", function(self, savegame)
    local v3 = v3:loadTestArea(u1, savegame, {})
    if v3 then
      table.insert(u2.testAreas, {})
    end
  end)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#sizeX")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#sizeZ")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#sizeOffsetX")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#sizeOffsetZ")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#testSizeX", "placeable.placement.testAreas.testArea")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#testSizeZ", "placeable.placement.testAreas.testArea")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#testSizeOffsetX", "placeable.placement.testAreas.testArea")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "placeable.placement#testSizeOffsetZ", "placeable.placement.testAreas.testArea")
  local v4 = self.xmlFile:getFloat("placeable.placement#testSizeX")
  local v5 = self.xmlFile:getFloat("placeable.placement#testSizeZ")
  if v4 ~= nil and v5 ~= nil then
    local v6 = self.xmlFile:getFloat("placeable.placement#testSizeOffsetX", 0)
    local v7 = self.xmlFile:getFloat("placeable.placement#testSizeOffsetZ", 0)
    local v8 = createTransformGroup("legacyTestAreaStartNode")
    local v9 = createTransformGroup("legacyTestAreaEndNode")
    link(self.rootNode, v8)
    link(v8, v9)
    setTranslation(v8, -v4 * 0.5 + v6, 0, -v5 * 0.5 + v7)
    setTranslation(v9, v4, 2, v5)
    local v12 = math.abs(v4)
    {startNode = v8, endNode = v9, size = {}}.size.x = v12
    {startNode = v8, endNode = v9, size = {}}.size.y = 2
    v12 = math.abs(v5)
    {startNode = v8, endNode = v9, size = {}}.size.z = v12
    {startNode = v8, endNode = v9, size = {}, center = {}}.center.x = v6
    {startNode = v8, endNode = v9, size = {}, center = {}}.center.y = {startNode = v8, endNode = v9, size = {}, center = {}}.size.y * 0.5
    {startNode = v8, endNode = v9, size = {}, center = {}}.center.z = v7
    local v11 = DebugCube.new()
    v11 = DebugGizmo.new()
    v11 = DebugGizmo.new()
    v11 = Debug2DArea.new(true, false, {1, 0, 0, 0.3})
    table.insert(self.spec_placement.testAreas, {startNode = v8, endNode = v9, size = {}, center = {}, debugTestBox = v11, debugStartNode = v11, debugEndNode = v11, debugArea = v11, rotYOffset = 0})
  end
  v6 = v3:getValue("placeable.placement#useRandomYRotation", v2.useRandomYRotation)
  v2.useRandomYRotation = v6
  v6 = v3:getValue("placeable.placement#useManualYRotation", v2.useManualYRotation)
  v2.useManualYRotation = v6
  v7 = v3:getValue("placeable.placement#placementPositionSnapSize", 0)
  v6 = math.abs(...)
  v2.positionSnapSize = v6
  v7 = v3:getValue("placeable.placement#placementPositionSnapOffset", 0)
  v6 = math.abs(...)
  v2.positionSnapOffset = v6
  v7 = v3:getValue("placeable.placement#placementRotationSnapAngle", 0)
  v6 = math.abs(...)
  v2.rotationSnapAngle = v6
  v6 = v3:getValue("placeable.placement#alignToWorldY", true)
  v2.alignToWorldY = v6
  if not v2.alignToWorldY then
    v6 = v3:getValue("placeable.placement#pos1Node", nil, self.components, self.i3dMappings)
    v2.pos1Node = v6
    v6 = v3:getValue("placeable.placement#pos2Node", nil, self.components, self.i3dMappings)
    v2.pos2Node = v6
    v6 = v3:getValue("placeable.placement#pos3Node", nil, self.components, self.i3dMappings)
    v2.pos3Node = v6
    if v2.pos1Node ~= nil and v2.pos2Node ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L334
    end
    v2.alignToWorldY = true
    Logging.xmlWarning(v3, "pos1Node, pos2Node and pos3Node has to be set when alignToWorldY is false!")
  end
  if self.isClient and Platform.hasContruction then
    v2.samples = {}
    v7 = v7:loadSample2DFromXML(v3.handle, "placeable.placement.sounds", "place", self.baseDirectory, 1, AudioGroup.GUI)
    v2.samples.place = v7
    v7 = v7:loadSample2DFromXML(v3.handle, "placeable.placement.sounds", "placeLayered", self.baseDirectory, 1, AudioGroup.GUI)
    v2.samples.placeLayered = v7
    v7 = v7:loadSample2DFromXML(v3.handle, "placeable.placement.sounds", "destroy", self.baseDirectory, 1, AudioGroup.GUI)
    v2.samples.destroy = v7
  end
end
function PlaceablePlacement:onDelete()
  if self.isClient and self.spec_placement.samples ~= nil then
    v2:deleteSample(self.spec_placement.samples.place)
    v2:deleteSample(self.spec_placement.samples.placeLayered)
    v2:deleteSample(self.spec_placement.samples.destroy)
  end
end
function PlaceablePlacement:loadTestArea(xmlFile, key, area)
  local v4 = xmlFile:getValue(key .. "#startNode", nil, self.components, self.i3dMappings)
  local v5 = xmlFile:getValue(key .. "#endNode", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Missing test area start node for '%s'", key)
    return false
  end
  if v5 == nil then
    Logging.xmlWarning(xmlFile, "Missing test area end node for '%s'", key)
    return false
  end
  local v6 = getParent(v5)
  if v6 ~= v4 then
    Logging.xmlWarning(xmlFile, "Test area end node is not a direct child of startNode for '%s'", key)
    return false
  end
  area.startNode = v4
  area.endNode = v5
  local v6, v7, v8 = localToLocal(v5, v4, 0, -0.05, 0)
  local v9, v10, v11 = localToLocal(v4, self.rootNode, v6 * 0.5, v7 * 0.5, v8 * 0.5)
  local v15 = math.abs(v6)
  v15 = math.abs(v7 + 0.05)
  local v14 = math.abs(v8)
  if v7 < 0.01 then
    Logging.xmlDevWarning(xmlFile, "TestArea '%s 'has no height (endNode has same y as startNode)", key)
  end
  area.size = {}
  local v16 = math.abs(v12)
  area.size.x = v16
  v16 = math.abs(v13)
  area.size.y = v16
  v16 = math.abs(v14)
  area.size.z = v16
  area.center = {x = v9, y = v10, z = v11}
  local v15, v16, v17 = localDirectionToLocal(v4, self.rootNode, 0, 0, 1)
  local v18 = MathUtil.getYRotationFromDirection(v15, v17)
  area.rotYOffset = v18
  local v19 = DebugCube.new()
  area.debugTestBox = v19
  v19 = DebugGizmo.new()
  area.debugStartNode = v19
  v19 = DebugGizmo.new()
  area.debugEndNode = v19
  v19 = Debug2DArea.new(true, false, {1, 0, 0, 0.3})
  area.debugArea = v19
  return true
end
function PlaceablePlacement:getPlacementRotation(x, y, z)
  if self.spec_placement.rotationSnapAngle ~= 0 then
    local v6 = math.deg(y)
    local v7 = math.deg(self.spec_placement.rotationSnapAngle)
    local v5 = MathUtil.snapValue(...)
    v6 = math.rad(v5)
  end
  return x, y, z
end
function PlaceablePlacement:getPlacementPosition(x, y, z)
  if self.spec_placement.positionSnapSize ~= 0 then
    local v7 = math.floor(x * 1 / self.spec_placement.positionSnapSize)
    v7 = math.floor(z * 1 / self.spec_placement.positionSnapSize)
  end
  return x, y, z
end
function PlaceablePlacement:getPositionSnapSize()
  return self.spec_placement.positionSnapSize
end
function PlaceablePlacement:getPositionSnapOffset()
  return self.spec_placement.positionSnapOffset
end
function PlaceablePlacement:getRotationSnapAngle()
  return self.spec_placement.rotationSnapAngle
end
function PlaceablePlacement:onPreFinalizePlacement()
  if not self.spec_placement.alignToWorldY and self.isServer then
    local v2, v3, v4 = getWorldTranslation(self.rootNode)
    local v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2, v3, v4)
    setTranslation(self.rootNode, v2, v5, v4)
    local v5, v6, v7 = getWorldTranslation(self.spec_placement.pos1Node)
    local v8 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v5, v6, v7)
    local v8, v9, v10 = getWorldTranslation(self.spec_placement.pos2Node)
    local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, v9, v10)
    local v11, v12, v13 = getWorldTranslation(self.spec_placement.pos3Node)
    local v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v11, v12, v13)
    local v20, v21, v22 = MathUtil.crossProduct(v8 - v11, v11 - v14, v10 - v13, v5 - v2, v8 - v5, v7 - v4)
    setDirection(self.rootNode, v5 - v2, v8 - v5, v7 - v4, v20, v21, v22)
  end
end
function PlaceablePlacement:getIsAreaOwned(farmId)
  local v7, v8, v9 = localToWorld(self.rootNode, -(self.spec_placement.testSizeX * 0.5) + self.spec_placement.testSizeOffsetX, 0, -(self.spec_placement.testSizeZ * 0.5) + self.spec_placement.testSizeOffsetZ)
  local v10, v11, v12 = localToWorld(self.rootNode, self.spec_placement.testSizeX * 0.5 + self.spec_placement.testSizeOffsetX, 0, -(self.spec_placement.testSizeZ * 0.5) + self.spec_placement.testSizeOffsetZ)
  local v13, v14, v15 = localToWorld(self.rootNode, -(self.spec_placement.testSizeX * 0.5) + self.spec_placement.testSizeOffsetX, 0, self.spec_placement.testSizeZ * 0.5 + self.spec_placement.testSizeOffsetZ)
  local v16, v17, v18 = localToWorld(self.rootNode, self.spec_placement.testSizeX * 0.5 + self.spec_placement.testSizeOffsetX, 0, self.spec_placement.testSizeZ * 0.5 + self.spec_placement.testSizeOffsetZ)
  local v19 = v19:getIsOwnedByFarmAtWorldPosition(farmId, v7, v9)
  if v19 then
    v19 = v19:getIsOwnedByFarmAtWorldPosition(farmId, v10, v12)
    if v19 then
      v19 = v19:getIsOwnedByFarmAtWorldPosition(farmId, v13, v15)
      if v19 then
        v19 = v19:getIsOwnedByFarmAtWorldPosition(farmId, v16, v18)
      end
    end
  end
  return v19
end
function PlaceablePlacement.startPlacementCheck(v0, v1, v2, v3, v4)
end
function PlaceablePlacement:getHasOverlap(x, y, z, rotY, checkFunc)
  for v11, v12 in ipairs(self.spec_placement.testAreas) do
    local v15, v16 = MathUtil.getDirectionFromYRotation(rotY)
    local v17, v18, v19 = MathUtil.crossProduct(0, 1, 0, v15, 0, v16)
    local v33 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v15 * v12.center.z + v17 * v12.center.x + v15 * v12.size.z * 0.5 - v17 * v12.size.x * 0.5, 0, z + v16 * v12.center.z + v19 * v12.center.x + v16 * v12.size.z * 0.5 - v19 * v12.size.x * 0.5)
    local v34 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v15 * v12.center.z + v17 * v12.center.x + v15 * v12.size.z * 0.5 + v17 * v12.size.x * 0.5, 0, z + v16 * v12.center.z + v19 * v12.center.x + v16 * v12.size.z * 0.5 + v19 * v12.size.x * 0.5)
    local v35 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v15 * v12.center.z + v17 * v12.center.x - v15 * v12.size.z * 0.5 - v17 * v12.size.x * 0.5, 0, z + v16 * v12.center.z + v19 * v12.center.x - v16 * v12.size.z * 0.5 - v19 * v12.size.x * 0.5)
    local v36 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v15 * v12.center.z + v17 * v12.center.x - v15 * v12.size.z * 0.5 + v17 * v12.size.x * 0.5, 0, z + v16 * v12.center.z + v19 * v12.center.x - v16 * v12.size.z * 0.5 + v19 * v12.size.x * 0.5)
    local v37 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v15 * v12.center.z + v17 * v12.center.x, 0, z + v16 * v12.center.z + v19 * v12.center.x)
    local v40 = math.min(v33, v34, v35, v36, v37)
    local v39 = math.max(v40 + v12.size.y * 0.5 - 0.5, y + v12.center.y)
    overlapBox(x + v15 * v12.center.z + v17 * v12.center.x, v39, z + v16 * v12.center.z + v19 * v12.center.x, 0, rotY + v12.rotYOffset, 0, v12.size.x * 0.5, v12.size.y * 0.5, v12.size.z * 0.5, "overlapCallback", v7, nil, true, true, true, false)
    if v7.hasOverlap then
      return true, v7.node
    end
    local v39, v40, v41, v42, v43, v44 = self:getTestParallelogramAtWorldPosition(v12, x, z, rotY)
    local v45 = DensityMapHeightUtil.getValueAtArea(v39, v40, v41, v42, v43, v44, true)
    if not (0 < v45) then
      continue
    end
    return true, nil
  end
  return false, nil
end
function PlaceablePlacement:getHasOverlapWithPlaces(places, x, y, z, rotY)
  for v10, v11 in ipairs(self.spec_placement.testAreas) do
    local v12, v13, v14, v15, v16, v17, v18, v19 = self:getTestParallelogramAtWorldPosition(v11, x, z, rotY)
    local v20 = PlacementUtil.isInsidePlacementPlaces(places, v12, y, v13)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsidePlacementPlaces(places, v14, y, v15)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsidePlacementPlaces(places, v16, y, v17)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsidePlacementPlaces(places, v18, y, v19)
    if not v20 then
      continue
    end
    return true
  end
  return false
end
function PlaceablePlacement:getHasOverlapWithZones(zones, x, y, z, rotY)
  for v10, v11 in ipairs(self.spec_placement.testAreas) do
    local v12, v13, v14, v15, v16, v17, v18, v19 = self:getTestParallelogramAtWorldPosition(v11, x, z, rotY)
    local v20 = PlacementUtil.isInsideRestrictedZone(zones, v12, y, v13, false)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsideRestrictedZone(zones, v14, y, v15, false)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsideRestrictedZone(zones, v16, y, v17, false)
    if v20 then
      return true
    end
    v20 = PlacementUtil.isInsideRestrictedZone(zones, v18, y, v19, false)
    if not v20 then
      continue
    end
    return true
  end
  return false
end
function PlaceablePlacement.getTestParallelogramAtWorldPosition(v0, v1, v2, v3, v4)
  local v5, v6 = MathUtil.getDirectionFromYRotation(v4)
  local v7, v8, v9 = MathUtil.crossProduct(0, 1, 0, v5, 0, v6)
  local v14, v15 = MathUtil.getDirectionFromYRotation(v4 + v1.rotYOffset)
  local v14, v15, v16 = MathUtil.crossProduct(0, 1, 0, v14, 0, v15)
  return v2 + v5 * v1.center.z + v7 * v1.center.x - v14 * v1.size.z * 0.5 - v14 * v1.size.x * 0.5, v3 + v6 * v1.center.z + v9 * v1.center.x - v15 * v1.size.z * 0.5 - v16 * v1.size.x * 0.5, v2 + v5 * v1.center.z + v7 * v1.center.x - v14 * v1.size.z * 0.5 - v14 * v1.size.x * 0.5 + v14 * v1.size.x, v3 + v6 * v1.center.z + v9 * v1.center.x - v15 * v1.size.z * 0.5 - v16 * v1.size.x * 0.5 + v16 * v1.size.x, v2 + v5 * v1.center.z + v7 * v1.center.x - v14 * v1.size.z * 0.5 - v14 * v1.size.x * 0.5 + v14 * v1.size.z, v3 + v6 * v1.center.z + v9 * v1.center.x - v15 * v1.size.z * 0.5 - v16 * v1.size.x * 0.5 + v15 * v1.size.z, v2 + v5 * v1.center.z + v7 * v1.center.x - v14 * v1.size.z * 0.5 - v14 * v1.size.x * 0.5 + v14 * v1.size.x + v14 * v1.size.z, v3 + v6 * v1.center.z + v9 * v1.center.x - v15 * v1.size.z * 0.5 - v16 * v1.size.x * 0.5 + v16 * v1.size.x + v15 * v1.size.z
end
function PlaceablePlacement:playPlaceSound()
  if self.isClient then
    v2:playSample(self.spec_placement.samples.place)
    v2:playSample(self.spec_placement.samples.placeLayered)
  end
end
function PlaceablePlacement:playDestroySound(onlyIfNotPlaying)
  if self.isClient then
    if onlyIfNotPlaying then
      local v3 = v3:getIsSamplePlaying(self.spec_placement.samples.destroy)
      -- if v3 then goto L25 end
    end
    v3:playSample(v2.samples.destroy)
  end
end
