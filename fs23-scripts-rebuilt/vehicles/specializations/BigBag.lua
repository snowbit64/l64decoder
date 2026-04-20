-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BigBag = {}
function BigBag.prerequisitesPresent(v0)
  return true
end
function BigBag.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("BigBag")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.bigBag#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.bigBag.sizeAnimation#name", "Name of size animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.bigBag.sizeAnimation#minTime", "Min. animation that is used while it's empty", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.bigBag.sizeAnimation#maxTime", "Max. animation that is used while it's full", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.bigBag.sizeAnimation#liftShrinkTime", "Time of animation that is reduced while the big bag is lifted", 0.2)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.bigBag.componentJoint#index", "Component Joint Index", 1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.bigBag.componentJoint#minRotLimit", "Rot Limit if trans limit is at min")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.bigBag.componentJoint#maxRotLimit", "Rot Limit if trans limit is at max")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.bigBag.componentJoint#minTransLimit", "Trans Limit if big bag is empty")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.bigBag.componentJoint#maxTransLimit", "Trans Limit if big bag is full")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.bigBag.componentJoint#angularDamping", "Angular damping of components", 0.01)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function BigBag.registerFunctions(v0)
end
function BigBag.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getInfoBoxTitle", BigBag.getInfoBoxTitle)
end
function BigBag.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BigBag)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", BigBag)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", BigBag)
end
function BigBag:onLoad(savegame)
  local v3 = v3:getValue("vehicle.bigBag#fillUnitIndex", 1)
  self.spec_bigBag.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.bigBag.sizeAnimation#name")
  self.spec_bigBag.sizeAnimationName = v3
  v3 = v3:getValue("vehicle.bigBag.sizeAnimation#minTime", 0)
  self.spec_bigBag.sizeAnimationMinTime = v3
  v3 = v3:getValue("vehicle.bigBag.sizeAnimation#maxTime", 1)
  self.spec_bigBag.sizeAnimationMaxTime = v3
  v3 = v3:getValue("vehicle.bigBag.sizeAnimation#liftShrinkTime", 0.2)
  self.spec_bigBag.sizeAnimationLiftShrinkTime = v3
  v3 = v3:getValue("vehicle.bigBag.componentJoint#index", 1)
  self.spec_bigBag.componentJointIndex = v3
  if self.componentJoints[self.spec_bigBag.componentJointIndex] ~= nil then
    local v4 = v4:getValue("vehicle.bigBag.componentJoint#minRotLimit", nil, true)
    self.spec_bigBag.minRotLimit = v4
    v4 = v4:getValue("vehicle.bigBag.componentJoint#maxRotLimit", nil, true)
    self.spec_bigBag.maxRotLimit = v4
    if #self.spec_bigBag.minRotLimit == 3 then
      -- cmp-jump LOP_JUMPXEQKN R4 aux=0x15 -> L98
    end
    v2.minRotLimit = nil
    v2.maxRotLimit = nil
    v4 = v4:getValue("vehicle.bigBag.componentJoint#minTransLimit", nil, true)
    v2.minTransLimit = v4
    v4 = v4:getValue("vehicle.bigBag.componentJoint#maxTransLimit", nil, true)
    v2.maxTransLimit = v4
    if #v2.minTransLimit == 3 then
      -- cmp-jump LOP_JUMPXEQKN R4 aux=0x15 -> L134
    end
    v2.minTransLimit = nil
    v2.maxTransLimit = nil
    v2.componentJoint = v3
    v2.jointNode = v3.jointNode
    v4 = createTransformGroup("jointNodeReference")
    v2.jointNodeReferenceNode = v4
    link(self.components[v3.componentIndices[2]].node, v2.jointNodeReferenceNode)
    local v6 = getWorldTranslation(v2.jointNode)
    setWorldTranslation(...)
    v6 = getWorldRotation(v2.jointNode)
    setWorldRotation(...)
    v2.component1 = self.components[v2.componentJoint.componentIndices[1]]
    v2.component2 = self.components[v2.componentJoint.componentIndices[2]]
    v4 = v4:getValue("vehicle.bigBag.componentJoint#angularDamping", 0.01)
    v2.angularDamping = v4
    setAngularDamping(v2.component1.node, v2.angularDamping)
    setAngularDamping(v2.component2.node, v2.angularDamping)
    v2.lastJointLimitAlpha = -1
  end
  v2.currentShrinkTime = 0
  v2.currentSizeTime = 1
  v2.currentAnimationTime = 1
end
function BigBag:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_bigBag.jointNode ~= nil then
    local v9 = self:getFillUnitFillLevelPercentage(self.spec_bigBag.fillUnitIndex)
    local v6, v7, v8 = MathUtil.lerp(...)
    local v9, v10, v11 = localToLocal(self.spec_bigBag.jointNode, self.spec_bigBag.jointNodeReferenceNode, 0, 0, 0)
    local v14 = MathUtil.clamp((v9 / v6 + 1) / 2, 0, 1)
    self.spec_bigBag.currentShrinkTime = (1 - v14) * self.spec_bigBag.sizeAnimationLiftShrinkTime
    if self.isServer then
      local v13 = math.abs(self.spec_bigBag.lastJointLimitAlpha - 1 - v14)
      if 0.05 < v13 then
        if self.spec_bigBag.minRotLimit ~= nil and self.spec_bigBag.maxRotLimit ~= nil then
          local v13, v14, v15 = MathUtil.vector3ArrayLerp(self.spec_bigBag.minRotLimit, self.spec_bigBag.maxRotLimit, 1 - v14)
          self:setComponentJointRotLimit(self.spec_bigBag.componentJoint, 1, -v13, v13)
          self:setComponentJointRotLimit(self.spec_bigBag.componentJoint, 2, -v14, v14)
          self:setComponentJointRotLimit(self.spec_bigBag.componentJoint, 3, -v15, v15)
        end
        v5.lastJointLimitAlpha = v12
      end
    end
    v14 = math.abs(v5.currentSizeTime * (1 - v5.currentShrinkTime) - v5.currentAnimationTime)
    if 0.01 < v14 then
      self:setAnimationTime(v5.sizeAnimationName, v5.currentSizeTime * (1 - v5.currentShrinkTime))
      v5.currentAnimationTime = v5.currentSizeTime * (1 - v5.currentShrinkTime)
    end
  end
end
function BigBag:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if self.spec_bigBag.fillUnitIndex == fillUnitIndex then
    local fillLevelPct = self:getFillUnitFillLevelPercentage(fillUnitIndex)
    self.spec_bigBag.currentSizeTime = fillLevelPct * (self.spec_bigBag.sizeAnimationMaxTime - self.spec_bigBag.sizeAnimationMinTime) + self.spec_bigBag.sizeAnimationMinTime
    self.spec_bigBag.currentAnimationTime = self.spec_bigBag.currentSizeTime * (1 - self.spec_bigBag.currentShrinkTime)
    self:setAnimationTime(self.spec_bigBag.sizeAnimationName, self.spec_bigBag.currentAnimationTime)
    if self.isServer and self.spec_bigBag.minTransLimit ~= nil and self.spec_bigBag.maxTransLimit ~= nil then
      local v9, v10, v11 = MathUtil.vector3ArrayLerp(self.spec_bigBag.minTransLimit, self.spec_bigBag.maxTransLimit, fillLevelPct)
      self:setComponentJointTransLimit(self.spec_bigBag.componentJoint, 1, -v9, v9)
      self:setComponentJointTransLimit(self.spec_bigBag.componentJoint, 2, -v10, v10)
      self:setComponentJointTransLimit(self.spec_bigBag.componentJoint, 3, -v11, v11)
    end
  end
end
function BigBag.getInfoBoxTitle(v0, v1)
  return v2:getText("shopItem_bigBag")
end
