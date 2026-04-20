-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SpeedRotatingParts = {DEFAULT_MAX_UPDATE_DISTANCE = 50, SPEED_ROTATING_PART_XML_KEY = "vehicle.speedRotatingParts.speedRotatingPart(?)"}
function SpeedRotatingParts.prerequisitesPresent(v0)
  return true
end
function SpeedRotatingParts.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SpeedRotatingParts")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#node", "Speed rotating part node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#shaderNode", "Speed rotating part shader node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#useRotation", "Use shader rotation", true)
  Vehicle.xmlSchema:register(XMLValueType.STRING, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#vtxPositionArrayFilename", "Path to vertex position filename (If this is set the shader variation 'vtxRotate_colorMask' is forced)")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#scrollScale", "Shader scroll speed")
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#shaderComponent", "Shader parameter component to control", "Default based on available shader attributes")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#scrollLength", "Shader scroll length")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#driveNode", "Drive node to apply x drive", "speedRotatingPart#node")
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#refComponentIndex", "Reference component index")
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#wheelIndex", "Reference wheel index")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#dirRefNode", "Direction reference node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#dirFrameNode", "Direction reference frame")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#alignDirection", "Align direction", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#applySteeringAngle", "Apply steering angle", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#useWheelReprTranslation", "Apply wheel repr translation", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#updateXDrive", "Update X drive", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#versatileYRot", "Versatile Y rot", false)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#minYRot", "Min. Y rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#maxYRot", "Max. Y rotation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#wheelScale", "Wheel scale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#radius", "Radius", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#onlyActiveWhenLowered", "Only active if lowered", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#stopIfNotActive", "Stop if not active", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#fadeOutTime", "Fade out time", 3)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#activationSpeed", "Min. speed for activation", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#speedReferenceNode", "Speed reference node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#hasTireTracks", "Has Tire Tracks", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#tireTrackAtlasIndex", "Index on tire track atlas", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#tireTrackWidth", "Width of tire tracks", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#tireTrackInverted", "Tire track texture inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#maxUpdateDistance", "Max. distance from current camera to vehicle to update part", SpeedRotatingParts.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SpeedRotatingParts.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadSpeedRotatingPartFromXML", SpeedRotatingParts.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsSpeedRotatingPartActive", SpeedRotatingParts.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerFunction(vehicleType, "getSpeedRotatingPartDirection", SpeedRotatingParts.getSpeedRotatingPartDirection)
  SpecializationUtil.registerFunction(vehicleType, "updateSpeedRotatingPart", SpeedRotatingParts.updateSpeedRotatingPart)
end
function SpeedRotatingParts.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "validateWashableNode", SpeedRotatingParts.validateWashableNode)
end
function SpeedRotatingParts.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SpeedRotatingParts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", SpeedRotatingParts)
end
function SpeedRotatingParts:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.speedRotatingParts.speedRotatingPart(0)#index", "vehicle.speedRotatingParts.speedRotatingPart(0)#node")
  self.spec_speedRotatingParts.individualUpdateDistance = false
  self.spec_speedRotatingParts.speedRotatingParts = {}
  while true do
    v5 = string.format("vehicle.speedRotatingParts.speedRotatingPart(%d)", v4)
    v6 = v6:hasProperty(v5)
    if not v6 then
      break
    end
    v7 = self:loadSpeedRotatingPartFromXML({}, self.xmlFile, v5)
    if v7 then
      table.insert(v2.speedRotatingParts, {})
      if v3 ~= nil and v3 ~= {}.maxUpdateDistance then
        v2.individualUpdateDistance = true
      end
    end
  end
  if not v3 then
  end
  v2.maxUpdateDistance = v5
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
  if #v2.speedRotatingParts == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", SpeedRotatingParts)
    SpecializationUtil.removeEventListener(self, "onWriteStream", SpeedRotatingParts)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", SpeedRotatingParts)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", SpeedRotatingParts)
    SpecializationUtil.removeEventListener(self, "onUpdate", SpeedRotatingParts)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", SpeedRotatingParts)
  end
end
function SpeedRotatingParts:onReadStream(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 7, target 27)
  if self.spec_speedRotatingParts.speedRotatingParts[1].versatileYRot then
    local yRot = streamReadUIntN(streamId, 9)
    self.spec_speedRotatingParts.speedRotatingParts[1].steeringAngle = yRot / 511 * math.pi * 2
  end
  -- TODO: structure LOP_FORNLOOP (pc 26, target 8)
end
function SpeedRotatingParts:onWriteStream(streamId, connection)
  -- TODO: structure LOP_FORNPREP (pc 7, target 40)
  if self.spec_speedRotatingParts.speedRotatingParts[1].versatileYRot then
    local v12 = math.floor(self.spec_speedRotatingParts.speedRotatingParts[1].steeringAngle % math.pi * 2 / math.pi * 2 * 511)
    local v11 = MathUtil.clamp(v12, 0, 511)
    streamWriteUIntN(streamId, v11, 9)
  end
  -- TODO: structure LOP_FORNLOOP (pc 39, target 8)
end
function SpeedRotatingParts:onReadUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local hasUpdate = streamReadBool(streamId)
    if hasUpdate then
      -- TODO: structure LOP_FORNPREP (pc 15, target 35)
      if self.spec_speedRotatingParts.speedRotatingParts[1].versatileYRot then
        local yRot = streamReadUIntN(streamId, 9)
        self.spec_speedRotatingParts.speedRotatingParts[1].steeringAngle = yRot / 511 * math.pi * 2
      end
      -- TODO: structure LOP_FORNLOOP (pc 34, target 16)
    end
  end
end
function SpeedRotatingParts:onWriteUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v8 = bitAND(dirtyMask, self.spec_speedRotatingParts.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      -- TODO: structure LOP_FORNPREP (pc 25, target 58)
      if v4.speedRotatingParts[1].versatileYRot then
        local v13 = math.floor(v4.speedRotatingParts[1].steeringAngle % math.pi * 2 / math.pi * 2 * 511)
        local v12 = MathUtil.clamp(v13, 0, 511)
        streamWriteUIntN(streamId, v12, 9)
      end
      -- TODO: structure LOP_FORNLOOP (pc 57, target 26)
    end
  end
end
function SpeedRotatingParts:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if not self.spec_speedRotatingParts.individualUpdateDistance then
    -- if v0.currentUpdateDistance >= v0.spec_speedRotatingParts.maxUpdateDistance then goto L47 end
  end
  -- TODO: structure LOP_FORNPREP (pc 16, target 47)
  if v5.individualUpdateDistance then
    -- if v0.currentUpdateDistance >= v5.speedRotatingParts[1].maxUpdateDistance then goto L46 end
  end
  if not v9.isActive then
    -- cmp-jump LOP_JUMPXEQKN R10 aux=0x7 -> L46
    -- if v9.stopIfNotActive then goto L46 end
  end
  self:updateSpeedRotatingPart(v9, dt, v9.isActive)
  -- TODO: structure LOP_FORNLOOP (pc 46, target 17)
end
function SpeedRotatingParts:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if not self.spec_speedRotatingParts.individualUpdateDistance then
    -- if v0.currentUpdateDistance >= v0.spec_speedRotatingParts.maxUpdateDistance then goto L36 end
  end
  -- TODO: structure LOP_FORNPREP (pc 16, target 36)
  if v5.individualUpdateDistance then
    -- if v0.currentUpdateDistance >= v5.speedRotatingParts[1].maxUpdateDistance then goto L35 end
  end
  local v10 = self:getIsSpeedRotatingPartActive(v9)
  v9.isActive = v10
  -- TODO: structure LOP_FORNLOOP (pc 35, target 17)
end
function SpeedRotatingParts:loadSpeedRotatingPartFromXML(speedRotatingPart, xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  speedRotatingPart.repr = v4
  v4 = xmlFile:getValue(key .. "#shaderNode", nil, self.components, self.i3dMappings)
  speedRotatingPart.shaderNode = v4
  speedRotatingPart.shaderParameterName = "offsetUV"
  speedRotatingPart.shaderParameterPrevName = nil
  speedRotatingPart.shaderParameterComponent = 3
  speedRotatingPart.shaderParameterSpeedScale = 1
  speedRotatingPart.shaderParameterValues = {0, 0, 0, 0}
  if speedRotatingPart.shaderNode ~= nil then
    v4 = xmlFile:getValue(key .. "#useRotation", true)
    speedRotatingPart.useShaderRotation = v4
    v4 = xmlFile:getValue(key .. "#scrollScale", "1 0", true)
    speedRotatingPart.scrollScale = v4
    v4 = xmlFile:getValue(key .. "#scrollLength")
    speedRotatingPart.scrollLength = v4
    v4 = xmlFile:getValue(key .. "#vtxPositionArrayFilename")
    if v4 ~= nil then
      local v5 = Utils.getFilename(v4, self.baseDirectory)
      v5 = getMaterial(speedRotatingPart.shaderNode, 0)
      local v6 = getMaterialCustomShaderVariation(v5)
      if v6 ~= "vtxRotate_colorMask" then
        local v7 = setMaterialCustomShaderVariation(v5, "vtxRotate_colorMask", false)
        v7 = setMaterialCustomMapFromFile(v7, "mTrackArray", v5, true, false, true)
      else
        v7 = setMaterialCustomMapFromFile(v5, "mTrackArray", v5, true, false, false)
      end
      setMaterial(speedRotatingPart.shaderNode, v5, 0)
    end
    v5 = getHasShaderParameter(speedRotatingPart.shaderNode, "rotationAngle")
    if v5 then
      speedRotatingPart.shaderParameterName = "rotationAngle"
      speedRotatingPart.shaderParameterPrevName = "prevRotationAngle"
      speedRotatingPart.shaderParameterComponent = 1
      speedRotatingPart.shaderParameterSpeedScale = -1
    end
    v5 = getHasShaderParameter(speedRotatingPart.shaderNode, "scrollPosition")
    if v5 then
      speedRotatingPart.shaderParameterName = "scrollPosition"
      speedRotatingPart.shaderParameterPrevName = "prevScrollPosition"
      speedRotatingPart.shaderParameterComponent = 1
      speedRotatingPart.shaderParameterSpeedScale = 1
    end
    v5 = xmlFile:getValue(key .. "#shaderComponent", speedRotatingPart.shaderParameterComponent)
    speedRotatingPart.shaderParameterComponent = v5
  end
  if speedRotatingPart.repr == nil and speedRotatingPart.shaderNode == nil then
    local v8 = getXMLString(xmlFile.handle, key .. "#node")
    if not v8 then
      v8 = getXMLString(xmlFile.handle, key .. "#shaderNode")
    end
    v7 = v7(v8)
    v4(v5, v6, v7, key)
    return false
  end
  v4 = xmlFile:getValue(key .. "#driveNode", speedRotatingPart.repr, self.components, self.i3dMappings)
  speedRotatingPart.driveNode = v4
  v4 = xmlFile:getValue(key .. "#refComponentIndex")
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L261
    speedRotatingPart.componentNode = self.components[v4].node
  else
    v5 = Utils.getNoNil(speedRotatingPart.driveNode, speedRotatingPart.shaderNode)
    v6 = self:getParentComponent(v5)
    speedRotatingPart.componentNode = v6
  end
  speedRotatingPart.xDrive = 0
  v5 = xmlFile:getValue(key .. "#wheelIndex")
  if v5 ~= nil then
    if self.getWheels == nil then
      Logging.xmlWarning(self.xmlFile, "wheelIndex for speedRotatingPart '%s' given, but no wheels loaded/defined", key)
    else
      v6 = self:getWheels()
      if v6[v5] == nil then
        local v11 = tostring(v5)
        Logging.xmlWarning(self.xmlFile, "Invalid wheel index '%s' for speedRotatingPart '%s'", v11, key)
        return false
      end
      if not v7.isSynchronized then
        v11 = tostring(v5)
        Logging.xmlWarning(self.xmlFile, "Referenced wheel with index '%s' for speedRotatingPart '%s' is not synchronized in multiplayer", v11, key)
      end
      speedRotatingPart.wheel = v7
      speedRotatingPart.lastWheelXRot = nil
      v8 = xmlFile:getValue(key .. "#hasTireTracks", false)
      speedRotatingPart.hasTireTracks = v8
      v8 = xmlFile:getValue(key .. "#tireTrackAtlasIndex", 0)
      speedRotatingPart.tireTrackAtlasIndex = v8
      v8 = xmlFile:getValue(key .. "#tireTrackWidth", 0.5)
      speedRotatingPart.tireTrackWidth = v8
      v8 = xmlFile:getValue(key .. "#tireTrackInverted", false)
      speedRotatingPart.tireTrackInverted = v8
      if speedRotatingPart.hasTireTracks and Platform.gameplay.wheelTireTracks then
        local v9 = self:addTireTrackNode(v7, true, speedRotatingPart.componentNode, speedRotatingPart.driveNode, speedRotatingPart.tireTrackAtlasIndex, speedRotatingPart.tireTrackWidth, v7.radius, 0, speedRotatingPart.tireTrackInverted, function()
          return self:getIsSpeedRotatingPartActive(u1)
        end)
        speedRotatingPart.tireTrackNodeIndex = v9
      end
    end
  end
  v6 = xmlFile:getValue(key .. "#dirRefNode", nil, self.components, self.i3dMappings)
  speedRotatingPart.dirRefNode = v6
  v6 = xmlFile:getValue(key .. "#dirFrameNode", nil, self.components, self.i3dMappings)
  speedRotatingPart.dirFrameNode = v6
  v6 = xmlFile:getValue(key .. "#alignDirection", false)
  speedRotatingPart.alignDirection = v6
  v6 = xmlFile:getValue(key .. "#applySteeringAngle", false)
  speedRotatingPart.applySteeringAngle = v6
  v6 = xmlFile:getValue(key .. "#useWheelReprTranslation", true)
  speedRotatingPart.useWheelReprTranslation = v6
  v6 = xmlFile:getValue(key .. "#updateXDrive", true)
  speedRotatingPart.updateXDrive = v6
  v6 = xmlFile:getValue(key .. "#versatileYRot", false)
  speedRotatingPart.versatileYRot = v6
  if speedRotatingPart.versatileYRot and speedRotatingPart.repr == nil then
    Logging.xmlWarning(self.xmlFile, "Versatile speedRotationPart '%s' does not support shaderNodes", key)
    return false
  end
  v6 = xmlFile:getValue(key .. "#minYRot")
  speedRotatingPart.minYRot = v6
  v6 = xmlFile:getValue(key .. "#maxYRot")
  speedRotatingPart.maxYRot = v6
  speedRotatingPart.steeringAngle = 0
  speedRotatingPart.steeringAngleSent = 0
  v6 = xmlFile:getValue(key .. "#speedReferenceNode", nil, self.components, self.i3dMappings)
  speedRotatingPart.speedReferenceNode = v6
  if speedRotatingPart.speedReferenceNode ~= nil and speedRotatingPart.speedReferenceNode == speedRotatingPart.driveNode then
    Logging.xmlWarning(self.xmlFile, "Ignoring speedRotationPart '%s' because speedReferenceNode is identical with driveNode. Need to be different!", key)
    return false
  end
  v6 = xmlFile:getValue(key .. "#wheelScale")
  speedRotatingPart.wheelScale = v6
  if speedRotatingPart.wheelScale == nil then
    if speedRotatingPart.wheel ~= nil and speedRotatingPart.speedReferenceNode == nil then
    end
    v9 = xmlFile:getValue(key .. "#radius", v7)
    speedRotatingPart.wheelScale = v6 / v9
  end
  speedRotatingPart.wheelScaleBackup = speedRotatingPart.wheelScale
  v6 = xmlFile:getValue(key .. "#onlyActiveWhenLowered", false)
  speedRotatingPart.onlyActiveWhenLowered = v6
  v6 = xmlFile:getValue(key .. "#stopIfNotActive", false)
  speedRotatingPart.stopIfNotActive = v6
  v7 = xmlFile:getValue(key .. "#fadeOutTime", 3)
  speedRotatingPart.fadeOutTime = v7 * 1000
  v6 = xmlFile:getValue(key .. "#activationSpeed", 1)
  speedRotatingPart.activationSpeed = v6
  speedRotatingPart.lastSpeed = 0
  speedRotatingPart.lastDir = 1
  v6 = xmlFile:getValue(key .. "#maxUpdateDistance", SpeedRotatingParts.DEFAULT_MAX_UPDATE_DISTANCE)
  speedRotatingPart.maxUpdateDistance = v6
  if self.isServer and speedRotatingPart.versatileYRot then
    speedRotatingPart.maxUpdateDistance = math.huge
  end
  return true
end
function SpeedRotatingParts:getIsSpeedRotatingPartActive(speedRotatingPart)
  if speedRotatingPart.onlyActiveWhenLowered then
    if self.getIsLowered ~= nil then
      local v2 = self:getIsLowered()
      if not v2 then
        return false
      end
    end
    return true
  end
  return true
end
function SpeedRotatingParts.getSpeedRotatingPartDirection(v0, v1)
  return 1
end
function SpeedRotatingParts:updateSpeedRotatingPart(speedRotatingPart, dt, isPartActive)
  if speedRotatingPart.repr ~= nil then
    if not self.isServer then
      -- if v1.versatileYRot then goto L26 end
    end
    local v8, v9, v10 = getRotation(speedRotatingPart.repr)
    speedRotatingPart.steeringAngle = v9
  end
  if isPartActive then
    if speedRotatingPart.speedReferenceNode ~= nil then
      local v7, v8, v9 = getWorldTranslation(speedRotatingPart.speedReferenceNode)
      if speedRotatingPart.lastPosition == nil then
        speedRotatingPart.lastPosition = {v7, v8, v9}
      end
      local v10, v11, v12 = worldDirectionToLocal(speedRotatingPart.speedReferenceNode, v7 - speedRotatingPart.lastPosition[1], v8 - speedRotatingPart.lastPosition[2], v9 - speedRotatingPart.lastPosition[3])
      local v13 = MathUtil.vector3Length(v10, v11, v12)
      if 0.001 < v12 then
      elseif v12 < -0.001 then
      else
      end
      speedRotatingPart.lastPosition[1] = v7
      speedRotatingPart.lastPosition[2] = v8
      speedRotatingPart.lastPosition[3] = v9
    elseif speedRotatingPart.wheel ~= nil then
      if speedRotatingPart.lastWheelXRot == nil then
        speedRotatingPart.lastWheelXRot = speedRotatingPart.wheel.netInfo.xDrive
      end
      if math.pi < speedRotatingPart.wheel.netInfo.xDrive - speedRotatingPart.lastWheelXRot then
      elseif speedRotatingPart.wheel.netInfo.xDrive - speedRotatingPart.lastWheelXRot < -math.pi then
      end
      v8 = math.abs(v7)
      v8 = MathUtil.sign(v7)
      speedRotatingPart.lastWheelXRot = speedRotatingPart.wheel.netInfo.xDrive
      -- if v1.versatileYRot then goto L179 end
      v9, v10, v11 = getRotation(speedRotatingPart.wheel.repr)
      speedRotatingPart.steeringAngle = v10
    else
    end
    speedRotatingPart.brakeForce = v5 * dt / speedRotatingPart.fadeOutTime
  else
    v7 = math.max(v5 - speedRotatingPart.brakeForce, 0)
    speedRotatingPart.lastWheelXRot = nil
  end
  speedRotatingPart.lastSpeed = v5
  speedRotatingPart.lastDir = v6
  if speedRotatingPart.updateXDrive then
    v13 = self:getSpeedRotatingPartDirection(speedRotatingPart)
    speedRotatingPart.xDrive = (speedRotatingPart.xDrive + v5 * v6 * v13 * speedRotatingPart.wheelScale) % 2 * math.pi
  end
  if speedRotatingPart.versatileYRot then
    -- if 0.0017 >= v5 then goto L403 end
    -- if not v0.isServer then goto L403 end
    v7 = self:getLastSpeed(true)
    -- if v1.activationSpeed >= v7 then goto L403 end
    v7, v8, v9 = localToLocal(speedRotatingPart.repr, speedRotatingPart.componentNode, 0, 0, 0)
    v10 = Utils.getVersatileRotation(speedRotatingPart.repr, speedRotatingPart.componentNode, dt, v7, v8, v9, speedRotatingPart.steeringAngle, speedRotatingPart.minYRot, speedRotatingPart.maxYRot)
    speedRotatingPart.steeringAngle = v10
    v10 = math.floor(speedRotatingPart.steeringAngle % math.pi * 2 / math.pi * 2 * 511)
    -- if v10 == v1.steeringAngleSent then goto L403 end
    speedRotatingPart.steeringAngleSent = v10
    self:raiseDirtyFlags(v4.dirtyFlag)
  else
    if speedRotatingPart.componentNode ~= nil and speedRotatingPart.dirRefNode ~= nil and not speedRotatingPart.alignDirection then
      v7 = Utils.getYRotationBetweenNodes(speedRotatingPart.componentNode, speedRotatingPart.dirRefNode)
      speedRotatingPart.steeringAngle = v7
      v7, v8, v9 = localToLocal(speedRotatingPart.driveNode, speedRotatingPart.wheel.driveNode, 0, 0, 0)
      setTranslation(speedRotatingPart.driveNode, 0, v8, 0)
    end
    if speedRotatingPart.dirRefNode ~= nil and speedRotatingPart.alignDirection then
      v7, v8, v9 = localDirectionToWorld(speedRotatingPart.dirFrameNode, 0, 1, 0)
      v10, v11, v12 = localDirectionToWorld(speedRotatingPart.dirRefNode, 0, 0, 1)
      I3DUtil.setWorldDirection(speedRotatingPart.repr, v10, v11, v12, v7, v8, v9, 2)
      if speedRotatingPart.wheel ~= nil and speedRotatingPart.useWheelReprTranslation then
        local v15 = getParent(speedRotatingPart.repr)
        local v13, v14, v15 = localToLocal(speedRotatingPart.wheel.driveNode, v15, 0, 0, 0)
        setTranslation(speedRotatingPart.repr, 0, v14, 0)
      end
    end
  end
  if speedRotatingPart.driveNode ~= nil then
    if speedRotatingPart.repr == speedRotatingPart.driveNode then
      if not speedRotatingPart.applySteeringAngle then
      end
      setRotation(speedRotatingPart.repr, speedRotatingPart.xDrive, v7, 0)
    else
      if not speedRotatingPart.alignDirection then
        if not speedRotatingPart.versatileYRot then
          -- if not v1.applySteeringAngle then goto L447 end
        end
        setRotation(speedRotatingPart.repr, 0, speedRotatingPart.steeringAngle, 0)
      end
      setRotation(speedRotatingPart.driveNode, speedRotatingPart.xDrive, 0, 0)
    end
  end
  if speedRotatingPart.shaderNode ~= nil then
    if speedRotatingPart.useShaderRotation then
      if speedRotatingPart.scrollLength ~= nil then
        speedRotatingPart.shaderParameterValues[speedRotatingPart.shaderParameterComponent] = speedRotatingPart.xDrive * speedRotatingPart.shaderParameterSpeedScale % speedRotatingPart.scrollLength
      else
        speedRotatingPart.shaderParameterValues[speedRotatingPart.shaderParameterComponent] = speedRotatingPart.xDrive * speedRotatingPart.shaderParameterSpeedScale
      end
      if speedRotatingPart.shaderParameterPrevName ~= nil then
        v8:setPrevShaderParameter(speedRotatingPart.shaderNode, speedRotatingPart.shaderParameterName, v7[1], v7[2], v7[3], v7[4], false, speedRotatingPart.shaderParameterPrevName)
        return
      end
      setShaderParameter(speedRotatingPart.shaderNode, speedRotatingPart.shaderParameterName, v7[1], v7[2], v7[3], v7[4], false)
      return
    end
    setShaderParameter(speedRotatingPart.shaderNode, "offsetUV", speedRotatingPart.xDrive % math.pi / 2 * math.pi * speedRotatingPart.scrollScale[1], speedRotatingPart.xDrive % math.pi / 2 * math.pi * speedRotatingPart.scrollScale[2], 0, 0, false)
  end
end
function SpeedRotatingParts:validateWashableNode(superFunc, node)
  for v7, v8 in pairs(self.spec_speedRotatingParts.speedRotatingParts) do
    if not (v8.wheel ~= nil) then
      continue
    end
    if v8.repr ~= nil then
      I3DUtil.getNodesByShaderParam(v8.repr, "RDT", {})
    end
    if v8.shaderNode ~= nil then
      I3DUtil.getNodesByShaderParam(v8.shaderNode, "RDT", v9)
    end
    if v8.driveNode ~= nil then
      I3DUtil.getNodesByShaderParam(v8.driveNode, "RDT", v9)
    end
    if not (v9[node] ~= nil) then
      continue
    end
    return false, self.updateWheelDirtAmount, v8.wheel, {wheel = v8.wheel, fieldDirtMultiplier = v8.wheel.fieldDirtMultiplier, streetDirtMultiplier = v8.wheel.streetDirtMultiplier, minDirtPercentage = v8.wheel.minDirtPercentage, maxDirtOffset = v8.wheel.maxDirtOffset, dirtColorChangeSpeed = v8.wheel.dirtColorChangeSpeed, isSnowNode = true}
  end
  v4 = superFunc(self, node)
  return v4
end
