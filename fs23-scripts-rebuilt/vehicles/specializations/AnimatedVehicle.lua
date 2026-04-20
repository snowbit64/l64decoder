-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/AnimatedVehicleStartEvent.lua")
source("dataS/scripts/vehicles/specializations/events/AnimatedVehicleStopEvent.lua")
source("dataS/scripts/vehicles/AnimationValueFloat.lua")
source("dataS/scripts/vehicles/AnimationValueBool.lua")
AnimatedVehicle = {ANIMATION_PART_XML_KEY = "vehicle.animations.animation(?).part(?)"}
function AnimatedVehicle.prerequisitesPresent(v0)
  return true
end
function AnimatedVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AnimatedVehicle")
  AnimatedVehicle.registerAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.animations.animation(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#animName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#animOuterRange", "Anim limit outer range", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#animMinLimit", "Min. anim limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#animMaxLimit", "Max. anim limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, WorkArea.WORK_AREA_XML_KEY .. "#animName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. "#animMinLimit", "Min. anim limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. "#animMaxLimit", "Max. anim limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#animName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#animMinLimit", "Min. anim limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#animMaxLimit", "Max. anim limit", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AnimatedVehicle:registerAnimationXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#name", "Name of animation")
  self:register(XMLValueType.BOOL, v1 .. "#looping", "Animation is looping", false)
  self:register(XMLValueType.BOOL, v1 .. "#resetOnStart", "Animation is reseted while loading the vehicle", true)
  self:register(XMLValueType.FLOAT, v1 .. "#startAnimTime", "Animation is set to this time if resetOnStart is set", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#soundVolumeFactor", "Sound volume factor that is applied for all sounds in this animation", 1)
  self:register(XMLValueType.BOOL, v1 .. "#isKeyframe", "Is static keyframe animation instead of dynamically interpolating animation (Keyframe animations only support trans/rot/scale!)", false)
  self:addDelayedRegistrationPath(v1 .. ".part(?)", "AnimatedVehicle:part")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".part(?)#node", "Part node")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#startTime", "Start time")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#duration", "Duration")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#endTime", "End time")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#time", "Keyframe time (only for keyframe animations)")
  self:register(XMLValueType.INT, v1 .. ".part(?)#direction", "Part direction", 0)
  self:register(XMLValueType.STRING, v1 .. ".part(?)#tangentType", "Type of tangent to be used (linear, spline, step)", "linear")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#startRot", "Start rotation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#endRot", "End rotation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#startTrans", "Start translation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#endTrans", "End translation")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".part(?)#startScale", "Start scale")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".part(?)#endScale", "End scale")
  self:register(XMLValueType.BOOL, v1 .. ".part(?)#visibility", "Visibility")
  self:register(XMLValueType.BOOL, v1 .. ".part(?)#startVisibility", "Visibility at start time (switched in the middle)")
  self:register(XMLValueType.BOOL, v1 .. ".part(?)#endVisibility", "Visibility at end time (switched in the middle)")
  self:register(XMLValueType.INT, v1 .. ".part(?)#componentJointIndex", "Component joint index")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#rotation", "Rotation  (only for keyframe animations)")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#translation", "Translation  (only for keyframe animations)")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".part(?)#scale", "Scale  (only for keyframe animations)")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#requiredAnimation", "Required animation needs to be in a specific range to play part")
  self:register(XMLValueType.VECTOR_2, v1 .. ".part(?)#requiredAnimationRange", "Animation range of required animation")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#requiredConfigurationName", "This configuration needs to bet set to #requiredConfigurationIndex")
  self:register(XMLValueType.INT, v1 .. ".part(?)#requiredConfigurationIndex", "Required configuration needs to be in this state to activate the animation part")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#startRotLimit", "Start rotation limit")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#startRotMinLimit", "Start rotation min limit")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#startRotMaxLimit", "Start rotation max limit")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#endRotLimit", "End rotation limit")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#endRotMinLimit", "End rotation min limit")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".part(?)#endRotMaxLimit", "End rotation max limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#startTransLimit", "Start translation limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#startTransMinLimit", "Start translation min limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#startTransMaxLimit", "Start translation max limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#endTransLimit", "End translation limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#endTransMinLimit", "End translation min limit")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#endTransMaxLimit", "End translation max limit")
  self:register(XMLValueType.VECTOR_3, v1 .. ".part(?)#startRotLimitSpring", "Start rot limit spring")
  self:register(XMLValueType.VECTOR_3, v1 .. ".part(?)#startRotLimitDamping", "Start rot limit damping")
  self:register(XMLValueType.VECTOR_3, v1 .. ".part(?)#endRotLimitSpring", "End rot limit spring")
  self:register(XMLValueType.VECTOR_3, v1 .. ".part(?)#endRotLimitDamping", "End rot limit damping")
  self:register(XMLValueType.INT, v1 .. ".part(?)#componentIndex", "Component index")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#startMass", "Start mass of component")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#startCenterOfMass", "Start center of mass")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#endMass", "End mass of component")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".part(?)#endCenterOfMass", "End center of mass")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#startFrictionVelocity", "Start friction velocity applied to node")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#endFrictionVelocity", "End friction velocity applied to node")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#shaderParameter", "Shader parameter")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#shaderParameterPrev", "Shader parameter (prev)")
  self:register(XMLValueType.VECTOR_4, v1 .. ".part(?)#shaderStartValues", "Start shader values")
  self:register(XMLValueType.VECTOR_4, v1 .. ".part(?)#shaderEndValues", "End shader values")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#animationClip", "Animation clip name")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#clipStartTime", "Animation clip start time")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#clipEndTime", "Animation clip end time")
  self:register(XMLValueType.STRING, v1 .. ".part(?)#dependentAnimation", "Dependent animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#dependentAnimationStartTime", "Dependent animation start time")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#dependentAnimationEndTime", "Dependent animation end time")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".part(?)#spline", "Spline node")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#startSplinePos", "Start spline position")
  self:register(XMLValueType.FLOAT, v1 .. ".part(?)#endSplinePos", "End spline position")
  SoundManager.registerSampleXMLPaths(self, v1, "sound(?)")
  self:register(XMLValueType.TIME, v1 .. ".sound(?)#startTime", "Start play time", 0)
  self:register(XMLValueType.TIME, v1 .. ".sound(?)#endTime", "End play time for loops or used on oposite direction")
  self:register(XMLValueType.INT, v1 .. ".sound(?)#direction", "Direction to play the sound (0 = any direction)", 0)
  SoundManager.registerSampleXMLPaths(self, v1, "stopTimePosSound(?)")
  SoundManager.registerSampleXMLPaths(self, v1, "stopTimeNegSound(?)")
end
function AnimatedVehicle.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onRegisterAnimationValueTypes")
  SpecializationUtil.registerEvent(vehicleType, "onPlayAnimation")
  SpecializationUtil.registerEvent(vehicleType, "onStartAnimation")
  SpecializationUtil.registerEvent(vehicleType, "onUpdateAnimation")
  SpecializationUtil.registerEvent(vehicleType, "onFinishAnimation")
  SpecializationUtil.registerEvent(vehicleType, "onStopAnimation")
  SpecializationUtil.registerEvent(vehicleType, "onAnimationPartChanged")
end
function AnimatedVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "registerAnimationValueType", AnimatedVehicle.registerAnimationValueType)
  SpecializationUtil.registerFunction(vehicleType, "loadAnimation", AnimatedVehicle.loadAnimation)
  SpecializationUtil.registerFunction(vehicleType, "loadAnimationPart", AnimatedVehicle.loadAnimationPart)
  SpecializationUtil.registerFunction(vehicleType, "loadStaticAnimationPart", AnimatedVehicle.loadStaticAnimationPart)
  SpecializationUtil.registerFunction(vehicleType, "loadStaticAnimationPartValues", AnimatedVehicle.loadStaticAnimationPartValues)
  SpecializationUtil.registerFunction(vehicleType, "initializeAnimationParts", AnimatedVehicle.initializeAnimationParts)
  SpecializationUtil.registerFunction(vehicleType, "initializeAnimationPart", AnimatedVehicle.initializeAnimationPart)
  SpecializationUtil.registerFunction(vehicleType, "postInitializeAnimationPart", AnimatedVehicle.postInitializeAnimationPart)
  SpecializationUtil.registerFunction(vehicleType, "playAnimation", AnimatedVehicle.playAnimation)
  SpecializationUtil.registerFunction(vehicleType, "stopAnimation", AnimatedVehicle.stopAnimation)
  SpecializationUtil.registerFunction(vehicleType, "getAnimationExists", AnimatedVehicle.getAnimationExists)
  SpecializationUtil.registerFunction(vehicleType, "getAnimationByName", AnimatedVehicle.getAnimationByName)
  SpecializationUtil.registerFunction(vehicleType, "getIsAnimationPlaying", AnimatedVehicle.getIsAnimationPlaying)
  SpecializationUtil.registerFunction(vehicleType, "getRealAnimationTime", AnimatedVehicle.getRealAnimationTime)
  SpecializationUtil.registerFunction(vehicleType, "setRealAnimationTime", AnimatedVehicle.setRealAnimationTime)
  SpecializationUtil.registerFunction(vehicleType, "getAnimationTime", AnimatedVehicle.getAnimationTime)
  SpecializationUtil.registerFunction(vehicleType, "setAnimationTime", AnimatedVehicle.setAnimationTime)
  SpecializationUtil.registerFunction(vehicleType, "getAnimationDuration", AnimatedVehicle.getAnimationDuration)
  SpecializationUtil.registerFunction(vehicleType, "setAnimationSpeed", AnimatedVehicle.setAnimationSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getAnimationSpeed", AnimatedVehicle.getAnimationSpeed)
  SpecializationUtil.registerFunction(vehicleType, "setAnimationStopTime", AnimatedVehicle.setAnimationStopTime)
  SpecializationUtil.registerFunction(vehicleType, "resetAnimationValues", AnimatedVehicle.resetAnimationValues)
  SpecializationUtil.registerFunction(vehicleType, "resetAnimationPartValues", AnimatedVehicle.resetAnimationPartValues)
  SpecializationUtil.registerFunction(vehicleType, "updateAnimationPart", AnimatedVehicle.updateAnimationPart)
  SpecializationUtil.registerFunction(vehicleType, "getNumOfActiveAnimations", AnimatedVehicle.getNumOfActiveAnimations)
end
function AnimatedVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", AnimatedVehicle.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", AnimatedVehicle.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", AnimatedVehicle.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", AnimatedVehicle.getIsWorkAreaActive)
end
function AnimatedVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", AnimatedVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AnimatedVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AnimatedVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AnimatedVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AnimatedVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterAnimationValueTypes", AnimatedVehicle)
end
function AnimatedVehicle:onPreLoad(savegame)
  self.spec_animatedVehicle.animationValueTypes = {}
  SpecializationUtil.raiseEvent(self, "onRegisterAnimationValueTypes")
end
function AnimatedVehicle:onLoad(savegame)
  self.spec_animatedVehicle.animations = {}
  while true do
    v4 = string.format("vehicle.animations.animation(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadAnimation(self.xmlFile, v4, {})
    if v6 then
      v2.animations[{}.name] = {}
    end
  end
  v2.activeAnimations = {}
  v2.numActiveAnimations = 0
  v2.fixedTimeSamplesDirtyDelay = 0
end
function AnimatedVehicle:onPostLoad(savegame)
  for v6, v7 in pairs(self.spec_animatedVehicle.animations) do
    if not v7.resetOnStart then
      continue
    end
    self:setAnimationTime(v6, 1, true, false)
    self:setAnimationStopTime(v6, v7.startTime)
    self:playAnimation(v6, -1, 1, true, false)
    AnimatedVehicle.updateAnimationByName(self, v6, 9999999, true)
  end
  v3 = next(v2.animations)
  if v3 == nil then
    SpecializationUtil.removeEventListener(self, "onUpdate", AnimatedVehicle)
  end
end
function AnimatedVehicle:onDelete()
  if self.isClient and self.spec_animatedVehicle.animations ~= nil then
    for v5, v6 in pairs(self.spec_animatedVehicle.animations) do
      v7:deleteSamples(v6.samples)
      v7:deleteSamples(v6.eventSamples.stopTimePos)
      v7:deleteSamples(v6.eventSamples.stopTimeNeg)
    end
  end
end
function AnimatedVehicle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  AnimatedVehicle.updateAnimations(self, dt)
  if 0 < self.spec_animatedVehicle.fixedTimeSamplesDirtyDelay then
    self.spec_animatedVehicle.fixedTimeSamplesDirtyDelay = self.spec_animatedVehicle.fixedTimeSamplesDirtyDelay - 1
    if self.spec_animatedVehicle.fixedTimeSamplesDirtyDelay <= 0 then
      for v9, v10 in pairs(self.spec_animatedVehicle.animations) do
        if not (v5.activeAnimations[v10.name] == nil) then
          continue
        end
        if not self.isClient then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 45, target 67)
        local v15 = v15:getIsSamplePlaying(v10.samples[1])
        if v15 and v10.samples[1].loops == 0 then
          v15:stopSample(v10.samples[1])
        end
        -- TODO: structure LOP_FORNLOOP (pc 66, target 46)
      end
      v5.fixedTimeSamplesDirtyDelay = 0
    end
  end
  if 0 < v5.numActiveAnimations then
    self:raiseActive()
  end
end
function AnimatedVehicle:registerAnimationValueType(name, startName, endName, initialUpdate, classObject, load, get, set)
  if self.spec_animatedVehicle.animationValueTypes[name] == nil then
    self.spec_animatedVehicle.animationValueTypes[name] = {classObject = classObject, name = name, startName = startName, endName = endName, initialUpdate = initialUpdate, load = load, get = get, set = set}
  end
end
function AnimatedVehicle:loadAnimation(xmlFile, key, animation, components)
  local v5 = xmlFile:getValue(key .. "#name")
  if v5 ~= nil then
    animation.name = v5
    animation.parts = {}
    animation.currentTime = 0
    animation.previousTime = 0
    animation.currentSpeed = 1
    local v6 = xmlFile:getValue(key .. "#looping", false)
    animation.looping = v6
    v6 = xmlFile:getValue(key .. "#resetOnStart", true)
    animation.resetOnStart = v6
    v6 = xmlFile:getValue(key .. "#soundVolumeFactor", 1)
    animation.soundVolumeFactor = v6
    v6 = xmlFile:getValue(key .. "#isKeyframe", false)
    animation.isKeyframe = v6
    if animation.isKeyframe then
      animation.curvesByNode = {}
    end
    while true do
      v9 = string.format(".part(%d)", v6)
      v8 = xmlFile:hasProperty(key .. v9)
      if not v8 then
        break
      end
      if not animation.isKeyframe then
        v9 = self:loadAnimationPart(xmlFile, key .. v9, {}, animation, components)
        -- if not v9 then goto L110 end
        table.insert(animation.parts, {})
      else
        self:loadStaticAnimationPart(xmlFile, key .. v9, {}, animation, components)
      end
    end
    animation.partsReverse = {}
    for v10, v11 in ipairs(animation.parts) do
      table.insert(animation.partsReverse, v11)
    end
    table.sort(animation.parts, AnimatedVehicle.animPartSorter)
    table.sort(animation.partsReverse, AnimatedVehicle.animPartSorterReverse)
    self:initializeAnimationParts(animation)
    animation.currentPartIndex = 1
    animation.duration = 0
    for v10, v11 in ipairs(animation.parts) do
      local v12 = math.max(animation.duration, v11.startTime + v11.duration)
      animation.duration = v12
    end
    if animation.isKeyframe then
      for v10, v11 in pairs(animation.curvesByNode) do
        v12 = math.max(animation.duration, v11.maxTime)
        animation.duration = v12
      end
    end
    v7 = xmlFile:getValue(key .. "#startAnimTime", 0)
    animation.startTime = v7
    animation.currentTime = animation.startTime * animation.duration
    if self.isClient then
      animation.samples = {}
      while true do
        v8 = string.format("sound(%d)", v7)
        v10 = xmlFile:hasProperty(key .. "." .. v8)
        if not v10 then
          break
        end
        if not components then
        end
        v10 = v10:loadSampleFromXML(v12, v13, v14, v15, v16, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
        if v10 ~= nil then
          v11 = xmlFile:getValue(v9 .. "#startTime", 0)
          v10.startTime = v11
          v11 = xmlFile:getValue(v9 .. "#endTime")
          v10.endTime = v11
          v11 = xmlFile:getValue(v9 .. "#direction", 0)
          v10.direction = v11
          if v10.endTime == nil and v10.loops == 0 then
            v10.loops = 1
          end
          v10.volumeScale = v10.volumeScale * animation.soundVolumeFactor
          table.insert(animation.samples, v10)
        end
      end
      animation.eventSamples = {stopTimePos = {}, stopTimeNeg = {}}
      xmlFile:iterate(key .. ".stopTimePosSound", function(self, xmlFile)
        local v6 = string.format("stopTimePosSound(%d)", self - 1)
        if not u3 then
        end
        local key = key:loadSampleFromXML(components, v5, v6, v7, v8, 1, AudioGroup.VEHICLE, u2.i3dMappings, u2)
        if key ~= nil then
          table.insert(u4.eventSamples.stopTimePos, key)
        end
      end)
      xmlFile:iterate(key .. ".stopTimeNegSound", function(self, xmlFile)
        local v6 = string.format("stopTimeNegSound(%d)", self - 1)
        if not u3 then
        end
        local key = key:loadSampleFromXML(components, v5, v6, v7, v8, 1, AudioGroup.VEHICLE, u2.i3dMappings, u2)
        if key ~= nil then
          table.insert(u4.eventSamples.stopTimeNeg, key)
        end
      end)
    end
    return true
  end
  return false
end
function AnimatedVehicle:loadAnimationPart(xmlFile, partKey, part, animation, components)
  local v6 = xmlFile:getValue(partKey .. "#startTime")
  local v7 = xmlFile:getValue(partKey .. "#duration")
  local v8 = xmlFile:getValue(partKey .. "#endTime")
  local v10 = xmlFile:getValue(partKey .. "#direction", 0)
  local v9 = MathUtil.sign(...)
  if not components then
  end
  part.components = v10
  part.i3dMappings = self.i3dMappings
  part.animationValues = {}
  for v14, v15 in pairs(self.spec_animatedVehicle.animationValueTypes) do
    local v16 = v15.classObject.new(self, animation, part, v15.startName, v15.endName, v15.name, v15.initialUpdate, v15.get, v15.set, v15.load)
    local v17 = v16:load(xmlFile, partKey)
    if not v17 then
      continue
    end
    table.insert(part.animationValues, v16)
  end
  v11 = xmlFile:getValue(partKey .. "#requiredAnimation")
  v12 = xmlFile:getValue(partKey .. "#requiredAnimationRange", nil, true)
  v13 = xmlFile:getValue(partKey .. "#requiredConfigurationName")
  v14 = xmlFile:getValue(partKey .. "#requiredConfigurationIndex")
  -- TODO: structure LOP_FORNPREP (pc 119, target 153)
  part.animationValues[1].requiredAnimation = v11
  v18:addCompareParameters("requiredAnimation")
  if v12 ~= nil then
    local v19 = string.format("%.2f %.2f", v12[1], v12[2])
    part.animationValues[1].requiredAnimationRange = v19
    v18:addCompareParameters("requiredAnimationRange")
  end
  -- TODO: structure LOP_FORNLOOP (pc 152, target 120)
  if #part.animationValues == 0 then
    return false
  end
  if v6 ~= nil then
    if v7 == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L187
    end
    if v8 ~= nil then
    end
    part.startTime = v6 * 1000
    part.duration = v7 * 1000
    part.direction = v9
    part.requiredAnimation = v11
    part.requiredAnimationRange = v12
    part.requiredConfigurationName = v13
    part.requiredConfigurationIndex = v14
    return true
  end
  return false
end
function AnimatedVehicle:loadStaticAnimationPart(xmlFile, partKey, part, animation, components)
  local v6 = xmlFile:getValue(partKey .. "#node", nil, self.components, self.i3dMappings)
  if v6 ~= nil then
    local v7 = xmlFile:getValue(partKey .. "#time")
    local v8 = xmlFile:getValue(partKey .. "#startTime")
    local v9 = xmlFile:getValue(partKey .. "#endTime")
    if animation.curvesByNode[v6] == nil then
      local v11 = AnimCurve.new(linearInterpolatorTransRotScale)
      animation.curvesByNode[v6] = v11
    end
    if v7 ~= nil then
      self:loadStaticAnimationPartValues(xmlFile, partKey, animation.curvesByNode[v6], v6, "translation", "rotation", "scale", v7 * 1000)
    else
      if v8 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L109
      end
      if v8 ~= nil then
        if v10.maxTime ~= 0 then
          -- if v10.maxTime == v8 * 1000 then goto L87 end
        end
        self:loadStaticAnimationPartValues(xmlFile, partKey, v10, v6, "startTrans", "startRot", "startScale", v8)
      end
      if v9 ~= nil then
        if v10.maxTime ~= 0 then
          -- if v10.maxTime == v9 * 1000 then goto L109 end
        end
        self:loadStaticAnimationPartValues(xmlFile, partKey, v10, v6, "endTrans", "endRot", "endScale", v9)
      end
    end
    return true
  end
  return false
end
function AnimatedVehicle.loadStaticAnimationPartValues(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  local v9, v10, v11 = v1:getValue(v2 .. "#" .. v5)
  if v9 == nil then
    local v12, v13, v14 = getTranslation(v4)
  else
    v3.hasTranslation = true
  end
  v12, v13, v14 = v1:getValue(v2 .. "#" .. v6)
  if v12 == nil then
    local v15, v16, v17 = getRotation(v4)
  else
    v3.hasRotation = true
  end
  v15, v16, v17 = v1:getValue(v2 .. "#" .. v7)
  if v15 == nil then
    local v18, v19, v20 = getScale(v4)
  else
    v3.hasScale = true
  end
  v3:addKeyframe({x = v9, y = v10, z = v11, rx = v12, ry = v13, rz = v14, sx = v15, sy = v16, sz = v17, time = v8})
end
function AnimatedVehicle:initializeAnimationParts(animation)
  for v6, v7 in ipairs(animation.parts) do
    self:initializeAnimationPart(animation, v7, v6, v2)
  end
  for v6, v7 in ipairs(animation.parts) do
    self:postInitializeAnimationPart(animation, v7, v6, v2)
  end
end
function AnimatedVehicle.initializeAnimationPart(v0, v1, v2, v3, v4)
  -- TODO: structure LOP_FORNPREP (pc 5, target 15)
  v8:init(v3, v4)
  -- TODO: structure LOP_FORNLOOP (pc 14, target 6)
end
function AnimatedVehicle.postInitializeAnimationPart(v0, v1, v2, v3, v4)
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v8:postInit()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
end
function AnimatedVehicle:playAnimation(name, speed, animTime, noEventSend, allowSounds)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    SpecializationUtil.raiseEvent(self, "onPlayAnimation", name)
    if speed == nil then
    end
    if speed ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000007 -> L22
    end
    return
    if animTime == nil then
      local v8 = self:getIsAnimationPlaying(name)
      if v8 then
        v8 = self:getAnimationTime(name)
      elseif 0 < speed then
      else
      end
    end
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L80
    end
    if g_server ~= nil then
      local v10 = AnimatedVehicleStartEvent.new(self, name, speed, animTime)
      v8:broadcastEvent(v10, nil, nil, self)
    else
      v8 = v8:getServerConnection()
      v10 = AnimatedVehicleStartEvent.new(self, name, speed, animTime)
      v8:sendEvent(...)
    end
    if v6.activeAnimations[name] == nil then
      v6.activeAnimations[name] = v7
      v6.numActiveAnimations = v6.numActiveAnimations + 1
      SpecializationUtil.raiseEvent(self, "onStartAnimation", name, speed)
    end
    v7.currentSpeed = speed
    v7.currentTime = animTime * v7.duration
    self:resetAnimationValues(v7)
    self:raiseActive()
  end
end
function AnimatedVehicle:stopAnimation(name, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v6 = AnimatedVehicleStopEvent.new(self, name)
    noEventSend:broadcastEvent(v6, nil, nil, self)
  else
    local noEventSend = noEventSend:getServerConnection()
    v6 = AnimatedVehicleStopEvent.new(self, name)
    noEventSend:sendEvent(...)
  end
  if animTime.animations[name] ~= nil then
    SpecializationUtil.raiseEvent(self, "onStopAnimation", name)
    animTime.animations[name].stopTime = nil
    if self.isClient then
      -- TODO: structure LOP_FORNPREP (pc 59, target 74)
      if animTime.animations[name].samples[1].loops == 0 then
        v9:stopSample(animTime.animations[name].samples[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 73, target 60)
    end
  end
  if animTime.activeAnimations[name] ~= nil then
    animTime.numActiveAnimations = animTime.numActiveAnimations - 1
    animTime.activeAnimations[name] = nil
    SpecializationUtil.raiseEvent(self, "onFinishAnimation", name)
  end
end
function AnimatedVehicle:getAnimationExists(name)
  if self.spec_animatedVehicle.animations[name] == nil then
  end
  return true
end
function AnimatedVehicle:getAnimationByName(name)
  return self.spec_animatedVehicle.animations[name]
end
function AnimatedVehicle:getIsAnimationPlaying(name)
  if self.spec_animatedVehicle.activeAnimations[name] == nil then
  end
  return true
end
function AnimatedVehicle:getRealAnimationTime(name)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    return self.spec_animatedVehicle.animations[name].currentTime
  end
  return 0
end
function AnimatedVehicle:setRealAnimationTime(name, animTime, update, playSounds)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    if update ~= nil then
      -- if not v3 then goto L49 end
    end
    v6.currentSpeed = 1
    if animTime < v6.currentTime then
      v6.currentSpeed = -1
    end
    self:resetAnimationValues(v6)
    local v8, v9 = AnimatedVehicle.updateAnimationCurrentTime(self, v6, 99999999, animTime)
    AnimatedVehicle.updateAnimation(self, v6, v8, true, true, playSounds)
    v6.currentSpeed = v7
    return
    v6.currentTime = animTime
  end
end
function AnimatedVehicle:getAnimationTime(name)
  if self.spec_animatedVehicle.animations[name] ~= nil and 0 < self.spec_animatedVehicle.animations[name].duration then
    return self.spec_animatedVehicle.animations[name].currentTime / self.spec_animatedVehicle.animations[name].duration
  end
  return 0
end
function AnimatedVehicle:setAnimationTime(name, animTime, update, playSounds)
  if self.spec_animatedVehicle.animations == nil then
    printCallstack()
  end
  if allowSounds.animations[name] ~= nil then
    self:setRealAnimationTime(name, animTime * allowSounds.animations[name].duration, update, playSounds)
  end
end
function AnimatedVehicle:getAnimationDuration(name)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    return self.spec_animatedVehicle.animations[name].duration
  end
  return 1
end
function AnimatedVehicle:setAnimationSpeed(name, speed)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    if 0 >= self.spec_animatedVehicle.animations[name].currentSpeed then
    end
    if 0 >= speed then
    end
    if v6 ~= true then
    end
    noEventSend.currentSpeed = speed
    local v6 = self:getIsAnimationPlaying(name)
    if v6 and allowSounds then
      self:resetAnimationValues(noEventSend)
    end
  end
end
function AnimatedVehicle:getAnimationSpeed(name)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    return self.spec_animatedVehicle.animations[name].currentSpeed
  end
  return 0
end
function AnimatedVehicle:setAnimationStopTime(name, stopTime)
  if self.spec_animatedVehicle.animations[name] ~= nil then
    self.spec_animatedVehicle.animations[name].stopTime = stopTime * self.spec_animatedVehicle.animations[name].duration
  end
end
function AnimatedVehicle:resetAnimationValues(animation)
  AnimatedVehicle.findCurrentPartIndex(animation)
  for allowSounds, v6 in ipairs(animation.parts) do
    self:resetAnimationPartValues(v6)
  end
end
function AnimatedVehicle.resetAnimationPartValues(v0, name)
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  allowSounds:reset()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
end
function AnimatedVehicle.loadSpeedRotatingPartFromXML(v0, name, speed, animTime, noEventSend)
  local allowSounds = name(v0, speed, animTime, noEventSend)
  if not allowSounds then
    return false
  end
  allowSounds = animTime:getValue(noEventSend .. "#animName")
  speed.animName = allowSounds
  allowSounds = animTime:getValue(noEventSend .. "#animOuterRange", false)
  speed.animOuterRange = allowSounds
  allowSounds = animTime:getValue(noEventSend .. "#animMinLimit", 0)
  speed.animMinLimit = allowSounds
  allowSounds = animTime:getValue(noEventSend .. "#animMaxLimit", 1)
  speed.animMaxLimit = allowSounds
  return true
end
function AnimatedVehicle:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.animName ~= nil then
    local animTime = self:getAnimationTime(speedRotatingPart.animName)
    if speedRotatingPart.animOuterRange then
      if speedRotatingPart.animMinLimit >= animTime then
        -- if v3 >= v2.animMaxLimit then goto L33 end
      end
      return false
    else
      if speedRotatingPart.animMaxLimit >= animTime then
        -- if v3 >= v2.animMinLimit then goto L33 end
      end
      return false
    end
  end
  animTime = superFunc(self, speedRotatingPart)
  return animTime
end
function AnimatedVehicle.loadWorkAreaFromXML(v0, name, speed, animTime, noEventSend)
  local allowSounds = animTime:getValue(noEventSend .. "#animName")
  speed.animName = allowSounds
  allowSounds = animTime:getValue(noEventSend .. "#animMinLimit", 0)
  speed.animMinLimit = allowSounds
  allowSounds = animTime:getValue(noEventSend .. "#animMaxLimit", 1)
  speed.animMaxLimit = allowSounds
  allowSounds = name(v0, speed, animTime, noEventSend)
  return allowSounds
end
function AnimatedVehicle:getIsWorkAreaActive(superFunc, workArea)
  if workArea.animName ~= nil then
    local animTime = self:getAnimationTime(workArea.animName)
    if workArea.animMaxLimit >= animTime then
      -- if v3 >= v2.animMinLimit then goto L19 end
    end
    return false
  end
  animTime = superFunc(self, workArea)
  return animTime
end
function AnimatedVehicle:initializeAnimationPartAttribute(animation, part, i, numParts, nextName, prevName, startName, endName, warningName, startName2, endName2, additionalCompareParam)
  if part[endName] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 6, target 143)
    if additionalCompareParam ~= nil and part[additionalCompareParam] ~= animation.parts[i + 1][additionalCompareParam] then
    end
    if part.requiredAnimation ~= nil and part.requiredAnimation == v16.requiredAnimation then
      for v22, v23 in ipairs(part.requiredAnimationRange) do
        if not (v16.requiredAnimationRange[v22] ~= v23) then
          continue
        end
      end
    end
    if part.requiredConfigurationName ~= nil and part.requiredConfigurationName == v16.requiredConfigurationName and part.requiredConfigurationIndex ~= v16.requiredConfigurationIndex then
    end
    if part.direction == v16.direction and part.node == v16.node and v16[endName] ~= nil and v17 and v18 and v19 then
      if part.direction == v16.direction and v16.startTime + 0.001 < part.startTime + part.duration then
        local v24 = getName(part.node)
        Logging.xmlWarning(self.xmlFile, "Overlapping %s parts for node '%s' in animation '%s'", warningName, v24, animation.name)
      end
      part[nextName] = v16
      v16[prevName] = part
      if v16[startName] == nil then
        v21 = unpack(part[endName])
        v16[startName] = {}
      end
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L143
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L143
      -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x80000000 -> L143
      v21 = unpack(part[endName2])
      v16[startName2] = {}
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 142, target 7)
  end
end
function AnimatedVehicle:animPartSorter(name)
  if self.startTime < name.startTime then
    return true
  end
  if self.startTime == name.startTime then
    if self.duration >= name.duration then
    end
    return true
  end
  return false
end
function AnimatedVehicle:animPartSorterReverse(name)
  if name.startTime + name.duration < self.startTime + self.duration then
    return true
  end
  if speed == animTime then
    if name.startTime >= self.startTime then
    end
    return true
  end
  return false
end
function AnimatedVehicle.getMovedLimitedValue(currentValue, destValue, speed, dt)
  if destValue == currentValue then
    return currentValue
  end
  if destValue < currentValue then
    -- if math.max then goto L10 end
  end
  return math.min(currentValue + speed * dt, destValue)
end
function AnimatedVehicle.setMovedLimitedValuesN(n, currentValues, destValues, speeds, dt)
  -- TODO: structure LOP_FORNPREP (pc 4, target 20)
  local v9 = AnimatedVehicle.getMovedLimitedValue(currentValues[1], destValues[1], speeds[1], dt)
  if currentValues[1] ~= v9 then
    currentValues[1] = v9
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 5)
  return allowSounds
end
function AnimatedVehicle.setMovedLimitedValues3(currentValues, destValues, speeds, dt)
  return AnimatedVehicle.setMovedLimitedValuesN(3, currentValues, destValues, speeds, dt)
end
function AnimatedVehicle.setMovedLimitedValues4(currentValues, destValues, speeds, dt)
  return AnimatedVehicle.setMovedLimitedValuesN(4, currentValues, destValues, speeds, dt)
end
function AnimatedVehicle:findCurrentPartIndex()
  if 0 < self.currentSpeed then
    self.currentPartIndex = #self.parts + 1
    for noEventSend, allowSounds in ipairs(self.parts) do
      if not (self.currentTime <= allowSounds.startTime + allowSounds.duration) then
        continue
      end
      self.currentPartIndex = noEventSend
      return
    end
    return
  end
  self.currentPartIndex = #self.partsReverse + 1
  for noEventSend, allowSounds in ipairs(self.partsReverse) do
    if not (allowSounds.startTime <= self.currentTime) then
      continue
    end
    self.currentPartIndex = noEventSend
    return
  end
end
function AnimatedVehicle:getDurationToEndOfPart(name)
  if 0 < name.currentSpeed then
    return self.startTime + self.duration - name.currentTime
  end
  return name.currentTime - self.startTime
end
function AnimatedVehicle:getNextPartIsPlaying(name, speed, animTime)
  if 0 < speed.currentSpeed then
    -- cmp-jump LOP_JUMPXEQKNIL R0 aux=0x0 -> L31
    if speed.currentTime >= self.startTime then
    end
    return true
    return animTime
  end
  if name ~= nil then
    if name.startTime + name.duration >= speed.currentTime then
    end
    return true
  end
  return animTime
end
function AnimatedVehicle:updateAnimations(dt, fixedTimeUpdate)
  for v7, v8 in pairs(self.spec_animatedVehicle.activeAnimations) do
    local v9, v10 = AnimatedVehicle.updateAnimationCurrentTime(self, v8, dt, v8.stopTime)
    AnimatedVehicle.updateAnimation(self, v8, v9, v10, fixedTimeUpdate)
  end
end
function AnimatedVehicle:updateAnimationByName(animName, dt, fixedTimeUpdate)
  if self.spec_animatedVehicle.animations[animName] ~= nil then
    local v6, v7 = AnimatedVehicle.updateAnimationCurrentTime(self, self.spec_animatedVehicle.animations[animName], dt, self.spec_animatedVehicle.animations[animName].stopTime)
    AnimatedVehicle.updateAnimation(self, self.spec_animatedVehicle.animations[animName], v6, v7, fixedTimeUpdate)
  end
end
function AnimatedVehicle.updateAnimationCurrentTime(v0, name, speed, animTime)
  name.previousTime = name.currentTime
  name.currentTime = name.currentTime + speed * name.currentSpeed
  local noEventSend = math.abs(name.currentSpeed)
  if animTime ~= nil then
    if 0 < name.currentSpeed then
      -- if v3 > v1.currentTime then goto L50 end
      name.currentTime = animTime
      return speed * noEventSend - name.currentTime - animTime, true
    end
    if name.currentTime <= animTime then
      name.currentTime = animTime
    end
  end
  return allowSounds, v6
end
function AnimatedVehicle:updateAnimation(anim, dtToUse, stopAnim, fixedTimeUpdate, playSounds)
  if anim.currentSpeed < 0 then
  end
  if 0 < dtToUse then
    if not anim.isKeyframe then
      -- TODO: structure LOP_FORNPREP (pc 27, target 188)
      if v9[anim.currentPartIndex].requiredAnimation ~= nil then
        local v17 = self:getAnimationTime(v9[anim.currentPartIndex].requiredAnimation)
        if v17 >= v9[anim.currentPartIndex].requiredAnimationRange[1] then
          -- if v9[v1.currentPartIndex].requiredAnimationRange[2] >= v17 then goto L50 end
        end
      end
      if v15.requiredConfigurationName ~= nil and self.configurations[v15.requiredConfigurationName] ~= nil and self.configurations[v15.requiredConfigurationName] ~= v15.requiredConfigurationIndex then
      end
      if v15.direction ~= 0 then
        if 0 >= v15.direction then
        end
        if 0 > anim.currentSpeed then
        end
        -- if v18 ~= true then goto L149 end
      end
      if v16 and v17 then
        local v18 = AnimatedVehicle.getDurationToEndOfPart(v15, anim)
        if v15.duration < v18 then
          -- goto L188  (LOP_JUMP +81)
        end
        if 0 < anim.currentSpeed then
          -- if v1.currentTime - v2 >= v15.startTime then goto L137 end
        elseif v15.startTime + v15.duration < anim.currentTime + dtToUse then
        end
        local v20 = self:updateAnimationPart(anim, v15, v18 + v19, dtToUse, v19, fixedTimeUpdate)
        if v20 then
        end
      end
      if v14 == anim.currentPartIndex then
        if 0 < anim.currentSpeed then
          -- if v15.startTime + v15.duration < v1.currentTime then goto L178 end
        end
        if anim.currentSpeed <= 0 and anim.currentTime < v15.startTime then
          self:resetAnimationPartValues(v15)
          anim.currentPartIndex = anim.currentPartIndex + 1
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 187, target 28)
      -- if v11 then goto L277 end
      -- if v10 then goto L277 end
      -- if v8 > v1.currentPartIndex then goto L277 end
      anim.previousTime = anim.currentTime
      if 0 < anim.currentSpeed then
        anim.currentTime = anim.duration
      else
        anim.currentTime = 0
      end
    else
      for v15, v16 in pairs(anim.curvesByNode) do
        local v17, v18, v19, v20, v21, v22, v23, v24, v25 = v16:get(anim.currentTime)
        if v16.hasTranslation then
          setTranslation(v15, v17, v18, v19)
        end
        if v16.hasRotation then
          setRotation(v15, v20, v21, v22)
        end
        if v16.hasScale then
          setScale(v15, v23, v24, v25)
        end
        SpecializationUtil.raiseEvent(self, "onAnimationPartChanged", v15)
      end
      if anim.currentTime > 0 and anim.duration > anim.currentTime then
      end
    end
    if v6.activeAnimations[anim.name] == nil then
      -- cmp-jump LOP_JUMPXEQKB R5 aux=0x80000001 -> L487
    end
    if fixedTimeUpdate == true then
      -- cmp-jump LOP_JUMPXEQKB R5 aux=0x80000001 -> L470
    end
    -- TODO: structure LOP_FORNPREP (pc 295, target 470)
    v16 = v16:getIsSamplePlaying(anim.samples[1])
    if v16 then
      -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L469
      if 0 < anim.currentSpeed then
        -- if v1.samples[1].endTime >= v1.currentTime then goto L469 end
        v16:stopSample(anim.samples[1])
        -- goto L469  (LOP_JUMP +141)
      end
      -- if v1.currentTime >= v15.startTime then goto L469 end
      v16:stopSample(v15)
    else
      if anim.samples[1].direction ~= 0 then
        if 0 > anim.samples[1].direction then
        end
        if 0 > anim.currentSpeed then
        end
        -- if v16 ~= true then goto L469 end
      end
      if v15.loops ~= 0 then
        if v15.endTime ~= nil then
          if anim.previousTime >= v15.startTime and v15.endTime >= anim.previousTime then
          end
          v15.readyToStart = v16
          -- goto L417  (LOP_JUMP +30)
        end
        if anim.currentSpeed < 0 then
          if v15.startTime >= anim.previousTime then
          end
          v15.readyToStart = true
          -- goto L417  (LOP_JUMP +14)
        end
        if anim.previousTime >= v15.startTime then
        end
        v15.readyToStart = true
      else
        v15.readyToStart = true
      end
      if v15.startTime > anim.currentTime then
      end
      if v15.endTime ~= nil then
        if v15.startTime <= anim.currentTime and anim.currentTime > v15.endTime then
        end
      elseif anim.currentSpeed < 0 and anim.currentTime > v15.startTime then
      end
      if v15.readyToStart and v16 then
        v17:playSample(v15)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 469, target 296)
    SpecializationUtil.raiseEvent(self, "onUpdateAnimation", anim.name)
    if v6.activeAnimations[anim.name] == nil then
      v6.fixedTimeSamplesDirtyDelay = 2
    end
  end
  if not stopAnim then
    -- if 0 >= v8 then goto L675 end
    if v8 >= anim.currentPartIndex then
      -- if v1.currentPartIndex >= 1 then goto L675 end
    end
  end
  anim.previousTime = anim.currentTime
  if not stopAnim then
    if 0 < anim.currentSpeed then
      anim.currentTime = anim.duration
    else
      anim.currentTime = 0
    end
  end
  local v11 = math.max(anim.currentTime, 0)
  local v10 = math.min(v11, anim.duration)
  anim.currentTime = v10
  if anim.stopTime == anim.currentTime then
  end
  anim.stopTime = nil
  if v6.activeAnimations[anim.name] ~= nil then
    v6.numActiveAnimations = v6.numActiveAnimations - 1
    if self.isClient then
      -- TODO: structure LOP_FORNPREP (pc 571, target 586)
      if v6.activeAnimations[anim.name].samples[1].loops == 0 then
        v16:stopSample(v6.activeAnimations[anim.name].samples[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 585, target 572)
      if v7 then
        if 0 < anim.currentSpeed then
          -- TODO: structure LOP_FORNPREP (pc 599, target 631)
          v15:playSample(v11.eventSamples.stopTimePos[1])
          -- TODO: structure LOP_FORNLOOP (pc 610, target 600)
        else
          -- TODO: structure LOP_FORNPREP (pc 619, target 631)
          v15:playSample(v11.eventSamples.stopTimeNeg[1])
          -- TODO: structure LOP_FORNLOOP (pc 630, target 620)
        end
      end
    end
    v6.activeAnimations[anim.name] = nil
    SpecializationUtil.raiseEvent(self, "onFinishAnimation", anim.name)
  end
  if v10 and fixedTimeUpdate ~= true and anim.looping then
    v14 = math.abs(anim.currentTime / anim.duration - 1)
    self:setAnimationTime(anim.name, v14, true)
    self:playAnimation(anim.name, anim.currentSpeed, nil, true)
  end
end
function AnimatedVehicle.updateAnimationPart(v0, anim, dtToUse, stopAnim, fixedTimeUpdate, playSounds, v6)
  -- TODO: structure LOP_FORNPREP (pc 6, target 19)
  local v11 = v11:update(stopAnim, fixedTimeUpdate, playSounds, v6)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 7)
  return false or v11
end
function AnimatedVehicle:getNumOfActiveAnimations()
  return self.spec_animatedVehicle.numActiveAnimations
end
function AnimatedVehicle:onRegisterAnimationValueTypes()
  self:registerAnimationValueType("rotation", "startRot", "endRot", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    if self.node ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    return getRotation(self.node)
  end, function(self, ...)
    setRotation(...)
    SpecializationUtil.raiseEvent(u0, "onAnimationPartChanged", self.node)
  end)
  self:registerAnimationValueType("translation", "startTrans", "endTrans", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    if self.node ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    return getTranslation(self.node)
  end, function(self, ...)
    setTranslation(...)
    SpecializationUtil.raiseEvent(u0, "onAnimationPartChanged", self.node)
  end)
  self:registerAnimationValueType("scale", "startScale", "endScale", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    if self.node ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    return getScale(self.node)
  end, function(self, ...)
    setScale(...)
    SpecializationUtil.raiseEvent(u0, "onAnimationPartChanged", self.node)
  end)
  self:registerAnimationValueType("shaderParameter", "shaderStartValues", "shaderEndValues", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    stopAnim = anim:getValue(dtToUse .. "#shaderParameter")
    self.shaderParameter = stopAnim
    stopAnim = anim:getValue(dtToUse .. "#shaderParameterPrev")
    self.shaderParameterPrev = stopAnim
    if self.node ~= nil and self.shaderParameter ~= nil then
      stopAnim = getHasClassId(self.node, ClassIds.SHAPE)
      if stopAnim then
        stopAnim = getHasShaderParameter(self.node, self.shaderParameter)
        if stopAnim then
          local v10 = getName(self.node)
          self:setWarningInformation("node: " .. v10 .. "with shaderParam: " .. self.shaderParameter)
          self:addCompareParameters("node", "shaderParameter")
          self.shaderParameterMask = {1, 1, 1, 1}
          stopAnim = u0(anim, dtToUse .. "#shaderStartValues", self.shaderParameterMask)
          self.customShaderParameterMask = stopAnim
          stopAnim = u0(anim, dtToUse .. "#shaderEndValues", self.shaderParameterMask)
          if not stopAnim then
          end
          self.customShaderParameterMask = stopAnim
          if self.shaderParameterPrev ~= nil then
            stopAnim = getHasShaderParameter(self.node, self.shaderParameterPrev)
            -- if v3 then goto L165 end
            local v6 = getName(self.node)
            Logging.xmlWarning(anim, "Node '%s' has no shaderParameterPrev '%s' for animation part '%s'!", v6, self.shaderParameterPrev, dtToUse)
            return false
          else
            local v7 = v7:sub(1, 1)
            v7 = v7:upper()
            v6 = v6:sub(2)
            local fixedTimeUpdate = getHasShaderParameter(self.node, "prev" .. v7 .. v6)
            if fixedTimeUpdate then
              self.shaderParameterPrev = "prev" .. v7 .. v6
            end
          end
          return true
        end
      end
      v6 = getName(self.node)
      Logging.xmlWarning(anim, "Node '%s' has no shaderParameter '%s' for animation part '%s'!", v6, self.shaderParameter, dtToUse)
    end
    return false
  end, function(self)
    return getShaderParameter(self.node, self.shaderParameter)
  end, function(self, anim, dtToUse, stopAnim, fixedTimeUpdate)
    if self.customShaderParameterMask then
      local playSounds, v6, v7, v8 = getShaderParameter(self.node, self.shaderParameter)
      if self.shaderParameterMask[1] == 0 then
      end
      if self.shaderParameterMask[2] == 0 then
      end
      if self.shaderParameterMask[3] == 0 then
      end
      if self.shaderParameterMask[4] == 0 then
      end
    end
    if self.shaderParameterPrev ~= nil then
      playSounds:setPrevShaderParameter(self.node, self.shaderParameter, anim, dtToUse, stopAnim, fixedTimeUpdate, false, self.shaderParameterPrev)
      return
    end
    setShaderParameter(self.node, self.shaderParameter, anim, dtToUse, stopAnim, fixedTimeUpdate, false)
  end)
  self:registerAnimationValueType("visibility", "visibility", "", false, AnimationValueBool, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    if self.node ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    return getVisibility(self.node)
  end, function(self, ...)
    setVisibility(...)
  end)
  self:registerAnimationValueType("visibilityInter", "startVisibility", "endVisibility", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    if self.node ~= nil and self.startValue ~= nil and self.endValue ~= nil then
      local v7 = getName(self.node)
      self:setWarningInformation("node: " .. v7)
      self:addCompareParameters("node")
      return true
    end
    return false
  end, function(self)
    if self.lastVisibilityValue ~= nil then
      return self.lastVisibilityValue
    end
    local dtToUse = getVisibility(self.node)
    if dtToUse then
      return 1
    end
    return 0
  end, function(self, anim)
    self.lastVisibilityValue = anim
    if 0.5 > anim then
    end
    dtToUse(stopAnim, true)
  end)
  self:registerAnimationValueType("animationClip", "clipStartTime", "clipEndTime", true, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    stopAnim = anim:getValue(dtToUse .. "#animationClip")
    self.animationClip = stopAnim
    if self.node ~= nil and self.animationClip ~= nil then
      stopAnim = getAnimCharacterSet(self.node)
      self.animationCharSet = stopAnim
      stopAnim = getAnimClipIndex(self.animationCharSet, self.animationClip)
      self.animationClipIndex = stopAnim
      local v10 = getName(self.node)
      self:setWarningInformation("node: " .. v10 .. "with animationClip: " .. self.animationClip)
      self:addCompareParameters("node", "animationClip")
      return true
    end
    return false
  end, function(self)
    local anim = getAnimTrackAssignedClip(self.animationCharSet, 0)
    clearAnimTrackClip(self.animationCharSet, 0)
    assignAnimTrackClip(self.animationCharSet, 0, self.animationClipIndex)
    if anim == self.animationClipIndex then
      return getAnimTrackTime(self.animationCharSet, 0)
    end
    if not self.startValue then
    end
    if self.animation.currentSpeed < 0 and not self.endValue then
    end
    return dtToUse[1]
  end, function(self, anim)
    local dtToUse = getAnimTrackAssignedClip(self.animationCharSet, 0)
    if dtToUse ~= self.animationClipIndex then
      clearAnimTrackClip(self.animationCharSet, 0)
      assignAnimTrackClip(self.animationCharSet, 0, self.animationClipIndex)
    end
    enableAnimTrack(self.animationCharSet, 0)
    setAnimTrackTime(self.animationCharSet, 0, anim, true)
    disableAnimTrack(self.animationCharSet, 0)
  end)
  self:registerAnimationValueType("dependentAnimation", "dependentAnimationStartTime", "dependentAnimationEndTime", true, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#dependentAnimation")
    self.dependentAnimation = stopAnim
    if self.dependentAnimation ~= nil then
      self:setWarningInformation("dependentAnimation: " .. self.dependentAnimation)
      self:addCompareParameters("dependentAnimation")
      return true
    end
    return false
  end, function(self)
    return anim:getAnimationTime(self.dependentAnimation)
  end, function(self, anim)
    dtToUse:setAnimationTime(self.dependentAnimation, anim, true)
  end)
  if self.isServer then
    self:registerAnimationValueType("rotLimit", "", "", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#startRotLimit", nil, true)
      self.startRotLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#startRotMinLimit", nil, true)
      self.startRotMinLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#startRotMaxLimit", nil, true)
      self.startRotMaxLimit = stopAnim
      if self.startRotLimit ~= nil then
        if self.startRotMinLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid rotLimit definition. 'startRotMinLimit' defined but overwritten by defined 'startRotLimit'! (%s)", dtToUse)
        end
        if self.startRotMaxLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid rotLimit definition. 'startRotMaxLimit' defined but overwritten by defined 'startRotLimit'! (%s)", dtToUse)
        end
        self.startRotMinLimit = {-self.startRotLimit[1], -self.startRotLimit[2], -self.startRotLimit[3]}
        self.startRotMaxLimit = {self.startRotLimit[1], self.startRotLimit[2], self.startRotLimit[3]}
      end
      stopAnim = anim:getValue(dtToUse .. "#endRotLimit", nil, true)
      self.endRotLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endRotMinLimit", nil, true)
      self.endRotMinLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endRotMaxLimit", nil, true)
      self.endRotMaxLimit = stopAnim
      if self.endRotLimit ~= nil then
        if self.endRotMinLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid rotLimit definition. 'endRotMinLimit' defined but overwritten by defined 'endRotLimit'! (%s)", dtToUse)
        end
        if self.endRotMaxLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid rotLimit definition. 'endRotMaxLimit' defined but overwritten by defined 'endRotLimit'! (%s)", dtToUse)
        end
        self.endRotMinLimit = {-self.endRotLimit[1], -self.endRotLimit[2], -self.endRotLimit[3]}
        self.endRotMaxLimit = {self.endRotLimit[1], self.endRotLimit[2], self.endRotLimit[3]}
      end
      stopAnim = anim:getValue(dtToUse .. "#componentJointIndex")
      if stopAnim ~= nil then
        if 1 <= stopAnim then
          self.componentJoint = self.vehicle.componentJoints[stopAnim]
        end
        if self.componentJoint == nil then
          Logging.xmlWarning(anim, "Invalid componentJointIndex for animation part '%s'. Indexing starts with 1!", dtToUse)
          return false
        end
      end
      if self.endRotMinLimit ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L220
      end
      if self.endRotMinLimit == nil and self.endRotMaxLimit ~= nil then
        Logging.xmlWarning(anim, "Incomplete end trans limit for animation part '%s'.", dtToUse)
        return false
      end
      if self.componentJoint ~= nil and self.endRotMinLimit ~= nil and self.endRotMaxLimit ~= nil then
        if self.startRotMinLimit ~= nil and self.startRotMaxLimit ~= nil then
          self.startValue = {self.startRotMinLimit[1], self.startRotMinLimit[2], self.startRotMinLimit[3], self.startRotMaxLimit[1], self.startRotMaxLimit[2], self.startRotMaxLimit[3]}
        end
        if self.endRotMinLimit ~= nil and self.endRotMaxLimit ~= nil then
          self.endValue = {self.endRotMinLimit[1], self.endRotMinLimit[2], self.endRotMinLimit[3], self.endRotMaxLimit[1], self.endRotMaxLimit[2], self.endRotMaxLimit[3]}
        end
        if self.endValue == nil then
          Logging.xmlWarning(anim, "Missing end rot limit for animation part '%s'.", dtToUse)
          return false
        end
        self.endName = "rotLimit"
        self:setWarningInformation("componentJointIndex: " .. stopAnim)
        self:addCompareParameters("componentJoint")
        return true
      end
      return false
    end, function(self)
      return self.componentJoint.rotMinLimit[1], self.componentJoint.rotMinLimit[2], self.componentJoint.rotMinLimit[3], self.componentJoint.rotLimit[1], self.componentJoint.rotLimit[2], self.componentJoint.rotLimit[3]
    end, function(self, anim, dtToUse, stopAnim, fixedTimeUpdate, playSounds, v6)
      v7:setComponentJointRotLimit(self.componentJoint, 1, anim, fixedTimeUpdate)
      v7:setComponentJointRotLimit(self.componentJoint, 2, dtToUse, playSounds)
      v7:setComponentJointRotLimit(self.componentJoint, 3, stopAnim, v6)
    end)
    self:registerAnimationValueType("transLimit", "", "", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#startTransLimit", nil, true)
      self.startTransLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#startTransMinLimit", nil, true)
      self.startTransMinLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#startTransMaxLimit", nil, true)
      self.startTransMaxLimit = stopAnim
      if self.startTransLimit ~= nil then
        if self.startTransMinLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid transLimit definition. 'startTransMinLimit' defined but overwritten by defined 'startTransLimit'! (%s)", dtToUse)
        end
        if self.startTransMaxLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid transLimit definition. 'startTransMaxLimit' defined but overwritten by defined 'startTransLimit'! (%s)", dtToUse)
        end
        self.startTransMinLimit = {-self.startTransLimit[1], -self.startTransLimit[2], -self.startTransLimit[3]}
        self.startTransMaxLimit = {self.startTransLimit[1], self.startTransLimit[2], self.startTransLimit[3]}
      end
      stopAnim = anim:getValue(dtToUse .. "#endTransLimit", nil, true)
      self.endTransLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endTransMinLimit", nil, true)
      self.endTransMinLimit = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endTransMaxLimit", nil, true)
      self.endTransMaxLimit = stopAnim
      if self.endTransLimit ~= nil then
        if self.endTransMinLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid transLimit definition. 'endTransMinLimit' defined but overwritten by defined 'endTransLimit'! (%s)", dtToUse)
        end
        if self.endTransMaxLimit ~= nil then
          Logging.xmlWarning(anim, "Invalid transLimit definition. 'endTransMaxLimit' defined but overwritten by defined 'endTransLimit'! (%s)", dtToUse)
        end
        self.endTransMinLimit = {-self.endTransLimit[1], -self.endTransLimit[2], -self.endTransLimit[3]}
        self.endTransMaxLimit = {self.endTransLimit[1], self.endTransLimit[2], self.endTransLimit[3]}
      end
      stopAnim = anim:getValue(dtToUse .. "#componentJointIndex")
      if stopAnim ~= nil then
        if 1 <= stopAnim then
          self.componentJoint = self.vehicle.componentJoints[stopAnim]
        end
        if self.componentJoint == nil then
          Logging.xmlWarning(anim, "Invalid componentJointIndex for animation part '%s'. Indexing starts with 1!", dtToUse)
          return false
        end
      end
      if self.endTransMinLimit ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L220
      end
      if self.endTransMinLimit == nil and self.endTransMaxLimit ~= nil then
        Logging.xmlWarning(anim, "Incomplete end trans limit for animation part '%s'.", dtToUse)
        return false
      end
      if self.componentJoint ~= nil and self.endTransMinLimit ~= nil and self.endTransMaxLimit ~= nil then
        if self.startTransMinLimit ~= nil and self.startTransMaxLimit ~= nil then
          self.startValue = {self.startTransMinLimit[1], self.startTransMinLimit[2], self.startTransMinLimit[3], self.startTransMaxLimit[1], self.startTransMaxLimit[2], self.startTransMaxLimit[3]}
        end
        if self.endTransMinLimit ~= nil and self.endTransMaxLimit ~= nil then
          self.endValue = {self.endTransMinLimit[1], self.endTransMinLimit[2], self.endTransMinLimit[3], self.endTransMaxLimit[1], self.endTransMaxLimit[2], self.endTransMaxLimit[3]}
        end
        if self.endValue == nil then
          Logging.xmlWarning(anim, "Missing end trans limit for animation part '%s'.", dtToUse)
          return false
        end
        self.endName = "transLimit"
        self:setWarningInformation("componentJointIndex: " .. stopAnim)
        self:addCompareParameters("componentJoint")
        return true
      end
      return false
    end, function(self)
      return self.componentJoint.transMinLimit[1], self.componentJoint.transMinLimit[2], self.componentJoint.transMinLimit[3], self.componentJoint.transLimit[1], self.componentJoint.transLimit[2], self.componentJoint.transLimit[3]
    end, function(self, anim, dtToUse, stopAnim, fixedTimeUpdate, playSounds, v6)
      v7:setComponentJointTransLimit(self.componentJoint, 1, anim, fixedTimeUpdate)
      v7:setComponentJointTransLimit(self.componentJoint, 2, dtToUse, playSounds)
      v7:setComponentJointTransLimit(self.componentJoint, 3, stopAnim, v6)
    end)
    self:registerAnimationValueType("rotationLimitSpring", "", "", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#startRotLimitSpring", nil, true)
      self.startRotLimitSpring = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#startRotLimitDamping", nil, true)
      self.startRotLimitDamping = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endRotLimitSpring", nil, true)
      self.endRotLimitSpring = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#endRotLimitDamping", nil, true)
      self.endRotLimitDamping = stopAnim
      stopAnim = anim:getValue(dtToUse .. "#componentJointIndex")
      if stopAnim ~= nil then
        if 1 <= stopAnim then
          self.componentJoint = self.vehicle.componentJoints[stopAnim]
        end
        if self.componentJoint == nil then
          Logging.xmlWarning(anim, "Invalid componentJointIndex for animation part '%s'. Indexing starts with 1!", dtToUse)
          return false
        end
      end
      if self.componentJoint ~= nil then
        if self.endRotLimitSpring == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L173
        end
        if self.startRotLimitSpring ~= nil and self.startRotLimitDamping ~= nil then
          self.startValue = {self.startRotLimitSpring[1], self.startRotLimitSpring[2], self.startRotLimitSpring[3], self.startRotLimitDamping[1], self.startRotLimitDamping[2], self.startRotLimitDamping[3]}
        end
        if self.endRotLimitSpring ~= nil and self.endRotLimitDamping ~= nil then
          self.endValue = {self.endRotLimitSpring[1], self.endRotLimitSpring[2], self.endRotLimitSpring[3], self.endRotLimitDamping[1], self.endRotLimitDamping[2], self.endRotLimitDamping[3]}
        end
        if self.endValue == nil then
          Logging.xmlWarning(anim, "Missing 'endRotLimitSpring' or 'endRotLimitDamping' for animation part '%s'.", dtToUse)
          return false
        end
        self.endName = "rotationLimitSpring"
        self:setWarningInformation("componentJointIndex: " .. stopAnim)
        self:addCompareParameters("componentJoint")
        return true
      end
      return false
    end, function(self)
      return self.componentJoint.rotLimitSpring[1], self.componentJoint.rotLimitSpring[2], self.componentJoint.rotLimitSpring[3], self.componentJoint.rotLimitDamping[1], self.componentJoint.rotLimitDamping[2], self.componentJoint.rotLimitDamping[3]
    end, function(self, anim, dtToUse, stopAnim, fixedTimeUpdate, playSounds, v6)
      self.componentJoint.rotLimitSpring[1] = anim
      self.componentJoint.rotLimitSpring[2] = dtToUse
      self.componentJoint.rotLimitSpring[3] = stopAnim
      self.componentJoint.rotLimitDamping[1] = fixedTimeUpdate
      self.componentJoint.rotLimitDamping[2] = playSounds
      self.componentJoint.rotLimitDamping[3] = v6
      if self.componentJoint.jointIndex ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 39, target 59)
        setJointRotationLimitSpring(self.componentJoint.jointIndex, 1 - 1, self.componentJoint.rotLimitSpring[1], self.componentJoint.rotLimitDamping[1])
        -- TODO: structure LOP_FORNLOOP (pc 58, target 40)
      end
    end)
    self:registerAnimationValueType("componentMass", "startMass", "endMass", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#componentIndex")
      if stopAnim ~= nil then
        if 1 <= stopAnim then
          self.component = self.vehicle.components[stopAnim]
        end
        if self.component == nil then
          Logging.xmlWarning(anim, "Invalid component for animation part '%s'. Indexing starts with 1!", dtToUse)
          return false
        end
      end
      if self.component ~= nil then
        self:setWarningInformation("componentIndex: " .. stopAnim)
        self:addCompareParameters("component")
        return true
      end
      return false
    end, function(self)
      local dtToUse = getMass(self.component.node)
      return dtToUse * 1000
    end, function(self, anim)
      setMass(self.component.node, anim * 0.001)
    end)
    self:registerAnimationValueType("centerOfMass", "startCenterOfMass", "endCenterOfMass", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#componentIndex")
      if stopAnim ~= nil then
        if 1 <= stopAnim then
          self.component = self.vehicle.components[stopAnim]
        end
        if self.component == nil then
          Logging.xmlWarning(anim, "Invalid component for animation part '%s'. Indexing starts with 1!", dtToUse)
          return false
        end
      end
      if self.component ~= nil then
        self:setWarningInformation("componentIndex: " .. stopAnim)
        self:addCompareParameters("component")
        return true
      end
      return false
    end, function(self)
      return getCenterOfMass(self.component.node)
    end, function(self, anim, dtToUse, stopAnim)
      setCenterOfMass(self.component.node, anim, dtToUse, stopAnim)
    end)
    self:registerAnimationValueType("frictionVelocity", "startFrictionVelocity", "endFrictionVelocity", false, AnimationValueFloat, function(self, anim, dtToUse)
      local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
      self.node = stopAnim
      if self.node ~= nil then
        local v7 = getName(self.node)
        self:setWarningInformation("node: " .. v7)
        self:addCompareParameters("node")
        return true
      end
      return false
    end, function(self)
      return self.lastFrictionVelocity or 0
    end, function(self, anim)
      setFrictionVelocity(self.node, anim)
      self.lastFrictionVelocity = anim
      if self.origTransX == nil then
        local dtToUse, stopAnim, fixedTimeUpdate = getTranslation(self.node)
        self.origTransX = dtToUse
        self.origTransY = stopAnim
        self.origTransZ = fixedTimeUpdate
      end
      local v7 = math.random()
      setTranslation(self.node, self.origTransX + v7 * 0.001, self.origTransY, self.origTransZ)
    end)
  end
  self:registerAnimationValueType("spline", "startSplinePos", "endSplinePos", false, AnimationValueFloat, function(self, anim, dtToUse)
    local stopAnim = anim:getValue(dtToUse .. "#node", nil, self.part.components, self.part.i3dMappings)
    self.node = stopAnim
    stopAnim = anim:getValue(dtToUse .. "#spline", nil, self.part.components, self.part.i3dMappings)
    self.spline = stopAnim
    if self.node ~= nil and self.spline ~= nil then
      local v10 = getName(self.node)
      local v9 = getName(self.spline)
      self:setWarningInformation("node:" .. v10 .. " with spline: " .. v9)
      self:addCompareParameters("node", "spline")
      return true
    end
    return false
  end, function(self)
    if self.lastSplineTime ~= nil then
      return self.lastSplineTime
    end
    if not self.startValue then
    end
    if self.animation.currentSpeed < 0 and not self.endValue then
    end
    return anim[1]
  end, function(self, anim)
    local dtToUse, stopAnim, fixedTimeUpdate = getSplinePosition(self.spline, anim % 1)
    local v6 = getParent(self.node)
    local playSounds, v6, v7 = worldToLocal(v6, dtToUse, stopAnim, fixedTimeUpdate)
    setTranslation(self.node, playSounds, v6, v7)
    self.lastSplineTime = anim
    for v8, v9 in ipairs(self.animation.parts) do
      -- TODO: structure LOP_FORNPREP (pc 43, target 62)
      if v9.animationValues[1].node == self.node and v9.animationValues[1].name == self.name then
        v9.animationValues[1].lastSplineTime = anim
      end
      -- TODO: structure LOP_FORNLOOP (pc 61, target 44)
    end
  end)
end
