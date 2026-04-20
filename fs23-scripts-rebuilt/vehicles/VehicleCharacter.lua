-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleCharacter = {DEFAULT_MAX_UPDATE_DISTANCE = 35, DEFAULT_CLIP_DISTANCE = 75}
local VehicleCharacter_mt = Class(VehicleCharacter)
function VehicleCharacter.new(vehicle, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.vehicle = vehicle
  v2.characterNode = nil
  v2.allowUpdate = true
  v2.ikChainTargets = {}
  v2.animationCharsetId = nil
  v2.animationPlayer = nil
  v2.useAnimation = false
  return v2
end
function VehicleCharacter:load(xmlFile, xmlNode)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlNode .. "#index", xmlNode .. "#node")
  local v3 = xmlFile:getValue(xmlNode .. "#node", nil, self.vehicle.components, self.vehicle.i3dMappings)
  self.characterNode = v3
  if self.characterNode ~= nil then
    v3 = v3:getParentComponent(self.characterNode)
    self.parentComponent = v3
    v3 = xmlFile:getValue(xmlNode .. "#cameraMinDistance", 1.5)
    self.characterCameraMinDistance = v3
    v3 = xmlFile:getValue(xmlNode .. "#distanceRefNode", nil, self.vehicle.components, self.vehicle.i3dMappings)
    self.characterDistanceRefNodeCustom = v3
    if not self.characterDistanceRefNodeCustom then
    end
    self.characterDistanceRefNode = v3
    setVisibility(self.characterNode, false)
    v3 = xmlFile:getValue(xmlNode .. "#useAnimation", false)
    self.useAnimation = v3
    if not self.useAnimation then
    end
    v3 = xmlFile:getValue(v5, v6)
    self.useIdleAnimation = v3
    if not self.useAnimation then
      self.ikChainTargets = {}
      IKUtil.loadIKChainTargets(xmlFile, xmlNode, self.vehicle.components, self.ikChainTargets, self.vehicle.i3dMappings)
    end
    v3 = xmlFile:getValue(xmlNode .. "#spineRotation", nil, true)
    self.characterSpineRotation = v3
    v3 = xmlFile:getValue(xmlNode .. "#speedDependedSpine", false)
    self.characterSpineSpeedDepended = v3
    v3 = xmlFile:getValue(xmlNode .. "#spineNodeMinRot", 10)
    self.characterSpineNodeMinRot = v3
    v3 = xmlFile:getValue(xmlNode .. "#spineNodeMaxRot", -10)
    self.characterSpineNodeMaxRot = v3
    local v4 = xmlFile:getValue(xmlNode .. "#spineNodeMinAcc", -1)
    self.characterSpineNodeMinAcc = v4 / 1000000
    v4 = xmlFile:getValue(xmlNode .. "#spineNodeMaxAcc", 1)
    self.characterSpineNodeMaxAcc = v4 / 1000000
    v4 = xmlFile:getValue(xmlNode .. "#spineNodeAccDeadZone", 0.2)
    self.characterSpineNodeAccDeadZone = v4 / 1000000
    self.characterSpineLastRotation = 0
    self:setCharacterVisibility(false)
    v3 = xmlFile:getValue(xmlNode .. "#maxUpdateDistance", VehicleCharacter.DEFAULT_MAX_UPDATE_DISTANCE)
    self.maxUpdateDistance = v3
    local v5 = xmlFile:getValue(xmlNode .. "#clipDistance", VehicleCharacter.DEFAULT_CLIP_DISTANCE)
    setClipDistance(...)
    return true
  end
  return false
end
function VehicleCharacter:getParentComponent()
  return self.parentComponent
end
function VehicleCharacter:loadCharacter(playerStyle, asyncCallbackObject, asyncCallbackFunction, asyncCallbackArguments)
  if playerStyle == nil then
    asyncCallbackFunction(asyncCallbackObject, false, asyncCallbackArguments)
    return
  end
  if self.playerModel ~= nil then
    v5:delete()
  end
  local v5 = PlayerModel.new()
  self.playerModel = v5
  v6:load(playerStyle.xmlFilename, false, false, self.useAnimation, self.characterLoaded, self, {asyncCallbackObject = asyncCallbackObject, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackArguments = asyncCallbackArguments, playerStyle = playerStyle})
end
function VehicleCharacter:characterLoaded(success, arguments)
  if success then
    if self.playerModel.rootNode == nil then
      return
    end
    linkNode:setStyle(arguments.playerStyle, false, nil)
    local linkNode = Utils.getNoNil(self.characterNode, self.vehicle.rootNode)
    link(linkNode, self.playerModel.rootNode)
    IKUtil.updateAlignNodes(self.playerModel.ikChains, nil, nil, linkNode)
    for v8, v9 in pairs(self.ikChainTargets) do
      local v11 = v11:getIKChains()
      IKUtil.setTarget(v11, v8, v9)
    end
    if self.characterSpineRotation ~= nil and self.playerModel.thirdPersonSpineNode ~= nil then
      v7 = unpack(self.characterSpineRotation)
      setRotation(...)
    end
    if not self.characterDistanceRefNodeCustom then
    end
    self.characterDistanceRefNode = v5
    if self.playerModel.skeleton ~= nil then
      v5 = getNumOfChildren(self.playerModel.skeleton)
      if 0 < v5 then
        if self.useAnimation then
          v6 = v6:getNode(AnimationCache.CHARACTER)
          v8 = getChildAt(v6, 0)
          cloneAnimCharacterSet(v8, self.playerModel.skeleton)
          v8 = getChildAt(self.playerModel.skeleton, 0)
          v7 = getAnimCharacterSet(...)
          self.animationCharsetId = v7
          v7 = createConditionalAnimation()
          if v7 ~= 0 then
            self.animationPlayer = v7
          end
          -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000031 -> L268
          self.animationCharsetId = nil
          v11 = getParent(v5)
          local v10 = getName(...)
          v11 = getName(v5)
          Logging.devError(...)
          v9 = getParent(v5)
          printScenegraph(...)
        elseif self.useIdleAnimation then
          v6 = v6:getNode(AnimationCache.VEHICLE_CHARACTER)
          v8 = getChildAt(v6, 0)
          cloneAnimCharacterSet(v8, self.playerModel.skeleton)
          v7 = getAnimCharacterSet(self.playerModel.skeleton)
          self.animationCharsetId = v7
          if self.animationCharsetId ~= 0 then
            v7 = getAnimClipIndex(self.animationCharsetId, "idleSource")
            self.idleClipIndex = v7
            clearAnimTrackClip(self.animationCharsetId, 0)
            assignAnimTrackClip(self.animationCharsetId, 0, self.idleClipIndex)
            setAnimTrackLoopState(self.animationCharsetId, 0, true)
            self.idleAnimationState = false
          else
            self.useIdleAnimation = false
            self.animationCharsetId = nil
            v10 = getParent(self.playerModel.skeleton)
            v9 = getName(...)
            v10 = getName(self.playerModel.skeleton)
            Logging.devError(...)
          end
        end
      end
    end
    self:setDirty(true)
    self:setCharacterVisibility(true)
  else
    v3:delete()
    self.playerModel = nil
    Logging.error("Failed to load vehicleCharacter")
  end
  if arguments.asyncCallbackFunction ~= nil then
    arguments.asyncCallbackFunction(arguments.asyncCallbackObject, success, arguments.asyncCallbackArguments)
  end
end
function VehicleCharacter:delete()
  self:unloadCharacter()
end
function VehicleCharacter:unloadCharacter()
  if self.playerModel ~= nil then
    if not self.characterDistanceRefNodeCustom then
    end
    self.characterDistanceRefNode = success
    success:delete()
    if self.animationPlayer ~= nil then
      delete(self.animationPlayer)
      self.animationPlayer = nil
    end
    self.playerModel = nil
  end
end
function VehicleCharacter:setDirty(setAllDirty)
  if self.playerModel ~= nil then
    for v5, v6 in pairs(self.ikChainTargets) do
      if not v6.setDirty and not setAllDirty then
        continue
      end
      local v8 = v8:getIKChains()
      IKUtil.setIKChainDirty(v8, v5)
    end
  end
end
function VehicleCharacter:updateIKChains()
  local arguments = arguments:getIKChains()
  IKUtil.updateIKChains(...)
end
function VehicleCharacter:setIKChainPoseByTarget(target, poseId)
  if self.playerModel ~= nil then
    local v3 = v3:getIKChains()
    local linkNode = IKUtil.getIKChainByTarget(v3, target)
    if linkNode ~= nil then
      IKUtil.setIKChainPose(v3, linkNode.id, poseId)
    end
  end
end
function VehicleCharacter:setSpineDirty(acc)
  local arguments = math.abs(acc)
  if arguments < self.characterSpineNodeAccDeadZone then
  end
  arguments = MathUtil.clamp((acc - self.characterSpineNodeMinAcc) / (self.characterSpineNodeMaxAcc - self.characterSpineNodeMinAcc), 0, 1)
  local v3 = MathUtil.lerp(self.characterSpineNodeMinRot, self.characterSpineNodeMaxRot, arguments)
  if v3 ~= self.characterSpineLastRotation then
    self.characterSpineLastRotation = self.characterSpineLastRotation * 0.95 + v3 * 0.05
    setRotation(self.player.spineNode, self.characterSpineLastRotation, 0, 0)
    self:setDirty()
  end
end
function VehicleCharacter:updateVisibility(isVisible)
  local arguments = entityExists(self.characterDistanceRefNode)
  if arguments then
    local v3 = getCamera()
    arguments = entityExists(...)
    if arguments then
      local linkNode = getCamera()
      arguments = calcDistanceFrom(...)
      if self.characterCameraMinDistance > arguments then
      end
      self:setCharacterVisibility(true)
    end
  end
end
function VehicleCharacter:setCharacterVisibility(isVisible)
  if self.characterNode ~= nil then
    setVisibility(self.characterNode, isVisible)
  end
  if self.playerModel ~= nil and self.playerModel.isLoaded then
    arguments:setVisibility(isVisible)
  end
end
function VehicleCharacter:setAllowCharacterUpdate(state)
  self.allowUpdate = state
end
function VehicleCharacter:getAllowCharacterUpdate()
  return self.allowUpdate
end
function VehicleCharacter:update(dt)
  if self.playerModel ~= nil and self.playerModel.isLoaded then
    if Platform.gameplay.allowVehicleCharacterIKDirtyUpdate and self.vehicle.currentUpdateDistance < self.maxUpdateDistance then
      local arguments = self:getAllowCharacterUpdate()
      if arguments then
        self:setDirty(false)
      end
      self:updateIKChains()
    end
    if self.useIdleAnimation then
      if self.vehicle.currentUpdateDistance < self.maxUpdateDistance then
        -- if v0.idleAnimationState then goto L67 end
        self.idleAnimationState = true
        enableAnimTrack(self.animationCharsetId, 0)
        return
      end
      if self.idleAnimationState then
        self.idleAnimationState = false
        disableAnimTrack(self.animationCharsetId, 0)
      end
    end
  end
end
function VehicleCharacter:getIKChainTargets()
  return self.ikChainTargets
end
function VehicleCharacter:setIKChainTargets(targets, force)
  if self.ikChainTargets == targets then
    -- if not v2 then goto L33 end
  end
  self.ikChainTargets = targets
  if self.playerModel ~= nil then
    for v6, v7 in pairs(self.ikChainTargets) do
      local v9 = v9:getIKChains()
      IKUtil.setTarget(v9, v6, v7)
    end
    self:setDirty(true)
  end
end
function VehicleCharacter:getPlayerStyle()
  if self.playerModel ~= nil then
    return self.playerModel.style
  end
end
function VehicleCharacter:registerCharacterXMLPaths(success, arguments)
  self:register(XMLValueType.NODE_INDEX, success .. "#node", "Character root node")
  self:register(XMLValueType.FLOAT, success .. "#cameraMinDistance", "Min. distance until character is hidden", 1.5)
  self:register(XMLValueType.NODE_INDEX, success .. "#distanceRefNode", "Distance reference node", "Character root node")
  self:register(XMLValueType.BOOL, success .. "#useAnimation", "Use animation instead of ik chains", false)
  self:register(XMLValueType.BOOL, success .. "#useIdleAnimation", "Apply character idle animation additinally to ik chain control", "set if #useAnimation not set")
  self:register(XMLValueType.VECTOR_ROT, success .. "#spineRotation", "Spine rotation")
  self:register(XMLValueType.BOOL, success .. "#speedDependedSpine", "Speed dependent spine", false)
  self:register(XMLValueType.ANGLE, success .. "#spineNodeMinRot", "Spine node min. rotation", 10)
  self:register(XMLValueType.ANGLE, success .. "#spineNodeMaxRot", "Spine node max. rotation", -10)
  self:register(XMLValueType.FLOAT, success .. "#spineNodeMinAcc", "Spine node min. acceleration", -1)
  self:register(XMLValueType.FLOAT, success .. "#spineNodeMaxAcc", "Spine node max. acceleration", 1)
  self:register(XMLValueType.FLOAT, success .. "#spineNodeAccDeadZone", "Spine node acceleration dead zone", 0.2)
  self:register(XMLValueType.FLOAT, success .. "#maxUpdateDistance", "Max. distance to vehicle root to update ik chains of character", VehicleCharacter.DEFAULT_MAX_UPDATE_DISTANCE)
  self:register(XMLValueType.FLOAT, success .. "#clipDistance", "Clip distance of character", VehicleCharacter.DEFAULT_CLIP_DISTANCE)
  IKUtil.registerIKChainTargetsXMLPaths(self, success)
end
