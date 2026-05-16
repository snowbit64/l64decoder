-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/BaleWrapperStateEvent.lua")
source("dataS/scripts/vehicles/specializations/events/BaleWrapperAutomaticDropEvent.lua")
BaleWrapper = {STATE_NONE = 0, STATE_MOVING_BALE_TO_WRAPPER = 1, STATE_MOVING_GRABBER_TO_WORK = 2, STATE_WRAPPER_WRAPPING_BALE = 3, STATE_WRAPPER_FINSIHED = 4, STATE_WRAPPER_DROPPING_BALE = 5, STATE_WRAPPER_RESETTING_PLATFORM = 6, STATE_NUM_BITS = 3, CHANGE_GRAB_BALE = 1, CHANGE_DROP_BALE_AT_GRABBER = 2, CHANGE_WRAPPING_START = 3, CHANGE_WRAPPING_BALE_FINSIHED = 4, CHANGE_WRAPPER_START_DROP_BALE = 5, CHANGE_WRAPPER_BALE_DROPPED = 6, CHANGE_WRAPPER_PLATFORM_RESET = 7, CHANGE_BUTTON_EMPTY = 8, ANIMATION_NAMES = {"moveToWrapper", "wrapBale", "dropFromWrapper", "resetAfterDrop", "resetWrapping"}}
function BaleWrapper.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
end
function BaleWrapper.initSpecialization()
  local v3 = v3:getText("configuration_wrappingColor")
  v0:addConfigurationType("wrappingColor", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_wrappingAnimation")
  v0:addConfigurationType("wrappingAnimation", v3, "baleWrapper", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addSpecType("baleWrapperBaleSizeRound", "shopListAttributeIconBaleWrapperBaleSizeRound", BaleWrapper.loadSpecValueBaleSizeRound, BaleWrapper.getSpecValueBaleSizeRound, "vehicle")
  v0:addSpecType("baleWrapperBaleSizeSquare", "shopListAttributeIconBaleWrapperBaleSizeSquare", BaleWrapper.loadSpecValueBaleSizeSquare, BaleWrapper.getSpecValueBaleSizeSquare, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("BaleWrapper")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "wrappingColor")
  BaseMaterial.registerBaseMaterialConfigurationsXMLPaths(Vehicle.xmlSchema, "wrappingColor")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleWrapper#foldMinLimit", "Fold min limit (Allow grabbing if folding is between these values)", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleWrapper#foldMaxLimit", "Fold max limit (Allow grabbing if folding is between these values)", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleWrapper.grabber#node", "Grabber node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleWrapper.grabber#triggerNode", "Grabber trigger node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleWrapper.grabber#nearestDistance", "Distance to bale to grab it", 3)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleWrapper.automaticDrop#enabled", "Automatic drop", "true on mobile")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleWrapper.automaticDrop#toggleable", "Automatic bale drop can be toggled", "false on mobile")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleWrapper.automaticDrop#textPos", "Positive toggle automatic drop text", "action_toggleAutomaticBaleDropPos")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleWrapper.automaticDrop#textNeg", "Negative toggle automatic drop text", "action_toggleAutomaticBaleDropNeg")
  BaleWrapper.registerWrapperXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.roundBaleWrapper")
  BaleWrapper.registerWrapperXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.squareBaleWrapper")
  -- TODO: structure LOP_FORNPREP (pc 177, target 235)
  BaleWrapper.registerWrapperAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(?)" .. ".roundBaleWrapper", BaleWrapper.ANIMATION_NAMES[1])
  BaleWrapper.registerWrapperAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(?)" .. ".roundBaleWrapper.baleTypes.baleType(?)", BaleWrapper.ANIMATION_NAMES[1])
  BaleWrapper.registerWrapperAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(?)" .. ".squareBaleWrapper", BaleWrapper.ANIMATION_NAMES[1])
  BaleWrapper.registerWrapperAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(?)" .. ".squareBaleWrapper.baleTypes.baleType(?)", BaleWrapper.ANIMATION_NAMES[1])
  -- TODO: structure LOP_FORNLOOP (pc 234, target 178)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).baleWrapper#wrapperTime", "Bale wrapping time", 0)
  Bale.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).baleWrapper.bale")
end
function BaleWrapper:registerWrapperXMLPaths(v1)
  -- TODO: structure LOP_FORNPREP (pc 7, target 35)
  BaleWrapper.registerWrapperAnimationXMLPaths(self, v1, BaleWrapper.ANIMATION_NAMES[1])
  BaleWrapper.registerWrapperAnimationXMLPaths(self, v1 .. ".baleTypes.baleType(?)", BaleWrapper.ANIMATION_NAMES[1])
  -- TODO: structure LOP_FORNLOOP (pc 34, target 8)
  self:register(XMLValueType.STRING, v1 .. ".baleTypes.baleType(?)#fillType", "Fill type name")
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?)#diameter", "Bale diameter", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?)#width", "Bale width", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?)#height", "Bale height", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?)#length", "Bale length", 0)
  self:register(XMLValueType.STRING, v1 .. ".baleTypes.baleType(?).textures#diffuse", "Path to wrap diffuse map")
  self:register(XMLValueType.STRING, v1 .. ".baleTypes.baleType(?).textures#normal", "Path to wrap normal map")
  self:register(XMLValueType.BOOL, v1 .. ".baleTypes.baleType(?)#skipWrapping", "Bale is picked up, but not wrapped", false)
  self:register(XMLValueType.BOOL, v1 .. ".baleTypes.baleType(?)#forceWhileFolding", "Force this bale type while wrapper is folded", false)
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?).wrappingState.key(?)#time", "Time of wrapping (0-1)")
  self:register(XMLValueType.FLOAT, v1 .. ".baleTypes.baleType(?).wrappingState.key(?)#wrappingState", "Wrapping state for shader")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1 .. ".baleTypes.baleType(?)")
  BaleWrapper.registerWrapperFoilAnimationXMLPaths(self, v1 .. ".baleTypes.baleType(?)")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#baleNode", "Bale Node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#wrapperNode", "Wrapper Node")
  self:register(XMLValueType.INT, v1 .. "#wrapperRotAxis", "Wrapper rotation axis", 2)
  self:register(XMLValueType.FLOAT, v1 .. ".wrapperAnimation.key(?)#time", "Key time")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".wrapperAnimation.key(?)#baleRot", "Bale rotation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".wrapperAnimation.key(?)#wrapperRot", "Wrapper rotation", "0 0 0")
  self:register(XMLValueType.FLOAT, v1 .. "#wrappingTime", "Wrapping duration", 5)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrapAnimNodes.wrapAnimNode(?)#node", "Wrap node")
  self:register(XMLValueType.BOOL, v1 .. ".wrapAnimNodes.wrapAnimNode(?)#repeatWrapperRot", "Repeat wrapper rotation, so wrapper rotation is always between 0 and 360", false)
  self:register(XMLValueType.INT, v1 .. ".wrapAnimNodes.wrapAnimNode(?)#normalizeRotationOnBaleDrop", "Normalize rotation on bale drop", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".wrapAnimNodes.wrapAnimNode(?).key(?)#wrapperRot", "Wrapper rotation")
  self:register(XMLValueType.FLOAT, v1 .. ".wrapAnimNodes.wrapAnimNode(?).key(?)#wrapperTime", "Wrapper time")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".wrapAnimNodes.wrapAnimNode(?).key(?)#trans", "Trans", "0 0 0")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".wrapAnimNodes.wrapAnimNode(?).key(?)#rot", "Rotation", "0 0 0")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".wrapAnimNodes.wrapAnimNode(?).key(?)#scale", "Scale", "1 1 1")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrapNodes.wrapNode(?)#node", "Wrap node")
  self:register(XMLValueType.BOOL, v1 .. ".wrapNodes.wrapNode(?)#wrapVisibility", "Visibility while wrapping", false)
  self:register(XMLValueType.BOOL, v1 .. ".wrapNodes.wrapNode(?)#emptyVisibility", "Visibility while empty", false)
  self:register(XMLValueType.FLOAT, v1 .. ".wrapNodes.wrapNode(?)#maxWrapperRot", "Max. wrapper rotation")
  self:register(XMLValueType.FLOAT, v1 .. ".wrappingState.key(?)#time", "Time of wrapping (0-1)")
  self:register(XMLValueType.FLOAT, v1 .. ".wrappingState.key(?)#wrappingState", "Wrapping state for shader")
  self:register(XMLValueType.FLOAT, v1 .. ".wrappingAnimationNodes#maxTime", "Max. time of animation nodes", "Wrapper anim time")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingAnimationNodes.key(?)#node", "Animation node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingAnimationNodes.key(?)#rootNode", "Reference node for rotation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingAnimationNodes.key(?)#linkNode", "Node will be linked to this node while key is activated")
  self:register(XMLValueType.FLOAT, v1 .. ".wrappingAnimationNodes.key(?)#time", "Time to activate key")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".wrappingAnimationNodes.key(?)#translation", "Translation of key")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingAnimationNodes#referenceNode", "Reference node")
  self:register(XMLValueType.INT, v1 .. ".wrappingAnimationNodes#referenceAxis", "Reference axis", 1)
  self:register(XMLValueType.ANGLE, v1 .. ".wrappingAnimationNodes#minRot", "Min. rotation", 0)
  self:register(XMLValueType.ANGLE, v1 .. ".wrappingAnimationNodes#maxRot", "Max. rotation", 0)
  BaleWrapper.registerWrapperFoilAnimationXMLPaths(self, v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingCollisions.collision(?)#node", "Collision node")
  self:register(XMLValueType.INT, v1 .. ".wrappingCollisions.collision(?)#activeCollisionMask", "Collision mask active")
  self:register(XMLValueType.INT, v1 .. ".wrappingCollisions.collision(?)#inActiveCollisionMask", "Collision mask in active")
  self:register(XMLValueType.L10N_STRING, v1 .. "#unloadBaleText", "Unload bale text", "'action_unloadRoundBale' for round bales and 'action_unloadSquareBale' for square bales")
  self:register(XMLValueType.BOOL, v1 .. "#skipUnsupportedBales", "Skip unsupported bales (pick them up and drop them instantly)")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "wrap(?)")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "start(?)")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "stop(?)")
  self:register(XMLValueType.FLOAT, v1 .. ".sounds#wrappingEndTime", "Wrapping time to play end wrapping sound", 1)
end
function BaleWrapper:registerWrapperAnimationXMLPaths(v1, v2)
  self:register(XMLValueType.STRING, v1 .. ".animations." .. v2 .. "#animName", "Animation name", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".animations." .. v2 .. "#animSpeed", "Animation speed", 1)
  self:register(XMLValueType.BOOL, v1 .. ".animations." .. v2 .. "#reverseAfterMove", "Reverse animation after playing", true)
  self:register(XMLValueType.BOOL, v1 .. ".animations." .. v2 .. "#resetOnStart", "Reset animation on start", false)
end
function BaleWrapper:registerWrapperFoilAnimationXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingFoilAnimation#referenceNode", "Time reference node")
  self:register(XMLValueType.INT, v1 .. ".wrappingFoilAnimation#referenceAxis", "Rotation axis")
  self:register(XMLValueType.ANGLE, v1 .. ".wrappingFoilAnimation#minRot", "Min. reference rotation")
  self:register(XMLValueType.ANGLE, v1 .. ".wrappingFoilAnimation#maxRot", "Max. reference rotation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wrappingFoilAnimation#clipNode", "Node which has clip assigned")
  self:register(XMLValueType.STRING, v1 .. ".wrappingFoilAnimation#clipName", "Name of the clip to control")
end
function BaleWrapper.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperFromXML", BaleWrapper.loadWrapperFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperAnimationsFromXML", BaleWrapper.loadWrapperAnimationsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperAnimCurveFromXML", BaleWrapper.loadWrapperAnimCurveFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperAnimNodesFromXML", BaleWrapper.loadWrapperAnimNodesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperWrapNodesFromXML", BaleWrapper.loadWrapperWrapNodesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperStateCurveFromXML", BaleWrapper.loadWrapperStateCurveFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperAnimationNodesFromXML", BaleWrapper.loadWrapperAnimationNodesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadWrapperFoilAnimationFromXML", BaleWrapper.loadWrapperFoilAnimationFromXML)
  SpecializationUtil.registerFunction(vehicleType, "baleGrabberTriggerCallback", BaleWrapper.baleGrabberTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "allowsGrabbingBale", BaleWrapper.allowsGrabbingBale)
  SpecializationUtil.registerFunction(vehicleType, "pickupWrapperBale", BaleWrapper.pickupWrapperBale)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleWrappable", BaleWrapper.getIsBaleWrappable)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleDropAllowed", BaleWrapper.getIsBaleDropAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleWrappingAllowed", BaleWrapper.getIsBaleWrappingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "updateWrappingState", BaleWrapper.updateWrappingState)
  SpecializationUtil.registerFunction(vehicleType, "doStateChange", BaleWrapper.doStateChange)
  SpecializationUtil.registerFunction(vehicleType, "updateWrapNodes", BaleWrapper.updateWrapNodes)
  SpecializationUtil.registerFunction(vehicleType, "playMoveToWrapper", BaleWrapper.playMoveToWrapper)
  SpecializationUtil.registerFunction(vehicleType, "setBaleWrapperType", BaleWrapper.setBaleWrapperType)
  SpecializationUtil.registerFunction(vehicleType, "getMatchingBaleTypeIndex", BaleWrapper.getMatchingBaleTypeIndex)
  SpecializationUtil.registerFunction(vehicleType, "setBaleWrapperAutomaticDrop", BaleWrapper.setBaleWrapperAutomaticDrop)
end
function BaleWrapper.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", BaleWrapper.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", BaleWrapper.getCanBeSelected)
end
function BaleWrapper.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", BaleWrapper)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", BaleWrapper)
end
function BaleWrapper:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.wrapper", "vehicle.baleWrapper")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleGrabber", "vehicle.baleWrapper.grabber")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.grabber#index", "vehicle.baleWrapper.grabber#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.grabber#index", "vehicle.baleWrapper.grabber#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.roundBaleWrapper#baleIndex", "vehicle.baleWrapper.roundBaleWrapper#baleNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.roundBaleWrapper#wrapperIndex", "vehicle.baleWrapper.roundBaleWrapper#wrapperNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.squareBaleWrapper#baleIndex", "vehicle.baleWrapper.squareBaleWrapper#baleNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleWrapper.squareBaleWrapper#wrapperIndex", "vehicle.baleWrapper.squareBaleWrapper#wrapperNode")
  self.spec_baleWrapper.roundBaleWrapper = {}
  self:loadWrapperFromXML(self.spec_baleWrapper.roundBaleWrapper, self.xmlFile, "vehicle.baleWrapper", "roundBaleWrapper")
  self.spec_baleWrapper.squareBaleWrapper = {}
  self:loadWrapperFromXML(self.spec_baleWrapper.squareBaleWrapper, self.xmlFile, "vehicle.baleWrapper", "squareBaleWrapper")
  self.spec_baleWrapper.currentWrapper = {}
  local v3 = v3:getValue("vehicle.baleWrapper" .. "#foldMinLimit", 0)
  self.spec_baleWrapper.currentWrapperFoldMinLimit = v3
  v3 = v3:getValue("vehicle.baleWrapper" .. "#foldMaxLimit", 1)
  self.spec_baleWrapper.currentWrapperFoldMaxLimit = v3
  self.spec_baleWrapper.currentWrapper = self.spec_baleWrapper.roundBaleWrapper
  self:updateWrapNodes(false, true, 0)
  self.spec_baleWrapper.currentWrapper = self.spec_baleWrapper.squareBaleWrapper
  self:updateWrapNodes(false, true, 0)
  self.spec_baleWrapper.currentBaleTypeIndex = 1
  if self.spec_baleWrapper.roundBaleWrapper.baleNode ~= nil then
    self:setBaleWrapperType(true, 1)
  elseif self.spec_baleWrapper.squareBaleWrapper.baleNode ~= nil then
    self:setBaleWrapperType(false, 1)
  end
  v2.baleGrabber = {}
  local v4 = v4:getValue("vehicle.baleWrapper" .. ".grabber#node", nil, self.components, self.i3dMappings)
  v2.baleGrabber.grabNode = v4
  v4 = v4:getValue("vehicle.baleWrapper" .. ".grabber#triggerNode", nil, self.components, self.i3dMappings)
  v2.baleGrabber.triggerNode = v4
  if v2.baleGrabber.triggerNode == nil then
    Logging.xmlWarning(self.xmlFile, "Missing bale grab trigger node '%s'. This is required for all bale wrappers.", "vehicle.baleWrapper" .. ".grabber#triggerNode")
  else
    addTrigger(v2.baleGrabber.triggerNode, "baleGrabberTriggerCallback", self)
  end
  v4 = v4:getValue("vehicle.baleWrapper" .. ".grabber#nearestDistance", 3)
  v2.baleGrabber.nearestDistance = v4
  v2.baleGrabber.balesInTrigger = {}
  v2.baleToLoad = nil
  v2.baleToMount = nil
  v2.baleWrapperState = BaleWrapper.STATE_NONE
  v2.grabberIsMoving = false
  v2.hasBaleWrapper = true
  v2.showInvalidBaleWarning = false
  v2.baleDropBlockedWarning = nil
  v3 = v3:getValue("vehicle.baleWrapper.automaticDrop#enabled", Platform.gameplay.automaticBaleDrop)
  v2.automaticDrop = v3
  v3 = v3:getValue("vehicle.baleWrapper.automaticDrop#toggleable", not Platform.gameplay.automaticBaleDrop)
  v2.toggleableAutomaticDrop = v3
  v3 = v3:getValue("vehicle.baleWrapper.automaticDrop#textPos", "action_toggleAutomaticBaleDropPos", self.customEnvironment)
  v2.toggleAutomaticDropTextPos = v3
  v3 = v3:getValue("vehicle.baleWrapper.automaticDrop#textNeg", "action_toggleAutomaticBaleDropNeg", self.customEnvironment)
  v2.toggleAutomaticDropTextNeg = v3
  v2.texts = {}
  v4 = v4:getText("warning_foldingNotWhileWrapping")
  v2.texts.warningFoldingWrapping = v4
  v4 = v4:getText("warning_baleNotSupported")
  v2.texts.warningBaleNotSupported = v4
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.baleWrapper" .. ".wrappingAnimationConfigurations.wrappingAnimationConfiguration", self.configurations.wrappingAnimation or 1, self.components, self)
end
function BaleWrapper:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v3 = v3:getValue(savegame.key .. ".baleWrapper.bale#filename")
    if v3 ~= nil then
      local v5 = NetworkUtil.convertFromNetworkFilename(v3)
      v5 = v5:getValue(savegame.key .. ".baleWrapper#wrapperTime", 0)
      Bale.loadBaleAttributesFromXMLFile({filename = v5, wrapperTime = v5, translation = {0, 0, 0}, rotation = {0, 0, 0}, attributes = {}}.attributes, savegame.xmlFile, savegame.key .. ".baleWrapper.bale", savegame.resetVehicles)
      self.spec_baleWrapper.baleToLoad = {filename = v5, wrapperTime = v5, translation = {0, 0, 0}, rotation = {0, 0, 0}, attributes = {}}
    end
  end
  if self.configurations.wrappingColor ~= nil then
    self:applyBaseMaterialConfiguration(self.xmlFile, "wrappingColor", self.configurations.wrappingColor)
  end
end
function BaleWrapper:loadWrapperFromXML(wrapper, xmlFile, baseKey, wrapperName)
  if wrapper ~= self.spec_baleWrapper.roundBaleWrapper then
  end
  local wrappingAnimationConfig = Utils.getNoNil(self.configurations.wrappingAnimation, 1)
  local configKey = string.format("vehicle.baleWrapper.wrappingAnimationConfigurations.wrappingAnimationConfiguration(%d)", wrappingAnimationConfig - 1)
  self:loadWrapperAnimationsFromXML(wrapper, xmlFile, baseKey, configKey, "." .. wrapperName .. ".animations")
  wrapper.defaultAnimations = wrapper.animations
  local v9 = xmlFile:getValue(baseKey .. "." .. wrapperName .. "#baleNode", nil, self.components, self.i3dMappings)
  wrapper.baleNode = v9
  v9 = xmlFile:getValue(baseKey .. "." .. wrapperName .. "#wrapperNode", nil, self.components, self.i3dMappings)
  wrapper.wrapperNode = v9
  v9 = xmlFile:getValue(baseKey .. "." .. wrapperName .. "#wrapperRotAxis", 2)
  wrapper.wrapperRotAxis = v9
  local v10 = xmlFile:getValue(baseKey .. "." .. wrapperName .. "#wrappingTime", 5)
  wrapper.animTime = v10 * 1000
  wrapper.currentTime = 0
  wrapper.currentBale = nil
  wrapper.allowedBaleTypes = {}
  xmlFile:iterate(baseKey .. "." .. wrapperName .. ".baleTypes.baleType", function(self, wrapper)
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#fillType")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#wrapperBaleFilename")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#minBaleDiameter", wrapper .. "#diameter")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#maxBaleDiameter", wrapper .. "#diameter")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#minBaleWidth", wrapper .. "#width")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#maxBaleWidth", wrapper .. "#width")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#minBaleHeight", wrapper .. "#height")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#maxBaleHeight", wrapper .. "#height")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#minBaleLength", wrapper .. "#length")
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, wrapper .. "#maxBaleLength", wrapper .. "#length")
    local wrapperName = wrapperName:getValue(wrapper .. "#diameter", 0)
    local baseKey = MathUtil.round(wrapperName, 2)
    wrapperName = wrapperName:getValue(wrapper .. "#width", 0)
    baseKey = MathUtil.round(wrapperName, 2)
    wrapperName = wrapperName:getValue(wrapper .. "#height", 0)
    baseKey = MathUtil.round(wrapperName, 2)
    wrapperName = wrapperName:getValue(wrapper .. "#length", 0)
    baseKey = MathUtil.round(wrapperName, 2)
    baseKey = baseKey:getValue(wrapper .. ".textures#diffuse")
    if {diameter = baseKey, width = baseKey, height = baseKey, length = baseKey, wrapDiffuse = baseKey}.wrapDiffuse ~= nil then
      baseKey = Utils.getFilename({diameter = baseKey, width = baseKey, height = baseKey, length = baseKey, wrapDiffuse = baseKey}.wrapDiffuse, u0.baseDirectory)
    end
    baseKey = baseKey:getValue(wrapper .. ".textures#normal")
    xmlFile.wrapNormal = baseKey
    if xmlFile.wrapNormal ~= nil then
      baseKey = Utils.getFilename(xmlFile.wrapNormal, u0.baseDirectory)
      xmlFile.wrapNormal = baseKey
    end
    local configKey = string.format("%s.%s.baleTypes.baleType(%d)", u2, u3, self - 1)
    baseKey:loadWrapperAnimationsFromXML(xmlFile, u1, wrapper, configKey, ".animations", u4.animations)
    baseKey:loadWrapperFoilAnimationFromXML(xmlFile, u1, wrapper)
    xmlFile.changeObjects = {}
    ObjectChangeUtil.loadObjectChangeFromXML(u0.xmlFile, wrapper, xmlFile.changeObjects, u0.components, u0)
    baseKey = baseKey:getValue(wrapper .. "#skipWrapping", false)
    xmlFile.skipWrapping = baseKey
    baseKey = baseKey:getValue(wrapper .. "#forceWhileFolding", false)
    xmlFile.forceWhileFolding = baseKey
    if xmlFile.forceWhileFolding then
      u5.foldedBaleType = {isRoundBaleWrapper = u6, baleTypeIndex = self}
    end
    baseKey:loadWrapperStateCurveFromXML(xmlFile, u1, wrapper)
    table.insert(u4.allowedBaleTypes, xmlFile)
  end)
  self:loadWrapperAnimCurveFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName)
  self:loadWrapperAnimNodesFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName)
  self:loadWrapperWrapNodesFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName)
  self:loadWrapperStateCurveFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName)
  self:loadWrapperAnimationNodesFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName, wrapper.animTime)
  self:loadWrapperFoilAnimationFromXML(wrapper, xmlFile, baseKey .. "." .. wrapperName, true)
  wrapper.wrappingFoilAnimationDefault = wrapper.wrappingFoilAnimation
  if true then
  else
  end
  v10 = xmlFile:getValue(baseKey .. "#unloadBaleText", v9, self.customEnvironment)
  wrapper.unloadBaleText = v10
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, baseKey .. "#skipWrappingFillTypes", baseKey .. "#skipUnsupportedBales")
  v10 = v10:getValue(baseKey .. "#skipUnsupportedBales", false)
  wrapper.skipUnsupportedBales = v10
  if self.isClient then
    wrapper.samples = {}
    local v11 = v11:loadSamplesFromXML(self.xmlFile, baseKey .. ".sounds", "wrap", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    wrapper.samples.wrap = v11
    v11 = v11:loadSamplesFromXML(self.xmlFile, baseKey .. ".sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    wrapper.samples.start = v11
    v11 = v11:loadSamplesFromXML(self.xmlFile, baseKey .. ".sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    wrapper.samples.stop = v11
    v10 = xmlFile:getValue(baseKey .. ".sounds#wrappingEndTime", 1)
    wrapper.wrappingSoundEndTime = v10
  end
end
function BaleWrapper:loadWrapperAnimationsFromXML(target, xmlFile, baseKey, configKey, animationsKey, parentAnimations)
  target.animations = {}
  if parentAnimations ~= nil then
    setmetatable(target.animations, {__index = parentAnimations})
  end
  -- TODO: structure LOP_FORNPREP (pc 21, target 105)
  local v13 = xmlFile:hasProperty(configKey .. animationsKey .. "." .. BaleWrapper.ANIMATION_NAMES[1])
  if v13 then
  end
  local v14 = xmlFile:getValue(v11 .. "#animName")
  v14 = xmlFile:getValue(v11 .. "#animSpeed", 1)
  v14 = xmlFile:getValue(v11 .. "#reverseAfterMove", true)
  v14 = xmlFile:getValue(v11 .. "#resetOnStart", false)
  if v14 then
    self:playAnimation({animName = v14, animSpeed = v14, reverseAfterMove = v14}.animName, -1, 0.1, true)
    AnimatedVehicle.updateAnimationByName(self, {animName = v14, animSpeed = v14, reverseAfterMove = v14}.animName, 9999999, true)
  end
  if parentAnimations ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L104
  end
  target.animations[v10] = v13
  -- TODO: structure LOP_FORNLOOP (pc 104, target 22)
end
function BaleWrapper.loadWrapperAnimCurveFromXML(v0, savegame, v2, v3)
  local v4 = AnimCurve.new(linearInterpolatorN)
  savegame.animCurve = v4
  v2:iterate(v3 .. "wrapperAnimation.key", function(v0, savegame)
    local v2 = v2:getValue(savegame .. "#time")
    local v3, v4, v5 = v3:getValue(savegame .. "#baleRot")
    if v3 ~= nil and v4 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L22
    end
    return false
    local v6, v7, v8 = v6:getValue(savegame .. "#wrapperRot", "0 0 0")
    v9:addKeyframe({v3, v4, v5, v6, v7, v8, time = v2})
  end)
end
function BaleWrapper.loadWrapperAnimNodesFromXML(v0, savegame, v2, v3)
  savegame.wrapAnimNodes = {}
  v2:iterate(v3 .. ".wrapAnimNodes.wrapAnimNode", function(v0, savegame)
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, savegame .. "#index", savegame .. "#node")
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {nodeId = v3}.nodeId ~= nil then
      v3 = AnimCurve.new(linearInterpolatorN)
      v4:iterate(savegame .. ".key", function(v0, savegame)
        local v2 = v2:getValue(savegame .. "#wrapperRot")
        local v3 = v3:getValue(savegame .. "#wrapperTime")
        if v2 == nil and v3 == nil then
          return false
        end
        if v2 == nil then
        end
        v4.useWrapperRot = true
        local v4, v5, v6 = v4:getValue(savegame .. "#trans", "0 0 0")
        local v7, v8, v9 = v7:getValue(savegame .. "#rot", "0 0 0")
        local v10, v11, v12 = v10:getValue(savegame .. "#scale", "1 1 1")
        if v2 ~= nil then
          local v25 = math.rad(v2)
          v13:addKeyframe({v4, v5, v6, v7, v8, v9, v10, v11, v12, time = v25})
        else
          v13:addKeyframe({v4, v5, v6, v7, v8, v9, v10, v11, v12, time = v3})
        end
        u2 = u2 + 1
      end)
      if 0 < 0 then
        local v4 = v4:getValue(savegame .. "#repeatWrapperRot", false)
        v4 = v4:getValue(savegame .. "#normalizeRotationOnBaleDrop", 0)
        table.insert(u2.wrapAnimNodes, {nodeId = v3, useWrapperRot = false, animCurve = v3, repeatWrapperRot = v4, normalizeRotationOnBaleDrop = v4})
      end
    end
  end)
end
function BaleWrapper.loadWrapperWrapNodesFromXML(v0, savegame, v2, v3)
  savegame.wrapNodes = {}
  v2:iterate(v3 .. ".wrapNodes.wrapNode", function(v0, savegame)
    XMLUtil.checkDeprecatedXMLElements(u0.xmlFile, savegame .. "#index", savegame .. "#node")
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    v3 = v3:getValue(savegame .. "#wrapVisibility", false)
    v3 = v3:getValue(savegame .. "#emptyVisibility", false)
    if {nodeId = v3, wrapVisibility = v3, emptyVisibility = v3}.nodeId ~= nil then
      if not {nodeId = v3, wrapVisibility = v3, emptyVisibility = v3}.wrapVisibility then
        -- if not {nodeId = v3, wrapVisibility = v3, emptyVisibility = v3}.emptyVisibility then goto L80 end
      end
      v3 = v3:getValue(savegame .. "#maxWrapperRot", math.huge)
      v2.maxWrapperRot = v3
      table.insert(u2.wrapNodes, v2)
    end
  end)
end
function BaleWrapper.loadWrapperStateCurveFromXML(v0, savegame, v2, v3)
  local v4 = AnimCurve.new(linearInterpolator1)
  savegame.wrappingStateCurve = v4
  v2:iterate(v3 .. ".wrappingState.key", function(v0, savegame)
    local v2 = v2:getValue(savegame .. "#time")
    local v3 = v3:getValue(savegame .. "#wrappingState")
    v4:addKeyframe({v3, time = v2})
  end)
  if #savegame.wrappingStateCurve.keyframes == 0 then
    savegame.wrappingStateCurve = nil
  end
end
function BaleWrapper:loadWrapperAnimationNodesFromXML(target, xmlFile, baseKey, animTime)
  local v5 = xmlFile:getValue(baseKey .. ".wrappingAnimationNodes#maxTime", animTime / 1000)
  target.wrappingAnimationNodes = {nodes = {}, nodeToRootNode = {}}
  xmlFile:iterate(baseKey .. ".wrappingAnimationNodes.key", function(self, target)
    local xmlFile = xmlFile:getValue(target .. "#time")
    local baseKey = baseKey:getValue(target .. "#node", nil, u1.components, u1.i3dMappings)
    local animTime = animTime:getValue(target .. "#rootNode", nil, u1.components, u1.i3dMappings)
    local v5 = v5:getValue(target .. "#linkNode", nil, u1.components, u1.i3dMappings)
    if xmlFile ~= nil and baseKey ~= nil then
      local v7 = getParent(baseKey)
      v7 = v7:getValue(target .. "#translation", nil, true)
      if animTime ~= nil then
        u3.wrappingAnimationNodes.nodeToRootNode[baseKey] = animTime
      end
      table.insert(u3.wrappingAnimationNodes.nodes, v6)
    end
  end)
  -- TODO: structure LOP_FORNPREP (pc 41, target 93)
  if target.wrappingAnimationNodes.nodes[1].time == 0 then
    local v12 = unpack(target.wrappingAnimationNodes.nodes[1].translation)
    setTranslation(...)
    if target.wrappingAnimationNodes.nodes[1].linkNode ~= nil then
      v12 = unpack(target.wrappingAnimationNodes.nodes[1].translation)
      local v10, v11, v12 = localToWorld(...)
      link(target.wrappingAnimationNodes.nodes[1].linkNode, target.wrappingAnimationNodes.nodes[1].nodeId)
      setWorldTranslation(target.wrappingAnimationNodes.nodes[1].nodeId, v10, v11, v12)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 92, target 42)
  local v7 = xmlFile:getValue(baseKey .. ".wrappingAnimationNodes#referenceNode", nil, self.components, self.i3dMappings)
  target.wrappingAnimationNodes.referenceNode = v7
  v7 = xmlFile:getValue(baseKey .. ".wrappingAnimationNodes#referenceAxis", 2)
  target.wrappingAnimationNodes.referenceAxis = v7
  v7 = xmlFile:getValue(baseKey .. ".wrappingAnimationNodes#minRot", 0)
  target.wrappingAnimationNodes.referenceMinRot = v7
  v7 = xmlFile:getValue(baseKey .. ".wrappingAnimationNodes#maxRot", 0)
  target.wrappingAnimationNodes.referenceMaxRot = v7
  if target.wrappingAnimationNodes.referenceNode ~= nil then
    local v8 = getRotation(target.wrappingAnimationNodes.referenceNode)
    target.wrappingAnimationNodes.referenceNodeRotation = {}
  end
  target.wrappingAnimationNodes.lastTime = -1
  target.wrappingAnimationNodes.currentIndex = 0
end
function BaleWrapper:loadWrapperFoilAnimationFromXML(target, xmlFile, baseKey, isDefault)
  local v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#referenceNode", nil, self.components, self.i3dMappings)
  if {referenceNode = v6}.referenceNode ~= nil then
    v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#referenceAxis", 2)
    v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#minRot", 0)
    v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#maxRot", 0)
    v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#clipNode", nil, self.components, self.i3dMappings)
    if {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6}.clipNode ~= nil then
      v6 = xmlFile:getValue(baseKey .. ".wrappingFoilAnimation#clipName")
      if {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6}.animationClip ~= nil then
        v6 = getAnimCharacterSet({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6}.clipNode)
        v6 = getAnimClipIndex({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6}.animationCharSet, {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6}.animationClip)
        if 0 <= {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6}.animationClipIndex then
          v6 = getAnimClipDuration({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6}.animationCharSet, {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6}.animationClipIndex)
          if isDefault then
            clearAnimTrackClip({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationCharSet, 0)
            assignAnimTrackClip({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationCharSet, 0, {referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationClipIndex)
            enableAnimTrack({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationCharSet, 0)
            setAnimTrackTime({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationCharSet, 0, 0, true)
            disableAnimTrack({referenceNode = v6, referenceAxis = v6, referenceMinRot = v6, referenceMaxRot = v6, referenceNodeRotation = {0, 0, 0}, clipNode = v6, animationClip = v6, animationCharSet = v6, animationClipIndex = v6, animationClipDuration = v6}.animationCharSet, 0)
          end
          v5.lastTime = 0
          target.wrappingFoilAnimation = v5
          return
        end
        local v10 = getName(v5.clipNode)
        Logging.xmlWarning(self.xmlFile, "Unable to find animation clip '%s' on node '%s' in '%s'", v5.animationClip, v10, baseKey .. ".wrappingFoilAnimation")
        return
      end
      Logging.xmlWarning(self.xmlFile, "Missing clipName for foil animation '%s'", baseKey .. ".wrappingFoilAnimation")
      return
    end
    Logging.xmlWarning(self.xmlFile, "Missing clipNode for foil animation '%s'", baseKey .. ".wrappingFoilAnimation")
  end
end
function BaleWrapper:onLoadFinished(savegame)
  if self.spec_baleWrapper.baleToLoad ~= nil then
    self.spec_baleWrapper.baleToLoad = nil
    local baleObject = Bale.new(self.isServer, self.isClient)
    local v5, v6, v7 = unpack(self.spec_baleWrapper.baleToLoad.translation)
    local v8, v9, v10 = unpack(self.spec_baleWrapper.baleToLoad.rotation)
    local v11 = baleObject:loadFromConfigXML(self.spec_baleWrapper.baleToLoad.filename, v5, v6, v7, v8, v9, v10)
    if v11 then
      baleObject:applyBaleAttributes(self.spec_baleWrapper.baleToLoad.attributes)
      baleObject:register()
      if baleObject.nodeId ~= nil and baleObject.nodeId ~= 0 then
        local v14 = NetworkUtil.getObjectId(baleObject)
        self:doStateChange(...)
        self:doStateChange(BaleWrapper.CHANGE_DROP_BALE_AT_GRABBER)
        self:doStateChange(BaleWrapper.CHANGE_WRAPPING_START)
        self.spec_baleWrapper.currentWrapper.currentTime = self.spec_baleWrapper.baleToLoad.wrapperTime
        v11 = math.min(self.spec_baleWrapper.baleToLoad.wrapperTime / self.spec_baleWrapper.currentWrapper.animTime, 1)
        baleObject:setWrappingState(v11)
        self:updateWrappingState(self.spec_baleWrapper.currentWrapper.currentTime / self.spec_baleWrapper.currentWrapper.animTime)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        if self.spec_baleWrapper.currentWrapper.currentTime / self.spec_baleWrapper.currentWrapper.animTime < 1 then
          self:setAnimationTime(self.spec_baleWrapper.currentWrapper.animations.wrapBale.animName, self.spec_baleWrapper.currentWrapper.currentTime / self.spec_baleWrapper.currentWrapper.animTime, true)
          self:playAnimation(self.spec_baleWrapper.currentWrapper.animations.wrapBale.animName, self.spec_baleWrapper.currentWrapper.animations.wrapBale.animSpeed, self.spec_baleWrapper.currentWrapper.currentTime / self.spec_baleWrapper.currentWrapper.animTime, true)
          return
        end
        self:doStateChange(BaleWrapper.CHANGE_WRAPPING_BALE_FINSIHED)
        self:setAnimationTime(v12.animName, v13, true)
        v2.setWrappingStateFinished = false
      end
    end
  end
end
function BaleWrapper:onDelete()
  if self.spec_baleWrapper.currentWrapper ~= nil and self.spec_baleWrapper.currentWrapper.currentBale ~= nil then
  end
  if savegame.baleGrabber ~= nil and savegame.baleGrabber.currentBale ~= nil then
  end
  if v2 ~= nil then
    local v3 = NetworkUtil.getObject(v2)
    if v3 ~= nil then
      if self.isServer then
        if self.isReconfigurating ~= nil then
          -- if v0.isReconfigurating then goto L57 end
        end
        v3:unmountKinematic()
        v3:setCanBeSold(true)
        -- goto L68  (LOP_JUMP +11)
        v3:delete()
      else
        v3:unmountKinematic()
        v3:setCanBeSold(true)
      end
    end
  end
  if savegame.baleGrabber ~= nil and savegame.baleGrabber.triggerNode ~= nil then
    removeTrigger(savegame.baleGrabber.triggerNode)
  end
  if savegame.roundBaleWrapper ~= nil then
    v3:deleteSamples(savegame.roundBaleWrapper.samples.wrap)
    v3:deleteSamples(savegame.roundBaleWrapper.samples.start)
    v3:deleteSamples(savegame.roundBaleWrapper.samples.stop)
  end
  if savegame.squareBaleWrapper ~= nil then
    v3:deleteSamples(savegame.squareBaleWrapper.samples.wrap)
    v3:deleteSamples(savegame.squareBaleWrapper.samples.start)
    v3:deleteSamples(savegame.squareBaleWrapper.samples.stop)
  end
end
function BaleWrapper:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_baleWrapper.baleGrabber.currentBale == nil then
  end
  xmlFile:setValue(key .. "#wrapperTime", v4.currentWrapper.currentTime)
  if v5 ~= nil then
    local v6 = NetworkUtil.getObject(v5)
    if v6 ~= nil then
      v6:saveToXMLFile(xmlFile, key .. ".bale")
    end
  end
end
function BaleWrapper:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local isRoundBaleWrapper = streamReadBool(streamId)
    local baleTypeIndex = streamReadUIntN(streamId, 8)
    self:setBaleWrapperType(isRoundBaleWrapper, baleTypeIndex)
    local wrapperState = streamReadUIntN(streamId, BaleWrapper.STATE_NUM_BITS)
    if BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER <= wrapperState then
      if wrapperState ~= BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM then
        local v8 = NetworkUtil.readNodeObjectId(streamId)
      end
      if wrapperState == BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER then
        self:doStateChange(BaleWrapper.CHANGE_GRAB_BALE, v7)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        return
      end
      if wrapperState == BaleWrapper.STATE_MOVING_GRABBER_TO_WORK then
        self.baleGrabber.currentBale = v7
        self:doStateChange(BaleWrapper.CHANGE_DROP_BALE_AT_GRABBER)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        return
      end
      if wrapperState ~= BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM then
        self:doStateChange(BaleWrapper.CHANGE_GRAB_BALE, v7)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        v3.currentWrapper.currentBale = v7
        self:doStateChange(BaleWrapper.CHANGE_DROP_BALE_AT_GRABBER)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        self:updateWrapNodes(true, false, 0)
        if wrapperState == BaleWrapper.STATE_WRAPPER_WRAPPING_BALE then
          self:doStateChange(BaleWrapper.CHANGE_WRAPPING_START)
          v8 = streamReadFloat32(streamId)
          v3.currentWrapper.currentTime = v8
          self:setAnimationStopTime(v3.currentWrapper.animations.wrapBale.animName, v3.currentWrapper.currentTime / v3.currentWrapper.animTime)
          AnimatedVehicle.updateAnimationByName(self, v3.currentWrapper.animations.wrapBale.animName, 9999999, true)
          self:updateWrappingState(v3.currentWrapper.currentTime / v3.currentWrapper.animTime, true)
          -- if v3.currentWrapper.currentTime / v3.currentWrapper.animTime >= 1 then goto L286 end
          local v15 = self:getAnimationTime(v3.currentWrapper.animations.wrapBale.animName)
          self:playAnimation(v3.currentWrapper.animations.wrapBale.animName, v3.currentWrapper.animations.wrapBale.animSpeed, v15, true, false)
          return
        end
        if v3.currentWrapper.animations.wrapBale.animName ~= nil then
          self:playAnimation(v3.currentWrapper.animations.wrapBale.animName, v3.currentWrapper.animations.wrapBale.animSpeed, nil, true)
          AnimatedVehicle.updateAnimationByName(self, v3.currentWrapper.animations.wrapBale.animName, 9999999, true)
        end
        v3.currentWrapper.currentTime = v3.currentWrapper.animTime
        self:updateWrappingState(1, true)
        self:doStateChange(BaleWrapper.CHANGE_WRAPPING_BALE_FINSIHED)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        -- if BaleWrapper.STATE_WRAPPER_DROPPING_BALE > v6 then goto L286 end
        self:doStateChange(BaleWrapper.CHANGE_WRAPPER_START_DROP_BALE)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        return
      end
      v3.baleWrapperState = BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM
    end
  end
end
function BaleWrapper:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    if self.spec_baleWrapper.currentWrapper ~= self.spec_baleWrapper.roundBaleWrapper then
    end
    v4(v5, true)
    streamWriteUIntN(streamId, v3.currentBaleTypeIndex, 8)
    streamWriteUIntN(streamId, v3.baleWrapperState, BaleWrapper.STATE_NUM_BITS)
    if BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER <= v3.baleWrapperState and v3.baleWrapperState ~= BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM then
      if v3.baleWrapperState == BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER then
        NetworkUtil.writeNodeObjectId(streamId, v3.baleGrabber.currentBale)
      else
        NetworkUtil.writeNodeObjectId(streamId, v3.currentWrapper.currentBale)
      end
    end
    if v4 == BaleWrapper.STATE_WRAPPER_WRAPPING_BALE then
      streamWriteFloat32(streamId, v3.currentWrapper.currentTime)
    end
  end
end
function BaleWrapper:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_baleWrapper.baleToMount ~= nil then
    local v6 = NetworkUtil.getObject(self.spec_baleWrapper.baleToMount.serverId)
    if v6 ~= nil then
      local v7, v8, v9 = unpack(self.spec_baleWrapper.baleToMount.trans)
      local v10, v11, v12 = unpack(self.spec_baleWrapper.baleToMount.rot)
      v6:mountKinematic(self, self.spec_baleWrapper.baleToMount.linkNode, v7, v8, v9, v10, v11, v12)
      v6:setCanBeSold(false)
      self.spec_baleWrapper.baleToMount = nil
      if self.spec_baleWrapper.baleWrapperState == BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER then
        self:playMoveToWrapper(v6)
      end
    end
  end
  if v5.baleWrapperState == BaleWrapper.STATE_WRAPPER_WRAPPING_BALE then
    v7 = math.min(v5.currentWrapper.currentTime + dt, v5.currentWrapper.animTime)
    v5.currentWrapper.currentTime = v7
    self:updateWrappingState(v5.currentWrapper.currentTime / v5.currentWrapper.animTime)
    self:raiseActive()
    if self.isClient then
      if v5.currentWrapper.wrappingSoundEndTime <= v5.currentWrapper.currentTime / v5.currentWrapper.animTime then
        v8 = v8:getIsSamplePlaying(v5.currentWrapper.samples.wrap[1])
        -- if not v8 then goto L157 end
        v8:stopSamples(v5.currentWrapper.samples.wrap)
        v8:playSamples(v5.currentWrapper.samples.stop)
        return
      end
      v8 = v8:getIsSamplePlaying(v6.samples.wrap[1])
      if not v8 then
        v8:playSamples(v6.samples.wrap)
      end
    end
  end
end
function BaleWrapper:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self.spec_baleWrapper.showInvalidBaleWarning = false
  self.spec_baleWrapper.baleDropBlockedWarning = nil
  local v6 = self:allowsGrabbingBale()
  if v6 and self.spec_baleWrapper.baleGrabber.grabNode ~= nil and self.spec_baleWrapper.baleGrabber.currentBale == nil then
    local v6, v7, v8 = BaleWrapper.getBaleInRange(self, self.spec_baleWrapper.baleGrabber.grabNode, self.spec_baleWrapper.baleGrabber.nearestDistance)
    if v7 then
      if v6 == nil then
        if v7.isRoundbale then
          -- if v0.spec_baleWrapper.roundBaleWrapper.skipUnsupportedBales then goto L54 end
        end
        -- if not v5.squareBaleWrapper.skipUnsupportedBales then goto L63 end
      end
      if self.isServer then
        self:pickupWrapperBale(v6 or v7, v8)
        -- goto L74  (LOP_JUMP +11)
        if self.isClient and v7 and v5.lastDroppedBale ~= v7 then
          v5.showInvalidBaleWarning = true
        end
      end
    end
  end
  if self.isServer and v5.baleWrapperState ~= BaleWrapper.STATE_NONE then
    if v5.baleWrapperState == BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER then
      v6 = self:getIsAnimationPlaying(v5.currentWrapper.animations.moveToWrapper.animName)
      -- if v6 then goto L265 end
      v8 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_DROP_BALE_AT_GRABBER)
      v6:broadcastEvent(v8, true, nil, self)
    elseif v5.baleWrapperState == BaleWrapper.STATE_MOVING_GRABBER_TO_WORK then
      v6 = self:getIsAnimationPlaying(v5.currentWrapper.animations.moveToWrapper.animName)
      -- if v6 then goto L265 end
      v6 = NetworkUtil.getObject(v5.currentWrapper.currentBale)
      if v6 ~= nil and not v6.supportsWrapping then
        local v9 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPER_START_DROP_BALE)
        v7:broadcastEvent(v9, true, nil, self)
        -- goto L265  (LOP_JUMP +94)
      end
      v7 = self:getIsBaleWrappingAllowed()
      -- if not v7 then goto L265 end
      v9 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPING_START)
      v7:broadcastEvent(v9, true, nil, self)
    else
      if v5.baleWrapperState == BaleWrapper.STATE_WRAPPER_DROPPING_BALE then
        v6 = self:getIsAnimationPlaying(v5.currentWrapper.animations.dropFromWrapper.animName)
        -- if v6 then goto L265 end
        v8 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPER_BALE_DROPPED)
        v6:broadcastEvent(v8, true, nil, self)
      elseif v5.baleWrapperState == BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM then
        v6 = self:getIsAnimationPlaying(v5.currentWrapper.animations.resetAfterDrop.animName)
        if not v6 then
          v8 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPER_PLATFORM_RESET)
          v6:broadcastEvent(v8, true, nil, self)
        end
      end
    end
  end
  if not v5.automaticDrop then
    v6 = self:getIsAIActive()
    -- if not v6 then goto L303 end
  end
  v6, v7 = self:getIsPowered()
  if v6 and v5.baleWrapperState == BaleWrapper.STATE_WRAPPER_FINSIHED then
    v8, v9 = self:getIsBaleDropAllowed()
    if v8 then
      -- if not v0.isServer then goto L303 end
      self:doStateChange(BaleWrapper.CHANGE_BUTTON_EMPTY)
    elseif v9 ~= nil then
      v5.baleDropBlockedWarning = v9
    end
  end
  BaleWrapper.updateActionEvents(self)
  if v5.setWrappingStateFinished then
    v8 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPING_BALE_FINSIHED)
    v6:broadcastEvent(v8, true, nil, self)
    v5.setWrappingStateFinished = false
  end
end
function BaleWrapper:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_baleWrapper.showInvalidBaleWarning then
      v5:showBlinkingWarning(self.spec_baleWrapper.texts.warningBaleNotSupported, 500)
      return
    end
    if isSelected.baleDropBlockedWarning ~= nil then
      v5:showBlinkingWarning(isSelected.baleDropBlockedWarning, 500)
    end
  end
end
function BaleWrapper:baleGrabberTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local v7 = getRigidBodyType(otherId)
    if v7 == RigidBodyType.DYNAMIC then
      v7 = v7:getNodeObject(otherId)
      if v7 ~= nil then
        local v8 = v7:isa(Bale)
        if v8 then
          if onEnter then
            local v11 = Utils.getNoNil(self.spec_baleWrapper.baleGrabber.balesInTrigger[v7], 0)
            self.spec_baleWrapper.baleGrabber.balesInTrigger[v7] = v11 + 1
            return
          end
          if onLeave and v8.baleGrabber.balesInTrigger[v7] ~= nil then
            local v10 = math.max(0, v8.baleGrabber.balesInTrigger[v7] - 1)
            v8.baleGrabber.balesInTrigger[v7] = v10
            if v8.baleGrabber.balesInTrigger[v7] == 0 then
              v8.baleGrabber.balesInTrigger[v7] = nil
            end
          end
        end
      end
    end
  end
end
function BaleWrapper:allowsGrabbingBale()
  if self.spec_foldable ~= nil and self.spec_foldable.foldAnimTime ~= nil then
    if self.spec_baleWrapper.currentWrapperFoldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v0.spec_baleWrapper.currentWrapperFoldMinLimit then goto L24 end
    end
    return false
  end
  if dt.baleToLoad ~= nil then
    return false
  end
  if dt.baleWrapperState ~= BaleWrapper.STATE_NONE then
  end
  return true
end
function BaleWrapper:updateWrapNodes(isWrapping, isEmpty, t, wrapperRot)
  if wrapperRot == nil then
  end
  for v9, v10 in pairs(v5.currentWrapper.wrapNodes) do
    if v10.maxWrapperRot ~= nil and wrapperRot >= v10.maxWrapperRot then
    end
    if v11 then
      if isWrapping then
        -- if v10.wrapVisibility then goto L38 end
      end
      if isEmpty then
      end
    end
    v12(v13, v14)
  end
  if isWrapping then
    v7 = MathUtil.sign(wrapperRot)
    if v7 * wrapperRot % math.pi < 0 then
    end
    for v10, v11 in pairs(v5.currentWrapper.wrapAnimNodes) do
      if v11.useWrapperRot then
        if v11.repeatWrapperRot then
        end
        local v14 = v14:get(v13)
      else
        local v13 = v13:get(t)
      end
      if not (v12 ~= nil) then
        continue
      end
      setTranslation(v11.nodeId, v12[1], v12[2], v12[3])
      setRotation(v11.nodeId, v12[4], v12[5], v12[6])
      setScale(v11.nodeId, v12[7], v12[8], v12[9])
    end
    return
  end
  if not isEmpty then
    for v9, v10 in pairs(v5.currentWrapper.wrapAnimNodes) do
      if not (v10.normalizeRotationOnBaleDrop ~= 0) then
        continue
      end
      local v12 = getRotation(v10.nodeId)
      -- TODO: structure LOP_FORNPREP (pc 142, target 159)
      local v18 = MathUtil.sign({}[1])
      {}[1] = v10.normalizeRotationOnBaleDrop * v18 * {}[1] % 2 * math.pi
      -- TODO: structure LOP_FORNLOOP (pc 158, target 143)
      setRotation(v10.nodeId, {}[1], {}[2], {}[3])
    end
  end
end
function BaleWrapper:updateWrappingState(wrappingTime, noEventSend)
  if self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation ~= nil then
    local v10, v11, v12 = getRotation(self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNode)
    self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[1] = v10
    self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[2] = v11
    self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[3] = v12
    if 0 < (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceAxis] - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) / (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMaxRot - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) and (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceAxis] - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) / (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMaxRot - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) < 1 and (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceNodeRotation[self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceAxis] - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) / (self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMaxRot - self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.referenceMinRot) ~= self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.lastTime then
      local v8 = getAnimTrackAssignedClip(self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.animationCharSet, 0)
      if v8 ~= self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.animationClipIndex then
        clearAnimTrackClip(self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.animationCharSet, 0)
        assignAnimTrackClip(self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.animationCharSet, 0, self.spec_baleWrapper.currentWrapper.wrappingFoilAnimation.animationClipIndex)
      end
      enableAnimTrack(v6.animationCharSet, 0)
      setAnimTrackTime(v6.animationCharSet, 0, v5 * v6.animationClipDuration, true)
      disableAnimTrack(v6.animationCharSet, 0)
      v6.lastTime = v5
    end
  end
  if isSelected.wrappingAnimationNodes.referenceNode ~= nil then
    v10, v11, v12 = getRotation(isSelected.wrappingAnimationNodes.referenceNode)
    isSelected.wrappingAnimationNodes.referenceNodeRotation[1] = v10
    isSelected.wrappingAnimationNodes.referenceNodeRotation[2] = v11
    isSelected.wrappingAnimationNodes.referenceNodeRotation[3] = v12
    v8 = MathUtil.clamp((isSelected.wrappingAnimationNodes.referenceNodeRotation[isSelected.wrappingAnimationNodes.referenceAxis] - isSelected.wrappingAnimationNodes.referenceMinRot) / (isSelected.wrappingAnimationNodes.referenceMaxRot - isSelected.wrappingAnimationNodes.referenceMinRot), 0, 1)
    v8 = MathUtil.round(v8, 5)
  end
  if isSelected.wrappingAnimationNodes.lastTime < v6 then
    -- TODO: structure LOP_FORNPREP (pc 179, target 271)
    -- if v4.wrappingAnimationNodes.nodes[v4.wrappingAnimationNodes.currentIndex + 1].time > v6 then goto L271 end
    if isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].linkNode ~= nil then
      local v14 = unpack(isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].translation)
      local v12, v13, v14 = localToWorld(...)
      local v15 = getParent(isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].nodeId)
      if v15 ~= isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].linkNode then
        link(isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].linkNode, isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].nodeId)
      end
      setWorldTranslation(v11.nodeId, v12, v13, v14)
    else
      v12 = getParent(isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].nodeId)
      if v12 ~= isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].parent then
        link(isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].parent, isSelected.wrappingAnimationNodes.nodes[isSelected.wrappingAnimationNodes.currentIndex + 1].nodeId)
      end
      v14 = unpack(v11.translation)
      setTranslation(...)
    end
    isSelected.wrappingAnimationNodes.currentIndex = v10
    -- goto L258  (LOP_JUMP +1)
    -- goto L271  (LOP_JUMP +13)
    -- TODO: structure LOP_FORNLOOP (pc 258, target 180)
  elseif v6 < isSelected.wrappingAnimationNodes.lastTime then
    isSelected.wrappingAnimationNodes.currentIndex = 0
  end
  isSelected.wrappingAnimationNodes.lastTime = v6
  for v10, v11 in pairs(isSelected.wrappingAnimationNodes.nodeToRootNode) do
    v14 = getParent(v10)
    v12, v13, v14 = localRotationToLocal(v11, v14, 0, 0, 0)
    setRotation(v10, v12, v13, v14)
  end
  v7 = math.min(wrappingTime, 1)
  if isSelected.animCurve ~= nil then
    v9 = v9:get(wrappingTime)
    if v9 ~= nil then
      setRotation(isSelected.baleNode, v9[1] % math.pi * 2, v9[2] % math.pi * 2, v9[3] % math.pi * 2)
      setRotation(isSelected.wrapperNode, v9[4] % math.pi * 2, v9[5] % math.pi * 2, v9[6] % math.pi * 2)
    elseif isSelected.animations.wrapBale.animName ~= nil then
      v10 = self:getAnimationTime(isSelected.animations.wrapBale.animName)
    end
    if isSelected.wrappingAnimationNodes.referenceNode ~= nil then
    end
    if isSelected.wrappingFoilAnimation ~= nil then
    end
    if isSelected.currentBale ~= nil then
      v10 = NetworkUtil.getObject(isSelected.currentBale)
      if v10 ~= nil then
        v12 = v10:getSupportsWrapping()
        if v12 and not isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[isActiveForInputIgnoreSelection.currentBaleTypeIndex].skipWrapping and v10.wrappingState < 1 then
          if not isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[isActiveForInputIgnoreSelection.currentBaleTypeIndex].wrappingStateCurve then
          end
          if v12 ~= nil then
            v13 = v12:get(v7)
          end
          v10:setWrappingState(v7, true)
          if v10.setColor ~= nil then
            v13 = ConfigurationUtil.getColorByConfigId(self, "wrappingColor", self.configurations.wrappingColor)
            if v13 ~= nil then
              local v14, v15, v16, v17 = unpack(v13)
              v10:setColor(v14, v15, v16, v17)
            end
          end
        end
      end
    end
  end
  if 0 >= wrappingTime then
  end
  self:updateWrapNodes(true, false, wrappingTime, v8)
  if 0.99999 < wrappingTime and self.isServer and isActiveForInputIgnoreSelection.baleWrapperState == BaleWrapper.STATE_WRAPPER_WRAPPING_BALE and not noEventSend then
    v11 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPING_BALE_FINSIHED)
    v9:broadcastEvent(v11, true, nil, self)
  end
end
function BaleWrapper:playMoveToWrapper(bale)
  if bale.isRoundbale then
    -- if v0.spec_baleWrapper.roundBaleWrapper.allowedBaleTypes then goto L14 end
  end
  local isActiveForInputIgnoreSelection = self:getMatchingBaleTypeIndex(noEventSend.squareBaleWrapper.allowedBaleTypes, bale)
  self:setBaleWrapperType(bale.isRoundbale, isActiveForInputIgnoreSelection)
  if noEventSend.currentWrapper.animations.moveToWrapper.animName ~= nil then
    self:playAnimation(noEventSend.currentWrapper.animations.moveToWrapper.animName, noEventSend.currentWrapper.animations.moveToWrapper.animSpeed, nil, true)
  end
end
function BaleWrapper:setBaleWrapperType(isRoundBaleWrapper, baleTypeIndex)
  if isRoundBaleWrapper then
    -- if v0.spec_baleWrapper.roundBaleWrapper then goto L8 end
  end
  isActiveForInputIgnoreSelection.currentWrapper = isActiveForInputIgnoreSelection.squareBaleWrapper
  isActiveForInputIgnoreSelection.currentBaleTypeIndex = baleTypeIndex
  if isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[baleTypeIndex] ~= nil then
    isActiveForInputIgnoreSelection.currentWrapper.animations = isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[baleTypeIndex].animations
    if not isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[baleTypeIndex].wrappingFoilAnimation then
    end
    v5.wrappingFoilAnimation = v6
    ObjectChangeUtil.setObjectChanges(isSelected.changeObjects, true, self, self.setMovingToolDirty)
    if isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation ~= nil then
      clearAnimTrackClip(isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationCharSet, 0)
      assignAnimTrackClip(isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationCharSet, 0, isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationClipIndex)
      enableAnimTrack(isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationCharSet, 0)
      setAnimTrackTime(isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationCharSet, 0, 0, true)
      disableAnimTrack(isActiveForInputIgnoreSelection.currentWrapper.wrappingFoilAnimation.animationCharSet, 0)
    end
  end
end
function BaleWrapper.getMatchingBaleTypeIndex(v0, wrappingTime, noEventSend)
  for v6, v7 in ipairs(wrappingTime) do
    local v8 = noEventSend:getBaleMatchesSize(v7.diameter, v7.width, v7.height, v7.length)
    if not v8 then
      continue
    end
    return v6
  end
  return 1
end
function BaleWrapper:doStateChange(id, nearestBaleServerId)
  if id ~= BaleWrapper.CHANGE_WRAPPING_START then
    -- if v0.spec_baleWrapper.baleWrapperState == BaleWrapper.STATE_WRAPPER_FINSIHED then goto L54 end
    -- if v1 ~= BaleWrapper.CHANGE_WRAPPER_START_DROP_BALE then goto L54 end
  end
  local isSelected = NetworkUtil.getObject(isActiveForInputIgnoreSelection.currentWrapper.currentBale)
  local v6 = isSelected:getSupportsWrapping()
  if v6 and not isActiveForInputIgnoreSelection.currentWrapper.allowedBaleTypes[isActiveForInputIgnoreSelection.currentBaleTypeIndex].skipWrapping then
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000010 -> L54
  end
  if self.isServer then
    isActiveForInputIgnoreSelection.setWrappingStateFinished = true
  end
  return
  if id == BaleWrapper.CHANGE_GRAB_BALE then
    isSelected = NetworkUtil.getObject(nearestBaleServerId)
    isActiveForInputIgnoreSelection.baleGrabber.currentBale = nearestBaleServerId
    if isSelected ~= nil then
      local v7 = getParent(isActiveForInputIgnoreSelection.baleGrabber.grabNode)
      local v5, v6, v7 = localToLocal(isSelected.nodeId, v7, 0, 0, 0)
      setTranslation(isActiveForInputIgnoreSelection.baleGrabber.grabNode, v5, v6, v7)
      isSelected:mountKinematic(self, isActiveForInputIgnoreSelection.baleGrabber.grabNode, 0, 0, 0, 0, 0, 0)
      isSelected:setCanBeSold(false)
      isActiveForInputIgnoreSelection.baleToMount = nil
      self:playMoveToWrapper(isSelected)
    else
      isActiveForInputIgnoreSelection.baleToMount = {serverId = nearestBaleServerId, linkNode = isActiveForInputIgnoreSelection.baleGrabber.grabNode, trans = {0, 0, 0}, rot = {0, 0, 0}}
    end
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_MOVING_BALE_TO_WRAPPER
    return
  end
  if id == BaleWrapper.CHANGE_DROP_BALE_AT_GRABBER then
    v5 = NetworkUtil.getObject(isActiveForInputIgnoreSelection.baleGrabber.currentBale)
    if v5 ~= nil then
      v5:mountKinematic(self, isActiveForInputIgnoreSelection.currentWrapper.baleNode, 0, 0, 0, 0, 0, 0)
      v5:setCanBeSold(false)
      isActiveForInputIgnoreSelection.baleToMount = nil
    else
      isActiveForInputIgnoreSelection.baleToMount = {serverId = isActiveForInputIgnoreSelection.baleGrabber.currentBale, linkNode = isActiveForInputIgnoreSelection.currentWrapper.baleNode, trans = {0, 0, 0}, rot = {0, 0, 0}}
    end
    self:updateWrapNodes(true, false, 0)
    isActiveForInputIgnoreSelection.currentWrapper.currentBale = isActiveForInputIgnoreSelection.baleGrabber.currentBale
    isActiveForInputIgnoreSelection.baleGrabber.currentBale = nil
    if isActiveForInputIgnoreSelection.currentWrapper.animations.moveToWrapper.animName ~= nil and isActiveForInputIgnoreSelection.currentWrapper.animations.moveToWrapper.reverseAfterMove then
      self:playAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.moveToWrapper.animName, -isActiveForInputIgnoreSelection.currentWrapper.animations.moveToWrapper.animSpeed, nil, true)
    end
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_MOVING_GRABBER_TO_WORK
    return
  end
  if id == BaleWrapper.CHANGE_WRAPPING_START then
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_WRAPPER_WRAPPING_BALE
    if self.isClient then
      isSelected:playSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.start)
      isSelected:playSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.wrap, 0, isActiveForInputIgnoreSelection.currentWrapper.samples.start[1])
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L756
    self:playAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.wrapBale.animName, isActiveForInputIgnoreSelection.currentWrapper.animations.wrapBale.animSpeed, nil, true)
    return
  end
  if id == BaleWrapper.CHANGE_WRAPPING_BALE_FINSIHED then
    if self.isClient then
      isSelected:stopSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.wrap)
      isSelected:stopSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.stop)
      if isActiveForInputIgnoreSelection.currentWrapper.wrappingSoundEndTime == 1 then
        isSelected:playSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.stop)
      end
      isSelected:stopSamples(isActiveForInputIgnoreSelection.currentWrapper.samples.start)
    end
    self:updateWrappingState(1, true)
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_WRAPPER_FINSIHED
    isSelected = NetworkUtil.getObject(isActiveForInputIgnoreSelection.currentWrapper.currentBale)
    v7 = isSelected:getSupportsWrapping()
    if not not v7 then
    end
    if not v6 then
      -- cmp-jump LOP_JUMPXEQKN R7 aux=0x80000010 -> L469
    end
    self:updateWrappingState(0, true)
    -- if v6 then goto L756 end
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L756
    self:playAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.resetWrapping.animName, isActiveForInputIgnoreSelection.currentWrapper.animations.resetWrapping.animSpeed, nil, true)
    return
  end
  if id == BaleWrapper.CHANGE_WRAPPER_START_DROP_BALE then
    self:updateWrapNodes(false, false, 0)
    if isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animName ~= nil then
      self:playAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animName, isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animSpeed, nil, true)
    end
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_WRAPPER_DROPPING_BALE
    return
  end
  if id == BaleWrapper.CHANGE_WRAPPER_BALE_DROPPED then
    isSelected = NetworkUtil.getObject(isActiveForInputIgnoreSelection.currentWrapper.currentBale)
    if isSelected ~= nil then
      isSelected:unmountKinematic()
      isSelected:setCanBeSold(true)
      if 1 > isSelected.wrappingState then
        v6 = isSelected:getSupportsWrapping()
        -- if not v6 then goto L609 end
      end
      if not v5.skipWrapping then
        local v8 = self:getOwnerFarmId()
        v6, v7 = v6:updateFarmStats(v8, "wrappedBales", 1)
        if v6 ~= nil then
          v8:tryUnlock("WrappedBales", v6)
        end
        if isSelected.wrappingState < 1 then
          isSelected:setWrappingState(1)
        end
      end
    end
    isActiveForInputIgnoreSelection.lastDroppedBale = isSelected
    isActiveForInputIgnoreSelection.currentWrapper.currentBale = nil
    isActiveForInputIgnoreSelection.currentWrapper.currentTime = 0
    if isActiveForInputIgnoreSelection.currentWrapper.animations.resetAfterDrop.animName ~= nil then
      v6 = self:getIsAnimationPlaying(isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animName)
      if v6 then
        self:stopAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animName, true)
        self:setAnimationTime(isActiveForInputIgnoreSelection.currentWrapper.animations.dropFromWrapper.animName, 1, true, false)
      end
      self:playAnimation(isActiveForInputIgnoreSelection.currentWrapper.animations.resetAfterDrop.animName, isActiveForInputIgnoreSelection.currentWrapper.animations.resetAfterDrop.animSpeed, nil, true)
    end
    if isActiveForInputIgnoreSelection.currentWrapper ~= isActiveForInputIgnoreSelection.roundBaleWrapper then
    end
    self:setBaleWrapperType(true, isActiveForInputIgnoreSelection.currentBaleTypeIndex)
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_WRAPPER_RESETTING_PLATFORM
    return
  end
  if id == BaleWrapper.CHANGE_WRAPPER_PLATFORM_RESET then
    self:updateWrappingState(0)
    self:updateWrapNodes(false, true, 0)
    isActiveForInputIgnoreSelection.baleWrapperState = BaleWrapper.STATE_NONE
    return
  end
  if id == BaleWrapper.CHANGE_BUTTON_EMPTY then
    assert(self.isServer)
    if isActiveForInputIgnoreSelection.baleWrapperState == BaleWrapper.STATE_WRAPPER_FINSIHED then
      v6 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_WRAPPER_START_DROP_BALE)
      isSelected:broadcastEvent(v6, true, nil, self)
    end
  end
end
function BaleWrapper:getIsBaleWrappable(bale)
  if bale.isRoundbale then
    -- if v0.spec_baleWrapper.roundBaleWrapper.allowedBaleTypes then goto L15 end
  end
  if noEventSend.squareBaleWrapper.allowedBaleTypes ~= nil then
    for v8, v9 in ipairs(noEventSend.squareBaleWrapper.allowedBaleTypes) do
      local v10 = bale:getBaleMatchesSize(v9.diameter, v9.width, v9.height, v9.length)
      if not v10 then
        continue
      end
      if not not v9.skipWrapping then
        continue
      end
      v10 = bale:getSupportsWrapping()
      if not v10 then
        continue
      end
      if not (bale.wrappingState < 1) then
        continue
      end
      return true, true, v8
    end
  end
  return false, isActiveForInputIgnoreSelection
end
function BaleWrapper.getIsBaleDropAllowed(v0)
  return true, nil
end
function BaleWrapper.getIsBaleWrappingAllowed(v0)
  return true
end
function BaleWrapper:pickupWrapperBale(bale, baleTypeIndex)
  local isSelected = bale:getSupportsWrapping()
  if isSelected then
    if bale.isRoundbale then
      -- if v0.spec_baleWrapper.roundBaleWrapper.allowedBaleTypes then goto L18 end
    end
    if isActiveForInputIgnoreSelection.squareBaleWrapper.allowedBaleTypes ~= nil and baleTypeIndex ~= nil and isActiveForInputIgnoreSelection.squareBaleWrapper.allowedBaleTypes[baleTypeIndex] ~= nil and not isActiveForInputIgnoreSelection.squareBaleWrapper.allowedBaleTypes[baleTypeIndex].skipWrapping and bale.wrappingState < 1 then
      if isActiveForInputIgnoreSelection.squareBaleWrapper.allowedBaleTypes[baleTypeIndex].wrapDiffuse == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L48
      end
      bale:setWrapTextures(v5.wrapDiffuse, v5.wrapNormal)
    end
  end
  isActiveForInputIgnoreSelection.baleGrabber.balesInTrigger[bale] = nil
  local v9 = NetworkUtil.getObjectId(bale)
  local v6 = BaleWrapperStateEvent.new(...)
  isSelected:broadcastEvent(v6, true, nil, self)
end
function BaleWrapper:getBaleInRange(refNode, distance)
  for v11, v12 in pairs(self.spec_baleWrapper.baleGrabber.balesInTrigger) do
    if not (v11.dynamicMountType == MountableObject.MOUNT_TYPE_NONE) then
      continue
    end
    if not (v11.nodeId ~= 0) then
      continue
    end
    local v13 = calcDistanceFrom(refNode, v11.nodeId)
    if not (v13 < v6) then
      continue
    end
    local v13, v14, v15 = self:getIsBaleWrappable(v11)
    if not v13 then
      continue
    end
    if not v14 then
      continue
    end
  end
  return isSelected, isActiveForInputIgnoreSelection, v5
end
function BaleWrapper:setBaleWrapperAutomaticDrop(state, noEventSend)
  if state == nil then
  end
  isActiveForInputIgnoreSelection.automaticDrop = state
  self:requestActionEventUpdate()
  BaleWrapperAutomaticDropEvent.sendEvent(self, state, noEventSend)
end
function BaleWrapper:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if self.spec_baleWrapper.baleWrapperState ~= BaleWrapper.STATE_NONE then
    return false, self.spec_baleWrapper.texts.warningFoldingWrapping
  end
  return superFunc(self, direction, onAiTurnOn)
end
function BaleWrapper.getCanBeSelected(v0, wrappingTime)
  return true
end
function BaleWrapper:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_baleWrapper.actionEvents)
    if isActiveForInputIgnoreSelection then
      if not self.spec_baleWrapper.automaticDrop then
        local isSelected, v5 = self:addPoweredActionEvent(self.spec_baleWrapper.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, BaleWrapper.actionEventEmpty, false, true, false, true, nil)
        v6:setActionEventText(v5, self.spec_baleWrapper.currentWrapper.unloadBaleText)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      end
      if isActiveForInputIgnoreSelection.toggleableAutomaticDrop then
        isSelected, v5 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.IMPLEMENT_EXTRA4, self, BaleWrapper.actionEventToggleAutomaticDrop, false, true, false, true, nil)
        if isActiveForInputIgnoreSelection.automaticDrop then
          -- if v3.toggleAutomaticDropTextNeg then goto L80 end
        end
        v6:setActionEventText(v8, isActiveForInputIgnoreSelection.toggleAutomaticDropTextPos)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      end
      BaleWrapper.updateActionEvents(self)
    end
  end
end
function BaleWrapper:onDeactivate()
  self.spec_baleWrapper.showInvalidBaleWarning = false
  if self.isClient then
    noEventSend:stopSamples(self.spec_baleWrapper.currentWrapper.samples.wrap)
    noEventSend:stopSamples(self.spec_baleWrapper.currentWrapper.samples.start)
    noEventSend:stopSamples(self.spec_baleWrapper.currentWrapper.samples.stop)
  end
end
function BaleWrapper:onFoldStateChanged(direction, moveToMiddle)
  if self.spec_baleWrapper.foldedBaleType ~= nil and self.spec_foldable.turnOnFoldDirection ~= direction then
    self:setBaleWrapperType(self.spec_baleWrapper.foldedBaleType.isRoundBaleWrapper, self.spec_baleWrapper.foldedBaleType.baleTypeIndex)
  end
end
function BaleWrapper:actionEventEmpty(actionName, inputValue, callbackState, isAnalog)
  if self.spec_baleWrapper.baleWrapperState == BaleWrapper.STATE_WRAPPER_FINSIHED then
    local v6, v7 = self:getIsBaleDropAllowed()
    if v6 then
      local v8 = v8:getServerConnection()
      local v10 = BaleWrapperStateEvent.new(self, BaleWrapper.CHANGE_BUTTON_EMPTY)
      v8:sendEvent(...)
      return
    end
    if v7 ~= nil then
      v8:showBlinkingWarning(v7, 2000)
    end
  end
end
function BaleWrapper:actionEventToggleAutomaticDrop(actionName, inputValue, callbackState, isAnalog)
  self:setBaleWrapperAutomaticDrop()
end
function BaleWrapper:updateActionEvents()
  if self.spec_baleWrapper.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
    if self.spec_baleWrapper.baleWrapperState ~= BaleWrapper.STATE_WRAPPER_FINSIHED then
    end
    isActiveForInputIgnoreSelection:setActionEventActive(v5, true)
    isActiveForInputIgnoreSelection:setActionEventText(noEventSend.actionEventId, wrappingTime.currentWrapper.unloadBaleText)
  end
  if wrappingTime.toggleableAutomaticDrop and wrappingTime.actionEvents[InputAction.IMPLEMENT_EXTRA4] ~= nil then
    if wrappingTime.automaticDrop then
      -- if v1.toggleAutomaticDropTextNeg then goto L59 end
    end
    isActiveForInputIgnoreSelection:setActionEventText(v5, wrappingTime.toggleAutomaticDropTextPos)
  end
end
function BaleWrapper:loadSpecValueBaleSize(wrappingTime, noEventSend, isActiveForInputIgnoreSelection)
  local isSelected = self:getRootName()
  if isActiveForInputIgnoreSelection then
  else
  end
  self:iterate(isSelected .. ".baleWrapper." .. v5 .. ".baleTypes.baleType", function(self, wrappingTime)
    local noEventSend = noEventSend:getValue(wrappingTime .. "#skipWrapping", false)
    if not noEventSend then
      local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(wrappingTime .. "#diameter", 0)
      noEventSend = MathUtil.round(isActiveForInputIgnoreSelection, 2)
      local isSelected = math.min(u1.minDiameter, noEventSend)
      u1.minDiameter = isSelected
      isSelected = math.max(u1.maxDiameter, noEventSend)
      u1.maxDiameter = isSelected
      isSelected = isSelected:getValue(wrappingTime .. "#length", 0)
      isActiveForInputIgnoreSelection = MathUtil.round(isSelected, 2)
      local v5 = math.min(u1.minLength, isActiveForInputIgnoreSelection)
      u1.minLength = v5
      v5 = math.max(u1.maxLength, isActiveForInputIgnoreSelection)
      u1.maxLength = v5
    end
  end)
  if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minDiameter == math.huge then
    -- if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minLength == math.huge then goto L51 end
  end
  return v6
end
function BaleWrapper:getSpecValueBaleSize(wrappingTime, noEventSend, isActiveForInputIgnoreSelection, isSelected, v5, v6)
  if v6 then
    -- if v0.specs.baleWrapperBaleSizeRound then goto L10 end
  end
  if self.specs.baleWrapperBaleSizeSquare ~= nil then
    if v6 then
      -- if v0.specs.baleWrapperBaleSizeSquare.minDiameter then goto L18 end
    end
    if v6 then
      -- if v7.maxDiameter then goto L24 end
    end
    if isSelected ~= nil then
      -- if v4 then goto L54 end
    end
    local v10 = v10:getText("unit_cmShort")
    if v9 ~= v8 then
      return string.format("%d%s-%d%s", v8 * 100, v10, v9 * 100, v10)
    end
    v12 = string.format("%d%s", v8 * 100, v10)
    return v12
    if v5 == true and v9 ~= v8 then
      v12 = v12:getText("unit_cmShort")
      return v8 * 100
    end
    local v11 = v11:getText("unit_cmShort")
    return v8 * 100
  end
  if isSelected and v5 then
    return 0, 0, ""
  end
  if isSelected then
    return 0, ""
  end
  return ""
end
function BaleWrapper.loadSpecValueBaleSizeRound(xmlFile, customEnvironment, baseDir)
  return BaleWrapper.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, true)
end
function BaleWrapper.loadSpecValueBaleSizeSquare(xmlFile, customEnvironment, baseDir)
  return BaleWrapper.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, false)
end
function BaleWrapper:getSpecValueBaleSizeRound(wrappingTime, noEventSend, isActiveForInputIgnoreSelection, isSelected, v5)
  if self.specs.baleWrapperBaleSizeRound ~= nil then
    return BaleWrapper.getSpecValueBaleSize(self, wrappingTime, noEventSend, isActiveForInputIgnoreSelection, isSelected, v5, true)
  end
end
function BaleWrapper:getSpecValueBaleSizeSquare(wrappingTime, noEventSend, isActiveForInputIgnoreSelection, isSelected, v5)
  if self.specs.baleWrapperBaleSizeSquare ~= nil then
    return BaleWrapper.getSpecValueBaleSize(self, wrappingTime, noEventSend, isActiveForInputIgnoreSelection, isSelected, v5, false)
  end
end
