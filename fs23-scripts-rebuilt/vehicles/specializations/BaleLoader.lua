-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/BaleLoaderStateEvent.lua")
BaleLoader = {}
function BaleLoader.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(FillUnit, v0)
end
function BaleLoader.initSpecialization()
  v0:addSpecType("baleLoaderBaleSizeRound", "shopListAttributeIconBaleSizeRound", BaleLoader.loadSpecValueBaleSizeRound, BaleLoader.getSpecValueBaleSizeRound, "vehicle")
  v0:addSpecType("baleLoaderBaleSizeSquare", "shopListAttributeIconBaleSizeSquare", BaleLoader.loadSpecValueBaleSizeSquare, BaleLoader.getSpecValueBaleSizeSquare, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("BaleLoader")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#transportPosition", "Transport position text", "action_baleloaderTransportPosition")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#operatingPosition", "Operating position text", "action_baleloaderOperatingPosition")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#unload", "Unload text", "action_baleloaderUnload")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#tilting", "Tilting text", "info_baleloaderTiltingTable")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#lowering", "Lowering text", "info_baleloaderLoweringTable")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#lowerPlattform", "Lower platform text", "action_baleloaderLowerPlatform")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#abortUnloading", "Abort unloading text", "action_baleloaderAbortUnloading")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#unloadHere", "Unload here text", "action_baleloaderUnloadHere")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#baleNotSupported", "Bale not supported warning", "warning_baleNotSupported")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#baleDoNotAllowFillTypeMixing", "Warning to be shown if the fill type is different from loaded fill types", "warning_baleDoNotAllowFillTypeMixing")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#onlyOneBaleTypeWarning", "Warning to be shown if user tries to collect a different bale type as already loaded", "warning_baleLoaderOnlyAllowOnceSize")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.baleLoader.texts#minUnloadingFillLevelWarning", "Warning to be displayed if min fill level is not reached", "warning_baleLoaderNotFullyLoaded")
  BaleLoader.registerAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader#transportPositionAfterUnloading", "Activate transport mode after unloading", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader#useBalePlaceAsLoadPosition", "Use bale place position as load position", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader#balePlaceOffset", "Bale place offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader#keepBaleRotationDuringLoad", "Keep the same bale rotation while loading bale", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader#automaticUnloading", "Automatically unload the bale loader if platform lifted", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleLoader#minUnloadingFillLevel", "Min. fill level until unloading is allowed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader#allowKinematicMounting", "Kinematic mounting of bale is allow (= bales still have collision while loaded)", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader.dynamicMount#enabled", "Bales are dynamically mounted", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader.dynamicMount#doInterpolation", "Bale position is interpolated from bale origin position to grabber position", false)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baleLoader.dynamicMount#interpolationTimeRot", "Time for bale rotation interpolation", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.dynamicMount#interpolationSpeedTrans", "Speed of translation interpolation (m/sec)", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.baleLoader.dynamicMount#minTransLimits", "Min translation limit")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.baleLoader.dynamicMount#maxTransLimits", "Max translation limit")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader.dynamicBaleUnloading#enabled", "Bales are joint together during unloading")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.baleLoader.dynamicBaleUnloading#connectedRows", "Indices of rows that are connected together")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.dynamicBaleUnloading#interConnectedRowStarts", "Interconnections at row start between rows (e.g. '1-2 3-4')")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.dynamicBaleUnloading#interConnectedRowEnds", "Interconnections at row ends between rows (e.g. '1-2 3-4')")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.dynamicBaleUnloading#widthOffset", "Width offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.dynamicBaleUnloading#heightOffset", "Height offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.dynamicBaleUnloading#diameterOffset", "Diameter offset")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.baleLoader.dynamicBaleUnloading#rowConnectionRotLimit", "Rotation limit for row joints")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.baleLoader.dynamicBaleUnloading#rowInterConnectionRotLimit", "Rotation limit for inter row joints")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.dynamicBaleUnloading.releaseAnimation#name", "Reference animation to remove joints")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.dynamicBaleUnloading.releaseAnimation#time", "If animation time is higher than this time the joints will be removed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader.dynamicBaleUnloading.releaseAnimation#useUnloadingMoverTrigger", "Bale joints will be removed as soon all bales hast left the unloading mover trigger", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleLoader#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.grabber#grabNode", "Grab node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.grabber#pickupRange", "Pickup range", 3)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.grabber#triggerNode", "Trigger node")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.grabber")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.baleLoader.grabber#effectDisableDuration", "Disable duration", 0.6)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.balePlaces#startBalePlace", "Start bale place node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.balePlaces.balePlace(?)#node", "Bale place node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.foldingAnimations#baseAnimation", "Base animation name", "baleGrabberTransportToWork")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#name", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#baleTypeIndex", "Index of current bale type", "'0' - any bale type")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#minFillLevel", "Min. fill level to use this animation", "-inf")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#maxFillLevel", "Max. fill level to use this animation", "inf")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#minBalePlace", "Min. bales on platform to use this animation", "-inf")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.foldingAnimations.foldingAnimation(?)#maxBalePlace", "Max. bales on platform to use this animation", "inf")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.unloadingMoverNodes#trigger", "As long as bales are in this trigger the mover nodes are active and the player can not lower the platform")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.unloadingMoverNodes.unloadingMoverNode(?)#node", "Node that moves bales")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.unloadingMoverNodes.unloadingMoverNode(?)#speed", "Defines direction and speed of moving in X direction", -1)
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.unloadingMoverNodes.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleLoader.synchronization#numBitsPosition", "Number of bits to synchronize bale positions", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.synchronization#maxPosition", "Max. position offset of bales from bale place in meter", 3)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.sounds", "grab")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.sounds", "emptyRotate")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.sounds", "unload")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#diameter", "Bale diameter")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#width", "Bale width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#height", "Bale height")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#length", "Bale length")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#minDiameter", "Bale min diameter", "diameter value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#maxDiameter", "Bale max diameter", "diameter value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#minWidth", "Bale min width", "width value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#maxWidth", "Bale max width", "width value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#minHeight", "Bale min height", "height value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#maxHeight", "Bale max height", "height value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#minLength", "Bale min length", "length value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleLoader.baleTypes.baleType(?)#maxLength", "Bale max length", "length value")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleLoader.baleTypes.baleType(?)#fillUnitIndex", "Fill unit index", "baleLoader#fillUnitIndex")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.baleLoader.baleTypes.baleType(?)#mixedFillTypes", "Allow loading of mixed fill types", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.baleTypes.baleType(?).balePlaces#startBalePlace", "Start bale place node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.baleTypes.baleType(?).balePlaces.balePlace(?)#node", "Bale place node")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.baleTypes.baleType(?)")
  BaleLoader.registerAnimationXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.baleTypes.baleType(?)")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.baleLoader.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleLoader.balePacker#node", "Node where to create the packed bale")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleLoader.balePacker#packedFilename", "Filename to packed bale")
  Vehicle.xmlSchema:addDelayedRegistrationFunc("AnimatedVehicle:part", function(self, v1)
    self:register(XMLValueType.BOOL, v1 .. "#baleLoaderAnimationNodes", "Bale Loader animation nodes turn on/off")
  end)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).baleLoader#lastFoldingAnimation", "Last folding animation name")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baleLoader#baleTypeIndex", "Last bale type index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).baleLoader#isInWorkPosition", "Is in working Position")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).baleLoader.bale(?)#filename", "Filename")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_TRANS, "vehicles.vehicle(?).baleLoader.bale(?)#position", "Position")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_ROT, "vehicles.vehicle(?).baleLoader.bale(?)#rotation", "Rotation")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).baleLoader.bale(?)#fillLevel", "Filllevel")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baleLoader.bale(?)#balePlace", "Bale place index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baleLoader.bale(?)#helper", "Helper index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).baleLoader.bale(?)#farmId", "Farm index")
  Bale.registerSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).baleLoader.bale(?)")
end
function BaleLoader:registerAnimationXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".animations.platform#rotate", "Rotate platform animation name", "rotatePlatform")
  self:register(XMLValueType.STRING, v1 .. ".animations.platform#rotateBack", "Rotate platform back animation name", "rotatePlatform")
  self:register(XMLValueType.STRING, v1 .. ".animations.platform#rotateEmpty", "Rotate platform empty animation name", "rotatePlatform")
  self:register(XMLValueType.BOOL, v1 .. ".animations.platform#allowPickupWhileMoving", "Allow pickup of next bale while platform is rotating", false)
  self:register(XMLValueType.FLOAT, v1 .. ".animations.baleGrabber#dropBaleReverseSpeed", "Speed of grabber in reverse", 5)
  self:register(XMLValueType.STRING, v1 .. ".animations.baleGrabber#dropToWork", "Custom grabber animation when moving from drop to work")
  self:register(XMLValueType.STRING, v1 .. ".animations.baleGrabber#workToDrop", "Bale grabber work to drop animation", "baleGrabberWorkToDrop")
  self:register(XMLValueType.STRING, v1 .. ".animations.baleGrabber#dropBale", "Bale grabber drop bale animation", "baleGrabberDropBale")
  self:register(XMLValueType.STRING, v1 .. ".animations.baleGrabber#transportToWork", "Transport to work animation", "baleGrabberTransportToWork")
  self:register(XMLValueType.STRING, v1 .. ".animations.pusher#emptyHide", "Empty hide animation", "emptyHidePusher1")
  self:register(XMLValueType.STRING, v1 .. ".animations.pusher#moveToEmpty", "Move to empty position", "moveBalePusherToEmpty")
  self:register(XMLValueType.BOOL, v1 .. ".animations.pusher#hidePusherOnEmpty", "Reverse move to empty animation after execution", true)
  self:register(XMLValueType.BOOL, v1 .. ".animations.pusher#pushBalesOnEmpty", "Defines if bale are pushed or pulled on empty", false)
  self:register(XMLValueType.STRING, v1 .. ".animations.releaseFrontPlatform#name", "Release front platform animation name", "releaseFrontplattform")
  self:register(XMLValueType.BOOL, v1 .. ".animations.releaseFrontPlatform#fillLevelSpeed", "Front platform speed is dependent on fill level", false)
  self:register(XMLValueType.STRING, v1 .. ".animations.moveBalePlaces#name", "Move bale places animation", "moveBalePlaces")
  self:register(XMLValueType.STRING, v1 .. ".animations.moveBalePlaces#extrasOnce", "Move bale places extra once animation", "moveBalePlaces")
  self:register(XMLValueType.STRING, v1 .. ".animations.moveBalePlaces#empty", "Move bale places empty animation", "moveBalePlaces")
  self:register(XMLValueType.FLOAT, v1 .. ".animations.moveBalePlaces#emptySpeed", "Speed of move bale places to empty", 1.5)
  self:register(XMLValueType.FLOAT, v1 .. ".animations.moveBalePlaces#emptyReverseSpeed", "Reverse speed of move bale places to empty", -1)
  self:register(XMLValueType.FLOAT, v1 .. ".animations.moveBalePlaces#pushOffset", "Delay of empty animation to give pusher time to move to the last bale", 0)
  self:register(XMLValueType.BOOL, v1 .. ".animations.moveBalePlaces#moveAfterRotatePlatform", "Move bale places after rotate platform", false)
  self:register(XMLValueType.BOOL, v1 .. ".animations.moveBalePlaces#resetOnSink", "Reset move bale places on platform sink", false)
  self:register(XMLValueType.FLOAT, v1 .. ".animations.moveBalePlaces#maxGrabberTime", "Max. grabber time to move bale places", "inf")
  self:register(XMLValueType.BOOL, v1 .. ".animations.moveBalePlaces#alwaysMove", "Always move bale places", false)
  self:register(XMLValueType.STRING, v1 .. ".animations.emptyRotate#name", "Empty rotate", "emptyRotate")
  self:register(XMLValueType.BOOL, v1 .. ".animations.emptyRotate#reset", "Reset empty rotate animation", true)
  self:register(XMLValueType.STRING, v1 .. ".animations#frontBalePusher", "Front bale pusher animation", "frontBalePusher")
  self:register(XMLValueType.STRING, v1 .. ".animations#balesToOtherRow", "Bales to othe row animation", "balesToOtherRow")
  self:register(XMLValueType.STRING, v1 .. ".animations#closeGrippers", "Close grippers animation", "closeGrippers")
end
BaleLoader.GRAB_MOVE_UP = 1
BaleLoader.GRAB_MOVE_DOWN = 2
BaleLoader.GRAB_DROP_BALE = 3
BaleLoader.EMPTY_NONE = 1
BaleLoader.EMPTY_TO_WORK = 2
BaleLoader.EMPTY_ROTATE_PLATFORM = 3
BaleLoader.EMPTY_ROTATE1 = 4
BaleLoader.EMPTY_CLOSE_GRIPPERS = 5
BaleLoader.EMPTY_HIDE_PUSHER1 = 6
BaleLoader.EMPTY_HIDE_PUSHER2 = 7
BaleLoader.EMPTY_ROTATE2 = 8
BaleLoader.EMPTY_WAIT_TO_DROP = 9
BaleLoader.EMPTY_WAIT_TO_SINK = 10
BaleLoader.EMPTY_SINK = 11
BaleLoader.EMPTY_CANCEL = 12
BaleLoader.EMPTY_WAIT_TO_REDO = 13
BaleLoader.CHANGE_DROP_BALES = 1
BaleLoader.CHANGE_SINK = 2
BaleLoader.CHANGE_EMPTY_REDO = 3
BaleLoader.CHANGE_EMPTY_START = 4
BaleLoader.CHANGE_EMPTY_CANCEL = 5
BaleLoader.CHANGE_MOVE_TO_WORK = 6
BaleLoader.CHANGE_MOVE_TO_TRANSPORT = 7
BaleLoader.CHANGE_GRAB_BALE = 8
BaleLoader.CHANGE_GRAB_MOVE_UP = 9
BaleLoader.CHANGE_GRAB_DROP_BALE = 10
BaleLoader.CHANGE_GRAB_MOVE_DOWN = 11
BaleLoader.CHANGE_FRONT_PUSHER = 12
BaleLoader.CHANGE_ROTATE_PLATFORM = 13
BaleLoader.CHANGE_EMPTY_ROTATE_PLATFORM = 14
BaleLoader.CHANGE_EMPTY_ROTATE1 = 15
BaleLoader.CHANGE_EMPTY_CLOSE_GRIPPERS = 16
BaleLoader.CHANGE_EMPTY_HIDE_PUSHER1 = 17
BaleLoader.CHANGE_EMPTY_HIDE_PUSHER2 = 18
BaleLoader.CHANGE_EMPTY_ROTATE2 = 19
BaleLoader.CHANGE_EMPTY_WAIT_TO_DROP = 20
BaleLoader.CHANGE_EMPTY_STATE_NIL = 21
BaleLoader.CHANGE_EMPTY_WAIT_TO_REDO = 22
BaleLoader.CHANGE_BUTTON_EMPTY = 23
BaleLoader.CHANGE_BUTTON_EMPTY_ABORT = 24
BaleLoader.CHANGE_BUTTON_WORK_TRANSPORT = 25
function BaleLoader.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadBaleTypeFromXML", BaleLoader.loadBaleTypeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadBalePlacesFromXML", BaleLoader.loadBalePlacesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadBaleLoaderAnimationsFromXML", BaleLoader.loadBaleLoaderAnimationsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "createBaleToBaleJoints", BaleLoader.createBaleToBaleJoints)
  SpecializationUtil.registerFunction(vehicleType, "createBaleToBaleJoint", BaleLoader.createBaleToBaleJoint)
  SpecializationUtil.registerFunction(vehicleType, "doStateChange", BaleLoader.doStateChange)
  SpecializationUtil.registerFunction(vehicleType, "getBaleGrabberDropBaleAnimName", BaleLoader.getBaleGrabberDropBaleAnimName)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleGrabbingAllowed", BaleLoader.getIsBaleGrabbingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "pickupBale", BaleLoader.pickupBale)
  SpecializationUtil.registerFunction(vehicleType, "setBaleLoaderBaleType", BaleLoader.setBaleLoaderBaleType)
  SpecializationUtil.registerFunction(vehicleType, "getBaleTypeByBale", BaleLoader.getBaleTypeByBale)
  SpecializationUtil.registerFunction(vehicleType, "baleGrabberTriggerCallback", BaleLoader.baleGrabberTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "baleLoaderMoveTriggerCallback", BaleLoader.baleLoaderMoveTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "mountDynamicBale", BaleLoader.mountDynamicBale)
  SpecializationUtil.registerFunction(vehicleType, "unmountDynamicBale", BaleLoader.unmountDynamicBale)
  SpecializationUtil.registerFunction(vehicleType, "mountBale", BaleLoader.mountBale)
  SpecializationUtil.registerFunction(vehicleType, "unmountBale", BaleLoader.unmountBale)
  SpecializationUtil.registerFunction(vehicleType, "setBalePairCollision", BaleLoader.setBalePairCollision)
  SpecializationUtil.registerFunction(vehicleType, "getLoadedBales", BaleLoader.getLoadedBales)
  SpecializationUtil.registerFunction(vehicleType, "startAutomaticBaleUnloading", BaleLoader.startAutomaticBaleUnloading)
  SpecializationUtil.registerFunction(vehicleType, "getIsAutomaticBaleUnloadingInProgress", BaleLoader.getIsAutomaticBaleUnloadingInProgress)
  SpecializationUtil.registerFunction(vehicleType, "getIsAutomaticBaleUnloadingAllowed", BaleLoader.getIsAutomaticBaleUnloadingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "playBaleLoaderFoldingAnimation", BaleLoader.playBaleLoaderFoldingAnimation)
  SpecializationUtil.registerFunction(vehicleType, "getIsBaleLoaderFoldingPlaying", BaleLoader.getIsBaleLoaderFoldingPlaying)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentFoldingAnimation", BaleLoader.getCurrentFoldingAnimation)
  SpecializationUtil.registerFunction(vehicleType, "updateFoldingAnimation", BaleLoader.updateFoldingAnimation)
  SpecializationUtil.registerFunction(vehicleType, "onBaleMoverBaleRemoved", BaleLoader.onBaleMoverBaleRemoved)
  SpecializationUtil.registerFunction(vehicleType, "addBaleUnloadTrigger", BaleLoader.addBaleUnloadTrigger)
  SpecializationUtil.registerFunction(vehicleType, "removeBaleUnloadTrigger", BaleLoader.removeBaleUnloadTrigger)
end
function BaleLoader.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", BaleLoader.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowDynamicMountFillLevelInfo", BaleLoader.getAllowDynamicMountFillLevelInfo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", BaleLoader.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", BaleLoader.removeNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", BaleLoader.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIReadyToDrive", BaleLoader.getIsAIReadyToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIPreparingToDrive", BaleLoader.getIsAIPreparingToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", BaleLoader.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", BaleLoader.getConsumingLoad)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowerTakeOffActive", BaleLoader.getIsPowerTakeOffActive)
end
function BaleLoader.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onActivate", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", BaleLoader)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterAnimationValueTypes", BaleLoader)
end
function BaleLoader:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleloaderTurnedOnScrollers.baleloaderTurnedOnScroller", "vehicle.baleLoader.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleGrabber", "vehicle.baleLoader.grabber")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.balePlaces", "vehicle.baleLoader.balePlaces")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.grabParticleSystem", "vehicle.baleLoader.grabber.grabParticleSystem")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.grabber.grabParticleSystem", "vehicle.baleLoader.grabber.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#pickupRange", "vehicle.baleLoader.grabber#pickupRange")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleTypes", "vehicle.baleLoader.baleTypes")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textTransportPosition", "vehicle.baleLoader.texts#transportPosition")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textOperatingPosition", "vehicle.baleLoader.texts#operatingPosition")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textUnload", "vehicle.baleLoader.texts#unload")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textTilting", "vehicle.baleLoader.texts#tilting")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textLowering", "vehicle.baleLoader.texts#lowering")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textLowerPlattform", "vehicle.baleLoader.texts#lowerPlattform")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textAbortUnloading", "vehicle.baleLoader.texts#abortUnloading")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#textUnloadHere", "vehicle.baleLoader.texts#unloadHere")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#rotatePlatformAnimName", "vehicle.baleLoader.animations#rotatePlatform")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#rotatePlatformBackAnimName", "vehicle.baleLoader.animations#rotatePlatformBack")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#rotatePlatformEmptyAnimName", "vehicle.baleLoader.animations#rotatePlatformEmpty")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.animations#grabberDropBaleReverseSpeed", "vehicle.baleLoader.animations.baleGrabber#dropBaleReverseSpeed")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.animations#grabberDropToWork", "vehicle.baleLoader.animations.baleGrabber#dropToWork")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.animations#rotatePlatform", "vehicle.baleLoader.animations.platform#rotate")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.animations#rotatePlatformBack", "vehicle.baleLoader.animations.platform#rotateBack")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader.animations#rotatePlatformEmpty", "vehicle.baleLoader.animations.platform#rotateEmpty")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#moveBalePlacesAfterRotatePlatform", "vehicle.baleLoader.animations.moveBalePlaces#moveAfterRotatePlatform")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#moveBalePlacesMaxGrabberTime", "vehicle.baleLoader.animations.moveBalePlaces#maxGrabberTime")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#alwaysMoveBalePlaces", "vehicle.baleLoader.animations.moveBalePlaces#alwaysMove")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.baleLoader#resetEmptyRotateAnimation", "vehicle.baleLoader.animations.emptyRotate#reset")
  self.spec_baleLoader.balesToLoad = {}
  self.spec_baleLoader.balesToMount = {}
  self.spec_baleLoader.isInWorkPosition = false
  self.spec_baleLoader.grabberIsMoving = false
  self.spec_baleLoader.rotatePlatformDirection = 0
  self.spec_baleLoader.frontBalePusherDirection = 0
  self.spec_baleLoader.emptyState = BaleLoader.EMPTY_NONE
  self.spec_baleLoader.texts = {}
  local v4 = v4:getValue("vehicle.baleLoader" .. ".texts#transportPosition", "action_baleloaderTransportPosition", nil, self.customEnvironment)
  self.spec_baleLoader.texts.transportPosition = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#operatingPosition", "action_baleloaderOperatingPosition", nil, self.customEnvironment)
  self.spec_baleLoader.texts.operatingPosition = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#unload", "action_baleloaderUnload", nil, self.customEnvironment)
  self.spec_baleLoader.texts.unload = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#tilting", "info_baleloaderTiltingTable", nil, self.customEnvironment)
  self.spec_baleLoader.texts.tilting = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#lowering", "info_baleloaderLoweringTable", nil, self.customEnvironment)
  self.spec_baleLoader.texts.lowering = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#lowerPlattform", "action_baleloaderLowerPlatform", nil, self.customEnvironment)
  self.spec_baleLoader.texts.lowerPlattform = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#abortUnloading", "action_baleloaderAbortUnloading", nil, self.customEnvironment)
  self.spec_baleLoader.texts.abortUnloading = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#unloadHere", "action_baleloaderUnloadHere", nil, self.customEnvironment)
  self.spec_baleLoader.texts.unloadHere = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#baleNotSupported", "warning_baleNotSupported", nil, self.customEnvironment)
  self.spec_baleLoader.texts.baleNotSupported = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#baleDoNotAllowFillTypeMixing", "warning_baleDoNotAllowFillTypeMixing", nil, self.customEnvironment)
  self.spec_baleLoader.texts.baleDoNotAllowFillTypeMixing = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#onlyOneBaleTypeWarning", "warning_baleLoaderOnlyAllowOnceSize", nil, self.customEnvironment)
  self.spec_baleLoader.texts.onlyOneBaleTypeWarning = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".texts#minUnloadingFillLevelWarning", "warning_baleLoaderNotFullyLoaded", nil, self.customEnvironment)
  self.spec_baleLoader.texts.minUnloadingFillLevelWarning = v4
  v4 = v4:getText("warning_youDontOwnThisItem")
  self.spec_baleLoader.texts.youDoNotOwnBale = v4
  local v3 = v3:getValue("vehicle.baleLoader" .. "#transportPositionAfterUnloading", true)
  self.spec_baleLoader.transportPositionAfterUnloading = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#useBalePlaceAsLoadPosition", false)
  self.spec_baleLoader.useBalePlaceAsLoadPosition = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#balePlaceOffset", 0)
  self.spec_baleLoader.balePlaceOffset = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#keepBaleRotationDuringLoad", false)
  self.spec_baleLoader.keepBaleRotationDuringLoad = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#automaticUnloading", false)
  self.spec_baleLoader.automaticUnloading = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#minUnloadingFillLevel", 1)
  self.spec_baleLoader.minUnloadingFillLevel = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#fillUnitIndex", 1)
  self.spec_baleLoader.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.baleLoader" .. "#allowKinematicMounting", true)
  self.spec_baleLoader.allowKinematicMounting = v3
  self.spec_baleLoader.dynamicMount = {}
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicMount#enabled", false)
  self.spec_baleLoader.dynamicMount.enabled = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicMount#doInterpolation", false)
  self.spec_baleLoader.dynamicMount.jointInterpolation = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicMount#interpolationTimeRot", 1)
  self.spec_baleLoader.dynamicMount.jointInterpolationTimeRot = v4
  local v5 = v5:getValue("vehicle.baleLoader" .. ".dynamicMount#interpolationSpeedTrans", 0.1)
  self.spec_baleLoader.dynamicMount.jointInterpolationSpeedTrans = v5 / 1000
  self.spec_baleLoader.dynamicMount.baleJointsToUpdate = {}
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicMount#minTransLimits", nil, true)
  self.spec_baleLoader.dynamicMount.minTransLimits = v4
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicMount#maxTransLimits", nil, true)
  self.spec_baleLoader.dynamicMount.maxTransLimits = v4
  self.spec_baleLoader.dynamicMount.baleMassDirty = false
  self.spec_baleLoader.dynamicBaleUnloading = {}
  v4 = v4:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#enabled", false)
  self.spec_baleLoader.dynamicBaleUnloading.enabled = v4
  self.spec_baleLoader.dynamicBaleUnloading.connectedRows = {}
  v3 = v3:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#connectedRows", nil, true)
  if v3 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 645, target 654)
    self.spec_baleLoader.dynamicBaleUnloading.connectedRows[v3[1]] = true
    -- TODO: structure LOP_FORNLOOP (pc 653, target 646)
  end
  local v6 = function(self)
    local v2 = v2:getValue(self)
    local v3 = string.split(v2, " ")
    -- TODO: structure LOP_FORNPREP (pc 17, target 55)
    local v7 = string.split(v3[1], "-")
    if #v7 ~= 2 then
      Logging.xmlWarning(u0.xmlFile, "Unknown row connection '%s' in '%s' (should look like '1-2 3-4')", v3[1], self)
    else
      local v11 = tonumber(v7[1])
      local v12 = tonumber(v7[2])
      table.insert({}, {})
    end
    -- TODO: structure LOP_FORNLOOP (pc 54, target 18)
    return savegame
  end("vehicle.baleLoader" .. ".dynamicBaleUnloading#interConnectedRowStarts")
  v2.dynamicBaleUnloading.interConnectedRowStarts = v6
  v6 = function(self)
    local v2 = v2:getValue(self)
    local v3 = string.split(v2, " ")
    -- TODO: structure LOP_FORNPREP (pc 17, target 55)
    local v7 = string.split(v3[1], "-")
    if #v7 ~= 2 then
      Logging.xmlWarning(u0.xmlFile, "Unknown row connection '%s' in '%s' (should look like '1-2 3-4')", v3[1], self)
    else
      local v11 = tonumber(v7[1])
      local v12 = tonumber(v7[2])
      table.insert({}, {})
    end
    -- TODO: structure LOP_FORNLOOP (pc 54, target 18)
    return savegame
  end("vehicle.baleLoader" .. ".dynamicBaleUnloading#interConnectedRowEnds")
  v2.dynamicBaleUnloading.interConnectedRowEnds = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#widthOffset", 0.05)
  v2.dynamicBaleUnloading.widthOffset = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#heightOffset", 0.05)
  v2.dynamicBaleUnloading.heightOffset = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#diameterOffset", 0.05)
  v2.dynamicBaleUnloading.diameterOffset = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#rowConnectionRotLimit", 4)
  v2.dynamicBaleUnloading.rowConnectionRotLimit = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading#rowInterConnectionRotLimit", 1)
  v2.dynamicBaleUnloading.rowInterConnectionRotLimit = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading.releaseAnimation#name")
  v2.dynamicBaleUnloading.releaseAnimation = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading.releaseAnimation#time", 1)
  v2.dynamicBaleUnloading.releaseAnimationTime = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".dynamicBaleUnloading.releaseAnimation#useUnloadingMoverTrigger", false)
  v2.dynamicBaleUnloading.useUnloadingMoverTrigger = v6
  v2.baleGrabber = {}
  v6 = v6:getValue("vehicle.baleLoader" .. ".grabber#grabNode", nil, self.components, self.i3dMappings)
  v2.baleGrabber.grabNode = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".grabber#pickupRange", 3)
  v2.baleGrabber.pickupRange = v6
  v2.baleGrabber.balesInTrigger = {}
  v6 = v6:getValue("vehicle.baleLoader" .. ".grabber#triggerNode", nil, self.components, self.i3dMappings)
  v2.baleGrabber.trigger = v6
  if v2.baleGrabber.trigger ~= nil then
    addTrigger(v2.baleGrabber.trigger, "baleGrabberTriggerCallback", self)
  else
    Logging.xmlError(self.xmlFile, "Bale grabber needs a valid trigger!")
  end
  if self.isClient then
    local v7 = ParticleUtil.loadParticleSystem(self.xmlFile, {}, "vehicle.baleLoader" .. ".grabber.grabParticleSystem", self.components, false, nil, self.baseDirectory)
    if v7 then
      v2.grabParticleSystem = {}
      v2.grabParticleSystemDisableTime = 0
    end
    v7 = v7:loadEffect(self.xmlFile, "vehicle.baleLoader" .. ".grabber", self.components, self, self.i3dMappings)
    v2.grabberEffects = v7
    v7 = v7:getValue("vehicle.baleLoader" .. ".grabber#effectDisableDuration", 0.6)
    v2.grabberEffectDisableDuration = v7
    v2.grabberEffectDisableTime = 0
    v2.samples = {}
    local v8 = v8:loadSampleFromXML(self.xmlFile, "vehicle.baleLoader" .. ".sounds", "grab", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.grab = v8
    v8 = v8:loadSampleFromXML(self.xmlFile, "vehicle.baleLoader" .. ".sounds", "emptyRotate", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.emptyRotate = v8
    v8 = v8:loadSampleFromXML(self.xmlFile, "vehicle.baleLoader" .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v8
    v8 = v8:loadSampleFromXML(self.xmlFile, "vehicle.baleLoader" .. ".sounds", "unload", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.unload = v8
  end
  v2.defaultAnimations = {}
  self:loadBaleLoaderAnimationsFromXML(self.xmlFile, "vehicle.baleLoader", v2.defaultAnimations)
  v2.animations = v2.defaultAnimations.animations
  v2.defaultBalePlace = {}
  v2.useSharedBalePlaces = false
  v5 = self:loadBalePlacesFromXML(self.xmlFile, "vehicle.baleLoader", v2.defaultBalePlace)
  if v5 then
    v2.useSharedBalePlaces = true
  end
  v2.startBalePlace = v2.defaultBalePlace.startBalePlace
  v2.balePlaces = v2.defaultBalePlace.balePlaces
  v2.baleTypes = {}
  while true do
    v6 = string.format("%s.baleTypes.baleType(%d)", "vehicle.baleLoader", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadBaleTypeFromXML(self.xmlFile, v6, {})
    if v8 then
      table.insert(v2.baleTypes, {index = v5 + 1})
    end
  end
  if #v2.baleTypes == 0 then
    Logging.xmlError(self.xmlFile, "No bale types defined for baleLoader!")
  else
    if v2.startBalePlace == nil then
      v2.startBalePlace = v2.baleTypes[1].startBalePlace
    end
    if v2.balePlaces == nil then
      v2.balePlaces = v2.baleTypes[1].balePlaces
    end
    if v2.startBalePlace == nil then
      Logging.xmlError(self.xmlFile, "Could not find startBalePlace for baleLoader!")
    end
    if v2.balePlaces == nil then
      Logging.xmlError(self.xmlFile, "Could not find bale places for baleLoader!")
    end
  end
  self:setBaleLoaderBaleType(1)
  v2.foldingAnimations = {}
  while true do
    v6 = string.format("%s.foldingAnimations.foldingAnimation(%d)", "vehicle.baleLoader", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = v8:getValue(v6 .. "#name")
    v8 = v8:getValue(v6 .. "#baleTypeIndex", 0)
    v8 = v8:getValue(v6 .. "#minFillLevel", -math.huge)
    v8 = v8:getValue(v6 .. "#maxFillLevel", math.huge)
    v8 = v8:getValue(v6 .. "#minBalePlace", -math.huge)
    v8 = v8:getValue(v6 .. "#maxBalePlace", math.huge)
    v8 = self:getAnimationExists({name = v8, baleTypeIndex = v8, minFillLevel = v8, maxFillLevel = v8, minBalePlace = v8, maxBalePlace = v8}.name)
    if v8 then
      table.insert(v2.foldingAnimations, {name = v8, baleTypeIndex = v8, minFillLevel = v8, maxFillLevel = v8, minBalePlace = v8, maxBalePlace = v8})
    else
      Logging.xmlWarning(self.xmlFile, "Unknown folding animation '%s' in '%s'", {name = v8, baleTypeIndex = v8, minFillLevel = v8, maxFillLevel = v8, minBalePlace = v8, maxBalePlace = v8}.name, v6)
    end
  end
  if 0 >= #v2.foldingAnimations then
  end
  v2.hasMultipleFoldingAnimations = true
  v2.lastFoldingAnimation = v2.animations.baleGrabberTransportToWork
  self:updateFoldingAnimation()
  v2.unloadingMover = {}
  v7 = v7:getValue("vehicle.baleLoader" .. ".unloadingMoverNodes#trigger", nil, self.components, self.i3dMappings)
  v2.unloadingMover.trigger = v7
  if v2.unloadingMover.trigger ~= nil then
    addTrigger(v2.unloadingMover.trigger, "baleLoaderMoveTriggerCallback", self)
  end
  v2.unloadingMover.isActive = false
  v7 = self:getNextDirtyFlag()
  v2.unloadingMover.dirtyFlag = v7
  v2.unloadingMover.frameDelay = 0
  v2.unloadingMover.balesInTrigger = {}
  v2.unloadingMover.nodes = {}
  v7 = v7:loadAnimations(self.xmlFile, "vehicle.baleLoader" .. ".unloadingMoverNodes.animationNodes", self.components, self, self.i3dMappings)
  v2.unloadingMover.animationNodes = v7
  while true do
    v6 = string.format("%s.unloadingMoverNodes.unloadingMoverNode(%d)", "vehicle.baleLoader", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = v8:getValue(v6 .. "#node", nil, self.components, self.i3dMappings)
    v8 = v8:getValue(v6 .. "#speed", -1)
    if {node = v8, speed = v8}.node ~= nil then
      table.insert(v2.unloadingMover.nodes, {node = v8, speed = v8})
    else
      Logging.xmlWarning(self.xmlFile, "Unknown node in '%s'", v6)
    end
  end
  v2.balePacker = {}
  v7 = v7:getValue("vehicle.baleLoader" .. ".balePacker#node", nil, self.components, self.i3dMappings)
  v2.balePacker.node = v7
  v7 = v7:getValue("vehicle.baleLoader" .. ".balePacker#packedFilename")
  v2.balePacker.filename = v7
  if v2.balePacker.filename ~= nil then
    v7 = Utils.getFilename(v2.balePacker.filename, self.baseDirectory)
    v2.balePacker.filename = v7
    if v2.balePacker.filename ~= nil then
      v6 = fileExists(v2.balePacker.filename)
      if not v6 then
        Logging.xmlError(self.xmlFile, "Unable to find packed bale '%s'", v2.balePacker.filename)
      end
    end
  end
  v6 = v6:getValue("vehicle.baleLoader" .. ".synchronization#numBitsPosition", 10)
  v2.synchronizationNumBitsPosition = v6
  v6 = v6:getValue("vehicle.baleLoader" .. ".synchronization#maxPosition", 3)
  v2.synchronizationMaxPosition = v6
  v6 = v6:loadAnimations(self.xmlFile, "vehicle.baleLoader" .. ".animationNodes", self.components, self, self.i3dMappings)
  v2.animationNodes = v6
  v2.animationNodesBlocked = false
  v2.showBaleNotSupportedWarning = false
  v2.baleNotSupportedWarning = nil
  v2.automaticUnloadingInProgress = false
  v2.lastPickupAutomatedUnloadingDelayTime = 15000
  v2.lastPickupTime = -v2.lastPickupAutomatedUnloadingDelayTime
  v2.kinematicMountedBales = {}
  v2.baleUnloadTriggers = {}
  v2.baleJoints = {}
end
function BaleLoader:onPostLoad(savegame)
  if savegame ~= nil then
    local v3 = v3:getValue(savegame.key .. ".baleLoader#baleTypeIndex")
    if v3 ~= nil then
      self:setBaleLoaderBaleType(v3, true)
    end
    if v2.hasMultipleFoldingAnimations and not savegame.resetVehicles then
      local v4 = v4:getValue(savegame.key .. ".baleLoader#lastFoldingAnimation", v2.lastFoldingAnimation)
      v2.lastFoldingAnimation = v4
    end
    v4 = v4:getValue(savegame.key .. ".baleLoader#isInWorkPosition", false)
    if v4 then
      -- if v2.isInWorkPosition then goto L73 end
      v2.grabberIsMoving = true
      v2.isInWorkPosition = true
      BaleLoader.moveToWorkPosition(self, true)
    else
      BaleLoader.moveToTransportPosition(self)
    end
    v2.startBalePlace.current = 1
    v2.startBalePlace.count = 0
    if not savegame.resetVehicles then
      while true do
        v8 = string.format(".baleLoader.bale(%d)", v5)
        v7 = v7:hasProperty(savegame.key .. v8)
        if not v7 then
          break
        end
        v7 = v7:getValue(savegame.key .. v8 .. "#filename")
        if v7 ~= nil then
          v8 = NetworkUtil.convertFromNetworkFilename(v7)
          v8, v9, v10 = v8:getValue(savegame.key .. v8 .. "#position")
          v11, v12, v13 = v11:getValue(savegame.key .. v8 .. "#rotation")
          v14 = v14:getValue(savegame.key .. v8 .. "#balePlace")
          v15 = v15:getValue(savegame.key .. v8 .. "#helper")
          if v14 ~= nil then
            if 0 < v14 then
              -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L172
              -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L172
              -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L172
              -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L172
              -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L172
              -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L172
            end
            -- if v14 >= 1 then goto L180 end
            -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x80000000 -> L180
          end
          print("Warning: Corrupt savegame, bale " .. v7 .. " could not be loaded")
          -- goto L349  (LOP_JUMP +169)
          if 0 < v14 then
          else
          end
          if v14 < 1 then
            -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x0 -> L315
            -- if v15 > v2.startBalePlace.numOfPlaces then goto L315 end
            v20 = getChildAt(v2.startBalePlace.node, v15 - 1)
            if v2.startBalePlace.bales == nil then
              v2.startBalePlace.bales = {}
            end
            v2.startBalePlace.count = v2.startBalePlace.count + 1
          else
            v20 = table.getn(v2.balePlaces)
            if v14 <= v20 then
              v21 = math.max(v2.startBalePlace.current, v14 + 1)
              v2.startBalePlace.current = v21
              if v2.balePlaces[v14].bales == nil then
                v2.balePlaces[v14].bales = {}
              end
            end
          end
          if v18 ~= nil then
            Bale.loadBaleAttributesFromXMLFile({}, savegame.xmlFile, v6, savegame.resetVehicles)
            table.insert(v2.balesToLoad, {parentNode = v18, filename = v7, bales = v19, translation = v16, rotation = v17, attributes = {}})
          end
        end
      end
    end
    self:updateFoldingAnimation()
    BaleLoader.updateBalePlacesAnimations(self)
  end
end
function BaleLoader:onLoadFinished(savegame)
  for v6, v7 in pairs(self.spec_baleLoader.balesToLoad) do
    local baleObject = Bale.new(self.isServer, self.isClient)
    local v9, v10, v11 = unpack(v7.translation)
    local v12, v13, v14 = unpack(v7.rotation)
    local v15 = baleObject:loadFromConfigXML(v7.filename, v9, v10, v11, v12, v13, v14)
    if v15 then
      baleObject:applyBaleAttributes(v7.attributes)
      baleObject:register()
      if v2.dynamicMount.enabled then
        self:mountDynamicBale(baleObject, v7.parentNode)
      else
        self:mountBale(baleObject, self, v7.parentNode, v9, v10, v11, v12, v13, v14)
      end
      baleObject:setCanBeSold(false)
      local v17 = NetworkUtil.getObjectId(baleObject)
      table.insert(...)
    end
    v2.balesToLoad[v6] = nil
  end
end
function BaleLoader:onDelete()
  if self.spec_baleLoader.balePlaces ~= nil then
    for v5, v6 in pairs(self.spec_baleLoader.balePlaces) do
      if not (v6.bales ~= nil) then
        continue
      end
      for v10, v11 in pairs(v6.bales) do
        local v12 = NetworkUtil.getObject(v11)
        if not (v12 ~= nil) then
          continue
        end
        if v1.dynamicMount.enabled then
          self:unmountDynamicBale(v12)
        else
          self:unmountBale(v12)
        end
        v12:setCanBeSold(true)
        if not (self.isReconfigurating ~= nil) then
          continue
        end
        if not self.isReconfigurating then
          continue
        end
        v12:delete()
      end
    end
  end
  if v1.startBalePlace ~= nil then
    for v5, v6 in ipairs(v1.startBalePlace.bales) do
      v7 = NetworkUtil.getObject(v6)
      if not (v7 ~= nil) then
        continue
      end
      if v1.dynamicMount.enabled then
        self:unmountDynamicBale(v7)
      else
        self:unmountBale(v7)
      end
      v7:setCanBeSold(true)
      if not (self.isReconfigurating ~= nil) then
        continue
      end
      if not self.isReconfigurating then
        continue
      end
      v7:delete()
    end
  end
  if v1.baleGrabber ~= nil then
    if v1.baleGrabber.currentBale ~= nil then
      v2 = NetworkUtil.getObject(v1.baleGrabber.currentBale)
      if v2 ~= nil then
        if v1.dynamicMount.enabled then
          self:unmountDynamicBale(v2)
        else
          self:unmountBale(v2)
        end
        v2:setCanBeSold(true)
      end
    end
    if v1.baleGrabber.trigger ~= nil then
      removeTrigger(v1.baleGrabber.trigger)
    end
  end
  if v1.unloadingMover ~= nil then
    if v1.unloadingMover.trigger ~= nil then
      removeTrigger(v1.unloadingMover.trigger)
    end
    v2:deleteAnimations(v1.unloadingMover.animationNodes)
  end
  if v1.baleUnloadTriggers ~= nil then
    for v5, v6 in pairs(v1.baleUnloadTriggers) do
      v5:removeDeleteListener(self, BaleLoader.onBaleUnloadTriggerDeleted)
      v1.baleUnloadTriggers[v5] = nil
    end
  end
  v2:deleteEffects(v1.grabberEffects)
  v2:deleteSamples(v1.samples)
  v2:deleteAnimations(v1.animationNodes)
end
function BaleLoader:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#isInWorkPosition", self.spec_baleLoader.isInWorkPosition)
  if self.spec_baleLoader.currentBaleType ~= nil then
    xmlFile:setValue(key .. "#baleTypeIndex", self.spec_baleLoader.currentBaleType.index)
  end
  for v9, v10 in pairs(v4.balePlaces) do
    if not (v10.bales ~= nil) then
      continue
    end
    for v14, v15 in pairs(v10.bales) do
      local v16 = NetworkUtil.getObject(v15)
      if not (v16 ~= nil) then
        continue
      end
      local v17 = string.format("%s.bale(%d)", key, v5)
      v16:saveToXMLFile(xmlFile, v17)
      local v19 = table.getn(v4.startBalePlace.bales)
      if v19 ~= 0 then
      end
      local v21 = self:getFillUnitFillLevel(v4.fillUnitIndex)
      if v21 % v4.startBalePlace.numOfPlaces == 0 then
      end
      local v24 = self:getFillUnitFillLevel(v4.fillUnitIndex)
      local v22 = math.floor(v24 / v4.startBalePlace.numOfPlaces)
      if v22 + 1 ~= v9 then
      end
      local v23 = self:getFillUnitCapacity(v4.fillUnitIndex)
      if v23 % 2 ~= 0 then
      end
      if v18 then
        -- if not v19 then goto L131 end
        -- if not v20 then goto L131 end
        -- if not true then goto L131 end
        xmlFile:setValue(v17 .. "#balePlace", 0)
        xmlFile:setValue(v17 .. "#helper", 1)
      else
        xmlFile:setValue(v17 .. "#balePlace", v9)
      end
    end
  end
  for v9, v10 in ipairs(v4.startBalePlace.bales) do
    v11 = NetworkUtil.getObject(v10)
    if not (v11 ~= nil) then
      continue
    end
    v12 = string.format("%s.bale(%d)", key, v5)
    v11:saveToXMLFile(xmlFile, v12)
    xmlFile:setValue(v12 .. "#balePlace", 0)
    xmlFile:setValue(v12 .. "#helper", v9)
  end
  if v4.hasMultipleFoldingAnimations and v4.lastFoldingAnimation ~= nil then
    xmlFile:setValue(key .. "#lastFoldingAnimation", v4.lastFoldingAnimation)
  end
  if v4.baleGrabber.currentBale ~= nil then
    v6 = NetworkUtil.getObject(v4.baleGrabber.currentBale)
    if v6 ~= nil then
      self:unmountBale(v6)
      v4.baleGrabber.currentBaleIsUnmounted = true
    end
  end
end
function BaleLoader:onReadStream(streamId, connection)
  local v4 = streamReadBool(streamId)
  self.spec_baleLoader.isInWorkPosition = v4
  v4 = streamReadIntN(streamId, 3)
  self.spec_baleLoader.frontBalePusherDirection = v4
  v4 = streamReadIntN(streamId, 3)
  self.spec_baleLoader.rotatePlatformDirection = v4
  v4 = streamReadBool(streamId)
  if v4 then
    v4 = streamReadIntN(streamId, 6)
    self:setBaleLoaderBaleType(v4)
  end
  if v3.isInWorkPosition then
    BaleLoader.moveToWorkPosition(self)
  end
  v4 = streamReadUIntN(streamId, 4)
  local v6 = streamReadInt8(streamId)
  v3.startBalePlace.current = v6
  local v5 = streamReadBool(streamId)
  if v5 then
    v6 = NetworkUtil.readNodeObjectId(streamId)
    v3.baleGrabber.currentBale = v6
    v3.balesToMount[v3.baleGrabber.currentBale] = {serverId = v3.baleGrabber.currentBale, linkNode = v3.baleGrabber.grabNode, trans = {0, 0, 0}, rot = {0, 0, 0}}
  end
  v6 = streamReadUInt8(streamId)
  v3.startBalePlace.count = v6
  -- TODO: structure LOP_FORNPREP (pc 123, target 176)
  local v8 = NetworkUtil.readNodeObjectId(streamId)
  local v9 = getChildAt(v3.startBalePlace.node, 1 - 1)
  v3.balesToMount[v8] = {serverId = v8, linkNode = v9, trans = {0, 0, 0}, rot = {0, 0, 0}}
  table.insert(v3.startBalePlace.bales, v8)
  self:updateFoldingAnimation()
  -- TODO: structure LOP_FORNLOOP (pc 175, target 124)
  v8 = table.getn(v3.balePlaces)
  -- TODO: structure LOP_FORNPREP (pc 184, target 300)
  v9 = streamReadUInt8(streamId)
  if 0 < v9 then
    v3.balePlaces[1].bales = {}
    -- TODO: structure LOP_FORNPREP (pc 202, target 299)
    local v13 = NetworkUtil.readNodeObjectId(streamId)
    if not v3.dynamicMount.enabled then
      local v20 = streamReadUIntN(streamId, v3.synchronizationNumBitsPosition)
      v20 = streamReadUIntN(streamId, v3.synchronizationNumBitsPosition)
      v20 = streamReadUIntN(streamId, v3.synchronizationNumBitsPosition)
    end
    table.insert(v8.bales, v13)
    v3.balesToMount[v13] = {serverId = v13, linkNode = v8.node, trans = {v14, v15, v16}, rot = {0, 0, 0}}
    -- TODO: structure LOP_FORNLOOP (pc 298, target 203)
  end
  -- TODO: structure LOP_FORNLOOP (pc 299, target 185)
  BaleLoader.updateBalePlacesAnimations(self)
  if BaleLoader.EMPTY_TO_WORK <= v4 then
    self:doStateChange(BaleLoader.CHANGE_EMPTY_START)
    AnimatedVehicle.updateAnimations(self, 99999999, true)
    if BaleLoader.EMPTY_ROTATE_PLATFORM <= v4 then
      self:doStateChange(BaleLoader.CHANGE_EMPTY_ROTATE_PLATFORM)
      AnimatedVehicle.updateAnimations(self, 99999999, true)
      if BaleLoader.EMPTY_ROTATE1 <= v4 then
        self:doStateChange(BaleLoader.CHANGE_EMPTY_ROTATE1)
        AnimatedVehicle.updateAnimations(self, 99999999, true)
        if BaleLoader.EMPTY_CLOSE_GRIPPERS <= v4 then
          self:doStateChange(BaleLoader.CHANGE_EMPTY_CLOSE_GRIPPERS)
          AnimatedVehicle.updateAnimations(self, 99999999, true)
          if BaleLoader.EMPTY_HIDE_PUSHER1 <= v4 then
            self:doStateChange(BaleLoader.CHANGE_EMPTY_HIDE_PUSHER1)
            AnimatedVehicle.updateAnimations(self, 99999999, true)
            if BaleLoader.EMPTY_HIDE_PUSHER2 <= v4 then
              self:doStateChange(BaleLoader.CHANGE_EMPTY_HIDE_PUSHER2)
              AnimatedVehicle.updateAnimations(self, 99999999, true)
              if BaleLoader.EMPTY_ROTATE2 <= v4 then
                self:doStateChange(BaleLoader.CHANGE_EMPTY_ROTATE2)
                AnimatedVehicle.updateAnimations(self, 99999999, true)
                if BaleLoader.EMPTY_WAIT_TO_DROP <= v4 then
                  self:doStateChange(BaleLoader.CHANGE_EMPTY_WAIT_TO_DROP)
                  AnimatedVehicle.updateAnimations(self, 99999999, true)
                  if v4 ~= BaleLoader.EMPTY_CANCEL then
                    -- if v4 ~= BaleLoader.EMPTY_WAIT_TO_REDO then goto L503 end
                  end
                  self:doStateChange(BaleLoader.CHANGE_EMPTY_CANCEL)
                  AnimatedVehicle.updateAnimations(self, 99999999, true)
                  if v4 == BaleLoader.EMPTY_WAIT_TO_REDO then
                    self:doStateChange(BaleLoader.CHANGE_EMPTY_WAIT_TO_REDO)
                    AnimatedVehicle.updateAnimations(self, 99999999, true)
                    -- goto L547  (LOP_JUMP +44)
                    if v4 ~= BaleLoader.EMPTY_WAIT_TO_SINK then
                      -- if v4 ~= BaleLoader.EMPTY_SINK then goto L547 end
                    end
                    self:doStateChange(BaleLoader.CHANGE_DROP_BALES)
                    AnimatedVehicle.updateAnimations(self, 99999999, true)
                    if v4 == BaleLoader.EMPTY_SINK then
                      self:doStateChange(BaleLoader.CHANGE_SINK)
                      AnimatedVehicle.updateAnimations(self, 99999999, true)
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
  end
  v3.emptyState = v4
end
function BaleLoader:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_baleLoader.isInWorkPosition)
  streamWriteIntN(streamId, self.spec_baleLoader.frontBalePusherDirection, 3)
  streamWriteIntN(streamId, self.spec_baleLoader.rotatePlatformDirection, 3)
  if self.spec_baleLoader.currentBaleType == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    streamWriteIntN(streamId, v3.currentBaleType.index or 1, 6)
  end
  streamWriteUIntN(streamId, v3.emptyState, 4)
  streamWriteInt8(streamId, v3.startBalePlace.current)
  if v3.baleGrabber.currentBale == nil then
  end
  v4 = v4(v5, true)
  if v4 then
    NetworkUtil.writeNodeObjectId(streamId, v3.baleGrabber.currentBale)
  end
  streamWriteUInt8(streamId, v3.startBalePlace.count)
  -- TODO: structure LOP_FORNPREP (pc 93, target 105)
  NetworkUtil.writeNodeObjectId(streamId, v3.startBalePlace.bales[1])
  -- TODO: structure LOP_FORNLOOP (pc 104, target 94)
  local v7 = table.getn(v3.balePlaces)
  -- TODO: structure LOP_FORNPREP (pc 113, target 252)
  if v3.balePlaces[1].bales ~= nil then
    local v9 = table.getn(v3.balePlaces[1].bales)
  end
  streamWriteUInt8(streamId, v8)
  if v7.bales ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 140, target 251)
    local v13 = NetworkUtil.getObject(v7.bales[1])
    local v15, v16, v17 = getTranslation(v13.nodeId)
    NetworkUtil.writeNodeObjectId(streamId, v7.bales[1])
    if not v3.dynamicMount.enabled then
      local v18 = math.abs(v15)
      if v3.synchronizationMaxPosition >= v18 then
        v18 = math.abs(v16)
        if v3.synchronizationMaxPosition >= v18 then
          v18 = math.abs(v17)
          -- if v3.synchronizationMaxPosition >= v18 then goto L203 end
        end
      end
      Logging.xmlWarning(self.xmlFile, "Position of bale '%d' could not be synchronized correctly. Position out of range (%.2f, %.2f, %.2f) > %.2f. Increase 'vehicle.baleLoader.synchronization#maxPosition'", v11, v15, v16, v17, v3.synchronizationMaxPosition)
      streamWriteUIntN(streamId, (v3.synchronizationMaxPosition + v15) / v3.synchronizationMaxPosition * 2 * (2 ^ v3.synchronizationNumBitsPosition - 1), v3.synchronizationNumBitsPosition)
      streamWriteUIntN(streamId, (v3.synchronizationMaxPosition + v16) / v3.synchronizationMaxPosition * 2 * (2 ^ v3.synchronizationNumBitsPosition - 1), v3.synchronizationNumBitsPosition)
      streamWriteUIntN(streamId, (v3.synchronizationMaxPosition + v17) / v3.synchronizationMaxPosition * 2 * (2 ^ v3.synchronizationNumBitsPosition - 1), v3.synchronizationNumBitsPosition)
    end
    -- TODO: structure LOP_FORNLOOP (pc 250, target 141)
  end
  -- TODO: structure LOP_FORNLOOP (pc 251, target 114)
end
function BaleLoader:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 then
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadBool(streamId)
      if v5 ~= self.spec_baleLoader.unloadingMover.isActive then
        if v5 then
          v6:startAnimations(self.spec_baleLoader.unloadingMover.animationNodes)
          v6:playSample(self.spec_baleLoader.samples.unload)
        else
          v6:stopAnimations(self.spec_baleLoader.unloadingMover.animationNodes)
          v6:stopSample(self.spec_baleLoader.samples.unload)
        end
        v4.unloadingMover.isActive = v5
      end
    end
  end
end
function BaleLoader:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 then
    local v8 = bitAND(dirtyMask, self.spec_baleLoader.unloadingMover.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.unloadingMover.isActive)
    end
  end
end
function BaleLoader:updateBalePlacesAnimations()
  if self.spec_baleLoader.startBalePlace ~= nil then
    -- if v0.spec_baleLoader.startBalePlace.numOfPlaces < v0.spec_baleLoader.startBalePlace.current then goto L28 end
  end
  if v1.animations.moveBalePlacesAfterRotatePlatform and 1 < v1.startBalePlace.current then
    local v3 = table.getn(v1.balePlaces)
    if v1.animations.moveBalePlacesAfterRotatePlatform and not v1.animations.moveBalePlacesAlways and not v1.useBalePlaceAsLoadPosition then
    end
    if v1.useBalePlaceAsLoadPosition then
    end
    self:playAnimation(v1.animations.moveBalePlaces, 1, 0, true)
    self:setAnimationStopTime(v1.animations.moveBalePlaces, (v1.startBalePlace.current - v2) / v3)
    AnimatedVehicle.updateAnimations(self, 99999999, true)
  end
  if v1.startBalePlace ~= nil and 1 <= v1.startBalePlace.count then
    self:playAnimation(v1.animations.balesToOtherRow, 20, nil, true)
    AnimatedVehicle.updateAnimations(self, 99999999, true)
    if v1.startBalePlace.numOfPlaces <= v1.startBalePlace.count then
      BaleLoader.rotatePlatform(self)
    end
  end
end
function BaleLoader:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.finishedFirstUpdate then
    for v9, v10 in pairs(self.spec_baleLoader.balesToMount) do
      local v11 = NetworkUtil.getObject(v10.serverId)
      if not (v11 ~= nil) then
        continue
      end
      local v12, v13, v14 = unpack(v10.trans)
      local v15, v16, v17 = unpack(v10.rot)
      if v5.dynamicMount.enabled then
        self:mountDynamicBale(v11, v10.linkNode)
      else
        self:mountBale(v11, self, v10.linkNode, v12, v13, v14, v15, v16, v17)
      end
      local v18 = self:getBaleTypeByBale(v11)
      if v18 ~= nil then
        self:setBaleLoaderBaleType(v18.index)
      end
      v5.balesToMount[v9] = nil
    end
  end
  if self.isClient and v5.grabberEffectDisableTime ~= 0 and v5.grabberEffectDisableTime < g_currentMission.time then
    v6:stopEffects(v5.grabberEffects)
    v5.grabberEffectDisableTime = 0
  end
  if v5.grabberIsMoving then
    v6 = self:getIsBaleLoaderFoldingPlaying()
    if not v6 then
      v5.grabberIsMoving = false
    end
  end
  v5.showBaleNotSupportedWarning = false
  v6 = self:getIsBaleGrabbingAllowed()
  if v6 and v5.baleGrabber.grabNode ~= nil and v5.baleGrabber.currentBale == nil then
    v6, v7, v8 = BaleLoader.getBaleInRange(self, v5.baleGrabber.grabNode, v5.baleGrabber.balesInTrigger)
    if v6 ~= nil then
      if v7 == nil then
        v5.showBaleNotSupportedWarning = true
        v5.baleNotSupportedWarning = v8
      elseif self.isServer then
        self:pickupBale(v6, v7)
      end
    end
  end
  if self.isServer then
    if v5.grabberMoveState ~= nil then
      if v5.grabberMoveState == BaleLoader.GRAB_MOVE_UP then
        v6 = self:getIsAnimationPlaying(v5.animations.baleGrabberWorkToDrop)
        -- if v6 then goto L281 end
        v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_GRAB_MOVE_UP)
        v6:broadcastEvent(v8, true, nil, self)
      elseif v5.grabberMoveState == BaleLoader.GRAB_DROP_BALE then
        v6 = self:getIsAnimationPlaying(v5.currentBaleGrabberDropBaleAnimName)
        -- if v6 then goto L281 end
        v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_GRAB_DROP_BALE)
        v6:broadcastEvent(v8, true, nil, self)
      else
        if v5.grabberMoveState == BaleLoader.GRAB_MOVE_DOWN then
          if not v5.animations.baleGrabberDropToWork then
          end
          v7 = self:getIsAnimationPlaying(v6)
          if not v7 then
            v9 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_GRAB_MOVE_DOWN)
            v7:broadcastEvent(v9, true, nil, self)
            self:setAnimationTime(v5.currentBaleGrabberDropBaleAnimName, 0, false)
            self:setAnimationTime(v5.animations.baleGrabberWorkToDrop, 0, false)
          end
        end
      end
    end
    if v5.frontBalePusherDirection ~= 0 then
      v6 = self:getIsAnimationPlaying(v5.animations.frontBalePusher)
      if not v6 then
        v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_FRONT_PUSHER)
        v6:broadcastEvent(v8, true, nil, self)
      end
    end
    if v5.rotatePlatformDirection ~= 0 then
      if v5.rotatePlatformDirection < 0 then
      end
      v7 = self:getIsAnimationPlaying(v6)
      if not v7 then
        v7 = self:getIsAnimationPlaying(v5.animations.moveBalePlacesExtrasOnce)
        if not v7 and not v5.moveBalePlacesDelayedMovement then
          v9 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_ROTATE_PLATFORM)
          v7:broadcastEvent(v9, true, nil, self)
        end
      end
    end
    if v5.emptyState ~= BaleLoader.EMPTY_NONE then
      if v5.emptyState == BaleLoader.EMPTY_TO_WORK then
        v6 = self:getIsBaleLoaderFoldingPlaying()
        -- if v6 then goto L700 end
        v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_ROTATE_PLATFORM)
        v6:broadcastEvent(v8, true, nil, self)
      elseif v5.emptyState == BaleLoader.EMPTY_ROTATE_PLATFORM then
        v6 = self:getIsAnimationPlaying(v5.animations.rotatePlatformEmpty)
        -- if v6 then goto L700 end
        v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_ROTATE1)
        v6:broadcastEvent(v8, true, nil, self)
      else
        if v5.emptyState == BaleLoader.EMPTY_ROTATE1 then
          v6 = self:getIsAnimationPlaying(v5.animations.emptyRotate)
          -- if v6 then goto L700 end
          v6 = self:getIsAnimationPlaying(v5.animations.moveBalePlacesToEmpty)
          -- if v6 then goto L700 end
          v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_CLOSE_GRIPPERS)
          v6:broadcastEvent(v8, true, nil, self)
        elseif v5.emptyState == BaleLoader.EMPTY_CLOSE_GRIPPERS then
          v6 = self:getIsAnimationPlaying(v5.animations.closeGrippers)
          -- if v6 then goto L700 end
          v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_HIDE_PUSHER1)
          v6:broadcastEvent(v8, true, nil, self)
        else
          if v5.emptyState == BaleLoader.EMPTY_HIDE_PUSHER1 then
            v6 = self:getIsAnimationPlaying(v5.animations.pusherEmptyHide1)
            -- if v6 then goto L700 end
            v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_HIDE_PUSHER2)
            v6:broadcastEvent(v8, true, nil, self)
          elseif v5.emptyState == BaleLoader.EMPTY_HIDE_PUSHER2 then
            v6 = self:getAnimationTime(v5.animations.pusherMoveToEmpty)
            if v6 >= 0.7 then
              v6 = self:getIsAnimationPlaying(v5.animations.pusherMoveToEmpty)
              -- if v6 then goto L700 end
            end
            v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_ROTATE2)
            v6:broadcastEvent(v8, true, nil, self)
          else
            if v5.emptyState == BaleLoader.EMPTY_ROTATE2 then
              v6 = self:getIsAnimationPlaying(v5.animations.emptyRotate)
              -- if v6 then goto L700 end
              v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_WAIT_TO_DROP)
              v6:broadcastEvent(v8, true, nil, self)
            elseif v5.emptyState == BaleLoader.EMPTY_SINK then
              v6 = self:getIsAnimationPlaying(v5.animations.emptyRotate)
              -- if v6 then goto L700 end
              v6 = self:getIsAnimationPlaying(v5.animations.moveBalePlacesToEmpty)
              -- if v6 then goto L700 end
              v6 = self:getIsAnimationPlaying(v5.animations.pusherEmptyHide1)
              -- if v6 then goto L700 end
              v6 = self:getIsAnimationPlaying(v5.animations.rotatePlatformEmpty)
              -- if v6 then goto L700 end
              v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_STATE_NIL)
              v6:broadcastEvent(v8, true, nil, self)
            else
              if v5.emptyState == BaleLoader.EMPTY_CANCEL then
                v6 = self:getIsAnimationPlaying(v5.animations.emptyRotate)
                if not v6 then
                  v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_WAIT_TO_REDO)
                  v6:broadcastEvent(v8, true, nil, self)
                end
              end
            end
          end
        end
      end
    end
  end
  if v5.baleGrabber.currentBaleIsUnmounted then
    v5.baleGrabber.currentBaleIsUnmounted = false
    v6 = NetworkUtil.getObject(v5.baleGrabber.currentBale)
    if v6 ~= nil then
      if v5.dynamicMount.enabled then
        self:mountDynamicBale(v6, v5.baleGrabber.grabNode)
      else
        self:mountBale(v6, self, v5.baleGrabber.grabNode, 0, 0, 0, 0, 0, 0)
      end
      v6:setCanBeSold(false)
    end
  end
end
function BaleLoader:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_baleLoader.actionEvents[InputAction.IMPLEMENT_EXTRA] ~= nil then
      if self.spec_baleLoader.emptyState == BaleLoader.EMPTY_NONE and self.spec_baleLoader.grabberMoveState == nil then
        if self.spec_baleLoader.isInWorkPosition then
          v8:setActionEventText(self.spec_baleLoader.actionEvents[InputAction.IMPLEMENT_EXTRA].actionEventId, self.spec_baleLoader.texts.transportPosition)
        else
          v8:setActionEventText(self.spec_baleLoader.actionEvents[InputAction.IMPLEMENT_EXTRA].actionEventId, self.spec_baleLoader.texts.operatingPosition)
        end
      end
      v8:setActionEventActive(v6.actionEventId, v7)
    end
    if v5.actionEvents[InputAction.IMPLEMENT_EXTRA2] ~= nil then
      if v5.emptyState ~= BaleLoader.EMPTY_WAIT_TO_DROP then
      end
      v7:setActionEventActive(v9, true)
    end
    if v5.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
      if v5.emptyState == BaleLoader.EMPTY_NONE then
        local v8 = BaleLoader.getAllowsStartUnloading(self)
        -- if not v8 then goto L188 end
        v8:setActionEventText(v5.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, v5.texts.unload)
      elseif v5.emptyState == BaleLoader.EMPTY_WAIT_TO_DROP then
        v8:setActionEventText(v5.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, v5.texts.unloadHere)
      else
        if v5.emptyState == BaleLoader.EMPTY_WAIT_TO_SINK then
          -- if v5.unloadingMover.isActive then goto L188 end
          v8:setActionEventText(v5.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, v5.texts.lowerPlattform)
        elseif v5.emptyState == BaleLoader.EMPTY_WAIT_TO_REDO then
          v8:setActionEventText(v5.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, v5.texts.unload)
        end
      end
      v8:setActionEventActive(v6.actionEventId, v7)
    end
  end
  if self.isServer then
    if Platform.gameplay.automaticBaleDrop then
      local v6, v7 = next(v5.baleUnloadTriggers)
      if v6 ~= nil then
        v8 = self:getIsAutomaticBaleUnloadingAllowed()
        if v8 then
          v8 = self:getLoadedBales()
          for v13, v14 in ipairs(v8) do
            local jointIndex = v6:getIsBaleSupportedByUnloadTrigger(v14)
            if not jointIndex then
              continue
            end
            break
          end
          if v9 then
            self:startAutomaticBaleUnloading()
          end
        end
      end
    end
    if not v5.automaticUnloading then
      -- if not v5.automaticUnloadingInProgress then goto L284 end
    end
    if v5.emptyState == BaleLoader.EMPTY_WAIT_TO_DROP then
      self:doStateChange(BaleLoader.CHANGE_BUTTON_EMPTY)
    end
    v6 = self:getIsAnimationPlaying(v5.animations.releaseFrontPlatform)
    if v5.emptyState == BaleLoader.EMPTY_WAIT_TO_SINK and not v6 and not v5.unloadingMover.isActive then
      self:doStateChange(BaleLoader.CHANGE_SINK)
    end
    if 0 < #v5.baleJoints then
      if v5.dynamicBaleUnloading.useUnloadingMoverTrigger and v5.unloadingMover.frameDelay == 0 then
        v7 = next(v5.unloadingMover.balesInTrigger)
        if v7 == nil then
        end
      end
      if v5.dynamicBaleUnloading.useUnloadingMoverTrigger ~= nil then
        -- if not v6 then goto L346 end
      end
      if v5.dynamicBaleUnloading.releaseAnimation ~= nil then
        v8 = self:getAnimationTime(v5.dynamicBaleUnloading.releaseAnimation)
        if v5.dynamicBaleUnloading.releaseAnimationTime > v8 then
          v8 = self:getIsAnimationPlaying(v5.dynamicBaleUnloading.releaseAnimation)
          -- if v8 then goto L346 end
        end
      end
      if v6 then
        -- TODO: structure LOP_FORNPREP (pc 352, target 364)
        removeJoint(v5.baleJoints[#v5.baleJoints])
        v5.baleJoints[#v5.baleJoints] = nil
        -- TODO: structure LOP_FORNLOOP (pc 363, target 353)
      end
    end
    if v5.unloadingMover.isActive then
      v7 = math.max(v5.unloadingMover.frameDelay - 1, 0)
      v5.unloadingMover.frameDelay = v7
      if v5.unloadingMover.frameDelay == 0 then
        v6 = next(v5.unloadingMover.balesInTrigger)
        if v6 == nil then
          v5.unloadingMover.isActive = false
          -- TODO: structure LOP_FORNPREP (pc 411, target 424)
          setFrictionVelocity(v5.unloadingMover.nodes[1].node, 0)
          -- TODO: structure LOP_FORNLOOP (pc 423, target 412)
          if self.isClient then
            v6:stopAnimations(v5.unloadingMover.animationNodes)
            v6:stopSample(v5.samples.unload)
          end
          self:raiseDirtyFlags(v5.unloadingMover.dirtyFlag)
        end
      end
    end
    if v5.dynamicMount.enabled then
      for v10, v11 in ipairs(v5.dynamicMount.baleJointsToUpdate) do
        if v11.quaternion == nil then
          v12, v13, v14, jointIndex = getQuaternion(v11.node)
          v11.quaternion = {v12, v13, v14, jointIndex}
        end
        if v11.time < v5.dynamicMount.jointInterpolationTimeRot then
          v11.time = v11.time + dt
          local v16 = math.abs(v11.quaternion[2])
          if 0.5 < v16 then
            local v16, v17, v18, v19 = MathUtil.slerpQuaternionShortestPath(v11.quaternion[1], v11.quaternion[2], v11.quaternion[3], v11.quaternion[4], 0, 1, 0, 0, v11.time / v5.dynamicMount.jointInterpolationTimeRot)
          else
            v16 = math.abs(v11.quaternion[2])
            if v16 < 0.5 then
              v16, v17, v18, v19 = MathUtil.slerpQuaternionShortestPath(v11.quaternion[1], v11.quaternion[2], v11.quaternion[3], v11.quaternion[4], 0, 0, 0, 1, v11.time / v5.dynamicMount.jointInterpolationTimeRot)
            end
          end
          setQuaternion(v11.node, v12, v13, v14, jointIndex)
        end
        v12, v13, v14 = getTranslation(v11.node)
        v17 = math.abs(v12)
        v18 = math.abs(v13)
        v17 = math.abs(v14)
        if 0.001 < v17 + v18 + v17 then
          local v21 = MathUtil.sign(v12)
          if 0 < v21 then
            -- if math.max then goto L641 end
          end
          local v24 = MathUtil.sign(v12)
          v21 = math.min(v12 - v24 * jointIndex, 0)
          local v22 = MathUtil.sign(v13)
          if 0 < v22 then
            -- if math.max then goto L663 end
          end
          local v25 = MathUtil.sign(v13)
          v22 = math.min(v13 - v25 * jointIndex, 0)
          v21 = v16(v14)
          v17(...)
        else
          if not (v5.dynamicMount.jointInterpolationTimeRot < v11.time) then
            continue
          end
          table.remove(v5.dynamicMount.baleJointsToUpdate, v10)
        end
      end
      for v11, v12 in pairs(self.spec_animatedVehicle.animations) do
        v13 = self:getIsAnimationPlaying(v11)
        if not v13 then
          continue
        end
      end
      if not v7 and not v6 then
        -- if not v5.dynamicMount.baleMassDirty then goto L866 end
      end
      for v11, v12 in pairs(v5.balePlaces) do
        if not (v12.bales ~= nil) then
          continue
        end
        for v16, v17 in pairs(v12.bales) do
          v18 = NetworkUtil.getObject(v17)
          if not (v18 ~= nil) then
            continue
          end
          if v18.dynamicMountJointIndex ~= nil then
            setJointFrame(v18.dynamicMountJointIndex, 0, v18.baleLoaderDynamicJointNode)
          end
          if not (v18.backupMass == nil) then
            continue
          end
          v19 = getMass(v18.nodeId)
          if not (v19 ~= 1) then
            continue
          end
          v18.backupMass = v19
          setMass(v18.nodeId, 0.1)
          v5.dynamicMount.baleMassDirty = false
        end
      end
      if v5.startBalePlace ~= nil then
        for v11, v12 in ipairs(v5.startBalePlace.bales) do
          v13 = NetworkUtil.getObject(v12)
          if not (v13 ~= nil) then
            continue
          end
          if v13.dynamicMountJointIndex ~= nil then
            setJointFrame(v13.dynamicMountJointIndex, 0, v13.baleLoaderDynamicJointNode)
          end
          if not (v13.backupMass == nil) then
            continue
          end
          v14 = getMass(v13.nodeId)
          if not (v14 ~= 1) then
            continue
          end
          v13.backupMass = v14
          setMass(v13.nodeId, 0.1)
          v5.dynamicMount.baleMassDirty = false
        end
      end
      if v5.baleGrabber.currentBale ~= nil then
        v8 = NetworkUtil.getObject(v5.baleGrabber.currentBale)
        if v8 ~= nil and v8.dynamicMountJointIndex ~= nil then
          setJointFrame(v8.dynamicMountJointIndex, 0, v8.baleLoaderDynamicJointNode)
        end
      end
    end
  end
  if v5.moveBalePlacesDelayedMovement then
    v6 = self:getAnimationTime(v5.animations.baleGrabberWorkToDrop)
    if v6 < v5.animations.moveBalePlacesMaxGrabberTime then
      v5.rotatePlatformDirection = -1
      self:playAnimation(v5.animations.rotatePlatformBack, -1, nil, true)
      if v5.animations.moveBalePlacesAfterRotatePlatform then
        if v5.startBalePlace ~= nil then
          -- if v5.startBalePlace.current <= #v5.balePlaces then goto L918 end
        end
        if v5.animations.moveBalePlacesAlways then
          self:playAnimation(v5.animations.moveBalePlaces, 1, (v5.startBalePlace.current - 1) / #v5.balePlaces, true)
          self:setAnimationStopTime(v5.animations.moveBalePlaces, v5.startBalePlace.current / #v5.balePlaces)
          self:playAnimation(v5.animations.moveBalePlacesExtrasOnce, 1, nil, true)
        end
      end
      v5.moveBalePlacesDelayedMovement = nil
    end
  end
  if 0 < v5.animations.moveBalePlacesToEmptyPushOffsetTime then
    v5.animations.moveBalePlacesToEmptyPushOffsetTime = v5.animations.moveBalePlacesToEmptyPushOffsetTime - dt
    if v5.animations.moveBalePlacesToEmptyPushOffsetTime <= 0 then
      v6 = self:getRealAnimationTime(v5.animations.moveBalePlaces)
      v7 = self:getAnimationDuration(v5.animations.moveBalePlacesToEmpty)
      self:playAnimation(v5.animations.moveBalePlacesToEmpty, v5.animations.moveBalePlacesToEmptySpeed * (v7 - v6) / (v7 - v6 - v5.animations.moveBalePlacesToEmptyPushOffsetDelay * v5.animations.moveBalePlacesToEmptySpeed), v6 / v7, true)
      v5.animations.moveBalePlacesToEmptyPushOffsetTime = 0
    end
  end
end
function BaleLoader:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_baleLoader.showBaleNotSupportedWarning and self.spec_baleLoader.baleNotSupportedWarning ~= nil then
    v5:showBlinkingWarning(self.spec_baleLoader.baleNotSupportedWarning, 2000)
  end
end
function BaleLoader:getBaleInRange(refNode, balesInTrigger)
  for v11, v12 in pairs(balesInTrigger) do
    if not (v12 ~= nil) then
      continue
    end
    if not (0 < v12) then
      continue
    end
    for v18, v19 in pairs(isActiveForInputIgnoreSelection.balePlaces) do
      if not (v19.bales ~= nil) then
        continue
      end
      for v23, v24 in pairs(v19.bales) do
        local v25 = NetworkUtil.getObject(v24)
        if v25 ~= nil and v25 == v11 then
        end
      end
    end
    if isActiveForInputIgnoreSelection.startBalePlace ~= nil then
      for v18, v19 in ipairs(isActiveForInputIgnoreSelection.startBalePlace.bales) do
        v20 = NetworkUtil.getObject(v19)
        if v20 ~= nil and v20 == v11 then
        end
      end
    end
    if v11 ~= nil then
      jointIndex = entityExists(v11.nodeId)
      -- if v15 then goto L87 end
    end
    if not false then
      continue
    end
    jointIndex = calcDistanceFrom(refNode, v11.nodeId)
    if not (jointIndex < isSelected) then
      continue
    end
    v16 = self:getBaleTypeByBale(v11)
    if v16 ~= isActiveForInputIgnoreSelection.currentBaleType then
      v17 = self:getFillUnitFillLevel(isActiveForInputIgnoreSelection.currentBaleType.fillUnitIndex)
      if v17 ~= 0 then
      end
    end
    if v16 ~= nil and not v16.mixedFillTypes and v14 ~= nil then
      v17 = v11:getFillType()
      v18 = v14:getFillType()
      if v17 ~= v18 then
      end
    end
    if v11.dynamicMountJointIndex ~= nil then
    end
    v17 = v11:getBaleSupportsBaleLoader()
    if not v17 then
    end
    v17 = self:getActiveFarm()
    if v17 ~= v11.ownerFarmId then
      v18 = v18:canFarmAccessOtherId(v17, v11.ownerFarmId)
      if not v18 then
      end
    end
    if v16 == nil and not (v6 == nil) then
      continue
    end
    if v16 ~= nil then
    end
  end
  return v5, v6, v7
end
function BaleLoader:onActivate()
  if self.spec_baleLoader.isInWorkPosition and not self.spec_baleLoader.animationNodesBlocked then
    isActiveForInput:startAnimations(self.spec_baleLoader.animationNodes)
    isActiveForInput:playSample(self.spec_baleLoader.samples.work)
  end
end
function BaleLoader:onDeactivate()
  isActiveForInput:stopEffects(self.spec_baleLoader.grabberEffects)
  isActiveForInput:stopAnimations(self.spec_baleLoader.animationNodes)
  isActiveForInput:stopSample(self.spec_baleLoader.samples.work)
end
function BaleLoader:onRootVehicleChanged(rootVehicle)
  if rootVehicle.actionController ~= nil then
    if self.spec_baleLoader.controlledAction ~= nil then
      isSelected:updateParent(rootVehicle.actionController)
      return
    end
    local isSelected = isActiveForInputIgnoreSelection:registerAction("baleLoaderWorkstate", nil, 4)
    isActiveForInput.controlledAction = isSelected
    isSelected:setCallback(self, BaleLoader.actionControllerEvent)
    v5:setFinishedFunctions(self, function(self)
      return self.spec_baleLoader.isInWorkPosition
    end, true, false)
    v5:addAIEventListener(self, "onAIImplementPrepare", -1)
    return
  end
  if isActiveForInput.controlledAction ~= nil then
    isSelected:remove()
  end
end
function BaleLoader:actionControllerEvent(direction)
  if not self.spec_baleLoader.grabberIsMoving and self.spec_baleLoader.grabberMoveState == nil then
    if 0 < direction then
      -- if not v0.spec_baleLoader.isInWorkPosition then goto L21 end
    end
    if direction < 0 and isActiveForInput.isInWorkPosition then
      BaleLoader.actionEventWorkTransport(self)
      return true
    end
  end
  return false
end
function BaleLoader:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if fillUnitIndex == self.spec_baleLoader.fillUnitIndex then
    self:updateFoldingAnimation()
  end
end
function BaleLoader:onRegisterAnimationValueTypes()
  self:registerAnimationValueType("baleLoaderAnimationNodes", "baleLoaderAnimationNodes", "", false, AnimationValueBool, function(self, dt, isActiveForInput)
    return true
  end, function(self)
    return not u0.animationNodesBlocked
  end, function(self, dt)
    u0.animationNodesBlocked = not dt
    if not u0.animationNodesBlocked and u0.isInWorkPosition then
      isActiveForInput:startAnimations(u0.animationNodes)
      isActiveForInput:playSample(u0.samples.work)
    end
    if u0.animationNodesBlocked and u0.isInWorkPosition then
      isActiveForInput:stopAnimations(u0.animationNodes)
      isActiveForInput:stopSample(u0.samples.work)
    end
  end)
end
function BaleLoader:loadBaleTypeFromXML(xmlFile, key, baleType)
  baleType.dimensions = {}
  local v8 = v8:getString(key .. "#diameter")
  if v8 == nil then
    v8 = v8:getString(key .. "#minDiameter")
    if v8 == nil then
      v8 = v8:getString(key .. "#maxDiameter")
      if v8 == nil then
      end
    end
  end
  v6.isRoundbale = v7
  if v6.isRoundbale then
    local v7, v8 = v5(self.xmlFile, key, "width", "minWidth", "maxWidth")
    v6.minWidth = v7
    v6.maxWidth = v8
    v7, v8 = v5(self.xmlFile, key, "diameter", "minDiameter", "maxDiameter")
    v6.minDiameter = v7
    v6.maxDiameter = v8
  else
    v7, v8 = v5(self.xmlFile, key, "width", "minWidth", "maxWidth")
    v6.minWidth = v7
    v6.maxWidth = v8
    v7, v8 = v5(self.xmlFile, key, "height", "minHeight", "maxHeight")
    v6.minHeight = v7
    v6.maxHeight = v8
    v7, v8 = v5(self.xmlFile, key, "length", "minLength", "maxLength")
    v6.minLength = v7
    v6.maxLength = v8
  end
  v7 = v7:getValue(key .. "#mixedFillTypes", true)
  baleType.mixedFillTypes = v7
  v7 = v7:getValue(key .. "#fillUnitIndex", isSelected.fillUnitIndex)
  baleType.fillUnitIndex = v7
  baleType.changeObjects = {}
  ObjectChangeUtil.loadObjectChangeFromXML(self.xmlFile, key, baleType.changeObjects, self.components, self)
  self:loadBalePlacesFromXML(xmlFile, key, baleType)
  v7 = self:loadBaleLoaderAnimationsFromXML(xmlFile, key, baleType, isSelected.defaultAnimations)
  if not v7 then
    return false
  end
  return true
end
function BaleLoader.loadBaleLoaderAnimationsFromXML(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  isActiveForInputIgnoreSelection.animations = {}
  if isSelected ~= nil and not isSelected.animations then
  end
  local v7 = dt:getValue(isActiveForInput .. ".animations.platform#rotate", v5.rotatePlatform or "rotatePlatform")
  isActiveForInputIgnoreSelection.animations.rotatePlatform = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.platform#rotateBack", v5.rotatePlatformBack or "rotatePlatform")
  isActiveForInputIgnoreSelection.animations.rotatePlatformBack = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.platform#rotateEmpty", v5.rotatePlatformEmpty or "rotatePlatform")
  isActiveForInputIgnoreSelection.animations.rotatePlatformEmpty = v7
  local v10 = Utils.getNoNil(v5.rotatePlatformAllowPickup, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.rotatePlatformAllowPickup = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.baleGrabber#dropBaleReverseSpeed", v5.baleGrabberDropBaleReverseSpeed or 5)
  isActiveForInputIgnoreSelection.animations.baleGrabberDropBaleReverseSpeed = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.baleGrabber#dropToWork", v5.baleGrabberDropToWork)
  isActiveForInputIgnoreSelection.animations.baleGrabberDropToWork = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.baleGrabber#workToDrop", v5.baleGrabberWorkToDrop or "baleGrabberWorkToDrop")
  isActiveForInputIgnoreSelection.animations.baleGrabberWorkToDrop = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.baleGrabber#dropBale", v5.baleGrabberDropBale or "baleGrabberDropBale")
  isActiveForInputIgnoreSelection.animations.baleGrabberDropBale = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.baleGrabber#transportToWork", v5.baleGrabberTransportToWork or "baleGrabberTransportToWork")
  isActiveForInputIgnoreSelection.animations.baleGrabberTransportToWork = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.pusher#emptyHide", v5.pusherEmptyHide1 or "emptyHidePusher1")
  isActiveForInputIgnoreSelection.animations.pusherEmptyHide1 = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.pusher#moveToEmpty", v5.pusherMoveToEmpty or "moveBalePusherToEmpty")
  isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty = v7
  v10 = Utils.getNoNil(v5.pusherHideOnEmpty, true)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.pusherHideOnEmpty = v7
  v10 = Utils.getNoNil(v5.pusherPushBalesOnEmpty, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.pusherPushBalesOnEmpty = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.releaseFrontPlatform#name", v5.releaseFrontPlatform or "releaseFrontplattform")
  isActiveForInputIgnoreSelection.animations.releaseFrontPlatform = v7
  v10 = Utils.getNoNil(v5.releaseFrontPlatformFillLevelSpeed, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.releaseFrontPlatformFillLevelSpeed = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#name", v5.moveBalePlaces or "moveBalePlaces")
  isActiveForInputIgnoreSelection.animations.moveBalePlaces = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#extrasOnce", v5.moveBalePlacesExtrasOnce or "moveBalePlacesExtrasOnce")
  isActiveForInputIgnoreSelection.animations.moveBalePlacesExtrasOnce = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#empty", v5.moveBalePlacesToEmpty or "moveBalePlacesToEmpty")
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmpty = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#emptySpeed", v5.moveBalePlacesToEmptySpeed or 1.5)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptySpeed = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#emptyReverseSpeed", v5.moveBalePlacesToEmptyReverseSpeed or -1)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyReverseSpeed = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.moveBalePlaces#pushOffset", v5.moveBalePlacesToEmptyPushOffset or 0)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffset = v7
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffsetDelay = 0
  isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffsetTime = 0
  v10 = Utils.getNoNil(v5.moveBalePlacesAfterRotatePlatform, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesAfterRotatePlatform = v7
  v10 = Utils.getNoNil(v5.moveBalePlacesResetOnSink, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesResetOnSink = v7
  if not v5.moveBalePlacesMaxGrabberTime then
  end
  v7 = dt:getValue(v9, v10)
  v6.moveBalePlacesMaxGrabberTime = v7
  v10 = Utils.getNoNil(v5.moveBalePlacesAlways, false)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.moveBalePlacesAlways = v7
  v7 = dt:getValue(isActiveForInput .. ".animations.emptyRotate#name", v5.emptyRotate or "emptyRotate")
  isActiveForInputIgnoreSelection.animations.emptyRotate = v7
  v10 = Utils.getNoNil(v5.emptyRotateReset, true)
  v7 = dt:getValue(...)
  isActiveForInputIgnoreSelection.animations.emptyRotateReset = v7
  v7 = dt:getValue(isActiveForInput .. ".animations#frontBalePusher", v5.frontBalePusher or "frontBalePusher")
  isActiveForInputIgnoreSelection.animations.frontBalePusher = v7
  v7 = dt:getValue(isActiveForInput .. ".animations#balesToOtherRow", v5.balesToOtherRow or "balesToOtherRow")
  isActiveForInputIgnoreSelection.animations.balesToOtherRow = v7
  v7 = dt:getValue(isActiveForInput .. ".animations#closeGrippers", v5.closeGrippers or "closeGrippers")
  isActiveForInputIgnoreSelection.animations.closeGrippers = v7
  return true
end
function BaleLoader:loadBalePlacesFromXML(xmlFile, key, target)
  target.startBalePlace = {bales = {}}
  local v6 = v6:getValue(key .. ".balePlaces#startBalePlace", nil, self.components, self.i3dMappings)
  target.startBalePlace.node = v6
  if target.startBalePlace.node ~= nil then
    v6 = getNumOfChildren(target.startBalePlace.node)
    target.startBalePlace.numOfPlaces = v6
    if target.startBalePlace.numOfPlaces == 0 then
      target.startBalePlace.node = nil
      -- goto L118  (LOP_JUMP +61)
    end
    target.startBalePlace.origRot = {}
    target.startBalePlace.origTrans = {}
    -- TODO: structure LOP_FORNPREP (pc 75, target 118)
    local v8 = getChildAt(target.startBalePlace.node, 1 - 1)
    local v11 = getRotation(v8)
    target.startBalePlace.origRot[1] = {}
    v11 = getTranslation(v8)
    target.startBalePlace.origTrans[1] = {}
    -- TODO: structure LOP_FORNLOOP (pc 110, target 76)
  else
    target.startBalePlace.numOfPlaces = 0
  end
  target.startBalePlace.count = 0
  target.startBalePlace.current = 1
  target.balePlaces = {}
  while true do
    v6 = string.format("%s.balePlaces.balePlace(%d)", key, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#node", nil, self.components, self.i3dMappings)
    if v7 ~= nil then
      table.insert(target.balePlaces, {node = v7})
    end
  end
  if #target.balePlaces == 0 then
  end
  return isSelected
end
function BaleLoader:createBaleToBaleJoints(baleLines)
  if 1 < #baleLines then
    for v8, v9 in ipairs(baleLines) do
      if isActiveForInput.connectedRows[v8] then
        -- TODO: structure LOP_FORNPREP (pc 28, target 70)
        if v9[1].isRoundbale then
          self:createBaleToBaleJoint(v9[1], v9[1 + 1], 0, isActiveForInput.heightOffset, v9[1].width + isActiveForInput.widthOffset, isActiveForInputIgnoreSelection, 0, 0, 1)
        else
          self:createBaleToBaleJoint(v9[1], v9[1 + 1], v9[1].width + isActiveForInput.widthOffset, isActiveForInput.heightOffset, 0, 0, 0, isActiveForInputIgnoreSelection * 5, 1)
        end
        -- TODO: structure LOP_FORNLOOP (pc 69, target 29)
      end
      for v14, jointIndex in ipairs(isActiveForInput.interConnectedRowStarts) do
        if not (jointIndex[1] == v8) then
          continue
        end
        if not (baleLines[jointIndex[2]] ~= nil) then
          continue
        end
        if v10 then
          self:createBaleToBaleJoint(v9[1], baleLines[jointIndex[2]][1], v9[1].diameter + isActiveForInput.diameterOffset, isActiveForInput.heightOffset, 0, isSelected, isSelected, isSelected, 1)
        else
          self:createBaleToBaleJoint(v9[1], baleLines[jointIndex[2]][1], 0, v9[1].height + 0.05, 0, isActiveForInputIgnoreSelection, 0, 0, 1)
        end
      end
      for v14, jointIndex in ipairs(isActiveForInput.interConnectedRowEnds) do
        if not (jointIndex[1] == v8) then
          continue
        end
        if not (baleLines[jointIndex[2]] ~= nil) then
          continue
        end
        if not (#v9 == #baleLines[jointIndex[2]]) then
          continue
        end
        if v10 then
          self:createBaleToBaleJoint(v9[#v9], baleLines[jointIndex[2]][#baleLines[jointIndex[2]]], v9[#v9].diameter + isActiveForInput.diameterOffset, isActiveForInput.heightOffset, 0, isSelected, isSelected, isSelected, #v9)
        else
          self:createBaleToBaleJoint(v9[#v9], baleLines[jointIndex[2]][#baleLines[jointIndex[2]]], 0, v9[#v9].height + 0.05, 0, isActiveForInputIgnoreSelection, 0, 0, #v9)
        end
      end
    end
  end
end
function BaleLoader:createBaleToBaleJoint(bale1, bale2, x, y, z, rx, ry, rz, balePlaceIndex)
  local constr = JointConstructor.new()
  constr:setActors(bale1.nodeId, bale2.nodeId)
  local v13 = createTransformGroup("jointTransform1")
  link(bale1.nodeId, v13)
  local v16 = localRotationToLocal(self.spec_baleLoader.balePlaces[balePlaceIndex].node, bale1.nodeId, 0, 0, 0)
  setRotation(...)
  local v14 = createTransformGroup("jointTransform2")
  link(bale2.nodeId, v14)
  local v17 = localRotationToLocal(self.spec_baleLoader.balePlaces[balePlaceIndex].node, bale2.nodeId, 0, 0, 0)
  setRotation(...)
  constr:setJointTransforms(v13, v14)
  constr:setEnableCollision(true)
  constr:setRotationLimit(0, -rx, rx)
  constr:setRotationLimit(1, -ry, ry)
  constr:setRotationLimit(2, -rz, rz)
  constr:setTranslationLimit(0, true, -x, x)
  constr:setTranslationLimit(1, true, -y, y)
  constr:setTranslationLimit(2, true, -z, z)
  local jointIndex = constr:finalize()
  table.insert(self.spec_baleLoader.baleJoints, jointIndex)
end
function BaleLoader:doStateChange(id, nearestBaleServerId)
  if id == BaleLoader.CHANGE_DROP_BALES then
    if self.spec_baleLoader.startBalePlace ~= nil then
      self.spec_baleLoader.startBalePlace.current = 1
    end
    if isActiveForInputIgnoreSelection.balePacker.node ~= nil and isActiveForInputIgnoreSelection.balePacker.filename == nil then
    end
    for v12, v13 in pairs(isActiveForInputIgnoreSelection.balePlaces) do
      if not (v13.bales ~= nil) then
        continue
      end
      for v17, v18 in pairs(v13.bales) do
        local v19 = NetworkUtil.getObject(v18)
        if v19 ~= nil then
          if isActiveForInputIgnoreSelection.dynamicMount.enabled then
            self:unmountDynamicBale(v19)
          else
            self:unmountBale(v19)
          end
          v19:setCanBeSold(true)
          if isActiveForInputIgnoreSelection.baleGrabber.balesInTrigger[v19] ~= nil then
            isActiveForInputIgnoreSelection.baleGrabber.balesInTrigger[v19] = nil
          end
          if isActiveForInputIgnoreSelection.dynamicBaleUnloading.enabled then
            if isSelected[v17] == nil then
              table.insert(isSelected, {v19})
            else
              table.insert(isSelected[v17], v19)
            end
          end
          if v5 then
            v19:delete()
          end
        end
        isActiveForInputIgnoreSelection.balesToMount[v18] = nil
      end
      v13.bales = nil
    end
    if self.isServer and v5 then
      v9 = PackedBale.new(self.isServer, self.isClient)
      v10, v11, v12 = getWorldTranslation(isActiveForInputIgnoreSelection.balePacker.node)
      v13, v14, jointIndex = getWorldRotation(isActiveForInputIgnoreSelection.balePacker.node)
      v16 = v9:loadFromConfigXML(isActiveForInputIgnoreSelection.balePacker.filename, v10, v11, v12, v13, v14, jointIndex)
      if v16 then
        v9:setFillType(v7)
        v9:setFillLevel(v8)
        v9:setOwnerFarmId(v6, true)
        v9:register()
        removeFromPhysics(v9.nodeId)
        addToPhysics(v9.nodeId)
      end
    end
    if isActiveForInputIgnoreSelection.dynamicBaleUnloading.enabled then
      self:createBaleToBaleJoints(isSelected)
    end
    if isActiveForInputIgnoreSelection.animations.releaseFrontPlatformFillLevelSpeed then
      v12 = self:getFillUnitFillLevel(isActiveForInputIgnoreSelection.fillUnitIndex)
      v13 = self:getFillUnitCapacity(isActiveForInputIgnoreSelection.fillUnitIndex)
    end
    v12 = self:getOwnerFarmId()
    jointIndex = self:getFillUnitFirstSupportedFillType(isActiveForInputIgnoreSelection.fillUnitIndex)
    self:addFillUnitFillLevel(v12, isActiveForInputIgnoreSelection.fillUnitIndex, -math.huge, jointIndex, ToolType.UNDEFINED, nil)
    if self.isServer and isActiveForInputIgnoreSelection.unloadingMover.trigger ~= nil then
      isActiveForInputIgnoreSelection.unloadingMover.isActive = true
      isActiveForInputIgnoreSelection.unloadingMover.frameDelay = 3
      -- TODO: structure LOP_FORNPREP (pc 279, target 293)
      setFrictionVelocity(isActiveForInputIgnoreSelection.unloadingMover.nodes[1].node, isActiveForInputIgnoreSelection.unloadingMover.nodes[1].speed)
      -- TODO: structure LOP_FORNLOOP (pc 292, target 280)
      if self.isClient then
        v10:startAnimations(isActiveForInputIgnoreSelection.unloadingMover.animationNodes)
        v10:playSample(isActiveForInputIgnoreSelection.samples.unload)
      end
      self:raiseDirtyFlags(isActiveForInputIgnoreSelection.unloadingMover.dirtyFlag)
    end
    self:playAnimation(isActiveForInputIgnoreSelection.animations.releaseFrontPlatform, v9, nil, true)
    self:playAnimation(isActiveForInputIgnoreSelection.animations.closeGrippers, -1, nil, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_WAIT_TO_SINK
    return
  end
  if id == BaleLoader.CHANGE_SINK then
    if isActiveForInputIgnoreSelection.animations.emptyRotateReset then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.emptyRotate, -1, nil, true)
    end
    self:playAnimation(isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmpty, isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyReverseSpeed, nil, true)
    if isActiveForInputIgnoreSelection.animations.moveBalePlacesResetOnSink then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.moveBalePlaces, -999999, nil, true)
    end
    self:playAnimation(isActiveForInputIgnoreSelection.animations.pusherEmptyHide1, -1, nil, true)
    self:playAnimation(isActiveForInputIgnoreSelection.animations.rotatePlatformEmpty, -1, nil, true)
    if not isActiveForInputIgnoreSelection.isInWorkPosition then
      local v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.animations.closeGrippers)
      self:playAnimation(isActiveForInputIgnoreSelection.animations.closeGrippers, 1, v8, true)
    end
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_SINK
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_REDO then
    self:playAnimation(isActiveForInputIgnoreSelection.animations.emptyRotate, 1, nil, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_ROTATE2
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_START then
    if GS_IS_MOBILE_VERSION then
      local isSelected = isSelected:getActionControllerDirection()
      if 0 < isSelected then
        isSelected:startActionSequence()
      end
      isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_TO_WORK
      return
    end
    BaleLoader.moveToWorkPosition(self)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_TO_WORK
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_CANCEL then
    self:playAnimation(isActiveForInputIgnoreSelection.animations.emptyRotate, -1, nil, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_CANCEL
    return
  end
  if id == BaleLoader.CHANGE_MOVE_TO_TRANSPORT then
    -- if not v3.isInWorkPosition then goto L2152 end
    isActiveForInputIgnoreSelection.grabberIsMoving = true
    isActiveForInputIgnoreSelection.isInWorkPosition = false
    isSelected:stopAnimations(isActiveForInputIgnoreSelection.animationNodes)
    isSelected:stopSample(isActiveForInputIgnoreSelection.samples.work)
    BaleLoader.moveToTransportPosition(self)
    return
  end
  if id == BaleLoader.CHANGE_MOVE_TO_WORK then
    -- if v3.isInWorkPosition then goto L2152 end
    isActiveForInputIgnoreSelection.grabberIsMoving = true
    isActiveForInputIgnoreSelection.isInWorkPosition = true
    if not isActiveForInputIgnoreSelection.animationNodesBlocked then
      isSelected:startAnimations(isActiveForInputIgnoreSelection.animationNodes)
      isSelected:playSample(isActiveForInputIgnoreSelection.samples.work)
    end
    BaleLoader.moveToWorkPosition(self)
    return
  end
  if id == BaleLoader.CHANGE_GRAB_BALE then
    isSelected = NetworkUtil.getObject(nearestBaleServerId)
    isActiveForInputIgnoreSelection.baleGrabber.currentBale = nearestBaleServerId
    if isSelected ~= nil then
      if isActiveForInputIgnoreSelection.dynamicMount.enabled then
        self:mountDynamicBale(isSelected, isActiveForInputIgnoreSelection.baleGrabber.grabNode)
      else
        self:mountBale(isSelected, self, isActiveForInputIgnoreSelection.baleGrabber.grabNode, 0, 0, 0, 0, 0, 0, true)
      end
      isSelected:setCanBeSold(false)
      local v5 = self:getBaleTypeByBale(isSelected)
      if v5 ~= nil then
        self:setBaleLoaderBaleType(v5.index)
      end
      isActiveForInputIgnoreSelection.balesToMount[nearestBaleServerId] = nil
    else
      isActiveForInputIgnoreSelection.balesToMount[nearestBaleServerId] = {serverId = nearestBaleServerId, linkNode = isActiveForInputIgnoreSelection.baleGrabber.grabNode, trans = {0, 0, 0}, rot = {0, 0, 0}}
    end
    isActiveForInputIgnoreSelection.grabberMoveState = BaleLoader.GRAB_MOVE_UP
    self:playAnimation(isActiveForInputIgnoreSelection.animations.baleGrabberWorkToDrop, 1, nil, true)
    local v7 = self:getOwnerFarmId()
    v10 = self:getFillUnitFirstSupportedFillType(isActiveForInputIgnoreSelection.fillUnitIndex)
    self:addFillUnitFillLevel(v7, isActiveForInputIgnoreSelection.fillUnitIndex, 1, v10, ToolType.UNDEFINED, nil)
    -- if not v0.isClient then goto L2152 end
    v5:playSample(isActiveForInputIgnoreSelection.samples.grab)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L2152
    v8 = isSelected:getFillType()
    v5:setFillType(...)
    v5:startEffects(isActiveForInputIgnoreSelection.grabberEffects)
    isActiveForInputIgnoreSelection.grabberEffectDisableTime = g_currentMission.time + isActiveForInputIgnoreSelection.grabberEffectDisableDuration
    return
  end
  if id == BaleLoader.CHANGE_GRAB_MOVE_UP then
    isSelected = self:getBaleGrabberDropBaleAnimName()
    isActiveForInputIgnoreSelection.currentBaleGrabberDropBaleAnimName = isSelected
    self:playAnimation(isActiveForInputIgnoreSelection.currentBaleGrabberDropBaleAnimName, 1, nil, true)
    isActiveForInputIgnoreSelection.grabberMoveState = BaleLoader.GRAB_DROP_BALE
    return
  end
  if id == BaleLoader.CHANGE_GRAB_DROP_BALE then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L2152
    -- if v3.startBalePlace.count >= v3.startBalePlace.numOfPlaces then goto L2152 end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L2152
    isSelected = getChildAt(isActiveForInputIgnoreSelection.startBalePlace.node, isActiveForInputIgnoreSelection.startBalePlace.count)
    v5 = NetworkUtil.getObject(isActiveForInputIgnoreSelection.baleGrabber.currentBale)
    if v5 ~= nil then
      if isActiveForInputIgnoreSelection.dynamicMount.enabled then
        self:mountDynamicBale(v5, isSelected)
      else
        if isActiveForInputIgnoreSelection.keepBaleRotationDuringLoad then
          v9, v10, v11 = localRotationToLocal(v5.nodeId, isSelected, 0, 0, 0)
        end
        self:mountBale(v5, self, isSelected, 0, 0, 0, v6, v7, v8)
      end
      isActiveForInputIgnoreSelection.balesToMount[isActiveForInputIgnoreSelection.baleGrabber.currentBale] = nil
    else
      isActiveForInputIgnoreSelection.balesToMount[isActiveForInputIgnoreSelection.baleGrabber.currentBale] = {serverId = isActiveForInputIgnoreSelection.baleGrabber.currentBale, linkNode = isSelected, trans = {0, 0, 0}, rot = {0, 0, 0}}
    end
    isActiveForInputIgnoreSelection.startBalePlace.count = isActiveForInputIgnoreSelection.startBalePlace.count + 1
    table.insert(isActiveForInputIgnoreSelection.startBalePlace.bales, isActiveForInputIgnoreSelection.baleGrabber.currentBale)
    isActiveForInputIgnoreSelection.baleGrabber.currentBale = nil
    self:updateFoldingAnimation()
    if isActiveForInputIgnoreSelection.startBalePlace.count < isActiveForInputIgnoreSelection.startBalePlace.numOfPlaces then
      isActiveForInputIgnoreSelection.frontBalePusherDirection = 1
      self:playAnimation(isActiveForInputIgnoreSelection.animations.balesToOtherRow, 1, nil, true)
      self:playAnimation(isActiveForInputIgnoreSelection.animations.frontBalePusher, 1, nil, true)
    elseif isActiveForInputIgnoreSelection.startBalePlace.count == isActiveForInputIgnoreSelection.startBalePlace.numOfPlaces then
      BaleLoader.rotatePlatform(self)
    end
    if isActiveForInputIgnoreSelection.animations.baleGrabberDropToWork ~= nil then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.baleGrabberDropToWork, 1, 0, true)
    else
      self:playAnimation(isActiveForInputIgnoreSelection.currentBaleGrabberDropBaleAnimName, -isActiveForInputIgnoreSelection.animations.baleGrabberDropBaleReverseSpeed, nil, true)
      self:playAnimation(isActiveForInputIgnoreSelection.animations.baleGrabberWorkToDrop, -1, nil, true)
    end
    isActiveForInputIgnoreSelection.grabberMoveState = BaleLoader.GRAB_MOVE_DOWN
    return
  end
  if id == BaleLoader.CHANGE_GRAB_MOVE_DOWN then
    isActiveForInputIgnoreSelection.grabberMoveState = nil
    return
  end
  if id == BaleLoader.CHANGE_FRONT_PUSHER then
    if 0 < isActiveForInputIgnoreSelection.frontBalePusherDirection then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.frontBalePusher, -1, nil, true)
      isActiveForInputIgnoreSelection.frontBalePusherDirection = -1
      return
    end
    isActiveForInputIgnoreSelection.frontBalePusherDirection = 0
    return
  end
  if id == BaleLoader.CHANGE_ROTATE_PLATFORM then
    if isActiveForInputIgnoreSelection.startBalePlace ~= nil and 0 < isActiveForInputIgnoreSelection.rotatePlatformDirection then
      isActiveForInputIgnoreSelection.startBalePlace.current = isActiveForInputIgnoreSelection.startBalePlace.current + 1
      v8 = table.getn(isActiveForInputIgnoreSelection.startBalePlace.bales)
      -- TODO: structure LOP_FORNPREP (pc 1142, target 1258)
      v8 = getChildAt(isActiveForInputIgnoreSelection.startBalePlace.node, 1 - 1)
      v9, v10, v11 = getTranslation(v8)
      v12, v13, v14 = getRotation(v8)
      v16 = NetworkUtil.getObject(isActiveForInputIgnoreSelection.startBalePlace.bales[1])
      if v16 ~= nil then
        if isActiveForInputIgnoreSelection.keepBaleRotationDuringLoad then
          v17, v18, v19 = localToLocal(v16.nodeId, isActiveForInputIgnoreSelection.balePlaces[isActiveForInputIgnoreSelection.startBalePlace.current].node, 0, 0, 0)
          v17, v18, v19 = localRotationToLocal(v16.nodeId, isActiveForInputIgnoreSelection.balePlaces[isActiveForInputIgnoreSelection.startBalePlace.current].node, 0, 0, 0)
        end
        if isActiveForInputIgnoreSelection.dynamicMount.enabled then
          self:mountDynamicBale(v16, isSelected.node)
        else
          self:mountBale(v16, self, isSelected.node, v9, v10, v11, v12, v13, v14)
        end
        isActiveForInputIgnoreSelection.balesToMount[jointIndex] = nil
      else
        isActiveForInputIgnoreSelection.balesToMount[isActiveForInputIgnoreSelection.startBalePlace.bales[1]] = {serverId = isActiveForInputIgnoreSelection.startBalePlace.bales[1], linkNode = isActiveForInputIgnoreSelection.balePlaces[isActiveForInputIgnoreSelection.startBalePlace.current].node, trans = {v9, v10, v11}, rot = {v12, v13, v14}}
      end
      -- TODO: structure LOP_FORNLOOP (pc 1257, target 1143)
      isSelected.bales = isActiveForInputIgnoreSelection.startBalePlace.bales
      isActiveForInputIgnoreSelection.startBalePlace.bales = {}
      isActiveForInputIgnoreSelection.startBalePlace.count = 0
      self:updateFoldingAnimation()
      -- TODO: structure LOP_FORNPREP (pc 1284, target 1320)
      v8 = getChildAt(isActiveForInputIgnoreSelection.startBalePlace.node, 1 - 1)
      v11 = unpack(isActiveForInputIgnoreSelection.startBalePlace.origRot[1])
      setRotation(...)
      v11 = unpack(isActiveForInputIgnoreSelection.startBalePlace.origTrans[1])
      setTranslation(...)
      -- TODO: structure LOP_FORNLOOP (pc 1319, target 1285)
      if isActiveForInputIgnoreSelection.emptyState == BaleLoader.EMPTY_NONE then
        v5 = self:getAnimationTime(isActiveForInputIgnoreSelection.animations.baleGrabberWorkToDrop)
        if v5 >= isActiveForInputIgnoreSelection.animations.moveBalePlacesMaxGrabberTime then
          -- if v3.animations.moveBalePlacesMaxGrabberTime ~= math.huge then goto L1431 end
        end
        isActiveForInputIgnoreSelection.rotatePlatformDirection = -1
        self:playAnimation(isActiveForInputIgnoreSelection.animations.rotatePlatformBack, -1, nil, true)
        -- if not v3.animations.moveBalePlacesAfterRotatePlatform then goto L2152 end
        local v6 = table.getn(isActiveForInputIgnoreSelection.balePlaces)
        if isActiveForInputIgnoreSelection.startBalePlace.current > v6 then
          -- if not v3.animations.moveBalePlacesAlways then goto L2152 end
        end
        v11 = table.getn(isActiveForInputIgnoreSelection.balePlaces)
        self:playAnimation(isActiveForInputIgnoreSelection.animations.moveBalePlaces, 1, (isActiveForInputIgnoreSelection.startBalePlace.current - 1) / v11, true)
        v10 = table.getn(isActiveForInputIgnoreSelection.balePlaces)
        self:setAnimationStopTime(isActiveForInputIgnoreSelection.animations.moveBalePlaces, isActiveForInputIgnoreSelection.startBalePlace.current / v10)
        self:playAnimation(isActiveForInputIgnoreSelection.animations.moveBalePlacesExtrasOnce, 1, nil, true)
        return
        isActiveForInputIgnoreSelection.rotatePlatformDirection = -1
        isActiveForInputIgnoreSelection.moveBalePlacesDelayedMovement = true
        return
      end
      isActiveForInputIgnoreSelection.rotatePlatformDirection = 0
      return
    end
    isActiveForInputIgnoreSelection.rotatePlatformDirection = 0
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_ROTATE_PLATFORM then
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_ROTATE_PLATFORM
    if isActiveForInputIgnoreSelection.startBalePlace ~= nil and isActiveForInputIgnoreSelection.startBalePlace.count == 0 then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.rotatePlatformEmpty, 1, nil, true)
      return
    end
    BaleLoader.rotatePlatform(self)
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_ROTATE1 then
    self:playAnimation(isActiveForInputIgnoreSelection.animations.emptyRotate, 1, nil, true)
    self:setAnimationStopTime(isActiveForInputIgnoreSelection.animations.emptyRotate, 0.2)
    isSelected = self:getRealAnimationTime(isActiveForInputIgnoreSelection.animations.moveBalePlaces)
    if isActiveForInputIgnoreSelection.animations.pusherPushBalesOnEmpty then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L1587
      if #isActiveForInputIgnoreSelection.startBalePlace.bales == 0 then
      end
      v7 = self:getAnimationDuration(isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmpty)
      if 0 < v7 then
      end
      self:playAnimation(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty, isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptySpeed * (1 - v6 / #isActiveForInputIgnoreSelection.balePlaces) / v8, 0, true)
      self:setAnimationStopTime(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty, 1 - v6 / #isActiveForInputIgnoreSelection.balePlaces)
    else
      v7 = self:getAnimationDuration(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty)
      if 0 < v7 then
      end
      self:playAnimation(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty, isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptySpeed, v6, true)
    end
    if isActiveForInputIgnoreSelection.balePlaces[isActiveForInputIgnoreSelection.startBalePlace.current - 1] ~= nil and #isActiveForInputIgnoreSelection.balePlaces[isActiveForInputIgnoreSelection.startBalePlace.current - 1].bales < isActiveForInputIgnoreSelection.startBalePlace.numOfPlaces then
    end
    if 0 < isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffset then
      -- if not v6 then goto L1667 end
      v12 = self:getAnimationDuration(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty)
      isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffsetDelay = isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffset * v12 / v5
      isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffsetTime = isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptyPushOffsetDelay
    else
      v9 = self:getAnimationDuration(isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmpty)
      if 0 < v9 then
      end
      self:playAnimation(isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmpty, isActiveForInputIgnoreSelection.animations.moveBalePlacesToEmptySpeed, v8, true)
    end
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_ROTATE1
    -- if not v0.isClient then goto L2152 end
    v8:playSample(isActiveForInputIgnoreSelection.samples.emptyRotate)
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_CLOSE_GRIPPERS then
    self:playAnimation(isActiveForInputIgnoreSelection.animations.closeGrippers, 1, nil, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_CLOSE_GRIPPERS
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_HIDE_PUSHER1 then
    self:playAnimation(isActiveForInputIgnoreSelection.animations.pusherEmptyHide1, 1, nil, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_HIDE_PUSHER1
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_HIDE_PUSHER2 then
    if isActiveForInputIgnoreSelection.animations.pusherHideOnEmpty then
      self:playAnimation(isActiveForInputIgnoreSelection.animations.pusherMoveToEmpty, -2, nil, true)
      isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_HIDE_PUSHER2
      return
    end
    -- if not v0.isServer then goto L2152 end
    v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_ROTATE2)
    isSelected:broadcastEvent(v6, true, nil, self)
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_ROTATE2 then
    v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.animations.emptyRotate)
    self:playAnimation(isActiveForInputIgnoreSelection.animations.emptyRotate, 1, v8, true)
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_ROTATE2
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_WAIT_TO_DROP then
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_WAIT_TO_DROP
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_STATE_NIL then
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_NONE
    if GS_IS_MOBILE_VERSION then
      isSelected = isSelected:getActionControllerDirection()
      -- if v4 >= 0 then goto L1906 end
      isSelected:startActionSequence()
    elseif isActiveForInputIgnoreSelection.transportPositionAfterUnloading then
      BaleLoader.moveToTransportPosition(self)
      if self.isServer then
        v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_MOVE_TO_TRANSPORT)
        isSelected:broadcastEvent(v6, true, nil, self)
      end
    end
    isActiveForInputIgnoreSelection.automaticUnloadingInProgress = false
    return
  end
  if id == BaleLoader.CHANGE_EMPTY_WAIT_TO_REDO then
    isActiveForInputIgnoreSelection.emptyState = BaleLoader.EMPTY_WAIT_TO_REDO
    return
  end
  if id == BaleLoader.CHANGE_BUTTON_EMPTY then
    assert(self.isServer)
    if isActiveForInputIgnoreSelection.emptyState ~= BaleLoader.EMPTY_NONE then
      if isActiveForInputIgnoreSelection.emptyState == BaleLoader.EMPTY_WAIT_TO_DROP then
        v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_DROP_BALES)
        isSelected:broadcastEvent(v6, true, nil, self)
        return
      end
      if isActiveForInputIgnoreSelection.emptyState == BaleLoader.EMPTY_WAIT_TO_SINK then
        -- if v3.unloadingMover.isActive then goto L2152 end
        v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_SINK)
        isSelected:broadcastEvent(v6, true, nil, self)
        return
      end
      -- if v3.emptyState ~= BaleLoader.EMPTY_WAIT_TO_REDO then goto L2152 end
      v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_REDO)
      isSelected:broadcastEvent(v6, true, nil, self)
      return
    end
    isSelected = BaleLoader.getAllowsStartUnloading(self)
    -- if not v4 then goto L2152 end
    v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_START)
    isSelected:broadcastEvent(v6, true, nil, self)
    return
  end
  if id == BaleLoader.CHANGE_BUTTON_EMPTY_ABORT then
    assert(self.isServer)
    -- if v3.emptyState == BaleLoader.EMPTY_NONE then goto L2152 end
    -- if v3.emptyState ~= BaleLoader.EMPTY_WAIT_TO_DROP then goto L2152 end
    v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_EMPTY_CANCEL)
    isSelected:broadcastEvent(v6, true, nil, self)
    return
  end
  if id == BaleLoader.CHANGE_BUTTON_WORK_TRANSPORT then
    assert(self.isServer)
    if isActiveForInputIgnoreSelection.emptyState == BaleLoader.EMPTY_NONE and isActiveForInputIgnoreSelection.grabberMoveState == nil then
      if isActiveForInputIgnoreSelection.isInWorkPosition then
        v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_MOVE_TO_TRANSPORT)
        isSelected:broadcastEvent(v6, true, nil, self)
        return
      end
      v6 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_MOVE_TO_WORK)
      isSelected:broadcastEvent(v6, true, nil, self)
    end
  end
end
function BaleLoader:getAllowsStartUnloading()
  local nearestBaleServerId = self:getFillUnitFillLevel(self.spec_baleLoader.fillUnitIndex)
  if nearestBaleServerId == 0 then
    return false
  end
  if id.rotatePlatformDirection ~= 0 then
    return false
  end
  if id.frontBalePusherDirection ~= 0 then
    return false
  end
  if not id.grabberIsMoving then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L32
  end
  return false
  if id.emptyState ~= BaleLoader.EMPTY_NONE then
    return false
  end
  return true
end
function BaleLoader:rotatePlatform()
  self.spec_baleLoader.rotatePlatformDirection = 1
  self:playAnimation(self.spec_baleLoader.animations.rotatePlatform, 1, nil, true)
  if 1 < self.spec_baleLoader.startBalePlace.current then
    -- if not v0.spec_baleLoader.animations.moveBalePlacesAfterRotatePlatform then goto L32 end
  end
  if id.animations.moveBalePlacesAlways then
    local v8 = table.getn(id.balePlaces)
    self:playAnimation(id.animations.moveBalePlaces, 1, (id.startBalePlace.current - 1) / v8, true)
    local v7 = table.getn(id.balePlaces)
    self:setAnimationStopTime(id.animations.moveBalePlaces, id.startBalePlace.current / v7)
    self:playAnimation(id.animations.moveBalePlacesExtrasOnce, 1, nil, true)
  end
end
function BaleLoader:moveToWorkPosition(onLoad)
  if onLoad then
  end
  self:playBaleLoaderFoldingAnimation(isActiveForInputIgnoreSelection)
  local v5 = self:getAnimationTime(nearestBaleServerId.animations.closeGrippers)
  if v5 ~= 0 then
    v5 = self:getAnimationTime(nearestBaleServerId.animations.closeGrippers)
  end
  self:playAnimation(nearestBaleServerId.animations.closeGrippers, -1, isSelected, true)
end
function BaleLoader:moveToTransportPosition()
  self:playBaleLoaderFoldingAnimation(-1)
  local v7 = self:getAnimationTime(self.spec_baleLoader.animations.closeGrippers)
  local v6 = MathUtil.clamp(v7, 0, 1)
  self:playAnimation(self.spec_baleLoader.animations.closeGrippers, 1, v6, true)
end
function BaleLoader:getBaleGrabberDropBaleAnimName()
  local nearestBaleServerId = string.format("%s%d", self.spec_baleLoader.animations.baleGrabberDropBale, self.spec_baleLoader.startBalePlace.count)
  local isActiveForInputIgnoreSelection = self:getAnimationExists(nearestBaleServerId)
  if isActiveForInputIgnoreSelection then
    return nearestBaleServerId
  end
  return id.animations.baleGrabberDropBale
end
function BaleLoader:getIsBaleGrabbingAllowed()
  if not self.spec_baleLoader.isInWorkPosition then
    return false
  end
  if not id.grabberIsMoving then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L16
  end
  return false
  if id.startBalePlace.numOfPlaces <= id.startBalePlace.count then
    return false
  end
  if id.frontBalePusherDirection ~= 0 then
    return false
  end
  if not id.animations.rotatePlatformAllowPickup and id.rotatePlatformDirection ~= 0 then
    return false
  end
  if id.animations.moveBalePlacesAlways then
    local nearestBaleServerId = self:getIsAnimationPlaying(id.animations.moveBalePlaces)
    if nearestBaleServerId then
      return false
    end
  end
  if id.emptyState ~= BaleLoader.EMPTY_NONE then
    return false
  end
  nearestBaleServerId = self:getFillUnitFreeCapacity(id.fillUnitIndex)
  if nearestBaleServerId == 0 then
    return false
  end
  return true
end
function BaleLoader:pickupBale(nearestBale, nearestBaleType)
  self.spec_baleLoader.lastPickupTime = g_time
  self:setBaleLoaderBaleType(nearestBaleType.index)
  local v9 = NetworkUtil.getObjectId(nearestBale)
  local v6 = BaleLoaderStateEvent.new(...)
  isSelected:broadcastEvent(v6, true, nil, self)
end
function BaleLoader:setBaleLoaderBaleType(baleTypeIndex, forceUpdate)
  if not self.spec_baleLoader.baleTypes[baleTypeIndex] then
  end
  if isSelected ~= isActiveForInputIgnoreSelection.currentBaleType then
    isActiveForInputIgnoreSelection.currentBaleType = isSelected
    isActiveForInputIgnoreSelection.animations = isSelected.animations
    if not isActiveForInputIgnoreSelection.useSharedBalePlaces then
      if isSelected.startBalePlace.node ~= nil then
        isActiveForInputIgnoreSelection.startBalePlace = isSelected.startBalePlace
      else
        isActiveForInputIgnoreSelection.startBalePlace = isActiveForInputIgnoreSelection.defaultBalePlace.startBalePlace
      end
      if 0 < #isSelected.balePlaces then
        isActiveForInputIgnoreSelection.balePlaces = isSelected.balePlaces
      else
        isActiveForInputIgnoreSelection.balePlaces = isActiveForInputIgnoreSelection.defaultBalePlace.balePlaces
      end
    end
    isActiveForInputIgnoreSelection.fillUnitIndex = isSelected.fillUnitIndex
    -- TODO: structure LOP_FORNPREP (pc 65, target 85)
    local v9 = self:getFillUnitByIndex(isActiveForInputIgnoreSelection.baleTypes[1].fillUnitIndex)
    if isActiveForInputIgnoreSelection.baleTypes[1].fillUnitIndex ~= isActiveForInputIgnoreSelection.fillUnitIndex then
    end
    v9.showOnHud = true
    -- TODO: structure LOP_FORNLOOP (pc 84, target 66)
    ObjectChangeUtil.setObjectChanges(isSelected.changeObjects, true, self, self.setMovingToolDirty, forceUpdate)
  end
end
function BaleLoader:getBaleTypeByBale(bale)
  for v7, v8 in pairs(self.spec_baleLoader.baleTypes) do
    if v8.dimensions.isRoundbale then
      if not v8.dimensions.isRoundbale then
        continue
      end
      if not (v8.dimensions.minWidth <= bale.width) then
        continue
      end
      if not (bale.width <= v8.dimensions.maxWidth) then
        continue
      end
      if not (v8.dimensions.minDiameter <= bale.diameter) then
        continue
      end
      if not (bale.diameter <= v8.dimensions.maxDiameter) then
        continue
      end
      return v8
    else
      if not not v8.dimensions.isRoundbale then
        continue
      end
      if not (v8.dimensions.minWidth <= bale.width) then
        continue
      end
      if not (bale.width <= v8.dimensions.maxWidth) then
        continue
      end
      if not (v8.dimensions.minHeight <= bale.height) then
        continue
      end
      if not (bale.height <= v8.dimensions.maxHeight) then
        continue
      end
      if not (v8.dimensions.minLength <= bale.length) then
        continue
      end
      if not (bale.length <= v8.dimensions.maxLength) then
        continue
      end
      return v8
    end
  end
  return isActiveForInputIgnoreSelection
end
function BaleLoader:baleGrabberTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local rigidBodyType = getRigidBodyType(otherId)
    if self.isServer then
      -- if v7 == RigidBodyType.DYNAMIC then goto L20 end
    end
    if not self.isServer and rigidBodyType == RigidBodyType.KINEMATIC then
      local v8 = v8:getNodeObject(otherId)
      if v8 ~= nil then
        local v9 = v8:isa(Bale)
        if v9 then
          if onEnter then
            local v12 = Utils.getNoNil(self.spec_baleLoader.baleGrabber.balesInTrigger[v8], 0)
            self.spec_baleLoader.baleGrabber.balesInTrigger[v8] = v12 + 1
            return
          end
          if onLeave and v9.baleGrabber.balesInTrigger[v8] ~= nil then
            local v11 = math.max(0, v9.baleGrabber.balesInTrigger[v8] - 1)
            v9.baleGrabber.balesInTrigger[v8] = v11
            if v9.baleGrabber.balesInTrigger[v8] == 0 then
              v9.baleGrabber.balesInTrigger[v8] = nil
            end
          end
        end
      end
    end
  end
end
function BaleLoader:baleLoaderMoveTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local v7 = getRigidBodyType(otherId)
    if v7 == RigidBodyType.DYNAMIC then
      v7 = v7:getNodeObject(otherId)
      if v7 ~= nil then
        local v8 = v7:isa(Bale)
        if v8 then
          if onEnter then
            local v11 = Utils.getNoNil(self.spec_baleLoader.unloadingMover.balesInTrigger[v7], 0)
            self.spec_baleLoader.unloadingMover.balesInTrigger[v7] = v11 + 1
            -- cmp-jump LOP_JUMPXEQKN R9 aux=0x8000000f -> L98
            v7:addDeleteListener(self, "onBaleMoverBaleRemoved")
            return
          end
          if onLeave and v8.unloadingMover.balesInTrigger[v7] ~= nil then
            local v10 = math.max(0, v8.unloadingMover.balesInTrigger[v7] - 1)
            v8.unloadingMover.balesInTrigger[v7] = v10
            if v8.unloadingMover.balesInTrigger[v7] == 0 then
              v8.unloadingMover.balesInTrigger[v7] = nil
              v7:removeDeleteListener(self, "onBaleMoverBaleRemoved")
            end
          end
        end
      end
    end
  end
end
function BaleLoader:mountDynamicBale(bale, node)
  if self.isServer then
    if bale.dynamicMountJointIndex ~= nil and bale.baleLoaderDynamicJointNode ~= nil then
      local isSelected, v5, v6 = getWorldTranslation(bale.baleLoaderDynamicJointNode)
      local v7, v8, v9 = getWorldRotation(bale.baleLoaderDynamicJointNode)
      link(node, bale.baleLoaderDynamicJointNode)
      setWorldTranslation(bale.baleLoaderDynamicJointNode, isSelected, v5, v6)
      setWorldRotation(bale.baleLoaderDynamicJointNode, v7, v8, v9)
      setJointFrame(bale.dynamicMountJointIndex, 0, bale.baleLoaderDynamicJointNode)
      -- if not v0.spec_baleLoader.dynamicMount.jointInterpolation then goto L245 end
      table.insert(self.spec_baleLoader.dynamicMount.baleJointsToUpdate, {node = bale.baleLoaderDynamicJointNode, time = 0})
      return
    end
    isSelected = createTransformGroup("baleJoint")
    link(node, isSelected)
    bale.baleLoaderDynamicJointNode = isSelected
    if isActiveForInputIgnoreSelection.dynamicMount.jointInterpolation then
      v7 = getWorldTranslation(bale.nodeId)
      setWorldTranslation(...)
      v7 = getWorldRotation(bale.nodeId)
      setWorldRotation(...)
    else
      v5, v6, v7 = getWorldTranslation(isSelected)
      local v8, v9, v10, v11 = getWorldQuaternion(isSelected)
      removeFromPhysics(bale.nodeId)
      bale:setWorldPositionQuaternion(v5, v6, v7, v8, v9, v10, v11, true)
      addToPhysics(bale.nodeId)
      link(isSelected, bale.meshNode)
    end
    v5 = self:getParentComponent(node)
    bale:mountDynamic(self, v5, isSelected, DynamicMountUtil.TYPE_FIX_ATTACH, 0, false)
    if isActiveForInputIgnoreSelection.dynamicMount.minTransLimits ~= nil and isActiveForInputIgnoreSelection.dynamicMount.maxTransLimits ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 175, target 212)
      if isActiveForInputIgnoreSelection.dynamicMount.minTransLimits[1] == 0 and isActiveForInputIgnoreSelection.dynamicMount.maxTransLimits[1] == 0 then
      end
      if v9 then
        setJointTranslationLimit(bale.dynamicMountJointIndex, v8 - 1, v9, isActiveForInputIgnoreSelection.dynamicMount.minTransLimits[v8], isActiveForInputIgnoreSelection.dynamicMount.maxTransLimits[v8])
      end
      -- TODO: structure LOP_FORNLOOP (pc 211, target 176)
    end
    if isActiveForInputIgnoreSelection.dynamicMount.jointInterpolation then
      table.insert(isActiveForInputIgnoreSelection.dynamicMount.baleJointsToUpdate, {node = bale.baleLoaderDynamicJointNode, time = 0})
    end
    isActiveForInputIgnoreSelection.dynamicMount.baleMassDirty = true
    v6:removeItemToSave(bale)
  end
end
function BaleLoader:unmountDynamicBale(bale)
  if self.isServer then
    bale:unmountDynamic()
    if bale.baleLoaderDynamicJointNode ~= nil then
      delete(bale.baleLoaderDynamicJointNode)
      bale.baleLoaderDynamicJointNode = nil
    end
    nearestBaleServerId.dynamicMount.baleJointsToUpdate = {}
    if bale.backupMass ~= nil then
      setMass(bale.nodeId, bale.backupMass)
      bale.backupMass = nil
    end
    isActiveForInputIgnoreSelection:addItemToSave(bale)
  end
end
function BaleLoader:mountBale(bale, object, node, x, y, z, rx, ry, rz, noKinematicMounting)
  if self.spec_baleLoader.unloadingMover.balesInTrigger[bale] ~= nil then
    self.spec_baleLoader.unloadingMover.balesInTrigger[bale] = nil
  end
  if noKinematicMounting ~= true then
    -- if v11.allowKinematicMounting then goto L32 end
  end
  bale:mount(object, node, x, y, z, rx, ry, rz)
  return
  bale:mountKinematic(object, node, x, y, z, rx, ry, rz)
  local v12 = table.hasElement(v11.kinematicMountedBales, bale)
  if not v12 then
    self:setBalePairCollision(bale, false)
    table.addElement(v11.kinematicMountedBales, bale)
  end
end
function BaleLoader:unmountBale(bale)
  if bale.dynamicMountType == MountableObject.MOUNT_TYPE_DEFAULT then
    bale:unmount()
    return
  end
  if bale.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC then
    bale:unmountKinematic()
    table.removeElement(nearestBaleServerId.kinematicMountedBales, bale)
    self:setBalePairCollision(bale, true)
  end
end
function BaleLoader:setBalePairCollision(bale, state)
  -- TODO: structure LOP_FORNPREP (pc 7, target 20)
  setPairCollision(self.components[1].node, bale.nodeId, state)
  -- TODO: structure LOP_FORNLOOP (pc 19, target 8)
  -- TODO: structure LOP_FORNPREP (pc 25, target 38)
  setPairCollision(self.spec_baleLoader.kinematicMountedBales[1].nodeId, bale.nodeId, state)
  -- TODO: structure LOP_FORNLOOP (pc 37, target 26)
end
function BaleLoader:getLoadedBales()
  for v6, v7 in pairs(self.spec_baleLoader.balePlaces) do
    if not (v7.bales ~= nil) then
      continue
    end
    for v11, v12 in pairs(v7.bales) do
      local v13 = NetworkUtil.getObject(v12)
      if not (v13 ~= nil) then
        continue
      end
      table.insert(id, v13)
    end
  end
  for v6, v7 in ipairs(nearestBaleServerId.startBalePlace.bales) do
    v8 = NetworkUtil.getObject(v7)
    if not (v8 ~= nil) then
      continue
    end
    table.insert(id, v8)
  end
  return id
end
function BaleLoader:startAutomaticBaleUnloading()
  if self.spec_baleLoader.emptyState == BaleLoader.EMPTY_NONE then
    self.spec_baleLoader.automaticUnloadingInProgress = true
    local nearestBaleServerId = nearestBaleServerId:getServerConnection()
    local isSelected = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_BUTTON_EMPTY)
    nearestBaleServerId:sendEvent(...)
  end
end
function BaleLoader:getIsAutomaticBaleUnloadingInProgress()
  return self.spec_baleLoader.automaticUnloadingInProgress
end
function BaleLoader:getIsAutomaticBaleUnloadingAllowed()
  local id = self:getIsAutomaticBaleUnloadingInProgress()
  if id then
    return false
  end
  if g_time < self.spec_baleLoader.lastPickupTime + self.spec_baleLoader.lastPickupAutomatedUnloadingDelayTime then
    return false
  end
  id = BaleLoader.getAllowsStartUnloading(self)
  if not id then
    return false
  end
  return true
end
function BaleLoader:playBaleLoaderFoldingAnimation(speed)
  local animationName = self:getCurrentFoldingAnimation()
  local v8 = self:getAnimationTime(animationName)
  local v7 = MathUtil.clamp(v8, 0, 1)
  self:playAnimation(animationName, speed, v7, true)
end
function BaleLoader:getIsBaleLoaderFoldingPlaying()
  local isActiveForInputIgnoreSelection = self:getCurrentFoldingAnimation()
  return self:getIsAnimationPlaying(...)
end
function BaleLoader:getCurrentFoldingAnimation()
  if not self.spec_baleLoader.hasMultipleFoldingAnimations then
    return self.spec_baleLoader.animations.baleGrabberTransportToWork
  end
  return id.lastFoldingAnimation
end
function BaleLoader:updateFoldingAnimation()
  local isSelected = self:getFillUnitFillLevel(self.spec_baleLoader.fillUnitIndex)
  local isActiveForInputIgnoreSelection = MathUtil.round(...)
  if self.spec_baleLoader.currentBaleType ~= nil then
  end
  for v9, v10 in ipairs(id.foldingAnimations) do
    if v10.baleTypeIndex ~= 0 and not (v10.baleTypeIndex == v5) then
      continue
    end
    if not (v10.minFillLevel <= isActiveForInputIgnoreSelection) then
      continue
    end
    if not (isActiveForInputIgnoreSelection <= v10.maxFillLevel) then
      continue
    end
    if not (v10.minBalePlace <= isSelected) then
      continue
    end
    if not (isSelected <= v10.maxBalePlace) then
      continue
    end
    break
  end
  if nearestBaleServerId ~= id.lastFoldingAnimation then
    if id.lastFoldingAnimation ~= nil then
      v6 = self:getAnimationTime(id.lastFoldingAnimation)
      self:setAnimationTime(nearestBaleServerId, v6, false)
    end
    id.lastFoldingAnimation = nearestBaleServerId
  end
end
function BaleLoader:onBaleMoverBaleRemoved(bale)
  self.spec_baleLoader.unloadingMover.balesInTrigger[bale] = nil
end
function BaleLoader:onBaleUnloadTriggerDeleted(unloadTrigger)
  if self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] ~= nil then
    self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] = nil
  end
end
function BaleLoader:addBaleUnloadTrigger(unloadTrigger)
  self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] = (self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] or 0) + 1
  unloadTrigger:addDeleteListener(self, BaleLoader.onBaleUnloadTriggerDeleted)
  self:raiseActive()
end
function BaleLoader:removeBaleUnloadTrigger(unloadTrigger)
  self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] = (self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] or 0) - 1
  if self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] <= 0 then
    self.spec_baleLoader.baleUnloadTriggers[unloadTrigger] = nil
    unloadTrigger:removeDeleteListener(self, BaleLoader.onBaleUnloadTriggerDeleted)
  end
end
function BaleLoader.getCanBeSelected(v0, id)
  return true
end
function BaleLoader:getAllowDynamicMountFillLevelInfo(superFunc)
  if self.spec_baleLoader.dynamicMount.enabled then
    return false
  end
  return superFunc(self)
end
function BaleLoader:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_baleLoader.baleGrabber.trigger ~= nil then
    list[self.spec_baleLoader.baleGrabber.trigger] = self
  end
end
function BaleLoader:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_baleLoader.baleGrabber ~= nil and self.spec_baleLoader.baleGrabber.trigger ~= nil then
    list[self.spec_baleLoader.baleGrabber.trigger] = nil
  end
end
function BaleLoader:getAreControlledActionsAllowed(superFunc)
  local nearestBaleServerId = self:getIsAutomaticBaleUnloadingInProgress()
  if nearestBaleServerId then
    return false
  end
  nearestBaleServerId = superFunc(self)
  return nearestBaleServerId
end
function BaleLoader:getIsAIReadyToDrive(superFunc)
  if not self.spec_baleLoader.isInWorkPosition then
    -- if not v0.spec_baleLoader.grabberIsMoving then goto L10 end
  end
  return false
  return superFunc(self)
end
function BaleLoader:getIsAIPreparingToDrive(superFunc)
  if self.spec_baleLoader.grabberIsMoving then
    return true
  end
  return superFunc(self)
end
function BaleLoader:getDoConsumePtoPower(superFunc)
  if not self.spec_baleLoader.isInWorkPosition then
    -- if not v0.spec_baleLoader.grabberIsMoving then goto L10 end
  end
  return true
  return superFunc(self)
end
function BaleLoader:getConsumingLoad(superFunc)
  local nearestBaleServerId, isActiveForInputIgnoreSelection = superFunc(self)
  if not self.spec_baleLoader.isInWorkPosition then
    -- if not v0.spec_baleLoader.grabberIsMoving then goto L13 end
  end
  return nearestBaleServerId + 1, isActiveForInputIgnoreSelection + 1
end
function BaleLoader:getIsPowerTakeOffActive(superFunc)
  if not self.spec_baleLoader.isInWorkPosition then
    -- if not v0.spec_baleLoader.grabberIsMoving then goto L10 end
  end
  return true
  return superFunc(self)
end
function BaleLoader:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_baleLoader.actionEvents)
    if isActiveForInputIgnoreSelection then
      local isSelected, v5 = self:addPoweredActionEvent(self.spec_baleLoader.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, BaleLoader.actionEventEmpty, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      local v6, v7 = self:addPoweredActionEvent(self.spec_baleLoader.actionEvents, InputAction.IMPLEMENT_EXTRA, self, BaleLoader.actionEventWorkTransport, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_NORMAL)
      v6, v7 = self:addPoweredActionEvent(self.spec_baleLoader.actionEvents, InputAction.IMPLEMENT_EXTRA2, self, BaleLoader.actionEventAbortEmpty, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_NORMAL)
      v6:setActionEventText(v7, self.spec_baleLoader.texts.abortUnloading)
    end
  end
end
function BaleLoader:actionEventEmpty(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getFillUnitFillLevel(self.spec_baleLoader.fillUnitIndex)
  if self.spec_baleLoader.minUnloadingFillLevel > v6 then
    -- if v0.spec_baleLoader.emptyState == BaleLoader.EMPTY_NONE then goto L36 end
  end
  v6 = v6:getServerConnection()
  local v8 = BaleLoaderStateEvent.new(self, BaleLoader.CHANGE_BUTTON_EMPTY)
  v6:sendEvent(...)
  return
  v6:showBlinkingWarning(v5.texts.minUnloadingFillLevelWarning, 2500)
end
function BaleLoader.actionEventAbortEmpty(v0, id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected)
  local v5 = v5:getServerConnection()
  local v7 = BaleLoaderStateEvent.new(v0, BaleLoader.CHANGE_BUTTON_EMPTY_ABORT)
  v5:sendEvent(...)
end
function BaleLoader.actionEventWorkTransport(v0, id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected)
  local v5 = v5:getServerConnection()
  local v7 = BaleLoaderStateEvent.new(v0, BaleLoader.CHANGE_BUTTON_WORK_TRANSPORT)
  v5:sendEvent(...)
end
function BaleLoader:loadSpecValueBaleSize(id, nearestBaleServerId, isActiveForInputIgnoreSelection)
  local isSelected = self:getRootName()
  self:iterate(isSelected .. ".baleLoader.baleTypes.baleType", function(self, id)
    local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(id .. "#diameter")
    if isActiveForInputIgnoreSelection == nil then
      isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(id .. "#minDiameter")
      if isActiveForInputIgnoreSelection == nil then
        isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(id .. "#maxDiameter")
        if isActiveForInputIgnoreSelection == nil then
        end
      end
    end
    if nearestBaleServerId == u1 then
      isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getValue(id .. "#diameter")
      local nearestBaleServerId = MathUtil.round(isActiveForInputIgnoreSelection, 2)
      local isSelected = isSelected:getValue(id .. "#minDiameter")
      isActiveForInputIgnoreSelection = MathUtil.round(isSelected, 2)
      local v5 = v5:getValue(id .. "#maxDiameter")
      isSelected = MathUtil.round(v5, 2)
      if not nearestBaleServerId then
      end
      if not isActiveForInputIgnoreSelection then
      end
      if not isSelected then
      end
      local v6 = math.min(v7, v8, v9, v10)
      v5.minDiameter = v6
      if not nearestBaleServerId then
      end
      if not isActiveForInputIgnoreSelection then
      end
      if not isSelected then
      end
      v6 = math.max(v7, v8, v9, v10)
      v5.maxDiameter = v6
      v6 = v6:getValue(id .. "#length")
      v5 = MathUtil.round(v6, 2)
      local v7 = v7:getValue(id .. "#minLength")
      v6 = MathUtil.round(v7, 2)
      local v8 = v8:getValue(id .. "#maxLength")
      v7 = MathUtil.round(v8, 2)
      if not v5 then
      end
      if not v6 then
      end
      if not v7 then
      end
      local v9 = math.min(v10, v11, v12, v13)
      v8.minLength = v9
      if not v5 then
      end
      if not v6 then
      end
      if not v7 then
      end
      v9 = math.max(v10, v11, v12, v13)
      v8.maxLength = v9
    end
  end)
  if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minDiameter == math.huge then
    -- if {minDiameter = math.huge, maxDiameter = -math.huge, minLength = math.huge, maxLength = -math.huge}.minLength == math.huge then goto L46 end
  end
  return v5
end
function BaleLoader:getSpecValueBaleSize(id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected, v5, v6)
  if v6 then
    -- if v0.specs.baleLoaderBaleSizeRound then goto L10 end
  end
  if self.specs.baleLoaderBaleSizeSquare ~= nil then
    if v6 then
      -- if v0.specs.baleLoaderBaleSizeSquare.minDiameter then goto L18 end
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
function BaleLoader.loadSpecValueBaleSizeRound(xmlFile, customEnvironment, baseDir)
  return BaleLoader.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, true)
end
function BaleLoader.loadSpecValueBaleSizeSquare(xmlFile, customEnvironment, baseDir)
  return BaleLoader.loadSpecValueBaleSize(xmlFile, customEnvironment, baseDir, false)
end
function BaleLoader:getSpecValueBaleSizeRound(id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected, v5)
  if self.specs.baleLoaderBaleSizeRound ~= nil then
    return BaleLoader.getSpecValueBaleSize(self, id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected, v5, true)
  end
end
function BaleLoader:getSpecValueBaleSizeSquare(id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected, v5)
  if self.specs.baleLoaderBaleSizeSquare ~= nil then
    return BaleLoader.getSpecValueBaleSize(self, id, nearestBaleServerId, isActiveForInputIgnoreSelection, isSelected, v5, false)
  end
end
