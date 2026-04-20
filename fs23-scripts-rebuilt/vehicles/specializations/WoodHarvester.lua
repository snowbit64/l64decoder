-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/WoodHarvesterCutLengthEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WoodHarvesterCutTreeEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WoodHarvesterDropTreeEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WoodHarvesterHeaderTiltEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WoodHarvesterOnCutTreeEvent.lua")
source("dataS/scripts/vehicles/specializations/events/WoodHarvesterOnDelimbTreeEvent.lua")
WoodHarvester = {NUM_BITS_CUT_LENGTH = 5, HEADER_JOINT_TILT_XML_KEY = "vehicle.woodHarvester.headerJointTilt"}
function WoodHarvester.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
end
function WoodHarvester.initSpecialization()
  v0:addSpecType("woodHarvesterMaxTreeSize", "shopListAttributeIconMaxTreeSize", WoodHarvester.loadSpecValueMaxTreeSize, WoodHarvester.getSpecValueMaxTreeSize, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("WoodHarvester")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvester.cutNode#node", "Cut node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutNode#maxRadius", "Max. radius", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutNode#sizeY", "Size Y", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutNode#sizeZ", "Size Z", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvester.cutNode#attachNode", "Attach node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvester.cutNode#attachReferenceNode", "Attach reference node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutNode#attachMoveSpeed", "Attach move speed", 3)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.woodHarvester.cutNode#releasedComponentJointIndex", "Released component joint")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.woodHarvester.cutNode#releasedComponentJointRotLimitXSpeed", "Released component joint rot limit X speed", 100)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.woodHarvester.cutNode#releasedComponentJoint2Index", "Released component joint 2")
  Vehicle.xmlSchema:register(XMLValueType.STRING, WoodHarvester.HEADER_JOINT_TILT_XML_KEY .. "#animationName", "Header tilt animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, WoodHarvester.HEADER_JOINT_TILT_XML_KEY .. "#speedFactor", "Speed of header tilt animation", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvester.delimbNode#node", "Delimb node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.delimbNode#sizeX", "Delimb size X", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.delimbNode#sizeY", "Delimb size Y", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.delimbNode#sizeZ", "Delimb size Z", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.woodHarvester.delimbNode#delimbOnCut", "Delimb on cut", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutLengths#min", "Min. cut length", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutLengths#max", "Max. cut length", 5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutLengths#step", "Cut length steps", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.woodHarvester.cutLengths#values", "Multiple lengths that are available separated by blank space")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.woodHarvester.cutLengths#startIndex", "Default selected cut length index", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.cutEffects")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.delimbEffects")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.forwardingNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.sounds", "cut")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.sounds", "delimb")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.woodHarvester.cutAnimation#name", "Cut animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutAnimation#speedScale", "Cut animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.cutAnimation#cutTime", "Cut animation cut time")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.woodHarvester.grabAnimation#name", "Grab animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.grabAnimation#speedScale", "Grab animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvester.treeSizeMeasure#node", "Tree size measure node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.treeSizeMeasure#rotMaxRadius", "Max. tree size as reference for grab animation", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvester.treeSizeMeasure#rotMaxAnimTime", "Grab animation time which reflects the rotMaxRadius (0-1)", 1)
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvester.dashboards", "cutLength | curCutLength | diameter")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).woodHarvester#currentCutLengthIndex", "Current cut length selection index", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).woodHarvester#isTurnedOn", "Harvester is turned on", false)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_4, "vehicles.vehicle(?).woodHarvester#lastTreeSize", "Last dimensions of tree to cutNode")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).woodHarvester#lastCutAttachDirection", "Last tree attach direction")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_3, "vehicles.vehicle(?).woodHarvester#lastTreeJointPos", "Last tree joint position in local space of splitShape")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).woodHarvester#hasAttachedSplitShape", "Has split shape attached", false)
end
function WoodHarvester.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onCutTree")
end
function WoodHarvester.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "woodHarvesterSplitShapeCallback", WoodHarvester.woodHarvesterSplitShapeCallback)
  SpecializationUtil.registerFunction(vehicleType, "setLastTreeDiameter", WoodHarvester.setLastTreeDiameter)
  SpecializationUtil.registerFunction(vehicleType, "findSplitShapesInRange", WoodHarvester.findSplitShapesInRange)
  SpecializationUtil.registerFunction(vehicleType, "cutTree", WoodHarvester.cutTree)
  SpecializationUtil.registerFunction(vehicleType, "onDelimbTree", WoodHarvester.onDelimbTree)
  SpecializationUtil.registerFunction(vehicleType, "getCanSplitShapeBeAccessed", WoodHarvester.getCanSplitShapeBeAccessed)
  SpecializationUtil.registerFunction(vehicleType, "loadWoodHarvesterHeaderTiltFromXML", WoodHarvester.loadWoodHarvesterHeaderTiltFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsWoodHarvesterTiltStateAllowed", WoodHarvester.getIsWoodHarvesterTiltStateAllowed)
  SpecializationUtil.registerFunction(vehicleType, "setWoodHarvesterTiltState", WoodHarvester.setWoodHarvesterTiltState)
  SpecializationUtil.registerFunction(vehicleType, "setWoodHarvesterCutLengthIndex", WoodHarvester.setWoodHarvesterCutLengthIndex)
  SpecializationUtil.registerFunction(vehicleType, "dropWoodHarvesterTree", WoodHarvester.dropWoodHarvesterTree)
end
function WoodHarvester.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", WoodHarvester.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", WoodHarvester.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", WoodHarvester.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSupportsAutoTreeAlignment", WoodHarvester.getSupportsAutoTreeAlignment)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAutoTreeAlignmentAllowed", WoodHarvester.getIsAutoTreeAlignmentAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAutoAlignHasValidTree", WoodHarvester.getAutoAlignHasValidTree)
end
function WoodHarvester.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onCutTree", WoodHarvester)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleSettingChanged", WoodHarvester)
end
function WoodHarvester:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.delimbSound", "vehicle.woodHarvester.sounds.delimb")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.cutSound", "vehicle.woodHarvester.sounds.cut")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.treeSizeMeasure#index", "vehicle.woodHarvester.treeSizeMeasure#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.forwardingWheels.wheel(0)", "vehicle.woodHarvester.forwardingNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.cutParticleSystems", "vehicle.woodHarvester.cutEffects")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.woodHarvester.delimbParticleSystems", "vehicle.woodHarvester.delimbEffects")
  self.spec_woodHarvester.curSplitShape = nil
  self.spec_woodHarvester.attachedSplitShape = nil
  self.spec_woodHarvester.hasAttachedSplitShape = false
  self.spec_woodHarvester.isAttachedSplitShapeMoving = false
  self.spec_woodHarvester.attachedSplitShapeLastDelimbTime = 0
  self.spec_woodHarvester.attachedSplitShapeX = 0
  self.spec_woodHarvester.attachedSplitShapeY = 0
  self.spec_woodHarvester.attachedSplitShapeZ = 0
  self.spec_woodHarvester.attachedSplitShapeTargetY = 0
  self.spec_woodHarvester.attachedSplitShapeLastCutY = 0
  self.spec_woodHarvester.attachedSplitShapeStartY = 0
  self.spec_woodHarvester.attachedSplitShapeOnlyMove = false
  self.spec_woodHarvester.attachedSplitShapeOnlyMoveDelay = 0
  self.spec_woodHarvester.attachedSplitShapeMoveEffectActive = false
  self.spec_woodHarvester.attachedSplitShapeDelimbEffectActive = false
  self.spec_woodHarvester.cutTimer = -1
  self.spec_woodHarvester.lastCutEventTime = 0
  self.spec_woodHarvester.cutEventCoolDownTime = 1000
  self.spec_woodHarvester.automaticCuttingEnabled = true
  self.spec_woodHarvester.automaticCuttingIsDirty = false
  self.spec_woodHarvester.lastTreeSize = nil
  self.spec_woodHarvester.lastTreeJointPos = nil
  self.spec_woodHarvester.loadedSplitShapeFromSavegame = false
  local v3 = v3:getValue("vehicle.woodHarvester.cutNode#node", nil, self.components, self.i3dMappings)
  self.spec_woodHarvester.cutNode = v3
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#maxRadius", 1)
  self.spec_woodHarvester.cutMaxRadius = v3
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#sizeY", 1)
  self.spec_woodHarvester.cutSizeY = v3
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#sizeZ", 1)
  self.spec_woodHarvester.cutSizeZ = v3
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#attachNode", nil, self.components, self.i3dMappings)
  self.spec_woodHarvester.cutAttachNode = v3
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#attachReferenceNode", nil, self.components, self.i3dMappings)
  self.spec_woodHarvester.cutAttachReferenceNode = v3
  local v4 = v4:getValue("vehicle.woodHarvester.cutNode#attachMoveSpeed", 3)
  self.spec_woodHarvester.cutAttachMoveSpeed = v4 * 0.001
  v3 = v3:getValue("vehicle.woodHarvester.cutNode#releasedComponentJointIndex")
  if v3 ~= nil then
    self.spec_woodHarvester.cutReleasedComponentJoint = self.componentJoints[v3]
    self.spec_woodHarvester.cutReleasedComponentJointRotLimitX = 0
    local v5 = v5:getValue("vehicle.woodHarvester.cutNode#releasedComponentJointRotLimitXSpeed", 100)
    self.spec_woodHarvester.cutReleasedComponentJointRotLimitXSpeed = v5 * 0.001
  end
  v4 = v4:getValue("vehicle.woodHarvester.cutNode#releasedComponentJoint2Index")
  if v4 ~= nil then
    v2.cutReleasedComponentJoint2 = self.componentJoints[v4]
    v2.cutReleasedComponentJoint2RotLimitX = 0
    local v6 = v6:getValue("vehicle.woodHarvester.cutNode#releasedComponentJointRotLimitXSpeed", 100)
    v2.cutReleasedComponentJoint2RotLimitXSpeed = v6 * 0.001
  end
  v2.headerJointTilt = {}
  v5 = self:loadWoodHarvesterHeaderTiltFromXML(v2.headerJointTilt, self.xmlFile, "vehicle.woodHarvester.headerJointTilt")
  if not v5 then
    v2.headerJointTilt = nil
  end
  if v2.cutAttachReferenceNode ~= nil and v2.cutAttachNode ~= nil then
    v5 = createTransformGroup("helper")
    v2.cutAttachHelperNode = v5
    link(v2.cutAttachReferenceNode, v2.cutAttachHelperNode)
    setTranslation(v2.cutAttachHelperNode, 0, 0, 0)
    setRotation(v2.cutAttachHelperNode, 0, 0, 0)
  end
  v2.cutAttachDirection = 1
  v2.lastCutAttachDirection = 1
  v5 = v5:getValue("vehicle.woodHarvester.delimbNode#node", nil, self.components, self.i3dMappings)
  v2.delimbNode = v5
  v5 = v5:getValue("vehicle.woodHarvester.delimbNode#sizeX", 0.1)
  v2.delimbSizeX = v5
  v5 = v5:getValue("vehicle.woodHarvester.delimbNode#sizeY", 1)
  v2.delimbSizeY = v5
  v5 = v5:getValue("vehicle.woodHarvester.delimbNode#sizeZ", 1)
  v2.delimbSizeZ = v5
  v5 = v5:getValue("vehicle.woodHarvester.delimbNode#delimbOnCut", false)
  v2.delimbOnCut = v5
  v5 = v5:getValue("vehicle.woodHarvester.cutLengths#min", 1)
  v2.cutLengthMin = v5
  v5 = v5:getValue("vehicle.woodHarvester.cutLengths#max", 5)
  v2.cutLengthMax = v5
  v5 = v5:getValue("vehicle.woodHarvester.cutLengths#step", 0.5)
  v2.cutLengthStep = v5
  v5 = v5:getValue("vehicle.woodHarvester.cutLengths#values", nil, true)
  v2.cutLengths = v5
  if v2.cutLengths ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000067 -> L416
  end
  v2.cutLengths = {}
  -- TODO: structure LOP_FORNPREP (pc 405, target 433)
  table.insert(v2.cutLengths, v2.cutLengthMin)
  -- TODO: structure LOP_FORNLOOP (pc 414, target 406)
  -- goto L433  (LOP_JUMP +17)
  -- TODO: structure LOP_FORNPREP (pc 421, target 433)
  if v2.cutLengths[1] == 0 then
    v2.cutLengths[1] = math.huge
  end
  -- TODO: structure LOP_FORNLOOP (pc 432, target 422)
  v6 = v6:getValue("vehicle.woodHarvester.cutLengths#startIndex", 1)
  v5 = MathUtil.clamp(v6, 1, #v2.cutLengths)
  v2.currentCutLengthIndex = v5
  v2.currentCutLength = v2.cutLengths[v2.currentCutLengthIndex] or 1
  if self.isClient then
    v5 = v5:loadEffect(self.xmlFile, "vehicle.woodHarvester.cutEffects", self.components, self, self.i3dMappings)
    v2.cutEffects = v5
    v5 = v5:loadEffect(self.xmlFile, "vehicle.woodHarvester.delimbEffects", self.components, self, self.i3dMappings)
    v2.delimbEffects = v5
    v5 = v5:loadAnimations(self.xmlFile, "vehicle.woodHarvester.forwardingNodes", self.components, self, self.i3dMappings)
    v2.forwardingNodes = v5
    v2.samples = {}
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.woodHarvester.sounds", "cut", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.cut = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.woodHarvester.sounds", "delimb", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.delimb = v6
    v2.isCutSamplePlaying = false
    v2.isDelimbSamplePlaying = false
  end
  v2.cutAnimation = {}
  v6 = v6:getValue("vehicle.woodHarvester.cutAnimation#name")
  v2.cutAnimation.name = v6
  v6 = v6:getValue("vehicle.woodHarvester.cutAnimation#speedScale", 1)
  v2.cutAnimation.speedScale = v6
  v6 = v6:getValue("vehicle.woodHarvester.cutAnimation#cutTime", 1)
  v2.cutAnimation.cutTime = v6
  v2.grabAnimation = {}
  v6 = v6:getValue("vehicle.woodHarvester.grabAnimation#name")
  v2.grabAnimation.name = v6
  v6 = v6:getValue("vehicle.woodHarvester.grabAnimation#speedScale", 1)
  v2.grabAnimation.speedScale = v6
  v2.treeSizeMeasure = {}
  v6 = v6:getValue("vehicle.woodHarvester.treeSizeMeasure#node", nil, self.components, self.i3dMappings)
  v2.treeSizeMeasure.node = v6
  v6 = v6:getValue("vehicle.woodHarvester.treeSizeMeasure#rotMaxRadius", 1)
  v2.treeSizeMeasure.rotMaxRadius = v6
  v6 = v6:getValue("vehicle.woodHarvester.treeSizeMeasure#rotMaxAnimTime", 1)
  v2.treeSizeMeasure.rotMaxAnimTime = v6
  v2.warnInvalidTree = false
  v2.warnInvalidTreeRadius = false
  v2.warnInvalidTreePosition = false
  v2.warnTreeNotOwned = false
  v2.lastDiameter = 0
  v2.texts = {}
  v6 = v6:getText("action_woodHarvesterChangeCutLength")
  v2.texts.actionChangeCutLength = v6
  v6 = v6:getText("action_woodHarvesterTiltHeader")
  v2.texts.woodHarvesterTiltHeader = v6
  v6 = v6:getText("ui_max")
  v2.texts.uiMax = v6
  v6 = v6:getText("unit_mShort")
  v2.texts.unitMeterShort = v6
  v6 = v6:getText("action_woodHarvesterCut")
  v2.texts.actionCut = v6
  v6 = v6:getText("warning_foldingTreeMounted")
  v2.texts.warningFoldingTreeMounted = v6
  v6 = v6:getText("warning_treeTooThick")
  v2.texts.warningTreeTooThick = v6
  v6 = v6:getText("warning_treeTooThickAtPosition")
  v2.texts.warningTreeTooThickAtPosition = v6
  v6 = v6:getText("warning_treeTypeNotSupported")
  v2.texts.warningTreeTypeNotSupported = v6
  v6 = v6:getText("warning_youAreNotAllowedToCutThisTree")
  v2.texts.warningYouDontHaveAccessToThisLand = v6
  local v7 = v7:getText("warning_firstTurnOnTheTool")
  v6 = string.format(v7, self.typeDesc)
  v2.texts.warningFirstTurnOnTheTool = v6
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.woodHarvester.dashboards", {valueTypeToLoad = "cutLength", valueObject = v2, valueFunc = function()
      if u0.currentCutLength == math.huge then
        return 9999999
      end
      return u0.currentCutLength * 100
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.woodHarvester.dashboards", {valueTypeToLoad = "curCutLength", valueObject = v2, valueFunc = function()
      local savegame = math.abs(u0.attachedSplitShapeStartY - u0.attachedSplitShapeY)
      return savegame * 100
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.woodHarvester.dashboards", {valueTypeToLoad = "diameter", valueObject = v2, valueFunc = function()
      return u0.lastDiameter * 1000
    end})
  end
  self:registerVehicleSetting(GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT, true)
end
function WoodHarvester:onPostLoad(savegame)
  if self.spec_woodHarvester.grabAnimation.name ~= nil then
    if self.spec_woodHarvester.grabAnimation.speedScale < 0 then
    end
    self:playAnimation(v2.grabAnimation.name, v3, nil, true)
    self:setAnimationStopTime(v2.grabAnimation.name, v4)
    AnimatedVehicle.updateAnimationByName(self, v2.grabAnimation.name, 99999999, true)
  end
end
function WoodHarvester:onLoadFinished(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v3 = v3:getValue(savegame.key .. ".woodHarvester#currentCutLengthIndex", self.spec_woodHarvester.currentCutLengthIndex)
    self:setWoodHarvesterCutLengthIndex(v3, true)
    local v4 = v4:getValue(savegame.key .. ".woodHarvester#isTurnedOn", false)
    if v4 then
      self:setIsTurnedOn(true)
    end
    if v2.grabAnimation.name ~= nil then
      AnimatedVehicle.updateAnimationByName(self, v2.grabAnimation.name, 99999999, true)
    end
    local v4, v5, v6, v7 = v4:getValue(savegame.key .. ".woodHarvester#lastTreeSize")
    if v4 ~= nil then
      v2.lastTreeSize = {v4, v5, v6, v7}
    end
    local v8, v9, v10 = v8:getValue(savegame.key .. ".woodHarvester#lastTreeJointPos")
    if v8 ~= nil then
      v2.lastTreeJointPos = {v8, v9, v10}
    end
    local v11 = v11:getValue(savegame.key .. ".woodHarvester#lastCutAttachDirection", v2.lastCutAttachDirection)
    v2.lastCutAttachDirection = v11
    v11 = v11:getValue(savegame.key .. ".woodHarvester#hasAttachedSplitShape", false)
    if v11 then
      v11 = self:getIsTurnedOn()
      if v11 then
        self:findSplitShapesInRange(0.5, true)
        if v2.curSplitShape ~= nil and v2.curSplitShape ~= 0 then
          v2.loadedSplitShapeFromSavegame = true
        end
      end
    end
  end
end
function WoodHarvester:onDelete()
  if self.spec_woodHarvester.attachedSplitShapeJointIndex ~= nil then
    removeJoint(self.spec_woodHarvester.attachedSplitShapeJointIndex)
    self.spec_woodHarvester.attachedSplitShapeJointIndex = nil
  end
  if v1.cutAttachHelperNode ~= nil then
    delete(v1.cutAttachHelperNode)
  end
  v2:deleteEffects(v1.cutEffects)
  v2:deleteEffects(v1.delimbEffects)
  v2:deleteSamples(v1.samples)
  v2:deleteAnimations(v1.forwardingNodes)
end
function WoodHarvester:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#currentCutLengthIndex", self.spec_woodHarvester.currentCutLengthIndex)
  local v8 = self:getIsTurnedOn()
  if not v8 then
  end
  xmlFile:setValue(v7, v8)
  xmlFile:setValue(key .. "#hasAttachedSplitShape", v4.hasAttachedSplitShape)
  xmlFile:setValue(key .. "#lastCutAttachDirection", v4.lastCutAttachDirection)
  if v4.hasAttachedSplitShape then
    if v4.lastTreeSize ~= nil then
      v8 = unpack(v4.lastTreeSize)
      xmlFile:setValue(...)
    end
    if v4.lastTreeJointPos ~= nil then
      v8 = unpack(v4.lastTreeJointPos)
      xmlFile:setValue(...)
    end
  end
end
function WoodHarvester:onReadStream(streamId, connection)
  local v4 = streamReadBool(streamId)
  self.spec_woodHarvester.hasAttachedSplitShape = v4
  if self.spec_woodHarvester.hasAttachedSplitShape then
    local v5 = streamReadUIntN(streamId, 7)
    self:setAnimationTime(self.spec_woodHarvester.grabAnimation.name, v5 / 127, true)
    self:setAnimationTime(self.spec_woodHarvester.cutAnimation.name, 1, true)
  end
  v4 = streamReadBool(streamId)
  v3.isAttachedSplitShapeMoving = v4
  v4 = streamReadUIntN(streamId, WoodHarvester.NUM_BITS_CUT_LENGTH)
  self:setWoodHarvesterCutLengthIndex(v4, true)
end
function WoodHarvester:onWriteStream(streamId, connection)
  local v4 = streamWriteBool(streamId, self.spec_woodHarvester.hasAttachedSplitShape)
  if v4 then
    v4 = self:getAnimationTime(self.spec_woodHarvester.grabAnimation.name)
    streamWriteUIntN(streamId, v4 * 127, 7)
  end
  streamWriteBool(streamId, v3.isAttachedSplitShapeMoving)
  streamWriteUIntN(streamId, v3.currentCutLengthIndex, WoodHarvester.NUM_BITS_CUT_LENGTH)
end
function WoodHarvester:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    self.spec_woodHarvester.attachedSplitShapeMoveEffectActive = v5
    if self.spec_woodHarvester.attachedSplitShapeMoveEffectActive then
      v5 = streamReadBool(streamId)
      self.spec_woodHarvester.attachedSplitShapeDelimbEffectActive = v5
      return
    end
    v4.attachedSplitShapeDelimbEffectActive = false
  end
end
function WoodHarvester:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v5 = streamWriteBool(streamId, self.spec_woodHarvester.attachedSplitShapeMoveEffectActive)
    if v5 then
      streamWriteBool(streamId, self.spec_woodHarvester.attachedSplitShapeDelimbEffectActive)
    end
  end
end
function WoodHarvester:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if self.spec_woodHarvester.attachedSplitShape ~= nil then
      local v7 = entityExists(self.spec_woodHarvester.attachedSplitShape)
      -- if v7 then goto L50 end
      self.spec_woodHarvester.attachedSplitShape = nil
      self.spec_woodHarvester.attachedSplitShapeJointIndex = nil
      self.spec_woodHarvester.isAttachedSplitShapeMoving = false
      self.spec_woodHarvester.attachedSplitShapeMoveEffectActive = false
      self.spec_woodHarvester.attachedSplitShapeDelimbEffectActive = false
      self.spec_woodHarvester.cutTimer = -1
    elseif self.spec_woodHarvester.curSplitShape ~= nil then
      v7 = entityExists(self.spec_woodHarvester.curSplitShape)
      if not v7 then
        self.spec_woodHarvester.curSplitShape = nil
      end
    end
    if v6 then
      SpecializationUtil.raiseEvent(self, "onCutTree", 0, false, false)
      if g_server ~= nil then
        local v9 = WoodHarvesterOnCutTreeEvent.new(self, 0)
        v7:broadcastEvent(v9, nil, nil, self)
      end
    end
  end
  if self.isServer then
    if v5.attachedSplitShape == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L982
    end
    if 0 < v5.cutTimer then
      if v5.cutAnimation.name ~= nil then
        local v6 = self:getAnimationTime(v5.cutAnimation.name)
        -- if v5.cutAnimation.cutTime >= v6 then goto L126 end
        v5.cutTimer = 0
      else
        v6 = math.max(v5.cutTimer - dt, 0)
        v5.cutTimer = v6
      end
    end
    if v5.cutTimer ~= 0 then
    end
    if true then
      v5.cutTimer = -1
      local v7, v8, v9 = getWorldTranslation(v5.cutNode)
      local v10, v11, v12 = localDirectionToWorld(v5.cutNode, 1, 0, 0)
      local v13, v14, v15 = localDirectionToWorld(v5.cutNode, 0, 1, 0)
      if v5.attachedSplitShapeJointIndex ~= nil then
        removeJoint(v5.attachedSplitShapeJointIndex)
        v5.attachedSplitShapeJointIndex = nil
        v5.attachedSplitShape = nil
      else
        v5.curSplitShape = nil
      end
      local v21 = getSplitType(v17)
      local v19 = v19:getSplitTypeByIndex(...)
      if v19 ~= nil then
      end
      if v5.delimbOnCut then
        local v20, v21, v22 = getWorldTranslation(v5.delimbNode)
        local v23, v24, v25 = localDirectionToWorld(v5.delimbNode, 1, 0, 0)
        local v26, v27, v28 = localDirectionToWorld(v5.delimbNode, 0, 1, 0)
        local v32 = MathUtil.vector3Length(v7 - v20, v8 - v21, v9 - v22)
        removeSplitShapeAttachments(v17, v20 + (v7 - v20) * 0.5, v21 + (v8 - v21) * 0.5, v22 + (v9 - v22) * 0.5, v23, v24, v25, v26, v27, v28, v32 * 0.7 + v5.delimbSizeX, v5.delimbSizeY, v5.delimbSizeZ)
      end
      v5.attachedSplitShape = nil
      v5.curSplitShape = nil
      v5.prevSplitShape = v17
      v21 = getRigidBodyType(v17)
      if v21 ~= RigidBodyType.STATIC and v16 then
      end
      if v20 then
        v21:removeKnownSplitShape(v17)
        self.shapeBeingCut = v17
        v22 = getRigidBodyType(v17)
        if v22 ~= RigidBodyType.STATIC then
        end
        self.shapeBeingCutIsTree = true
        self.shapeBeingCutIsNew = v16
        splitShape(v17, v7, v8, v9, v10, v11, v12, v13, v14, v15, v5.cutSizeY, v5.cutSizeZ, "woodHarvesterSplitShapeCallback", self)
        v21:removingSplitShape(v17)
      else
        if v5.lastTreeSize ~= nil then
          -- if v5.loadedSplitShapeFromSavegame then goto L376 end
        end
        local v26, v27, v28, v29 = testSplitShape(v17, v7, v8, v9, v10, v11, v12, v13, v14, v15, v5.cutSizeY, v5.cutSizeZ)
        if v26 ~= nil then
          v26, v27 = getSplitShapePlaneExtents(v17, v7, v8, v9, v10, v11, v12)
          if v26 ~= nil and 0.01 < v26 then
            -- goto L388  (LOP_JUMP +12)
          end
        end
        if v21 ~= nil then
          self:woodHarvesterSplitShapeCallback(v17, false, true, v21, v22, v23, v24)
          v26:publish(MessageType.TREE_SHAPE_MOUNTED, v17, self)
          if v25 ~= 0 then
            v5.attachedSplitShapeTargetY = v5.attachedSplitShapeLastCutY + v25 * v5.cutAttachDirection
            v5.attachedSplitShapeOnlyMove = true
            v5.attachedSplitShapeOnlyMoveDelay = 750
            self:onDelimbTree(true)
          end
        end
      end
      if v5.attachedSplitShape == nil then
        SpecializationUtil.raiseEvent(self, "onCutTree", 0, false, false)
        -- cmp-jump LOP_JUMPXEQKNIL R21 aux=0x0 -> L517
        v23 = WoodHarvesterOnCutTreeEvent.new(self, 0)
        v21:broadcastEvent(v23, nil, nil, self)
      elseif v5.delimbOnCut then
        v21, v22, v23 = getWorldTranslation(v5.delimbNode)
        v24, v25, v26 = localDirectionToWorld(v5.delimbNode, 1, 0, 0)
        v27, v28, v29 = localDirectionToWorld(v5.delimbNode, 0, 1, 0)
        local v33 = MathUtil.vector3Length(v7 - v21, v8 - v22, v9 - v23)
        removeSplitShapeAttachments(v5.attachedSplitShape, v21 + (v7 - v21) * 3, v22 + (v8 - v22) * 3, v23 + (v9 - v23) * 3, v24, v25, v26, v27, v28, v29, v33 * 3 + v5.delimbSizeX, v5.delimbSizeY, v5.delimbSizeZ)
      end
      if v20 and v16 then
        v23 = self:getActiveFarm()
        v21, v22 = v21:updateFarmStats(v23, "cutTreeCount", 1)
        if v21 ~= nil then
          v23:tryUnlock("CutTreeFirst", v21)
          v23:tryUnlock("CutTree", v21)
        end
        if v18 ~= "" then
          v25 = self:getActiveFarm()
          v23 = v23:getFarmById(...)
          if v23 ~= nil then
            v24:updateTreeTypesCut(v18)
          end
        end
      end
    end
    v5.attachedSplitShapeMoveEffectActive = false
    v5.attachedSplitShapeDelimbEffectActive = false
    if v5.attachedSplitShape ~= nil and v5.isAttachedSplitShapeMoving then
      if v5.delimbNode ~= nil then
        v7, v8, v9 = getWorldTranslation(v5.delimbNode)
        v10, v11, v12 = localDirectionToWorld(v5.delimbNode, 1, 0, 0)
        v13, v14, v15 = localDirectionToWorld(v5.delimbNode, 0, 1, 0)
        local v16 = removeSplitShapeAttachments(v5.attachedSplitShape, v7, v8, v9, v10, v11, v12, v13, v14, v15, v5.delimbSizeX, v5.delimbSizeY, v5.delimbSizeZ)
        if v16 then
          v5.attachedSplitShapeLastDelimbTime = g_time
        end
        if g_time - v5.attachedSplitShapeLastDelimbTime < 500 then
          v5.attachedSplitShapeDelimbEffectActive = true
        end
      end
      if not v5.attachedSplitShapeOnlyMove then
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L861
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L861
        v9, v10, v11 = getWorldTranslation(v5.cutAttachReferenceNode)
        v12, v13, v14 = localDirectionToWorld(v5.cutAttachReferenceNode, 0, 1, 0)
        v15, v16 = getSplitShapePlaneExtents(v5.attachedSplitShape, v9, v10, v11, v12, v13, v14)
        if v16 ~= nil then
          -- if v16 > 0.1 then goto L737 end
        end
        removeJoint(v5.attachedSplitShapeJointIndex)
        v5.attachedSplitShapeJointIndex = nil
        v5.attachedSplitShape = nil
        self:onDelimbTree(false)
        if g_server ~= nil then
          v19 = WoodHarvesterOnDelimbTreeEvent.new(self, false)
          v17:broadcastEvent(v19, nil, nil, self)
        end
        SpecializationUtil.raiseEvent(self, "onCutTree", 0, false, false)
        -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L861
        v19 = WoodHarvesterOnCutTreeEvent.new(self, 0)
        v17:broadcastEvent(v19, nil, nil, self)
        -- goto L861  (LOP_JUMP +124)
        if v5.attachedSplitShapeY < v5.attachedSplitShapeTargetY then
        else
        end
        if v5.attachedSplitShapeY < v5.attachedSplitShapeTargetY then
          -- if math.min then goto L757 end
        end
        v19 = math.max(v5.attachedSplitShapeY + v5.cutAttachMoveSpeed * dt * v17, v5.attachedSplitShapeTargetY)
        v5.attachedSplitShapeY = v19
        if v5.attachedSplitShapeY == v5.attachedSplitShapeTargetY then
          self:onDelimbTree(false)
          if g_server ~= nil then
            v21 = WoodHarvesterOnDelimbTreeEvent.new(self, false)
            v19:broadcastEvent(v21, nil, nil, self)
          end
        end
      elseif v5.attachedSplitShapeOnlyMoveDelay <= 0 then
        if v5.attachedSplitShapeY < v5.attachedSplitShapeTargetY then
        else
        end
        if v5.attachedSplitShapeY < v5.attachedSplitShapeTargetY then
          -- if math.min then goto L824 end
        end
        v11 = math.max(v5.attachedSplitShapeY + v5.cutAttachMoveSpeed * dt * v9, v5.attachedSplitShapeTargetY)
        v5.attachedSplitShapeY = v11
        if v5.attachedSplitShapeY == v5.attachedSplitShapeTargetY then
          v5.isAttachedSplitShapeMoving = false
          v5.attachedSplitShapeOnlyMove = false
          v5.attachedSplitShapeLastCutY = v5.attachedSplitShapeY
        end
      else
        v5.attachedSplitShapeOnlyMoveDelay = v5.attachedSplitShapeOnlyMoveDelay - dt
      end
      if v7 and v5.attachedSplitShapeJointIndex ~= nil then
        v9, v10, v11 = localToWorld(v5.cutNode, 0.3, 0, 0)
        v12, v13, v14 = localDirectionToWorld(v5.cutNode, 1, 0, 0)
        local v15, v16, v17 = localDirectionToWorld(v5.cutNode, 0, 1, 0)
        local v18, v19, v20, v21, v22 = findSplitShape(v9, v10, v11, v12, v13, v14, v15, v16, v17, v5.cutSizeY, v5.cutSizeZ)
        if v18 == v5.attachedSplitShape then
          v23, v24, v25 = localToWorld(v5.cutNode, 0, (v19 + v20) * 0.5, (v21 + v22) * 0.5)
          v27, v28, v29 = worldToLocal(v5.attachedSplitShape, v23, v24, v25)
          v5.attachedSplitShapeX = v27
          v5.attachedSplitShapeZ = v29
          self:setLastTreeDiameter((v20 - v19 + v22 - v21) * 0.5)
        end
        v23, v24, v25 = localToWorld(v5.attachedSplitShape, v5.attachedSplitShapeX, v5.attachedSplitShapeY, v5.attachedSplitShapeZ)
        setJointPosition(v5.attachedSplitShapeJointIndex, 1, v23, v24, v25)
        if v8 then
          v5.lastTreeJointPos[1] = v5.attachedSplitShapeX
          v5.lastTreeJointPos[2] = v5.attachedSplitShapeY
          v5.lastTreeJointPos[3] = v5.attachedSplitShapeZ
        end
      end
      v5.attachedSplitShapeMoveEffectActive = v7
    end
  end
  if self.isClient then
    if v5.cutAnimation.name ~= nil then
      v6 = self:getIsAnimationPlaying(v5.cutAnimation.name)
      if v6 then
        v6 = self:getAnimationTime(v5.cutAnimation.name)
        -- if v6 >= v5.cutAnimation.cutTime then goto L1044 end
        if not v5.isCutSamplePlaying then
          v6:playSample(v5.samples.cut)
          v5.isCutSamplePlaying = true
        end
        v6:setFillType(v5.cutEffects, FillType.WOODCHIPS)
        v6:startEffects(v5.cutEffects)
      else
        if v5.isCutSamplePlaying then
          v6:stopSample(v5.samples.cut)
          v5.isCutSamplePlaying = false
        end
        v6:stopEffects(v5.cutEffects)
      end
    end
    if v5.attachedSplitShapeMoveEffectActive then
      if not v5.isDelimbSamplePlaying then
        v6:playSample(v5.samples.delimb)
        v5.isDelimbSamplePlaying = true
      end
      v6:setFillType(v5.delimbEffects, FillType.WOODCHIPS)
      v6:startEffects(v5.delimbEffects)
      if v5.attachedSplitShapeDelimbEffectActive then
      else
      end
      v6:setDensity(v8, v9)
      v6:startAnimations(v5.forwardingNodes)
      return
    end
    if v5.isDelimbSamplePlaying then
      v6:stopSample(v5.samples.delimb)
      v5.isDelimbSamplePlaying = false
    end
    v6:stopEffects(v5.delimbEffects)
    v6:stopAnimations(v5.forwardingNodes)
  end
end
function WoodHarvester:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self.spec_woodHarvester.warnInvalidTree = false
  self.spec_woodHarvester.warnInvalidTreeRadius = false
  self.spec_woodHarvester.warnInvalidTreePosition = false
  self.spec_woodHarvester.warnTreeNotOwned = false
  local v6 = self:getIsTurnedOn()
  if v6 and self.spec_woodHarvester.attachedSplitShape == nil and self.spec_woodHarvester.cutNode ~= nil then
    local v6, v7, v8 = getWorldTranslation(self.spec_woodHarvester.cutNode)
    local v9, v10, v11 = localDirectionToWorld(self.spec_woodHarvester.cutNode, 1, 0, 0)
    local v12, v13, v14 = localDirectionToWorld(self.spec_woodHarvester.cutNode, 0, 1, 0)
    self:findSplitShapesInRange()
    if self.spec_woodHarvester.curSplitShape ~= nil then
      local v15, v16, v17, v18 = testSplitShape(self.spec_woodHarvester.curSplitShape, v6, v7, v8, v9, v10, v11, v12, v13, v14, self.spec_woodHarvester.cutSizeY, self.spec_woodHarvester.cutSizeZ)
      if v15 == nil then
        self.spec_woodHarvester.curSplitShape = nil
      else
        local v21, v22, v23 = localToLocal(self.spec_woodHarvester.cutNode, self.spec_woodHarvester.curSplitShape, 0, v15, v17)
        if not false and v22 >= 0.01 then
        end
        v21, v22, v23 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v15, v18)
        if not v21 and v22 >= 0.01 then
        end
        v21, v22, v23 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v16, v17)
        if not v21 and v22 >= 0.01 then
        end
        v21, v22, v23 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v16, v18)
        if not v21 and v22 >= 0.01 then
        end
        if v21 then
          v5.curSplitShape = nil
        end
      end
    end
    if v5.curSplitShape == nil and -1 < v5.cutTimer then
      SpecializationUtil.raiseEvent(self, "onCutTree", 0, false, false)
      if g_server ~= nil then
        v17 = WoodHarvesterOnCutTreeEvent.new(self, 0)
        v15:broadcastEvent(v17, nil, nil, self)
      end
    end
  end
  if self.isServer and v5.attachedSplitShape == nil then
    if v5.cutReleasedComponentJoint ~= nil and v5.cutReleasedComponentJointRotLimitX ~= 0 then
      v6 = math.max(0, v5.cutReleasedComponentJointRotLimitX - v5.cutReleasedComponentJointRotLimitXSpeed * dt)
      v5.cutReleasedComponentJointRotLimitX = v6
      setJointRotationLimit(v5.cutReleasedComponentJoint.jointIndex, 0, true, 0, v5.cutReleasedComponentJointRotLimitX)
    end
    if v5.cutReleasedComponentJoint2 ~= nil and v5.cutReleasedComponentJoint2RotLimitX ~= 0 then
      v6 = math.max(v5.cutReleasedComponentJoint2RotLimitX - v5.cutReleasedComponentJoint2RotLimitXSpeed * dt, 0)
      v5.cutReleasedComponentJoint2RotLimitX = v6
      setJointRotationLimit(v5.cutReleasedComponentJoint2.jointIndex, 0, true, -v5.cutReleasedComponentJoint2RotLimitX, v5.cutReleasedComponentJoint2RotLimitX)
    end
  end
  if self.isServer and self.playDelayedGrabAnimationTime ~= nil and self.playDelayedGrabAnimationTime < g_currentMission.time then
    self.playDelayedGrabAnimationTime = nil
    v6 = self:getAnimationTime(v5.grabAnimation.name)
    if 0 < v6 and v5.grabAnimation.name ~= nil and v5.attachedSplitShape == nil then
      if 0 < v5.grabAnimation.speedScale then
        self:setAnimationStopTime(v5.grabAnimation.name, 0)
      else
        self:setAnimationStopTime(v5.grabAnimation.name, 1)
      end
      v10 = self:getAnimationTime(v5.grabAnimation.name)
      self:playAnimation(v5.grabAnimation.name, -v5.grabAnimation.speedScale, v10, false)
    end
  end
  if self.isClient then
    if v5.actionEvents[InputAction.IMPLEMENT_EXTRA2] ~= nil then
      if v5.hasAttachedSplitShape then
        -- if v5.isAttachedSplitShapeMoving then goto L392 end
        v8 = self:getAnimationTime(v5.cutAnimation.name)
        -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000040 -> L392
      elseif v5.curSplitShape ~= nil then
      end
      v8:setActionEventActive(v6.actionEventId, v7)
      if v5.actionEvents[InputAction.WOOD_HARVESTER_DROP] ~= nil then
        v9:setActionEventActive(v5.actionEvents[InputAction.WOOD_HARVESTER_DROP].actionEventId, v7)
      end
    end
    if v5.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
      v7:setActionEventActive(v5.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, not v5.isAttachedSplitShapeMoving)
      if not v5.isAttachedSplitShapeMoving then
        v7 = string.format("%.1f%s", v5.currentCutLength, v5.texts.unitMeterShort)
        if v5.currentCutLength == math.huge then
        end
        v11 = string.format(v5.texts.actionChangeCutLength, v7)
        v8:setActionEventText(...)
      end
    end
  end
end
function WoodHarvester:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if isActiveForInputIgnoreSelection and isSelected then
    local v5 = self:getIsTurnedOn()
    if v5 and self.spec_woodHarvester.cutNode ~= nil then
      if self.spec_woodHarvester.warnInvalidTreeRadius then
        v5:showBlinkingWarning(self.spec_woodHarvester.texts.warningTreeTooThick, 100)
        return
      end
      if isSelected.warnInvalidTreePosition then
        v5:showBlinkingWarning(isSelected.texts.warningTreeTooThickAtPosition, 100)
        return
      end
      if isSelected.warnInvalidTree then
        v5:showBlinkingWarning(isSelected.texts.warningTreeTypeNotSupported, 100)
        return
      end
      if isSelected.warnTreeNotOwned then
        v5:showBlinkingWarning(isSelected.texts.warningYouDontHaveAccessToThisLand, 100)
      end
    end
  end
end
function WoodHarvester:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_woodHarvester.actionEvents)
    if isActiveForInputIgnoreSelection then
      local isSelected, v5 = self:addPoweredActionEvent(self.spec_woodHarvester.actionEvents, InputAction.IMPLEMENT_EXTRA2, self, WoodHarvester.actionEventCutTree, false, true, true, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      v6:setActionEventText(v5, self.spec_woodHarvester.texts.actionCut)
      local v6, v7 = self:addActionEvent(self.spec_woodHarvester.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, WoodHarvester.actionEventSetCutlength, false, true, false, true, 1)
      v6:setActionEventTextPriority(v7, GS_PRIO_HIGH)
      v6, v7 = self:addActionEvent(self.spec_woodHarvester.actionEvents, InputAction.TOGGLE_CUT_LENGTH_BACK, self, WoodHarvester.actionEventSetCutlength, false, true, false, true, -1)
      v6:setActionEventTextVisibility(v7, false)
      v6, v7 = self:addActionEvent(self.spec_woodHarvester.actionEvents, InputAction.WOOD_HARVESTER_DROP, self, WoodHarvester.actionEventDropTree, false, true, false, true, nil)
      v6:setActionEventTextVisibility(v7, true)
      v6:setActionEventTextPriority(v7, GS_PRIO_NORMAL)
      if self.spec_woodHarvester.headerJointTilt ~= nil then
        v6, v7 = self:addActionEvent(self.spec_woodHarvester.actionEvents, InputAction.TOGGLE_WOOD_HARVESTER_TILT, self, WoodHarvester.actionEventTiltHeader, false, true, false, true, nil)
        v6:setActionEventTextPriority(v7, GS_PRIO_HIGH)
        v6:setActionEventText(v7, self.spec_woodHarvester.texts.woodHarvesterTiltHeader)
      end
    end
  end
end
function WoodHarvester:onDeactivate()
  self.spec_woodHarvester.curSplitShape = nil
  self:setLastTreeDiameter(0)
end
function WoodHarvester:onTurnedOn()
  self.playDelayedGrabAnimationTime = nil
  if self.spec_woodHarvester.grabAnimation.name ~= nil and self.spec_woodHarvester.attachedSplitShape == nil then
    if 0 < self.spec_woodHarvester.grabAnimation.speedScale then
      self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 1)
    else
      self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 0)
    end
    local v6 = self:getAnimationTime(dt.grabAnimation.name)
    self:playAnimation(dt.grabAnimation.name, dt.grabAnimation.speedScale, v6, true)
  end
  self:setLastTreeDiameter(0)
end
function WoodHarvester:onTurnedOff()
  if self.spec_woodHarvester.grabAnimation.name ~= nil and self.spec_woodHarvester.attachedSplitShape == nil then
    self.playDelayedGrabAnimationTime = g_currentMission.time + 500
    if 0 < self.spec_woodHarvester.grabAnimation.speedScale then
      self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 1)
    else
      self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 0)
    end
    local v6 = self:getAnimationTime(dt.grabAnimation.name)
    self:playAnimation(dt.grabAnimation.name, dt.grabAnimation.speedScale, v6, true)
  end
  if self.isClient then
    isActiveForInput:stopEffects(dt.delimbEffects)
    isActiveForInput:stopEffects(dt.cutEffects)
    isActiveForInput:stopSamples(dt.samples)
    dt.isCutSamplePlaying = false
    dt.isDelimbSamplePlaying = false
  end
end
function WoodHarvester:onStateChange(state, data)
  if self.isServer and state == Vehicle.STATE_CHANGE_MOTOR_TURN_ON and self.spec_woodHarvester.attachedSplitShape ~= nil then
    local isActiveForInputIgnoreSelection = self:getCanBeTurnedOn()
    if isActiveForInputIgnoreSelection then
      self:setIsTurnedOn(true)
    end
  end
end
function WoodHarvester:getCanSplitShapeBeAccessed(x, z, shape)
  if Platform.gameplay.treeCutFarmlandRestrictions then
    local v6 = self:getActiveFarm()
    local isSelected = isSelected:canFarmAccessLand(v6, x, z)
    if not isSelected then
      return false
    end
  end
  local v7 = self:getOwner()
  isSelected = isSelected:getHasPlayerPermission(...)
  return isSelected
end
function WoodHarvester.loadWoodHarvesterHeaderTiltFromXML(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection)
  local isSelected = isActiveForInput:getValue(isActiveForInputIgnoreSelection .. "#animationName")
  dt.animationName = isSelected
  if dt.animationName == nil then
    return false
  end
  isSelected = isActiveForInput:getValue(isActiveForInputIgnoreSelection .. "#speedFactor", 1)
  dt.speedFactor = isSelected
  dt.state = false
  dt.lastState = nil
  return true
end
function WoodHarvester.getIsWoodHarvesterTiltStateAllowed(v0, dt)
  return true
end
function WoodHarvester:setWoodHarvesterTiltState(state, noEventSend)
  if state == nil then
  end
  if state ~= isActiveForInputIgnoreSelection.headerJointTilt.state then
    isActiveForInputIgnoreSelection.headerJointTilt.state = state
    if state then
    else
    end
    local v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.headerJointTilt.animationName)
    self:playAnimation(v6, v7, v8, true)
  end
  WoodHarvesterHeaderTiltEvent.sendEvent(self, state, noEventSend)
end
function WoodHarvester:setWoodHarvesterCutLengthIndex(index, noEventSend)
  if index ~= self.spec_woodHarvester.currentCutLengthIndex then
    self.spec_woodHarvester.currentCutLengthIndex = index
    self.spec_woodHarvester.currentCutLength = self.spec_woodHarvester.cutLengths[self.spec_woodHarvester.currentCutLengthIndex] or 1
  end
  WoodHarvesterCutLengthEvent.sendEvent(self, index, noEventSend)
end
function WoodHarvester:dropWoodHarvesterTree(noEventSend)
  if self.isServer then
    if self.spec_woodHarvester.attachedSplitShapeJointIndex ~= nil then
      removeJoint(self.spec_woodHarvester.attachedSplitShapeJointIndex)
      self.spec_woodHarvester.attachedSplitShapeJointIndex = nil
    end
    isActiveForInput.attachedSplitShape = nil
    self:onDelimbTree(false)
    local v5 = WoodHarvesterOnDelimbTreeEvent.new(self, false)
    isActiveForInputIgnoreSelection:broadcastEvent(v5, nil, nil, self)
    SpecializationUtil.raiseEvent(self, "onCutTree", 0, false, false)
    v5 = WoodHarvesterOnCutTreeEvent.new(self, 0)
    isActiveForInputIgnoreSelection:broadcastEvent(v5, nil, nil, self)
  end
  WoodHarvesterDropTreeEvent.sendEvent(self, noEventSend)
end
function WoodHarvester:findSplitShapesInRange(yOffset, skipCutAnimation)
  if self.spec_woodHarvester.attachedSplitShape == nil and self.spec_woodHarvester.cutNode ~= nil then
    local isSelected, v5, v6 = localToWorld(self.spec_woodHarvester.cutNode, yOffset or 0, 0, 0)
    local v7, v8, v9 = localDirectionToWorld(self.spec_woodHarvester.cutNode, 1, 0, 0)
    local v10, v11, v12 = localDirectionToWorld(self.spec_woodHarvester.cutNode, 0, 1, 0)
    if self.spec_woodHarvester.curSplitShape == nil then
      if self.spec_woodHarvester.cutReleasedComponentJoint ~= nil then
        -- cmp-jump LOP_JUMPXEQKN R13 aux=0x80000005 -> L233
      end
      local v13, v14, v15, v16, v17 = findSplitShape(isSelected, v5, v6, v7, v8, v9, v10, v11, v12, isActiveForInputIgnoreSelection.cutSizeY, isActiveForInputIgnoreSelection.cutSizeZ)
      if v13 ~= 0 then
        local v20 = getSplitType(v13)
        local v18 = v18:getSplitTypeByIndex(...)
        if v18 ~= nil then
          -- if v18.allowsWoodHarvester then goto L82 end
        end
        isActiveForInputIgnoreSelection.warnInvalidTree = true
        return
        local v19 = self:getCanSplitShapeBeAccessed(isSelected, v6, v13)
        if v19 then
          local v19, v20, v21 = localDirectionToWorld(v13, 0, 1, 0)
          local v22 = MathUtil.dotProduct(v7, v8, v9, v19, v20, v21)
          local v24 = getRigidBodyType(v13)
          if v24 ~= RigidBodyType.STATIC then
          end
          local v28 = math.acos(v22)
          local v26 = math.abs(v28 - 1.57079)
          -- if 1.57079 - v26 > v23 then goto L233 end
          local v27 = math.max(v15 - v14, v17 - v16)
          if isActiveForInputIgnoreSelection.cutMaxRadius < v27 * 0.5 * v22 then
            isActiveForInputIgnoreSelection.warnInvalidTreeRadius = true
            v26, v27, v28 = localToWorld(isActiveForInputIgnoreSelection.cutNode, yOffset or 1, 0, 0)
            local v26, v27, v28, v29, v30 = findSplitShape(v26, v27, v28, v7, v8, v9, v10, v11, v12, isActiveForInputIgnoreSelection.cutSizeY, isActiveForInputIgnoreSelection.cutSizeZ)
            -- cmp-jump LOP_JUMPXEQKN R13 aux=0x5 -> L233
            v27 = math.max(v28 - v27, v30 - v29)
            v27 = math.cos(1.57079 - v26)
            -- if v27 * 0.5 * v27 > v3.cutMaxRadius then goto L233 end
            isActiveForInputIgnoreSelection.warnInvalidTreeRadius = false
            isActiveForInputIgnoreSelection.warnInvalidTreePosition = true
            return
          end
          v28 = math.max(v15 - v14, v17 - v16)
          self:setLastTreeDiameter(...)
          isActiveForInputIgnoreSelection.curSplitShape = v13
          -- if not v2 then goto L233 end
          self:setAnimationTime(isActiveForInputIgnoreSelection.cutAnimation.name, 1, true)
          isActiveForInputIgnoreSelection.cutTimer = 0
          return
        end
        isActiveForInputIgnoreSelection.warnTreeNotOwned = true
      end
    end
  end
end
function WoodHarvester:cutTree(length, noEventSend)
  WoodHarvesterCutTreeEvent.sendEvent(self, length, noEventSend)
  if self.isServer then
    if length == 0 then
      if self.spec_woodHarvester.attachedSplitShape == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L145
      end
      if isActiveForInputIgnoreSelection.attachedSplitShape == nil and isActiveForInputIgnoreSelection.curSplitShape ~= nil then
        local isSelected = getRigidBodyType(isActiveForInputIgnoreSelection.curSplitShape)
        if isSelected ~= RigidBodyType.STATIC then
          isActiveForInputIgnoreSelection.cutTimer = 0
          -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L145
          self:setAnimationTime(isActiveForInputIgnoreSelection.cutAnimation.name, 0, true)
          local v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.cutAnimation.name)
          self:playAnimation(...)
          -- goto L145  (LOP_JUMP +73)
        end
      end
      isActiveForInputIgnoreSelection.cutTimer = 100
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L145
      self:setAnimationTime(isActiveForInputIgnoreSelection.cutAnimation.name, 0, true)
      v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.cutAnimation.name)
      self:playAnimation(...)
    elseif 0 < length and self.spec_woodHarvester.attachedSplitShape ~= nil then
      self.spec_woodHarvester.attachedSplitShapeTargetY = self.spec_woodHarvester.attachedSplitShapeLastCutY + length * self.spec_woodHarvester.cutAttachDirection
      self:onDelimbTree(true)
      if g_server ~= nil then
        local v6 = WoodHarvesterOnDelimbTreeEvent.new(self, true)
        isSelected:broadcastEvent(v6, nil, nil, self)
      end
    end
  end
  isActiveForInputIgnoreSelection.automaticCuttingIsDirty = false
end
function WoodHarvester:onCutTree(radius, isNewTree, loadedFromSavegame)
  if 0 < radius then
    if self.isClient then
      if self.spec_woodHarvester.grabAnimation.name ~= nil then
        local v6 = math.min(radius / self.spec_woodHarvester.treeSizeMeasure.rotMaxRadius, 1)
        if self.spec_woodHarvester.grabAnimation.speedScale < 0 then
        end
        self:setAnimationStopTime(isSelected.grabAnimation.name, v5)
        v6 = self:getAnimationTime(isSelected.grabAnimation.name)
        if v6 < v5 then
          local v10 = self:getAnimationTime(isSelected.grabAnimation.name)
          self:playAnimation(isSelected.grabAnimation.name, isSelected.grabAnimation.speedScale, v10, true)
        else
          v10 = self:getAnimationTime(isSelected.grabAnimation.name)
          self:playAnimation(isSelected.grabAnimation.name, -isSelected.grabAnimation.speedScale, v10, true)
        end
      end
      self:setLastTreeDiameter(2 * radius)
    end
    isSelected.hasAttachedSplitShape = true
  else
    if self.spec_woodHarvester.grabAnimation.name ~= nil then
      if 0 < self.spec_woodHarvester.grabAnimation.speedScale then
        self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 1)
      else
        self:setAnimationStopTime(self.spec_woodHarvester.grabAnimation.name, 0)
      end
      local v9 = self:getAnimationTime(isSelected.grabAnimation.name)
      self:playAnimation(isSelected.grabAnimation.name, isSelected.grabAnimation.speedScale, v9, true)
    end
    isSelected.hasAttachedSplitShape = false
    isSelected.cutTimer = -1
    if self.isServer and isSelected.headerJointTilt ~= nil and isSelected.headerJointTilt.lastState ~= nil then
      self:setWoodHarvesterTiltState(isSelected.headerJointTilt.lastState)
      isSelected.headerJointTilt.lastState = nil
    end
  end
  if loadedFromSavegame and isSelected.grabAnimation.name ~= nil then
    AnimatedVehicle.updateAnimationByName(self, isSelected.grabAnimation.name, 99999999, true)
  end
end
function WoodHarvester:onVehicleSettingChanged(gameSettingId, state)
  if gameSettingId == GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT then
    self.spec_woodHarvester.automaticCuttingEnabled = state
  end
end
function WoodHarvester:onDelimbTree(state)
  if state then
    self.spec_woodHarvester.isAttachedSplitShapeMoving = true
    return
  end
  noEventSend.isAttachedSplitShapeMoving = false
  if self.isServer then
    if noEventSend.automaticCuttingEnabled then
      self:cutTree(0)
      return
    end
    noEventSend.automaticCuttingIsDirty = true
    return
  end
  noEventSend.automaticCuttingIsDirty = not noEventSend.automaticCuttingEnabled
end
function WoodHarvester:woodHarvesterSplitShapeCallback(shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  v9:addKnownSplitShape(shape)
  v9:addingSplitShape(shape, self.shapeBeingCut, self.shapeBeingCutIsTree)
  if self.spec_woodHarvester.attachedSplitShape == nil and isAbove and not isBelow and self.spec_woodHarvester.cutAttachNode ~= nil and self.spec_woodHarvester.cutAttachReferenceNode ~= nil then
    self.spec_woodHarvester.attachedSplitShape = shape
    self.spec_woodHarvester.lastTreeSize = {minY, maxY, minZ, maxZ}
    local v9, v10, v11 = localToWorld(self.spec_woodHarvester.cutNode, 0, (minY + maxY) * 0.5, (minZ + maxZ) * 0.5)
    if self.spec_woodHarvester.loadedSplitShapeFromSavegame then
      if self.spec_woodHarvester.lastTreeJointPos ~= nil then
        local v16 = unpack(self.spec_woodHarvester.lastTreeJointPos)
        local v14, v15, v16 = localToWorld(...)
      end
      v8.loadedSplitShapeFromSavegame = false
    end
    v15 = worldToLocal(shape, v9, v10, v11)
    v8.lastTreeJointPos = {}
    v14, v15, v16 = localToWorld(v8.cutAttachReferenceNode, 0, 0, (maxZ - minZ) * 0.5)
    local v17, v18, v19 = localDirectionToWorld(shape, 0, 0, 1)
    local v20, v21, v22 = localDirectionToLocal(shape, v8.cutAttachReferenceNode, 0, 1, 0)
    if not v12 then
      if 0 < v21 then
      else
      end
    end
    v8.cutAttachDirection = v23
    v8.lastCutAttachDirection = v8.cutAttachDirection
    local v23, v24, v25 = localDirectionToWorld(v8.cutAttachReferenceNode, 0, v8.cutAttachDirection, 0)
    local v26, v27, v28 = MathUtil.crossProduct(v23, v24, v25, v17, v18, v19)
    local v29, v30, v31 = MathUtil.crossProduct(v26, v27, v28, v23, v24, v25)
    I3DUtil.setWorldDirection(v8.cutAttachHelperNode, v29, v30, v31, v23, v24, v25, 2)
    v29 = JointConstructor.new()
    v29:setActors(v8.cutAttachNode, shape)
    v29:setJointTransforms(v8.cutAttachHelperNode, shape)
    v29:setJointWorldPositions(v14, v15, v16, v9, v10, v11)
    v29:setRotationLimit(0, 0, 0)
    v29:setRotationLimit(1, 0, 0)
    v29:setRotationLimit(2, 0, 0)
    v29:setEnableCollision(false)
    v30 = v29:finalize()
    v8.attachedSplitShapeJointIndex = v30
    if v8.cutReleasedComponentJoint ~= nil then
      v8.cutReleasedComponentJointRotLimitX = math.pi * 0.9
      if v8.cutReleasedComponentJoint.jointIndex ~= 0 then
        setJointRotationLimit(v8.cutReleasedComponentJoint.jointIndex, 0, true, 0, v8.cutReleasedComponentJointRotLimitX)
      end
    end
    if v8.cutReleasedComponentJoint2 ~= nil then
      v8.cutReleasedComponentJoint2RotLimitX = math.pi * 0.9
      if v8.cutReleasedComponentJoint2.jointIndex ~= 0 then
        setJointRotationLimit(v8.cutReleasedComponentJoint2.jointIndex, 0, true, -v8.cutReleasedComponentJoint2RotLimitX, v8.cutReleasedComponentJoint2RotLimitX)
      end
    end
    if v8.headerJointTilt ~= nil and v8.headerJointTilt.state and v8.headerJointTilt.lastState == nil then
      v8.headerJointTilt.lastState = v8.headerJointTilt.state
      self:setWoodHarvesterTiltState(false)
    end
    local v30, v31, v32 = worldToLocal(shape, v9, v10, v11)
    v8.attachedSplitShapeX = v30
    v8.attachedSplitShapeY = v31
    v8.attachedSplitShapeZ = v32
    v8.attachedSplitShapeLastCutY = v8.attachedSplitShapeY
    v8.attachedSplitShapeStartY = v8.attachedSplitShapeY
    v8.attachedSplitShapeTargetY = v8.attachedSplitShapeY
    SpecializationUtil.raiseEvent(self, "onCutTree", (maxY - minY + maxZ - minZ) / 4, self.shapeBeingCutIsNew, v13)
    if g_server ~= nil then
      local v33 = WoodHarvesterOnCutTreeEvent.new(self, (maxY - minY + maxZ - minZ) / 4)
      v31:broadcastEvent(v33, nil, nil, self)
    end
  end
end
function WoodHarvester:setLastTreeDiameter(diameter)
  self.spec_woodHarvester.lastDiameter = diameter
end
function WoodHarvester.getCanBeSelected(v0, length)
  return true
end
function WoodHarvester:getDoConsumePtoPower(superFunc)
  local isActiveForInputIgnoreSelection = superFunc(self)
  if not isActiveForInputIgnoreSelection and not self.spec_woodHarvester.isAttachedSplitShapeMoving then
    isActiveForInputIgnoreSelection = self:getIsAnimationPlaying(self.spec_woodHarvester.cutAnimation.name)
  end
  return isActiveForInputIgnoreSelection
end
function WoodHarvester:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if self.spec_woodHarvester.hasAttachedSplitShape then
    return false, self.spec_woodHarvester.texts.warningFoldingTreeMounted
  end
  return superFunc(self, direction, onAiTurnOn)
end
function WoodHarvester.getSupportsAutoTreeAlignment(v0, length)
  return true
end
function WoodHarvester:getIsAutoTreeAlignmentAllowed(length)
  if self.spec_woodHarvester.hasAttachedSplitShape then
    return false
  end
  return length(self)
end
function WoodHarvester:getAutoAlignHasValidTree(length, noEventSend)
  if self.spec_woodHarvester.curSplitShape == nil then
  end
  if noEventSend > isActiveForInputIgnoreSelection.cutMaxRadius then
  end
  return isSelected, true
end
function WoodHarvester:actionEventCutTree(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getIsTurnedOn()
  if v6 then
    -- if v0.spec_woodHarvester.cutEventCoolDownTime >= g_time - v0.spec_woodHarvester.lastCutEventTime then goto L79 end
    if self.spec_woodHarvester.hasAttachedSplitShape then
      -- if v0.spec_woodHarvester.isAttachedSplitShapeMoving then goto L79 end
      v6 = self:getAnimationTime(self.spec_woodHarvester.cutAnimation.name)
      -- cmp-jump LOP_JUMPXEQKN R6 aux=0x8000000b -> L79
      if self.spec_woodHarvester.automaticCuttingIsDirty then
        self:cutTree(0)
        self.spec_woodHarvester.lastCutEventTime = g_time
        return
      end
      self:cutTree(v5.currentCutLength)
      v5.lastCutEventTime = g_time
      return
    end
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L79
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000011 -> L79
    self:cutTree(0)
    v5.lastCutEventTime = g_time
    return
  end
  v6:showBlinkingWarning(v5.texts.warningFirstTurnOnTheTool, 2000)
end
function WoodHarvester:actionEventSetCutlength(actionName, inputValue, callbackState, isAnalog)
  if not self.spec_woodHarvester.isAttachedSplitShapeMoving then
    if #self.spec_woodHarvester.cutLengths < self.spec_woodHarvester.currentCutLengthIndex + callbackState then
    elseif self.spec_woodHarvester.currentCutLengthIndex + callbackState < 1 then
    end
    self:setWoodHarvesterCutLengthIndex(v6)
  end
end
function WoodHarvester:actionEventDropTree(actionName, inputValue, callbackState, isAnalog)
  self:dropWoodHarvesterTree()
end
function WoodHarvester:actionEventTiltHeader(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getIsWoodHarvesterTiltStateAllowed(self.spec_woodHarvester.headerJointTilt)
  if v6 and not self.spec_woodHarvester.hasAttachedSplitShape then
    self:setWoodHarvesterTiltState()
  end
end
function WoodHarvester:loadSpecValueMaxTreeSize(actionName, inputValue)
  return self:getValue("vehicle.woodHarvester.cutNode#maxRadius")
end
function WoodHarvester:getSpecValueMaxTreeSize(actionName, inputValue, callbackState, isAnalog, v5)
  if self.specs.woodHarvesterMaxTreeSize ~= nil then
    local v9 = MathUtil.round(self.specs.woodHarvesterMaxTreeSize * 2 * 100)
    local v10 = v10:getText("unit_cmShort")
    local v7 = string.format(...)
    if isAnalog and v5 then
      return self.specs.woodHarvesterMaxTreeSize * 2 * 100, self.specs.woodHarvesterMaxTreeSize * 2 * 100, v7
    end
    if isAnalog then
      return v6, v7
    end
    return v7
  end
end
