-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Cylindered = {DIRTY_COLLISION_UPDATE_CHECK = false, MOVING_TOOL_SEND_MIN_RESOLUTION = 0.006981317007977318, MOVING_TOOL_XML_KEY = "vehicle.cylindered.movingTools.movingTool(?)", MOVING_PART_XML_KEY = "vehicle.cylindered.movingParts.movingPart(?)", SOUND_TYPE_EVENT = 0, SOUND_TYPE_CONTINUES = 1, SOUND_TYPE_ENDING = 2, SOUND_TYPE_STARTING = 3, SOUND_ACTION_TRANSLATING_END = 0, SOUND_ACTION_TRANSLATING_END_POS = 1, SOUND_ACTION_TRANSLATING_END_NEG = 2, SOUND_ACTION_TRANSLATING_START = 3, SOUND_ACTION_TRANSLATING_START_POS = 4, SOUND_ACTION_TRANSLATING_START_NEG = 5, SOUND_ACTION_TRANSLATING_POS = 6, SOUND_ACTION_TRANSLATING_NEG = 7, SOUND_ACTION_TOOL_MOVE_END = 8, SOUND_ACTION_TOOL_MOVE_END_POS = 9, SOUND_ACTION_TOOL_MOVE_END_NEG = 10, SOUND_ACTION_TOOL_MOVE_END_POS_LIMIT = 11, SOUND_ACTION_TOOL_MOVE_END_NEG_LIMIT = 12, SOUND_ACTION_TOOL_MOVE_START = 13, SOUND_ACTION_TOOL_MOVE_START_POS = 14, SOUND_ACTION_TOOL_MOVE_START_NEG = 15, SOUND_ACTION_TOOL_MOVE_START_POS_LIMIT = 16, SOUND_ACTION_TOOL_MOVE_START_NEG_LIMIT = 17, SOUND_ACTION_TOOL_MOVE_POS = 18, SOUND_ACTION_TOOL_MOVE_NEG = 19}
function Cylindered.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(VehicleSettings, v0)
end
function Cylindered.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Cylindered")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.cylindered.sounds", "hydraulic")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.cylindered.movingTools#powerConsumingActiveTimeOffset", "Power consumer deactivation delay. After the moving tool has not been moved this long it will no longer consume power.", 5)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.cylindered.sounds", "actionSound(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cylindered.sounds.actionSound(?)#actionNames", "Target actions on given nodes")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cylindered.sounds.actionSound(?)#nodes", "Nodes that can activate this sound on given action events")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.sounds.actionSound(?).pitch#dropOffFactor", "Factor that is applied to pitch while drop off time is active", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.sounds.actionSound(?).pitch#dropOffTime", "After this time the sound will be deactivated", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. "#node", "Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. "#referenceFrame", "Reference frame")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. "#referencePoint", "Reference point")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#invertZ", "Invert Z axis", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#scaleZ", "Allow Z axis scaling", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_PART_XML_KEY .. "#limitedAxis", "Limited axis")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#isActiveDirty", "Part is permanently updated", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#playSound", "Play hydraulic sound", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#moveToReferenceFrame", "Move to reference frame", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#doLineAlignment", "Do line alignment (line as ref point)", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#doInversedLineAlignment", "Do inversed line alignment (line inside part and fixed ref point)", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. ".orientationLine#partLength", "Part length (Distance from part to line)", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. ".orientationLine#partLengthNode", "Node to measure the part length dynamically")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. ".orientationLine.lineNode(?)#node", "Line node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#doDirectionAlignment", "Do direction alignment", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#doRotationAlignment", "Do rotation alignment", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#rotMultiplier", "Rotation multiplier for rotation alignment", 0)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_PART_XML_KEY .. "#minRot", "Min. rotation for limited axis")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_PART_XML_KEY .. "#maxRot", "Max. rotation for limited axis")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#alignToWorldY", "Align part to world Y axis", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. "#localReferencePoint", "Local reference point")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. "#referenceDistancePoint", "Z translation will be used as reference distance")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#localReferenceDistance", "Predefined reference distance", "calculated automatically")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#updateLocalReferenceDistance", "Update distance to local reference point", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#dynamicLocalReferenceDistance", "Local reference distance will be calculated based on the initial distance and the localReferencePoint direction", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#localReferenceTranslate", "Translate to local reference node", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#referenceDistanceThreshold", "Distance threshold to update moving part while isActiveDirty", 0.0001)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#useLocalOffset", "Use local offset", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#directionThreshold", "Direction threshold to update part if vehicle is inactive", 0.0001)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. "#directionThresholdActive", "Direction threshold to update part if vehicle is inactive", 0.0001)
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_PART_XML_KEY .. "#maxUpdateDistance", "Max. distance to vehicle root while isActiveDirty is set ('-' means unlimited)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#smoothedDirectionScale", "If moving part is deactivated e.g. due to folding limits the direction is slowly interpolated back to the start direction depending on #smoothedDirectionTime", false)
  Vehicle.xmlSchema:register(XMLValueType.TIME, Cylindered.MOVING_PART_XML_KEY .. "#smoothedDirectionTime", "Defines how low it takes until the part is back in original direction (sec.)", 2)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#debug", "Enables debug rendering for this part", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. ".dependentPart(?)#node", "Dependent part")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_PART_XML_KEY .. ".dependentPart(?)#maxUpdateDistance", "Max. distance to vehicle root to update dependent part ('-' means unlimited)", "-")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#divideTranslatingDistance", "If true all translating parts will move at the same time. If false they start to move in the order from the xml", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_PART_XML_KEY .. ".translatingPart(?)#node", "Translating part")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. ".translatingPart(?)#referenceDistance", "Reference distance")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. ".translatingPart(?)#minZTrans", "Min. Z Translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_PART_XML_KEY .. ".translatingPart(?)#maxZTrans", "Max. Z Translation")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. ".translatingPart(?)#divideTranslatingDistance", "Define individual division per translating part. E.g. one part is extending without division and two other parts extend afterwards at the same speed.", "movingPart#divideTranslatingDistance")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. "#wheelIndices", "List of wheel indices to update")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_PART_XML_KEY .. "#wheelNodes", "List of wheel nodes to update")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. ".inputAttacherJoint#value", "Update input attacher joint")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_PART_XML_KEY .. ".attacherJoint#jointIndices", "List of attacher joints to update")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. ".attacherJoint#ignoreWarning", "No warning is printed if the joint index is not available (due to configurations)", false)
  Cylindered.registerDependentComponentJointXMLPaths(Vehicle.xmlSchema, Cylindered.MOVING_PART_XML_KEY)
  Cylindered.registerCopyLocalDirectionXMLPaths(Vehicle.xmlSchema, Cylindered.MOVING_PART_XML_KEY)
  Cylindered.registerDependentAnimationXMLPaths(Vehicle.xmlSchema, Cylindered.MOVING_PART_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_TOOL_XML_KEY .. "#node", "Node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#isEasyControlTarget", "Is easy control target", false)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotSpeed", "Rotation speed")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotAcceleration", "Rotation acceleration")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotationAxis", "Rotation axis", 1)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotMax", "Max. rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotMin", "Min. rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#startRot", "Start rotation")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#syncMaxRotLimits", "Synchronize max. rotation limits", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#syncMinRotLimits", "Synchronize min. rotation limits", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#rotSendNumBits", "Number of bits to synchronize", "automatically calculated by rotation range")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#attachRotMax", "Max. rotation value set during attach")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#attachRotMin", "Min. rotation value set during attach")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#detachingRotMaxLimit", "Max. rotation to detach vehicle")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".rotation#detachingRotMinLimit", "Min. rotation to detach vehicle")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#transSpeed", "Translation speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#transAcceleration", "Translation acceleration")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#translationAxis", "Translation axis")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#transMax", "Max. translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#transMin", "Min. translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#startTrans", "Start translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#attachTransMax", "Max. translation value set during attach")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#attachTransMin", "Min. translation value set during attach")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#detachingTransMaxLimit", "Max. translation to detach vehicle")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".translation#detachingTransMinLimit", "Min. translation to detach vehicle")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#playSound", "Play sound", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animSpeed", "Animation speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animAcceleration", "Animation acceleration")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animSendNumBits", "Number of bits to synchronize", 8)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animMaxTime", "Animation max. time", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animMinTime", "Animation min. time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".animation#animStartTime", "Animation start time")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_TOOL_XML_KEY .. ".controls#iconName", "Icon identifier")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. ".controls#groupIndex", "Control group index", 0)
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_TOOL_XML_KEY .. ".controls#axis", "Input action name")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".controls#invertAxis", "Invert input axis", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".controls#mouseSpeedFactor", "Mouse speed factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#allowSaving", "Allow saving", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#isIntitialDirty", "Is initial dirty", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_TOOL_XML_KEY .. "#delayedNode", "Delayed node")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. "#delayedFrames", "Delayed frames", 3)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#isConsumingPower", "While tool is moving the power consumer is set active", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentPart(?)#node", "Dependent part")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentPart(?)#maxUpdateDistance", "Max. distance to vehicle root to update dependent part ('-' means unlimited)", "-")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. "#wheelIndices", "List of wheel indices to update")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Cylindered.MOVING_TOOL_XML_KEY .. "#wheelNodes", "List of wheel nodes to update")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".inputAttacherJoint#value", "Update input attacher joint")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. ".attacherJoint#jointIndices", "List of attacher joints to update")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".attacherJoint#ignoreWarning", "No warning is printed if the joint index is not available (due to configurations)", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, Cylindered.MOVING_TOOL_XML_KEY .. "#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#minFillLevel", "Min. fill level")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#maxFillLevel", "Max. fill level")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#foldMinLimit", "Min. fold time", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. "#foldMaxLimit", "Max. fold time", 1)
  Cylindered.registerDependentComponentJointXMLPaths(Vehicle.xmlSchema, Cylindered.MOVING_TOOL_XML_KEY)
  Cylindered.registerDependentAnimationXMLPaths(Vehicle.xmlSchema, Cylindered.MOVING_TOOL_XML_KEY)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#node", "Dependent part")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#speedScale", "Speed scale")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#requiresMovement", "Requires movement", false)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?).rotationBasedLimits.limit(?)#rotation", "Rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?).rotationBasedLimits.limit(?)#rotMin", "Min. rotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?).rotationBasedLimits.limit(?)#rotMax", "Max. rotation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?).rotationBasedLimits.limit(?)#transMin", "Min. translation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?).rotationBasedLimits.limit(?)#transMax", "Max. translation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#minTransLimits", "Min. translation limits")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#maxTransLimits", "Max. translation limits")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#minRotLimits", "Min. rotation limits")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT_2, Cylindered.MOVING_TOOL_XML_KEY .. ".dependentMovingTool(?)#maxRotLimits", "Max. rotation limits")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.cylindered.movingTools.controlGroups.controlGroup(?)#name", "Control group name")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl#rootNode", "Root node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl#node", "Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl#targetNodeZ", "Z target node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl#refNode", "Reference node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl#maxTotalDistance", "Max. total distance the arms can move from rootNode", "automatically calculated")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.targetMovement#speed", "Target node move speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.targetMovement#acceleration", "Target node move acceleration", 50)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#minMoveRatio", "Min. ratio between translation and rotation movement [0: only rotation, 1: only translation]", 0.2)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#maxMoveRatio", "Max. ratio between translation and rotation movement [0: only rotation, 1: only translation]", 0.8)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#moveRatioMinDir", "Defines direction value when the translation parts start to move", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#moveRatioMaxDir", "Defines direction value when the rotation parts stop to move", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#allowNegativeTrans", "Allow translation movement if translation parts are pointing towards the root node", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes#minNegativeTrans", "Min. translation percentage when moving the translation parts into negative direction while they are pointing towards the root node", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl.zTranslationNodes.zTranslationNode(?)#node", "Z translation node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl.xRotationNodes.xRotationNode1#node", "X translation node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.movingTools.easyArmControl.xRotationNodes.xRotationNode2#node", "X translation node")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.cylindered.dashboards", "movingTool")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cylindered.dashboards.dashboard(?)#axis", "Moving tool input action name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.cylindered.dashboards.dashboard(?)#attacherJointIndex", "Index of attacher joint that has to be connected")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cylindered.dashboards.dashboard(?)#attacherJointNode", "Node of attacher joint that has to be connected")
  ObjectChangeUtil.addAdditionalObjectChangeXMLPaths(Vehicle.xmlSchema, function(self, v1)
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolRotMaxActive", "Moving tool max. rotation if object change active")
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolRotMaxInactive", "Moving tool max. rotation if object change inactive")
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolRotMinActive", "Moving tool min. rotation if object change active")
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolRotMinInactive", "Moving tool min. rotation if object change inactive")
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolStartRotActive", "Moving tool start rotation if object change inactive")
    self:register(XMLValueType.ANGLE, v1 .. "#movingToolStartRotInactive", "Moving tool start rotation if object change inactive")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolTransMaxActive", "Moving tool max. translation if object change active")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolTransMaxInactive", "Moving tool max. translation if object change inactive")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolTransMinActive", "Moving tool min. translation if object change active")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolTransMinInactive", "Moving tool min. translation if object change inactive")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolStartTransActive", "Moving tool start translation if object change inactive")
    self:register(XMLValueType.FLOAT, v1 .. "#movingToolStartTransInactive", "Moving tool start translation if object change inactive")
    self:register(XMLValueType.BOOL, v1 .. "#movingPartUpdateActive", "moving part active state if object change active")
    self:register(XMLValueType.BOOL, v1 .. "#movingPartUpdateInactive", "moving part active state if object change inactive")
  end)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Dischargeable.DISCHARGE_NODE_XML_PATH .. ".movingToolActivation#node", "Moving tool node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_XML_PATH .. ".movingToolActivation#isInverted", "Activation is inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Dischargeable.DISCHARGE_NODE_XML_PATH .. ".movingToolActivation#openFactor", "Open factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Dischargeable.DISCHARGE_NODE_XML_PATH .. ".movingToolActivation#openOffset", "Open offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. ".movingToolActivation#node", "Moving tool node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. ".movingToolActivation#isInverted", "Activation is inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. ".movingToolActivation#openFactor", "Open factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH .. ".movingToolActivation#openOffset", "Open offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Shovel.SHOVEL_NODE_XML_KEY .. ".movingToolActivation#node", "Moving tool node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. ".movingToolActivation#isInverted", "Activation is inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. ".movingToolActivation#openFactor", "Open factor", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, DynamicMountAttacher.DYNAMIC_MOUNT_GRAB_XML_PATH .. ".movingToolActivation#node", "Moving tool node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, DynamicMountAttacher.DYNAMIC_MOUNT_GRAB_XML_PATH .. ".movingToolActivation#isInverted", "Activation is inverted", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, DynamicMountAttacher.DYNAMIC_MOUNT_GRAB_XML_PATH .. ".movingToolActivation#openFactor", "Open factor", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).cylindered.movingTool(?)#translation", "Current translation value")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.ANGLE, "vehicles.vehicle(?).cylindered.movingTool(?)#rotation", "Current rotation in rad")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).cylindered.movingTool(?)#animationTime", "Current animation time")
end
function Cylindered:registerDependentComponentJointXMLPaths(v1)
  self:register(XMLValueType.INT, v1 .. ".componentJoint(?)#index", "Dependent component joint index")
  self:register(XMLValueType.INT, v1 .. ".componentJoint(?)#anchorActor", "Dependent component anchor actor")
end
function Cylindered:registerCopyLocalDirectionXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".copyLocalDirectionPart(?)#node", "Copy local direction part")
  self:register(XMLValueType.VECTOR_3, v1 .. ".copyLocalDirectionPart(?)#dirScale", "Direction scale")
  self:register(XMLValueType.VECTOR_3, v1 .. ".copyLocalDirectionPart(?)#upScale", "Up vector scale")
  Cylindered.registerDependentComponentJointXMLPaths(self, v1 .. ".copyLocalDirectionPart(?)")
end
function Cylindered:registerDependentAnimationXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".dependentAnimation(?)#name", "Dependent animation name")
  self:register(XMLValueType.INT, v1 .. ".dependentAnimation(?)#translationAxis", "Translation axis")
  self:register(XMLValueType.INT, v1 .. ".dependentAnimation(?)#rotationAxis", "Rotation axis")
  self:register(XMLValueType.INT, v1 .. ".dependentAnimation(?)#useTranslatingPartIndex", "Use translation part index")
  self:register(XMLValueType.FLOAT, v1 .. ".dependentAnimation(?)#minValue", "Min. reference value")
  self:register(XMLValueType.FLOAT, v1 .. ".dependentAnimation(?)#maxValue", "Max. reference value")
  self:register(XMLValueType.BOOL, v1 .. ".dependentAnimation(?)#invert", "Invert reference value", false)
end
function Cylindered.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onMovingToolChanged")
end
function Cylindered.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadMovingPartFromXML", Cylindered.loadMovingPartFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadMovingToolFromXML", Cylindered.loadMovingToolFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentMovingTools", Cylindered.loadDependentMovingTools)
  SpecializationUtil.registerFunction(vehicleType, "loadEasyArmControlFromXML", Cylindered.loadEasyArmControlFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentParts", Cylindered.loadDependentParts)
  SpecializationUtil.registerFunction(vehicleType, "resolveDependentPartData", Cylindered.resolveDependentPartData)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentComponentJoints", Cylindered.loadDependentComponentJoints)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentAttacherJoints", Cylindered.loadDependentAttacherJoints)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentWheels", Cylindered.loadDependentWheels)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentTranslatingParts", Cylindered.loadDependentTranslatingParts)
  SpecializationUtil.registerFunction(vehicleType, "loadExtraDependentParts", Cylindered.loadExtraDependentParts)
  SpecializationUtil.registerFunction(vehicleType, "loadDependentAnimations", Cylindered.loadDependentAnimations)
  SpecializationUtil.registerFunction(vehicleType, "loadCopyLocalDirectionParts", Cylindered.loadCopyLocalDirectionParts)
  SpecializationUtil.registerFunction(vehicleType, "loadRotationBasedLimits", Cylindered.loadRotationBasedLimits)
  SpecializationUtil.registerFunction(vehicleType, "checkMovingPartDirtyUpdateNode", Cylindered.checkMovingPartDirtyUpdateNode)
  SpecializationUtil.registerFunction(vehicleType, "updateDirtyMovingParts", Cylindered.updateDirtyMovingParts)
  SpecializationUtil.registerFunction(vehicleType, "setMovingToolDirty", Cylindered.setMovingToolDirty)
  SpecializationUtil.registerFunction(vehicleType, "updateCylinderedInitial", Cylindered.updateCylinderedInitial)
  SpecializationUtil.registerFunction(vehicleType, "allowLoadMovingToolStates", Cylindered.allowLoadMovingToolStates)
  SpecializationUtil.registerFunction(vehicleType, "getMovingToolByNode", Cylindered.getMovingToolByNode)
  SpecializationUtil.registerFunction(vehicleType, "getMovingPartByNode", Cylindered.getMovingPartByNode)
  SpecializationUtil.registerFunction(vehicleType, "getTranslatingPartByNode", Cylindered.getTranslatingPartByNode)
  SpecializationUtil.registerFunction(vehicleType, "getIsMovingToolActive", Cylindered.getIsMovingToolActive)
  SpecializationUtil.registerFunction(vehicleType, "getIsMovingPartActive", Cylindered.getIsMovingPartActive)
  SpecializationUtil.registerFunction(vehicleType, "getMovingToolMoveValue", Cylindered.getMovingToolMoveValue)
  SpecializationUtil.registerFunction(vehicleType, "setDelayedData", Cylindered.setDelayedData)
  SpecializationUtil.registerFunction(vehicleType, "updateDelayedTool", Cylindered.updateDelayedTool)
  SpecializationUtil.registerFunction(vehicleType, "updateEasyControl", Cylindered.updateEasyControl)
  SpecializationUtil.registerFunction(vehicleType, "setIsEasyControlActive", Cylindered.setIsEasyControlActive)
  SpecializationUtil.registerFunction(vehicleType, "setEasyControlForcedTransMove", Cylindered.setEasyControlForcedTransMove)
  SpecializationUtil.registerFunction(vehicleType, "updateExtraDependentParts", Cylindered.updateExtraDependentParts)
  SpecializationUtil.registerFunction(vehicleType, "updateDependentAnimations", Cylindered.updateDependentAnimations)
  SpecializationUtil.registerFunction(vehicleType, "updateDependentToolLimits", Cylindered.updateDependentToolLimits)
  SpecializationUtil.registerFunction(vehicleType, "onMovingPartSoundEvent", Cylindered.onMovingPartSoundEvent)
  SpecializationUtil.registerFunction(vehicleType, "updateMovingToolSoundEvents", Cylindered.updateMovingToolSoundEvents)
  SpecializationUtil.registerFunction(vehicleType, "updateControlGroups", Cylindered.updateControlGroups)
end
function Cylindered.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", Cylindered.isDetachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadObjectChangeValuesFromXML", Cylindered.loadObjectChangeValuesFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setObjectChangeValues", Cylindered.setObjectChangeValues)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDischargeNode", Cylindered.loadDischargeNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeNodeEmptyFactor", Cylindered.getDischargeNodeEmptyFactor)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadShovelNode", Cylindered.loadShovelNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getShovelNodeIsActive", Cylindered.getShovelNodeIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDynamicMountGrabFromXML", Cylindered.loadDynamicMountGrabFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDynamicMountGrabOpened", Cylindered.getIsDynamicMountGrabOpened)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setComponentJointFrame", Cylindered.setComponentJointFrame)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalSchemaText", Cylindered.getAdditionalSchemaText)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Cylindered.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", Cylindered.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", Cylindered.getConsumingLoad)
end
function Cylindered.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdateTick", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onSelect", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onUnselect", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onAnimationPartChanged", Cylindered)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleSettingChanged", Cylindered)
end
function Cylindered:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.movingParts", "vehicle.cylindered.movingParts")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.movingTools", "vehicle.cylindered.movingTools")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cylinderedHydraulicSound", "vehicle.cylindered.sounds.hydraulic")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cylindered.movingParts#isActiveDirtyTimeOffset")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cylindered.movingParts.sounds", "vehicle.cylindered.sounds")
  self.spec_cylindered.activeDirtyMovingParts = {}
  self.spec_cylindered.nodesToMovingParts = {}
  self.spec_cylindered.movingParts = {}
  self.anyMovingPartsDirty = false
  self.spec_cylindered.detachLockNodes = nil
  while true do
    v5 = string.format("vehicle.cylindered.movingParts.movingPart(%d)", v4)
    v6 = v6:hasProperty(v5)
    if not v6 then
      break
    end
    v7 = self:loadMovingPartFromXML(self.xmlFile, v5, {})
    if v7 then
      if v3[{}.node] == nil then
        v3[{}.node] = {}
      end
      if v2.nodesToMovingParts[v6.node] == nil then
        table.insert(v3[v6.node], v6)
        self:loadDependentParts(self.xmlFile, v5, v6)
        self:loadDependentComponentJoints(self.xmlFile, v5, v6)
        self:loadCopyLocalDirectionParts(self.xmlFile, v5, v6)
        self:loadExtraDependentParts(self.xmlFile, v5, v6)
        self:loadDependentAnimations(self.xmlFile, v5, v6)
        v6.key = v5
        table.insert(v2.movingParts, v6)
        if v6.isActiveDirty then
          table.insert(v2.activeDirtyMovingParts, v6)
        end
        v2.nodesToMovingParts[v6.node] = v6
      else
        v10 = getName(v6.node)
        Logging.xmlWarning(...)
      end
    end
  end
  if Cylindered.DIRTY_COLLISION_UPDATE_CHECK then
    v2.realActiveDirtyParts = {}
    -- TODO: structure LOP_FORNPREP (pc 198, target 215)
    if v2.movingParts[1].isActiveDirty and v2.movingParts[1].directionThreshold == 0.0001 then
      function(self, savegame)
        table.insert(savegame, self)
        if self.dependentPartNodes ~= nil then
          -- TODO: structure LOP_FORNPREP (pc 16, target 38)
          if u0.nodesToMovingParts[self.dependentPartNodes[1]] ~= nil then
            table.insert(savegame, u0.nodesToMovingParts[self.dependentPartNodes[1]])
            u1(u0.nodesToMovingParts[self.dependentPartNodes[1]], savegame)
          end
          -- TODO: structure LOP_FORNLOOP (pc 37, target 17)
        end
      end(v2.movingParts[1], v2.realActiveDirtyParts)
    end
    -- TODO: structure LOP_FORNLOOP (pc 214, target 199)
    -- TODO: structure LOP_FORNPREP (pc 220, target 238)
    local v15 = getName(v2.realActiveDirtyParts[1].node)
    I3DUtil.checkForChildCollisions(...)
    -- TODO: structure LOP_FORNLOOP (pc 237, target 221)
  end
  v5 = v5:getValue("vehicle.cylindered.movingTools#powerConsumingActiveTimeOffset", 5)
  v2.powerConsumingActiveTimeOffset = v5
  v2.powerConsumingTimer = -1
  for v8, v9 in pairs(v2.movingParts) do
    self:resolveDependentPartData(v9.dependentPartData, v3)
  end
  for v10, v11 in ipairs(v2.movingParts) do
    v5(v11, v6)
  end
  v2.movingParts = v6
  v2.controlGroups = {}
  v2.controlGroupMapping = {}
  v2.currentControlGroupIndex = 1
  v2.controlGroupNames = {}
  while true do
    v7 = string.format("vehicle.cylindered.movingTools.controlGroups.controlGroup(%d)", v4)
    v8 = v8:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = v8:getValue(v7 .. "#name", "", self.customEnvironment, false)
    if v8 ~= nil then
      table.insert(v2.controlGroupNames, v8)
    end
  end
  v2.nodesToMovingTools = {}
  v2.movingTools = {}
  while true do
    v7 = string.format("vehicle.cylindered.movingTools.movingTool(%d)", v4)
    v8 = v8:hasProperty(v7)
    if not v8 then
      break
    end
    v9 = self:loadMovingToolFromXML(self.xmlFile, v7, {})
    if v9 then
      if v3[{}.node] == nil then
        v3[{}.node] = {}
      end
      if v2.nodesToMovingTools[v8.node] == nil then
        table.insert(v3[v8.node], v8)
        self:loadDependentMovingTools(self.xmlFile, v7, v8)
        self:loadDependentParts(self.xmlFile, v7, v8)
        self:loadDependentComponentJoints(self.xmlFile, v7, v8)
        self:loadExtraDependentParts(self.xmlFile, v7, v8)
        self:loadDependentAnimations(self.xmlFile, v7, v8)
        v8.isActive = true
        v8.key = v7
        table.insert(v2.movingTools, v8)
        v2.nodesToMovingTools[v8.node] = v8
      else
        v12 = getName(v8.node)
        Logging.xmlWarning(...)
      end
    end
  end
  table.sort(v2.controlGroups, function(self, savegame)
    if self >= savegame then
    end
    return true
  end)
  for v11, v12 in ipairs(v2.controlGroups) do
    local v13 = self:addSubselection(v12)
    v2.controlGroupMapping[v13] = v12
  end
  for v11, v12 in pairs(v2.movingTools) do
    self:resolveDependentPartData(v12.dependentPartData, v3)
    -- TODO: structure LOP_FORNPREP (pc 497, target 529)
    if v2.nodesToMovingTools[v12.dependentMovingTools[#v12.dependentMovingTools].node] ~= nil then
      v12.dependentMovingTools[#v12.dependentMovingTools].movingTool = v2.nodesToMovingTools[v12.dependentMovingTools[#v12.dependentMovingTools].node]
    else
      local v21 = getName(v12.dependentMovingTools[#v12.dependentMovingTools].node)
      Logging.xmlWarning(...)
      table.remove(v12.dependentMovingTools, #v12.dependentMovingTools)
    end
    -- TODO: structure LOP_FORNLOOP (pc 528, target 498)
  end
  v8 = v8:hasProperty("vehicle.cylindered.movingTools.easyArmControl")
  if v8 then
    v9 = self:loadEasyArmControlFromXML(self.xmlFile, "vehicle.cylindered.movingTools.easyArmControl", {})
    if v9 then
      v2.easyArmControl = {}
    end
  end
  v2.samples = {}
  v2.actionSamples = {}
  if self.isClient then
    v9 = v9:loadSampleFromXML(self.xmlFile, "vehicle.cylindered.sounds", "hydraulic", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.hydraulic = v9
    v2.isHydraulicSamplePlaying = false
    v2.nodesToSamples = {}
    v2.activeSamples = {}
    v2.endingSamples = {}
    v2.endingSamplesBySample = {}
    v2.startingSamples = {}
    v2.startingSamplesBySample = {}
    while true do
      v8 = string.format("actionSound(%d)", v4)
      v10 = v10:hasProperty("vehicle.cylindered.sounds." .. v8)
      if not v10 then
        break
      end
      v10 = v10:loadSampleFromXML(self.xmlFile, "vehicle.cylindered.sounds", v8, self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
      if v10 ~= nil then
        v11 = v11:getValue("vehicle.cylindered.sounds." .. v8 .. "#actionNames")
        v13 = v11:trim()
        v12 = string.split(v13, " ")
        v13 = v13:getValue("vehicle.cylindered.sounds." .. v8 .. "#nodes")
        v14 = string.split(v13, " ")
        -- TODO: structure LOP_FORNPREP (pc 679, target 690)
        v18 = I3DUtil.indexToObject(self.components, v14[1], self.i3dMappings)
        v14[1] = v18
        -- TODO: structure LOP_FORNLOOP (pc 689, target 680)
        -- TODO: structure LOP_FORNPREP (pc 693, target 787)
        v20 = v12[1]:upper()
        if Cylindered["SOUND_ACTION_" .. v20] ~= nil then
          -- TODO: structure LOP_FORNPREP (pc 708, target 786)
          if v14[1] ~= nil then
            if v2.nodesToSamples[v14[1]] == nil then
              v2.nodesToSamples[v14[1]] = {}
            end
            if v2.nodesToSamples[v23][v19] == nil then
              v2.nodesToSamples[v23][v19] = {}
            end
            v24 = self:getMovingPartByNode(v23)
            if not v24 then
              v24 = self:getTranslatingPartByNode(v23)
              if not v24 then
                v24 = self:getMovingToolByNode(v23)
              end
            end
            if v24 ~= nil then
              v24.samplesByAction = v2.nodesToSamples[v23]
            else
              v28 = getName(v23)
              Logging.xmlWarning(...)
            end
            table.insert(v2.nodesToSamples[v23][v19], v10)
          end
          -- TODO: structure LOP_FORNLOOP (pc 776, target 709)
        else
          Logging.xmlWarning(self.xmlFile, "Unable to find sound action '%s' for sound '%s'", "SOUND_ACTION_" .. v20, "vehicle.cylindered.sounds." .. v8)
        end
        -- TODO: structure LOP_FORNLOOP (pc 786, target 694)
        v15 = v15:getValue(v9 .. ".pitch#dropOffFactor", 1)
        v10.dropOffFactor = v15
        v16 = v16:getValue(v9 .. ".pitch#dropOffTime", 0)
        v10.dropOffTime = v16 * 1000
        v10.actionNames = v12
        v10.nodes = v14
        table.insert(v2.actionSamples, v10)
      end
    end
  end
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.cylindered.dashboards", {valueTypeToLoad = "movingTool", valueObject = self, valueFunc = Cylindered.getMovingToolDashboardState, minFunc = 0, maxFunc = 1, additionalAttributesFunc = Cylindered.movingToolDashboardAttributes, idleValue = 0.5})
  end
  v8 = self:getNextDirtyFlag()
  v2.cylinderedDirtyFlag = v8
  v8 = self:getNextDirtyFlag()
  v2.cylinderedInputDirtyFlag = v8
  self:registerVehicleSetting(GameSettings.SETTING.EASY_ARM_CONTROL, true)
  v2.isLoading = true
end
function Cylindered:onPostLoad(savegame)
  for v6, v7 in pairs(self.spec_cylindered.movingTools) do
    local v8 = self:getIsMovingToolActive(v7)
    if not v8 then
      continue
    end
    if v7.startRot ~= nil then
      v7.curRot[v7.rotationAxis] = v7.startRot
      local v10 = unpack(v7.curRot)
      setRotation(...)
    end
    if v7.startTrans ~= nil then
      v7.curTrans[v7.translationAxis] = v7.startTrans
      v10 = unpack(v7.curTrans)
      setTranslation(...)
    end
    if v7.animStartTime ~= nil then
      self:setAnimationTime(v7.animName, v7.animStartTime, nil, false)
    end
    if v7.delayedNode ~= nil then
      self:setDelayedData(v7, true)
    end
    if not v7.isIntitialDirty then
      continue
    end
    Cylindered.setDirty(self, v7)
  end
  for v6, v7 in pairs(v2.movingParts) do
    self:loadDependentAttacherJoints(self.xmlFile, v7.key, v7)
    self:loadDependentWheels(self.xmlFile, v7.key, v7)
  end
  for v6, v7 in pairs(v2.movingTools) do
    self:loadDependentAttacherJoints(self.xmlFile, v7.key, v7)
    self:loadDependentWheels(self.xmlFile, v7.key, v7)
  end
  v3 = self:allowLoadMovingToolStates()
  if v3 and savegame ~= nil and not savegame.resetVehicles then
    for v7, v8 in ipairs(v2.movingTools) do
      if v8.saving then
        local v9 = self:getIsMovingToolActive(v8)
        if v9 then
          v9 = string.format("%s.cylindered.movingTool(%d)", savegame.key, v3)
          if v8.transSpeed ~= nil then
            local v11 = v11:getValue(v9 .. "#translation")
            if v11 ~= nil then
              if v8.transMax ~= nil then
                local v12 = math.min(v11, v8.transMax)
              end
              if v8.transMin ~= nil then
                v12 = math.max(v11, v8.transMin)
              end
            end
            if v11 ~= nil then
              v12 = math.abs(v11 - v8.curTrans[v8.translationAxis])
              if 0.0001 < v12 then
                local v13 = getTranslation(v8.node)
                v8.curTrans = {[v8.translationAxis] = v11}
                local v14 = unpack(v8.curTrans)
                setTranslation(...)
              end
            end
          end
          if v8.rotSpeed ~= nil then
            v11 = v11:getValue(v9 .. "#rotation")
            if v11 ~= nil then
              if v8.rotMax ~= nil then
                v12 = math.min(v11, v8.rotMax)
              end
              if v8.rotMin ~= nil then
                v12 = math.max(v11, v8.rotMin)
              end
            end
            if v11 ~= nil then
              v12 = math.abs(v11 - v8.curRot[v8.rotationAxis])
              if 0.0001 < v12 then
                v13 = getRotation(v8.node)
                v8.curRot = {[v8.rotationAxis] = v11}
                v14 = unpack(v8.curRot)
                setRotation(...)
              end
            end
          end
          if v8.animSpeed ~= nil then
            v11 = v11:getValue(v9 .. "#animationTime")
            if v11 ~= nil then
              if v8.animMinTime ~= nil then
                v12 = math.max(v11, v8.animMinTime)
              end
              if v8.animMaxTime ~= nil then
                v12 = math.min(v11, v8.animMaxTime)
              end
              v8.curAnimTime = v11
              self:setAnimationTime(v8.animName, v11, true, false)
            end
          end
          if v10 then
            Cylindered.setDirty(self, v8)
          end
          if v8.delayedNode ~= nil then
            self:setDelayedData(v8, true)
          end
        end
      end
      for v12, v13 in pairs(v8.dependentMovingTools) do
        Cylindered.updateRotationBasedLimits(self, v8, v13)
      end
    end
  end
  self:updateEasyControl(9999, true)
  self:updateCylinderedInitial(false)
  if 0 >= #v2.movingTools then
  end
  if 0 >= #v2.movingParts then
  end
  if not v3 then
    SpecializationUtil.removeEventListener(self, "onReadStream", Cylindered)
    SpecializationUtil.removeEventListener(self, "onWriteStream", Cylindered)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", Cylindered)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", Cylindered)
    SpecializationUtil.removeEventListener(self, "onUpdate", Cylindered)
    if not true then
      SpecializationUtil.removeEventListener(self, "onUpdateTick", Cylindered)
      SpecializationUtil.removeEventListener(self, "onPostUpdate", Cylindered)
      SpecializationUtil.removeEventListener(self, "onPostUpdateTick", Cylindered)
    end
  end
  if self.isClient then
    -- if v3 then goto L524 end
  end
  SpecializationUtil.removeEventListener(self, "onDraw", Cylindered)
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", Cylindered)
  if g_isDevelopmentVersion then
    -- TODO: structure LOP_FORNPREP (pc 535, target 552)
    if v2.movingParts[1].isActiveDirty and v2.movingParts[1].maxUpdateDistance ~= math.huge then
      function(self)
        I3DUtil.interateRecursively(self.node, function(self, savegame)
          v2:checkMovingPartDirtyUpdateNode(self, u1)
        end, math.huge)
        if self.dependentPartData ~= nil then
          for v4, v5 in pairs(self.dependentPartData) do
            if not (v5.part ~= nil) then
              continue
            end
            u1(v5.part)
          end
        end
      end(v2.movingParts[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 551, target 536)
  end
end
function Cylindered:onLoadFinished(savegame)
  self.spec_cylindered.isLoading = false
  -- TODO: structure LOP_FORNPREP (pc 10, target 29)
  if self.spec_cylindered.movingTools[1].delayedHistoryIndex ~= nil and 0 < self.spec_cylindered.movingTools[1].delayedHistoryIndex then
    self:updateDelayedTool(self.spec_cylindered.movingTools[1], true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 28, target 11)
end
function Cylindered:onDelete()
  v2:deleteSamples(self.spec_cylindered.samples)
  v2:deleteSamples(self.spec_cylindered.actionSamples)
  if self.spec_cylindered.movingTools ~= nil then
    for v5, v6 in pairs(self.spec_cylindered.movingTools) do
      if not (v6.icon ~= nil) then
        continue
      end
      v7:delete()
      v6.icon = nil
    end
  end
end
function Cylindered:saveToXMLFile(xmlFile, key, usedModNames)
  for v9, v10 in ipairs(self.spec_cylindered.movingTools) do
    if not v10.saving then
      continue
    end
    local v11 = string.format("%s.movingTool(%d)", key, v5)
    if v10.transSpeed ~= nil then
      xmlFile:setValue(v11 .. "#translation", v10.curTrans[v10.translationAxis])
    end
    if v10.rotSpeed ~= nil then
      xmlFile:setValue(v11 .. "#rotation", v10.curRot[v10.rotationAxis])
    end
    if v10.animSpeed ~= nil then
      xmlFile:setValue(v11 .. "#animationTime", v10.curAnimTime)
    end
  end
end
function Cylindered:onReadStream(streamId, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      -- TODO: structure LOP_FORNPREP (pc 16, target 141)
      if self.spec_cylindered.movingTools[1].dirtyFlag ~= nil then
        v8:reset()
        if self.spec_cylindered.movingTools[1].transSpeed ~= nil then
          local v8 = streamReadFloat32(streamId)
          self.spec_cylindered.movingTools[1].curTrans[self.spec_cylindered.movingTools[1].translationAxis] = v8
          local v11 = unpack(self.spec_cylindered.movingTools[1].curTrans)
          setTranslation(...)
          v9:setValue(self.spec_cylindered.movingTools[1].curTrans[self.spec_cylindered.movingTools[1].translationAxis])
        end
        if v7.rotSpeed ~= nil then
          v8 = streamReadFloat32(streamId)
          v7.curRot[v7.rotationAxis] = v8
          v11 = unpack(v7.curRot)
          setRotation(...)
          v9:setAngle(v8)
        end
        if v7.animSpeed ~= nil then
          v8 = streamReadFloat32(streamId)
          v7.curAnimTime = v8
          self:setAnimationTime(v7.animName, v7.curAnimTime, nil, false)
          v9:setValue(v8)
        end
        if v7.delayedNode ~= nil then
          self:setDelayedData(v7, true)
        end
        Cylindered.setDirty(self, v7)
      end
      -- TODO: structure LOP_FORNLOOP (pc 140, target 17)
    end
  end
end
function Cylindered:onWriteStream(streamId, connection)
  local v4 = connection:getIsServer()
  if not v4 then
    local v6 = self:allowLoadMovingToolStates()
    v4 = streamWriteBool(...)
    if v4 then
      -- TODO: structure LOP_FORNPREP (pc 19, target 64)
      if self.spec_cylindered.movingTools[1].dirtyFlag ~= nil then
        if self.spec_cylindered.movingTools[1].transSpeed ~= nil then
          streamWriteFloat32(streamId, self.spec_cylindered.movingTools[1].curTrans[self.spec_cylindered.movingTools[1].translationAxis])
        end
        if v7.rotSpeed ~= nil then
          streamWriteFloat32(streamId, v7.curRot[v7.rotationAxis])
        end
        if v7.animSpeed ~= nil then
          streamWriteFloat32(streamId, v7.curAnimTime)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 63, target 20)
    end
  end
end
function Cylindered:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if not v5 then
    v5 = streamReadBool(streamId)
    -- if not v5 then goto L215 end
    for v8, v9 in ipairs(self.spec_cylindered.movingTools) do
      if not (v9.axisActionIndex ~= nil) then
        continue
      end
      local v14 = streamReadUIntN(streamId, 12)
      v9.move = (v14 / 4095 * 2 - 1) * 5
      local v10 = math.abs(v9.move)
      if not (v10 < 0.01) then
        continue
      end
      v9.move = 0
    end
    return
  end
  v5 = streamReadBool(streamId)
  if v5 then
    for v8, v9 in ipairs(v4.movingTools) do
      if not (v9.dirtyFlag ~= nil) then
        continue
      end
      v10 = streamReadBool(streamId)
      if not v10 then
        continue
      end
      v10:startNewPhaseNetwork()
      if v9.transSpeed ~= nil then
        v10 = streamReadFloat32(streamId)
        local v11 = math.abs(v10 - v9.curTrans[v9.translationAxis])
        if 0.0001 < v11 then
          v11:setTargetValue(v10)
        end
      end
      if v9.rotSpeed ~= nil then
        if v9.rotMin ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x80000000 -> L120
        end
        v11 = NetworkUtil.readCompressedAngle(streamId)
        -- goto L160  (LOP_JUMP +40)
        if v9.syncMinRotLimits then
          v11 = streamReadFloat32(streamId)
          v9.rotMin = v11
        end
        if v9.syncMaxRotLimits then
          v11 = streamReadFloat32(streamId)
          v9.rotMax = v11
        end
        v11:setMinMax(v9.rotMin, v9.rotMax)
        v11 = NetworkUtil.readCompressedRange(streamId, v9.rotMin, v9.rotMax, v9.rotSendNumBits)
        v11 = math.abs(v11 - v9.curRot[v9.rotationAxis])
        if 0.0001 < v11 then
          v11:setTargetAngle(v11)
        end
      end
      if not (v9.animSpeed ~= nil) then
        continue
      end
      v10 = NetworkUtil.readCompressedRange(streamId, v9.animMinTime, v9.animMaxTime, v9.animSendNumBits)
      v11 = math.abs(v10 - v9.curAnimTime)
      if not (0.0001 < v11) then
        continue
      end
      v11:setTargetValue(v10)
    end
  end
end
function Cylindered:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if v5 then
    local v8 = bitAND(dirtyMask, self.spec_cylindered.cylinderedInputDirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    -- if not v5 then goto L177 end
    for v8, v9 in ipairs(v4.movingTools) do
      if not (v9.axisActionIndex ~= nil) then
        continue
      end
      local v13 = MathUtil.clamp(v9.moveToSend / 5, -1, 1)
      streamWriteUIntN(streamId, (v13 + 1) / 2 * 4095, 12)
    end
    return
  end
  v8 = bitAND(dirtyMask, v4.cylinderedDirtyFlag)
  if v8 == 0 then
  end
  v5 = v5(v6, true)
  if v5 then
    for v8, v9 in ipairs(v4.movingTools) do
      if not (v9.dirtyFlag ~= nil) then
        continue
      end
      v13 = bitAND(dirtyMask, v9.dirtyFlag)
      if v13 ~= 0 then
        local v12 = self:getIsMovingToolActive(v9)
      end
      local v10 = v10(v11, v12)
      if not v10 then
        continue
      end
      if v9.transSpeed ~= nil then
        streamWriteFloat32(streamId, v9.curTrans[v9.translationAxis])
      end
      if v9.rotSpeed ~= nil then
        if v9.rotMin ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x80000000 -> L130
        end
        NetworkUtil.writeCompressedAngle(streamId, v10)
        -- goto L159  (LOP_JUMP +29)
        if v9.syncMinRotLimits then
          streamWriteFloat32(streamId, v9.rotMin)
        end
        if v9.syncMaxRotLimits then
          streamWriteFloat32(streamId, v9.rotMax)
        end
        NetworkUtil.writeCompressedRange(streamId, v10, v9.rotMin, v9.rotMax, v9.rotSendNumBits)
      end
      if not (v9.animSpeed ~= nil) then
        continue
      end
      NetworkUtil.writeCompressedRange(streamId, v9.curAnimTime, v9.animMinTime, v9.animMaxTime, v9.animSendNumBits)
    end
  end
end
function Cylindered:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self.spec_cylindered.movingToolNeedsSound = false
  self.spec_cylindered.movingPartNeedsSound = false
  self:updateEasyControl(dt)
  if self.isServer then
    -- TODO: structure LOP_FORNPREP (pc 20, target 632)
    local v13 = self:getMovingToolMoveValue(self.spec_cylindered.movingTools[1])
    self.spec_cylindered.movingTools[1].externalMove = 0
    local v14 = math.abs(v13)
    if 0 < v14 then
      if self.spec_cylindered.movingTools[1].rotSpeed ~= nil and self.spec_cylindered.movingTools[1].rotAcceleration ~= nil then
        v14 = math.abs(v13 * self.spec_cylindered.movingTools[1].rotSpeed - self.spec_cylindered.movingTools[1].lastRotSpeed)
        if self.spec_cylindered.movingTools[1].rotAcceleration * dt <= v14 then
          if self.spec_cylindered.movingTools[1].lastRotSpeed < v13 * self.spec_cylindered.movingTools[1].rotSpeed then
          else
          end
        end
      end
      if rotLimitChanged.transSpeed ~= nil and rotLimitChanged.transAcceleration ~= nil then
        v14 = math.abs(v13 * rotLimitChanged.transSpeed - rotLimitChanged.lastTransSpeed)
        if rotLimitChanged.transAcceleration * dt <= v14 then
          if rotLimitChanged.lastTransSpeed < v13 * rotLimitChanged.transSpeed then
          else
          end
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L271
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L271
      v14 = math.abs(v13 * rotLimitChanged.animSpeed - rotLimitChanged.lastAnimSpeed)
      -- if v9.animAcceleration * v1 > v14 then goto L271 end
      if rotLimitChanged.lastAnimSpeed < v13 * rotLimitChanged.animSpeed then
        -- goto L271  (LOP_JUMP +115)
      end
    else
      if self.spec_cylindered.movingTools[1].rotAcceleration ~= nil then
        if self.spec_cylindered.movingTools[1].lastRotSpeed < 0 then
          v14 = math.min(self.spec_cylindered.movingTools[1].lastRotSpeed + self.spec_cylindered.movingTools[1].rotAcceleration * dt, 0)
        else
          v14 = math.max(self.spec_cylindered.movingTools[1].lastRotSpeed - self.spec_cylindered.movingTools[1].rotAcceleration * dt, 0)
        end
      end
      if rotLimitChanged.transAcceleration ~= nil then
        if rotLimitChanged.lastTransSpeed < 0 then
          v14 = math.min(rotLimitChanged.lastTransSpeed + rotLimitChanged.transAcceleration * dt, 0)
        else
          v14 = math.max(rotLimitChanged.lastTransSpeed - rotLimitChanged.transAcceleration * dt, 0)
        end
      end
      if rotLimitChanged.animAcceleration ~= nil then
        if rotLimitChanged.lastAnimSpeed < 0 then
          v14 = math.min(rotLimitChanged.lastAnimSpeed + rotLimitChanged.animAcceleration * dt, 0)
        else
          v14 = math.max(rotLimitChanged.lastAnimSpeed - rotLimitChanged.animAcceleration * dt, 0)
        end
      end
    end
    if v10 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R10 aux=0x14 -> L289
      if not false then
        local v15 = Cylindered.setToolRotation(self, rotLimitChanged, v10, dt)
      end
    else
      rotLimitChanged.lastRotSpeed = 0
    end
    if v11 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R11 aux=0x14 -> L309
      if not v14 then
        v15 = Cylindered.setToolTranslation(self, rotLimitChanged, v11, dt)
      end
    else
      rotLimitChanged.lastTransSpeed = 0
    end
    if v12 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R12 aux=0x14 -> L329
      if not v14 then
        v15 = Cylindered.setToolAnimation(self, rotLimitChanged, v12, dt)
      end
    else
      rotLimitChanged.lastAnimSpeed = 0
    end
    for v18, v19 in pairs(rotLimitChanged.dependentMovingTools) do
      if v19.speedScale ~= nil then
        if v19.requiresMovement and not v14 then
        end
        if v20 then
          v19.movingTool.externalMove = v19.movingTool.externalMove + v19.speedScale * rotLimitChanged.move
        end
      end
      Cylindered.updateRotationBasedLimits(self, rotLimitChanged, v19)
      self:updateDependentToolLimits(rotLimitChanged, v19)
    end
    if v14 then
      if rotLimitChanged.playSound then
        v5.movingToolNeedsSound = true
      end
      Cylindered.setDirty(self, rotLimitChanged)
      rotLimitChanged.networkPositionIsDirty = true
      self:raiseDirtyFlags(rotLimitChanged.dirtyFlag)
      self:raiseDirtyFlags(v5.cylinderedDirtyFlag)
      rotLimitChanged.networkDirtyNextFrame = true
      -- if not v9.isConsumingPower then goto L432 end
      v5.powerConsumingTimer = v5.powerConsumingActiveTimeOffset
    elseif rotLimitChanged.networkDirtyNextFrame then
      self:raiseDirtyFlags(rotLimitChanged.dirtyFlag)
      self:raiseDirtyFlags(v5.cylinderedDirtyFlag)
      rotLimitChanged.networkDirtyNextFrame = nil
    end
    -- TODO: structure LOP_FORNLOOP (pc 432, target 21)
  else
    -- TODO: structure LOP_FORNPREP (pc 439, target 632)
    v10:update(dt)
    local v10 = v10:getAlpha()
    local v12 = self:getIsMovingToolActive(self.spec_cylindered.movingTools[1])
    if v12 then
      if self.spec_cylindered.movingTools[1].rotSpeed ~= nil then
        v12 = v12:getInterpolatedValue(v10)
        v13 = math.abs(v12 - self.spec_cylindered.movingTools[1].curRot[self.spec_cylindered.movingTools[1].rotationAxis])
        if 0.0001 < v13 then
          self.spec_cylindered.movingTools[1].curRot[self.spec_cylindered.movingTools[1].rotationAxis] = v12
          setRotation(self.spec_cylindered.movingTools[1].node, self.spec_cylindered.movingTools[1].curRot[1], self.spec_cylindered.movingTools[1].curRot[2], self.spec_cylindered.movingTools[1].curRot[3])
        end
      end
      if rotLimitChanged.transSpeed ~= nil then
        v12 = v12:getInterpolatedValue(v10)
        v13 = math.abs(v12 - rotLimitChanged.curTrans[rotLimitChanged.translationAxis])
        if 0.0001 < v13 then
          rotLimitChanged.curTrans[rotLimitChanged.translationAxis] = v12
          setTranslation(rotLimitChanged.node, rotLimitChanged.curTrans[1], rotLimitChanged.curTrans[2], rotLimitChanged.curTrans[3])
        end
      end
      if rotLimitChanged.animSpeed ~= nil then
        v12 = v12:getInterpolatedValue(v10)
        v13 = math.abs(v12 - rotLimitChanged.curAnimTime)
        if 0.0001 < v13 then
          rotLimitChanged.curAnimTime = v12
          self:setAnimationTime(rotLimitChanged.animName, v12, nil, true)
        end
      end
      if v11 then
        Cylindered.setDirty(self, rotLimitChanged)
      end
    end
    for v15, v16 in pairs(rotLimitChanged.dependentMovingTools) do
      if v16.movingTool.syncMinRotLimits and not not v16.movingTool.syncMaxRotLimits then
        continue
      end
      Cylindered.updateRotationBasedLimits(self, rotLimitChanged, v16)
      self:updateDependentToolLimits(rotLimitChanged, v16)
    end
    v12 = v12:isInterpolating()
    if v12 then
      self:raiseActive()
    end
    -- TODO: structure LOP_FORNLOOP (pc 631, target 440)
  end
  -- TODO: structure LOP_FORNPREP (pc 637, target 669)
  if v5.movingTools[1].delayedHistoryIndex ~= nil and 0 < v5.movingTools[1].delayedHistoryIndex then
    self:updateDelayedTool(v5.movingTools[1])
  end
  if rotLimitChanged.smoothedMove ~= 0 and rotLimitChanged.lastInputTime + 50 < g_time then
    rotLimitChanged.smoothedMove = 0
  end
  -- TODO: structure LOP_FORNLOOP (pc 668, target 638)
  if 0 < v5.powerConsumingTimer then
    v5.powerConsumingTimer = v5.powerConsumingTimer - dt
  end
  local origin = next(v5.activeSamples)
  if origin ~= nil then
    self:raiseActive()
  end
end
function Cylindered.setDelayedData(v0, dt, isActiveForInput)
  local isActiveForInputIgnoreSelection, isSelected, v5 = getTranslation(dt.node)
  local origin, v7, v8 = getRotation(dt.node)
  dt.delayedHistroyData[dt.delayedFrames] = {rot = {origin, v7, v8}, trans = {isActiveForInputIgnoreSelection, isSelected, v5}}
  if isActiveForInput then
    -- TODO: structure LOP_FORNPREP (pc 40, target 50)
    dt.delayedHistroyData[1] = dt.delayedHistroyData[dt.delayedFrames]
    -- TODO: structure LOP_FORNLOOP (pc 49, target 41)
  end
  dt.delayedHistoryIndex = dt.delayedFrames
end
function Cylindered:updateDelayedTool(tool, forceLastPosition)
  if forceLastPosition ~= nil and forceLastPosition then
    -- TODO: structure LOP_FORNPREP (pc 10, target 20)
    tool.delayedHistroyData[1] = tool.delayedHistroyData[tool.delayedFrames]
    -- TODO: structure LOP_FORNLOOP (pc 19, target 11)
  end
  -- TODO: structure LOP_FORNPREP (pc 28, target 37)
  tool.delayedHistroyData[1] = tool.delayedHistroyData[1 + 1]
  -- TODO: structure LOP_FORNLOOP (pc 36, target 29)
  local v7 = unpack(tool.delayedHistroyData[1].rot)
  setRotation(...)
  v7 = unpack(tool.delayedHistroyData[1].trans)
  setTranslation(...)
  tool.delayedHistoryIndex = tool.delayedHistoryIndex - 1
  if isActiveForInputIgnoreSelection.nodesToMovingParts[tool.delayedNode] ~= nil then
    Cylindered.setDirty(self, isActiveForInputIgnoreSelection.nodesToMovingParts[tool.delayedNode])
  end
  if isActiveForInputIgnoreSelection.nodesToMovingTools[tool.delayedNode] ~= nil then
    Cylindered.setDirty(self, origin)
  end
end
function Cylindered:loadEasyArmControlFromXML(xmlFile, key, easyArmControl)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".xRotationNodes#maxDistance")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".xRotationNodes#transRotRatio")
  local isSelected = xmlFile:getValue(key .. "#rootNode", nil, self.components, self.i3dMappings)
  easyArmControl.rootNode = isSelected
  isSelected = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  easyArmControl.targetNodeY = isSelected
  isSelected = xmlFile:getValue(key .. "#targetNodeZ", easyArmControl.targetNodeY, self.components, self.i3dMappings)
  easyArmControl.targetNodeZ = isSelected
  easyArmControl.state = false
  if easyArmControl.targetNodeZ ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L615
    isSelected = self:getMovingToolByNode(easyArmControl.targetNodeY)
    local targetZTool = self:getMovingToolByNode(easyArmControl.targetNodeZ)
    if isSelected ~= nil and targetZTool ~= nil then
      easyArmControl.targetNode = easyArmControl.targetNodeZ
      local origin = getParent(easyArmControl.targetNodeY)
      if origin == easyArmControl.targetNodeZ then
        easyArmControl.targetNode = easyArmControl.targetNodeY
      end
      origin = xmlFile:getValue(key .. "#refNode", nil, self.components, self.i3dMappings)
      easyArmControl.targetRefNode = origin
      local v7 = getTranslation(easyArmControl.targetNodeY)
      easyArmControl.lastValidPositionY = {}
      v7 = getTranslation(easyArmControl.targetNodeZ)
      easyArmControl.lastValidPositionZ = {}
      v7 = xmlFile:getValue(key .. ".targetMovement#speed", 1)
      easyArmControl.moveSpeed = v7 / 1000
      v7 = xmlFile:getValue(key .. ".targetMovement#acceleration", 50)
      easyArmControl.moveAcceleration = v7 / 1000000
      easyArmControl.lastSpeedY = 0
      easyArmControl.lastSpeedZ = 0
      origin = xmlFile:getValue(key .. ".zTranslationNodes#minMoveRatio", 0.2)
      easyArmControl.minTransMoveRatio = origin
      origin = xmlFile:getValue(key .. ".zTranslationNodes#maxMoveRatio", 0.8)
      easyArmControl.maxTransMoveRatio = origin
      origin = xmlFile:getValue(key .. ".zTranslationNodes#moveRatioMinDir", 0)
      easyArmControl.transMoveRatioMinDir = origin
      origin = xmlFile:getValue(key .. ".zTranslationNodes#moveRatioMaxDir", 1)
      easyArmControl.transMoveRatioMaxDir = origin
      origin = xmlFile:getValue(key .. ".zTranslationNodes#allowNegativeTrans", false)
      easyArmControl.allowNegativeTrans = origin
      origin = xmlFile:getValue(key .. ".zTranslationNodes#minNegativeTrans", 0)
      easyArmControl.minNegativeTrans = origin
      easyArmControl.forcedTransMove = nil
      easyArmControl.zTranslationNodes = {}
      xmlFile:iterate(key .. ".zTranslationNodes.zTranslationNode", function(self, xmlFile)
        local key = key:getValue(xmlFile .. "#node", nil, u1.components, u1.i3dMappings)
        if key ~= nil then
          local easyArmControl = easyArmControl:getMovingToolByNode(key)
          if easyArmControl ~= nil then
            local isSelected = math.abs(easyArmControl.transMin - easyArmControl.transMax)
            u2 = u2 + isSelected
            easyArmControl.easyArmControlActive = false
            local rotLimitChanged = getTranslation(key)
            table.insert(u3.zTranslationNodes, {node = key, movingTool = easyArmControl, maxDistance = isSelected, transFactor = 0, startTranslation = {}})
          end
        end
      end)
      for v10, v11 in ipairs(easyArmControl.zTranslationNodes) do
        v11.transFactor = v11.maxDistance / origin
      end
      easyArmControl.xRotationNodes = {}
      -- TODO: structure LOP_FORNPREP (pc 250, target 322)
      v10 = string.format("%s.xRotationNodes.xRotationNode%d", key, 1)
      v11 = xmlFile:hasProperty(v10)
      if not v11 then
        Logging.xmlWarning(xmlFile, "Missing second xRotation node for easy control!")
        return false
      end
      XMLUtil.checkDeprecatedXMLElements(xmlFile, v10 .. "#refNode")
      v11 = xmlFile:getValue(v10 .. "#node", nil, self.components, self.i3dMappings)
      if v11 ~= nil then
        local v12 = self:getMovingToolByNode(v11)
        if v12 ~= nil then
          v12.easyArmControlActive = false
          local v17 = getRotation(v11)
          table.insert(easyArmControl.xRotationNodes, {node = v11, movingTool = v12, startRotation = {}})
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 321, target 251)
      if #easyArmControl.xRotationNodes ~= 2 then
        Logging.xmlWarning(xmlFile, "Easy arm control requires two x rotation nodes! Only %d given. (%s)", #easyArmControl.xRotationNodes, key)
        return false
      end
      if easyArmControl.targetRefNode ~= nil then
        v7, v8, rotLimitChanged = localToLocal(easyArmControl.targetRefNode, easyArmControl.xRotationNodes[2].node, 0, 0, 0)
        v10 = math.abs(v7)
        if 0.0001 >= v10 then
          v10 = math.abs(v8)
          -- if 0.0001 >= v10 then goto L385 end
        end
        Logging.xmlWarning(xmlFile, "Invalid position of '%s'. Offset to second xRotation node is not 0 on X or Y axis (x: %f y: %f)", key .. "#refNode", v7, v8)
        return false
      end
      v7, v8, rotLimitChanged = localToLocal(easyArmControl.xRotationNodes[2].node, easyArmControl.xRotationNodes[1].node, 0, 0, 0)
      v10 = math.abs(v7)
      if 0.0001 >= v10 then
        v10 = math.abs(v8)
        -- if 0.0001 >= v10 then goto L427 end
      end
      Logging.xmlWarning(xmlFile, "Invalid position of xRotationNode2. Offset to second xRotationNode1 is not 0 on X or Y axis (x: %f y: %f)", v7, v8)
      return false
      v10 = calcDistanceFrom(easyArmControl.rootNode, easyArmControl.xRotationNodes[1].node)
      if 0.05 < v10 then
        Logging.xmlWarning(xmlFile, "Distance between easyArmControl rootNode and xRotationNode1 is to big (%.2f). They should be at the same position.", v10)
        return false
      end
      v11 = xmlFile:getValue(key .. "#maxTotalDistance")
      easyArmControl.maxTotalDistance = v11
      if easyArmControl.maxTotalDistance == nil then
        -- TODO: structure LOP_FORNPREP (pc 466, target 497)
        local v16 = getRotation(easyArmControl.xRotationNodes[1].node)
        {}[easyArmControl.xRotationNodes[1].movingTool.rotationAxis] = easyArmControl.xRotationNodes[1].movingTool.rotMin
        setRotation(easyArmControl.xRotationNodes[1].node, {}[1], {}[2], {}[3])
        -- TODO: structure LOP_FORNLOOP (pc 496, target 467)
        -- TODO: structure LOP_FORNPREP (pc 502, target 533)
        v16 = getTranslation(easyArmControl.zTranslationNodes[1].node)
        {}[easyArmControl.zTranslationNodes[1].movingTool.translationAxis] = easyArmControl.zTranslationNodes[1].movingTool.transMax
        setTranslation(easyArmControl.zTranslationNodes[1].node, {}[1], {}[2], {}[3])
        -- TODO: structure LOP_FORNLOOP (pc 532, target 503)
        v11 = calcDistanceFrom(easyArmControl.rootNode, easyArmControl.targetRefNode)
        easyArmControl.maxTotalDistance = v11
        v11 = calcDistanceFrom(easyArmControl.xRotationNodes[#easyArmControl.xRotationNodes].node, easyArmControl.targetRefNode)
        easyArmControl.maxTransDistance = v11
        -- TODO: structure LOP_FORNPREP (pc 562, target 581)
        setRotation(easyArmControl.xRotationNodes[1].node, easyArmControl.xRotationNodes[1].startRotation[1], easyArmControl.xRotationNodes[1].startRotation[2], easyArmControl.xRotationNodes[1].startRotation[3])
        -- TODO: structure LOP_FORNLOOP (pc 580, target 563)
        -- TODO: structure LOP_FORNPREP (pc 586, target 605)
        setTranslation(easyArmControl.zTranslationNodes[1].node, easyArmControl.zTranslationNodes[1].startTranslation[1], easyArmControl.zTranslationNodes[1].startTranslation[2], easyArmControl.zTranslationNodes[1].startTranslation[3])
        -- TODO: structure LOP_FORNLOOP (pc 604, target 587)
      end
      -- goto L622  (LOP_JUMP +15)
    end
    Logging.xmlError(xmlFile, "Missing moving tools for easy control targets!")
    return false
  else
    Logging.xmlError(xmlFile, "Missing easy control targets!")
    return false
  end
  return true
end
function Cylindered:updateEasyControl(dt, updateDelayedNodes)
  if self.spec_cylindered.easyArmControl ~= nil then
    local v5 = self:getMovingToolByNode(self.spec_cylindered.easyArmControl.targetNodeY)
    local origin = self:getMovingToolByNode(self.spec_cylindered.easyArmControl.targetNodeZ)
    local v7 = self:getMovingToolMoveValue(v5)
    local v8 = self:getMovingToolMoveValue(origin)
    if v7 == 0 then
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x6 -> L44
    end
    if v7 ~= 0 then
      -- if v5.isConsumingPower then goto L40 end
    end
    if v8 ~= 0 and origin.isConsumingPower then
      isActiveForInputIgnoreSelection.powerConsumingTimer = isActiveForInputIgnoreSelection.powerConsumingActiveTimeOffset
    end
    if self.isServer and isSelected.state and rotLimitChanged then
      if isSelected.moveAcceleration ~= nil then
        local v11 = math.abs(v7 * isSelected.moveSpeed - isSelected.lastSpeedY)
        if isSelected.moveAcceleration * dt <= v11 then
          if isSelected.lastSpeedY < v7 * isSelected.moveSpeed then
          else
          end
        end
      end
      if isSelected.moveAcceleration ~= nil then
        local v12 = math.abs(v8 * isSelected.moveSpeed - isSelected.lastSpeedZ)
        if isSelected.moveAcceleration * dt <= v12 then
          if isSelected.lastSpeedZ < v8 * isSelected.moveSpeed then
          else
          end
        end
      end
      isSelected.lastSpeedY = v10
      isSelected.lastSpeedZ = v11
      local v14, v15, v16 = localDirectionToWorld(isSelected.rootNode, 0, v10 * dt, v11 * dt)
      local v17, v18, v19 = getWorldTranslation(isSelected.targetRefNode)
      local v20, v21, v22 = worldToLocal(isSelected.rootNode, v17 + v14, v18 + v15, v19 + v16)
      local v23 = MathUtil.vector3Length(v20, v21, v22)
      if isSelected.maxTotalDistance / v23 < 1 then
        local v25, v26, v27 = localToWorld(isSelected.rootNode, v20 * isSelected.maxTotalDistance / v23, v21 * isSelected.maxTotalDistance / v23, v22 * isSelected.maxTotalDistance / v23)
      end
      v26 = localToLocal(isSelected.xRotationNodes[2].node, isSelected.xRotationNodes[1].node, 0, 0, 0)
      v25 = MathUtil.vector3Length(...)
      local v26, v27, v28 = localToLocal(isSelected.targetRefNode, isSelected.xRotationNodes[2].node, 0, 0, 0)
      local v29, v30, v31 = localToLocal(isSelected.xRotationNodes[1].node, isSelected.rootNode, 0, 0, 0)
      local v32, v33, v34 = worldToLocal(isSelected.rootNode, v17, v18, v19)
      if 0 < #isSelected.zTranslationNodes then
        local v37 = math.abs(v12)
        local v38 = math.abs(v13)
        local v36, v37 = MathUtil.vector2Normalize(...)
        if v12 == 0 and v13 == 0 then
        end
        local v38, v39, v40 = localDirectionToWorld(isSelected.zTranslationNodes[1].node, 0, 0, 1)
        local v41, v42, v43 = worldDirectionToLocal(isSelected.rootNode, v38, v39, v40)
        v42 = MathUtil.dotProduct(0, v36, v37, 0, v42, v43)
        v41 = math.acos(...)
        if math.pi * 0.5 < v41 then
        end
        v43 = MathUtil.clamp((1 - v41 / math.pi * 0.5 - isSelected.transMoveRatioMinDir) / (isSelected.transMoveRatioMaxDir - isSelected.transMoveRatioMinDir), isSelected.minTransMoveRatio, isSelected.maxTransMoveRatio)
        local v43, v44, v45 = worldToLocal(isSelected.xRotationNodes[2].node, v17, v18, v19)
        if not isSelected.allowNegativeTrans and v40 < 0 and 0 < v45 - v28 then
        end
        -- TODO: structure LOP_FORNPREP (pc 358, target 409)
        if isSelected.forcedTransMove ~= nil then
          isSelected.forcedTransMove = nil
        end
        local v57 = MathUtil.clamp(v53.curTrans[v53.translationAxis] + v54, (v53.transMax - v53.transMin) * v47 + v53.transMin, v53.transMax)
        Cylindered.setAbsoluteToolTranslation(self, v53, v53.curTrans[v53.translationAxis] + v57 - v53.curTrans[v53.translationAxis])
        -- TODO: structure LOP_FORNLOOP (pc 408, target 359)
        local v52 = getWorldTranslation(isSelected.targetRefNode)
        local v50 = worldToLocal(...)
        local v49 = MathUtil.vector3Length(...)
      end
      v36, v37, v38, v39 = MathUtil.getCircleCircleIntersection(v31, v30, v25, v34, v33, v28)
      if v36 ~= nil and v37 ~= nil then
        v43 = math.atan2(v37, v36)
        v43 = MathUtil.clamp(-v43, isSelected.xRotationNodes[1].movingTool.rotMin, isSelected.xRotationNodes[1].movingTool.rotMax)
        Cylindered.setAbsoluteToolRotation(self, isSelected.xRotationNodes[1].movingTool, v43, updateDelayedNodes)
        local v46 = math.acos((v25 * v25 + v28 * v28 - v23 * v23) / 2 * v25 * v28)
        v45 = MathUtil.clamp(math.pi - v46 + 0, isSelected.xRotationNodes[2].movingTool.rotMin, isSelected.xRotationNodes[2].movingTool.rotMax)
        Cylindered.setAbsoluteToolRotation(self, isSelected.xRotationNodes[2].movingTool, v45, updateDelayedNodes)
        local v47 = MathUtil.clamp(v43 + (math.pi - v46 - v45) * 0.5, isSelected.xRotationNodes[1].movingTool.rotMin, isSelected.xRotationNodes[1].movingTool.rotMax)
        Cylindered.setAbsoluteToolRotation(self, isSelected.xRotationNodes[1].movingTool, v47, updateDelayedNodes)
      end
    end
  end
end
function Cylindered:setIsEasyControlActive(state)
  if self.spec_cylindered.easyArmControl ~= nil then
    if self.isServer then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L143
      local isSelected = self:getMovingToolByNode(self.spec_cylindered.easyArmControl.targetNodeY)
      local v5 = self:getMovingToolByNode(self.spec_cylindered.easyArmControl.targetNodeZ)
      if state then
        local origin = getParent(self.spec_cylindered.easyArmControl.targetNodeY)
        if origin == self.spec_cylindered.easyArmControl.targetNodeZ then
          local v7 = getParent(self.spec_cylindered.easyArmControl.targetNodeZ)
        end
        local v7, v8, rotLimitChanged = localToLocal(isActiveForInputIgnoreSelection.targetRefNode, origin, 0, 0, 0)
        local v10, v11, v12 = getTranslation(isActiveForInputIgnoreSelection.targetNodeY)
        local v13 = Cylindered.setToolTranslation(self, isSelected, nil, 0, v8 - v11)
        if v13 then
          Cylindered.setDirty(self, isSelected)
        end
        local v14, v15, v16 = localToLocal(isActiveForInputIgnoreSelection.targetRefNode, origin, 0, 0, 0)
        v14, v15, v16 = getTranslation(isActiveForInputIgnoreSelection.targetNodeZ)
        local v17 = Cylindered.setToolTranslation(self, v5, nil, 0, v16 - v16)
        if v17 then
          Cylindered.setDirty(self, v5)
        end
        local v20, v21, v22 = getTranslation(isActiveForInputIgnoreSelection.targetNodeY)
        isActiveForInputIgnoreSelection.lastValidPositionY[1] = v20
        isActiveForInputIgnoreSelection.lastValidPositionY[2] = v21
        isActiveForInputIgnoreSelection.lastValidPositionY[3] = v22
        v20, v21, v22 = getTranslation(isActiveForInputIgnoreSelection.targetNodeZ)
        isActiveForInputIgnoreSelection.lastValidPositionZ[1] = v20
        isActiveForInputIgnoreSelection.lastValidPositionZ[2] = v21
        isActiveForInputIgnoreSelection.lastValidPositionZ[3] = v22
        self:raiseDirtyFlags(isActiveForInput.cylinderedDirtyFlag)
      end
      isActiveForInputIgnoreSelection.state = state
    else
      self.spec_cylindered.easyArmControl.state = state
    end
  end
  self:requestActionEventUpdate()
end
function Cylindered:setEasyControlForcedTransMove(dt)
  if self.spec_cylindered.easyArmControl ~= nil then
    self.spec_cylindered.easyArmControl.forcedTransMove = dt
  end
end
function Cylindered.updateExtraDependentParts(v0, dt, isActiveForInput)
end
function Cylindered:updateDependentAnimations(part, dt)
  if 0 < #part.dependentAnimations then
    for origin, v7 in ipairs(part.dependentAnimations) do
      if v7.translationAxis ~= nil then
        local v10 = getTranslation(v7.node)
      end
      if v7.rotationAxis ~= nil then
        v10 = getRotation(v7.node)
      end
      local rotLimitChanged = MathUtil.clamp(v8, 0, 1)
      if v7.invert then
      end
      v7.lastPos = v8
      self:setAnimationTime(v7.name, v8, true)
    end
  end
end
function Cylindered.updateDependentToolLimits(v0, dt, isActiveForInput)
  if isActiveForInput.minTransLimits == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L72
  end
  local isActiveForInputIgnoreSelection = Cylindered.getMovingToolState(v0, dt)
  if isActiveForInput.minTransLimits ~= nil then
    local v5 = MathUtil.lerp(isActiveForInput.minTransLimits[1], isActiveForInput.minTransLimits[2], 1 - isActiveForInputIgnoreSelection)
    isActiveForInput.movingTool.transMin = v5
  end
  if isActiveForInput.maxTransLimits ~= nil then
    v5 = MathUtil.lerp(isActiveForInput.maxTransLimits[1], isActiveForInput.maxTransLimits[2], 1 - isActiveForInputIgnoreSelection)
    isActiveForInput.movingTool.transMax = v5
  end
  local isSelected = Cylindered.setToolTranslation(v0, isActiveForInput.movingTool, 0, 0)
  if isSelected then
    Cylindered.setDirty(v0, isActiveForInput.movingTool)
  end
  if isActiveForInput.minRotLimits == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L161
  end
  isActiveForInputIgnoreSelection = Cylindered.getMovingToolState(v0, dt)
  if isActiveForInput.minRotLimits ~= nil then
    v5 = MathUtil.lerp(isActiveForInput.minRotLimits[1], isActiveForInput.minRotLimits[2], 1 - isActiveForInputIgnoreSelection)
    isActiveForInput.movingTool.rotMin = v5
  end
  if isActiveForInput.maxRotLimits ~= nil then
    v5 = MathUtil.lerp(isActiveForInput.maxRotLimits[1], isActiveForInput.maxRotLimits[2], 1 - isActiveForInputIgnoreSelection)
    isActiveForInput.movingTool.rotMax = v5
  end
  isSelected:setMinMax(isActiveForInput.movingTool.rotMin, isActiveForInput.movingTool.rotMax)
  isSelected = Cylindered.setToolRotation(v0, isActiveForInput.movingTool, 0, 0)
  if isSelected then
    Cylindered.setDirty(v0, isActiveForInput.movingTool)
  end
end
function Cylindered:onMovingPartSoundEvent(part, action, type)
  if part.samplesByAction ~= nil and part.samplesByAction[action] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 12, target 160)
    if type == Cylindered.SOUND_TYPE_EVENT then
      if part.samplesByAction[action][1].loops == 0 then
        part.samplesByAction[action][1].loops = 1
      end
      rotLimitChanged:playSample(v8)
    elseif type == Cylindered.SOUND_TYPE_CONTINUES then
      local rotLimitChanged = rotLimitChanged:getIsSamplePlaying(part.samplesByAction[action][1])
      if not rotLimitChanged then
        rotLimitChanged:playSample(part.samplesByAction[action][1])
        part.samplesByAction[action][1].lastActivationTime = g_time
        part.samplesByAction[action][1].lastActivationPart = part
        table.insert(self.spec_cylindered.activeSamples, part.samplesByAction[action][1])
        -- goto L159  (LOP_JUMP +89)
      end
      -- if v8.lastActivationPart ~= v1 then goto L159 end
      v8.lastActivationTime = g_time
    else
      if type == Cylindered.SOUND_TYPE_ENDING then
        if self.spec_cylindered.endingSamplesBySample[part.samplesByAction[action][1]] == nil then
          part.samplesByAction[action][1].lastActivationTime = g_time
          table.insert(self.spec_cylindered.endingSamples, part.samplesByAction[action][1])
          self.spec_cylindered.endingSamplesBySample[part.samplesByAction[action][1]] = part.samplesByAction[action][1]
          -- goto L159  (LOP_JUMP +51)
        end
        v8.lastActivationTime = g_time
      elseif type == Cylindered.SOUND_TYPE_STARTING then
        if self.spec_cylindered.startingSamplesBySample[part.samplesByAction[action][1]] == nil then
          if part.samplesByAction[action][1].loops == 0 then
            part.samplesByAction[action][1].loops = 1
          end
          v10:playSample(v8)
          v8.lastActivationTime = g_time
          table.insert(rotLimitChanged.startingSamples, v8)
          rotLimitChanged.startingSamplesBySample[v8] = v8
        else
          part.samplesByAction[action][1].lastActivationTime = g_time
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 159, target 13)
  end
end
function Cylindered:updateMovingToolSoundEvents(tool, direction, hitLimit, wasAtLimit)
  if tool.samplesByAction ~= nil then
    self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_END, Cylindered.SOUND_TYPE_ENDING)
    self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_START, Cylindered.SOUND_TYPE_STARTING)
    if direction then
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_POS, Cylindered.SOUND_TYPE_CONTINUES)
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_END_POS, Cylindered.SOUND_TYPE_ENDING)
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_START_POS, Cylindered.SOUND_TYPE_STARTING)
      if hitLimit then
        self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_END_POS_LIMIT, Cylindered.SOUND_TYPE_ENDING)
      end
      -- if not v4 then goto L154 end
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_START_POS_LIMIT, Cylindered.SOUND_TYPE_STARTING)
      return
    end
    self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_NEG, Cylindered.SOUND_TYPE_CONTINUES)
    self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_END_NEG, Cylindered.SOUND_TYPE_ENDING)
    self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_START_NEG, Cylindered.SOUND_TYPE_STARTING)
    if hitLimit then
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_END_NEG_LIMIT, Cylindered.SOUND_TYPE_ENDING)
    end
    if wasAtLimit then
      self:onMovingPartSoundEvent(tool, Cylindered.SOUND_ACTION_TOOL_MOVE_START_NEG_LIMIT, Cylindered.SOUND_TYPE_STARTING)
    end
  end
end
function Cylindered:updateControlGroups()
  self:clearSubselections()
  for v5, origin in pairs(self.spec_cylindered.controlGroupMapping) do
    part.controlGroupMapping[v5] = nil
  end
  for v5, origin in ipairs(part.controlGroups) do
    for v11, v12 in pairs(part.movingTools) do
      if not (v12.axisActionIndex ~= nil) then
        continue
      end
      if not (v12.controlGroupIndex == origin) then
        continue
      end
      if not v12.lastIsActiveState then
        continue
      end
      break
    end
    if not v7 then
      continue
    end
    v8 = self:addSubselection(origin)
    part.controlGroupMapping[v8] = origin
  end
  action:updateSelectableObjects()
  action = action:getSelectedVehicle()
  if action == self then
    type:setSelectedVehicle(self, 99999, false)
  end
end
function Cylindered:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    for v10, v11 in pairs(self.spec_cylindered.movingTools) do
      if not (v11.axisActionIndex ~= nil) then
        continue
      end
      local v12 = self:getIsMovingToolActive(v11)
      if v12 ~= v11.lastIsActiveState then
        v11.lastIsActiveState = v12
      end
      if not (v5.currentControlGroupIndex == v11.controlGroupIndex) then
        continue
      end
      if not (v5.actionEvents[v11.axisActionIndex] ~= nil) then
        continue
      end
      v14:setActionEventActive(v5.actionEvents[v11.axisActionIndex].actionEventId, v12)
    end
    if origin then
      self:updateControlGroups()
    end
    -- TODO: structure LOP_FORNPREP (pc 59, target 128)
    if v5.activeSamples[#v5.activeSamples].lastActivationTime + dt * 3 < g_time then
      if g_time <= v5.activeSamples[#v5.activeSamples].lastActivationTime + dt * 3 + v5.activeSamples[#v5.activeSamples].dropOffTime then
        -- if v5.activeSamples[#v5.activeSamples].dropOffActive then goto L127 end
        v5.activeSamples[#v5.activeSamples].dropOffActive = true
        local v15 = v15:getCurrentSamplePitch(v5.activeSamples[#v5.activeSamples])
        v11:setSamplePitchOffset(v5.activeSamples[#v5.activeSamples], v15 * (v5.activeSamples[#v5.activeSamples].dropOffFactor - 1))
      else
        v5.activeSamples[#v5.activeSamples].dropOffActive = false
        v11:setSamplePitchOffset(v5.activeSamples[#v5.activeSamples], 0)
        v11:stopSample(v5.activeSamples[#v5.activeSamples])
        table.remove(v5.activeSamples, #v5.activeSamples)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 127, target 60)
    -- TODO: structure LOP_FORNPREP (pc 133, target 168)
    if v5.endingSamples[#v5.endingSamples].lastActivationTime + dt < g_time then
      if v5.endingSamples[#v5.endingSamples].loops == 0 then
        v5.endingSamples[#v5.endingSamples].loops = 1
      end
      v11:playSample(v10)
      table.remove(v5.endingSamples, rotLimitChanged)
      v5.endingSamplesBySample[v10] = nil
    end
    -- TODO: structure LOP_FORNLOOP (pc 167, target 134)
    -- TODO: structure LOP_FORNPREP (pc 173, target 195)
    if v5.startingSamples[#v5.startingSamples].lastActivationTime + dt < g_time then
      table.remove(v5.startingSamples, #v5.startingSamples)
      v5.startingSamplesBySample[v5.startingSamples[#v5.startingSamples]] = nil
    end
    -- TODO: structure LOP_FORNLOOP (pc 194, target 174)
  end
end
function Cylindered:onUpdateEnd(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for rotLimitChanged, v10 in pairs(self.spec_cylindered.activeDirtyMovingParts) do
    Cylindered.setDirty(self, v10)
  end
  self:updateDirtyMovingParts(dt, true)
end
function Cylindered:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  for rotLimitChanged, v10 in pairs(self.spec_cylindered.activeDirtyMovingParts) do
    if not (self.currentUpdateDistance < v10.maxUpdateDistance) then
      continue
    end
    Cylindered.setDirty(self, v10)
  end
  self:updateDirtyMovingParts(dt, true)
end
function Cylindered:onPostUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self:updateDirtyMovingParts(dt, false)
end
function Cylindered:updateDirtyMovingParts(dt, updateSound)
  -- TODO: structure LOP_FORNPREP (pc 7, target 45)
  if self.spec_cylindered.movingTools[1].isDirty then
    if self.spec_cylindered.movingTools[1].playSound then
      self.spec_cylindered.movingToolNeedsSound = true
    end
    if self.isServer then
      Cylindered.updateComponentJoints(self, v7, false)
    end
    self:updateExtraDependentParts(v7, dt)
    self:updateDependentAnimations(v7, dt)
    v7.isDirty = false
  end
  -- TODO: structure LOP_FORNLOOP (pc 44, target 8)
  if self.anyMovingPartsDirty then
    -- TODO: structure LOP_FORNPREP (pc 53, target 112)
    if type.movingParts[1].isDirty then
      local v8 = self:getIsMovingPartActive(type.movingParts[1])
      if not v8 then
        -- if not v3.movingParts[1].smoothedDirectionScale then goto L111 end
        -- cmp-jump LOP_JUMPXEQKN R9 aux=0xf -> L111
      end
      Cylindered.updateMovingPart(self, v7, false, nil, v8)
      self:updateExtraDependentParts(v7, dt)
      self:updateDependentAnimations(v7, dt)
      -- if not v7.playSound then goto L111 end
      type.cylinderedHydraulicSoundPartNumber = origin
      type.movingPartNeedsSound = true
    elseif type.isClient and type.cylinderedHydraulicSoundPartNumber == 1 then
      type.movingPartNeedsSound = false
    end
    -- TODO: structure LOP_FORNLOOP (pc 111, target 54)
    self.anyMovingPartsDirty = false
  end
  if updateSound and self.isClient then
    if not type.movingToolNeedsSound then
      -- if not v3.movingPartNeedsSound then goto L144 end
    end
    if not type.isHydraulicSamplePlaying then
      isSelected:playSample(type.samples.hydraulic)
      type.isHydraulicSamplePlaying = true
    end
    self:raiseActive()
    return
    if type.isHydraulicSamplePlaying then
      isSelected:stopSample(type.samples.hydraulic)
      type.isHydraulicSamplePlaying = false
    end
  end
end
function Cylindered:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if 1 < #self.spec_cylindered.controlGroupNames and isActiveForInputIgnoreSelection and self.spec_cylindered.currentControlGroupIndex ~= 0 then
    local v8 = v8:getText("action_selectedControlGroup")
    local v7 = string.format(v8, self.spec_cylindered.controlGroupNames[self.spec_cylindered.currentControlGroupIndex], self.spec_cylindered.currentControlGroupIndex)
    v5:addExtraPrintText(...)
  end
end
function Cylindered:loadMovingPartFromXML(xmlFile, key, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local isSelected = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  local v5 = xmlFile:getValue(key .. "#referenceFrame", nil, self.components, self.i3dMappings)
  if isSelected ~= nil and v5 ~= nil then
    local origin = xmlFile:getValue(key .. "#referencePoint", nil, self.components, self.i3dMappings)
    entry.referencePoint = origin
    entry.node = isSelected
    origin = getParent(isSelected)
    entry.parent = origin
    entry.referenceFrame = v5
    origin = xmlFile:getValue(key .. "#invertZ", false)
    entry.invertZ = origin
    origin = xmlFile:getValue(key .. "#scaleZ", false)
    entry.scaleZ = origin
    origin = xmlFile:getValue(key .. "#limitedAxis")
    entry.limitedAxis = origin
    origin = xmlFile:getValue(key .. "#isActiveDirty", false)
    entry.isActiveDirty = origin
    origin = xmlFile:getValue(key .. "#playSound", false)
    entry.playSound = origin
    origin = xmlFile:getValue(key .. "#moveToReferenceFrame", false)
    entry.moveToReferenceFrame = origin
    if entry.moveToReferenceFrame then
      local v8 = getWorldTranslation(isSelected)
      local origin, v7, v8 = worldToLocal(...)
      entry.referenceFrameOffset = {origin, v7, v8}
    end
    if entry.referenceFrame == entry.node then
      local rotLimitChanged = getName(entry.node)
      Logging.xmlWarning(xmlFile, "Reference frame equals moving part node. This can lead to bad behaviours! Node '%s' in '%s'.", rotLimitChanged, key)
    end
    origin = xmlFile:getValue(key .. "#doLineAlignment", false)
    entry.doLineAlignment = origin
    origin = xmlFile:getValue(key .. "#doInversedLineAlignment", false)
    entry.doInversedLineAlignment = origin
    origin = xmlFile:getValue(key .. ".orientationLine#partLength", 0.5)
    entry.partLength = origin
    origin = xmlFile:getValue(key .. ".orientationLine#partLengthNode", nil, self.components, self.i3dMappings)
    entry.partLengthNode = origin
    entry.orientationLineNodes = {}
    while true do
      v7 = string.format("%s.orientationLine.lineNode(%d)", key, origin)
      v8 = xmlFile:hasProperty(v7)
      if not v8 then
        break
      end
      v8 = xmlFile:getValue(v7 .. "#node", nil, self.components, self.i3dMappings)
      table.insert(entry.orientationLineNodes, v8)
    end
    v7 = xmlFile:getValue(key .. "#doDirectionAlignment", true)
    entry.doDirectionAlignment = v7
    v7 = xmlFile:getValue(key .. "#doRotationAlignment", false)
    entry.doRotationAlignment = v7
    v7 = xmlFile:getValue(key .. "#rotMultiplier", 0)
    entry.rotMultiplier = v7
    v7 = xmlFile:getValue(key .. "#minRot")
    v8 = xmlFile:getValue(key .. "#maxRot")
    if v7 ~= nil and v8 ~= nil then
      if entry.limitedAxis ~= nil then
        rotLimitChanged = MathUtil.getValidLimit(v7)
        entry.minRot = rotLimitChanged
        rotLimitChanged = MathUtil.getValidLimit(v8)
        entry.maxRot = rotLimitChanged
      else
        print("Warning: minRot/maxRot requires the use of limitedAxis in '" .. self.configFileName .. "'")
      end
    end
    rotLimitChanged = xmlFile:getValue(key .. "#alignToWorldY", false)
    entry.alignToWorldY = rotLimitChanged
    if entry.referencePoint ~= nil then
      rotLimitChanged = xmlFile:getValue(key .. "#localReferencePoint", nil, self.components, self.i3dMappings)
      local v12 = getWorldTranslation(entry.referencePoint)
      local v10, v11, v12 = worldToLocal(...)
      if rotLimitChanged ~= nil then
        local v15 = getWorldTranslation(rotLimitChanged)
        local v13, v14, v15 = worldToLocal(...)
        local v16 = MathUtil.vector3Length(v10 - v13, v11 - v14, v12 - v15)
        entry.referenceDistance = v16
        entry.lastReferenceDistance = entry.referenceDistance
        entry.localReferencePoint = {v13, v14, v15}
        entry.localReferenceAngleSide = v14 * (v12 - v15) - v15 * (v11 - v14)
        entry.localReferencePointNode = rotLimitChanged
        local v17 = xmlFile:getValue(key .. "#updateLocalReferenceDistance", false)
        entry.updateLocalReferenceDistance = v17
        v17 = xmlFile:getValue(key .. "#localReferenceTranslate", false)
        entry.localReferenceTranslate = v17
        if entry.localReferenceTranslate then
          local v18 = getTranslation(entry.node)
          entry.localReferenceTranslation = {}
        end
        v17 = xmlFile:getValue(key .. "#dynamicLocalReferenceDistance", false)
        entry.dynamicLocalReferenceDistance = v17
      else
        entry.referenceDistance = 0
        entry.localReferencePoint = {v10, v11, v12}
      end
      v13 = xmlFile:getValue(key .. "#referenceDistanceThreshold", 0.0001)
      entry.referenceDistanceThreshold = v13
      v13 = xmlFile:getValue(key .. "#useLocalOffset", false)
      entry.useLocalOffset = v13
      v13 = xmlFile:getValue(key .. "#referenceDistancePoint", nil, self.components, self.i3dMappings)
      entry.referenceDistancePoint = v13
      v16 = MathUtil.vector2Length(entry.localReferencePoint[2], entry.localReferencePoint[3])
      v13 = xmlFile:getValue(...)
      entry.localReferenceDistance = v13
      self:loadDependentTranslatingParts(xmlFile, key, entry)
    end
    rotLimitChanged = xmlFile:getValue(key .. "#directionThreshold", 0.0001)
    entry.directionThreshold = rotLimitChanged
    rotLimitChanged = xmlFile:getValue(key .. "#directionThresholdActive", 0.00001)
    entry.directionThresholdActive = rotLimitChanged
    rotLimitChanged = xmlFile:getValue(key .. "#maxUpdateDistance", "-")
    entry.maxUpdateDistance = rotLimitChanged
    if entry.maxUpdateDistance == "-" then
      entry.maxUpdateDistance = math.huge
    else
      rotLimitChanged = tonumber(entry.maxUpdateDistance)
      entry.maxUpdateDistance = rotLimitChanged
    end
    if entry.isActiveDirty then
      rotLimitChanged = xmlFile:getString(key .. "#maxUpdateDistance")
      if rotLimitChanged ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L539
      end
      Logging.xmlWarning(xmlFile, "No max. update distance set for isActiveDirty moving part (%s)! Use #maxUpdateDistance attribute.", key)
    end
    rotLimitChanged = rotLimitChanged:getValue(key .. "#smoothedDirectionScale", false)
    entry.smoothedDirectionScale = rotLimitChanged
    v11 = v11:getValue(key .. "#smoothedDirectionTime", 2)
    entry.smoothedDirectionTime = 1 / v11
    entry.smoothedDirectionScaleAlpha = nil
    if entry.smoothedDirectionScale then
      v12 = getParent(entry.node)
      v10 = localDirectionToLocal(entry.node, v12, 0, 0, 1)
      entry.initialDirection = {}
    end
    rotLimitChanged = xmlFile:getValue(key .. "#debug", false)
    entry.debug = rotLimitChanged
    if entry.debug then
      Logging.xmlWarning(xmlFile, "MovingPart debug enabled for moving part '%s'", key)
    end
    entry.lastDirection = {0, 0, 0}
    entry.lastUpVector = {0, 0, 0}
    entry.isDirty = false
    entry.isPart = true
    entry.isActive = true
    return true
  end
  return false
end
function Cylindered:loadMovingToolFromXML(xmlFile, key, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#index", key .. "#node")
  local v5 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if v5 ~= nil then
    entry.node = v5
    entry.externalMove = 0
    entry.easyArmControlActive = true
    local origin = xmlFile:getValue(key .. "#isEasyControlTarget", false)
    entry.isEasyControlTarget = origin
    entry.networkInterpolators = {}
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#rotSpeed", key .. ".rotation#rotSpeed")
    origin = xmlFile:getValue(key .. ".rotation#rotSpeed")
    if origin ~= nil then
      entry.rotSpeed = origin / 1000
    end
    local v7 = xmlFile:getValue(key .. ".rotation#rotAcceleration")
    if v7 ~= nil then
      entry.rotAcceleration = v7 / 1000000
    end
    entry.lastRotSpeed = 0
    local v8 = xmlFile:getValue(key .. ".rotation#rotMax")
    entry.rotMax = v8
    v8 = xmlFile:getValue(key .. ".rotation#rotMin")
    entry.rotMin = v8
    v8 = xmlFile:getValue(key .. ".rotation#syncMaxRotLimits", false)
    entry.syncMaxRotLimits = v8
    v8 = xmlFile:getValue(key .. ".rotation#syncMinRotLimits", false)
    entry.syncMinRotLimits = v8
    v8 = xmlFile:getValue(key .. ".rotation#rotSendNumBits")
    entry.rotSendNumBits = v8
    v8 = xmlFile:getValue(key .. ".rotation#attachRotMax")
    entry.attachRotMax = v8
    v8 = xmlFile:getValue(key .. ".rotation#attachRotMin")
    entry.attachRotMin = v8
    if entry.rotSendNumBits == nil then
      if entry.rotMin ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L213
        local rotLimitChanged = math.ceil((entry.rotMax - entry.rotMin) / Cylindered.MOVING_TOOL_SEND_MIN_RESOLUTION)
        if rotLimitChanged <= 2047 then
        end
        if rotLimitChanged <= 1023 then
        end
        if rotLimitChanged <= 511 then
        end
        if rotLimitChanged <= 255 then
        end
        if rotLimitChanged <= 127 then
        end
        if rotLimitChanged <= 63 then
        end
        if rotLimitChanged <= 31 then
        end
        if rotLimitChanged <= 15 then
        end
        if rotLimitChanged <= 7 then
        end
        if rotLimitChanged <= 3 then
        end
        if rotLimitChanged <= 1 then
        end
        entry.rotSendNumBits = v10
      else
        entry.rotSendNumBits = 11
      end
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#transSpeed", key .. ".rotation#transSpeed")
    v8 = xmlFile:getValue(key .. ".translation#transSpeed")
    if v8 ~= nil then
      entry.transSpeed = v8 / 1000
    end
    rotLimitChanged = xmlFile:getValue(key .. ".translation#transAcceleration")
    if rotLimitChanged ~= nil then
      entry.transAcceleration = rotLimitChanged / 1000000
    end
    entry.lastTransSpeed = 0
    local v10 = xmlFile:getValue(key .. ".translation#transMax")
    entry.transMax = v10
    v10 = xmlFile:getValue(key .. ".translation#transMin")
    entry.transMin = v10
    v10 = xmlFile:getValue(key .. ".translation#attachTransMax")
    entry.attachTransMax = v10
    v10 = xmlFile:getValue(key .. ".translation#attachTransMin")
    entry.attachTransMin = v10
    v10 = xmlFile:getValue(key .. "#playSound", false)
    entry.playSound = v10
    v10 = xmlFile:getValue(key .. "#isConsumingPower", false)
    entry.isConsumingPower = v10
    v10 = SpecializationUtil.hasSpecialization(AnimatedVehicle, self.specializations)
    if v10 then
      v10 = xmlFile:getValue(key .. ".animation#animSpeed")
      if v10 ~= nil then
        entry.animSpeed = v10 / 1000
      end
      local v11 = xmlFile:getValue(key .. ".animation#animAcceleration")
      if v11 ~= nil then
        entry.animAcceleration = v11 / 1000000
      end
      entry.curAnimTime = 0
      entry.lastAnimSpeed = 0
      local v12 = xmlFile:getValue(key .. ".animation#animName")
      entry.animName = v12
      v12 = xmlFile:getValue(key .. ".animation#animSendNumBits", 8)
      entry.animSendNumBits = v12
      local v13 = xmlFile:getValue(key .. ".animation#animMaxTime", 1)
      v12 = math.min(v13, 1)
      entry.animMaxTime = v12
      v13 = xmlFile:getValue(key .. ".animation#animMinTime", 0)
      v12 = math.max(v13, 0)
      entry.animMinTime = v12
      v12 = xmlFile:getValue(key .. ".animation#animStartTime")
      entry.animStartTime = v12
      if entry.animStartTime ~= nil then
        entry.curAnimTime = entry.animStartTime
      end
      v13 = InterpolatorValue.new(entry.curAnimTime)
      entry.networkInterpolators.animation = v13
      v12:setMinMax(0, 1)
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. ".controls#iconFilename", key .. ".controls#iconName")
    v10 = xmlFile:getValue(key .. ".controls#iconName")
    if v10 ~= nil then
      if InputHelpElement.AXIS_ICON[v10] == nil then
      end
      entry.axisActionIcon = v10
    end
    v11 = xmlFile:getValue(key .. ".controls#groupIndex", 0)
    entry.controlGroupIndex = v11
    if entry.controlGroupIndex ~= 0 then
      if isSelected.controlGroupNames[entry.controlGroupIndex] ~= nil then
        table.addElement(isSelected.controlGroups, entry.controlGroupIndex)
      else
        Logging.xmlWarning(xmlFile, "ControlGroup '%d' not defined for '%s'!", entry.controlGroupIndex, key)
      end
    end
    v11 = xmlFile:getValue(key .. ".controls#axis")
    entry.axis = v11
    if entry.axis ~= nil then
      entry.axisActionIndex = InputAction[entry.axis]
    end
    v11 = xmlFile:getValue(key .. ".controls#invertAxis", false)
    entry.invertAxis = v11
    v11 = xmlFile:getValue(key .. ".controls#mouseSpeedFactor", 1)
    entry.mouseSpeedFactor = v11
    if entry.rotSpeed == nil and entry.transSpeed == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L547
    end
    v11 = self:getNextDirtyFlag()
    entry.dirtyFlag = v11
    v11 = xmlFile:getValue(key .. "#allowSaving", true)
    entry.saving = v11
    entry.isDirty = false
    v11 = xmlFile:getValue(key .. "#isIntitialDirty", true)
    entry.isIntitialDirty = v11
    v11 = xmlFile:getValue(key .. ".rotation#rotationAxis", 1)
    entry.rotationAxis = v11
    v11 = xmlFile:getValue(key .. ".translation#translationAxis", 3)
    entry.translationAxis = v11
    v11 = xmlFile:getValue(key .. ".rotation#detachingRotMaxLimit")
    v12 = xmlFile:getValue(key .. ".rotation#detachingRotMinLimit")
    v13 = xmlFile:getValue(key .. ".translation#detachingTransMaxLimit")
    local v14 = xmlFile:getValue(key .. ".translation#detachingTransMinLimit")
    if v11 == nil and v12 == nil and v13 == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L630
    end
    if isSelected.detachLockNodes == nil then
      isSelected.detachLockNodes = {}
    end
    isSelected.detachLockNodes[entry] = {detachingRotMaxLimit = v11, detachingRotMinLimit = v12, detachingTransMinLimit = v14, detachingTransMaxLimit = v13}
    local v15, v16, v17 = getRotation(v5)
    entry.curRot = {v15, v16, v17}
    local v18, v19, v20 = getTranslation(v5)
    entry.curTrans = {v18, v19, v20}
    local v21 = xmlFile:getValue(key .. ".rotation#startRot")
    entry.startRot = v21
    v21 = xmlFile:getValue(key .. ".translation#startTrans")
    entry.startTrans = v21
    entry.move = 0
    entry.moveToSend = 0
    entry.smoothedMove = 0
    entry.lastInputTime = 0
    XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#delayedIndex", key .. "#delayedNode")
    v21 = xmlFile:getValue(key .. "#delayedNode", nil, self.components, self.i3dMappings)
    entry.delayedNode = v21
    if entry.delayedNode ~= nil then
      v21 = xmlFile:getValue(key .. "#delayedFrames", 3)
      entry.delayedFrames = v21
      entry.currentDelayedData = {rot = {v15, v16, v17}, trans = {v18, v19, v20}}
      entry.delayedHistroyData = {}
      -- TODO: structure LOP_FORNPREP (pc 749, target 773)
      entry.delayedHistroyData[1] = {rot = {v15, v16, v17}, trans = {v18, v19, v20}}
      -- TODO: structure LOP_FORNLOOP (pc 772, target 750)
      entry.delayedHistoryIndex = 0
    end
    local v22 = InterpolatorValue.new(entry.curTrans[entry.translationAxis])
    entry.networkInterpolators.translation = v22
    v21:setMinMax(entry.transMin, entry.transMax)
    v22 = InterpolatorAngle.new(entry.curRot[entry.rotationAxis])
    entry.networkInterpolators.rotation = v22
    v21:setMinMax(entry.rotMin, entry.rotMax)
    v21 = InterpolationTime.new(1.2)
    entry.networkTimeInterpolator = v21
    entry.isTool = true
    return true
  end
  return false
end
function Cylindered:loadDependentMovingTools(xmlFile, baseName, entry)
  entry.dependentMovingTools = {}
  while true do
    v7 = string.format(".dependentMovingTool(%d)", isSelected)
    origin = xmlFile:hasProperty(baseName .. v7)
    if not origin then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. v7 .. "#index", baseName .. v7 .. "#index")
    origin = xmlFile:getValue(baseName .. v7 .. "#node", nil, self.components, self.i3dMappings)
    v7 = xmlFile:getValue(baseName .. v7 .. "#speedScale")
    v8 = xmlFile:getValue(baseName .. v7 .. "#requiresMovement", false)
    rotLimitChanged = AnimCurve.new(Cylindered.limitInterpolator)
    while true do
      v12 = string.format("%s.limit(%d)", v5 .. ".rotationBasedLimits", v11)
      v13 = xmlFile:hasProperty(v12)
      if not v13 then
        break
      end
      v13 = self:loadRotationBasedLimits(xmlFile, v12, entry)
      if v13 ~= nil then
        rotLimitChanged:addKeyframe(v13)
      end
    end
    if not v10 then
    end
    v12 = xmlFile:getValue(v5 .. "#minTransLimits", nil, true)
    v13 = xmlFile:getValue(v5 .. "#maxTransLimits", nil, true)
    v14 = xmlFile:getValue(v5 .. "#minRotLimits", nil, true)
    v15 = xmlFile:getValue(v5 .. "#maxRotLimits", nil, true)
    if origin ~= nil then
      if rotLimitChanged == nil and v7 == nil and v12 == nil and v13 == nil and v14 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L162
      end
      table.insert(entry.dependentMovingTools, {node = origin, rotationBasedLimits = rotLimitChanged, speedScale = v7, requiresMovement = v8, minTransLimits = v12, maxTransLimits = v13, minRotLimits = v14, maxRotLimits = v15})
    end
  end
end
function Cylindered.loadDependentParts(v0, dt, updateSound, type)
  type.dependentPartData = {}
  dt:iterate(updateSound .. ".dependentPart", function(v0, dt)
    XMLUtil.checkDeprecatedXMLElements(u0, dt .. "#index", dt .. "#node")
    local type = type:getValue(dt .. "#node", nil, u1.components, u1.i3dMappings)
    if {node = type}.node ~= nil then
      type = type:getValue(dt .. "#maxUpdateDistance", "-")
      if {node = type, maxUpdateDistance = type}.maxUpdateDistance == "-" then
      else
        type = tonumber({node = type, maxUpdateDistance = type}.maxUpdateDistance)
      end
      updateSound.part = nil
      table.insert(u2.dependentPartData, updateSound)
    end
  end)
end
function Cylindered.resolveDependentPartData(v0, dt, updateSound)
  for origin, v7 in pairs(dt) do
    if not (v7.part == nil) then
      continue
    end
    if not (updateSound[v7.node] ~= nil) then
      continue
    end
    -- TODO: structure LOP_FORNPREP (pc 20, target 54)
    if 1 == 1 then
      v7.part = updateSound[v7.node][1]
      updateSound[v7.node][1].isDependentPart = true
    else
      table.insert(dt, {node = v7.node, maxUpdateDistance = v7.maxUpdateDistance, part = updateSound[v7.node][1]})
      updateSound[v7.node][1].isDependentPart = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 21)
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 71)
  if dt[#dt].part == nil then
    table.remove(dt, #dt)
  end
  -- TODO: structure LOP_FORNLOOP (pc 70, target 60)
end
function Cylindered:loadDependentComponentJoints(xmlFile, baseName, entry)
  if not self.isServer then
    return
  end
  entry.componentJoints = {}
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#componentJointIndex", baseName .. ".componentJoint#index")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#anchorActor", baseName .. ".componentJoint#anchorActor")
  while true do
    v7 = string.format(".componentJoint(%d)", isSelected)
    origin = xmlFile:hasProperty(baseName .. v7)
    if not origin then
      break
    end
    origin = xmlFile:getValue(baseName .. v7 .. "#index")
    if origin ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L139
      v7 = xmlFile:getValue(baseName .. v7 .. "#anchorActor", 0)
      if {componentJoint = self.componentJoints[origin], anchorActor = v7, index = origin}.anchorActor == 1 then
      end
      v12, v13, v14 = localToLocal(self.components[v8.componentIndices[2]].node, v10, 0, 0, 0)
      rotLimitChanged.x = v12
      rotLimitChanged.y = v13
      rotLimitChanged.z = v14
      v12, v13, v14 = localDirectionToLocal(self.components[v8.componentIndices[2]].node, v10, 0, 1, 0)
      rotLimitChanged.upX = v12
      rotLimitChanged.upY = v13
      rotLimitChanged.upZ = v14
      v12, v13, v14 = localDirectionToLocal(self.components[v8.componentIndices[2]].node, v10, 0, 0, 1)
      rotLimitChanged.dirX = v12
      rotLimitChanged.dirY = v13
      rotLimitChanged.dirZ = v14
      table.insert(entry.componentJoints, rotLimitChanged)
    else
      Logging.xmlWarning(xmlFile, "Invalid index for '%s'", baseName .. v7)
    end
  end
end
function Cylindered:loadDependentAttacherJoints(xmlFile, baseName, entry)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#jointIndices", baseName .. ".attacherJoint#jointIndices")
  local indices = xmlFile:getValue(baseName .. ".attacherJoint#jointIndices", nil, true)
  if indices ~= nil then
    local v5 = xmlFile:getValue(baseName .. ".attacherJoint#ignoreWarning", false)
    entry.attacherJoints = {}
    if self.getAttacherJoints ~= nil then
      local v7 = self:getAttacherJoints()
    end
    if origin ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 45, target 69)
      if origin[indices[1]] ~= nil then
        table.insert(entry.attacherJoints, origin[indices[1]])
      elseif not v5 then
        Logging.xmlWarning(xmlFile, "Invalid attacher joint index '%s' for '%s'!", indices[1], baseName)
      end
      -- TODO: structure LOP_FORNLOOP (pc 68, target 46)
    end
  end
  XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. "#inputAttacherJoint", baseName .. ".inputAttacherJoint#value")
  v5 = xmlFile:getValue(baseName .. ".inputAttacherJoint#value", false)
  entry.inputAttacherJoint = v5
end
function Cylindered:loadDependentWheels(xmlFile, baseName, entry)
  local indices = SpecializationUtil.hasSpecialization(Wheels, self.specializations)
  if indices then
    indices = xmlFile:getValue(baseName .. "#wheelIndices", nil, true)
    if indices ~= nil then
      entry.wheels = {}
      for v8, rotLimitChanged in pairs(indices) do
        local v10 = self:getWheelFromWheelIndex(rotLimitChanged)
        if v10 ~= nil then
          table.insert(entry.wheels, v10)
        else
          Logging.xmlWarning(xmlFile, "Invalid wheelIndex '%s' for '%s'!", rotLimitChanged, baseName)
        end
      end
    end
    v5 = xmlFile:getValue(baseName .. "#wheelNodes")
    if v5 ~= nil and v5 ~= "" then
      origin = v5:split(" ")
      -- TODO: structure LOP_FORNPREP (pc 68, target 92)
      v10 = self:getWheelByWheelNode(origin[1])
      if v10 ~= nil then
        table.insert(entry.wheels, v10)
      else
        Logging.xmlWarning(xmlFile, "Invalid wheelNode '%s' for '%s'!", origin[1], baseName)
      end
      -- TODO: structure LOP_FORNLOOP (pc 91, target 69)
    end
  end
end
function Cylindered:loadDependentTranslatingParts(xmlFile, baseName, entry)
  entry.translatingParts = {}
  if entry.referencePoint ~= nil then
    local indices = xmlFile:getValue(baseName .. "#divideTranslatingDistance", true)
    entry.divideTranslatingDistance = indices
    entry.translatingPartsDivider = 0
    while true do
      v7 = string.format(".translatingPart(%d)", indices)
      origin = xmlFile:hasProperty(baseName .. v7)
      if not origin then
        break
      end
      XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. v7 .. "#index", baseName .. v7 .. "#node")
      origin = xmlFile:getValue(baseName .. v7 .. "#node", nil, self.components, self.i3dMappings)
      if origin ~= nil then
        v8, rotLimitChanged, v10 = getTranslation(origin)
        v13 = getWorldTranslation(entry.referencePoint)
        v11, v12, v13 = worldToLocal(...)
        v14 = xmlFile:getValue(baseName .. v7 .. "#referenceDistance", v13)
        v14 = xmlFile:getValue(baseName .. v7 .. "#minZTrans")
        v14 = xmlFile:getValue(baseName .. v7 .. "#maxZTrans")
        v14 = xmlFile:getValue(baseName .. v7 .. "#divideTranslatingDistance", entry.divideTranslatingDistance)
        if {node = origin, startPos = {v8, rotLimitChanged, v10}, lastZ = v10, referenceDistance = v14, minZTrans = v14, maxZTrans = v14, divideTranslatingDistance = v14}.divideTranslatingDistance then
          entry.translatingPartsDivider = entry.translatingPartsDivider + 1
        end
        table.insert(entry.translatingParts, v7)
      end
    end
    local v5 = math.max(entry.translatingPartsDivider, 1)
    entry.translatingPartsDivider = v5
    entry.numTranslatingParts = #entry.translatingParts
  end
end
function Cylindered.loadExtraDependentParts(v0, xmlFile, baseName, entry)
  return true
end
function Cylindered.loadDependentAnimations(v0, xmlFile, baseName, entry)
  entry.dependentAnimations = {}
  while true do
    v5 = string.format("%s.dependentAnimation(%d)", baseName, indices)
    origin = xmlFile:hasProperty(v5)
    if not origin then
      break
    end
    origin = xmlFile:getValue(v5 .. "#name")
    if origin ~= nil then
      v8 = xmlFile:getValue(v5 .. "#translationAxis")
      v8 = xmlFile:getValue(v5 .. "#rotationAxis")
      v8 = xmlFile:getValue(v5 .. "#useTranslatingPartIndex")
      if v8 ~= nil and entry.translatingParts[v8] ~= nil then
      end
      rotLimitChanged = xmlFile:getValue(v5 .. "#minValue")
      v7.minValue = rotLimitChanged
      rotLimitChanged = xmlFile:getValue(v5 .. "#maxValue")
      v7.maxValue = rotLimitChanged
      if v7.rotationAxis ~= nil then
        rotLimitChanged = MathUtil.degToRad(v7.minValue)
        v7.minValue = rotLimitChanged
        rotLimitChanged = MathUtil.degToRad(v7.maxValue)
        v7.maxValue = rotLimitChanged
      end
      rotLimitChanged = xmlFile:getValue(v5 .. "#invert", false)
      v7.invert = rotLimitChanged
      table.insert(entry.dependentAnimations, v7)
    end
  end
end
function Cylindered:loadCopyLocalDirectionParts(xmlFile, baseName, entry)
  entry.copyLocalDirectionParts = {}
  while true do
    v7 = string.format(".copyLocalDirectionPart(%d)", indices)
    origin = xmlFile:hasProperty(baseName .. v7)
    if not origin then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(xmlFile, baseName .. v7 .. "#index", baseName .. v7 .. "#node")
    origin = xmlFile:getValue(baseName .. v7 .. "#node", nil, self.components, self.i3dMappings)
    if origin ~= nil then
      v8 = xmlFile:getValue(baseName .. v7 .. "#dirScale", nil, true)
      v8 = xmlFile:getValue(baseName .. v7 .. "#upScale", nil, true)
      self:loadDependentComponentJoints(xmlFile, baseName .. v7, {node = origin, dirScale = v8, upScale = v8})
      table.insert(entry.copyLocalDirectionParts, {node = origin, dirScale = v8, upScale = v8})
    end
  end
end
function Cylindered.loadRotationBasedLimits(v0, xmlFile, baseName, entry)
  local indices = xmlFile:getValue(baseName .. "#rotation")
  local v5 = xmlFile:getValue(baseName .. "#rotMin")
  local origin = xmlFile:getValue(baseName .. "#rotMax")
  local v7 = xmlFile:getValue(baseName .. "#transMin")
  local v8 = xmlFile:getValue(baseName .. "#transMax")
  if indices ~= nil then
    if v5 == nil and origin == nil and v7 == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L61
    end
    return {rotMin = v5, rotMax = origin, transMin = v7, transMax = v8, time = (indices - entry.rotMin) / (entry.rotMax - entry.rotMin)}
  end
  return nil
end
function Cylindered.checkMovingPartDirtyUpdateNode(v0, xmlFile, baseName)
end
function Cylindered:setMovingToolDirty(node, forceUpdate, dt)
  if self.spec_cylindered.nodesToMovingTools[node] ~= nil then
    if self.spec_cylindered.nodesToMovingTools[node].transSpeed ~= nil then
      local v10, v11, v12 = getTranslation(self.spec_cylindered.nodesToMovingTools[node].node)
      self.spec_cylindered.nodesToMovingTools[node].curTrans[1] = v10
      self.spec_cylindered.nodesToMovingTools[node].curTrans[2] = v11
      self.spec_cylindered.nodesToMovingTools[node].curTrans[3] = v12
      local rotLimitChanged = math.abs(self.spec_cylindered.nodesToMovingTools[node].curTrans[self.spec_cylindered.nodesToMovingTools[node].translationAxis] - self.spec_cylindered.nodesToMovingTools[node].curTrans[self.spec_cylindered.nodesToMovingTools[node].translationAxis])
      if 0.0001 < rotLimitChanged then
        if 0 >= self.spec_cylindered.nodesToMovingTools[node].curTrans[self.spec_cylindered.nodesToMovingTools[node].translationAxis] - self.spec_cylindered.nodesToMovingTools[node].curTrans[self.spec_cylindered.nodesToMovingTools[node].translationAxis] then
        end
        if not v5.transMax then
        end
        local v14 = math.abs(v7 - v16)
        if v14 >= 0.0001 then
          if not v5.transMin then
          end
          v14 = math.abs(v7 - v16)
          if v14 >= 0.0001 then
          end
        end
        if not v5.transMax then
        end
        local v15 = math.abs(origin - v17)
        if v15 >= 0.0001 then
          if not v5.transMin then
          end
          v15 = math.abs(origin - v17)
          if v15 >= 0.0001 then
          end
        end
        self:updateMovingToolSoundEvents(v11, v12, v13, v14)
      end
    end
    if v5.rotSpeed ~= nil then
      v10, v11, v12 = getRotation(v5.node)
      v5.curRot[1] = v10
      v5.curRot[2] = v11
      v5.curRot[3] = v12
      rotLimitChanged = math.abs(v5.curRot[v5.rotationAxis] - v5.curRot[v5.rotationAxis])
      if 0.0001 < rotLimitChanged then
        if 0 >= v5.curRot[v5.rotationAxis] - v5.curRot[v5.rotationAxis] then
        end
        if not v5.rotMax then
        end
        v14 = math.abs(v7 - v16)
        if v14 >= 0.0001 then
          if not v5.rotMin then
          end
          v14 = math.abs(v7 - v16)
          if v14 >= 0.0001 then
          end
        end
        if not v5.rotMax then
        end
        v15 = math.abs(origin - v17)
        if v15 >= 0.0001 then
          if not v5.rotMin then
          end
          v15 = math.abs(origin - v17)
          if v15 >= 0.0001 then
          end
        end
        self:updateMovingToolSoundEvents(v11, v12, v13, v14)
      end
    end
    Cylindered.setDirty(self, v5)
    if not self.isServer and self.isClient then
      origin:setValue(v5.curTrans[v5.translationAxis])
      origin:setAngle(v5.curRot[v5.rotationAxis])
    end
    if not forceUpdate then
      -- if not v0.finishedFirstUpdate then goto L267 end
      -- if v0.isActive then goto L267 end
    end
    if not dt then
    end
    self:updateDirtyMovingParts(v8, true)
  end
end
function Cylindered:updateCylinderedInitial(placeComponents, keepDirty)
  if placeComponents == nil then
  end
  if keepDirty == nil then
  end
  for v7, v8 in pairs(self.spec_cylindered.activeDirtyMovingParts) do
    Cylindered.setDirty(self, v8)
  end
  for v7, v8 in ipairs(entry.movingTools) do
    if v8.isDirty then
      Cylindered.updateWheels(self, v8)
      if self.isServer then
        Cylindered.updateComponentJoints(self, v8, placeComponents)
      end
      v8.isDirty = keepDirty
    end
    self:updateExtraDependentParts(v8, 9999)
    self:updateDependentAnimations(v8, 9999)
  end
  for v7, v8 in ipairs(entry.movingParts) do
    local rotLimitChanged = self:getIsMovingPartActive(v8)
    if not rotLimitChanged then
      if not v8.smoothedDirectionScale then
        continue
      end
      if not (v8.smoothedDirectionScaleAlpha ~= 0) then
        continue
      end
    end
    if v8.isDirty then
      Cylindered.updateMovingPart(self, v8, placeComponents, nil, rotLimitChanged, false)
      Cylindered.updateWheels(self, v8)
      v8.isDirty = keepDirty
    end
    self:updateExtraDependentParts(v8, 9999)
    self:updateDependentAnimations(v8, 9999)
  end
end
function Cylindered.allowLoadMovingToolStates(v0, xmlFile)
  return true
end
function Cylindered:getMovingToolByNode(node)
  return self.spec_cylindered.nodesToMovingTools[node]
end
function Cylindered:getMovingPartByNode(node)
  return self.spec_cylindered.nodesToMovingParts[node]
end
function Cylindered:getTranslatingPartByNode(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 33)
  if self.spec_cylindered.movingParts[1].translatingParts ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 19, target 32)
    if self.spec_cylindered.movingParts[1].translatingParts[1].node == node then
      return self.spec_cylindered.movingParts[1].translatingParts[1]
    end
    -- TODO: structure LOP_FORNLOOP (pc 31, target 20)
  end
  -- TODO: structure LOP_FORNLOOP (pc 32, target 8)
end
function Cylindered.getIsMovingToolActive(v0, xmlFile)
  return xmlFile.isActive
end
function Cylindered.getIsMovingPartActive(v0, xmlFile)
  return xmlFile.isActive
end
function Cylindered.getMovingToolMoveValue(v0, xmlFile)
  return xmlFile.move + xmlFile.externalMove
end
function Cylindered:isDetachAllowed(superFunc)
  if self.spec_cylindered.detachLockNodes ~= nil then
    for origin, v7 in pairs(self.spec_cylindered.detachLockNodes) do
      local v10 = getRotation(origin.node)
      if v7.detachingRotMinLimit ~= nil and {}[origin.rotationAxis] < v7.detachingRotMinLimit then
        return false, nil
      end
      if v7.detachingRotMaxLimit ~= nil and v7.detachingRotMaxLimit < rotLimitChanged[origin.rotationAxis] then
        return false, nil
      end
      local v11 = getTranslation(v8)
      if v7.detachingTransMinLimit ~= nil and {}[origin.translationAxis] < v7.detachingTransMinLimit then
        return false, nil
      end
      if not (v7.detachingTransMaxLimit ~= nil) then
        continue
      end
      if not (v7.detachingTransMaxLimit < v10[origin.translationAxis]) then
        continue
      end
      return false, nil
    end
  end
  entry = superFunc(self)
  return entry
end
function Cylindered:loadObjectChangeValuesFromXML(superFunc, xmlFile, key, node, object)
  superFunc(self, xmlFile, key, node, object)
  if self.spec_cylindered.nodesToMovingTools ~= nil and self.spec_cylindered.nodesToMovingTools[node] ~= nil then
    local v11 = math.deg(self.spec_cylindered.nodesToMovingTools[node].rotMax or 0)
    local v8 = xmlFile:getValue(...)
    object.movingToolRotMaxActive = v8
    v11 = math.deg(self.spec_cylindered.nodesToMovingTools[node].rotMax or 0)
    v8 = xmlFile:getValue(...)
    object.movingToolRotMaxInactive = v8
    v11 = math.deg(self.spec_cylindered.nodesToMovingTools[node].rotMin or 0)
    v8 = xmlFile:getValue(...)
    object.movingToolRotMinActive = v8
    v11 = math.deg(self.spec_cylindered.nodesToMovingTools[node].rotMin or 0)
    v8 = xmlFile:getValue(...)
    object.movingToolRotMinInactive = v8
    v8 = xmlFile:getValue(key .. "#movingToolStartRotActive")
    object.movingToolStartRotActive = v8
    v8 = xmlFile:getValue(key .. "#movingToolStartRotInactive")
    object.movingToolStartRotInactive = v8
    v8 = xmlFile:getValue(key .. "#movingToolTransMaxActive", self.spec_cylindered.nodesToMovingTools[node].transMax)
    object.movingToolTransMaxActive = v8
    v8 = xmlFile:getValue(key .. "#movingToolTransMaxInactive", self.spec_cylindered.nodesToMovingTools[node].transMax)
    object.movingToolTransMaxInactive = v8
    v8 = xmlFile:getValue(key .. "#movingToolTransMinActive", self.spec_cylindered.nodesToMovingTools[node].transMin)
    object.movingToolTransMinActive = v8
    v8 = xmlFile:getValue(key .. "#movingToolTransMinInactive", self.spec_cylindered.nodesToMovingTools[node].transMin)
    object.movingToolTransMinInactive = v8
    v8 = xmlFile:getValue(key .. "#movingToolStartTransActive")
    object.movingToolStartTransActive = v8
    v8 = xmlFile:getValue(key .. "#movingToolStartTransInactive")
    object.movingToolStartTransInactive = v8
  end
  ObjectChangeUtil.loadValueType(object.values, xmlFile, key, "movingPartUpdate", nil, function(self)
    if u0.getMovingPartByNode ~= nil then
      local superFunc = superFunc:getMovingPartByNode(u1)
      if superFunc ~= nil then
        superFunc.isActive = self
      end
    end
  end, false)
end
function Cylindered:setObjectChangeValues(superFunc, object, isActive)
  superFunc(self, object, isActive)
  if self.spec_cylindered.nodesToMovingTools ~= nil and self.spec_cylindered.nodesToMovingTools[object.node] ~= nil then
    if isActive then
      self.spec_cylindered.nodesToMovingTools[object.node].rotMax = object.movingToolRotMaxActive
      self.spec_cylindered.nodesToMovingTools[object.node].rotMin = object.movingToolRotMinActive
      self.spec_cylindered.nodesToMovingTools[object.node].transMax = object.movingToolTransMaxActive
      self.spec_cylindered.nodesToMovingTools[object.node].transMin = object.movingToolTransMinActive
      if not object.movingToolStartRotActive then
      end
      v5.startRot = origin
      if not object.movingToolStartTransActive then
      end
      v5.startTrans = origin
      return
    end
    v5.rotMax = object.movingToolRotMaxInactive
    v5.rotMin = object.movingToolRotMinInactive
    v5.transMax = object.movingToolTransMaxInactive
    v5.transMin = object.movingToolTransMinInactive
    if not object.movingToolStartRotInactive then
    end
    v5.startRot = origin
    if not object.movingToolStartTransInactive then
    end
    v5.startTrans = origin
  end
end
function Cylindered:loadDischargeNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  local origin = xmlFile:hasProperty(key .. ".movingToolActivation")
  if origin then
    entry.movingToolActivation = {}
    local v7 = xmlFile:getValue(key .. ".movingToolActivation" .. "#node", nil, self.components, self.i3dMappings)
    entry.movingToolActivation.node = v7
    v7 = xmlFile:getValue(key .. ".movingToolActivation" .. "#isInverted", false)
    entry.movingToolActivation.isInverted = v7
    v7 = xmlFile:getValue(key .. ".movingToolActivation" .. "#openFactor", 1)
    entry.movingToolActivation.openFactor = v7
    v7 = xmlFile:getValue(key .. ".movingToolActivation" .. "#openOffset", 0)
    entry.movingToolActivation.openOffset = v7
    entry.movingToolActivation.openOffsetInv = 1 - entry.movingToolActivation.openOffset
  end
  return true
end
function Cylindered:getDischargeNodeEmptyFactor(superFunc, dischargeNode)
  if dischargeNode.movingToolActivation == nil then
    return superFunc(self, dischargeNode)
  end
  local currentSpeed = superFunc(self, dischargeNode)
  local v8 = Cylindered.getMovingToolState(self, self.spec_cylindered.nodesToMovingTools[dischargeNode.movingToolActivation.node])
  local v7 = MathUtil.clamp(v8, 0, 1)
  if dischargeNode.movingToolActivation.isInverted then
    v8 = math.abs(v7 - 1)
  end
  v8 = math.max(v7 - indices.openOffset, 0)
  v8 = MathUtil.clamp(v8 / indices.openOffsetInv / indices.openFactor, 0, 1)
  return currentSpeed * v8
end
function Cylindered:loadShovelNode(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  local origin = xmlFile:hasProperty(key .. ".movingToolActivation")
  if not origin then
    return true
  end
  entry.movingToolActivation = {}
  local v7 = xmlFile:getValue(v5 .. "#node", nil, self.components, self.i3dMappings)
  entry.movingToolActivation.node = v7
  v7 = xmlFile:getValue(v5 .. "#isInverted", false)
  entry.movingToolActivation.isInverted = v7
  v7 = xmlFile:getValue(v5 .. "#openFactor", 1)
  entry.movingToolActivation.openFactor = v7
  return true
end
function Cylindered:getShovelNodeIsActive(superFunc, shovelNode)
  local isActive = superFunc(self, shovelNode)
  if isActive then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L10
  end
  return isActive
  local v7 = Cylindered.getMovingToolState(self, self.spec_cylindered.nodesToMovingTools[shovelNode.movingToolActivation.node])
  if shovelNode.movingToolActivation.isInverted then
    local v8 = math.abs(v7 - 1)
  end
  if v5.openFactor >= v7 then
  end
  return true
end
function Cylindered:loadDynamicMountGrabFromXML(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  local origin = xmlFile:hasProperty(key .. ".movingToolActivation")
  if not origin then
    return true
  end
  entry.movingToolActivation = {}
  local v7 = xmlFile:getValue(v5 .. "#node", nil, self.components, self.i3dMappings)
  entry.movingToolActivation.node = v7
  v7 = xmlFile:getValue(v5 .. "#isInverted", false)
  entry.movingToolActivation.isInverted = v7
  v7 = xmlFile:getValue(v5 .. "#openFactor", 1)
  entry.movingToolActivation.openFactor = v7
  return true
end
function Cylindered:getIsDynamicMountGrabOpened(superFunc, grab)
  local isActive = superFunc(self, grab)
  if isActive then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L10
  end
  return isActive
  local v7 = Cylindered.getMovingToolState(self, self.spec_cylindered.nodesToMovingTools[grab.movingToolActivation.node])
  if grab.movingToolActivation.isInverted then
    local v8 = math.abs(v7 - 1)
  end
  if v5.openFactor >= v7 then
  end
  return true
end
function Cylindered:setComponentJointFrame(superFunc, jointDesc, anchorActor)
  superFunc(self, jointDesc, anchorActor)
  for v8, rotLimitChanged in ipairs(self.spec_cylindered.movingTools) do
    for v13, v14 in ipairs(rotLimitChanged.componentJoints) do
      if v14.anchorActor == 1 then
      end
      local v18, v19, v20 = localToLocal(self.components[v15.componentIndices[2]].node, v16, 0, 0, 0)
      v14.x = v18
      v14.y = v19
      v14.z = v20
      v18, v19, v20 = localDirectionToLocal(self.components[v15.componentIndices[2]].node, v16, 0, 1, 0)
      v14.upX = v18
      v14.upY = v19
      v14.upZ = v20
      v18, v19, v20 = localDirectionToLocal(self.components[v15.componentIndices[2]].node, v16, 0, 0, 1)
      v14.dirX = v18
      v14.dirY = v19
      v14.dirZ = v20
    end
  end
end
function Cylindered:getAdditionalSchemaText(superFunc)
  local t = superFunc(self)
  if self.isClient then
    local entry = self:getIsActiveForInput(true)
    if entry and 1 < #self.spec_cylindered.controlGroupNames and self.spec_cylindered.currentControlGroupIndex ~= 0 then
      local indices = tostring(self.spec_cylindered.currentControlGroupIndex)
    end
  end
  return t
end
function Cylindered:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_cylindered.isHydraulicSamplePlaying then
    local indices = self:getWorkWearMultiplier()
  end
  return multiplier
end
function Cylindered:getDoConsumePtoPower(superFunc)
  local baseName = superFunc(self)
  if not baseName and 0 >= self.spec_cylindered.powerConsumingTimer then
  end
  return baseName
end
function Cylindered:getConsumingLoad(superFunc)
  local baseName, entry = superFunc(self)
  local v5 = math.max(self.spec_cylindered.powerConsumingTimer / self.spec_cylindered.powerConsumingActiveTimeOffset, 0)
  return baseName + v5, entry + 1
end
function Cylindered:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_cylindered.actionEvents)
    if isActiveForInputIgnoreSelection then
      -- TODO: structure LOP_FORNPREP (pc 16, target 82)
      if self.spec_cylindered.movingTools[1].controlGroupIndex ~= 0 and self.spec_cylindered.movingTools[1].controlGroupIndex ~= self.spec_cylindered.currentControlGroupIndex then
      end
      local rotLimitChanged = rotLimitChanged:getValue("easyArmControl")
      if rotLimitChanged then
        -- if v7.easyArmControlActive then goto L48 end
      end
      if not rotLimitChanged then
      end
      if v7.axisActionIndex ~= nil and v8 and v10 then
        local v11, v12 = self:addPoweredActionEvent(entry.actionEvents, v7.axisActionIndex, self, Cylindered.actionEventInput, false, false, true, true, origin, v7.axisActionIcon)
        v13:setActionEventTextPriority(v12, GS_PRIO_NORMAL)
      end
      -- TODO: structure LOP_FORNLOOP (pc 81, target 17)
    end
  end
end
function Cylindered:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  for v8, rotLimitChanged in ipairs(self.spec_cylindered.movingTools) do
    if rotLimitChanged.transSpeed ~= nil then
      if rotLimitChanged.attachTransMax ~= nil then
        -- if v9.attachTransMax >= v9.curTrans[v9.translationAxis] then goto L31 end
      elseif rotLimitChanged.attachTransMin ~= nil and rotLimitChanged.curTrans[rotLimitChanged.translationAxis] < rotLimitChanged.attachTransMin then
      end
      if v12 then
        rotLimitChanged.curTrans[rotLimitChanged.translationAxis] = v11
        local v15 = unpack(rotLimitChanged.curTrans)
        setTranslation(...)
      end
    end
    if rotLimitChanged.rotSpeed ~= nil then
      if rotLimitChanged.attachRotMax ~= nil then
        -- if v9.attachRotMax >= v9.curRot[v9.rotationAxis] then goto L82 end
      elseif rotLimitChanged.attachRotMin ~= nil and rotLimitChanged.curRot[rotLimitChanged.rotationAxis] < rotLimitChanged.attachRotMin then
      end
      if v12 then
        rotLimitChanged.curRot[rotLimitChanged.rotationAxis] = v11
        v15 = unpack(rotLimitChanged.curRot)
        setRotation(...)
      end
    end
    if not v10 then
      continue
    end
    Cylindered.setDirty(self, rotLimitChanged)
  end
end
function Cylindered:onSelect(subSelectionIndex)
  if self.spec_cylindered.controlGroupMapping[subSelectionIndex] ~= nil then
    self.spec_cylindered.currentControlGroupIndex = self.spec_cylindered.controlGroupMapping[subSelectionIndex]
    return
  end
  inputJointDescIndex.currentControlGroupIndex = 0
end
function Cylindered:onUnselect()
  self.spec_cylindered.currentControlGroupIndex = 0
end
function Cylindered:onDeactivate()
  if self.isClient then
    inputJointDescIndex:stopSample(self.spec_cylindered.samples.hydraulic)
    self.spec_cylindered.isHydraulicSamplePlaying = false
    for v5, origin in ipairs(self.spec_cylindered.movingTools) do
      origin.move = 0
      origin.externalMove = 0
    end
  end
end
function Cylindered:onAnimationPartChanged(node)
  self:setMovingToolDirty(node)
end
function Cylindered:onVehicleSettingChanged(gameSettingId, state)
  if gameSettingId == GameSettings.SETTING.EASY_ARM_CONTROL then
    self:setIsEasyControlActive(state)
  end
end
function Cylindered:setToolTranslation(tool, transSpeed, dt, delta)
  local v8, rotLimitChanged, v10 = getTranslation(tool.node)
  tool.curTrans[1] = v8
  tool.curTrans[2] = rotLimitChanged
  tool.curTrans[3] = v10
  if transSpeed ~= nil then
  else
  end
  if tool.transMax ~= nil then
    local v7 = math.min(v5, tool.transMax)
  end
  if tool.transMin ~= nil then
    v7 = math.max(v5, tool.transMin)
  end
  if dt ~= 0 then
    tool.lastTransSpeed = (v5 - origin) / dt
  end
  v8 = math.abs(v7)
  if 0.0001 < v8 then
    tool.curTrans[tool.translationAxis] = v5
    setTranslation(tool.node, tool.curTrans[1], tool.curTrans[2], tool.curTrans[3])
    if 0 >= v7 then
    end
    if v5 ~= tool.transMax and v5 ~= tool.transMin then
    end
    if origin ~= tool.transMax and origin ~= tool.transMin then
    end
    self:updateMovingToolSoundEvents(v10, v11, v12, v13)
    SpecializationUtil.raiseEvent(self, "onMovingToolChanged", tool, transSpeed, dt)
    return true
  end
  return false
end
function Cylindered:setAbsoluteToolTranslation(tool, translation)
  local origin, v7, v8 = getTranslation(tool.node)
  tool.curTrans[1] = origin
  tool.curTrans[2] = v7
  tool.curTrans[3] = v8
  local indices = Cylindered.setToolTranslation(self, tool, nil, 0, translation - tool.curTrans[tool.translationAxis])
  if indices then
    Cylindered.setDirty(self, tool)
    self:raiseDirtyFlags(tool.dirtyFlag)
    self:raiseDirtyFlags(self.spec_cylindered.cylinderedDirtyFlag)
  end
end
function Cylindered:setToolRotation(tool, rotSpeed, dt, delta)
  local v8, rotLimitChanged, v10 = getRotation(tool.node)
  tool.curRot[1] = v8
  tool.curRot[2] = rotLimitChanged
  tool.curRot[3] = v10
  if rotSpeed ~= nil then
  else
  end
  if tool.rotMax ~= nil then
    local v7 = math.min(v5, tool.rotMax)
  end
  if tool.rotMin ~= nil then
    v7 = math.max(v5, tool.rotMin)
  end
  if rotSpeed ~= nil and dt ~= 0 then
    tool.lastRotSpeed = (v5 - tool.curRot[tool.rotationAxis]) / dt
  end
  v8 = math.abs(v7)
  if 0.0001 < v8 then
    if tool.rotMin == nil and tool.rotMax == nil then
      if 2 * math.pi < v5 then
      end
      if v5 < 0 then
      end
    end
    tool.curRot[tool.rotationAxis] = v5
    setRotation(tool.node, tool.curRot[1], tool.curRot[2], tool.curRot[3])
    if 0 >= v7 then
    end
    if v5 ~= tool.rotMax and v5 ~= tool.rotMin then
    end
    if origin ~= tool.rotMax and origin ~= tool.rotMin then
    end
    self:updateMovingToolSoundEvents(v10, v11, v12, v13)
    SpecializationUtil.raiseEvent(self, "onMovingToolChanged", tool, rotSpeed, dt)
    return true
  end
  return false
end
function Cylindered:setAbsoluteToolRotation(tool, rotation, updateDelayedNodes)
  local v7, v8, rotLimitChanged = getRotation(tool.node)
  tool.curRot[1] = v7
  tool.curRot[2] = v8
  tool.curRot[3] = rotLimitChanged
  local v5 = Cylindered.setToolRotation(self, tool, nil, 0, rotation - tool.curRot[tool.rotationAxis])
  if v5 then
    Cylindered.setDirty(self, tool)
    if updateDelayedNodes ~= nil and updateDelayedNodes then
      self:updateDelayedTool(tool)
    end
    self:raiseDirtyFlags(tool.dirtyFlag)
    self:raiseDirtyFlags(self.spec_cylindered.cylinderedDirtyFlag)
  end
end
function Cylindered:setToolAnimation(tool, animSpeed, dt)
  local indices = self:getAnimationTime(tool.animName)
  tool.curAnimTime = indices
  if tool.animMaxTime ~= nil then
    local origin = math.min(tool.curAnimTime + animSpeed * dt, tool.animMaxTime)
  end
  if tool.animMinTime ~= nil then
    origin = math.max(indices, tool.animMinTime)
  end
  if dt ~= 0 then
    tool.lastAnimSpeed = (indices - tool.curAnimTime) / dt
  end
  local v7 = math.abs(origin)
  if 0.0001 < v7 then
    tool.curAnimTime = indices
    self:setAnimationTime(tool.animName, indices, nil, true)
    if 0 >= origin then
    end
    if indices ~= tool.animMaxTime and indices ~= tool.animMinTime and indices ~= 0 and indices ~= 1 then
    end
    if v5 ~= tool.animMaxTime and v5 ~= tool.animMinTime and v5 ~= 0 and v5 ~= 1 then
    end
    self:updateMovingToolSoundEvents(rotLimitChanged, v10, v11, v12)
    SpecializationUtil.raiseEvent(self, "onMovingToolChanged", tool, animSpeed, dt)
    return true
  end
  return false
end
function Cylindered.getMovingToolState(v0, attacherVehicle)
  if attacherVehicle.rotMax ~= nil and attacherVehicle.rotMin ~= nil then
    return (attacherVehicle.curRot[attacherVehicle.rotationAxis] - attacherVehicle.rotMin) / (attacherVehicle.rotMax - attacherVehicle.rotMin)
  end
  if attacherVehicle.transMax ~= nil and attacherVehicle.transMin ~= nil then
  end
  return inputJointDescIndex
end
function Cylindered:setDirty(part)
  if part.isDirty then
    -- if not v0.spec_cylindered.isLoading then goto L61 end
  end
  part.isDirty = true
  self.anyMovingPartsDirty = true
  if part.delayedNode ~= nil then
    self:setDelayedData(part)
  end
  if part.isTool then
    Cylindered.updateAttacherJoints(self, part)
    Cylindered.updateWheels(self, part)
  end
  for v5, origin in pairs(part.dependentPartData) do
    if not (self.currentUpdateDistance < origin.maxUpdateDistance) then
      continue
    end
    Cylindered.setDirty(self, origin.part)
  end
end
function Cylindered:updateWheels(part)
  if part.wheels ~= nil then
    for v5, origin in pairs(part.wheels) do
      local v8 = getParent(origin.repr)
      local v7, v8, rotLimitChanged = localToLocal(v8, origin.node, origin.startPositionX - origin.steeringCenterOffsetX, origin.startPositionY - origin.steeringCenterOffsetY, origin.startPositionZ - origin.steeringCenterOffsetZ)
      origin.positionX = v7
      origin.positionY = v8
      origin.positionZ = rotLimitChanged
      if origin.useReprDirection then
        v7, v8, rotLimitChanged = localDirectionToLocal(origin.repr, origin.node, 0, -1, 0)
        origin.directionX = v7
        origin.directionY = v8
        origin.directionZ = rotLimitChanged
        v7, v8, rotLimitChanged = localDirectionToLocal(origin.repr, origin.node, 1, 0, 0)
        origin.axleX = v7
        origin.axleY = v8
        origin.axleZ = rotLimitChanged
      elseif origin.useDriveNodeDirection then
        v7, v8, rotLimitChanged = localDirectionToLocal(origin.driveNodeDirectionNode, origin.node, 0, -1, 0)
        origin.directionX = v7
        origin.directionY = v8
        origin.directionZ = rotLimitChanged
        v7, v8, rotLimitChanged = localDirectionToLocal(origin.driveNodeDirectionNode, origin.node, 1, 0, 0)
        origin.axleX = v7
        origin.axleY = v8
        origin.axleZ = rotLimitChanged
      end
      self:updateWheelBase(origin)
      -- TODO: structure LOP_FORNPREP (pc 121, target 129)
      self:updateWheelChockPosition(origin.wheelChocks[1])
      -- TODO: structure LOP_FORNLOOP (pc 128, target 122)
    end
  end
end
function Cylindered:updateMovingPart(part, placeComponents, updateDependentParts, isActive, updateSounds)
  if part.referencePoint ~= nil then
    if part.moveToReferenceFrame then
      local parentNode = getParent(part.node)
      local v14, v15, parentNode = localToLocal(part.referenceFrame, parentNode, part.referenceFrameOffset[1], part.referenceFrameOffset[2], part.referenceFrameOffset[3])
      setTranslation(part.node, v14, v15, parentNode)
    end
    v14, v15, parentNode = getWorldTranslation(part.referencePoint)
    if part.referenceDistance == 0 then
      if part.useLocalOffset then
        v14, v15, parentNode = worldToLocal(part.node, v14, v15, parentNode)
        local v17, v18, v19 = localDirectionToWorld(part.node, v14 - part.localReferencePoint[1], v15 - part.localReferencePoint[2], parentNode)
        -- goto L337  (LOP_JUMP +253)
      end
      v14, v15, parentNode = getWorldTranslation(part.node)
    else
      if part.updateLocalReferenceDistance then
        parentNode = getWorldTranslation(part.localReferencePointNode)
        v14, v15, parentNode = worldToLocal(...)
        v17 = MathUtil.vector2Length(v15, parentNode)
        part.localReferenceDistance = v17
      end
      if part.referenceDistancePoint ~= nil then
        parentNode = getWorldTranslation(part.referenceDistancePoint)
        v14, v15, parentNode = worldToLocal(...)
        part.referenceDistance = parentNode
      end
      if part.localReferenceTranslate then
        v14, v15, parentNode = worldToLocal(part.node, origin, v7, v8)
        v17 = math.abs(v15)
        -- if v17 >= v1.referenceDistance then goto L337 end
        v17 = math.sqrt(part.referenceDistance * part.referenceDistance - v15 * v15)
        local v20 = math.abs(parentNode + v17 - part.localReferenceDistance)
        local v21 = math.abs(parentNode - v17 - part.localReferenceDistance)
        if v20 < v21 then
        end
        v20 = getParent(part.node)
        local v21, v22, v23 = unpack(part.localReferenceTranslation)
        local v24, v25, v26 = localToLocal(v20, part.node, v21, v22, v23)
        local v27, v28, v29 = localDirectionToLocal(part.node, v20, 0, 0, v18 - v26)
        setTranslation(part.node, v21 + v27, v22 + v28, v23 + v29)
      else
        if part.dynamicLocalReferenceDistance then
          v18 = getWorldTranslation(part.localReferencePointNode)
          parentNode, v17, v18 = worldToLocal(...)
          v21 = localToWorld(part.localReferencePointNode, 0, 0, part.referenceDistance)
          v19, v20, v21 = worldToLocal(...)
          v22 = MathUtil.vector2Length(v17 - v20, v18 - v21)
        end
        parentNode, v17, v18 = worldToLocal(part.node, origin, v7, v8)
        v19, v20, v21, v22 = MathUtil.getCircleCircleIntersection(0, 0, v14, v17, v18, v15)
        if 0 < part.referenceDistanceThreshold then
          v24 = calcDistanceFrom(part.referencePoint, part.localReferencePointNode)
          v25 = math.abs(v24 - part.referenceDistance)
          if v25 < part.referenceDistanceThreshold then
          end
        end
        if v23 and v19 ~= nil then
          if v21 ~= nil then
            if v19 * (v18 - v20) - v20 * (v17 - v19) >= 0 then
            end
            if part.localReferenceAngleSide >= 0 then
            end
            if v25 ~= true then
            end
          end
          v24, v25, v26 = localDirectionToWorld(part.node, 0, v19, v20)
        end
      end
    end
    -- if not v1.doInversedLineAlignment then goto L757 end
    if part.doInversedLineAlignmentRoot == nil then
      v14 = createTransformGroup("inversedLineAlignmentRoot")
      part.doInversedLineAlignmentRoot = v14
      v15 = getParent(part.node)
      v17 = getChildIndex(part.node)
      link(...)
      parentNode = getTranslation(part.node)
      setTranslation(...)
      parentNode = getRotation(part.node)
      setRotation(...)
      link(part.doInversedLineAlignmentRoot, part.node)
      setTranslation(part.node, 0, 0, 0)
      setRotation(part.node, 0, 0, 0)
    end
    -- TODO: structure LOP_FORNPREP (pc 414, target 757)
    v19, v20, v21 = localToLocal(part.orientationLineNodes[1], part.node, 0, 0, 0)
    v22, v23, v24 = localToLocal(part.orientationLineNodes[1 + 1], part.node, 0, 0, 0)
    v25 = MathUtil.vector2Length(v20, v21)
    v26 = MathUtil.vector2Length(v23, v24)
    v27 = calcDistanceFrom(part.referencePoint, part.doInversedLineAlignmentRoot)
    if v25 <= v27 and v27 <= v26 then
      v29 = MathUtil.lerp(v20, v23, (v27 - v25) / (v26 - v25))
      local v30 = MathUtil.lerp(v21, v24, (v27 - v25) / (v26 - v25))
      local v31, v32, v33 = localDirectionToWorld(part.referenceFrame, 0, 1, 0)
      local v34, v35, v36 = localDirectionToWorld(part.doInversedLineAlignmentRoot, 0, -v29, v30)
      I3DUtil.setWorldDirection(part.node, v34, v35, v36, v31, v32, v33, part.limitedAxis, part.minRot, part.maxRot)
      v34, v35, v36 = getWorldTranslation(part.doInversedLineAlignmentRoot)
      I3DUtil.setWorldDirection(part.doInversedLineAlignmentRoot, origin - v34, v7 - v35, v8 - v36, v31, v32, v33, part.limitedAxis, part.minRot, part.maxRot)
      -- goto L757  (LOP_JUMP +218)
    end
    -- TODO: structure LOP_FORNLOOP (pc 539, target 415)
  else
    if part.alignToWorldY then
      v15 = getRootNode()
      v14, v15, parentNode = localDirectionToWorld(v15, 0, 1, 0)
      v14, v15, parentNode = worldDirectionToLocal(part.referenceFrame, v14, v15, parentNode)
      if parentNode < 0 then
      end
      v17, v18, v19 = localDirectionToWorld(part.referenceFrame, v14, v15, parentNode)
    else
      v14, v15, parentNode = localDirectionToWorld(part.referenceFrame, 0, 0, 1)
    end
    if part.moveToReferenceFrame then
      parentNode = getParent(part.node)
      v14, v15, parentNode = localToLocal(part.referenceFrame, parentNode, part.referenceFrameOffset[1], part.referenceFrameOffset[2], part.referenceFrameOffset[3])
      setTranslation(part.node, v14, v15, parentNode)
    end
    if part.doLineAlignment then
      -- TODO: structure LOP_FORNPREP (pc 634, target 757)
      v20, v21, v22 = localToLocal(part.orientationLineNodes[1], part.referenceFrame, 0, 0, 0)
      v23, v24, v25 = localToLocal(part.orientationLineNodes[1 + 1], part.referenceFrame, 0, 0, 0)
      v26, v27, v28 = localToLocal(part.node, part.referenceFrame, 0, 0, 0)
      if part.partLengthNode ~= nil then
        v30 = calcDistanceFrom(part.node, part.partLengthNode)
      end
      v30, v31, v32, v33, v34 = MathUtil.getCircleLineIntersection(v27, v28, v29, v21, v22, v24, v25)
      if v30 then
        local v37 = MathUtil.getIsOutOfBounds(v31, v21, v24)
        if not v37 then
          v37 = MathUtil.getIsOutOfBounds(v32, v22, v25)
          if not v37 then
          end
        end
        v37 = MathUtil.getIsOutOfBounds(v33, v21, v24)
        if not v37 then
          v37 = MathUtil.getIsOutOfBounds(v34, v22, v25)
          if not v37 then
          end
        end
        -- if not v14 then goto L756 end
        v37 = MathUtil.isNan(v35)
        -- if v37 then goto L756 end
        v37 = MathUtil.isNan(v36)
        -- if v37 then goto L756 end
        local v37, v38, v39 = localDirectionToWorld(part.referenceFrame, 0, v35, v36)
      else
        -- TODO: structure LOP_FORNLOOP (pc 756, target 635)
      end
    end
  end
  if part.smoothedDirectionScale then
    if part.smoothedDirectionScaleAlpha == nil then
      if isActive then
      else
      end
      part.smoothedDirectionScaleAlpha = v14
    end
    if isActive then
      v15 = math.min(part.smoothedDirectionScaleAlpha + (g_currentDt or 9999) * part.smoothedDirectionTime, 1)
      part.smoothedDirectionScaleAlpha = v15
    else
      v15 = math.max(part.smoothedDirectionScaleAlpha - (g_currentDt or 9999) * part.smoothedDirectionTime, 0)
      part.smoothedDirectionScaleAlpha = v15
    end
    parentNode = getParent(part.node)
    v17 = unpack(part.initialDirection)
    v15, parentNode, v17 = localDirectionToWorld(...)
    v18, v19, v20 = MathUtil.vector3Lerp(v15, parentNode, v17, rotLimitChanged, v10, v11, part.smoothedDirectionScaleAlpha)
  end
  if not part.doDirectionAlignment then
    -- if not v13 then goto L1040 end
  end
  if rotLimitChanged == 0 and v10 == 0 then
    -- cmp-jump LOP_JUMPXEQKN R11 aux=0xe -> L1040
  end
  v14, v15, parentNode = localDirectionToWorld(part.referenceFrame, 0, 1, 0)
  if part.invertZ then
  end
  if not self.isActive and part.directionThreshold ~= nil and 0 < part.directionThreshold then
  end
  v18, v19, v20 = worldDirectionToLocal(part.parent, rotLimitChanged, v10, v11)
  v23 = math.abs(part.lastDirection[1] - v18)
  if v17 >= v23 then
    v23 = math.abs(part.lastDirection[2] - v19)
    if v17 >= v23 then
      v23 = math.abs(part.lastDirection[3] - v20)
      if v17 >= v23 then
        v23 = math.abs(part.lastUpVector[1] - v14)
        if v17 >= v23 then
          v23 = math.abs(part.lastUpVector[2] - v15)
          if v17 >= v23 then
            v23 = math.abs(part.lastUpVector[3] - parentNode)
            -- if v17 >= v23 then goto L1000 end
          end
        end
      end
    end
  end
  I3DUtil.setWorldDirection(part.node, rotLimitChanged, v10, v11, v14, v15, parentNode, part.limitedAxis, part.minRot, part.maxRot)
  if part.debug then
    v23, v24, v25 = getWorldTranslation(part.node)
    if part.referencePoint ~= nil then
      v28, v29, v30 = worldToLocal(part.node, origin, v7, v8)
    end
    drawDebugLine(v23, v24, v25, 1, 0, 0, v23 + rotLimitChanged * v26, v24 + v10 * v26, v25 + v11 * v26, 0, 1, 0, true)
  end
  v21[1] = v18
  v21[2] = v19
  v21[3] = v20
  v22[1] = v14
  v22[2] = v15
  v22[3] = parentNode
  -- goto L1001  (LOP_JUMP +1)
  if part.scaleZ and part.localReferenceDistance ~= nil then
    v23 = MathUtil.vector3Length(rotLimitChanged, v10, v11)
    setScale(part.node, 1, 1, v23 / part.localReferenceDistance)
    if part.debug then
      v26 = string.format("scale:%.2f", v23 / part.localReferenceDistance)
      DebugUtil.drawDebugNode(part.node, v26, false)
    end
  end
  if part.doRotationAlignment then
    v14, v15, parentNode = getRotation(part.referenceFrame)
    setRotation(part.node, v14 * part.rotMultiplier, v15 * part.rotMultiplier, parentNode * part.rotMultiplier)
  end
  if part.referencePoint ~= nil and 0 < part.numTranslatingParts then
    v14, v15, parentNode = worldToLocal(part.node, origin, v7, v8)
    -- TODO: structure LOP_FORNPREP (pc 1084, target 1393)
    if part.translatingPartsDivider ~= 1 and part.translatingParts[1].divideTranslatingDistance then
    end
    if v20.minZTrans ~= nil then
      v22 = math.max(v20.minZTrans, v21)
    end
    if v20.maxZTrans ~= nil then
      v22 = math.min(v20.maxZTrans, v21)
    end
    if not v20.divideTranslatingDistance then
    end
    if part.referenceDistanceThreshold ~= 0 then
      v22 = math.abs(v20.lastZ - v21)
      -- if v1.referenceDistanceThreshold >= v22 then goto L1392 end
    end
    if updateSounds ~= false then
      if part.samplesByAction == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R22 aux=0x0 -> L1377
      end
      if v21 ~= v20.lastZ then
        v22 = math.abs(v20.lastZ - v21)
        if 0.0001 < v22 then
          self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_END, Cylindered.SOUND_TYPE_ENDING)
          self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_END, Cylindered.SOUND_TYPE_ENDING)
          self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_START, Cylindered.SOUND_TYPE_STARTING)
          self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_START, Cylindered.SOUND_TYPE_STARTING)
          if v20.lastZ + 0.0001 < v21 then
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_POS, Cylindered.SOUND_TYPE_CONTINUES)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_POS, Cylindered.SOUND_TYPE_CONTINUES)
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_END_POS, Cylindered.SOUND_TYPE_ENDING)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_END_POS, Cylindered.SOUND_TYPE_ENDING)
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_START_POS, Cylindered.SOUND_TYPE_STARTING)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_START_POS, Cylindered.SOUND_TYPE_STARTING)
          elseif v21 < v20.lastZ - 0.0001 then
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_NEG, Cylindered.SOUND_TYPE_CONTINUES)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_NEG, Cylindered.SOUND_TYPE_CONTINUES)
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_END_NEG, Cylindered.SOUND_TYPE_ENDING)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_END_NEG, Cylindered.SOUND_TYPE_ENDING)
            self:onMovingPartSoundEvent(part, Cylindered.SOUND_ACTION_TRANSLATING_START_NEG, Cylindered.SOUND_TYPE_STARTING)
            self:onMovingPartSoundEvent(v20, Cylindered.SOUND_ACTION_TRANSLATING_START_NEG, Cylindered.SOUND_TYPE_STARTING)
          end
        end
      end
    end
    v20.lastZ = v21
    setTranslation(v20.node, v20.startPos[1], v20.startPos[2], v21)
    -- TODO: structure LOP_FORNLOOP (pc 1392, target 1085)
  end
  if v12 then
    if part.copyLocalDirectionParts ~= nil then
      for v17, v18 in pairs(part.copyLocalDirectionParts) do
        v19, v20, v21 = localDirectionToWorld(part.node, 0, 0, 1)
        v23 = getParent(part.node)
        v22, v23, v24 = worldDirectionToLocal(v23, v19, v20, v21)
        v22, v23, v24 = localDirectionToWorld(part.node, 0, 1, 0)
        v26 = getParent(part.node)
        v25, v26, v27 = worldDirectionToLocal(v26, v22, v23, v24)
        setDirection(v18.node, v22 * v18.dirScale[1], v23 * v18.dirScale[2], v24 * v18.dirScale[3], v25 * v18.upScale[1], v26 * v18.upScale[2], v27 * v18.upScale[3])
        if not self.isServer then
          continue
        end
        Cylindered.updateComponentJoints(self, v18, placeComponents)
      end
    end
    if self.isServer then
      Cylindered.updateComponentJoints(self, part, placeComponents)
      Cylindered.updateAttacherJoints(self, part)
      Cylindered.updateWheels(self, part)
    end
    Cylindered.updateWheels(self, part)
  end
  if updateDependentParts then
    for v17, v18 in pairs(part.dependentPartData) do
      if not (self.currentUpdateDistance < v18.maxUpdateDistance) then
        continue
      end
      v20 = self:getIsMovingPartActive(v18.part)
      if not v20 then
        if not v18.part.smoothedDirectionScale then
          continue
        end
        if not (v18.part.smoothedDirectionScaleAlpha ~= 0) then
          continue
        end
      end
      Cylindered.updateMovingPart(self, v19, placeComponents, updateDependentParts, v20)
    end
  end
  part.isDirty = false
end
function Cylindered:updateComponentJoints(entry, placeComponents)
  if self.isServer and entry.componentJoints ~= nil then
    for origin, v7 in ipairs(entry.componentJoints) do
      if v7.anchorActor == 1 then
      end
      if placeComponents then
        local v11, v12, v13 = localToWorld(rotLimitChanged, v7.x, v7.y, v7.z)
        local v14, v15, parentNode = localDirectionToWorld(rotLimitChanged, v7.upX, v7.upY, v7.upZ)
        local v17, v18, v19 = localDirectionToWorld(rotLimitChanged, v7.dirX, v7.dirY, v7.dirZ)
        setWorldTranslation(self.components[v8.componentIndices[2]].node, v11, v12, v13)
        I3DUtil.setWorldDirection(self.components[v8.componentIndices[2]].node, v17, v18, v19, v14, v15, parentNode)
      end
      self:setComponentJointFrame(v8, v7.anchorActor)
    end
  end
end
function Cylindered:updateAttacherJoints(entry)
  if self.isServer then
    if entry.attacherJoints ~= nil then
      for updateSounds, origin in ipairs(entry.attacherJoints) do
        if not (origin.jointIndex ~= 0) then
          continue
        end
        setJointFrame(origin.jointIndex, 0, origin.jointTransform)
      end
    end
    if entry.inputAttacherJoint and self.getAttacherVehicle ~= nil then
      placeComponents = self:getAttacherVehicle()
      if placeComponents ~= nil then
        updateDependentParts = placeComponents:getAttacherJoints()
        if updateDependentParts ~= nil then
          isActive = placeComponents:getAttacherJointIndexFromObject(self)
          if isActive ~= nil then
            origin = self:getActiveInputAttacherJoint()
            if origin ~= nil then
              local v10, v11, v12 = getTranslation(updateDependentParts[isActive].jointTransform)
              local v15 = unpack(updateDependentParts[isActive].jointOrigTrans)
              setTranslation(...)
              local v14 = getParent(updateDependentParts[isActive].jointTransform)
              local v13, v14, v15 = localToWorld(v14, updateDependentParts[isActive].jointOrigTrans[1] + updateDependentParts[isActive].jointPositionOffset[1], updateDependentParts[isActive].jointOrigTrans[2] + updateDependentParts[isActive].jointPositionOffset[2], updateDependentParts[isActive].jointOrigTrans[3] + updateDependentParts[isActive].jointPositionOffset[3])
              local parentNode, v17, v18 = worldToLocal(updateDependentParts[isActive].jointTransform, v13, v14, v15)
              setTranslation(updateDependentParts[isActive].jointTransform, v10, v11, v12)
              local v19, v20, v21 = localToWorld(origin.node, parentNode, v17, v18)
              v20 = getParent(origin.node)
              v19, v20, v21 = worldToLocal(v20, v19, v20, v21)
              setTranslation(origin.node, v19, v20, v21)
              setJointFrame(updateDependentParts[isActive].jointIndex, 1, origin.node)
              local v24 = unpack(origin.jointOrigTrans)
              setTranslation(...)
            end
          end
        end
      end
    end
  end
end
function Cylindered:limitInterpolator(part, placeComponents)
  if self.rotMin ~= nil and part.rotMin ~= nil then
  end
  if self.rotMax ~= nil and part.rotMax ~= nil then
  end
  if self.transMin ~= nil and part.transMin ~= nil then
  end
  if self.transMax ~= nil and part.transMax ~= nil then
  end
  return isActive, updateSounds, origin, v7
end
function Cylindered:updateRotationBasedLimits(tool, dependentTool)
  if dependentTool.rotationBasedLimits ~= nil then
    local state = Cylindered.getMovingToolState(self, tool)
    local isActive, updateSounds, origin, v7 = isActive:get(state)
    if isActive ~= nil then
      dependentTool.movingTool.rotMin = isActive
    end
    if updateSounds ~= nil then
      dependentTool.movingTool.rotMax = updateSounds
    end
    if origin ~= nil then
      dependentTool.movingTool.transMin = origin
    end
    if v7 ~= nil then
      dependentTool.movingTool.transMax = v7
    end
    if self.isServer then
      if isActive == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L62
      end
      if not v8 then
        local rotLimitChanged = Cylindered.setToolRotation(self, dependentTool.movingTool, 0, 0)
      end
      if origin == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L79
      end
      if not v8 then
        rotLimitChanged = Cylindered.setToolTranslation(self, dependentTool.movingTool, 0, 0)
      end
      -- if not v9 then goto L124 end
      Cylindered.setDirty(self, dependentTool.movingTool)
      self:raiseDirtyFlags(dependentTool.movingTool.dirtyFlag)
      self:raiseDirtyFlags(self.spec_cylindered.cylinderedDirtyFlag)
      return
    end
    if isActive == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L124
    end
    v8:setMinMax(dependentTool.movingTool.rotMin, dependentTool.movingTool.rotMax)
  end
end
function Cylindered:actionEventInput(actionName, inputValue, callbackState, isAnalog, isMouse)
  if self.spec_cylindered.movingTools[callbackState] ~= nil then
    self.spec_cylindered.movingTools[callbackState].lastInputTime = g_time
    if self.spec_cylindered.movingTools[callbackState].invertAxis then
    else
    end
    local rotLimitChanged = rotLimitChanged:getValue(GameSettings.SETTING.VEHICLE_ARM_SENSITIVITY)
    if isMouse then
      if v7.moveLocked then
        rotLimitChanged = math.abs(inputValue)
        if rotLimitChanged < 0.75 then
          rotLimitChanged = math.abs(v8 * rotLimitChanged * 16.666 / g_currentDt * v7.mouseSpeedFactor)
          local v11 = math.abs(v7.lockTool.move)
          if v11 * 2 < rotLimitChanged then
            v7.moveLocked = false
            -- goto L104  (LOP_JUMP +39)
          end
          -- goto L104  (LOP_JUMP +37)
        end
        v7.moveLocked = false
      else
        function(self)
          for isAnalog, isMouse in ipairs(self) do
            if not (isAnalog ~= u0) then
              continue
            end
            if not (isMouse.move ~= nil) then
              continue
            end
            if not (isMouse.move ~= 0) then
              continue
            end
            local origin = math.abs(u1)
            local v7 = math.abs(isMouse.move)
            if v7 < origin then
              isMouse.move = 0
              isMouse.moveToSend = 0
              isMouse.moveLocked = true
              isMouse.lockTool = u2
            else
              u1 = 0
              u2.moveLocked = true
              u2.lockTool = isMouse
            end
          end
        end(origin.movingTools)
        if self.getAttachedImplements ~= nil then
          v11 = self:getAttachedImplements()
          for v13, v14 in pairs(...) do
            if not (v14.object.spec_cylindered ~= nil) then
              continue
            end
            rotLimitChanged(v14.object.spec_cylindered.movingTools)
          end
        end
      end
    end
    if v8 ~= v7.move then
      v7.move = v8
    end
    if v7.move ~= v7.moveToSend then
      v7.moveToSend = v7.move
      self:raiseDirtyFlags(origin.cylinderedInputDirtyFlag)
    end
    v7.smoothedMove = v7.smoothedMove * 0.9 + v8 * 0.1
  end
end
function Cylindered:getMovingToolDashboardState(dashboard)
  if dashboard.attacherJointNode ~= nil then
    local updateDependentParts = self:getAttacherJointIndexByNode(dashboard.attacherJointNode)
    dashboard.attacherJointIndex = updateDependentParts
    dashboard.attacherJointNode = nil
  end
  if dashboard.attacherJointIndex ~= nil then
    updateDependentParts = self:getImplementFromAttacherJointIndex(dashboard.attacherJointIndex)
    if updateDependentParts ~= nil then
    else
    end
  end
  if placeComponents ~= nil and placeComponents.spec_cylindered ~= nil then
    for v7, v8 in ipairs(placeComponents.spec_cylindered.movingTools) do
      if not (v8.axis == dashboard.axis) then
        continue
      end
      if v8.controlGroupIndex ~= 0 and v8.controlGroupIndex ~= updateDependentParts.currentControlGroupIndex then
      end
      if updateDependentParts.easyArmControl ~= nil then
      end
      if v10 then
        -- if v8.easyArmControlActive then goto L79 end
      end
      if not v10 then
      end
      if not rotLimitChanged then
        continue
      end
      if not v11 then
        continue
      end
      return (v8.smoothedMove + 1) / 2
    end
  end
  return 0.5
end
function Cylindered:movingToolDashboardAttributes(xmlFile, key, dashboard)
  local isActive = xmlFile:getValue(key .. "#axis")
  dashboard.axis = isActive
  if dashboard.axis == nil then
    Logging.xmlWarning(xmlFile, "Misssing axis attribute for dashboard '%s'", key)
    return false
  end
  isActive = xmlFile:getValue(key .. "#attacherJointIndex")
  dashboard.attacherJointIndex = isActive
  isActive = xmlFile:getValue(key .. "#attacherJointNode", nil, self.components, self.i3dMappings)
  dashboard.attacherJointNode = isActive
  return true
end
