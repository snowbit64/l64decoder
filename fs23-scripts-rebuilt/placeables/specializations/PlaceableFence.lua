-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFence = {EPSILON = 0.00001}
source("dataS/scripts/placeables/specializations/events/PlaceableFenceAddGateEvent.lua")
source("dataS/scripts/placeables/specializations/events/PlaceableFenceAddSegmentEvent.lua")
source("dataS/scripts/placeables/specializations/events/PlaceableFenceRemoveSegmentEvent.lua")
function PlaceableFence.prerequisitesPresent(specializations)
  return true
end
function PlaceableFence.registerEvents(placeableType)
  SpecializationUtil.registerEvent(placeableType, "onCreateSegmentPanel")
end
function PlaceableFence.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "addSegment", PlaceableFence.addSegment)
  SpecializationUtil.registerFunction(placeableType, "addSegmentShapesToUpdate", PlaceableFence.addSegmentShapesToUpdate)
  SpecializationUtil.registerFunction(placeableType, "createSegment", PlaceableFence.createSegment)
  SpecializationUtil.registerFunction(placeableType, "deletePanel", PlaceableFence.deletePanel)
  SpecializationUtil.registerFunction(placeableType, "deleteSegment", PlaceableFence.deleteSegment)
  SpecializationUtil.registerFunction(placeableType, "doDeletePanel", PlaceableFence.doDeletePanel)
  SpecializationUtil.registerFunction(placeableType, "fakeRandomValueForPosition", PlaceableFence.fakeRandomValueForPosition)
  SpecializationUtil.registerFunction(placeableType, "findRaycastInfo", PlaceableFence.findRaycastInfo)
  SpecializationUtil.registerFunction(placeableType, "generateSegmentPoles", PlaceableFence.generateSegmentPoles)
  SpecializationUtil.registerFunction(placeableType, "getGate", PlaceableFence.getGate)
  SpecializationUtil.registerFunction(placeableType, "getMaxVerticalAngle", PlaceableFence.getMaxVerticalAngle)
  SpecializationUtil.registerFunction(placeableType, "getMaxVerticalAngleAndYForPreview", PlaceableFence.getMaxVerticalAngleAndYForPreview)
  SpecializationUtil.registerFunction(placeableType, "getMaxVerticalGateAngle", PlaceableFence.getMaxVerticalGateAngle)
  SpecializationUtil.registerFunction(placeableType, "getNodesToDeleteForPanel", PlaceableFence.getNodesToDeleteForPanel)
  SpecializationUtil.registerFunction(placeableType, "getNumSequments", PlaceableFence.getNumSequments)
  SpecializationUtil.registerFunction(placeableType, "getPanelLength", PlaceableFence.getPanelLength)
  SpecializationUtil.registerFunction(placeableType, "getIsPanelLengthFixed", PlaceableFence.getIsPanelLengthFixed)
  SpecializationUtil.registerFunction(placeableType, "getPoleNear", PlaceableFence.getPoleNear)
  SpecializationUtil.registerFunction(placeableType, "getPoleNearOverlapCallback", PlaceableFence.getPoleNearOverlapCallback)
  SpecializationUtil.registerFunction(placeableType, "getPolePosition", PlaceableFence.getPolePosition)
  SpecializationUtil.registerFunction(placeableType, "getPoleShapeForPreview", PlaceableFence.getPoleShapeForPreview)
  SpecializationUtil.registerFunction(placeableType, "getPreviewSegment", PlaceableFence.getPreviewSegment)
  SpecializationUtil.registerFunction(placeableType, "getSegment", PlaceableFence.getSegment)
  SpecializationUtil.registerFunction(placeableType, "getSegmentLength", PlaceableFence.getSegmentLength)
  SpecializationUtil.registerFunction(placeableType, "getTotalNumberOfPoles", PlaceableFence.getTotalNumberOfPoles)
  SpecializationUtil.registerFunction(placeableType, "isPoleInAnySegment", PlaceableFence.isPoleInAnySegment)
  SpecializationUtil.registerFunction(placeableType, "recursivelyAddPickingNodes", PlaceableFence.recursivelyAddPickingNodes)
  SpecializationUtil.registerFunction(placeableType, "addPickingNodesForSegment", PlaceableFence.addPickingNodesForSegment)
  SpecializationUtil.registerFunction(placeableType, "removePickingNodesForSegment", PlaceableFence.removePickingNodesForSegment)
  SpecializationUtil.registerFunction(placeableType, "setPreviewSegment", PlaceableFence.setPreviewSegment)
  SpecializationUtil.registerFunction(placeableType, "updatePanelVisuals", PlaceableFence.updatePanelVisuals)
  SpecializationUtil.registerFunction(placeableType, "updateSegmentShapes", PlaceableFence.updateSegmentShapes)
  SpecializationUtil.registerFunction(placeableType, "updateSegmentUpdateQueue", PlaceableFence.updateSegmentUpdateQueue)
  SpecializationUtil.registerFunction(placeableType, "updateDirtyAreas", PlaceableFence.updateDirtyAreas)
  SpecializationUtil.registerFunction(placeableType, "getSupportsParallelSnapping", PlaceableFence.getSupportsParallelSnapping)
  SpecializationUtil.registerFunction(placeableType, "getBoundingCheckWidth", PlaceableFence.getBoundingCheckWidth)
  SpecializationUtil.registerFunction(placeableType, "getSnapDistance", PlaceableFence.getSnapDistance)
  SpecializationUtil.registerFunction(placeableType, "getSnapAngle", PlaceableFence.getSnapAngle)
  SpecializationUtil.registerFunction(placeableType, "getSnapCheckDistance", PlaceableFence.getSnapCheckDistance)
  SpecializationUtil.registerFunction(placeableType, "getAllowExtendingOnly", PlaceableFence.getAllowExtendingOnly)
  SpecializationUtil.registerFunction(placeableType, "getMaxCornerAngle", PlaceableFence.getMaxCornerAngle)
  SpecializationUtil.registerFunction(placeableType, "getHasParallelSnapping", PlaceableFence.getHasParallelSnapping)
end
function PlaceableFence.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableFence.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getDestructionMethod", PlaceableFence.getDestructionMethod)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "performNodeDestruction", PlaceableFence.performNodeDestruction)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "previewNodeDestructionNodes", PlaceableFence.previewNodeDestructionNodes)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableFence.setOwnerFarmId)
end
function PlaceableFence.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableFence)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableFence)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableFence)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableFence)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableFence)
end
function PlaceableFence:registerXMLPaths(v1)
  self:setXMLSpecializationType("Fence")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".fence.poles#node", "Group of pole variants")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".fence.panels#node", "Group of panel variants")
  self:register(XMLValueType.FLOAT, v1 .. ".fence.panels#length", "Length of the panels", 1)
  self:register(XMLValueType.BOOL, v1 .. ".fence.panels#fixedLength", "Panel length is fixed", false)
  self:register(XMLValueType.ANGLE, v1 .. ".fence#maxVerticalAngle", "Maximum angle for vertical offset")
  self:register(XMLValueType.ANGLE, v1 .. ".fence#maxVerticalGateAngle", "Maximum angle for vertical offset with gates")
  self:register(XMLValueType.FLOAT, v1 .. ".fence#boundingCheckWidth", "Width of the bounding box used to check collision", 0.25)
  self:register(XMLValueType.FLOAT, v1 .. ".fence#snapDistance", "Snap distance", nil)
  self:register(XMLValueType.INT, v1 .. ".fence#snapAngle", "Snap angle in degrees", nil)
  self:register(XMLValueType.FLOAT, v1 .. ".fence#snapCheckDistance", "Snap distance", nil)
  self:register(XMLValueType.BOOL, v1 .. ".fence#extendingOnly", "Whether to only allow extending a segment and no attaching to the center", false)
  self:register(XMLValueType.ANGLE, v1 .. ".fence#maxCornerAngle", "Maximum angle between two connected segments", 180)
  self:register(XMLValueType.BOOL, v1 .. ".fence#supportsParallelSnapping", "Whether parallel snapping is an option", false)
  self:register(XMLValueType.BOOL, v1 .. ".fence#hasInvisiblePoles", "Poles are not visible so another display method is used", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".fence.gate(?)#node", "Gate node")
  self:register(XMLValueType.FLOAT, v1 .. ".fence.gate(?)#length", "Length of the gate from pole to pole", 1)
  self:register(XMLValueType.INT, v1 .. ".fence.gate(?)#triggerNode", "Gate trigger node index from gate node")
  self:register(XMLValueType.STRING, v1 .. ".fence.gate(?)#openText", "Action open text")
  self:register(XMLValueType.STRING, v1 .. ".fence.gate(?)#closeText", "Action close text")
  self:register(XMLValueType.FLOAT, v1 .. ".fence.gate(?)#openDuration", "Duration of animation in seconds")
  self:register(XMLValueType.INT, v1 .. ".fence.gate(?).door(?)#node", "Node of the door")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".fence.gate(?).door(?)#openRotation", "Rotation of the node when fully open")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".fence.gate(?).door(?)#openTranslation", "Translation of the node when fully open")
  AnimatedObjectBuilder.registerXMLPaths(self, v1 .. ".fence.gate(?)")
  self:setXMLSpecializationType()
end
function PlaceableFence:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Fence")
  self:register(XMLValueType.VECTOR_2, v1 .. ".segments.segment(?)#start", "Segment start position")
  self:register(XMLValueType.VECTOR_2, v1 .. ".segments.segment(?)#end", "Segment end position")
  self:register(XMLValueType.BOOL, v1 .. ".segments.segment(?)#first", "Segment has first pole visible", true)
  self:register(XMLValueType.BOOL, v1 .. ".segments.segment(?)#last", "Segment has last pole visible", true)
  self:register(XMLValueType.INT, v1 .. ".segments.segment(?)#gateIndex", "Gate index")
  AnimatedObject.registerSavegameXMLPaths(self, v1 .. ".segments.segment(?).animatedObject")
  self:setXMLSpecializationType()
end
function PlaceableFence:onLoad(savegame)
  self.spec_fence.pickObjects = {}
  self.spec_fence.segments = {}
  self.spec_fence.segmentsToUpdate = {}
  self.spec_fence.animatedObjects = {}
  self.spec_fence.previewSegment = nil
  local v4 = self.xmlFile:getValue("placeable.fence.panels#length")
  self.spec_fence.panelLength = v4
  v4 = self.xmlFile:getValue("placeable.fence.panels#fixedLength")
  self.spec_fence.panelLengthFixed = v4
  v4 = self.xmlFile:getValue("placeable.fence#maxVerticalAngle", 35)
  self.spec_fence.maxVerticalAngle = v4
  v4 = self.xmlFile:getValue("placeable.fence#maxVerticalGateAngle", 5)
  self.spec_fence.maxVerticalGateAngle = v4
  v4 = self.xmlFile:getValue("placeable.fence#hasInvisiblePoles", false)
  self.spec_fence.hasInvisiblePoles = v4
  v4 = self.xmlFile:getValue("placeable.fence#supportsParallelSnapping", false)
  self.spec_fence.supportsParallelSnapping = v4
  v4 = self.xmlFile:getValue("placeable.fence#boundingCheckWidth", 0.25)
  self.spec_fence.boundingCheckWidth = v4
  v4 = self.xmlFile:getValue("placeable.fence#snapDistance", nil)
  self.spec_fence.snapDistance = v4
  v4 = self.xmlFile:getValue("placeable.fence#snapAngle", nil)
  self.spec_fence.snapAngle = v4
  v4 = self.xmlFile:getValue("placeable.fence#snapCheckDistance", 0.25)
  self.spec_fence.snapCheckDistance = v4
  v4 = self.xmlFile:getValue("placeable.fence#extendingOnly", false)
  self.spec_fence.allowExtendingOnly = v4
  v4 = self.xmlFile:getValue("placeable.fence#maxCornerAngle", 180)
  self.spec_fence.maxCornerAngle = v4
  self.spec_fence.poles = {}
  v4 = self.xmlFile:getValue("placeable.fence.poles#node", nil, self.components, self.i3dMappings)
  if v4 ~= nil then
    local v8 = getNumOfChildren(v4)
    -- TODO: structure LOP_FORNPREP (pc 127, target 137)
    local v9 = getChildAt(v4, 1 - 1)
    self.spec_fence.poles[1] = v9
    -- TODO: structure LOP_FORNLOOP (pc 136, target 128)
  end
  v2.panels = {}
  local v5 = v3:getValue("placeable.fence.panels#node", nil, self.components, self.i3dMappings)
  if v5 ~= nil then
    v9 = getNumOfChildren(v5)
    -- TODO: structure LOP_FORNPREP (pc 159, target 169)
    local v10 = getChildAt(v5, 1 - 1)
    v2.panels[1] = v10
    -- TODO: structure LOP_FORNLOOP (pc 168, target 160)
  end
  v2.gates = {}
  v3:iterate("placeable.fence.gate", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u1.components, u1.i3dMappings)
    if v2 ~= nil then
      v4:iterate(savegame .. ".door", function(self, savegame)
        local v2 = v2:getValue(savegame .. "#node")
        if v2 ~= nil then
          local v6 = v6:getValue(savegame .. "#openRotation", nil, true)
          v6 = v6:getValue(savegame .. "#openTranslation", nil, true)
          table.insert(u1, {node = v2, rotation = v6, translation = v6})
          return
        end
        Logging.xmlWarning(u0, "Door node does not exist at %s", savegame)
      end)
      local v7 = v7:getValue(savegame .. "#length", 1)
      v7 = v7:getValue(savegame .. "#triggerNode")
      v7 = v7:getValue(savegame .. "#openText", "action_openGate")
      v7 = v7:getValue(savegame .. "#closeText", "action_closeGate")
      v7 = v7:getValue(savegame .. "#openDuration", 3)
      table.insert(u2.gates, {node = v2, length = v7, triggerNode = v7, openText = v7, closeText = v7, animationDuration = v7, doors = {}})
      return
    end
    Logging.xmlWarning(u0, "Gate node does not exist at %s", savegame)
  end)
end
function PlaceableFence:onDelete()
  if self.spec_fence.animatedObjects ~= nil then
    for v5, v6 in ipairs(self.spec_fence.animatedObjects) do
      v6:delete()
    end
  end
end
function PlaceableFence:onReadStream(streamId, connection)
  local numSegments = streamReadInt32(streamId)
  -- TODO: structure LOP_FORNPREP (pc 9, target 74)
  local v9 = streamReadFloat32(streamId)
  v9 = streamReadFloat32(streamId)
  v9 = streamReadFloat32(streamId)
  v9 = streamReadFloat32(streamId)
  v9 = streamReadUInt8(streamId)
  if {x1 = v9, z1 = v9, x2 = v9, z2 = v9, gateIndex = v9}.gateIndex == 0 then
  end
  v9 = streamReadBool(streamId)
  v8.renderFirst = v9
  v9 = streamReadBool(streamId)
  v8.renderLast = v9
  v8.poles = {}
  table.insert(v3.segments, v8)
  -- TODO: structure LOP_FORNLOOP (pc 73, target 10)
  -- TODO: structure LOP_FORNPREP (pc 77, target 113)
  self:generateSegmentPoles(v3.segments[1], true)
  if v3.segments[1].gateIndex ~= nil and v3.segments[1].animatedObject ~= nil then
    local animatedObjectId = NetworkUtil.readNodeObjectId(streamId)
    v3.segments[1].animatedObject:readStream(streamId, connection)
    v11:finishRegisterObject(v3.segments[1].animatedObject, animatedObjectId)
  end
  -- TODO: structure LOP_FORNLOOP (pc 112, target 78)
end
function PlaceableFence:onWriteStream(streamId, connection)
  streamWriteInt32(streamId, #self.spec_fence.segments)
  -- TODO: structure LOP_FORNPREP (pc 13, target 61)
  streamWriteFloat32(streamId, self.spec_fence.segments[1].x1)
  streamWriteFloat32(streamId, self.spec_fence.segments[1].z1)
  streamWriteFloat32(streamId, self.spec_fence.segments[1].x2)
  streamWriteFloat32(streamId, self.spec_fence.segments[1].z2)
  streamWriteUInt8(streamId, self.spec_fence.segments[1].gateIndex or 0)
  streamWriteBool(streamId, self.spec_fence.segments[1].renderFirst)
  streamWriteBool(streamId, self.spec_fence.segments[1].renderLast)
  -- TODO: structure LOP_FORNLOOP (pc 60, target 14)
  -- TODO: structure LOP_FORNPREP (pc 64, target 99)
  if self.spec_fence.segments[1].gateIndex ~= nil and self.spec_fence.segments[1].animatedObject ~= nil then
    local v12 = NetworkUtil.getObjectId(self.spec_fence.segments[1].animatedObject)
    NetworkUtil.writeNodeObjectId(...)
    self.spec_fence.segments[1].animatedObject:writeStream(streamId, connection)
    v10:registerObjectInStream(connection, self.spec_fence.segments[1].animatedObject)
  end
  -- TODO: structure LOP_FORNLOOP (pc 98, target 65)
end
function PlaceableFence:onUpdate(dt)
  self:updateSegmentUpdateQueue()
end
function PlaceableFence:setOwnerFarmId(superFunc, ownerFarmId, noEventSend)
  superFunc(self, ownerFarmId, noEventSend)
  for v8, v9 in ipairs(self.spec_fence.animatedObjects) do
    v9:setOwnerFarmId(ownerFarmId, true)
  end
end
function PlaceableFence:loadFromXMLFile(xmlFile, key)
  xmlFile:iterate(key .. ".segments.segment", function(self, xmlFile)
    local key, v3 = key:getValue(xmlFile .. "#start")
    local v4, v5 = v4:getValue(xmlFile .. "#end")
    if key ~= nil and v3 ~= nil and v4 ~= nil and v5 ~= nil then
      local v7 = v7:getValue(xmlFile .. "#first", true)
      v7 = v7:getValue(xmlFile .. "#last", true)
      v7 = v7:getValue(xmlFile .. "#gateIndex")
      table.insert(u1.segments, {x1 = key, z1 = v3, x2 = v4, z2 = v5, renderFirst = v7, renderLast = v7, gateIndex = v7, poles = {}, segmentKey = xmlFile})
      return
    end
    Logging.xmlError(u0, "Invalid segment position for '%s'. Ignoring segment!", xmlFile)
  end)
  -- TODO: structure LOP_FORNPREP (pc 16, target 47)
  self:generateSegmentPoles(self.spec_fence.segments[1], true)
  if self.spec_fence.segments[1].gateIndex ~= nil and self.spec_fence.segments[1].animatedObject ~= nil then
    v8:loadFromXMLFile(xmlFile, self.spec_fence.segments[1].segmentKey .. ".animatedObject")
  end
  v7.segmentKey = nil
  -- TODO: structure LOP_FORNLOOP (pc 46, target 17)
end
function PlaceableFence:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setTable(key .. ".segments.segment", self.spec_fence.segments, function(self, xmlFile, key)
    usedModNames:setValue(self .. "#start", xmlFile.x1, xmlFile.z1)
    usedModNames:setValue(self .. "#end", xmlFile.x2, xmlFile.z2)
    if xmlFile.gateIndex ~= nil then
      usedModNames:setValue(self .. "#gateIndex", xmlFile.gateIndex)
      if xmlFile.animatedObject ~= nil then
        usedModNames:saveToXMLFile(u0, self .. ".animatedObject", u1)
      end
    end
    if not xmlFile.renderFirst then
      usedModNames:setValue(self .. "#first", false)
    end
    if not xmlFile.renderLast then
      usedModNames:setValue(self .. "#last", false)
    end
  end)
end
function PlaceableFence:getPoleNear(x, y, z, maxDistance)
  self.spec_fence.getPoleNearResult = nil
  self.spec_fence.getPoleNearResultSegment = nil
  self.spec_fence.getPoleNearResultDistance = math.huge
  self.spec_fence.getPoleNearResultPosition = {x, y, z}
  overlapSphere(x, y, z, maxDistance, "getPoleNearOverlapCallback", self, CollisionFlag.STATIC_OBJECTS, false, true, true, false)
  if self.spec_fence.getPoleNearResult ~= nil then
    local v6, v7, v8 = getWorldTranslation(self.spec_fence.getPoleNearResult)
    return v6, v7, v8, self.spec_fence.getPoleNearResult, self.spec_fence.getPoleNearResultSegment
  end
  return nil
end
function PlaceableFence:getPoleNearOverlapCallback(hitObjectId)
  if hitObjectId ~= 0 then
    -- if v1 ~= g_currentMission.terrainRootNode then goto L7 end
  end
  return
  local v3 = getParent(hitObjectId)
  local v2 = getParent(...)
  local v4, v5, v6 = getWorldTranslation(hitObjectId)
  local v7 = MathUtil.vector3Length(v4 - self.spec_fence.getPoleNearResultPosition[1], v5 - self.spec_fence.getPoleNearResultPosition[2], v6 - self.spec_fence.getPoleNearResultPosition[3])
  if v7 < self.spec_fence.getPoleNearResultDistance then
    for v11, v12 in ipairs(self.spec_fence.segments) do
      if not (v12.group == v2) then
        continue
      end
      local v13 = getNumOfChildren(hitObjectId)
      if not (v13 < 3) then
        continue
      end
      v3.getPoleNearResult = hitObjectId
      v3.getPoleNearResultSegment = v12
      v3.getPoleNearResultDistance = v7
    end
  end
  return true
end
function PlaceableFence:getPolePosition(node, allowPanel)
  local v4 = getParent(node)
  local v5 = getParent(v4)
  if allowPanel then
    local v7 = getRootNode()
    if v5 ~= v7 then
      v7 = getParent(v5)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 58)
  if v5 == v3.segments[1].group then
    local v11, v12, v13 = getWorldTranslation(v4)
    return v11, v12, v13, v3.segments[1]
  end
  if v6 == v10.group then
    v11, v12, v13 = getWorldTranslation(v5)
    return v11, v12, v13, v10
  end
  -- TODO: structure LOP_FORNLOOP (pc 57, target 28)
  return nil
end
function PlaceableFence:getPoleShapeForPreview()
  if self.spec_fence.hasInvisiblePoles then
    return nil
  end
  if 0 < #v1.poles then
    local v2 = getNumOfChildren(v1.poles[1])
    if v2 == 0 then
      return nil
    end
    v2 = clone(v1.poles[1], false, false, false)
    if v2 == 0 then
      return nil
    end
    return v2
  end
  return nil
end
function PlaceableFence:getMaxVerticalAngleAndYForPreview()
  -- TODO: structure LOP_FORNPREP (pc 13, target 85)
  local v13 = MathUtil.getPointPointDistance(self.spec_fence.previewSegment.poles[1], self.spec_fence.previewSegment.poles[1 + 1], self.spec_fence.previewSegment.poles[1 + 2], self.spec_fence.previewSegment.poles[1 + 3])
  local v14 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.spec_fence.previewSegment.poles[1], 0, self.spec_fence.previewSegment.poles[1 + 1])
  local v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.spec_fence.previewSegment.poles[1 + 2], 0, self.spec_fence.previewSegment.poles[1 + 3])
  local v16 = math.abs(v14 - v15)
  local v17 = math.min(1000, v14, v15)
  v17 = math.max(-1000, v14, v15)
  if 0 < v13 then
    v17 = math.atan(v16 / v13)
    if 0 < v17 then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 84, target 14)
  return v3, v4, v5
end
function PlaceableFence.getSegmentLength(v0, v1)
  return MathUtil.getPointPointDistance(v1.x1, v1.z1, v1.x2, v1.z2)
end
function PlaceableFence:getPanelLength()
  return self.spec_fence.panelLength
end
function PlaceableFence:getIsPanelLengthFixed()
  return self.spec_fence.panelLengthFixed
end
function PlaceableFence:getTotalNumberOfPoles()
  -- TODO: structure LOP_FORNPREP (pc 8, target 17)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 9)
  return 0 + self.spec_fence.segments[1].poles / 2
end
function PlaceableFence.createSegment(v0, v1, v2, v3, v4, v5, v6)
  return {x1 = v1, z1 = v2, x2 = v3, z2 = v4, renderFirst = v5, renderLast = true, gateIndex = v6, poles = {}}
end
function PlaceableFence:addSegment(segment, sync)
  self.spec_fence.segments[#self.spec_fence.segments + 1] = segment
  self:generateSegmentPoles(segment, sync)
end
function PlaceableFence:deleteSegment(segment)
  if segment.animatedObject ~= nil then
    v3:delete()
    segment.animatedObject = nil
  end
  if segment.group ~= nil then
    delete(segment.group)
    segment.group = nil
  end
  table.removeElement(v2.segments, segment)
  self:updateDirtyAreas(segment)
end
function PlaceableFence.updateDirtyAreas(v0, v1)
  local v2 = math.min(v1.x1, v1.x2)
  local v3 = math.max(v1.x1, v1.x2)
  local v4 = math.min(v1.z1, v1.z2)
  local v5 = math.max(v1.z1, v1.z2)
  v6:setCollisionMapAreaDirty(v2, v4, v3, v5, true)
  v6:setAreaDirty(v2, v3, v4, v5)
end
function PlaceableFence:setPreviewSegment(segment)
  if self.spec_fence.previewSegment ~= nil and self.spec_fence.previewSegment.group ~= nil and segment ~= self.spec_fence.previewSegment then
    delete(self.spec_fence.previewSegment.group)
    self.spec_fence.previewSegment.group = nil
  end
  v2.previewSegment = segment
  if segment ~= nil then
    self:generateSegmentPoles(segment, false)
  end
end
function PlaceableFence:getPreviewSegment()
  return self.spec_fence.previewSegment
end
function PlaceableFence:getGate(index)
  return self.spec_fence.gates[index]
end
function PlaceableFence:getSegment(index)
  return self.spec_fence.segments[index]
end
function PlaceableFence:getNumSequments()
  return #self.spec_fence.segments
end
function PlaceableFence:getMaxVerticalAngle()
  return self.spec_fence.maxVerticalAngle
end
function PlaceableFence:getMaxVerticalGateAngle()
  return self.spec_fence.maxVerticalGateAngle
end
function PlaceableFence:getBoundingCheckWidth()
  return self.spec_fence.boundingCheckWidth
end
function PlaceableFence:getSnapDistance()
  return self.spec_fence.snapDistance
end
function PlaceableFence:getSnapAngle()
  return self.spec_fence.snapAngle
end
function PlaceableFence:getSnapCheckDistance()
  return self.spec_fence.snapCheckDistance
end
function PlaceableFence:getAllowExtendingOnly()
  return self.spec_fence.allowExtendingOnly
end
function PlaceableFence:getMaxCornerAngle()
  return self.spec_fence.maxCornerAngle
end
function PlaceableFence.getHasParallelSnapping(v0)
  return false
end
function PlaceableFence:getSupportsParallelSnapping()
  return self.spec_fence.supportsParallelSnapping
end
function PlaceableFence:deletePanel(node)
  if node ~= nil and node ~= 0 then
    local v2 = getCollisionMask(node)
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000000 -> L11
  end
  return
  local v3, v4, v5, v6, v7 = self:findRaycastInfo(node)
  if v3 == nil then
    return nil
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 36)
  if v2.segments[1] == v5 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 35, target 28)
  end
  if self.isServer then
    self:doDeletePanel(v5, v8, v7)
    local v11 = PlaceableFenceRemoveSegmentEvent.new(self, v8, v7)
    v9:broadcastEvent(v11, false)
  else
    setCollisionMask(node, 0)
    local v9 = v9:getServerConnection()
    v11 = PlaceableFenceRemoveSegmentEvent.new(self, v8, v7)
    v9:sendEvent(...)
  end
  return true
end
function PlaceableFence:doDeletePanel(segment, segmentIndex, poleIndex)
  if segment ~= nil then
    -- if #v1.poles >= v3 then goto L8 end
  end
  return
  if poleIndex == 1 then
    if segment.renderFirst then
      {}[#{} + 1] = segment.poles[1]
      {}[#{} + 1] = segment.poles[2]
    end
    if poleIndex + 2 == #segment.poles - 1 then
      if segment.renderLast then
        v4[#v4 + 1] = segment.poles[3]
        v4[#v4 + 1] = segment.poles[4]
      end
      self:removePickingNodesForSegment(segment)
      self:deleteSegment(segment)
      -- goto L186  (LOP_JUMP +110)
    end
    segment.x1 = segment.poles[3]
    segment.z1 = segment.poles[4]
    segment.renderFirst = true
  elseif poleIndex + 2 == #segment.poles - 1 then
    if segment.renderLast then
      {}[#{} + 1] = segment.poles[#segment.poles - 1]
      {}[#{} + 1] = segment.poles[#segment.poles]
    end
    segment.x2 = segment.poles[#segment.poles - 3]
    segment.z2 = segment.poles[#segment.poles - 2]
    segment.renderLast = true
  else
    local newSegment = self:createSegment(segment.poles[poleIndex + 2], segment.poles[poleIndex + 3], segment.x2, segment.z2, true, nil)
    newSegment.renderLast = segment.renderLast
    newSegment.renderFirst = true
    segment.x2 = segment.poles[poleIndex]
    segment.z2 = segment.poles[poleIndex + 1]
    segment.renderLast = true
    self:addSegment(newSegment)
  end
  if v6 then
    self:generateSegmentPoles(segment, true)
  end
  -- TODO: structure LOP_FORNPREP (pc 195, target 221)
  local v12, v13 = self:isPoleInAnySegment(v4[1], v4[1 + 1], segment)
  if v12 ~= nil then
    if v13 then
      v12.renderFirst = true
    else
      v12.renderLast = true
    end
    self:generateSegmentPoles(v12, true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 220, target 196)
  self:updateDirtyAreas(v5)
  return true
end
function PlaceableFence:findRaycastInfo(node)
  local v4 = getParent(node)
  local v5 = getChildAt(v4, 1)
  local newSegment = getParent(v4)
  local v8 = getParent(newSegment)
  -- TODO: structure LOP_FORNPREP (pc 26, target 66)
  if self.spec_fence.segments[1].group == v8 then
    -- goto L66  (LOP_JUMP +30)
  elseif self.spec_fence.segments[1].group == newSegment and self.spec_fence.segments[1].gateIndex ~= nil then
    local v16 = getNumOfChildren(newSegment)
    local v13 = getChildAt(newSegment, v16 - 1)
    v13 = getChildAt(v13, 1)
    -- goto L66  (LOP_JUMP +1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 65, target 27)
  if v6 == nil then
    local v9 = getParent(node)
    v9 = getParent(v9)
    -- TODO: structure LOP_FORNPREP (pc 84, target 95)
    if segmentIndex.segments[1].group == v9 then
    else
      -- TODO: structure LOP_FORNLOOP (pc 94, target 85)
    end
    if v6 == nil then
      return nil
    end
    local v11 = getChildIndex(newSegment)
    return nil, nil, v6, newSegment, v11 * 2 + 1
  end
  if v6.gateIndex ~= nil then
  else
    v11 = getChildIndex(newSegment)
  end
  return v4, v5, v6, newSegment, v9
end
function PlaceableFence:getNodesToDeleteForPanel(node)
  local poleIndex, v4, v5, v6, newSegment = self:findRaycastInfo(node)
  if poleIndex ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000002 -> L12
  end
  return nil
  if v5.gateIndex ~= nil then
    for v13, v14 in ipairs(segmentIndex.gates[v5.gateIndex].doors) do
      local v15 = getChildAt(poleIndex, v14.node)
      local v17 = getChildAt(v15, 0)
      v8[#v8 + 1] = v17
    end
  else
  end
  if newSegment == 1 and v5.renderFirst then
    v12 = self:isPoleInAnySegment(v5.poles[1], v5.poles[2], v5)
    if v12 == nil then
      v12 = getChildAt(v6, 1)
      if v12 ~= 0 then
        table.insert(v8, v12)
      end
    end
  end
  if newSegment + 2 == #v5.poles - 1 and v5.renderLast then
    v10 = getChildAt(v5.group, #v5.poles / 2 - 1)
    v13 = self:isPoleInAnySegment(v5.poles[#v5.poles - 1], v5.poles[#v5.poles], v5)
    if v13 == nil then
      v13 = getChildAt(v10, 1)
      if v13 ~= 0 then
        table.insert(v8, v13)
      end
    end
  end
  return v8
end
function PlaceableFence:isPoleInAnySegment(x, z, ignoreSegment)
  -- TODO: structure LOP_FORNPREP (pc 7, target 74)
  if self.spec_fence.segments[1] ~= ignoreSegment then
    local v9 = math.abs(self.spec_fence.segments[1].x1 - x)
    if v9 < PlaceableFence.EPSILON then
      v9 = math.abs(self.spec_fence.segments[1].z1 - z)
      if v9 < PlaceableFence.EPSILON then
        return self.spec_fence.segments[1], true, false
      end
    end
    v9 = math.abs(v8.x2 - x)
    if v9 < PlaceableFence.EPSILON then
      v9 = math.abs(v8.z2 - z)
      if v9 < PlaceableFence.EPSILON then
        return v8, false, true
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 73, target 8)
  return nil
end
function PlaceableFence.fakeRandomValueForPosition(v0, node, segmentIndex, poleIndex, v4)
  if v4 == nil then
    return (node * 0.13 + poleIndex * 0.23) % 1
  end
  local newSegment = math.floor(v5 * (v4 - 1) + 0.5)
  return newSegment + 1
end
function PlaceableFence:generateSegmentPoles(segment, sync)
  local totalDistance = MathUtil.getPointPointDistance(segment.x1, segment.z1, segment.x2, segment.z2)
  local newSegment = math.floor(totalDistance / self.spec_fence.panelLength)
  local v5 = math.max(newSegment - 1, 0)
  -- TODO: structure LOP_FORNPREP (pc 32, target 38)
  segment.poles[1] = nil
  -- TODO: structure LOP_FORNLOOP (pc 37, target 33)
  if totalDistance < 0.01 then
    return
  end
  if segment.gateIndex ~= nil then
    segment.poles[1] = segment.x1
    segment.poles[2] = segment.z1
    segment.poles[3] = segment.x2
    segment.poles[4] = segment.z2
  else
    -- TODO: structure LOP_FORNPREP (pc 71, target 101)
    local v12 = MathUtil.lerp(segment.x1, segment.x2, poleIndex.panelLength * 0 / totalDistance)
    segment.poles[1] = v12
    local v13 = MathUtil.lerp(segment.z1, segment.z2, poleIndex.panelLength * 0 / totalDistance)
    segment.poles[1 + 1] = v13
    -- TODO: structure LOP_FORNLOOP (pc 100, target 72)
    if totalDistance - v5 * poleIndex.panelLength <= poleIndex.panelLength * 1.2 then
    else
    end
    -- TODO: structure LOP_FORNPREP (pc 117, target 150)
    local v15 = MathUtil.lerp(segment.x1, segment.x2, (v5 * poleIndex.panelLength + (0 + 1) * newSegment / v8) / totalDistance)
    segment.poles[v6] = v15
    local v16 = MathUtil.lerp(segment.z1, segment.z2, (v5 * poleIndex.panelLength + (0 + 1) * newSegment / v8) / totalDistance)
    segment.poles[v6 + 1] = v16
    -- TODO: structure LOP_FORNLOOP (pc 149, target 118)
  end
  if sync then
    self:removePickingNodesForSegment(segment)
    self:updateSegmentShapes(segment)
    self:addPickingNodesForSegment(segment)
  else
    self:addSegmentShapesToUpdate(segment)
  end
  if poleIndex.previewSegment ~= segment then
    self:updateDirtyAreas(segment)
  end
end
function PlaceableFence:updateSegmentShapes(segment)
  if segment ~= self.spec_fence.previewSegment then
  end
  if segment.animatedObject ~= nil then
    v6:delete()
    segment.animatedObject = nil
  end
  if segment.group ~= nil then
    delete(segment.group)
  end
  local v6 = createTransformGroup("fence_segment")
  segment.group = v6
  link(self.rootNode, segment.group)
  -- TODO: structure LOP_FORNPREP (pc 55, target 383)
  local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, segment.poles[1], 0, segment.poles[1 + 1])
  if 0 < #segmentIndex.poles then
    if 1 >= 1 then
      -- if not v1.renderFirst then goto L114 end
    end
    if segementTerrainY >= #segment.poles - 2 then
      -- if not v1.renderLast then goto L114 end
    end
    local v14 = self:fakeRandomValueForPosition(v9, v11, v10, #segmentIndex.poles)
    local v15 = clone(segmentIndex.poles[v14], false, false, false)
  else
    v14 = createTransformGroup("fence_firstPole")
  end
  link(segment.group, v12)
  setWorldTranslation(v12, v9, v11, v10)
  if segment.gateIndex ~= nil then
    local v19 = math.atan2(v9 - segment.poles[(segementTerrainY + 2) % 4], v10 - segment.poles[(segementTerrainY + 2) % 4 + 1])
    setWorldRotation(v12, 0, v19 + math.pi, 0)
    -- if not v4 then goto L382 end
    -- if v13 then goto L382 end
    local v20 = getChildAt(v12, 0)
    addToPhysics(...)
  elseif segementTerrainY < #segment.poles - 2 then
    local v16 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, segment.poles[segementTerrainY + 2], 0, segment.poles[segementTerrainY + 3])
    local v21 = math.atan2(v9 - segment.poles[segementTerrainY + 2], v10 - segment.poles[segementTerrainY + 3])
    setWorldRotation(v12, 0, v21 + math.pi, 0)
    v21 = self:fakeRandomValueForPosition(v9, v11, v10, #segmentIndex.panels)
    local v22 = clone(segmentIndex.panels[v21], false, false, false)
    link(v12, v22)
    local v23 = MathUtil.getPointPointDistance(v9, v10, segment.poles[segementTerrainY + 2], segment.poles[segementTerrainY + 3])
    self:updatePanelVisuals(v22, v11 - v16, segment, segementTerrainY, v23)
    local v24 = getChildAt(v22, 0)
    local v28, v29, v30 = MathUtil.vector3Normalize(0, -(v11 - v16), v23)
    v28 = math.sqrt((v9 - segment.poles[segementTerrainY + 2]) * (v9 - segment.poles[segementTerrainY + 2]) + (v11 - v16) * (v11 - v16) + (v10 - segment.poles[segementTerrainY + 3]) * (v10 - segment.poles[segementTerrainY + 3]))
    local v30, v31, v32 = getTranslation(v24)
    setDirection(v24, v28, v29, v30, 0, 1, 0)
    setTranslation(v24, v30 + v28 * (v28 - v23) * 0.5, v31 + v29 * (v28 - v23) * 0.5, v32 + v30 * (v28 - v23) * 0.5)
    if v4 then
      addToPhysics(v24)
    end
    SpecializationUtil.raiseEvent(self, "onCreateSegmentPanel", poleIndex, segment, v22, segementTerrainY, v18)
    -- if not v4 then goto L382 end
    -- if v13 then goto L382 end
    local v34 = getChildAt(v12, 0)
    addToPhysics(...)
  else
    if segment.renderLast and 2 < segementTerrainY then
      v19 = math.atan2(v9 - segment.poles[segementTerrainY - 2], v10 - segment.poles[segementTerrainY - 1])
      setWorldRotation(v12, 0, v19 + math.pi, 0)
      if v4 and not saveId then
        v20 = getChildAt(v12, 0)
        addToPhysics(...)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 382, target 56)
  if segment.gateIndex ~= nil then
    local newSegment = clone(segmentIndex.gates[segment.gateIndex].node, false, false, false)
    link(segment.group, newSegment)
    local segementTerrainY = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, segment.x1, 0, segment.z1)
    setWorldTranslation(newSegment, segment.x1, segementTerrainY, segment.z1)
    local v12 = math.atan2(segment.x1 - segment.x2, segment.z1 - segment.z2)
    setWorldRotation(newSegment, 0, v12 + math.pi, 0)
    if not poleIndex then
      v12 = AnimatedObject.new(self.isServer, self.isClient)
      v15 = self:getOwnerFarmId()
      v12:setOwnerFarmId(v15, false)
      local saveId = string.format("AnimatedObject_%s_gate_%d_%d_%d_%d", self.configFileName, segment.x1, segment.z1, segment.x2, segment.x2)
      v14 = v12:builder(self.configFileName, saveId)
      for v18, v19 in ipairs(segmentIndex.gates[segment.gateIndex].doors) do
        v20 = getChildAt(newSegment, v19.node)
        v14:addSimplePart(v20, v19.rotation, v19.translation)
        addToPhysics(v20)
      end
      v15 = getChildAt(newSegment, v6.triggerNode)
      v14:setTrigger(v15)
      addToPhysics(v15)
      v14:setActions("ACTIVATE_HANDTOOL", v6.openText, nil, v6.closeText)
      v14:setDuration(v6.animationDuration * 1000)
      if self.xmlFile == nil then
        v16 = XMLFile.load("fence", self.configFileName)
        self.xmlFile = v16
      end
      v19 = string.format("placeable.fence.gate(%d).sounds", segment.gateIndex - 1)
      v14:setSounds(self.xmlFile.handle, v19, newSegment)
      v16 = v14:build()
      if not v16 then
        v12:delete()
        return
      end
      v12:register(true)
      table.insert(segmentIndex.animatedObjects, v12)
      segment.animatedObject = v12
      if v5 ~= nil then
        v12:setAnimTime(v5, true)
      end
      -- if not v0.isServer then goto L697 end
      -- TODO: structure LOP_FORNPREP (pc 606, target 697)
      if segmentIndex.segments[1] == segment then
        v21 = PlaceableFenceAddGateEvent.new(self, 1, v12)
        v19:broadcastEvent(v21, false, nil, self)
        return
      end
      -- TODO: structure LOP_FORNLOOP (pc 627, target 607)
      return
    end
    for v15, v16 in ipairs(v6.doors) do
      v17 = getChildAt(newSegment, v16.node)
      if v16.translation ~= nil then
        v18, v19, v20 = getTranslation(v17)
        v21, v22, v23 = unpack(v16.translation)
        setTranslation(v17, v18 + (v21 - v18) * 0.3, v19 + (v22 - v19) * 0.3, v20 + (v23 - v20) * 0.3)
      end
      if not (v16.rotation ~= nil) then
        continue
      end
      v18, v19, v20 = getRotation(v17)
      v21, v22, v23 = unpack(v16.rotation)
      setRotation(v17, v18 + (v21 - v18) * 0.3, v19 + (v22 - v19) * 0.3, v20 + (v23 - v20) * 0.3)
    end
  end
end
function PlaceableFence:updatePanelVisuals(panelNode, dy, segment, polesIndex, length)
  if length ~= self.spec_fence.panelLength then
    setScale(panelNode, 1, 1, length / self.spec_fence.panelLength)
  end
  local v9 = getChildAt(panelNode, 1)
  function(self)
    local panelNode = getHasClassId(self, ClassIds.SHAPE)
    if panelNode then
      panelNode = getHasShaderParameter(self, "yOffset")
      if panelNode then
        setShaderParameter(self, "yOffset", -u0, 0, 0, 0, false)
      end
    end
    local polesIndex = getNumOfChildren(self)
    -- TODO: structure LOP_FORNPREP (pc 31, target 41)
    polesIndex = getChildAt(self, 0)
    u1(polesIndex)
    -- TODO: structure LOP_FORNLOOP (pc 40, target 32)
  end(...)
end
function PlaceableFence:addSegmentShapesToUpdate(segment)
  self.spec_fence.segmentsToUpdate[#self.spec_fence.segmentsToUpdate + 1] = segment
  self:raiseActive()
end
function PlaceableFence:updateSegmentUpdateQueue()
  if 0 < #self.spec_fence.segmentsToUpdate then
    table.remove(self.spec_fence.segmentsToUpdate, 1)
    self:removePickingNodesForSegment(self.spec_fence.segmentsToUpdate[1])
    self:updateSegmentShapes(self.spec_fence.segmentsToUpdate[1])
    self:addPickingNodesForSegment(self.spec_fence.segmentsToUpdate[1])
    self:raiseActive()
  end
end
function PlaceableFence:addPickingNodesForSegment(segment)
  if segment == self.spec_fence.previewSegment then
    return
  end
  if segment.group ~= nil then
    self:recursivelyAddPickingNodes({}, segment.group)
    -- TODO: structure LOP_FORNPREP (pc 22, target 31)
    v6:addNodeObject({}[1], self)
    -- TODO: structure LOP_FORNLOOP (pc 30, target 23)
  end
  self.overlayColorNodes = nil
end
function PlaceableFence:removePickingNodesForSegment(segment)
  if segment == self.spec_fence.previewSegment then
    return
  end
  if segment.group ~= nil then
    self:recursivelyAddPickingNodes({}, segment.group)
    -- TODO: structure LOP_FORNPREP (pc 22, target 30)
    v6:removeNodeObject({}[1])
    -- TODO: structure LOP_FORNLOOP (pc 29, target 23)
  end
end
function PlaceableFence:recursivelyAddPickingNodes(objects, node)
  local poleIndex = getRigidBodyType(node)
  if poleIndex ~= RigidBodyType.NONE then
    table.insert(objects, node)
  end
  poleIndex = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 22, target 33)
  local v10 = getChildAt(node, 1 - 1)
  self:recursivelyAddPickingNodes(...)
  -- TODO: structure LOP_FORNLOOP (pc 32, target 23)
end
function PlaceableFence.getDestructionMethod(v0, segment)
  return Placeable.DESTRUCTION.PER_NODE
end
function PlaceableFence:previewNodeDestructionNodes(superFunc, node)
  return self:getNodesToDeleteForPanel(node)
end
function PlaceableFence:performNodeDestruction(superFunc, node)
  return self:deletePanel(node)
end
function PlaceableFence.collectPickObjects(v0, segment, segmentIndex)
end
