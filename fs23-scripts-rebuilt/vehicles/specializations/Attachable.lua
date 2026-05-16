-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Attachable = {INPUT_ATTACHERJOINT_XML_KEY = "vehicle.attachable.inputAttacherJoints.inputAttacherJoint(?)", INPUT_ATTACHERJOINT_CONFIG_XML_KEY = "vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(?).inputAttacherJoint(?)", SUPPORT_XML_KEY = "vehicle.attachable.support(?)", STEERING_AXLE_XML_KEY = "vehicle.attachable.steeringAxleAngleScale", STEERING_ANGLE_NODE_XML_KEY = "vehicle.attachable.steeringAngleNodes.steeringAngleNode(?)"}
function Attachable.prerequisitesPresent(v0)
  return true
end
function Attachable.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onPreAttach")
  SpecializationUtil.registerEvent(v0, "onPostAttach")
  SpecializationUtil.registerEvent(v0, "onPreDetach")
  SpecializationUtil.registerEvent(v0, "onPostDetach")
  SpecializationUtil.registerEvent(v0, "onSetLowered")
  SpecializationUtil.registerEvent(v0, "onSetLoweredAll")
  SpecializationUtil.registerEvent(v0, "onLeaveRootVehicle")
end
function Attachable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadInputAttacherJoint", Attachable.loadInputAttacherJoint)
  SpecializationUtil.registerFunction(vehicleType, "loadAttacherJointHeightNode", Attachable.loadAttacherJointHeightNode)
  SpecializationUtil.registerFunction(vehicleType, "getIsAttacherJointHeightNodeActive", Attachable.getIsAttacherJointHeightNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "getInputAttacherJointByJointDescIndex", Attachable.getInputAttacherJointByJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getInputAttacherJointIndexByNode", Attachable.getInputAttacherJointIndexByNode)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherVehicle", Attachable.getAttacherVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getShowAttachableMapHotspot", Attachable.getShowAttachableMapHotspot)
  SpecializationUtil.registerFunction(vehicleType, "getInputAttacherJoints", Attachable.getInputAttacherJoints)
  SpecializationUtil.registerFunction(vehicleType, "getIsAttachedTo", Attachable.getIsAttachedTo)
  SpecializationUtil.registerFunction(vehicleType, "getActiveInputAttacherJointDescIndex", Attachable.getActiveInputAttacherJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getActiveInputAttacherJoint", Attachable.getActiveInputAttacherJoint)
  SpecializationUtil.registerFunction(vehicleType, "getAllowsLowering", Attachable.getAllowsLowering)
  SpecializationUtil.registerFunction(vehicleType, "loadSupportAnimationFromXML", Attachable.loadSupportAnimationFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsSupportAnimationAllowed", Attachable.getIsSupportAnimationAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getIsReadyToFinishDetachProcess", Attachable.getIsReadyToFinishDetachProcess)
  SpecializationUtil.registerFunction(vehicleType, "startDetachProcess", Attachable.startDetachProcess)
  SpecializationUtil.registerFunction(vehicleType, "getIsImplementChainLowered", Attachable.getIsImplementChainLowered)
  SpecializationUtil.registerFunction(vehicleType, "getIsInWorkPosition", Attachable.getIsInWorkPosition)
  SpecializationUtil.registerFunction(vehicleType, "getAttachbleAirConsumerUsage", Attachable.getAttachbleAirConsumerUsage)
  SpecializationUtil.registerFunction(vehicleType, "isDetachAllowed", Attachable.isDetachAllowed)
  SpecializationUtil.registerFunction(vehicleType, "isAttachAllowed", Attachable.isAttachAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getIsInputAttacherActive", Attachable.getIsInputAttacherActive)
  SpecializationUtil.registerFunction(vehicleType, "getSteeringAxleBaseVehicle", Attachable.getSteeringAxleBaseVehicle)
  SpecializationUtil.registerFunction(vehicleType, "loadSteeringAxleFromXML", Attachable.loadSteeringAxleFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsSteeringAxleAllowed", Attachable.getIsSteeringAxleAllowed)
  SpecializationUtil.registerFunction(vehicleType, "loadSteeringAngleNodeFromXML", Attachable.loadSteeringAngleNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "updateSteeringAngleNode", Attachable.updateSteeringAngleNode)
  SpecializationUtil.registerFunction(vehicleType, "attachableAddToolCameras", Attachable.attachableAddToolCameras)
  SpecializationUtil.registerFunction(vehicleType, "attachableRemoveToolCameras", Attachable.attachableRemoveToolCameras)
  SpecializationUtil.registerFunction(vehicleType, "preAttach", Attachable.preAttach)
  SpecializationUtil.registerFunction(vehicleType, "postAttach", Attachable.postAttach)
  SpecializationUtil.registerFunction(vehicleType, "preDetach", Attachable.preDetach)
  SpecializationUtil.registerFunction(vehicleType, "postDetach", Attachable.postDetach)
  SpecializationUtil.registerFunction(vehicleType, "setLowered", Attachable.setLowered)
  SpecializationUtil.registerFunction(vehicleType, "setLoweredAll", Attachable.setLoweredAll)
  SpecializationUtil.registerFunction(vehicleType, "setIsAdditionalAttachment", Attachable.setIsAdditionalAttachment)
  SpecializationUtil.registerFunction(vehicleType, "getIsAdditionalAttachment", Attachable.getIsAdditionalAttachment)
  SpecializationUtil.registerFunction(vehicleType, "setIsSupportVehicle", Attachable.setIsSupportVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getIsSupportVehicle", Attachable.getIsSupportVehicle)
  SpecializationUtil.registerFunction(vehicleType, "registerLoweringActionEvent", Attachable.registerLoweringActionEvent)
  SpecializationUtil.registerFunction(vehicleType, "getLoweringActionEventState", Attachable.getLoweringActionEventState)
  SpecializationUtil.registerFunction(vehicleType, "getAllowMultipleAttachments", Attachable.getAllowMultipleAttachments)
  SpecializationUtil.registerFunction(vehicleType, "resolveMultipleAttachments", Attachable.resolveMultipleAttachments)
  SpecializationUtil.registerFunction(vehicleType, "getBlockFoliageDestruction", Attachable.getBlockFoliageDestruction)
end
function Attachable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "findRootVehicle", Attachable.findRootVehicle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActive", Attachable.getIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsOperating", Attachable.getIsOperating)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getBrakeForce", Attachable.getBrakeForce)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", Attachable.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleTurnedOn", Attachable.getCanToggleTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanImplementBeUsedForAI", Attachable.getCanImplementBeUsedForAI)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanAIImplementContinueWork", Attachable.getCanAIImplementContinueWork)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", Attachable.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDeactivateOnLeave", Attachable.getDeactivateOnLeave)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getActiveFarm", Attachable.getActiveFarm)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Attachable.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLowered", Attachable.getIsLowered)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "mountDynamic", Attachable.mountDynamic)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getOwner", Attachable.getOwner)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsInUse", Attachable.getIsInUse)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUpdatePriority", Attachable.getUpdatePriority)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeReset", Attachable.getCanBeReset)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAdditionalLightAttributesFromXML", Attachable.loadAdditionalLightAttributesFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLightActive", Attachable.getIsLightActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowered", Attachable.getIsPowered)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConnectionHoseConfigIndex", Attachable.getConnectionHoseConfigIndex)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", Attachable.getIsMapHotspotVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPowerTakeOffConfigIndex", Attachable.getPowerTakeOffConfigIndex)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDashboardGroupFromXML", Attachable.loadDashboardGroupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDashboardGroupActive", Attachable.getIsDashboardGroupActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPositionQuaternion", Attachable.setWorldPositionQuaternion)
end
function Attachable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDelete", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onSelect", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onUnselect", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", Attachable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterAnimationValueTypes", Attachable)
end
function Attachable.initSpecialization()
  local v3 = v3:getText("configuration_inputAttacherJoint")
  v0:addConfigurationType("inputAttacherJoint", v3, "attachable", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Attachable")
  Attachable.registerInputAttacherJointXMLPaths(Vehicle.xmlSchema, Attachable.INPUT_ATTACHERJOINT_XML_KEY)
  Attachable.registerInputAttacherJointXMLPaths(Vehicle.xmlSchema, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, Attachable.INPUT_ATTACHERJOINT_XML_KEY)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable#connectionHoseConfigId", "Connection hose configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable#powerTakeOffConfigId", "Power take off configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(?)#connectionHoseConfigId", "Connection hose configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(?)#powerTakeOffConfigId", "Power take off configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.brakeForce#force", "Brake force", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.brakeForce#maxForce", "Brake force when vehicle reached mass of #maxForceMass", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.brakeForce#maxForceMass", "When this mass is reached the vehicle will brake with #maxForce", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.brakeForce#loweredForce", "Brake force while the tool is lowered")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.airConsumer#usage", "Air consumption while fully braking", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable#allowFoldingWhileAttached", "Allow folding while attached", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable#allowFoldingWhileLowered", "Allow folding while lowered", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable#blockFoliageDestruction", "If active the vehicle will block the complete foliage destruction of the vehicle chain", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.power#requiresExternalPower", "Tool requires external power from a vehicle with motor to work", true)
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.attachable.power#attachToPowerWarning", "Warning to be displayed if no vehicle with motor is attached", "warning_attachToPower")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.steeringAxleAngleScale#startSpeed", "Start speed", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.steeringAxleAngleScale#endSpeed", "End speed", 30)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.steeringAxleAngleScale#backwards", "Is active backwards", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.steeringAxleAngleScale#speed", "Speed", 0.001)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.steeringAxleAngleScale#useSuperAttachable", "Use super attachable", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.attachable.steeringAxleAngleScale.targetNode#node", "Target node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.attachable.steeringAxleAngleScale.targetNode#refAngle", "Reference angle to transfer from angle between vehicles to defined min. and max. rot for target node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.attachable.steeringAxleAngleScale#minRot", "Min Rotation", 0)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.attachable.steeringAxleAngleScale#maxRot", "Max Rotation", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.steeringAxleAngleScale#direction", "Direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.steeringAxleAngleScale#forceUsage", "Force usage of steering axle, even if attacher vehicle does not have steering bar nodes", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.steeringAxleAngleScale#speedDependent", "Steering axle angle is scaled based on speed with #startSpeed and #endSpeed", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.steeringAxleAngleScale#distanceDelay", "The steering angle is updated delayed after vehicle has been moved this distance", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable.steeringAxleAngleScale#referenceComponentIndex", "If defined the given component is used for steering angle reference. Y between root component and this component will result in steering angle.")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#node", "Steering angle node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#speed", "Change speed (degree per second)", 25)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#scale", "Scale of vehicle to vehicle angle that is applied", 1)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#offset", "Angle offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Attachable.STEERING_ANGLE_NODE_XML_KEY .. "#minSpeed", "Min. speed of vehicle to update", 0)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.attachable.support(?)#animationName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.support(?)#delayedOnLoad", "Defines if the animation is played onPostLoad or onLoadFinished -> useful if the animation collides e.g. with the folding animation", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.support(?)#delayedOnAttach", "Defines if the animation is played before or after the attaching process", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.support(?)#detachAfterAnimation", "Defines if the vehicle is detached after the animation has played", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.support(?)#detachAnimationTime", "Defines when in the support animation the vehicle is detached (detachAfterAnimation needs to be true)", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.attachable.lowerAnimation#name", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attachable.lowerAnimation#speed", "Animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attachable.lowerAnimation#directionOnDetach", "Direction on detach", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attachable.lowerAnimation#defaultLowered", "Is default lowered", false)
  VehicleCamera.registerCameraXMLPaths(Vehicle.xmlSchema, "vehicle.attachable.toolCameras.toolCamera(?)")
  -- TODO: structure LOP_FORNPREP (pc 425, target 439)
  Vehicle.xmlSchema:register(XMLValueType.INT, Lights.ADDITIONAL_LIGHT_ATTRIBUTES_KEYS[1] .. "#inputAttacherJointIndex", "Index of input attacher joint that needs to be active to activate light")
  -- TODO: structure LOP_FORNLOOP (pc 438, target 426)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dashboard.GROUP_XML_KEY .. "#isAttached", "Tool is attached")
  Vehicle.xmlSchema:addDelayedRegistrationFunc("AnimatedVehicle:part", function(self, v1)
    self:register(XMLValueType.INT, v1 .. "#inputAttacherJointIndex", "Input Attacher Joint Index [1..n]")
    self:register(XMLValueType.VECTOR_3, v1 .. "#lowerRotLimitScaleStart", "Lower rotaton limit start")
    self:register(XMLValueType.VECTOR_3, v1 .. "#lowerRotLimitScaleEnd", "Lower rotaton limit end")
    self:register(XMLValueType.VECTOR_3, v1 .. "#upperRotLimitScaleStart", "Upper rotaton limit start")
    self:register(XMLValueType.VECTOR_3, v1 .. "#upperRotLimitScaleEnd", "Upper rotaton limit end")
    self:register(XMLValueType.VECTOR_3, v1 .. "#lowerTransLimitScaleStart", "Lower translation limit start")
    self:register(XMLValueType.VECTOR_3, v1 .. "#lowerTransLimitScaleEnd", "Lower translation limit end")
    self:register(XMLValueType.VECTOR_3, v1 .. "#upperTransLimitScaleStart", "Upper translation limit start")
    self:register(XMLValueType.VECTOR_3, v1 .. "#upperTransLimitScaleEnd", "Upper translation limit end")
    self:register(XMLValueType.ANGLE, v1 .. "#lowerRotationOffsetStart", "Lower rotation offset start")
    self:register(XMLValueType.ANGLE, v1 .. "#lowerRotationOffsetEnd", "Lower rotation offset end")
    self:register(XMLValueType.ANGLE, v1 .. "#upperRotationOffsetStart", "Upper rotation offset start")
    self:register(XMLValueType.ANGLE, v1 .. "#upperRotationOffsetEnd", "Upper rotation offset end")
    self:register(XMLValueType.FLOAT, v1 .. "#lowerDistanceToGroundStart", "Lower distance to ground start")
    self:register(XMLValueType.FLOAT, v1 .. "#lowerDistanceToGroundEnd", "Lower distance to ground end")
    self:register(XMLValueType.FLOAT, v1 .. "#upperDistanceToGroundStart", "Upper distance to ground start")
    self:register(XMLValueType.FLOAT, v1 .. "#upperDistanceToGroundEnd", "Upper distance to ground end")
  end)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).attachable#lowerAnimTime", "Lower animation time")
end
function Attachable:registerInputAttacherJointXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Joint Node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".heightNode(?)#node", "Height Node")
  self:register(XMLValueType.STRING, v1 .. "#jointType", "Joint type")
  self:register(XMLValueType.STRING, v1 .. ".subType#name", "If defined this type needs to match with the sub type in the attacher vehicle")
  self:register(XMLValueType.BOOL, v1 .. ".subType#showWarning", "Show warning if user tries to attach with a different sub type", true)
  self:register(XMLValueType.BOOL, v1 .. "#needsTrailerJoint", "Needs trailer joint (only if no joint type is given)", false)
  self:register(XMLValueType.BOOL, v1 .. "#needsLowJoint", "Needs low trailer joint (only if no joint type is given)", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#topReferenceNode", "Top Reference Node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rootNode", "Root node", "first component")
  self:register(XMLValueType.BOOL, v1 .. "#allowsDetaching", "Allows detaching", true)
  self:register(XMLValueType.BOOL, v1 .. "#fixedRotation", "Fixed rotation (Rot limit is freezed)", false)
  self:register(XMLValueType.BOOL, v1 .. "#hardAttach", "Implement is hard attached", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#nodeVisual", "Visual joint node")
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround#lower", "Lower distance to ground")
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround#upper", "Upper distance to ground")
  self:register(XMLValueType.STRING, v1 .. ".distanceToGround.vehicle(?)#filename", "Vehicle filename to activate these distances")
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround.vehicle(?)#lower", "Lower distance to ground while attached to this vehicle")
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround.vehicle(?)#upper", "Upper distance to ground while attached to this vehicle")
  self:register(XMLValueType.ANGLE, v1 .. "#lowerRotationOffset", "Rotation offset if lowered")
  self:register(XMLValueType.ANGLE, v1 .. "#upperRotationOffset", "Rotation offset if lifted", "8 degrees for implements")
  self:register(XMLValueType.BOOL, v1 .. "#allowsJointRotLimitMovement", "Rotation limit is changed during lifting/lowering", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowsJointTransLimitMovement", "Translation limit is changed during lifting/lowering", true)
  self:register(XMLValueType.BOOL, v1 .. "#needsToolbar", "Needs toolbar", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#steeringBarLeftNode", "Left steering bar node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#steeringBarRightNode", "Right steering bar node")
  self:register(XMLValueType.VECTOR_3, v1 .. "#upperRotLimitScale", "Upper rot limit scale", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#lowerRotLimitScale", "Lower rot limit scale", "0 0 0")
  self:register(XMLValueType.FLOAT, v1 .. "#rotLimitThreshold", "Defines when the transition from upper to lower rot limit starts (0: directly, 0.9: after 90% of lowering)", 0)
  self:register(XMLValueType.VECTOR_3, v1 .. "#upperTransLimitScale", "Upper trans limit scale", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#lowerTransLimitScale", "Lower trans limit scale", "0 0 0")
  self:register(XMLValueType.FLOAT, v1 .. "#transLimitThreshold", "Defines when the transition from upper to lower trans limit starts (0: directly, 0.9: after 90% of lowering)", 0)
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitSpring", "Rotation limit spring", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitDamping", "Rotation limit damping", "1 1 1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitForceLimit", "Rotation limit force limit", "-1 -1 -1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitSpring", "Translation limit spring", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitDamping", "Translation limit damping", "1 1 1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitForceLimit", "Translation limit force limit", "-1 -1 -1")
  self:register(XMLValueType.INT, v1 .. "#attachAngleLimitAxis", "Direction axis which is used to calculate angle to enable attach", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#attacherHeight", "Height of attacher", "0.9 for trailer, 0.55 for trailer low")
  self:register(XMLValueType.BOOL, v1 .. "#needsLowering", "Needs lowering")
  self:register(XMLValueType.BOOL, v1 .. "#allowsLowering", "Allows lowering")
  self:register(XMLValueType.BOOL, v1 .. "#isDefaultLowered", "Is default lowered", false)
  self:register(XMLValueType.BOOL, v1 .. "#useFoldingLoweredState", "Use folding lowered state", false)
  self:register(XMLValueType.BOOL, v1 .. "#forceSelectionOnAttach", "Is selected on attach", true)
  self:register(XMLValueType.BOOL, v1 .. "#forceAllowDetachWhileLifted", "Attacher vehicle can be always detached no matter if we are lifted or not", false)
  self:register(XMLValueType.INT, v1 .. "#forcedAttachingDirection", "Tool can be only attached in this direction", 0)
  self:register(XMLValueType.BOOL, v1 .. "#allowFolding", "Folding is allowed while attached to this attacher joint", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowTurnOn", "Turn on is allowed while attached to this attacher joint", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowAI", "Toggeling of AI is allowed while attached to this attacher joint", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowDetachWhileParentLifted", "If set to false the parent vehicle needs to be lowered to be able to detach this implement", true)
  self:register(XMLValueType.INT, v1 .. ".dependentAttacherJoint(?)#attacherJointIndex", "Dependent attacher joint index")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".additionalObjects.additionalObject(?)#node", "Additional object node")
  self:register(XMLValueType.STRING, v1 .. ".additionalObjects.additionalObject(?)#attacherVehiclePath", "Path to vehicle for object activation")
  self:register(XMLValueType.STRING, v1 .. ".additionalAttachment#filename", "Path to additional attachment")
  self:register(XMLValueType.INT, v1 .. ".additionalAttachment#inputAttacherJointIndex", "Input attacher joint index of additional attachment")
  self:register(XMLValueType.BOOL, v1 .. ".additionalAttachment#needsLowering", "Additional implements needs lowering")
  self:register(XMLValueType.STRING, v1 .. ".additionalAttachment#jointType", "Additional implement joint type")
end
function Attachable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attacherJoint", "vehicle.inputAttacherJoints.inputAttacherJoint")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.needsLowering", "vehicle.inputAttacherJoints.inputAttacherJoint#needsLowering")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.allowsLowering", "vehicle.inputAttacherJoints.inputAttacherJoint#allowsLowering")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.isDefaultLowered", "vehicle.inputAttacherJoints.inputAttacherJoint#isDefaultLowered")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.forceSelectionOnAttach#value", "vehicle.inputAttacherJoints.inputAttacherJoint#forceSelectionOnAttach")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.topReferenceNode#index", "vehicle.attacherJoint#topReferenceNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachRootNode#index", "vehicle.attacherJoint#rootNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.inputAttacherJoints", "vehicle.attachable.inputAttacherJoints")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.inputAttacherJointConfigurations", "vehicle.attachable.inputAttacherJointConfigurations")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.brakeForce", "vehicle.attachable.brakeForce#force")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.brakeForce", "vehicle.attachable.brakeForce#force", nil, true)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.steeringAxleAngleScale", "vehicle.attachable.steeringAxleAngleScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.support", "vehicle.attachable.support")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.lowerAnimation", "vehicle.attachable.lowerAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.toolCameras", "vehicle.attachable.toolCameras")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.toolCameras#count", "vehicle.attachable.toolCameras")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.toolCameras.toolCamera1", "vehicle.attachable.toolCamera")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.toolCameras.toolCamera2", "vehicle.attachable.toolCamera")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.toolCameras.toolCamera3", "vehicle.attachable.toolCamera")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.foldable.foldingParts#onlyFoldOnDetach", "vehicle.attachable#allowFoldingWhileAttached")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.maximalAirConsumptionPerFullStop", "vehicle.attachable.airConsumer#usage (is now in usage per second at full brake power)")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attachable.steeringAxleAngleScale#targetNode", "vehicle.attachable.steeringAxleAngleScale.targetNode#node")
  self.spec_attachable.attacherJoint = nil
  self.spec_attachable.inputAttacherJoints = {}
  attacherConfigs:iterate("vehicle.attachable.inputAttacherJoints.inputAttacherJoint", function(self, savegame)
    local attacherConfigs = attacherConfigs:loadInputAttacherJoint(u0.xmlFile, savegame, {}, self - 1)
    if attacherConfigs then
      table.insert(u1.inputAttacherJoints, {})
      attacherConfigs = attacherConfigs:registerInputAttacherJoint(u0, #u1.inputAttacherJoints, {})
    end
  end)
  if self.configurations.inputAttacherJoint ~= nil then
    local attacherConfigs = string.format("vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(%d)", self.configurations.inputAttacherJoint - 1)
    v4:iterate(attacherConfigs .. ".inputAttacherJoint", function(self, savegame)
      local attacherConfigs = attacherConfigs:loadInputAttacherJoint(u0.xmlFile, savegame, {}, self - 1)
      if attacherConfigs then
        table.insert(u1.inputAttacherJoints, {})
        attacherConfigs = attacherConfigs:registerInputAttacherJoint(u0, #u1.inputAttacherJoints, {})
      end
    end)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration", self.configurations.inputAttacherJoint, self.components, self)
  end
  local v4 = v4:getValue("vehicle.attachable.brakeForce#force", 0)
  v2.brakeForce = v4 * 10
  v4 = v4:getValue("vehicle.attachable.brakeForce#maxForce", 0)
  v2.maxBrakeForce = v4 * 10
  v4 = v4:getValue("vehicle.attachable.brakeForce#loweredForce", -1)
  v2.loweredBrakeForce = v4 * 10
  v4 = v4:getValue("vehicle.attachable.brakeForce#maxForceMass", 0)
  v2.maxBrakeForceMass = v4 / 1000
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.airConsumer#usage", 0)
  v2.airConsumerUsage = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable#allowFoldingWhileAttached", true)
  v2.allowFoldingWhileAttached = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable#allowFoldingWhileLowered", true)
  v2.allowFoldingWhileLowered = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable#blockFoliageDestruction", false)
  v2.blockFoliageDestruction = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.power#requiresExternalPower", true)
  v2.requiresExternalPower = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.power#attachToPowerWarning", "warning_attachToPower", self.customEnvironment)
  v2.attachToPowerWarning = attacherConfigs
  v2.updateWheels = true
  v2.updateSteeringAxleAngle = true
  v2.isSelected = false
  v2.attachTime = 0
  v2.steeringAxleAngle = 0
  v2.steeringAxleTargetAngle = 0
  self:loadSteeringAxleFromXML(v2, self.xmlFile, "vehicle.attachable.steeringAxleAngleScale")
  if 0 < v2.steeringAxleDistanceDelay then
    v2.steeringAxleTargetAngleHistory = {}
    local v6 = math.floor(v2.steeringAxleDistanceDelay / 0.1)
    -- TODO: structure LOP_FORNPREP (pc 353, target 359)
    v2.steeringAxleTargetAngleHistory[1] = 0
    -- TODO: structure LOP_FORNLOOP (pc 358, target 354)
    v2.steeringAxleTargetAngleHistoryIndex = 1
    v2.steeringAxleTargetAngleHistoryMoved = 1
  end
  v2.steeringAngleNodes = {}
  attacherConfigs:iterate("vehicle.attachable.steeringAngleNodes.steeringAngleNode", function(self, savegame)
    local attacherConfigs = attacherConfigs:loadSteeringAngleNodeFromXML({}, u0.xmlFile, savegame)
    if attacherConfigs then
      table.insert(u1.steeringAngleNodes, {})
    end
  end)
  v2.detachingInProgress = false
  v2.supportAnimations = {}
  attacherConfigs:iterate("vehicle.attachable.support", function(self, savegame)
    local attacherConfigs = attacherConfigs:loadSupportAnimationFromXML({}, u0.xmlFile, savegame)
    if attacherConfigs then
      table.insert(u1.supportAnimations, {})
    end
  end)
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.lowerAnimation#name")
  v2.lowerAnimation = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.lowerAnimation#speed", 1)
  v2.lowerAnimationSpeed = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.lowerAnimation#directionOnDetach", 0)
  v2.lowerAnimationDirectionOnDetach = attacherConfigs
  attacherConfigs = attacherConfigs:getValue("vehicle.attachable.lowerAnimation#defaultLowered", false)
  v2.lowerAnimationDefaultLowered = attacherConfigs
  v2.toolCameras = {}
  attacherConfigs:iterate("vehicle.attachable.toolCameras.toolCamera", function(self, savegame)
    local v2 = VehicleCamera.new(u0)
    local attacherConfigs = v2:loadFromXML(u0.xmlFile, savegame)
    if attacherConfigs then
      table.insert(u1.toolCameras, v2)
    end
  end)
  v2.isHardAttached = false
  v2.isAdditionalAttachment = false
  v2.texts = {}
  v4 = v4:getText("action_liftOBJECT")
  v2.texts.liftObject = v4
  v4 = v4:getText("action_lowerOBJECT")
  v2.texts.lowerObject = v4
  v4 = v4:getText("warning_foldingNotWhileAttached")
  v2.texts.warningFoldingAttached = v4
  v4 = v4:getText("warning_foldingNotWhileLowered")
  v2.texts.warningFoldingLowered = v4
  v4 = v4:getText("warning_foldingNotWhileAttachedToAttacherJoint")
  v2.texts.warningFoldingAttacherJoint = v4
  v4 = v4:getText("warning_lowerImplementFirst")
  v2.texts.lowerImplementFirst = v4
end
function Attachable:onPostLoad(savegame)
  for v6, v7 in ipairs(self.spec_attachable.supportAnimations) do
    if not not v7.delayedOnLoad then
      continue
    end
    local v8 = self:getIsSupportAnimationAllowed(v7)
    if not v8 then
      continue
    end
    self:playAnimation(v7.animationName, 1, nil, true, false)
    AnimatedVehicle.updateAnimationByName(self, v7.animationName, 9999999, true)
  end
  if savegame ~= nil then
    -- if v1.resetVehicles then goto L96 end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L116
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L116
    v3 = v3:getValue(savegame.key .. ".attachable#lowerAnimTime")
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L116
    if v3 < 0.5 then
    end
    self:playAnimation(v2.lowerAnimation, v4, nil, true, false)
    self:setAnimationTime(v2.lowerAnimation, v3)
    AnimatedVehicle.updateAnimationByName(self, v2.lowerAnimation, 9999999, true)
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L116
    self:updateCylinderedInitial(false)
  elseif v2.lowerAnimationDefaultLowered then
    self:playAnimation(v2.lowerAnimation, 1, nil, true, false)
    AnimatedVehicle.updateAnimationByName(self, v2.lowerAnimation, 9999999, true)
  end
  for v6, v7 in pairs(v2.inputAttacherJoints) do
    if self.getMovingPartByNode ~= nil then
      if v7.steeringBarLeftNode ~= nil then
        v8 = self:getMovingPartByNode(v7.steeringBarLeftNode)
        if v8 ~= nil then
          v7.steeringBarLeftMovingPart = v8
        else
          v7.steeringBarLeftNode = nil
        end
      end
      if not (v7.steeringBarRightNode ~= nil) then
        continue
      end
      v8 = self:getMovingPartByNode(v7.steeringBarRightNode)
      if v8 ~= nil then
        v7.steeringBarRightMovingPart = v8
        continue
      end
      v7.steeringBarRightNode = nil
    else
      v7.steeringBarLeftNode = nil
      v7.steeringBarRightNode = nil
    end
  end
  if self.brake ~= nil then
    v3 = self:getBrakeForce()
    if 0 < v3 then
      self:brake(v3, true)
    end
  end
  if 0 >= #v2.steeringAngleNodes and v2.steeringAxleTargetNode == nil and self.getWheels ~= nil then
    v5 = self:getWheels()
    if 0 >= #v5 then
    end
  end
  v2.updateSteeringAxleAngle = v3
  if 0 < #v2.inputAttacherJoints then
    v3:addAttachableVehicle(self)
    return
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", Attachable)
end
function Attachable:onLoadFinished(savegame)
  for v6, v7 in ipairs(self.spec_attachable.supportAnimations) do
    if not v7.delayedOnLoad then
      continue
    end
    local v8 = self:getIsSupportAnimationAllowed(v7)
    if not v8 then
      continue
    end
    self:playAnimation(v7.animationName, 1, nil, true, false)
    AnimatedVehicle.updateAnimationByName(self, v7.animationName, 9999999, true)
  end
end
function Attachable:onPreDelete()
  if self.spec_attachable.attacherVehicle ~= nil then
    v2:detachImplementByObject(self, true)
  end
  if savegame.inputAttacherJoints ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 22, target 34)
    v6:removeInputAttacherJoint(savegame.inputAttacherJoints[1].jointInfo)
    -- TODO: structure LOP_FORNLOOP (pc 33, target 23)
  end
  v2:removeAttachableVehicle(self)
end
function Attachable:onDelete()
  if self.spec_attachable.toolCameras ~= nil then
    for v5, v6 in ipairs(self.spec_attachable.toolCameras) do
      v6:delete()
    end
  end
end
function Attachable:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_attachable.lowerAnimation ~= nil and self.playAnimation ~= nil then
    local v5 = self:getAnimationTime(self.spec_attachable.lowerAnimation)
    xmlFile:setValue(key .. "#lowerAnimTime", v5)
  end
end
function Attachable.onReadStream(v0, savegame, v2)
  local v3 = streamReadBool(savegame)
  if v3 then
    v3 = NetworkUtil.readNodeObject(savegame)
    local v4 = streamReadInt8(savegame)
    local v5 = streamReadInt8(savegame)
    local v6 = streamReadBool(savegame)
    local v7 = streamReadInt8(savegame)
    if v3 ~= nil then
      local v8 = v3:getIsSynchronized()
      if v8 then
        v3:attachImplement(v0, v4, v5, true, v7, v6, true, true)
        v3:setJointMoveDown(v5, v6, true)
      end
    end
  end
end
function Attachable:onWriteStream(streamId, connection)
  if self.spec_attachable.attacherVehicle == nil then
  end
  v4(v5, true)
  if v3.attacherVehicle ~= nil then
    local v5 = v5:getImplementIndexByObject(self)
    NetworkUtil.writeNodeObject(streamId, v3.attacherVehicle)
    streamWriteInt8(streamId, v3.inputAttacherJointDescIndex)
    streamWriteInt8(streamId, v3.attacherVehicle.spec_attacherJoints.attachedImplements[v5].jointDescIndex)
    streamWriteBool(streamId, v3.attacherVehicle.spec_attacherJoints.attacherJoints[v3.attacherVehicle.spec_attacherJoints.attachedImplements[v5].jointDescIndex].moveDown)
    streamWriteInt8(streamId, v5)
  end
end
function Attachable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_attachable.updateSteeringAxleAngle then
    local v7 = self:getLastSpeed()
    if 0.25 >= v7 then
      -- if v0.finishedFirstUpdate then goto L236 end
    end
    local v8 = self:getSteeringAxleBaseVehicle()
    if v8 == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L69
    end
    if 0 > self.movingDirection then
      -- if not v5.steeringAxleUpdateBackwards then goto L69 end
    end
    if not v5.steeringAxleReferenceComponentNode then
    end
    local v9 = v9(v10, v11)
    if v5.steeringAxleAngleScaleSpeedDependent then
      local v18 = self:getLastSpeed()
      local v12 = MathUtil.clamp(1 + (v18 - v5.steeringAxleAngleScaleStart) * 1 / (v5.steeringAxleAngleScaleStart - v5.steeringAxleAngleScaleEnd), 0, 1)
    end
    -- goto L76  (LOP_JUMP +7)
    v9 = self:getLastSpeed()
    if 0.2 < v9 then
    end
    v9 = self:getIsSteeringAxleAllowed()
    if not v9 then
    end
    if 0 < v5.steeringAxleDistanceDelay then
      v5.steeringAxleTargetAngleHistoryMoved = v5.steeringAxleTargetAngleHistoryMoved + self.lastMovedDistance
      if 0.1 < v5.steeringAxleTargetAngleHistoryMoved then
        v5.steeringAxleTargetAngleHistory[v5.steeringAxleTargetAngleHistoryIndex] = v7
        v5.steeringAxleTargetAngleHistoryIndex = v5.steeringAxleTargetAngleHistoryIndex + 1
        if #v5.steeringAxleTargetAngleHistory < v5.steeringAxleTargetAngleHistoryIndex then
          v5.steeringAxleTargetAngleHistoryIndex = 1
        end
      end
      if #v5.steeringAxleTargetAngleHistory < v5.steeringAxleTargetAngleHistoryIndex + 1 then
      end
      v5.steeringAxleTargetAngle = v5.steeringAxleTargetAngleHistory[v9]
    else
      v5.steeringAxleTargetAngle = v7
    end
    v9 = MathUtil.sign(v5.steeringAxleTargetAngle - v5.steeringAxleAngle)
    if not self.finishedFirstUpdate then
    end
    if v9 == 1 then
      local v11 = math.min(v5.steeringAxleAngle + v9 * dt * v10, v5.steeringAxleTargetAngle)
      v5.steeringAxleAngle = v11
    else
      v11 = math.max(v5.steeringAxleAngle + v9 * dt * v10, v5.steeringAxleTargetAngle)
      v5.steeringAxleAngle = v11
    end
    if v5.steeringAxleTargetNode ~= nil then
      if v5.steeringAxleTargetNodeRefAngle ~= nil then
        v12 = MathUtil.clamp(v5.steeringAxleAngle / v5.steeringAxleTargetNodeRefAngle, -1, 1)
        if 0 <= v12 then
          -- goto L221  (LOP_JUMP +15)
        end
      else
        v12 = MathUtil.clamp(v5.steeringAxleAngle, v5.steeringAxleAngleMinRot, v5.steeringAxleAngleMaxRot)
      end
      setRotation(v5.steeringAxleTargetNode, 0, v11 * v5.steeringAxleDirection, 0)
      self:setMovingToolDirty(v5.steeringAxleTargetNode)
    end
  end
  if 0 < #v5.steeringAngleNodes and v6 == nil then
    v8 = self:getSteeringAxleBaseVehicle()
    if v8 ~= nil then
      v9 = Utils.getYRotationBetweenNodes(self.steeringAxleNode, v8.steeringAxleNode)
    end
  end
  if v6 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 262, target 272)
    self:updateSteeringAngleNode(v5.steeringAngleNodes[1], v6, dt)
    -- TODO: structure LOP_FORNLOOP (pc 271, target 263)
  end
  v8 = self:getAttacherVehicle()
  if v5.detachingInProgress then
    v9 = self:getIsReadyToFinishDetachProcess()
    if v9 then
      if v8 ~= nil then
        v8:detachImplementByObject(self)
      end
      v5.detachingInProgress = false
    end
  end
  if v8 ~= nil and self.currentUpdateDistance < v8.spec_attacherJoints.maxUpdateDistance and self.updateLoopIndex == v8.updateLoopIndex then
    v9 = v8:getImplementByObject(self)
    if v9 ~= nil then
      v8:updateAttacherJointGraphics(v9, dt, true)
    end
  end
end
function Attachable:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  -- TODO: structure LOP_FORNPREP (pc 7, target 19)
  v10:updateInputAttacherJoint(self.spec_attachable.inputAttacherJoints[1].jointInfo)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 8)
end
function Attachable:loadInputAttacherJoint(xmlFile, key, inputAttacherJoint, index)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#indexVisual", key .. "#nodeVisual")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#ptoInputNode", "vehicle.powerTakeOffs.input")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#lowerDistanceToGround", key .. ".distanceToGround#lower")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#upperDistanceToGround", key .. ".distanceToGround#upper")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v5 ~= nil then
    inputAttacherJoint.node = v5
    inputAttacherJoint.heightNodes = {}
    xmlFile:iterate(key .. ".heightNode", function(self, xmlFile)
      local inputAttacherJoint = inputAttacherJoint:loadAttacherJointHeightNode(u1, xmlFile, {}, u2)
      if inputAttacherJoint then
        table.insert(u3.heightNodes, {})
      end
    end)
    local jointTypeStr = xmlFile:getValue(key .. "#jointType")
    if jointTypeStr ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L111
      local v11 = tostring(jointTypeStr)
      Logging.xmlWarning(self.xmlFile, "Invalid jointType '%s' for inputAttacherJoint '%s'!", v11, key)
    else
      Logging.xmlWarning(self.xmlFile, "Missing jointType for inputAttacherJoint '%s'!", key)
    end
    if v7 == nil then
      local v8 = xmlFile:getValue(key .. "#needsTrailerJoint", false)
      local needsLowTrailerJoint = xmlFile:getValue(key .. "#needsLowJoint", false)
      if v8 then
        if needsLowTrailerJoint then
          -- goto L137  (LOP_JUMP +5)
        end
      else
      end
    end
    inputAttacherJoint.jointType = v7
    v8 = xmlFile:getValue(key .. ".subType#name")
    needsLowTrailerJoint = string.split(v8, " ")
    inputAttacherJoint.subTypes = needsLowTrailerJoint
    if #inputAttacherJoint.subTypes == 0 then
      inputAttacherJoint.subTypes = nil
    end
    needsLowTrailerJoint = xmlFile:getValue(key .. ".subType#showWarning", true)
    inputAttacherJoint.subTypeShowWarning = needsLowTrailerJoint
    local v10 = getTranslation(inputAttacherJoint.node)
    inputAttacherJoint.jointOrigTrans = {}
    v11 = self:getParentComponent(inputAttacherJoint.node)
    v10 = localToLocal(v11, inputAttacherJoint.node, 0, 0, 0)
    inputAttacherJoint.jointOrigOffsetComponent = {}
    v11 = self:getParentComponent(inputAttacherJoint.node)
    v10 = localRotationToLocal(v11, inputAttacherJoint.node, 0, 0, 0)
    inputAttacherJoint.jointOrigRotOffsetComponent = {}
    needsLowTrailerJoint = xmlFile:getValue(key .. "#topReferenceNode", nil, self.components, self.i3dMappings)
    inputAttacherJoint.topReferenceNode = needsLowTrailerJoint
    needsLowTrailerJoint = xmlFile:getValue(key .. "#rootNode", self.components[1].node, self.components, self.i3dMappings)
    inputAttacherJoint.rootNode = needsLowTrailerJoint
    inputAttacherJoint.rootNodeBackup = inputAttacherJoint.rootNode
    needsLowTrailerJoint = xmlFile:getValue(key .. "#allowsDetaching", true)
    inputAttacherJoint.allowsDetaching = needsLowTrailerJoint
    needsLowTrailerJoint = xmlFile:getValue(key .. "#fixedRotation", false)
    inputAttacherJoint.fixedRotation = needsLowTrailerJoint
    needsLowTrailerJoint = xmlFile:getValue(key .. "#hardAttach", false)
    inputAttacherJoint.hardAttach = needsLowTrailerJoint
    if inputAttacherJoint.hardAttach and 1 < #self.components then
      Logging.xmlWarning(self.xmlFile, "hardAttach only available for single component vehicles! InputAttacherJoint '%s'!", key)
      inputAttacherJoint.hardAttach = false
    end
    needsLowTrailerJoint = xmlFile:getValue(key .. "#nodeVisual", nil, self.components, self.i3dMappings)
    inputAttacherJoint.visualNode = needsLowTrailerJoint
    if inputAttacherJoint.hardAttach and inputAttacherJoint.visualNode ~= nil then
      v10 = getParent(inputAttacherJoint.visualNode)
      v11 = getTranslation(inputAttacherJoint.visualNode)
      v11 = getRotation(inputAttacherJoint.visualNode)
      v10 = getChildIndex(inputAttacherJoint.visualNode)
      inputAttacherJoint.visualNodeData = {parent = v10, translation = {}, rotation = {}, index = v10}
    end
    if v7 ~= AttacherJoints.JOINTTYPE_IMPLEMENT and v7 ~= AttacherJoints.JOINTTYPE_CUTTER then
      -- if v7 ~= AttacherJoints.JOINTTYPE_CUTTERHARVESTER then goto L399 end
    end
    needsLowTrailerJoint = xmlFile:getValue(key .. ".distanceToGround#lower")
    if needsLowTrailerJoint == nil then
      Logging.xmlWarning(self.xmlFile, "Missing '.distanceToGround#lower' for inputAttacherJoint '%s'!", key)
    end
    needsLowTrailerJoint = xmlFile:getValue(key .. ".distanceToGround#upper")
    if needsLowTrailerJoint == nil then
      Logging.xmlWarning(self.xmlFile, "Missing '.distanceToGround#upper' for inputAttacherJoint '%s'!", key)
    end
    needsLowTrailerJoint = xmlFile:getValue(key .. ".distanceToGround#lower", 0.7)
    inputAttacherJoint.lowerDistanceToGround = needsLowTrailerJoint
    needsLowTrailerJoint = xmlFile:getValue(key .. ".distanceToGround#upper", 1)
    inputAttacherJoint.upperDistanceToGround = needsLowTrailerJoint
    if inputAttacherJoint.upperDistanceToGround < inputAttacherJoint.lowerDistanceToGround then
      Logging.xmlWarning(self.xmlFile, "distanceToGround#lower may not be larger than distanceToGround#upper for inputAttacherJoint '%s'. Switching values!", key)
      inputAttacherJoint.lowerDistanceToGround = inputAttacherJoint.upperDistanceToGround
      inputAttacherJoint.upperDistanceToGround = inputAttacherJoint.lowerDistanceToGround
    end
    inputAttacherJoint.distanceToGroundByVehicle = {}
    xmlFile:iterate(key .. ".distanceToGround.vehicle", function(self, xmlFile)
      local inputAttacherJoint = inputAttacherJoint:getValue(xmlFile .. "#filename")
      if {filename = inputAttacherJoint}.filename ~= nil then
        inputAttacherJoint = inputAttacherJoint:lower()
        inputAttacherJoint = inputAttacherJoint:getValue(xmlFile .. "#lower", u1.lowerDistanceToGround)
        inputAttacherJoint = inputAttacherJoint:getValue(xmlFile .. "#upper", u1.upperDistanceToGround)
        table.insert(u1.distanceToGroundByVehicle, {filename = inputAttacherJoint, filename = inputAttacherJoint, lower = inputAttacherJoint, upper = inputAttacherJoint})
      end
    end)
    inputAttacherJoint.lowerDistanceToGroundOriginal = inputAttacherJoint.lowerDistanceToGround
    inputAttacherJoint.upperDistanceToGroundOriginal = inputAttacherJoint.upperDistanceToGround
    needsLowTrailerJoint = xmlFile:getValue(key .. "#lowerRotationOffset", 0)
    inputAttacherJoint.lowerRotationOffset = needsLowTrailerJoint
    if v7 == AttacherJoints.JOINTTYPE_IMPLEMENT then
    end
    v10 = xmlFile:getValue(key .. "#upperRotationOffset", needsLowTrailerJoint)
    inputAttacherJoint.upperRotationOffset = v10
    v10 = xmlFile:getValue(key .. "#allowsJointRotLimitMovement", true)
    inputAttacherJoint.allowsJointRotLimitMovement = v10
    v10 = xmlFile:getValue(key .. "#allowsJointTransLimitMovement", true)
    inputAttacherJoint.allowsJointTransLimitMovement = v10
    v10 = xmlFile:getValue(key .. "#needsToolbar", false)
    inputAttacherJoint.needsToolbar = v10
    if inputAttacherJoint.needsToolbar and v7 ~= AttacherJoints.JOINTTYPE_IMPLEMENT then
      Logging.xmlWarning(self.xmlFile, "'needsToolbar' requires jointType 'implement' for inputAttacherJoint '%s'!", key)
      inputAttacherJoint.needsToolbar = false
    end
    v10 = xmlFile:getValue(key .. "#steeringBarLeftNode", nil, self.components, self.i3dMappings)
    inputAttacherJoint.steeringBarLeftNode = v10
    v10 = xmlFile:getValue(key .. "#steeringBarRightNode", nil, self.components, self.i3dMappings)
    inputAttacherJoint.steeringBarRightNode = v10
    v10 = xmlFile:getValue(key .. "#upperRotLimitScale", "0 0 0", true)
    inputAttacherJoint.upperRotLimitScale = v10
    local v10, v11, v12 = xmlFile:getValue(key .. "#lowerRotLimitScale")
    if v7 == AttacherJoints.JOINTTYPE_IMPLEMENT then
      local v14 = Utils.getNoNil(v10, 0)
      local v15 = Utils.getNoNil(v11, 0)
      local v16 = Utils.getNoNil(v12, 1)
      inputAttacherJoint.lowerRotLimitScale = {}
    else
      v14 = Utils.getNoNil(v10, 1)
      v15 = Utils.getNoNil(v11, 1)
      v16 = Utils.getNoNil(v12, 1)
      inputAttacherJoint.lowerRotLimitScale = {}
    end
    local v13 = xmlFile:getValue(key .. "#rotLimitThreshold", 0)
    inputAttacherJoint.rotLimitThreshold = v13
    v13 = xmlFile:getValue(key .. "#upperTransLimitScale", "0 0 0", true)
    inputAttacherJoint.upperTransLimitScale = v13
    v13 = xmlFile:getValue(key .. "#lowerTransLimitScale", "0 1 0", true)
    inputAttacherJoint.lowerTransLimitScale = v13
    v13 = xmlFile:getValue(key .. "#transLimitThreshold", 0)
    inputAttacherJoint.transLimitThreshold = v13
    v13 = xmlFile:getValue(key .. "#rotLimitSpring", "0 0 0", true)
    inputAttacherJoint.rotLimitSpring = v13
    v13 = xmlFile:getValue(key .. "#rotLimitDamping", "1 1 1", true)
    inputAttacherJoint.rotLimitDamping = v13
    v13 = xmlFile:getValue(key .. "#rotLimitForceLimit", "-1 -1 -1", true)
    inputAttacherJoint.rotLimitForceLimit = v13
    v13 = xmlFile:getValue(key .. "#transLimitSpring", "0 0 0", true)
    inputAttacherJoint.transLimitSpring = v13
    v13 = xmlFile:getValue(key .. "#transLimitDamping", "1 1 1", true)
    inputAttacherJoint.transLimitDamping = v13
    v13 = xmlFile:getValue(key .. "#transLimitForceLimit", "-1 -1 -1", true)
    inputAttacherJoint.transLimitForceLimit = v13
    v13 = xmlFile:getValue(key .. "#attachAngleLimitAxis", 1)
    inputAttacherJoint.attachAngleLimitAxis = v13
    v13 = xmlFile:getValue(key .. "#attacherHeight")
    inputAttacherJoint.attacherHeight = v13
    if inputAttacherJoint.attacherHeight == nil then
      if v7 == AttacherJoints.JOINTTYPE_TRAILER then
        inputAttacherJoint.attacherHeight = 0.9
      elseif v7 == AttacherJoints.JOINTTYPE_TRAILERLOW then
        inputAttacherJoint.attacherHeight = 0.55
      end
    end
    if inputAttacherJoint.jointType ~= AttacherJoints.JOINTTYPE_TRAILER then
      -- if v3.jointType ~= AttacherJoints.JOINTTYPE_TRAILERLOW then goto L765 end
    end
    if inputAttacherJoint.jointType ~= AttacherJoints.JOINTTYPE_TRAILER and inputAttacherJoint.jointType ~= AttacherJoints.JOINTTYPE_TRAILERLOW then
    end
    v15 = xmlFile:getValue(key .. "#needsLowering", v13)
    inputAttacherJoint.needsLowering = v15
    v15 = xmlFile:getValue(key .. "#allowsLowering", v14)
    inputAttacherJoint.allowsLowering = v15
    v15 = xmlFile:getValue(key .. "#isDefaultLowered", false)
    inputAttacherJoint.isDefaultLowered = v15
    v15 = xmlFile:getValue(key .. "#useFoldingLoweredState", false)
    inputAttacherJoint.useFoldingLoweredState = v15
    v15 = xmlFile:getValue(key .. "#forceSelectionOnAttach", true)
    inputAttacherJoint.forceSelection = v15
    v15 = xmlFile:getValue(key .. "#forceAllowDetachWhileLifted", false)
    inputAttacherJoint.forceAllowDetachWhileLifted = v15
    v15 = xmlFile:getValue(key .. "#forcedAttachingDirection", 0)
    inputAttacherJoint.forcedAttachingDirection = v15
    v15 = xmlFile:getValue(key .. "#allowFolding", true)
    inputAttacherJoint.allowFolding = v15
    v15 = xmlFile:getValue(key .. "#allowTurnOn", true)
    inputAttacherJoint.allowTurnOn = v15
    v15 = xmlFile:getValue(key .. "#allowAI", true)
    inputAttacherJoint.allowAI = v15
    v15 = xmlFile:getValue(key .. "#allowDetachWhileParentLifted", true)
    inputAttacherJoint.allowDetachWhileParentLifted = v15
    inputAttacherJoint.dependentAttacherJoints = {}
    while true do
      v16 = string.format(key .. ".dependentAttacherJoint(%d)", v15)
      v17 = xmlFile:hasProperty(v16)
      if not v17 then
        break
      end
      v17 = xmlFile:getValue(v16 .. "#attacherJointIndex")
      if v17 ~= nil then
        table.insert(inputAttacherJoint.dependentAttacherJoints, v17)
      end
    end
    if inputAttacherJoint.hardAttach then
      inputAttacherJoint.needsLowering = false
      inputAttacherJoint.allowsLowering = false
      inputAttacherJoint.isDefaultLowered = false
      inputAttacherJoint.upperRotationOffset = 0
    end
    inputAttacherJoint.changeObjects = {}
    ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key, inputAttacherJoint.changeObjects, self.components, self)
    inputAttacherJoint.additionalObjects = {}
    while true do
      v17 = string.format("%s.additionalObjects.additionalObject(%d)", key, v16)
      v18 = xmlFile:hasProperty(v17)
      if not v18 then
        break
      end
      v19 = xmlFile:getValue(v17 .. "#node", nil, self.components, self.i3dMappings)
      v19 = xmlFile:getValue(v17 .. "#attacherVehiclePath")
      if {node = v19, attacherVehiclePath = v19}.node ~= nil and {node = v19, attacherVehiclePath = v19}.attacherVehiclePath ~= nil then
        v19 = NetworkUtil.convertToNetworkFilename({node = v19, attacherVehiclePath = v19}.attacherVehiclePath)
        table.insert(inputAttacherJoint.additionalObjects, {node = v19, attacherVehiclePath = v19, attacherVehiclePath = v19})
      end
    end
    inputAttacherJoint.additionalAttachment = {}
    v17 = xmlFile:getValue(key .. ".additionalAttachment#filename")
    if v17 ~= nil then
      v19 = Utils.getFilename(v17, self.customEnvironment)
      inputAttacherJoint.additionalAttachment.filename = v19
    end
    v19 = xmlFile:getValue(key .. ".additionalAttachment#inputAttacherJointIndex", 1)
    inputAttacherJoint.additionalAttachment.inputAttacherJointIndex = v19
    v19 = xmlFile:getValue(key .. ".additionalAttachment#needsLowering", false)
    inputAttacherJoint.additionalAttachment.needsLowering = v19
    v18 = xmlFile:getValue(key .. ".additionalAttachment#jointType")
    if v18 ~= nil and AttacherJoints.jointTypeNameToInt[v18] == nil then
      local v23 = tostring(v18)
      Logging.xmlWarning(self.xmlFile, "Invalid jointType '%s' for additonal implement '%s'!", v23, inputAttacherJoint.additionalAttachment.filename)
    end
    if not v19 then
    end
    v20.jointType = v21
    return true
  end
  return false
end
function Attachable:loadAttacherJointHeightNode(xmlFile, key, heightNode, attacherJointNode)
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  heightNode.node = v5
  heightNode.attacherJointNode = attacherJointNode
  return true
end
function Attachable.getIsAttacherJointHeightNodeActive(v0, xmlFile)
  return true
end
function Attachable:getInputAttacherJointByJointDescIndex(index)
  return self.spec_attachable.inputAttacherJoints[index]
end
function Attachable:getInputAttacherJointIndexByNode(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  if self.spec_attachable.inputAttacherJoints[1].node == node then
    return 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  return nil
end
function Attachable:getAttacherVehicle()
  return self.spec_attachable.attacherVehicle
end
function Attachable:getShowAttachableMapHotspot()
  if self.spec_attachable.attacherVehicle ~= nil then
  end
  return true
end
function Attachable:getInputAttacherJoints()
  return self.spec_attachable.inputAttacherJoints
end
function Attachable:getIsAttachedTo(vehicle)
  if vehicle == self then
    return true
  end
  if self.spec_attachable.attacherVehicle ~= nil then
    if self.spec_attachable.attacherVehicle == vehicle then
      return true
    end
    if key.attacherVehicle.getIsAttachedTo ~= nil then
      return inputAttacherJoint:getIsAttachedTo(vehicle)
    end
  end
  return false
end
function Attachable:getActiveInputAttacherJointDescIndex()
  return self.spec_attachable.inputAttacherJointDescIndex
end
function Attachable:getActiveInputAttacherJoint()
  return self.spec_attachable.attacherJoint
end
function Attachable:getAllowsLowering()
  if self.spec_attachable.isAdditionalAttachment and not self.spec_attachable.additionalAttachmentNeedsLowering then
    return false, nil
  end
  local inputAttacherJoint = self:getActiveInputAttacherJoint()
  if inputAttacherJoint ~= nil and not inputAttacherJoint.allowsLowering then
    return false, nil
  end
  return true, nil
end
function Attachable.loadSupportAnimationFromXML(v0, xmlFile, key, inputAttacherJoint)
  local index = key:getValue(inputAttacherJoint .. "#animationName")
  xmlFile.animationName = index
  index = key:getValue(inputAttacherJoint .. "#delayedOnLoad", false)
  xmlFile.delayedOnLoad = index
  index = key:getValue(inputAttacherJoint .. "#delayedOnAttach", true)
  xmlFile.delayedOnAttach = index
  index = key:getValue(inputAttacherJoint .. "#detachAfterAnimation", true)
  xmlFile.detachAfterAnimation = index
  index = key:getValue(inputAttacherJoint .. "#detachAnimationTime", 1)
  xmlFile.detachAnimationTime = index
  if xmlFile.animationName == nil then
  end
  return true
end
function Attachable:getIsSupportAnimationAllowed(supportAnimation)
  if self.playAnimation == nil then
  end
  return true
end
function Attachable:getIsReadyToFinishDetachProcess()
  -- TODO: structure LOP_FORNPREP (pc 8, target 39)
  if self.spec_attachable.supportAnimations[1].detachAfterAnimation then
    local v7 = self:getIsAnimationPlaying(self.spec_attachable.supportAnimations[1].animationName)
    if v7 then
    elseif self.spec_attachable.supportAnimations[1].detachAnimationTime < 1 then
      v7 = self:getAnimationTime(self.spec_attachable.supportAnimations[1].animationName)
      if v7 < self.spec_attachable.supportAnimations[1].detachAnimationTime then
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 38, target 9)
  return key
end
function Attachable:startDetachProcess()
  -- TODO: structure LOP_FORNPREP (pc 7, target 33)
  if self.spec_attachable.supportAnimations[1].detachAfterAnimation then
    local v5 = self:getIsSupportAnimationAllowed(self.spec_attachable.supportAnimations[1])
    if v5 then
      self:playAnimation(self.spec_attachable.supportAnimations[1].animationName, 1, nil, true)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 32, target 8)
  local key = self:getIsReadyToFinishDetachProcess()
  if key then
    xmlFile.detachingInProgress = false
    key = self:getAttacherVehicle()
    if key ~= nil then
      key:detachImplementByObject(self)
    end
    return true
  end
  xmlFile.detachingInProgress = true
  return false
end
function Attachable:getIsImplementChainLowered(defaultIsLowered)
  local key = self:getIsLowered(defaultIsLowered)
  if not key then
    return false
  end
  key = self:getAttacherVehicle()
  if key ~= nil and key.getAllowsLowering ~= nil then
    local inputAttacherJoint = key:getAllowsLowering()
    if inputAttacherJoint then
      inputAttacherJoint = key:getIsImplementChainLowered(defaultIsLowered)
      if not inputAttacherJoint then
        return false
      end
    end
  end
  return true
end
function Attachable.getIsInWorkPosition(v0)
  return true
end
function Attachable:getAttachbleAirConsumerUsage()
  return self.spec_attachable.airConsumerUsage
end
function Attachable:isDetachAllowed()
  if self.spec_attachable.attacherJoint ~= nil then
    if self.spec_attachable.attacherJoint.allowsDetaching == false then
      return false, nil, false
    end
    if xmlFile.attacherJoint.allowDetachWhileParentLifted == false then
      local key = self:getAttacherVehicle()
      if key ~= nil and key.getIsLowered ~= nil then
        local inputAttacherJoint = key:getIsLowered(true)
        if not inputAttacherJoint then
          local index = string.format(xmlFile.texts.lowerImplementFirst, key.typeDesc)
          return false, index, true
        end
      end
    end
  end
  if xmlFile.isAdditionalAttachment then
    return false
  end
  key = self:getAttacherVehicle()
  if key ~= nil then
    inputAttacherJoint = key:getImplementByObject(self)
    if inputAttacherJoint ~= nil and inputAttacherJoint.attachingIsInProgress then
      return false
    end
  end
  return true, nil
end
function Attachable:isAttachAllowed(farmId, attacherVehicle)
  local inputAttacherJoint = inputAttacherJoint:canFarmAccess(farmId, self)
  if not inputAttacherJoint then
    return false, nil
  end
  if self.spec_attachable.detachingInProgress then
    return false, nil
  end
  return true, nil
end
function Attachable.getIsInputAttacherActive(v0, xmlFile)
  return true
end
function Attachable:getSteeringAxleBaseVehicle()
  if self.spec_attachable.steeringAxleUseSuperAttachable and self.spec_attachable.attacherVehicle ~= nil and self.spec_attachable.attacherVehicle.getAttacherVehicle ~= nil then
    return key:getAttacherVehicle()
  end
  if xmlFile.attacherVehicle ~= nil then
    if not xmlFile.steeringAxleForceUsage then
      key = key:getCanSteerAttachable(self)
      -- if not v2 then goto L38 end
    end
    return xmlFile.attacherVehicle
  end
  return nil
end
function Attachable:loadSteeringAxleFromXML(spec, xmlFile, key)
  local index = xmlFile:getValue(key .. "#startSpeed", 10)
  spec.steeringAxleAngleScaleStart = index
  index = xmlFile:getValue(key .. "#endSpeed", 30)
  spec.steeringAxleAngleScaleEnd = index
  index = xmlFile:getValue(key .. "#speedDependent", true)
  spec.steeringAxleAngleScaleSpeedDependent = index
  index = xmlFile:getValue(key .. "#backwards", false)
  spec.steeringAxleUpdateBackwards = index
  index = xmlFile:getValue(key .. "#speed", 0.001)
  spec.steeringAxleAngleSpeed = index
  index = xmlFile:getValue(key .. "#useSuperAttachable", false)
  spec.steeringAxleUseSuperAttachable = index
  index = xmlFile:getValue(key .. ".targetNode#node", nil, self.components, self.i3dMappings)
  spec.steeringAxleTargetNode = index
  index = xmlFile:getValue(key .. ".targetNode#refAngle")
  spec.steeringAxleTargetNodeRefAngle = index
  index = xmlFile:getValue(key .. "#minRot", 0)
  spec.steeringAxleAngleMinRot = index
  index = xmlFile:getValue(key .. "#maxRot", 0)
  spec.steeringAxleAngleMaxRot = index
  index = xmlFile:getValue(key .. "#direction", 1)
  spec.steeringAxleDirection = index
  if spec.steeringAxleTargetNode == nil then
  end
  index = xmlFile:getValue(jointTypeStr, true)
  spec.steeringAxleForceUsage = index
  index = xmlFile:getValue(key .. "#distanceDelay", 0)
  spec.steeringAxleDistanceDelay = index
  index = xmlFile:getValue(key .. "#referenceComponentIndex")
  if index ~= nil and self.components[index] ~= nil then
    spec.steeringAxleReferenceComponentNode = self.components[index].node
  end
end
function Attachable.getIsSteeringAxleAllowed(v0)
  return true
end
function Attachable:loadSteeringAngleNodeFromXML(entry, xmlFile, key)
  local index = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  entry.node = index
  local v5 = xmlFile:getValue(key .. "#speed", 25)
  entry.speed = v5 / 1000
  index = xmlFile:getValue(key .. "#scale", 1)
  entry.scale = index
  index = xmlFile:getValue(key .. "#offset", 0)
  entry.offset = index
  index = xmlFile:getValue(key .. "#minSpeed", 0)
  entry.minSpeed = index
  entry.currentAngle = 0
  return true
end
function Attachable:updateSteeringAngleNode(steeringAngleNode, angle, dt)
  if steeringAngleNode.minSpeed < self.lastSpeed * 3600 then
    local direction = MathUtil.sign(angle - steeringAngleNode.currentAngle)
    if direction < 0 then
      -- if math.max then goto L21 end
    end
    local jointTypeStr = math.min(steeringAngleNode.currentAngle + steeringAngleNode.speed * dt * direction, angle)
    if jointTypeStr ~= steeringAngleNode.currentAngle then
      steeringAngleNode.currentAngle = jointTypeStr
      setRotation(steeringAngleNode.node, 0, steeringAngleNode.offset + steeringAngleNode.currentAngle * steeringAngleNode.scale, 0)
      if self.setMovingToolDirty ~= nil then
        self:setMovingToolDirty(steeringAngleNode.node)
      end
    end
  end
end
function Attachable:attachableAddToolCameras()
  if 0 < #self.spec_attachable.toolCameras and self.rootVehicle ~= nil and self.rootVehicle.addToolCameras ~= nil then
    self.rootVehicle:addToolCameras(self.spec_attachable.toolCameras)
  end
end
function Attachable:attachableRemoveToolCameras()
  if 0 < #self.spec_attachable.toolCameras and self.rootVehicle ~= nil and self.rootVehicle.removeToolCameras ~= nil then
    self.rootVehicle:removeToolCameras(self.spec_attachable.toolCameras)
  end
end
function Attachable:preAttach(attacherVehicle, inputJointDescIndex, jointDescIndex, loadFromSavegame)
  self.spec_attachable.attacherVehicle = attacherVehicle
  self.spec_attachable.attacherJoint = self.spec_attachable.inputAttacherJoints[inputJointDescIndex]
  self.spec_attachable.inputAttacherJointDescIndex = inputJointDescIndex
  if 0 < #self.spec_attachable.attacherJoint.distanceToGroundByVehicle then
    -- TODO: structure LOP_FORNPREP (pc 27, target 54)
    local v12 = v12:lower()
    v12 = v12:endsWith(self.spec_attachable.attacherJoint.distanceToGroundByVehicle[1].filename)
    if v12 then
      self.spec_attachable.attacherJoint.lowerDistanceToGround = self.spec_attachable.attacherJoint.distanceToGroundByVehicle[1].lower
      self.spec_attachable.attacherJoint.upperDistanceToGround = self.spec_attachable.attacherJoint.distanceToGroundByVehicle[1].upper
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 28)
    if v7 then
      v5.attacherJoint.lowerDistanceToGround = v5.attacherJoint.lowerDistanceToGroundOriginal
      v5.attacherJoint.upperDistanceToGround = v5.attacherJoint.upperDistanceToGroundOriginal
    end
  end
  for v10, v11 in ipairs(v5.attacherJoint.additionalObjects) do
    local v16 = NetworkUtil.convertToNetworkFilename(attacherVehicle.configFileName)
    if v11.attacherVehiclePath ~= v16 then
    end
    v12(v13, true)
  end
  for v10, v11 in ipairs(v5.supportAnimations) do
    v12 = self:getIsSupportAnimationAllowed(v11)
    if not v12 then
      continue
    end
    if not not v11.delayedOnAttach then
      continue
    end
    if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    end
    self:playAnimation(v11.animationName, -1, nil, true, not v12)
    if not v12 then
      continue
    end
    AnimatedVehicle.updateAnimationByName(self, v11.animationName, 9999999, true)
  end
  SpecializationUtil.raiseEvent(self, "onPreAttach", attacherVehicle, inputJointDescIndex, jointDescIndex)
end
function Attachable:postAttach(attacherVehicle, inputJointDescIndex, jointDescIndex, loadFromSavegame)
  if self.rootVehicle ~= nil and self.rootVehicle.getIsControlled ~= nil then
    local v7 = self.rootVehicle:getIsControlled()
    if v7 then
      self:activate()
    end
  end
  if self.setLightsTypesMask ~= nil and attacherVehicle.spec_lights ~= nil then
    self:setLightsTypesMask(attacherVehicle.spec_lights.lightsTypesMask, true, true)
    self:setBeaconLightsVisibility(attacherVehicle.spec_lights.beaconLightsActive, true, true)
    self:setTurnLightState(attacherVehicle.spec_lights.turnLightState, true, true)
  end
  v5.attachTime = g_currentMission.time
  for v10, v11 in ipairs(v5.supportAnimations) do
    local v12 = self:getIsSupportAnimationAllowed(v11)
    if not v12 then
      continue
    end
    if not v11.delayedOnAttach then
      continue
    end
    if self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG then
    end
    self:playAnimation(v11.animationName, -1, nil, true, not v12)
    if not v12 then
      continue
    end
    AnimatedVehicle.updateAnimationByName(self, v11.animationName, 9999999, true)
  end
  self:attachableAddToolCameras()
  ObjectChangeUtil.setObjectChanges(v5.attacherJoint.changeObjects, true, self, self.setMovingToolDirty)
  v7 = attacherVehicle:getAttacherJointByJointDescIndex(jointDescIndex)
  if v7.steeringBarLeftNode ~= nil and v5.attacherJoint.steeringBarLeftMovingPart ~= nil then
    for v11, v12 in pairs(self.spec_cylindered.movingParts) do
      if not (v12.referencePoint == v5.attacherJoint.steeringBarLeftMovingPart.referencePoint) then
        continue
      end
      if not (v12 ~= v5.attacherJoint.steeringBarLeftMovingPart) then
        continue
      end
      v12.referencePoint = v7.steeringBarLeftNode
    end
    v5.attacherJoint.steeringBarLeftMovingPart.referencePoint = v7.steeringBarLeftNode
  end
  if v7.steeringBarRightNode ~= nil and v5.attacherJoint.steeringBarRightMovingPart ~= nil then
    for v11, v12 in pairs(self.spec_cylindered.movingParts) do
      if not (v12.referencePoint == v5.attacherJoint.steeringBarRightMovingPart.referencePoint) then
        continue
      end
      if not (v12 ~= v5.attacherJoint.steeringBarRightMovingPart) then
        continue
      end
      v12.referencePoint = v7.steeringBarRightNode
    end
    v5.attacherJoint.steeringBarRightMovingPart.referencePoint = v7.steeringBarRightNode
  end
  if self.rootVehicle.actionController ~= nil then
    needsLowTrailerJoint = self:getActiveInputAttacherJoint()
    if needsLowTrailerJoint ~= nil and needsLowTrailerJoint.needsLowering and needsLowTrailerJoint.allowsLowering and v7.allowsLowering then
      if needsLowTrailerJoint.lowerDistanceToGround == needsLowTrailerJoint.upperDistanceToGround then
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L314
      end
      v10 = v8:registerAction("lower", InputAction.LOWER_IMPLEMENT, 2)
      v5.controlledAction = v10
      v10:setCallback(self, Attachable.actionControllerLowerImplementEvent)
      v10:setFinishedFunctions(self, function()
        return u0.moveDown
      end, true, false)
      v10:setIsSaved(true)
      v10:setIsAvailableFunction(function()
        return true
      end)
      v10:setIsAccessibleFunction(function()
        local self = self:getIsRunning()
        if self then
          self = self:getActionControllerDirection()
          if self == 1 then
            self = self:getCanBeLowered(u1)
            -- if v0 then goto L31 end
            return false
          else
            self = self:getCanBeLifted(u1)
            if not self then
              return false
            end
          end
        end
        return true
      end)
      v10 = self:getAINeedsLowering()
      if v10 then
        v10:addAIEventListener(self, "onAIImplementStartLine", 1, true)
        v10:addAIEventListener(self, "onAIImplementEndLine", -1)
        v10:addAIEventListener(self, "onAIImplementPrepare", -1)
      end
    end
  end
  SpecializationUtil.raiseEvent(self, "onPostAttach", attacherVehicle, inputJointDescIndex, jointDescIndex, loadFromSavegame)
end
function Attachable:preDetach(attacherVehicle, implement)
  if self.spec_attachable.controlledAction ~= nil then
    index:remove()
    self.spec_attachable.controlledAction = nil
  end
  SpecializationUtil.raiseEvent(self, "onPreDetach", attacherVehicle, implement)
end
function Attachable:postDetach(implementIndex)
  self:deactivate()
  ObjectChangeUtil.setObjectChanges(self.spec_attachable.attacherJoint.changeObjects, false, self, self.setMovingToolDirty)
  if self.playAnimation ~= nil then
    for jointTypeStr, v7 in ipairs(self.spec_attachable.supportAnimations) do
      local v8 = self:getIsSupportAnimationAllowed(v7)
      if not v8 then
        continue
      end
      if not v7.detachAfterAnimation then
        self:playAnimation(v7.animationName, 1, nil, true)
      else
        v8 = self:getAnimationTime(v7.animationName)
        if not (v8 < 1) then
          continue
        end
        self:playAnimation(v7.animationName, 1, nil, true)
      end
    end
    if key.lowerAnimation ~= nil and key.lowerAnimationDirectionOnDetach ~= 0 then
      self:playAnimation(key.lowerAnimation, key.lowerAnimationDirectionOnDetach, nil, true)
    end
  end
  self:attachableRemoveToolCameras()
  for jointTypeStr, v7 in ipairs(key.attacherJoint.additionalObjects) do
    setVisibility(v7.node, false)
  end
  key.attacherVehicle = nil
  key.attacherJoint = nil
  key.attacherJointIndex = nil
  key.inputAttacherJointDescIndex = nil
  SpecializationUtil.raiseEvent(self, "onPostDetach")
end
function Attachable:setLowered(lowered)
  if self.spec_attachable.lowerAnimation ~= nil and self.playAnimation ~= nil then
    local inputAttacherJoint = self:getAnimationTime(self.spec_attachable.lowerAnimation)
    if lowered then
      -- if v3 >= 1 then goto L29 end
      self:playAnimation(self.spec_attachable.lowerAnimation, self.spec_attachable.lowerAnimationSpeed, inputAttacherJoint, true)
    elseif not lowered and 0 < inputAttacherJoint then
      self:playAnimation(self.spec_attachable.lowerAnimation, -self.spec_attachable.lowerAnimationSpeed, inputAttacherJoint, true)
    end
  end
  if key.attacherJoint ~= nil then
    for jointTypeStr, v7 in pairs(key.attacherJoint.dependentAttacherJoints) do
      if self.getAttacherJoints ~= nil then
        local attacherJoints = self:getAttacherJoints()
        if attacherJoints[v7] ~= nil then
          self:setJointMoveDown(v7, lowered, true)
          continue
        end
        Logging.xmlWarning(self.xmlFile, "Failed to lower dependent attacher joint index '%d', No attacher joint defined!", v7)
      else
        Logging.xmlWarning(self.xmlFile, "Failed to lower dependent attacher joint index '%d', AttacherJoint specialization is missing!", v7)
      end
    end
  end
  SpecializationUtil.raiseEvent(self, "onSetLowered", lowered)
end
function Attachable:setLoweredAll(doLowering, jointDescIndex)
  local inputAttacherJoint = self:getAttacherVehicle()
  inputAttacherJoint:handleLowerImplementByAttacherJointIndex(jointDescIndex, doLowering)
  SpecializationUtil.raiseEvent(self, "onSetLoweredAll", doLowering, jointDescIndex)
end
function Attachable:setIsAdditionalAttachment(needsLowering, vehicleLoaded)
  self.spec_attachable.isAdditionalAttachment = true
  self.spec_attachable.additionalAttachmentNeedsLowering = needsLowering
  if vehicleLoaded then
    self:requestActionEventUpdate()
    if not needsLowering and self.spec_attachable.controlledAction ~= nil then
      index:remove()
    end
  end
end
function Attachable:getIsAdditionalAttachment()
  return self.spec_attachable.isAdditionalAttachment
end
function Attachable:setIsSupportVehicle(state)
  if state == nil then
  end
  key.isSupportVehicle = state
end
function Attachable:getIsSupportVehicle()
  return self.spec_attachable.isSupportVehicle
end
function Attachable:registerLoweringActionEvent(actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
  self:addPoweredActionEvent(actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
end
function Attachable:getLoweringActionEventState()
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    local jointDesc = attacherVehicle:getAttacherJointDescFromObject(self)
    local inputJointDesc = self:getActiveInputAttacherJoint()
    if jointDesc.allowsLowering then
    end
  end
  local v5 = self:getIsLowered()
  if v5 then
    v5 = string.format(self.spec_attachable.texts.liftObject, self.typeDesc)
  else
    v5 = string.format(self.spec_attachable.texts.lowerObject, self.typeDesc)
  end
  return lowered, inputJointDesc
end
function Attachable.getAllowMultipleAttachments(v0)
  return false
end
function Attachable.resolveMultipleAttachments(v0)
end
function Attachable:getBlockFoliageDestruction()
  return self.spec_attachable.blockFoliageDestruction
end
function Attachable:onDeactivate()
  if self.brake ~= nil then
    local brakeForce = self:getBrakeForce()
    if 0 < brakeForce then
      self:brake(brakeForce, true)
    end
  end
end
function Attachable:onSelect(subSelectionIndex)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    attacherVehicle:setSelectedImplementByObject(self)
  end
end
function Attachable:onUnselect()
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    attacherVehicle:setSelectedImplementByObject(nil)
  end
end
function Attachable:findRootVehicle(superFunc)
  if self.spec_attachable.attacherVehicle ~= nil then
    return inputAttacherJoint:findRootVehicle()
  end
  inputAttacherJoint = superFunc(self)
  return inputAttacherJoint
end
function Attachable:getIsActive(superFunc)
  local key = superFunc(self)
  if key then
    return true
  end
  if self.spec_attachable.attacherVehicle ~= nil then
    return inputAttacherJoint:getIsActive()
  end
  return false
end
function Attachable:getIsOperating(superFunc)
  local isOperating = superFunc(self)
  if not isOperating and self.spec_attachable.attacherVehicle ~= nil then
    local index = index:getIsOperating()
  end
  return isOperating
end
function Attachable:getBrakeForce(superFunc)
  local superBrakeForce = superFunc(self)
  if 0 < self.spec_attachable.maxBrakeForceMass then
    local mass = self:getTotalMass(true)
    local v7 = math.max((mass - self.defaultMass) / (self.spec_attachable.maxBrakeForceMass - self.defaultMass), 0)
    local jointTypeStr = math.min(v7, 1)
    v7 = MathUtil.lerp(self.spec_attachable.brakeForce, self.spec_attachable.maxBrakeForce, jointTypeStr)
  end
  if 0 <= inputAttacherJoint.loweredBrakeForce then
    mass = self:getIsLowered(false)
    if mass then
    end
  end
  mass = math.max(superBrakeForce, index)
  return mass
end
function Attachable:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if not self.spec_attachable.allowFoldingWhileAttached then
    local v5 = self:getAttacherVehicle()
    if v5 ~= nil then
      return false, self.spec_attachable.texts.warningFoldingAttached
    end
  end
  if not index.allowFoldingWhileLowered then
    v5 = self:getIsLowered()
    if v5 then
      return false, index.texts.warningFoldingLowered
    end
  end
  if index.attacherJoint ~= nil and not index.attacherJoint.allowFolding then
    return false, index.texts.warningFoldingAttacherJoint
  end
  v5 = superFunc(self)
  return v5
end
function Attachable:getCanToggleTurnedOn(superFunc)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    local jointDesc = attacherVehicle:getAttacherJointDescFromObject(self)
    if jointDesc ~= nil and not jointDesc.canTurnOnImplement then
      return false
    end
  end
  if self.spec_attachable.attacherJoint ~= nil and not self.spec_attachable.attacherJoint.allowTurnOn then
    return false
  end
  return superFunc(self)
end
function Attachable:getCanImplementBeUsedForAI(superFunc)
  if self.spec_attachable.attacherJoint ~= nil and not self.spec_attachable.attacherJoint.allowAI then
    return false
  end
  if key.detachingInProgress then
    return false
  end
  return superFunc(self)
end
function Attachable:getDeactivateOnLeave(superFunc)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    local inputAttacherJoint = attacherVehicle:getDeactivateOnLeave()
    if not inputAttacherJoint then
      return false
    end
  end
  inputAttacherJoint = superFunc(self)
  return inputAttacherJoint
end
function Attachable:getCanAIImplementContinueWork(superFunc)
  local key, inputAttacherJoint, index = superFunc(self)
  if not key then
    return false, inputAttacherJoint, index
  end
  if self.spec_attachable.lowerAnimation ~= nil then
    local v7 = self:getAnimationTime(self.spec_attachable.lowerAnimation)
    if v7 ~= 1 and v7 ~= 0 then
    end
  end
  v7 = v7:getAttacherJointDescFromObject(self)
  if v7.allowsLowering then
    local attacherJoints = self:getAINeedsLowering()
    if attacherJoints and v7.moveDown and v7.moveAlpha ~= v7.lowerAlpha then
      -- if v7.moveAlpha ~= v7.upperAlpha then goto L58 end
    end
  end
  return jointTypeStr
end
function Attachable:getAreControlledActionsAllowed(lowered)
  -- TODO: structure LOP_FORNPREP (pc 7, target 20)
  local jointTypeStr = self:getIsAnimationPlaying(self.spec_attachable.supportAnimations[1].animationName)
  if jointTypeStr then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 8)
  return lowered(self)
end
function Attachable:getActiveFarm(superFunc)
  if self.spec_enterable ~= nil and self.spec_enterable.controllerFarmId ~= 0 then
    return superFunc(self)
  end
  if key.attacherVehicle ~= nil then
    inputAttacherJoint = inputAttacherJoint:getActiveFarm()
    return inputAttacherJoint
  end
  inputAttacherJoint = superFunc(self)
  return inputAttacherJoint
end
function Attachable.getCanBeSelected(v0, lowered)
  return true
end
function Attachable:getIsLowered(superFunc, defaultIsLowered)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    local jointDesc = attacherVehicle:getAttacherJointDescFromObject(self)
    if jointDesc ~= nil then
      if not jointDesc.allowsLowering then
        -- if not v4.isDefaultLowered then goto L20 end
      end
      return jointDesc.moveDown
      return defaultIsLowered
    end
  end
  jointDesc = superFunc(self, defaultIsLowered)
  return jointDesc
end
function Attachable:mountDynamic(superFunc, object, objectActorId, jointNode, mountType, forceAcceleration)
  if self.spec_attachable.attacherVehicle ~= nil then
    return false
  end
  return superFunc(self, object, objectActorId, jointNode, mountType, forceAcceleration)
end
function Attachable:getOwner(superFunc)
  if self.spec_attachable.attacherVehicle ~= nil then
    return inputAttacherJoint:getOwner()
  end
  inputAttacherJoint = superFunc(self)
  return inputAttacherJoint
end
function Attachable:getIsInUse(superFunc, connection)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    return attacherVehicle:getIsInUse(connection)
  end
  index = superFunc(self, connection)
  return index
end
function Attachable:getUpdatePriority(superFunc, skipCount, x, y, z, coeff, connection, isGuiVisible)
  local attacherVehicle = self:getAttacherVehicle()
  if attacherVehicle ~= nil then
    return attacherVehicle:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  end
  v10 = superFunc(self, skipCount, x, y, z, coeff, connection)
  return v10
end
function Attachable:getCanBeReset(superFunc)
  local key = self:getIsAdditionalAttachment()
  if key then
    return false
  end
  key = self:getIsSupportVehicle()
  if key then
    return false
  end
  key = superFunc(self)
  return key
end
function Attachable.loadAdditionalLightAttributesFromXML(v0, lowered, key, inputAttacherJoint, index)
  local v5 = lowered(v0, key, inputAttacherJoint, index)
  if not v5 then
    return false
  end
  v5 = key:getValue(inputAttacherJoint .. "#inputAttacherJointIndex")
  index.inputAttacherJointIndex = v5
  return true
end
function Attachable:getIsLightActive(superFunc, light)
  if light.inputAttacherJointIndex ~= nil then
    local index = self:getActiveInputAttacherJointDescIndex()
    if light.inputAttacherJointIndex ~= index then
      return false
    end
  end
  return superFunc(self, light)
end
function Attachable:getIsPowered(superFunc)
  local key = self:getAttacherVehicle()
  if key ~= nil then
    local inputAttacherJoint, index = key:getIsPowered()
    -- if v3 then goto L28 end
    return inputAttacherJoint, index
  elseif self.spec_attachable.requiresExternalPower then
    index = SpecializationUtil.hasSpecialization(Motorized, self.specializations)
    if not index then
      return false, self.spec_attachable.attachToPowerWarning
    end
  end
  inputAttacherJoint = superFunc(self)
  return inputAttacherJoint
end
function Attachable:getConnectionHoseConfigIndex(superFunc)
  local index = superFunc(self)
  local inputAttacherJoint = inputAttacherJoint:getValue("vehicle.attachable#connectionHoseConfigId", index)
  if self.configurations.inputAttacherJoint ~= nil then
    inputAttacherJoint = string.format("vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(%d)", self.configurations.inputAttacherJoint - 1)
    local index = index:getValue(inputAttacherJoint .. "#connectionHoseConfigId", inputAttacherJoint)
  end
  return index
end
function Attachable:getIsMapHotspotVisible(superFunc)
  local key = superFunc(self)
  if not key then
    return false
  end
  key = self:getIsAdditionalAttachment()
  if key then
    return false
  end
  key = self:getIsSupportVehicle()
  if key then
    return false
  end
  key = self:getShowAttachableMapHotspot()
  return key
end
function Attachable:getPowerTakeOffConfigIndex(superFunc)
  local index = superFunc(self)
  local inputAttacherJoint = inputAttacherJoint:getValue("vehicle.attachable#powerTakeOffConfigId", index)
  if self.configurations.inputAttacherJoint ~= nil then
    inputAttacherJoint = string.format("vehicle.attachable.inputAttacherJointConfigurations.inputAttacherJointConfiguration(%d)", self.configurations.inputAttacherJoint - 1)
    local index = index:getValue(inputAttacherJoint .. "#powerTakeOffConfigId", inputAttacherJoint)
  end
  return index
end
function Attachable.loadDashboardGroupFromXML(v0, superFunc, key, inputAttacherJoint, index)
  local v5 = superFunc(v0, key, inputAttacherJoint, index)
  if not v5 then
    return false
  end
  v5 = key:getValue(inputAttacherJoint .. "#isAttached")
  index.isAttached = v5
  return true
end
function Attachable:getIsDashboardGroupActive(superFunc, group)
  if group.isAttached ~= nil then
    local v5 = self:getAttacherVehicle()
    if v5 == nil then
    end
    if inputAttacherJoint ~= true then
      return false
    end
  end
  return superFunc(self, group)
end
function Attachable:setWorldPositionQuaternion(superFunc, x, y, z, qx, qy, qz, qw, i, changeInterp)
  if not self.isServer then
    if not self.spec_attachable.isHardAttached then
      return superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
    end
    return
  end
  v11 = superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
  return v11
end
function Attachable:actionControllerLowerImplementEvent(direction)
  local inputAttacherJoint = self:getAllowsLowering()
  if inputAttacherJoint then
    if direction < 0 then
    end
    local index = index:getAttacherJointIndexFromObject(self)
    local v5 = v5:getJointMoveDown(index)
    if v5 ~= inputAttacherJoint then
      v5:setJointMoveDown(index, inputAttacherJoint, false)
    end
    return true
  end
  return false
end
function Attachable:onStateChange(state, data)
  if self.getAILowerIfAnyIsLowered ~= nil then
    local inputAttacherJoint = self:getAILowerIfAnyIsLowered()
    if inputAttacherJoint then
      if state == Vehicle.STATE_CHANGE_AI_START_LINE then
        Attachable.actionControllerLowerImplementEvent(self, 1)
        return
      end
      if state == Vehicle.STATE_CHANGE_AI_END_LINE then
        Attachable.actionControllerLowerImplementEvent(self, -1)
      end
    end
  end
end
function Attachable:onRootVehicleChanged(rootVehicle)
  if rootVehicle.actionController ~= nil and self.spec_attachable.controlledAction ~= nil then
    index:updateParent(rootVehicle.actionController)
  end
end
function Attachable:onFoldStateChanged(direction, moveToMiddle)
  if self.spec_foldable.foldMiddleAnimTime ~= nil then
    if not moveToMiddle and direction == self.spec_foldable.turnOnFoldDirection then
      SpecializationUtil.raiseEvent(self, "onSetLowered", true)
      return
    end
    SpecializationUtil.raiseEvent(self, "onSetLowered", false)
  end
end
function Attachable:onRegisterAnimationValueTypes()
  self:registerAnimationValueType("lowerRotLimitScale", "lowerRotLimitScaleStart", "lowerRotLimitScaleEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      superFunc = unpack(self.inputAttacherJoint.lowerRotLimitScale)
      return superFunc
    end
    return 0, 0, 0
  end, function(self, superFunc, key, inputAttacherJoint)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.lowerRotLimitScale[1] = superFunc
      self.inputAttacherJoint.lowerRotLimitScale[2] = key
      self.inputAttacherJoint.lowerRotLimitScale[3] = inputAttacherJoint
      u0(true)
    end
  end)
  self:registerAnimationValueType("upperRotLimitScale", "upperRotLimitScaleStart", "upperRotLimitScaleEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      superFunc = unpack(self.inputAttacherJoint.upperRotLimitScale)
      return superFunc
    end
    return 0, 0, 0
  end, function(self, superFunc, key, inputAttacherJoint)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.upperRotLimitScale[1] = superFunc
      self.inputAttacherJoint.upperRotLimitScale[2] = key
      self.inputAttacherJoint.upperRotLimitScale[3] = inputAttacherJoint
      u0(true)
    end
  end)
  self:registerAnimationValueType("lowerTransLimitScale", "lowerTransLimitScaleStart", "lowerTransLimitScaleEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      superFunc = unpack(self.inputAttacherJoint.lowerTransLimitScale)
      return superFunc
    end
    return 0, 0, 0
  end, function(self, superFunc, key, inputAttacherJoint)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.lowerTransLimitScale[1] = superFunc
      self.inputAttacherJoint.lowerTransLimitScale[2] = key
      self.inputAttacherJoint.lowerTransLimitScale[3] = inputAttacherJoint
      u0(true)
    end
  end)
  self:registerAnimationValueType("upperTransLimitScale", "upperTransLimitScaleStart", "upperTransLimitScaleEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      superFunc = unpack(self.inputAttacherJoint.upperTransLimitScale)
      return superFunc
    end
    return 0, 0, 0
  end, function(self, superFunc, key, inputAttacherJoint)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.upperTransLimitScale[1] = superFunc
      self.inputAttacherJoint.upperTransLimitScale[2] = key
      self.inputAttacherJoint.upperTransLimitScale[3] = inputAttacherJoint
      u0(true)
    end
  end)
  self:registerAnimationValueType("lowerRotationOffset", "lowerRotationOffsetStart", "lowerRotationOffsetEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      return self.inputAttacherJoint.lowerRotationOffset
    end
    return 0
  end, function(self, superFunc)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.lowerRotationOffset = superFunc
      u0(false, true)
    end
  end)
  self:registerAnimationValueType("upperRotationOffset", "upperRotationOffsetStart", "upperRotationOffsetEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      return self.inputAttacherJoint.upperRotationOffset
    end
    return 0
  end, function(self, superFunc)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.upperRotationOffset = superFunc
      u0(false, true)
    end
  end)
  self:registerAnimationValueType("lowerDistanceToGround", "lowerDistanceToGroundStart", "lowerDistanceToGroundEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      return self.inputAttacherJoint.lowerDistanceToGround
    end
    return 0
  end, function(self, superFunc)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.lowerDistanceToGround = superFunc
      u0(false, false, true)
    end
  end)
  self:registerAnimationValueType("upperDistanceToGround", "upperDistanceToGroundStart", "upperDistanceToGroundEnd", false, AnimationValueFloat, function(self, superFunc, key)
    local inputAttacherJoint = superFunc:getValue(key .. "#inputAttacherJointIndex")
    self.inputAttacherJointIndex = inputAttacherJoint
    if self.inputAttacherJointIndex ~= nil then
      self:setWarningInformation("inputAttacherJointIndex: " .. self.inputAttacherJointIndex)
      self:addCompareParameters("inputAttacherJointIndex")
      return true
    end
    return false
  end, function(self)
    if self.inputAttacherJointIndex ~= nil and self.inputAttacherJoint == nil then
      local superFunc = superFunc:getInputAttacherJointByJointDescIndex(self.inputAttacherJointIndex)
      self.inputAttacherJoint = superFunc
      if self.inputAttacherJoint == nil then
        Logging.xmlWarning(u0.xmlFile, "Unknown inputAttacherJointIndex '%s' for animation part.", self.inputAttacherJointIndex)
        self.inputAttacherJointIndex = nil
        -- goto L34  (LOP_JUMP +0)
      end
    end
    if self.inputAttacherJoint ~= nil then
      return self.inputAttacherJoint.upperDistanceToGround
    end
    return 0
  end, function(self, superFunc)
    if self.inputAttacherJoint ~= nil then
      self.inputAttacherJoint.upperDistanceToGround = superFunc
      u0(false, false, true)
    end
  end)
end
