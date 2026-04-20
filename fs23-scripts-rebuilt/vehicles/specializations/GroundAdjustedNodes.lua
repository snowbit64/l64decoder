-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GroundAdjustedNodes = {GROUND_ADJUSTED_NODE_XML_KEY = "vehicle.groundAdjustedNodes.groundAdjustedNode(?)"}
function GroundAdjustedNodes.prerequisitesPresent(v0)
  return true
end
function GroundAdjustedNodes.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("GroundAdjustedNodes")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#node", "Ground adjusted node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. ".raycastNode(?)#node", "Ground adjusted raycast node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. ".raycastNode(?)#distance", "Ground adjusted raycast distance", 4)
  Vehicle.xmlSchema:register(XMLValueType.INT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. ".raycastNode(?)#updateFrame", "Defines the frame delay between two raycasts", "Number of raycasts")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#minY", "Min. Y translation", "translation in i3d - 1")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#maxY", "Max. Y translation", "minY + 1")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#yOffset", "Y translation offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#moveSpeed", "Move speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#resetIfNotActive", "Reset node to start translation if not active", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#activationTime", "In this time after the activation of the node the #moveSpeedStateChange will be used", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#moveSpeedStateChange", "Move speed while node is inactive or active an in range of #activationTime", "#moveSpeed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#updateThreshold", "Position of node will be updated if change is greater than this value", 0.002)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. "#averageInActivePosY", "While nodes are turned off the average Y position will be used as target for all nodes", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function GroundAdjustedNodes.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundAdjustedNodeFromXML", GroundAdjustedNodes.loadGroundAdjustedNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadGroundAdjustedRaycastNodeFromXML", GroundAdjustedNodes.loadGroundAdjustedRaycastNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsGroundAdjustedNodeActive", GroundAdjustedNodes.getIsGroundAdjustedNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "updateGroundAdjustedNode", GroundAdjustedNodes.updateGroundAdjustedNode)
  SpecializationUtil.registerFunction(vehicleType, "groundAdjustRaycastCallback", GroundAdjustedNodes.groundAdjustRaycastCallback)
end
function GroundAdjustedNodes.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", GroundAdjustedNodes)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", GroundAdjustedNodes)
end
function GroundAdjustedNodes:onLoad(savegame)
  self.raycastMask = CollisionFlag.TERRAIN + CollisionFlag.STATIC_OBJECT
  self.spec_groundAdjustedNodes.groundAdjustedNodes = {}
  while true do
    v4 = string.format("vehicle.groundAdjustedNodes.groundAdjustedNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadGroundAdjustedNodeFromXML(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.groundAdjustedNodes, {})
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 51, target 82)
  for v10 = 1, #v2.groundAdjustedNodes[1].raycastNodes do
    if v7.raycastNodes[v10].updateFrame < 0 then
      v7.raycastNodes[v10].updateFrame = #v2.groundAdjustedNodes
    end
    v11.frameCount = v6 % v11.updateFrame + 1
    -- TODO: structure LOP_FORNLOOP (pc 80, target 61)
  end
  self.lastRaycastDistance = 0
  self.lastRaycastGroundPos = {0, 0, 0}
  if #v2.groundAdjustedNodes == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdate", GroundAdjustedNodes)
  end
end
function GroundAdjustedNodes:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_groundAdjustedNodes.groundAdjustedNodes) do
    self:updateGroundAdjustedNode(v10, dt)
    if not (v10.targetY ~= v10.curY) then
      continue
    end
    if not not v10.isActive and 0 >= v10.activationTimer then
    end
    if v11 then
      -- if v10.moveSpeedStateChange then goto L36 end
    end
    if v10.curY < v10.targetY then
      local v13 = math.min(v10.curY + v10.moveSpeed * dt, v10.targetY)
      v10.curY = v13
    else
      v13 = math.max(v10.curY - v10.moveSpeed * dt, v10.targetY)
      v10.curY = v13
    end
    v13 = math.abs(v10.lastY - v10.curY)
    if not (v10.updateThreshold < v13) then
      continue
    end
    setTranslation(v10.node, v10.x, v10.curY, v10.z)
    v10.lastY = v10.curY
    if not (self.setMovingToolDirty ~= nil) then
      continue
    end
    self:setMovingToolDirty(v10.node)
  end
end
function GroundAdjustedNodes:loadGroundAdjustedNodeFromXML(xmlFile, key, adjustedNode)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, self.configFileName, key .. "#index", key .. "#node")
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v4 == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for groundAdjustedNode '%s'!", key)
    return false
  end
  local v5, v6, v7 = getTranslation(v4)
  adjustedNode.node = v4
  adjustedNode.x = v5
  adjustedNode.y = v6
  adjustedNode.z = v7
  adjustedNode.raycastNodes = {}
  while true do
    v9 = string.format("%s.raycastNode(%d)", key, v8)
    v10 = v10:hasProperty(v9)
    if not v10 then
      break
    end
    v11 = self:loadGroundAdjustedRaycastNodeFromXML(xmlFile, v9, adjustedNode, {})
    if v11 then
      table.insert(adjustedNode.raycastNodes, {})
    end
  end
  if 0 < #adjustedNode.raycastNodes then
    v9 = v9:getValue(key .. "#minY", v6 - 1)
    adjustedNode.minY = v9
    v9 = v9:getValue(key .. "#maxY", adjustedNode.minY + 1)
    adjustedNode.maxY = v9
    v9 = v9:getValue(key .. "#yOffset", 0)
    adjustedNode.yOffset = v9
    v10 = v10:getValue(key .. "#moveSpeed", 1)
    adjustedNode.moveSpeed = v10 / 1000
    v10 = v10:getValue(key .. "#moveSpeedStateChange", 1)
    adjustedNode.moveSpeedStateChange = v10 / 1000
    v10 = v10:getValue(key .. "#activationTime", 0)
    adjustedNode.activationTime = v10 * 1000
    adjustedNode.activationTimer = 0
    v9 = v9:getValue(key .. "#resetIfNotActive", true)
    adjustedNode.resetIfNotActive = v9
    v9 = v9:getValue(key .. "#updateThreshold", 0.002)
    adjustedNode.updateThreshold = v9
    adjustedNode.inActiveY = v6
    v9 = v9:getValue(key .. "#averageInActivePosY", false)
    adjustedNode.averageInActivePosY = v9
    adjustedNode.targetY = v6
    adjustedNode.curY = v6
    adjustedNode.lastY = v6
    adjustedNode.isActive = false
  else
    Logging.xmlWarning(self.xmlFile, "No raycastNodes defined for groundAdjustedNode '%s'!", key)
    return false
  end
  return true
end
function GroundAdjustedNodes:loadGroundAdjustedRaycastNodeFromXML(xmlFile, key, groundAdjustedNode, raycastNode)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, self.configFileName, key .. "#index", key .. "#node")
  local v5 = v5:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v5 == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for groundAdjustedNodes raycast '%s'!", key)
    return false
  end
  local v6 = getParent(groundAdjustedNode.node)
  local v7 = getParent(v5)
  if v6 ~= v7 then
    Logging.xmlWarning(self.xmlFile, "Raycast node is not on the same hierarchy level as the groundAdjustedNode (%s)!", key)
    return false
  end
  local v6, v7, v8 = getTranslation(v5)
  raycastNode.node = v5
  raycastNode.yDiff = v7 - groundAdjustedNode.y
  local v9 = v9:getValue(key .. "#distance", 4)
  raycastNode.distance = v9
  raycastNode.history = {}
  -- TODO: structure LOP_FORNPREP (pc 85, target 98)
  raycastNode.history[1] = {0, 0, 0, 0}
  -- TODO: structure LOP_FORNLOOP (pc 97, target 86)
  raycastNode.lastRaycastPos = {0, 0, 0, 0}
  v9 = v9:getValue(key .. "#updateFrame", -1)
  raycastNode.updateFrame = v9
  raycastNode.frameCount = 1
  return true
end
function GroundAdjustedNodes:updateGroundAdjustedNode(adjustedNode, dt)
  local v4 = self:getIsGroundAdjustedNodeActive(adjustedNode)
  adjustedNode.isActive = v4
  if adjustedNode.isActive then
    v4 = math.max(adjustedNode.activationTimer - dt, 0)
    adjustedNode.activationTimer = v4
    -- TODO: structure LOP_FORNPREP (pc 27, target 298)
    if adjustedNode.raycastNodes[1].frameCount == adjustedNode.raycastNodes[1].updateFrame then
      local v12, v13, v14 = localToWorld(adjustedNode.raycastNodes[1].node, 0, adjustedNode.yOffset, 0)
      local v15, v16, v17 = localDirectionToWorld(adjustedNode.raycastNodes[1].node, 0, -1, 0)
      self.lastRaycastDistance = 0
      raycastAll(v12, v13, v14, v15, v16, v17, "groundAdjustRaycastCallback", adjustedNode.raycastNodes[1].distance, self, self.raycastMask)
      -- if 1 >= v1.raycastNodes[1].updateFrame then goto L175 end
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x3 -> L175
      adjustedNode.raycastNodes[1].history[2][1] = self.lastRaycastGroundPos[1]
      adjustedNode.raycastNodes[1].history[2][2] = self.lastRaycastGroundPos[2]
      adjustedNode.raycastNodes[1].history[2][3] = self.lastRaycastGroundPos[3]
      adjustedNode.raycastNodes[1].history[2][4] = self.lastRaycastDistance
      adjustedNode.raycastNodes[1].history[2] = adjustedNode.raycastNodes[1].history[1]
      adjustedNode.raycastNodes[1].history[1] = adjustedNode.raycastNodes[1].history[2]
    elseif adjustedNode.raycastNodes[1].lastRaycastPos[1] ~= nil then
      local v20, v21, v22 = localToWorld(adjustedNode.raycastNodes[1].node, 0, adjustedNode.yOffset, 0)
      local v23 = MathUtil.vector3Length(v20 - adjustedNode.raycastNodes[1].lastRaycastPos[1] + (adjustedNode.raycastNodes[1].history[1][1] - adjustedNode.raycastNodes[1].history[2][1]) / adjustedNode.raycastNodes[1].updateFrame, v21 - adjustedNode.raycastNodes[1].lastRaycastPos[2] + (adjustedNode.raycastNodes[1].history[1][2] - adjustedNode.raycastNodes[1].history[2][2]) / adjustedNode.raycastNodes[1].updateFrame, v22 - adjustedNode.raycastNodes[1].lastRaycastPos[3] + (adjustedNode.raycastNodes[1].history[1][3] - adjustedNode.raycastNodes[1].history[2][3]) / adjustedNode.raycastNodes[1].updateFrame)
    else
    end
    if 1 < v7.updateFrame then
      v7.lastRaycastPos[1] = v9
      v7.lastRaycastPos[2] = v10
      v7.lastRaycastPos[3] = v11
      v7.lastRaycastPos[4] = v8
      v7.frameCount = v7.frameCount + 1
      if v7.updateFrame < v7.frameCount then
        v7.frameCount = 1
      end
    end
    if v8 ~= 0 then
    else
    end
    v13 = MathUtil.clamp(v12, adjustedNode.minY, adjustedNode.maxY)
    adjustedNode.targetY = v13
    v14, v15, v16 = getTranslation(adjustedNode.node)
    adjustedNode.curY = v15
    -- TODO: structure LOP_FORNLOOP (pc 242, target 28)
    return
  end
  if adjustedNode.averageInActivePosY and v3 then
    for v10, v11 in pairs(self.spec_groundAdjustedNodes.groundAdjustedNodes) do
      if not v11.averageInActivePosY then
        continue
      end
    end
    if 0 < v6 then
      adjustedNode.inActiveY = v5 / v6
      for v10, v11 in pairs(v4) do
        if not v11.averageInActivePosY then
          continue
        end
        v11.inActiveY = v5 / v6
      end
    end
  end
  if adjustedNode.resetIfNotActive then
    adjustedNode.targetY = adjustedNode.inActiveY
  end
  adjustedNode.activationTimer = adjustedNode.activationTime
end
function GroundAdjustedNodes:getIsGroundAdjustedNodeActive(groundAdjustedNode)
  if self.getAttacherVehicle ~= nil then
    local v3 = self:getAttacherVehicle()
    if v3 == nil then
    end
  end
  return dt
end
function GroundAdjustedNodes:groundAdjustRaycastCallback(transformId, x, y, z, distance)
  local v6 = getHasTrigger(transformId)
  if v6 then
    return true
  end
  self.lastRaycastDistance = distance
  self.lastRaycastGroundPos[1] = x
  self.lastRaycastGroundPos[2] = y
  self.lastRaycastGroundPos[3] = z
  return false
end
