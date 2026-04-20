-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ArticulatedAxis = {}
function ArticulatedAxis.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Drivable, v0)
end
function ArticulatedAxis.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ArticulatedAxis")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.articulatedAxis#componentJointIndex", "Index of component joint")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.articulatedAxis#rotSpeed", "Rotation speed")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.articulatedAxis#rotMax", "Max rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.articulatedAxis#rotMin", "Min rotation")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.articulatedAxis#anchorActor", "Anchor actor index", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.articulatedAxis#rotNode", "Rotation node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.articulatedAxis#aiRevereserNode", "AI reverser node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.articulatedAxis#maxTurningRadius", "Fixed turning radius to overwrite automatic calculations")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.articulatedAxis#customWheelIndices1", "Component 1 wheel indices. Needed if wheels are not linked to component 1 directly. E.g. dolly axis")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.articulatedAxis#customWheelIndices2", "Component 2 wheel indices. Needed if wheels are not linked to component 2 directly. E.g. dolly axis")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.articulatedAxis.rotatingPart(?)#node", "Rotation part node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.articulatedAxis.rotatingPart(?)#posRot", "Positive rotation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.articulatedAxis.rotatingPart(?)#negRot", "Negative rotation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.articulatedAxis.rotatingPart(?)#posRotFactor", "Positive rotation factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.articulatedAxis.rotatingPart(?)#negRotFactor", "Negative rotation factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.articulatedAxis.rotatingPart(?)#invertSteeringAngle", "Invert steering angle", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.articulatedAxis.sounds", "steering")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ArticulatedAxis.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSteeringRotTimeByCurvature", ArticulatedAxis.getSteeringRotTimeByCurvature)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurningRadiusByRotTime", ArticulatedAxis.getTurningRadiusByRotTime)
end
function ArticulatedAxis.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ArticulatedAxis)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", ArticulatedAxis)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", ArticulatedAxis)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", ArticulatedAxis)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", ArticulatedAxis)
end
function ArticulatedAxis:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.articulatedAxis.rotatingPart(0)#index", "vehicle.articulatedAxis.rotatingPart(0)#node")
  local v4 = self.xmlFile:getValue("vehicle.articulatedAxis#componentJointIndex")
  if v4 ~= nil then
    if v4 == 0 then
      Logging.xmlWarning(self.xmlFile, "Invalid component joint index '0' for articulatedAxis. Indices start with 1!")
    else
      local v6 = self.xmlFile:getValue("vehicle.articulatedAxis#rotSpeed")
      local v7 = self.xmlFile:getValue("vehicle.articulatedAxis#rotMax")
      local v8 = self.xmlFile:getValue("vehicle.articulatedAxis#rotMin")
      if self.componentJoints[v4] ~= nil and v6 ~= nil and v7 ~= nil and v8 ~= nil then
        self.spec_articulatedAxis.rotSpeed = v6
        self.spec_articulatedAxis.rotMax = v7
        self.spec_articulatedAxis.rotMin = v8
        self.spec_articulatedAxis.componentJoint = self.componentJoints[v4]
        local v9 = self.xmlFile:getValue("vehicle.articulatedAxis#anchorActor", 0)
        self.spec_articulatedAxis.anchorActor = v9
        v9 = self.xmlFile:getValue("vehicle.articulatedAxis#rotNode", nil, self.components, self.i3dMappings)
        self.spec_articulatedAxis.rotationNode = v9
        if self.spec_articulatedAxis.rotationNode == nil then
          self.spec_articulatedAxis.rotationNode = self.spec_articulatedAxis.componentJoint.jointNode
        end
        v3.curRot = 0
        v3.rotatingParts = {}
        while true do
          v10 = string.format("vehicle.articulatedAxis.rotatingPart(%d)", v9)
          v11 = v2:hasProperty(v10)
          if not v11 then
            break
          end
          v11 = v2:getValue(v10 .. "#node", nil, self.components, self.i3dMappings)
          if v11 ~= nil then
            v14 = getRotation(v11)
            v13 = v2:getValue(v10 .. "#posRot", nil, true)
            v13 = v2:getValue(v10 .. "#negRot", nil, true)
            v13 = v2:getValue(v10 .. "#negRotFactor", 1)
            v13 = v2:getValue(v10 .. "#posRotFactor", 1)
            v13 = v2:getValue(v10 .. "#invertSteeringAngle", false)
            table.insert(v3.rotatingParts, {node = v11, defRot = {}, posRot = v13, negRot = v13, negRotFactor = v13, posRotFactor = v13, invertSteeringAngle = v13})
          else
            Logging.xmlWarning(self.xmlFile, "Failed to load rotation part '%s'", v10)
          end
        end
        v11 = v2:getValue("vehicle.articulatedAxis#customWheelIndices1", nil, true)
        if v11 ~= nil then
          for v15, v16 in ipairs(v11) do
            v10[1][v16] = true
          end
        end
        v12 = v2:getValue("vehicle.articulatedAxis#customWheelIndices2", nil, true)
        if v12 ~= nil then
          for v16, v17 in ipairs(v12) do
            v10[2][v17] = true
          end
        end
        if v7 / v6 < v8 / v6 then
        end
        if self.maxRotTime < v13 then
          self.maxRotTime = v13
        end
        if v14 < self.minRotTime then
          self.minRotTime = v14
        end
        self.maxRotation = v7
        v17 = MathUtil.sign(v6)
        self.wheelSteeringDuration = v17 * v7 / v6
        v15 = v2:getValue("vehicle.articulatedAxis#aiRevereserNode", nil, self.components, self.i3dMappings)
        v3.aiRevereserNode = v15
        -- TODO: structure LOP_FORNPREP (pc 285, target 404)
        for v24, v25 in ipairs(self.spec_wheels.wheels) do
          local v26 = self:getParentComponent(v25.repr)
          if v26 ~= v20 and not (v10[v19][v24] ~= nil) then
            continue
          end
          local v26, v27, v28 = localToLocal(v25.driveNode, v20, 0, 0, 0)
          if v26 < 0 then
          end
          local v31 = math.max(v25.rotMin, v25.rotMax)
          local v30 = math.tan(...)
          if 0 < v28 then
          end
          if v26 < 0 then
          end
          local v33 = math.max(v8, v7)
          local v32 = math.tan(...)
          if v28 < 0 then
          end
          v33 = MathUtil.vector2Length(v29, v30)
          local v34 = MathUtil.vector2Length(v31, v32)
          local v35, v36, v37 = MathUtil.getLineLineIntersection2D(v26, v28, v29 / v33, v30 / v33, 0, 0, v31 / v34, v32 / v34)
          if not v35 then
            continue
          end
          local v38 = math.abs(v37)
          local v39 = math.max(v15, v38)
        end
        -- TODO: structure LOP_FORNLOOP (pc 403, target 286)
        if v15 ~= 0 then
          self.maxTurningRadius = v15
        end
        v17 = v2:getValue("vehicle.articulatedAxis#maxTurningRadius", self.maxTurningRadius)
        self.maxTurningRadius = v17
      end
    end
  end
  if self.isClient then
    v3.samples = {}
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.articulatedAxis.sounds", "steering", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v3.samples.steering = v6
    v3.isSteeringSoundPlaying = false
  end
  v3.interpolatedRotatedTime = 0
end
function ArticulatedAxis:onPostLoad()
  if self.spec_articulatedAxis.componentJoint ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L23
    self:updateArticulatedAxisRotation(0, 99999)
    return
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", ArticulatedAxis)
end
function ArticulatedAxis:onDelete()
  if self.isClient then
    v2:deleteSamples(self.spec_articulatedAxis.samples)
  end
end
function ArticulatedAxis:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_articulatedAxis.samples)
    self.spec_articulatedAxis.isSteeringSoundPlaying = false
  end
end
function ArticulatedAxis:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_articulatedAxis.interpolatedRotatedTime < self.rotatedTime then
    local v12 = math.abs(self.spec_articulatedAxis.rotSpeed)
    local v6 = math.min(self.rotatedTime, self.spec_articulatedAxis.interpolatedRotatedTime + v12 * dt / 500)
    self.spec_articulatedAxis.interpolatedRotatedTime = v6
  elseif self.rotatedTime < self.spec_articulatedAxis.interpolatedRotatedTime then
    v12 = math.abs(self.spec_articulatedAxis.rotSpeed)
    v6 = math.max(self.rotatedTime, self.spec_articulatedAxis.interpolatedRotatedTime - v12 * dt / 500)
    self.spec_articulatedAxis.interpolatedRotatedTime = v6
  end
  v6 = MathUtil.clamp(self.rotatedTime * v5.rotSpeed, v5.rotMin, v5.rotMax)
  if self.updateArticulatedAxisRotation ~= nil then
    local v7 = self:updateArticulatedAxisRotation(v6, dt)
  end
  if self.isClient then
    local v8 = math.abs(v6 - v5.curRot)
    if 0.0001 >= v8 then
    end
    if true ~= v5.isSteeringSoundPlaying then
      if true then
        v8:playSample(v5.samples.steering)
      else
        v8:stopSample(v5.samples.steering)
      end
      v5.isSteeringSoundPlaying = v7
    end
  end
  v7 = math.abs(v6 - v5.curRot)
  if 0.000001 < v7 then
    if self.isServer then
      setRotation(v5.rotationNode, 0, v6, 0)
      self:setComponentJointFrame(v5.componentJoint, v5.anchorActor)
    end
    v5.curRot = v6
    if self.isClient then
      if 0 < v6 then
      elseif v6 < 0 then
      end
      for v11, v12 in pairs(v5.rotatingParts) do
        if 0 < v6 then
          -- if not v12.invertSteeringAngle then goto L186 end
        end
        if v6 < 0 then
          -- if not v12.invertSteeringAngle then goto L206 end
          local v19 = math.min(1, v7 * v12.posRotFactor)
          local v16, v17, v18 = MathUtil.vector3ArrayLerp(...)
        else
          v19 = math.min(1, v7 * v12.negRotFactor)
          v16, v17, v18 = MathUtil.vector3ArrayLerp(...)
        end
        setRotation(v12.node, v13, v14, v15)
        if not (self.setMovingToolDirty ~= nil) then
          continue
        end
        self:setMovingToolDirty(v12.node)
      end
    end
  end
end
function ArticulatedAxis:getSteeringRotTimeByCurvature(superFunc, curvature)
  local v6 = math.atan(curvature)
  local v7 = math.atan(1 / self.maxTurningRadius)
  return self.wheelSteeringDuration * v6 / v7
end
function ArticulatedAxis:getTurningRadiusByRotTime(superFunc, rotTime)
  if self.spec_articulatedAxis.componentJoint == nil then
    return superFunc(self, rotTime)
  end
  local v12 = MathUtil.sign(isActiveForInputIgnoreSelection.rotSpeed)
  local v10 = math.atan(1 / self.maxTurningRadius)
  local v7 = math.tan(rotTime / v12 * self.maxRotation / isActiveForInputIgnoreSelection.rotSpeed * v10)
  if -v7 == 0 then
    return math.huge
  end
  return 1 / v6
end
