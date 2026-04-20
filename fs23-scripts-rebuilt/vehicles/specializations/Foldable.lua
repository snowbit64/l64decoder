-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/FoldableSetFoldDirectionEvent.lua")
Foldable = {}
function Foldable.prerequisitesPresent(v0)
  return true
end
function Foldable.initSpecialization()
  local v3 = v3:getText("configuration_folding")
  v0:addConfigurationType("folding", v3, "foldable", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Foldable")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.foldable.foldingConfigurations.foldingConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.foldable.foldingConfigurations.foldingConfiguration(?)#workingWidth", "Working width to display in shop")
  Foldable.registerFoldingXMLPaths(Vehicle.xmlSchema, "vehicle.foldable.foldingConfigurations.foldingConfiguration(?).foldingParts")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_KEY .. "#foldLimitedOuterRange", "Fold limit outer range", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".folding#minLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_KEY .. ".folding#maxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_CONFIG_KEY .. "#foldLimitedOuterRange", "Fold limit outer range", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".folding#minLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".folding#maxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. ".folding#minLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundReference.GROUND_REFERENCE_XML_KEY .. ".folding#maxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#foldLimitedOuterRange", "Fold limit outer range", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#foldMinLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#foldMaxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Leveler.LEVELER_NODE_XML_KEY .. "#foldLimitedOuterRange", "Fold limit outer range", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#foldMinLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#foldMaxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#foldAngleScale", "Fold angle scale")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SlopeCompensation.COMPENSATION_NODE_XML_KEY .. "#invertFoldAngleScale", "Invert fold angle scale", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. "#foldingConfigurationIndex", "Index of folding configuration to activate the moving tool")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. "#foldingConfigurationIndices", "List of folding configuration indices to activate the moving tool")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. ".foldable#minLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, GroundAdjustedNodes.GROUND_ADJUSTED_NODE_XML_KEY .. ".foldable#maxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Sprayer.SPRAY_TYPE_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Sprayer.SPRAY_TYPE_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. "#foldingConfigurationIndex", "Index of folding configuration to activate spray type")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Sprayer.SPRAY_TYPE_XML_KEY .. "#foldingConfigurationIndices", "List of folding configuration indices to activate spray type")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. ".heightNode(?)#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. ".heightNode(?)#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. ".heightNode(?)#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. ".heightNode(?)#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Enterable.ADDITIONAL_CHARACTER_XML_KEY .. "#foldMinLimit", "Fold min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Enterable.ADDITIONAL_CHARACTER_XML_KEY .. "#foldMaxLimit", "Fold max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.SUPPORT_XML_KEY .. ".folding#minLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.SUPPORT_XML_KEY .. ".folding#maxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_AXLE_XML_KEY .. ".folding#minLimit", "Min. fold limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_AXLE_XML_KEY .. ".folding#maxLimit", "Max. fold limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Wheels.WHEEL_XML_PATH .. "#versatileFoldMinLimit", "Fold min. time for versatility", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Wheels.WHEEL_XML_PATH .. "#versatileFoldMaxLimit", "Fold max. time for versatility", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#foldMinLimit", "Fold min. time for filling", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, FillUnit.FILL_UNIT_XML_KEY .. "#foldMaxLimit", "Fold max. time for filling", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#foldMinLimit", "Fold min. time for running turned on animation", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, TurnOnVehicle.TURNED_ON_ANIMATION_XML_PATH .. "#foldMaxLimit", "Fold max. time for running turned on animation", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Pickup.PICKUP_XML_KEY .. "#foldMinLimit", "Fold min. time for pickup lowering", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Pickup.PICKUP_XML_KEY .. "#foldMaxLimit", "Fold max. time for pickup lowering", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cutter.CUTTER_TILT_XML_KEY .. "#foldMinLimit", "Fold min. time for cutter automatic tilt", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cutter.CUTTER_TILT_XML_KEY .. "#foldMaxLimit", "Fold max. time for cutter automatic tilt", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#foldMinLimit", "Fold min. time for pruner node update", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#foldMaxLimit", "Fold max. time for pruner node update", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#foldMinLimit", "Fold min. time for shovel pickup", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#foldMaxLimit", "Fold max. time for shovel pickup", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#foldMinLimit", "Fold min. time for steering angle nodes to update", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#foldMaxLimit", "Fold max. time for steering angle nodes to update", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WoodHarvester.HEADER_JOINT_TILT_XML_KEY .. "#foldMinLimit", "Fold min. time for header tilt to be allowed", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WoodHarvester.HEADER_JOINT_TILT_XML_KEY .. "#foldMaxLimit", "Fold max. time for header tilt to be allowed", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).foldable#foldAnimTime", "Fold animation time")
end
function Foldable:registerFoldingXMLPaths(v1)
  self:register(XMLValueType.L10N_STRING, v1 .. "#objectText", "override OBJECT text inserted in folding action string", "vehicle typeDesc")
  self:register(XMLValueType.L10N_STRING, v1 .. "#posDirectionText", "Positive direction text", "$l10n_action_foldOBJECT")
  self:register(XMLValueType.L10N_STRING, v1 .. "#negDirectionText", "Negative direction text", "$l10n_action_unfoldOBJECT")
  self:register(XMLValueType.L10N_STRING, v1 .. "#middlePosDirectionText", "Positive middle direction text", "$l10n_action_liftOBJECT")
  self:register(XMLValueType.L10N_STRING, v1 .. "#middleNegDirectionText", "Negative middle direction text", "$l10n_action_lowerOBJECT")
  self:register(XMLValueType.FLOAT, v1 .. "#startAnimTime", "Start animation time", "Depending on startMoveDirection")
  self:register(XMLValueType.INT, v1 .. "#startMoveDirection", "Start move direction", 0)
  self:register(XMLValueType.INT, v1 .. "#turnOnFoldDirection", "Turn on fold direction")
  self:register(XMLValueType.BOOL, v1 .. "#allowUnfoldingByAI", "Allow folding by AI", true)
  self:register(XMLValueType.STRING, v1 .. "#foldInputButton", "Fold Input action", "IMPLEMENT_EXTRA2")
  self:register(XMLValueType.STRING, v1 .. "#foldMiddleInputButton", "Fold middle Input action", "LOWER_IMPLEMENT")
  self:register(XMLValueType.FLOAT, v1 .. "#foldMiddleAnimTime", "Fold middle anim time")
  self:register(XMLValueType.INT, v1 .. "#foldMiddleDirection", "Fold middle direction", 1)
  self:register(XMLValueType.INT, v1 .. "#foldMiddleAIRaiseDirection", "Fold middle AI raise direction", "same as foldMiddleDirection")
  self:register(XMLValueType.FLOAT, v1 .. "#turnOnFoldMaxLimit", "Turn on fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#turnOnFoldMinLimit", "Turn on fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#toggleCoverMaxLimit", "Toggle cover fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#toggleCoverMinLimit", "Toggle cover fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#detachingMaxLimit", "Detach fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#detachingMinLimit", "Detach fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#attachingMaxLimit", "Attach fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#attachingMinLimit", "Attach fold min. limit", 0)
  self:register(XMLValueType.BOOL, v1 .. "#allowDetachingWhileFolding", "Allow detaching while folding", false)
  self:register(XMLValueType.FLOAT, v1 .. "#loweringMaxLimit", "Lowering fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#loweringMinLimit", "Lowering fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#loadMovingToolStatesMaxLimit", "Load moving tool states fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#loadMovingToolStatesMinLimit", "Load moving tool states fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#dynamicMountMaxLimit", "Dynamic mount fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#dynamicMountMinLimit", "Dynamic mount fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#crabSteeringMinLimit", "Crab steering change fold max. limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#crabSteeringMaxLimit", "Crab steering change fold min. limit", 0)
  self:register(XMLValueType.L10N_STRING, v1 .. "#unfoldWarning", "Unfold warning", "$l10n_warning_firstUnfoldTheTool")
  self:register(XMLValueType.L10N_STRING, v1 .. "#detachWarning", "Detach warning", "$l10n_warning_doNotDetachWhileFolding")
  self:register(XMLValueType.BOOL, v1 .. "#useParentFoldingState", "The fold state can not be controlled manually. It's always a copy of the fold state of the parent vehicle.", false)
  self:register(XMLValueType.BOOL, v1 .. "#ignoreFoldMiddleWhileFolded", "While the tool is folded pressing the lowering button will only control the attacher joint state, not the fold state. The lowering key has only function if the tool is unfolded. (only if fold middle time defined)", false)
  self:register(XMLValueType.BOOL, v1 .. "#lowerWhileDetach", "If tool is in fold middle state it gets lowered on detach and lifted while it's attached again", false)
  self:register(XMLValueType.BOOL, v1 .. "#keepFoldingWhileDetached", "If set to 'true' the tool is still continuing with the folding animation after the tool is detached, otherwise it's stopped", "true for mobile platform, otherwise false")
  self:register(XMLValueType.BOOL, v1 .. "#releaseBrakesWhileFolding", "If set to 'true' the tool is releasing it's brakes while the folding is active", false)
  self:register(XMLValueType.BOOL, v1 .. "#requiresPower", "Vehicle needs to be powered to change folding state", true)
  self:register(XMLValueType.FLOAT, v1 .. ".foldingPart(?)#speedScale", "Speed scale", 1)
  self:register(XMLValueType.INT, v1 .. ".foldingPart(?)#componentJointIndex", "Component joint index")
  self:register(XMLValueType.INT, v1 .. ".foldingPart(?)#anchorActor", "Component joint anchor actor", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".foldingPart(?)#rootNode", "Root node for animation clip")
  self:register(XMLValueType.STRING, v1 .. ".foldingPart(?)#animationClip", "Animation clip name")
  self:register(XMLValueType.STRING, v1 .. ".foldingPart(?)#animationName", "Animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".foldingPart(?)#delayDistance", "Distance to be moved by the vehicle until part is played")
  self:register(XMLValueType.FLOAT, v1 .. ".foldingPart(?)#previousDuration", "lowering duration if previous part", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".foldingPart(?)#loweringDuration", "lowering duration if folding part", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".foldingPart(?)#maxDelayDuration", "Max. duration of distance delay until movement is forced. Decreases by half when not moving", 7.5)
  self:register(XMLValueType.BOOL, v1 .. ".foldingPart(?)#aiSkipDelay", "Defines if the AI uses the delayed lowering/lifting or is controls all parts synchronized", false)
end
function Foldable.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onFoldStateChanged")
  SpecializationUtil.registerEvent(vehicleType, "onFoldTimeChanged")
end
function Foldable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadFoldingPartFromXML", Foldable.loadFoldingPartFromXML)
  SpecializationUtil.registerFunction(vehicleType, "setFoldDirection", Foldable.setFoldDirection)
  SpecializationUtil.registerFunction(vehicleType, "setFoldState", Foldable.setFoldState)
  SpecializationUtil.registerFunction(vehicleType, "getIsUnfolded", Foldable.getIsUnfolded)
  SpecializationUtil.registerFunction(vehicleType, "getFoldAnimTime", Foldable.getFoldAnimTime)
  SpecializationUtil.registerFunction(vehicleType, "getIsFoldAllowed", Foldable.getIsFoldAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getIsFoldMiddleAllowed", Foldable.getIsFoldMiddleAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getToggledFoldDirection", Foldable.getToggledFoldDirection)
  SpecializationUtil.registerFunction(vehicleType, "getToggledFoldMiddleDirection", Foldable.getToggledFoldMiddleDirection)
end
function Foldable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "allowLoadMovingToolStates", Foldable.allowLoadMovingToolStates)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", Foldable.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", Foldable.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadCompensationNodeFromXML", Foldable.loadCompensationNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCompensationAngleScale", Foldable.getCompensationAngleScale)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWheelFromXML", Foldable.loadWheelFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsVersatileYRotActive", Foldable.getIsVersatileYRotActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Foldable.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Foldable.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadGroundReferenceNode", Foldable.loadGroundReferenceNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateGroundReferenceNode", Foldable.updateGroundReferenceNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadLevelerNodeFromXML", Foldable.loadLevelerNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLevelerPickupNodeActive", Foldable.getIsLevelerPickupNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadMovingToolFromXML", Foldable.loadMovingToolFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMovingToolActive", Foldable.getIsMovingToolActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadMovingPartFromXML", Foldable.loadMovingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMovingPartActive", Foldable.getIsMovingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", Foldable.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsNextCoverStateAllowed", Foldable.getIsNextCoverStateAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsInWorkPosition", Foldable.getIsInWorkPosition)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", Foldable.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", Foldable.isDetachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isAttachAllowed", Foldable.isAttachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowsLowering", Foldable.getAllowsLowering)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLowered", Foldable.getIsLowered)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanAIImplementContinueWork", Foldable.getCanAIImplementContinueWork)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIReadyToDrive", Foldable.getIsAIReadyToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIPreparingToDrive", Foldable.getIsAIPreparingToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerLoweringActionEvent", Foldable.registerLoweringActionEvent)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerSelfLoweringActionEvent", Foldable.registerSelfLoweringActionEvent)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadGroundAdjustedNodeFromXML", Foldable.loadGroundAdjustedNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsGroundAdjustedNodeActive", Foldable.getIsGroundAdjustedNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSprayTypeFromXML", Foldable.loadSprayTypeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSprayTypeActive", Foldable.getIsSprayTypeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Foldable.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadInputAttacherJoint", Foldable.loadInputAttacherJoint)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsInputAttacherActive", Foldable.getIsInputAttacherActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAdditionalCharacterFromXML", Foldable.loadAdditionalCharacterFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAdditionalCharacterActive", Foldable.getIsAdditionalCharacterActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowDynamicMountObjects", Foldable.getAllowDynamicMountObjects)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSupportAnimationFromXML", Foldable.loadSupportAnimationFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSupportAnimationAllowed", Foldable.getIsSupportAnimationAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSteeringAxleFromXML", Foldable.loadSteeringAxleFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSteeringAxleAllowed", Foldable.getIsSteeringAxleAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadFillUnitFromXML", Foldable.loadFillUnitFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitSupportsToolType", Foldable.getFillUnitSupportsToolType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadTurnedOnAnimationFromXML", Foldable.loadTurnedOnAnimationFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsTurnedOnAnimationActive", Foldable.getIsTurnedOnAnimationActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAttacherJointHeightNode", Foldable.loadAttacherJointHeightNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAttacherJointHeightNodeActive", Foldable.getIsAttacherJointHeightNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadPickupFromXML", Foldable.loadPickupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanChangePickupState", Foldable.getCanChangePickupState)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadCutterTiltFromXML", Foldable.loadCutterTiltFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCutterTiltIsActive", Foldable.getCutterTiltIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadPreprunerNodeFromXML", Foldable.loadPreprunerNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPreprunerNodeActive", Foldable.getIsPreprunerNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadShovelNode", Foldable.loadShovelNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShovelNodeIsActive", Foldable.getShovelNodeIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSteeringAngleNodeFromXML", Foldable.loadSteeringAngleNodeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateSteeringAngleNode", Foldable.updateSteeringAngleNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWoodHarvesterHeaderTiltFromXML", Foldable.loadWoodHarvesterHeaderTiltFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWoodHarvesterTiltStateAllowed", Foldable.getIsWoodHarvesterTiltStateAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleCrabSteering", Foldable.getCanToggleCrabSteering)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getBrakeForce", Foldable.getBrakeForce)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresPower", Foldable.getRequiresPower)
end
function Foldable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLoweredAll", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttachImplement", Foldable)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetachImplement", Foldable)
end
function Foldable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldingParts", "vehicle.foldable.foldingConfigurations.foldingConfiguration.foldingParts")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldable.foldingParts", "vehicle.foldable.foldingConfigurations.foldingConfiguration.foldingParts")
  local foldingConfigurationId = Utils.getNoNil(self.configurations.folding, 1)
  local v4 = string.format("vehicle.foldable.foldingConfigurations.foldingConfiguration(%d).foldingParts", foldingConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.foldable.foldingConfigurations.foldingConfiguration", foldingConfigurationId, self.components, self)
  local v5 = v5:getValue(v4 .. "#objectText", self.typeDesc, self.customEnvironment, false)
  self.spec_foldable.objectText = v5
  local v6 = v6:getValue(v4 .. "#posDirectionText", "action_foldOBJECT", self.customEnvironment, false)
  v5 = string.format(v6, self.spec_foldable.objectText)
  self.spec_foldable.posDirectionText = v5
  v6 = v6:getValue(v4 .. "#negDirectionText", "action_unfoldOBJECT", self.customEnvironment, false)
  v5 = string.format(v6, self.spec_foldable.objectText)
  self.spec_foldable.negDirectionText = v5
  v6 = v6:getValue(v4 .. "#middlePosDirectionText", "action_liftOBJECT", self.customEnvironment, false)
  v5 = string.format(v6, self.spec_foldable.objectText)
  self.spec_foldable.middlePosDirectionText = v5
  v6 = v6:getValue(v4 .. "#middleNegDirectionText", "action_lowerOBJECT", self.customEnvironment, false)
  v5 = string.format(v6, self.spec_foldable.objectText)
  self.spec_foldable.middleNegDirectionText = v5
  v5 = v5:getValue(v4 .. "#startAnimTime")
  self.spec_foldable.startAnimTime = v5
  self.spec_foldable.foldMoveDirection = 0
  self.spec_foldable.moveToMiddle = false
  if self.spec_foldable.startAnimTime == nil then
    self.spec_foldable.startAnimTime = 0
    v5 = v5:getValue(v4 .. "#startMoveDirection", 0)
    if 0.1 < v5 then
      self.spec_foldable.startAnimTime = 1
    end
  end
  v2.turnOnFoldDirection = 1
  if 0.5 < v2.startAnimTime then
    v2.turnOnFoldDirection = -1
  end
  v6 = v6:getValue(v4 .. "#turnOnFoldDirection", v2.turnOnFoldDirection)
  v5 = MathUtil.sign(...)
  v2.turnOnFoldDirection = v5
  if v2.turnOnFoldDirection == 0 then
    Logging.xmlWarning(self.xmlFile, "Foldable 'turnOnFoldDirection' not allowed to be 0! Only -1 and 1 are allowed")
    v2.turnOnFoldDirection = -1
  end
  v5 = v5:getValue(v4 .. "#allowUnfoldingByAI", true)
  v2.allowUnfoldingByAI = v5
  v5 = v5:getValue(v4 .. "#foldInputButton")
  if v5 ~= nil then
    v2.foldInputButton = InputAction[v5]
  end
  v6 = Utils.getNoNil(v2.foldInputButton, InputAction.IMPLEMENT_EXTRA2)
  v2.foldInputButton = v6
  v6 = v6:getValue(v4 .. "#foldMiddleInputButton")
  if v6 ~= nil then
    v2.foldMiddleInputButton = InputAction[v6]
  end
  local v7 = Utils.getNoNil(v2.foldMiddleInputButton, InputAction.LOWER_IMPLEMENT)
  v2.foldMiddleInputButton = v7
  v7 = v7:getValue(v4 .. "#foldMiddleAnimTime")
  v2.foldMiddleAnimTime = v7
  v7 = v7:getValue(v4 .. "#foldMiddleDirection", 1)
  v2.foldMiddleDirection = v7
  v7 = v7:getValue(v4 .. "#foldMiddleAIRaiseDirection", v2.foldMiddleDirection)
  v2.foldMiddleAIRaiseDirection = v7
  v7 = v7:getValue(v4 .. "#turnOnFoldMaxLimit", 1)
  v2.turnOnFoldMaxLimit = v7
  v7 = v7:getValue(v4 .. "#turnOnFoldMinLimit", 0)
  v2.turnOnFoldMinLimit = v7
  v7 = v7:getValue(v4 .. "#toggleCoverMaxLimit", 1)
  v2.toggleCoverMaxLimit = v7
  v7 = v7:getValue(v4 .. "#toggleCoverMinLimit", 0)
  v2.toggleCoverMinLimit = v7
  v7 = v7:getValue(v4 .. "#detachingMaxLimit", 1)
  v2.detachingMaxLimit = v7
  v7 = v7:getValue(v4 .. "#detachingMinLimit", 0)
  v2.detachingMinLimit = v7
  v7 = v7:getValue(v4 .. "#attachingMaxLimit", 1)
  v2.attachingMaxLimit = v7
  v7 = v7:getValue(v4 .. "#attachingMinLimit", 0)
  v2.attachingMinLimit = v7
  v7 = v7:getValue(v4 .. "#allowDetachingWhileFolding", false)
  v2.allowDetachingWhileFolding = v7
  v7 = v7:getValue(v4 .. "#loweringMaxLimit", 1)
  v2.loweringMaxLimit = v7
  v7 = v7:getValue(v4 .. "#loweringMinLimit", 0)
  v2.loweringMinLimit = v7
  v7 = v7:getValue(v4 .. "#loadMovingToolStatesMaxLimit", 1)
  v2.loadMovingToolStatesMaxLimit = v7
  v7 = v7:getValue(v4 .. "#loadMovingToolStatesMinLimit", 0)
  v2.loadMovingToolStatesMinLimit = v7
  v7 = v7:getValue(v4 .. "#dynamicMountMinLimit", 0)
  v2.dynamicMountMinLimit = v7
  v7 = v7:getValue(v4 .. "#dynamicMountMaxLimit", 1)
  v2.dynamicMountMaxLimit = v7
  v7 = v7:getValue(v4 .. "#crabSteeringMinLimit", 0)
  v2.crabSteeringMinLimit = v7
  v7 = v7:getValue(v4 .. "#crabSteeringMaxLimit", 1)
  v2.crabSteeringMaxLimit = v7
  local v8 = v8:getValue(v4 .. "#unfoldWarning", "warning_firstUnfoldTheTool", self.customEnvironment, false)
  v7 = string.format(v8, v2.objectText)
  v2.unfoldWarning = v7
  v8 = v8:getValue(v4 .. "#detachWarning", "warning_doNotDetachWhileFolding", self.customEnvironment, false)
  v7 = string.format(v8, v2.objectText)
  v2.detachWarning = v7
  v7 = v7:getValue(v4 .. "#useParentFoldingState", false)
  v2.useParentFoldingState = v7
  v2.subFoldingStateVehicles = {}
  v7 = v7:getValue(v4 .. "#ignoreFoldMiddleWhileFolded", false)
  v2.ignoreFoldMiddleWhileFolded = v7
  v7 = v7:getValue(v4 .. "#lowerWhileDetach", false)
  v2.lowerWhileDetach = v7
  v7 = v7:getValue(v4 .. "#keepFoldingWhileDetached", Platform.gameplay.keepFoldingWhileDetached)
  v2.keepFoldingWhileDetached = v7
  v7 = v7:getValue(v4 .. "#releaseBrakesWhileFolding", false)
  v2.releaseBrakesWhileFolding = v7
  v7 = v7:getValue(v4 .. "#requiresPower", true)
  v2.requiresPower = v7
  v2.foldAnimTime = 0
  v2.maxFoldAnimDuration = 0.0001
  v2.foldingParts = {}
  while true do
    v8 = string.format(v4 .. ".foldingPart(%d)", v7)
    v9 = v9:hasProperty(v8)
    if not v9 then
      break
    end
    v10 = self:loadFoldingPartFromXML(self.xmlFile, v8, {})
    if v10 then
      table.insert(v2.foldingParts, {})
      v10 = math.max(v2.maxFoldAnimDuration, {}.animDuration)
      v2.maxFoldAnimDuration = v10
    end
  end
  v2.actionEventsLowering = {}
  if 0 < #v2.foldingParts and savegame ~= nil and not savegame.resetVehicles then
    v8 = v8:getValue(savegame.key .. ".foldable#foldAnimTime")
    v2.loadedFoldAnimTime = v8
  end
  if v2.loadedFoldAnimTime == nil then
    v2.loadedFoldAnimTime = v2.startAnimTime
  end
  if self.additionalLoadParameters ~= nil then
    if self.additionalLoadParameters.foldableInvertFoldState then
      v2.loadedFoldAnimTime = 1 - v2.loadedFoldAnimTime
      return
    end
    if self.additionalLoadParameters.foldableFoldingTime ~= nil then
      v2.loadedFoldAnimTime = self.additionalLoadParameters.foldableFoldingTime
    end
  end
end
function Foldable:onPostLoad(savegame)
  Foldable.setAnimTime(self, self.spec_foldable.loadedFoldAnimTime, false)
  if #self.spec_foldable.foldingParts ~= 0 then
    -- if not v0.spec_foldable.useParentFoldingState then goto L82 end
  end
  SpecializationUtil.removeEventListener(self, "onReadStream", Foldable)
  SpecializationUtil.removeEventListener(self, "onWriteStream", Foldable)
  SpecializationUtil.removeEventListener(self, "onUpdate", Foldable)
  SpecializationUtil.removeEventListener(self, "onUpdateTick", Foldable)
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", Foldable)
  SpecializationUtil.removeEventListener(self, "onDeactivate", Foldable)
  SpecializationUtil.removeEventListener(self, "onSetLoweredAll", Foldable)
  SpecializationUtil.removeEventListener(self, "onPostAttach", Foldable)
  SpecializationUtil.removeEventListener(self, "onPreDetach", Foldable)
end
function Foldable:saveToXMLFile(xmlFile, key, usedModNames)
  if 0 < #self.spec_foldable.foldingParts then
    xmlFile:setValue(key .. "#foldAnimTime", self.spec_foldable.foldAnimTime)
  end
end
function Foldable:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, 2)
  v4 = streamReadBool(streamId)
  local animTime = streamReadFloat32(streamId)
  Foldable.setAnimTime(self, animTime, false)
  self:setFoldState(v4 - 1, v4, true)
end
function Foldable:onWriteStream(streamId, connection)
  local v5 = MathUtil.sign(self.spec_foldable.foldMoveDirection)
  streamWriteUIntN(streamId, v5 + 1, 2)
  streamWriteBool(streamId, self.spec_foldable.moveToMiddle)
  streamWriteFloat32(streamId, self.spec_foldable.foldAnimTime)
end
function Foldable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = math.abs(self.spec_foldable.foldMoveDirection)
  if 0.1 < v6 then
    if self.spec_foldable.foldMoveDirection < -0.1 then
    end
    for v11, v12 in pairs(v5.foldingParts) do
      if 0 < v5.foldMoveDirection then
        if v12.animCharSet ~= 0 then
          local v15 = getAnimTrackTime(v12.animCharSet, 0)
        else
          v15 = self:getRealAnimationTime(v12.animationName)
        end
        if v14 < v12.animDuration then
        end
        v15 = math.max(v7, v14 / v5.maxFoldAnimDuration)
      else
        if not (v5.foldMoveDirection < 0) then
          continue
        end
        if v12.animCharSet ~= 0 then
          v15 = getAnimTrackTime(v12.animCharSet, 0)
        else
          v15 = self:getRealAnimationTime(v12.animationName)
        end
        if 0 < v14 then
        end
        v15 = math.min(v7, v14 / v5.maxFoldAnimDuration)
      end
    end
    v8 = MathUtil.clamp(v7, 0, 1)
    if v8 ~= v5.foldAnimTime then
      v5.foldAnimTime = v8
      SpecializationUtil.raiseEvent(self, "onFoldTimeChanged", v5.foldAnimTime)
    end
    if 0 < v5.foldMoveDirection then
      if v5.moveToMiddle then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L141
      end
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000020 -> L180
      v5.foldMoveDirection = 0
      -- goto L180  (LOP_JUMP +39)
      -- if v5.foldAnimTime ~= v5.foldMiddleAnimTime then goto L180 end
      v5.foldMoveDirection = 0
    elseif v5.foldMoveDirection < 0 then
      if v5.moveToMiddle then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L171
      end
      if v5.foldAnimTime == 0 then
        v5.foldMoveDirection = 0
        -- goto L180  (LOP_JUMP +9)
        if v5.foldAnimTime == v5.foldMiddleAnimTime then
          v5.foldMoveDirection = 0
        end
      end
    end
    if v6 and self.isServer then
      for v11, v12 in pairs(v5.foldingParts) do
        if not (v12.componentJoint ~= nil) then
          continue
        end
        self:setComponentJointFrame(v12.componentJoint, v12.anchorActor)
      end
    end
    for v11, v12 in pairs(v5.subFoldingStateVehicles) do
      Foldable.setAnimTime(v12, v5.foldAnimTime, false)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 225, target 340)
  if v5.foldingParts[1].delayedLowering ~= nil and 0 <= v5.foldingParts[1].delayedLowering.currentDistance then
    v5.foldingParts[1].delayedLowering.currentDistance = v5.foldingParts[1].delayedLowering.currentDistance + self.lastMovedDistance
    if v5.foldingParts[1].delayedLowering.prevDistance == nil and v5.foldingParts[1].delayedLowering.startTime + v5.foldingParts[1].delayedLowering.previousDuration < g_time then
      v5.foldingParts[1].delayedLowering.prevDistance = v5.foldingParts[1].delayedLowering.currentDistance
    end
    if not v10.prevDistance then
    end
    local v20 = MathUtil.clamp(v10.currentDistance / (v10.distance + v12 - v11) * 0.5 + 0.5, 0, 1)
    if v10.startTime + v10.maxDelayDuration * v20 >= g_time then
    end
    if v10.aiSkipDelay and not true then
      v15 = self:getIsAIActive()
    end
    if v13 > v10.currentDistance then
      -- if not v14 then goto L339 end
    end
    self:playAnimation(v9.animationName, v10.speedScale, v10.animTime, true)
    if v10.stopAnimTime ~= nil then
      self:setAnimationStopTime(v9.animationName, v10.stopAnimTime)
    end
    v10.currentDistance = -1
  end
  -- TODO: structure LOP_FORNLOOP (pc 339, target 226)
end
function Foldable:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    Foldable.updateActionEventFold(self)
    if self.spec_foldable.foldMiddleAnimTime ~= nil then
      Foldable.updateActionEventFoldMiddle(self)
    end
  end
  if self.isServer and v5.ignoreFoldMiddleWhileFolded then
    local v6 = math.abs(v5.foldAnimTime - v5.foldMiddleAnimTime)
    if v6 < 0.001 then
      if v5.foldMoveDirection ~= 1 then
      end
      if v5.turnOnFoldDirection ~= 1 then
      end
      if v6 == true then
        v6 = self:getAttacherVehicle()
        if v6 ~= nil then
          local v7 = v6:getAttacherJointDescFromObject(self)
          if not v7.allowsLowering then
            -- if not v7.isDefaultLowered then goto L76 end
          end
          if v7.moveDown then
            self:setFoldState(-1, false)
          end
        end
      end
    end
  end
end
function Foldable:loadFoldingPartFromXML(xmlFile, baseKey, foldingPart)
  local v5 = xmlFile:getValue(baseKey .. "#speedScale", 1)
  foldingPart.speedScale = v5
  if foldingPart.speedScale <= 0 then
    Logging.xmlWarning(xmlFile, "Negative speed scale for folding part '%s' not allowed!", baseKey)
    return false
  end
  v5 = xmlFile:getValue(baseKey .. "#componentJointIndex")
  if v5 ~= nil then
    if v5 == 0 then
      Logging.xmlWarning(xmlFile, "Invalid componentJointIndex for folding part '%s'. Indexing starts with 1!", baseKey)
      return false
    end
    foldingPart.componentJoint = self.componentJoints[v5]
  end
  local v7 = xmlFile:getValue(baseKey .. "#anchorActor", 0)
  foldingPart.anchorActor = v7
  foldingPart.animCharSet = 0
  v7 = xmlFile:getValue(baseKey .. "#rootNode", nil, self.components, self.i3dMappings)
  if v7 ~= nil then
    local v8 = getAnimCharacterSet(v7)
    if v8 ~= 0 then
      local v11 = xmlFile:getValue(baseKey .. "#animationClip")
      local v9 = getAnimClipIndex(...)
      if 0 <= v9 then
        foldingPart.animCharSet = v8
        assignAnimTrackClip(foldingPart.animCharSet, 0, v9)
        setAnimTrackLoopState(foldingPart.animCharSet, 0, false)
        local v10 = getAnimClipDuration(foldingPart.animCharSet, v9)
        foldingPart.animDuration = v10
      end
    end
  end
  if not isSelected then
    v8 = SpecializationUtil.hasSpecialization(AnimatedVehicle, self.specializations)
    if v8 then
      v8 = xmlFile:getValue(baseKey .. "#animationName")
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L171
      v9 = self:getAnimationExists(v8)
      -- if not v9 then goto L171 end
      v9 = self:getAnimationDuration(v8)
      foldingPart.animDuration = v9
      foldingPart.animationName = v8
      v9 = self:getAnimationByName(v8)
      v9.resetOnStart = true
    else
      v8 = xmlFile:getValue(baseKey .. "#animationName")
      if v8 ~= nil then
        Logging.xmlWarning(xmlFile, "Found animationName in folding part '%s', but vehicle has no animations!", baseKey)
        return false
      end
    end
  end
  if not isSelected then
    Logging.xmlWarning(xmlFile, "Invalid folding part '%s'. Either a animationClip or animationName needs to be defined!", baseKey)
    return false
  end
  v8 = xmlFile:getValue(baseKey .. "#delayDistance")
  if v8 ~= nil then
    foldingPart.delayedLowering = {distance = v8}
    v11 = xmlFile:getValue(baseKey .. "#previousDuration", 1)
    foldingPart.delayedLowering.previousDuration = v11 * 1000
    v11 = xmlFile:getValue(baseKey .. "#loweringDuration", 1)
    foldingPart.delayedLowering.loweringDuration = v11 * 1000
    v11 = xmlFile:getValue(baseKey .. "#maxDelayDuration", 7.5)
    foldingPart.delayedLowering.maxDelayDuration = v11 * 1000
    v10 = xmlFile:getValue(baseKey .. "#aiSkipDelay", false)
    foldingPart.delayedLowering.aiSkipDelay = v10
    foldingPart.delayedLowering.currentDistance = -1
    foldingPart.delayedLowering.startTime = math.huge
    foldingPart.delayedLowering.speedScale = 0
    foldingPart.delayedLowering.animTime = 0
    foldingPart.delayedLowering.stopAnimTime = 0
    foldingPart.delayedLowering.prevDistance = nil
  end
  if v6 ~= nil then
    local v12 = getWorldTranslation(self.components[v6.componentIndices[(foldingPart.anchorActor + 1) % 2 + 1]].node)
    v10, v11, v12 = worldToLocal(...)
    foldingPart.x = v10
    foldingPart.y = v11
    foldingPart.z = v12
    v12 = localDirectionToWorld(self.components[v6.componentIndices[(foldingPart.anchorActor + 1) % 2 + 1]].node, 0, 1, 0)
    v10, v11, v12 = worldDirectionToLocal(...)
    foldingPart.upX = v10
    foldingPart.upY = v11
    foldingPart.upZ = v12
    v12 = localDirectionToWorld(self.components[v6.componentIndices[(foldingPart.anchorActor + 1) % 2 + 1]].node, 0, 0, 1)
    v10, v11, v12 = worldDirectionToLocal(...)
    foldingPart.dirX = v10
    foldingPart.dirY = v11
    foldingPart.dirZ = v12
  end
  return true
end
function Foldable:setFoldDirection(direction, noEventSend)
  self:setFoldState(direction, false, noEventSend)
end
function Foldable:setFoldState(direction, moveToMiddle, noEventSend)
  if self.spec_foldable.foldMiddleAnimTime == nil then
  end
  if isSelected.foldMoveDirection == direction then
    -- if v4.moveToMiddle == v2 then goto L320 end
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L52
  end
  if g_server ~= nil then
    local v7 = FoldableSetFoldDirectionEvent.new(self, direction, moveToMiddle)
    v5:broadcastEvent(v7, nil, nil, self)
  else
    local v5 = v5:getServerConnection()
    v7 = FoldableSetFoldDirectionEvent.new(self, direction, moveToMiddle)
    v5:sendEvent(...)
  end
  isSelected.foldMoveDirection = direction
  isSelected.moveToMiddle = moveToMiddle
  for v8, v9 in pairs(isSelected.foldingParts) do
    if 0.1 < isSelected.foldMoveDirection then
      if isSelected.moveToMiddle then
        -- if v4.foldAnimTime >= v4.foldMiddleAnimTime then goto L97 end
      end
    elseif isSelected.foldMoveDirection < -0.1 and isSelected.moveToMiddle then
      -- if v4.foldMiddleAnimTime >= v4.foldAnimTime then goto L97 end
    end
    if v9.animCharSet ~= 0 then
      if v10 ~= nil then
        if 0 < v10 then
          local v12 = getAnimTrackTime(v9.animCharSet, 0)
          -- if v12 >= 0 then goto L137 end
          setAnimTrackTime(v9.animCharSet, 0, 0)
        else
          v12 = getAnimTrackTime(v9.animCharSet, 0)
          if v9.animDuration < v12 then
            setAnimTrackTime(v9.animCharSet, 0, v9.animDuration)
          end
        end
        setAnimTrackSpeedScale(v11, 0, v10)
        enableAnimTrack(v11, 0)
        continue
      end
      disableAnimTrack(v11, 0)
    else
      local v13 = self:getIsAnimationPlaying(v9.animationName)
      if v13 then
        v13 = self:getAnimationTime(v9.animationName)
      else
        local v14 = self:getAnimationDuration(v9.animationName)
      end
      v13 = self:getIsAnimationPlaying(v9.animationName)
      self:stopAnimation(v9.animationName, true)
      if not (v10 ~= nil) then
        continue
      end
      if moveToMiddle then
        local v16 = self:getAnimationDuration(v9.animationName)
      end
      if direction == isSelected.turnOnFoldDirection then
      end
      if true ~= not moveToMiddle then
      end
      if v9.delayedLowering ~= nil and not true then
        -- if not v13 then goto L248 end
      end
      self:playAnimation(v9.animationName, v10, v12, true)
      if moveToMiddle then
        self:setAnimationStopTime(v9.animationName, v14)
      end
      if not (v9.delayedLowering ~= nil) then
        continue
      end
      v9.delayedLowering.currentDistance = -1
      continue
      v9.delayedLowering.currentDistance = 0
      v9.delayedLowering.speedScale = v10
      v9.delayedLowering.animTime = v12
      v9.delayedLowering.stopAnimTime = v14
      v9.delayedLowering.startTime = g_time
      v9.delayedLowering.prevDistance = nil
    end
  end
  if 0.1 < isSelected.foldMoveDirection then
    v7 = math.max(isSelected.foldAnimTime, 1)
    v5 = math.min(...)
    isSelected.foldAnimTime = v5
  elseif isSelected.foldMoveDirection < -0.1 then
    v7 = math.min(isSelected.foldAnimTime, 0)
    v5 = math.max(...)
    isSelected.foldAnimTime = v5
  end
  SpecializationUtil.raiseEvent(self, "onFoldStateChanged", direction, moveToMiddle)
end
function Foldable:getIsUnfolded()
  if 0 < #self.spec_foldable.foldingParts then
    if self.spec_foldable.foldMiddleAnimTime ~= nil then
      if self.spec_foldable.turnOnFoldDirection == -1 then
        -- if v0.spec_foldable.foldAnimTime < v0.spec_foldable.foldMiddleAnimTime + 0.01 then goto L34 end
      end
      if direction.turnOnFoldDirection == 1 and direction.foldMiddleAnimTime - 0.01 < direction.foldAnimTime then
        return true
      end
      return false
    end
    if direction.turnOnFoldDirection == -1 then
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x8 -> L54
    end
    if direction.turnOnFoldDirection == 1 and direction.foldAnimTime == 1 then
      return true
    end
    return false
  end
  return true
end
function Foldable:getFoldAnimTime()
  if not self.spec_foldable.loadedFoldAnimTime then
  end
  return moveToMiddle
end
function Foldable:getIsFoldAllowed(direction, onAiTurnOn)
  if self.getAttacherVehicle ~= nil then
    local noEventSend = self:getAttacherVehicle()
    if noEventSend ~= nil then
      noEventSend = self:getActiveInputAttacherJoint()
      if noEventSend.foldMinLimit ~= nil and noEventSend.foldMaxLimit ~= nil then
        local foldAnimTime = self:getFoldAnimTime()
        if foldAnimTime >= noEventSend.foldMinLimit then
          -- if v3.foldMaxLimit >= v4 then goto L33 end
        end
        return false
      end
    end
  end
  return true
end
function Foldable:getIsFoldMiddleAllowed()
  if self.spec_foldable.foldMiddleAnimTime == nil then
  end
  return true
end
function Foldable:getToggledFoldDirection()
  if self.spec_foldable.foldMiddleAnimTime ~= nil then
    if 0 < self.spec_foldable.foldMiddleDirection then
    else
    end
  end
  if direction.moveToMiddle then
    return direction.foldMiddleDirection
  end
  if 0.1 >= direction.foldMoveDirection then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000007 -> L42
    -- if v2 >= v1.foldAnimTime then goto L42 end
  end
  return -1
  return 1
end
function Foldable:getToggledFoldMiddleDirection()
  if self.spec_foldable.foldMiddleAnimTime ~= nil then
    if 0.1 < self.spec_foldable.foldMoveDirection then
    else
    end
    if 0 < direction.foldMiddleDirection then
      -- if v1.foldMiddleAnimTime - 0.01 > v1.foldAnimTime then goto L39 end
      return -1
    end
    if direction.foldAnimTime <= direction.foldMiddleAnimTime + 0.01 then
      return 1
    end
  end
  return moveToMiddle
end
function Foldable:allowLoadMovingToolStates(superFunc)
  if self.spec_foldable.loadMovingToolStatesMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.loadMovingToolStatesMinLimit then goto L16 end
  end
  return false
  return superFunc(self)
end
function Foldable.loadSpeedRotatingPartFromXML(v0, direction, moveToMiddle, noEventSend, isSelected)
  local v5 = direction(v0, moveToMiddle, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = noEventSend:getValue(isSelected .. "#foldLimitedOuterRange", false)
  moveToMiddle.foldLimitedOuterRange = v5
  if moveToMiddle.foldLimitedOuterRange then
  end
  local v7 = noEventSend:getValue(isSelected .. "#foldMinLimit", v5)
  moveToMiddle.foldMinLimit = v7
  v7 = noEventSend:getValue(isSelected .. "#foldMaxLimit", v6)
  moveToMiddle.foldMaxLimit = v7
  return true
end
function Foldable:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if not speedRotatingPart.foldLimitedOuterRange then
    if speedRotatingPart.foldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v2.foldMinLimit then goto L34 end
    end
    return false
  elseif self.spec_foldable.foldAnimTime <= speedRotatingPart.foldMaxLimit and speedRotatingPart.foldMinLimit < self.spec_foldable.foldAnimTime then
    return false
  end
  return superFunc(self, speedRotatingPart)
end
function Foldable.loadCompensationNodeFromXML(v0, superFunc, speedRotatingPart, noEventSend, isSelected)
  local v5 = noEventSend:getValue(isSelected .. "#foldAngleScale")
  speedRotatingPart.foldAngleScale = v5
  v5 = noEventSend:getValue(isSelected .. "#invertFoldAngleScale", false)
  speedRotatingPart.invertFoldAngleScale = v5
  v5 = superFunc(v0, speedRotatingPart, noEventSend, isSelected)
  return v5
end
function Foldable:getCompensationAngleScale(superFunc, compensationNode)
  local scale = superFunc(self, compensationNode)
  if compensationNode.foldAngleScale ~= nil then
    if compensationNode.invertFoldAngleScale then
    end
    if isSelected.foldMiddleAnimTime ~= nil then
      local v6 = MathUtil.lerp(compensationNode.foldAngleScale, 1, v5 / (1 - isSelected.foldMiddleAnimTime))
      return scale * v6
    end
    v6 = MathUtil.lerp(compensationNode.foldAngleScale, 1, v5)
  end
  return scale
end
function Foldable.loadWheelFromXML(v0, superFunc, speedRotatingPart, noEventSend, isSelected, v5)
  XMLUtil.checkDeprecatedXMLElements(speedRotatingPart, "vehicle.wheels#versatileFoldMinLimit", noEventSend .. isSelected .. "#versatileFoldMinLimit")
  XMLUtil.checkDeprecatedXMLElements(speedRotatingPart, "vehicle.wheels#versatileFoldMaxLimit", noEventSend .. isSelected .. "#versatileFoldMaxLimit")
  local v6 = speedRotatingPart:getValue(noEventSend .. isSelected .. "#versatileFoldMinLimit", 0)
  v5.versatileFoldMinLimit = v6
  v6 = speedRotatingPart:getValue(noEventSend .. isSelected .. "#versatileFoldMaxLimit", 1)
  v5.versatileFoldMaxLimit = v6
  v6 = superFunc(v0, speedRotatingPart, noEventSend, isSelected, v5)
  return v6
end
function Foldable:getIsVersatileYRotActive(superFunc, wheel)
  if wheel.versatileFoldMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v2.versatileFoldMinLimit then goto L16 end
  end
  return false
  return superFunc(self, wheel)
end
function Foldable.loadWorkAreaFromXML(v0, superFunc, speedRotatingPart, noEventSend, isSelected)
  local v5 = noEventSend:getValue(isSelected .. "#foldLimitedOuterRange", false)
  speedRotatingPart.foldLimitedOuterRange = v5
  if speedRotatingPart.foldLimitedOuterRange then
  end
  XMLUtil.checkDeprecatedXMLElements(noEventSend, isSelected .. "#foldMinLimit", isSelected .. ".folding#minLimit")
  XMLUtil.checkDeprecatedXMLElements(noEventSend, isSelected .. "#foldMaxLimit", isSelected .. ".folding#maxLimit")
  local v7 = noEventSend:getValue(isSelected .. ".folding#minLimit", v5)
  speedRotatingPart.foldMinLimit = v7
  v7 = noEventSend:getValue(isSelected .. ".folding#maxLimit", v6)
  speedRotatingPart.foldMaxLimit = v7
  v7 = superFunc(v0, speedRotatingPart, noEventSend, isSelected)
  return v7
end
function Foldable:getIsWorkAreaActive(superFunc, workArea)
  if not workArea.foldLimitedOuterRange then
    if workArea.foldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v2.foldMinLimit then goto L34 end
    end
    return false
  elseif self.spec_foldable.foldAnimTime <= workArea.foldMaxLimit and workArea.foldMinLimit < self.spec_foldable.foldAnimTime then
    return false
  end
  return superFunc(self, workArea)
end
function Foldable.loadGroundReferenceNode(v0, superFunc, workArea, noEventSend, isSelected)
  local v5 = superFunc(v0, workArea, noEventSend, isSelected)
  if v5 then
    local v6 = workArea:getValue(noEventSend .. ".folding#minLimit", 0)
    isSelected.foldMinLimit = v6
    v6 = workArea:getValue(noEventSend .. ".folding#maxLimit", 1)
    isSelected.foldMaxLimit = v6
  end
  return v5
end
function Foldable:updateGroundReferenceNode(superFunc, groundReferenceNode)
  superFunc(self, groundReferenceNode)
  local foldAnimTime = self:getFoldAnimTime()
  if groundReferenceNode.foldMaxLimit >= foldAnimTime then
    -- if v3 >= v2.foldMinLimit then goto L18 end
  end
  groundReferenceNode.isActive = false
end
function Foldable.loadLevelerNodeFromXML(v0, superFunc, workArea, noEventSend, isSelected)
  local v5 = noEventSend:getValue(isSelected .. "#foldLimitedOuterRange", false)
  workArea.foldLimitedOuterRange = v5
  if workArea.foldLimitedOuterRange then
  end
  local v7 = noEventSend:getValue(isSelected .. "#foldMinLimit", v5)
  workArea.foldMinLimit = v7
  v7 = noEventSend:getValue(isSelected .. "#foldMaxLimit", v6)
  workArea.foldMaxLimit = v7
  v7 = superFunc(v0, workArea, noEventSend, isSelected)
  return v7
end
function Foldable:getIsLevelerPickupNodeActive(superFunc, levelerNode)
  if not levelerNode.foldLimitedOuterRange then
    if levelerNode.foldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v2.foldMinLimit then goto L34 end
    end
    return false
  elseif self.spec_foldable.foldAnimTime <= levelerNode.foldMaxLimit and levelerNode.foldMinLimit < self.spec_foldable.foldAnimTime then
    return false
  end
  return superFunc(self, levelerNode)
end
function Foldable:loadMovingToolFromXML(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  v5 = xmlFile:getValue(key .. "#foldMinLimit", 0)
  entry.foldMinLimit = v5
  v5 = xmlFile:getValue(key .. "#foldMaxLimit", 1)
  entry.foldMaxLimit = v5
  entry.hasRequiredFoldingConfiguration = true
  if self.configurations.folding ~= nil then
    v5 = xmlFile:getValue(key .. "#foldingConfigurationIndex")
    if v5 ~= nil and self.configurations.folding ~= v5 then
      entry.hasRequiredFoldingConfiguration = false
    end
    local v6 = xmlFile:getValue(key .. "#foldingConfigurationIndices", nil, true)
    if 0 < #v6 then
      entry.hasRequiredFoldingConfiguration = false
      -- TODO: structure LOP_FORNPREP (pc 71, target 84)
      if self.configurations.folding == v6[1] then
        entry.hasRequiredFoldingConfiguration = true
      else
        -- TODO: structure LOP_FORNLOOP (pc 83, target 72)
      end
    end
  end
  return true
end
function Foldable:getIsMovingToolActive(superFunc, movingTool)
  if not movingTool.hasRequiredFoldingConfiguration then
    return false
  end
  local foldAnimTime = self:getFoldAnimTime()
  if movingTool.foldMaxLimit >= foldAnimTime then
    -- if v3 >= v2.foldMinLimit then goto L18 end
  end
  return false
  return superFunc(self, movingTool)
end
function Foldable.loadMovingPartFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  return true
end
function Foldable:getIsMovingPartActive(superFunc, movingPart)
  if movingPart.foldMaxLimit == 1 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x3 -> L21
  end
  local foldAnimTime = self:getFoldAnimTime()
  if movingPart.foldMaxLimit >= foldAnimTime then
    -- if v3 >= v2.foldMinLimit then goto L21 end
  end
  return false
  foldAnimTime = superFunc(self, movingPart)
  return foldAnimTime
end
function Foldable:getCanBeTurnedOn(superFunc)
  if self.spec_foldable.turnOnFoldMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.turnOnFoldMinLimit then goto L16 end
  end
  return false
  return superFunc(self)
end
function Foldable:getIsNextCoverStateAllowed(superFunc, nextState)
  local noEventSend = superFunc(self, nextState)
  if not noEventSend then
    return false
  end
  if self.spec_foldable.toggleCoverMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.toggleCoverMinLimit then goto L23 end
  end
  return false
  return true
end
function Foldable:getIsInWorkPosition(superFunc)
  if self.spec_foldable.turnOnFoldDirection ~= 0 and #self.spec_foldable.foldingParts ~= 0 then
    if self.spec_foldable.turnOnFoldDirection == -1 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x2 -> L29
    end
    if levelerNode.turnOnFoldDirection == 1 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x6 -> L29
    end
    return false
  end
  return superFunc(self)
end
function Foldable:getTurnedOnNotAllowedWarning(superFunc)
  if self.spec_foldable.turnOnFoldMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.turnOnFoldMinLimit then goto L17 end
  end
  return levelerNode.unfoldWarning
  return superFunc(self)
end
function Foldable:isDetachAllowed(superFunc)
  if self.spec_foldable.detachingMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.detachingMinLimit then goto L18 end
  end
  return false, levelerNode.unfoldWarning
  if not levelerNode.allowDetachingWhileFolding then
    if levelerNode.foldMiddleAnimTime ~= nil then
      local noEventSend = math.abs(levelerNode.foldAnimTime - levelerNode.foldMiddleAnimTime)
      -- if 0.001 >= v3 then goto L51 end
    end
    if 0 < levelerNode.foldAnimTime and levelerNode.foldAnimTime < 1 then
      return false, levelerNode.detachWarning
    end
  end
  noEventSend = superFunc(self)
  return noEventSend
end
function Foldable:isAttachAllowed(superFunc, farmId, attacherVehicle)
  if self.spec_foldable.attachingMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.attachingMinLimit then goto L18 end
  end
  return false, isSelected.unfoldWarning
  return superFunc(self, farmId, attacherVehicle)
end
function Foldable:getAllowsLowering(superFunc)
  if self.spec_foldable.loweringMaxLimit >= self.spec_foldable.foldAnimTime then
    -- if v0.spec_foldable.foldAnimTime >= v0.spec_foldable.loweringMinLimit then goto L18 end
  end
  return false, levelerNode.unfoldWarning
  return superFunc(self)
end
function Foldable:getIsLowered(superFunc, default)
  local state = self:getIsFoldMiddleAllowed()
  if state and self.spec_foldable.foldMiddleAnimTime ~= nil and self.spec_foldable.foldMiddleInputButton ~= nil then
    if self.spec_foldable.ignoreFoldMiddleWhileFolded then
      local v5 = self:getFoldAnimTime()
      if self.spec_foldable.foldMiddleAnimTime < v5 then
      end
    end
    if not state then
      if noEventSend.foldMoveDirection ~= 0 then
        if 0 < noEventSend.foldMiddleDirection then
          -- if v3.foldAnimTime >= v3.foldMiddleAnimTime + 0.01 then goto L108 end
          if noEventSend.foldMoveDirection < 0 and noEventSend.moveToMiddle == true then
          end
          return v5
          -- goto L108  (LOP_JUMP +51)
        end
        -- if v3.foldMiddleAnimTime - 0.01 >= v3.foldAnimTime then goto L108 end
        if 0 < noEventSend.foldMoveDirection and noEventSend.moveToMiddle == true then
        end
        return v5
      else
        if 0 < noEventSend.foldMiddleDirection and noEventSend.foldAnimTime < 0.01 then
          return true
        end
        if noEventSend.foldMiddleDirection < 0 then
          v5 = math.abs(1 - noEventSend.foldAnimTime)
          if v5 < 0.01 then
            return true
          end
        end
      end
      return false
    end
    v5 = superFunc(self, default)
    return v5
  end
  state = superFunc(self, default)
  return state
end
function Foldable:registerLoweringActionEvent(superFunc, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName, ignoreCollisions)
  if 0 < #self.spec_foldable.foldingParts and self.spec_foldable.foldMiddleAnimTime ~= nil then
    self:clearActionEventsTable(self.spec_foldable.actionEventsLowering)
    if self.spec_foldable.requiresPower then
      local v16, v17 = self:addPoweredActionEvent(self.spec_foldable.actionEventsLowering, self.spec_foldable.foldMiddleInputButton, self, Foldable.actionEventFoldMiddle, false, true, false, true, nil, nil, ignoreCollisions)
    else
      v16, v17 = self:addActionEvent(self.spec_foldable.actionEventsLowering, self.spec_foldable.foldMiddleInputButton, self, Foldable.actionEventFoldMiddle, false, true, false, true, nil, nil, ignoreCollisions)
    end
    v16:setActionEventTextPriority(v15, GS_PRIO_HIGH)
    Foldable.updateActionEventFoldMiddle(self)
    if v13.foldMiddleInputButton == inputAction then
      return v14, v15
    end
  end
  return superFunc(self, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
end
function Foldable.registerSelfLoweringActionEvent(v0, superFunc, levelerNode, noEventSend, isSelected, v5, v6, v7, v8, v9, v10, v11, v12)
  return Foldable.registerLoweringActionEvent(v0, superFunc, levelerNode, noEventSend, isSelected, v5, v6, v7, v8, v9, v10, v11, v12)
end
function Foldable.loadGroundAdjustedNodeFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  XMLUtil.checkDeprecatedXMLElements(levelerNode, noEventSend .. "#foldMinLimit", noEventSend .. ".foldable#minLimit")
  XMLUtil.checkDeprecatedXMLElements(levelerNode, noEventSend .. "#foldMaxLimit", noEventSend .. ".foldable#maxLimit")
  v5 = levelerNode:getValue(noEventSend .. ".foldable#minLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. ".foldable#maxLimit", 1)
  isSelected.foldMaxLimit = v5
  return true
end
function Foldable:getIsGroundAdjustedNodeActive(superFunc, adjustedNode)
  if self.spec_foldable.foldAnimTime ~= nil then
    if adjustedNode.foldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v2.foldMinLimit then goto L16 end
    end
    return false
  end
  return superFunc(self, adjustedNode)
end
function Foldable:loadSprayTypeFromXML(superFunc, xmlFile, key, sprayType)
  local v5 = xmlFile:getValue(key .. "#foldMinLimit")
  sprayType.foldMinLimit = v5
  v5 = xmlFile:getValue(key .. "#foldMaxLimit")
  sprayType.foldMaxLimit = v5
  sprayType.hasRequiredFoldingConfiguration = true
  if self.configurations.folding ~= nil then
    v5 = xmlFile:getValue(key .. "#foldingConfigurationIndex")
    if v5 ~= nil and self.configurations.folding ~= v5 then
      sprayType.hasRequiredFoldingConfiguration = false
    end
    local v6 = xmlFile:getValue(key .. "#foldingConfigurationIndices", nil, true)
    if 0 < #v6 then
      sprayType.hasRequiredFoldingConfiguration = false
      -- TODO: structure LOP_FORNPREP (pc 60, target 73)
      if self.configurations.folding == v6[1] then
        sprayType.hasRequiredFoldingConfiguration = true
      else
        -- TODO: structure LOP_FORNLOOP (pc 72, target 61)
      end
    end
  end
  v5 = superFunc(self, xmlFile, key, sprayType)
  return v5
end
function Foldable:getIsSprayTypeActive(superFunc, sprayType)
  if sprayType.foldMinLimit ~= nil and sprayType.foldMaxLimit ~= nil and self.spec_foldable.foldAnimTime ~= nil then
    if sprayType.foldMaxLimit >= self.spec_foldable.foldAnimTime then
      -- if v0.spec_foldable.foldAnimTime >= v2.foldMinLimit then goto L24 end
    end
    return false
  end
  if not sprayType.hasRequiredFoldingConfiguration then
    return false
  end
  return superFunc(self, sprayType)
end
function Foldable.getCanBeSelected(v0, superFunc)
  return true
end
function Foldable.loadInputAttacherJoint(v0, superFunc, levelerNode, noEventSend, isSelected, v5)
  local v6 = levelerNode:getValue(noEventSend .. "#foldMinLimit")
  isSelected.foldMinLimit = v6
  v6 = levelerNode:getValue(noEventSend .. "#foldMaxLimit")
  isSelected.foldMaxLimit = v6
  v6 = superFunc(v0, levelerNode, noEventSend, isSelected, v5)
  return v6
end
function Foldable:getIsInputAttacherActive(superFunc, inputAttacherJoint)
  if inputAttacherJoint.foldMinLimit ~= nil and inputAttacherJoint.foldMaxLimit ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if foldAnimTime >= inputAttacherJoint.foldMinLimit then
      -- if v2.foldMaxLimit >= v3 then goto L21 end
    end
    return false
  end
  foldAnimTime = superFunc(self, inputAttacherJoint)
  return foldAnimTime
end
function Foldable:loadAdditionalCharacterFromXML(superFunc, xmlFile)
  local isSelected = xmlFile:getValue("vehicle.enterable.additionalCharacter#foldMinLimit")
  self.spec_enterable.additionalCharacterFoldMinLimit = isSelected
  isSelected = xmlFile:getValue("vehicle.enterable.additionalCharacter#foldMaxLimit")
  self.spec_enterable.additionalCharacterFoldMaxLimit = isSelected
  isSelected = superFunc(self, xmlFile)
  return isSelected
end
function Foldable:getIsAdditionalCharacterActive(superFunc)
  if self.spec_enterable.additionalCharacterFoldMinLimit ~= nil and self.spec_enterable.additionalCharacterFoldMaxLimit ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if self.spec_enterable.additionalCharacterFoldMinLimit <= foldAnimTime and foldAnimTime <= self.spec_enterable.additionalCharacterFoldMaxLimit then
      return true
    end
  end
  foldAnimTime = superFunc(self)
  return foldAnimTime
end
function Foldable:getAllowDynamicMountObjects(superFunc)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= self.spec_foldable.dynamicMountMinLimit then
    -- if v0.spec_foldable.dynamicMountMaxLimit >= v3 then goto L15 end
  end
  return false
  return superFunc(self)
end
function Foldable:loadSupportAnimationFromXML(superFunc, supportAnimation, xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#foldMinLimit", key .. ".folding#minLimit")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#foldMaxLimit", key .. ".folding#maxLimit")
  local v5 = xmlFile:getValue(key .. ".folding#minLimit", 0)
  supportAnimation.foldMinLimit = v5
  v5 = xmlFile:getValue(key .. ".folding#maxLimit", 1)
  supportAnimation.foldMaxLimit = v5
  v5 = superFunc(self, supportAnimation, xmlFile, key)
  return v5
end
function Foldable:getIsSupportAnimationAllowed(superFunc, supportAnimation)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= supportAnimation.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, supportAnimation)
end
function Foldable:loadSteeringAxleFromXML(superFunc, spec, xmlFile, key)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#foldMinLimit", key .. ".folding#minLimit")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#foldMaxLimit", key .. ".folding#maxLimit")
  local v5 = xmlFile:getValue(key .. ".folding#minLimit", 0)
  spec.foldMinLimit = v5
  v5 = xmlFile:getValue(key .. ".folding#maxLimit", 1)
  spec.foldMaxLimit = v5
  v5 = superFunc(self, spec, xmlFile, key)
  return v5
end
function Foldable:getIsSteeringAxleAllowed(superFunc)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= self.spec_attachable.foldMinLimit then
    -- if v0.spec_attachable.foldMaxLimit >= v3 then goto L15 end
  end
  return false
  return superFunc(self)
end
function Foldable.loadFillUnitFromXML(v0, superFunc, levelerNode, noEventSend, isSelected, v5)
  local v6 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v6
  v6 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v6
  v6 = superFunc(v0, levelerNode, noEventSend, isSelected, v5)
  return v6
end
function Foldable:getFillUnitSupportsToolType(superFunc, fillUnitIndex, toolType)
  if toolType ~= ToolType.UNDEFINED and self.spec_fillUnit.fillUnits[fillUnitIndex] ~= nil and self.spec_fillUnit.fillUnits[fillUnitIndex].foldMinLimit ~= nil and self.spec_fillUnit.fillUnits[fillUnitIndex].foldMaxLimit ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if foldAnimTime >= self.spec_fillUnit.fillUnits[fillUnitIndex].foldMinLimit then
      -- if v0.spec_fillUnit.fillUnits[v2].foldMaxLimit >= v5 then goto L32 end
    end
    return false
  end
  return superFunc(self, fillUnitIndex, toolType)
end
function Foldable.loadTurnedOnAnimationFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  return v5
end
function Foldable:getIsTurnedOnAnimationActive(superFunc, turnedOnAnimation)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= turnedOnAnimation.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, turnedOnAnimation)
end
function Foldable.loadAttacherJointHeightNode(v0, superFunc, levelerNode, noEventSend, isSelected, v5)
  local v6 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v6
  v6 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v6
  v6 = superFunc(v0, levelerNode, noEventSend, isSelected, v5)
  return v6
end
function Foldable:getIsAttacherJointHeightNodeActive(superFunc, heightNode)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= heightNode.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, heightNode)
end
function Foldable.loadPickupFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  return v5
end
function Foldable:getCanChangePickupState(superFunc, spec, newState)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= spec.foldMinLimit then
    -- if v2.foldMaxLimit >= v4 then goto L13 end
  end
  return false
  return superFunc(self, spec, newState)
end
function Foldable.loadCutterTiltFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  return true
end
function Foldable:getCutterTiltIsActive(superFunc, automaticTilt)
  local noEventSend, isSelected = superFunc(self, automaticTilt)
  if not noEventSend then
    return noEventSend, isSelected
  end
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= automaticTilt.foldMinLimit then
    -- if v2.foldMaxLimit >= v5 then goto L20 end
  end
  return false, true
  return true, false
end
function Foldable.loadPreprunerNodeFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  return true
end
function Foldable:getIsPreprunerNodeActive(superFunc, prunerNode)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= prunerNode.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, prunerNode)
end
function Foldable.loadShovelNode(v0, superFunc, levelerNode, noEventSend, isSelected)
  superFunc(v0, levelerNode, noEventSend, isSelected)
  local v5 = levelerNode:getValue(noEventSend .. "#foldMinLimit", 0)
  isSelected.foldMinLimit = v5
  v5 = levelerNode:getValue(noEventSend .. "#foldMaxLimit", 1)
  isSelected.foldMaxLimit = v5
  return true
end
function Foldable:getShovelNodeIsActive(superFunc, shovelNode)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= shovelNode.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, shovelNode)
end
function Foldable.loadSteeringAngleNodeFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = noEventSend:getValue(isSelected .. "#foldMinLimit", 0)
  levelerNode.foldMinLimit = v5
  v5 = noEventSend:getValue(isSelected .. "#foldMaxLimit", 1)
  levelerNode.foldMaxLimit = v5
  return true
end
function Foldable:updateSteeringAngleNode(superFunc, steeringAngleNode, angle, dt)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= steeringAngleNode.foldMinLimit then
    -- if v2.foldMaxLimit >= v5 then goto L12 end
  end
  return
  return superFunc(self, steeringAngleNode, angle, dt)
end
function Foldable.loadWoodHarvesterHeaderTiltFromXML(v0, superFunc, levelerNode, noEventSend, isSelected)
  local v5 = superFunc(v0, levelerNode, noEventSend, isSelected)
  if not v5 then
    return false
  end
  v5 = noEventSend:getValue(isSelected .. "#foldMinLimit", 0)
  levelerNode.foldMinLimit = v5
  v5 = noEventSend:getValue(isSelected .. "#foldMaxLimit", 1)
  levelerNode.foldMaxLimit = v5
  return true
end
function Foldable:getIsWoodHarvesterTiltStateAllowed(superFunc, headerTilt)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= headerTilt.foldMinLimit then
    -- if v2.foldMaxLimit >= v3 then goto L13 end
  end
  return false
  return superFunc(self, headerTilt)
end
function Foldable:getCanToggleCrabSteering(superFunc)
  local foldAnimTime = self:getFoldAnimTime()
  if foldAnimTime >= self.spec_foldable.crabSteeringMinLimit then
    -- if v0.spec_foldable.crabSteeringMaxLimit >= v3 then goto L17 end
  end
  return false, levelerNode.unfoldWarning
  return superFunc(self)
end
function Foldable:getBrakeForce(superFunc)
  if self.spec_foldable.releaseBrakesWhileFolding and self.spec_foldable.foldMoveDirection ~= 0 then
    return 0
  end
  return superFunc(self)
end
function Foldable:getRequiresPower(superFunc)
  if self.spec_foldable.foldMoveDirection == 0 then
    local levelerNode = superFunc(self)
  end
  return levelerNode
end
function Foldable:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_foldable.actionEvents)
    if isActiveForInputIgnoreSelection then
      if self.spec_foldable.foldMiddleAnimTime ~= nil and self.spec_foldable.foldMiddleAnimTime ~= 1 then
      end
      if not isSelected then
        if noEventSend.requiresPower then
          local v7, v8 = self:addPoweredActionEvent(noEventSend.actionEvents, noEventSend.foldInputButton, self, Foldable.actionEventFold, false, true, false, true, nil)
        else
          v7, v8 = self:addActionEvent(noEventSend.actionEvents, noEventSend.foldInputButton, self, Foldable.actionEventFold, false, true, false, true, nil)
        end
        v7:setActionEventTextPriority(v6, GS_PRIO_HIGH)
        Foldable.updateActionEventFold(self)
        v7, v8 = self:addPoweredActionEvent(noEventSend.actionEvents, InputAction.FOLD_ALL_IMPLEMENTS, self, Foldable.actionEventFoldAll, false, true, false, true, nil)
        v7:setActionEventTextVisibility(v8, false)
      end
    end
  end
end
function Foldable:getCanAIImplementContinueWork(superFunc)
  local levelerNode, noEventSend, isSelected = superFunc(self)
  if not levelerNode then
    return false, noEventSend, isSelected
  end
  if 0 < #self.spec_foldable.foldingParts and self.spec_foldable.allowUnfoldingByAI then
    if self.spec_foldable.foldMiddleAnimTime ~= nil then
      local v7 = math.abs(self.spec_foldable.foldAnimTime - self.spec_foldable.foldMiddleAnimTime)
      -- if v7 < 0.001 then goto L47 end
    end
    if v5.foldAnimTime ~= 0 and v5.foldAnimTime ~= 1 then
    end
  end
  return levelerNode
end
function Foldable:getIsAIReadyToDrive(superFunc)
  if 0 < #self.spec_foldable.foldingParts and self.spec_foldable.allowUnfoldingByAI then
    if 0 < self.spec_foldable.turnOnFoldDirection then
      -- if 0 >= v0.spec_foldable.foldAnimTime then goto L31 end
      return false
    elseif self.spec_foldable.foldAnimTime < 1 then
      return false
    end
  end
  return superFunc(self)
end
function Foldable:getIsAIPreparingToDrive(superFunc)
  if 0 < #self.spec_foldable.foldingParts and self.spec_foldable.allowUnfoldingByAI and self.spec_foldable.foldAnimTime ~= self.spec_foldable.foldMiddleAnimTime and self.spec_foldable.foldAnimTime ~= 0 and self.spec_foldable.foldAnimTime ~= 1 then
    return true
  end
  return superFunc(self)
end
function Foldable:onDeactivate()
  if not self.spec_foldable.keepFoldingWhileDetached and not self.spec_foldable.lowerWhileDetach then
    self:setFoldDirection(0, true)
  end
end
function Foldable:onSetLoweredAll(doLowering, jointDescIndex)
  if self.spec_foldable.foldMiddleAnimTime ~= nil then
    local isSelected = self:getIsFoldMiddleAllowed()
    if isSelected then
      if doLowering then
        self:setFoldState(-self.spec_foldable.foldMiddleAIRaiseDirection, false)
        return
      end
      self:setFoldState(noEventSend.foldMiddleAIRaiseDirection, true)
    end
  end
end
function Foldable:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  if self.spec_foldable.lowerWhileDetach and attacherVehicle ~= nil then
    local jointDesc = attacherVehicle:getAttacherJointByJointDescIndex(jointDescIndex)
    if not jointDesc.moveDown then
      local v6 = self:getFoldAnimTime()
      if v6 < 0.001 then
        self:setFoldState(1, true, true)
      end
    end
  end
end
function Foldable:onRootVehicleChanged(rootVehicle)
  if 0 < #self.spec_foldable.foldingParts then
    if rootVehicle.actionController ~= nil then
      if self.spec_foldable.controlledActionFold ~= nil then
        isSelected:updateParent(rootVehicle.actionController)
        if self.spec_foldable.controlledActionLower ~= nil then
          isSelected:updateParent(rootVehicle.actionController)
        end
        return
      end
      local isSelected = noEventSend:registerAction("fold", levelerNode.toggleTurnOnInputBinding, 4)
      levelerNode.controlledActionFold = isSelected
      isSelected:setCallback(self, Foldable.actionControllerFoldEvent)
      isSelected:setFinishedFunctions(self, function(self)
        if u0.turnOnFoldDirection < 0 then
          local rootVehicle = self:getFoldAnimTime()
          if rootVehicle ~= 1 and rootVehicle > (u0.foldMiddleAnimTime or 0) then
          end
          return levelerNode
        end
        rootVehicle = self:getFoldAnimTime()
        if rootVehicle ~= 0 and (u0.foldMiddleAnimTime or 1) > rootVehicle then
        end
        return levelerNode
      end, true, true)
      if levelerNode.allowUnfoldingByAI then
        isSelected:addAIEventListener(self, "onAIFieldWorkerStart", 1)
        isSelected:addAIEventListener(self, "onAIImplementStart", 1)
        isSelected:addAIEventListener(self, "onAIImplementPrepare", -1, true)
        if Platform.gameplay.foldAfterAIFinished then
          isSelected:addAIEventListener(self, "onAIImplementEnd", -1, true)
          isSelected:addAIEventListener(self, "onAIFieldWorkerEnd", -1)
        end
      end
      isSelected = self:getIsFoldMiddleAllowed()
      -- if not v4 then goto L195 end
      isSelected = noEventSend:registerAction("lowerFoldable", levelerNode.toggleTurnOnInputBinding, 3)
      levelerNode.controlledActionLower = isSelected
      isSelected:setCallback(self, Foldable.actionControllerLowerEvent)
      if levelerNode.turnOnFoldDirection < 0 then
      else
      end
      isSelected:setFinishedFunctions(v6, v7, v8, levelerNode.foldMiddleAnimTime)
      isSelected:setResetOnDeactivation(false)
      -- if not v2.allowUnfoldingByAI then goto L195 end
      isSelected:addAIEventListener(self, "onAIImplementStartLine", 1)
      isSelected:addAIEventListener(self, "onAIImplementEndLine", -1)
      return
    end
    if levelerNode.controlledActionFold ~= nil then
      isSelected:remove()
    end
    if levelerNode.controlledActionLower ~= nil then
      isSelected:remove()
    end
  end
end
function Foldable:actionControllerFoldEvent(direction)
  if 0 < #self.spec_foldable.foldingParts then
    local noEventSend = self:getIsFoldMiddleAllowed()
    if noEventSend and 0 < self.spec_foldable.foldAnimTime and self.spec_foldable.foldAnimTime < self.spec_foldable.foldMiddleAnimTime then
      return false
    end
    noEventSend = self:getIsFoldAllowed(levelerNode.turnOnFoldDirection * direction, false)
    if noEventSend then
      if levelerNode.turnOnFoldDirection * direction == levelerNode.turnOnFoldDirection then
        if levelerNode.turnOnFoldDirection * direction < 0 then
          -- if 0 < v2.foldAnimTime then goto L54 end
        end
        -- if 0 >= v1 then goto L81 end
        -- if v2.foldAnimTime >= 1 then goto L81 end
        self:setFoldState(direction, true)
      else
        if levelerNode.turnOnFoldDirection * direction < 0 then
          -- if 0 < v2.foldAnimTime then goto L76 end
        end
        if 0 < direction and levelerNode.foldAnimTime < 1 then
          self:setFoldState(direction, false)
        end
      end
      return true
    end
  end
  return false
end
function Foldable:actionControllerLowerEvent(direction)
  if 0 < #self.spec_foldable.foldingParts then
    local noEventSend = self:getIsFoldMiddleAllowed()
    if noEventSend then
      if self.spec_foldable.turnOnFoldDirection * direction == self.spec_foldable.turnOnFoldDirection then
        self:setFoldState(self.spec_foldable.turnOnFoldDirection * direction, false)
      elseif 0 < self.spec_foldable.foldMiddleDirection then
        if self.spec_foldable.foldMiddleAnimTime - 0.01 <= self.spec_foldable.foldAnimTime then
          self:setFoldState(-(self.spec_foldable.turnOnFoldDirection * direction), true)
          -- goto L67  (LOP_JUMP +24)
        end
        self:setFoldState(direction, true)
      else
        if self.spec_foldable.foldAnimTime <= self.spec_foldable.foldMiddleAnimTime + 0.01 then
          self:setFoldState(-(self.spec_foldable.turnOnFoldDirection * direction), true)
        else
          self:setFoldState(self.spec_foldable.turnOnFoldDirection * direction, true)
        end
      end
      return true
    end
  end
  return false
end
function Foldable:onPreDetach(attacherVehicle, implement)
  if self.spec_foldable.lowerWhileDetach then
    local foldAnimTime = self:getFoldAnimTime()
    local v5 = math.abs(foldAnimTime - self.spec_foldable.foldMiddleAnimTime)
    if v5 < 0.001 then
      self:setFoldState(-1, false, true)
    end
  end
end
function Foldable:onPreAttachImplement(object, inputJointDescIndex, jointDescIndex)
  if object.spec_foldable ~= nil and object.spec_foldable.useParentFoldingState then
    self.spec_foldable.subFoldingStateVehicles[object] = object
    Foldable.setAnimTime(object, self.spec_foldable.foldAnimTime, false)
  end
end
function Foldable:onPreDetachImplement(implement)
  if implement.object.spec_foldable ~= nil and implement.object.spec_foldable.useParentFoldingState then
    self.spec_foldable.subFoldingStateVehicles[implement.object] = nil
  end
end
function Foldable:setAnimTime(animTime, placeComponents)
  self.spec_foldable.foldAnimTime = animTime
  self.spec_foldable.loadedFoldAnimTime = nil
  for v7, v8 in pairs(self.spec_foldable.foldingParts) do
    if v8.animCharSet ~= 0 then
      enableAnimTrack(v8.animCharSet, 0)
      setAnimTrackTime(v8.animCharSet, 0, noEventSend.foldAnimTime * v8.animDuration, true)
      disableAnimTrack(v8.animCharSet, 0)
    else
      local v10 = self:getAnimationDuration(v8.animationName)
      self:setAnimationTime(v8.animationName, noEventSend.foldAnimTime * noEventSend.maxFoldAnimDuration / v10, true)
    end
  end
  if placeComponents == nil then
  end
  if self.updateCylinderedInitial ~= nil then
    self:updateCylinderedInitial(placeComponents)
  end
  if placeComponents and self.isServer then
    for v7, v8 in pairs(noEventSend.foldingParts) do
      if not (v8.componentJoint ~= nil) then
        continue
      end
      if v8.anchorActor == 1 then
      end
      local v12, v13, v14 = localToWorld(v10, v8.x, v8.y, v8.z)
      local v15, v16, v17 = localDirectionToWorld(v10, v8.upX, v8.upY, v8.upZ)
      local v18, v19, v20 = localDirectionToWorld(v10, v8.dirX, v8.dirY, v8.dirZ)
      setWorldTranslation(self.components[v9.componentIndices[(v8.anchorActor + 1) % 2 + 1]].node, v12, v13, v14)
      I3DUtil.setWorldDirection(self.components[v9.componentIndices[(v8.anchorActor + 1) % 2 + 1]].node, v18, v19, v20, v15, v16, v17)
      self:setComponentJointFrame(v9, v8.anchorActor)
    end
  end
  for v7, v8 in pairs(noEventSend.subFoldingStateVehicles) do
    Foldable.setAnimTime(v8, animTime, placeComponents)
  end
  SpecializationUtil.raiseEvent(self, "onFoldTimeChanged", noEventSend.foldAnimTime)
end
function Foldable:updateActionEventFold()
  if self.spec_foldable.actionEvents[self.spec_foldable.foldInputButton] ~= nil then
    local direction = self:getToggledFoldDirection()
    if direction == self.spec_foldable.turnOnFoldDirection then
    else
    end
    v5:setActionEventText(levelerNode.actionEventId, isSelected)
  end
end
function Foldable:updateActionEventFoldMiddle()
  if self.spec_foldable.actionEventsLowering[self.spec_foldable.foldMiddleInputButton] ~= nil then
    local state = self:getIsFoldMiddleAllowed()
    isSelected:setActionEventActive(self.spec_foldable.actionEventsLowering[self.spec_foldable.foldMiddleInputButton].actionEventId, state)
    if state then
      local v5 = self:getToggledFoldMiddleDirection()
      if v5 ~= self.spec_foldable.foldMiddleDirection then
      end
      if direction.ignoreFoldMiddleWhileFolded then
        v5 = self:getFoldAnimTime()
        if direction.foldMiddleAnimTime < v5 then
          v5 = self:getIsLowered(true)
        end
      end
      if isSelected then
      else
      end
      v6:setActionEventText(levelerNode.actionEventId, v5)
    end
  end
end
function Foldable:actionEventFold(actionName, inputValue, callbackState, isAnalog)
  if 0 < #self.spec_foldable.foldingParts then
    local v6 = self:getToggledFoldDirection()
    local v7, v8 = self:getIsFoldAllowed(v6, false)
    if v7 then
      if v6 == self.spec_foldable.turnOnFoldDirection then
        self:setFoldState(v6, true)
        return
      end
      self:setFoldState(v6, false)
      local v9 = self:getIsFoldMiddleAllowed()
      -- if not v9 then goto L76 end
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L76
      v9 = self:getAttacherVehicle()
      local v10 = v9:getAttacherJointIndexFromObject(self)
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L76
      local v11 = v9:getJointMoveDown(v10)
      if v6 ~= v5.turnOnFoldDirection then
      end
      -- if true == v11 then goto L76 end
      v9:setJointMoveDown(v10, true)
      return
    end
    if v8 ~= nil then
      v9:showBlinkingWarning(v8, 2000)
    end
  end
end
function Foldable:actionEventFoldMiddle(actionName, inputValue, callbackState, isAnalog)
  if 0 < #self.spec_foldable.foldingParts then
    local v6 = self:getIsFoldMiddleAllowed()
    if v6 then
      if self.spec_foldable.ignoreFoldMiddleWhileFolded then
        local v7 = self:getFoldAnimTime()
        if self.spec_foldable.foldMiddleAnimTime < v7 then
        end
      end
      if not v6 then
        v7 = self:getToggledFoldMiddleDirection()
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x7 -> L85
        if v7 == v5.turnOnFoldDirection then
          self:setFoldState(v7, false)
        else
          self:setFoldState(v7, true)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L85
        local v8 = self:getAttacherVehicle()
        local v9 = v8:getAttacherJointIndexFromObject(self)
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L85
        local v10 = v8:getJointMoveDown(v9)
        if v7 ~= v5.turnOnFoldDirection then
        end
        -- if true == v10 then goto L85 end
        v8:setJointMoveDown(v9, true)
        return
      end
      v7 = self:getAttacherVehicle()
      if v7 ~= nil then
        v7:handleLowerImplementEvent(self)
      end
    end
  end
end
function Foldable:actionEventFoldAll(actionName, inputValue, callbackState, isAnalog)
  if 0 < #self.spec_foldable.foldingParts then
    local toggleDirection = self:getToggledFoldDirection()
    local v9, v10 = self:getIsFoldAllowed(toggleDirection, false)
    if v9 then
      if toggleDirection == self.spec_foldable.turnOnFoldDirection then
        self:setFoldState(toggleDirection, true)
      else
        self:setFoldState(toggleDirection, false)
      end
    elseif v10 ~= nil then
    end
    local v11 = v11:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 47, target 105)
    if v11[1].setFoldState ~= nil and 0 < #v11[1].spec_foldable.foldingParts then
      local v17 = v11[1]:getToggledFoldDirection()
      local v18, v19 = v11[1]:getIsFoldAllowed(toggleDirection, false)
      if v18 then
        if toggleDirection ~= v5.turnOnFoldDirection then
        end
        if v17 ~= v16.turnOnFoldDirection then
        end
        -- if v20 ~= true then goto L104 end
        if v17 == v16.turnOnFoldDirection then
          v15:setFoldState(v17, true)
        else
          v15:setFoldState(v17, false)
        end
      elseif v19 ~= nil then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 104, target 48)
    if v6 and v7 ~= nil then
      v12:showBlinkingWarning(v7, 2000)
    end
  end
end
