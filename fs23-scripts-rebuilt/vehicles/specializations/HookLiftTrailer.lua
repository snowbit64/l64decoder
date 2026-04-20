-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HookLiftTrailer = {}
function HookLiftTrailer.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Foldable, v0)
  end
  return v1
end
function HookLiftTrailer.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("HookLiftTrailer")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.hookLiftTrailer.jointLimits.key(?)#time", "Key time")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.hookLiftTrailer.jointLimits.key(?)#rotLimit", "Rotation limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.hookLiftTrailer.jointLimits.key(?)#transLimit", "Translation limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.jointLimits#refAnimation", "Reference animation", "unfoldHand")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.unloadingAnimation#name", "Unload animation", "unloading")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.hookLiftTrailer.unloadingAnimation#speed", "Unload animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.hookLiftTrailer.unloadingAnimation#reverseSpeed", "Unload animation reverse speed", -1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.texts#unloadContainer", "Unload container text", "unload_container")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.texts#loadContainer", "Load container text", "load_container")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.texts#unloadArm", "Unload arm text", "unload_arm")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.hookLiftTrailer.texts#loadArm", "Load arm text", "load_arm")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function HookLiftTrailer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "startTipping", HookLiftTrailer.startTipping)
  SpecializationUtil.registerFunction(vehicleType, "stopTipping", HookLiftTrailer.stopTipping)
  SpecializationUtil.registerFunction(vehicleType, "getIsTippingAllowed", HookLiftTrailer.getIsTippingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getCanDetachContainer", HookLiftTrailer.getCanDetachContainer)
end
function HookLiftTrailer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", HookLiftTrailer.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", HookLiftTrailer.isDetachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", HookLiftTrailer.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPtoRpm", HookLiftTrailer.getPtoRpm)
end
function HookLiftTrailer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", HookLiftTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", HookLiftTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", HookLiftTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", HookLiftTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetachImplement", HookLiftTrailer)
end
function HookLiftTrailer:onLoad(savegame)
  local v3 = AnimCurve.new(linearInterpolatorN)
  self.spec_hookLiftTrailer.jointLimits = v3
  while true do
    v4 = string.format("vehicle.hookLiftTrailer.jointLimits.key(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      if not (v3 == 0) then
        break
      end
      v2.jointLimits = nil
      break
    end
    v5 = v5:getValue(v4 .. "#time")
    v6, v7, v8 = v6:getValue(v4 .. "#rotLimit", "0 0 0")
    v9, v10, v11 = v9:getValue(v4 .. "#transLimit", "0 0 0")
    v12:addKeyframe({v6, v7, v8, v9, v10, v11, time = v5})
  end
  v4 = v4:getValue("vehicle.hookLiftTrailer.jointLimits#refAnimation", "unfoldHand")
  v2.refAnimation = v4
  v4 = v4:getValue("vehicle.hookLiftTrailer.unloadingAnimation#name", "unloading")
  v2.unloadingAnimation = v4
  v4 = v4:getValue("vehicle.hookLiftTrailer.unloadingAnimation#speed", 1)
  v2.unloadingAnimationSpeed = v4
  v4 = v4:getValue("vehicle.hookLiftTrailer.unloadingAnimation#reverseSpeed", -1)
  v2.unloadingAnimationReverseSpeed = v4
  v2.texts = {}
  v7 = v7:getValue("vehicle.hookLiftTrailer.texts#unloadContainer", "unload_container")
  v5 = v5:getText(v7, self.customEnvironment)
  v2.texts.unloadContainer = v5
  v7 = v7:getValue("vehicle.hookLiftTrailer.texts#loadContainer", "load_container")
  v5 = v5:getText(v7, self.customEnvironment)
  v2.texts.loadContainer = v5
  v7 = v7:getValue("vehicle.hookLiftTrailer.texts#unloadArm", "unload_arm")
  v5 = v5:getText(v7, self.customEnvironment)
  v2.texts.unloadArm = v5
  v7 = v7:getValue("vehicle.hookLiftTrailer.texts#loadArm", "load_arm")
  v5 = v5:getText(v7, self.customEnvironment)
  v2.texts.loadArm = v5
end
function HookLiftTrailer:onPostLoad(savegame)
  self.spec_foldable.posDirectionText = self.spec_hookLiftTrailer.texts.unloadArm
  self.spec_foldable.negDirectionText = self.spec_hookLiftTrailer.texts.loadArm
end
function HookLiftTrailer:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_hookLiftTrailer.attachedContainer ~= nil then
    local v6 = self:getAnimationTime(self.spec_hookLiftTrailer.refAnimation)
    if 0.95 >= v6 then
    end
    v7.allowsDetaching = true
    local v7 = self:getIsAnimationPlaying(v5.refAnimation)
    if not v7 then
      -- if v5.attachedContainer.limitLocked then goto L89 end
    end
    if v5.jointLimits ~= nil and not v5.attachedContainer.implement.attachingIsInProgress then
      v7 = v7:get(v6)
      -- TODO: structure LOP_FORNPREP (pc 53, target 81)
      setJointRotationLimit(v5.attachedContainer.jointIndex, 1 - 1, true, -v7[1], v7[1])
      setJointTranslationLimit(v5.attachedContainer.jointIndex, 1 + 2, true, -v7[1 + 3], v7[1 + 3])
      -- TODO: structure LOP_FORNLOOP (pc 80, target 54)
      if 0.99 <= v6 then
        v5.attachedContainer.limitLocked = true
      end
    end
  end
end
function HookLiftTrailer:onPostAttachImplement(attachable, inputJointDescIndex, jointDescIndex)
  local attacherJoint = attachable:getActiveInputAttacherJoint()
  if attacherJoint ~= nil and attacherJoint.jointType == AttacherJoints.JOINTTYPE_HOOKLIFT then
    local jointDesc = self:getAttacherJointByJointDescIndex(jointDescIndex)
    self.spec_hookLiftTrailer.attachedContainer = {jointIndex = jointDesc.jointIndex}
    local v8 = self:getImplementByObject(attachable)
    self.spec_hookLiftTrailer.attachedContainer.implement = v8
    self.spec_hookLiftTrailer.attachedContainer.object = attachable
    self.spec_hookLiftTrailer.attachedContainer.limitLocked = false
    self.spec_foldable.posDirectionText = self.spec_hookLiftTrailer.texts.unloadContainer
    self.spec_foldable.negDirectionText = self.spec_hookLiftTrailer.texts.loadContainer
  end
end
function HookLiftTrailer:onPreDetachImplement(implement)
  if self.spec_hookLiftTrailer.attachedContainer ~= nil and implement == self.spec_hookLiftTrailer.attachedContainer.implement then
    self.spec_foldable.posDirectionText = self.spec_hookLiftTrailer.texts.unloadArm
    self.spec_foldable.negDirectionText = self.spec_hookLiftTrailer.texts.loadArm
    self.spec_hookLiftTrailer.attachedContainer = nil
  end
end
function HookLiftTrailer:startTipping()
  local v6 = self:getAnimationTime(self.spec_hookLiftTrailer.unloadingAnimation)
  self:playAnimation(self.spec_hookLiftTrailer.unloadingAnimation, self.spec_hookLiftTrailer.unloadingAnimationSpeed, v6, true)
end
function HookLiftTrailer:stopTipping()
  local v6 = self:getAnimationTime(self.spec_hookLiftTrailer.unloadingAnimation)
  self:playAnimation(self.spec_hookLiftTrailer.unloadingAnimation, self.spec_hookLiftTrailer.unloadingAnimationReverseSpeed, v6, true)
end
function HookLiftTrailer:getIsTippingAllowed()
  local v3 = self:getAnimationTime(self.spec_hookLiftTrailer.refAnimation)
  if v3 ~= 0 then
  end
  return true
end
function HookLiftTrailer:getCanDetachContainer()
  local v3 = self:getAnimationTime(self.spec_hookLiftTrailer.refAnimation)
  if v3 ~= 1 then
  end
  return true
end
function HookLiftTrailer:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  local v5 = self:getAnimationTime(self.spec_hookLiftTrailer.unloadingAnimation)
  if 0 < v5 then
    return false
  end
  v5 = superFunc(self, direction, onAiTurnOn)
  return v5
end
function HookLiftTrailer:isDetachAllowed(superFunc)
  local v2 = self:getAnimationTime(self.spec_hookLiftTrailer.unloadingAnimation)
  if v2 == 0 then
    v2 = superFunc(self)
    return v2
  end
  return false, nil
end
function HookLiftTrailer:getDoConsumePtoPower(superFunc)
  local doConsume = superFunc(self)
  if not doConsume then
    local v4 = self:getIsAnimationPlaying(self.spec_hookLiftTrailer.refAnimation)
    if not v4 then
      v4 = self:getIsAnimationPlaying(self.spec_hookLiftTrailer.unloadingAnimation)
    end
  end
  return v4
end
function HookLiftTrailer:getPtoRpm(superFunc)
  local rpm = superFunc(self)
  local v4 = self:getIsAnimationPlaying(self.spec_hookLiftTrailer.refAnimation)
  if not v4 then
    v4 = self:getIsAnimationPlaying(self.spec_hookLiftTrailer.unloadingAnimation)
    -- if not v4 then goto L22 end
  end
  return self.spec_powerConsumer.ptoRpm
  return rpm
end
