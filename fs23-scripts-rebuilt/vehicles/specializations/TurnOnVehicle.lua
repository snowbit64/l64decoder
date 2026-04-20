-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetTurnedOnEvent.lua")
TurnOnVehicle = {TURNED_ON_ANIMATION_XML_PATH = "vehicle.turnOnVehicle.turnedOnAnimation(?)"}
function TurnOnVehicle.prerequisitesPresent(v0)
  return true
end
function TurnOnVehicle.initSpecialization()
  Vehicle.registerStateChange("TURN_ON")
  Vehicle.registerStateChange("TURN_OFF")
  Vehicle.xmlSchema:setXMLSpecializationType("TurnOnVehicle")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.turnOnVehicle#toggleButton", "Input action name", "IMPLEMENT_EXTRA")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.turnOnVehicle#turnOffText", "Turn off text", "action_turnOffOBJECT")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.turnOnVehicle#turnOnText", "Turn on text", "action_turnOnOBJECT")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#isAlwaysTurnedOn", "Always turned on", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#turnedOnByAttacherVehicle", "Turned on by attacher vehicle", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#turnOffIfNotAllowed", "Turn off if not allowed", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#turnOffOnDeactivate", "Turn off if the vehicle is deactivated", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#aiRequiresTurnOn", "AI requires turned on vehicle", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.turnOnVehicle#requiresTurnOn", "(Mobile only) Vehicle requires turn on", true)
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.turnOnVehicle.animationNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.turnOnVehicle.sounds", "start(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.turnOnVehicle.sounds", "stop(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.turnOnVehicle.sounds", "work(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.turnOnVehicle.turnedAnimation#name", "Turned animation name (Animation played while activating and deactivating)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.turnedAnimation#turnOnSpeedScale", "Turn on speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.turnedAnimation#turnOffSpeedScale", "Turn off speed scale", "Inversed turnOnSpeedScale")
  Vehicle.xmlSchema:register(XMLValueType.STRING, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#name", "Turned on animation name (Animation played while turn on)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#turnOnFadeTime", "Turn on fade time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#turnOffFadeTime", "Turn off fade time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#speedScale", "Speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.turnOnVehicle.activatableFillUnits.activatableFillUnit(?)#index", "Activateable fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. "#canBeTurnedOn", "Attacher joint can turn on implement", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. "#canBeTurnedOn", "Attacher joint can turn on implement", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_KEY .. "#needsSetIsTurnedOn", "Work area needs turned on vehicle to work", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#needsSetIsTurnedOn", "Work area needs turned on vehicle to work", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.ALARM_TRIGGER_XML_KEY .. "#needsTurnOn", "Needs turned on vehicle", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, FillUnit.ALARM_TRIGGER_XML_KEY .. "#turnOffInTrigger", "Turn vehicle off when triggered", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#needsActivation", "Needs activation", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_XML_PATH .. "#needsSetIsTurnedOn", "Vehicle needs to be turned on to activate discharge node", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_XML_PATH .. "#turnOnActivateNode", "Discharge node is set active when vehicle is turned on", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. "#needsSetIsTurnedOn", "Vehicle needs to be turned on to activate discharge node", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. "#turnOnActivateNode", "Discharge node is set active when vehicle is turned on", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, BunkerSiloCompacter.XML_PATH .. "#turnedOnCompactingScale", "Compacting scale which is used while vehicle is turned on", "normal scale")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.turnOnVehicle.turnedOnSpeed#fadeInTime", "(Turned on speed simulation - used as sound modifer and for rpm dashboards) Time to reach max. turned on speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.turnOnVehicle.turnedOnSpeed#fadeOutTime", "(Turned on speed simulation - used as sound modifer and for rpm dashboards) Time to reach the turned off speed again", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.turnedOnSpeed#variance", "Variation value at max. speed", 0.02)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.turnedOnSpeed#varianceSpeed", "Speed factor of variance change", 1)
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.turnOnVehicle.dashboards", "turnedOn | rpm")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.dashboards.dashboard(?)#minRpm", "Rpm value if vehicle is turned off", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.turnOnVehicle.dashboards.dashboard(?)#maxRpm", "Rpm value if vehicle is turned on", 1000)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TurnOnVehicle.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onTurnedOn")
  SpecializationUtil.registerEvent(vehicleType, "onTurnedOff")
end
function TurnOnVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setIsTurnedOn", TurnOnVehicle.setIsTurnedOn)
  SpecializationUtil.registerFunction(vehicleType, "getIsTurnedOn", TurnOnVehicle.getIsTurnedOn)
  SpecializationUtil.registerFunction(vehicleType, "getCanBeTurnedOn", TurnOnVehicle.getCanBeTurnedOn)
  SpecializationUtil.registerFunction(vehicleType, "getCanBeTurnedOnAll", TurnOnVehicle.getCanBeTurnedOnAll)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleTurnedOn", TurnOnVehicle.getCanToggleTurnedOn)
  SpecializationUtil.registerFunction(vehicleType, "getTurnedOnNotAllowedWarning", TurnOnVehicle.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerFunction(vehicleType, "getAIRequiresTurnOn", TurnOnVehicle.getAIRequiresTurnOn)
  SpecializationUtil.registerFunction(vehicleType, "getRequiresTurnOn", TurnOnVehicle.getRequiresTurnOn)
  SpecializationUtil.registerFunction(vehicleType, "getAIRequiresTurnOffOnHeadland", TurnOnVehicle.getAIRequiresTurnOffOnHeadland)
  SpecializationUtil.registerFunction(vehicleType, "loadTurnedOnAnimationFromXML", TurnOnVehicle.loadTurnedOnAnimationFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsTurnedOnAnimationActive", TurnOnVehicle.getIsTurnedOnAnimationActive)
  SpecializationUtil.registerFunction(vehicleType, "getTurnedOnSpeedFactor", TurnOnVehicle.getTurnedOnSpeedFactor)
end
function TurnOnVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUseTurnedOnSchema", TurnOnVehicle.getUseTurnedOnSchema)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadInputAttacherJoint", TurnOnVehicle.loadInputAttacherJoint)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", TurnOnVehicle.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", TurnOnVehicle.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanAIImplementContinueWork", TurnOnVehicle.getCanAIImplementContinueWork)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsOperating", TurnOnVehicle.getIsOperating)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAlarmTriggerIsActive", TurnOnVehicle.getAlarmTriggerIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAlarmTrigger", TurnOnVehicle.loadAlarmTrigger)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFillUnitActive", TurnOnVehicle.getIsFillUnitActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadShovelNode", TurnOnVehicle.loadShovelNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShovelNodeIsActive", TurnOnVehicle.getShovelNodeIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSeedChangeAllowed", TurnOnVehicle.getIsSeedChangeAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", TurnOnVehicle.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowerTakeOffActive", TurnOnVehicle.getIsPowerTakeOffActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", TurnOnVehicle.loadDischargeNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDischargeNodeActive", TurnOnVehicle.getIsDischargeNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadBunkerSiloCompactorFromXML", TurnOnVehicle.loadBunkerSiloCompactorFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getBunkerSiloCompacterScale", TurnOnVehicle.getBunkerSiloCompacterScale)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkModeChangeAllowed", TurnOnVehicle.getIsWorkModeChangeAllowed)
end
function TurnOnVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onAlarmTriggerChanged", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", TurnOnVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", TurnOnVehicle)
end
function TurnOnVehicle:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#turnOffText", "vehicle.turnOnVehicle#turnOffText")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#turnOnText", "vehicle.turnOnVehicle#turnOnText")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#needsSelection")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#isAlwaysTurnedOn", "vehicle.turnOnVehicle#isAlwaysTurnedOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#toggleButton", "vehicle.turnOnVehicle#toggleButton")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#animationName", "vehicle.turnOnVehicle.turnedAnimation#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#turnOnSpeedScale", "vehicle.turnOnVehicle.turnedAnimation#turnOnSpeedScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnSettings#turnOffSpeedScale", "vehicle.turnOnVehicle.turnedAnimation#turnOffSpeedScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.turnOnVehicle.animationNodes.animationNode", "turnOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldable.foldingParts#turnOffOnFold", "vehicle.turnOnVehicle#turnOffIfNotAllowed")
  local v3 = v3:getValue("vehicle.turnOnVehicle#toggleButton")
  if v3 ~= nil then
    self.spec_turnOnVehicle.toggleTurnOnInputBinding = InputAction[v3]
  end
  local v4 = Utils.getNoNil(v2.toggleTurnOnInputBinding, InputAction.IMPLEMENT_EXTRA)
  v2.toggleTurnOnInputBinding = v4
  local v5 = v5:getValue("vehicle.turnOnVehicle#turnOffText", "action_turnOffOBJECT", self.customEnvironment)
  v4 = string.format(v5, self.typeDesc)
  v2.turnOffText = v4
  v5 = v5:getValue("vehicle.turnOnVehicle#turnOnText", "action_turnOnOBJECT", self.customEnvironment)
  v4 = string.format(v5, self.typeDesc)
  v2.turnOnText = v4
  v2.isTurnedOn = false
  v4 = v4:getValue("vehicle.turnOnVehicle#isAlwaysTurnedOn", false)
  v2.isAlwaysTurnedOn = v4
  v4 = v4:getValue("vehicle.turnOnVehicle#turnedOnByAttacherVehicle", false)
  v2.turnedOnByAttacherVehicle = v4
  v4 = v4:getValue("vehicle.turnOnVehicle#turnOffIfNotAllowed", true)
  v2.turnOffIfNotAllowed = v4
  v4 = v4:getValue("vehicle.turnOnVehicle#turnOffOnDeactivate", not GS_IS_MOBILE_VERSION)
  v2.turnOffOnDeactivate = v4
  v4 = v4:getValue("vehicle.turnOnVehicle#aiRequiresTurnOn", true)
  v2.aiRequiresTurnOn = v4
  v4 = v4:getValue("vehicle.turnOnVehicle#requiresTurnOn", true)
  v2.requiresTurnOn = v4
  if self.isClient then
    v4 = v4:loadAnimations(self.xmlFile, "vehicle.turnOnVehicle.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v4
    v4 = SpecializationUtil.hasSpecialization(AnimatedVehicle, self.specializations)
    if v4 then
      v5 = v5:getValue("vehicle.turnOnVehicle.turnedAnimation#name")
      if v5 ~= nil then
        v2.turnOnAnimation = {name = v5}
        local v7 = v7:getValue("vehicle.turnOnVehicle.turnedAnimation#turnOnSpeedScale", 1)
        v2.turnOnAnimation.turnOnSpeedScale = v7
        v7 = v7:getValue("vehicle.turnOnVehicle.turnedAnimation#turnOffSpeedScale", -v2.turnOnAnimation.turnOnSpeedScale)
        v2.turnOnAnimation.turnOffSpeedScale = v7
      end
    end
    v2.turnedOnAnimations = {}
    if v4 then
      v5:iterate("vehicle.turnOnVehicle.turnedOnAnimation", function(self, savegame)
        local v3 = v3:loadTurnedOnAnimationFromXML(u0.xmlFile, savegame, {})
        if v3 then
          table.insert(u1.turnedOnAnimations, {})
        end
      end)
    end
    v2.activatableFillUnits = {}
    while true do
      v6 = string.format("vehicle.turnOnVehicle.activatableFillUnits.activatableFillUnit(%d)", v5)
      v7 = v7:hasProperty(v6)
      if not v7 then
        break
      end
      v7 = v7:getValue(v6 .. "#index")
      if v7 ~= nil then
        v2.activatableFillUnits[v7] = true
      end
    end
    v2.samples = {}
    v7 = v7:loadSamplesFromXML(self.xmlFile, "vehicle.turnOnVehicle.sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.start = v7
    v7 = v7:loadSamplesFromXML(self.xmlFile, "vehicle.turnOnVehicle.sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.stop = v7
    v7 = v7:loadSamplesFromXML(self.xmlFile, "vehicle.turnOnVehicle.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v7
    v2.turnedOnSpeed = {}
    v7 = v7:hasProperty("vehicle.turnOnVehicle.turnedOnSpeed")
    v2.turnedOnSpeed.isActive = v7
    v2.turnedOnSpeed.alpha = 0
    v7 = v7:getValue("vehicle.turnOnVehicle.turnedOnSpeed#fadeInTime", 1)
    v2.turnedOnSpeed.fadeInTime = v7
    v7 = v7:getValue("vehicle.turnOnVehicle.turnedOnSpeed#fadeOutTime", 1)
    v2.turnedOnSpeed.fadeOutTime = v7
    v7 = v7:getValue("vehicle.turnOnVehicle.turnedOnSpeed#variance", 0.02)
    v2.turnedOnSpeed.variance = v7
    v7 = v7:getValue("vehicle.turnOnVehicle.turnedOnSpeed#varianceSpeed", 0.01)
    v2.turnedOnSpeed.varianceSpeed = v7
    if self.loadDashboardsFromXML ~= nil then
      self:loadDashboardsFromXML(self.xmlFile, "vehicle.turnOnVehicle.dashboards", {valueTypeToLoad = "turnedon", valueObject = v2, valueFunc = "isTurnedOn"})
      self:loadDashboardsFromXML(self.xmlFile, "vehicle.turnOnVehicle.dashboards", {valueTypeToLoad = "rpm", valueObject = self, valueFunc = TurnOnVehicle.dashboardRpmValue, additionalAttributesFunc = TurnOnVehicle.dashboardRpmAttributes})
    end
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onDelete", TurnOnVehicle)
    SpecializationUtil.removeEventListener(self, "onUpdate", TurnOnVehicle)
  end
end
function TurnOnVehicle:onDelete()
  if self.spec_turnOnVehicle.samples ~= nil then
    v2:deleteSamples(self.spec_turnOnVehicle.samples.start)
    v2:deleteSamples(self.spec_turnOnVehicle.samples.stop)
    v2:deleteSamples(self.spec_turnOnVehicle.samples.work)
  end
  v2:deleteAnimations(v1.animationNodes)
end
function TurnOnVehicle:onReadStream(streamId, connection)
  local turnedOn = streamReadBool(streamId)
  self:setIsTurnedOn(turnedOn, true)
end
function TurnOnVehicle:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_turnOnVehicle.isTurnedOn)
end
function TurnOnVehicle:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  -- TODO: structure LOP_FORNPREP (pc 7, target 113)
  local v10 = self:getIsTurnedOnAnimationActive(self.spec_turnOnVehicle.turnedOnAnimations[1])
  if self.spec_turnOnVehicle.turnedOnAnimations[1].isTurnedOn ~= v10 then
    if v10 then
      self.spec_turnOnVehicle.turnedOnAnimations[1].speedDirection = 1
      local v14 = math.max(self.spec_turnOnVehicle.turnedOnAnimations[1].currentSpeed * self.spec_turnOnVehicle.turnedOnAnimations[1].speedScale, 0.001)
      local v15 = self:getAnimationTime(self.spec_turnOnVehicle.turnedOnAnimations[1].name)
      self:playAnimation(self.spec_turnOnVehicle.turnedOnAnimations[1].name, v14, v15, true)
    else
      self.spec_turnOnVehicle.turnedOnAnimations[1].speedDirection = -1
    end
    v9.isTurnedOn = v10
  end
  if v9.speedDirection ~= 0 then
    if v9.speedDirection == -1 then
    end
    local v12 = MathUtil.clamp(v9.currentSpeed + v9.speedDirection * dt / v11, 0, 1)
    v9.currentSpeed = v12
    self:setAnimationSpeed(v9.name, v9.currentSpeed * v9.speedScale)
    if v9.speedDirection == -1 and v9.currentSpeed == 0 then
      self:stopAnimation(v9.name, true)
    end
    if v9.currentSpeed ~= 1 then
      -- cmp-jump LOP_JUMPXEQKN R12 aux=0x8000000e -> L112
    end
    v9.speedDirection = 0
  end
  -- TODO: structure LOP_FORNLOOP (pc 112, target 8)
  if self.isClient and v5.turnedOnSpeed.isActive then
    local v7 = self:getIsTurnedOn()
    if v7 then
      local v11 = math.sin(g_time * v5.turnedOnSpeed.varianceSpeed * 0.05)
      v12 = math.sin((g_time * v5.turnedOnSpeed.varianceSpeed * 0.05 + 2) * 0.3)
      v11 = math.cos(g_time * v5.turnedOnSpeed.varianceSpeed * 0.05 * 5)
    end
    if v6 ~= v5.turnedOnSpeed.alpha then
      v7 = MathUtil.sign(v6 - v5.turnedOnSpeed.alpha)
      if v7 < 0 then
        -- if math.max then goto L183 end
      end
      if v7 < 0 then
        -- if v5.turnedOnSpeed.fadeOutTime then goto L195 end
      end
      v11 = v8(v5.turnedOnSpeed.alpha + 1 / v5.turnedOnSpeed.fadeInTime * v7 * dt, v6)
      v5.turnedOnSpeed.alpha = v11
    end
  end
end
function TurnOnVehicle:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and not self.spec_turnOnVehicle.isAlwaysTurnedOn and not self.spec_turnOnVehicle.turnedOnByAttacherVehicle then
    TurnOnVehicle.updateActionEvents(self)
  end
  if self.isServer and v5.turnOffIfNotAllowed then
    local v6 = self:getCanBeTurnedOn()
    if not v6 then
      v6 = self:getIsTurnedOn()
      if v6 then
        self:setIsTurnedOn(false)
        return
      end
      if self.getAttacherVehicle ~= nil then
        v6 = self:getAttacherVehicle()
        if v6 ~= nil and v6.setIsTurnedOn ~= nil then
          local v7 = v6:getIsTurnedOn()
          if v7 then
            v6:setIsTurnedOn(false)
          end
        end
      end
    end
  end
end
function TurnOnVehicle:setIsTurnedOn(isTurnedOn, noEventSend)
  if isTurnedOn ~= self.spec_turnOnVehicle.isTurnedOn then
    SetTurnedOnEvent.sendEvent(self, isTurnedOn, noEventSend)
    self.spec_turnOnVehicle.isTurnedOn = isTurnedOn
    if self.spec_turnOnVehicle.isTurnedOn then
      SpecializationUtil.raiseEvent(self, "onTurnedOn")
      v4:raiseStateChange(Vehicle.STATE_CHANGE_TURN_ON, self)
      return
    end
    SpecializationUtil.raiseEvent(self, "onTurnedOff")
    v4:raiseStateChange(Vehicle.STATE_CHANGE_TURN_OFF, self)
  end
end
function TurnOnVehicle:onTurnedOn()
  if self.isClient then
    if self.spec_turnOnVehicle.turnOnAnimation ~= nil then
      local v6 = self:getAnimationTime(self.spec_turnOnVehicle.turnOnAnimation.name)
      self:playAnimation(self.spec_turnOnVehicle.turnOnAnimation.name, self.spec_turnOnVehicle.turnOnAnimation.turnOnSpeedScale, v6, true)
    end
    v2:stopSamples(v1.samples.start)
    v2:stopSamples(v1.samples.work)
    v2:stopSamples(v1.samples.stop)
    v2:playSamples(v1.samples.start)
    -- TODO: structure LOP_FORNPREP (pc 71, target 89)
    v5:playSample(v1.samples.work[1], 0, v1.samples.start[1])
    -- TODO: structure LOP_FORNLOOP (pc 88, target 72)
    v2:startAnimations(v1.animationNodes)
  end
  if v1.activateableDischargeNode ~= nil and v1.activateableDischargeNode.index ~= nil then
    local v2 = self:getCurrentDischargeNode()
    v1.activateableDischargeNodePrev = v2
    self:setCurrentDischargeNodeIndex(v1.activateableDischargeNode.index)
  end
end
function TurnOnVehicle:onTurnedOff()
  if self.isClient then
    if self.spec_turnOnVehicle.turnOnAnimation ~= nil then
      local v6 = self:getAnimationTime(self.spec_turnOnVehicle.turnOnAnimation.name)
      self:playAnimation(self.spec_turnOnVehicle.turnOnAnimation.name, self.spec_turnOnVehicle.turnOnAnimation.turnOffSpeedScale, v6, true)
    end
    v2:stopSamples(v1.samples.start)
    v2:stopSamples(v1.samples.work)
    v2:stopSamples(v1.samples.stop)
    v2:playSamples(v1.samples.stop)
    v2:stopAnimations(v1.animationNodes)
  end
  if v1.activateableDischargeNodePrev ~= nil and v1.activateableDischargeNodePrev.index ~= nil then
    self:setCurrentDischargeNodeIndex(v1.activateableDischargeNodePrev.index)
    v1.activateableDischargeNodePrev = nil
  end
end
function TurnOnVehicle:getIsTurnedOn()
  if not self.spec_turnOnVehicle.isAlwaysTurnedOn then
  end
  return v2
end
function TurnOnVehicle:getCanBeTurnedOn()
  if self.spec_turnOnVehicle.isAlwaysTurnedOn then
    return false
  end
  if self.getInputAttacherJoint ~= nil then
    local inputAttacherJoint = self:getInputAttacherJoint()
    if inputAttacherJoint ~= nil and inputAttacherJoint.canBeTurnedOn ~= nil and not inputAttacherJoint.canBeTurnedOn then
      return false
    end
  end
  inputAttacherJoint = self:getIsPowered()
  if not inputAttacherJoint then
    return false
  end
  return true
end
function TurnOnVehicle:getCanBeTurnedOnAll()
  local v1 = v1:getChildVehicles()
  -- TODO: structure LOP_FORNPREP (pc 8, target 21)
  if v1[1].getCanBeTurnedOn ~= nil then
    local v6 = v1[1]:getCanBeTurnedOn()
    if not v6 then
      return false
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 9)
  return true
end
function TurnOnVehicle:getCanToggleTurnedOn()
  if self.spec_turnOnVehicle.isAlwaysTurnedOn then
    return false
  end
  if v1.turnedOnByAttacherVehicle then
    return false
  end
  return true
end
function TurnOnVehicle.getTurnedOnNotAllowedWarning(v0)
  return nil
end
function TurnOnVehicle:getAIRequiresTurnOn()
  return self.spec_turnOnVehicle.aiRequiresTurnOn
end
function TurnOnVehicle:getRequiresTurnOn()
  return self.spec_turnOnVehicle.requiresTurnOn
end
function TurnOnVehicle.getAIRequiresTurnOffOnHeadland(v0)
  return false
end
function TurnOnVehicle:loadTurnedOnAnimationFromXML(xmlFile, key, turnedOnAnimation)
  local v4 = v4:getValue(key .. "#name")
  if v4 == nil then
    Logging.xmlWarning(xmlFile, "Missing animation name in '%s'", key)
    return false
  end
  turnedOnAnimation.name = v4
  local v6 = v6:getValue(key .. "#turnOnFadeTime", 1)
  turnedOnAnimation.turnOnFadeTime = v6 * 1000
  v6 = v6:getValue(key .. "#turnOffFadeTime", 1)
  turnedOnAnimation.turnOffFadeTime = v6 * 1000
  local v5 = v5:getValue(key .. "#speedScale", 1)
  turnedOnAnimation.speedScale = v5
  turnedOnAnimation.speedDirection = 0
  turnedOnAnimation.currentSpeed = 0
  turnedOnAnimation.isTurnedOn = false
  return true
end
function TurnOnVehicle:getIsTurnedOnAnimationActive(turnedOnAnimation)
  local v2 = self:getIsTurnedOn()
  if not v2 then
    return false
  end
  return true
end
function TurnOnVehicle:getUseTurnedOnSchema(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
  end
  return v2
end
function TurnOnVehicle.loadInputAttacherJoint(v0, v1, v2, v3, v4, v5)
  local v6 = v1(v0, v2, v3, v4, v5)
  if not v6 then
    return false
  end
  v6 = v2:getValue(v3 .. "#canBeTurnedOn", true)
  v4.canBeTurnedOn = v6
  return true
end
function TurnOnVehicle.loadWorkAreaFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  local v6 = v3:getValue(v4 .. "#needsSetIsTurnedOn", true)
  v2.needsSetIsTurnedOn = v6
  return v5
end
function TurnOnVehicle:getIsWorkAreaActive(superFunc, workArea)
  local v3 = self:getIsTurnedOn()
  if not v3 and workArea.needsSetIsTurnedOn then
    return false
  end
  v3 = superFunc(self, workArea)
  return v3
end
function TurnOnVehicle:getCanAIImplementContinueWork(superFunc)
  local v2, v3, v4 = superFunc(self)
  if not v2 then
    return false, v3, v4
  end
  local v6 = self:getCanBeTurnedOn()
  if v6 then
    v6 = self:getIsTurnedOn()
    if v6 then
    end
  end
  v6 = self:getAIRequiresTurnOn()
  if not v6 then
  end
  v6 = self:getIsAIImplementInLine()
  if not v6 then
  end
  return v5
end
function TurnOnVehicle:getIsOperating(superFunc)
  local v2 = self:getIsTurnedOn()
  if v2 then
    return true
  end
  v2 = superFunc(self)
  return v2
end
function TurnOnVehicle:getAlarmTriggerIsActive(superFunc, alarmTrigger)
  local ret = superFunc(self, alarmTrigger)
  if alarmTrigger.needsTurnOn then
    local v4 = self:getIsTurnedOn()
    if not v4 then
    end
  end
  return ret
end
function TurnOnVehicle.loadAlarmTrigger(v0, v1, v2, v3, v4, v5)
  local v6 = v1(v0, v2, v3, v4, v5)
  local v7 = v2:getValue(v3 .. "#needsTurnOn", false)
  v4.needsTurnOn = v7
  v7 = v2:getValue(v3 .. "#turnOffInTrigger", false)
  v4.turnOffInTrigger = v7
  return v6
end
function TurnOnVehicle:getIsFillUnitActive(superFunc, fillUnitIndex)
  if self.spec_turnOnVehicle.activatableFillUnits[fillUnitIndex] == true then
    local v4 = self:getIsTurnedOn()
    if not v4 then
      return false
    end
  end
  v4 = superFunc(self, fillUnitIndex)
  return v4
end
function TurnOnVehicle.loadShovelNode(v0, v1, v2, v3, v4)
  v1(v0, v2, v3, v4)
  local v5 = v2:getValue(v3 .. "#needsActivation", false)
  v4.needsActiveVehicle = v5
  return true
end
function TurnOnVehicle:getShovelNodeIsActive(superFunc, shovelNode)
  if shovelNode.needsActiveVehicle then
    local v3 = self:getIsTurnedOn()
    if not v3 then
      return false
    end
  end
  v3 = superFunc(self, shovelNode)
  return v3
end
function TurnOnVehicle:getIsSeedChangeAllowed(superFunc)
  local v2 = superFunc(self)
  if v2 then
    local v3 = self:getIsTurnedOn()
  end
  return v2
end
function TurnOnVehicle.getCanBeSelected(v0, v1)
  return true
end
function TurnOnVehicle:getIsPowerTakeOffActive(superFunc)
  local v2 = self:getIsTurnedOn()
  if not v2 then
    v2 = superFunc(self)
  end
  return v2
end
function TurnOnVehicle:loadDischargeNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  v5 = xmlFile:getValue(key .. "#needsSetIsTurnedOn", false)
  entry.needsSetIsTurnedOn = v5
  v5 = xmlFile:getValue(key .. "#turnOnActivateNode", false)
  entry.turnOnActivateNode = v5
  if entry.turnOnActivateNode then
    self.spec_turnOnVehicle.activateableDischargeNode = entry
  end
  return true
end
function TurnOnVehicle:getIsDischargeNodeActive(superFunc, dischargeNode)
  if dischargeNode.needsSetIsTurnedOn then
    local v3 = self:getIsTurnedOn()
    if not v3 then
      return false
    end
  end
  v3 = superFunc(self, dischargeNode)
  return v3
end
function TurnOnVehicle:loadBunkerSiloCompactorFromXML(superFunc, xmlFile, key)
  superFunc(self, xmlFile, key)
  local v5 = xmlFile:getValue(key .. "#turnedOnCompactingScale")
  self.spec_bunkerSiloCompacter.turnedOnCompactingScale = v5
end
function TurnOnVehicle:getBunkerSiloCompacterScale(superFunc)
  if self.spec_bunkerSiloCompacter.turnedOnCompactingScale ~= nil then
    local v3 = self:getIsTurnedOn()
    if v3 then
      return self.spec_bunkerSiloCompacter.turnedOnCompactingScale
    end
  end
  v3 = superFunc(self)
  return v3
end
function TurnOnVehicle:getIsWorkModeChangeAllowed(superFunc)
  if self.spec_workMode.allowChangeWhileTurnedOn == false then
    local v3 = self:getIsTurnedOn()
    if v3 then
      return false
    end
  end
  v3 = superFunc(self)
  return v3
end
function TurnOnVehicle:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_turnOnVehicle.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4 = self:getCanToggleTurnedOn()
      if v4 then
        local v4, v5 = self:addPoweredActionEvent(self.spec_turnOnVehicle.actionEvents, self.spec_turnOnVehicle.toggleTurnOnInputBinding, self, TurnOnVehicle.actionEventTurnOn, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
        TurnOnVehicle.updateActionEvents(self)
        local v6, v7 = self:addPoweredActionEvent(self.spec_turnOnVehicle.actionEvents, InputAction.TURN_ON_ALL_IMPLEMENTS, self, TurnOnVehicle.actionEventTurnOnAll, false, true, false, true, nil)
        v6:setActionEventTextVisibility(v7, false)
      end
    end
  end
end
function TurnOnVehicle:onAlarmTriggerChanged(alarmTrigger, state)
  if state and alarmTrigger.turnOffInTrigger then
    self:setIsTurnedOn(false, true)
  end
end
function TurnOnVehicle:onSetBroken()
  self:setIsTurnedOn(false, true)
end
function TurnOnVehicle:onStateChange(state, data)
  if state == Vehicle.STATE_CHANGE_MOTOR_TURN_OFF then
    local v3 = self:getCanBeTurnedOn()
    if not v3 then
      self:setIsTurnedOn(false, true)
    end
  end
end
function TurnOnVehicle:onDeactivate()
  if self.spec_turnOnVehicle.turnOffOnDeactivate then
    self:setIsTurnedOn(false, true)
  end
end
function TurnOnVehicle:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  if self.spec_turnOnVehicle.turnedOnByAttacherVehicle and attacherVehicle.getIsTurnedOn ~= nil then
    local v7 = attacherVehicle:getIsTurnedOn()
    self:setIsTurnedOn(v7, true)
  end
end
function TurnOnVehicle:onPreDetach(attacherVehicle, implement)
  self:setIsTurnedOn(false, true)
end
function TurnOnVehicle:onRootVehicleChanged(rootVehicle)
  if rootVehicle.actionController ~= nil then
    local state = self:getCanToggleTurnedOn()
    if state then
      if self.spec_turnOnVehicle.controlledAction ~= nil then
        state:updateParent(rootVehicle.actionController)
        return
      end
      state = v3:registerAction("turnOn", v2.toggleTurnOnInputBinding, 1)
      v2.controlledAction = state
      state:setCallback(self, TurnOnVehicle.actionControllerTurnOnEvent)
      state:setFinishedFunctions(self, self.getIsTurnedOn, true, false)
      state:setIsSaved(true)
      state:setIsAccessibleFunction(function()
        local self = self:getIsRunning()
        if self then
          self = self:getActionControllerDirection()
          if self == 1 then
            self = self:getCanBeTurnedOn(u1)
            -- if v0 then goto L31 end
            return false
          else
            self = self:getCanBeTurnedOff(u1)
            if not self then
              return false
            end
          end
        end
        return true
      end)
      state = self:getAIRequiresTurnOn()
      -- if not v4 then goto L157 end
      state:addAIEventListener(self, "onAIFieldWorkerStart", 1, true)
      state:addAIEventListener(self, "onAIImplementStart", 1, true)
      state:addAIEventListener(self, "onAIImplementStartLine", 1, true)
      state:addAIEventListener(self, "onAIImplementContinue", 1)
      state:addAIEventListener(self, "onAIImplementEnd", -1)
      state:addAIEventListener(self, "onAIFieldWorkerEnd", -1)
      state = self:getAIRequiresTurnOffOnHeadland()
      if state then
        state:addAIEventListener(self, "onAIImplementEndLine", -1)
      end
      state:addAIEventListener(self, "onAIImplementBlock", -1)
      state:addAIEventListener(self, "onAIImplementPrepare", -1)
      return
    end
  end
  if v2.controlledAction ~= nil then
    state:remove()
  end
end
function TurnOnVehicle:actionControllerTurnOnEvent(direction)
  if 0 < direction then
    local v2 = self:getIsAIActive()
    if v2 and self.rootVehicle.getAIFieldWorkerIsTurning ~= nil then
      local v3 = self.rootVehicle:getAIFieldWorkerIsTurning()
      if v3 then
        return false
      end
    end
    v2 = self:getCanBeTurnedOn()
    if v2 then
      self:setIsTurnedOn(true)
      return true
    end
    return false
  end
  self:setIsTurnedOn(false)
  v3 = self:getIsTurnedOn()
  return not v3
end
function TurnOnVehicle:actionEventTurnOn(actionName, inputValue, callbackState, isAnalog)
  local state = self:getCanToggleTurnedOn()
  if state then
    state = self:getCanBeTurnedOn()
    if state then
      local v8 = self:getIsTurnedOn()
      self:setIsTurnedOn(not v8)
      return
    end
  end
  state = self:getIsTurnedOn()
  if not state then
    state = self:getTurnedOnNotAllowedWarning()
    if state ~= nil then
      v6:showBlinkingWarning(state, 2000)
    end
  end
end
function TurnOnVehicle:actionEventTurnOnAll(actionName, inputValue, callbackState, isAnalog)
  local state = self:getCanToggleTurnedOn()
  if state then
    local state, v6 = self:getCanBeTurnedOnAll()
    if state then
      local v7 = v7:getChildVehicles()
      -- TODO: structure LOP_FORNPREP (pc 16, target 44)
      if v7[1].setIsTurnedOn ~= nil then
        local v15 = v7[1]:getIsTurnedOn()
        v7[1]:setIsTurnedOn(not v15)
      end
      -- TODO: structure LOP_FORNLOOP (pc 29, target 17)
      return
    end
    v7 = self:getIsTurnedOn()
    if not v7 and v6 ~= nil then
      v7:showBlinkingWarning(v6, 2000)
    end
  end
end
function TurnOnVehicle:updateActionEvents()
  if self.spec_turnOnVehicle.actionEvents[self.spec_turnOnVehicle.toggleTurnOnInputBinding] ~= nil then
    local state = self:getCanToggleTurnedOn()
    if state then
      local v5 = self:getIsTurnedOn()
      if v5 then
      else
      end
      v5:setActionEventText(v2.actionEventId, v4)
    end
    v4:setActionEventActive(v2.actionEventId, state)
  end
end
function TurnOnVehicle:getTurnedOnSpeedFactor()
  return self.spec_turnOnVehicle.turnedOnSpeed.alpha
end
v0:registerModifierType("TURNED_ON_SPEED", TurnOnVehicle.getTurnedOnSpeedFactor)
function TurnOnVehicle.dashboardRpmAttributes(v0, v1, v2, v3, v4)
  local v5 = v1:getValue(v2 .. "#minRpm", 0)
  v3.minRpm = v5
  v5 = v1:getValue(v2 .. "#maxRpm", 1000)
  v3.maxRpm = v5
  return true
end
function TurnOnVehicle:dashboardRpmValue(dashboard)
  return dashboard.minRpm + (dashboard.maxRpm - dashboard.minRpm) * self.spec_turnOnVehicle.turnedOnSpeed.alpha
end
