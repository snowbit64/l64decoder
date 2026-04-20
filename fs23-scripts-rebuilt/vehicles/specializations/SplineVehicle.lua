-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SplineVehicle = {}
function SplineVehicle.prerequisitesPresent(v0)
  return true
end
function SplineVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SplineVehicle")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.splineVehicle.dollies#frontNode", "Front node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.splineVehicle.dollies#backNode", "Back node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.splineVehicle.dollies#dolly1Node", "Front dolly node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.splineVehicle.dollies#dolly2Node", "Back dolly node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.splineVehicle.dollies#alignDollys", "Align dollies", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_XML_PATH .. "#needsIsEntered", "Vehicle needs to be entered to do raycasting", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. "#needsIsEntered", "Vehicle needs to be entered to do raycasting", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SplineVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getFrontToBackDistance", SplineVehicle.getFrontToBackDistance)
  SpecializationUtil.registerFunction(vehicleType, "getSplineTimeFromDistance", SplineVehicle.getSplineTimeFromDistance)
  SpecializationUtil.registerFunction(vehicleType, "getSplinePositionAndTimeFromDistance", SplineVehicle.getSplinePositionAndTimeFromDistance)
  SpecializationUtil.registerFunction(vehicleType, "alignToSplineTime", SplineVehicle.alignToSplineTime)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentSplinePosition", SplineVehicle.getCurrentSplinePosition)
end
function SplineVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getLastSpeed", SplineVehicle.getLastSpeed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setTrainSystem", SplineVehicle.setTrainSystem)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCurrentSurfaceSound", SplineVehicle.getCurrentSurfaceSound)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreSurfaceSoundsActive", SplineVehicle.getAreSurfaceSoundsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDischargeNodeActive", SplineVehicle.getIsDischargeNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", SplineVehicle.loadDischargeNode)
end
function SplineVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SplineVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SplineVehicle)
end
function SplineVehicle:onLoad(savegame)
  local v3 = v3:getValue("vehicle.splineVehicle.dollies#frontNode", nil, self.components, self.i3dMappings)
  self.spec_splineVehicle.frontNode = v3
  v3 = v3:getValue("vehicle.splineVehicle.dollies#backNode", nil, self.components, self.i3dMappings)
  self.spec_splineVehicle.backNode = v3
  v3 = calcDistanceFrom(self.spec_splineVehicle.frontNode, self.spec_splineVehicle.backNode)
  self.spec_splineVehicle.frontToBackDistance = v3
  v3 = v3:getValue("vehicle.splineVehicle.dollies#dolly1Node", nil, self.components, self.i3dMappings)
  self.spec_splineVehicle.dolly1Node = v3
  v3 = v3:getValue("vehicle.splineVehicle.dollies#dolly2Node", nil, self.components, self.i3dMappings)
  self.spec_splineVehicle.dolly2Node = v3
  v3 = calcDistanceFrom(self.spec_splineVehicle.dolly1Node, self.spec_splineVehicle.dolly2Node)
  self.spec_splineVehicle.dollyToDollyDistance = v3
  v3 = calcDistanceFrom(self.spec_splineVehicle.backNode, self.rootNode)
  self.spec_splineVehicle.rootNodeToBackDistance = v3
  v3 = calcDistanceFrom(self.spec_splineVehicle.frontNode, self.rootNode)
  self.spec_splineVehicle.rootNodeToFrontDistance = v3
  v3 = v3:getValue("vehicle.splineVehicle.dollies#alignDollys", true)
  self.spec_splineVehicle.alignDollys = v3
  self.spec_splineVehicle.splinePosition = 0
  self.spec_splineVehicle.lastSplinePosition = 0
  self.spec_splineVehicle.currentSplinePosition = 0
  self.spec_splineVehicle.splinePositionSpeed = 0
  self.spec_splineVehicle.splinePositionSpeedReal = 0
  self.spec_splineVehicle.splineSpeed = 0
  self.spec_splineVehicle.firstUpdate = true
end
function SplineVehicle:setTrainSystem(superFunc, trainSystem)
  superFunc(self, trainSystem)
  local v4 = trainSystem:getSplineLength()
  self.spec_splineVehicle.splineLength = v4
  self.spec_splineVehicle.frontToBackSplineTime = self.spec_splineVehicle.frontToBackDistance / self.spec_splineVehicle.splineLength
  self.spec_splineVehicle.dollyToDollySplineTime = self.spec_splineVehicle.dollyToDollyDistance / self.spec_splineVehicle.splineLength
  self.spec_splineVehicle.rootNodeToBackSplineTime = self.spec_splineVehicle.rootNodeToBackDistance / self.spec_splineVehicle.splineLength
  self.spec_splineVehicle.rootNodeToFrontSplineTime = self.spec_splineVehicle.rootNodeToFrontDistance / self.spec_splineVehicle.splineLength
end
function SplineVehicle:getCurrentSplinePosition()
  return self.spec_splineVehicle.splinePosition
end
function SplineVehicle:getFrontToBackDistance()
  return self.spec_splineVehicle.frontToBackDistance
end
function SplineVehicle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and self.spec_splineVehicle.trainSystem ~= nil then
    self.spec_splineVehicle.splinePositionSpeed = self.spec_splineVehicle.splinePositionSpeed * 0.975 + self.spec_splineVehicle.splinePositionSpeedReal * 0.025
  end
end
function SplineVehicle:getSplineTimeFromDistance(t, distance, stepSize)
  if self.trainSystem == nil then
    return
  end
  if 0 > stepSize then
  end
  local v6 = v6:getSpline()
  local v5, v6, v7, v8 = getSplinePositionWithDistance(v6, t, distance, true, 0.01)
  return SplineUtil.getValidSplineTime(v8)
end
function SplineVehicle:getSplinePositionAndTimeFromDistance(t, distance, stepSize)
  if self.trainSystem == nil then
    return
  end
  if 0 > stepSize then
  end
  local v6 = v6:getSpline()
  local v5, v6, v7, v8 = getSplinePositionWithDistance(v6, t, distance, true, 0.01)
  local v12 = SplineUtil.getValidSplineTime(v8)
  return v5
end
function SplineVehicle:alignToSplineTime(spline, yOffset, tFront)
  if self.trainSystem == nil then
    return
  end
  local v6 = v6:getLengthSplineTime()
  local v5 = math.max(v6, 0.25)
  local v7 = math.abs(tFront - self.spec_splineVehicle.splinePosition)
  if v5 < v7 then
    if 0 < tFront - self.spec_splineVehicle.splinePosition then
    else
    end
  end
  self.movingDirection = 1
  if v6 < 0 then
    self.movingDirection = -1
  end
  local v7, v8, v9, v10 = self:getSplinePositionAndTimeFromDistance(tFront, v4.rootNodeToFrontDistance, -1.2 * v4.rootNodeToFrontSplineTime)
  local v12 = getParent(spline)
  local v11, v12, v13 = localToWorld(v12, v7, v8, v9)
  local v14, v15, v16, v17 = self:getSplinePositionAndTimeFromDistance(v10, v4.dollyToDollyDistance, -1.2 * v4.dollyToDollySplineTime)
  local v19 = getParent(spline)
  local v18, v19, v20 = localToWorld(v19, v14, v15, v16)
  setDirection(self.rootNode, v11 - v18, v12 - v19, v13 - v20, 0, 1, 0)
  local v21, v22, v23, v24 = getWorldQuaternion(self.rootNode)
  setWorldTranslation(self.rootNode, v11, v12 + yOffset, v13)
  v26:setQuaternion(v21, v22, v23, v24)
  v26:setPosition(v11, v12 + yOffset, v13)
  if v4.alignDollys then
    local v26, v27, v28 = getSplineDirection(spline, v10)
    local v29, v30, v31 = getSplineDirection(spline, v17)
    local v34 = getParent(v4.dolly1Node)
    local v32, v33, v34 = localDirectionToLocal(spline, v34, v26, v27, v28)
    v34 = getParent(v4.dolly2Node)
    v32, v33, v34 = localDirectionToLocal(spline, v34, v29, v30, v31)
    setDirection(v4.dolly1Node, v32, v33, v34, 0, 1, 0)
    setDirection(v4.dolly2Node, v32, v33, v34, 0, 1, 0)
  end
  if g_server == nil then
  end
  v29 = v29:getSplineLength()
  v4.splinePositionSpeedReal = v6 * v29 * 1000 / v26
  if self.isServer then
    v4.splinePositionSpeed = v4.splinePositionSpeedReal
  end
  v4.splinePosition = tFront
  if v4.firstUpdate then
    v4.splinePositionSpeedReal = 0
    v4.splinePositionSpeed = 0
    v4.firstUpdate = false
  end
  v27 = self:getSplineTimeFromDistance(tFront, v4.frontToBackDistance, -1.2 * v4.frontToBackSplineTime)
  return v27
end
function SplineVehicle:getLastSpeed(superFunc, useAttacherVehicleSpeed)
  return math.abs(self.spec_splineVehicle.splinePositionSpeed * 3.6)
end
function SplineVehicle:getCurrentSurfaceSound()
  return self.spec_wheels.surfaceNameToSound.railroad
end
function SplineVehicle:getAreSurfaceSoundsActive(superFunc)
  if self.rootVehicle ~= nil and self.rootVehicle ~= self then
    return self.rootVehicle:getAreSurfaceSoundsActive()
  end
  return true
end
function SplineVehicle.loadDischargeNode(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. "#needsIsEntered", true)
  v4.needsIsEntered = v5
  return true
end
function SplineVehicle:getIsDischargeNodeActive(superFunc, dischargeNode)
  if dischargeNode.needsIsEntered then
    local rootVehicle = self:getRootVehicle()
    if rootVehicle ~= nil and rootVehicle.getIsControlled ~= nil then
      local v4 = rootVehicle:getIsControlled()
      if not v4 then
        return false
      end
    end
  end
  rootVehicle = superFunc(self, dischargeNode)
  return rootVehicle
end
