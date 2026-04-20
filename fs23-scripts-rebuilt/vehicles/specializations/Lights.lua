-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/VehicleSetBeaconLightEvent.lua")
source("dataS/scripts/vehicles/specializations/events/VehicleSetTurnLightEvent.lua")
source("dataS/scripts/vehicles/specializations/events/VehicleSetLightEvent.lua")
Lights = {TURNLIGHT_OFF = 0, TURNLIGHT_LEFT = 1, TURNLIGHT_RIGHT = 2, TURNLIGHT_HAZARD = 3, turnLightSendNumBits = 3, LIGHT_TYPE_DEFAULT = 0, LIGHT_TYPE_WORK_BACK = 1, LIGHT_TYPE_WORK_FRONT = 2, LIGHT_TYPE_HIGHBEAM = 3, sharedLightXMLSchema = nil, beaconLightXMLSchema = nil, ADDITIONAL_LIGHT_ATTRIBUTES_KEYS = {"vehicle.lights.sharedLight(?)", "vehicle.lights.realLights.low.light(?)", "vehicle.lights.realLights.low.brakeLight(?)", "vehicle.lights.realLights.low.reverseLight(?)", "vehicle.lights.realLights.low.turnLightLeft(?)", "vehicle.lights.realLights.low.turnLightRight(?)", "vehicle.lights.realLights.low.interiorLight(?)", "vehicle.lights.realLights.high.light(?)", "vehicle.lights.realLights.high.brakeLight(?)", "vehicle.lights.realLights.high.reverseLight(?)", "vehicle.lights.realLights.high.turnLightLeft(?)", "vehicle.lights.realLights.high.turnLightRight(?)", "vehicle.lights.realLights.high.interiorLight(?)", "vehicle.lights.defaultLights.defaultLight(?)", "vehicle.lights.brakeLights.brakeLight(?)", "vehicle.lights.reverseLights.reverseLight(?)", "vehicle.lights.turnLights.turnLightLeft(?)", "vehicle.lights.turnLights.turnLightRight(?)"}}
function Lights.prerequisitesPresent(v0)
  return true
end
function Lights.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Lights")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.lights#reverseLightActivationSpeed", "Speed which needs to be reached to activate reverse lights (km/h)", 1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.states.state(?)#lightTypes", "Light states")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.states.automaticState#lightTypes", "Light states while ai is active", "0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.states.automaticState#lightTypesWork", "Light states while ai is working", "0 1 2")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.lights.sharedLight(?)#filename", "Shared light filename")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.lights.sharedLight(?)#linkNode", "Link node", "0>")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.sharedLight(?)#lightTypes", "Light types")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.sharedLight(?)#excludedLightTypes", "Excluded light types")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.lights.sharedLight(?).rotationNode(?)#name", "Rotation node name")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.lights.sharedLight(?).rotationNode(?)#rotation", "Rotation")
  Lights.registerRealLightSetupXMLPath(Vehicle.xmlSchema, "vehicle.lights.realLights.low")
  Lights.registerRealLightSetupXMLPath(Vehicle.xmlSchema, "vehicle.lights.realLights.high")
  Lights.registerStaticLightXMLPath(Vehicle.xmlSchema, "vehicle.lights.defaultLights.defaultLight(?)")
  Lights.registerStaticLightXMLPath(Vehicle.xmlSchema, "vehicle.lights.brakeLights.brakeLight(?)")
  Lights.registerStaticLightXMLPath(Vehicle.xmlSchema, "vehicle.lights.reverseLights.reverseLight(?)")
  Lights.registerStaticLightXMLPath(Vehicle.xmlSchema, "vehicle.lights.turnLights.turnLightLeft(?)")
  Lights.registerStaticLightXMLPath(Vehicle.xmlSchema, "vehicle.lights.turnLights.turnLightRight(?)")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.lights.beaconLights.beaconLight(?)#node", "Link node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.lights.beaconLights.beaconLight(?)#filename", "Beacon light xml file")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.lights.beaconLights.beaconLight(?)#speed", "Beacon light speed override")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.lights.beaconLights.beaconLight(?)#realLightRange", "Factor that is applied on real light range of the beacon light", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.lights.beaconLights.beaconLight(?)#intensity", "Beacon light intensity override")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.lights.beaconLights.beaconLight(?).realLight#node", "Real light node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.lights.beaconLights.beaconLight(?).rotator#node", "Rotator node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.lights.beaconLights.beaconLight(?)#multiBlink", "Is multiblink light")
  BeaconLightManager.registerXMLPaths(Vehicle.xmlSchema, "vehicle.lights.beaconLights.beaconLight(?).device")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.lights.sounds", "toggleLights")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.lights.sounds", "turnLight")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.lights.dashboards", "lightState | turnLightLeft | turnLightRight | turnLight | turnLightHazard | turnLightAny | beaconLight")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.dashboards.dashboard(?)#lightTypes", "Light types")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.lights.dashboards.dashboard(?)#excludedLightTypes", "Excluded light types")
  Vehicle.xmlSchema:setXMLSpecializationType()
  local v1 = XMLSchema.new("sharedLight")
  v1:register(XMLValueType.STRING, "light.filename", "Path to i3d file", nil, true)
  v1:register(XMLValueType.NODE_INDEX, "light.rootNode#node", "Node index", "0")
  Lights.registerSharedLightXMLPath(v1, "light.defaultLight(?)")
  Lights.registerSharedLightXMLPath(v1, "light.brakeLight(?)")
  Lights.registerSharedLightXMLPath(v1, "light.reverseLight(?)")
  Lights.registerSharedLightXMLPath(v1, "light.turnLightLeft(?)")
  Lights.registerSharedLightXMLPath(v1, "light.turnLightRight(?)")
  v1:register(XMLValueType.STRING, "light.rotationNode(?)#name", "Name for reference in vehicle xml")
  v1:register(XMLValueType.NODE_INDEX, "light.rotationNode(?)#node", "Node")
  Lights.sharedLightXMLSchema = v1
  local v2 = XMLSchema.new("beaconLight")
  v2:register(XMLValueType.STRING, "beaconLight.filename", "Path to i3d file", nil, true)
  v2:register(XMLValueType.NODE_INDEX, "beaconLight.rootNode#node", "Root node")
  v2:register(XMLValueType.NODE_INDEX, "beaconLight.rotator#node", "Node that is rotating")
  v2:register(XMLValueType.FLOAT, "beaconLight.rotator#speed", "Rotating speed", 0.015)
  v2:register(XMLValueType.NODE_INDEX, "beaconLight.light#node", "Visibility toggle node")
  v2:register(XMLValueType.NODE_INDEX, "beaconLight.light#shaderNode", "Light control shader node")
  v2:register(XMLValueType.FLOAT, "beaconLight.light#intensity", "Light intensity of shader node", 1000)
  v2:register(XMLValueType.BOOL, "beaconLight.light#multiBlink", "Uses multiblink functionality", false)
  v2:register(XMLValueType.NODE_INDEX, "beaconLight.realLight#node", "Real light source node")
  BeaconLightManager.registerXMLPaths(v2, "beaconLight.device")
  Lights.beaconLightXMLSchema = v2
end
function Lights:registerSharedLightXMLPath(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Visual light node")
  self:register(XMLValueType.FLOAT, v1 .. "#intensity", "Intensity", 25)
  self:register(XMLValueType.BOOL, v1 .. "#toggleVisibility", "Toggle visibility", false)
  self:register(XMLValueType.VECTOR_N, v1 .. "#excludedLightTypes", "Excluded light types")
  self:register(XMLValueType.VECTOR_N, v1 .. "#lightTypes", "Light types")
end
function Lights:registerStaticLightXMLPath(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Visual light node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#shaderNode", "Shader node")
  self:register(XMLValueType.FLOAT, v1 .. "#intensity", "Intensity", 25)
  self:register(XMLValueType.BOOL, v1 .. "#toggleVisibility", "Toggle visibility", false)
  self:register(XMLValueType.VECTOR_N, v1 .. "#excludedLightTypes", "Excluded light types")
  self:register(XMLValueType.VECTOR_N, v1 .. "#lightTypes", "Light types")
end
function Lights.registerRealLightSetupXMLPath(schema, basePath)
  Lights.registerRealLightXMLPath(schema, basePath .. ".light(?)")
  Lights.registerRealLightXMLPath(schema, basePath .. ".brakeLight(?)")
  Lights.registerRealLightXMLPath(schema, basePath .. ".reverseLight(?)")
  Lights.registerRealLightXMLPath(schema, basePath .. ".turnLightLeft(?)")
  Lights.registerRealLightXMLPath(schema, basePath .. ".turnLightRight(?)")
  Lights.registerRealLightXMLPath(schema, basePath .. ".interiorLight(?)")
end
function Lights:registerRealLightXMLPath(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Light node")
  self:register(XMLValueType.VECTOR_N, v1 .. "#lightTypes", "Light types")
  self:register(XMLValueType.VECTOR_N, v1 .. "#excludedLightTypes", "Excluded light types")
end
function Lights.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onTurnLightStateChanged")
  SpecializationUtil.registerEvent(vehicleType, "onBrakeLightsVisibilityChanged")
  SpecializationUtil.registerEvent(vehicleType, "onReverseLightsVisibilityChanged")
  SpecializationUtil.registerEvent(vehicleType, "onLightsTypesMaskChanged")
  SpecializationUtil.registerEvent(vehicleType, "onBeaconLightsVisibilityChanged")
end
function Lights.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadRealLightSetup", Lights.loadRealLightSetup)
  SpecializationUtil.registerFunction(vehicleType, "loadRealLights", Lights.loadRealLights)
  SpecializationUtil.registerFunction(vehicleType, "loadStaticLightNodes", Lights.loadStaticLightNodes)
  SpecializationUtil.registerFunction(vehicleType, "applyAdditionalActiveLightType", Lights.applyAdditionalActiveLightType)
  SpecializationUtil.registerFunction(vehicleType, "loadBeaconLightFromXML", Lights.loadBeaconLightFromXML)
  SpecializationUtil.registerFunction(vehicleType, "onBeaconLightI3DLoaded", Lights.onBeaconLightI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "getIsActiveForLights", Lights.getIsActiveForLights)
  SpecializationUtil.registerFunction(vehicleType, "getIsActiveForInteriorLights", Lights.getIsActiveForInteriorLights)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleLight", Lights.getCanToggleLight)
  SpecializationUtil.registerFunction(vehicleType, "getUseHighProfile", Lights.getUseHighProfile)
  SpecializationUtil.registerFunction(vehicleType, "setNextLightsState", Lights.setNextLightsState)
  SpecializationUtil.registerFunction(vehicleType, "setLightsTypesMask", Lights.setLightsTypesMask)
  SpecializationUtil.registerFunction(vehicleType, "getLightsTypesMask", Lights.getLightsTypesMask)
  SpecializationUtil.registerFunction(vehicleType, "setTurnLightState", Lights.setTurnLightState)
  SpecializationUtil.registerFunction(vehicleType, "getTurnLightState", Lights.getTurnLightState)
  SpecializationUtil.registerFunction(vehicleType, "setBrakeLightsVisibility", Lights.setBrakeLightsVisibility)
  SpecializationUtil.registerFunction(vehicleType, "setBeaconLightsVisibility", Lights.setBeaconLightsVisibility)
  SpecializationUtil.registerFunction(vehicleType, "getBeaconLightsVisibility", Lights.getBeaconLightsVisibility)
  SpecializationUtil.registerFunction(vehicleType, "setReverseLightsVisibility", Lights.setReverseLightsVisibility)
  SpecializationUtil.registerFunction(vehicleType, "setInteriorLightsVisibility", Lights.setInteriorLightsVisibility)
  SpecializationUtil.registerFunction(vehicleType, "getInteriorLightBrightness", Lights.getInteriorLightBrightness)
  SpecializationUtil.registerFunction(vehicleType, "setLightsState", Lights.setLightsState)
  SpecializationUtil.registerFunction(vehicleType, "setLightState", Lights.setLightState)
  SpecializationUtil.registerFunction(vehicleType, "setRealLightState", Lights.setRealLightState)
  SpecializationUtil.registerFunction(vehicleType, "setStaticLightState", Lights.setStaticLightState)
  SpecializationUtil.registerFunction(vehicleType, "deactivateLights", Lights.deactivateLights)
  SpecializationUtil.registerFunction(vehicleType, "getDeactivateLightsOnLeave", Lights.getDeactivateLightsOnLeave)
  SpecializationUtil.registerFunction(vehicleType, "loadSharedLight", Lights.loadSharedLight)
  SpecializationUtil.registerFunction(vehicleType, "loadStaticLightNodesFromSharedLight", Lights.loadStaticLightNodesFromSharedLight)
  SpecializationUtil.registerFunction(vehicleType, "loadSharedLightI3DLoaded", Lights.loadSharedLightI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "loadAdditionalLightAttributesFromXML", Lights.loadAdditionalLightAttributesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsLightActive", Lights.getIsLightActive)
  SpecializationUtil.registerFunction(vehicleType, "updateAutomaticLights", Lights.updateAutomaticLights)
  SpecializationUtil.registerFunction(vehicleType, "lightsWeatherChanged", Lights.lightsWeatherChanged)
  SpecializationUtil.registerFunction(vehicleType, "deactivateBeaconLights", Lights.deactivateBeaconLights)
end
function Lights.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onStartMotor", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onStopMotor", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onStartReverseDirectionChange", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetach", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAutomatedTrainTravelActive", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIDriveableActive", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIDriveableEnd", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIFieldWorkerActive", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIJobVehicleBlock", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIJobVehicleContinue", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onAIFieldWorkerEnd", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onVehiclePhysicsUpdate", Lights)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Lights)
end
function Lights:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.low.light#decoration", "vehicle.lights.defaultLights#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.high.light#decoration", "vehicle.lights.defaultLights#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.low.light#realLight", "vehicle.lights.realLights.low.light#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.high.light#realLight", "vehicle.lights.realLights.high.light#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.brakeLights.brakeLight#realLight", "vehicle.lights.realLights.high.brakeLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.brakeLights.brakeLight#decoration", "vehicle.lights.brakeLights.brakeLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseLights.reverseLight#realLight", "vehicle.lights.realLights.high.reverseLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseLights.reverseLight#decoration", "vehicle.lights.reverseLights.reverseLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnLights.turnLightLeft#realLight", "vehicle.lights.realLights.high.turnLightLeft#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnLights.turnLightLeft#decoration", "vehicle.lights.turnLights.turnLightLeft#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnLights.turnLightRight#realLight", "vehicle.lights.realLights.high.turnLightRight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnLights.turnLightRight#decoration", "vehicle.lights.turnLights.turnLightRight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseLights.reverseLight#realLight", "vehicle.lights.realLights.high.reverseLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseLights.reverseLight#decoration", "vehicle.lights.reverseLights.reverseLight#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.states.aiState#lightTypes", "vehicle.lights.states.automaticState#lightTypes")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lights.states.aiState#lightTypesWork", "vehicle.lights.states.automaticState#lightTypesWork")
  local v4 = v4:getValue("vehicle.lights#reverseLightActivationSpeed", 1)
  self.spec_lights.reverseLightActivationSpeed = v4 / 3600
  self.spec_lights.sharedLoadRequestIds = {}
  self.spec_lights.xmlLoadingHandles = {}
  self.spec_lights.shaderDefaultLights = {}
  self.spec_lights.shaderBrakeLights = {}
  self.spec_lights.shaderLeftTurnLights = {}
  self.spec_lights.shaderRightTurnLights = {}
  self.spec_lights.shaderReverseLights = {}
  self.spec_lights.realLights = {low = {}, high = {}}
  self.spec_lights.defaultLights = {}
  self.spec_lights.brakeLights = {}
  self.spec_lights.reverseLights = {}
  self.spec_lights.turnLightsLeft = {}
  self.spec_lights.turnLightsRight = {}
  self.spec_lights.lightsTypesMask = 0
  self.spec_lights.currentLightState = 0
  self.spec_lights.numLightTypes = 0
  self.spec_lights.lightStates = {}
  while true do
    v5 = string.format("vehicle.lights.states.state(%d)", v4)
    v6 = v6:hasProperty(v5)
    if not v6 then
      break
    end
    v6 = v6:getValue(v5 .. "#lightTypes", nil, true)
    for v10, v11 in pairs(v6) do
      if not (v3[v11] == nil) then
        continue
      end
      v3[v11] = v11
      v2.numLightTypes = v2.numLightTypes + 1
    end
    table.insert(v2.lightStates, v6)
  end
  v6 = function(self, savegame, v2)
    local v3 = self:getValue(savegame, v2, true)
    for v8, v9 in pairs(v3) do
      local v10 = bitOR(v4, 2 ^ v9)
    end
    return v4
  end(self.xmlFile, "vehicle.lights.states.automaticState#lightTypes", "0")
  v2.automaticLightsTypesMask = v6
  v6 = function(self, savegame, v2)
    local v3 = self:getValue(savegame, v2, true)
    for v8, v9 in pairs(v3) do
      local v10 = bitOR(v4, 2 ^ v9)
    end
    return v4
  end(self.xmlFile, "vehicle.lights.states.automaticState#lightTypesWork", "0 1 2")
  v2.automaticLightsTypesMaskWork = v6
  v2.interiorLightsBrightness = 0
  v2.interiorLightsAvailable = false
  self:loadRealLightSetup(self.xmlFile, "vehicle.lights.realLights.low", v2.realLights.low)
  self:loadRealLightSetup(self.xmlFile, "vehicle.lights.realLights.high", v2.realLights.high)
  v2.staticLights = {}
  v2.defaultLightsStatic = {}
  v2.brakeLightsStatic = {}
  v2.reverseLightsStatic = {}
  v2.turnLightsLeftStatic = {}
  v2.turnLightsRightStatic = {}
  self:loadStaticLightNodes(self.xmlFile, "vehicle.lights.defaultLights.defaultLight", v2.staticLights, v2.defaultLightsStatic)
  self:loadStaticLightNodes(self.xmlFile, "vehicle.lights.brakeLights.brakeLight", v2.staticLights, v2.brakeLightsStatic)
  self:loadStaticLightNodes(self.xmlFile, "vehicle.lights.reverseLights.reverseLight", v2.staticLights, v2.reverseLightsStatic)
  self:loadStaticLightNodes(self.xmlFile, "vehicle.lights.turnLights.turnLightLeft", v2.staticLights, v2.turnLightsLeftStatic)
  self:loadStaticLightNodes(self.xmlFile, "vehicle.lights.turnLights.turnLightRight", v2.staticLights, v2.turnLightsRightStatic)
  v2.sharedLights = {}
  v6:iterate("vehicle.lights.sharedLight", function(self, savegame)
    v2:loadSharedLight(u0.xmlFile, savegame, u1.sharedLights)
  end)
  v2.maxLightState = Lights.LIGHT_TYPE_HIGHBEAM
  -- TODO: structure LOP_FORNPREP (pc 393, target 416)
  for v12, v13 in pairs(v2.staticLights[1].lightTypes) do
    local v14 = math.max(v2.maxLightState, v13)
    v2.maxLightState = v14
  end
  -- TODO: structure LOP_FORNLOOP (pc 415, target 394)
  -- TODO: structure LOP_FORNPREP (pc 425, target 452)
  for v12, v13 in pairs(v2.realLights.low.realLights[1].lightTypes) do
    v14 = math.max(v2.maxLightState, v13)
    v2.maxLightState = v14
  end
  -- TODO: structure LOP_FORNLOOP (pc 451, target 426)
  -- TODO: structure LOP_FORNPREP (pc 461, target 488)
  for v12, v13 in pairs(v2.realLights.high.realLights[1].lightTypes) do
    v14 = math.max(v2.maxLightState, v13)
    v2.maxLightState = v14
  end
  -- TODO: structure LOP_FORNLOOP (pc 487, target 462)
  v2.maxLightStateMask = 2 ^ (v2.maxLightState + 1) - 1
  v2.additionalLightTypes = {brakeLight = v2.maxLightState + 1, turnLightLeft = v2.maxLightState + 2, turnLightRight = v2.maxLightState + 3, turnLightAny = v2.maxLightState + 4, reverseLight = v2.maxLightState + 5, interiorLight = v2.maxLightState + 6}
  v2.totalNumLightTypes = v2.additionalLightTypes.interiorLight
  if 31 < v2.totalNumLightTypes then
    Logging.xmlError(self.xmlFile, "Max. number of light types reached (31). Please reduce them.")
    v2.totalNumLightTypes = 31
  end
  v2.brakeLightsVisibility = false
  v2.reverseLightsVisibility = false
  v2.turnLightState = Lights.TURNLIGHT_OFF
  v2.turnLightTriState = 0.5
  if 0 >= #v2.turnLightsLeft and 0 >= #v2.turnLightsRight then
  end
  v2.hasTurnLights = v6
  v2.turnLightRepetitionCount = 0
  v2.actionEventsActiveChange = {}
  v2.beaconLightsActive = false
  v6 = v6:getValue("realBeaconLights")
  v2.hasRealBeaconLights = v6
  v2.beaconLights = {}
  v6:iterate("vehicle.lights.beaconLights.beaconLight", function(self, savegame)
    v2:loadBeaconLightFromXML(u0.xmlFile, savegame)
  end)
  if self.isClient ~= nil then
    v2.samples = {}
    v7 = v7:loadSampleFromXML(self.xmlFile, "vehicle.lights.sounds", "toggleLights", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.toggleLights = v7
    v7 = v7:loadSampleFromXML(self.xmlFile, "vehicle.lights.sounds", "turnLight", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.turnLight = v7
  end
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "lightState", valueObject = v2, valueFunc = "lightsTypesMask", additionalAttributesFunc = Lights.dashboardLightAttributes, stateFunc = Lights.dashboardLightState})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "turnLightLeft", valueObject = v2, valueFunc = "turnLightState", valueCompare = {Lights.TURNLIGHT_LEFT, Lights.TURNLIGHT_HAZARD}})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "turnLightRight", valueObject = v2, valueFunc = "turnLightState", valueCompare = {Lights.TURNLIGHT_RIGHT, Lights.TURNLIGHT_HAZARD}})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "turnLight", valueObject = v2, idleValue = 0.5, valueFunc = "turnLightTriState"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "turnLightHazard", valueObject = v2, valueFunc = "turnLightState", valueCompare = {Lights.TURNLIGHT_HAZARD}})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "turnLightAny", valueObject = v2, valueFunc = "turnLightState", valueCompare = {Lights.TURNLIGHT_LEFT, Lights.TURNLIGHT_RIGHT, Lights.TURNLIGHT_HAZARD}})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.lights.dashboards", {valueTypeToLoad = "beaconLight", valueObject = v2, valueFunc = function(self)
      if self.beaconLightsActive then
        return 1
      end
      return 0
    end})
  end
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    v6:subscribe(MessageType.WEATHER_CHANGED, self.lightsWeatherChanged, self)
  end
end
function Lights:onLoadFinished(savegame)
  self:applyAdditionalActiveLightType(self.spec_lights.brakeLightsStatic, self.spec_lights.additionalLightTypes.brakeLight)
  self:applyAdditionalActiveLightType(self.spec_lights.reverseLightsStatic, self.spec_lights.additionalLightTypes.reverseLight)
  self:applyAdditionalActiveLightType(self.spec_lights.turnLightsLeftStatic, self.spec_lights.additionalLightTypes.turnLightLeft)
  self:applyAdditionalActiveLightType(self.spec_lights.turnLightsLeftStatic, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.turnLightsRightStatic, self.spec_lights.additionalLightTypes.turnLightRight)
  self:applyAdditionalActiveLightType(self.spec_lights.turnLightsRightStatic, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.brakeLights, self.spec_lights.additionalLightTypes.brakeLight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.reverseLights, self.spec_lights.additionalLightTypes.reverseLight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.turnLightsLeft, self.spec_lights.additionalLightTypes.turnLightLeft)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.turnLightsLeft, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.turnLightsRight, self.spec_lights.additionalLightTypes.turnLightRight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.turnLightsRight, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.low.interiorLights, self.spec_lights.additionalLightTypes.interiorLight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.brakeLights, self.spec_lights.additionalLightTypes.brakeLight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.reverseLights, self.spec_lights.additionalLightTypes.reverseLight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.turnLightsLeft, self.spec_lights.additionalLightTypes.turnLightLeft)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.turnLightsLeft, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.turnLightsRight, self.spec_lights.additionalLightTypes.turnLightRight)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.turnLightsRight, self.spec_lights.additionalLightTypes.turnLightAny)
  self:applyAdditionalActiveLightType(self.spec_lights.realLights.high.interiorLights, self.spec_lights.additionalLightTypes.interiorLight)
end
function Lights:onDelete()
  if self.spec_lights.xmlLoadingHandles ~= nil then
    for v5, v6 in pairs(self.spec_lights.xmlLoadingHandles) do
      v5:delete()
      v1.xmlLoadingHandles[v5] = nil
    end
  end
  if v1.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(v1.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
  end
  v2:deleteSamples(v1.samples)
end
function Lights:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, self.spec_lights.totalNumLightTypes)
  self:setLightsTypesMask(v4, true, true)
  local beaconLightsActive = streamReadBool(streamId)
  self:setBeaconLightsVisibility(beaconLightsActive, true, true)
end
function Lights:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_lights.lightsTypesMask, self.spec_lights.totalNumLightTypes)
  streamWriteBool(streamId, self.spec_lights.beaconLightsActive)
end
function Lights:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_lights.beaconLightsActive then
      for v9, v10 in pairs(self.spec_lights.beaconLights) do
        if v10.rotatorNode ~= nil then
          rotate(v10.rotatorNode, 0, v10.speed * dt, 0)
        end
        if not (v10.realLightNode ~= nil) then
          continue
        end
        if not v5.hasRealBeaconLights then
          continue
        end
        if not v10.multiBlink then
          continue
        end
        if not v10.lightShaderNode then
        end
        local v11, v12, v13, v14 = v11(v12, "blinkOffset")
        local cTime_s = getShaderTimeSec()
        local v19 = math.sin(cTime_s * v13)
        local v20 = math.max(cTime_s * v13 % (v11 * 2 + v12 * 2) * math.pi - (v11 * 2 - 1) * math.pi, 0)
        local v16 = MathUtil.clamp(v19 - v20 + 0.2, 0, 1)
        setLightColor(v10.realLightNode, v10.defaultColor[1] * v16, v10.defaultColor[2] * v16, v10.defaultColor[3] * v16)
        local v23 = getNumOfChildren(v10.realLightNode)
        -- TODO: structure LOP_FORNPREP (pc 110, target 124)
        local v24 = getChildAt(v10.realLightNode, 0)
        setLightColor(v24, v10.defaultColor[1] * v16, v10.defaultColor[2] * v16, v10.defaultColor[3] * v16)
        -- TODO: structure LOP_FORNLOOP (pc 123, target 111)
      end
      self:raiseActive()
    end
    if v5.turnLightState ~= Lights.TURNLIGHT_OFF then
      v8 = getShaderTimeSec()
      v9 = math.cos(7 * v8)
      v7 = MathUtil.clamp(v9 + 0.2, 0, 1)
      if v5.turnLightState ~= Lights.TURNLIGHT_LEFT then
        -- if v5.turnLightState ~= Lights.TURNLIGHT_HAZARD then goto L227 end
      end
      for v11, v12 in pairs(v5.activeTurnLightSetup.turnLightsLeft) do
        setLightColor(v12.node, v12.defaultColor[1] * v7, v12.defaultColor[2] * v7, v12.defaultColor[3] * v7)
        v16 = getNumOfChildren(v12.node)
        -- TODO: structure LOP_FORNPREP (pc 202, target 225)
        local v17 = getChildAt(v12.node, 0)
        setLightColor(v17, v12.defaultColor[1] * v7, v12.defaultColor[2] * v7, v12.defaultColor[3] * v7)
        -- TODO: structure LOP_FORNLOOP (pc 224, target 203)
      end
      if v5.turnLightState ~= Lights.TURNLIGHT_RIGHT then
        -- if v5.turnLightState ~= Lights.TURNLIGHT_HAZARD then goto L301 end
      end
      for v11, v12 in pairs(v5.activeTurnLightSetup.turnLightsRight) do
        setLightColor(v12.node, v12.defaultColor[1] * v7, v12.defaultColor[2] * v7, v12.defaultColor[3] * v7)
        v16 = getNumOfChildren(v12.node)
        -- TODO: structure LOP_FORNPREP (pc 276, target 299)
        v17 = getChildAt(v12.node, 0)
        setLightColor(v17, v12.defaultColor[1] * v7, v12.defaultColor[2] * v7, v12.defaultColor[3] * v7)
        -- TODO: structure LOP_FORNLOOP (pc 298, target 277)
      end
      if v5.samples.turnLight ~= nil and isActiveForInputIgnoreSelection then
        v8 = math.floor((v6 + 1.7721542475852274) / math.pi * 2)
        if v5.turnLightRepetitionCount ~= nil and v8 ~= v5.turnLightRepetitionCount then
          v9:playSample(v5.samples.turnLight)
        end
        v5.turnLightRepetitionCount = v8
      end
      self:raiseActive()
    end
  end
end
function Lights:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    local isActiveForLights = self:getIsActiveForLights()
    if self.spec_lights.interiorLightsAvailable then
      local v9 = self:getIsActiveForInteriorLights()
      self:setInteriorLightsVisibility(...)
    end
    for v10, v11 in ipairs(v5.actionEventsActiveChange) do
      v12:setActionEventActive(v11, isActiveForLights)
    end
    v7:setActionEventActive(v5.actionEventIdLight, isActiveForLights)
    if Platform.gameplay.automaticLights and self == self.rootVehicle then
      v7 = self:getIsAIActive()
      if not v7 then
        v11 = v11:getActionControllerDirection()
        if v11 ~= -1 then
        end
        self:updateAutomaticLights(v9, true)
      end
    end
  end
end
function Lights:getIsActiveForLights(onlyPowered)
  if onlyPowered == true then
    local v2 = self:getIsPowered()
    if not v2 then
      return false
    end
  end
  if self.getIsEntered ~= nil then
    v2 = self:getIsEntered()
    if v2 then
      v2 = self:getCanToggleLight()
      if v2 then
        return true
      end
    end
  end
  if self.attacherVehicle ~= nil then
    v2 = v2:getIsActiveForLights()
    return v2
  end
  return false
end
function Lights.getIsActiveForInteriorLights(v0)
  return false
end
function Lights:getCanToggleLight()
  local v2 = self:getIsAIActive()
  if v2 then
    return false
  end
  if v1.numLightTypes == 0 then
    return false
  end
  if g_currentMission.controlledVehicle == self then
    return true
  end
  return false
end
function Lights.getUseHighProfile(v0)
  local v1 = v1:getValue("lightsProfile")
  local v2 = Utils.getNoNil(Platform.gameplay.lightsProfile, v1)
  if v2 ~= GS_PROFILE_VERY_HIGH and v2 ~= GS_PROFILE_HIGH then
  end
  return v2
end
function Lights:setNextLightsState(increment)
  if self.spec_lights.lightStates ~= nil and 0 < #self.spec_lights.lightStates then
    local v3 = bitAND(self.spec_lights.lightsTypesMask, self.spec_lights.maxLightStateMask)
    if #self.spec_lights.lightStates >= self.spec_lights.currentLightState + increment then
      -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000007 -> L36
      -- if 0 >= v3 then goto L36 end
    end
    -- goto L42  (LOP_JUMP +6)
    if 0 < 0 then
    end
    if 0 < v4 then
      for v9, v10 in pairs(v2.lightStates[v4]) do
        local v11 = bitOR(v5, 2 ^ v10)
      end
    end
    v2.currentLightState = v4
    self:setLightsTypesMask(v5)
  end
end
function Lights:setLightsTypesMask(lightsTypesMask, force, noEventSend)
  if self.isServer then
    local v5 = bitAND(lightsTypesMask, self.spec_lights.maxLightStateMask)
    if self.spec_lights.turnLightState == Lights.TURNLIGHT_LEFT then
      v5 = bitOR(v5, 2 ^ self.spec_lights.additionalLightTypes.turnLightLeft)
    end
    if v4.turnLightState == Lights.TURNLIGHT_RIGHT then
      v5 = bitOR(lightsTypesMask, 2 ^ v4.additionalLightTypes.turnLightRight)
    end
    if v4.turnLightState == Lights.TURNLIGHT_HAZARD then
      v5 = bitOR(lightsTypesMask, 2 ^ v4.additionalLightTypes.turnLightAny)
    end
    if v4.brakeLightsVisibility then
      v5 = bitOR(lightsTypesMask, 2 ^ v4.additionalLightTypes.brakeLight)
    end
    if v4.reverseLightsVisibility then
      v5 = bitOR(lightsTypesMask, 2 ^ v4.additionalLightTypes.reverseLight)
    end
    -- if not v4.interiorLightsVisibility then goto L137 end
    v5 = bitOR(lightsTypesMask, 2 ^ v4.additionalLightTypes.interiorLight)
  else
    v5 = bitXOR(lightsTypesMask, 2 ^ self.spec_lights.additionalLightTypes.interiorLight)
    if self.spec_lights.interiorLightsVisibility then
      v5 = bitOR(v5, 2 ^ self.spec_lights.additionalLightTypes.interiorLight)
    end
  end
  if lightsTypesMask == v4.lightsTypesMask then
    -- if not v2 then goto L254 end
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L181
  end
  if g_server ~= nil then
    local v7 = VehicleSetLightEvent.new(self, lightsTypesMask, v4.totalNumLightTypes)
    v5:broadcastEvent(v7, nil, nil, self)
  else
    v5 = v5:getServerConnection()
    v7 = VehicleSetLightEvent.new(self, lightsTypesMask, v4.totalNumLightTypes)
    v5:sendEvent(...)
  end
  v5 = bitAND(lightsTypesMask, v4.maxLightStateMask)
  local v6 = bitAND(v4.lightsTypesMask, v4.maxLightStateMask)
  if v5 ~= v6 and self.isClient then
    v5:playSample(v4.samples.toggleLights)
  end
  v7 = self:getUseHighProfile()
  if v7 then
  end
  self:setLightsState(v6.realLights, false)
  self:setLightsState(v5.realLights, lightsTypesMask)
  self:setLightsState(v4.staticLights, lightsTypesMask)
  v4.lightsTypesMask = lightsTypesMask
  SpecializationUtil.raiseEvent(self, "onLightsTypesMaskChanged", lightsTypesMask)
  return true
end
function Lights:getLightsTypesMask()
  return self.spec_lights.lightsTypesMask
end
function Lights:setBeaconLightsVisibility(visibility, force, noEventSend)
  if visibility == self.spec_lights.beaconLightsActive then
    -- if not v2 then goto L148 end
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L42
  end
  if g_server ~= nil then
    local v7 = VehicleSetBeaconLightEvent.new(self, visibility)
    v5:broadcastEvent(v7, nil, nil, self)
  else
    local v5 = v5:getServerConnection()
    v7 = VehicleSetBeaconLightEvent.new(self, visibility)
    v5:sendEvent(...)
  end
  v5 = self:getIsActiveForInput(true)
  v4.beaconLightsActive = visibility
  for v9, v10 in pairs(v4.beaconLights) do
    if v4.hasRealBeaconLights and v10.realLightNode ~= nil then
      setVisibility(v10.realLightNode, visibility)
    end
    if v10.lightNode ~= nil then
      setVisibility(v10.lightNode, visibility)
    end
    if v10.lightShaderNode ~= nil then
      if not visibility then
      end
      local v12, v13, v14, v15 = getShaderParameter(v10.lightShaderNode, "lightControl")
      setShaderParameter(v10.lightShaderNode, "lightControl", v11, v13, v14, v15, false)
    end
    if not v5 then
      continue
    end
    if not (v10.device ~= nil) then
      continue
    end
    if visibility then
      v12 = v12:activateBeaconLight(v10.device.mode, v10.device.numLEDScale, v10.device.rpm, v10.device.brightnessScale)
      v10.device.deviceId = v12
    else
      if not (v10.device.deviceId ~= nil) then
        continue
      end
      v12:deactivateBeaconLight(v10.device.deviceId)
      v10.device.deviceId = nil
    end
  end
  SpecializationUtil.raiseEvent(self, "onBeaconLightsVisibilityChanged", visibility)
  return true
end
function Lights:getBeaconLightsVisibility()
  return self.spec_lights.beaconLightsActive
end
function Lights:setTurnLightState(state, force, noEventSend)
  if state == self.spec_lights.turnLightState then
    -- if not v2 then goto L96 end
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L42
  end
  if g_server ~= nil then
    local v7 = VehicleSetTurnLightEvent.new(self, state)
    v5:broadcastEvent(v7, nil, nil, self)
  else
    local v5 = v5:getServerConnection()
    v7 = VehicleSetTurnLightEvent.new(self, state)
    v5:sendEvent(...)
  end
  local v6 = self:getUseHighProfile()
  if v6 then
  end
  v4.activeTurnLightSetup = v5
  v4.turnLightState = state
  if v4.turnLightState == Lights.TURNLIGHT_LEFT then
  elseif v4.turnLightState == Lights.TURNLIGHT_RIGHT then
  else
  end
  v4.turnLightTriState = v6
  if self.isServer then
    self:setLightsTypesMask(v4.lightsTypesMask, nil)
  end
  SpecializationUtil.raiseEvent(self, "onTurnLightStateChanged", state)
  return true
end
function Lights:getTurnLightState()
  return self.spec_lights.turnLightState
end
function Lights:setBrakeLightsVisibility(visibility)
  if visibility ~= self.spec_lights.brakeLightsVisibility then
    self.spec_lights.brakeLightsVisibility = visibility
    self:setLightsTypesMask(self.spec_lights.lightsTypesMask)
    SpecializationUtil.raiseEvent(self, "onBrakeLightsVisibilityChanged", visibility)
  end
  return true
end
function Lights:setReverseLightsVisibility(visibility)
  if visibility ~= self.spec_lights.reverseLightsVisibility then
    self.spec_lights.reverseLightsVisibility = visibility
    self:setLightsTypesMask(self.spec_lights.lightsTypesMask)
    SpecializationUtil.raiseEvent(self, "onReverseLightsVisibilityChanged", visibility)
  end
  return true
end
function Lights:setInteriorLightsVisibility(visibility)
  local noEventSend, v4 = self:getInteriorLightBrightness(true)
  if noEventSend == 0 then
  end
  if visibility == force.interiorLightsVisibility then
    -- if not v4 then goto L23 end
  end
  force.interiorLightsVisibility = visibility
  self:setLightsTypesMask(force.lightsTypesMask, true, true)
  return true
end
function Lights:getInteriorLightBrightness(updateState)
  if updateState then
    if g_currentMission.environment.currentHour + g_currentMission.environment.currentMinute / 60 < 10 then
    end
    if 16 < v5 then
    end
    local v7 = MathUtil.clamp(v4, 0, 1)
    force.interiorLightsBrightness = v7
    if force.interiorLightsBrightness == force.interiorLightsBrightness then
    end
  end
  return force.interiorLightsBrightness, noEventSend
end
function Lights:setLightsState(lights, isActive, chargeScale)
  -- TODO: structure LOP_FORNPREP (pc 3, target 11)
  self:setLightState(lights[1], isActive, chargeScale)
  -- TODO: structure LOP_FORNLOOP (pc 10, target 4)
end
function Lights:setLightState(light, isActive, chargeScale)
  local v4 = self:getIsLightActive(light)
  if v4 then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L76
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L76
    v4 = type(isActive)
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x80000005 -> L76
    for v8, v9 in pairs(light.lightTypes) do
      local v10 = bitAND(v4, 2 ^ v9)
      if v10 == 0 then
        if not (v9 == -1) then
          continue
        end
        v10 = self:getIsActiveForLights(true)
        if not v10 then
          continue
        end
      end
      if not isActive then
      elseif not (self.spec_lights.maxLightState < v9) then
        continue
      end
    end
    -- if not v2 then goto L76 end
    for v8, v9 in pairs(light.excludedLightTypes) do
      v10 = bitAND(v4, 2 ^ v9)
      if not (v10 ~= 0) then
        continue
      end
      -- goto L76  (LOP_JUMP +4)
    end
  else
  end
  if isActive and light.customChargeFunction ~= nil then
    v4 = light.customChargeFunction(self)
  end
  self:setStaticLightState(light, isActive, chargeScale)
  self:setRealLightState(light, isActive, chargeScale)
  light.isActive = isActive
end
function Lights.setRealLightState(v0, light, isActive, chargeScale)
  if not chargeScale then
    if isActive then
    else
    end
  end
  local v5 = getHasClassId(light.node, ClassIds.LIGHT_SOURCE)
  if v5 then
    if light.defaultColor ~= nil then
      setLightColor(light.node, light.defaultColor[1] * v4, light.defaultColor[2] * v4, light.defaultColor[3] * v4)
      local v9 = getNumOfChildren(light.node)
      -- TODO: structure LOP_FORNPREP (pc 39, target 56)
      local v10 = getChildAt(light.node, 0)
      setLightColor(v10, light.defaultColor[1] * v4, light.defaultColor[2] * v4, light.defaultColor[3] * v4)
      -- TODO: structure LOP_FORNLOOP (pc 55, target 40)
    end
    setVisibility(light.node, isActive)
  end
end
function Lights.setStaticLightState(v0, light, isActive, chargeScale)
  if not chargeScale then
    if isActive then
    else
    end
  end
  if light.useShaderParameter then
    I3DUtil.setShaderParameterRec(light.node, "lightControl", light.intensity * v4, nil, nil, nil)
  end
  if light.toggleVisibility then
    setVisibility(light.node, isActive)
  end
end
function Lights:deactivateLights(keepHazardLightsOn)
  self:setLightsTypesMask(0, true, true)
  self:setBeaconLightsVisibility(false, true, true)
  if keepHazardLightsOn then
    -- if v0.spec_lights.turnLightState == Lights.TURNLIGHT_HAZARD then goto L32 end
  end
  self:setTurnLightState(Lights.TURNLIGHT_OFF, true, true)
  self:setBrakeLightsVisibility(false)
  self:setReverseLightsVisibility(false)
  self:setInteriorLightsVisibility(false)
  isActive.currentLightState = 0
end
function Lights:deactivateBeaconLights()
  for v5, v6 in pairs(self.spec_lights.beaconLights) do
    if not (v6.device ~= nil) then
      continue
    end
    v8:deactivateBeaconLight(v6.device.deviceId)
    v6.device.deviceId = nil
  end
end
function Lights.getDeactivateLightsOnLeave(v0)
  return true
end
function Lights:loadSharedLight(xmlFile, key, targetTable)
  local xmlFilename = xmlFile:getValue(key .. "#filename")
  if xmlFilename ~= nil then
    local v6 = Utils.getFilename(xmlFilename, self.baseDirectory)
    v6 = XMLFile.load("sharedLight", v6, Lights.sharedLightXMLSchema)
    if v6 ~= nil then
      local v7 = v6:getValue("light.filename")
      if v7 == nil then
        Logging.xmlWarning(v6, "Missing light i3d filename!")
        v6:delete()
        return
      end
      local v9 = xmlFile:getValue(key .. "#linkNode", "0>", self.components, self.i3dMappings)
      if {linkNode = v9}.linkNode == nil then
        Logging.xmlWarning(xmlFile, "Missing light linkNode in '%s'!", key)
        v6:delete()
        return
      end
      v9 = xmlFile:getValue(key .. "#lightTypes", nil, true)
      v8.lightTypes = v9
      v9 = xmlFile:getValue(key .. "#excludedLightTypes", nil, true)
      v8.excludedLightTypes = v9
      while true do
        v11 = string.format("%s.rotationNode(%d)", key, v10)
        v12 = xmlFile:hasProperty(v11)
        if not v12 then
          break
        end
        v12 = xmlFile:getValue(v11 .. "#name")
        v13 = xmlFile:getValue(v11 .. "#rotation", nil, true)
        if v12 ~= nil then
          v9[v12] = v13
        end
      end
      v11 = Utils.getFilename(v7, self.baseDirectory)
      v8.filename = v11
      v4.xmlLoadingHandles[v6] = true
      v12 = self:loadSubSharedI3DFile(v11, false, false, self.loadSharedLightI3DLoaded, self, {xmlFile = xmlFile, key = key, lightXMLFile = v6, sharedLight = v8, targetTable = targetTable, rotations = v9})
      table.insert(v4.sharedLoadRequestIds, v12)
      return
    end
    for v10, v11 in pairs(u0) do
      v12 = xmlFilename:find(v10)
      if not v12 then
        continue
      end
      v12 = xmlFilename:gsub(v10, v11)
      v13 = fileExists(v12)
      if not v13 then
        continue
      end
      Logging.xmlWarning(xmlFile, "Light '%s' has been renamed to '%s' in '%s'!", v10, v11, key)
    end
  end
end
function Lights.loadStaticLightNodesFromSharedLight(v0, light, isActive, chargeScale, v4, v5, v6, v7, v8, v9)
  chargeScale:iterate(v4, function(v0, light)
    local isActive = isActive:getValue(light .. "#node", "0", u1)
    if isActive ~= nil then
      local chargeScale = I3DUtil.getIsLinkedToNode(u2.node, isActive)
      if chargeScale then
        chargeScale = getHasShaderParameter(isActive, "lightControl")
        if chargeScale then
          -- TODO: structure LOP_FORNPREP (pc 34, target 46)
          if u3[1].node == {node = isActive}.node then
          end
          -- TODO: structure LOP_FORNLOOP (pc 45, target 35)
          chargeScale.useShaderParameter = true
          local v5 = v5:getValue(light .. "#intensity", 25)
          chargeScale.intensity = v5
          I3DUtil.setShaderParameterRec(isActive, "lightControl", 0, nil, nil, nil)
          v5 = v5:getValue(light .. "#toggleVisibility", false)
          chargeScale.toggleVisibility = v5
          if chargeScale.toggleVisibility then
            setVisibility(chargeScale.node, false)
          end
          if u4 then
            v5 = v5:getValue(light .. "#excludedLightTypes", chargeScale.excludedLightTypes, true)
            chargeScale.excludedLightTypes = v5
            if u2.excludedLightTypes ~= nil and 0 < #u2.excludedLightTypes then
              v5 = table.copy(u2.excludedLightTypes)
              chargeScale.excludedLightTypes = v5
            end
            v5 = v5:getValue(light .. "#lightTypes", chargeScale.lightTypes, true)
            chargeScale.lightTypes = v5
            -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L168
            -- if 0 >= #u2.lightTypes then goto L168 end
            v5 = table.copy(u2.lightTypes)
            chargeScale.lightTypes = v5
          else
            if not chargeScale.excludedLightTypes then
            end
            chargeScale.excludedLightTypes = v5
            if not chargeScale.lightTypes then
            end
            chargeScale.lightTypes = v5
          end
          v5:loadAdditionalLightAttributesFromXML(u6, u7, chargeScale)
          if v4 then
            table.insert(u3, chargeScale)
          end
          table.insert(u8, chargeScale)
          return
        end
        local v6 = getName(isActive)
        Logging.xmlWarning(...)
        return
      end
      v6 = getName(isActive)
      Logging.xmlWarning(u0, "Defined node '%s' is not a child of the static light root node in '%s!", v6, light)
      return
    end
    Logging.xmlWarning(u0, "Could not find node for '%s'!", light)
  end)
end
function Lights:loadSharedLightI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v11 = args.lightXMLFile:getValue("light.rootNode#node", "0", i3dNode)
    args.sharedLight.node = v11
    self:loadStaticLightNodesFromSharedLight(args.xmlFile, args.key, args.lightXMLFile, "light.defaultLight", i3dNode, self.spec_lights.staticLights, self.spec_lights.defaultLightsStatic, args.sharedLight, true)
    self:loadStaticLightNodesFromSharedLight(args.xmlFile, args.key, args.lightXMLFile, "light.brakeLight", i3dNode, self.spec_lights.staticLights, self.spec_lights.brakeLightsStatic, args.sharedLight)
    self:loadStaticLightNodesFromSharedLight(args.xmlFile, args.key, args.lightXMLFile, "light.reverseLight", i3dNode, self.spec_lights.staticLights, self.spec_lights.reverseLightsStatic, args.sharedLight)
    self:loadStaticLightNodesFromSharedLight(args.xmlFile, args.key, args.lightXMLFile, "light.turnLightLeft", i3dNode, self.spec_lights.staticLights, self.spec_lights.turnLightsLeftStatic, args.sharedLight)
    self:loadStaticLightNodesFromSharedLight(args.xmlFile, args.key, args.lightXMLFile, "light.turnLightRight", i3dNode, self.spec_lights.staticLights, self.spec_lights.turnLightsRightStatic, args.sharedLight)
    args.lightXMLFile:iterate("light.rotationNode", function(self, i3dNode)
      local failedReason = failedReason:getValue(i3dNode .. "#name")
      if failedReason ~= nil then
        local args = args:getValue(i3dNode .. "#node", nil, u1)
        if u2[failedReason] ~= nil then
          local v6 = unpack(u2[failedReason])
          setRotation(...)
        end
      end
    end)
    link(args.sharedLight.linkNode, args.sharedLight.node)
    delete(i3dNode)
    table.insert(args.targetTable, args.sharedLight)
  end
  v7:delete()
  v4.xmlLoadingHandles[v7] = nil
end
function Lights.loadAdditionalLightAttributesFromXML(v0, light, isActive, chargeScale)
  return true
end
function Lights.getIsLightActive(v0, light)
  return true
end
function Lights:updateAutomaticLights(light, isActive)
  if light then
    if isActive then
      -- if v0.spec_lights.automaticLightsTypesMaskWork then goto L9 end
    end
    -- if v3.lightsTypesMask == v3.automaticLightsTypesMask then goto L26 end
    self:setLightsTypesMask(chargeScale.automaticLightsTypesMask)
    return
  end
  if chargeScale.lightsTypesMask ~= 0 then
    self:setLightsTypesMask(0)
  end
end
function Lights:lightsWeatherChanged()
  isActive:setActionEventTextVisibility(self.spec_lights.actionEventIdLight, not g_currentMission.environment.isSunOn)
end
function Lights:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and self.getIsEntered ~= nil then
    local chargeScale = self:getIsEntered()
    if chargeScale then
      self:clearActionEventsTable(self.spec_lights.actionEvents)
      if isActiveForInputIgnoreSelection then
        local v5, v6 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_LIGHTS, self, Lights.actionEventToggleLights, false, true, false, true, nil)
        self.spec_lights.actionEventIdLight = v6
        v5, v6 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_LIGHTS_BACK, self, Lights.actionEventToggleLightsBack, false, true, false, true, nil)
        local v7, v8 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_LIGHT_FRONT, self, Lights.actionEventToggleLightFront, false, true, false, true, nil)
        local v9, v10 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_WORK_LIGHT_BACK, self, Lights.actionEventToggleWorkLightBack, false, true, false, true, nil)
        local v11, v12 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_WORK_LIGHT_FRONT, self, Lights.actionEventToggleWorkLightFront, false, true, false, true, nil)
        local v13, v14 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_HIGH_BEAM_LIGHT, self, Lights.actionEventToggleHighBeamLight, false, true, false, true, nil)
        self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_TURNLIGHT_HAZARD, self, Lights.actionEventToggleTurnLightHazard, false, true, false, true, nil)
        self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_TURNLIGHT_LEFT, self, Lights.actionEventToggleTurnLightLeft, false, true, false, true, nil)
        self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_TURNLIGHT_RIGHT, self, Lights.actionEventToggleTurnLightRight, false, true, false, true, nil)
        local v15, v16 = self:addActionEvent(self.spec_lights.actionEvents, InputAction.TOGGLE_BEACON_LIGHTS, self, Lights.actionEventToggleBeaconLights, false, true, false, true, nil)
        self.spec_lights.actionEventsActiveChange = {v8, v10, v12, v14, v16}
        for v20, v21 in pairs(self.spec_lights.actionEvents) do
          if not (v21.actionEventId ~= nil) then
            continue
          end
          v22:setActionEventTextVisibility(v21.actionEventId, false)
          v22:setActionEventTextPriority(v21.actionEventId, GS_PRIO_LOW)
        end
        v17 = v17:getNumOfLights()
        if 0 < v17 then
          v17 = getPlatformId()
          if v17 == PlatformId.PS4 then
            v17:setActionEventTextPriority(v16, GS_PRIO_VERY_LOW)
            v17:setActionEventTextVisibility(v16, true)
          end
        end
        v17:setActionEventTextVisibility(chargeScale.actionEventIdLight, not g_currentMission.environment.isSunOn)
        v17:setActionEventTextVisibility(v6, false)
      end
    end
  end
end
function Lights:onEnterVehicle(isControlling)
  self:setLightsTypesMask(self.spec_lights.lightsTypesMask, true, true)
  self:setBeaconLightsVisibility(self.spec_lights.beaconLightsActive, true, true)
  self:setTurnLightState(self.spec_lights.turnLightState, true, true)
end
function Lights:onLeaveVehicle()
  local light = self:getDeactivateLightsOnLeave()
  if light then
    self:deactivateLights(true)
  end
  self:deactivateBeaconLights()
end
function Lights:onDeactivate()
  self:deactivateBeaconLights()
end
function Lights:onStartMotor()
  self:setLightsTypesMask(self.spec_lights.lightsTypesMask, true, true)
end
function Lights:onStopMotor()
  self:setLightsTypesMask(self.spec_lights.lightsTypesMask, true, true)
end
function Lights:onStartReverseDirectionChange()
  if 0 < self.spec_lights.lightsTypesMask then
    self:setLightsTypesMask(self.spec_lights.lightsTypesMask, true, true)
  end
end
function Lights:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  if attacherVehicle.getLightsTypesMask ~= nil then
    local v6 = attacherVehicle:getLightsTypesMask()
    self:setLightsTypesMask(v6, true, true)
    v6 = attacherVehicle:getBeaconLightsVisibility()
    self:setBeaconLightsVisibility(v6, true, true)
    v6 = attacherVehicle:getTurnLightState()
    self:setTurnLightState(v6, true, true)
  end
end
function Lights:onPostDetach()
  self:deactivateLights()
end
function Lights:onAutomatedTrainTravelActive()
  self:updateAutomaticLights(not g_currentMission.environment.isSunOn, false)
end
function Lights:onAIDriveableActive()
  self:updateAutomaticLights(not g_currentMission.environment.isSunOn, false)
end
function Lights:onAIDriveableEnd()
  if self.getIsControlled ~= nil then
    local light = self:getIsControlled()
    if not light then
      self:setLightsTypesMask(0)
    end
  end
  self:setBeaconLightsVisibility(false, true, true)
end
function Lights:onAIFieldWorkerActive()
  self:updateAutomaticLights(not g_currentMission.environment.isSunOn, true)
end
function Lights:onAIJobVehicleBlock()
  self:setBeaconLightsVisibility(true, true, true)
end
function Lights:onAIJobVehicleContinue()
  self:setBeaconLightsVisibility(false, true, true)
end
function Lights:onAIFieldWorkerEnd()
  if self.getIsControlled ~= nil then
    local light = self:getIsControlled()
    if not light then
      self:setLightsTypesMask(0)
    end
  end
  self:setBeaconLightsVisibility(false, true, true)
end
function Lights:onVehiclePhysicsUpdate(acceleratorPedal, brakePedal, automaticBrake, currentSpeed)
  if not automaticBrake then
    local v8 = math.abs(brakePedal)
    if 0 >= v8 then
    end
  end
  self:setBrakeLightsVisibility(v7)
  if self.spec_drivable ~= nil then
  end
  if currentSpeed >= -self.spec_lights.reverseLightActivationSpeed then
    -- if v1 >= 0 then goto L39 end
  end
  if v5 ~= 1 then
  end
  self:setReverseLightsVisibility(true)
end
function Lights:loadRealLightSetup(xmlFile, key, lightTable, realLightToLight)
  lightTable.realLights = {}
  lightTable.defaultLights = {}
  lightTable.turnLightsLeft = {}
  lightTable.turnLightsRight = {}
  lightTable.brakeLights = {}
  lightTable.reverseLights = {}
  lightTable.interiorLights = {}
  self:loadRealLights(xmlFile, key .. ".light", lightTable.realLights, lightTable.defaultLights)
  self:loadRealLights(xmlFile, key .. ".brakeLight", lightTable.realLights, lightTable.brakeLights)
  self:loadRealLights(xmlFile, key .. ".reverseLight", lightTable.realLights, lightTable.reverseLights)
  self:loadRealLights(xmlFile, key .. ".turnLightLeft", lightTable.realLights, lightTable.turnLightsLeft)
  self:loadRealLights(xmlFile, key .. ".turnLightRight", lightTable.realLights, lightTable.turnLightsRight)
  self:loadRealLights(xmlFile, key .. ".interiorLight", lightTable.realLights, lightTable.interiorLights)
  -- TODO: structure LOP_FORNPREP (pc 99, target 113)
  lightTable.interiorLights[1].customChargeFunction = self.getInteriorLightBrightness
  self.spec_lights.interiorLightsAvailable = true
  -- TODO: structure LOP_FORNLOOP (pc 112, target 100)
end
function Lights.loadRealLights(v0, light, isActive, chargeScale, v4)
  light:iterate(isActive, function(v0, light)
    local isActive = isActive:getValue(light .. "#node", nil, u1.components, u1.i3dMappings)
    if isActive ~= nil then
      local chargeScale = getHasClassId(isActive, ClassIds.LIGHT_SOURCE)
      if chargeScale then
        -- TODO: structure LOP_FORNPREP (pc 35, target 47)
        if u2[1].node == {node = isActive, toggleVisibility = true}.node then
        end
        -- TODO: structure LOP_FORNLOOP (pc 46, target 36)
        I3DUtil.interateRecursively(isActive, function(v0)
          local light = getVisibility(v0)
          if not light then
            local v4 = getName(v0)
            Logging.xmlWarning(u0, "Real light source '%s' is hidden in '%s'!", v4, u1)
          end
        end)
        setVisibility(isActive, false)
        if not chargeScale.defaultColor then
          local v6 = getLightColor(isActive)
        end
        chargeScale.defaultColor = v5
        local v5 = v5:getValue(light .. "#excludedLightTypes", nil, true)
        if chargeScale.excludedLightTypes == nil then
          chargeScale.excludedLightTypes = v5
        else
          -- TODO: structure LOP_FORNPREP (pc 91, target 101)
          table.insert(chargeScale.excludedLightTypes, v5[1])
          -- TODO: structure LOP_FORNLOOP (pc 100, target 92)
        end
        v6 = v6:getValue(light .. "#lightTypes", nil, true)
        if chargeScale.lightTypes == nil then
          chargeScale.lightTypes = v6
        else
          -- TODO: structure LOP_FORNPREP (pc 120, target 130)
          table.insert(chargeScale.lightTypes, v6[1])
          -- TODO: structure LOP_FORNLOOP (pc 129, target 121)
        end
        v7:loadAdditionalLightAttributesFromXML(u0, light, chargeScale)
        if v4 then
          table.insert(u2, chargeScale)
        end
        table.insert(u3, chargeScale)
        return
      end
      v6 = getName(isActive)
      Logging.xmlWarning(u0, "Node '%s' is not a real light source in '%s'", v6, u4)
      return
    end
    Logging.xmlWarning(u0, "RealLight node missing for light '%s'", u4)
  end)
end
function Lights.loadStaticLightNodes(v0, light, isActive, chargeScale, v4)
  light:iterate(isActive, function(v0, light)
    local isActive = isActive:getValue(light .. "#node", nil, u1.components, u1.i3dMappings)
    local chargeScale = chargeScale:getValue(light .. "#shaderNode", nil, u1.components, u1.i3dMappings)
    if isActive == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L194
    end
    local v5 = getHasClassId({node = isActive or chargeScale}.node, ClassIds.LIGHT_SOURCE)
    if v5 then
      Logging.xmlWarning(u0, "Light source used in static light '%s'", u2)
    end
    -- TODO: structure LOP_FORNPREP (pc 56, target 68)
    if u3[1].node == v4.node then
    end
    -- TODO: structure LOP_FORNLOOP (pc 67, target 57)
    if chargeScale ~= nil then
      v4.useShaderParameter = true
      local v6 = v6:getValue(light .. "#intensity", 25)
      v4.intensity = v6
      I3DUtil.setShaderParameterRec(chargeScale, "lightControl", 0, nil, nil, nil)
    end
    if isActive == nil then
    end
    v6 = v6:getValue(v8, true)
    v4.toggleVisibility = v6
    if v4.toggleVisibility then
      setVisibility(v4.node, false)
    end
    v6 = v6:getValue(light .. "#excludedLightTypes", nil, true)
    if v4.excludedLightTypes == nil then
      v4.excludedLightTypes = v6
    else
      -- TODO: structure LOP_FORNPREP (pc 133, target 143)
      table.insert(v4.excludedLightTypes, v6[1])
      -- TODO: structure LOP_FORNLOOP (pc 142, target 134)
    end
    local v7 = v7:getValue(light .. "#lightTypes", nil, true)
    if v4.lightTypes == nil then
      v4.lightTypes = v7
    else
      -- TODO: structure LOP_FORNPREP (pc 162, target 172)
      table.insert(v4.lightTypes, v7[1])
      -- TODO: structure LOP_FORNLOOP (pc 171, target 163)
    end
    v8:loadAdditionalLightAttributesFromXML(u0, light, v4)
    if v5 then
      table.insert(u3, v4)
    end
    table.insert(u4, v4)
  end)
end
function Lights.applyAdditionalActiveLightType(v0, light, isActive)
  -- TODO: structure LOP_FORNPREP (pc 3, target 14)
  table.insert(light[1].lightTypes, isActive)
  -- TODO: structure LOP_FORNLOOP (pc 13, target 4)
end
function Lights:loadBeaconLightFromXML(xmlFile, key)
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if {node = v5}.node ~= nil then
    v5 = xmlFile:getValue(key .. "#filename")
    local v6 = xmlFile:getValue(key .. "#speed")
    v6 = xmlFile:getValue(key .. "#realLightRange", 1)
    v6 = xmlFile:getValue(key .. "#intensity")
    if v5 ~= nil then
      v6 = Utils.getFilename(v5, self.baseDirectory)
      v6 = XMLFile.load("beaconLightXML", v6, Lights.beaconLightXMLSchema)
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L206
      self.spec_lights.xmlLoadingHandles[v6] = true
      local v7 = v6:getValue("beaconLight.filename")
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L206
      local v8 = Utils.getFilename(v7, self.baseDirectory)
      v8 = self:loadSubSharedI3DFile({node = v5, speed = v6, realLightRange = v6, intensity = v6, xmlFile = v6, filename = v8}.filename, false, false, self.onBeaconLightI3DLoaded, self, {node = v5, speed = v6, realLightRange = v6, intensity = v6, xmlFile = v6, filename = v8})
      table.insert(self.spec_lights.sharedLoadRequestIds, v8)
      return
    end
    v4.lightShaderNode = v4.node
    v6 = xmlFile:getValue(key .. ".realLight#node", nil, self.components, self.i3dMappings)
    v4.realLightNode = v6
    v6 = xmlFile:getValue(key .. ".rotator#node", nil, self.components, self.i3dMappings)
    v4.rotatorNode = v6
    v6 = xmlFile:getValue(key .. "#multiBlink", false)
    v4.multiBlink = v6
    v6 = BeaconLightManager.loadDeviceFromXML(xmlFile, key .. ".device")
    v4.device = v6
    if v4.realLightNode ~= nil then
      v7 = getLightColor(v4.realLightNode)
      v4.defaultColor = {}
      setVisibility(v4.realLightNode, false)
      v6 = getLightRange(v4.realLightNode)
      v4.defaultLightRange = v6
      setLightRange(v4.realLightNode, v4.defaultLightRange * v4.realLightRange)
    end
    table.insert(chargeScale.beaconLights, v4)
  end
end
function Lights:onBeaconLightI3DLoaded(i3dNode, failedReason, beaconLight)
  if i3dNode ~= 0 then
    local v6 = beaconLight.xmlFile:getValue("beaconLight.rootNode#node", nil, i3dNode)
    local v7 = beaconLight.xmlFile:getValue("beaconLight.light#node", nil, i3dNode)
    local v8 = beaconLight.xmlFile:getValue("beaconLight.light#shaderNode", nil, i3dNode)
    if v6 ~= nil then
      if v7 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L191
      end
      beaconLight.rootNode = v6
      beaconLight.lightNode = v7
      beaconLight.lightShaderNode = v8
      local v9 = v5:getValue("beaconLight.realLight#node", nil, i3dNode)
      beaconLight.realLightNode = v9
      v9 = v5:getValue("beaconLight.rotator#node", nil, i3dNode)
      beaconLight.rotatorNode = v9
      v9 = v5:getValue("beaconLight.rotator#speed", beaconLight.speed or 0.015)
      beaconLight.speed = v9
      v9 = v5:getValue("beaconLight.light#intensity", beaconLight.intensity or 1000)
      beaconLight.intensity = v9
      v9 = v5:getValue("beaconLight.light#multiBlink", false)
      beaconLight.multiBlink = v9
      v9 = BeaconLightManager.loadDeviceFromXML(v5, "beaconLight.device")
      beaconLight.device = v9
      link(beaconLight.node, v6)
      setTranslation(v6, 0, 0, 0)
      if beaconLight.realLightNode ~= nil then
        local v10 = getLightColor(beaconLight.realLightNode)
        beaconLight.defaultColor = {}
        setVisibility(beaconLight.realLightNode, false)
        v9 = getLightRange(beaconLight.realLightNode)
        beaconLight.defaultLightRange = v9
        setLightRange(beaconLight.realLightNode, beaconLight.defaultLightRange * beaconLight.realLightRange)
      end
      if v7 ~= nil then
        setVisibility(v7, false)
      end
      if v8 ~= nil then
        local v9, v10, v11, v12 = getShaderParameter(v8, "lightControl")
        setShaderParameter(v8, "lightControl", 0, v10, v11, v12, false)
      end
      if 0 < beaconLight.speed then
        v9 = math.random(0, math.pi * 2)
        if beaconLight.rotatorNode ~= nil then
          setRotation(beaconLight.rotatorNode, 0, v9, 0)
        end
      end
      table.insert(v4.beaconLights, beaconLight)
    end
    delete(i3dNode)
  end
  v5:delete()
  beaconLight.xmlFile = nil
  v4.xmlLoadingHandles[v5] = nil
end
function Lights:actionEventToggleLightFront(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 and 1 <= self.spec_lights.numLightTypes then
    v6 = bitXOR(self.spec_lights.lightsTypesMask, 2 ^ Lights.LIGHT_TYPE_DEFAULT)
    self:setLightsTypesMask(v6)
  end
end
function Lights:actionEventToggleLights(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getCanToggleLight()
  if v5 then
    self:setNextLightsState(1)
  end
end
function Lights:actionEventToggleLightsBack(actionName, inputValue, callbackState, isAnalog)
  local v5 = self:getCanToggleLight()
  if v5 then
    self:setNextLightsState(-1)
  end
end
function Lights:actionEventToggleWorkLightBack(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    v6 = bitXOR(self.spec_lights.lightsTypesMask, 2 ^ Lights.LIGHT_TYPE_WORK_BACK)
    self:setLightsTypesMask(v6)
  end
end
function Lights:actionEventToggleWorkLightFront(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    v6 = bitXOR(self.spec_lights.lightsTypesMask, 2 ^ Lights.LIGHT_TYPE_WORK_FRONT)
    self:setLightsTypesMask(v6)
  end
end
function Lights:actionEventToggleHighBeamLight(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    v6 = bitXOR(self.spec_lights.lightsTypesMask, 2 ^ Lights.LIGHT_TYPE_HIGHBEAM)
    self:setLightsTypesMask(v6)
  end
end
function Lights:actionEventToggleTurnLightHazard(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    if self.spec_lights.turnLightState ~= Lights.TURNLIGHT_HAZARD then
    end
    self:setTurnLightState(v6)
  end
end
function Lights:actionEventToggleTurnLightLeft(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    if self.spec_lights.turnLightState ~= Lights.TURNLIGHT_LEFT then
    end
    self:setTurnLightState(v6)
  end
end
function Lights:actionEventToggleTurnLightRight(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    if self.spec_lights.turnLightState ~= Lights.TURNLIGHT_RIGHT then
    end
    self:setTurnLightState(v6)
  end
end
function Lights:actionEventToggleBeaconLights(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getCanToggleLight()
  if v6 then
    self:setBeaconLightsVisibility(not self.spec_lights.beaconLightsActive)
  end
end
function Lights:dashboardLightAttributes(xmlFile, key, dashboard, isActive)
  local v5 = xmlFile:getValue(key .. "#lightTypes", nil, true)
  dashboard.lightTypes = v5
  v5 = xmlFile:getValue(key .. "#excludedLightTypes", nil, true)
  dashboard.excludedLightTypes = v5
  dashboard.lightStates = {}
  -- TODO: structure LOP_FORNPREP (pc 30, target 36)
  dashboard.lightStates[0] = false
  -- TODO: structure LOP_FORNLOOP (pc 35, target 31)
  return true
end
function Lights:dashboardLightState(dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.displayTypeIndex == Dashboard.TYPES.MULTI_STATE then
    -- TODO: structure LOP_FORNPREP (pc 17, target 38)
    local v13 = bitAND(self.spec_lights.lightsTypesMask, 2 ^ 0)
    if v13 == 0 then
    end
    v11[v10] = true
    if not v7 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 37, target 18)
    if v11 then
      Dashboard.defaultMultiStateDashboardStateFunc(self, dashboard, dashboard.lightStates, minValue, maxValue, isActive)
      return
    end
    Dashboard.defaultMultiStateDashboardStateFunc(self, dashboard, -1, minValue, maxValue, isActive)
    return
  end
  if dashboard.lightTypes ~= nil then
    for v11, v12 in pairs(dashboard.lightTypes) do
      v13 = bitAND(v6, 2 ^ v12)
      if v13 == 0 then
        if not (v12 == -1) then
          continue
        end
        v13 = self:getIsActiveForLights(true)
        if not v13 then
          continue
        end
      end
      break
    end
  end
  if v7 then
    for v11, v12 in pairs(dashboard.excludedLightTypes) do
      v13 = bitAND(v6, 2 ^ v12)
      if not (v13 ~= 0) then
        continue
      end
      break
    end
  end
  Dashboard.defaultDashboardStateFunc(self, dashboard, v7, minValue, maxValue, isActive)
end
