-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SlopeCompensation = {SLOPE_COLLISION_MASK = 223, COMPENSATION_NODE_XML_KEY = "vehicle.slopeCompensation.compensationNode(?)"}
function SlopeCompensation.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Wheels, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
  end
  return v1
end
function SlopeCompensation.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SlopeCompensation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.slopeCompensation#threshold", "Update threshold for animation", 0.002)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.slopeCompensation#highUpdateFrequency", "Defines if the angle is updated every frame or every seconds frame", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#wheel1", "Wheel index 1")
  Vehicle.xmlSchema:register(XMLValueType.INT, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#wheel2", "Wheel index 2")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#maxAngle", "Max. angle", 5)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#minAngle", "Min. angle", "Negative #maxAngle")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#speed", "Move speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#animationName", "Animation name")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SlopeCompensation.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadCompensationNodeFromXML", SlopeCompensation.loadCompensationNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getCompensationAngleScale", SlopeCompensation.getCompensationAngleScale)
  SpecializationUtil.registerFunction(vehicleType, "getCompensationGroundPosition", SlopeCompensation.getCompensationGroundPosition)
  SpecializationUtil.registerFunction(vehicleType, "slopeDetectionCallback", SlopeCompensation.slopeDetectionCallback)
end
function SlopeCompensation.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", SlopeCompensation)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SlopeCompensation)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", SlopeCompensation)
end
function SlopeCompensation:onPostLoad(savegame)
  self.spec_slopeCompensation.lastRaycastDistance = 0
  self.spec_slopeCompensation.nodes = {}
  while true do
    v4 = string.format("vehicle.slopeCompensation.compensationNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadCompensationNodeFromXML({}, self.xmlFile, v4)
    if v6 then
      table.insert(v2.nodes, {})
    end
  end
  v4 = v4:getValue("vehicle.slopeCompensation#threshold", 0.002)
  v2.threshold = v4
  if #v2.nodes == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdate", SlopeCompensation)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", SlopeCompensation)
    return
  end
  v4 = v4:getValue("vehicle.slopeCompensation#highUpdateFrequency", false)
  if v4 then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", SlopeCompensation)
    return
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", SlopeCompensation)
end
function SlopeCompensation:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in ipairs(self.spec_slopeCompensation.nodes) do
    local v11, v12, v13, v14 = self:getCompensationGroundPosition(v10, 1)
    local v15, v16, v17, v18 = self:getCompensationGroundPosition(v10, 2)
    if not v14 then
      continue
    end
    if not v18 then
      continue
    end
    local v20 = MathUtil.vector2Length(v11 - v15, v13 - v17)
    local v21 = self:getCompensationAngleScale(v10)
    local v23 = math.tan((v12 - v16) / v20)
    v23 = MathUtil.clamp((v23 * v21 - v10.minAngle) / (v10.maxAngle - v10.minAngle), 0, 1)
    local v24 = math.abs(v10.lastPos - v23)
    if v5.threshold >= v24 and not (v21 ~= v10.lastAngleScale) then
      continue
    end
    v24 = MathUtil.sign(v23 - v10.lastPos)
    if 0 < v24 then
      -- if math.min then goto L79 end
    end
    local v26 = math.max(v10.lastPos + v10.speed * dt * v24, v23)
    v10.lastPos = v26
    v10.lastAngleScale = v21
    self:setAnimationTime(v10.animationName, v10.lastPos, true)
  end
end
function SlopeCompensation.onUpdateTick(v0, v1, v2, v3, v4)
  SlopeCompensation.onUpdate(v0, v1, v2, v3, v4)
end
function SlopeCompensation:loadCompensationNodeFromXML(compensationNode, xmlFile, key)
  compensationNode.raycastDistance = 0
  compensationNode.lastDistance1 = 0
  compensationNode.lastDistance2 = 0
  for v7, v8 in ipairs({"wheel1", "wheel2"}) do
    local v9 = v9:getValue(key .. "#" .. v8)
    if v9 == nil then
      Logging.xmlWarning(self.xmlFile, "Missing %s for compensation node '%s'", v8, key)
      return false
    end
    local v11 = self:getWheels()
    if v11[v9] ~= nil then
      compensationNode[v8 .. "Node"] = v11[v9].driveNode
      v11 = math.max(compensationNode.raycastDistance, v11[v9].radius + 1)
      compensationNode.raycastDistance = v11
    else
      Logging.xmlWarning(self.xmlFile, "Unable to find wheel index '%d' for compensation node '%s'", v9, key)
      return false
    end
  end
  v4 = v4:getValue(key .. "#maxAngle", 5)
  compensationNode.maxAngle = v4
  v8 = math.deg(compensationNode.maxAngle)
  v4 = v4:getValue(key .. "#minAngle", -v8)
  compensationNode.minAngle = v4
  v5 = v5:getValue(key .. "#speed", 1)
  compensationNode.speed = v5 / 1000
  compensationNode.lastPos = 0.5
  compensationNode.lastAngleScale = 1
  v4 = v4:getValue(key .. "#animationName")
  compensationNode.animationName = v4
  if compensationNode.animationName ~= nil then
    v4 = self:getAnimationExists(compensationNode.animationName)
    -- if not v4 then goto L174 end
    v5 = self:getCompensationAngleScale(compensationNode)
    if 0 >= v5 then
    end
    self:setAnimationTime(compensationNode.animationName, 0, true)
    self:setAnimationTime(compensationNode.animationName, 1, true)
    self:setAnimationTime(compensationNode.animationName, 0.5, true)
  else
    Logging.xmlWarning(self.xmlFile, "No animation or invalid animation defined for compensation node '%s'", key)
    return false
  end
  return true
end
function SlopeCompensation.getCompensationAngleScale(v0, v1)
  return 1
end
function SlopeCompensation:getCompensationGroundPosition(compensationNode, wheelId)
  local v4, v5, v6 = getWorldTranslation(compensationNode["wheel" .. wheelId .. "Node"])
  self.spec_slopeCompensation.lastRaycastDistance = 0
  raycastAll(v4, v5, v6, 0, -1, 0, "slopeDetectionCallback", compensationNode.raycastDistance, self, SlopeCompensation.SLOPE_COLLISION_MASK)
  if self.spec_slopeCompensation.lastRaycastDistance == 0 then
  else
    compensationNode["lastDistance" .. wheelId] = self.spec_slopeCompensation.lastRaycastDistance
  end
  if v7 == 0 then
  end
  return v8, v9, v10, true
end
function SlopeCompensation:slopeDetectionCallback(hitObjectId, x, y, z, distance)
  local v6 = getRigidBodyType(hitObjectId)
  if v6 ~= RigidBodyType.STATIC then
    return true
  end
  self.spec_slopeCompensation.lastRaycastDistance = distance
  return false
end
