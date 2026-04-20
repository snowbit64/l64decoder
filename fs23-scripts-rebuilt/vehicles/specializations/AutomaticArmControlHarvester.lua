-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutomaticArmControlHarvester = {STATE_NONE = 0, STATE_MOVE_BACK = 1, STATE_ALIGN_X = 2, STATE_ALIGN_Z = 3, STATE_FINISHED = 4}
{}[AutomaticArmControlHarvester.STATE_NONE] = AutomaticArmControlHarvester.STATE_MOVE_BACK
{}[AutomaticArmControlHarvester.STATE_MOVE_BACK] = AutomaticArmControlHarvester.STATE_ALIGN_X
{}[AutomaticArmControlHarvester.STATE_ALIGN_X] = AutomaticArmControlHarvester.STATE_ALIGN_Z
{}[AutomaticArmControlHarvester.STATE_ALIGN_Z] = AutomaticArmControlHarvester.STATE_FINISHED
{}[AutomaticArmControlHarvester.STATE_NONE] = AutomaticArmControlHarvester.STATE_ALIGN_Z
{}[AutomaticArmControlHarvester.STATE_ALIGN_Z] = AutomaticArmControlHarvester.STATE_ALIGN_X
{}[AutomaticArmControlHarvester.STATE_ALIGN_X] = AutomaticArmControlHarvester.STATE_FINISHED
{{}}[-1] = {}
AutomaticArmControlHarvester.NEXT_STATE = {{}}
AutomaticArmControlHarvester.INVALID_REASON_NONE = 0
AutomaticArmControlHarvester.INVALID_REASON_NO_ACCESS = 1
AutomaticArmControlHarvester.INVALID_REASON_TOO_THICK = 2
AutomaticArmControlHarvester.INVALID_REASON_WRONG_TYPE = 3
function AutomaticArmControlHarvester.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Cylindered, v0)
end
function AutomaticArmControlHarvester.initSpecialization()
  local v3 = v3:getText("shop_configuration")
  v0:addConfigurationType("automaticArmControlHarvester", v3, "automaticArmControlHarvester", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("AutomaticArmControlHarvester")
  AutomaticArmControlHarvester.registerXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlHarvester")
  AutomaticArmControlHarvester.registerXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlHarvester.automaticArmControlHarvesterConfigurations.automaticArmControlHarvesterConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlHarvester.automaticArmControlHarvesterConfigurations.automaticArmControlHarvesterConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AutomaticArmControlHarvester:registerXMLPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. "#requiresEasyArmControl", "If 'true' then it is only available if easy arm control is enabled", true)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMinLimit", "Min. folding time to activate the automatic control", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMaxLimit", "Max. folding time to activate the automatic control", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#returnPositionNode", "This node is used as target if no tree to align has been found (only for platforms with automatic vehicle control)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".treeDetectionNode#node", "Tree detection node")
  self:register(XMLValueType.FLOAT, v1 .. ".treeDetectionNode#minRadius", "Min. distance to tree", 5)
  self:register(XMLValueType.FLOAT, v1 .. ".treeDetectionNode#maxRadius", "Max. distance to tree", 10)
  self:register(XMLValueType.ANGLE, v1 .. ".treeDetectionNode#maxAngle", "Max. angle to the target tree", 45)
  self:register(XMLValueType.FLOAT, v1 .. ".treeDetectionNode#cutHeight", "Tree cur height measured from terrain height", 0.4)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".xAlignment#movingToolNode", "Moving tool to do alignment on X axis (most likely Y-Rot tool)")
  self:register(XMLValueType.FLOAT, v1 .. ".xAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".xAlignment#offset", "X alignment offset from tree detection node", "Automatically calculated with the difference on X between xAlignment and zAlignment node")
  self:register(XMLValueType.ANGLE, v1 .. ".xAlignment#threshold", "X alignment angle threshold (if angle to target is below this value the Y and Z alignment will start)", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".zAlignment#movingToolNode", "Moving tool to do alignment on Z axis (EasyArmControl Z Target)")
  self:register(XMLValueType.FLOAT, v1 .. ".zAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".zAlignment#moveBackDistance", "Distance the arm is moved back behind the tree first to start the x alignment", 2)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".zAlignment#referenceNode", "Reference node which is tried to be moved right in front of the tree")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".yAlignment#movingToolNode", "Moving tool to do alignment on Y axis (EasyArmControl Y Target)")
  self:register(XMLValueType.FLOAT, v1 .. ".yAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".yAlignment#referenceNode", "Reference node which is tried to be moved right in front of the tree")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".alignmentNode(?)#movingToolNode", "MovingTool node which is aligned according to attributes")
  self:register(XMLValueType.ANGLE, v1 .. ".alignmentNode(?)#rotation", "Target rotation")
  self:register(XMLValueType.FLOAT, v1 .. ".alignmentNode(?)#translation", "Target translation")
  self:register(XMLValueType.FLOAT, v1 .. ".alignmentNode(?)#speedScale", "Speed scale used to reach the target rotation/translation", 1)
  self:register(XMLValueType.BOOL, v1 .. ".alignmentNode(?)#isPrerequisite", "Defines if this moving tool is first brought into the target position before the real alignment starts", false)
  TargetTreeMarker.registerXMLPaths(self, v1 .. ".treeMarker")
  self:register(XMLValueType.COLOR, v1 .. ".treeMarker#targetColor", "Color of tree is available to alignment, but not ready for cut yet", "2 2 0")
  self:register(XMLValueType.COLOR, v1 .. ".treeMarker#tooThickColor", "Color of tree is too thick to be cutted", "2 0 0")
  self:register(XMLValueType.FLOAT, v1 .. ".treeMarker#treeOffset", "Offset from tree to marker", 0.025)
end
function AutomaticArmControlHarvester.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "getSupportsAutoTreeAlignment", AutomaticArmControlHarvester.getSupportsAutoTreeAlignment)
  SpecializationUtil.registerFunction(v0, "getIsAutoTreeAlignmentAllowed", AutomaticArmControlHarvester.getIsAutoTreeAlignmentAllowed)
  SpecializationUtil.registerFunction(v0, "getAutoAlignHasValidTree", AutomaticArmControlHarvester.getAutoAlignHasValidTree)
  SpecializationUtil.registerFunction(v0, "getAutoAlignTreeMarkerState", AutomaticArmControlHarvester.getAutoAlignTreeMarkerState)
  SpecializationUtil.registerFunction(v0, "setTreeArmAlignmentInput", AutomaticArmControlHarvester.setTreeArmAlignmentInput)
  SpecializationUtil.registerFunction(v0, "doTreeArmAlignment", AutomaticArmControlHarvester.doTreeArmAlignment)
  SpecializationUtil.registerFunction(v0, "getIsAutomaticAlignmentActive", AutomaticArmControlHarvester.getIsAutomaticAlignmentActive)
  SpecializationUtil.registerFunction(v0, "getAutomaticAlignmentCurrentTarget", AutomaticArmControlHarvester.getAutomaticAlignmentCurrentTarget)
  SpecializationUtil.registerFunction(v0, "getAutomaticAlignmentInvalidTreeReason", AutomaticArmControlHarvester.getAutomaticAlignmentInvalidTreeReason)
  SpecializationUtil.registerFunction(v0, "getBestTreeToAutoAlign", AutomaticArmControlHarvester.getBestTreeToAutoAlign)
  SpecializationUtil.registerFunction(v0, "onTreeAutoOverlapCallback", AutomaticArmControlHarvester.onTreeAutoOverlapCallback)
  SpecializationUtil.registerFunction(v0, "getTreeAutomaticOverwrites", AutomaticArmControlHarvester.getTreeAutomaticOverwrites)
end
function AutomaticArmControlHarvester.registerOverwrittenFunctions(v0)
end
function AutomaticArmControlHarvester.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onPostLoad", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onDelete", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onReadUpdateStream", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onWriteUpdateStream", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onUpdate", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onRegisterActionEvents", AutomaticArmControlHarvester)
  SpecializationUtil.registerEventListener(v0, "onRootVehicleChanged", AutomaticArmControlHarvester)
end
function AutomaticArmControlHarvester:onLoad(v1)
  local v3 = Utils.getNoNil(self.configurations.automaticArmControlHarvester, 1)
  local v4 = string.format("vehicle.automaticArmControlHarvester.automaticArmControlHarvesterConfigurations.automaticArmControlHarvesterConfiguration(%d)", v3 - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.automaticArmControlHarvester.automaticArmControlHarvesterConfigurations.automaticArmControlHarvesterConfiguration", v3, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v2.alignmentNodes = {}
  v5:iterate(v4 .. ".alignmentNode", function(self, v1)
    local v3 = v3:getValue(v1 .. "#movingToolNode", nil, u0.components, u0.i3dMappings)
    v3 = v3:getValue(v1 .. "#rotation")
    v3 = v3:getValue(v1 .. "#translation")
    if {movingToolNode = v3, rotation = v3, translation = v3}.movingToolNode ~= nil then
      if {movingToolNode = v3, rotation = v3, translation = v3}.rotation == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L87
      end
      v3 = v3:getValue(v1 .. "#speedScale", 1)
      v2.speedScale = v3
      v3 = v3:getValue(v1 .. "#isPrerequisite", false)
      v2.isPrerequisite = v3
      table.insert(u1.alignmentNodes, v2)
    end
  end)
  v2.xAlignment = {}
  v2.zAlignment = {}
  v2.yAlignment = {}
  v5 = v5:getValue(v4 .. ".treeDetectionNode#node", nil, self.components, self.i3dMappings)
  v2.treeDetectionNode = v5
  if v2.treeDetectionNode ~= nil then
    v5 = v5:getValue(v4 .. ".treeDetectionNode#minRadius", 5)
    v2.treeDetectionNodeMinRadius = v5
    v5 = v5:getValue(v4 .. ".treeDetectionNode#maxRadius", 10)
    v2.treeDetectionNodeMaxRadius = v5
    v5 = v5:getValue(v4 .. ".treeDetectionNode#maxAngle", 45)
    v2.treeDetectionNodeMaxAngle = v5
    v5 = v5:getValue(v4 .. ".treeDetectionNode#cutHeight", 0.4)
    v2.treeDetectionNodeCutHeight = v5
    v2.treeDetectionNodeCutHeightSafetyOffset = 0.075
    v2.foundTrees = {}
    v2.foundValidTargetServer = false
    v2.lastFoundValidTarget = false
    v2.lastTargetTrans = {0, 0, 0}
    v2.lastRadius = 1
    v2.state = AutomaticArmControlHarvester.STATE_NONE
    v2.xAlignment = {}
    local v6 = v6:getValue(v4 .. ".xAlignment#movingToolNode", nil, self.components, self.i3dMappings)
    v2.xAlignment.movingToolNode = v6
    v6 = v6:getValue(v4 .. ".xAlignment#speedScale", 1)
    v2.xAlignment.speedScale = v6
    v6 = v6:getValue(v4 .. ".xAlignment#offset")
    v2.xAlignment.offset = v6
    v6 = v6:getValue(v4 .. ".xAlignment#threshold", 1)
    v2.xAlignment.threshold = v6
    v2.zAlignment = {}
    v6 = v6:getValue(v4 .. ".zAlignment#movingToolNode", nil, self.components, self.i3dMappings)
    v2.zAlignment.movingToolNode = v6
    v6 = v6:getValue(v4 .. ".zAlignment#speedScale", 1)
    v2.zAlignment.speedScale = v6
    v6 = v6:getValue(v4 .. ".zAlignment#moveBackDistance", 2)
    v2.zAlignment.moveBackDistance = v6
    v6 = v6:getValue(v4 .. ".zAlignment#referenceNode", nil, self.components, self.i3dMappings)
    v2.zAlignment.referenceNode = v6
    v2.yAlignment = {}
    v6 = v6:getValue(v4 .. ".yAlignment#movingToolNode", nil, self.components, self.i3dMappings)
    v2.yAlignment.movingToolNode = v6
    v6 = v6:getValue(v4 .. ".yAlignment#speedScale", 1)
    v2.yAlignment.speedScale = v6
    v6 = v6:getValue(v4 .. ".yAlignment#referenceNode", nil, self.components, self.i3dMappings)
    v2.yAlignment.referenceNode = v6
    v5 = TargetTreeMarker.new(self, self.rootNode)
    v2.treeMarker = v5
    v5:loadFromXML(self.xmlFile, v4 .. ".treeMarker", self.baseDirectory)
    v2.treeMarker.cutColor = {v2.treeMarker.color[1], v2.treeMarker.color[2], v2.treeMarker.color[3]}
    v6 = v6:getValue(v4 .. ".treeMarker#targetColor", "2 2 0", true)
    v2.treeMarker.targetColor = v6
    v6 = v6:getValue(v4 .. ".treeMarker#tooThickColor", "2 0 0", true)
    v2.treeMarker.tooThickColor = v6
    v6 = v6:getValue(v4 .. ".treeMarker#treeOffset", 0.025)
    v2.treeMarker.treeOffset = v6
    v5 = v5:getValue(v4 .. "#requiresEasyArmControl", true)
    v2.requiresEasyArmControl = v5
    v5 = v5:getValue(v4 .. "#foldMinLimit", 0)
    v2.foldMinLimit = v5
    v5 = v5:getValue(v4 .. "#foldMaxLimit", 1)
    v2.foldMaxLimit = v5
    v5 = v5:getValue(v4 .. "#returnPositionNode", nil, self.components, self.i3dMappings)
    v2.returnPositionNode = v5
    v2.pendingArmReturn = false
    if v2.xAlignment.offset == nil and v2.yAlignment.referenceNode ~= nil and v2.xAlignment.movingToolNode ~= nil then
      local v5, v6, v7 = localToLocal(v2.yAlignment.referenceNode, v2.xAlignment.movingToolNode, 0, 0, 0)
      v2.xAlignment.offset = -v5
    end
    v2.controlInputLastValue = 0
    v2.controlInputTimer = 0
    v2.invalidTreeReason = AutomaticArmControlHarvester.INVALID_REASON_NONE
    v5 = self:getNextDirtyFlag()
    v2.dirtyFlag = v5
    -- if not Platform.gameplay.automaticVehicleControl then goto L595 end
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", AutomaticArmControlHarvester)
    return
  end
  v6 = v6:getValue(v4 .. ".xAlignment#offset")
  v2.xAlignment.offset = v6
  v6 = v6:getValue(v4 .. ".zAlignment#referenceNode", nil, self.components, self.i3dMappings)
  v2.zAlignment.referenceNode = v6
  v6 = v6:getValue(v4 .. ".yAlignment#referenceNode", nil, self.components, self.i3dMappings)
  v2.yAlignment.referenceNode = v6
  SpecializationUtil.removeEventListener(self, "onDelete", AutomaticArmControlHarvester)
  SpecializationUtil.removeEventListener(self, "onUpdate", AutomaticArmControlHarvester)
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", AutomaticArmControlHarvester)
end
function AutomaticArmControlHarvester:onPostLoad(v1)
  if self.spec_automaticArmControlHarvester.xAlignment.movingToolNode ~= nil then
    local v4 = self:getMovingToolByNode(self.spec_automaticArmControlHarvester.xAlignment.movingToolNode)
    self.spec_automaticArmControlHarvester.xAlignment.movingTool = v4
  end
  if v2.zAlignment.movingToolNode ~= nil then
    v4 = self:getMovingToolByNode(v2.zAlignment.movingToolNode)
    v2.zAlignment.movingTool = v4
  end
  if v2.yAlignment.movingToolNode ~= nil then
    v4 = self:getMovingToolByNode(v2.yAlignment.movingToolNode)
    v2.yAlignment.movingTool = v4
  end
  -- TODO: structure LOP_FORNPREP (pc 58, target 80)
  local v7 = self:getMovingToolByNode(v2.alignmentNodes[#v2.alignmentNodes].movingToolNode)
  v2.alignmentNodes[#v2.alignmentNodes].movingTool = v7
  if v2.alignmentNodes[#v2.alignmentNodes].movingTool == nil then
    table.remove(v2.alignmentNodes, #v2.alignmentNodes)
  end
  -- TODO: structure LOP_FORNLOOP (pc 79, target 59)
end
function AutomaticArmControlHarvester:onDelete()
  if self.spec_automaticArmControlHarvester.treeMarker ~= nil then
    v2:delete()
  end
end
function AutomaticArmControlHarvester:onReadUpdateStream(v1, v2, v3)
  if self.spec_automaticArmControlHarvester.treeDetectionNode ~= nil then
    local v5 = v3:getIsServer()
    if not v5 then
      v5 = streamReadBool(v1)
      -- if not v5 then goto L40 end
      local v6 = streamReadBool(v1)
      if v6 then
      else
      end
      v4.controlInputLastValue = v5
      v4.controlInputTimer = 250
      return
    end
    v5 = streamReadBool(v1)
    if v5 then
      v5 = streamReadBool(v1)
      v4.foundValidTargetServer = v5
    end
  end
end
function AutomaticArmControlHarvester:onWriteUpdateStream(v1, v2, v3)
  if self.spec_automaticArmControlHarvester.treeDetectionNode ~= nil then
    local v5 = v2:getIsServer()
    if v5 then
      local v8 = bitAND(v3, self.spec_automaticArmControlHarvester.dirtyFlag)
      if v8 == 0 then
      end
      v5 = v5(v6, true)
      -- if not v5 then goto L57 end
      if v4.controlInputLastValue == 0 then
      end
      v5(v6, true)
      return
    end
    v8 = bitAND(v3, v4.dirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteBool(v1, v4.foundValidTargetServer)
    end
  end
end
function AutomaticArmControlHarvester:onUpdate(v1, v2, v3, v4)
  self.spec_automaticArmControlHarvester.invalidTreeReason = AutomaticArmControlHarvester.INVALID_REASON_NONE
  local v10 = self:getIsAutoTreeAlignmentAllowed()
  if v10 then
    local v10, v11, v12 = self:getBestTreeToAutoAlign(self.spec_automaticArmControlHarvester.treeDetectionNode, self.spec_automaticArmControlHarvester.foundTrees)
    if v10 ~= nil then
      local v13, v14, v15 = getWorldTranslation(v10)
      local v20 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v13, v14, v15)
      local v16 = math.max(v14, v20 + self.spec_automaticArmControlHarvester.treeDetectionNodeCutHeight + self.spec_automaticArmControlHarvester.treeDetectionNodeCutHeightSafetyOffset)
      local v16, v17, v18, v19, v20, v21, v22 = SplitShapeUtil.getTreeOffsetPosition(v10, v13, v16, v15, 3)
      -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L235
      v23:setPosition(v16, v17, v18, v19, v20, v21, v22 + self.spec_automaticArmControlHarvester.treeMarker.treeOffset, 0)
      local v23, v24 = self:getAutoAlignTreeMarkerState(v22)
      if v23 then
        v23:setColor(self.spec_automaticArmControlHarvester.treeMarker.cutColor[1], self.spec_automaticArmControlHarvester.treeMarker.cutColor[2], self.spec_automaticArmControlHarvester.treeMarker.cutColor[3], false)
      else
        if v24 then
          -- if v0.spec_automaticArmControlHarvester.treeMarker.targetColor then goto L116 end
        end
        if v5.state == AutomaticArmControlHarvester.STATE_NONE then
          v24:setColor(v5.treeMarker.tooThickColor[1], v5.treeMarker.tooThickColor[2], v5.treeMarker.tooThickColor[3], false)
        else
          v24:setColor(v5.treeMarker.tooThickColor[1], v5.treeMarker.tooThickColor[2], v5.treeMarker.tooThickColor[3], true)
        end
      end
      v5.lastRadius = v22
      v5.lastTargetTrans[1] = v16
      v5.lastTargetTrans[2] = v17
      v5.lastTargetTrans[3] = v18
    elseif v11 ~= nil then
      v13, v14, v15 = getWorldTranslation(v11)
      v20 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v13, v14, v15)
      v16 = math.max(v14, v20 + self.spec_automaticArmControlHarvester.treeDetectionNodeCutHeight + self.spec_automaticArmControlHarvester.treeDetectionNodeCutHeightSafetyOffset)
      v16, v17, v18, v19, v20, v21, v22 = SplitShapeUtil.getTreeOffsetPosition(v11, v13, v16, v15, 3)
      if v16 ~= nil then
        v23:setPosition(v16, v17, v18, v19, v20, v21, v22 + self.spec_automaticArmControlHarvester.treeMarker.treeOffset, 0)
        v23:setColor(self.spec_automaticArmControlHarvester.treeMarker.tooThickColor[1], self.spec_automaticArmControlHarvester.treeMarker.tooThickColor[2], self.spec_automaticArmControlHarvester.treeMarker.tooThickColor[3], false)
        self.spec_automaticArmControlHarvester.invalidTreeReason = v12
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 240, target 246)
    v5.foundTrees[#v5.foundTrees] = nil
    -- TODO: structure LOP_FORNLOOP (pc 245, target 241)
    if not Platform.gameplay.automaticVehicleControl and v5.state ~= AutomaticArmControlHarvester.STATE_NONE then
      table.insert(v5.foundTrees, v10)
    end
    v13, v14, v15 = getWorldTranslation(v5.treeDetectionNode)
    overlapSphere(v13, v14, v15, v5.treeDetectionNodeMaxRadius, "onTreeAutoOverlapCallback", self, CollisionFlag.TREE, false, true, false, true)
  end
  if self.isClient then
    if v5.foundValidTargetServer and v6 then
    end
    if not v10 then
      -- if not v9 then goto L302 end
    end
    v11:setIsActive(g_woodCuttingMarkerEnabled)
    AutomaticArmControlHarvester.updateActionEvents(self, v10)
  end
  if self.isServer then
    if v6 ~= v5.lastFoundValidTarget then
      v5.foundValidTargetServer = v6
      v5.lastFoundValidTarget = v6
      self:raiseDirtyFlags(v5.dirtyFlag)
      v5.state = AutomaticArmControlHarvester.STATE_NONE
    end
    if Platform.gameplay.automaticVehicleControl then
      v10 = self:getIsTurnedOn()
      if v10 then
        -- if not v6 then goto L398 end
        -- if v5.state == AutomaticArmControlHarvester.STATE_FINISHED then goto L398 end
        self:doTreeArmAlignment(v5.lastTargetTrans[1], v5.lastTargetTrans[2], v5.lastTargetTrans[3], 1)
      elseif v5.pendingArmReturn then
        if v5.returnPositionNode ~= nil then
          v10, v11, v12 = getWorldTranslation(v5.returnPositionNode)
          self:doTreeArmAlignment(v10, v11, v12, -1)
          -- if v5.state ~= AutomaticArmControlHarvester.STATE_FINISHED then goto L398 end
          v5.pendingArmReturn = false
        else
          v5.pendingArmReturn = false
        end
      end
    end
    if 0 < v5.controlInputTimer then
      v5.controlInputTimer = v5.controlInputTimer - v1
      if v5.controlInputTimer <= 0 then
        v5.controlInputLastValue = 0
        v5.controlInputTimer = 0
      end
      self:setTreeArmAlignmentInput(v5.controlInputLastValue)
    end
  end
end
function AutomaticArmControlHarvester:onRegisterActionEvents(v1, v2)
  if self.isClient then
    self:clearActionEventsTable(self.spec_automaticArmControlHarvester.actionEvents)
    if v2 then
      local v4, v5 = self:addPoweredActionEvent(self.spec_automaticArmControlHarvester.actionEvents, InputAction.TREE_AUTOMATIC_ALIGN, self, AutomaticArmControlHarvester.actionEvent, true, false, true, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_VERY_HIGH)
      AutomaticArmControlHarvester.updateActionEvents(self, false)
    end
  end
end
function AutomaticArmControlHarvester:actionEvent(v1, v2, v3, v4)
  self:setTreeArmAlignmentInput(v2)
end
function AutomaticArmControlHarvester:updateActionEvents(v1)
  if self.spec_automaticArmControlHarvester.actionEvents[InputAction.TREE_AUTOMATIC_ALIGN] ~= nil then
    v4:setActionEventActive(self.spec_automaticArmControlHarvester.actionEvents[InputAction.TREE_AUTOMATIC_ALIGN].actionEventId, v1)
  end
end
function AutomaticArmControlHarvester:onRootVehicleChanged(v1)
  if v1.actionController ~= nil then
    if self.spec_automaticArmControlHarvester.controlledAction ~= nil then
      v4:updateParent(v1.actionController)
      return
    end
    local v4 = v3:registerAction("automaticArmControlHarvester", nil, 4)
    v2.controlledAction = v4
    v4:setCallback(self, AutomaticArmControlHarvester.actionControllerEvent)
    v4:setFinishedFunctions(self, function(self)
      return not u0.pendingArmReturn
    end, true, true)
    v4:setActionIcons("WOOD_SAW", "WOOD_SAW", true)
    return
  end
  if v2.controlledAction ~= nil then
    v4:remove()
    v2.controlledAction = nil
  end
end
function AutomaticArmControlHarvester:actionControllerEvent(v1)
  if v1 < 0 then
    self.spec_automaticArmControlHarvester.pendingArmReturn = true
  end
  v2.state = AutomaticArmControlHarvester.STATE_NONE
  return true
end
function AutomaticArmControlHarvester.getSupportsAutoTreeAlignment(v0)
  return false
end
function AutomaticArmControlHarvester:getIsAutoTreeAlignmentAllowed()
  if self.getIsControlled ~= nil then
    local v2 = self:getIsControlled()
    if not v2 then
      return false
    end
  end
  if v1.requiresEasyArmControl then
    if self.spec_cylindered.easyArmControl ~= nil then
      -- if v0.spec_cylindered.easyArmControl.state then goto L30 end
    end
    return false
  end
  v2 = self:getSupportsAutoTreeAlignment()
  if not v2 then
    -- TODO: structure LOP_FORNPREP (pc 40, target 53)
    if self.childVehicles[1] ~= self then
      local v7 = self.childVehicles[1]:getSupportsAutoTreeAlignment()
      -- if not v7 then goto L52 end
    else
      -- TODO: structure LOP_FORNLOOP (pc 52, target 41)
    end
    if not v2 then
      return false
    end
  end
  if self.getFoldAnimTime ~= nil then
    v2 = self:getFoldAnimTime()
    if v2 >= v1.foldMinLimit then
      -- if v1.foldMaxLimit >= v2 then goto L73 end
    end
    return false
  end
  return true
end
function AutomaticArmControlHarvester.getAutoAlignHasValidTree(v0, v1)
  return false, false
end
function AutomaticArmControlHarvester:getAutoAlignTreeMarkerState(v1, v2)
  local v3, v4 = self:getAutoAlignHasValidTree(v1)
  if v3 then
    return v3, v4
  end
  if v2 ~= false then
    -- TODO: structure LOP_FORNPREP (pc 13, target 32)
    if self.childVehicles[1] ~= self and self.childVehicles[1].getAutoAlignTreeMarkerState ~= nil then
      local v9, v10 = self.childVehicles[1]:getAutoAlignTreeMarkerState(v1, false)
      if v9 then
        return v9, v10
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 31, target 14)
  end
  return false, v4
end
function AutomaticArmControlHarvester:setTreeArmAlignmentInput(v1)
  if self.isServer then
    if 0 < v1 and self.spec_automaticArmControlHarvester.state ~= AutomaticArmControlHarvester.STATE_FINISHED and self.spec_automaticArmControlHarvester.foundValidTargetServer then
      self:doTreeArmAlignment(self.spec_automaticArmControlHarvester.lastTargetTrans[1], self.spec_automaticArmControlHarvester.lastTargetTrans[2], self.spec_automaticArmControlHarvester.lastTargetTrans[3], 1)
      return
    end
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000008 -> L52
    v2.state = AutomaticArmControlHarvester.STATE_NONE
    return
  end
  v2.controlInputLastValue = v1
  if 0 < v1 then
    self:raiseDirtyFlags(v2.dirtyFlag)
  end
end
function AutomaticArmControlHarvester:doTreeArmAlignment(v1, v2, v3, v4)
  local v6 = AutomaticArmControlHarvester.prepareAlignment(self, v4)
  if not v6 then
    return
  end
  if v5.state == AutomaticArmControlHarvester.STATE_NONE then
    v5.state = AutomaticArmControlHarvester.NEXT_STATE[v4][v5.state]
  end
  -- TODO: structure LOP_FORNPREP (pc 47, target 75)
  if self.childVehicles[1] ~= self and self.childVehicles[1].getTreeAutomaticOverwrites ~= nil then
    local v13 = AutomaticArmControlHarvester.prepareAlignment(self.childVehicles[1], v4)
    if not v13 then
      return
    end
    local v13, v14, v15 = v12:getTreeAutomaticOverwrites()
    if v15 ~= nil then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 74, target 48)
  if v5.xAlignment.movingTool ~= nil and v5.state ~= AutomaticArmControlHarvester.STATE_FINISHED and v5.state ~= AutomaticArmControlHarvester.STATE_MOVE_BACK then
    local v9, v10, v11 = worldToLocal(v5.xAlignment.movingTool.node, v1, v2, v3)
    local v12 = MathUtil.vector2Length(v9, v11)
    v14 = math.atan((v9 + (v8 or 0)) / v12)
    v15 = AutomaticArmControlHarvester.calculateMovingToolTargetMove(self, v5.xAlignment.movingTool, v5.xAlignment.movingTool.curRot[v5.xAlignment.movingTool.rotationAxis] + v14 * v5.xAlignment.speedScale)
    if v15 ~= 0 then
      v5.xAlignment.movingTool.externalMove = v15
    else
      local v16 = math.abs(v14 * v5.xAlignment.speedScale)
      if v16 < v5.xAlignment.threshold and v5.state == AutomaticArmControlHarvester.STATE_ALIGN_X then
        v5.state = AutomaticArmControlHarvester.NEXT_STATE[v4][v5.state]
      end
    end
  end
  if v5.zAlignment.movingTool ~= nil and v6 ~= nil then
    v9, v10, v11 = worldToLocal(v5.treeDetectionNode, v1, v2, v3)
    v12, v13, v14 = localToLocal(v6, v5.treeDetectionNode, 0, 0, 0)
    if v5.state == AutomaticArmControlHarvester.STATE_MOVE_BACK then
      -- if v14 - v11 - v5.lastRadius - v5.zAlignment.moveBackDistance >= v5.zAlignment.moveBackDistance * 0.5 then goto L279 end
      v5.state = AutomaticArmControlHarvester.NEXT_STATE[v4][v5.state]
    elseif v5.state == AutomaticArmControlHarvester.STATE_ALIGN_Z then
      v16 = math.abs(v14 - v11 - v5.lastRadius)
      if v16 < 0.03 then
        v5.state = AutomaticArmControlHarvester.NEXT_STATE[v4][v5.state]
      end
    end
    v16 = math.abs(v15)
    if 0.03 < v16 then
      local v22 = MathUtil.sign(v15)
      v5.zAlignment.movingTool.externalMove = -(v15 + 0.5 * v22) * v5.zAlignment.speedScale
    else
      v5.zAlignment.movingTool.externalMove = 0
    end
  end
  if v5.yAlignment.movingTool ~= nil and v7 ~= nil and v5.state == AutomaticArmControlHarvester.STATE_ALIGN_Z then
    v9, v10, v11 = getWorldTranslation(v7)
    v13 = math.abs(v2 - v5.treeDetectionNodeCutHeightSafetyOffset - v10)
    if 0.03 < v13 then
      local v18 = MathUtil.sign(v2 - v5.treeDetectionNodeCutHeightSafetyOffset - v10)
      v5.yAlignment.movingTool.externalMove = (v2 - v5.treeDetectionNodeCutHeightSafetyOffset - v10 + 0.5 * v18) * v5.yAlignment.speedScale
      return
    end
    v5.yAlignment.movingTool.externalMove = 0
  end
end
function AutomaticArmControlHarvester.calculateMovingToolTargetMove(v0, v1, v2)
  local v8 = MathUtil.sign(v1.lastRotSpeed / v1.rotAcceleration)
  local v10 = math.abs(v1.lastRotSpeed / v1.rotAcceleration)
  -- TODO: structure LOP_FORNPREP (pc 28, target 32)
  -- TODO: structure LOP_FORNLOOP (pc 31, target 29)
  if v1.rotMin ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L69
    local v11 = Cylindered.getMovingToolState(v0, v1)
    v11 = MathUtil.inverseLerp(v1.rotMin, v1.rotMax, v1.curRot[v1.rotationAxis] + v1.lastRotSpeed + -v1.rotAcceleration * v8)
    v11 = MathUtil.inverseLerp(v1.rotMin, v1.rotMax, v2)
  else
    local v12 = MathUtil.normalizeRotationForShortestPath(v1.curRot[v1.rotationAxis], v2)
    v12 = MathUtil.normalizeRotationForShortestPath(v1.curRot[v1.rotationAxis] + v1.lastRotSpeed + -v1.rotAcceleration * v8, v2)
  end
  if v10 < v8 then
    v12 = MathUtil.sign(v1.rotSpeed)
    -- if v9 >= v10 then goto L114 end
    return 0
  else
    v12 = MathUtil.sign(v1.rotSpeed)
    if v10 < v9 then
      return 0
    end
  end
  local v13 = math.abs(v10 - v8)
  if v13 < v7 then
    return 0
  end
  return v11
end
function AutomaticArmControlHarvester:prepareAlignment(v1)
  if v1 == 1 then
    if self.getIsTurnedOn ~= nil then
      local v3 = self:getIsTurnedOn()
      if not v3 then
        v3 = self:getCanBeTurnedOn()
        if v3 then
          self:setIsTurnedOn(true)
        end
      end
    end
    if self.spec_woodHarvester ~= nil and self.spec_woodHarvester.headerJointTilt ~= nil and self.spec_woodHarvester.headerJointTilt.state then
      self:setWoodHarvesterTiltState(false)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 42, target 74)
  if v2.alignmentNodes[1].rotation ~= nil then
    local v8 = AutomaticArmControlHarvester.calculateMovingToolTargetMove(self, v2.alignmentNodes[1].movingTool, v2.alignmentNodes[1].rotation)
  end
  if v7 ~= 0 then
    v6.movingTool.externalMove = v7
    if v6.isPrerequisite then
      return false
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 73, target 43)
  return true
end
function AutomaticArmControlHarvester:getIsAutomaticAlignmentActive()
  if self.spec_automaticArmControlHarvester.state ~= AutomaticArmControlHarvester.STATE_NONE and self.spec_automaticArmControlHarvester.state == AutomaticArmControlHarvester.STATE_FINISHED then
  end
  return v2
end
function AutomaticArmControlHarvester:getAutomaticAlignmentCurrentTarget()
  if self.spec_automaticArmControlHarvester.lastFoundValidTarget then
    return self.spec_automaticArmControlHarvester.lastTargetTrans[1], self.spec_automaticArmControlHarvester.lastTargetTrans[2], self.spec_automaticArmControlHarvester.lastTargetTrans[3], self.spec_automaticArmControlHarvester.lastRadius
  end
  return nil, nil, nil, nil
end
function AutomaticArmControlHarvester:getAutomaticAlignmentInvalidTreeReason()
  return self.spec_automaticArmControlHarvester.invalidTreeReason
end
function AutomaticArmControlHarvester:getBestTreeToAutoAlign(v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 8, target 116)
  local v11 = entityExists(v2[1])
  if v11 then
    v11 = getRigidBodyType(v2[1])
    if v11 == RigidBodyType.STATIC then
      v11 = getIsSplitShapeSplit(v2[1])
      if not v11 then
        v11 = calcDistanceFrom(v1, v2[1])
        local v12, v13, v14 = localToLocal(v2[1], v1, 0, 0, 0)
        local v15, v16 = MathUtil.vector2Normalize(v12, v14)
        v15 = MathUtil.getYRotationFromDirection(v15, v16)
        v16 = math.abs(v15)
        if v16 < self.spec_automaticArmControlHarvester.treeDetectionNodeMaxAngle then
          local v18 = getSplitType(v2[1])
          v16 = v16:getSplitTypeByIndex(...)
          if v16.allowsWoodHarvester then
            local v17, v18, v19 = getWorldTranslation(v2[1])
            local v20 = WoodHarvester.getCanSplitShapeBeAccessed(self, v17, v19, v2[1])
            if v20 then
              local v22 = math.deg(v15)
              local v21 = math.abs(...)
              -- if v21 + v11 * 2 >= math.huge then goto L115 end
              -- goto L115  (LOP_JUMP +11)
            end
          else
          end
        end
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 115, target 9)
  return v4, v5, v6
end
function AutomaticArmControlHarvester:onTreeAutoOverlapCallback(v1, ...)
  if not self.isDeleted and v1 ~= 0 then
    local v2 = getHasClassId(v1, ClassIds.SHAPE)
    if v2 then
      v2 = getUserAttribute(v1, "isTreeStump")
      if v2 ~= true then
        local v4 = getSplitType(v1)
        v2 = v2:getSplitTypeByIndex(...)
        if v2 ~= nil then
          local v4, v5, v6 = getWorldTranslation(self.spec_automaticArmControlHarvester.treeDetectionNode)
          local v7, v8, v9 = getWorldTranslation(v1)
          local v10 = MathUtil.vector2Length(v4 - v7, v6 - v9)
          if self.spec_automaticArmControlHarvester.treeDetectionNodeMinRadius < v10 and v10 < self.spec_automaticArmControlHarvester.treeDetectionNodeMaxRadius then
            table.insert(self.spec_automaticArmControlHarvester.foundTrees, v1)
          end
        end
      end
    end
  end
end
function AutomaticArmControlHarvester:getTreeAutomaticOverwrites()
  return self.spec_automaticArmControlHarvester.zAlignment.referenceNode, self.spec_automaticArmControlHarvester.yAlignment.referenceNode, self.spec_automaticArmControlHarvester.xAlignment.offset
end
function AutomaticArmControlHarvester.drawDebugCircleRange(v0, v1, v2, v3, v4)
  -- TODO: structure LOP_FORNPREP (pc 4, target 78)
  local v12 = math.cos(math.pi * 0.5 + v3 + (1 - 1) / v2 * (v4 - v3))
  local v13 = math.sin(math.pi * 0.5 + v3 + (1 - 1) / v2 * (v4 - v3))
  local v13, v14, v15 = localToWorld(v0, 0 + v12 * v1, 0, 0 + v13 * v1)
  local v16 = math.cos(math.pi * 0.5 + v3 + 1 / v2 * (v4 - v3))
  v16 = math.sin(math.pi * 0.5 + v3 + 1 / v2 * (v4 - v3))
  local v16, v17, v18 = localToWorld(v0, 0 + v16 * v1, 0, 0 + v16 * v1)
  drawDebugLine(v13, v14, v15, 1, 0, 0, v16, v17, v18, 1, 0, 0)
  -- TODO: structure LOP_FORNLOOP (pc 77, target 5)
end
