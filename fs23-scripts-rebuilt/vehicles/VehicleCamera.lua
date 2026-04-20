-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleCamera = {}
local VehicleCamera_mt = Class(VehicleCamera)
VehicleCamera.doCameraSmoothing = false
VehicleCamera.raycastMask = CollisionFlag.TERRAIN + CollisionFlag.STATIC_OBJECT + CollisionFlag.CAMERA_BLOCKING + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.WATER
function VehicleCamera.new(vehicle, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.vehicle = vehicle
  v2.isActivated = false
  v2.limitRotXDelta = 0
  v2.raycastDistance = 0
  v2.normalX = 0
  v2.normalY = 0
  v2.normalZ = 0
  v2.raycastNodes = {}
  v2.disableCollisionTime = -1
  v2.lookAtPosition = {0, 0, 0}
  v2.lookAtLastTargetPosition = {0, 0, 0}
  v2.position = {0, 0, 0}
  v2.lastTargetPosition = {0, 0, 0}
  v2.upVector = {0, 0, 0}
  v2.lastUpVector = {0, 0, 0}
  v2.lastInputValues = {upDown = 0, leftRight = 0}
  v2.isCollisionEnabled = true
  if g_modIsLoaded.FS22_disableVehicleCameraCollision then
    local v3 = v3:getValue("cameraCheckCollision")
    v2.isCollisionEnabled = v3
    v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.CAMERA_CHECK_COLLISION], v2.onCameraCollisionDetectionSettingChanged, v2)
  end
  v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA], v2.onActiveCameraSuspensionSettingChanged, v2)
  return v2
end
function VehicleCamera:loadFromXML(xmlFile, key, savegame, cameraIndex)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, self.vehicle.configFileName, key .. "#index", "#node")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.vehicle.components, self.vehicle.i3dMappings)
  self.cameraNode = v5
  if self.cameraNode ~= nil then
    v5 = getHasClassId(self.cameraNode, ClassIds.CAMERA)
    -- if v5 then goto L49 end
  end
  Logging.xmlWarning(xmlFile, "Invalid camera node for camera '%s'. Must be a camera type!", key)
  return false
  v5 = calculateFovY(self.cameraNode)
  self.fovY = v5
  setFovY(self.cameraNode, self.fovY)
  v5 = xmlFile:getValue(key .. "#rotatable", false)
  self.isRotatable = v5
  v5 = xmlFile:getValue(key .. "#limit", false)
  self.limit = v5
  if self.limit then
    v5 = xmlFile:getValue(key .. "#rotMinX")
    self.rotMinX = v5
    v5 = xmlFile:getValue(key .. "#rotMaxX")
    self.rotMaxX = v5
    v5 = xmlFile:getValue(key .. "#transMin")
    self.transMin = v5
    v5 = xmlFile:getValue(key .. "#transMax")
    self.transMax = v5
    if self.transMax ~= nil then
      v5 = math.max(self.transMin, self.transMax * Platform.gameplay.maxCameraZoomFactor)
      self.transMax = v5
    end
    if self.rotMinX ~= nil and self.rotMaxX ~= nil and self.transMin ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L158
    end
    Logging.xmlWarning(xmlFile, "Missing 'rotMinX', 'rotMaxX', 'transMin' or 'transMax' for camera '%s'", key)
    return false
  end
  v5 = xmlFile:getValue(key .. "#isInside", false)
  self.isInside = v5
  v5 = xmlFile:getValue(key .. "#allowHeadTracking", self.isInside)
  self.allowHeadTracking = v5
  v5 = xmlFile:getValue(key .. "#shadowFocusBox", nil, self.vehicle.components, self.vehicle.i3dMappings)
  self.shadowFocusBoxNode = v5
  if self.shadowFocusBoxNode ~= nil then
    v5 = getHasClassId(self.shadowFocusBoxNode, ClassIds.SHAPE)
    if not v5 then
      local v8 = getName(self.shadowFocusBoxNode)
      Logging.xmlWarning(...)
      self.shadowFocusBoxNode = nil
    end
  end
  if Platform.gameplay.hasShadowFocusBox then
    -- if not v0.isInside then goto L249 end
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L249
    Logging.xmlDevWarning(xmlFile, "Missing shadow focus box for indoor camera '%s'", key)
  elseif self.shadowFocusBoxNode ~= nil then
    Logging.xmlDevWarning(xmlFile, "Shadow focus box for camera '%s' not allowed on this platform", key)
    self.shadowFocusBoxNode = nil
  end
  v5 = xmlFile:getValue(key .. "#useOutdoorSounds", not self.isInside)
  self.useOutdoorSounds = v5
  if self.isRotatable then
    v5 = xmlFile:getValue(key .. "#rotateNode", nil, self.vehicle.components, self.vehicle.i3dMappings)
    self.rotateNode = v5
    if self.rotateNode == nil then
    end
    self.hasExtraRotationNode = true
  end
  v5 = xmlFile:getValue(key .. "#rotation", nil, true)
  if v5 ~= nil then
    if self.rotateNode ~= nil then
    end
    local v9 = unpack(v5)
    setRotation(...)
  end
  local v6 = xmlFile:getValue(key .. "#translation", nil, true)
  if v6 ~= nil then
    v9 = unpack(v6)
    setTranslation(...)
  end
  if self.rotateNode ~= nil and self.rotateNode == self.cameraNode then
  end
  self.allowTranslation = v7
  local v7 = xmlFile:getValue(key .. "#useMirror", false)
  self.useMirror = v7
  v7 = xmlFile:getValue(key .. "#useWorldXZRotation")
  self.useWorldXZRotation = v7
  v7 = xmlFile:getValue(key .. "#resetCameraOnVehicleSwitch")
  self.resetCameraOnVehicleSwitch = v7
  v7 = xmlFile:getValue(key .. "#suspensionNodeIndex")
  self.suspensionNodeIndex = v7
  if not Platform.gameplay.useWorldCameraInside then
    -- if v0.isInside then goto L395 end
  end
  if not Platform.gameplay.useWorldCameraOutside and not self.isInside then
    self.useWorldXZRotation = false
  end
  self.positionSmoothingParameter = 0
  self.lookAtSmoothingParameter = 0
  v7 = xmlFile:getValue(key .. "#useDefaultPositionSmoothing", true)
  if v7 then
    if self.isInside then
      self.positionSmoothingParameter = 0.128
      self.lookAtSmoothingParameter = 0.176
    else
      self.positionSmoothingParameter = 0.016
      self.lookAtSmoothingParameter = 0.022
    end
  end
  v8 = xmlFile:getValue(key .. "#positionSmoothingParameter", self.positionSmoothingParameter)
  self.positionSmoothingParameter = v8
  v8 = xmlFile:getValue(key .. "#lookAtSmoothingParameter", self.lookAtSmoothingParameter)
  self.lookAtSmoothingParameter = v8
  v8 = v8:getValue("isHeadTrackingEnabled")
  if v8 then
    v8 = isHeadTrackingAvailable()
    if v8 then
    end
  end
  if v8 then
    self.positionSmoothingParameter = 0
    self.lookAtSmoothingParameter = 0
  end
  self.cameraPositionNode = self.cameraNode
  if 0 < self.positionSmoothingParameter then
    v9 = createTransformGroup("cameraPositionNode")
    self.cameraPositionNode = v9
    v9 = getChildIndex(self.cameraNode)
    local v11 = getParent(self.cameraNode)
    link(v11, self.cameraPositionNode, v9)
    local v10, v11, v12 = getTranslation(self.cameraNode)
    local v13, v14, v15 = getRotation(self.cameraNode)
    setTranslation(self.cameraPositionNode, v10, v11, v12)
    setRotation(self.cameraPositionNode, v13, v14, v15)
    unlink(self.cameraNode)
  end
  v9 = xmlFile:getValue(key .. "#rotYSteeringRotSpeed", 0)
  self.rotYSteeringRotSpeed = v9
  if self.rotateNode ~= nil then
    -- if v0.rotateNode ~= v0.cameraNode then goto L553 end
  end
  self.rotateNode = self.cameraPositionNode
  if v8 then
    v11 = getParent(self.cameraPositionNode)
    v9, v10, v11 = localDirectionToLocal(self.cameraPositionNode, v11, 0, 0, 1)
    v14 = getParent(self.cameraPositionNode)
    v12, v13, v14 = localToLocal(self.cameraPositionNode, v14, 0, 0, 0)
    v15 = createTransformGroup("headTrackingNode")
    self.headTrackingNode = v15
    local v16 = getParent(self.cameraPositionNode)
    link(v16, self.headTrackingNode)
    setTranslation(self.headTrackingNode, v12, v13, v14)
    v16 = math.abs(v9)
    local v17 = math.abs(v11)
    if 0.0001 < v16 + v17 then
      setDirection(self.headTrackingNode, v9, 0, v11, 0, 1, 0)
    else
      setRotation(self.headTrackingNode, 0, 0, 0)
    end
  end
  v9, v10, v11 = getRotation(self.rotateNode)
  self.origRotX = v9
  self.origRotY = v10
  self.origRotZ = v11
  self.rotX = self.origRotX
  self.rotY = self.origRotY
  self.rotZ = self.origRotZ
  v9, v10, v11 = getTranslation(self.cameraPositionNode)
  self.origTransX = v9
  self.origTransY = v10
  self.origTransZ = v11
  self.transX = self.origTransX
  self.transY = self.origTransY
  self.transZ = self.origTransZ
  v10 = MathUtil.vector3Length(self.origTransX, self.origTransY, self.origTransZ)
  self.zoom = v10 + 0.00001
  self.zoomTarget = v10 + 0.00001
  self.zoomDefault = v10 + 0.00001
  self.zoomLimitedTarget = -1
  self.transDirX = 1 / (v10 + 0.00001) * self.origTransX
  self.transDirY = 1 / (v10 + 0.00001) * self.origTransY
  self.transDirZ = 1 / (v10 + 0.00001) * self.origTransZ
  if self.allowTranslation and v10 + 0.00001 <= 0.01 then
    Logging.xmlWarning(xmlFile, "Invalid camera translation for camera '%s'. Distance needs to be bigger than 0.01", key)
  end
  table.insert(self.raycastNodes, self.rotateNode)
  while true do
    v14 = string.format(".raycastNode(%d)", v11)
    v13 = xmlFile:hasProperty(key .. v14)
    if not v13 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, self.vehicle.configFileName, key .. v14 .. "#index", key .. v14 .. "#node")
    v13 = xmlFile:getValue(key .. v14 .. "#node", nil, self.vehicle.components, self.vehicle.i3dMappings)
    if v13 ~= nil then
      table.insert(self.raycastNodes, v13)
    end
  end
  v12, v13, v14 = getScale(self.cameraNode)
  if v12 == 1 and v13 == 1 then
    -- cmp-jump LOP_JUMPXEQKN R14 aux=0xa3 -> L820
  end
  Logging.xmlWarning(xmlFile, "Vehicle camera with scale found for camera '%s'. Resetting to scale 1", key)
  setScale(self.cameraNode, 1, 1, 1)
  self.headTrackingPositionOffset = {0, 0, 0}
  self.headTrackingRotationOffset = {0, 0, 0}
  self.changeObjects = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key, self.changeObjects, self.vehicle.components, self.vehicle)
  ObjectChangeUtil.setObjectChanges(self.changeObjects, false, self.vehicle, self.vehicle.setMovingToolDirty)
  v15 = v15:getValue("resetCamera")
  if v15 then
    -- if not g_currentMission.isReloadingVehicles then goto L1020 end
  end
  if savegame ~= nil and not savegame.resetVehicles then
    v15 = string.format(savegame.key .. ".enterable.camera(%d)", cameraIndex)
    v16 = v16:hasProperty(v15)
    if v16 then
      local v16, v17, v18 = v16:getValue(v15 .. "#rotation", {self.rotX, self.rotY, self.rotZ})
      local v19 = MathUtil.isNan(v16)
      if not v19 then
        v19 = MathUtil.isNan(v17)
        if not v19 then
          v19 = MathUtil.isNan(v18)
          if not v19 then
            self.rotX = v16
            self.rotY = v17
            self.rotZ = v18
            if self.allowTranslation then
              local v19, v20, v21 = v19:getValue(v15 .. "#translation", {self.transX, self.transY, self.transZ})
              self.transX = v19
              self.transY = v20
              self.transZ = v21
              v19 = v19:getValue(v15 .. "#zoom", self.zoom)
              self.zoom = v19
              self.zoomTarget = self.zoom
            end
            setTranslation(self.cameraPositionNode, self.transX, self.transY, self.transZ)
            setRotation(self.rotateNode, self.rotX, self.rotY, self.rotZ)
            if g_currentMission.isReloadingVehicles then
              v19 = v19:getValue(v15 .. "#fovY")
              if v19 ~= nil then
                setFovY(self.cameraNode, v19)
              end
            end
          end
        end
      end
    end
  end
  return true
end
function VehicleCamera:onPostLoad(savegame)
  self.suspensionNode = nil
  if self.suspensionNodeIndex ~= nil and self.vehicle.getSuspensionNodeFromIndex ~= nil then
    local key = key:getSuspensionNodeFromIndex(self.suspensionNodeIndex)
    self.suspensionNode = key
    if self.suspensionNode == nil then
      local cameraIndex = getName(self.cameraNode)
      Logging.warning("Vehicle Camera '%s' with invalid suspensionIndex '%s' found.", cameraIndex, self.suspensionNodeIndex)
    end
  end
  if self.suspensionNode ~= nil then
    if self.suspensionNode.node ~= nil then
      key = createTransformGroup("cameraSuspensionParentNode")
      self.cameraSuspensionParentNode = key
      link(self.suspensionNode.node, self.cameraSuspensionParentNode)
      local v5 = getParent(self.cameraPositionNode)
      cameraIndex = getWorldTranslation(...)
      setWorldTranslation(...)
      v5 = getParent(self.cameraPositionNode)
      cameraIndex = getWorldQuaternion(...)
      setWorldQuaternion(...)
      key = getParent(self.cameraPositionNode)
      self.cameraBaseParentNode = key
      self.lastActiveCameraSuspensionSetting = false
      return
    end
    cameraIndex = getName(self.cameraNode)
    Logging.warning("Vehicle Camera '%s' with invalid suspensionIndex '%s' found. CharacterTorso suspensions are not allowed.", cameraIndex, self.suspensionNodeIndex)
    self.suspensionNode = nil
  end
end
function VehicleCamera:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#rotation", self.rotX, self.rotY, self.rotZ)
  xmlFile:setValue(key .. "#translation", self.transX, self.transY, self.transZ)
  xmlFile:setValue(key .. "#zoom", self.zoom)
  local v7 = getFovY(self.cameraNode)
  xmlFile:setValue(...)
end
function VehicleCamera:delete()
  self:onDeactivate()
  if self.cameraNode ~= nil and 0 < self.positionSmoothingParameter then
    delete(self.cameraNode)
    self.cameraNode = nil
  end
  xmlFile:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA], self)
  xmlFile:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.CAMERA_CHECK_COLLISION], self)
end
function VehicleCamera:zoomSmoothly(offset)
  if self.transMin ~= nil and self.transMax ~= nil and self.transMin ~= self.transMax then
    local v5 = math.max(self.transMin, self.zoomTarget + offset)
    local savegame = math.min(...)
  end
  self.zoomTarget = key
end
function VehicleCamera:raycastCallback(transformId, x, y, z, distance, nx, ny, nz)
  self.raycastDistance = distance
  self.normalX = nx
  self.normalY = ny
  self.normalZ = nz
  self.raycastTransformId = transformId
end
function VehicleCamera:update(dt)
  if 0 <= self.zoomLimitedTarget then
    local savegame = math.min(self.zoomLimitedTarget, self.zoomTarget)
  end
  local v5 = math.pow(0.99579, dt)
  self.zoom = key + v5 * (self.zoom - key)
  if self.lastInputValues.upDown ~= 0 then
    v5 = v5:getValue(GameSettings.SETTING.CAMERA_SENSITIVITY)
    self.lastInputValues.upDown = 0
    v5 = v5:getValue("invertYLook")
    if v5 then
      -- if -(v0.lastInputValues.upDown * v5) then goto L64 end
    end
    if self.isRotatable and self.isActivated then
      local cameraIndex = cameraIndex:getIsGuiVisible()
      if not cameraIndex then
        if 0.001 < self.limitRotXDelta then
          cameraIndex = math.min(self.rotX - savegame, self.rotX)
          self.rotX = cameraIndex
        elseif self.limitRotXDelta < -0.001 then
          cameraIndex = math.max(self.rotX - savegame, self.rotX)
          self.rotX = cameraIndex
        else
          self.rotX = self.rotX - savegame
        end
        if self.limit then
          local v6 = math.max(self.rotMinX, self.rotX)
          cameraIndex = math.min(...)
          self.rotX = cameraIndex
        end
      end
    end
  end
  if self.lastInputValues.leftRight ~= 0 then
    v5 = v5:getValue(GameSettings.SETTING.CAMERA_SENSITIVITY)
    self.lastInputValues.leftRight = 0
    if self.isRotatable and self.isActivated then
      cameraIndex = cameraIndex:getIsGuiVisible()
      if not cameraIndex then
        self.rotY = self.rotY - self.lastInputValues.leftRight * v5
      end
    end
  end
  savegame = savegame:getValue("isHeadTrackingEnabled")
  if savegame then
    savegame = isHeadTrackingAvailable()
    -- if not v3 then goto L281 end
    -- if not v0.allowHeadTracking then goto L281 end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L281
    savegame, cameraIndex, v5 = getHeadTrackingTranslation()
    local v6, v7, v8 = getHeadTrackingRotation()
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L622
    local camParent = getParent(self.cameraNode)
    if camParent ~= 0 then
      local v16, v17, v18 = localToLocal(self.headTrackingNode, camParent, savegame, cameraIndex, v5)
      v16, v17, v18 = localRotationToLocal(self.headTrackingNode, camParent, v6, v7, v8)
    else
      v16, v17, v18 = localToWorld(self.headTrackingNode, savegame, cameraIndex, v5)
      v16, v17, v18 = localRotationToWorld(self.headTrackingNode, v6, v7, v8)
    end
    setRotation(self.cameraNode, v13, v14, v15)
    setTranslation(self.cameraNode, v10, v11, v12)
  else
    self:updateRotateNodeRotation()
    if self.limit then
      if self.isRotatable then
        if self.useWorldXZRotation == nil then
          savegame = savegame:getValue("useWorldCamera")
          -- if v3 then goto L304 end
        end
        if self.useWorldXZRotation then
          -- TODO: structure LOP_FORNPREP (pc 307, target 374)
          local v10 = getParent(self.cameraPositionNode)
          local camParent, v10, v11 = localToWorld(v10, self.transDirX * self.zoom, self.transDirY * self.zoom, self.transDirZ * self.zoom)
          local v12 = DensityMapHeightUtil.getHeightAtWorldPos(camParent, 0, v11)
          if v10 < v12 + 0.9 then
            local v15 = math.sin(self.rotX)
            v17 = MathUtil.clamp((v15 * self.zoom - v12 + 0.9 - v10) / self.zoom, -1, 1)
            v16 = math.asin(...)
            self.rotX = v16
            self:updateRotateNodeRotation()
            -- goto L373  (LOP_JUMP +1)
            -- goto L374  (LOP_JUMP +1)
            -- TODO: structure LOP_FORNLOOP (pc 373, target 308)
          end
        end
      end
      if self.allowTranslation then
        self.limitRotXDelta = 0
        savegame, cameraIndex, v5, v6, v7, v8 = self:getCollisionDistance()
        if savegame then
          if v8 ~= nil then
            v10 = math.abs(v8)
            v11 = MathUtil.lerp(1.2, 0.1, v10 * v10 * (3 - 2 * v10))
          end
          v10 = math.max(cameraIndex - camParent, 0.01)
          self.disableCollisionTime = g_currentMission.time + 400
          self.zoomLimitedTarget = v10
          if v10 < self.zoom then
            self.zoom = v10
          end
          -- if not v0.isRotatable then goto L465 end
          -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L465
          -- if v4 >= v0.transMin then goto L465 end
          v10, v11, v12 = worldDirectionToLocal(self.rotateNode, v5, v6, v7)
          if 0.5 < v11 then
            self.limitRotXDelta = 1
            -- goto L465  (LOP_JUMP +16)
          end
          -- if v11 >= -0.5 then goto L465 end
          self.limitRotXDelta = -1
        elseif self.disableCollisionTime <= g_currentMission.time then
          self.zoomLimitedTarget = -1
        end
      end
    end
    self.transX = self.transDirX * self.zoom
    self.transY = self.transDirY * self.zoom
    self.transZ = self.transDirZ * self.zoom
    setTranslation(self.cameraPositionNode, self.transX, self.transY, self.transZ)
    if 0 < self.positionSmoothingParameter then
      if self.vehicle.spec_rideable ~= nil then
      end
      if g_server == nil then
      end
      if 0 < savegame then
        cameraIndex, v5, v6 = getWorldTranslation(self.rotateNode)
        camParent, v10, v11 = self:getSmoothed(self.lookAtSmoothingParameter, self.lookAtPosition[1], self.lookAtPosition[2], self.lookAtPosition[3], cameraIndex, v5, v6, self.lookAtLastTargetPosition[1], self.lookAtLastTargetPosition[2], self.lookAtLastTargetPosition[3], savegame)
        self.lookAtPosition[1] = camParent
        self.lookAtPosition[2] = v10
        self.lookAtPosition[3] = v11
        self.lookAtLastTargetPosition[1] = cameraIndex
        self.lookAtLastTargetPosition[2] = v5
        self.lookAtLastTargetPosition[3] = v6
        camParent, v10, v11 = getWorldTranslation(self.cameraPositionNode)
        local v14, v15, v16 = self:getSmoothed(self.positionSmoothingParameter, self.position[1], self.position[2], self.position[3], camParent, v10, v11, self.lastTargetPosition[1], self.lastTargetPosition[2], self.lastTargetPosition[3], savegame)
        self.position[1] = v14
        self.position[2] = v15
        self.position[3] = v16
        self.lastTargetPosition[1] = camParent
        self.lastTargetPosition[2] = v10
        self.lastTargetPosition[3] = v11
        v16 = self:getTiltDirectionOffset()
        v14, v15, v16 = localDirectionToWorld(self.rotateNode, v16, 1, 0)
        local v19, v20, v21 = self:getSmoothed(self.positionSmoothingParameter, self.upVector[1], self.upVector[2], self.upVector[3], v14, v15, v16, self.lastUpVector[1], self.lastUpVector[2], self.lastUpVector[3], savegame)
        self.upVector[1] = v19
        self.upVector[2] = v20
        self.upVector[3] = v21
        self.lastUpVector[1] = v14
        self.lastUpVector[2] = v15
        self.lastUpVector[3] = v16
        self:setSeparateCameraPose()
      end
    end
  end
  savegame = MathUtil.isNan(self.rotX)
  if not savegame then
    savegame = MathUtil.isNan(self.rotY)
    if not savegame then
      savegame = MathUtil.isNan(self.rotZ)
      -- if not v3 then goto L643 end
    end
  end
  self:resetCamera()
end
function VehicleCamera.getSmoothed(v0, dt, key, savegame, cameraIndex, v5, v6, v7, v8, camParent, v10, v11)
  local v13 = math.floor(v11 - 6)
  local v12 = math.max(v13, 0)
  local v20 = math.pow(1 - dt, 1 + v11 - v12)
  local v19 = math.pow(1 - dt, v11 - v12)
  -- TODO: structure LOP_FORNPREP (pc 66, target 86)
  -- TODO: structure LOP_FORNLOOP (pc 85, target 67)
  return ((v20 + (1 + v11 - v12) * dt - 1) * (v5 - v8) * 1 / v11 + dt * (v19 * (key - v8) + v8)) / dt + (v8 + (v5 - v8) * 1 / v11 * (1 + v11 - v12) - ((v20 + (1 + v11 - v12) * dt - 1) * (v5 - v8) * 1 / v11 + dt * (v19 * (key - v8) + v8)) / dt) * dt, ((v20 + (1 + v11 - v12) * dt - 1) * (v6 - camParent) * 1 / v11 + dt * (v19 * (savegame - camParent) + camParent)) / dt + (camParent + (v6 - camParent) * 1 / v11 * (1 + v11 - v12) - ((v20 + (1 + v11 - v12) * dt - 1) * (v6 - camParent) * 1 / v11 + dt * (v19 * (savegame - camParent) + camParent)) / dt) * dt, ((v20 + (1 + v11 - v12) * dt - 1) * (v7 - v10) * 1 / v11 + dt * (v19 * (cameraIndex - v10) + v10)) / dt + (v10 + (v7 - v10) * 1 / v11 * (1 + v11 - v12) - ((v20 + (1 + v11 - v12) * dt - 1) * (v7 - v10) * 1 / v11 + dt * (v19 * (cameraIndex - v10) + v10)) / dt) * dt
end
function VehicleCamera:onActivate()
  if self.cameraNode == nil then
    return
  end
  local savegame = savegame:getValue("activeSuspensionCamera")
  self:onActiveCameraSuspensionSettingChanged(...)
  self.isActivated = true
  if not g_currentMission.isReloadingVehicles then
    if self.resetCameraOnVehicleSwitch == nil then
      local dt = dt:getValue("resetCamera")
      -- if v1 then goto L34 end
    end
    if self.resetCameraOnVehicleSwitch then
      self:resetCamera()
    end
  end
  setCamera(self.cameraNode)
  if self.shadowFocusBoxNode then
    setShadowFocusBox(self.shadowFocusBoxNode)
  end
  local dt, key, savegame = getWorldRotation(self.rotateNode)
  local cameraIndex = MathUtil.isNan(dt)
  if not cameraIndex then
    cameraIndex = MathUtil.isNan(key)
    if not cameraIndex then
      cameraIndex = MathUtil.isNan(savegame)
      -- if not v4 then goto L73 end
    end
  end
  self:resetCamera()
  if 0 < self.positionSmoothingParameter then
    local cameraIndex, v5, v6 = getWorldTranslation(self.rotateNode)
    self.lookAtPosition[1] = cameraIndex
    self.lookAtPosition[2] = v5
    self.lookAtPosition[3] = v6
    self.lookAtLastTargetPosition[1] = cameraIndex
    self.lookAtLastTargetPosition[2] = v5
    self.lookAtLastTargetPosition[3] = v6
    local v7, v8, camParent = getWorldTranslation(self.cameraPositionNode)
    self.position[1] = v7
    self.position[2] = v8
    self.position[3] = camParent
    self.lastTargetPosition[1] = v7
    self.lastTargetPosition[2] = v8
    self.lastTargetPosition[3] = camParent
    local v12 = self:getTiltDirectionOffset()
    local v10, v11, v12 = localDirectionToWorld(self.rotateNode, v12, 1, 0)
    self.upVector[1] = v10
    self.upVector[2] = v11
    self.upVector[3] = v12
    self.lastUpVector[1] = v10
    self.lastUpVector[2] = v11
    self.lastUpVector[3] = v12
    setRotation(self.cameraNode, dt, key, savegame)
    setTranslation(self.cameraNode, v7, v8, camParent)
  end
  self.lastInputValues = {upDown = 0, leftRight = 0}
  cameraIndex, v5 = cameraIndex:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, self, VehicleCamera.actionEventLookUpDown, false, false, true, true, nil)
  v6, v7 = v6:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, self, VehicleCamera.actionEventLookLeftRight, false, false, true, true, nil)
  v8:setActionEventTextVisibility(v5, false)
  v8:setActionEventTextVisibility(v7, false)
  ObjectChangeUtil.setObjectChanges(self.changeObjects, true, self.vehicle, self.vehicle.setMovingToolDirty)
  if g_touchHandler ~= nil then
    v8 = v8:registerGestureListener(TouchHandler.GESTURE_PINCH, VehicleCamera.touchEventZoomInOut, self)
    self.touchListenerPinch = v8
    v8 = v8:registerGestureListener(TouchHandler.GESTURE_AXIS_Y, VehicleCamera.touchEventLookUpDown, self)
    self.touchListenerY = v8
    v8 = v8:registerGestureListener(TouchHandler.GESTURE_AXIS_X, VehicleCamera.touchEventLookLeftRight, self)
    self.touchListenerX = v8
  end
end
function VehicleCamera:setLODDebugState(dt, key)
  if dt ~= self.lodDebugMode then
    self.lodDebugMode = dt
    if self.lodDebugMode then
      self.transMaxOrig = self.transMax
      self.transMax = 350
      if not key then
      end
      self.loadDebugZoom = savegame
      return
    end
    self.transMax = self.transMaxOrig
    self.zoomTarget = self.zoomDefault
    self.zoom = self.zoomDefault
    setFovY(self.cameraNode, self.fovY)
  end
end
function VehicleCamera:setCameraYDebugState(dt, key)
  if dt ~= self.cameraYDebugMode then
    self.cameraYDebugMode = dt
    if self.cameraYDebugMode then
      local cameraIndex = tonumber(key)
      self.cameraYDebugHeight = cameraIndex or 5
      self.cameraYDebugZoom = self.zoom
      self.rotX = 0
      self.rotY = math.pi * 0.5
      self.rotZ = 0
      setRotation(self.rotateNode, self.rotX, self.rotY, self.rotZ)
      setIsOrthographic(self.cameraNode, true)
      local v6 = tonumber(key)
      setOrthographicHeight(self.cameraNode, v6 or 5)
      self.isRotatable = false
      savegame:setManipulatedParams(0)
      savegame:setIsVisible(false)
      return
    end
    self.isRotatable = true
    setIsOrthographic(self.cameraNode, false)
    if self == g_activeVehicleCamera then
      savegame:setManipulatedParams(DepthOfFieldManager.DEFAULT_VALUES[1])
      savegame:setIsVisible(true)
    end
  end
end
function VehicleCamera:onDeactivate()
  self.isActivated = false
  setShadowFocusBox(0)
  dt:removeActionEventsByTarget(self)
  ObjectChangeUtil.setObjectChanges(self.changeObjects, false, self.vehicle, self.vehicle.setMovingToolDirty)
  if g_touchHandler ~= nil then
    dt:removeGestureListener(self.touchListenerPinch)
    dt:removeGestureListener(self.touchListenerY)
    dt:removeGestureListener(self.touchListenerX)
  end
end
function VehicleCamera:actionEventLookUpDown(actionName, inputValue, callbackState, isAnalog, isMouse)
  if isMouse then
  else
  end
  self.lastInputValues.upDown = self.lastInputValues.upDown + inputValue
end
function VehicleCamera:touchEventLookUpDown(value)
  if self.isActivated then
    VehicleCamera.actionEventLookUpDown(self, nil, value * g_screenHeight / g_screenWidth * -75, nil, nil, false)
  end
end
function VehicleCamera:touchEventZoomInOut(value)
  if self.isActivated then
    self:zoomSmoothly(value * 15)
  end
end
function VehicleCamera:touchEventLookLeftRight(value)
  if self.isActivated then
    VehicleCamera.actionEventLookLeftRight(self, nil, value * g_screenWidth / g_screenHeight * 75, nil, nil, false)
  end
end
function VehicleCamera:actionEventLookLeftRight(actionName, inputValue, callbackState, isAnalog, isMouse)
  if isMouse then
  else
  end
  self.lastInputValues.leftRight = self.lastInputValues.leftRight + inputValue
end
function VehicleCamera:resetCamera()
  self.rotX = self.origRotX
  self.rotY = self.origRotY
  self.rotZ = self.origRotZ
  self.transX = self.origTransX
  self.transY = self.origTransY
  self.transZ = self.origTransZ
  local transLength = MathUtil.vector3Length(self.origTransX, self.origTransY, self.origTransZ)
  self.zoom = transLength
  self.zoomTarget = transLength
  self.zoomLimitedTarget = -1
  self:updateRotateNodeRotation()
  setTranslation(self.cameraPositionNode, self.transX, self.transY, self.transZ)
  if 0 < self.positionSmoothingParameter then
    local key, savegame, cameraIndex = getWorldTranslation(self.rotateNode)
    self.lookAtPosition[1] = key
    self.lookAtPosition[2] = savegame
    self.lookAtPosition[3] = cameraIndex
    local v5, v6, v7 = getWorldTranslation(self.cameraPositionNode)
    self.position[1] = v5
    self.position[2] = v6
    self.position[3] = v7
    self:setSeparateCameraPose()
  end
end
function VehicleCamera:updateRotateNodeRotation()
  if self.rotYSteeringRotSpeed ~= nil and self.rotYSteeringRotSpeed ~= 0 and self.vehicle.spec_articulatedAxis ~= nil and self.vehicle.spec_articulatedAxis.interpolatedRotatedTime ~= nil then
  end
  if self.useWorldXZRotation == nil then
    local key = key:getValue("useWorldCamera")
    -- if v2 then goto L48 end
  end
  if self.useWorldXZRotation then
    local v6 = getParent(self.rotateNode)
    local v5, v6, v7 = localDirectionToWorld(v6, 0, 0, 1)
    local v10 = math.sqrt(v5 * v5 + v7 * v7)
    v10 = math.cos(self.rotX)
    local v13 = math.cos(dt)
    local v14 = math.sin(dt)
    local v11 = math.sin(self.rotX)
    local v12 = math.cos(self.rotX)
    local v16 = math.sin(dt)
    v16 = math.cos(dt)
    v13 = getParent(self.rotateNode)
    v12, v13, v14 = worldDirectionToLocal(v13, v10 * (v13 * v5 * 1 / v10 + v14 * v7 * 1 / v10), -v11, v12 * (-v16 * v5 * 1 / v10 + v16 * v7 * 1 / v10))
    v13 = getParent(self.rotateNode)
    v12, v13, v14 = worldDirectionToLocal(v13, 0, 1, 0)
    v13 = MathUtil.dotProduct(v12, v13, v14, v12, v13, v14)
    v12 = math.abs(...)
    v16 = MathUtil.vector3Length(v12, v13, v14)
    local v15 = MathUtil.vector3Length(v12, v13, v14)
    if 0.99 * v16 * v15 < v12 then
      setRotation(self.rotateNode, self.rotX, dt, self.rotZ)
      return
    end
    setDirection(self.rotateNode, camParent, v10, v11, key, savegame, cameraIndex)
    return
  end
  setRotation(self.rotateNode, self.rotX, dt, self.rotZ)
end
function VehicleCamera:setSeparateCameraPose()
  if self.rotateNode ~= self.cameraPositionNode then
    local cameraIndex, v5, v6 = unpack(self.upVector)
    if cameraIndex == 0 and v5 == 0 and v6 == 0 then
    end
    local v7 = math.abs(dt)
    if v7 < 0.001 then
      v7 = math.abs(savegame)
      if v7 < 0.001 then
      end
    end
    setDirection(self.cameraNode, dt, key, savegame, cameraIndex, v5, v6)
  else
    local dt, key, savegame = localDirectionToWorld(self.rotateNode, 0, 0, 1)
    v6 = self:getTiltDirectionOffset()
    cameraIndex, v5, v6 = localDirectionToWorld(self.rotateNode, v6, 1, 0)
    setDirection(self.cameraNode, dt, key, savegame, cameraIndex, v5, v6)
  end
  setTranslation(self.cameraNode, self.position[1], self.position[2], self.position[3])
end
function VehicleCamera:getTiltDirectionOffset()
  if not self.isInside then
    local dt = dt:getValue(GameSettings.SETTING.CAMERA_TILTING)
    if dt then
      dt = getHasTouchpad()
      if dt then
        local dt, key, savegame = getGravityDirection()
        return MathUtil.getHorizontalRotationFromDeviceGravity(dt, key, savegame)
      end
    end
  end
  return 0
end
function VehicleCamera:getCollisionDistance()
  if not self.isCollisionEnabled then
    return false, nil, nil, nil, nil, nil
  end
  local key, savegame, cameraIndex = localToWorld(self.rotateNode, self.transDirX * self.zoomTarget, self.transDirY * self.zoomTarget, self.transDirZ * self.zoomTarget)
  for v14, v15 in ipairs(self.raycastNodes) do
    local v16, v17, v18 = getWorldTranslation(v15)
    local v22 = MathUtil.vector3Length(key - v16, savegame - v17, cameraIndex - v18)
    while true do
      if not (v22 - v26 > 0) then
        break
      end
      self.raycastDistance = 0
      raycastClosest(v23, v24, v25, v19, v20, v21, "raycastCallback", v22 - v26, self, dt, true)
      if not (self.raycastDistance ~= 0) then
        break
      end
      v28 = MathUtil.dotProduct(self.normalX, self.normalY, self.normalZ, v19, v20, v21)
      v31 = v31:getNodeObject(self.raycastTransformId)
      if v31 ~= nil then
        v32 = v32:getChildVehicles()
        -- TODO: structure LOP_FORNPREP (pc 129, target 171)
        if v31 ~= v32[1] then
          if v31.getIsAttachedTo ~= nil then
            v37 = v31:getIsAttachedTo(v32[1])
          end
          if v36.getIsAttachedTo ~= nil then
            v38 = v36:getIsAttachedTo(v31)
          end
          if not v31.dynamicMountObject and not v31.tensionMountObject then
          end
          if v39 ~= nil and v39 ~= v36 then
            -- if v39.rootVehicle ~= v36 then goto L169 end
          end
        end
        if not v29 then
          -- TODO: structure LOP_FORNLOOP (pc 170, target 130)
        end
      end
      v32 = getHasClassId(self.raycastTransformId, ClassIds.SHAPE)
      if v32 then
        v32 = getSplitType(self.raycastTransformId)
        if v32 ~= 0 then
        end
      end
      v32 = getHasTrigger(self.raycastTransformId)
      if v32 then
      end
      if not v29 and v31 ~= self.vehicle then
        -- if not v30 then goto L212 end
      end
      if 0 < v28 then
        v32 = math.max(v27, v26)
        -- goto L245  (LOP_JUMP +33)
        if not (v15 == self.rotateNode) then
          break
        end
        v32 = getRigidBodyType(self.raycastTransformId)
        if v32 == RigidBodyType.STATIC then
        else
          v32 = math.max(self.transMin, v26)
        end
        break
      end
      continue
      break
    end
    if not v5 then
      break
    end
  end
  return v5, v6, v7, v8, camParent, v10
end
function VehicleCamera:onActiveCameraSuspensionSettingChanged(newState)
  if self.suspensionNode ~= nil and self.lastActiveCameraSuspensionSetting ~= newState then
    if newState then
      link(self.cameraSuspensionParentNode, self.cameraPositionNode)
    else
      link(self.cameraBaseParentNode, self.cameraPositionNode)
    end
    self.lastActiveCameraSuspensionSetting = newState
  end
end
function VehicleCamera:onCameraCollisionDetectionSettingChanged(newState)
  self.isCollisionEnabled = newState
end
function VehicleCamera:registerCameraXMLPaths(dt)
  self:register(XMLValueType.NODE_INDEX, dt .. "#node", "Camera node")
  self:register(XMLValueType.BOOL, dt .. "#rotatable", "Camera is rotatable", false)
  self:register(XMLValueType.BOOL, dt .. "#limit", "Has limits", false)
  self:register(XMLValueType.FLOAT, dt .. "#rotMinX", "Min. X rotation")
  self:register(XMLValueType.FLOAT, dt .. "#rotMaxX", "Max. X rotation")
  self:register(XMLValueType.FLOAT, dt .. "#transMin", "Min. Z translation")
  self:register(XMLValueType.FLOAT, dt .. "#transMax", "Max. Z translation")
  self:register(XMLValueType.BOOL, dt .. "#isInside", "Is camera inside. Used for camera smoothing and fallback/default value for 'useOutdoorSounds'", false)
  self:register(XMLValueType.BOOL, dt .. "#allowHeadTracking", "Allow head tracking", "isInside value")
  self:register(XMLValueType.NODE_INDEX, dt .. "#shadowFocusBox", "Shadow focus box")
  self:register(XMLValueType.BOOL, dt .. "#useOutdoorSounds", "Use outdoor sounds", "false for 'isInside' cameras, otherwise true")
  self:register(XMLValueType.NODE_INDEX, dt .. "#rotateNode", "Rotate node")
  self:register(XMLValueType.VECTOR_ROT, dt .. "#rotation", "Camera rotation")
  self:register(XMLValueType.VECTOR_TRANS, dt .. "#translation", "Camera translation")
  self:register(XMLValueType.BOOL, dt .. "#useMirror", "Use mirrors", false)
  self:register(XMLValueType.BOOL, dt .. "#useWorldXZRotation", "Use world XZ rotation")
  self:register(XMLValueType.BOOL, dt .. "#resetCameraOnVehicleSwitch", "Reset camera on vehicle switch")
  self:register(XMLValueType.INT, dt .. "#suspensionNodeIndex", "Index of seat suspension node")
  self:register(XMLValueType.BOOL, dt .. "#useDefaultPositionSmoothing", "Use default position smoothing parameters", true)
  self:register(XMLValueType.FLOAT, dt .. "#positionSmoothingParameter", "Position smoothing parameter", "0.128 for indoor / 0.016 for outside")
  self:register(XMLValueType.FLOAT, dt .. "#lookAtSmoothingParameter", "Look at smoothing parameter", "0.176 for indoor / 0.022 for outside")
  self:register(XMLValueType.ANGLE, dt .. "#rotYSteeringRotSpeed", "Rot Y steering rotation speed", 0)
  self:register(XMLValueType.NODE_INDEX, dt .. ".raycastNode(?)#node", "Raycast node")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, dt)
end
function VehicleCamera:registerCameraSavegameXMLPaths(dt)
  self:register(XMLValueType.VECTOR_ROT, dt .. "#rotation", "Camera rotation")
  self:register(XMLValueType.VECTOR_TRANS, dt .. "#translation", "Camera translation")
  self:register(XMLValueType.FLOAT, dt .. "#zoom", "Camera zoom")
  self:register(XMLValueType.FLOAT, dt .. "#fovY", "Custom Field of View Y")
  self:register(XMLValueType.BOOL, dt .. "#lodDebugActive", "LOD Debug Mode Active")
  self:register(XMLValueType.FLOAT, dt .. "#lodDebugZoom", "LOD Debug Mode Zoom Ref")
  self:register(XMLValueType.BOOL, dt .. "#cameraYDebugActive", "Camera Y Debug Mode Active")
  self:register(XMLValueType.FLOAT, dt .. "#cameraYDebugHeight", "Camera Y Debug Mode orthographic height")
end
function VehicleCamera.consoleCommandLODDebug()
  if g_activeVehicleCamera ~= nil then
    v0:setLODDebugState(not g_activeVehicleCamera.lodDebugMode)
    local key = key:getName()
    return string.format("(%s) Vehicle Camera LOD Debug: %s", key, g_activeVehicleCamera.lodDebugMode)
  end
  return "Enter a vehicle first!"
end
function VehicleCamera.consoleCommandCameraYDebug(v0)
  if g_activeVehicleCamera ~= nil then
    dt:setCameraYDebugState(not g_activeVehicleCamera.cameraYDebugMode, v0)
    local savegame = savegame:getName()
    return string.format("(%s) Vehicle Camera Y Debug: %s", savegame, g_activeVehicleCamera.cameraYDebugMode)
  end
  return "Enter a vehicle first!"
end
