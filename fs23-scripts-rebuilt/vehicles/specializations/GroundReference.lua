-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GroundReference = {GROUND_REFERENCE_XML_KEY = "vehicle.groundReferenceNodes.groundReferenceNode(?)"}
function GroundReference.prerequisitesPresent(v0)
  return true
end
function GroundReference.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("GroundReference")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, GroundReference.GROUND_REFERENCE_XML_KEY .. "#node", "Ground reference node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. "#threshold", "Threshold", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, GroundReference.GROUND_REFERENCE_XML_KEY .. "#onlyActiveWhenLowered", "Node is only active when tool is lowered", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. "#chargeValue", "Charge value to calculate power consumption", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. "#forceFactor", "Ground force factor")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. "#maxActivationDepth", "Max. activation depth", 10)
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#groundReferenceNodeIndex", "Ground reference node index")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function GroundReference.registerEvents(vehicleType)
end
function GroundReference.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundReferenceNode", GroundReference.loadGroundReferenceNode)
  SpecializationUtil.registerFunction(vehicleType, "updateGroundReferenceNode", GroundReference.updateGroundReferenceNode)
  SpecializationUtil.registerFunction(vehicleType, "getGroundReferenceNodeFromIndex", GroundReference.getGroundReferenceNodeFromIndex)
  SpecializationUtil.registerFunction(vehicleType, "getIsGroundReferenceNodeActive", GroundReference.getIsGroundReferenceNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "getIsGroundReferenceNodeThreshold", GroundReference.getIsGroundReferenceNodeThreshold)
end
function GroundReference.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPowerMultiplier", GroundReference.getPowerMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", GroundReference.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", GroundReference.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "checkMovingPartDirtyUpdateNode", GroundReference.checkMovingPartDirtyUpdateNode)
end
function GroundReference.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", GroundReference)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", GroundReference)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", GroundReference)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", GroundReference)
end
function GroundReference:onLoad(savegame)
  self.spec_groundReference.hasForceFactors = false
  self.spec_groundReference.groundReferenceNodes = {}
  while true do
    v4 = string.format("vehicle.groundReferenceNodes.groundReferenceNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadGroundReferenceNode(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.groundReferenceNodes, {})
    end
  end
  for v8, v9 in pairs(v2.groundReferenceNodes) do
  end
  if 0 < v4 then
    for v8, v9 in pairs(v2.groundReferenceNodes) do
      v9.chargeValue = v9.chargeValue / v4
    end
  end
  for v9, v10 in pairs(v2.groundReferenceNodes) do
  end
  if 0 < v5 then
    for v9, v10 in pairs(v2.groundReferenceNodes) do
      v10.forceFactor = v10.forceFactor / v5
    end
  end
  if #v2.groundReferenceNodes == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", GroundReference)
  end
end
function GroundReference:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 then
    for v8, v9 in ipairs(self.spec_groundReference.groundReferenceNodes) do
      local v10 = streamReadBool(streamId)
      v9.isActive = v10
    end
  end
end
function GroundReference:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 then
    for v8, v9 in ipairs(self.spec_groundReference.groundReferenceNodes) do
      streamWriteBool(streamId, v9.isActive)
    end
  end
end
function GroundReference:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in ipairs(self.spec_groundReference.groundReferenceNodes) do
    self:updateGroundReferenceNode(v10)
  end
end
function GroundReference:loadGroundReferenceNode(xmlFile, baseName, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#index", baseName .. "#node")
  local v5 = xmlFile:getValue(baseName .. "#node", nil, self.components, self.i3dMappings)
  if v5 ~= nil then
    entry.node = v5
    local v6 = xmlFile:getValue(baseName .. "#threshold", 0)
    entry.threshold = v6
    v6 = xmlFile:getValue(baseName .. "#onlyActiveWhenLowered", true)
    entry.onlyActiveWhenLowered = v6
    v6 = xmlFile:getValue(baseName .. "#chargeValue", 1)
    entry.chargeValue = v6
    v6 = xmlFile:getValue(baseName .. "#forceFactor")
    entry.forceFactor = v6
    if entry.forceFactor ~= nil then
      self.spec_groundReference.hasForceFactors = true
    end
    entry.forceFactor = entry.forceFactor or 1
    v6 = xmlFile:getValue(baseName .. "#maxActivationDepth", 10)
    entry.maxActivationDepth = v6
    entry.isActive = false
    return true
  end
  return false
end
function GroundReference:updateGroundReferenceNode(groundReferenceNode)
  if self.isServer then
    if groundReferenceNode.onlyActiveWhenLowered and self.getIsLowered ~= nil then
      local v3 = self:getIsLowered(false)
      if not v3 then
      end
    end
    v3 = self:getIsGroundReferenceNodeThreshold(groundReferenceNode)
    local v4, v5, v6 = getWorldTranslation(groundReferenceNode.node)
    local v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v4, v5, v6)
    if 0 < v7 + v3 - v5 and v7 + v3 - v5 >= groundReferenceNode.maxActivationDepth then
    end
    local v10, v11 = DensityMapHeightUtil.getHeightAtWorldPos(v4, v5, v6)
    if 0 < v10 + v3 - v5 and v10 + v3 - v5 >= groundReferenceNode.maxActivationDepth then
    end
    if v2 then
    end
    groundReferenceNode.isActive = v14
  end
end
function GroundReference:getGroundReferenceNodeFromIndex(refNodeIndex)
  return self.spec_groundReference.groundReferenceNodes[refNodeIndex]
end
function GroundReference.getIsGroundReferenceNodeActive(v0, v1)
  return v1.isActive
end
function GroundReference.getIsGroundReferenceNodeThreshold(v0, v1)
  return v1.threshold
end
function GroundReference:getPowerMultiplier(superFunc)
  local powerMultiplier = superFunc(self)
  if 0 < #self.spec_groundReference.groundReferenceNodes then
    if self.spec_groundReference.hasForceFactors then
      for v8, v9 in ipairs(self.spec_groundReference.groundReferenceNodes) do
        if not v9.isActive then
          continue
        end
      end
    else
      for v8, v9 in ipairs(self.spec_groundReference.groundReferenceNodes) do
        if not v9.isActive then
          continue
        end
      end
    end
  end
  return powerMultiplier
end
function GroundReference:loadSpeedRotatingPartFromXML(superFunc, speedRotatingPart, xmlFile, key)
  local v5 = superFunc(self, speedRotatingPart, xmlFile, key)
  if not v5 then
    return false
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#refNodeIndex", key .. "#groundReferenceNodeIndex")
  v5 = xmlFile:getValue(key .. "#groundReferenceNodeIndex")
  speedRotatingPart.groundReferenceNodeIndex = v5
  if speedRotatingPart.groundReferenceNodeIndex ~= nil and speedRotatingPart.groundReferenceNodeIndex == 0 then
    Logging.xmlWarning(self.xmlFile, "Unknown ground reference node index '%d' in '%s'! Indices start with 1!", speedRotatingPart.groundReferenceNodeIndex, key)
  end
  return true
end
function GroundReference:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.groundReferenceNodeIndex ~= nil then
    if self.spec_groundReference.groundReferenceNodes[speedRotatingPart.groundReferenceNodeIndex] ~= nil then
      -- if v0.spec_groundReference.groundReferenceNodes[v2.groundReferenceNodeIndex].isActive then goto L43 end
      return false
    else
      if not speedRotatingPart.repr then
      end
      local v8 = v8(v9)
      v4(...)
      speedRotatingPart.groundReferenceNodeIndex = nil
    end
  end
  return superFunc(self, speedRotatingPart)
end
function GroundReference:checkMovingPartDirtyUpdateNode(superFunc, node, movingPart)
  superFunc(self, node, movingPart)
  -- TODO: structure LOP_FORNPREP (pc 12, target 36)
  if node == self.spec_groundReference.groundReferenceNodes[1].node then
    local v12 = getName(node)
    local v13 = getName(movingPart.node)
    Logging.xmlError(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 13)
end
