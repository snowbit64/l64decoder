-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Player = {}
local Player_mt = Class(Player, Object)
InitStaticObjectClass(Player, "Player", ObjectIds.OBJECT_PLAYER)
Player.MAX_PICKABLE_OBJECT_MASS = 0.2
Player.MAX_PICKABLE_OBJECT_DISTANCE = 3
Player.PICKED_UP_OBJECTS = {}
Player.INPUT_CONTEXT_NAME = "PLAYER"
Player.BUTTONSTATES = {JUST_PRESSED = 1, PRESSED = 2, RELEASED = 3}
Player.INPUT_ACTIVE_TYPE = {STARTS_DISABLED = 1, STARTS_ENABLED = 2, IS_MOVEMENT = 3, IS_CARRYING = 4, IS_DEBUG = 5}
function Player.new(isServer, isClient)
  local v2 = Object.new(isServer, isClient, u0)
  v2.isControlled = false
  v2.isOwner = false
  v2.isEntered = false
  v2.debugFlightModeWalkingSpeed = 0.016
  v2.debugFlightModeRunningFactor = 1
  local v3 = PlayerModel.new()
  v2.model = v3
  v3:loadEmpty()
  v2.cctMovementCollisionMask = CollisionMask.PLAYER_MOVEMENT
  v2.networkInformation = {creatorConnection = nil, history = {}, index = 0}
  if v2.isServer then
    v2.networkInformation.sendIndex = 0
  end
  local v4 = InterpolationTime.new(1.2)
  v2.networkInformation.interpolationTime = v4
  v4 = InterpolatorPosition.new(0, 0, 0)
  v2.networkInformation.interpolatorPosition = v4
  v4 = InterpolatorQuaternion.new(0, 0, 0, 1)
  v2.networkInformation.interpolatorQuaternion = v4
  v4 = InterpolatorValue.new(0)
  v2.networkInformation.interpolatorOnGround = v4
  v2.networkInformation.tickTranslation = {0, 0, 0}
  v4 = v2:getNextDirtyFlag()
  v2.networkInformation.dirtyFlag = v4
  v2.networkInformation.updateTargetTranslationPhysicsIndex = -1
  v2.networkInformation.rotateObject = false
  v2.networkInformation.rotateObjectInputV = 0
  v2.networkInformation.rotateObjectInputH = 0
  v2.motionInformation = {damping = 0.8, mass = 80, maxAcceleration = 50, maxDeceleration = 50, gravity = -9.8, maxIdleSpeed = 0.1, maxWalkingSpeed = 4, maxRunningSpeed = 9, maxSwimmingSpeed = 3, maxCrouchingSpeed = 2, maxFallingSpeed = 6, maxCheatRunningSpeed = 34, maxPresentationRunningSpeed = 128, maxSpeedDelay = 0.1, brakeDelay = 0.001, brakeForce = {0, 0, 0}, currentGroundSpeed = 0, minimumFallingSpeed = -0.00001, coveredGroundDistance = 0, currentCoveredGroundDistance = 0, justMoved = false, isBraking = false, lastSpeed = 0, currentSpeed = 0, currentSpeedY = 0, isReverse = false, desiredSpeed = 0, jumpHeight = 1, currentWorldDirX = 0, currentWorldDirZ = 1, currentSpeedX = 0, currentSpeedZ = 0}
  v2.baseInformation = {lastPositionX = 0, lastPositionZ = 0, isOnGround = true, isOnGroundPhysics = true, isCloseToGround = true, isInWater = false, waterDepth = 0, wasInWater = false, waterLevel = -1.4, waterCameraOffset = 0.3, currentWaterCameraOffset = 0, plungedInWater = false, plungedYVelocityThreshold = -2, isInDebug = false, tagOffset = {0, 1.9, 0}, translationAlphaDifference = 0, animDt = 0, isCrouched = false, isUsingChainsawHorizontal = false, isUsingChainsawVertical = false, currentHandtool = nil, headBobTime = 0, lastCameraAmplitudeScale = 0}
  v2.lastEstimatedForwardVelocity = 0
  v2.inputInformation = {moveForward = 0, moveRight = 0, moveUp = 0, pitchCamera = 0, yawCamera = 0, runAxis = 0, crouchState = Player.BUTTONSTATES.RELEASED, interactState = Player.BUTTONSTATES.RELEASED, registrationList = {}}
  v2.inputInformation.registrationList[InputAction.AXIS_MOVE_SIDE_PLAYER] = {eventId = "", callback = v2.onInputMoveSide, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.AXIS_MOVE_FORWARD_PLAYER] = {eventId = "", callback = v2.onInputMoveForward, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.AXIS_LOOK_LEFTRIGHT_PLAYER] = {eventId = "", callback = v2.onInputLookLeftRight, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.AXIS_LOOK_UPDOWN_PLAYER] = {eventId = "", callback = v2.onInputLookUpDown, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.AXIS_RUN] = {eventId = "", callback = v2.onInputRun, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.JUMP] = {eventId = "", callback = v2.onInputJump, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = GS_IS_CONSOLE_VERSION}
  v2.inputInformation.registrationList[InputAction.CROUCH] = {eventId = "", callback = v2.onInputCrouch, triggerUp = false, triggerDown = true, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = GS_IS_CONSOLE_VERSION}
  v2.inputInformation.registrationList[InputAction.ANIMAL_PET] = {eventId = "", callback = v2.onInputActivateObject, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT, callbackState = nil, text = "", textVisibility = true}
  local v6 = v6:getText("action_rotateObjectHorizontally")
  v2.inputInformation.registrationList[InputAction.ROTATE_OBJECT_LEFT_RIGHT] = {eventId = "", callback = v2.onInputRotateObjectHorizontally, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_CARRYING, callbackState = nil, text = v6, textVisibility = true}
  v6 = v6:getText("action_rotateObjectVertically")
  v2.inputInformation.registrationList[InputAction.ROTATE_OBJECT_UP_DOWN] = {eventId = "", callback = v2.onInputRotateObjectVertically, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_CARRYING, callbackState = nil, text = v6, textVisibility = true}
  v2.inputInformation.registrationList[InputAction.ENTER] = {eventId = "", callback = v2.onInputEnter, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_ENABLED, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.TOGGLE_LIGHTS_FPS] = {eventId = "", callback = v2.onInputToggleLight, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_ENABLED, callbackState = nil, text = "", textVisibility = false}
  v6 = v6:getText("input_THROW_OBJECT")
  v2.inputInformation.registrationList[InputAction.THROW_OBJECT] = {eventId = "", callback = v2.onInputThrowObject, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_DISABLED, callbackState = nil, text = v6, textVisibility = true}
  v2.inputInformation.registrationList[InputAction.INTERACT] = {eventId = "", callback = v2.onInputInteract, triggerUp = true, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_DISABLED, callbackState = nil, text = "", textVisibility = true}
  v6 = v6:getText("input_SWITCH_HANDTOOL")
  v2.inputInformation.registrationList[InputAction.SWITCH_HANDTOOL] = {eventId = "", callback = v2.onInputCycleHandTool, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_DISABLED, callbackState = nil, text = v6, textVisibility = false}
  v2.inputInformation.registrationList[InputAction.DEBUG_PLAYER_ENABLE] = {eventId = "", callback = v2.onInputDebugFlyToggle, triggerUp = false, triggerDown = true, triggerAlways = false, activeType = Player.INPUT_ACTIVE_TYPE.IS_DEBUG, callbackState = nil, text = "", textVisibility = false}
  v2.inputInformation.registrationList[InputAction.DEBUG_PLAYER_UP_DOWN] = {eventId = "", callback = v2.onInputDebugFlyUpDown, triggerUp = false, triggerDown = false, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.IS_DEBUG, callbackState = nil, text = "", textVisibility = false}
  v6 = v6:getText("input_ACTIVATE_HANDTOOL")
  v2.inputInformation.registrationList[InputAction.ACTIVATE_HANDTOOL] = {eventId = "", callback = v2.onInputActivateHandtool, triggerUp = false, triggerDown = true, triggerAlways = true, activeType = Player.INPUT_ACTIVE_TYPE.STARTS_DISABLED, callbackState = nil, text = v6, textVisibility = false}
  v2.walkingIsLocked = false
  v2.canRideAnimal = false
  v2.canEnterVehicle = false
  v2.isTorchActive = false
  v2.rotX = 0
  v2.rotY = 0
  v2.cameraRotY = 0
  v2.oldYaw = 0
  v2.newYaw = 0
  v2.estimatedYawVelocity = 0
  v2.graphicsRotY = 0
  v2.targetGraphicsRotY = 0
  v2.thirdPersonViewActive = false
  v2.camera = 0
  v2.time = 0
  v2.clipDistance = 500
  v2.waterY = -2000
  v2.lastAnimPosX = 0
  v2.lastAnimPosY = 0
  v2.lastAnimPosZ = 0
  v2.maxPickableMass = Player.MAX_PICKABLE_OBJECT_MASS
  v2.walkDistance = 0
  v2.animUpdateTime = 0
  v2.allowPlayerPickUp = Platform.allowPlayerPickUp
  v2.debugFlightMode = false
  v2.debugFlightCoolDown = 0
  v2.requestedFieldData = false
  v3 = PlayerStateMachine.new(v2)
  v2.playerStateMachine = v3
  v3 = PlayerHUDUpdater.new()
  v2.hudUpdater = v3
  v2.farmId = FarmManager.SPECTATOR_FARM_ID
  v3 = v3:getValue(GameSettings.SETTING.CAMERA_BOBBING)
  v2.cameraBobbingEnabled = v3
  v3 = PlayerHotspot.new()
  v2.playerHotspot = v3
  v3:setPlayer(v2)
  return v2
end
function Player:load(creatorConnection, isOwner)
  self.networkInformation.creatorConnection = creatorConnection
  self.isOwner = isOwner
  local v3 = createTransformGroup("PlayerCCT")
  self.rootNode = v3
  local v4 = getRootNode()
  link(v4, self.rootNode)
  v3 = createTransformGroup("player_graphicsRootNode")
  self.graphicsRootNode = v3
  v4 = getRootNode()
  link(v4, self.graphicsRootNode)
  v3 = createCamera("player_camera", 1.2217304763960306, 0.15, 6000)
  self.cameraNode = v3
  v3 = calculateFovY(self.cameraNode)
  self.fovY = v3
  setFovY(self.cameraNode, self.fovY)
  v3 = createTransformGroup("thirdPersonLookatNode")
  self.thirdPersonLookatNode = v3
  link(self.graphicsRootNode, self.thirdPersonLookatNode)
  setTranslation(self.thirdPersonLookatNode, 0, 0, 0)
  v3 = createTransformGroup("thirdPersonLookfromNode")
  self.thirdPersonLookfromNode = v3
  link(self.thirdPersonLookatNode, self.thirdPersonLookfromNode)
  setTranslation(self.thirdPersonLookfromNode, 0, 0, -2)
  self:updateCameraModelTarget()
  v3 = createTransformGroup("player_foliageBendingNode")
  self.foliageBendingNode = v3
  link(self.graphicsRootNode, self.foliageBendingNode)
  v3:load()
  self.isObjectInRange = false
  self.isCarryingObject = false
  self.pickedUpObject = nil
  v3 = v3:getValue("uiScale")
  local v4, v5 = getNormalizedScreenValues(80 * v3, 80 * v3)
  local v6 = Overlay.new(g_baseHUDFilename, 0.5, 0.5, v4, v5)
  self.pickedUpObjectOverlay = v6
  v6:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v8 = GuiUtils.getUVs({0, 138, 80, 80})
  v6:setUVs(...)
  v6:setColor(1, 1, 1, 0.3)
  local v6, v7 = getNormalizedScreenValues(20 * v3, 20 * v3)
  v8 = Overlay.new(g_baseHUDFilename, 0.5, 0.5, v6, v7)
  self.aimOverlay = v8
  v8:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v10 = GuiUtils.getUVs({0, 48, 48, 48})
  v8:setUVs(...)
  v8:setColor(1, 1, 1, 0.3)
  local v8, v9 = getNormalizedScreenValues(75 * v3, 75 * v3)
  v10 = Overlay.new(g_baseHUDFilename, 0.5, 0.5, v8, v9)
  self.brushOverlay = v10
  v10:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v12 = GuiUtils.getUVs({307, 494, 75, 75})
  v10:setUVs(...)
  v10:setColor(1, 1, 1, 0.3)
  local v10, v11 = getNormalizedScreenValues(75 * v3, 75 * v3)
  v12 = Overlay.new(g_baseHUDFilename, 0.5, 0.5, v10, v11)
  self.petOverlay = v12
  v12:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v14 = GuiUtils.getUVs({307, 419, 75, 75})
  v12:setUVs(...)
  v12:setColor(1, 1, 1, 0.3)
  self:moveToAbsoluteInternal(0, -200, 0)
  self:rebuildCCT()
  self.lockedInput = false
  if self.isOwner then
    addConsoleCommand("gsPlayerFlightMode", "Enables/disables the flight mode toggle (key J). Use keys Q and E to change altitude", "consoleCommandToggleFlightMode", self)
    addConsoleCommand("gsWoodCuttingMarkerVisiblity", "Enables/disables chainsaw woodcutting marker", "Player.consoleCommandToggleWoodCuttingMaker", nil)
    addConsoleCommand("gsPlayerDebug", "Enables/disables player debug information", "consoleCommandTogglePlayerDebug", self)
    addConsoleCommand("gsPlayerNoClip", "Enables/disables player no clip/collision mode. Use 'gsPlayerNoClip true' to also turn of terrain collision", "consoleCommandToggleNoClipMode", self)
    if g_addTestCommands then
      addConsoleCommand("gsTip", "Tips a fillType into a trigger", "consoleCommandTip", self)
      addConsoleCommand("gsPlayerIKChainsReload", "Reloads player IKChains", "Player.consoleCommandReloadIKChains", nil)
      addConsoleCommand("gsPlayerSuperStrength", "Enables/disables player super strength", "consoleCommandToggleSuperStrongMode", self)
      addConsoleCommand("gsPlayerThirdPerson", "Enables/disables player third person view", "consoleCommandThirdPersonView", self)
    end
  end
end
function Player:getParentComponent(node)
  return self.graphicsRootNode
end
function Player:delete()
  self.isDeleting = true
  if self.isOwner then
    v1:unsubscribeAll(self)
    self:removeActionEvents()
  end
  if self.isCarryingObject and g_server ~= nil then
    self:pickUpObject(false)
  end
  v1:removeMapHotspot(self.playerHotspot)
  v1:delete()
  if self.pickedUpObjectOverlay ~= nil then
    v1:delete()
    v1:delete()
    v1:delete()
    v1:delete()
  end
  local v1 = self:hasHandtoolEquipped()
  if v1 then
    v1:onDeactivate()
    v1:delete()
    self.baseInformation.currentHandtool = nil
  end
  v1:delete()
  removeCCT(self.controllerIndex)
  delete(self.rootNode)
  delete(self.graphicsRootNode)
  v1:delete()
  if self.hudUpdater ~= nil then
    v1:delete()
  end
  self:deleteStartleAnimalData()
  if self.foliageBendingId ~= nil then
    v1:destroyObject(self.foliageBendingId)
    self.foliageBendingId = nil
  end
  self.foliageBendingNode = nil
  if self.isOwner then
    removeConsoleCommand("gsPlayerFlightMode")
    removeConsoleCommand("gsWoodCuttingMarkerVisiblity")
    removeConsoleCommand("gsPlayerDebug")
    removeConsoleCommand("gsPlayerNoClip")
    removeConsoleCommand("gsPlayerThirdPerson")
    removeConsoleCommand("gsPlayerIKChainsReload")
    removeConsoleCommand("gsTip")
    removeConsoleCommand("gsPlayerSuperStrength")
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function Player:setCuttingAnim(isCutting, isHorizontalCut)
  if not isCutting then
    if not self.baseInformation.isUsingChainsawHorizontal then
      -- if not v0.baseInformation.isUsingChainsawVertical then goto L22 end
    end
    self.baseInformation.isUsingChainsawHorizontal = false
    self.baseInformation.isUsingChainsawVertical = false
    return
  end
  if isCutting then
    if isHorizontalCut then
      self.baseInformation.isUsingChainsawHorizontal = true
      self.baseInformation.isUsingChainsawVertical = false
      return
    end
    self.baseInformation.isUsingChainsawHorizontal = false
    self.baseInformation.isUsingChainsawVertical = true
  end
end
function Player:readStream(streamId, connection, objectId)
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection)
  local v4 = streamReadBool(streamId)
  v5 = streamReadFloat32(streamId)
  local v6 = streamReadFloat32(streamId)
  local v7 = streamReadFloat32(streamId)
  local v8 = streamReadBool(streamId)
  local v9 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v9
  v9 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v9
  self:load(connection, v4)
  self:moveToAbsoluteInternal(v5, v6, v7)
  local v11 = streamReadBool(streamId)
  self:setLightIsActive(v11, true)
  if v8 ~= self.isControlled then
    if v8 then
      self:onEnter(false)
    else
      self:onLeave()
    end
  end
  v9 = streamReadBool(streamId)
  if v9 then
    v11 = streamReadString(streamId)
    local v10 = NetworkUtil.convertFromNetworkFilename(...)
    self:equipHandtool(v10, true, true)
  end
  v10 = v10:getServerConnection()
  local v12 = PlayerRequestStyleEvent.new(objectId)
  v10:sendEvent(...)
end
function Player:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  if connection ~= self.networkInformation.creatorConnection then
  end
  v3(v4, true)
  local v3, v4, v5 = getTranslation(self.rootNode)
  streamWriteFloat32(streamId, v3)
  streamWriteFloat32(streamId, v4)
  streamWriteFloat32(streamId, v5)
  streamWriteBool(streamId, self.isControlled)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
  streamWriteBool(streamId, self.isTorchActive)
  local hasHandtool = self:hasHandtoolEquipped()
  streamWriteBool(streamId, hasHandtool)
  if hasHandtool then
    local v9 = NetworkUtil.convertToNetworkFilename(self.baseInformation.currentHandtool.configFileName)
    streamWriteString(...)
  end
end
function Player:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadFloat32(streamId)
    local v5 = streamReadFloat32(streamId)
    local v6 = streamReadFloat32(streamId)
    local v7 = streamReadFloat32(streamId)
    self.cameraRotY = v7
    local v8 = streamReadBool(streamId)
    self.isObjectInRange = v8
    if self.isObjectInRange then
      v8 = streamReadFloat32(streamId)
      self.lastFoundObjectMass = v8
    else
      self.lastFoundObjectMass = nil
    end
    v8 = streamReadBool(streamId)
    self.isCarryingObject = v8
    v8 = streamReadBool(streamId)
    if self.isOwner then
      local v9 = streamReadInt32(streamId)
      while true do
        if not (self.networkInformation.history[1] ~= nil) then
          break
        end
        if not (self.networkInformation.history[1].index <= v9) then
          break
        end
        table.remove(self.networkInformation.history, 1)
      end
      setCCTPosition(self.controllerIndex, v4, v5, v6)
      if #self.networkInformation.history <= 5 then
        -- TODO: structure LOP_FORNPREP (pc 102, target 174)
        moveCCT(self.controllerIndex, self.networkInformation.history[1].movementX, self.networkInformation.history[1].movementY, self.networkInformation.history[1].movementZ, self.cctMovementCollisionMask)
        -- TODO: structure LOP_FORNLOOP (pc 119, target 103)
      else
        local v12 = math.floor(#self.networkInformation.history / 5)
        -- TODO: structure LOP_FORNPREP (pc 134, target 174)
        if 1 <= 5 - #self.networkInformation.history + v12 * 5 then
        else
        end
        -- TODO: structure LOP_FORNPREP (pc 148, target 162)
        -- TODO: structure LOP_FORNLOOP (pc 161, target 149)
        moveCCT(self.controllerIndex, 0 + v10[v14].movementX, 0 + v10[v14].movementY, 0 + v10[v14].movementZ, self.cctMovementCollisionMask)
        -- TODO: structure LOP_FORNLOOP (pc 173, target 135)
      end
      local v13 = getPhysicsUpdateIndex()
      self.networkInformation.updateTargetTranslationPhysicsIndex = v13
      v13 = streamReadBool(streamId)
      self.baseInformation.isCrouched = v13
      return
    end
    v9 = streamReadBool(streamId)
    if v9 ~= self.isControlled then
      self:moveToAbsoluteInternal(v4, v5, v6)
      if v9 then
        self:onEnter(false)
        -- goto L265  (LOP_JUMP +55)
      end
      self:onLeave()
    else
      setTranslation(self.rootNode, v4, v5, v6)
      v10:setTargetPosition(v4, v5, v6)
      if v8 then
        v10:setTargetValue(1)
      else
        v10:setTargetValue(0)
      end
      self.networkInformation.updateTargetTranslationPhysicsIndex = -1
      v10:startNewPhaseNetwork()
      self:raiseActive()
    end
    local v11 = streamReadBool(streamId)
    self.baseInformation.isCrouched = v11
    return
  end
  if connection == self.networkInformation.creatorConnection then
    v4 = streamReadFloat32(streamId)
    v5 = streamReadFloat32(streamId)
    v6 = streamReadFloat32(streamId)
    v7 = streamReadFloat32(streamId)
    v8 = streamReadFloat32(streamId)
    v9 = streamReadFloat32(streamId)
    local v10 = streamReadFloat32(streamId)
    v11 = streamReadInt32(streamId)
    v12 = streamReadBool(streamId)
    moveCCT(self.controllerIndex, v4, v5, v6, self.cctMovementCollisionMask)
    v13:startNewPhaseNetwork()
    v13:setTargetQuaternion(v7, v8, v9, v10)
    v13 = getPhysicsUpdateIndex()
    table.insert(self.networkInformation.history, {index = v11, physicsIndex = v13})
    self.networkInformation.updateTargetTranslationPhysicsIndex = v13
    self:raiseActive()
    if v12 ~= self.isControlled then
      if v12 then
        self:onEnter(false)
      else
        self:onLeave()
      end
    end
    local v15 = streamReadBool(streamId)
    self.baseInformation.isCrouched = v15
    if self.isCarryingObject then
      v15 = streamReadBool(streamId)
      self.networkInformation.rotateObject = v15
      if self.networkInformation.rotateObject then
        v15 = streamReadFloat32(streamId)
        self.networkInformation.rotateObjectInputH = v15
        v15 = streamReadFloat32(streamId)
        self.networkInformation.rotateObjectInputV = v15
      end
    end
  end
end
function Player:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v4, v5, v6 = getTranslation(self.rootNode)
    streamWriteFloat32(streamId, v4)
    streamWriteFloat32(streamId, v5)
    streamWriteFloat32(streamId, v6)
    local v9 = getParent(self.cameraNode)
    local v7, v8, v9 = localDirectionToLocal(self.cameraNode, v9, 0, 0, 1)
    local v10 = math.atan2(v7, v9)
    streamWriteFloat32(streamId, v10)
    streamWriteBool(streamId, self.isObjectInRange)
    if self.isObjectInRange then
      streamWriteFloat32(streamId, self.lastFoundObjectMass)
    end
    streamWriteBool(streamId, self.isCarryingObject)
    streamWriteBool(streamId, self.baseInformation.isOnGroundPhysics)
    if connection ~= self.networkInformation.creatorConnection then
    end
    if true then
      streamWriteInt32(streamId, self.networkInformation.sendIndex)
      streamWriteBool(streamId, self.baseInformation.isCrouched)
      return
    end
    streamWriteBool(streamId, self.isControlled)
    if not self.baseInformation.isCrouched then
      local v12 = v12:isActive("crouch")
    end
    streamWriteBool(streamId, v12)
    return
  end
  if self.isOwner then
    streamWriteFloat32(streamId, self.networkInformation.tickTranslation[1])
    streamWriteFloat32(streamId, self.networkInformation.tickTranslation[2])
    streamWriteFloat32(streamId, self.networkInformation.tickTranslation[3])
    self.networkInformation.tickTranslation[1] = 0
    self.networkInformation.tickTranslation[2] = 0
    self.networkInformation.tickTranslation[3] = 0
    v4, v5, v6, v7 = getQuaternion(self.cameraNode)
    streamWriteFloat32(streamId, v4)
    streamWriteFloat32(streamId, v5)
    streamWriteFloat32(streamId, v6)
    streamWriteFloat32(streamId, v7)
    streamWriteInt32(streamId, self.networkInformation.index)
    streamWriteBool(streamId, self.isControlled)
    v8 = v8:isActive("crouch")
    streamWriteBool(streamId, v8)
    if self.isCarryingObject then
      streamWriteBool(streamId, self.networkInformation.rotateObject)
      if self.networkInformation.rotateObject then
        streamWriteFloat32(streamId, self.networkInformation.rotateObjectInputH)
        streamWriteFloat32(streamId, self.networkInformation.rotateObjectInputV)
      end
    end
  end
end
function Player.mouseEvent(v0, v1, v2, v3, v4, v5)
end
function Player:getIsInputAllowed()
  if self.isEntered and self.isClient then
    local v2 = v2:getIsGuiVisible()
  end
  return v1
end
function Player:updateAnimationParameters(dt)
  if not self.isEntered and self.baseInformation.animDt ~= nil and self.baseInformation.animDt ~= 0 then
    self.oldYaw = self.newYaw
    self.newYaw = self.cameraRotY
    local v6 = MathUtil.getAngleDifference(self.newYaw, self.oldYaw)
    self.estimatedYawVelocity = v6 / self.baseInformation.animDt * 0.001
    self.baseInformation.animDt = 0
  end
  v6:setAnimationParameters(self.baseInformation.isOnGround, self.baseInformation.isInWater, self.baseInformation.isCrouched, self.baseInformation.isCloseToGround, self.lastEstimatedForwardVelocity, v4, self.estimatedYawVelocity)
end
function Player:updateWaterParams()
  local v1, v2, v3 = getWorldTranslation(self.rootNode)
  if not self.isWaterCheckPending then
    self.isWaterCheckPending = true
    v4:getWaterYAtWorldPositionAsync(v1, v2, v3, function(self, v1)
      u0.waterY = v1 or -2000
      u0.isWaterCheckPending = false
    end, nil, true)
  end
  if v2 - self.model.capsuleTotalHeight * 0.5 - self.waterY < -50 then
    return
  end
  if not self.isEntered then
  else
  end
  self.baseInformation.wasInWater = self.baseInformation.isInWater
  if v5 > v6 then
  end
  v8.isInWater = true
  local v9 = math.max(0, self.waterY - v4)
  self.baseInformation.waterDepth = v9
  if not self.baseInformation.wasInWater and self.baseInformation.isInWater and v7 < self.baseInformation.plungedYVelocityThreshold then
    self.baseInformation.plungedInWater = true
    return
  end
  self.baseInformation.plungedInWater = false
end
function Player:update(dt)
  self.time = self.time + dt
  if not self.isEntered and self.isClient and self.isControlled then
    self:updateFX()
  end
  if not self.isServer then
    -- if not v0.isEntered then goto L32 end
  end
  local v2, v3, v4 = getCCTCollisionFlags(self.controllerIndex)
  self.baseInformation.isOnGroundPhysics = v4
  if self.isClient and self.isControlled then
    self:updateWaterParams()
    if Platform.hasPlayer then
      self:updateSound()
    end
  end
  if self.isEntered and self.isClient then
    v2 = v2:getIsGuiVisible()
    if not v2 and not g_currentMission.isPlayerFrozen then
      self:updatePlayerStates()
      v2:update(dt)
      self:recordPositionInformation()
      if self.cameraBobbingEnabled and not self.thirdPersonViewActive then
        v3 = self:cameraBob(dt)
      end
      self:updateCameraTranslation(v2)
      self:debugDraw()
      v3:debugDraw(dt)
      if not self.walkingIsLocked then
        local v7 = v7:getValue(GameSettings.SETTING.CAMERA_SENSITIVITY)
        self.rotX = self.rotX - self.inputInformation.pitchCamera * v7
        v7 = v7:getValue(GameSettings.SETTING.CAMERA_SENSITIVITY)
        self.rotY = self.rotY - self.inputInformation.yawCamera * v7
        if self.thirdPersonViewActive then
          local v5 = math.max(-1, self.rotX)
          v3 = math.min(...)
          self.rotX = v3
          setRotation(self.thirdPersonLookatNode, -self.rotX, self.rotY, 0)
        else
          v5 = math.max(-1.5, self.rotX)
          v3 = math.min(...)
          self.rotX = v3
          setRotation(self.cameraNode, self.rotX, self.rotY, 0)
          setRotation(self.foliageBendingNode, 0, self.rotY, 0)
        end
      end
      self:updateActionEvents()
      v3, v4, v5 = getWorldTranslation(self.cameraNode)
      v6:setPosition(v3, v4, v5)
    end
  end
  v2 = self:hasHandtoolEquipped()
  if v2 then
    v5 = self:getIsInputAllowed()
    v2:update(...)
    v2 = v2:isActive("swim")
    if v2 then
      self:unequipHandtool()
    end
  end
  self:updateInterpolation()
  if self.isClient then
    -- if v0.isControlled then goto L252 end
  end
  if self.thirdPersonViewActive then
    self:updateRotation(dt)
  end
  if self.isClient and self.isControlled then
    if self.isEntered then
      -- if not v2 then goto L277 end
    end
    self:updateAnimationParameters(dt)
    v3:updateAnimations(dt)
  end
  if self.allowPlayerPickUp and self.isControlled then
    if not self.isServer then
      -- if not v0.isEntered then goto L292 end
    end
    self:checkObjectInRange()
  end
  if not self.isEntered then
    -- if not v0.networkInformation.interpolationTime.isDirty then goto L305 end
  end
  self:raiseActive()
  if self.isClient and self.isControlled and not self.isEntered and self.networkInformation.rotateObject then
    self:rotateObject(self.networkInformation.rotateObjectInputV, 1, 0, 0)
    self:rotateObject(self.networkInformation.rotateObjectInputH, 0, 1, 0)
  end
  self:resetCameraInputsInformation()
  if self.isEntered and self.hudUpdater ~= nil then
    local v6 = self:getPositionData()
    v3:update(...)
  end
  if Platform.gameplay.automaticLights then
    v3 = v3:getHasTorch()
    if v3 then
      v4 = v4:isAvailable("useLight")
      if v4 and not g_currentMission.environment.isSunOn ~= self.isTorchActive then
        v4:activateState("useLight")
      end
    end
  end
end
function Player:updateTick(dt)
  if self.isEntered then
    local v2 = v2:getIsGuiVisible()
    if not v2 and not g_currentMission.isPlayerFrozen then
      self:updateKinematic(dt)
    end
  end
  v2:updateTick(dt)
  v2 = self:hasHandtoolEquipped()
  if v2 then
    local v5 = self:getIsInputAllowed()
    v2:updateTick(...)
  end
  self:updateNetworkMovementHistory()
  self:updateInterpolationTick()
  self:resetInputsInformation()
  if self.isServer and self.isControlled and not GS_PLATFORM_PC then
    local v2, v3, v4 = getTranslation(self.rootNode)
    local v6 = NetworkUtil.getIsWorldPositionInCompressionRange(v2, g_currentMission.vehicleXZPosCompressionParams)
    if v6 then
      v6 = NetworkUtil.getIsWorldPositionInCompressionRange(v4, g_currentMission.vehicleXZPosCompressionParams)
      if v6 then
        v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2, v3, v4)
        -- if v3 + 20 >= v6 then goto L98 end
      end
    end
    self:moveTo(g_currentMission.playerStartX, g_currentMission.playerStartY, g_currentMission.playerStartZ, g_currentMission.playerStartIsAbsolute, false)
    return
  end
  if self.isControlled and not self.noClipEnabled then
    v2, v3, v4 = getTranslation(self.rootNode)
    v5 = DensityMapHeightUtil.getCollisionHeightAtWorldPos(v2, v3, v4)
    if v3 < v5 + 0.5 * self.model.capsuleHeight - 0.1 then
      setTranslation(self.rootNode, v2, v5 + 0.5 * self.model.capsuleHeight + 0.05, v4)
    end
  end
end
function Player:setInputState(inputAction, state)
  v4:setActionEventActive(self.inputInformation.registrationList[inputAction].eventId, state)
  v4:setActionEventTextVisibility(self.inputInformation.registrationList[inputAction].eventId, state)
  self.inputInformation.registrationList[inputAction].lastState = state
end
function Player:disableInput(inputAction, currentState)
  if not currentState and self.inputInformation.registrationList[inputAction].lastState then
    self:setInputState(inputAction, false)
  end
end
function Player:updateActionEvents()
  local v3 = v3:isAvailable("useLight")
  if v3 and not g_currentMission.environment.isSunOn then
    if not g_currentMission.environment.isSunOn then
      local v6 = v6:getHasTorch()
    end
    v3:setActionEventTextVisibility(v5, v6)
  end
  local v11 = v11:isAvailable("cycleHandtool")
  if v11 then
  end
  v11 = self:hasHandtoolEquipped()
  if v11 then
    v11:isAvailable("activateObject")
  else
    v11 = v11:isAvailable("throw")
    if v11 then
    end
    if self.isCarryingObject then
    end
    v11 = v11:isAvailable("animalPet")
    if v11 then
      local v15 = v15:getText("action_petAnimal")
      v12:setActionEventText(...)
    end
    local v12 = v12:isAvailable("drop")
    if v12 then
      v15 = v15:getText("action_dropObject")
      v12:setActionEventText(...)
    else
      v12 = v12:isAvailable("pickup")
      if v12 then
        v15 = v15:getText("action_pickUpObject")
        v12:setActionEventText(...)
      else
        v12 = v12:isAvailable("animalInteract")
        if not v12 then
          v12 = v12:isActive("animalInteract")
          -- if not v12 then goto L193 end
        end
        v12 = v12:getState("animalInteract")
        local v14 = v14:getText("action_interactAnimal")
        local v13 = string.format(v14, v12.interactText)
        v14:setActionEventText(v11, v13)
      end
    end
  end
  v11 = v11:isAvailable("animalRide")
  self.canRideAnimal = v11
  if g_currentMission.interactiveVehicleInRange then
    v11 = v11:getIsEnterable()
  end
  self.canEnterVehicle = v11
  if self.canEnterVehicle then
    v11 = SpecializationUtil.hasSpecialization(Rideable, g_currentMission.interactiveVehicleInRange.specializations)
  end
  if self.canEnterVehicle then
    -- if v11 then goto L248 end
    local v16 = v16:getText("button_enterVehicle")
    v13:setActionEventText(...)
  else
    if not self.canRideAnimal then
      -- if not v11 then goto L291 end
    end
    if self.canRideAnimal then
      v14 = v14:getState("animalRide")
      v15 = v14:getRideableName()
    elseif v11 then
      v14 = v14:getFullName()
    end
    local v18 = v18:getText("action_rideAnimal")
    local v17 = string.format(v18, v13)
    v14:setActionEventText(...)
  end
  self:disableInput(InputAction.SWITCH_HANDTOOL, v3)
  self:disableInput(InputAction.ACTIVATE_HANDTOOL, v4)
  self:disableInput(InputAction.INTERACT, v5)
  self:disableInput(InputAction.ANIMAL_PET, v6)
  self:disableInput(InputAction.ENTER, v7)
  self:disableInput(InputAction.THROW_OBJECT, v8)
  self:disableInput(InputAction.ROTATE_OBJECT_LEFT_RIGHT, v9)
  self:disableInput(InputAction.ROTATE_OBJECT_UP_DOWN, v10)
  self:setInputState(InputAction.SWITCH_HANDTOOL, v3)
  self:setInputState(InputAction.ACTIVATE_HANDTOOL, v4)
  self:setInputState(InputAction.INTERACT, v5)
  self:setInputState(InputAction.ANIMAL_PET, v6)
  self:setInputState(InputAction.ENTER, v7)
  self:setInputState(InputAction.THROW_OBJECT, v8)
  self:setInputState(InputAction.ROTATE_OBJECT_LEFT_RIGHT, v9)
  self:setInputState(InputAction.ROTATE_OBJECT_UP_DOWN, v10)
  v14:setActionEventActive(self.inputInformation.registrationList[InputAction.DEBUG_PLAYER_ENABLE].eventId, g_flightModeEnabled)
  v15:setActionEventActive(self.inputInformation.registrationList[InputAction.DEBUG_PLAYER_UP_DOWN].eventId, g_flightModeEnabled)
end
function Player:updateInterpolationTick()
  if self.isEntered then
    local v1, v2, v3 = getTranslation(self.rootNode)
    local v5 = math.abs(v1 - self.networkInformation.interpolatorPosition.targetPositionX)
    if v5 < 0.001 then
      v5 = math.abs(v2 - self.networkInformation.interpolatorPosition.targetPositionY)
      if v5 < 0.001 then
        v5 = math.abs(v3 - self.networkInformation.interpolatorPosition.targetPositionZ)
        if v5 < 0.001 then
        end
      end
    end
    v5:setTargetPosition(v1, v2, v3)
    if self.baseInformation.isOnGroundPhysics then
      v5:setTargetValue(1)
    else
      v5:setTargetValue(0)
    end
    v5:startNewPhase(75)
    return
  end
  if 0 <= self.networkInformation.updateTargetTranslationPhysicsIndex then
    v1, v2, v3 = getTranslation(self.rootNode)
    local v4 = getIsPhysicsUpdateIndexSimulated(self.networkInformation.updateTargetTranslationPhysicsIndex)
    if v4 then
      self.networkInformation.updateTargetTranslationPhysicsIndex = -1
    else
      v5 = math.abs(v1 - self.networkInformation.interpolatorPosition.targetPositionX)
      if v5 < 0.001 then
        v5 = math.abs(v2 - self.networkInformation.interpolatorPosition.targetPositionY)
        if v5 < 0.001 then
          v5 = math.abs(v3 - self.networkInformation.interpolatorPosition.targetPositionZ)
          if v5 < 0.001 then
          end
        end
      end
    end
    v4:setTargetPosition(v1, v2, v3)
    if self.baseInformation.isOnGroundPhysics then
      v4:setTargetValue(1)
    else
      v4:setTargetValue(0)
    end
    v4:setTargetQuaternion(self.networkInformation.interpolatorQuaternion.targetQuaternionX, self.networkInformation.interpolatorQuaternion.targetQuaternionY, self.networkInformation.interpolatorQuaternion.targetQuaternionZ, self.networkInformation.interpolatorQuaternion.targetQuaternionW)
    v4:startNewPhase(75)
  end
end
function Player:updateInterpolation()
  if self.isControlled then
    if self.isServer then
    end
    if not v1 then
      -- if not v0.isClient then goto L112 end
    end
    if self.networkInformation.interpolationTime.isDirty then
      v3:update(g_physicsDtUnclamped)
      if v1 then
        local v3, v4, v5, v6 = v3:getInterpolatedValues(self.networkInformation.interpolationTime.interpolationAlpha)
        setQuaternion(self.cameraNode, v3, v4, v5, v6)
      end
      if v2 then
        v3, v4, v5 = v3:getInterpolatedValues(self.networkInformation.interpolationTime.interpolationAlpha)
        local v6, v7 = v6:getCapsuleSize()
        setTranslation(self.graphicsRootNode, v3, v4 - v6 - v7 / 2, v5)
        local v8 = v8:getInterpolatedValue(self.networkInformation.interpolationTime.interpolationAlpha)
        if 0.99 >= v8 then
        end
        v9.isOnGround = true
        if 0.01 >= v8 then
        end
        v9.isCloseToGround = true
      end
    end
  end
end
function Player:updateNetworkMovementHistory()
  if self.isEntered and self.isClient then
    self:raiseDirtyFlags(self.networkInformation.dirtyFlag)
    return
  end
  if self.isServer and not self.isEntered and self.isControlled then
    while true do
      if not (self.networkInformation.history[1] ~= nil) then
        break
      end
      v2 = getIsPhysicsUpdateIndexSimulated(self.networkInformation.history[1].physicsIndex)
      if not v2 then
        break
      end
      table.remove(self.networkInformation.history, 1)
    end
    if 0 <= v1 then
      self.networkInformation.sendIndex = v1
      self:raiseDirtyFlags(self.networkInformation.dirtyFlag)
    end
  end
end
function Player:updateRotation(dt)
  if not self.isEntered then
    self.animUpdateTime = self.animUpdateTime + dt
    if 60 < self.animUpdateTime then
      if self.isServer then
        local v4 = getParent(self.cameraNode)
        local v2, v3, v4 = localDirectionToLocal(self.cameraNode, v4, 0, 0, 1)
        local v5 = math.atan2(v2, v4)
        self.cameraRotY = v5
      end
      v2, v3, v4 = getTranslation(self.graphicsRootNode)
      local v10 = math.sin(self.cameraRotY)
      v10 = math.cos(self.cameraRotY)
      if (v2 - self.lastAnimPosX) * (v2 - self.lastAnimPosX) + (v4 - self.lastAnimPosZ) * (v4 - self.lastAnimPosZ) < 0.001 then
        self.targetGraphicsRotY = self.cameraRotY + 3.141592653589793
      elseif -0.001 < (v2 - self.lastAnimPosX) * -v10 + (v4 - self.lastAnimPosZ) * -v10 then
        local v11 = math.atan2(v2 - self.lastAnimPosX, v4 - self.lastAnimPosZ)
        self.targetGraphicsRotY = v11
      else
        v11 = math.atan2(-(v2 - self.lastAnimPosX), -(v4 - self.lastAnimPosZ))
        self.targetGraphicsRotY = v11
      end
      v11 = math.sin(self.targetGraphicsRotY)
      v11 = math.cos(self.targetGraphicsRotY)
      self.walkDistance = self.walkDistance * 0.2 + (v5 * -v11 + v7 * -v11) * 0.8
      self.lastEstimatedForwardVelocity = -(self.walkDistance * 0.2 + (v5 * -v11 + v7 * -v11) * 0.8) / self.animUpdateTime * 0.001
      self.lastAnimPosX = v2
      self.lastAnimPosY = v3
      self.lastAnimPosZ = v4
      self.baseInformation.animDt = self.animUpdateTime
      self.animUpdateTime = 0
    end
    v2 = MathUtil.normalizeRotationForShortestPath(self.targetGraphicsRotY, self.graphicsRotY)
    self.targetGraphicsRotY = v2
    v4 = math.max(self.targetGraphicsRotY, self.graphicsRotY - 0.008726646259971648 * dt)
    v3 = math.min(v4, self.graphicsRotY + 0.008726646259971648 * dt)
    self.graphicsRotY = v3
    v3:setSkeletonRotation(self.graphicsRotY)
    return
  end
  if self.thirdPersonViewActive then
    v2, v3, v4 = getTranslation(self.graphicsRootNode)
    local v8 = math.sqrt((v2 - self.lastAnimPosX) * (v2 - self.lastAnimPosX) + (v4 - self.lastAnimPosZ) * (v4 - self.lastAnimPosZ))
    self.horizontalSpeed = v8
    self.lastEstimatedForwardVelocity = v8 / dt * 0.001
    if 0.0001 < v8 then
      local v9 = MathUtil.getYRotationFromDirection(v2 - self.lastAnimPosX, v4 - self.lastAnimPosZ)
      local v12 = MathUtil.clamp((v9 - self.graphicsRotY) / dt * 0.05, -0.1, 0.1)
      self.graphicsRotY = self.graphicsRotY + v12
      v12:setSkeletonRotation(self.graphicsRotY + v12)
      self.cameraRotY = self.graphicsRotY + v12
    end
    self.oldYaw = self.newYaw
    self.newYaw = self.cameraRotY
    v11 = MathUtil.getAngleDifference(self.newYaw, self.oldYaw)
    v11 = math.min(self.horizontalSpeed * 50, 10)
    self.estimatedYawVelocity = v11 / dt * v11
    self.lastAnimPosX = v2
    self.lastAnimPosY = v3
    self.lastAnimPosZ = v4
    self.baseInformation.animDt = dt
  end
end
function Player:getPositionData()
  local dt, v2, v3 = getTranslation(self.rootNode)
  if self.isClient and self.isControlled and self.isEntered then
    return dt, v2, v3, self.rotY
  end
  return dt, v2, v3, self.graphicsRotY + math.pi
end
function Player:setIKDirty()
  dt:setIKDirty()
end
function Player:lockInput(locked)
  self.lockedInput = locked
end
function Player:getCanEnterVehicle()
  if self.canEnterVehicle then
    local v2 = self:getCanEnterRideable()
  end
  return dt
end
function Player:getCanEnterRideable()
  if self.canEnterVehicle and g_currentMission.interactiveVehicleInRange ~= nil then
    local v2 = SpecializationUtil.hasSpecialization(Rideable, g_currentMission.interactiveVehicleInRange.specializations)
    if v2 then
      return true
    end
  end
  return false
end
function Player:moveTo(x, y, z, isAbsolute, isRootNode)
  self:unequipHandtool()
  if not self.isServer and self.isOwner then
    local v6 = v6:getServerConnection()
    local v8 = PlayerTeleportEvent.new(x, y, z, isAbsolute, isRootNode)
    v6:sendEvent(...)
  end
  if not isAbsolute then
    v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 300, z)
  end
  if not isRootNode then
  end
  self:moveToAbsoluteInternal(x, y, z)
end
function Player:moveToAbsolute(x, y, z)
  self:moveTo(x, y, z, true, false)
end
function Player:moveRootNodeToAbsolute(x, y, z)
  self:moveTo(x, y, z, true, true)
end
function Player:moveToExitPoint(exitVehicle)
  if exitVehicle.getExitNode == nil then
    return
  end
  local exitPoint = exitVehicle:getExitNode()
  local v3, v4, v5 = getWorldTranslation(exitPoint)
  local v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3, 300, v5)
  local v7 = math.max(v6 + 0.1, v4 + 0.9)
  self:moveToAbsolute(v3, v7, v5)
  local v7, v8, v9 = localDirectionToWorld(exitPoint, 0, 0, -1)
  local v10 = MathUtil.getYRotationFromDirection(v7, v9)
  self.rotY = v10
  setRotation(self.cameraNode, self.rotX, self.rotY, 0)
end
function Player:setRotation(rotX, rotY)
  local v5 = math.max(-1.5, rotX)
  local v3 = math.min(...)
  self.rotX = v3
  self.rotY = rotY
  self.graphicsRotY = rotY
  self.cameraRotY = rotY
  self.targetGraphicsRotY = rotY
end
function Player:moveToAbsoluteInternal(x, y, z)
  setTranslation(self.rootNode, x, y, z)
  setTranslation(self.graphicsRootNode, x, y, z)
  v4:reset()
  v4:setPosition(x, y, z)
  self.networkInformation.updateTargetTranslationPhysicsIndex = -1
  self.lastAnimPosX = x
  self.lastAnimPosY = y
  self.lastAnimPosZ = z
  self.walkDistance = 0
  local v7, v8, v9 = getTranslation(self.graphicsRootNode)
  self.baseInformation.lastPositionX = v7
  self.baseInformation.lastPositionZ = v9
  self.baseInformation.isInWater = false
  self.baseInformation.waterDepth = 0
  self.baseInformation.wasInWater = false
  self.waterY = -2000
end
function Player:drawUIInfo()
  if self.isClient and self.isControlled and not self.isEntered then
    local dt = dt:getIsGuiVisible()
    if not dt and not g_noHudModeEnabled then
      dt = dt:getValue(GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES)
      if dt then
        local dt, v2, v3 = getTranslation(self.graphicsRootNode)
        local v5 = getCamera()
        local v4, v5, v6 = getWorldTranslation(...)
        local v10 = MathUtil.vector3LengthSq(dt - v4, v2 - v5, v3 - v6)
        if v10 <= 10000 then
          local v11 = v11:getUserByUserId(self.userId)
          if v11 ~= nil then
            local v16 = v11:getNickname()
            local v17 = getCorrectTextSize(0.02)
            Utils.renderTextAtWorldPosition(dt, v2 + self.baseInformation.tagOffset[2], v3, v16, v17, 0)
          end
        end
      end
    end
  end
end
function Player:draw()
  local dt = self:getIsInputAllowed()
  if dt then
    dt = self:hasHandtoolEquipped()
    if dt then
      dt:draw()
      return
    end
    if not g_noHudModeEnabled then
      dt = dt:isAvailable("animalPet")
      if dt then
        dt:render()
        return
      end
      dt = dt:isAvailable("animalInteract")
      if dt then
        dt = dt:getState("animalInteract")
        dt = dt:getCanClean()
        if dt then
          dt:render()
          return
        end
      end
      if not self.isCarryingObject and self.isObjectInRange then
        dt:render()
        return
      end
      dt:render()
    end
  end
end
function Player:onInputBindingsChanged()
  if self.isControlled then
    self:removeActionEvents()
    self:registerActionEvents()
    self:updateActionEvents()
  end
end
function Player:onEnter(isControlling)
  self:raiseActive()
  if self.foliageBendingNode ~= nil and self.foliageBendingId == nil and g_currentMission.foliageBendingSystem then
    local v2 = v2:createRectangle(-0.5, 0.5, -0.5, 0.5, 0.4, self.foliageBendingNode)
    self.foliageBendingId = v2
  end
  if self.isServer then
    self:setOwner(self.networkInformation.creatorConnection)
  end
  if not isControlling then
    -- if not v0.isServer then goto L49 end
  end
  self:raiseDirtyFlags(self.networkInformation.dirtyFlag)
  self.isControlled = true
  if isControlling then
    v2:subscribe(MessageType.INPUT_BINDINGS_CHANGED, self.onInputBindingsChanged, self)
    v2:publish(MessageType.OWN_PLAYER_ENTERED)
    v2:addPauseListeners(self, Player.onPauseGame)
    setRotation(self.cameraNode, 0, 0, 0)
    setCamera(self.cameraNode)
    self.isEntered = true
    self:setVisibility(false)
    self:registerActionEvents()
    v2:setReferenceNode(self.cameraNode)
  else
    self:setVisibility(true)
  end
  v2:setOwnerFarmId(self.farmId)
  v2:addMapHotspot(self.playerHotspot)
  if self.isServer and not self.isEntered and g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.trafficSystemId ~= 0 then
    addTrafficSystemPlayer(g_currentMission.trafficSystem.trafficSystemId, self.graphicsRootNode)
  end
  self.isTorchActive = false
end
function Player:onLeaveVehicle()
  dt:deactivateState("animalRide")
  dt:deactivateState("jump")
end
function Player:onLeave()
  if self.isControlled then
    dt:publish(MessageType.OWN_PLAYER_LEFT)
    dt:unsubscribe(MessageType.INPUT_BINDINGS_CHANGED, self)
  end
  dt:removeMapHotspot(self.playerHotspot)
  dt:clear()
  dt:stopSamples(self.model.soundInformation.samples)
  self:removeActionEvents()
  if self.foliageBendingId ~= nil then
    dt:destroyObject(self.foliageBendingId)
    self.foliageBendingId = nil
  end
  if self.isServer then
    self:setOwner(nil)
  end
  if not self.isEntered then
    -- if not v0.isServer then goto L80 end
  end
  self:raiseDirtyFlags(self.networkInformation.dirtyFlag)
  if self.isServer and not self.isEntered and g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.trafficSystemId ~= 0 then
    removeTrafficSystemPlayer(g_currentMission.trafficSystem.trafficSystemId, self.graphicsRootNode)
  end
  dt:addPauseListeners(self)
  self.networkInformation.history = {}
  self.isControlled = false
  self.isEntered = false
  self:setVisibility(false)
  local dt = self:hasHandtoolEquipped()
  if dt then
    dt:onDeactivate()
    dt:delete()
    self.baseInformation.currentHandtool = nil
  end
  dt = dt:getDoghouse(self.farmId)
  if dt ~= nil and dt.dog ~= nil then
    v2:onPlayerLeave(self)
  end
  v2:enableTorch(false)
  self:moveToAbsoluteInternal(0, -200, 0)
end
function Player:setVisibility(visibility)
  v2:setVisibility(visibility)
end
function Player:testScope(x, y, z, coeff)
  local v5, v6, v7 = getTranslation(self.rootNode)
  local v8 = MathUtil.vector3Length(v5 - x, v6 - y, v7 - z)
  if v8 < self.clipDistance * self.clipDistance then
    return true
  end
  return false
end
function Player:onGhostRemove()
  self:delete()
end
function Player.onGhostAdd(v0)
end
function Player:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  if self.owner == connection then
    return 50
  end
  local v8, v9, v10 = getTranslation(self.rootNode)
  local v11 = MathUtil.vector3Length(v8 - x, v9 - y, v10 - z)
  return (1 - v11 / self.clipDistance) * 0.8 + 0.5 * skipCount * 0.2
end
function Player:consoleCommandToggleFlightMode()
  g_flightModeEnabled = not g_flightModeEnabled
  if not g_flightModeEnabled then
    self.debugFlightMode = false
  end
  if GS_IS_MOBILE_VERSION then
    dt:onLeaveVehicle()
  end
  if g_flightModeEnabled then
    print("Use key J to en-/disable flight mode, keys Q and E change the altitude. No Hud Mode was moved to gsHudVisibility")
  end
  local v3 = tostring(g_flightModeEnabled)
  return "PlayerFlightMode = " .. v3
end
function Player:consoleCommandToggleNoClipMode(disableTerrainCollision)
  local v3 = Utils.stringToBoolean(disableTerrainCollision)
  self.noClipEnabled = not self.noClipEnabled
  if self.noClipEnabled then
    self.cctMovementCollisionMaskBackup = self.cctMovementCollisionMask
    if v3 then
    else
    end
    self.cctMovementCollisionMask = v3
    if disableTerrainCollision then
    else
    end
    v3 = v3(v4, v5)
  else
    self.cctMovementCollisionMask = self.cctMovementCollisionMaskBackup
    self.cctMovementCollisionMaskBackup = nil
  end
  v3 = string.format("%s\n%s", v2, "Usage: gsPlayerNoClip [disableTerrainCollision]")
  return v3
end
function Player.consoleCommandToggleWoodCuttingMaker(unusedSelf)
  g_woodCuttingMarkerEnabled = not g_woodCuttingMarkerEnabled
  local v3 = tostring(g_woodCuttingMarkerEnabled)
  return "WoodCuttingMarker = " .. v3
end
function Player:consoleCommandToggleSuperStrongMode()
  if self.superStrengthEnabled then
    self.superStrengthEnabled = false
    self.maxPickableMass = self.superStrengthPickupMassBackup
    self.superStrengthPickupMassBackup = nil
    Player.MAX_PICKABLE_OBJECT_DISTANCE = self.superStrengthPickupDistanceBackup
    return "Player now has normal strength"
  end
  self.superStrengthEnabled = true
  self.superStrengthPickupMassBackup = self.maxPickableMass
  self.maxPickableMass = 50
  self.superStrengthPickupDistanceBackup = Player.MAX_PICKABLE_OBJECT_DISTANCE
  Player.MAX_PICKABLE_OBJECT_DISTANCE = 6
  return "Player now has super-strength and increased range"
end
function Player:consoleCommandTogglePickupRaycastDebug()
  self.pickupRaycastDebugEnabled = not self.pickupRaycastDebugEnabled
  local v3 = tostring(self.pickupRaycastDebugEnabled)
  return "pickupRaycastDebugEnabled=" .. v3
end
function Player:deleteStartleAnimalData()
  if self.startleAnimalSoundTimerId then
    removeTimer(self.startleAnimalSoundTimerId)
    self.startleAnimalSoundTimerId = nil
  end
  self:deleteStartleAnimalSound()
end
function Player:deleteStartleAnimalSound()
  if self.startleAnimalSoundNode then
    delete(self.startleAnimalSoundNode)
    self.startleAnimalSoundNode = nil
  end
  self.startleAnimalSoundTimerId = nil
end
function Player.consoleCommandReloadIKChains(unusedSelf)
  local newModel = PlayerModel.new()
  newModel:load(g_currentMission.player.model.style.xmlFilename, true, g_currentMission.player.isOwner, true, function(unusedSelf, dt, v2)
    if dt then
      newModel:setModel(u1)
      newModel:setStyle(u2, false)
      newModel:publish(MessageType.PLAYER_STYLE_CHANGED, u2, u0.userId)
      log("Finished reload")
    end
  end, nil, nil)
end
function Player:setLightIsActive(isActive, noEventSend)
  if isActive ~= self.isTorchActive then
    self.isTorchActive = isActive
    PlayerToggleLightEvent.sendEvent(self, isActive, noEventSend)
    v3:enableTorch(isActive, true)
  end
end
function Player:getStyle(currentStyle)
  return v2:getStyle(currentStyle)
end
function Player:setStyle(style, isTempStyle)
  v3:setStyle(style, isTempStyle, nil)
  if self.isOwner then
    local v6 = style:getIsMale()
    v3:setValue(...)
  end
end
function Player:setModel(model)
  v2:delete()
  self.model = model
  link(self.graphicsRootNode, model.rootNode)
  if self.isOwner then
    -- if not v0.thirdPersonViewActive then goto L24 end
  end
  v2:setVisibility(self.isControlled)
  IKUtil.updateAlignNodes(self.model.ikChains, nil, nil, self.graphicsRootNode)
  self:rebuildCCT()
  self.motionInformation.coveredGroundDistance = 0
  if self.isOwner then
    self:updateCameraModelTarget()
    return
  end
  v2:linkKinematicHelperToCamera(self.cameraNode)
end
function Player:updateCameraModelTarget()
  if self.isOwner then
    -- if not v0.thirdPersonViewActive then goto L10 end
  end
  dt:setVisibility(self.isControlled)
  if self.thirdPersonViewActive then
    link(self.thirdPersonLookfromNode, self.cameraNode)
    self.rotX = 0
    self.rotY = math.pi
    setRotation(self.cameraNode, self.rotX, self.rotY, 0)
    setTranslation(self.cameraNode, 0, 0, 0)
  else
    link(self.graphicsRootNode, self.cameraNode)
    local dt = dt:getFirstPersonCameraTargetNode()
    local v2, v3, v4 = localToLocal(dt, self.graphicsRootNode, 0, 0, 0)
    setTranslation(self.cameraNode, v2, v3, v4)
    setRotation(self.cameraNode, self.rotX, self.rotY, 0)
    self.camX = v2
    self.camY = v3
    self.camZ = v4
    local v5 = v5:getState("crouch")
    v5.cameraY = self.camY
  end
  dt:linkTorchToCamera(self.cameraNode)
  dt:linkRightHandToCamera(self.cameraNode)
  dt:linkKinematicHelperToCamera(self.cameraNode)
end
function Player:rebuildCCT()
  if self.controllerIndex ~= nil then
    removeCCT(self.controllerIndex)
  end
  local dt, v2 = dt:getCapsuleSize()
  local v3 = createCCT(self.rootNode, dt, v2, 0.4, 45, dt * 0.2, CollisionMask.PLAYER_KINEMATIC, self.motionInformation.mass)
  self.controllerIndex = v3
end
function Player:setCustomWorkStylePreset(presetName)
  if self.isDeleting then
    return
  end
  v2:applyCustomWorkStyle(presetName)
end
function Player:setStyleAsync(style, callback, noEventSend)
  if self.isServer then
    newModel:setPlayerStyle(self.userId, style)
  end
  if self.model.xmlFilename == style.xmlFilename then
    self:setStyle(style, false)
    if callback ~= nil then
      callback()
    end
    newModel:publish(MessageType.PLAYER_STYLE_CHANGED, style, self.userId)
  else
    local newModel = PlayerModel.new()
    newModel:load(style.xmlFilename, true, self.isOwner, true, function(self, style, callback)
      if style then
        noEventSend:setModel(u1)
        noEventSend:setStyle(u2, false)
        if u3 ~= nil then
          u3()
        end
        noEventSend:publish(MessageType.PLAYER_STYLE_CHANGED, u2, u0.userId)
      end
    end, nil, nil)
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L67
  end
  PlayerSetStyleEvent.sendEvent(self, style)
end
function Player:loadHandTool(xmlFilename, asyncCallbackFunction, asyncCallbackArguments)
  if GS_IS_CONSOLE_VERSION then
    local v4 = fileExists(xmlFilename)
    if not v4 then
      return nil
    end
  end
  v4 = v4:getItemByXMLFilename(xmlFilename)
  if v4 ~= nil then
    local v6 = loadXMLFile("TempXML", v4.xmlFilename)
    local v7 = getXMLString(v6, "handTool.handToolType")
    delete(v6)
    if v7 ~= nil then
      if HandTool.handToolTypes[v7] == nil then
        local v9, v10 = Utils.getModNameAndBaseDirectory(v4.xmlFilename)
        if v9 ~= nil then
        end
      end
      if v8 ~= nil then
        v10 = v8.new(self.isServer, self.isClient)
      else
        Logging.devError("Error: Invalid handtool type '%s'", v7)
      end
      if v9 ~= nil then
        v10 = v9:load(v5, self, asyncCallbackFunction, asyncCallbackArguments)
        if not v10 then
          Logging.devError("Error: Failed to load handtool '%s'", v5)
          v9:delete()
        end
      end
      return v9
    end
  end
  return nil
end
function Player:equipHandtool(handtoolFilename, force, noEventSend, equippedCallbackFunction, equippedCallbackTarget)
  if self.isOwner then
    if handtoolFilename ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000001 -> L13
    end
    v6:reset()
    -- goto L23  (LOP_JUMP +10)
    v6:setManipulatedParams(0.8, 0.6, nil, nil, nil)
  end
  if handtoolFilename ~= nil and handtoolFilename ~= "" then
    local v6 = fileExists(handtoolFilename)
    if not v6 then
      Logging.error("Unable to equip handTool '%s'. Config file does not exist!", handtoolFilename)
    end
  end
  PlayerSetHandToolEvent.sendEvent(self, handtoolFilename, force, noEventSend)
  local isUsingHandtool = self:hasHandtoolEquipped()
  if isUsingHandtool then
    isUsingHandtool = isUsingHandtool:lower()
    local v8 = handtoolFilename:lower()
    if isUsingHandtool == v8 and handtoolFilename ~= "" then
      -- if not v2 then goto L89 end
    end
    isUsingHandtool:onDeactivate()
    isUsingHandtool:delete()
    self.baseInformation.currentHandtool = nil
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x1 -> L108
    self:loadHandTool(handtoolFilename, self.handToolLoaded, v6)
    return
  end
  if handtoolFilename ~= "" then
    self:loadHandTool(handtoolFilename, self.handToolLoaded, v6)
  end
end
function Player:handToolLoaded(handTool, arguments)
  if self.baseInformation.currentHandtool ~= nil then
    v3:onDeactivate()
    v3:delete()
    self.baseInformation.currentHandtool = nil
  end
  self.baseInformation.currentHandtool = handTool
  handTool:setHandNode(self.model.rightArmToolNode)
  local v5 = self:getIsInputAllowed()
  handTool:onActivate(...)
  if handTool.targets ~= nil then
    local v3 = v3:getIKChains()
    for v7, v8 in pairs(handTool.targets) do
      IKUtil.setTarget(v3, v7, v8)
    end
    self:setIKDirty()
  end
  if arguments.equippedCallbackFunction ~= nil then
    arguments.equippedCallbackFunction(arguments.equippedCallbackTarget, handTool)
  end
end
function Player:unequipHandtool()
  self:equipHandtool("", true)
end
function Player:hasHandtoolEquipped()
  if self.baseInformation.currentHandtool == nil then
  end
  return true
end
function Player:getEquippedHandtoolFilename()
  if self.baseInformation.currentHandtool ~= nil then
    -- if v0.baseInformation.currentHandtool.configFileName then goto L14 end
  end
  return ""
end
function Player:onEnterFarmhouse()
  if self.isServer then
    local dt = dt:getDoghouse(self.farmId)
    if dt ~= nil and dt.dog ~= nil and dt.dog.entityFollow == self.rootNode then
      v2:teleportToSpawn()
    end
  end
end
function Player:checkObjectInRange()
  if self.isServer then
    if not self.isCarryingObject then
      local dt, v2, v3 = localToWorld(self.cameraNode, 0, 0, 1)
      local v4, v5, v6 = localDirectionToWorld(self.cameraNode, 0, 0, -1)
      self.lastFoundObject = nil
      self.lastFoundObjectHitPoint = nil
      self.lastFoundAnyObject = nil
      raycastAll(dt, v2, v3, v4, v5, v6, "pickUpObjectRaycastCallback", Player.MAX_PICKABLE_OBJECT_DISTANCE, self)
      if self.lastFoundObject == nil then
      end
      self.isObjectInRange = true
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L142
      v7:setCurrentRaycastTarget(self.lastFoundAnyObject)
      return
    end
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L142
    dt = entityExists(self.pickedUpObject)
    -- if v1 then goto L142 end
    Player.PICKED_UP_OBJECTS[self.pickedUpObject] = false
    self.pickedUpObject = nil
    self.pickedUpObjectJointId = nil
    self.isCarryingObject = false
    return
  end
  if not self.isCarryingObject then
    dt, v2, v3 = localToWorld(self.cameraNode, 0, 0, 1)
    v4, v5, v6 = localDirectionToWorld(self.cameraNode, 0, 0, -1)
    self.lastFoundAnyObject = nil
    raycastAll(dt, v2, v3, v4, v5, v6, "pickUpObjectRaycastCallback", Player.MAX_PICKABLE_OBJECT_DISTANCE, self)
    if self.hudUpdater ~= nil then
      v7:setCurrentRaycastTarget(self.lastFoundAnyObject)
    end
  end
end
function Player:pickUpObjectRaycastCallback(hitObjectId, x, y, z, distance)
  if hitObjectId ~= g_currentMission.terrainRootNode and hitObjectId ~= self.rootNode and Player.PICKED_UP_OBJECTS[hitObjectId] ~= true then
    self.lastFoundAnyObject = hitObjectId
    if not self.isServer then
      return false
    end
    if self.isServer then
      local v6 = getRigidBodyType(hitObjectId)
      if v6 == RigidBodyType.DYNAMIC then
        local v7 = v7:getNodeObject(hitObjectId)
        if v7 ~= nil then
          if v7.dynamicMountObject == nil then
            -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L51
          end
          if v7.getCanBePickedUp ~= nil then
            local v8 = v7:getCanBePickedUp(self)
            if not v8 and not self.superStrengthEnabled then
            end
          end
        end
        if v6 then
          if v7 ~= nil then
            -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L77
            local v9 = v7:getTotalMass()
          else
            v9 = getMass(hitObjectId)
          end
          self.lastFoundObject = hitObjectId
          self.lastFoundObjectMass = v8
          self.lastFoundObjectHitPoint = {x, y, z}
        end
        return false
      end
    end
  end
  return true
end
function Player:pickUpObject(state, noEventSend)
  PlayerPickUpObjectEvent.sendEvent(self, state, noEventSend)
  if self.isServer then
    if state and self.isObjectInRange and self.lastFoundObject ~= nil then
      local v3 = entityExists(self.lastFoundObject)
      if v3 and not self.isCarryingObject then
        v3 = JointConstructor.new()
        local v4 = getCollisionMask(self.lastFoundObject)
        self.pickedUpObjectCollisionMask = v4
        local v5 = bitAND(self.pickedUpObjectCollisionMask, self.cctMovementCollisionMask)
        v4 = bitXOR(v5, self.pickedUpObjectCollisionMask)
        setCollisionMask(self.lastFoundObject, v4)
        local v5, v6 = v5:getKinematicHelpers()
        v3:setActors(v5, self.lastFoundObject)
        -- TODO: structure LOP_FORNPREP (pc 68, target 83)
        v3:setRotationLimit(0, 0, 0)
        v3:setTranslationLimit(0, true, 0, 0)
        -- TODO: structure LOP_FORNLOOP (pc 82, target 69)
        local v7, v8, v9 = getCenterOfMass(self.lastFoundObject)
        local v10, v11, v12 = localToWorld(self.lastFoundObject, v7, v8, v9)
        v3:setJointWorldPositions(v10, v11, v12, v10, v11, v12)
        local v13, v14, v15 = localDirectionToWorld(self.lastFoundObject, 1, 0, 0)
        v3:setJointWorldAxes(v13, v14, v15, v13, v14, v15)
        local v16, v17, v18 = localDirectionToWorld(self.lastFoundObject, 0, 1, 0)
        v3:setJointWorldNormals(v16, v17, v18, v16, v17, v18)
        v3:setEnableCollision(false)
        setWorldTranslation(v6, v10, v11, v12)
        local v21 = getWorldRotation(self.lastFoundObject)
        setWorldRotation(...)
        local v19 = getMass(self.lastFoundObject)
        local v24 = math.sqrt(v19 * {v19 * 60}[1])
        v24 = math.sqrt(v19 * {v19 * 60, v19 * 60}[2])
        v24 = math.sqrt(v19 * {v19 * 60, v19 * 60, v19 * 60}[3])
        v3:setRotationLimitSpring({v19 * 60, v19 * 60, v19 * 60}[1], {2 * v24, 2 * v24, 2 * v24}[1], {v19 * 60, v19 * 60, v19 * 60}[2], {2 * v24, 2 * v24, 2 * v24}[2], {v19 * 60, v19 * 60, v19 * 60}[3], {2 * v24, 2 * v24, 2 * v24}[3])
        local v26 = math.sqrt(v19 * {v19 * 60}[1])
        v26 = math.sqrt(v19 * {v19 * 60, v19 * 60}[2])
        v26 = math.sqrt(v19 * {v19 * 60, v19 * 60, v19 * 60}[3])
        v3:setTranslationLimitSpring({v19 * 60, v19 * 60, v19 * 60}[1], {2 * v26, 2 * v26, 2 * v26}[1], {v19 * 60, v19 * 60, v19 * 60}[2], {2 * v26, 2 * v26, 2 * v26}[2], {v19 * 60, v19 * 60, v19 * 60}[3], {2 * v26, 2 * v26, 2 * v26}[3])
        if not self.superStrengthEnabled then
          v3:setBreakable(4 * v19 * 40, 4 * v19 * 40)
        end
        v24 = v3:finalize()
        self.pickedUpObjectJointId = v24
        addJointBreakReport(self.pickedUpObjectJointId, "onPickedUpObjectJointBreak", self)
        self.pickedUpObject = self.lastFoundObject
        self.isCarryingObject = true
        Player.PICKED_UP_OBJECTS[self.pickedUpObject] = true
        v24 = v24:getNodeObject(self.pickedUpObject)
        -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x0 -> L397
        v24.thrownFromPosition = nil
        return
      end
    end
    if self.pickedUpObjectJointId ~= nil then
      removeJoint(self.pickedUpObjectJointId)
      self.pickedUpObjectJointId = nil
      self.isCarryingObject = false
      Player.PICKED_UP_OBJECTS[self.pickedUpObject] = false
      v3 = entityExists(self.pickedUpObject)
      if v3 then
        v3, v4, v5 = getLinearVelocity(self.pickedUpObject)
        if v3 ~= nil then
          v6 = MathUtil.clamp(v3, -5, 5)
          v6 = MathUtil.clamp(v4, -5, 5)
          v6 = MathUtil.clamp(v5, -5, 5)
          setLinearVelocity(self.pickedUpObject, v6, v6, v6)
        end
        setCollisionMask(self.pickedUpObject, self.pickedUpObjectCollisionMask)
        self.pickedUpObjectCollisionMask = 0
      end
      v3 = v3:getNodeObject(self.pickedUpObject)
      if v3 ~= nil then
        v3.thrownFromPosition = nil
      end
      self.pickedUpObject = nil
    end
  end
end
function Player:throwObject(noEventSend)
  PlayerThrowObjectEvent.sendEvent(self, noEventSend)
  if self.pickedUpObject ~= nil and self.pickedUpObjectJointId ~= nil then
    self:pickUpObject(false)
    local v3 = getMass(self.pickedUpObject)
    local v5, v6, v7 = localDirectionToWorld(self.cameraNode, 0, 0, -(8 * (1.1 - v3 / self.maxPickableMass)))
    setLinearVelocity(self.pickedUpObject, v5, v6, v7)
    local v8 = v8:getNodeObject(self.pickedUpObject)
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L156
    local v10 = getWorldTranslation(self.rootNode)
    v8.thrownFromPosition = {}
    local v9 = v8:isa(DogBall)
    -- if not v9 then goto L156 end
    v9 = v9:getDoghouse(self.farmId)
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L156
    v10 = v9:getDog()
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L156
    local v11, v12, v13 = getWorldTranslation(self.rootNode)
    local v14, v15 = getCompanionClosestDistance(v10.dogInstance, v11, v12, v13)
    -- if v14 >= 10 then goto L156 end
    v10:fetchItem(self, v8)
    return
  end
  if self.isObjectInRange and self.lastFoundObject ~= nil and not self.isCarryingObject then
    local v2 = entityExists(self.lastFoundObject)
    if v2 then
      v2 = getMass(self.lastFoundObject)
      if v2 <= self.maxPickableMass then
        local v4, v5, v6 = localDirectionToWorld(self.cameraNode, 0, 0.707106781 * 8 * (1.1 - v2 / self.maxPickableMass), -0.707106781 * 8 * (1.1 - v2 / self.maxPickableMass))
        setLinearVelocity(self.lastFoundObject, v4, v5, v6)
      end
    end
  end
end
function Player:onPickedUpObjectJointBreak(jointIndex, breakingImpulse)
  if jointIndex == self.pickedUpObjectJointId then
    self:pickUpObject(false)
  end
  return false
end
function Player:updateSound()
  local v6 = v6:isActive("crouch")
  v6 = v6:isActive("swim")
  if not self.isEntered then
    v6 = v6:getLastForwardVelocity()
    if v6 then
      -- goto L79  (LOP_JUMP +49)
    end
    v6 = math.abs(v5)
    if v6 <= self.motionInformation.maxWalkingSpeed then
      -- goto L79  (LOP_JUMP +36)
    end
    v6 = math.abs(v5)
    -- if v0.motionInformation.maxWalkingSpeed >= v6 then goto L79 end
  else
    v6 = math.abs(self.motionInformation.currentSpeed)
    v6 = v6:isActive("walk")
    v6 = v6:isActive("run")
  end
  local v7 = v7:isActive("jump")
  if self.wasJumping ~= v7 then
    self.wasJumping = v7
  end
  local v8 = v8:isActive("fall")
  if self.wasDropping ~= v8 then
    self.wasDropping = v8
  end
  v10:setSoundParameters(v5, dt, v2, v3, v4, self.baseInformation.plungedInWater, self.baseInformation.isInWater, self.motionInformation.coveredGroundDistance, self.motionInformation.maxSwimmingSpeed, self.baseInformation.waterLevel, v6, v9, self.waterY)
end
function Player:updateFX()
  if self.model.isLoaded then
    local dt, v2, v3 = getWorldTranslation(self.rootNode)
    v4:updateFX(dt, v2, v3, self.baseInformation.isInWater, self.baseInformation.plungedInWater, self.waterY)
  end
end
function Player:movePlayer(dt, movementX, movementY, movementZ)
  self.debugFlightCoolDown = self.debugFlightCoolDown - 1
  if self.debugFlightMode then
  end
  self.networkInformation.tickTranslation[1] = self.networkInformation.tickTranslation[1] + movementX
  self.networkInformation.tickTranslation[2] = self.networkInformation.tickTranslation[2] + movementY
  self.networkInformation.tickTranslation[3] = self.networkInformation.tickTranslation[3] + movementZ
  moveCCT(self.controllerIndex, movementX, movementY, movementZ, self.cctMovementCollisionMask)
  self.networkInformation.index = self.networkInformation.index + 1
  if not self.isServer then
    while true do
      v5 = table.getn(self.networkInformation.history)
      if not (100 < v5) then
        break
      end
      table.remove(self.networkInformation.history, 1)
    end
    table.insert(self.networkInformation.history, {index = self.networkInformation.index, movementX = movementX, movementY = movementY, movementZ = movementZ})
  end
end
function Player:cameraBob(dt)
  local v3 = v3:isActive("swim")
  local v4 = v4:isActive("walk")
  local v5 = v5:isActive("crouch")
  local v6 = v6:isActive("run")
  if v3 then
  elseif v5 then
  else
    if not v4 then
      -- if not v6 then goto L40 end
    end
  end
  if self.baseInformation.currentWaterCameraOffset ~= v7 then
    local v10 = math.abs(v7 - self.baseInformation.currentWaterCameraOffset)
    if 0.001 < v10 then
      self.baseInformation.currentWaterCameraOffset = self.baseInformation.currentWaterCameraOffset + (v7 - self.baseInformation.currentWaterCameraOffset) * v8 / 0.75
    else
      self.baseInformation.currentWaterCameraOffset = self.baseInformation.currentWaterCameraOffset + v7 - self.baseInformation.currentWaterCameraOffset
    end
    v10 = math.abs(v7)
    if 0.001 < v10 then
      local v11 = MathUtil.clamp(self.baseInformation.currentWaterCameraOffset, 0, v7)
      self.baseInformation.currentWaterCameraOffset = v11
    else
      v11 = math.max(self.baseInformation.currentWaterCameraOffset, 0)
      self.baseInformation.currentWaterCameraOffset = v11
    end
  end
  if v2 ~= 0 then
    v11 = math.min(v8, 0.06)
    if v3 then
      local v15 = math.max(self.motionInformation.currentCoveredGroundDistance * 1, 0.6 * v11)
      local v14 = math.min(v15, 3 * v11 * 1)
      v15 = math.max(self.motionInformation.currentCoveredGroundDistance / v8 / 3, 0.5)
      v14 = math.min(v15, 1)
    else
      v14 = math.min(self.motionInformation.currentCoveredGroundDistance, 3 * v11)
      v14 = math.min(self.motionInformation.currentCoveredGroundDistance / v8 / 3, 1)
    end
    self.baseInformation.headBobTime = self.baseInformation.headBobTime + v12
    local v16 = math.sin(self.baseInformation.headBobTime)
    self.baseInformation.lastCameraAmplitudeScale = (self.baseInformation.lastCameraAmplitudeScale + v13) * 0.5
    return (self.baseInformation.lastCameraAmplitudeScale + v13) * 0.5 * v2 * v16 + self.baseInformation.currentWaterCameraOffset
  end
  return self.baseInformation.currentWaterCameraOffset
end
function Player:updateCameraTranslation(bobDelta)
  local v3, v4, v5 = getTranslation(self.cameraNode)
  local v6 = v6:isActive("crouch")
  if not v6 then
    setTranslation(self.cameraNode, v3, self.camY + bobDelta, v5)
    return
  end
  local v7 = v7:getState("crouch")
  setTranslation(self.cameraNode, v3, v7.crouchCameraY + bobDelta, v5)
end
function Player:resetInputsInformation()
  self.inputInformation.moveRight = 0
  self.inputInformation.moveForward = 0
  self.inputInformation.moveUp = 0
  self.inputInformation.runAxis = 0
end
function Player:resetCameraInputsInformation()
  self.inputInformation.pitchCamera = 0
  self.inputInformation.yawCamera = 0
  self.inputInformation.crouchState = Player.BUTTONSTATES.RELEASED
end
function Player:debugDraw()
  if self.baseInformation.isInDebug then
    setTextColor(1, 0, 0, 1)
    renderText(0.05, 0.96, 0.02, "[motion]")
    local v8 = tostring(self.baseInformation.isOnGround)
    local v6 = string.format(...)
    renderText(...)
    v6 = string.format("lastPosition(%3.4f, %3.4f)", self.baseInformation.lastPositionX, self.baseInformation.lastPositionZ)
    renderText(...)
    v6 = string.format("distanceCovered(%.2f)", self.motionInformation.coveredGroundDistance)
    renderText(...)
    v8 = tostring(self.baseInformation.isInWater)
    v6 = string.format(...)
    renderText(...)
    v6 = string.format("currentSpeed(%.3f) speedY(%.3f)", self.motionInformation.currentSpeed, self.motionInformation.currentSpeedY)
    renderText(...)
    v6 = string.format("rotY(%.3f)", self.graphicsRotY)
    renderText(...)
    v6 = string.format("estimatedYaw(%.3f)", self.estimatedYawVelocity)
    renderText(...)
    v6 = string.format("cameraRotY(%.3f)", self.cameraRotY)
    renderText(...)
    setTextColor(0, 1, 0, 1)
    renderText(0.05, 0.96 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02 - 0.02, 0.02, "[input]")
    v6 = string.format("right(%3.4f)", self.inputInformation.moveRight)
    renderText(...)
    v6 = string.format("forward(%3.4f)", self.inputInformation.moveForward)
    renderText(...)
    v6 = string.format("pitch(%3.4f)", self.inputInformation.pitchCamera)
    renderText(...)
    v6 = string.format("yaw(%3.4f)", self.inputInformation.yawCamera)
    renderText(...)
    v6 = string.format("runAxis(%3.4f)", self.inputInformation.runAxis)
    renderText(...)
    v8 = tostring(self.inputInformation.crouchState)
    v6 = string.format(...)
    renderText(...)
    v8 = tostring(self.inputInformation.interactState)
    v6 = string.format(...)
    renderText(...)
  end
end
function Player:getDesiredSpeed()
  if self.inputInformation.moveForward == 0 then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x3 -> L150
  end
  local v3 = v3:isActive("swim")
  local v4 = v4:isActive("crouch")
  local v5 = v5:isActive("fall")
  local v6 = self:hasHandtoolEquipped()
  if v5 then
  elseif v3 then
  else
    if v4 then
    end
  end
  if 0 < self.inputInformation.runAxis then
    if not v3 then
      -- if v4 then goto L110 end
      -- if v6 then goto L110 end
      if g_addTestCommands then
      elseif g_addCheatCommands and not g_currentMission.isMasterUser then
        local v10 = v10:getIsServer()
        -- if not v10 then goto L92 end
      end
      local v14 = math.min(v8, 1)
      v10 = math.max(v7 + (v9 - v7) * v14, v7)
    elseif v3 and g_addTestCommands then
      v14 = math.min(self.inputInformation.runAxis, 1)
      v10 = math.max(v7 + (self.motionInformation.maxPresentationRunningSpeed - v7) * v14, v7)
    end
  end
  local v9 = math.sqrt(dt * dt + v2 * v2)
  local v11 = MathUtil.clamp(v9, 0, 1)
  return v11 * v7
  return 0
end
function Player:recordPositionInformation()
  local dt, v2, v3 = getTranslation(self.graphicsRootNode)
  self.baseInformation.lastPositionX = dt
  self.baseInformation.lastPositionZ = v3
  local v6 = MathUtil.vector2Length(dt - self.baseInformation.lastPositionX, v3 - self.baseInformation.lastPositionZ)
  if 0 >= v6 then
  end
  v7.justMoved = true
  if self.baseInformation.isOnGround then
    self.motionInformation.currentCoveredGroundDistance = v6
    self.motionInformation.coveredGroundDistance = self.motionInformation.coveredGroundDistance + v6
  end
end
function Player.calculate2DDotProductAgainstVelocity(v0, dt, v2, v3)
  local v6 = math.sqrt(v3[1] * v3[1] + v3[3] * v3[3])
  return dt[1] / v2 * v3[1] / v6 + dt[3] / v2 * v3[3] / v6
end
function Player:resetBrake()
  self:setVelocityToMotion(0, 0, 0)
  self:setAccelerationToMotion(0, 0, 0)
  self.motionInformation.brakeForce = {0, 0, 0}
  self.motionInformation.isBraking = false
end
function Player:updateKinematic(dt)
  if self.inputInformation.moveRight == 0 then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x4 -> L55
  end
  local v5, v6 = MathUtil.vector2Normalize(v3, v4)
  local v10, v11, v12 = localDirectionToWorld(self.cameraNode, v5, 0, v6)
  self.motionInformation.currentWorldDirX = v10
  self.motionInformation.currentWorldDirZ = v12
  v10, v11 = MathUtil.vector2Normalize(self.motionInformation.currentWorldDirX, self.motionInformation.currentWorldDirZ)
  self.motionInformation.currentWorldDirX = v10
  self.motionInformation.currentWorldDirZ = v11
  v5 = self:getDesiredSpeed()
  if not self.baseInformation.isOnGround then
  end
  self.motionInformation.currentSpeedX = self.motionInformation.currentSpeedX + v8
  self.motionInformation.currentSpeedZ = self.motionInformation.currentSpeedZ + v9
  v11 = math.sqrt(self.motionInformation.currentSpeedX * self.motionInformation.currentSpeedX + self.motionInformation.currentSpeedZ * self.motionInformation.currentSpeedZ)
  self.motionInformation.currentSpeed = v11
  local v13, v14, v15 = getWorldTranslation(self.rootNode)
  if 0.001 < v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel then
    local v21 = math.max(self.motionInformation.currentSpeedY + 3 * self.motionInformation.gravity * v2, self.motionInformation.gravity * 7)
    self.motionInformation.currentSpeedY = v21
    if v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel < self.model.capsuleTotalHeight * 0.5 then
      local v20 = math.max(self.motionInformation.currentSpeedY * v2, -(v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel) * 0.5)
    else
      v20 = math.max(self.motionInformation.currentSpeedY * v2, -(v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel))
    end
    local v22 = math.max(v2, 0.000001)
    self.motionInformation.currentSpeedY = v11 / v22
  elseif v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel < -0.01 then
    v20 = math.min(-self.motionInformation.gravity * v2, -(v14 - self.waterY - self.model.capsuleTotalHeight * 0.5 - self.baseInformation.waterLevel))
    v22 = math.max(v2, 0.000001)
    self.motionInformation.currentSpeedY = v20 / v22
  else
    self.motionInformation.currentSpeedY = 0
  end
  self:movePlayer(dt, v10, v11, v12)
end
function Player:updatePlayerStates()
  local dt = dt:isAvailable("fall")
  if dt then
    dt:activateState("fall")
  end
  if 0.4 < self.baseInformation.waterDepth then
    dt:deactivateState("crouch")
  end
  if self.baseInformation.isInWater then
    dt = dt:isAvailable("swim")
    if dt then
      dt:activateState("swim")
    end
  end
  if self.inputInformation.moveForward == 0 then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0xd -> L91
  end
  if 0 < self.inputInformation.runAxis then
    dt = dt:isAvailable("run")
    if dt then
      dt:activateState("run")
      return
    end
  end
  dt = dt:isAvailable("walk")
  if dt then
    dt:activateState("walk")
    return
    dt:activateState("idle")
  end
end
function Player:setWalkingLock(isLocked)
  self.walkingIsLocked = isLocked
  for v5, v6 in pairs(self.inputInformation.registrationList) do
    if not (v6.activeType == Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT) then
      continue
    end
    v7:setActionEventActive(v6.eventId, not isLocked)
  end
  if g_touchHandler ~= nil then
    if not isLocked then
      v2 = v2:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, Player.touchEventLookUpDown, self)
      self.touchListenerY = v2
      v2 = v2:registerGestureListener(TouchHandler.GESTURE_AXIS_X, Player.touchEventLookLeftRight, self)
      self.touchListenerX = v2
      return
    end
    v2:removeGestureListener(self.touchListenerY)
    v2:removeGestureListener(self.touchListenerX)
  end
end
function Player:setThirdPersonViewActive(isActive)
  self.thirdPersonViewActive = isActive
  self:updateCameraModelTarget()
end
function Player:consoleCommandTogglePlayerDebug()
  self.baseInformation.isInDebug = not self.baseInformation.isInDebug
  local v3 = tostring(self.baseInformation.isInDebug)
  return "Player Debug = " .. v3
end
function Player:consoleCommandThirdPersonView()
  self:setThirdPersonViewActive(not self.thirdPersonViewActive)
  local v3 = tostring(self.thirdPersonViewActive)
  return "Player Third Person = " .. v3
end
function Player:consoleCommandTip(fillTypeName, value)
  if fillTypeName == nil then
    return "No filltype given. " .. "gsTip fillTypeName value"
  end
  local v3 = v3:getFillTypeIndexByName(fillTypeName)
  if v3 == nil then
    return "Invalid fillType. " .. "gsTip fillTypeName value"
  end
  local v4 = tonumber(value)
  if v4 == nil then
    return "No value given. " .. "gsTip fillTypeName value"
  end
  if g_currentMission.player ~= nil then
    -- if g_currentMission.player.isControlled then goto L40 end
  end
  return "Not available within a vehicle"
  local v6, v7, v8 = getWorldTranslation(v5.rootNode)
  self.debugTipObject = nil
  self.debugTipFillType = v3
  self.debugTipFillLevel = value
  raycastAll(v6, v7 + 4, v8, 0, -1, 0, "debugTipRaycastCallback", 10, self, nil, false, false)
  if value - self.debugTipFillLevel == 0 then
    return "Failed to tip. No target found"
  end
  return "Tipped " .. v9 .. "l of " .. fillTypeName
end
function Player:debugTipRaycastCallback(hitActorId, x, y, z, distance, nx, ny, nz, subShapeIndex, hitShapeId)
  local v11 = v11:getNodeObject(hitActorId)
  if v11 ~= nil and v11 ~= self and v11.getFillUnitIndexFromNode ~= nil then
    local v12 = v11:getFillUnitIndexFromNode(hitShapeId)
    if v12 ~= nil then
      local v14 = v11:getFillUnitSupportsFillType(v12, self.debugTipFillType)
      if v14 then
        v14 = v11:getFillUnitAllowsFillType(v12, self.debugTipFillType)
        local v17 = v11:getFillUnitFreeCapacity(v12, self.debugTipFillType, g_currentMission.player.farmId)
        if 0 >= v17 then
        end
        if v14 and true then
          v17 = v11:addFillUnitFillLevel(v15, v12, self.debugTipFillLevel, v13, nil, nil)
          self.debugTipFillLevel = self.debugTipFillLevel - v17
          if self.debugTipFillLevel <= 0 then
            return false
          end
        end
      end
    end
  end
  return true
end
function Player:setFarm(farmId)
  if self.isServer then
    self.farmId = farmId
    PlayerSetFarmEvent.sendEvent(self, farmId)
    return
  end
  Logging.devError("Error: setFarm only allowed on Server")
end
function Player:onFarmChange()
  self:updateHandTools()
  dt:setOwnerFarmId(self.farmId)
end
function Player:updateHandTools()
  local dt = self:hasHandtoolEquipped()
  if dt then
    dt = dt:getFarmById(self.farmId)
    local v2 = table.hasElement(dt.handTools, self.baseInformation.currentHandtool.configFileName)
    if not v2 then
      v2:onDeactivate()
      v2:delete()
      self.baseInformation.currentHandtool = nil
    end
  end
end
function Player:registerActionEvents()
  dt:beginActionEventsModification(Player.INPUT_CONTEXT_NAME)
  for v4, v5 in pairs(self.inputInformation.registrationList) do
    if v5.activeType == Player.INPUT_ACTIVE_TYPE.STARTS_ENABLED then
    elseif v5.activeType == Player.INPUT_ACTIVE_TYPE.STARTS_DISABLED then
    else
      if v5.activeType == Player.INPUT_ACTIVE_TYPE.IS_MOVEMENT then
      elseif v5.activeType == Player.INPUT_ACTIVE_TYPE.IS_CARRYING then
      else
        if v5.activeType == Player.INPUT_ACTIVE_TYPE.IS_DEBUG then
        end
      end
    end
    local v8, v9 = v8:registerActionEvent(v4, self, v5.callback, v5.triggerUp, v5.triggerDown, v5.triggerAlways, v7, v5.callbackState, true)
    v5.eventId = v9
    if v5.text ~= nil and v5.text ~= "" then
      v8:setActionEventText(v5.eventId, v5.text)
    end
    v8:setActionEventTextVisibility(v5.eventId, v5.textVisibility)
  end
  if g_touchHandler ~= nil then
    if not self.walkingIsLocked then
      dt = dt:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, Player.touchEventLookUpDown, self)
      self.touchListenerY = dt
      dt = dt:registerGestureListener(TouchHandler.GESTURE_AXIS_X, Player.touchEventLookLeftRight, self)
      self.touchListenerX = dt
    else
      dt:removeGestureListener(self.touchListenerY)
      dt:removeGestureListener(self.touchListenerX)
    end
  end
  dt:endActionEventsModification()
  if self.isEntered then
    dt:activate(Player.INPUT_CONTEXT_NAME)
  end
end
function Player:removeActionEvents()
  dt:resetActiveActionBindings()
  dt:beginActionEventsModification(Player.INPUT_CONTEXT_NAME)
  dt:removeActionEventsByTarget(self)
  for v4, v5 in pairs(self.inputInformation.registrationList) do
    v5.eventId = ""
  end
  dt:endActionEventsModification()
  if g_touchHandler ~= nil then
    dt:removeGestureListener(self.touchListenerY)
    dt:removeGestureListener(self.touchListenerX)
  end
  if self.isEntered then
    dt:deactivate(Player.INPUT_CONTEXT_NAME)
  end
end
function Player:touchEventLookLeftRight(value)
  local v2 = self:getIsInputAllowed()
  if v2 then
    Player.onInputLookLeftRight(self, nil, value * g_screenWidth / g_screenHeight * 50, nil, nil, false)
  end
end
function Player:onInputLookLeftRight(_, inputValue, _, _, isMouse)
  if not self.lockedInput then
    if isMouse then
    else
    end
    self.inputInformation.yawCamera = self.inputInformation.yawCamera + inputValue
  end
  self.inputInformation.isMouseRotation = isMouse
end
function Player:touchEventLookUpDown(value)
  local v2 = self:getIsInputAllowed()
  if v2 then
    Player.onInputLookUpDown(self, nil, value * g_screenHeight / g_screenWidth * -50, nil, nil, false)
  end
end
function Player:onInputLookUpDown(_, inputValue, _, _, isMouse)
  if not self.lockedInput then
    local v7 = v7:getValue("invertYLook")
    if v7 then
      -- if -v2 then goto L13 end
    end
    if isMouse then
    else
    end
    self.inputInformation.pitchCamera = self.inputInformation.pitchCamera + v6
  end
end
function Player:onInputMoveSide(_, inputValue)
  if not self.lockedInput then
    self.inputInformation.moveRight = self.inputInformation.moveRight + inputValue
  end
end
function Player:onInputMoveForward(_, inputValue)
  if not self.lockedInput then
    self.inputInformation.moveForward = self.inputInformation.moveForward + inputValue
  end
end
function Player:onInputRun(_, inputValue)
  self.inputInformation.runAxis = inputValue
  if self.debugFlightMode then
    if 0 < inputValue and self.debugFlightModeRunningFactor ~= 4 then
      self.debugFlightModeRunningFactor = 4
      return
    end
    if inputValue == 0 and self.debugFlightModeRunningFactor ~= 1 then
      self.debugFlightModeRunningFactor = 1
    end
  end
end
function Player:onInputCrouch(_, inputValue)
  local v3 = v3:isAvailable("crouch")
  if v3 then
    v3:activateState("crouch")
  end
  self.inputInformation.crouchState = Player.BUTTONSTATES.PRESSED
end
function Player:onInputRotateObjectHorizontally(_, inputValue)
  if self.pickedUpObjectJointId ~= nil then
    local v3 = math.abs(inputValue)
    if 0 < v3 then
      self:rotateObject(inputValue, 0, 1, 0)
      return
    end
  end
  if self.isCarryingObject and self.isClient and self.isControlled then
    if inputValue ~= 0 then
      self.networkInformation.rotateObject = true
    else
      self.networkInformation.rotateObject = false
    end
    self.networkInformation.rotateObjectInputH = inputValue
  end
end
function Player:onInputRotateObjectVertically(_, inputValue)
  if self.pickedUpObjectJointId ~= nil then
    local v3 = math.abs(inputValue)
    if 0 < v3 then
      self:rotateObject(inputValue, 1, 0, 0)
      return
    end
  end
  if self.isCarryingObject and self.isClient and self.isControlled then
    if inputValue ~= 0 then
      self.networkInformation.rotateObject = true
    else
      self.networkInformation.rotateObject = false
    end
    self.networkInformation.rotateObjectInputV = inputValue
  end
end
function Player:rotateObject(inputValue, axisX, axisY, axisZ)
  if self.pickedUpObjectJointId == nil then
    return
  end
  local v6, v7 = v6:getKinematicHelpers()
  local v8, v9, v10 = localDirectionToLocal(self.cameraNode, v7, axisX, axisY, axisZ)
  rotateAboutLocalAxis(v7, 1.5707963267948966 * g_physicsDt * 0.001 * inputValue, v8, v9, v10)
  setJointFrame(v5, 0, v7)
end
function Player:onInputJump(_, inputValue)
  local v3 = v3:isAvailable("jump")
  if v3 then
    v3:activateState("jump")
  end
end
function Player:onInputInteract(_, inputValue)
  if self.inputInformation.interactState ~= Player.BUTTONSTATES.PRESSED and inputValue ~= 0 then
    local v3 = v3:isAvailable("drop")
    if v3 then
      v3:activateState("drop")
    else
      v3 = v3:isAvailable("pickup")
      if v3 then
        v3:activateState("pickup")
      else
        v3 = v3:isAvailable("animalInteract")
        if v3 then
          v3:activateState("animalInteract")
        end
      end
    end
    self.inputInformation.interactState = Player.BUTTONSTATES.PRESSED
    return
  end
  self.inputInformation.interactState = Player.BUTTONSTATES.RELEASED
end
function Player:onInputActivateObject(_, inputValue)
  v3:activateState("animalPet")
end
function Player:onInputToggleLight()
  local dt = dt:isAvailable("useLight")
  if dt then
    dt:activateState("useLight")
  end
end
function Player:onInputCycleHandTool(_, direction)
  local v3 = v3:isAvailable("cycleHandtool")
  if v3 then
    v3 = v3:getState("cycleHandtool")
    v3.cycleDirection = direction
    v4:activateState("cycleHandtool")
  end
end
function Player:onInputThrowObject(_, inputValue)
  local v3 = v3:isAvailable("throw")
  if v3 then
    v3:activateState("throw")
  end
end
function Player:onInputDebugFlyToggle()
  if not self.walkingIsDisabled and self.debugFlightCoolDown <= 0 and g_flightModeEnabled then
    self.debugFlightMode = not self.debugFlightMode
    self.debugFlightCoolDown = 10
  end
end
function Player:onInputDebugFlyUpDown(_, inputValue)
  if not self.walkingIsDisabled then
    self.inputInformation.moveUp = self.inputInformation.moveUp + inputValue * 0.25 * self.debugFlightModeWalkingSpeed * self.debugFlightModeRunningFactor
  end
end
function Player:onInputEnter(_, inputValue)
  if g_currentMission.lastInteractionTime + 200 < g_time then
    if g_currentMission.interactiveVehicleInRange then
      local v3 = v3:canFarmAccess(self.farmId, g_currentMission.interactiveVehicleInRange)
      if v3 then
        v3:interact()
        return
      end
    end
    if self.canRideAnimal then
      v3:activateState("animalRide")
    end
  end
end
function Player:onInputActivateHandtool(_, inputValue)
  local v3 = self:hasHandtoolEquipped()
  if v3 then
    if inputValue == 0 then
    end
    v3.activatePressed = true
  end
end
function Player:getIsRideStateAvailable()
  local dt = dt:isActive("animalRide")
  if not dt then
    dt = dt:isAvailable("animalRide")
    return dt
  end
  return false
end
function Player:activateRideState()
  local dt = dt:isActive("animalRide")
  if not dt then
    dt:activateState("animalRide")
  end
end
function Player:onPauseGame(isPaused)
  self:lockInput(isPaused)
end
