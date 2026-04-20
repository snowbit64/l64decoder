-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PushHandTool = {PLAYER_COLLISION_MASK = CollisionFlag.DEFAULT + CollisionFlag.STATIC_WORLD + CollisionFlag.STATIC_OBJECTS + CollisionFlag.STATIC_OBJECT}
function PushHandTool.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("PushHandTool")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pushHandTool.raycast#node1", "Front raycast node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pushHandTool.raycast#node2", "Back raycast node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pushHandTool.raycast#playerNode", "Player node to adjust")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.pushHandTool.wheels#front", "Indices of front wheels")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.pushHandTool.wheels#back", "Indices of back wheels")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.pushHandTool.handle#node", "Handle node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.pushHandTool.handle#upperLimit", "Max. upper distance between handle node and hand ik root node", 0.4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.pushHandTool.handle#lowerLimit", "Max. lower distance between handle node and hand ik root node", 0.4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.pushHandTool.handle#interpolateDistance", "Interpolation distance if limit is exceeded", 0.4)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.handle#minRot", "Min. rotation of handle", -20)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.handle#maxRot", "Max. rotation of handle", 20)
  IKUtil.registerIKChainTargetsXMLPaths(Vehicle.xmlSchema, "vehicle.pushHandTool.ikChains")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.pushHandTool.effect")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#chainId", "Chain identifier string", 20)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#nodeIndex", "Index of node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#minRx", "Min. X rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#maxRx", "Max. X rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#minRy", "Min. Y rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#maxRy", "Max. Y rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#minRz", "Min. Z rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#maxRz", "Max. Z rotation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#damping", "Damping")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.pushHandTool.customChainLimits.customChainLimit(?)#localLimits", "Local limits")
  function(v0)
    v1:register(XMLValueType.STRING, v0 .. ".item(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#entryTransitionDuration", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?)#exitTransitionDuration", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#speedScaleType", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips#speedScaleParameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).clips#blended", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameter", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips#blendingParameterType", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#clipName", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).clips.clip(?)#id", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).clips.clip(?)#blendingThreshold", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#parameter", "")
    v1:register(XMLValueType.BOOL, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#equal", "")
    v1:register(XMLValueType.STRING, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#between", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#greater", "")
    v1:register(XMLValueType.FLOAT, v0 .. ".item(?).conditions.conditionGroup(?).condition(?)#lower", "")
  end("vehicle.pushHandTool.playerConditionalAnimation")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function PushHandTool.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TestAreas, v0)
  end
  return v1
end
function PushHandTool.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getRaycastPosition", PushHandTool.getRaycastPosition)
  SpecializationUtil.registerFunction(vehicleType, "playerRaycastCallback", PushHandTool.playerRaycastCallback)
  SpecializationUtil.registerFunction(vehicleType, "postAnimationUpdate", PushHandTool.postAnimationUpdate)
  SpecializationUtil.registerFunction(vehicleType, "customVehicleCharacterLoaded", PushHandTool.customVehicleCharacterLoaded)
end
function PushHandTool.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setVehicleCharacter", PushHandTool.setVehicleCharacter)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowCharacterVisibilityUpdate", PushHandTool.getAllowCharacterVisibilityUpdate)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setActiveCameraIndex", PushHandTool.setActiveCameraIndex)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartAIVehicle", PushHandTool.getCanStartAIVehicle)
end
function PushHandTool.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onCameraChanged", PushHandTool)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleCharacterChanged", PushHandTool)
end
function PushHandTool:onLoad(savegame)
  self.spec_pushHandTool.animationParameters = {absSmoothedForwardVelocity = {id = 1, value = 0, ["type"] = 1}, smoothedForwardVelocity = {id = 2, value = 0, ["type"] = 1}, accelerate = {id = 3, value = false, ["type"] = 0}, leftRightWeight = {id = 4, value = 0, ["type"] = 1}}
  local v3 = v3:getValue("vehicle.pushHandTool.raycast#node1", nil, self.components, self.i3dMappings)
  self.spec_pushHandTool.raycastNode1 = v3
  v3 = v3:getValue("vehicle.pushHandTool.raycast#node2", nil, self.components, self.i3dMappings)
  self.spec_pushHandTool.raycastNode2 = v3
  v3 = v3:getValue("vehicle.pushHandTool.raycast#playerNode", nil, self.components, self.i3dMappings)
  self.spec_pushHandTool.playerNode = v3
  v3 = createTransformGroup("playerTargetNode")
  self.spec_pushHandTool.playerTargetNode = v3
  if self.spec_pushHandTool.playerNode ~= nil then
    local v4 = getParent(self.spec_pushHandTool.playerNode)
    link(v4, self.spec_pushHandTool.playerTargetNode)
    local v5 = getTranslation(self.spec_pushHandTool.playerNode)
    setTranslation(...)
  end
  v3 = v3:getValue("vehicle.pushHandTool.wheels#front", nil, true)
  v2.frontWheels = {}
  -- TODO: structure LOP_FORNPREP (pc 146, target 162)
  local v7 = self:getWheelFromWheelIndex(v3[1])
  if v7 ~= nil then
    table.insert(v2.frontWheels, v7)
  end
  -- TODO: structure LOP_FORNLOOP (pc 161, target 147)
  v4 = v4:getValue("vehicle.pushHandTool.wheels#back", nil, true)
  v2.backWheels = {}
  -- TODO: structure LOP_FORNPREP (pc 177, target 193)
  local v8 = self:getWheelFromWheelIndex(v4[1])
  if v8 ~= nil then
    table.insert(v2.backWheels, v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 192, target 178)
  v2.handle = {}
  local v6 = v6:getValue("vehicle.pushHandTool.handle#node", nil, self.components, self.i3dMappings)
  v2.handle.node = v6
  v6 = v6:getValue("vehicle.pushHandTool.handle#upperLimit", 0.4)
  v2.handle.upperLimit = v6
  v6 = v6:getValue("vehicle.pushHandTool.handle#lowerLimit", 0.4)
  v2.handle.lowerLimit = v6
  v6 = v6:getValue("vehicle.pushHandTool.handle#interpolateDistance", 0.4)
  v2.handle.interpolateDistance = v6
  v6 = v6:getValue("vehicle.pushHandTool.handle#minRot", -20)
  v2.handle.minRot = v6
  v6 = v6:getValue("vehicle.pushHandTool.handle#maxRot", 20)
  v2.handle.maxRot = v6
  v2.characterIKNodes = {}
  v2.ikChainTargets = {}
  IKUtil.loadIKChainTargets(self.xmlFile, "vehicle.pushHandTool.ikChains", self.components, v2.ikChainTargets, self.i3dMappings)
  v2.lastRaycastPosition = {0, 0, 0, 0}
  v2.lastRaycastHit = false
  if self.isClient then
    v5 = v5:loadEffect(self.xmlFile, "vehicle.pushHandTool.effect", self.components, self, self.i3dMappings)
    v2.cutterEffects = v5
  end
  v2.customChainLimits = {}
  v5:iterate("vehicle.pushHandTool.customChainLimits.customChainLimit", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#chainId")
    v3 = v3:getValue(savegame .. "#nodeIndex")
    if {chainId = v3, nodeIndex = v3}.chainId ~= nil and {chainId = v3, nodeIndex = v3}.nodeIndex ~= nil then
      v3 = v3:getValue(savegame .. "#minRx")
      v3 = v3:getValue(savegame .. "#maxRx")
      v3 = v3:getValue(savegame .. "#minRy")
      v3 = v3:getValue(savegame .. "#maxRy")
      v3 = v3:getValue(savegame .. "#minRz")
      v3 = v3:getValue(savegame .. "#maxRz")
      v3 = v3:getValue(savegame .. "#damping")
      v3 = v3:getValue(savegame .. "#localLimits")
      table.insert(u1.customChainLimits, {chainId = v3, nodeIndex = v3, minRx = v3, maxRx = v3, minRy = v3, maxRy = v3, minRz = v3, maxRz = v3, damping = v3, localLimits = v3})
    end
  end)
  v5 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v5
  v2.raycastsValid = true
  v2.lastSmoothSpeed = 0
  self:setTestAreaRequirements(FruitType.GRASS, nil, false)
  v5 = addPostAnimationCallback(self.postAnimationUpdate, self)
  v2.postAnimationCallback = v5
end
function PushHandTool:onDelete()
  v2:deleteEffects(self.spec_pushHandTool.cutterEffects)
  removePostAnimationCallback(self.spec_pushHandTool.postAnimationCallback)
end
function PushHandTool:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = self:getIsTurnedOn()
  if v6 then
    v6 = self:getLastSpeed()
    -- if 0.5 >= v6 then goto L123 end
    local v6, v7, v8, v9 = self:getTestAreaWidthByWorkAreaIndex(1)
    if v6 == math.huge and v7 == -math.huge then
    end
    if 0 < v5.movingDirection and v7 * -1 < v6 * -1 then
    end
    -- if not v0.isClient then goto L136 end
    if self.spec_mower ~= nil and g_time - self.spec_mower.workAreaParameters.lastCutTime < 500 then
    end
    if v11 ~= nil and v11 ~= FruitType.UNKNOWN then
      v13:setFruitType(v5.cutterEffects, v11, v12)
      v13:setMinMaxWidth(v5.cutterEffects, v6, v7, v6 / v8, v7 / v9, v10)
      v13:startEffects(v5.cutterEffects)
      v5.effectsAreRunning = not v10
      -- goto L136  (LOP_JUMP +27)
    end
    -- if not v5.effectsAreRunning then goto L136 end
    v13:stopEffects(v5.cutterEffects)
    v5.effectsAreRunning = false
  elseif self.spec_pushHandTool.effectsAreRunning then
    v6:stopEffects(self.spec_pushHandTool.cutterEffects)
    self.spec_pushHandTool.effectsAreRunning = false
  end
  for v12, v13 in pairs(v5.backWheels) do
    if not (v13.netInfo.xDriveSpeed ~= nil) then
      continue
    end
    local v15 = MathUtil.rpmToMps(v13.netInfo.xDriveSpeed / 2 * math.pi * 60, v13.radius)
  end
  if 0 < v8 then
  end
  v5.lastSmoothSpeed = v5.lastSmoothSpeed * 0.9 + v6 * 0.1
  v5.animationParameters.smoothedForwardVelocity.value = v5.lastSmoothSpeed
  v10 = math.abs(v5.lastSmoothSpeed)
  v5.animationParameters.absSmoothedForwardVelocity.value = v10
  v5.animationParameters.leftRightWeight.value = self.rotatedTime
  v11 = self:getAccelerationAxis()
  if 0 >= v11 then
  end
  v9.value = true
  v9 = self:getIsEntered()
  if not v9 then
    v9 = self:getIsControlled()
    -- if not v9 then goto L300 end
  end
  v9 = self:getVehicleCharacter()
  if v9 ~= nil and v9.animationCharsetId ~= nil and v9.animationPlayer ~= nil then
    for v13, v14 in pairs(v5.animationParameters) do
      if v14["type"] == 0 then
        setConditionalAnimationBoolValue(v9.animationPlayer, v14.id, v14.value)
      else
        if not (v14["type"] == 1) then
          continue
        end
        setConditionalAnimationFloatValue(v9.animationPlayer, v14.id, v14.value)
      end
    end
    setConditionalAnimationSpecificParameterIds(v9.animationPlayer, v5.animationParameters.absSmoothedForwardVelocity.id, 0)
    updateConditionalAnimation(v9.animationPlayer, dt)
  end
  if v5.raycastNode1 ~= nil and v5.raycastNode2 ~= nil and v5.playerNode ~= nil and 1 <= #v5.frontWheels and 1 <= #v5.backWheels then
    v9, v10, v11 = self:getRaycastPosition(v5.raycastNode1)
    v12, v13, v14 = self:getRaycastPosition(v5.raycastNode2)
    if v9 ~= nil and v12 ~= nil then
      setWorldTranslation(v5.playerTargetNode, (v9 + v12) * 0.5, (v10 + v13) * 0.5, (v11 + v14) * 0.5)
      local v21, v22, v23 = MathUtil.vector3Normalize(v9 - v12, v10 - v13, v11 - v14)
      if v5.lastYDirection == nil then
        v5.lastYDirection = v22
      else
        v5.lastYDirection = v5.lastYDirection * 0.9 + v22 * 0.1
      end
      I3DUtil.setWorldDirection(v5.playerTargetNode, v18, v19, v20, 0, 1, 0)
      if v5.lastWorldTrans == nil then
        v22 = getWorldTranslation(v5.playerNode)
        v5.lastWorldTrans = {}
      end
      local v28 = math.min(self.rotatedTime / 0.5)
      local v27 = math.abs(v28, 1)
      setWorldTranslation(v5.playerNode, v5.lastWorldTrans[1] - (v5.lastWorldTrans[1] - v15) * (0.5 - v27 * 0.15), v5.lastWorldTrans[2] - (v5.lastWorldTrans[2] - v16) * (0.5 - v27 * 0.15), v5.lastWorldTrans[3] - (v5.lastWorldTrans[3] - v17) * (0.5 - v27 * 0.15))
      v5.lastWorldTrans[1] = v5.lastWorldTrans[1] - (v5.lastWorldTrans[1] - v15) * (0.5 - v27 * 0.15)
      v5.lastWorldTrans[2] = v5.lastWorldTrans[2] - (v5.lastWorldTrans[2] - v16) * (0.5 - v27 * 0.15)
      v5.lastWorldTrans[3] = v5.lastWorldTrans[3] - (v5.lastWorldTrans[3] - v17) * (0.5 - v27 * 0.15)
      if self.movingDirection == 0 then
      end
      local v32, v33, v34 = localToWorld(v5.playerTargetNode, 0, 0, 0.2 * v31)
      local v34, v35, v36 = MathUtil.vector3Normalize(v32 - v28, v33 - v29, v34 - v30)
      if v31 < 0 then
      end
      -- TODO: structure LOP_FORNPREP (pc 500, target 537)
      local v45, v46, v47 = localToWorld(v5.frontWheels[1].node, v5.frontWheels[1].netInfo.x + v5.frontWheels[1].xOffset, v5.frontWheels[1].netInfo.y - v5.frontWheels[1].radius, v5.frontWheels[1].netInfo.z)
      -- TODO: structure LOP_FORNLOOP (pc 536, target 501)
      -- TODO: structure LOP_FORNPREP (pc 549, target 586)
      local v49, v50, v51 = localToWorld(v5.backWheels[1].node, v5.backWheels[1].netInfo.x + v5.backWheels[1].xOffset, v5.backWheels[1].netInfo.y - v5.backWheels[1].radius, v5.backWheels[1].netInfo.z)
      -- TODO: structure LOP_FORNLOOP (pc 585, target 550)
      v45, v46, v47 = MathUtil.vector3Normalize((0 + v49) / #v5.backWheels - (0 + v45) / #v5.frontWheels, (0 + v50) / #v5.backWheels - (0 + v46) / #v5.frontWheels, (0 + v51) / #v5.backWheels - (0 + v47) / #v5.frontWheels)
      if v46 < 0 then
      else
      end
      v49 = math.abs(v43)
      v47 = math.min(...)
      local v46, v47, v48 = localDirectionToWorld(self.rootNode, 0, 1, 0)
      v49, v50, v51 = MathUtil.vector3Normalize(v46, v47 + 0.5, v48)
      I3DUtil.setWorldDirection(v5.playerNode, v18, v43 + v47 * v45, v20, v49, v50, v51)
      v5.raycastsValid = true
      return
    end
    if v5.raycastsValid then
      v15 = self:getIsEntered()
      if v15 then
        v5.raycastsValid = false
        v15 = self:getVehicleCharacter()
        if v15 ~= nil then
          v15:setCharacterVisibility(false)
        end
        self:setActiveCameraIndex(self.spec_enterable.camIndex)
      end
    end
  end
end
function PushHandTool:setVehicleCharacter(superFunc, playerStyle)
  if self.spec_enterable.vehicleCharacter ~= nil then
    isSelected:delete()
    isSelected:loadCharacter(playerStyle, self, self.customVehicleCharacterLoaded)
  end
end
function PushHandTool:customVehicleCharacterLoaded(success, arguments)
  if success then
    if self.spec_enterable.vehicleCharacter ~= nil then
      self.spec_enterable.vehicleCharacter:updateVisibility()
    end
    SpecializationUtil.raiseEvent(self, "onVehicleCharacterChanged", isSelected)
    self.spec_pushHandTool.characterIKNodes = {}
    for v9, v10 in pairs(isSelected.playerModel.ikChains) do
      if v5.ikChainTargets[v9] ~= nil then
        for v14, v15 in pairs(v10.nodes) do
          if not (v5.characterIKNodes[v15.node] == nil) then
            continue
          end
          local v20 = getName(v15.node)
          local v16 = createTransformGroup(v20 .. "_ikChain")
          local v17 = getParent(v15.node)
          if v5.characterIKNodes[v17] ~= nil then
          end
          link(v17, v16)
          v20 = getTranslation(v15.node)
          setTranslation(...)
          v20 = getRotation(v15.node)
          setRotation(...)
          v5.characterIKNodes[v15.node] = v16
        end
      end
      for v14, v15 in pairs(v10.nodes) do
        if not (v5.characterIKNodes[v15.node] ~= nil) then
          continue
        end
        v15.node = v5.characterIKNodes[v15.node]
      end
    end
    isSelected.ikChainTargets = v5.ikChainTargets
    for v9, v10 in pairs(v5.ikChainTargets) do
      IKUtil.setTarget(isSelected.playerModel.ikChains, v9, v10)
    end
    v5.ikChains = isSelected.playerModel.ikChains
    for v9, v10 in pairs(isSelected.playerModel.ikChains) do
      v11 = IKChain.new(#v10.nodes)
      v10.ikChainSolver = v11
      for v14, v15 in ipairs(v10.nodes) do
        -- TODO: structure LOP_FORNPREP (pc 196, target 236)
        if v5.customChainLimits[1].chainId == v9 and v5.customChainLimits[1].nodeIndex == v14 and v5.customChainLimits[1].localLimits ~= nil then
        end
        -- TODO: structure LOP_FORNLOOP (pc 235, target 197)
        v24:setJointTransformGroup(v14 - 1, v15.node, v16, v17, v18, v19, v20, v21, v22, v23)
      end
      v10.numIterations = 40
      v10.positionThreshold = 0.0001
    end
    isSelected:setDirty()
    if isSelected ~= nil and isSelected.animationCharsetId ~= nil and isSelected.animationPlayer ~= nil then
      for v9, v10 in pairs(v5.animationParameters) do
        conditionalAnimationRegisterParameter(isSelected.animationPlayer, v10.id, v10["type"], v9)
      end
      initConditionalAnimation(isSelected.animationPlayer, isSelected.animationCharsetId, self.configFileName, "vehicle.pushHandTool.playerConditionalAnimation")
      conditionalAnimationZeroiseTrackTimes(isSelected.animationPlayer)
    end
    IKUtil.updateAlignNodes(isSelected.playerModel.ikChains, self.getParentComponent, self)
  end
end
function PushHandTool:getAllowCharacterVisibilityUpdate(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput then
    return false
  end
  isActiveForInput = self:getIsEntered()
  if isActiveForInput then
    isActiveForInput = self:getActiveCamera()
    if isActiveForInput ~= nil and isActiveForInput.isInside then
      return false
    end
  end
  if not self.spec_pushHandTool.raycastsValid then
    return false
  end
  return true
end
function PushHandTool:setActiveCameraIndex(superFunc, index)
  if not self.spec_pushHandTool.raycastsValid then
    if self.spec_enterable.numCameras < index then
    end
    if isSelected.cameras[index].isInside then
      for v9, v10 in pairs(isSelected.cameras) do
        if not not v10.isInside then
          continue
        end
        break
      end
    end
  end
  return superFunc(self, index)
end
function PushHandTool.getCanStartAIVehicle(v0, dt)
  return false
end
function PushHandTool:onEnterVehicle(isControlling)
  if isControlling then
    local activeCamera = self:getActiveCamera()
    if activeCamera ~= nil and activeCamera.isInside then
    end
  end
  if not self.spec_pushHandTool.raycastsValid then
  end
  if isActiveForInput then
    local character = self:getVehicleCharacter()
    if character ~= nil then
      character:setCharacterVisibility(false)
    end
  end
end
function PushHandTool:onLeaveVehicle()
  self.spec_pushHandTool.characterIKNodes = {}
end
function PushHandTool:onCameraChanged(activeCamera, camIndex)
  local isActiveForInputIgnoreSelection = self:getIsEntered()
  if isActiveForInputIgnoreSelection then
    isActiveForInputIgnoreSelection = self:getVehicleCharacter()
    if isActiveForInputIgnoreSelection ~= nil and activeCamera.isInside then
      isActiveForInputIgnoreSelection:setCharacterVisibility(false)
    end
  end
end
function PushHandTool:onVehicleCharacterChanged(character)
  local isActiveForInput = self:getIsEntered()
  if isActiveForInput and character ~= nil then
    isActiveForInput = self:getActiveCamera()
    if isActiveForInput ~= nil and isActiveForInput.isInside then
      character:setCharacterVisibility(false)
    end
  end
end
function PushHandTool:postAnimationUpdate(dt)
  if self.isActive then
    if self.spec_pushHandTool.raycastsValid and self.spec_pushHandTool.handle.node ~= nil and self.spec_pushHandTool.ikChains ~= nil then
      for v7, v8 in pairs(self.spec_pushHandTool.ikChains) do
        if not (v8.nodes[1].node ~= nil) then
          continue
        end
        if not (isActiveForInput.ikChainTargets[v7] ~= nil) then
          continue
        end
        if not (isActiveForInput.ikChainTargets[v7].targetNode ~= nil) then
          continue
        end
        local v11, v12, v13 = getRotation(isActiveForInput.handle.node)
        setRotation(isActiveForInput.handle.node, 0, 0, 0)
        if isActiveForInputIgnoreSelection == nil then
          local v14 = calcDistanceFrom(v8.nodes[1].node, isActiveForInput.ikChainTargets[v7].targetNode)
        else
          local v15 = calcDistanceFrom(v8.nodes[1].node, isActiveForInput.ikChainTargets[v7].targetNode)
        end
        setRotation(isActiveForInput.handle.node, v11, v12, v13)
      end
      if isActiveForInputIgnoreSelection ~= nil then
        if isActiveForInputIgnoreSelection < isActiveForInput.handle.upperLimit then
          setRotation(isActiveForInput.handle.node, isActiveForInput.handle.minRot * (isActiveForInput.handle.upperLimit - isActiveForInputIgnoreSelection) / isActiveForInput.handle.interpolateDistance, 0, 0)
        elseif isActiveForInput.handle.lowerLimit < isActiveForInputIgnoreSelection then
          setRotation(isActiveForInput.handle.node, isActiveForInput.handle.maxRot * (isActiveForInputIgnoreSelection - isActiveForInput.handle.lowerLimit) / isActiveForInput.handle.interpolateDistance, 0, 0)
        end
      end
    end
    if isActiveForInput.ikChains ~= nil then
      for v6, v7 in pairs(isActiveForInput.ikChainTargets) do
        IKUtil.setIKChainDirty(isActiveForInput.ikChains, v6)
      end
      IKUtil.updateIKChains(isActiveForInput.ikChains)
      for v6, v7 in pairs(isActiveForInput.characterIKNodes) do
        local v10 = getRotation(v7)
        setRotation(...)
      end
      for v6, v7 in pairs(isActiveForInput.ikChainTargets) do
        IKUtil.setIKChainPose(isActiveForInput.ikChains, v6, v7.poseId)
      end
    end
  end
end
function PushHandTool:getRaycastPosition(node)
  local isActiveForInputIgnoreSelection, isSelected, v5 = getWorldTranslation(node)
  local v6, v7, v8 = localDirectionToWorld(node, 0, -1, 0)
  self.spec_pushHandTool.lastRaycastHit = false
  raycastAll(isActiveForInputIgnoreSelection, isSelected, v5, v6, v7 * 1.5, v8, "playerRaycastCallback", 2, self, PushHandTool.PLAYER_COLLISION_MASK)
  if self.spec_pushHandTool.lastRaycastHit and 0.35 < self.spec_pushHandTool.lastRaycastPosition[4] and self.spec_pushHandTool.lastRaycastPosition[2] < isSelected - 0.25 then
    return unpack(self.spec_pushHandTool.lastRaycastPosition)
  end
  return nil
end
function PushHandTool:playerRaycastCallback(hitObjectId, x, y, z, distance)
  if g_currentMission.nodeToObject[hitObjectId] ~= nil and g_currentMission.nodeToObject[hitObjectId] == self then
    return true
  end
  v6.lastRaycastPosition[1] = x
  v6.lastRaycastPosition[2] = y
  v6.lastRaycastPosition[3] = z
  v6.lastRaycastPosition[4] = distance
  v6.lastRaycastHit = true
  return false
end
