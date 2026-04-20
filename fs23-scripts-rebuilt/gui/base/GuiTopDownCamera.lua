-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiTopDownCamera = {}
local GuiTopDownCamera_mt = Class(GuiTopDownCamera)
GuiTopDownCamera.TERRAIN_BORDER = 40
GuiTopDownCamera.INPUT_MOVE_FACTOR = 0.88
GuiTopDownCamera.MOVE_SPEED = 0.01
GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR = 1
GuiTopDownCamera.MOVE_SPEED_FACTOR_FAR = 8
GuiTopDownCamera.ROTATION_SPEED = 0.0005
GuiTopDownCamera.ROTATION_MIN_X_NEAR = 10
GuiTopDownCamera.ROTATION_MAX_X_NEAR = 90
GuiTopDownCamera.ROTATION_MIN_X_FAR = 50
GuiTopDownCamera.ROTATION_MAX_X_FAR = 90
GuiTopDownCamera.DISTANCE_MIN_Z = -10
GuiTopDownCamera.DISTANCE_RANGE_Z = -60
GuiTopDownCamera.GROUND_DISTANCE_MIN_Y = 2
GuiTopDownCamera.CAMERA_TERRAIN_OFFSET = 2
function GuiTopDownCamera.new(v0)
  if not v0 then
  end
  local v1 = v1(v2, v3)
  v1.controlledPlayer = nil
  v1.controlledVehicle = nil
  v1.hud = nil
  v1.terrainRootNode = nil
  v1.waterLevelHeight = 0
  v1.terrainSize = 0
  v1.previousCamera = nil
  local v2, v3 = v1:createCameraNodes()
  v1.camera = v2
  v1.cameraBaseNode = v3
  v1.isActive = false
  v1.cameraX = 0
  v1.targetCameraX = 0
  v1.cameraZ = 0
  v1.targetCameraZ = 0
  v1.cameraRotY = 0.7853981633974483
  v1.targetRotation = v1.cameraRotY
  v1.cameraTransformInitialized = false
  v1.isMouseEdgeScrollingActive = true
  v1.isMouseMode = false
  v1.mousePosX = 0.5
  v1.mousePosY = 0.5
  v1.tiltFactor = 0.5
  v1.targetTiltFactor = 0.5
  v1.zoomFactor = 0.3
  v1.targetZoomFactor = 0.3
  v1.isCatchingCursor = false
  v1.lastPlayerPos = {0, 0, 0}
  v1.lastPlayerTerrainHeight = 0
  v1.lastActionFrame = 0
  v1.inputZoom = 0
  v1.inputMoveSide = 0
  v1.inputMoveForward = 0
  v1.inputRotate = 0
  v1.inputTilt = 0
  v1.eventMoveSide = nil
  v1.eventMoveForward = nil
  v1.eventRotateCamera = nil
  v1.movementDisabledForGamepad = false
  return v1
end
function GuiTopDownCamera.createCameraNodes(v0)
  local v1 = createCamera("TopDownCamera", 1.0471975511965976, 1, 4000)
  local v2 = createTransformGroup("topDownCameraBaseNode")
  link(v2, v1)
  setRotation(v1, 0, 3.141592653589793, 0)
  setTranslation(v1, 0, 0, -5)
  setRotation(v2, 0, 0, 0)
  setTranslation(v2, 0, 110, 0)
  setFastShadowUpdate(v1, true)
  return v1, v2
end
function GuiTopDownCamera:delete()
  if self.isActive then
    self:deactivate()
  end
  delete(self.cameraBaseNode)
  self.camera = nil
  self.cameraBaseNode = nil
  self:reset()
end
function GuiTopDownCamera:reset()
  self.cameraTransformInitialized = false
  self.controlledPlayer = nil
  self.controlledVehicle = nil
  self.terrainRootNode = nil
  self.waterLevelHeight = 0
  self.terrainSize = 0
  self.previousCamera = nil
  self.isCatchingCursor = false
end
function GuiTopDownCamera:setTerrainRootNode(terrainRootNode)
  self.terrainRootNode = terrainRootNode
  local v2 = getTerrainSize(self.terrainRootNode)
  self.terrainSize = v2
end
function GuiTopDownCamera:setWaterLevelHeight(waterLevelHeight)
  self.waterLevelHeight = waterLevelHeight
end
function GuiTopDownCamera:setControlledPlayer(player)
  self.controlledPlayer = player
  self.controlledVehicle = nil
end
function GuiTopDownCamera:setControlledVehicle(vehicle)
  if vehicle ~= nil then
    self.controlledVehicle = vehicle
    self.controlledPlayer = nil
  end
end
function GuiTopDownCamera:activate()
  v1:setShowMouseCursor(true)
  local v4 = v4:getLastInputMode()
  self:onInputModeChanged({})
  self:updatePosition()
  local v1 = getCamera()
  self.previousCamera = v1
  setCamera(self.camera)
  if self.controlledPlayer ~= nil then
    local v1, v2, v3 = getTranslation(self.controlledPlayer.rootNode)
    self.lastPlayerPos[1] = v1
    self.lastPlayerPos[2] = v2
    self.lastPlayerPos[3] = v3
    v4 = getTerrainHeightAtWorldPos(self.terrainRootNode, v1, 0, v3)
    self.lastPlayerTerrainHeight = v4
    v4:setVisibility(true)
  end
  self:resetToPlayer()
  self:registerActionEvents()
  v1:subscribe(MessageType.INPUT_MODE_CHANGED, self.onInputModeChanged, self)
  self.isActive = true
end
function GuiTopDownCamera:deactivate()
  self.isActive = false
  v1:unsubscribeAll(self)
  self:removeActionEvents()
  v1:setShowMouseCursor(false)
  if self.controlledPlayer ~= nil then
    local v1, v2, v3 = unpack(self.lastPlayerPos)
    local v4 = getTerrainHeightAtWorldPos(self.terrainRootNode, v1, 0, v3)
    if 0 < v4 - self.lastPlayerTerrainHeight then
    end
    v6:moveRootNodeToAbsolute(v1, v2, v3)
    v6:setVisibility(false)
  end
  if self.previousCamera ~= nil then
    setCamera(self.previousCamera)
    self.previousCamera = nil
  end
end
function GuiTopDownCamera:getIsActive()
  return self.isActive
end
function GuiTopDownCamera:setMapPosition(mapX, mapZ)
  self.cameraX = mapX
  self.cameraZ = mapZ
  self.targetCameraX = mapX
  self.targetCameraZ = mapZ
  self:updatePosition()
end
function GuiTopDownCamera:resetToPlayer()
  if self.controlledPlayer ~= nil then
  elseif self.controlledVehicle ~= nil then
    local v4, v5, v6 = getTranslation(self.controlledVehicle.rootNode)
  end
  self:setMapPosition(v1, v2)
end
function GuiTopDownCamera:determineMapPosition()
  return self.cameraX, 0, self.cameraZ, self.cameraRotY - 3.141592653589793, 0
end
function GuiTopDownCamera:getPickRay()
  if self.isCatchingCursor then
    return nil
  end
  return RaycastUtil.getCameraPickingRay(self.mousePosX, self.mousePosY, self.camera)
end
function GuiTopDownCamera:updatePosition()
  -- TODO: structure LOP_FORNPREP (pc 5, target 32)
  for v7 = -2, 2, 2 do
    local v8 = getTerrainHeightAtWorldPos(self.terrainRootNode, self.cameraX + v4, 0, self.cameraZ + v7)
    local v9 = math.max(v1, v8)
    -- TODO: structure LOP_FORNLOOP (pc 30, target 10)
  end
  local rotMin = math.rad(GuiTopDownCamera.ROTATION_MIN_X_NEAR + (GuiTopDownCamera.ROTATION_MIN_X_FAR - GuiTopDownCamera.ROTATION_MIN_X_NEAR) * self.zoomFactor)
  local rotMax = math.rad(GuiTopDownCamera.ROTATION_MAX_X_NEAR + (GuiTopDownCamera.ROTATION_MAX_X_FAR - GuiTopDownCamera.ROTATION_MAX_X_NEAR) * self.zoomFactor)
  setTranslation(self.camera, 0, 0, GuiTopDownCamera.DISTANCE_MIN_Z + self.zoomFactor * GuiTopDownCamera.DISTANCE_RANGE_Z)
  setRotation(self.cameraBaseNode, rotMin + (rotMax - rotMin) * self.tiltFactor, self.cameraRotY, 0)
  setTranslation(self.cameraBaseNode, self.cameraX, v1 + GuiTopDownCamera.CAMERA_TERRAIN_OFFSET, self.cameraZ)
  local v8, v9, v10 = getWorldTranslation(self.camera)
  -- TODO: structure LOP_FORNPREP (pc 138, target 178)
  for v14 = -2, 2, 2 do
    local v15 = getTerrainHeightAtWorldPos(self.terrainRootNode, v6 + v11, 0, v5 + v14)
    local v16, v17, v18, v19 = RaycastUtil.raycastClosest(v6 + v11, v15 + 100, v5 + v14, 0, -1, 0, 100, CollisionMask.ALL - CollisionMask.TRIGGERS)
    if v16 then
    end
    local v20 = math.max(v8, v15)
    -- TODO: structure LOP_FORNLOOP (pc 176, target 143)
  end
  if v7 < v8 + GuiTopDownCamera.GROUND_DISTANCE_MIN_Y then
    setTranslation(self.cameraBaseNode, self.cameraX, v1 + v8 - v7 + GuiTopDownCamera.GROUND_DISTANCE_MIN_Y, self.cameraZ)
  end
end
function GuiTopDownCamera:applyMovement(dt)
  if (self.targetCameraX - self.cameraX) / dt * 5 < 0.0001 then
    -- if -0.0001 >= (v0.targetCameraX - v0.cameraX) / v1 * 5 then goto L18 end
    self.cameraX = self.targetCameraX
  else
    self.cameraX = self.cameraX + (self.targetCameraX - self.cameraX) / dt * 5
  end
  if (self.targetCameraZ - self.cameraZ) / dt * 5 < 0.0001 then
    -- if -0.0001 >= (v0.targetCameraZ - v0.cameraZ) / v1 * 5 then goto L41 end
    self.cameraZ = self.targetCameraZ
  else
    self.cameraZ = self.cameraZ + (self.targetCameraZ - self.cameraZ) / dt * 5
  end
  if (self.targetZoomFactor - self.zoomFactor) / dt * 2 < 0.0001 then
    -- if -0.0001 >= (v0.targetZoomFactor - v0.zoomFactor) / v1 * 2 then goto L64 end
    self.zoomFactor = self.targetZoomFactor
  else
    local v5 = MathUtil.clamp(self.zoomFactor + (self.targetZoomFactor - self.zoomFactor) / dt * 2, 0, 1)
    self.zoomFactor = v5
  end
  if (self.targetTiltFactor - self.tiltFactor) / dt * 5 < 0.0001 then
    -- if -0.0001 >= (v0.targetTiltFactor - v0.tiltFactor) / v1 * 5 then goto L92 end
    self.tiltFactor = self.targetTiltFactor
  else
    local v6 = MathUtil.clamp(self.tiltFactor + (self.targetTiltFactor - self.tiltFactor) / dt * 5, 0, 1)
    self.tiltFactor = v6
  end
  if (self.targetRotation - self.cameraRotY) / dt * 5 < 0.0001 and -0.0001 < (self.targetRotation - self.cameraRotY) / dt * 5 then
    self.cameraRotY = self.targetRotation
    return
  end
  self.cameraRotY = self.cameraRotY + v6
end
function GuiTopDownCamera:setMouseEdgeScrollingActive(isActive)
  self.isMouseEdgeScrollingActive = isActive
end
function GuiTopDownCamera:getMouseEdgeScrollingMovement()
  if 0.98 <= self.mousePosX then
    local v3 = math.min((0.02 - 1 - self.mousePosX) / 0.005000000000000001, 1)
  elseif self.mousePosX <= 0.02 then
    v3 = math.min((0.02 - self.mousePosX) / 0.005000000000000001, 1)
  end
  if 0.98 <= self.mousePosY then
    v3 = math.min((0.02 - 1 - self.mousePosY) / 0.005000000000000001, 1)
    return v1, v3
  end
  if self.mousePosY <= 0.02 then
    v3 = math.min((0.02 - self.mousePosY) / 0.005000000000000001, 1)
  end
  return v1, v2
end
function GuiTopDownCamera:setMovementDisabledForGamepad(disabled)
  self.movementDisabledForGamepad = disabled
end
function GuiTopDownCamera:update(dt)
  if self.isActive then
    if not self.isMouseMode then
      -- if v0.movementDisabledForGamepad then goto L16 end
    end
    self:updateMovement(dt)
    self:resetInputState()
  end
end
function GuiTopDownCamera:updateMovement(dt)
  local v2 = MathUtil.clamp(self.targetZoomFactor - self.inputZoom * 0.2, 0, 1)
  self.targetZoomFactor = v2
  self.targetRotation = self.targetRotation + dt * self.inputRotate * GuiTopDownCamera.ROTATION_SPEED
  v2 = MathUtil.clamp(self.targetTiltFactor + self.inputTilt * dt * GuiTopDownCamera.ROTATION_SPEED, 0, 1)
  self.targetTiltFactor = v2
  if self.inputMoveSide * dt == 0 and -self.inputMoveForward * dt == 0 and self.isMouseEdgeScrollingActive then
    local v4, v5 = self:getMouseEdgeScrollingMovement()
  end
  local v7 = math.sin(self.cameraRotY)
  local v8 = math.cos(self.cameraRotY)
  v8 = math.cos(self.cameraRotY)
  local v9 = math.sin(self.cameraRotY)
  v9 = MathUtil.clamp(self.targetCameraX + (v7 * v3 * (GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR + self.zoomFactor * (GuiTopDownCamera.MOVE_SPEED_FACTOR_FAR - GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR)) + v8 * -(v2 * (GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR + self.zoomFactor * (GuiTopDownCamera.MOVE_SPEED_FACTOR_FAR - GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR)))) * dt * GuiTopDownCamera.MOVE_SPEED, -(self.terrainSize * 0.5 - GuiTopDownCamera.TERRAIN_BORDER), self.terrainSize * 0.5 - GuiTopDownCamera.TERRAIN_BORDER)
  self.targetCameraX = v9
  v9 = MathUtil.clamp(self.targetCameraZ + (v8 * v3 * (GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR + self.zoomFactor * (GuiTopDownCamera.MOVE_SPEED_FACTOR_FAR - GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR)) - v9 * -(v2 * (GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR + self.zoomFactor * (GuiTopDownCamera.MOVE_SPEED_FACTOR_FAR - GuiTopDownCamera.MOVE_SPEED_FACTOR_NEAR)))) * dt * GuiTopDownCamera.MOVE_SPEED, -(self.terrainSize * 0.5 - GuiTopDownCamera.TERRAIN_BORDER), self.terrainSize * 0.5 - GuiTopDownCamera.TERRAIN_BORDER)
  self.targetCameraZ = v9
  self:applyMovement(dt)
  self:updatePosition()
end
function GuiTopDownCamera:setCursorLocked(locked)
  self.cursorLocked = locked
end
function GuiTopDownCamera:mouseEvent(posX, posY, isDown, isUp, button)
  if g_time > self.lastActionFrame then
    -- if not v0.cursorLocked then goto L10 end
  end
  return
  if self.isCatchingCursor then
    self.isCatchingCursor = false
    v6:setShowMouseCursor(true)
    wrapMousePosition(0.5, 0.5)
    self.mousePosX = 0.5
    self.mousePosY = 0.5
    return
  end
  if self.isMouseMode then
    self.mousePosX = posX
    self.mousePosY = posY
  end
end
function GuiTopDownCamera:resetInputState()
  self.inputZoom = 0
  self.inputMoveSide = 0
  self.inputMoveForward = 0
  self.inputTilt = 0
  self.inputRotate = 0
end
function GuiTopDownCamera:registerActionEvents()
  local v1, v2 = v1:registerActionEvent(InputAction.AXIS_MOVE_SIDE_PLAYER, self, self.onMoveSide, false, false, true, true)
  v3:setActionEventTextPriority(v2, GS_PRIO_VERY_LOW)
  v3:setActionEventTextVisibility(v2, false)
  self.eventMoveSide = v2
  local v3, v4 = v3:registerActionEvent(InputAction.AXIS_MOVE_FORWARD_PLAYER, self, self.onMoveForward, false, false, true, true)
  v3:setActionEventTextPriority(v4, GS_PRIO_VERY_LOW)
  v3:setActionEventTextVisibility(v4, false)
  self.eventMoveForward = v4
  v3, v4 = v3:registerActionEvent(InputAction.AXIS_CONSTRUCTION_CAMERA_ZOOM, self, self.onZoom, false, false, true, true)
  v3:setActionEventTextPriority(v4, GS_PRIO_LOW)
  v3, v4 = v3:registerActionEvent(InputAction.AXIS_CONSTRUCTION_CAMERA_ROTATE, self, self.onRotate, false, false, true, true)
  v3:setActionEventTextPriority(v4, GS_PRIO_LOW)
  v3, v4 = v3:registerActionEvent(InputAction.AXIS_CONSTRUCTION_CAMERA_TILT, self, self.onTilt, false, false, true, true)
  v3:setActionEventTextPriority(v4, GS_PRIO_LOW)
end
function GuiTopDownCamera.removeActionEvents(v0)
  v1:removeActionEventsByTarget(v0)
end
function GuiTopDownCamera:onZoom(_, inputValue, _, isAnalog, isMouse)
  if isMouse and self.mouseDisabled then
    return
  end
  if isAnalog then
  elseif isMouse then
  end
  self.inputZoom = v6
end
function GuiTopDownCamera:onMoveSide(_, inputValue)
  self.inputMoveSide = inputValue * GuiTopDownCamera.INPUT_MOVE_FACTOR / g_currentDt
end
function GuiTopDownCamera:onMoveForward(_, inputValue)
  self.inputMoveForward = inputValue * GuiTopDownCamera.INPUT_MOVE_FACTOR / g_currentDt
end
function GuiTopDownCamera:onRotate(_, inputValue, _, isAnalog, isMouse)
  if isMouse and self.mouseDisabled then
    return
  end
  if isMouse and inputValue ~= 0 then
    self.lastActionFrame = g_time
    if not self.isCatchingCursor then
      v6:setShowMouseCursor(false)
      self.isCatchingCursor = true
    end
  end
  if isMouse and isAnalog then
  end
  self.inputRotate = -inputValue * 3 / g_currentDt * 16
end
function GuiTopDownCamera:onTilt(_, inputValue, _, isAnalog, isMouse)
  if isMouse and self.mouseDisabled then
    return
  end
  if isMouse and inputValue ~= 0 then
    self.lastActionFrame = g_time
    if not self.isCatchingCursor then
      v6:setShowMouseCursor(false)
      self.isCatchingCursor = true
    end
  end
  if isMouse and isAnalog then
  end
  self.inputTilt = inputValue * 3
end
function GuiTopDownCamera:onInputModeChanged(inputMode)
  if inputMode[1] ~= GS_INPUT_HELP_MODE_KEYBOARD then
  end
  self.isMouseMode = true
  if not self.isMouseMode then
    self.mousePosX = 0.5
    self.mousePosY = 0.5
  end
end
