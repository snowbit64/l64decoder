-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionHoses = {DEFAULT_MAX_UPDATE_DISTANCE = 50}
function ConnectionHoses.prerequisitesPresent(v0)
  return true
end
function ConnectionHoses.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ConnectionHoses")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.connectionHoses#maxUpdateDistance", "Max. distance to vehicle root to update connection hoses", ConnectionHoses.DEFAULT_MAX_UPDATE_DISTANCE)
  ConnectionHoses.registerConnectionHoseXMLPaths(Vehicle.xmlSchema, "vehicle.connectionHoses")
  ConnectionHoses.registerConnectionHoseXMLPaths(Vehicle.xmlSchema, "vehicle.connectionHoses.connectionHoseConfigurations.connectionHoseConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.connectionHoses.connectionHoseConfigurations.connectionHoseConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".connectionHoses#customHoseIndices", "Custom hoses to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".connectionHoses#customTargetIndices", "Custom hose targets to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".connectionHoses#customHoseIndices", "Custom hoses to update")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".connectionHoses#customTargetIndices", "Custom hose targets to update")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ConnectionHoses:registerConnectionHoseXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".skipNode(?)#node", "Skip node")
  self:register(XMLValueType.INT, v1 .. ".skipNode(?)#inputAttacherJointIndex", "Input attacher joint index", 1)
  self:register(XMLValueType.INT, v1 .. ".skipNode(?)#attacherJointIndex", "Attacher joint index", 1)
  self:register(XMLValueType.STRING, v1 .. ".skipNode(?)#type", "Connection hose type")
  self:register(XMLValueType.STRING, v1 .. ".skipNode(?)#specType", "Connection hose specialization type (if defined it needs to match the type of the other tool)")
  self:register(XMLValueType.FLOAT, v1 .. ".skipNode(?)#length", "Hose length")
  self:register(XMLValueType.BOOL, v1 .. ".skipNode(?)#isTwoPointHose", "Is two point hose without sagging", false)
  ConnectionHoses.registerHoseTargetNodesXMLPaths(self, v1 .. ".target(?)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".toolConnectorHose(?)#mountingNode", "Mounting node to toggle visibility")
  self:register(XMLValueType.BOOL, v1 .. ".toolConnectorHose(?)#moveNodes", "Defines if the start and end nodes are moved up depending on hose diameter", true)
  self:register(XMLValueType.BOOL, v1 .. ".toolConnectorHose(?)#additionalHose", "Defines if between start and end node a additional hose is created", true)
  ConnectionHoses.registerHoseTargetNodesXMLPaths(self, v1 .. ".toolConnectorHose(?).startTarget(?)")
  ConnectionHoses.registerHoseTargetNodesXMLPaths(self, v1 .. ".toolConnectorHose(?).endTarget(?)")
  ConnectionHoses.registerHoseNodesXMLPaths(self, v1 .. ".hose(?)")
  ConnectionHoses.registerHoseNodesXMLPaths(self, v1 .. ".localHose(?).hose")
  ConnectionHoses.registerHoseTargetNodesXMLPaths(self, v1 .. ".localHose(?).target")
  ConnectionHoses.registerCustomHoseNodesXMLPaths(self, v1 .. ".customHose(?)")
  ConnectionHoses.registerCustomHoseNodesXMLPaths(self, v1 .. ".customTarget(?)")
end
function ConnectionHoses:registerHoseTargetNodesXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Target node")
  self:register(XMLValueType.VECTOR_N, v1 .. "#attacherJointIndices", "List of corresponding attacher joint indices")
  self:register(XMLValueType.NODE_INDICES, v1 .. "#attacherJointNodes", "List of corresponding attacher joint nodes (i3dIdentifiers or paths separated by space)")
  self:register(XMLValueType.STRING, v1 .. "#type", "Hose type")
  self:register(XMLValueType.STRING, v1 .. "#specType", "Connection hose specialization type (if defined it needs to match the type of the other tool)")
  self:register(XMLValueType.FLOAT, v1 .. "#straighteningFactor", "Straightening Factor", 1)
  self:register(XMLValueType.VECTOR_3, v1 .. "#straighteningDirection", "Straightening direction", "0 0 1")
  self:register(XMLValueType.STRING, v1 .. "#socket", "Socket name to load")
  self:register(XMLValueType.COLOR, v1 .. "#socketColor", "Socket custom color")
  self:register(XMLValueType.STRING, v1 .. "#adapterType", "Adapter type to use", "DEFAULT")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function ConnectionHoses:registerHoseNodesXMLPaths(v1)
  self:register(XMLValueType.VECTOR_N, v1 .. "#inputAttacherJointIndices", "List of corresponding input attacher joint indices")
  self:register(XMLValueType.NODE_INDICES, v1 .. "#inputAttacherJointNodes", "List of corresponding input attacher joint nodes (i3dIdentifiers or paths separated by space)")
  self:register(XMLValueType.STRING, v1 .. "#type", "Hose type")
  self:register(XMLValueType.STRING, v1 .. "#specType", "Connection hose specialization type (if defined it needs to match the type of the other tool)")
  self:register(XMLValueType.STRING, v1 .. "#hoseType", "Hose material type", "DEFAULT")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Hose output node")
  self:register(XMLValueType.BOOL, v1 .. "#isTwoPointHose", "Is two point hose without sagging", false)
  self:register(XMLValueType.BOOL, v1 .. "#isWorldSpaceHose", "Sagging is calculated in world space or local space of hose node", true)
  self:register(XMLValueType.STRING, v1 .. "#dampingRange", "Damping range in meters", 0.05)
  self:register(XMLValueType.FLOAT, v1 .. "#dampingFactor", "Damping factor", 50)
  self:register(XMLValueType.FLOAT, v1 .. "#length", "Hose length", 3)
  self:register(XMLValueType.FLOAT, v1 .. "#diameter", "Hose diameter", 0.02)
  self:register(XMLValueType.FLOAT, v1 .. "#straighteningFactor", "Straightening Factor", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#centerPointDropFactor", "Can be used to manipulate how much the hose will drop while it's getting shorter then set", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#centerPointTension", "Defines the tension on the center control point (0: default behavior)", 0)
  self:register(XMLValueType.ANGLE, v1 .. "#minCenterPointAngle", "Min. angle of sagged curve", "Defined on connectionHose xml, default 90 degree")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#minCenterPointOffset", "Min. center point offset from hose node", "unlimited")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#maxCenterPointOffset", "Max. center point offset from hose node", "unlimited")
  self:register(XMLValueType.FLOAT, v1 .. "#minDeltaY", "Min. delta Y from center point")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#minDeltaYComponent", "Min. delta Y reference node")
  self:register(XMLValueType.COLOR, v1 .. "#color", "Hose color")
  self:register(XMLValueType.STRING, v1 .. "#adapterType", "Adapter type name")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#adapterNode", "Link node for detached adapter")
  self:register(XMLValueType.STRING, v1 .. "#outgoingAdapter", "Adapter type that is used for outgoing connection hose")
  self:register(XMLValueType.STRING, v1 .. "#socket", "Outgoing socket name to load")
  self:register(XMLValueType.COLOR, v1 .. "#socketColor", "Socket custom color")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function ConnectionHoses:registerCustomHoseNodesXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Target or source node")
  self:register(XMLValueType.STRING, v1 .. "#type", "Hose type which can be any string that needs to match between hose and target node")
  self:register(XMLValueType.VECTOR_N, v1 .. "#attacherJointIndices", "Attacher joint indices")
  self:register(XMLValueType.VECTOR_N, v1 .. "#inputAttacherJointIndices", "Input attacher joint indices")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
end
function ConnectionHoses.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getConnectionHoseConfigIndex", ConnectionHoses.getConnectionHoseConfigIndex)
  SpecializationUtil.registerFunction(vehicleType, "updateAttachedConnectionHoses", ConnectionHoses.updateAttachedConnectionHoses)
  SpecializationUtil.registerFunction(vehicleType, "updateConnectionHose", ConnectionHoses.updateConnectionHose)
  SpecializationUtil.registerFunction(vehicleType, "getCenterPointAngle", ConnectionHoses.getCenterPointAngle)
  SpecializationUtil.registerFunction(vehicleType, "getCenterPointAngleRegulation", ConnectionHoses.getCenterPointAngleRegulation)
  SpecializationUtil.registerFunction(vehicleType, "loadConnectionHosesFromXML", ConnectionHoses.loadConnectionHosesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadHoseSkipNode", ConnectionHoses.loadHoseSkipNode)
  SpecializationUtil.registerFunction(vehicleType, "loadToolConnectorHoseNode", ConnectionHoses.loadToolConnectorHoseNode)
  SpecializationUtil.registerFunction(vehicleType, "addHoseTargetNodes", ConnectionHoses.addHoseTargetNodes)
  SpecializationUtil.registerFunction(vehicleType, "loadCustomHosesFromXML", ConnectionHoses.loadCustomHosesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadHoseTargetNode", ConnectionHoses.loadHoseTargetNode)
  SpecializationUtil.registerFunction(vehicleType, "loadHoseNode", ConnectionHoses.loadHoseNode)
  SpecializationUtil.registerFunction(vehicleType, "getClonedSkipHoseNode", ConnectionHoses.getClonedSkipHoseNode)
  SpecializationUtil.registerFunction(vehicleType, "getConnectionTarget", ConnectionHoses.getConnectionTarget)
  SpecializationUtil.registerFunction(vehicleType, "iterateConnectionTargets", ConnectionHoses.iterateConnectionTargets)
  SpecializationUtil.registerFunction(vehicleType, "getIsConnectionTargetUsed", ConnectionHoses.getIsConnectionTargetUsed)
  SpecializationUtil.registerFunction(vehicleType, "getIsConnectionHoseUsed", ConnectionHoses.getIsConnectionHoseUsed)
  SpecializationUtil.registerFunction(vehicleType, "getIsSkipNodeAvailable", ConnectionHoses.getIsSkipNodeAvailable)
  SpecializationUtil.registerFunction(vehicleType, "getConnectionHosesByInputAttacherJoint", ConnectionHoses.getConnectionHosesByInputAttacherJoint)
  SpecializationUtil.registerFunction(vehicleType, "connectHose", ConnectionHoses.connectHose)
  SpecializationUtil.registerFunction(vehicleType, "disconnectHose", ConnectionHoses.disconnectHose)
  SpecializationUtil.registerFunction(vehicleType, "updateToolConnectionHose", ConnectionHoses.updateToolConnectionHose)
  SpecializationUtil.registerFunction(vehicleType, "addHoseToDelayedMountings", ConnectionHoses.addHoseToDelayedMountings)
  SpecializationUtil.registerFunction(vehicleType, "connectHoseToSkipNode", ConnectionHoses.connectHoseToSkipNode)
  SpecializationUtil.registerFunction(vehicleType, "connectHosesToAttacherVehicle", ConnectionHoses.connectHosesToAttacherVehicle)
  SpecializationUtil.registerFunction(vehicleType, "retryHoseSkipNodeConnections", ConnectionHoses.retryHoseSkipNodeConnections)
  SpecializationUtil.registerFunction(vehicleType, "connectCustomHosesToAttacherVehicle", ConnectionHoses.connectCustomHosesToAttacherVehicle)
  SpecializationUtil.registerFunction(vehicleType, "connectCustomHoseNode", ConnectionHoses.connectCustomHoseNode)
  SpecializationUtil.registerFunction(vehicleType, "updateCustomHoseNode", ConnectionHoses.updateCustomHoseNode)
  SpecializationUtil.registerFunction(vehicleType, "disconnectCustomHoseNode", ConnectionHoses.disconnectCustomHoseNode)
end
function ConnectionHoses.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadExtraDependentParts", ConnectionHoses.loadExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateExtraDependentParts", ConnectionHoses.updateExtraDependentParts)
end
function ConnectionHoses.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", ConnectionHoses)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", ConnectionHoses)
end
function ConnectionHoses:onPreLoad(savegame)
  local v3 = self:getConnectionHoseConfigIndex()
  self.spec_connectionHoses.configIndex = v3
end
function ConnectionHoses:onLoad(savegame)
  local v3 = string.format("vehicle.connectionHoses.connectionHoseConfigurations.connectionHoseConfiguration(%d)", self.spec_connectionHoses.configIndex - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.connectionHoses.connectionHoseConfigurations.connectionHoseConfiguration", self.spec_connectionHoses.configIndex, self.components, self)
  self.spec_connectionHoses.numHosesByType = {}
  self.spec_connectionHoses.numToolConnectionsByType = {}
  self.spec_connectionHoses.hoseSkipNodes = {}
  self.spec_connectionHoses.hoseSkipNodeByType = {}
  self.spec_connectionHoses.targetNodes = {}
  self.spec_connectionHoses.targetNodesByType = {}
  self.spec_connectionHoses.toolConnectorHoses = {}
  self.spec_connectionHoses.targetNodeToToolConnection = {}
  self.spec_connectionHoses.hoseNodes = {}
  self.spec_connectionHoses.hoseNodesByInputAttacher = {}
  self.spec_connectionHoses.localHoseNodes = {}
  self.spec_connectionHoses.customHoses = {}
  self.spec_connectionHoses.customHosesByAttacher = {}
  self.spec_connectionHoses.customHosesByInputAttacher = {}
  self.spec_connectionHoses.customHoseTargets = {}
  self.spec_connectionHoses.customHoseTargetsByAttacher = {}
  self.spec_connectionHoses.customHoseTargetsByInputAttacher = {}
  self:loadConnectionHosesFromXML(self.xmlFile, "vehicle.connectionHoses")
  local v4 = v4:hasProperty(v3)
  if v4 then
    self:loadConnectionHosesFromXML(self.xmlFile, v3)
  end
  v4 = v4:getValue("vehicle.connectionHoses#maxUpdateDistance", ConnectionHoses.DEFAULT_MAX_UPDATE_DISTANCE)
  v2.maxUpdateDistance = v4
  if 0 >= #v2.targetNodes then
  end
  v2.targetNodesAvailable = true
  if 0 >= #v2.hoseNodes then
  end
  v2.hoseNodesAvailable = true
  if 0 >= #v2.localHoseNodes then
  end
  v2.localHosesAvailable = true
  if 0 >= #v2.hoseSkipNodes then
  end
  v2.skipNodesAvailable = true
  v2.updateableHoses = {}
  if self.isClient then
    -- if v2.targetNodesAvailable then goto L185 end
    -- if v2.hoseNodesAvailable then goto L185 end
    -- if v2.localHosesAvailable then goto L185 end
    -- if v2.skipNodesAvailable then goto L185 end
  end
  SpecializationUtil.removeEventListener(self, "onPostUpdate", ConnectionHoses)
end
function ConnectionHoses:onLoadFinished(savegame)
  for v6, v7 in ipairs(self.spec_connectionHoses.localHoseNodes) do
    self:connectHose(v7.hose, self, v7.target, false)
  end
end
function ConnectionHoses:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.currentUpdateDistance < self.spec_connectionHoses.maxUpdateDistance then
    -- TODO: structure LOP_FORNPREP (pc 13, target 31)
    if self.updateLoopIndex == self.spec_connectionHoses.updateableHoses[1].connectedObject.updateLoopIndex then
      self:updateConnectionHose(self.spec_connectionHoses.updateableHoses[1], 1)
    end
    -- TODO: structure LOP_FORNLOOP (pc 30, target 14)
    if self.getAttachedImplements ~= nil then
      local impements = self:getAttachedImplements()
      -- TODO: structure LOP_FORNPREP (pc 41, target 54)
      if impements[1].object.updateAttachedConnectionHoses ~= nil then
        impements[1].object:updateAttachedConnectionHoses(self)
      end
      -- TODO: structure LOP_FORNLOOP (pc 53, target 42)
    end
  end
end
function ConnectionHoses.onUpdateEnd(v0, v1, v2, v3, v4)
  ConnectionHoses.onPostUpdate(v0, v1, v2, v3, v4)
end
function ConnectionHoses.getConnectionHoseConfigIndex(v0)
  return 1
end
function ConnectionHoses:updateAttachedConnectionHoses(attacherVehicle)
  -- TODO: structure LOP_FORNPREP (pc 7, target 29)
  if self.spec_connectionHoses.updateableHoses[1].connectedObject == attacherVehicle and self.updateLoopIndex == self.spec_connectionHoses.updateableHoses[1].connectedObject.updateLoopIndex then
    self:updateConnectionHose(self.spec_connectionHoses.updateableHoses[1], 1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 28, target 8)
end
function ConnectionHoses:updateConnectionHose(hose, index)
  local v6, v7, v8 = localToLocal(hose.targetNode, hose.hoseNode, 0, 0, 0)
  local v9, v10, v11 = localToLocal(hose.targetNode, hose.hoseNode, hose.endStraighteningDirection[1] * hose.endStraightening, hose.endStraighteningDirection[2] * hose.endStraightening, hose.endStraighteningDirection[3] * hose.endStraightening)
  if hose.isWorldSpaceHose then
    local v15, v16, v17 = getWorldTranslation(hose.hoseNode)
    local v18, v19, v20 = getWorldTranslation(hose.targetNode)
  else
  end
  v15 = MathUtil.vector3Length(v6, v7, v8)
  v17 = math.max(hose.length - v15, 0)
  if not hose.isWorldSpaceHose then
    local v19, v20, v21 = localToWorld(hose.hoseNode, v12, v13, v14)
  end
  v18 = math.max(v16, 0.04 * v15)
  if hose.isWorldSpaceHose then
    if hose.minDeltaY ~= math.huge then
      v18, v19, v20 = worldToLocal(hose.minDeltaYComponent, v12, v13 - v18, v14)
      local v21, v22, v23 = localToLocal(hose.hoseNode, hose.minDeltaYComponent, 0, 0, 0)
      local v27 = math.max(v19, v22 + hose.minDeltaY)
      local v24, v25, v26 = localToWorld(hose.minDeltaYComponent, v18, v27, v20)
    end
    v18, v19, v20 = worldToLocal(hose.hoseNode, v12, v13, v14)
  end
  v18, v19 = self:getCenterPointAngle(hose.hoseNode, v12, v13, v14, v6, v7, v8, hose.isWorldSpaceHose)
  if v18 + v19 < hose.minCenterPointAngle then
    v21, v22, v23 = self:getCenterPointAngleRegulation(hose.hoseNode, v12, v13, v14, v6, v7, v8, v18, v19, hose.minCenterPointAngle, hose.isWorldSpaceHose)
  end
  if hose.minCenterPointOffset ~= nil and hose.maxCenterPointOffset ~= nil then
    v21 = MathUtil.clamp(v12, hose.minCenterPointOffset[1], hose.maxCenterPointOffset[1])
    v21 = MathUtil.clamp(v13, hose.minCenterPointOffset[2], hose.maxCenterPointOffset[2])
    v21 = MathUtil.clamp(v14, hose.minCenterPointOffset[3], hose.maxCenterPointOffset[3])
  end
  v21, v22, v23 = getWorldTranslation(hose.component)
  if hose.lastComponentPosition ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x80000000 -> L277
  end
  hose.lastComponentPosition = {v21, v22, v23}
  hose.lastComponentVelocity = {v21, v22, v23}
  hose.lastComponentPosition[1] = v21
  hose.lastComponentPosition[2] = v22
  hose.lastComponentPosition[3] = v23
  hose.lastComponentVelocity[1] = v21 - hose.lastComponentPosition[1]
  hose.lastComponentVelocity[2] = v22 - hose.lastComponentPosition[2]
  hose.lastComponentVelocity[3] = v23 - hose.lastComponentPosition[3]
  local v30, v31, v32 = getWorldTranslation(hose.hoseNode)
  local v34, v35, v36 = worldToLocal(hose.hoseNode, v30 + v21 - hose.lastComponentPosition[1] - hose.lastComponentVelocity[1], v31 + v22 - hose.lastComponentPosition[2] - hose.lastComponentVelocity[2], v32 + v23 - hose.lastComponentPosition[3] - hose.lastComponentVelocity[3])
  v34, v35, v36 = localToWorld(hose.hoseNode, v12, v13, v14)
  local v38 = MathUtil.clamp(v35 * -hose.dampingFactor, -hose.dampingRange, hose.dampingRange)
  v38 = MathUtil.clamp(v36 * -hose.dampingFactor, -hose.dampingRange, hose.dampingRange)
  hose.lastVelY = v38 * (v17 - v35) * 0.1 + hose.lastVelY * 0.9
  hose.lastVelZ = v38 * (v17 - v35) * 0.1 + hose.lastVelZ * 0.9
  if hose.isTwoPointHose then
  end
  setShaderParameter(hose.hoseNode, "cv2", v12, v13, v14, hose.centerPointTension or 0, false)
  setShaderParameter(hose.hoseNode, "cv3", v6, v7, v8, 0, false)
  setShaderParameter(hose.hoseNode, "cv4", v9, v10, v11, 1, false)
  if VehicleDebug.state == VehicleDebug.DEBUG_ATTACHER_JOINTS then
    v38 = self:getIsActiveForInput()
    if v38 then
      v38 = MathUtil.vector3Length(v12, v13, v14)
      local v39 = MathUtil.vector3Length(v12 - v6, v13 - v7, v14 - v8)
      local v45 = getName(hose.node)
      local v43 = string.format(...)
      renderText(...)
      local v48 = math.deg(v20)
      local v49 = math.deg(hose.minCenterPointAngle)
      v43 = string.format(...)
      renderText(...)
      local v39, v40, v41 = localToWorld(hose.hoseNode, 0, 0, v5)
      local v42, v43, v44 = localToWorld(hose.hoseNode, 0, 0, 0)
      drawDebugLine(v39, v40, v41, 1, 0, 0, v42, v43, v44, 0, 1, 0)
      local v45, v46, v47 = localToWorld(hose.hoseNode, 0, 0, 0)
      v45, v46, v47 = localToWorld(hose.hoseNode, v12, v13, v14)
      drawDebugLine(v45, v46, v47, 1, 0, 0, v45, v46, v47, 0, 1, 0)
      v45, v46, v47 = localToWorld(hose.hoseNode, v12, v13, v14)
      v45, v46, v47 = localToWorld(hose.hoseNode, v6, v7, v8)
      drawDebugLine(v45, v46, v47, 1, 0, 0, v45, v46, v47, 0, 1, 0)
      v45, v46, v47 = localToWorld(hose.hoseNode, v6, v7, v8)
      v45, v46, v47 = localToWorld(hose.hoseNode, v9, v10, v11)
      drawDebugLine(v45, v46, v47, 1, 0, 0, v45, v46, v47, 0, 1, 0)
      v45, v46, v47 = localToWorld(hose.hoseNode, 0, 0, v5)
      local v48, v49, v50 = localToWorld(hose.hoseNode, 0, 0, 0)
      v48, v49, v50 = localToWorld(hose.hoseNode, v12, v13, v14)
      v48, v49, v50 = localToWorld(hose.hoseNode, v6, v7, v8)
      local v51, v52, v53 = localToWorld(hose.hoseNode, v9, v10, v11)
      drawDebugPoint(v45, v46, v47, 1, 0, 0, 1)
      drawDebugPoint(v48, v49, v50, 1, 0, 0, 1)
      drawDebugPoint(v48, v49, v50, 1, 0, 0, 1)
      drawDebugPoint(v48, v49, v50, 1, 0, 0, 1)
      drawDebugPoint(v51, v52, v53, 1, 0, 0, 1)
      DebugUtil.drawDebugNode(hose.hoseNode)
      DebugUtil.drawDebugNode(hose.targetNode)
    end
  end
end
function ConnectionHoses.getCenterPointAngle(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  local v9 = MathUtil.vector3Length(v2, v3, v4)
  local v11 = MathUtil.vector3Length(v2 - v5, v3 - v6, v4 - v7)
  local v10 = math.abs(...)
  local v11, v12, v13 = getWorldTranslation(v1)
  if v8 then
    local v14, v15, v16 = localToWorld(v1, v2, v3, v4)
    v14, v15, v16 = localToWorld(v1, v5, v6, v7)
  else
  end
  v16 = math.acos((v12 - v3) / v9)
  local v17 = math.acos((v6 - v3) / v10)
  return v16, v17
end
function ConnectionHoses.getCenterPointAngleRegulation(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
  local v12, v13, v14 = getWorldTranslation(v1)
  if v11 then
    local v16, v17, v18 = localToWorld(v1, v2, v3, v4)
    v16, v17, v18 = localToWorld(v1, v5, v6, v7)
  else
  end
  local v15 = MathUtil.vector2Length(v12 - v2, v14 - v4)
  v16 = MathUtil.vector2Length(v5 - v2, v7 - v4)
  local v20 = math.tan(math.pi * 0.5 - v8 / (v8 + v9) * v10)
  local v21 = math.tan(math.pi * 0.5 - v8 / (v8 + v9) * v10)
  if v11 then
    return worldToLocal(v1, v2, v13 - (v20 * v15 + v21 * v16) / 2, v4)
  end
  return v2, v13 - v21, v4
end
function ConnectionHoses:loadConnectionHosesFromXML(xmlFile, key)
  xmlFile:iterate(key .. ".skipNode", function(self, xmlFile)
    local v3 = v3:loadHoseSkipNode(u1, xmlFile, {})
    if v3 then
      table.insert(u2.hoseSkipNodes, {})
      if u2.hoseSkipNodeByType[{}["type"]] == nil then
        u2.hoseSkipNodeByType[{}["type"]] = {}
      end
      table.insert(u2.hoseSkipNodeByType[key["type"]], key)
    end
  end)
  self:addHoseTargetNodes(xmlFile, key .. ".target")
  xmlFile:iterate(key .. ".toolConnectorHose", function(self, xmlFile)
    local v3 = v3:loadToolConnectorHoseNode(u1, xmlFile, {})
    if v3 then
      table.insert(u2.toolConnectorHoses, {})
      u2.targetNodeToToolConnection[{}.startTargetNodeIndex] = {}
      u2.targetNodeToToolConnection[{}.endTargetNodeIndex] = {}
    end
  end)
  xmlFile:iterate(key .. ".hose", function(self, xmlFile)
    local v3 = v3:loadHoseNode(u1, xmlFile, {}, true)
    if v3 then
      table.insert(u2.hoseNodes, {})
      for v6, v7 in pairs({index = #u2.hoseNodes}.inputAttacherJointIndices) do
        if u2.hoseNodesByInputAttacher[v7] == nil then
          u2.hoseNodesByInputAttacher[v7] = {}
        end
        table.insert(u2.hoseNodesByInputAttacher[v7], key)
      end
    end
  end)
  xmlFile:iterate(key .. ".localHose", function(self, xmlFile)
    local v3 = v3:loadHoseNode(u1, xmlFile .. ".hose", {}, false)
    if v3 then
      local v4 = v4:loadHoseTargetNode(u1, xmlFile .. ".target", {})
      if v4 then
        table.insert(u2.localHoseNodes, {hose = {}, target = {}})
      end
    end
  end)
  self:loadCustomHosesFromXML(self.spec_connectionHoses.customHoses, self.spec_connectionHoses.customHosesByAttacher, self.spec_connectionHoses.customHosesByInputAttacher, xmlFile, key .. ".customHose")
  self:loadCustomHosesFromXML(self.spec_connectionHoses.customHoseTargets, self.spec_connectionHoses.customHoseTargetsByAttacher, self.spec_connectionHoses.customHoseTargetsByInputAttacher, xmlFile, key .. ".customTarget")
end
function ConnectionHoses:loadHoseSkipNode(xmlFile, targetKey, entry)
  local v4 = xmlFile:getValue(targetKey .. "#node", nil, self.components, self.i3dMappings)
  entry.node = v4
  if entry.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for hose skip node '%s'", targetKey)
    return false
  end
  v4 = xmlFile:getValue(targetKey .. "#inputAttacherJointIndex", 1)
  entry.inputAttacherJointIndex = v4
  v4 = xmlFile:getValue(targetKey .. "#attacherJointIndex", 1)
  entry.attacherJointIndex = v4
  v4 = xmlFile:getValue(targetKey .. "#type")
  entry["type"] = v4
  v4 = xmlFile:getValue(targetKey .. "#specType")
  entry.specType = v4
  if entry["type"] == nil then
    Logging.xmlWarning(xmlFile, "Missing type for hose skip node '%s'", targetKey)
    return false
  end
  v4 = xmlFile:getValue(targetKey .. "#length")
  entry.length = v4
  v4 = xmlFile:getValue(targetKey .. "#isTwoPointHose", false)
  entry.isTwoPointHose = v4
  entry.isSkipNode = true
  return true
end
function ConnectionHoses:loadToolConnectorHoseNode(xmlFile, targetKey, entry)
  local key = string.format("%s.startTarget", targetKey)
  local v6 = self:addHoseTargetNodes(xmlFile, key)
  entry.startTargetNodeIndex = v6
  if entry.startTargetNodeIndex == nil then
    Logging.xmlWarning(xmlFile, "startTarget is missing for tool connection hose '%s'", targetKey)
    return false
  end
  v6 = string.format("%s.endTarget", targetKey)
  v6 = self:addHoseTargetNodes(xmlFile, v6)
  entry.endTargetNodeIndex = v6
  if entry.endTargetNodeIndex == nil then
    Logging.xmlWarning(xmlFile, "endTarget is missing for tool connection hose '%s'", targetKey)
    return false
  end
  for v11, v12 in pairs(v4.targetNodes[entry.startTargetNodeIndex].attacherJointIndices) do
    if not (v7.attacherJointIndices[v11] ~= nil) then
      continue
    end
    Logging.xmlWarning(xmlFile, "Double usage of attacher joint index '%d' in '%s'", v11, targetKey)
  end
  v8 = xmlFile:getValue(targetKey .. "#moveNodes", true)
  entry.moveNodes = v8
  v8 = xmlFile:getValue(targetKey .. "#additionalHose", true)
  entry.additionalHose = v8
  if entry.moveNodes then
    v8, v9, v10 = getTranslation(v6.node)
    local v11, v12, v13 = getTranslation(v7.node)
    local v14, v15, v16 = MathUtil.vector3Normalize(v8 - v11, v9 - v12, v10 - v13)
    local v19 = getParent(v7.node)
    local v17, v18, v19 = localDirectionToLocal(v7.node, v19, 0, 1, 0)
    if v14 == 0 and v15 == 0 then
      -- cmp-jump LOP_JUMPXEQKN R16 aux=0x22 -> L174
    end
    local v20 = MathUtil.isNan(v14)
    if not v20 then
      v20 = MathUtil.isNan(v15)
      if not v20 then
        v20 = MathUtil.isNan(v16)
        if not v20 then
          setDirection(v6.node, -v14, -v15, -v16, v17, v18, v19)
          setDirection(v7.node, v14, v15, v16, v17, v18, v19)
        end
      end
    end
  end
  v8 = xmlFile:getValue(targetKey .. "#mountingNode", nil, self.components, self.i3dMappings)
  entry.mountingNode = v8
  if entry.mountingNode ~= nil then
    setVisibility(entry.mountingNode, false)
  end
  if v4.numToolConnectionsByType[v4.targetNodes[entry.startTargetNodeIndex]["type"] .. (v4.targetNodes[entry.startTargetNodeIndex].specType or "")] == nil then
    v4.numToolConnectionsByType[v4.targetNodes[entry.startTargetNodeIndex]["type"] .. (v4.targetNodes[entry.startTargetNodeIndex].specType or "")] = 0
  end
  v4.numToolConnectionsByType[v8] = v4.numToolConnectionsByType[v8] + 1
  entry.typedIndex = v4.numToolConnectionsByType[v8]
  entry.connected = false
  return true
end
function ConnectionHoses:addHoseTargetNodes(xmlFile, key)
  xmlFile:iterate(key, function(self, xmlFile)
    local v3 = v3:loadHoseTargetNode(u1, xmlFile, {})
    if v3 then
      table.insert(u2.targetNodes, {})
      if u2.targetNodesByType[{index = #u2.targetNodes}["type"]] == nil then
        u2.targetNodesByType[{index = #u2.targetNodes}["type"]] = {}
      end
      table.insert(u2.targetNodesByType[key["type"]], key)
      u3 = true
    end
  end)
  if false then
    return #self.spec_connectionHoses.targetNodes
  end
end
function ConnectionHoses.loadCustomHosesFromXML(v0, v1, v2, v3, v4, v5)
  v4:iterate(v5, function(v0, v1)
    local v3 = v3:getValue(v1 .. "#node", nil, u1.components, u1.i3dMappings)
    if {node = v3}.node ~= nil then
      v3 = v3:getValue(v1 .. "#type")
      if {node = v3, ["type"] = v3}["type"] ~= nil then
        v3 = v3:upper()
        v3 = v3:getValue(v1 .. "#attacherJointIndices", nil, true)
        for v7, v8 in ipairs(v3) do
          v2.attacherJointIndices[v8] = v8
          if u2[v8] == nil then
            u2[v8] = {}
          end
          table.insert(u2[v8], v2)
        end
        v4 = v4:getValue(v1 .. "#inputAttacherJointIndices", nil, true)
        v2.inputAttacherJointIndices = {}
        for v8, v9 in ipairs(v4) do
          v2.inputAttacherJointIndices[v9] = v9
          if u3[v9] == nil then
            u3[v9] = {}
          end
          table.insert(u3[v9], v2)
        end
        v2.objectChanges = {}
        ObjectChangeUtil.loadObjectChangeFromXML(u0, v1, v2.objectChanges, u1.components, u1)
        ObjectChangeUtil.setObjectChanges(v2.objectChanges, false)
        v6 = getTranslation(v2.node)
        v2.startTranslation = {}
        v6 = getRotation(v2.node)
        v2.startRotation = {}
        v2.isActive = false
        table.insert(u4, v2)
        return
      end
      Logging.xmlWarning(u0, "Missing type for custom hose '%s'", v1)
      return
    end
    Logging.xmlWarning(u0, "Missing node for custom hose '%s'", v1)
  end)
end
function ConnectionHoses:loadHoseTargetNode(xmlFile, targetKey, entry)
  local v4 = xmlFile:getValue(targetKey .. "#node", nil, self.components, self.i3dMappings)
  entry.node = v4
  if entry.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for connection hose target '%s'", targetKey)
    return false
  end
  entry.attacherJointIndices = {}
  v4 = xmlFile:getValue(targetKey .. "#attacherJointIndices", nil, true)
  for v8, v9 in ipairs(v4) do
    entry.attacherJointIndices[v9] = v9
  end
  v5 = xmlFile:getValue(targetKey .. "#attacherJointNodes", nil, self.components, self.i3dMappings, true)
  for v9, v10 in ipairs(v5) do
    local v11 = self:getAttacherJointIndexByNode(v10)
    if not (v11 ~= nil) then
      continue
    end
    entry.attacherJointIndices[v11] = v11
  end
  v6 = xmlFile:getValue(targetKey .. "#type")
  entry["type"] = v6
  v6 = xmlFile:getValue(targetKey .. "#specType")
  entry.specType = v6
  v6 = xmlFile:getValue(targetKey .. "#straighteningFactor", 1)
  entry.straighteningFactor = v6
  v6 = xmlFile:getValue(targetKey .. "#straighteningDirection", nil, true)
  entry.straighteningDirection = v6
  v6 = xmlFile:getValue(targetKey .. "#socket")
  if v6 ~= nil then
    v7 = xmlFile:getValue(targetKey .. "#socketColor", nil, true)
    v8 = v8:linkSocketToNode(v6, entry.node, self.customEnvironment, v7)
    entry.socket = v8
  end
  if entry["type"] ~= nil then
    v7 = xmlFile:getValue(targetKey .. "#adapterType", "DEFAULT")
    entry.adapterName = v7
    if entry.adapter == nil then
      entry.adapter = {node = entry.node, refNode = entry.node}
    end
    entry.objectChanges = {}
    ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, targetKey, entry.objectChanges, self.components, self)
    ObjectChangeUtil.setObjectChanges(entry.objectChanges, false)
  else
    Logging.xmlWarning(xmlFile, "Missing type for '%s'", targetKey)
    return false
  end
  return true
end
function ConnectionHoses:loadHoseNode(xmlFile, hoseKey, entry, isBaseHose)
  entry.inputAttacherJointIndices = {}
  local v5 = xmlFile:getValue(hoseKey .. "#inputAttacherJointIndices", nil, true)
  for v9, v10 in ipairs(v5) do
    entry.inputAttacherJointIndices[v10] = v10
  end
  v6 = xmlFile:getValue(hoseKey .. "#inputAttacherJointNodes", nil, self.components, self.i3dMappings, true)
  for v10, v11 in ipairs(v6) do
    local v12 = self:getInputAttacherJointIndexByNode(v11)
    if not (v12 ~= nil) then
      continue
    end
    entry.inputAttacherJointIndices[v12] = v12
  end
  v7 = xmlFile:getValue(hoseKey .. "#type")
  entry["type"] = v7
  v7 = xmlFile:getValue(hoseKey .. "#specType")
  entry.specType = v7
  if entry["type"] == nil then
    Logging.xmlWarning(xmlFile, "Missing type attribute in '%s'", hoseKey)
    return false
  end
  v7 = xmlFile:getValue(hoseKey .. "#hoseType", "DEFAULT")
  entry.hoseType = v7
  v7 = xmlFile:getValue(hoseKey .. "#node", nil, self.components, self.i3dMappings)
  entry.node = v7
  if entry.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for connection hose '%s'", hoseKey)
    return false
  end
  if isBaseHose then
    if self.spec_connectionHoses.numHosesByType[entry["type"] .. (entry.specType or "")] == nil then
      self.spec_connectionHoses.numHosesByType[entry["type"] .. (entry.specType or "")] = 0
    end
    v7.numHosesByType[v8] = v7.numHosesByType[v8] + 1
    entry.typedIndex = v7.numHosesByType[v8]
  end
  v7 = xmlFile:getValue(hoseKey .. "#isTwoPointHose", false)
  entry.isTwoPointHose = v7
  v7 = xmlFile:getValue(hoseKey .. "#isWorldSpaceHose", true)
  entry.isWorldSpaceHose = v7
  v7 = self:getParentComponent(entry.node)
  entry.component = v7
  entry.lastVelY = 0
  entry.lastVelZ = 0
  v7 = xmlFile:getValue(hoseKey .. "#dampingRange", 0.05)
  entry.dampingRange = v7
  v7 = xmlFile:getValue(hoseKey .. "#dampingFactor", 50)
  entry.dampingFactor = v7
  v7 = xmlFile:getValue(hoseKey .. "#length", 3)
  entry.length = v7
  v7 = xmlFile:getValue(hoseKey .. "#diameter", 0.02)
  entry.diameter = v7
  v7 = xmlFile:getValue(hoseKey .. "#straighteningFactor", 1)
  entry.straighteningFactor = v7
  v7 = xmlFile:getValue(hoseKey .. "#centerPointDropFactor", 1)
  entry.centerPointDropFactor = v7
  v7 = xmlFile:getValue(hoseKey .. "#centerPointTension", 0)
  entry.centerPointTension = v7
  v7 = xmlFile:getValue(hoseKey .. "#minCenterPointAngle")
  entry.minCenterPointAngle = v7
  v7 = xmlFile:getValue(hoseKey .. "#minCenterPointOffset", nil, true)
  entry.minCenterPointOffset = v7
  v7 = xmlFile:getValue(hoseKey .. "#maxCenterPointOffset", nil, true)
  entry.maxCenterPointOffset = v7
  if entry.minCenterPointOffset ~= nil and entry.maxCenterPointOffset ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 275, target 298)
    if entry.minCenterPointOffset[1] == 0 then
      entry.minCenterPointOffset[1] = -math.huge
    end
    if entry.maxCenterPointOffset[v9] == 0 then
      entry.maxCenterPointOffset[v9] = math.huge
    end
    -- TODO: structure LOP_FORNLOOP (pc 297, target 276)
  end
  v7 = xmlFile:getValue(hoseKey .. "#minDeltaY", math.huge)
  entry.minDeltaY = v7
  v7 = xmlFile:getValue(hoseKey .. "#minDeltaYComponent", entry.component, self.components, self.i3dMappings)
  entry.minDeltaYComponent = v7
  v7 = xmlFile:getValue(hoseKey .. "#color", nil, true)
  entry.color = v7
  v7 = xmlFile:getValue(hoseKey .. "#adapterType")
  entry.adapterName = v7
  v7 = xmlFile:getValue(hoseKey .. "#outgoingAdapter")
  entry.outgoingAdapter = v7
  v7 = xmlFile:getValue(hoseKey .. "#adapterNode", nil, self.components, self.i3dMappings)
  entry.adapterNode = v7
  if entry.adapterNode ~= nil then
    v7 = v7:getClonedAdapterNode(entry["type"], entry.adapterName or "DEFAULT", self.customEnvironment, true)
    if v7 ~= nil then
      link(entry.adapterNode, v7)
    else
      Logging.xmlWarning(xmlFile, "Unable to find detached adapter for type '%s' in '%s'", entry.adapterName or "DEFAULT", hoseKey)
    end
  end
  v7 = xmlFile:getValue(hoseKey .. "#socket")
  if v7 ~= nil then
    v8 = xmlFile:getValue(hoseKey .. "#socketColor", nil, true)
    v9 = v9:linkSocketToNode(v7, entry.node, self.customEnvironment, v8)
    entry.socket = v9
    if entry.socket ~= nil then
      setRotation(entry.socket.node, 0, math.pi, 0)
    end
  end
  v8, v9, v10, v11 = v8:getClonedHoseNode(entry["type"], entry.hoseType, entry.length, entry.diameter, entry.color, self.customEnvironment)
  if v8 ~= nil then
    local v14 = v14:getSocketTarget(entry.socket, entry.node)
    if entry.outgoingAdapter ~= nil then
      local v17, v18 = v17:getClonedAdapterNode(entry["type"], entry.outgoingAdapter, self.customEnvironment)
      if v17 ~= nil then
        link(v14, v17)
        -- cmp-jump LOP_JUMPXEQKNIL R19 aux=0x80000000 -> L519
        setRotation(v17, 0, math.pi, 0)
      else
        Logging.xmlWarning(xmlFile, "Unable to find adapter type '%s' in '%s'", entry.outgoingAdapter, hoseKey)
      end
    end
    link(v12, v8)
    setTranslation(v8, 0, 0, 0)
    setRotation(v8, 0, v15, 0)
    entry.hoseNode = v8
    entry.visibilityNode = v13
    entry.startStraightening = v9 * entry.straighteningFactor
    entry.endStraightening = v10
    entry.endStraighteningBase = v10
    entry.endStraighteningDirectionBase = {0, 0, 1}
    entry.endStraighteningDirection = entry.endStraighteningDirectionBase
    entry.minCenterPointAngle = entry.minCenterPointAngle or v11
    setVisibility(entry.visibilityNode, false)
  else
    Logging.xmlWarning(xmlFile, "Unable to find connection hose with length '%.2f' and diameter '%.2f' in '%s'", entry.length, entry.diameter, hoseKey)
    return false
  end
  entry.objectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, hoseKey, entry.objectChanges, self.components, self)
  ObjectChangeUtil.setObjectChanges(entry.objectChanges, false)
  return true
end
function ConnectionHoses:getClonedSkipHoseNode(sourceHose, skipNode)
  local v4 = self:getParentComponent(skipNode.node)
  v4 = self:getParentComponent(skipNode.node)
  if not skipNode.length then
  end
  v3.length = v4
  v3.diameter = sourceHose.diameter
  v3.isTwoPointHose = skipNode.isTwoPointHose
  v3.color = sourceHose.color
  local v4, v5, v6, v7 = v4:getClonedHoseNode(v3["type"], v3.hoseType, v3.length, v3.diameter, v3.color, self.customEnvironment)
  if v4 ~= nil then
    link(v3.node, v4)
    setTranslation(v4, 0, 0, 0)
    setRotation(v4, 0, 0, 0)
    v3.hoseNode = v4
    v3.visibilityNode = v4
    v3.startStraightening = v5
    v3.endStraightening = v6
    v3.endStraighteningBase = v6
    v3.endStraighteningDirectionBase = {0, 0, 1}
    v3.endStraighteningDirection = v3.endStraighteningDirectionBase
    v3.minCenterPointAngle = v7
    setVisibility(v3.visibilityNode, false)
  else
    Logging.xmlWarning(self.xmlFile, "Unable to find connection hose with length '%.2f' and diameter '%.2f' in '%s'", v3.length, v3.diameter, "skipHoseClone")
    return false
  end
  v3.objectChanges = {}
  return v3
end
function ConnectionHoses:getConnectionTarget(attacherJointIndex, type, specType, excludeToolConnections)
  if #self.spec_connectionHoses.targetNodes == 0 and #self.spec_connectionHoses.hoseSkipNodes == 0 then
    return nil
  end
  if v5.targetNodesByType[type] ~= nil then
    for v10, v11 in ipairs(v5.targetNodesByType[type]) do
      if not (v11.attacherJointIndices[attacherJointIndex] ~= nil) then
        continue
      end
      if not (v11.specType == specType) then
        continue
      end
      local v12 = self:getIsConnectionTargetUsed(v11)
      if not not v12 then
        continue
      end
      if v5.targetNodeToToolConnection[v11.index] ~= nil and excludeToolConnections ~= nil and excludeToolConnections and v5.targetNodeToToolConnection[v11.index].delayedMounting == nil then
        return nil
      end
      return v11, false
    end
  end
  if v5.hoseSkipNodeByType[type] ~= nil then
    for v10, v11 in ipairs(v5.hoseSkipNodeByType[type]) do
      if not (v11.specType == specType) then
        continue
      end
      v12 = self:getIsSkipNodeAvailable(v11)
      if not v12 then
        continue
      end
      return v11, true
    end
  end
  return nil
end
function ConnectionHoses:iterateConnectionTargets(func, attacherJointIndex, type, specType, excludeToolConnections)
  if #self.spec_connectionHoses.targetNodes == 0 and #self.spec_connectionHoses.hoseSkipNodes == 0 then
    return nil
  end
  if v6.targetNodesByType[type] ~= nil then
    for v11, v12 in ipairs(v6.targetNodesByType[type]) do
      if not (v12.attacherJointIndices[attacherJointIndex] ~= nil) then
        continue
      end
      if not (v12.specType == specType) then
        continue
      end
      local v13 = self:getIsConnectionTargetUsed(v12)
      if not not v13 then
        continue
      end
      if v6.targetNodeToToolConnection[v12.index] ~= nil and excludeToolConnections ~= nil and excludeToolConnections and v6.targetNodeToToolConnection[v12.index].delayedMounting == nil then
        return nil
      end
      local v14 = func(v12, false)
      if not v14 then
        break
      end
    end
  end
  if v6.hoseSkipNodeByType[type] ~= nil then
    for v11, v12 in ipairs(v6.hoseSkipNodeByType[type]) do
      if not (v12.specType == specType) then
        continue
      end
      v13 = self:getIsSkipNodeAvailable(v12)
      if not v13 then
        continue
      end
      v13 = func(v12, true)
      if not v13 then
        break
      end
    end
  end
  return nil
end
function ConnectionHoses.getIsConnectionTargetUsed(v0, v1)
  if v1.connectedObject == nil then
  end
  return true
end
function ConnectionHoses.getIsConnectionHoseUsed(v0, v1)
  if v1.connectedObject == nil then
  end
  return true
end
function ConnectionHoses:getIsSkipNodeAvailable(skipNode)
  if self.getAttacherVehicle == nil then
    return false
  end
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    local attacherJointIndex = attacherVehicle:getAttacherJointIndexFromObject(self)
    local implement = attacherVehicle:getImplementFromAttacherJointIndex(attacherJointIndex)
    if implement.inputJointDescIndex == skipNode.inputAttacherJointIndex then
      local v6 = attacherVehicle:getConnectionTarget(attacherJointIndex, skipNode["type"], skipNode.specType, true)
      if v6 ~= nil and skipNode.parentHose ~= nil then
      end
      return v5
    end
  end
  return false
end
function ConnectionHoses:getConnectionHosesByInputAttacherJoint(inputJointDescIndex)
  if self.spec_connectionHoses.hoseNodesByInputAttacher[inputJointDescIndex] ~= nil then
    return self.spec_connectionHoses.hoseNodesByInputAttacher[inputJointDescIndex]
  end
  return {}
end
function ConnectionHoses:connectHose(sourceHose, targetObject, targetHose, updateToolConnections)
  if updateToolConnections ~= nil then
    -- if v4 then goto L8 end
  else
    local v7 = targetObject:updateToolConnectionHose(self, sourceHose, targetObject, targetHose, true)
    if v7 then
    else
      targetObject:addHoseToDelayedMountings(self, sourceHose, targetObject, targetHose)
    end
  end
  if v6 then
    targetHose.connectedObject = self
    sourceHose.connectedObject = targetObject
    sourceHose.targetHose = targetHose
    if sourceHose.adapterName ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R9 aux=0x6 -> L74
      local v9, v10 = v9:getClonedAdapterNode(targetHose["type"], sourceHose.adapterName, self.customEnvironment)
    elseif targetHose.adapterName ~= "NONE" then
      v9, v10 = v9:getClonedAdapterNode(targetHose["type"], targetHose.adapterName, self.customEnvironment)
    end
    if v7 ~= nil then
      v10 = v10:getSocketTarget(targetHose.socket, targetHose.node)
      link(v10, v7)
      setTranslation(v7, 0, 0, 0)
      setRotation(v7, 0, 0, 0)
      targetObject:addAllSubWashableNodes(v7)
      targetHose.adapter.node = v7
      targetHose.adapter.refNode = v8
      targetHose.adapter.isLinked = true
    end
    sourceHose.targetNode = targetHose.adapter.refNode
    setVisibility(sourceHose.visibilityNode, true)
    setShaderParameter(sourceHose.hoseNode, "cv0", 0, 0, -sourceHose.startStraightening, 1, false)
    sourceHose.endStraightening = sourceHose.endStraighteningBase * targetHose.straighteningFactor
    if not targetHose.straighteningDirection then
    end
    sourceHose.endStraighteningDirection = v9
    ObjectChangeUtil.setObjectChanges(targetHose.objectChanges, true)
    ObjectChangeUtil.setObjectChanges(sourceHose.objectChanges, true)
    v9:openSocket(sourceHose.socket)
    v9:openSocket(targetHose.socket)
    self:updateConnectionHose(sourceHose, 0)
    table.insert(v5.updateableHoses, sourceHose)
    return true
  end
  return false
end
function ConnectionHoses:disconnectHose(hose)
  if hose.targetHose ~= nil then
    updateToolConnections:updateToolConnectionHose(self, hose, hose.connectedObject, hose.targetHose, false)
    if hose.targetHose.isSkipNode ~= nil then
    end
    if hose.isClonedSkipNodeHose ~= nil then
    end
    if not updateToolConnections then
      -- if not v5 then goto L86 end
    end
    if hose.parentVehicle ~= nil and hose.parentHose ~= nil then
      hose.parentHose.childVehicle = nil
      hose.parentHose.childHose = nil
      v6:disconnectHose(hose.parentHose)
    end
    if hose.childVehicle ~= nil and hose.childHose ~= nil then
      hose.childHose.parentVehicle = nil
      hose.childHose.parentHose = nil
      v6:disconnectHose(hose.childHose)
    end
    targetHose.parentHose = nil
    if targetHose.adapter ~= nil and targetHose.adapter.isLinked ~= nil and targetHose.adapter.isLinked then
      v6:removeAllSubWashableNodes(targetHose.adapter.node)
      delete(targetHose.adapter.node)
      targetHose.adapter.node = targetHose.node
      targetHose.adapter.refNode = targetHose.node
      targetHose.adapter.isLinked = false
    end
    setVisibility(hose.visibilityNode, false)
    ObjectChangeUtil.setObjectChanges(targetHose.objectChanges, false)
    ObjectChangeUtil.setObjectChanges(hose.objectChanges, false)
    v6:closeSocket(hose.socket)
    v6:closeSocket(targetHose.socket)
    targetHose.connectedObject = nil
    hose.connectedObject = nil
    hose.targetHose = nil
    table.removeElement(targetObject.updateableHoses, hose)
  end
end
function ConnectionHoses:updateToolConnectionHose(sourceObject, sourceHose, targetObject, targetHose, visibility)
  if self.spec_connectionHoses.targetNodeToToolConnection[targetHose.index] ~= nil then
    if self.spec_connectionHoses.targetNodeToToolConnection[targetHose.index].startTargetNodeIndex == targetHose.index then
    end
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L360
    if visibility and v8.delayedMounting ~= nil and v8.delayedMounting.sourceHose.connectedObject == nil then
      if v8.delayedMounting.sourceObject == sourceObject then
      end
      if v8.delayedMounting.sourceHose["type"] == sourceHose["type"] and v8.delayedMounting.sourceHose.specType ~= sourceHose.specType then
      end
      -- if not v11 then goto L360 end
      -- if not v12 then goto L360 end
      local v13, v14, v15 = localToLocal(targetHose.node, v10.node, 0, 0, 0)
      local v16 = MathUtil.vector3Length(v13, v14, v15)
      if v8.additionalHose then
        local v17, v18, v19, v20 = v17:getClonedHoseNode(sourceHose["type"], sourceHose.hoseType, v16, sourceHose.diameter, sourceHose.color, self.customEnvironment)
        if v17 ~= nil then
          link(targetHose.node, v17)
          setTranslation(v17, 0, 0, 0)
          local v21, v22, v23 = localToLocal(v17, v10.node, 0, 0, 0)
          if v21 == 0 and v22 == nil then
            -- cmp-jump LOP_JUMPXEQKNIL R23 aux=0x0 -> L188
          end
          setDirection(v17, v21, v22, v23, 0, 0, 1)
          setShaderParameter(v17, "cv0", 0, 0, -v23 * 0.5, 0, false)
          setShaderParameter(v17, "cv2", v21 * 0.5 + 0.003, v22 * 0.5, v23 * 0.5, 0, false)
          setShaderParameter(v17, "cv3", v21 - 0.003, v22, v23, 0, false)
          setShaderParameter(v17, "cv4", v21 - 0.003, v22, v23 + v23 * 0.5, 0, false)
          if v8.moveNodes then
            v7(targetHose)
            v7(v10)
          end
          sourceObject:addAllSubWashableNodes(v17)
          v8.hoseNode = v17
          v8.hoseNodeObject = sourceObject
        else
          return false
        end
      end
      v8.connected = true
      if v8.mountingNode ~= nil then
        setVisibility(v8.mountingNode, true)
      end
      if v8.delayedMounting ~= nil then
        v8.delayedUnmounting = {}
        table.insert(v8.delayedUnmounting, v8.delayedMounting)
        table.insert(v8.delayedUnmounting, {sourceObject = sourceObject, sourceHose = sourceHose, targetObject = targetObject, targetHose = targetHose})
        v8.delayedMounting = nil
        v18:connectHose(v8.delayedMounting.sourceHose, v8.delayedMounting.targetObject, v8.delayedMounting.targetHose, false)
        v18:retryHoseSkipNodeConnections(false)
      end
      return true
      -- goto L360  (LOP_JUMP +80)
    end
    -- if not v8.connected then goto L360 end
    v8.connected = false
    if v8.hoseNode ~= nil then
      v11:removeAllSubWashableNodes(v8.hoseNode)
      delete(v8.hoseNode)
      v8.hoseNode = nil
      v8.hoseNodeObject = nil
    end
    if v8.mountingNode ~= nil then
      setVisibility(v8.mountingNode, false)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L360
    for v14, v15 in ipairs(v8.delayedUnmounting) do
      if not (sourceHose ~= v15.sourceHose) then
        continue
      end
      v16:disconnectHose(v15.sourceHose)
      if v15.sourceHose.isClonedSkipNodeHose ~= nil and not not v15.sourceHose.isClonedSkipNodeHose then
        continue
      end
      v8.delayedMounting = v15
    end
    v8.delayedUnmounting = nil
  else
    return true
  end
  return false
end
function ConnectionHoses:addHoseToDelayedMountings(sourceObject, sourceHose, targetObject, targetHose)
  if self.spec_connectionHoses.targetNodeToToolConnection[targetHose.index] ~= nil then
    if self.spec_connectionHoses.targetNodeToToolConnection[targetHose.index].delayedMounting ~= nil then
      -- if v2.typedIndex ~= v0.spec_connectionHoses.targetNodeToToolConnection[v4.index].typedIndex then goto L44 end
    end
    if v6.delayedMounting ~= nil then
    end
    v6.delayedMounting = {sourceObject = sourceObject, sourceHose = sourceHose, targetObject = targetObject, targetHose = targetHose}
    if true then
      v8:retryHoseSkipNodeConnections(true, sourceObject)
    end
  end
end
function ConnectionHoses:connectHoseToSkipNode(sourceHose, targetObject, skipNode, childHose, childVehicle)
  skipNode.connectedObject = self
  sourceHose.connectedObject = targetObject
  sourceHose.targetHose = skipNode
  sourceHose.targetNode = skipNode.node
  setVisibility(sourceHose.visibilityNode, true)
  setShaderParameter(sourceHose.hoseNode, "cv0", 0, 0, -sourceHose.startStraightening, 1, false)
  ObjectChangeUtil.setObjectChanges(sourceHose.objectChanges, true)
  self:addAllSubWashableNodes(sourceHose.hoseNode)
  sourceHose.childVehicle = childVehicle
  sourceHose.childHose = childHose
  if self.getAttacherVehicle ~= nil then
    local attacherVehicle1 = self:getAttacherVehicle()
    if attacherVehicle1.getAttacherVehicle ~= nil then
      local attacherVehicle2 = attacherVehicle1:getAttacherVehicle()
      if attacherVehicle2 ~= nil then
        local attacherJointIndex = attacherVehicle2:getAttacherJointIndexFromObject(attacherVehicle1)
        local v10 = attacherVehicle2:getImplementFromAttacherJointIndex(attacherJointIndex)
        if v10.inputJointDescIndex == skipNode.inputAttacherJointIndex then
          local v11, v12 = attacherVehicle2:getConnectionTarget(attacherJointIndex, skipNode["type"], skipNode.specType)
          if v11 ~= nil then
            local hose = attacherVehicle1:getClonedSkipHoseNode(sourceHose, skipNode)
            if not v12 then
              attacherVehicle1:connectHose(hose, attacherVehicle2, v11)
            else
              attacherVehicle1:connectHoseToSkipNode(hose, attacherVehicle2, v11, sourceHose, attacherVehicle1)
            end
            if skipNode.parentHose ~= nil then
              v14:removeWashableNode(skipNode.parentHose.hoseNode)
              delete(skipNode.parentHose.hoseNode)
              table.removeElement(v6.updateableHoses, skipNode.parentHose.childHose)
            end
            skipNode.parentVehicle = attacherVehicle1
            skipNode.parentHose = hose
            sourceHose.parentVehicle = attacherVehicle1
            sourceHose.parentHose = hose
            hose.childVehicle = self
            hose.childHose = sourceHose
            attacherVehicle1:addAllSubWashableNodes(hose.hoseNode)
          elseif skipNode.parentHose ~= nil then
            sourceHose.parentVehicle = skipNode.parentVehicle
            sourceHose.parentHose = skipNode.parentHose
            sourceHose.parentHose.childVehicle = self
            sourceHose.parentHose.childHose = sourceHose
          end
        end
      end
    end
  end
  table.insert(v6.updateableHoses, sourceHose)
  return true
end
function ConnectionHoses:connectHosesToAttacherVehicle(attacherVehicle, inputJointDescIndex, jointDescIndex, updateToolConnections, excludeVehicle)
  if attacherVehicle.getConnectionTarget ~= nil then
    local v6 = self:getConnectionHosesByInputAttacherJoint(inputJointDescIndex)
    for v10, v11 in ipairs(v6) do
      attacherVehicle:iterateConnectionTargets(function(self, attacherVehicle)
        local inputJointDescIndex = inputJointDescIndex:getIsConnectionHoseUsed(u1)
        if not inputJointDescIndex then
          if not attacherVehicle then
            inputJointDescIndex = inputJointDescIndex:connectHose(u1, u2, self, u3)
            -- if not v2 then goto L29 end
            return false
          else
            inputJointDescIndex = inputJointDescIndex:connectHoseToSkipNode(u1, u2, self)
            if inputJointDescIndex then
              return false
            end
          end
          return true
        end
        return false
      end, jointDescIndex, v11["type"], v11.specType)
    end
    self:retryHoseSkipNodeConnections(updateToolConnections, excludeVehicle)
  end
end
function ConnectionHoses:retryHoseSkipNodeConnections(updateToolConnections, excludeVehicle)
  if self.getAttachedImplements ~= nil then
    local attachedImplements = self:getAttachedImplements()
    for attacherVehicle1, attacherVehicle2 in ipairs(attachedImplements) do
      if not (attacherVehicle2.object ~= excludeVehicle) then
        continue
      end
      if not (attacherVehicle2.object.connectHosesToAttacherVehicle ~= nil) then
        continue
      end
      attacherVehicle2.object:connectHosesToAttacherVehicle(self, attacherVehicle2.inputJointDescIndex, attacherVehicle2.jointDescIndex, updateToolConnections, excludeVehicle)
    end
  end
end
function ConnectionHoses:connectCustomHosesToAttacherVehicle(attacherVehicle, inputJointDescIndex, jointDescIndex)
  if self.spec_connectionHoses.customHosesByInputAttacher[inputJointDescIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 10, target 53)
    if not self.spec_connectionHoses.customHosesByInputAttacher[inputJointDescIndex][1].isActive and attacherVehicle.spec_connectionHoses ~= nil and attacherVehicle.spec_connectionHoses.customHoseTargetsByAttacher[jointDescIndex] ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 29, target 52)
      if not attacherVehicle.spec_connectionHoses.customHoseTargetsByAttacher[jointDescIndex][1].isActive and self.spec_connectionHoses.customHosesByInputAttacher[inputJointDescIndex][1]["type"] == attacherVehicle.spec_connectionHoses.customHoseTargetsByAttacher[jointDescIndex][1]["type"] and self.spec_connectionHoses.customHosesByInputAttacher[inputJointDescIndex][1].specType == attacherVehicle.spec_connectionHoses.customHoseTargetsByAttacher[jointDescIndex][1].specType then
        self:connectCustomHoseNode(self.spec_connectionHoses.customHosesByInputAttacher[inputJointDescIndex][1], attacherVehicle.spec_connectionHoses.customHoseTargetsByAttacher[jointDescIndex][1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 51, target 30)
    end
    -- TODO: structure LOP_FORNLOOP (pc 52, target 11)
  end
  if childHose.customHoseTargetsByInputAttacher[inputJointDescIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 61, target 104)
    if not childHose.customHoseTargetsByInputAttacher[inputJointDescIndex][1].isActive and attacherVehicle.spec_connectionHoses ~= nil and attacherVehicle.spec_connectionHoses.customHosesByAttacher[jointDescIndex] ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 80, target 103)
      if not attacherVehicle.spec_connectionHoses.customHosesByAttacher[jointDescIndex][1].isActive and attacherVehicle.spec_connectionHoses.customHosesByAttacher[jointDescIndex][1]["type"] == childHose.customHoseTargetsByInputAttacher[inputJointDescIndex][1]["type"] and attacherVehicle.spec_connectionHoses.customHosesByAttacher[jointDescIndex][1].specType == childHose.customHoseTargetsByInputAttacher[inputJointDescIndex][1].specType then
        self:connectCustomHoseNode(attacherVehicle.spec_connectionHoses.customHosesByAttacher[jointDescIndex][1], childHose.customHoseTargetsByInputAttacher[inputJointDescIndex][1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 102, target 81)
    end
    -- TODO: structure LOP_FORNLOOP (pc 103, target 62)
  end
end
function ConnectionHoses:connectCustomHoseNode(customHose, customTarget)
  self:updateCustomHoseNode(customHose, customTarget)
  customHose.isActive = true
  customTarget.isActive = true
  customHose.connectedTarget = customTarget
  customTarget.connectedHose = customHose
  ObjectChangeUtil.setObjectChanges(customHose.objectChanges, true)
  ObjectChangeUtil.setObjectChanges(customTarget.objectChanges, true)
end
function ConnectionHoses.updateCustomHoseNode(v0, sourceHose, targetObject)
  local attacherVehicle1 = getParent(sourceHose.node)
  local childVehicle = localToLocal(targetObject.node, attacherVehicle1, 0, 0, 0)
  setTranslation(...)
  attacherVehicle1 = getParent(sourceHose.node)
  childVehicle = localRotationToLocal(targetObject.node, attacherVehicle1, 0, 0, 0)
  setRotation(...)
end
function ConnectionHoses.disconnectCustomHoseNode(v0, sourceHose, targetObject)
  local childVehicle = unpack(sourceHose.startTranslation)
  setTranslation(...)
  childVehicle = unpack(sourceHose.startRotation)
  setRotation(...)
  sourceHose.isActive = false
  targetObject.isActive = false
  sourceHose.connectedTarget = nil
  targetObject.connectedHose = nil
  ObjectChangeUtil.setObjectChanges(sourceHose.objectChanges, false)
  ObjectChangeUtil.setObjectChanges(targetObject.objectChanges, false)
end
function ConnectionHoses.loadExtraDependentParts(v0, sourceHose, targetObject, skipNode, childHose)
  local childVehicle = sourceHose(v0, targetObject, skipNode, childHose)
  if not childVehicle then
    return false
  end
  childVehicle = targetObject:getValue(skipNode .. ".connectionHoses#customHoseIndices", nil, true)
  if 0 < #childVehicle then
    childHose.customHoseIndices = childVehicle
  end
  local v6 = targetObject:getValue(skipNode .. ".connectionHoses#customTargetIndices", nil, true)
  if 0 < #v6 then
    childHose.customTargetIndices = v6
  end
  return true
end
function ConnectionHoses:updateExtraDependentParts(superFunc, part, dt)
  superFunc(self, part, dt)
  if part.customHoseIndices ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 16, target 35)
    if self.spec_connectionHoses.customHoses[part.customHoseIndices[1]] ~= nil and self.spec_connectionHoses.customHoses[part.customHoseIndices[1]].isActive then
      self:updateCustomHoseNode(self.spec_connectionHoses.customHoses[part.customHoseIndices[1]], self.spec_connectionHoses.customHoses[part.customHoseIndices[1]].connectedTarget)
    end
    -- TODO: structure LOP_FORNLOOP (pc 34, target 17)
  end
  if part.customTargetIndices ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 46, target 65)
    if self.spec_connectionHoses.customHoseTargets[part.customTargetIndices[1]] ~= nil and self.spec_connectionHoses.customHoseTargets[part.customTargetIndices[1]].isActive then
      self:updateCustomHoseNode(self.spec_connectionHoses.customHoseTargets[part.customTargetIndices[1]].connectedHose, self.spec_connectionHoses.customHoseTargets[part.customTargetIndices[1]])
    end
    -- TODO: structure LOP_FORNLOOP (pc 64, target 47)
  end
end
function ConnectionHoses:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self:connectHosesToAttacherVehicle(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self:connectCustomHosesToAttacherVehicle(attacherVehicle, inputJointDescIndex, jointDescIndex)
end
function ConnectionHoses:onPreDetach(attacherVehicle, implement)
  local inputJointDescIndex = self:getActiveInputAttacherJointDescIndex()
  local hoses = self:getConnectionHosesByInputAttacherJoint(inputJointDescIndex)
  for attacherJointIndex, v10 in ipairs(hoses) do
    self:disconnectHose(v10)
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 38)
  if skipNode.updateableHoses[#skipNode.updateableHoses].connectedObject == attacherVehicle then
    self:disconnectHose(skipNode.updateableHoses[#skipNode.updateableHoses])
  end
  -- TODO: structure LOP_FORNLOOP (pc 37, target 26)
  if attacherVehicle.spec_connectionHoses ~= nil then
    for v10, v11 in pairs(attacherVehicle.spec_connectionHoses.toolConnectorHoses) do
      if not (v11.delayedMounting ~= nil) then
        continue
      end
      if not (v11.delayedMounting.sourceObject == self) then
        continue
      end
      v11.delayedMounting = nil
    end
  end
  if skipNode.customHosesByInputAttacher[inputJointDescIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 71, target 83)
    if skipNode.customHosesByInputAttacher[inputJointDescIndex][1].isActive then
      self:disconnectCustomHoseNode(skipNode.customHosesByInputAttacher[inputJointDescIndex][1], skipNode.customHosesByInputAttacher[inputJointDescIndex][1].connectedTarget)
    end
    -- TODO: structure LOP_FORNLOOP (pc 82, target 72)
  end
  if skipNode.customHoseTargetsByInputAttacher[inputJointDescIndex] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 91, target 103)
    if skipNode.customHoseTargetsByInputAttacher[inputJointDescIndex][1].isActive then
      self:disconnectCustomHoseNode(skipNode.customHoseTargetsByInputAttacher[inputJointDescIndex][1].connectedHose, skipNode.customHoseTargetsByInputAttacher[inputJointDescIndex][1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 102, target 92)
  end
end
