-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IKUtil = {}
function IKUtil.loadIKChain(xmlFile, key, targetBasenode, chainBasenode, ikTable)
  local v6 = getXMLString(xmlFile, key .. "#id")
  local v8 = getXMLString(xmlFile, key .. "#target")
  v6 = I3DUtil.indexToObject(...)
  v8 = getXMLString(xmlFile, key .. "#targetOffset")
  local v7 = Utils.getNoNil(v8, "0 0 0")
  v6, v7, v8 = string.getVector(...)
  local v10 = getXMLBool(xmlFile, key .. "#alignToTarget")
  local v9 = Utils.getNoNil(v10, false)
  local v12 = getXMLString(xmlFile, key .. "#alignNodeOffset")
  local v11 = Utils.getNoNil(v12, "0 0 0")
  v10 = string.getVector(...)
  while true do
    v12 = string.format(".node(%d)", v9)
    v11 = hasXMLProperty(xmlFile, key .. v12)
    if not v11 then
      break
    end
    v13 = getXMLString(xmlFile, key .. v12 .. "#index")
    v11 = I3DUtil.indexToObject(...)
    if v11 ~= nil then
      v14 = getXMLFloat(xmlFile, key .. v12 .. "#minRx")
      v13 = Utils.getNoNil(v14, -180)
      v12 = math.rad(...)
      v15 = getXMLFloat(xmlFile, key .. v12 .. "#maxRx")
      v14 = Utils.getNoNil(v15, 180)
      v13 = math.rad(...)
      v16 = getXMLFloat(xmlFile, key .. v12 .. "#minRy")
      v15 = Utils.getNoNil(v16, -180)
      v14 = math.rad(...)
      v17 = getXMLFloat(xmlFile, key .. v12 .. "#maxRy")
      v16 = Utils.getNoNil(v17, 180)
      v15 = math.rad(...)
      v18 = getXMLFloat(xmlFile, key .. v12 .. "#minRz")
      v17 = Utils.getNoNil(v18, -180)
      v16 = math.rad(...)
      v19 = getXMLFloat(xmlFile, key .. v12 .. "#maxRz")
      v18 = Utils.getNoNil(v19, 180)
      v17 = math.rad(...)
      v20 = getXMLFloat(xmlFile, key .. v12 .. "#damping")
      v19 = Utils.getNoNil(v20, 30)
      v18 = math.rad(...)
      v20 = getXMLBool(xmlFile, key .. v12 .. "#localLimits")
      v19 = Utils.getNoNil(v20, false)
      table.insert(v5.nodes, {node = v11, minRx = v12, maxRx = v13, minRy = v14, maxRy = v15, minRz = v16, maxRz = v17, damping = v18, localLimits = v19})
    end
  end
  v5.rotationNodes = {}
  IKUtil.loadRotationNodes(v5.rotationNodes, xmlFile, key, chainBasenode, true)
  v5.poses = {}
  while true do
    v12 = string.format(".pose(%d)", v9)
    v11 = hasXMLProperty(xmlFile, key .. v12)
    if not v11 then
      break
    end
    v11 = getXMLString(xmlFile, key .. v12 .. "#id")
    if v11 ~= nil then
      v14 = getXMLBool(xmlFile, key .. v12 .. "#isDefaultPose")
      v13 = Utils.getNoNil(v14, false)
      IKUtil.loadRotationNodes({id = v11, isDefaultPose = v13, rotationNodes = {}}.rotationNodes, xmlFile, key .. v12, chainBasenode, {id = v11, isDefaultPose = v13, rotationNodes = {}}.isDefaultPose)
      v5.poses[v11] = {id = v11, isDefaultPose = v13, rotationNodes = {}}
    end
  end
  if 0 < #v5.nodes and v5.target ~= nil and v5.id ~= nil and ikTable[v5.id] == nil then
    v11 = getXMLInt(xmlFile, key .. "#numIterations")
    v10 = Utils.getNoNil(v11, 20)
    v5.numIterations = v10
    v11 = getXMLInt(xmlFile, key .. "#numIterationsInit")
    v10 = Utils.getNoNil(v11, v5.numIterations * 2)
    v5.numIterationsToApply = v10
    v11 = getXMLFloat(xmlFile, key .. "#positionThreshold")
    v10 = Utils.getNoNil(v11, 0.005)
    v5.positionThreshold = v10
    v11 = getXMLBool(xmlFile, key .. "#isDirtyOnLoad")
    v10 = Utils.getNoNil(v11, false)
    v5.isDirty = v10
    v10 = IKChain.new(#v5.nodes)
    v5.ikChainSolver = v10
    for v13, v14 in ipairs(v5.nodes) do
      v15:setJointTransformGroup(v13 - 1, v14.node, v14.minRx, v14.maxRx, v14.minRy, v14.maxRy, v14.minRz, v14.maxRz, v14.damping, v14.localLimits)
    end
    v5.isActive = true
    ikTable[v5.id] = v5
    return v5
  end
  return nil
end
function IKUtil.loadRotationNodes(rotationNodes, xmlFile, key, chainBasenode, apply)
  while true do
    v8 = string.format(".rotationNode(%d)", v5)
    v7 = hasXMLProperty(xmlFile, key .. v8)
    if not v7 then
      break
    end
    v9 = getXMLString(xmlFile, key .. v8 .. "#index")
    v7 = I3DUtil.indexToObject(...)
    if v7 ~= nil then
      v9 = getRotation(v7)
      v9 = getXMLString(xmlFile, key .. v8 .. "#rotation")
      if v9 ~= nil then
        v10 = string.getRadians(v9, 3)
        if apply then
          v12 = unpack(v10)
          setRotation(...)
        end
      end
      table.insert(rotationNodes, {node = v7, defaultRotation = v8})
    end
  end
end
function IKUtil.setRotationNodes(rotationNodes)
  for v4, v5 in pairs(rotationNodes) do
    local v8 = unpack(v5.defaultRotation)
    setRotation(...)
  end
end
function IKUtil.updateAlignNodes(ikChains, getParentFunc, owner, parentComponent)
  for v7, v8 in pairs(ikChains) do
    IKUtil.updateAlignNode(v8, getParentFunc, owner, parentComponent)
  end
end
function IKUtil:updateAlignNode(v1, v2, v3)
  if self.alignToTarget and self.isActive then
    self.alignNode = self.nodes[#self.nodes].node
    if v1 == nil and v3 == nil then
      printCallstack()
    end
    if v3 == nil then
      local v5 = v1(v2, self.alignNode)
    end
    local v6 = localDirectionToLocal(self.alignNode, v4, 0, 0, 1)
    self.alignNodeDir = {}
    v6 = localDirectionToLocal(self.alignNode, v4, 0, 1, 0)
    self.alignNodeUp = {}
  end
end
function IKUtil:deleteIKChain(v1)
  if self[v1] ~= nil then
    self[v1].ikChainSolver = nil
  end
  self[v1] = nil
end
function IKUtil:setTarget(v1, v2)
  if self[v1] ~= nil then
    if v2 ~= nil then
      if self[v1].defaultTarget == nil then
        self[v1].defaultTarget = self[v1].target
      end
      v3.target = v2.targetNode
      if v2.targetOffset ~= nil then
        local v5 = Utils.getNoNil(v2.targetOffset[1], v3.targetOffset.x)
        v3.targetOffset.x = v5
        v5 = Utils.getNoNil(v2.targetOffset[2], v3.targetOffset.y)
        v3.targetOffset.y = v5
        v5 = Utils.getNoNil(v2.targetOffset[3], v3.targetOffset.z)
        v3.targetOffset.z = v5
      end
      if v2.rotationNodes ~= nil then
        for v7, v8 in pairs(v2.rotationNodes) do
          if not (v3.rotationNodes[v8.id] ~= nil) then
            continue
          end
          local v12 = unpack(v8.rotation)
          setRotation(...)
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L122
      IKUtil.setIKChainPose(self, v1, v2.poseId)
      return
    end
    if v3.defaultTarget ~= nil then
      v3.target = v3.defaultTarget
      IKUtil.setRotationNodes(v3.rotationNodes)
    end
  end
end
function IKUtil.updateIKChains(ikChains)
  for v4, v5 in pairs(ikChains) do
    if not v5.isDirty then
      continue
    end
    if not v5.isActive then
      continue
    end
    v5.isDirty = false
    IKUtil.updateIKChain(v5, v5.numIterationsToApply, v5.positionThreshold)
    v5.numIterationsToApply = v5.numIterations
  end
  if VehicleDebug ~= nil and VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
    IKUtil.debugDrawChains(ikChains, true)
  end
end
function IKUtil.debugDrawChains(ikChains, drawLimits)
  for v5, v6 in pairs(ikChains) do
    if not v6.isActive then
      continue
    end
    IKUtil.debugDrawChain(v6, drawLimits)
  end
end
function IKUtil:debugDrawChain(v1)
  if v1 == nil then
  end
  v2:debugDraw(v1)
  local v2, v3, v4 = getWorldTranslation(self.nodes[1].node)
  local v5, v6, v7 = getWorldTranslation(self.target)
  drawDebugLine(v2, v3, v4, 0, 1, 0, v5, v6, v7, 0, 1, 0)
end
function IKUtil:updateIKChain(v1, v2)
  local v3, v4, v5 = localToWorld(self.target, self.targetOffset.x, self.targetOffset.y, self.targetOffset.z)
  v6:solve(v3, v4, v5, v1, v2)
  if self.alignToTarget and self.isActive then
    local v8 = unpack(self.alignNodeDir)
    local v6, v7, v8 = localDirectionToWorld(...)
    local v11 = unpack(self.alignNodeUp)
    local v9, v10, v11 = localDirectionToWorld(...)
    I3DUtil.setWorldDirection(self.alignNode, v6, v7, v8, v9, v10, v11)
  end
end
function IKUtil:setIKChainDirty(v1)
  if self[v1] ~= nil then
    self[v1].isDirty = true
  end
end
function IKUtil:setIKChainActive(v1)
  if self[v1] ~= nil then
    self[v1].isActive = true
  end
end
function IKUtil:setIKChainInactive(v1)
  if self[v1] ~= nil then
    self[v1].isActive = false
  end
end
function IKUtil:setIKChainPose(v1, v2)
  if self[v1] ~= nil and self[v1].poses[v2] ~= nil then
    IKUtil.setRotationNodes(self[v1].poses[v2].rotationNodes)
  end
end
function IKUtil.getIKChainByTarget(ikTable, targetNode)
  for v5, v6 in pairs(ikTable) do
    if not (v6.target == targetNode) then
      continue
    end
    return v6
  end
end
function IKUtil:loadIKChainTargets(v1, v2, v3, v4)
  while true do
    v6 = string.format(v1 .. ".target(%d)", v5)
    v7 = self:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = self:getValue(v6 .. "#ikChain")
    v8 = self:getValue(v6 .. "#targetNode", nil, v2, v4)
    if v8 ~= nil then
      if v7 ~= nil then
        v10 = self:getValue(v6 .. "#targetOffset", nil, true)
        v10 = self:getValue(v6 .. "#setDirty", true)
        while true do
          v13 = string.format(".rotationNode(%d)", v10)
          v12 = self:hasProperty(v6 .. v13)
          if not v12 then
            break
          end
          v12 = self:getValue(v6 .. v13 .. "#id")
          if v12 ~= nil then
            v13 = self:getValue(v6 .. v13 .. "#rotation", "0 0 0", true)
            table.insert(v9.rotationNodes, {id = v12, rotation = v13})
          end
        end
        v11 = self:getValue(v6 .. "#poseId")
        v9.poseId = v11
        v3[v9.ikName] = v9
        -- goto L130  (LOP_JUMP +14)
      end
      Logging.xmlWarning(self, "Missing ikName for target '%s'", v6)
    else
      Logging.xmlWarning(self, "Missing targetNode in '%s' for chain '%s'", v6, v7)
    end
  end
end
function IKUtil:registerIKChainTargetsXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".target(?)#ikChain", "IK chain name")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".target(?)#targetNode", "Target node")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".target(?)#targetOffset", "Target offset")
  self:register(XMLValueType.BOOL, v1 .. ".target(?)#setDirty", "Is dirty", true)
  self:register(XMLValueType.INT, v1 .. ".target(?).rotationNode(?)#id", "Rotation node index")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".target(?).rotationNode(?)#rotation", "Rotation node rotation")
  self:register(XMLValueType.STRING, v1 .. ".target(?)#poseId", "Pose id")
end
function IKUtil:registerIKChainXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#id", "Chain identifier")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#target", "Target node")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#targetOffset", "Target offset", "0 0 0")
  self:register(XMLValueType.BOOL, v1 .. "#alignToTarget", "Align to target", false)
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#alignNodeOffset", "Align node offset", "0 0 0")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".node(?)#index", "Chain node")
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#minRx", "Min. rotation X", -180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#maxRx", "Max. rotation X", 180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#minRy", "Min. rotation Y", -180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#maxRy", "Max. rotation Y", 180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#minRy", "Min. rotation Z", -180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#maxRy", "Max. rotation Z", 180)
  self:register(XMLValueType.ANGLE, v1 .. ".node(?)#damping", "Damping", 30)
  self:register(XMLValueType.BOOL, v1 .. ".node(?)#localLimits", "Local limits", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".rotationNode(?)#index", "Rotation node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode(?)#rotation", "Rotation")
  self:register(XMLValueType.STRING, v1 .. ".pose(?)#id", "Pose id")
  self:register(XMLValueType.BOOL, v1 .. ".pose(?)#isDefaultPose", "Is default pose", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".pose(?).rotationNode(?)#index", "Rotation node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".pose(?).rotationNode(?)#rotation", "Rotation")
  self:register(XMLValueType.INT, v1 .. "#numIterations", "Max. number of iterations", 20)
  self:register(XMLValueType.INT, v1 .. "#numIterationsInit", "Initial max. number of iterations", "numIterations * 2")
  self:register(XMLValueType.FLOAT, v1 .. "#positionThreshold", "Position threshold", 0.005)
  self:register(XMLValueType.BOOL, v1 .. "#isDirtyOnLoad", "Is dirty on load", false)
end
