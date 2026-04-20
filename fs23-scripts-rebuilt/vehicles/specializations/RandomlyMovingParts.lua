-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RandomlyMovingParts = {DEFAULT_MAX_UPDATE_DISTANCE = 50, RANDOMLY_MOVING_PART_XML_KEY = "vehicle.randomlyMovingParts.randomlyMovingPart(?)"}
function RandomlyMovingParts.prerequisitesPresent(v0)
  return true
end
function RandomlyMovingParts.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("RandomlyMovingParts")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.randomlyMovingParts#maxUpdateDistance", RandomlyMovingParts.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#node", "Node")
  Vehicle.xmlSchema:register(XMLValueType.INT, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#refNodeIndex", "Ground reference node index")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#rotMean", "Rotation mean")
  Vehicle.xmlSchema:register(XMLValueType.INT, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#rotAxis", "Rotation axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#rotVariance", "Rotation variance")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#rotTimeMean", "Rotation time mean")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#rotTimeVariance", "Rotation time variance")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#pauseMean", "Pause time variance")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#pauseVariance", "Pause time variance")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#isSpeedDependent", "Is speed dependent")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. ".node(?)#node", "Node to apply the same random angle")
  Vehicle.xmlSchema:register(XMLValueType.INT, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. ".node(?)#rotAxis", "Rotation axis")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. ".node(?)#scale", "Rotation Scale")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function RandomlyMovingParts.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadRandomlyMovingPartFromXML", RandomlyMovingParts.loadRandomlyMovingPartFromXML)
  SpecializationUtil.registerFunction(vehicleType, "updateRandomlyMovingPart", RandomlyMovingParts.updateRandomlyMovingPart)
  SpecializationUtil.registerFunction(vehicleType, "updateRotationTargetValues", RandomlyMovingParts.updateRotationTargetValues)
  SpecializationUtil.registerFunction(vehicleType, "getIsRandomlyMovingPartActive", RandomlyMovingParts.getIsRandomlyMovingPartActive)
end
function RandomlyMovingParts.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", RandomlyMovingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", RandomlyMovingParts)
end
function RandomlyMovingParts:onLoad(savegame)
  local v3 = v3:getValue("vehicle.randomlyMovingParts#maxUpdateDistance", RandomlyMovingParts.DEFAULT_MAX_UPDATE_DISTANCE)
  self.spec_randomlyMovingParts.maxUpdateDistance = v3
  self.spec_randomlyMovingParts.nodes = {}
  while true do
    v4 = string.format("vehicle.randomlyMovingParts.randomlyMovingPart(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadRandomlyMovingPartFromXML({}, self.xmlFile, v4)
    if v6 then
      table.insert(v2.nodes, {})
    end
  end
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000013 -> L66
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", RandomlyMovingParts)
end
function RandomlyMovingParts:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.currentUpdateDistance < self.spec_randomlyMovingParts.maxUpdateDistance then
    for v9, v10 in pairs(self.spec_randomlyMovingParts.nodes) do
      self:updateRandomlyMovingPart(v10, dt)
    end
  end
end
function RandomlyMovingParts:loadRandomlyMovingPartFromXML(part, xmlFile, key)
  local v4 = v4:hasProperty(key)
  if not v4 then
    return false
  end
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(self.xmlFile, "Unknown node for randomlyMovingPart in '%s'", key)
    return false
  end
  part.node = v5
  if self.getGroundReferenceNodeFromIndex ~= nil then
    local v6 = xmlFile:getValue(key .. "#refNodeIndex")
    if v6 ~= nil then
      if v6 ~= 0 then
        local v7 = self:getGroundReferenceNodeFromIndex(v6)
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L76
        part.groundReferenceNode = v7
      else
        Logging.xmlWarning(self.xmlFile, "Unknown ground reference node in '%s'! Indices start with '0'", key .. "#refNodeIndex")
      end
    end
  end
  local v6, v7, v8 = getRotation(part.node)
  local v9 = xmlFile:getValue(key .. "#rotMean", nil, true)
  if v9 then
    part.rotOrig = {v6, v7, v8}
    part.rotCur = {v6, v7, v8}
    local v10 = xmlFile:getValue(key .. "#rotAxis")
    part.rotAxis = v10
    if part.rotAxis ~= nil and 1 <= part.rotAxis and part.rotAxis > 3 then
    end
    if not v10 then
      Logging.xmlWarning(xmlFile, "Invalid rot axis '%s' given for node '%s'. Only '1', '2' or '3' are allowed!", part.rotAxis, key)
      return false
    end
    part.rotMean = v9
    v10 = xmlFile:getValue(key .. "#rotVariance", nil, true)
    part.rotVar = v10
    v10 = xmlFile:getValue(key .. "#rotTimeMean", nil, true)
    part.rotTimeMean = v10
    v10 = xmlFile:getValue(key .. "#rotTimeVariance", nil, true)
    part.rotTimeVar = v10
    v10 = xmlFile:getValue(key .. "#pauseMean", nil, true)
    part.pauseMean = v10
    v10 = xmlFile:getValue(key .. "#pauseVariance", nil, true)
    part.pauseVar = v10
    -- TODO: structure LOP_FORNPREP (pc 196, target 226)
    part.rotTimeMean[1] = part.rotTimeMean[1] * 1000
    part.rotTimeVar[1] = part.rotTimeVar[1] * 1000
    part.pauseMean[1] = part.pauseMean[1] * 1000
    part.pauseVar[1] = part.pauseVar[1] * 1000
    -- TODO: structure LOP_FORNLOOP (pc 225, target 197)
    part.rotTarget = {}
    part.rotSpeed = {}
    part.pause = {}
    v10 = xmlFile:getValue(key .. "#isSpeedDependent", false)
    part.isSpeedDependent = v10
    self:updateRotationTargetValues(part)
  end
  part.nodes = {}
  xmlFile:iterate(key .. ".node", function(self, part)
    local key = key:getValue(part .. "#node", nil, u1.components, u1.i3dMappings)
    if {node = key}.node ~= nil then
      key = key:getValue(part .. "#rotAxis")
      if {node = key, rotAxis = key}.rotAxis ~= nil then
        if {node = key, rotAxis = key}.rotAxis ~= nil and 1 <= {node = key, rotAxis = key}.rotAxis and {node = key, rotAxis = key}.rotAxis > 3 then
        end
        if not key then
          Logging.xmlWarning(u0, "Invalid rot axis '%s' given for node '%s'. Only '1', '2' or '3' are allowed!", xmlFile.rotAxis, part)
          return
        end
        local v4 = getRotation(xmlFile.node)
        xmlFile.currentRot = {}
      end
      key = key:getValue(part .. "#scale", 1)
      xmlFile.scale = key
      table.insert(u2.nodes, xmlFile)
    end
  end)
  part.nextMoveTime = g_currentMission.time + part.pause[2]
  part.curMoveDirection = 1
  part.isActive = true
  return true
end
function RandomlyMovingParts:updateRandomlyMovingPart(part, dt)
  if part.nextMoveTime < g_currentMission.time then
    if part.isSpeedDependent then
      local v6 = self:getLastSpeed()
      local v7 = self:getRawSpeedLimit()
      local v4 = math.min(v6 / v7, 1)
    end
    v4 = self:getIsRandomlyMovingPartActive(part)
    part.isActive = v4
    if 0 < part.curMoveDirection then
      -- if not v1.isActive then goto L134 end
      v6 = math.min(part.rotTarget[1], part.rotCur[part.rotAxis] + part.rotSpeed[1] * v3)
      part.rotCur[part.rotAxis] = v6
      -- if v1.rotCur[v1.rotAxis] ~= v1.rotTarget[1] then goto L134 end
      part.curMoveDirection = -1
      part.nextMoveTime = g_currentMission.time + part.pause[1]
    else
      v6 = math.max(part.rotTarget[2], part.rotCur[part.rotAxis] + part.rotSpeed[2] * v3)
      part.rotCur[part.rotAxis] = v6
      if part.rotCur[part.rotAxis] == part.rotTarget[2] and part.isActive then
        part.curMoveDirection = 1
        part.nextMoveTime = g_currentMission.time + part.pause[2]
        self:updateRotationTargetValues(part)
      end
    end
    setRotation(part.node, part.rotCur[1], part.rotCur[2], part.rotCur[3])
    -- TODO: structure LOP_FORNPREP (pc 153, target 213)
    if part.nodes[1].rotAxis ~= nil then
      part.nodes[1].currentRot[part.nodes[1].rotAxis] = part.rotCur[part.rotAxis] * part.nodes[1].scale
      setRotation(part.nodes[1].node, part.nodes[1].currentRot[1], part.nodes[1].currentRot[2], part.nodes[1].currentRot[3])
    else
      setRotation(part.nodes[1].node, part.rotCur[1] * part.nodes[1].scale, part.rotCur[2] * part.nodes[1].scale, part.rotCur[3] * part.nodes[1].scale)
    end
    -- TODO: structure LOP_FORNLOOP (pc 212, target 154)
    if self.setMovingToolDirty ~= nil then
      self:setMovingToolDirty(part.node)
    end
    return true
  end
  return false
end
function RandomlyMovingParts.updateRotationTargetValues(v0, v1)
  -- TODO: structure LOP_FORNPREP (pc 3, target 21)
  local v12 = math.random()
  v1.rotTarget[1] = v1.rotMean[1] + v1.rotVar[1] * (-0.5 + v12)
  -- TODO: structure LOP_FORNLOOP (pc 20, target 4)
  -- TODO: structure LOP_FORNPREP (pc 24, target 64)
  local v11 = math.random()
  if 1 == 1 then
    v1.rotSpeed[1] = (v1.rotTarget[1] - v1.rotTarget[2]) / (v1.rotTimeMean[1] + v1.rotTimeVar[1] * (-0.5 + v11))
  else
    v1.rotSpeed[1] = (v1.rotTarget[2] - v1.rotTarget[1]) / (v1.rotTimeMean[1] + v1.rotTimeVar[1] * (-0.5 + v11))
  end
  -- TODO: structure LOP_FORNLOOP (pc 63, target 25)
  -- TODO: structure LOP_FORNPREP (pc 67, target 85)
  v12 = math.random()
  v1.pause[1] = v1.pauseMean[1] + v1.pauseVar[1] * (-0.5 + v12)
  -- TODO: structure LOP_FORNLOOP (pc 84, target 68)
end
function RandomlyMovingParts:getIsRandomlyMovingPartActive(part)
  if part.groundReferenceNode ~= nil then
    local v3 = self:getIsGroundReferenceNodeActive(part.groundReferenceNode)
  end
  return v2
end
