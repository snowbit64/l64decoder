-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AttacherJoints = {DEFAULT_MAX_UPDATE_DISTANCE = 50, MAX_ATTACH_DISTANCE_SQ = 0.48999999999999994, MAX_ATTACH_ANGLE = 0.34202, SMOOTH_ATTACH_TIME = 500, NUM_JOINTTYPES = 0, jointTypeNameToInt = {}}
function AttacherJoints.initSpecialization()
  local v3 = v3:getText("configuration_attacherJoint")
  v0:addConfigurationType("attacherJoint", v3, "attacherJoints", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.registerStateChange("ATTACH")
  Vehicle.registerStateChange("DETACH")
  Vehicle.registerStateChange("LOWER_ALL_IMPLEMENTS")
  Vehicle.xmlSchema:setXMLSpecializationType("AttacherJoints")
  AttacherJoints.registerAttacherJointXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.attacherJoint(?)")
  AttacherJoints.registerAttacherJointXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(?).attacherJoint(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.sounds", "hydraulic")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.sounds", "attach")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJoints.sounds", "detach")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attacherJoints#comboDuration", "Combo duration", 2)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attacherJoints#connectionHoseConfigId", "Connection hose configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attacherJoints#powerTakeOffConfigId", "Power take off configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(?)#connectionHoseConfigId", "Connection hose configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(?)#powerTakeOffConfigId", "Power take off configuration index to use")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attacherJoints#maxUpdateDistance", "Max. distance to vehicle root to update attacher joint graphics", AttacherJoints.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Dashboard.GROUP_XML_KEY .. "#attacherJointIndices", "Attacher joint indices")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. ".heightNode(?)#disablingAttacherJointIndices", "Attacher joint indices that disable heigth node if something is attached")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. ".heightNode(?)#disablingAttacherJointIndices", "Attacher joint indices that disable heigth node if something is attached")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).attacherJoints#comboDirection", "Current combo direction")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.attachments(?)#rootVehicleId", "Root vehicle id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.attachments(?).attachment(?)#attachmentId", "Attachment vehicle id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.attachments(?).attachment(?)#inputJointDescIndex", "Index of input attacher joint", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.attachments(?).attachment(?)#jointIndex", "Index of attacher joint")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.attachments(?).attachment(?)#moveDown", "Attachment lowered or lifted")
end
function AttacherJoints:registerAttacherJointXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#nodeVisual", "Visual node")
  self:register(XMLValueType.BOOL, v1 .. "#supportsHardAttach", "Supports hard attach")
  self:register(XMLValueType.STRING, v1 .. "#jointType", "Joint type", "implement")
  self:register(XMLValueType.STRING, v1 .. ".subType#name", "If defined this type needs to match with the sub type in the tool")
  self:register(XMLValueType.STRING, v1 .. ".subType#brandRestriction", "If defined it's only possible to attach tools from these brands (can be multiple separated by ' ')")
  self:register(XMLValueType.STRING, v1 .. ".subType#vehicleRestriction", "If defined it's only possible to attach tools containing these strings in there xml path (can be multiple separated by ' ')")
  self:register(XMLValueType.BOOL, v1 .. ".subType#subTypeShowWarning", "Show warning if sub type does not match", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowsJointLimitMovement", "Allows joint limit movement", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowsLowering", "Allows lowering", true)
  self:register(XMLValueType.BOOL, v1 .. "#isDefaultLowered", "Default lowered state", false)
  self:register(XMLValueType.BOOL, v1 .. "#allowDetachingWhileLifted", "Allow detach while lifted", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowFoldingWhileAttached", "Allow folding while attached", true)
  self:register(XMLValueType.BOOL, v1 .. "#canTurnOnImplement", "Can turn on implement", true)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".rotationNode#node", "Rotation node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode#lowerRotation", "Lower rotation", "0 0 0")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode#upperRotation", "Upper rotation", "rotation in i3d")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode#startRotation", "Start rotation", "rotation in i3d")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".rotationNode2#node", "Rotation node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode2#lowerRotation", "Lower rotation", "0 0 0")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode2#upperRotation", "Upper rotation", "rotation in i3d")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".transNode#node", "Translation node")
  self:register(XMLValueType.FLOAT, v1 .. ".transNode#height", "Height of visual translation node", 0.12)
  self:register(XMLValueType.FLOAT, v1 .. ".transNode#minY", "Min Y translation")
  self:register(XMLValueType.FLOAT, v1 .. ".transNode#maxY", "Max Y translation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".transNode.dependentBottomArm#node", "Dependent bottom arm node")
  self:register(XMLValueType.FLOAT, v1 .. ".transNode.dependentBottomArm#threshold", "If the trans node Y translation is below this threshold the rotation will be set", "unlimited, so rotation is always set")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".transNode.dependentBottomArm#rotation", "Rotation to be set when the translation node is below the threshold", "0 0 0")
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround#lower", "Lower distance to ground", 0.7)
  self:register(XMLValueType.FLOAT, v1 .. ".distanceToGround#upper", "Upper distance to ground", 1)
  self:register(XMLValueType.ANGLE, v1 .. "#lowerRotationOffset", "Upper rotation offset", 0)
  self:register(XMLValueType.ANGLE, v1 .. "#upperRotationOffset", "Lower rotation offset", 0)
  self:register(XMLValueType.BOOL, v1 .. "#lockDownRotLimit", "Lock down rotation limit", false)
  self:register(XMLValueType.BOOL, v1 .. "#lockUpRotLimit", "Lock up rotation limit", false)
  self:register(XMLValueType.BOOL, v1 .. "#lockDownTransLimit", "Lock down translation limit", true)
  self:register(XMLValueType.BOOL, v1 .. "#lockUpTransLimit", "Lock up translation limit", false)
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#lowerRotLimit", "Lower rotation limit", "(20 20 20) for implement type, otherwise (0 0 0)")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#upperRotLimit", "Upper rotation limit", "Lower rot limit")
  self:register(XMLValueType.VECTOR_3, v1 .. "#lowerTransLimit", "Lower translation limit", "(0.5 0.5 0.5) for implement type, otherwise (0 0 0)")
  self:register(XMLValueType.VECTOR_3, v1 .. "#upperTransLimit", "Upper translation limit", "Lower trans limit")
  self:register(XMLValueType.VECTOR_3, v1 .. "#jointPositionOffset", "Joint position offset", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitSpring", "Rotation limit spring", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitDamping", "Rotation limit damping", "1 1 1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#rotLimitForceLimit", "Rotation limit force limit", "-1 -1 -1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitSpring", "Translation limit spring", "0 0 0")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitDamping", "Translation limit damping", "1 1 1")
  self:register(XMLValueType.VECTOR_3, v1 .. "#transLimitForceLimit", "Translation limit force limit", "-1 -1 -1")
  self:register(XMLValueType.FLOAT, v1 .. "#moveTime", "Move time", 0.5)
  self:register(XMLValueType.VECTOR_N, v1 .. "#disabledByAttacherJoints", "This attacher becomes unavailable after attaching something to these attacher joint indices")
  self:register(XMLValueType.BOOL, v1 .. "#enableCollision", "Collision between vehicle is enabled", false)
  self:register(XMLValueType.STRING, v1 .. ".topArm#filename", "Path to top arm i3d file")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".topArm#baseNode", "Link node for upper link")
  self:register(XMLValueType.INT, v1 .. ".topArm#zScale", "Inverts top arm direction", 1)
  self:register(XMLValueType.BOOL, v1 .. ".topArm#toggleVisibility", "Top arm will be hidden on detach", false)
  self:register(XMLValueType.COLOR, v1 .. ".topArm#color", "Top arm color")
  self:register(XMLValueType.COLOR, v1 .. ".topArm#color2", "Top arm color 2")
  self:register(XMLValueType.COLOR, v1 .. ".topArm#decalColor", "Top arm decal color")
  self:register(XMLValueType.BOOL, v1 .. ".topArm#secondPartUseMainColor", "Second part of upper link (parts on colorMat3) will use main color or color2", true)
  self:register(XMLValueType.BOOL, v1 .. ".topArm#useBrandDecal", "Defines if the brand decal on the top arm is allowed or not", true)
  self:register(XMLValueType.INT, v1 .. ".topArm#material", "Top arm material index")
  self:register(XMLValueType.INT, v1 .. ".topArm#material2", "Top arm material index 2")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".topArm#rotationNode", "Rotation node if top arm not loaded from i3d")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".topArm#translationNode", "Translation node if top arm not loaded from i3d")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".topArm#referenceNode", "Reference node if top arm not loaded from i3d")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".bottomArm#rotationNode", "Rotation node of bottom arm")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".bottomArm#translationNode", "Translation node of bottom arm")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".bottomArm#referenceNode", "Reference node of bottom arm")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".bottomArm#startRotation", "Start rotation", "values set in i3d")
  self:register(XMLValueType.INT, v1 .. ".bottomArm#zScale", "Inverts bottom arm direction", 1)
  self:register(XMLValueType.BOOL, v1 .. ".bottomArm#lockDirection", "Lock direction", true)
  self:register(XMLValueType.ANGLE, v1 .. ".bottomArm#resetSpeed", "Speed of bottom arm to return to idle position (deg/sec)", 45)
  self:register(XMLValueType.BOOL, v1 .. ".bottomArm#toggleVisibility", "Bottom arm will be hidden on detach", false)
  self:register(XMLValueType.STRING, v1 .. ".toolbar#filename", "Filename to toolbar i3d", "$data/shared/assets/toolbar.i3d")
  SoundManager.registerSampleXMLPaths(self, v1, "attachSound")
  SoundManager.registerSampleXMLPaths(self, v1, "detachSound")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".steeringBars#leftNode", "Steering bar left node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".steeringBars#rightNode", "Steering bar right node")
  self:register(XMLValueType.BOOL, v1 .. ".steeringBars#forceUsage", "Forces usage of tools steering axle even if no steering bars are defined", true)
  self:register(XMLValueType.NODE_INDICES, v1 .. ".visuals#nodes", "Visual nodes of attacher joint that will be visible when the joint is active")
  self:register(XMLValueType.NODE_INDICES, v1 .. ".visuals#hide", "Visual nodes that will be hidden while attacher joint is active if there attacher is inactive")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1)
  self:register(XMLValueType.BOOL, v1 .. "#delayedObjectChanges", "Defines if object change is deactivated after the bottomArm has moved (if available)", true)
  self:register(XMLValueType.BOOL, v1 .. "#delayedObjectChangesOnAttach", "Defines if object change is activated on attach or post attach", false)
  self:register(XMLValueType.INT, v1 .. ".additionalAttachment#attacherJointDirection", "Attacher joint direction")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rootNode", "Root node", "first component")
  self:register(XMLValueType.FLOAT, v1 .. "#comboTime", "Combo time")
  self:register(XMLValueType.VECTOR_2, v1 .. ".schema#position", "Schema position")
  self:register(XMLValueType.VECTOR_2, v1 .. ".schema#liftedOffset", "Offset if lifted", "0 5")
  self:register(XMLValueType.ANGLE, v1 .. ".schema#rotation", "Schema rotation", 0)
  self:register(XMLValueType.BOOL, v1 .. ".schema#invertX", "Invert X", false)
end
function AttacherJoints.registerJointType(name)
  local v3 = string.upper(name)
  if AttacherJoints["JOINTTYPE_" .. v3] == nil then
    AttacherJoints.NUM_JOINTTYPES = AttacherJoints.NUM_JOINTTYPES + 1
    AttacherJoints["JOINTTYPE_" .. v3] = AttacherJoints.NUM_JOINTTYPES
    AttacherJoints.jointTypeNameToInt[name] = AttacherJoints.NUM_JOINTTYPES
  end
end
AttacherJoints.registerJointType("implement")
AttacherJoints.registerJointType("trailer")
AttacherJoints.registerJointType("trailerLow")
AttacherJoints.registerJointType("trailerSaddled")
AttacherJoints.registerJointType("telehandler")
AttacherJoints.registerJointType("frontloader")
AttacherJoints.registerJointType("loaderFork")
AttacherJoints.registerJointType("semitrailer")
AttacherJoints.registerJointType("semitrailerHook")
AttacherJoints.registerJointType("semitrailerCar")
AttacherJoints.registerJointType("attachableFrontloader")
AttacherJoints.registerJointType("wheelLoader")
AttacherJoints.registerJointType("manureBarrel")
AttacherJoints.registerJointType("cutter")
AttacherJoints.registerJointType("cutterHarvester")
AttacherJoints.registerJointType("cutterTrailer")
AttacherJoints.registerJointType("skidSteer")
AttacherJoints.registerJointType("conveyor")
AttacherJoints.registerJointType("hookLift")
AttacherJoints.registerJointType("bigBag")
AttacherJoints.registerJointType("train")
function AttacherJoints.prerequisitesPresent(specializations)
  return true
end
function AttacherJoints.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onPreAttachImplement")
  SpecializationUtil.registerEvent(vehicleType, "onPostAttachImplement")
  SpecializationUtil.registerEvent(vehicleType, "onPreDetachImplement")
  SpecializationUtil.registerEvent(vehicleType, "onPostDetachImplement")
end
function AttacherJoints.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "saveAttachmentsToXMLFile", AttacherJoints.saveAttachmentsToXMLFile)
  SpecializationUtil.registerFunction(vehicleType, "loadAttachmentsFromXMLFile", AttacherJoints.loadAttachmentsFromXMLFile)
  SpecializationUtil.registerFunction(vehicleType, "loadAttachmentsFinished", AttacherJoints.loadAttachmentsFinished)
  SpecializationUtil.registerFunction(vehicleType, "handleLowerImplementEvent", AttacherJoints.handleLowerImplementEvent)
  SpecializationUtil.registerFunction(vehicleType, "handleLowerImplementByAttacherJointIndex", AttacherJoints.handleLowerImplementByAttacherJointIndex)
  SpecializationUtil.registerFunction(vehicleType, "getAttachedImplements", AttacherJoints.getAttachedImplements)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJoints", AttacherJoints.getAttacherJoints)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJointByJointDescIndex", AttacherJoints.getAttacherJointByJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJointIndexByNode", AttacherJoints.getAttacherJointIndexByNode)
  SpecializationUtil.registerFunction(vehicleType, "getImplementFromAttacherJointIndex", AttacherJoints.getImplementFromAttacherJointIndex)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJointIndexFromObject", AttacherJoints.getAttacherJointIndexFromObject)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJointDescFromObject", AttacherJoints.getAttacherJointDescFromObject)
  SpecializationUtil.registerFunction(vehicleType, "getAttacherJointIndexFromImplementIndex", AttacherJoints.getAttacherJointIndexFromImplementIndex)
  SpecializationUtil.registerFunction(vehicleType, "getObjectFromImplementIndex", AttacherJoints.getObjectFromImplementIndex)
  SpecializationUtil.registerFunction(vehicleType, "updateAttacherJointGraphics", AttacherJoints.updateAttacherJointGraphics)
  SpecializationUtil.registerFunction(vehicleType, "calculateAttacherJointMoveUpperLowerAlpha", AttacherJoints.calculateAttacherJointMoveUpperLowerAlpha)
  SpecializationUtil.registerFunction(vehicleType, "doGroundHeightNodeCheck", AttacherJoints.doGroundHeightNodeCheck)
  SpecializationUtil.registerFunction(vehicleType, "finishGroundHeightNodeCheck", AttacherJoints.finishGroundHeightNodeCheck)
  SpecializationUtil.registerFunction(vehicleType, "groundHeightNodeCheckCallback", AttacherJoints.groundHeightNodeCheckCallback)
  SpecializationUtil.registerFunction(vehicleType, "updateAttacherJointRotation", AttacherJoints.updateAttacherJointRotation)
  SpecializationUtil.registerFunction(vehicleType, "updateAttacherJointRotationNodes", AttacherJoints.updateAttacherJointRotationNodes)
  SpecializationUtil.registerFunction(vehicleType, "updateAttacherJointSettingsByObject", AttacherJoints.updateAttacherJointSettingsByObject)
  SpecializationUtil.registerFunction(vehicleType, "attachImplementFromInfo", AttacherJoints.attachImplementFromInfo)
  SpecializationUtil.registerFunction(vehicleType, "attachImplement", AttacherJoints.attachImplement)
  SpecializationUtil.registerFunction(vehicleType, "postAttachImplement", AttacherJoints.postAttachImplement)
  SpecializationUtil.registerFunction(vehicleType, "createAttachmentJoint", AttacherJoints.createAttachmentJoint)
  SpecializationUtil.registerFunction(vehicleType, "hardAttachImplement", AttacherJoints.hardAttachImplement)
  SpecializationUtil.registerFunction(vehicleType, "hardDetachImplement", AttacherJoints.hardDetachImplement)
  SpecializationUtil.registerFunction(vehicleType, "detachImplement", AttacherJoints.detachImplement)
  SpecializationUtil.registerFunction(vehicleType, "detachImplementByObject", AttacherJoints.detachImplementByObject)
  SpecializationUtil.registerFunction(vehicleType, "playAttachSound", AttacherJoints.playAttachSound)
  SpecializationUtil.registerFunction(vehicleType, "playDetachSound", AttacherJoints.playDetachSound)
  SpecializationUtil.registerFunction(vehicleType, "detachingIsPossible", AttacherJoints.detachingIsPossible)
  SpecializationUtil.registerFunction(vehicleType, "attachAdditionalAttachment", AttacherJoints.attachAdditionalAttachment)
  SpecializationUtil.registerFunction(vehicleType, "detachAdditionalAttachment", AttacherJoints.detachAdditionalAttachment)
  SpecializationUtil.registerFunction(vehicleType, "getImplementIndexByJointDescIndex", AttacherJoints.getImplementIndexByJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getImplementByJointDescIndex", AttacherJoints.getImplementByJointDescIndex)
  SpecializationUtil.registerFunction(vehicleType, "getImplementIndexByObject", AttacherJoints.getImplementIndexByObject)
  SpecializationUtil.registerFunction(vehicleType, "getImplementByObject", AttacherJoints.getImplementByObject)
  SpecializationUtil.registerFunction(vehicleType, "callFunctionOnAllImplements", AttacherJoints.callFunctionOnAllImplements)
  SpecializationUtil.registerFunction(vehicleType, "activateAttachments", AttacherJoints.activateAttachments)
  SpecializationUtil.registerFunction(vehicleType, "deactivateAttachments", AttacherJoints.deactivateAttachments)
  SpecializationUtil.registerFunction(vehicleType, "deactivateAttachmentsLights", AttacherJoints.deactivateAttachmentsLights)
  SpecializationUtil.registerFunction(vehicleType, "setJointMoveDown", AttacherJoints.setJointMoveDown)
  SpecializationUtil.registerFunction(vehicleType, "getJointMoveDown", AttacherJoints.getJointMoveDown)
  SpecializationUtil.registerFunction(vehicleType, "getIsHardAttachAllowed", AttacherJoints.getIsHardAttachAllowed)
  SpecializationUtil.registerFunction(vehicleType, "loadAttacherJointFromXML", AttacherJoints.loadAttacherJointFromXML)
  SpecializationUtil.registerFunction(vehicleType, "onTopArmI3DLoaded", AttacherJoints.onTopArmI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "onBottomArmToolbarI3DLoaded", AttacherJoints.onBottomArmToolbarI3DLoaded)
  SpecializationUtil.registerFunction(vehicleType, "setSelectedImplementByObject", AttacherJoints.setSelectedImplementByObject)
  SpecializationUtil.registerFunction(vehicleType, "getSelectedImplement", AttacherJoints.getSelectedImplement)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleAttach", AttacherJoints.getCanToggleAttach)
  SpecializationUtil.registerFunction(vehicleType, "getShowAttachControlBarAction", AttacherJoints.getShowAttachControlBarAction)
  SpecializationUtil.registerFunction(vehicleType, "getAttachControlBarActionAccessible", AttacherJoints.getAttachControlBarActionAccessible)
  SpecializationUtil.registerFunction(vehicleType, "detachAttachedImplement", AttacherJoints.detachAttachedImplement)
  SpecializationUtil.registerFunction(vehicleType, "startAttacherJointCombo", AttacherJoints.startAttacherJointCombo)
  SpecializationUtil.registerFunction(vehicleType, "registerSelfLoweringActionEvent", AttacherJoints.registerSelfLoweringActionEvent)
  SpecializationUtil.registerFunction(vehicleType, "getIsAttachingAllowed", AttacherJoints.getIsAttachingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getCanSteerAttachable", AttacherJoints.getCanSteerAttachable)
end
function AttacherJoints.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "raiseActive", AttacherJoints.raiseActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerActionEvents", AttacherJoints.registerActionEvents)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeActionEvents", AttacherJoints.removeActionEvents)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", AttacherJoints.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", AttacherJoints.removeFromPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTotalMass", AttacherJoints.getTotalMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addChildVehicles", AttacherJoints.addChildVehicles)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAirConsumerUsage", AttacherJoints.getAirConsumerUsage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresPower", AttacherJoints.getRequiresPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addVehicleToAIImplementList", AttacherJoints.addVehicleToAIImplementList)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "collectAIAgentAttachments", AttacherJoints.collectAIAgentAttachments)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setAIVehicleObstacleStateDirty", AttacherJoints.setAIVehicleObstacleStateDirty)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirectionSnapAngle", AttacherJoints.getDirectionSnapAngle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillLevelInformation", AttacherJoints.getFillLevelInformation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "attachableAddToolCameras", AttacherJoints.attachableAddToolCameras)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "attachableRemoveToolCameras", AttacherJoints.attachableRemoveToolCameras)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerSelectableObjects", AttacherJoints.registerSelectableObjects)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsReadyForAutomatedTrainTravel", AttacherJoints.getIsReadyForAutomatedTrainTravel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAutomaticShiftingAllowed", AttacherJoints.getIsAutomaticShiftingAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDashboardGroupFromXML", AttacherJoints.loadDashboardGroupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDashboardGroupActive", AttacherJoints.getIsDashboardGroupActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAttacherJointHeightNode", AttacherJoints.loadAttacherJointHeightNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAttacherJointHeightNodeActive", AttacherJoints.getIsAttacherJointHeightNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", AttacherJoints.isDetachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", AttacherJoints.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWheelFoliageDestructionAllowed", AttacherJoints.getIsWheelFoliageDestructionAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", AttacherJoints.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConnectionHoseConfigIndex", AttacherJoints.getConnectionHoseConfigIndex)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPowerTakeOffConfigIndex", AttacherJoints.getPowerTakeOffConfigIndex)
end
function AttacherJoints.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDelete", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onLightsTypesMaskChanged", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnLightStateChanged", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onBrakeLightsVisibilityChanged", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onReverseLightsVisibilityChanged", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onBeaconLightsVisibilityChanged", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onBrake", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onActivate", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", AttacherJoints)
  SpecializationUtil.registerEventListener(vehicleType, "onReverseDirectionChanged", AttacherJoints)
end
function AttacherJoints:onPreLoad(savegame)
  self.spec_attacherJoints.attachedImplements = {}
  self.spec_attacherJoints.selectedImplement = nil
  self.spec_attacherJoints.lastInputAttacherCheckIndex = 0
end
function AttacherJoints:onLoad(savegame)
  self.spec_attacherJoints.attacherJointCombos = {}
  local v5 = v5:getValue("vehicle.attacherJoints#comboDuration", 2)
  self.spec_attacherJoints.attacherJointCombos.duration = v5 * 1000
  self.spec_attacherJoints.attacherJointCombos.currentTime = 0
  self.spec_attacherJoints.attacherJointCombos.direction = -1
  self.spec_attacherJoints.attacherJointCombos.isRunning = false
  self.spec_attacherJoints.attacherJointCombos.joints = {}
  local v3 = v3:getValue("vehicle.attacherJoints#maxUpdateDistance", AttacherJoints.DEFAULT_MAX_UPDATE_DISTANCE)
  self.spec_attacherJoints.maxUpdateDistance = v3
  self.spec_attacherJoints.visualNodeToAttacherJoints = {}
  self.spec_attacherJoints.hideVisualNodeToAttacherJoints = {}
  self.spec_attacherJoints.attacherJoints = {}
  while true do
    v4 = string.format("vehicle.attacherJoints.attacherJoint(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadAttacherJointFromXML({}, self.xmlFile, v4, v3)
    if v6 then
      table.insert(v2.attacherJoints, {})
    end
  end
  if self.configurations.attacherJoint ~= nil then
    v4 = string.format("vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(%d)", self.configurations.attacherJoint - 1)
    while true do
      v5 = string.format(v4 .. ".attacherJoint(%d)", v3)
      v6 = v6:hasProperty(v5)
      if not v6 then
        break
      end
      v7 = self:loadAttacherJointFromXML({}, self.xmlFile, v5, v3)
      if v7 then
        table.insert(v2.attacherJoints, {})
      end
    end
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration", self.configurations.attacherJoint, self.components, self)
  end
  v2.attachableInfo = {attacherVehicle = nil, attacherVehicleJointDescIndex = nil, attachable = nil, attachableJointDescIndex = nil}
  v2.pendingAttachableInfo = {minDistance = math.huge, minDistanceY = math.huge, attacherVehicle = nil, attacherVehicleJointDescIndex = nil, attachable = nil, attachableJointDescIndex = nil, warning = nil}
  if self.isClient then
    v2.samples = {}
    v2.isHydraulicSamplePlaying = false
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.attacherJoints.sounds", "hydraulic", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.hydraulic = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.attacherJoints.sounds", "attach", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.attach = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.attacherJoints.sounds", "detach", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.detach = v5
  end
  if self.isClient and g_isDevelopmentVersion then
    for v7, v8 in ipairs(v2.attacherJoints) do
      if v2.samples.attach == nil and v8.sampleAttach == nil then
        Logging.xmlDevWarning(self.xmlFile, "Missing attach sound for attacherjoint '%d'", v7)
      end
      if not (v8.rotationNode ~= nil) then
        continue
      end
      if not (v2.samples.hydraulic == nil) then
        continue
      end
      Logging.xmlDevWarning(self.xmlFile, "Missing hydraulic sound for attacherjoint '%d'", v7)
    end
  end
  v2.showAttachNotAllowedText = 0
  v2.wasInAttachRange = false
  v2.texts = {}
  v5 = v5:getText("warning_toolNotCompatible")
  v2.texts.warningToolNotCompatible = v5
  v5 = v5:getText("warning_toolBrandNotCompatible")
  v2.texts.warningToolBrandNotCompatible = v5
  v5 = v5:getText("info_attach_not_allowed")
  v2.texts.infoAttachNotAllowed = v5
  v5 = v5:getText("warning_lowerImplementFirst")
  v2.texts.lowerImplementFirst = v5
  v5 = v5:getText("warning_detachNotAllowed")
  v2.texts.detachNotAllowed = v5
  v5 = v5:getText("action_attach")
  v2.texts.actionAttach = v5
  v5 = v5:getText("action_detach")
  v2.texts.actionDetach = v5
  v5 = v5:getText("warning_foldingNotWhileAttachedToAttacherJoint")
  v2.texts.warningFoldingAttacherJoint = v5
  v2.groundHeightNodeCheckData = {isDirty = false, minDistance = math.huge, hit = false, raycastDistance = 1, currentRaycastDistance = 1, heightNodes = {}, jointDesc = {}, index = -1, lowerDistanceToGround = 0, upperDistanceToGround = 0, currentRaycastWorldPos = {0, 0, 0}, currentRaycastWorldDir = {0, 0, 0}, currentJointTransformPos = {0, 0, 0}, raycastWorldPos = {0, 0, 0}, raycastWorldDir = {0, 0, 0}, jointTransformPos = {0, 0, 0}, upperAlpha = 0, lowerAlpha = 0}
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function AttacherJoints:onPostLoad(savegame)
  for v6, v7 in pairs(self.spec_attacherJoints.attacherJoints) do
    local v9 = getRotation(v7.jointTransform)
    v7.jointOrigRot = {}
    v9 = getTranslation(v7.jointTransform)
    v7.jointOrigTrans = {}
    if v7.transNode ~= nil then
      v9 = Utils.getNoNil(v7.transNodeMinY, v7.jointOrigTrans[2])
      v7.transNodeMinY = v9
      v9 = Utils.getNoNil(v7.transNodeMaxY, v7.jointOrigTrans[2])
      v7.transNodeMaxY = v9
      local v9, v10, v11 = localToLocal(v7.jointTransform, v7.transNode, 0, 0, 0)
      v7.transNodeOffsetY = v10
      v10 = getParent(v7.transNode)
      v9, v10, v11 = localToLocal(v10, self.rootNode, 0, v7.transNodeMinY, 0)
      v7.transNodeMinY = v10
      v10 = getParent(v7.transNode)
      v9, v10, v11 = localToLocal(v10, self.rootNode, 0, v7.transNodeMaxY, 0)
      v7.transNodeMaxY = v10
    end
    if v7.transNodeDependentBottomArm ~= nil then
      for v11, v12 in pairs(v2.attacherJoints) do
        if not (v12.bottomArm ~= nil) then
          continue
        end
        if not (v12.bottomArm.rotationNode == v7.transNodeDependentBottomArm) then
          continue
        end
        v7.transNodeDependentBottomArmAttacherJoint = v12
      end
      if v7.transNodeDependentBottomArmAttacherJoint == nil then
        v11 = getName(v7.transNodeDependentBottomArm)
        Logging.xmlWarning(...)
        v7.transNodeDependentBottomArm = nil
      end
    end
    if v7.bottomArm ~= nil then
      setRotation(v7.bottomArm.rotationNode, v7.bottomArm.rotX, v7.bottomArm.rotY, v7.bottomArm.rotZ)
      if self.setMovingToolDirty ~= nil then
        self:setMovingToolDirty(v7.bottomArm.rotationNode)
      end
    end
    if v7.rotationNode ~= nil then
      setRotation(v7.rotationNode, v7.rotX, v7.rotY, v7.rotZ)
    end
    if self.getInputAttacherJoints ~= nil then
      v7.inputAttacherJointOffsets = {}
      v9 = self:getInputAttacherJoints()
      for v11, v12 in ipairs(...) do
        local v13, v14, v15 = localDirectionToLocal(v7.jointTransform, v12.node, 0, 0, 1)
        local v16, v17, v18 = localDirectionToLocal(v7.jointTransform, v12.node, 0, 1, 0)
        local v19, v20, v21 = localDirectionToLocal(v7.jointTransform, v12.node, 1, 0, 0)
        local v22, v23, v24 = localToLocal(v7.jointTransform, v12.node, 0, 0, 0)
        table.insert(v7.inputAttacherJointOffsets, {v22, v23, v24, v13, v14, v15, v16, v17, v18, v19, v20, v21})
      end
    end
    if self.getAIRootNode ~= nil then
      v8 = self:getAIRootNode()
      v9, v10, v11 = localDirectionToLocal(v7.jointTransform, v8, 0, 0, 1)
      v12, v13, v14 = localDirectionToLocal(v7.jointTransform, v8, 0, 1, 0)
      v15, v16, v17 = localDirectionToLocal(v7.jointTransform, v8, 1, 0, 0)
      v18, v19, v20 = localToLocal(v7.jointTransform, v8, 0, 0, 0)
      v7.aiRootNodeOffset = {v18, v19, v20, v9, v10, v11, v12, v13, v14, v15, v16, v17}
    end
    if not (v7.comboTime ~= nil) then
      continue
    end
    v12 = MathUtil.clamp(v7.comboTime, 0, 1)
    table.insert(v2.attacherJointCombos.joints, {jointIndex = v6, time = v12 * v2.attacherJointCombos.duration})
  end
  if savegame ~= nil and not savegame.resetVehicles and v2.attacherJointCombos ~= nil then
    v3 = v3:getValue(savegame.key .. ".attacherJoints#comboDirection")
    if v3 ~= nil then
      v2.attacherJointCombos.direction = v3
      if v3 == 1 then
        v2.attacherJointCombos.currentTime = v2.attacherJointCombos.duration
      end
    end
  end
  if #v2.attacherJoints == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onWriteStream", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onUpdate", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onUpdateEnd", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onPostUpdate", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onStateChange", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onLightsTypesMaskChanged", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onTurnLightStateChanged", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onBrakeLightsVisibilityChanged", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onReverseLightsVisibilityChanged", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onBeaconLightsVisibilityChanged", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onBrake", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onTurnedOn", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onTurnedOff", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onLeaveVehicle", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onActivate", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onDeactivate", AttacherJoints)
    SpecializationUtil.removeEventListener(self, "onReverseDirectionChanged", AttacherJoints)
  end
end
function AttacherJoints:onPreDelete()
  if self.spec_attacherJoints.attachedImplements ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 28)
    local v6 = v6:getIsAdditionalAttachment()
    if not v6 then
      self:detachImplementByObject(self.spec_attacherJoints.attachedImplements[#self.spec_attacherJoints.attachedImplements].object, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 27, target 12)
  end
end
function AttacherJoints:onDelete()
  if self.spec_attacherJoints.attacherJoints ~= nil then
    for v5, v6 in pairs(self.spec_attacherJoints.attacherJoints) do
      v7:deleteSample(v6.sampleAttach)
      v7:deleteSample(v6.sampleDetach)
      if v6.sharedLoadRequestIdTopArm ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestIdTopArm)
        v6.sharedLoadRequestIdTopArm = nil
      end
      if not (v6.bottomArm ~= nil) then
        continue
      end
      if not (v6.bottomArm.sharedLoadRequestIdToolbar ~= nil) then
        continue
      end
      v8:releaseSharedI3DFile(v6.bottomArm.sharedLoadRequestIdToolbar)
      v6.bottomArm.sharedLoadRequestIdToolbar = nil
    end
    v2:deleteSamples(v1.samples)
  end
end
function AttacherJoints:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_attacherJoints.attacherJointCombos ~= nil then
    xmlFile:setValue(key .. "#comboDirection", self.spec_attacherJoints.attacherJointCombos.direction)
  end
end
function AttacherJoints:saveAttachmentsToXMLFile(xmlFile, key, vehiclesToId)
  if vehiclesToId[self] ~= nil then
    for v11, v12 in ipairs(self.spec_attacherJoints.attachedImplements) do
      if not (v12.object ~= nil) then
        continue
      end
      if not (vehiclesToId[v12.object] ~= nil) then
        continue
      end
      local v14 = string.format("%s.attachment(%d)", key, v7)
      local v17 = v12.object:getActiveInputAttacherJointDescIndex()
      xmlFile:setValue(v14 .. "#attachmentId", vehiclesToId[v12.object])
      xmlFile:setValue(v14 .. "#inputJointDescIndex", v17)
      xmlFile:setValue(v14 .. "#jointIndex", v12.jointDescIndex)
      xmlFile:setValue(v14 .. "#moveDown", v4.attacherJoints[v12.jointDescIndex].moveDown)
    end
    if v5 then
      xmlFile:setValue(key .. "#rootVehicleId", v6)
    end
  end
  return v5
end
function AttacherJoints:onReadStream(streamId, connection)
  local v3 = streamReadInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 48)
  local object = NetworkUtil.readNodeObject(streamId)
  local v8 = streamReadInt8(streamId)
  local v9 = streamReadInt8(streamId)
  local moveDown = streamReadBool(streamId)
  if object ~= nil then
    local v11 = object:getIsSynchronized()
    if v11 then
      self:attachImplement(object, v8, v9, true, 1, moveDown, true, true)
      self:setJointMoveDown(v9, moveDown, true)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 47, target 8)
end
function AttacherJoints:onWriteStream(streamId, connection)
  streamWriteInt8(streamId, #self.spec_attacherJoints.attachedImplements)
  -- TODO: structure LOP_FORNPREP (pc 14, target 53)
  NetworkUtil.writeNodeObject(streamId, self.spec_attacherJoints.attachedImplements[1].object)
  streamWriteInt8(streamId, self.spec_attacherJoints.attachedImplements[1].object.spec_attachable.inputAttacherJointDescIndex)
  streamWriteInt8(streamId, self.spec_attacherJoints.attachedImplements[1].jointDescIndex)
  streamWriteBool(streamId, self.spec_attacherJoints.attacherJoints[self.spec_attacherJoints.attachedImplements[1].jointDescIndex].moveDown)
  -- TODO: structure LOP_FORNLOOP (pc 52, target 15)
end
function AttacherJoints:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.currentUpdateDistance < self.spec_attacherJoints.maxUpdateDistance then
    for v9, v10 in pairs(self.spec_attacherJoints.attachedImplements) do
      if not (v10.object ~= nil) then
        continue
      end
      if not (self.updateLoopIndex == v10.object.updateLoopIndex) then
        continue
      end
      self:updateAttacherJointGraphics(v10, dt)
    end
  end
  if self.isClient then
    v6 = math.max(v5.showAttachNotAllowedText - dt, 0)
    v5.showAttachNotAllowedText = v6
    if 0 < v5.showAttachNotAllowedText then
      v6:addExtraPrintText(v5.texts.infoAttachNotAllowed)
    end
  end
  if Platform.gameplay.automaticAttach then
    -- if v0.isServer then goto L83 end
  end
  if self.isClient and v5.actionEvents ~= nil and v5.actionEvents[InputAction.ATTACH] ~= nil then
    v7 = self:getCanToggleAttach()
    if v7 then
      AttacherJoints.updateVehiclesInAttachRange(self, AttacherJoints.MAX_ATTACH_DISTANCE_SQ, AttacherJoints.MAX_ATTACH_ANGLE, true)
      return
    end
    v6.attacherVehicle = nil
    v6.attacherVehicleJointDescIndex = nil
    v6.attachable = nil
    v6.attachableJointDescIndex = nil
  end
end
function AttacherJoints:onUpdateEnd(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (v10.object ~= nil) then
      continue
    end
    if not (self.updateLoopIndex == v10.object.updateLoopIndex) then
      continue
    end
    self:updateAttacherJointGraphics(v10, dt)
  end
end
function AttacherJoints:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v9, v10 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not not v10.attachingIsInProgress then
      continue
    end
    local v11 = v11:getActiveInputAttacherJoint()
    if not (v11 ~= nil) then
      continue
    end
    if v5.attacherJoints[v10.jointDescIndex].steeringBarLeftNode ~= nil and v11.steeringBarLeftMovingPart ~= nil then
      Cylindered.updateMovingPart(self, v11.steeringBarLeftMovingPart, nil, true)
    end
    if not (v5.attacherJoints[v10.jointDescIndex].steeringBarRightNode ~= nil) then
      continue
    end
    if not (v11.steeringBarRightMovingPart ~= nil) then
      continue
    end
    Cylindered.updateMovingPart(self, v11.steeringBarRightMovingPart, nil, true)
  end
end
function AttacherJoints:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for v10, v11 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (v11.object ~= nil) then
      continue
    end
    if not not v11.object.spec_attachable.isHardAttached then
      continue
    end
    if self.isServer and v11.attachingIsInProgress then
      -- TODO: structure LOP_FORNPREP (pc 35, target 96)
      local v20 = math.max(0, v11.attachingRotLimit[1] - v11.attachingRotLimitSpeed[1] * dt)
      v11.attachingRotLimit[1] = v20
      v20 = math.max(0, v11.attachingTransLimit[1] - v11.attachingTransLimitSpeed[1] * dt)
      v11.attachingTransLimit[1] = v20
      if 0 >= v11.attachingRotLimit[1] and 0 >= v11.attachingTransLimit[1] and 0 >= v11.attachingRotLimit[1] then
        -- if 0 >= v11.attachingTransLimit[1] then goto L95 end
      end
      -- TODO: structure LOP_FORNLOOP (pc 95, target 36)
      v11.attachingIsInProgress = not false
      if false then
        if v11.object.spec_attachable.attacherJoint.hardAttach then
          local v14 = self:getIsHardAttachAllowed(v11.jointDescIndex)
          if v14 then
            self:hardAttachImplement(v11)
          end
        end
        self:postAttachImplement(v11)
      end
    end
    if not v11.attachingIsInProgress then
      if v12.allowsLowering then
        v14 = self:getIsActive()
        if v14 then
          if v12.moveDown then
            local v16, v17 = self:calculateAttacherJointMoveUpperLowerAlpha(v12, v11.object)
            local v18 = math.abs(v16 - v17)
            v12.moveTime = v12.moveDefaultTime * v18
          end
          v16 = Utils.getMovedLimitedValue(v12.moveAlpha, v15, v14, v12.moveTime, dt, not v12.moveDown)
          if v16 == v12.moveAlpha and v14 == v12.upperAlpha then
            -- if v15 == v12.lowerAlpha then goto L252 end
          end
          v12.upperAlpha = v14
          v12.lowerAlpha = v15
          if v12.moveDown then
            v17 = math.abs(v12.moveAlpha - v12.lowerAlpha)
            -- if v17 >= 0.05 then goto L222 end
            v12.isMoving = false
          else
            v17 = math.abs(v12.moveAlpha - v12.upperAlpha)
            if v17 < 0.05 then
              v12.isMoving = false
            end
          end
          v12.moveAlpha = v16
          v12.moveLimitAlpha = 1 - (v16 - v12.lowerAlpha) / (v12.upperAlpha - v12.lowerAlpha)
          self:updateAttacherJointRotationNodes(v12, v12.moveAlpha)
          self:updateAttacherJointRotation(v12, v11.object)
        end
      end
      if not v13 then
      end
      if v14 then
        v12.jointFrameInvalid = false
        if self.isServer then
          setJointFrame(v12.jointIndex, 0, v12.jointTransform)
        end
      end
    end
    if not self.isServer then
      continue
    end
    if not v11.attachingIsInProgress then
      if not v12.allowsLowering then
        continue
      end
      if not v12.allowsJointLimitMovement then
        continue
      end
    end
    if not (v12.jointIndex ~= nil) then
      continue
    end
    if not (v12.jointIndex ~= 0) then
      continue
    end
    if not v13 then
      -- if not v11.object.spec_attachable.attacherJoint.allowsJointRotLimitMovement then goto L333 end
    end
    local v15 = math.max(v12.moveLimitAlpha - v11.rotLimitThreshold, 0)
    -- TODO: structure LOP_FORNPREP (pc 321, target 333)
    AttacherJoints.updateAttacherJointRotationLimit(v11, v12, 1, v13, v15 / (1 - v11.rotLimitThreshold))
    -- TODO: structure LOP_FORNLOOP (pc 332, target 322)
    if not v13 and not v11.object.spec_attachable.attacherJoint.allowsJointTransLimitMovement then
      continue
    end
    v15 = math.max(v12.moveLimitAlpha - v11.transLimitThreshold, 0)
    -- TODO: structure LOP_FORNPREP (pc 362, target 374)
    AttacherJoints.updateAttacherJointTranslationLimit(v11, v12, 1, v13, v15 / (1 - v11.transLimitThreshold))
    -- TODO: structure LOP_FORNLOOP (pc 373, target 363)
  end
  if self.isClient and v5.samples.hydraulic ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 390, target 405)
    if v5.attacherJoints[1].bottomArm ~= nil and v5.attacherJoints[1].bottomArm.bottomArmInterpolating then
    end
    -- TODO: structure LOP_FORNLOOP (pc 404, target 391)
    if v6 then
      -- if v5.isHydraulicSamplePlaying then goto L437 end
      v7:playSample(v5.samples.hydraulic)
      v5.isHydraulicSamplePlaying = true
    elseif v5.isHydraulicSamplePlaying then
      v7:stopSample(v5.samples.hydraulic)
      v5.isHydraulicSamplePlaying = false
    end
  end
  if v5.attacherJointCombos ~= nil and v5.attacherJointCombos.isRunning then
    for v11, v12 in pairs(v5.attacherJointCombos.joints) do
      if v7.direction == 1 then
        -- if v12.time > v7.currentTime then goto L463 end
      elseif v7.direction == -1 and v7.currentTime <= v7.duration - v12.time then
      end
      if not (v13 ~= nil) then
        continue
      end
      v14 = self:getImplementFromAttacherJointIndex(v12.jointIndex)
      if not (v14 ~= nil) then
        continue
      end
      if not (v14.object.setLoweredAll ~= nil) then
        continue
      end
      v15:setLoweredAll(v13, v12.jointIndex)
    end
    if v7.direction == -1 then
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x30 -> L520
    end
    if v7.direction == 1 and v7.currentTime == v7.duration then
      v7.isRunning = false
    end
    v8 = MathUtil.clamp(v7.currentTime + dt * v7.direction, 0, v7.duration)
    v7.currentTime = v8
  end
  AttacherJoints.updateActionEvents(self)
  if Platform.gameplay.automaticAttach and self.isServer then
    v8 = self:getCanToggleAttach()
    if v8 then
      if v5.attachableInfo.attachable ~= nil and not v5.wasInAttachRange and v5.attachableInfo.attacherVehicle == self then
        -- if v0.isReconfigurating then goto L618 end
        -- if v5.attachableInfo.attachable.isReconfigurating then goto L618 end
        v11 = self:getActiveFarm()
        v9, v10 = v9:isAttachAllowed(v11, v5.attachableInfo.attacherVehicle)
        if v9 then
          if v5.wasInAttachRange == nil then
            v5.wasInAttachRange = true
            return
          end
          self:attachImplementFromInfo(v8)
          return
        end
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L618
        v11:showBlinkingWarning(v10, 2000)
        return
      end
      if v8.attachable == nil and v5.wasInAttachRange then
        v5.wasInAttachRange = false
      end
    end
  end
end
function AttacherJoints:loadAttachmentsFromXMLFile(xmlFile, key, idsToVehicle)
  while true do
    v6 = string.format("%s.attachment(%d)", key, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = xmlFile:getValue(v6 .. "#attachmentId")
    v8 = xmlFile:getValue(v6 .. "#jointIndex")
    v9 = xmlFile:getValue(v6 .. "#inputJointDescIndex", 1)
    if v7 ~= nil and v8 ~= nil then
      if idsToVehicle[v7] ~= nil and idsToVehicle[v7].getInputAttacherJoints ~= nil then
        v12 = idsToVehicle[v7]:getInputAttacherJoints()
      end
      if v11 ~= nil then
      end
      if v12 ~= nil and isSelected.attacherJoints[v8] ~= nil and isSelected.attacherJoints[v8].jointIndex == 0 then
        v13 = xmlFile:getValue(v6 .. "#moveDown")
        self:attachImplement(v10, v9, v8, true, nil, v13, true, true)
        if v13 ~= nil then
          self:setJointMoveDown(v8, v13, true)
        end
      end
    end
  end
end
function AttacherJoints:loadAttachmentsFinished()
  if self.rootVehicle == self and self.loadedSelectedObjectIndex ~= nil then
    if self.selectableObjects[self.loadedSelectedObjectIndex] ~= nil then
      self:setSelectedObject(self.selectableObjects[self.loadedSelectedObjectIndex], self.loadedSubSelectedObjectIndex or 1)
    end
    self.loadedSelectedObjectIndex = nil
    self.loadedSubSelectedObjectIndex = nil
  end
end
function AttacherJoints:handleLowerImplementEvent(vehicle)
  if not vehicle then
    local isSelected = self:getSelectedVehicle()
  end
  local isActiveForInput = self:getImplementByObject(isSelected)
  if isActiveForInput ~= nil and isActiveForInput.object ~= nil and isActiveForInput.object.getAttacherVehicle ~= nil then
    isSelected = isActiveForInput.object:getAttacherVehicle()
    if isSelected ~= nil then
      local v5 = isSelected:getAttacherJointIndexFromObject(isActiveForInput.object)
      isSelected:handleLowerImplementByAttacherJointIndex(v5)
    end
  end
end
function AttacherJoints:handleLowerImplementByAttacherJointIndex(attacherJointIndex, direction)
  if attacherJointIndex ~= nil then
    local isActiveForInputIgnoreSelection = self:getImplementByJointDescIndex(attacherJointIndex)
    if isActiveForInputIgnoreSelection ~= nil then
      local attacherJoints = self:getAttacherJoints()
      local v7, v8 = isActiveForInputIgnoreSelection.object:getAllowsLowering()
      if v7 and attacherJoints[attacherJointIndex].allowsLowering then
        if direction == nil then
        end
        self:setJointMoveDown(isActiveForInputIgnoreSelection.jointDescIndex, direction, false)
        return
      end
      if not v7 and v8 ~= nil then
        v9:showBlinkingWarning(v8, 2000)
      end
    end
  end
end
function AttacherJoints:getAttachedImplements()
  return self.spec_attacherJoints.attachedImplements
end
function AttacherJoints:getAttacherJoints()
  return self.spec_attacherJoints.attacherJoints
end
function AttacherJoints:getAttacherJointByJointDescIndex(jointDescIndex)
  return self.spec_attacherJoints.attacherJoints[jointDescIndex]
end
function AttacherJoints:getAttacherJointIndexByNode(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  if self.spec_attacherJoints.attacherJoints[1].jointTransform == node then
    return 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  return nil
end
function AttacherJoints:getImplementFromAttacherJointIndex(attacherJointIndex)
  for v6, v7 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (v7.jointDescIndex == attacherJointIndex) then
      continue
    end
    return v7
  end
end
function AttacherJoints:getAttacherJointIndexFromObject(object)
  for v6, v7 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (v7.object == object) then
      continue
    end
    return v7.jointDescIndex
  end
end
function AttacherJoints:getAttacherJointDescFromObject(object)
  for v6, v7 in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (v7.object == object) then
      continue
    end
    return isActiveForInput.attacherJoints[v7.jointDescIndex]
  end
end
function AttacherJoints:getAttacherJointIndexFromImplementIndex(implementIndex)
  if self.spec_attacherJoints.attachedImplements[implementIndex] ~= nil then
    return self.spec_attacherJoints.attachedImplements[implementIndex].jointDescIndex
  end
  return nil
end
function AttacherJoints:getObjectFromImplementIndex(implementIndex)
  if self.spec_attacherJoints.attachedImplements[implementIndex] ~= nil then
    return self.spec_attacherJoints.attachedImplements[implementIndex].object
  end
  return nil
end
function AttacherJoints:updateAttacherJointGraphics(implement, dt, forceUpdate)
  if implement.object ~= nil then
    local v6 = v6:getActiveInputAttacherJoint()
    if self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm ~= nil and v6.topReferenceNode ~= nil and not implement.attachingIsInProgress then
      local v7, v8, v9 = getWorldTranslation(self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm.rotationNode)
      local v10, v11, v12 = getWorldTranslation(v6.topReferenceNode)
      local v14 = getParent(self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm.rotationNode)
      local v13, v14, v15 = worldDirectionToLocal(v14, v10 - v7, v11 - v8, v12 - v9)
      local v17, v18, v19 = worldToLocal(self.rootNode, v7, v8, v9)
      if v19 < 0 then
      end
      local v22 = getParent(v5.topArm.rotationNode)
      local v20, v21, v22 = localDirectionToLocal(v5.topArm.rotationNode, v22, 0, 0, 1)
      local v25 = math.cos(v16)
      local v26 = math.sin(v16)
      v26 = math.sin(v16)
      local v27 = math.cos(v16)
      setDirection(v5.topArm.rotationNode, v13 * v5.topArm.zScale, v14 * v5.topArm.zScale, v15 * v5.topArm.zScale, v20, v25 * v21 - v26 * v22, v26 * v21 + v27 * v22)
      if v5.topArm.translationNode ~= nil then
        v25 = MathUtil.vector3Length(v13, v14, v15)
        setTranslation(v5.topArm.translationNode, 0, 0, (v25 - v5.topArm.referenceDistance) * v5.topArm.zScale)
        if v5.topArm.scaleNode ~= nil then
          local v31 = math.max((v25 - v5.topArm.referenceDistance + v5.topArm.scaleReferenceDistance) / v5.topArm.scaleReferenceDistance, 0)
          setScale(...)
        end
      end
    end
    if v5.bottomArm ~= nil then
      v7, v8, v9 = getWorldTranslation(v5.bottomArm.rotationNode)
      v10, v11, v12 = getWorldTranslation(v6.node)
      v14 = getParent(v5.bottomArm.rotationNode)
      v13, v14, v15 = worldDirectionToLocal(v14, v10 - v7, v11 - v8, v12 - v9)
      local v16 = MathUtil.vector3Length(v13, v14, v15)
      v20 = math.abs(v14)
      if 0.99 * v16 < v20 then
        if 0 < v14 then
        else
        end
      end
      if not v5.bottomArm.lockDirection then
      end
      local v24 = math.abs(v5.bottomArm.lastDirection[1] - v20)
      if 0.001 >= v24 then
        v24 = math.abs(v5.bottomArm.lastDirection[2] - v21)
        if 0.001 >= v24 then
          v24 = math.abs(v5.bottomArm.lastDirection[3] - v22)
          -- if 0.001 >= v24 then goto L361 end
        end
      end
      if implement.attachingIsInProgress then
        setDirection(v5.bottomArm.rotationNodeDir, v20, v21, v22, 0, v18, v19)
      else
        setDirection(v5.bottomArm.rotationNode, v20, v21, v22, 0, v18, v19)
      end
      v5.bottomArm.lastDirection[1] = v20
      v5.bottomArm.lastDirection[2] = v21
      v5.bottomArm.lastDirection[3] = v22
      if implement.attachingIsInProgress then
        -- if not true then goto L467 end
        if not implement.bottomArmInterpolating then
          local v29 = getRotation(v5.bottomArm.rotationNodeDir)
          v24 = ValueInterpolator.new(v5.bottomArm.interpolatorKey, v5.bottomArm.interpolatorGet, v5.bottomArm.interpolatorSet, {}, AttacherJoints.SMOOTH_ATTACH_TIME)
          -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x0 -> L467
          v24:setDeleteListenerObject(self)
          v24:setFinishedFunc(v5.bottomArm.interpolatorFinished, v5.bottomArm)
          v5.bottomArm.bottomArmInterpolating = true
          implement.bottomArmInterpolating = true
          implement.bottomArmInterpolator = v24
          -- goto L467  (LOP_JUMP +43)
        end
        v24, v25, v26 = getRotation(v5.bottomArm.rotationNodeDir)
        v27 = v27:getTarget()
        v27[1] = v24
        v27[2] = v25
        v27[3] = v26
        v28:updateSpeed()
      elseif implement.bottomArmInterpolator ~= nil then
        ValueInterpolator.removeInterpolator(v5.bottomArm.interpolatorKey)
        v5.bottomArm.bottomArmInterpolating = false
        implement.bottomArmInterpolating = false
        implement.bottomArmInterpolator = nil
      end
      if v5.bottomArm.translationNode ~= nil and not implement.attachingIsInProgress then
        setTranslation(v5.bottomArm.translationNode, 0, 0, (v16 - v5.bottomArm.referenceDistance) * v5.bottomArm.zScale)
      end
      if self.setMovingToolDirty ~= nil then
        self:setMovingToolDirty(v5.bottomArm.rotationNode, forceUpdate, dt)
      end
      if v6.needsToolbar and v5.bottomArm.toolbar ~= nil then
        v24 = getParent(v5.bottomArm.toolbar)
        v25, v26, v27 = localDirectionToLocal(v6.node, v5.rootNode, 1, 0, 0)
        local v28, v29, v30 = localDirectionToLocal(v5.rootNode, v24, 0, v26, v27)
        local v31, v32, v33 = localDirectionToLocal(v6.node, v5.rootNode, 0, 1, 0)
        local v34, v35, v36 = localDirectionToLocal(v5.rootNode, v24, 0, v32, v33)
        setDirection(v5.bottomArm.toolbar, v28, v29, v30, v34, v35, v36)
      end
    end
  end
end
function AttacherJoints:calculateAttacherJointMoveUpperLowerAlpha(jointDesc, object, initial)
  if jointDesc.allowsLowering then
    if 0 < #object.spec_attachable.attacherJoint.heightNodes and jointDesc.rotationNode ~= nil then
      if initial then
        self.spec_attacherJoints.groundHeightNodeCheckData.heightNodes = object.spec_attachable.attacherJoint.heightNodes
        self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc = jointDesc
        self.spec_attacherJoints.groundHeightNodeCheckData.objectAttacherJoint = object.spec_attachable.attacherJoint
        self.spec_attacherJoints.groundHeightNodeCheckData.object = object
        self.spec_attacherJoints.groundHeightNodeCheckData.index = -1
        -- TODO: structure LOP_FORNPREP (pc 50, target 205)
        local v14, v15, v16 = localToLocal(object.spec_attachable.attacherJoint.heightNodes[1].node, object.spec_attachable.attacherJoint.heightNodes[1].attacherJointNode, 0, 0, 0)
        self:updateAttacherJointRotationNodes(jointDesc, 1)
        local v19 = unpack(jointDesc.jointOrigRot)
        setRotation(...)
        local v17, v18, v19 = localToLocal(jointDesc.jointTransform, jointDesc.rootNode, 0, 0, 0)
        local v21, v22, v23 = localToLocal(jointDesc.jointTransform, jointDesc.rootNode, v14, v15, v16)
        self:updateAttacherJointRotationNodes(jointDesc, 0)
        local v24, v25, v26 = localToLocal(jointDesc.jointTransform, jointDesc.rootNode, 0, 0, 0)
        v24, v25, v26 = localToLocal(jointDesc.jointTransform, jointDesc.rootNode, v14, v15, v16)
        -- TODO: structure LOP_FORNLOOP (pc 139, target 51)
      elseif 0 < (jointDesc.moveAlpha or 0) then
        if self.spec_attacherJoints.groundHeightNodeCheckData.index == -1 then
          self.spec_attacherJoints.groundHeightNodeCheckData.index = 1
          self.spec_attacherJoints.groundHeightNodeCheckData.minDistance = math.huge
          self.spec_attacherJoints.groundHeightNodeCheckData.hit = false
          self:doGroundHeightNodeCheck()
        end
        if v9.isDirty then
          v9.isDirty = false
          self:doGroundHeightNodeCheck()
        end
        if jointDesc.upperAlpha ~= nil and v9.upperAlpha ~= nil then
          -- goto L205  (LOP_JUMP +9)
        end
      else
      end
    end
    if not v7 then
      local v9 = MathUtil.clamp((isSelected.upperDistanceToGround - v6) / (v5 - v6), 0, 1)
    end
    if not v8 then
      v9 = MathUtil.clamp((isSelected.lowerDistanceToGround - v6) / (v5 - v6), 0, 1)
    end
    if initial then
      self.spec_attacherJoints.groundHeightNodeCheckData.upperAlpha = v7
      self.spec_attacherJoints.groundHeightNodeCheckData.lowerAlpha = v9
    end
    if isSelected.allowsLowering and jointDesc.allowsLowering then
      return v7, v8
    end
    if isSelected.isDefaultLowered then
      return v8, v8
    end
    return v7, v7
  end
  if isSelected.isDefaultLowered then
    return 1, 1
  end
  return 0, 0
end
function AttacherJoints:doGroundHeightNodeCheck()
  if self.spec_attacherJoints.groundHeightNodeCheckData.heightNodes[self.spec_attacherJoints.groundHeightNodeCheckData.index] ~= nil then
    local initial = initial:getIsAttacherJointHeightNodeActive(self.spec_attacherJoints.groundHeightNodeCheckData.heightNodes[self.spec_attacherJoints.groundHeightNodeCheckData.index])
    if initial then
      local initial, isSelected, v5 = localToLocal(self.spec_attacherJoints.groundHeightNodeCheckData.heightNodes[self.spec_attacherJoints.groundHeightNodeCheckData.index].node, self.spec_attacherJoints.groundHeightNodeCheckData.heightNodes[self.spec_attacherJoints.groundHeightNodeCheckData.index].attacherJointNode, 0, 0, 0)
      self:updateAttacherJointRotationNodes(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc, 1)
      local v6, v7, v8 = localToWorld(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc.jointTransformOrig, initial, isSelected, v5)
      self:updateAttacherJointRotationNodes(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc, 0)
      local v9, v10, v11 = localToWorld(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc.jointTransformOrig, initial, isSelected, v5)
      local v15 = MathUtil.vector3Length(v6 - v9, v7 - v10, v8 - v11)
      local v16, v17, v18 = MathUtil.vector3Normalize(v6 - v9, v7 - v10, v8 - v11)
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastDistance = v15
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[1] = v9
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[2] = v10
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[3] = v11
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[1] = v16
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[2] = v17
      self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[3] = v18
      local v19, v20, v21 = getWorldTranslation(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc.jointTransform)
      self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[1] = v19
      self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[2] = v20
      self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[3] = v21
      v16 = math.min(self.spec_attacherJoints.groundHeightNodeCheckData.minDistance, v15 + self.spec_attacherJoints.groundHeightNodeCheckData.objectAttacherJoint.lowerDistanceToGround)
      self.spec_attacherJoints.groundHeightNodeCheckData.minDistance = v16
      raycastAll(v9, v10, v11, v16, v17, v18, "groundHeightNodeCheckCallback", v15 + self.spec_attacherJoints.groundHeightNodeCheckData.objectAttacherJoint.lowerDistanceToGround, self, CollisionMask.TERRAIN, false, true)
      self:updateAttacherJointRotationNodes(self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc, self.spec_attacherJoints.groundHeightNodeCheckData.jointDesc.moveAlpha or 0)
      return
    end
  end
  jointDesc.index = jointDesc.index + 1
  if #jointDesc.heightNodes < jointDesc.index then
    self:finishGroundHeightNodeCheck()
    return
  end
  jointDesc.isDirty = true
end
function AttacherJoints:finishGroundHeightNodeCheck()
  if self.spec_attacherJoints.groundHeightNodeCheckData.minDistance ~= math.huge then
    if not self.spec_attacherJoints.groundHeightNodeCheckData.hit then
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastDistance = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastDistance
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[3]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[3]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[3]
    end
    local v16 = MathUtil.vector3Length(jointDesc.raycastWorldPos[1] + jointDesc.raycastWorldDir[1] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance - jointDesc.jointTransformPos[1], jointDesc.raycastWorldPos[2] + jointDesc.raycastWorldDir[2] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance - jointDesc.jointTransformPos[2], jointDesc.raycastWorldPos[3] + jointDesc.raycastWorldDir[3] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance - jointDesc.jointTransformPos[3])
    local v17 = MathUtil.vector3Length(jointDesc.raycastWorldPos[1] - jointDesc.jointTransformPos[1], jointDesc.raycastWorldPos[2] - jointDesc.jointTransformPos[2], jointDesc.raycastWorldPos[3] - jointDesc.jointTransformPos[3])
    local v22, v23, v24 = worldToLocal(self.rootNode, jointDesc.raycastWorldPos[1] + jointDesc.raycastWorldDir[1] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance, jointDesc.raycastWorldPos[2] + jointDesc.raycastWorldDir[2] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance, jointDesc.raycastWorldPos[3] + jointDesc.raycastWorldDir[3] * jointDesc.raycastDistance * (jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround) / jointDesc.raycastDistance)
    v22, v23, v24 = worldToLocal(self.rootNode, jointDesc.raycastWorldPos[1], jointDesc.raycastWorldPos[2], jointDesc.raycastWorldPos[3])
    v22 = math.atan((v17 - v16) / (v23 - v23))
    v24 = math.sin(v22)
    v24 = MathUtil.clamp((jointDesc.minDistance - jointDesc.objectAttacherJoint.lowerDistanceToGround - (v17 - v16) * v24) / jointDesc.raycastDistance, 0, 1)
    jointDesc.lowerAlpha = v24
    v24 = MathUtil.clamp((jointDesc.minDistance - jointDesc.objectAttacherJoint.upperDistanceToGround) / jointDesc.raycastDistance, 0, 1)
    jointDesc.upperAlpha = v24
  end
  jointDesc.index = -1
end
function AttacherJoints:groundHeightNodeCheckCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if self.isDeleted then
    return
  end
  if hitObjectId ~= 0 then
    local v13 = getRigidBodyType(hitObjectId)
    if v13 == RigidBodyType.STATIC then
      -- if v5 >= v0.spec_attacherJoints.groundHeightNodeCheckData.minDistance then goto L89 end
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastDistance = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastDistance
      self.spec_attacherJoints.groundHeightNodeCheckData.minDistance = distance
      self.spec_attacherJoints.groundHeightNodeCheckData.hit = true
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldPos[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldPos[3]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.raycastWorldDir[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentRaycastWorldDir[3]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[1] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[1]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[2] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[2]
      self.spec_attacherJoints.groundHeightNodeCheckData.jointTransformPos[3] = self.spec_attacherJoints.groundHeightNodeCheckData.currentJointTransformPos[3]
    elseif not isLast then
      return true
    end
  end
  v12.index = v12.index + 1
  if #v12.heightNodes < v12.index then
    self:finishGroundHeightNodeCheck()
  else
    v12.isDirty = true
  end
  return false
end
function AttacherJoints.updateAttacherJointRotation(v0, hitObjectId, x)
  local z = MathUtil.lerp(x.spec_attachable.attacherJoint.upperRotationOffset, x.spec_attachable.attacherJoint.lowerRotationOffset, hitObjectId.moveAlpha)
  local distance = MathUtil.lerp(hitObjectId.upperRotationOffset, hitObjectId.lowerRotationOffset, hitObjectId.moveAlpha)
  local subShapeIndex = unpack(hitObjectId.jointOrigRot)
  setRotation(...)
  rotateAboutLocalAxis(hitObjectId.jointTransform, z - distance, 0, 0, 1)
end
function AttacherJoints.updateAttacherJointRotationNodes(v0, hitObjectId, x)
  if hitObjectId.rotationNode ~= nil then
    local distance = MathUtil.vector3ArrayLerp(hitObjectId.upperRotation, hitObjectId.lowerRotation, x)
    setRotation(...)
  end
  if hitObjectId.rotationNode2 ~= nil then
    distance = MathUtil.vector3ArrayLerp(hitObjectId.upperRotation2, hitObjectId.lowerRotation2, x)
    setRotation(...)
  end
end
function AttacherJoints:updateAttacherJointSettingsByObject(vehicle, updateLimit, updateRotationOffset, updateDistanceToGround)
  local jointDesc = self:getAttacherJointDescFromObject(vehicle)
  local implement = self:getImplementByObject(vehicle)
  local objectAttacherJoint = vehicle:getActiveInputAttacherJoint()
  if jointDesc ~= nil and implement ~= nil then
    if updateLimit then
      -- TODO: structure LOP_FORNPREP (pc 19, target 52)
      AttacherJoints.updateAttacherJointLimits(implement, jointDesc, objectAttacherJoint, 1)
      AttacherJoints.updateAttacherJointRotationLimit(implement, jointDesc, 1, false, jointDesc.moveLimitAlpha)
      AttacherJoints.updateAttacherJointTranslationLimit(implement, jointDesc, 1, false, jointDesc.moveLimitAlpha)
      -- TODO: structure LOP_FORNLOOP (pc 51, target 20)
    end
    if updateRotationOffset then
      self:updateAttacherJointRotation(jointDesc, vehicle)
      if self.isServer then
        setJointFrame(jointDesc.jointIndex, 0, jointDesc.jointTransform)
      end
    end
    if updateDistanceToGround then
      local nz, subShapeIndex = self:calculateAttacherJointMoveUpperLowerAlpha(jointDesc, vehicle)
      local v12 = math.abs(nz - subShapeIndex)
      jointDesc.moveTime = jointDesc.moveDefaultTime * v12
      jointDesc.upperAlpha = nz
      jointDesc.lowerAlpha = subShapeIndex
    end
  end
end
function AttacherJoints.attachImplementFromInfo(v0, hitObjectId)
  if hitObjectId.attachable ~= nil and hitObjectId.attacherVehicle.spec_attacherJoints.attacherJoints[hitObjectId.attacherVehicleJointDescIndex].jointIndex == 0 and hitObjectId.attachable.isAddedToMission then
    local y = y:getActiveInputAttacherJointDescIndex()
    if y ~= nil then
      y = y:getAllowMultipleAttachments()
      if y then
        y:resolveMultipleAttachments()
      else
        return false
      end
    end
    if GS_IS_MOBILE_VERSION and x[hitObjectId.attacherVehicleJointDescIndex].additionalAttachment.attacherJointDirection ~= nil then
      local z = z:getAttachedImplements()
      -- TODO: structure LOP_FORNPREP (pc 63, target 77)
      if x[hitObjectId.attacherVehicleJointDescIndex].additionalAttachment.attacherJointDirection == x[z[1].jointDescIndex].additionalAttachment.attacherJointDirection then
        return false
      end
      -- TODO: structure LOP_FORNLOOP (pc 76, target 64)
    end
    y:attachImplement(hitObjectId.attachable, hitObjectId.attachableJointDescIndex, hitObjectId.attacherVehicleJointDescIndex)
    return true
  end
  return false
end
function AttacherJoints:attachImplement(object, inputJointDescIndex, jointDescIndex, noEventSend, index, startLowered, noSmoothAttach, loadFromSavegame)
  local attacherJointIndex = self:getAttacherJointIndexFromObject(object)
  if attacherJointIndex ~= nil then
    Logging.warning("Cannot attach object '%s' to vehicle '%s' between joints '%d' and '%d'. Joint already in use!", object.configFileName, self.configFileName, jointDescIndex, inputJointDescIndex)
    return
  end
  SpecializationUtil.raiseEvent(self, "onPreAttachImplement", object, inputJointDescIndex, jointDescIndex)
  object:preAttach(self, inputJointDescIndex, jointDescIndex, loadFromSavegame)
  if not isLast.delayedObjectChangesOnAttach then
    ObjectChangeUtil.setObjectChanges(isLast.changeObjects, true, self, self.setMovingToolDirty)
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 69)
  setVisibility(isLast.visualNodes[1], true)
  -- TODO: structure LOP_FORNLOOP (pc 68, target 60)
  -- TODO: structure LOP_FORNPREP (pc 74, target 102)
  if subShapeIndex.visualNodeToAttacherJoints[isLast.hideVisuals[1]] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 87, target 95)
    if subShapeIndex.visualNodeToAttacherJoints[isLast.hideVisuals[1]][1].jointIndex ~= 0 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 94, target 88)
  end
  if v17 then
    setVisibility(v16, false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 101, target 75)
  local v13, v14 = self:calculateAttacherJointMoveUpperLowerAlpha(isLast, object, true)
  local v17 = math.abs(v13 - v14)
  isLast.moveTime = isLast.moveDefaultTime * v17
  if startLowered == nil then
    if shapeId.allowsLowering then
      -- if not v11.allowsLowering then goto L163 end
      self:updateAttacherJointRotationNodes(isLast, v13)
      local v15 = calcDistanceSquaredFrom(isLast.jointTransform, shapeId.node)
      self:updateAttacherJointRotationNodes(isLast, v14)
      local v16 = calcDistanceSquaredFrom(isLast.jointTransform, shapeId.node)
      if v15 < v16 * 1.1 then
      end
      -- if not v10.useFoldingLoweredState then goto L167 end
      v17 = object:getIsLowered()
    elseif not shapeId.isDefaultLowered then
    end
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L208
  end
  if g_server ~= nil then
    v17 = VehicleAttachEvent.new(self, object, inputJointDescIndex, jointDescIndex, startLowered)
    v15:broadcastEvent(v17, nil, nil, self)
  else
    v15 = v15:getServerConnection()
    v17 = VehicleAttachEvent.new(self, object, inputJointDescIndex, jointDescIndex, startLowered)
    v15:sendEvent(...)
  end
  if isLast.transNode ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L438
    if self.getOutputPowerTakeOffsByJointDescIndex ~= nil then
      local ptoOutputs = self:getOutputPowerTakeOffsByJointDescIndex(jointDescIndex)
      if ptoOutputs ~= nil and 0 < #ptoOutputs and ptoOutputs[1].connectedInput ~= nil then
        local v25 = getParent(isLast.transNode)
        local v23, v24, v25 = localToLocal(ptoOutputs[1].outputNode, v25, 0, 0, 0)
        local v27 = MathUtil.lerp(isLast.lowerDistanceToGround, isLast.upperDistanceToGround, (v24 - isLast.transNodeMinY) / (isLast.transNodeMaxY - isLast.transNodeMinY))
        if ptoOutputs[1].connectedInput.aboveAttacher then
          local v29 = MathUtil.clamp(shapeId.attacherHeight, isLast.lowerDistanceToGround, v27 - (ptoOutputs[1].connectedInput.size + isLast.transNodeHeight) * 0.5)
        else
          v29 = MathUtil.clamp(shapeId.attacherHeight, v27 + (ptoOutputs[1].connectedInput.size + isLast.transNodeHeight) * 0.5, isLast.upperDistanceToGround)
        end
      end
    end
    ptoOutputs = MathUtil.clamp(v19 - isLast.transNodeOffsetY, v17, v18)
    if 0 < v18 - v17 then
      local v22 = MathUtil.clamp((ptoOutputs - v17) / (v18 - v17), 0, 1)
    end
    v22 = MathUtil.lerp(v15, v16, v21)
    v23, v24, v25 = getTranslation(isLast.transNode)
    local v28 = getParent(isLast.transNode)
    local v26, v27, v28 = localToLocal(self.rootNode, v28, 0, v22, 0)
    setTranslation(isLast.transNode, v23, v27, v25)
    -- cmp-jump LOP_JUMPXEQKNIL R26 aux=0x0 -> L472
    -- if v27 > v11.transNodeDependentBottomArmThreshold then goto L472 end
    if loadFromSavegame then
      setRotation(isLast.transNodeDependentBottomArmAttacherJoint.bottomArm.rotationNode, isLast.transNodeDependentBottomArmRotation[1], isLast.transNodeDependentBottomArmRotation[2], isLast.transNodeDependentBottomArmRotation[3])
      -- cmp-jump LOP_JUMPXEQKNIL R30 aux=0x0 -> L472
      self:setMovingToolDirty(isLast.transNodeDependentBottomArmAttacherJoint.bottomArm.rotationNode)
      -- goto L472  (LOP_JUMP +82)
    end
    local v30 = ValueInterpolator.new(v26.bottomArm.interpolatorKey, v26.bottomArm.interpolatorGet, v26.bottomArm.interpolatorSet, {v27, v28, v29}, AttacherJoints.SMOOTH_ATTACH_TIME * 2)
    -- cmp-jump LOP_JUMPXEQKNIL R30 aux=0x0 -> L472
    v30:setDeleteListenerObject(self)
    v30:setFinishedFunc(v26.bottomArm.interpolatorFinished, v26.bottomArm)
    v26.bottomArm.bottomArmInterpolating = true
  elseif isLast.transNode == nil then
    if isLast.jointType ~= AttacherJoints.JOINTTYPE_TRAILER and isLast.jointType ~= AttacherJoints.JOINTTYPE_TRAILERLOW then
    end
    if self.checkPowerTakeOffCollision ~= nil then
      self:checkPowerTakeOffCollision(isLast.jointTransform, jointDescIndex, v15)
    end
  end
  isLast.upperAlpha = v13
  isLast.lowerAlpha = v14
  isLast.moveAlpha = v13
  isLast.moveLimitAlpha = 0
  if startLowered then
    isLast.moveAlpha = v14
    isLast.moveLimitAlpha = 1
  end
  self:updateAttacherJointRotationNodes(isLast, isLast.moveAlpha)
  self:updateAttacherJointRotation(isLast, object)
  self:createAttachmentJoint(v15, noSmoothAttach)
  if not shapeId.isDefaultLowered then
  end
  if shapeId.useFoldingLoweredState then
  end
  isLast.moveDown = v16
  isLast.isMoving = true
  object:setLowered(isLast.moveDown)
  if index == nil then
    table.insert(subShapeIndex.attachedImplements, v15)
  else
    subShapeIndex.attachedImplements[index] = v15
  end
  self:updateAttacherJointGraphics(v15, 0)
  if not loadFromSavegame then
    self:playAttachSound(isLast)
  end
  self:attachAdditionalAttachment(isLast, shapeId, object)
  v17:updateSelectableObjects()
  self:updateVehicleChain()
  v17 = v17:getActiveInputAttacherJoint()
  if v17.forceSelection then
  end
  v19:setSelectedVehicle(v18)
  if not v15.attachingIsInProgress then
    if v15.object.spec_attachable.attacherJoint.hardAttach then
      local v19 = self:getIsHardAttachAllowed(v15.jointDescIndex)
      if v19 then
        self:hardAttachImplement(v15)
      end
    end
    self:postAttachImplement(v15)
  end
  return true
end
function AttacherJoints:postAttachImplement(implement)
  if implement.object.spec_attachable.inputAttacherJoints[implement.inputJointDescIndex].topReferenceNode ~= nil and self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm ~= nil and self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm.toggleVisibility then
    setVisibility(self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].topArm.rotationNode, true)
  end
  if noSmoothAttach.bottomArm ~= nil then
    if noSmoothAttach.bottomArm.toggleVisibility then
      setVisibility(noSmoothAttach.bottomArm.rotationNode, true)
    end
    if startLowered.needsToolbar and noSmoothAttach.bottomArm.toolbar ~= nil then
      setVisibility(noSmoothAttach.bottomArm.toolbar, true)
    end
  end
  if noSmoothAttach.delayedObjectChangesOnAttach then
    ObjectChangeUtil.setObjectChanges(noSmoothAttach.changeObjects, true, self, self.setMovingToolDirty)
  end
  self:updateAttacherJointGraphics(implement, 0)
  SpecializationUtil.raiseEvent(self, "onPostAttachImplement", jointDescIndex, noEventSend, index)
  jointDescIndex:postAttach(self, noEventSend, index, implement.loadFromSavegame)
  self.rootVehicle:raiseStateChange(Vehicle.STATE_CHANGE_ATTACH, {attacherVehicle = self, attachedVehicle = implement.object})
end
function AttacherJoints:createAttachmentJoint(implement, noSmoothAttach)
  if self.isServer and implement.object.spec_attachable.attacherJoint ~= nil then
    local startLowered = getRigidBodyType(self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].rootNode)
    if startLowered ~= RigidBodyType.DYNAMIC then
      startLowered = getRigidBodyType(self.spec_attacherJoints.attacherJoints[implement.jointDescIndex].rootNode)
      -- if v6 ~= RigidBodyType.KINEMATIC then goto L54 end
    end
    startLowered = getRigidBodyType(index.rootNode)
    if startLowered ~= RigidBodyType.DYNAMIC then
      startLowered = getRigidBodyType(index.rootNode)
      if startLowered ~= RigidBodyType.KINEMATIC then
        return
      end
    end
    local shapeId = getParent(noEventSend.jointTransform)
    local subShapeIndex, shapeId, isLast = localToWorld(shapeId, noEventSend.jointOrigTrans[1] + noEventSend.jointPositionOffset[1], noEventSend.jointOrigTrans[2] + noEventSend.jointPositionOffset[2], noEventSend.jointOrigTrans[3] + noEventSend.jointPositionOffset[3])
    local attacherJointIndex, v13, v14 = worldToLocal(noEventSend.jointTransform, subShapeIndex, shapeId, isLast)
    setTranslation(noEventSend.jointTransform, noEventSend.jointOrigTrans[1] + noEventSend.jointPositionOffset[1], noEventSend.jointOrigTrans[2] + noEventSend.jointPositionOffset[2], noEventSend.jointOrigTrans[3] + noEventSend.jointPositionOffset[3])
    local v15, v16, v17 = localToWorld(index.node, attacherJointIndex, v13, v14)
    v16 = getParent(index.node)
    v15, v16, v17 = worldToLocal(v16, v15, v16, v17)
    setTranslation(index.node, v15, v16, v17)
    local constr = JointConstructor.new()
    constr:setActors(noEventSend.rootNode, index.rootNode)
    constr:setJointTransforms(noEventSend.jointTransform, index.node)
    implement.jointRotLimit = {}
    implement.jointTransLimit = {}
    implement.lowerRotLimit = {}
    implement.lowerTransLimit = {}
    implement.upperRotLimit = {}
    implement.upperTransLimit = {}
    if noSmoothAttach ~= nil then
      -- if v2 then goto L319 end
    end
    local v19, ptoOutputs, v21 = localToLocal(index.node, noEventSend.jointTransform, 0, 0, 0)
    local v22, v23, v24 = localDirectionToLocal(index.node, noEventSend.jointTransform, 0, 1, 0)
    local v25 = math.atan2(v24, v23)
    local v26, v27, v28 = localDirectionToLocal(index.node, noEventSend.jointTransform, 0, 0, 1)
    local v29 = math.atan2(v26, v28)
    local v30, v31, v32 = localDirectionToLocal(index.node, noEventSend.jointTransform, 1, 0, 0)
    local v33 = math.atan2(v31, v30)
    local v35 = math.abs(v19)
    local v36 = math.abs(ptoOutputs)
    local v37 = math.abs(v21)
    implement.attachingTransLimit = {}
    v35 = math.abs(v25)
    v36 = math.abs(v29)
    v37 = math.abs(v33)
    implement.attachingRotLimit = {}
    implement.attachingTransLimitSpeed = {}
    implement.attachingRotLimitSpeed = {}
    -- TODO: structure LOP_FORNPREP (pc 291, target 315)
    implement.attachingTransLimitSpeed[1] = implement.attachingTransLimit[1] / AttacherJoints.SMOOTH_ATTACH_TIME
    implement.attachingRotLimitSpeed[1] = implement.attachingRotLimit[1] / AttacherJoints.SMOOTH_ATTACH_TIME
    -- TODO: structure LOP_FORNLOOP (pc 314, target 292)
    implement.attachingIsInProgress = true
    -- goto L337  (LOP_JUMP +18)
    implement.attachingTransLimit = {0, 0, 0}
    implement.attachingRotLimit = {0, 0, 0}
    implement.rotLimitThreshold = index.rotLimitThreshold or 0
    implement.transLimitThreshold = index.transLimitThreshold or 0
    -- TODO: structure LOP_FORNPREP (pc 350, target 467)
    v22, v23 = AttacherJoints.updateAttacherJointLimits(implement, noEventSend, index, 1)
    if noSmoothAttach ~= nil then
      -- if v2 then goto L385 end
    end
    v26 = math.max(v22, implement.attachingRotLimit[v21])
    v26 = math.max(v23, implement.attachingTransLimit[v21])
    if v21 == 3 then
      if noEventSend.lockDownRotLimit then
        v28 = math.min(-implement.attachingRotLimit[v21], 0)
      end
      if noEventSend.lockUpRotLimit then
        v28 = math.max(implement.attachingRotLimit[v21], 0)
      end
    end
    constr:setRotationLimit(v21 - 1, v26, v27)
    implement.jointRotLimit[v21] = v24
    if v21 == 2 then
      if noEventSend.lockDownTransLimit then
        v30 = math.min(-implement.attachingTransLimit[v21], 0)
      end
      if noEventSend.lockUpTransLimit then
        v30 = math.max(implement.attachingTransLimit[v21], 0)
      end
    end
    constr:setTranslationLimit(v21 - 1, true, v28, v29)
    implement.jointTransLimit[v21] = v25
    -- TODO: structure LOP_FORNLOOP (pc 466, target 351)
    if noEventSend.enableCollision then
      constr:setEnableCollision(true)
    else
      for v22, v23 in pairs(self.components) do
        if not (v23.node ~= noEventSend.rootNodeBackup) then
          continue
        end
        if not not v23.collideWithAttachables then
          continue
        end
        setPairCollision(v23.node, index.rootNode, false)
      end
    end
    v19 = math.max(noEventSend.rotLimitSpring[1], index.rotLimitSpring[1])
    ptoOutputs = math.max(noEventSend.rotLimitSpring[2], index.rotLimitSpring[2])
    v21 = math.max(noEventSend.rotLimitSpring[3], index.rotLimitSpring[3])
    v22 = math.max(noEventSend.rotLimitDamping[1], index.rotLimitDamping[1])
    v23 = math.max(noEventSend.rotLimitDamping[2], index.rotLimitDamping[2])
    v24 = math.max(noEventSend.rotLimitDamping[3], index.rotLimitDamping[3])
    v25 = Utils.getMaxJointForceLimit(noEventSend.rotLimitForceLimit[1], index.rotLimitForceLimit[1])
    v26 = Utils.getMaxJointForceLimit(noEventSend.rotLimitForceLimit[2], index.rotLimitForceLimit[2])
    v27 = Utils.getMaxJointForceLimit(noEventSend.rotLimitForceLimit[3], index.rotLimitForceLimit[3])
    constr:setRotationLimitSpring(v19, v22, ptoOutputs, v23, v21, v24)
    constr:setRotationLimitForceLimit(v25, v26, v27)
    v28 = math.max(noEventSend.transLimitSpring[1], index.transLimitSpring[1])
    v29 = math.max(noEventSend.transLimitSpring[2], index.transLimitSpring[2])
    v30 = math.max(noEventSend.transLimitSpring[3], index.transLimitSpring[3])
    v31 = math.max(noEventSend.transLimitDamping[1], index.transLimitDamping[1])
    v32 = math.max(noEventSend.transLimitDamping[2], index.transLimitDamping[2])
    v33 = math.max(noEventSend.transLimitDamping[3], index.transLimitDamping[3])
    local v34 = Utils.getMaxJointForceLimit(noEventSend.transLimitForceLimit[1], index.transLimitForceLimit[1])
    v35 = Utils.getMaxJointForceLimit(noEventSend.transLimitForceLimit[2], index.transLimitForceLimit[2])
    v36 = Utils.getMaxJointForceLimit(noEventSend.transLimitForceLimit[3], index.transLimitForceLimit[3])
    constr:setTranslationLimitSpring(v28, v31, v29, v32, v30, v33)
    constr:setTranslationLimitForceLimit(v34, v35, v36)
    v37 = constr:finalize()
    noEventSend.jointIndex = v37
    local v39 = unpack(index.jointOrigTrans)
    setTranslation(...)
    return
  end
  noEventSend.jointIndex = 1
end
function AttacherJoints:hardAttachImplement(implement)
  if implement.object.getAttachedImplements ~= nil then
    local index = index:getAttachedImplements()
  end
  if noEventSend ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 22, target 66)
    table.insert(jointDescIndex, 1, {object = noEventSend[#noEventSend].object, implementIndex = #noEventSend, jointDescIndex = noEventSend[#noEventSend].jointDescIndex, inputJointDescIndex = noEventSend[#noEventSend].object.spec_attachable.inputAttacherJointDescIndex, moveDown = implement.object.spec_attacherJoints.attacherJoints[noEventSend[#noEventSend].jointDescIndex].moveDown})
    v14:detachImplement(1, true)
    -- TODO: structure LOP_FORNLOOP (pc 65, target 23)
  end
  local noSmoothAttach = self:getParentComponent(inputJointDescIndex.attacherJoints[implement.jointDescIndex].jointTransform)
  local loadFromSavegame = loadFromSavegame:getParentComponent(implement.object.spec_attachable.attacherJoint.node)
  while self ~= nil do
    subShapeIndex:removeFromPhysics()
  end
  shapeId:removeFromPhysics()
  if inputJointDescIndex.attacherVehicle == nil then
    setIsCompound(noSmoothAttach, true)
  end
  setIsCompoundChild(loadFromSavegame, true)
  local shapeId, isLast, attacherJointIndex = localDirectionToLocal(loadFromSavegame, startLowered.node, 0, 0, 1)
  local v13, v14, v15 = localDirectionToLocal(loadFromSavegame, startLowered.node, 0, 1, 0)
  setDirection(loadFromSavegame, shapeId, isLast, attacherJointIndex, v13, v14, v15)
  local v16, v17, v18 = localToLocal(loadFromSavegame, startLowered.node, 0, 0, 0)
  setTranslation(loadFromSavegame, v16, v17, v18)
  link(index.jointTransform, loadFromSavegame)
  if startLowered.visualNode ~= nil and index.jointTransformVisual ~= nil then
    local v19, ptoOutputs, v21 = localDirectionToLocal(startLowered.visualNode, startLowered.node, 0, 0, 1)
    local v22, v23, v24 = localDirectionToLocal(startLowered.visualNode, startLowered.node, 0, 1, 0)
    setDirection(startLowered.visualNode, v19, ptoOutputs, v21, v22, v23, v24)
    local v25, v26, v27 = localToLocal(startLowered.visualNode, startLowered.node, 0, 0, 0)
    setTranslation(startLowered.visualNode, v25, v26, v27)
    link(index.jointTransformVisual, startLowered.visualNode)
  end
  implement.object.spec_attachable.isHardAttached = true
  while self ~= nil do
    v19:addToPhysics()
  end
  for v23, v24 in pairs(implement.object.spec_attacherJoints.attacherJoints) do
    v24.rootNode = self.rootNode
  end
  for v23, v24 in pairs(jointDescIndex) do
    v25:attachImplement(v24.object, v24.inputJointDescIndex, v24.jointDescIndex, true, v24.implementIndex, v24.moveDown, true)
  end
  if self.isServer then
    self:raiseDirtyFlags(self.vehicleDirtyFlag)
  end
  return true
end
function AttacherJoints:hardDetachImplement(implement)
  for index, startLowered in pairs(implement.object.spec_attacherJoints.attacherJoints) do
    startLowered.rootNode = startLowered.rootNodeBackup
  end
  jointDescIndex = jointDescIndex:getParentComponent(implement.object.spec_attachable.attacherJoint.node)
  while self ~= nil do
    noEventSend:removeFromPhysics()
  end
  setIsCompound(jointDescIndex, true)
  local index, startLowered, noSmoothAttach = getWorldTranslation(jointDescIndex)
  setTranslation(jointDescIndex, index, startLowered, noSmoothAttach)
  local loadFromSavegame, subShapeIndex, shapeId = localDirectionToWorld(implement.object.rootNode, 0, 0, 1)
  local isLast, attacherJointIndex, v13 = localDirectionToWorld(implement.object.rootNode, 0, 1, 0)
  setDirection(jointDescIndex, loadFromSavegame, subShapeIndex, shapeId, isLast, attacherJointIndex, v13)
  local v15 = getRootNode()
  link(v15, jointDescIndex)
  if inputJointDescIndex.visualNode ~= nil then
    local v14 = getParent(inputJointDescIndex.visualNode)
    if v14 ~= inputJointDescIndex.visualNodeData.parent then
      link(inputJointDescIndex.visualNodeData.parent, inputJointDescIndex.visualNode, inputJointDescIndex.visualNodeData.index)
      setRotation(inputJointDescIndex.visualNode, inputJointDescIndex.visualNodeData.rotation[1], inputJointDescIndex.visualNodeData.rotation[2], inputJointDescIndex.visualNodeData.rotation[3])
      setTranslation(inputJointDescIndex.visualNode, inputJointDescIndex.visualNodeData.translation[1], inputJointDescIndex.visualNodeData.translation[2], inputJointDescIndex.visualNodeData.translation[3])
    end
  end
  while self ~= nil do
    v14:addToPhysics()
  end
  v15:addToPhysics()
  implement.object.spec_attachable.isHardAttached = false
  if self.isServer then
    self:raiseDirtyFlags(self.vehicleDirtyFlag)
  end
  return true
end
function AttacherJoints:detachImplement(implementIndex, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L50
  end
  if g_server ~= nil then
    local startLowered = VehicleDetachEvent.new(self, jointDescIndex.attachedImplements[implementIndex].object)
    noEventSend:broadcastEvent(startLowered, nil, nil, self)
  else
    if jointDescIndex.attachedImplements[implementIndex].object ~= nil then
      local index = index:getServerConnection()
      local noSmoothAttach = VehicleDetachEvent.new(self, jointDescIndex.attachedImplements[implementIndex].object)
      index:sendEvent(...)
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onPreDetachImplement", jointDescIndex.attachedImplements[implementIndex])
  index:preDetach(self, jointDescIndex.attachedImplements[implementIndex])
  if jointDescIndex.attachedImplements[implementIndex].object ~= nil then
    if jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNode ~= nil then
      local loadFromSavegame = unpack(jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeOrgTrans)
      setTranslation(...)
      if jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArm ~= nil then
        noSmoothAttach = ValueInterpolator.new(jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.interpolatorKey, jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.interpolatorGet, jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.interpolatorSet, {jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.rotX, jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.rotY, jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.rotZ}, AttacherJoints.SMOOTH_ATTACH_TIME * 2)
        if noSmoothAttach ~= nil then
          noSmoothAttach:setDeleteListenerObject(self)
          noSmoothAttach:setFinishedFunc(jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.interpolatorFinished, jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm)
          jointDescIndex.attacherJoints[jointDescIndex.attachedImplements[implementIndex].jointDescIndex].transNodeDependentBottomArmAttacherJoint.bottomArm.bottomArmInterpolating = true
        end
      end
    end
    if not noEventSend.object.spec_attachable.isHardAttached and self.isServer then
      if index.jointIndex ~= 0 then
        removeJoint(index.jointIndex)
      end
      if not index.enableCollision then
        for subShapeIndex, shapeId in pairs(self.components) do
          if not (shapeId.node ~= index.rootNodeBackup) then
            continue
          end
          if not not shapeId.collideWithAttachables then
            continue
          end
          local isLast = isLast:getActiveInputAttacherJoint()
          setPairCollision(shapeId.node, isLast.rootNode, true)
        end
      end
    end
    index.jointIndex = 0
  end
  if index.delayedObjectChanges then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L224
  end
  ObjectChangeUtil.setObjectChanges(index.changeObjects, false, self, self.setMovingToolDirty)
  -- TODO: structure LOP_FORNPREP (pc 229, target 257)
  if jointDescIndex.hideVisualNodeToAttacherJoints[index.hideVisuals[1]] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 242, target 250)
    if jointDescIndex.hideVisualNodeToAttacherJoints[index.hideVisuals[1]][1].jointIndex ~= 0 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 249, target 243)
  end
  if shapeId then
    setVisibility(subShapeIndex, true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 256, target 230)
  -- TODO: structure LOP_FORNPREP (pc 262, target 290)
  if jointDescIndex.hideVisualNodeToAttacherJoints[index.visualNodes[1]] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 275, target 283)
    if jointDescIndex.hideVisualNodeToAttacherJoints[index.visualNodes[1]][1].jointIndex ~= 0 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 282, target 276)
  end
  if shapeId then
    setVisibility(subShapeIndex, false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 289, target 263)
  if noEventSend.object ~= nil then
    if noEventSend.object.spec_attachable.isHardAttached then
      self:hardDetachImplement(noEventSend)
    end
    if self.isClient then
      if index.topArm ~= nil then
        setRotation(index.topArm.rotationNode, index.topArm.rotX, index.topArm.rotY, index.topArm.rotZ)
        if index.topArm.translationNode ~= nil then
          setTranslation(index.topArm.translationNode, 0, 0, 0)
        end
        if index.topArm.scaleNode ~= nil then
          setScale(index.topArm.scaleNode, 1, 1, 1)
        end
        if index.topArm.toggleVisibility then
          setVisibility(index.topArm.rotationNode, false)
        end
      end
      if index.bottomArm ~= nil then
        noSmoothAttach = ValueInterpolator.new(index.bottomArm.interpolatorKey, index.bottomArm.interpolatorGet, index.bottomArm.interpolatorSet, {index.bottomArm.rotX, index.bottomArm.rotY, index.bottomArm.rotZ}, nil, index.bottomArm.resetSpeed)
        if noSmoothAttach ~= nil then
          noSmoothAttach:setDeleteListenerObject(self)
          noSmoothAttach:setFinishedFunc(index.bottomArm.interpolatorFinished, index.bottomArm)
          index.bottomArm.bottomArmInterpolating = true
          if index.delayedObjectChanges then
            noSmoothAttach:setFinishedFunc(function()
              u0.bottomArm.interpolatorFinished(u0.bottomArm)
              if u0.jointIndex == 0 then
                ObjectChangeUtil.setObjectChanges(u0.changeObjects, false, u1, u1.setMovingToolDirty)
              end
            end)
          end
        end
        index.bottomArm.lastDirection[1] = 0
        index.bottomArm.lastDirection[2] = 0
        index.bottomArm.lastDirection[3] = 0
        if index.bottomArm.translationNode ~= nil then
          setTranslation(index.bottomArm.translationNode, 0, 0, 0)
        end
        if index.bottomArm.toolbar ~= nil then
          setVisibility(index.bottomArm.toolbar, false)
        end
        if index.bottomArm.toggleVisibility then
          setVisibility(index.bottomArm.rotationNode, false)
        end
      end
    end
    subShapeIndex = unpack(index.jointOrigTrans)
    setTranslation(...)
    noSmoothAttach = startLowered:getActiveInputAttacherJoint()
    shapeId = unpack(noSmoothAttach.jointOrigTrans)
    setTranslation(...)
    if index.rotationNode ~= nil then
      setRotation(index.rotationNode, index.rotX, index.rotY, index.rotZ)
    end
    SpecializationUtil.raiseEvent(self, "onPostDetachImplement", implementIndex)
    startLowered:postDetach(implementIndex)
    self:detachAdditionalAttachment(index, noSmoothAttach)
  end
  table.remove(jointDescIndex.attachedImplements, implementIndex)
  self:playDetachSound(index)
  jointDescIndex.wasInAttachRange = nil
  self:updateVehicleChain()
  startLowered:updateVehicleChain()
  noSmoothAttach:raiseStateChange(Vehicle.STATE_CHANGE_DETACH, {attacherVehicle = self, attachedVehicle = noEventSend.object})
  self.rootVehicle:raiseStateChange(Vehicle.STATE_CHANGE_DETACH, {attacherVehicle = self, attachedVehicle = noEventSend.object})
  loadFromSavegame:updateSelectableObjects()
  if GS_IS_MOBILE_VERSION then
    loadFromSavegame = next(jointDescIndex.attachedImplements)
    if jointDescIndex.attachedImplements[loadFromSavegame] ~= nil then
      subShapeIndex:setSelectedVehicle(jointDescIndex.attachedImplements[loadFromSavegame].object, nil, true)
      -- goto L653  (LOP_JUMP +17)
    end
    subShapeIndex:setSelectedVehicle(self, nil, true)
  else
    loadFromSavegame:setSelectedVehicle(self, nil, true)
  end
  loadFromSavegame:requestActionEventUpdate()
  loadFromSavegame:updateSelectableObjects()
  loadFromSavegame:setSelectedVehicle(noEventSend.object, nil, true)
  loadFromSavegame:requestActionEventUpdate()
  return true
end
function AttacherJoints:detachImplementByObject(object, noEventSend)
  for noSmoothAttach, loadFromSavegame in ipairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object == object) then
      continue
    end
    self:detachImplement(noSmoothAttach, noEventSend)
    break
  end
  return true
end
function AttacherJoints:setSelectedImplementByObject(object)
  local jointDescIndex = self:getImplementByObject(object)
  self.spec_attacherJoints.selectedImplement = jointDescIndex
end
function AttacherJoints:getSelectedImplement()
  if self.spec_attacherJoints.selectedImplement ~= nil then
    local inputJointDescIndex = inputJointDescIndex:getAttacherVehicle()
    if inputJointDescIndex ~= self then
      return nil
    end
  end
  return object.selectedImplement
end
function AttacherJoints.getCanToggleAttach(v0)
  return true
end
function AttacherJoints.getAttachControlBarActionAccessible(v0)
  local object = object:getIsRunning()
  if object then
    object = object:getCanDetachImplement(v0)
    if not object then
      return false
    end
  end
  return true
end
function AttacherJoints:getShowAttachControlBarAction()
  local object = self:getIsAIActive()
  if object then
    return false
  end
  local jointDescIndex = self:getSelectedVehicle()
  if self.spec_attacherJoints.attachableInfo.attacherVehicle == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L38
    -- if v3.isDeleted then goto L38 end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L38
    local noEventSend = jointDescIndex:getAttacherVehicle()
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L38
    return true
  elseif jointDescIndex == nil then
    return true
  end
  if object.attachableInfo.attachable ~= nil and object.attachableInfo.attacherVehicle == self then
    return true
  end
  return false
end
function AttacherJoints:detachAttachedImplement()
  local object = self:getCanToggleAttach()
  if object then
    AttacherJoints.actionEventAttach(self)
  end
end
function AttacherJoints:startAttacherJointCombo(force)
  if self.spec_attacherJoints.attacherJointCombos.isRunning then
    -- if not v1 then goto L22 end
  end
  inputJointDescIndex.attacherJointCombos.direction = -inputJointDescIndex.attacherJointCombos.direction
  inputJointDescIndex.attacherJointCombos.isRunning = true
end
function AttacherJoints:getIsAttachingAllowed(attacherJoint)
  if attacherJoint.jointIndex ~= 0 then
    return false
  end
  if attacherJoint.disabledByAttacherJoints ~= nil and 0 < #attacherJoint.disabledByAttacherJoints then
    -- TODO: structure LOP_FORNPREP (pc 21, target 34)
    local startLowered = self:getImplementByJointDescIndex(attacherJoint.disabledByAttacherJoints[1])
    if startLowered ~= nil then
      return false
    end
    -- TODO: structure LOP_FORNLOOP (pc 33, target 22)
  end
  return true
end
function AttacherJoints:getCanSteerAttachable(attachable)
  local jointDesc = self:getAttacherJointDescFromObject(attachable)
  if jointDesc ~= nil then
    if jointDesc.steeringBarLeftNode == nil and jointDesc.steeringBarRightNode == nil then
      -- if not v2.steeringBarForceUsage then goto L19 end
    end
    return true
  end
  return false
end
function AttacherJoints.registerSelfLoweringActionEvent(v0, object, inputJointDescIndex, jointDescIndex, noEventSend, index, startLowered, noSmoothAttach, loadFromSavegame, subShapeIndex, shapeId, isLast)
end
function AttacherJoints:playAttachSound(jointDesc)
  if self.isClient then
    if jointDesc ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L19
      jointDescIndex:playSample(jointDesc.sampleAttach)
    else
      jointDescIndex:playSample(self.spec_attacherJoints.samples.attach)
    end
  end
  return true
end
function AttacherJoints:playDetachSound(jointDesc)
  if self.isClient then
    if jointDesc ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L19
      jointDescIndex:playSample(jointDesc.sampleDetach)
    elseif self.spec_attacherJoints.samples.detach ~= nil then
      jointDescIndex:playSample(self.spec_attacherJoints.samples.detach)
    else
      if jointDesc ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L49
        jointDescIndex:playSample(jointDesc.sampleAttach)
      else
        jointDescIndex:playSample(self.spec_attacherJoints.samples.attach)
      end
    end
  end
  return true
end
function AttacherJoints:detachingIsPossible()
  local jointDescIndex = self:getSelectedVehicle()
  local jointDesc = self:getImplementByObject(...)
  if jointDesc ~= nil and jointDesc.object ~= nil and jointDesc.object.attacherVehicle ~= nil then
    jointDescIndex = jointDesc.object:isDetachAllowed()
    if jointDescIndex then
      jointDescIndex = jointDescIndex:getImplementIndexByObject(jointDesc.object)
      if jointDescIndex ~= nil then
        return true
      end
    end
  end
  return false
end
function AttacherJoints:attachAdditionalAttachment(jointDesc, inputJointDesc, object)
  if jointDesc.additionalAttachment.attacherJointDirection ~= nil and inputJointDesc.additionalAttachment.filename ~= nil then
    local noEventSend = noEventSend:getItemByXMLFilename(inputJointDesc.additionalAttachment.filename)
    if noEventSend ~= nil then
      local subShapeIndex = self:getAttacherJoints()
      for isLast, attacherJointIndex in ipairs(...) do
        if not (attacherJointIndex.additionalAttachment.attacherJointDirection == index) then
          continue
        end
        if attacherJointIndex.jointIndex ~= 0 then
          break
        elseif not (attacherJointIndex.jointType == inputJointDesc.additionalAttachment.jointType) then
          continue
        end
      end
      if startLowered ~= nil then
        loadFromSavegame, subShapeIndex, shapeId = localToWorld(startLowered.jointTransform, 0, 0, 0)
        local isLast, attacherJointIndex, v13 = localDirectionToWorld(startLowered.jointTransform, 1, 0, 0)
        local v14 = MathUtil.getYRotationFromDirection(isLast, v13)
        jointDesc.additionalAttachment.currentAttacherJointIndex = noSmoothAttach
        local v23 = self:getActiveFarm()
        VehicleLoadingUtil.loadVehicle(noEventSend.xmlFilename, {x = loadFromSavegame, y = subShapeIndex, z = shapeId, yRot = v14}, false, 0, Vehicle.PROPERTY_STATE_NONE, v23, {}, nil, AttacherJoints.additionalAttachmentLoaded, self, {noSmoothAttach, inputJointDesc.additionalAttachment.inputAttacherJointIndex, startLowered.jointTransform, inputJointDesc.additionalAttachment.needsLowering, object, noEventSend.xmlFilename})
      end
    end
  end
end
function AttacherJoints:detachAdditionalAttachment(jointDesc, inputJointDesc)
  if jointDesc.additionalAttachment.currentAttacherJointIndex ~= nil and inputJointDesc.additionalAttachment.filename ~= nil then
    local implement = self:getImplementByJointDescIndex(jointDesc.additionalAttachment.currentAttacherJointIndex)
    if implement ~= nil then
      local noEventSend = noEventSend:getIsAdditionalAttachment()
      if noEventSend then
        self:detachImplementByObject(implement.object)
        if not g_currentMission.isExitingGame then
          noEventSend:removeVehicle(implement.object)
        end
      end
    end
  end
end
function AttacherJoints:additionalAttachmentLoaded(vehicle, vehicleLoadState, asyncCallbackArguments)
  if vehicle ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L14
  end
  Logging.warning("Failed to load additional attachment '%s'.", asyncCallbackArguments[6].xmlFilename)
  return
  if vehicle.getInputAttacherJoints ~= nil then
    local inputAttacherJoints = vehicle:getInputAttacherJoints()
    if inputAttacherJoints[asyncCallbackArguments[2]] ~= nil then
    end
  end
  local noSmoothAttach = unpack(noEventSend)
  local inputAttacherJoints, startLowered, noSmoothAttach = localToWorld(...)
  local loadFromSavegame, subShapeIndex, shapeId = localDirectionToWorld(asyncCallbackArguments[3], 1, 0, 0)
  local isLast = MathUtil.getYRotationFromDirection(loadFromSavegame, shapeId)
  local attacherJointIndex = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, inputAttacherJoints, 0, noSmoothAttach)
  local v16 = math.max(startLowered, attacherJointIndex + 0.05)
  vehicle:setAbsolutePosition(inputAttacherJoints, v16, noSmoothAttach, 0, isLast, 0)
  self:attachImplement(vehicle, asyncCallbackArguments[2], asyncCallbackArguments[1], true, nil, nil, true, true)
  vehicle:setIsAdditionalAttachment(asyncCallbackArguments[4], true)
  if vehicle.addDirtAmount ~= nil and asyncCallbackArguments[5] ~= nil and asyncCallbackArguments[5].getDirtAmount ~= nil then
    local v15 = v15:getDirtAmount()
    vehicle:addDirtAmount(...)
  end
  v13:updateSelectableObjects()
  v13:setSelectedVehicle(asyncCallbackArguments[5] or self)
end
function AttacherJoints:getImplementIndexByJointDescIndex(jointDescIndex)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.jointDescIndex == jointDescIndex) then
      continue
    end
    return startLowered
  end
  return nil
end
function AttacherJoints:getImplementByJointDescIndex(jointDescIndex)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.jointDescIndex == jointDescIndex) then
      continue
    end
    return noSmoothAttach
  end
  return nil
end
function AttacherJoints:getImplementIndexByObject(object)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object == object) then
      continue
    end
    return startLowered
  end
  return nil
end
function AttacherJoints:getImplementByObject(object)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object == object) then
      continue
    end
    return noSmoothAttach
  end
  return nil
end
function AttacherJoints:callFunctionOnAllImplements(functionName, ...)
  local object = self:getAttachedImplements()
  for index, startLowered in pairs(...) do
    if not (startLowered.object ~= nil) then
      continue
    end
    if not (startLowered.object[functionName] ~= nil) then
      continue
    end
    startLowered.object[functionName](...)
  end
end
function AttacherJoints:activateAttachments()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    noSmoothAttach:activate()
  end
end
function AttacherJoints:deactivateAttachments()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    noSmoothAttach:deactivate()
  end
end
function AttacherJoints:deactivateAttachmentsLights()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    if not (startLowered.object.deactivateLights ~= nil) then
      continue
    end
    noSmoothAttach:deactivateLights()
  end
end
function AttacherJoints:setJointMoveDown(jointDescIndex, moveDown, noEventSend)
  if moveDown ~= self.spec_attacherJoints.attacherJoints[jointDescIndex].moveDown then
    if self.spec_attacherJoints.attacherJoints[jointDescIndex].allowsLowering then
      self.spec_attacherJoints.attacherJoints[jointDescIndex].moveDown = moveDown
      self.spec_attacherJoints.attacherJoints[jointDescIndex].isMoving = true
      local implementIndex = self:getImplementIndexByJointDescIndex(jointDescIndex)
      if implementIndex ~= nil and self.spec_attacherJoints.attachedImplements[implementIndex].object ~= nil then
        loadFromSavegame:setLowered(moveDown)
      end
    end
    VehicleLowerImplementEvent.sendEvent(self, jointDescIndex, moveDown, noEventSend)
  end
  return true
end
function AttacherJoints:getJointMoveDown(jointDescIndex)
  if self.spec_attacherJoints.attacherJoints[jointDescIndex].allowsLowering then
    return self.spec_attacherJoints.attacherJoints[jointDescIndex].moveDown
  end
  return false
end
function AttacherJoints:getIsHardAttachAllowed(jointDescIndex)
  return self.spec_attacherJoints.attacherJoints[jointDescIndex].supportsHardAttach
end
function AttacherJoints:loadAttacherJointFromXML(attacherJoint, xmlFile, baseName, index)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#index", baseName .. "#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#indexVisual", baseName .. "#nodeVisual")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#ptoOutputNode", "vehicle.powerTakeOffs.output")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#lowerDistanceToGround", baseName .. ".distanceToGround#lower")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#upperDistanceToGround", baseName .. ".distanceToGround#upper")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#rotationNode", baseName .. ".rotationNode#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#upperRotation", baseName .. ".rotationNode#upperRotation")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#lowerRotation", baseName .. ".rotationNode#lowerRotation")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#startRotation", baseName .. ".rotationNode#startRotation")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#rotationNode2", baseName .. ".rotationNode2#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#upperRotation2", baseName .. ".rotationNode2#upperRotation")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#lowerRotation2", baseName .. ".rotationNode2#lowerRotation")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#transNode", baseName .. ".transNode#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#transNodeMinY", baseName .. ".transNode#minY")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#transNodeMaxY", baseName .. ".transNode#maxY")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#transNodeHeight", baseName .. ".transNode#height")
  local startLowered = xmlFile:getValue(baseName .. "#node", nil, self.components, self.i3dMappings)
  if startLowered == nil then
    Logging.xmlWarning(self.xmlFile, "Missing node for attacherJoint '%s'", baseName)
    return false
  end
  attacherJoint.jointTransform = startLowered
  local noSmoothAttach = self:getParentComponent(attacherJoint.jointTransform)
  attacherJoint.jointComponent = noSmoothAttach
  noSmoothAttach = xmlFile:getValue(baseName .. "#nodeVisual", nil, self.components, self.i3dMappings)
  attacherJoint.jointTransformVisual = noSmoothAttach
  noSmoothAttach = xmlFile:getValue(baseName .. "#supportsHardAttach", true)
  attacherJoint.supportsHardAttach = noSmoothAttach
  local loadFromSavegame = localToLocal(attacherJoint.jointComponent, attacherJoint.jointTransform, 0, 0, 0)
  attacherJoint.jointOrigOffsetComponent = {}
  loadFromSavegame = localRotationToLocal(attacherJoint.jointComponent, attacherJoint.jointTransform, 0, 0, 0)
  attacherJoint.jointOrigRotOffsetComponent = {}
  noSmoothAttach = createTransformGroup("jointTransformOrig")
  attacherJoint.jointTransformOrig = noSmoothAttach
  loadFromSavegame = getParent(startLowered)
  link(loadFromSavegame, attacherJoint.jointTransformOrig)
  local subShapeIndex = getTranslation(startLowered)
  setTranslation(...)
  subShapeIndex = getRotation(startLowered)
  setRotation(...)
  noSmoothAttach = xmlFile:getValue(baseName .. "#jointType")
  if noSmoothAttach ~= nil and AttacherJoints.jointTypeNameToInt[noSmoothAttach] == nil then
    local attacherJointIndex = tostring(noSmoothAttach)
    Logging.xmlWarning(self.xmlFile, "Invalid jointType '%s' for attacherJoint '%s'!", attacherJointIndex, baseName)
  end
  if loadFromSavegame == nil then
  end
  attacherJoint.jointType = loadFromSavegame
  subShapeIndex = xmlFile:getValue(baseName .. ".subType#name")
  local shapeId = string.split(subShapeIndex, " ")
  attacherJoint.subTypes = shapeId
  if #attacherJoint.subTypes == 0 then
    attacherJoint.subTypes = nil
  end
  shapeId = xmlFile:getValue(baseName .. ".subType#brandRestriction")
  local isLast = string.split(shapeId, " ")
  attacherJoint.brandRestrictions = isLast
  if #attacherJoint.brandRestrictions == 0 then
    attacherJoint.brandRestrictions = nil
  else
    -- TODO: structure LOP_FORNPREP (pc 361, target 392)
    local v14 = v14:getBrandByName(attacherJoint.brandRestrictions[1])
    if v14 ~= nil then
      attacherJoint.brandRestrictions[1] = v14
    else
      Logging.xmlError(xmlFile, "Unknown brand '%s' in '%s'", attacherJoint.brandRestrictions[1], baseName .. ".subType#brandRestriction")
      attacherJoint.brandRestrictions = nil
      -- goto L392  (LOP_JUMP +1)
    end
    -- TODO: structure LOP_FORNLOOP (pc 391, target 362)
  end
  isLast = xmlFile:getValue(baseName .. ".subType#vehicleRestriction")
  attacherJointIndex = string.split(isLast, " ")
  attacherJoint.vehicleRestrictions = attacherJointIndex
  if #attacherJoint.vehicleRestrictions == 0 then
    attacherJoint.vehicleRestrictions = nil
  end
  attacherJointIndex = xmlFile:getValue(baseName .. ".subType#subTypeShowWarning", true)
  attacherJoint.subTypeShowWarning = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. "#allowsJointLimitMovement", true)
  attacherJoint.allowsJointLimitMovement = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. "#allowsLowering", true)
  attacherJoint.allowsLowering = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. "#isDefaultLowered", false)
  attacherJoint.isDefaultLowered = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. "#allowDetachingWhileLifted", true)
  attacherJoint.allowDetachingWhileLifted = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. "#allowFoldingWhileAttached", true)
  attacherJoint.allowFoldingWhileAttached = attacherJointIndex
  if loadFromSavegame ~= AttacherJoints.JOINTTYPE_TRAILER then
    -- if v8 ~= AttacherJoints.JOINTTYPE_TRAILERLOW then goto L482 end
  end
  attacherJoint.allowsLowering = false
  attacherJointIndex = xmlFile:getValue(baseName .. "#canTurnOnImplement", true)
  attacherJoint.canTurnOnImplement = attacherJointIndex
  attacherJointIndex = xmlFile:getValue(baseName .. ".rotationNode#node", nil, self.components, self.i3dMappings)
  if attacherJointIndex ~= nil then
    attacherJoint.rotationNode = attacherJointIndex
    local v13 = xmlFile:getValue(baseName .. ".rotationNode#lowerRotation", "0 0 0", true)
    attacherJoint.lowerRotation = v13
    local v17 = getRotation(attacherJointIndex)
    v13 = xmlFile:getValue(baseName .. ".rotationNode#upperRotation", {}, true)
    attacherJoint.upperRotation = v13
    v17 = getRotation(attacherJointIndex)
    local v13, v14, v15 = xmlFile:getValue(baseName .. ".rotationNode#startRotation", {})
    attacherJoint.rotX = v13
    attacherJoint.rotY = v14
    attacherJoint.rotZ = v15
    if {attacherJoint.upperRotation[1], attacherJoint.upperRotation[2], attacherJoint.upperRotation[3]}[1] < {attacherJoint.lowerRotation[1], attacherJoint.lowerRotation[2], attacherJoint.lowerRotation[3]}[1] then
      {attacherJoint.upperRotation[1], attacherJoint.upperRotation[2], attacherJoint.upperRotation[3]}[1] = {attacherJoint.lowerRotation[1], attacherJoint.lowerRotation[2], attacherJoint.lowerRotation[3]}[1]
      {attacherJoint.lowerRotation[1], attacherJoint.lowerRotation[2], attacherJoint.lowerRotation[3]}[1] = {attacherJoint.upperRotation[1], attacherJoint.upperRotation[2], attacherJoint.upperRotation[3]}[1]
    end
    if v14[2] < v13[2] then
      v14[2] = v13[2]
      v13[2] = v14[2]
    end
    if v14[3] < v13[3] then
      v14[3] = v13[3]
      v13[3] = v14[3]
    end
    v15 = MathUtil.clamp(attacherJoint.rotX, v13[1], v14[1])
    attacherJoint.rotX = v15
    v15 = MathUtil.clamp(attacherJoint.rotY, v13[2], v14[2])
    attacherJoint.rotY = v15
    v15 = MathUtil.clamp(attacherJoint.rotZ, v13[3], v14[3])
    attacherJoint.rotZ = v15
  end
  v13 = xmlFile:getValue(baseName .. ".rotationNode2#node", nil, self.components, self.i3dMappings)
  if v13 ~= nil then
    attacherJoint.rotationNode2 = v13
    v15 = xmlFile:getValue(baseName .. ".rotationNode2#lowerRotation", {-attacherJoint.lowerRotation[1], -attacherJoint.lowerRotation[2], -attacherJoint.lowerRotation[3]}, true)
    attacherJoint.lowerRotation2 = v15
    local v16 = xmlFile:getValue(baseName .. ".rotationNode2#upperRotation", {-attacherJoint.upperRotation[1], -attacherJoint.upperRotation[2], -attacherJoint.upperRotation[3]}, true)
    attacherJoint.upperRotation2 = v16
  end
  v14 = xmlFile:getValue(baseName .. ".transNode#node", nil, self.components, self.i3dMappings)
  attacherJoint.transNode = v14
  if attacherJoint.transNode ~= nil then
    v15 = getTranslation(attacherJoint.transNode)
    attacherJoint.transNodeOrgTrans = {}
    v14 = xmlFile:getValue(baseName .. ".transNode#height", 0.12)
    attacherJoint.transNodeHeight = v14
    v14 = xmlFile:getValue(baseName .. ".transNode#minY")
    attacherJoint.transNodeMinY = v14
    v14 = xmlFile:getValue(baseName .. ".transNode#maxY")
    attacherJoint.transNodeMaxY = v14
    v14 = xmlFile:getValue(baseName .. ".transNode.dependentBottomArm#node", nil, self.components, self.i3dMappings)
    attacherJoint.transNodeDependentBottomArm = v14
    v14 = xmlFile:getValue(baseName .. ".transNode.dependentBottomArm#threshold", math.huge)
    attacherJoint.transNodeDependentBottomArmThreshold = v14
    v14 = xmlFile:getValue(baseName .. ".transNode.dependentBottomArm#rotation", "0 0 0", true)
    attacherJoint.transNodeDependentBottomArmRotation = v14
  end
  if attacherJoint.rotationNode == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L800
  end
  v14 = xmlFile:getValue(baseName .. ".distanceToGround#lower")
  if v14 == nil then
    Logging.xmlWarning(self.xmlFile, "Missing '.distanceToGround#lower' for attacherJoint '%s'. Use console command 'gsVehicleAnalyze' to get correct values!", baseName)
  end
  v14 = xmlFile:getValue(baseName .. ".distanceToGround#lower", 0.7)
  attacherJoint.lowerDistanceToGround = v14
  if attacherJoint.rotationNode == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L832
  end
  v14 = xmlFile:getValue(baseName .. ".distanceToGround#upper")
  if v14 == nil then
    Logging.xmlWarning(self.xmlFile, "Missing '.distanceToGround#upper' for attacherJoint '%s'. Use console command 'gsVehicleAnalyze' to get correct values!", baseName)
  end
  v14 = xmlFile:getValue(baseName .. ".distanceToGround#upper", 1)
  attacherJoint.upperDistanceToGround = v14
  if attacherJoint.upperDistanceToGround < attacherJoint.lowerDistanceToGround then
    Logging.xmlWarning(self.xmlFile, "distanceToGround#lower may not be larger than distanceToGround#upper for attacherJoint '%s'. Switching values!", baseName)
    attacherJoint.lowerDistanceToGround = attacherJoint.upperDistanceToGround
    attacherJoint.upperDistanceToGround = attacherJoint.lowerDistanceToGround
  end
  v14 = xmlFile:getValue(baseName .. "#lowerRotationOffset", 0)
  attacherJoint.lowerRotationOffset = v14
  v14 = xmlFile:getValue(baseName .. "#upperRotationOffset", 0)
  attacherJoint.upperRotationOffset = v14
  v14 = xmlFile:getValue(baseName .. "#lockDownRotLimit", false)
  attacherJoint.lockDownRotLimit = v14
  v14 = xmlFile:getValue(baseName .. "#lockUpRotLimit", false)
  attacherJoint.lockUpRotLimit = v14
  v14 = xmlFile:getValue(baseName .. "#lockDownTransLimit", true)
  attacherJoint.lockDownTransLimit = v14
  v14 = xmlFile:getValue(baseName .. "#lockUpTransLimit", false)
  attacherJoint.lockUpTransLimit = v14
  if loadFromSavegame ~= AttacherJoints.JOINTTYPE_IMPLEMENT then
  end
  v15, v16, v17 = xmlFile:getValue(baseName .. "#lowerRotLimit", v14)
  attacherJoint.lowerRotLimit = {}
  local ptoOutputs = Utils.getNoNil(v15, 20)
  local v19 = math.abs(...)
  attacherJoint.lowerRotLimit[1] = v19
  ptoOutputs = Utils.getNoNil(v16, 20)
  v19 = math.abs(...)
  attacherJoint.lowerRotLimit[2] = v19
  ptoOutputs = Utils.getNoNil(v17, 20)
  v19 = math.abs(...)
  attacherJoint.lowerRotLimit[3] = v19
  local v18, v19, ptoOutputs = xmlFile:getValue(baseName .. "#upperRotLimit")
  attacherJoint.upperRotLimit = {}
  local v24 = Utils.getNoNil(v18, v15)
  local v23 = Utils.getNoNil(v24, 20)
  local v22 = math.abs(...)
  attacherJoint.upperRotLimit[1] = v22
  v24 = Utils.getNoNil(v19, v16)
  v23 = Utils.getNoNil(v24, 20)
  v22 = math.abs(...)
  attacherJoint.upperRotLimit[2] = v22
  v24 = Utils.getNoNil(ptoOutputs, v17)
  v23 = Utils.getNoNil(v24, 20)
  v22 = math.abs(...)
  attacherJoint.upperRotLimit[3] = v22
  if loadFromSavegame ~= AttacherJoints.JOINTTYPE_IMPLEMENT then
  end
  v22, v23, v24 = xmlFile:getValue(baseName .. "#lowerTransLimit", v21)
  attacherJoint.lowerTransLimit = {}
  v24 = Utils.getNoNil(v22, 0)
  v23 = math.abs(...)
  attacherJoint.lowerTransLimit[1] = v23
  v24 = Utils.getNoNil(v23, 0)
  v23 = math.abs(...)
  attacherJoint.lowerTransLimit[2] = v23
  v24 = Utils.getNoNil(v24, 0)
  v23 = math.abs(...)
  attacherJoint.lowerTransLimit[3] = v23
  v22, v23, v24 = xmlFile:getValue(baseName .. "#upperTransLimit")
  attacherJoint.upperTransLimit = {}
  local v25 = Utils.getNoNil(v22, v22)
  v24 = Utils.getNoNil(v25, 0)
  v23 = math.abs(...)
  attacherJoint.upperTransLimit[1] = v23
  v25 = Utils.getNoNil(v23, v23)
  v24 = Utils.getNoNil(v25, 0)
  v23 = math.abs(...)
  attacherJoint.upperTransLimit[2] = v23
  v25 = Utils.getNoNil(v24, v24)
  v24 = Utils.getNoNil(v25, 0)
  v23 = math.abs(...)
  attacherJoint.upperTransLimit[3] = v23
  v22 = xmlFile:getValue(baseName .. "#jointPositionOffset", "0 0 0", true)
  attacherJoint.jointPositionOffset = v22
  v22 = xmlFile:getValue(baseName .. "#rotLimitSpring", "0 0 0", true)
  attacherJoint.rotLimitSpring = v22
  v22 = xmlFile:getValue(baseName .. "#rotLimitDamping", "1 1 1", true)
  attacherJoint.rotLimitDamping = v22
  v22 = xmlFile:getValue(baseName .. "#rotLimitForceLimit", "-1 -1 -1", true)
  attacherJoint.rotLimitForceLimit = v22
  v22 = xmlFile:getValue(baseName .. "#transLimitSpring", "0 0 0", true)
  attacherJoint.transLimitSpring = v22
  v22 = xmlFile:getValue(baseName .. "#transLimitDamping", "1 1 1", true)
  attacherJoint.transLimitDamping = v22
  v22 = xmlFile:getValue(baseName .. "#transLimitForceLimit", "-1 -1 -1", true)
  attacherJoint.transLimitForceLimit = v22
  v23 = xmlFile:getValue(baseName .. "#moveTime", 0.5)
  attacherJoint.moveDefaultTime = v23 * 1000
  attacherJoint.moveTime = attacherJoint.moveDefaultTime
  v22 = xmlFile:getValue(baseName .. "#disabledByAttacherJoints", nil, true)
  attacherJoint.disabledByAttacherJoints = v22
  v22 = xmlFile:getValue(baseName .. "#enableCollision", false)
  attacherJoint.enableCollision = v22
  v22 = xmlFile:getValue(baseName .. ".topArm#filename")
  if v22 ~= nil then
    v23 = xmlFile:getValue(baseName .. ".topArm#baseNode", nil, self.components, self.i3dMappings)
    -- cmp-jump LOP_JUMPXEQKNIL R23 aux=0x0 -> L1430
    v24 = Utils.getFilename(v22, self.baseDirectory)
    v25 = self:loadSubSharedI3DFile(v24, false, false, self.onTopArmI3DLoaded, self, {xmlFile = xmlFile, baseName = baseName, attacherJoint = attacherJoint, baseNode = v23})
    attacherJoint.sharedLoadRequestIdTopArm = v25
  else
    v23 = xmlFile:getValue(baseName .. ".topArm#rotationNode", nil, self.components, self.i3dMappings)
    v24 = xmlFile:getValue(baseName .. ".topArm#translationNode", nil, self.components, self.i3dMappings)
    v25 = xmlFile:getValue(baseName .. ".topArm#referenceNode", nil, self.components, self.i3dMappings)
    if v23 ~= nil then
      local v27, v28, v29 = getRotation(v23)
      if v24 ~= nil and v25 ~= nil then
        v27, v28, v29 = getTranslation(v24)
        local v30 = math.abs(v27)
        if 0.0001 > v30 then
          v30 = math.abs(v28)
          if 0.0001 > v30 then
            v30 = math.abs(v29)
            -- if 0.0001 > v30 then goto L1391 end
          end
        end
        Logging.xmlWarning(self.xmlFile, "TopArm translation of attacherJoint '%s' is not 0/0/0!", baseName)
        v30 = calcDistanceFrom(v25, v24)
        v26.referenceDistance = v30
      end
      v28 = xmlFile:getValue(baseName .. ".topArm#zScale", 1)
      v27 = MathUtil.sign(...)
      v26.zScale = v27
      v27 = xmlFile:getValue(baseName .. ".topArm#toggleVisibility", false)
      v26.toggleVisibility = v27
      if v26.toggleVisibility then
        setVisibility(v26.rotationNode, false)
      end
      attacherJoint.topArm = v26
    end
  end
  v23 = xmlFile:getValue(baseName .. ".bottomArm#rotationNode", nil, self.components, self.i3dMappings)
  v24 = xmlFile:getValue(baseName .. ".bottomArm#translationNode", nil, self.components, self.i3dMappings)
  v25 = xmlFile:getValue(baseName .. ".bottomArm#referenceNode", nil, self.components, self.i3dMappings)
  if v23 ~= nil then
    v27 = createTransformGroup("rotationNodeDirTemp")
    v28 = getParent(v23)
    link(v28, {rotationNode = v23, rotationNodeDir = v27}.rotationNodeDir)
    v29 = getTranslation(v23)
    setTranslation(...)
    v29 = getRotation(v23)
    setRotation(...)
    local v31 = getRotation(v23)
    v27, v28, v29 = xmlFile:getValue(baseName .. ".bottomArm#startRotation", {})
    if v24 ~= nil and v25 ~= nil then
      v27, v28, v29 = getTranslation(v24)
      v30 = math.abs(v27)
      if 0.0001 > v30 then
        v30 = math.abs(v28)
        if 0.0001 > v30 then
          v30 = math.abs(v29)
          -- if 0.0001 > v30 then goto L1593 end
        end
      end
      Logging.xmlWarning(self.xmlFile, "BottomArm translation of attacherJoint '%s' is not 0/0/0!", baseName)
      v30 = calcDistanceFrom(v25, v24)
      v26.referenceDistance = v30
    end
    v28 = xmlFile:getValue(baseName .. ".bottomArm#zScale", 1)
    v27 = MathUtil.sign(...)
    v26.zScale = v27
    v27 = xmlFile:getValue(baseName .. ".bottomArm#lockDirection", true)
    v26.lockDirection = v27
    v27 = xmlFile:getValue(baseName .. ".bottomArm#resetSpeed", 45)
    v26.resetSpeed = v27
    v27 = xmlFile:getValue(baseName .. ".bottomArm#toggleVisibility", false)
    v26.toggleVisibility = v27
    if v26.toggleVisibility then
      setVisibility(v26.rotationNode, false)
    end
    if loadFromSavegame == AttacherJoints.JOINTTYPE_IMPLEMENT then
      v28 = xmlFile:getValue(baseName .. ".toolbar#filename", "$data/shared/assets/toolbar.i3d")
      v27 = Utils.getFilename(v28, self.baseDirectory)
      v29 = self:loadSubSharedI3DFile(v27, false, false, self.onBottomArmToolbarI3DLoaded, self, {bottomArm = v26, referenceNode = v25})
      v26.sharedLoadRequestIdToolbar = v29
    end
    attacherJoint.bottomArm = v26
  end
  if self.isClient then
    local v26 = v26:loadSampleFromXML(xmlFile, baseName, "attachSound", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    attacherJoint.sampleAttach = v26
    v26 = v26:loadSampleFromXML(xmlFile, baseName, "detachSound", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    attacherJoint.sampleDetach = v26
  end
  v26 = xmlFile:getValue(baseName .. ".steeringBars#leftNode", nil, self.components, self.i3dMappings)
  attacherJoint.steeringBarLeftNode = v26
  v26 = xmlFile:getValue(baseName .. ".steeringBars#rightNode", nil, self.components, self.i3dMappings)
  attacherJoint.steeringBarRightNode = v26
  v26 = xmlFile:getValue(baseName .. ".steeringBars#forceUsage", true)
  attacherJoint.steeringBarForceUsage = v26
  v26 = xmlFile:getValue(baseName .. ".visuals#nodes", nil, self.components, self.i3dMappings, true)
  attacherJoint.visualNodes = v26
  -- TODO: structure LOP_FORNPREP (pc 1782, target 1806)
  if index.visualNodeToAttacherJoints[attacherJoint.visualNodes[1]] == nil then
    index.visualNodeToAttacherJoints[attacherJoint.visualNodes[1]] = {}
  end
  table.insert(index.visualNodeToAttacherJoints[v29], attacherJoint)
  -- TODO: structure LOP_FORNLOOP (pc 1805, target 1783)
  v26 = xmlFile:getValue(baseName .. ".visuals#hide", nil, self.components, self.i3dMappings, true)
  attacherJoint.hideVisuals = v26
  -- TODO: structure LOP_FORNPREP (pc 1825, target 1849)
  if index.hideVisualNodeToAttacherJoints[attacherJoint.hideVisuals[1]] == nil then
    index.hideVisualNodeToAttacherJoints[attacherJoint.hideVisuals[1]] = {}
  end
  table.insert(index.hideVisualNodeToAttacherJoints[v29], attacherJoint)
  -- TODO: structure LOP_FORNLOOP (pc 1848, target 1826)
  attacherJoint.changeObjects = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, baseName, attacherJoint.changeObjects, self.components, self)
  ObjectChangeUtil.setObjectChanges(attacherJoint.changeObjects, false, self, self.setMovingToolDirty, true)
  v26 = xmlFile:getValue(baseName .. "#delayedObjectChanges", true)
  attacherJoint.delayedObjectChanges = v26
  v26 = xmlFile:getValue(baseName .. "#delayedObjectChangesOnAttach", false)
  attacherJoint.delayedObjectChangesOnAttach = v26
  attacherJoint.additionalAttachment = {}
  v27 = xmlFile:getValue(baseName .. ".additionalAttachment#attacherJointDirection")
  attacherJoint.additionalAttachment.attacherJointDirection = v27
  v26 = xmlFile:getValue(baseName .. "#rootNode", self.components[1].node, self.components, self.i3dMappings)
  attacherJoint.rootNode = v26
  attacherJoint.rootNodeBackup = attacherJoint.rootNode
  attacherJoint.jointIndex = 0
  v26 = xmlFile:getValue(baseName .. "#comboTime")
  attacherJoint.comboTime = v26
  v27 = xmlFile:hasProperty(baseName .. ".schema")
  if v27 then
    v27, v28 = xmlFile:getValue(baseName .. ".schema" .. "#position")
    v29, v30 = xmlFile:getValue(baseName .. ".schema" .. "#liftedOffset", "0 5")
    local v35 = xmlFile:getValue(baseName .. ".schema" .. "#rotation", 0)
    local v36 = xmlFile:getValue(baseName .. ".schema" .. "#invertX", false)
    v31:addAttacherJoint(v27, v28, v35, v36, v29, v30)
  else
    Logging.xmlWarning(self.xmlFile, "Missing schema overlay attacherJoint '%s'!", baseName)
  end
  return true
end
function AttacherJoints.onTopArmI3DLoaded(v0, jointDesc, inputJointDesc, object)
  if jointDesc ~= 0 then
    local loadFromSavegame = getChildAt(jointDesc, 0)
    link(object.baseNode, loadFromSavegame)
    delete(jointDesc)
    setTranslation(loadFromSavegame, 0, 0, 0)
    local subShapeIndex = getChildAt(loadFromSavegame, 0)
    local shapeId = getChildAt(subShapeIndex, 0)
    local attacherJointIndex, v13, v14 = getTranslation(shapeId)
    local v16 = object.xmlFile:getValue(object.baseName .. ".topArm#zScale", 1)
    local v15 = MathUtil.sign(...)
    if v15 < 0 then
      setRotation(loadFromSavegame, {rotationNode = loadFromSavegame, rotX = 0, rotY = 0, rotZ = 0, translationNode = subShapeIndex, referenceDistance = v14, zScale = 1, rotY = math.pi}.rotX, {rotationNode = loadFromSavegame, rotX = 0, rotY = 0, rotZ = 0, translationNode = subShapeIndex, referenceDistance = v14, zScale = 1, rotY = math.pi}.rotY, {rotationNode = loadFromSavegame, rotX = 0, rotY = 0, rotZ = 0, translationNode = subShapeIndex, referenceDistance = v14, zScale = 1, rotY = math.pi}.rotZ)
    end
    v16 = getNumOfChildren(loadFromSavegame)
    if 1 < v16 then
      v16 = getChildAt(loadFromSavegame, 1)
      isLast.scaleNode = v16
      v16 = getChildAt(isLast.scaleNode, 0)
      local v17, v18, v19 = getTranslation(v16)
      isLast.scaleReferenceDistance = v19
    end
    v16 = noEventSend:getValue(index .. ".topArm#toggleVisibility", false)
    isLast.toggleVisibility = v16
    if isLast.toggleVisibility then
      setVisibility(isLast.rotationNode, false)
    end
    v16 = noEventSend:getValue(index .. ".topArm#color", nil, true)
    v17 = noEventSend:getValue(index .. ".topArm#color2", nil, true)
    v18 = noEventSend:getValue(index .. ".topArm#decalColor", nil, true)
    v19 = noEventSend:getValue(index .. ".topArm#secondPartUseMainColor", true)
    local ptoOutputs = noEventSend:getValue(index .. ".topArm#useBrandDecal", true)
    if not ptoOutputs then
      local v21 = I3DUtil.getChildByName(loadFromSavegame, "brandDecal")
      if v21 ~= nil then
        delete(v21)
      else
        Logging.xmlDevWarning(noEventSend, "Unable to find brand decal to remove for '%s'", index .. ".topArm")
      end
    end
    if v18 == nil and v16 ~= nil then
      v21 = MathUtil.getBrightnessFromColor(v16[1], v16[2], v16[3])
      if 0.075 < v21 then
      else
      end
    end
    local v21, v22, v23, v24 = I3DUtil.getShaderParameterRec(loadFromSavegame, "colorMat0")
    local v25, v26, v27, v28 = I3DUtil.getShaderParameterRec(loadFromSavegame, "colorMat1")
    if v16 ~= nil then
      local v29 = noEventSend:getValue(index .. ".topArm#material")
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat0", v16[1], v16[2], v16[3], v29 or v24)
    end
    if v17 ~= nil then
      v29 = noEventSend:getValue(index .. ".topArm#material2")
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat1", v17[1], v17[2], v17[3], v29 or v28)
    end
    if v19 then
      if v16 ~= nil then
        v29 = noEventSend:getValue(index .. ".topArm#material")
        I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat3", v16[1], v16[2], v16[3], v29 or v24)
        -- goto L333  (LOP_JUMP +47)
      end
      local v29, v30, v31, v32 = I3DUtil.getShaderParameterRec(loadFromSavegame, "colorMat0")
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat3", v29, v30, v31, v32)
    elseif v17 ~= nil then
      v29 = noEventSend:getValue(index .. ".topArm#material2")
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat3", v17[1], v17[2], v17[3], v29 or v28)
    else
      v29, v30, v31, v32 = I3DUtil.getShaderParameterRec(loadFromSavegame, "colorMat1")
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat3", v29, v30, v31, v32)
    end
    if v18 ~= nil then
      I3DUtil.setShaderParameterRec(loadFromSavegame, "colorMat2", v18[1], v18[2], v18[3], 1)
    end
    startLowered.topArm = isLast
  end
end
function AttacherJoints.onBottomArmToolbarI3DLoaded(v0, jointDesc, inputJointDesc, object)
  if jointDesc ~= 0 then
    local startLowered = getChildAt(jointDesc, 0)
    link(object.referenceNode, startLowered)
    delete(jointDesc)
    setTranslation(startLowered, 0, 0, 0)
    object.bottomArm.toolbar = startLowered
    setVisibility(startLowered, false)
  end
end
function AttacherJoints:raiseActive(superFunc)
  superFunc(self)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    loadFromSavegame:raiseActive()
  end
end
function AttacherJoints:registerActionEvents(superFunc, excludedVehicle)
  superFunc(self, excludedVehicle)
  if self ~= excludedVehicle then
    local selectedObject = self:getSelectedObject()
    if selectedObject ~= nil and self ~= selectedObject.vehicle and excludedVehicle ~= selectedObject.vehicle then
      index:registerActionEvents()
    end
    for loadFromSavegame, subShapeIndex in pairs(object.attachedImplements) do
      if not (subShapeIndex.object ~= nil) then
        continue
      end
      if selectedObject == nil then
        printCallstack()
      end
      shapeId:registerActionEvents(selectedObject.vehicle)
    end
  end
end
function AttacherJoints:removeActionEvents(superFunc)
  superFunc(self)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    loadFromSavegame:removeActionEvents()
  end
end
function AttacherJoints:addToPhysics(superFunc)
  local object = superFunc(self)
  if not object then
    return false
  end
  for startLowered, noSmoothAttach in pairs(inputJointDesc.attachedImplements) do
    if not not noSmoothAttach.object.spec_attachable.isHardAttached then
      continue
    end
    self:createAttachmentJoint(noSmoothAttach)
  end
  return true
end
function AttacherJoints:removeFromPhysics(superFunc)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not not noSmoothAttach.object.spec_attachable.isHardAttached then
      continue
    end
    if not (inputJointDesc.attacherJoints[noSmoothAttach.jointDescIndex].jointIndex ~= 0) then
      continue
    end
    inputJointDesc.attacherJoints[noSmoothAttach.jointDescIndex].jointIndex = 0
  end
  object = superFunc(self)
  if not object then
    return false
  end
  return true
end
function AttacherJoints:getTotalMass(superFunc, onlyGivenVehicle)
  local mass = superFunc(self)
  if onlyGivenVehicle ~= nil then
    -- if v2 then goto L25 end
  end
  for loadFromSavegame, subShapeIndex in pairs(object.attachedImplements) do
    if not (subShapeIndex.object ~= nil) then
      continue
    end
    local isLast = subShapeIndex.object:getTotalMass(onlyGivenVehicle)
  end
  return mass
end
function AttacherJoints:addChildVehicles(jointDesc, inputJointDesc, object)
  for loadFromSavegame, subShapeIndex in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (subShapeIndex.object ~= nil) then
      continue
    end
    if not (subShapeIndex.object.addChildVehicles ~= nil) then
      continue
    end
    subShapeIndex.object:addChildVehicles(inputJointDesc, object)
  end
  index = jointDesc(self, inputJointDesc, object)
  return index
end
function AttacherJoints:getAirConsumerUsage(superFunc)
  local usage = superFunc(self)
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.getAttachbleAirConsumerUsage ~= nil) then
      continue
    end
    local shapeId = loadFromSavegame.object:getAttachbleAirConsumerUsage()
  end
  return usage
end
function AttacherJoints:getRequiresPower(superFunc)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    local loadFromSavegame = loadFromSavegame:getRequiresPower()
    if not loadFromSavegame then
      continue
    end
    return true
  end
  object = superFunc(self)
  return object
end
function AttacherJoints:addVehicleToAIImplementList(superFunc, list)
  superFunc(self, list)
  local noEventSend = self:getAttachedImplements()
  for startLowered, noSmoothAttach in pairs(...) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.addVehicleToAIImplementList ~= nil) then
      continue
    end
    noSmoothAttach.object:addVehicleToAIImplementList(list)
  end
end
function AttacherJoints:collectAIAgentAttachments(superFunc, aiDrivableVehicle)
  superFunc(self, aiDrivableVehicle)
  local noEventSend = self:getAttachedImplements()
  for startLowered, noSmoothAttach in pairs(...) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.collectAIAgentAttachments ~= nil) then
      continue
    end
    noSmoothAttach.object:collectAIAgentAttachments(aiDrivableVehicle)
    aiDrivableVehicle:startNewAIAgentAttachmentChain()
  end
end
function AttacherJoints:setAIVehicleObstacleStateDirty(superFunc)
  superFunc(self)
  local object = self:getAttachedImplements()
  for index, startLowered in pairs(...) do
    if not (startLowered.object ~= nil) then
      continue
    end
    if not (startLowered.object.setAIVehicleObstacleStateDirty ~= nil) then
      continue
    end
    startLowered.object:setAIVehicleObstacleStateDirty()
  end
end
function AttacherJoints:getDirectionSnapAngle(superFunc)
  local maxAngle = superFunc(self)
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.getDirectionSnapAngle ~= nil) then
      continue
    end
    local attacherJointIndex = loadFromSavegame.object:getDirectionSnapAngle()
    local shapeId = math.max(maxAngle + attacherJointIndex)
  end
  return maxAngle
end
function AttacherJoints:getFillLevelInformation(superFunc, display)
  superFunc(self, display)
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.getFillLevelInformation ~= nil) then
      continue
    end
    loadFromSavegame.object:getFillLevelInformation(display)
  end
end
function AttacherJoints:attachableAddToolCameras(superFunc)
  superFunc(self)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.attachableAddToolCameras ~= nil) then
      continue
    end
    noSmoothAttach.object:attachableAddToolCameras()
  end
end
function AttacherJoints:attachableRemoveToolCameras(superFunc)
  superFunc(self)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.attachableRemoveToolCameras ~= nil) then
      continue
    end
    noSmoothAttach.object:attachableRemoveToolCameras()
  end
end
function AttacherJoints:registerSelectableObjects(superFunc, selectableObjects)
  superFunc(self, selectableObjects)
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.registerSelectableObjects ~= nil) then
      continue
    end
    loadFromSavegame.object:registerSelectableObjects(selectableObjects)
  end
end
function AttacherJoints:getIsReadyForAutomatedTrainTravel(superFunc)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.getIsReadyForAutomatedTrainTravel ~= nil) then
      continue
    end
    local subShapeIndex = noSmoothAttach.object:getIsReadyForAutomatedTrainTravel()
    if not not subShapeIndex then
      continue
    end
    return false
  end
  object = superFunc(self)
  return object
end
function AttacherJoints:getIsAutomaticShiftingAllowed(superFunc)
  local lastSpeed = self:getLastSpeed()
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if lastSpeed < 2 then
      if loadFromSavegame.attachingIsInProgress then
        return false
      end
      if inputJointDesc.attacherJoints[loadFromSavegame.jointDescIndex].isMoving then
        return false
      end
    end
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.getIsAutomaticShiftingAllowed ~= nil) then
      continue
    end
    local shapeId = loadFromSavegame.object:getIsAutomaticShiftingAllowed()
    if not not shapeId then
      continue
    end
    return false
  end
  noEventSend = superFunc(self)
  return noEventSend
end
function AttacherJoints.loadDashboardGroupFromXML(v0, jointDesc, inputJointDesc, object, noEventSend)
  local index = jointDesc(v0, inputJointDesc, object, noEventSend)
  if not index then
    return false
  end
  index = inputJointDesc:getValue(object .. "#attacherJointIndices", "", true)
  noEventSend.attacherJointIndices = index
  return true
end
function AttacherJoints:getIsDashboardGroupActive(superFunc, group)
  if #group.attacherJointIndices ~= 0 then
  end
  for noSmoothAttach, loadFromSavegame in ipairs(group.attacherJointIndices) do
    local subShapeIndex = self:getImplementFromAttacherJointIndex(loadFromSavegame)
    if not (subShapeIndex ~= nil) then
      continue
    end
  end
  index = superFunc(self, group)
  return index and object
end
function AttacherJoints.loadAttacherJointHeightNode(v0, jointDesc, inputJointDesc, object, noEventSend, index)
  local startLowered = inputJointDesc:getValue(object .. "#disablingAttacherJointIndices", "", true)
  noEventSend.disablingAttacherJointIndices = startLowered
  startLowered = jointDesc(v0, inputJointDesc, object, noEventSend, index)
  return startLowered
end
function AttacherJoints:getIsAttacherJointHeightNodeActive(superFunc, heightNode)
  for startLowered, noSmoothAttach in ipairs(heightNode.disablingAttacherJointIndices) do
    local loadFromSavegame = self:getImplementFromAttacherJointIndex(noSmoothAttach)
    if not (loadFromSavegame ~= nil) then
      continue
    end
    return false
  end
  object = superFunc(self, heightNode)
  return object
end
function AttacherJoints:isDetachAllowed(superFunc)
  local inputJointDesc, object, noEventSend = superFunc(self)
  if not inputJointDesc then
    return inputJointDesc, object, noEventSend
  end
  for subShapeIndex, shapeId in ipairs(self.spec_attacherJoints.attacherJoints) do
    if not not shapeId.allowDetachingWhileLifted then
      continue
    end
    if not not shapeId.moveDown then
      continue
    end
    local isLast = self:getImplementByJointDescIndex(subShapeIndex)
    if not (isLast ~= nil) then
      continue
    end
    local attacherJointIndex = attacherJointIndex:getInputAttacherJointByJointDescIndex(isLast.inputJointDescIndex)
    if not (attacherJointIndex ~= nil) then
      continue
    end
    if not not attacherJointIndex.forceAllowDetachWhileLifted then
      continue
    end
    local v14 = string.format(index.texts.lowerImplementFirst, isLast.object.typeDesc)
    return false
  end
  return true
end
function AttacherJoints:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  for loadFromSavegame, subShapeIndex in ipairs(self.spec_attacherJoints.attacherJoints) do
    if not not subShapeIndex.allowFoldingWhileAttached then
      continue
    end
    if not (subShapeIndex.jointIndex ~= 0) then
      continue
    end
    return false, noEventSend.texts.warningFoldingAttacherJoint
  end
  index = superFunc(self, direction, onAiTurnOn)
  return index
end
function AttacherJoints:getIsWheelFoliageDestructionAllowed(superFunc, wheel)
  local object = superFunc(self, wheel)
  if not object then
    return false
  end
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    if not (loadFromSavegame.object.getBlockFoliageDestruction ~= nil) then
      continue
    end
    local shapeId = loadFromSavegame.object:getBlockFoliageDestruction()
    if not shapeId then
      continue
    end
    return false
  end
  return true
end
function AttacherJoints:getAreControlledActionsAllowed(superFunc)
  local inputJointDesc, object = superFunc(self)
  if not inputJointDesc then
    return false, object
  end
  for loadFromSavegame, subShapeIndex in pairs(self.spec_attacherJoints.attachedImplements) do
    if subShapeIndex.object ~= nil and subShapeIndex.object.getAreControlledActionsAllowed ~= nil then
      local isLast, attacherJointIndex = subShapeIndex.object:getAreControlledActionsAllowed()
      if not isLast then
        return false, attacherJointIndex
      end
    end
    if not subShapeIndex.attachingIsInProgress then
      continue
    end
    return false
  end
  return true, object
end
function AttacherJoints:getConnectionHoseConfigIndex(superFunc)
  local index = superFunc(self)
  local object = object:getValue("vehicle.attacherJoints#connectionHoseConfigId", index)
  if self.configurations.attacherJoint ~= nil then
    object = string.format("vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(%d)", self.configurations.attacherJoint - 1)
    local noEventSend = noEventSend:getValue(object .. "#connectionHoseConfigId", object)
  end
  return index
end
function AttacherJoints:getPowerTakeOffConfigIndex(superFunc)
  local index = superFunc(self)
  local object = object:getValue("vehicle.attacherJoints#powerTakeOffConfigId", index)
  if self.configurations.attacherJoint ~= nil then
    object = string.format("vehicle.attacherJoints.attacherJointConfigurations.attacherJointConfiguration(%d)", self.configurations.attacherJoint - 1)
    local noEventSend = noEventSend:getValue(object .. "#powerTakeOffConfigId", object)
  end
  return index
end
function AttacherJoints:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_attacherJoints.actionEvents)
    if isActiveForInputIgnoreSelection then
      if 0 < #self.spec_attacherJoints.attacherJoints then
        local selectedImplement = self:getSelectedImplement()
        if selectedImplement ~= nil and selectedImplement.object ~= self then
          for loadFromSavegame, subShapeIndex in pairs(self.spec_attacherJoints.attachedImplements) do
            if not (subShapeIndex == selectedImplement) then
              continue
            end
            shapeId:registerLoweringActionEvent(object.actionEvents, InputAction.LOWER_IMPLEMENT, selectedImplement.object, AttacherJoints.actionEventLowerImplement, false, true, false, true, nil, nil, true)
          end
        end
        index, startLowered = self:addPoweredActionEvent(object.actionEvents, InputAction.LOWER_ALL_IMPLEMENTS, self, AttacherJoints.actionEventLowerAllImplements, false, true, false, true, nil, nil, true)
        noSmoothAttach:setActionEventTextVisibility(startLowered, false)
      end
      selectedImplement = self:getSelectedVehicle()
      if selectedImplement == self then
        selectedImplement, index = self:registerSelfLoweringActionEvent(object.actionEvents, InputAction.LOWER_IMPLEMENT, self, AttacherJoints.actionEventLowerImplement, false, true, false, true, nil, nil, true)
        if selectedImplement ~= nil then
          -- if v4 then goto L143 end
        end
        if #object.attachedImplements == 1 and object.attachedImplements[1] ~= nil then
          noSmoothAttach:registerLoweringActionEvent(object.actionEvents, InputAction.LOWER_IMPLEMENT, object.attachedImplements[1].object, AttacherJoints.actionEventLowerImplement, false, true, false, true, nil, nil, true)
        end
      end
      selectedImplement, index = self:addActionEvent(object.actionEvents, InputAction.ATTACH, self, AttacherJoints.actionEventAttach, false, true, false, true, nil, nil, true)
      startLowered:setActionEventTextPriority(index, GS_PRIO_VERY_HIGH)
      startLowered, noSmoothAttach = self:addActionEvent(object.actionEvents, InputAction.DETACH, self, AttacherJoints.actionEventDetach, false, true, false, true, nil, nil, true)
      startLowered:setActionEventTextVisibility(noSmoothAttach, false)
      AttacherJoints.updateActionEvents(self)
    end
  end
end
function AttacherJoints:onActivate()
  self:activateAttachments()
end
function AttacherJoints:onDeactivate()
  self:deactivateAttachments()
  if self.isClient then
    inputJointDesc:stopSample(self.spec_attacherJoints.samples.hydraulic)
    self.spec_attacherJoints.isHydraulicSamplePlaying = false
  end
end
function AttacherJoints:onReverseDirectionChanged(direction)
  if self.spec_attacherJoints.attacherJointCombos ~= nil then
    for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attacherJointCombos.joints) do
      local loadFromSavegame = math.abs(noSmoothAttach.time - inputJointDesc.attacherJointCombos.duration)
      noSmoothAttach.time = loadFromSavegame
    end
  end
end
function AttacherJoints:onStateChange(state, data)
  for noSmoothAttach, loadFromSavegame in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (loadFromSavegame.object ~= nil) then
      continue
    end
    subShapeIndex:raiseStateChange(state, data)
  end
  if state == Vehicle.STATE_CHANGE_LOWER_ALL_IMPLEMENTS and 0 < #object.attacherJoints then
    self:startAttacherJointCombo()
  end
end
function AttacherJoints:onLightsTypesMaskChanged(lightsTypesMask)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.setLightsTypesMask ~= nil) then
      continue
    end
    noSmoothAttach.object:setLightsTypesMask(lightsTypesMask, true, true)
  end
end
function AttacherJoints:onTurnLightStateChanged(state)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.setTurnLightState ~= nil) then
      continue
    end
    noSmoothAttach.object:setTurnLightState(state, true, true)
  end
end
function AttacherJoints:onBrakeLightsVisibilityChanged(visibility)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.setBrakeLightsVisibility ~= nil) then
      continue
    end
    noSmoothAttach.object:setBrakeLightsVisibility(visibility)
  end
end
function AttacherJoints:onReverseLightsVisibilityChanged(visibility)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.setReverseLightsVisibility ~= nil) then
      continue
    end
    noSmoothAttach.object:setReverseLightsVisibility(visibility)
  end
end
function AttacherJoints:onBeaconLightsVisibilityChanged(visibility)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.setBeaconLightsVisibility ~= nil) then
      continue
    end
    noSmoothAttach.object:setBeaconLightsVisibility(visibility, true, true)
  end
end
function AttacherJoints:onBrake(brakePedal)
  for startLowered, noSmoothAttach in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (noSmoothAttach.object ~= nil) then
      continue
    end
    if not (noSmoothAttach.object.brake ~= nil) then
      continue
    end
    noSmoothAttach.object:brake(brakePedal)
  end
end
function AttacherJoints:onTurnedOn()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    if not startLowered.object.spec_turnOnVehicle then
      continue
    end
    if not startLowered.object.spec_turnOnVehicle.turnedOnByAttacherVehicle then
      continue
    end
    startLowered.object:setIsTurnedOn(true, true)
  end
end
function AttacherJoints:onTurnedOff()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    if not startLowered.object.spec_turnOnVehicle then
      continue
    end
    if not startLowered.object.spec_turnOnVehicle.turnedOnByAttacherVehicle then
      continue
    end
    startLowered.object:setIsTurnedOn(false, true)
  end
end
function AttacherJoints:onLeaveVehicle()
  for index, startLowered in pairs(self.spec_attacherJoints.attachedImplements) do
    if not (startLowered.object ~= nil) then
      continue
    end
    SpecializationUtil.raiseEvent(startLowered.object, "onLeaveRootVehicle")
  end
end
function AttacherJoints:getAttacherJointCompatibility(jointDesc, inputJointDesc, object)
  if object.forcedAttachingDirection ~= 0 and jointDesc.additionalAttachment.attacherJointDirection ~= nil and object.forcedAttachingDirection ~= jointDesc.additionalAttachment.attacherJointDirection then
    return false
  end
  if jointDesc.subTypes ~= nil then
    if object.subTypes == nil then
      return false, self.spec_attacherJoints.texts.warningToolNotCompatible
    end
    -- TODO: structure LOP_FORNPREP (pc 42, target 61)
    for shapeId = 1, #object.subTypes do
      if jointDesc.subTypes[noSmoothAttach] == object.subTypes[shapeId] then
      else
        -- TODO: structure LOP_FORNLOOP (pc 59, target 49)
      end
    end
    -- if v4 then goto L99 end
    if jointDesc.subTypeShowWarning and object.subTypeShowWarning then
      return false, self.spec_attacherJoints.texts.warningToolNotCompatible
    end
    return false
  elseif object.subTypes ~= nil then
    if object.subTypeShowWarning and jointDesc.subTypeShowWarning then
      return false, self.spec_attacherJoints.texts.warningToolNotCompatible
    end
    return false
  end
  if jointDesc.brandRestrictions ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 109, target 124)
    if inputJointDesc.brand ~= nil then
      -- if v2.brand ~= v1.brandRestrictions[1] then goto L123 end
    else
      -- TODO: structure LOP_FORNLOOP (pc 123, target 110)
    end
    if not noEventSend then
      -- TODO: structure LOP_FORNPREP (pc 131, target 146)
      if 1 < 1 then
      end
      -- TODO: structure LOP_FORNLOOP (pc 145, target 132)
      local noSmoothAttach = string.format(self.spec_attacherJoints.texts.warningToolBrandNotCompatible, index .. jointDesc.brandRestrictions[loadFromSavegame].title)
      return false
    end
  end
  if jointDesc.vehicleRestrictions ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 168, target 182)
    local loadFromSavegame = loadFromSavegame:find(jointDesc.vehicleRestrictions[1])
    if loadFromSavegame ~= nil then
    else
      -- TODO: structure LOP_FORNLOOP (pc 181, target 169)
    end
    if not noEventSend then
      return false, self.spec_attacherJoints.texts.warningToolNotCompatible
    end
  end
  return true
end
function AttacherJoints.findVehicleInAttachRange()
  log("function 'AttacherJoints.findVehicleInAttachRange' is deprecated. Use 'AttacherJoints.updateVehiclesInAttachRange' instead. Valid output of this function is now up to 5 frames delayed, if parameter 4 is not 'true'.")
end
function AttacherJoints:updateVehiclesInAttachRange(jointDesc, inputJointDesc, object)
  if self.spec_attacherJoints ~= nil then
    if self.getAttachedImplements ~= nil then
      local noSmoothAttach = self:getAttachedImplements()
      for isLast, attacherJointIndex in pairs(noSmoothAttach) do
        if not (attacherJointIndex.object ~= nil) then
          continue
        end
        local v13, v14, v15, v16, v17 = AttacherJoints.updateVehiclesInAttachRange(attacherJointIndex.object, jointDesc, inputJointDesc, object)
        if not (v13 ~= nil) then
          continue
        end
        index.attacherVehicle = v13
        index.attacherVehicleJointDescIndex = v14
        index.attachable = v15
        index.attachableJointDescIndex = v16
        index.warning = v17
        return v13, v14, v15, v16, v17
      end
    end
    subShapeIndex = math.floor(#g_currentMission.inputAttacherJoints / 5)
    loadFromSavegame = math.max(subShapeIndex, 1)
    shapeId = math.min(noEventSend.lastInputAttacherCheckIndex % #g_currentMission.inputAttacherJoints + 1 + loadFromSavegame, #g_currentMission.inputAttacherJoints)
    if object then
    end
    noEventSend.lastInputAttacherCheckIndex = shapeId % noSmoothAttach
    -- TODO: structure LOP_FORNPREP (pc 85, target 253)
    if noEventSend.attacherJoints[1].jointIndex == 0 then
      v15 = self:getIsAttachingAllowed(noEventSend.attacherJoints[1])
      if v15 then
        v15, v16, v17 = getWorldTranslation(noEventSend.attacherJoints[1].jointTransform)
        -- TODO: structure LOP_FORNPREP (pc 106, target 252)
        if g_currentMission.inputAttacherJoints[subShapeIndex].jointType == noEventSend.attacherJoints[1].jointType then
          local v22 = v22:getIsInputAttacherActive(g_currentMission.inputAttacherJoints[subShapeIndex].inputAttacherJoint)
          if v22 then
            v22 = MathUtil.vector2LengthSq(v15 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[1], v17 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[3])
            if v22 < jointDesc and v22 < startLowered.minDistance and (v16 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[2]) * (v16 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[2]) < jointDesc * 4 and (v16 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[2]) * (v16 - g_currentMission.inputAttacherJoints[subShapeIndex].translation[2]) < startLowered.minDistanceY then
              local v25 = v25:getActiveInputAttacherJointDescIndex()
              if v25 ~= nil then
                v25 = v25:getAllowMultipleAttachments()
                -- if not v25 then goto L251 end
              end
              local v25, v26 = u0(self, v14, v21.vehicle, v21.inputAttacherJoint)
              if v25 then
                if v21.inputAttacherJoint.attachAngleLimitAxis == 1 then
                  local v29, v30, v31 = localDirectionToLocal(v21.node, v14.jointTransform, 1, 0, 0)
                  if inputJointDesc >= v29 then
                  end
                elseif v21.inputAttacherJoint.attachAngleLimitAxis == 2 then
                  v29, v30, v31 = localDirectionToLocal(v21.node, v14.jointTransform, 0, 1, 0)
                  if inputJointDesc >= v30 then
                  end
                else
                  v29, v30, v31 = localDirectionToLocal(v21.node, v14.jointTransform, 0, 0, 1)
                  if inputJointDesc >= v31 then
                  end
                end
                -- if not v27 then goto L251 end
                startLowered.minDistance = v22
                startLowered.minDistanceY = v24
                startLowered.attacherVehicle = self
                startLowered.attacherVehicleJointDescIndex = v13
                startLowered.attachable = v21.vehicle
                startLowered.attachableJointDescIndex = v21.jointIndex
              else
                startLowered.warning = startLowered.warning or v26
              end
            end
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 251, target 107)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 252, target 86)
    if noEventSend.lastInputAttacherCheckIndex == 0 then
      index.attacherVehicle = startLowered.attacherVehicle
      index.attacherVehicleJointDescIndex = startLowered.attacherVehicleJointDescIndex
      index.attachable = startLowered.attachable
      index.attachableJointDescIndex = startLowered.attachableJointDescIndex
      index.warning = startLowered.warning
      startLowered.minDistance = math.huge
      startLowered.minDistanceY = math.huge
      startLowered.attacherVehicle = nil
      startLowered.attacherVehicleJointDescIndex = nil
      startLowered.attachable = nil
      startLowered.attachableJointDescIndex = nil
      startLowered.warning = nil
    end
    return index.attacherVehicle, index.attacherVehicleJointDescIndex, index.attachable, index.attachableJointDescIndex, index.warning
  end
  return nil, nil, nil, nil
end
function AttacherJoints:actionEventAttach(actionName, inputValue, callbackState, isAnalog)
  if self.spec_attacherJoints.attachableInfo.attachable ~= nil then
    local loadFromSavegame = self:getActiveFarm()
    local startLowered, noSmoothAttach = startLowered:isAttachAllowed(loadFromSavegame, self.spec_attacherJoints.attachableInfo.attacherVehicle)
    if startLowered then
      if self.isServer then
        self:attachImplementFromInfo(self.spec_attacherJoints.attachableInfo)
        return
      end
      loadFromSavegame = loadFromSavegame:getServerConnection()
      local shapeId = VehicleAttachRequestEvent.new(index)
      loadFromSavegame:sendEvent(...)
      return
    end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L100
    loadFromSavegame:showBlinkingWarning(noSmoothAttach, 2000)
    return
  end
  startLowered = startLowered:getIsRunning()
  if startLowered then
    startLowered = startLowered:getCanDetachImplement(self)
    if not startLowered then
      return
    end
  end
  startLowered = self:getSelectedVehicle()
  if startLowered ~= nil and startLowered ~= self and startLowered.isDetachAllowed ~= nil then
    local noSmoothAttach, loadFromSavegame, subShapeIndex = startLowered:isDetachAllowed()
    if noSmoothAttach then
      startLowered:startDetachProcess()
      return
    end
    if subShapeIndex ~= nil then
      -- if not v9 then goto L100 end
    end
    if not loadFromSavegame then
    end
    shapeId:showBlinkingWarning(attacherJointIndex, 2000)
  end
end
function AttacherJoints:actionEventDetach(actionName, inputValue, callbackState, isAnalog)
  local index = index:getIsRunning()
  if index then
    index = index:getCanDetachImplement(self)
    if not index then
      return
    end
  end
  index = self:getSelectedVehicle()
  if index ~= nil and index ~= self and index.isDetachAllowed ~= nil then
    local startLowered, noSmoothAttach, loadFromSavegame = index:isDetachAllowed()
    if startLowered then
      index:startDetachProcess()
      return
    end
    if loadFromSavegame ~= nil then
      -- if not v8 then goto L50 end
    end
    if not noSmoothAttach then
    end
    subShapeIndex:showBlinkingWarning(isLast, 2000)
  end
end
function AttacherJoints:actionEventLowerImplement(actionName, inputValue, callbackState, isAnalog)
  if self.getAttacherVehicle ~= nil then
    local index = self:getAttacherVehicle()
    index:handleLowerImplementEvent()
  end
end
function AttacherJoints:actionEventLowerAllImplements(actionName, inputValue, callbackState, isAnalog)
  self:startAttacherJointCombo(true)
  index:raiseStateChange(Vehicle.STATE_CHANGE_LOWER_ALL_IMPLEMENTS)
end
function AttacherJoints:updateActionEvents()
  if self.isClient and self.spec_attacherJoints.actionEvents ~= nil then
    if self.spec_attacherJoints.actionEvents[InputAction.ATTACH] ~= nil then
      local index = self:getCanToggleAttach()
      if index then
        if self.spec_attacherJoints.attachableInfo.warning ~= nil then
          index:showBlinkingWarning(self.spec_attacherJoints.attachableInfo.warning, 500)
        end
        local selectedVehicle = self:getSelectedVehicle()
        if selectedVehicle ~= nil and not selectedVehicle.isDeleted and selectedVehicle.isDetachAllowed ~= nil then
          local loadFromSavegame = selectedVehicle:isDetachAllowed()
          if loadFromSavegame then
            loadFromSavegame = selectedVehicle:getAttacherVehicle()
            if loadFromSavegame ~= nil then
            end
          end
        end
        if inputJointDesc.attacherVehicle ~= nil then
          local shapeId = self:getActiveFarm()
          loadFromSavegame = loadFromSavegame:canFarmAccess(shapeId, inputJointDesc.attachable)
          if loadFromSavegame then
            loadFromSavegame:showAttachContext(inputJointDesc.attachable)
          else
            jointDesc.showAttachNotAllowedText = 100
          end
        end
        loadFromSavegame:setActionEventText(object.actionEventId, index)
        loadFromSavegame:setActionEventTextPriority(object.actionEventId, startLowered)
      end
      index:setActionEventTextVisibility(object.actionEventId, noEventSend)
    end
    if jointDesc.actionEvents[InputAction.LOWER_IMPLEMENT] ~= nil then
      selectedVehicle = self:getSelectedImplement()
      for isLast, attacherJointIndex in pairs(jointDesc.attachedImplements) do
        if not (attacherJointIndex == selectedVehicle) then
          continue
        end
        local v13, v14 = v13:getLoweringActionEventState()
        break
      end
      loadFromSavegame:setActionEventActive(noEventSend.actionEventId, index)
      loadFromSavegame:setActionEventText(noEventSend.actionEventId, startLowered)
      loadFromSavegame:setActionEventTextPriority(noEventSend.actionEventId, GS_PRIO_NORMAL)
    end
  end
end
function AttacherJoints:updateAttacherJointLimits(jointDesc, inputJointDesc, object)
  if inputJointDesc.fixedRotation then
  end
  self.lowerRotLimit[object] = noEventSend
  self.upperRotLimit[object] = index
  self.lowerTransLimit[object] = jointDesc.lowerTransLimit[object] * inputJointDesc.lowerTransLimitScale[object]
  self.upperTransLimit[object] = jointDesc.upperTransLimit[object] * inputJointDesc.upperTransLimitScale[object]
  if not jointDesc.allowsLowering then
    self.upperRotLimit[object] = noEventSend
    self.upperTransLimit[object] = jointDesc.lowerTransLimit[object] * inputJointDesc.lowerTransLimitScale[object]
  end
  if jointDesc.allowsLowering and jointDesc.allowsJointLimitMovement then
    if inputJointDesc.allowsJointRotLimitMovement then
      local shapeId = MathUtil.lerp(index, noEventSend, jointDesc.moveAlpha)
    end
    if inputJointDesc.allowsJointTransLimitMovement then
      shapeId = MathUtil.lerp(noSmoothAttach, startLowered, jointDesc.moveAlpha)
    end
  end
  return loadFromSavegame, subShapeIndex
end
function AttacherJoints:updateAttacherJointRotationLimit(jointDesc, inputJointDesc, object, noEventSend)
  local startLowered = math.max(self.attachingRotLimit[inputJointDesc], self.upperRotLimit[inputJointDesc])
  local noSmoothAttach = math.max(self.attachingRotLimit[inputJointDesc], self.lowerRotLimit[inputJointDesc])
  local index = MathUtil.lerp(startLowered, noSmoothAttach, noEventSend)
  if not object then
    startLowered = math.abs(index - self.jointRotLimit[inputJointDesc])
    -- if 0.0005 >= v6 then goto L81 end
  end
  if inputJointDesc == 3 then
    if jointDesc.lockDownRotLimit then
      local loadFromSavegame = math.min(-self.attachingRotLimit[inputJointDesc], 0)
    end
    if jointDesc.lockUpRotLimit then
      loadFromSavegame = math.max(self.attachingRotLimit[inputJointDesc], 0)
    end
  end
  setJointRotationLimit(jointDesc.jointIndex, inputJointDesc - 1, true, startLowered, noSmoothAttach)
  self.jointRotLimit[inputJointDesc] = index
end
function AttacherJoints:updateAttacherJointTranslationLimit(jointDesc, inputJointDesc, object, noEventSend)
  local startLowered = math.max(self.attachingTransLimit[inputJointDesc], self.upperTransLimit[inputJointDesc])
  local noSmoothAttach = math.max(self.attachingTransLimit[inputJointDesc], self.lowerTransLimit[inputJointDesc])
  local index = MathUtil.lerp(startLowered, noSmoothAttach, noEventSend)
  if not object then
    startLowered = math.abs(index - self.jointTransLimit[inputJointDesc])
    -- if 0.0005 >= v6 then goto L81 end
  end
  if inputJointDesc == 2 then
    if jointDesc.lockDownTransLimit then
      local loadFromSavegame = math.min(-self.attachingTransLimit[inputJointDesc], 0)
    end
    if jointDesc.lockUpTransLimit then
      loadFromSavegame = math.max(self.attachingTransLimit[inputJointDesc], 0)
    end
  end
  setJointTranslationLimit(jointDesc.jointIndex, inputJointDesc - 1, true, startLowered, noSmoothAttach)
  self.jointTransLimit[inputJointDesc] = index
end
