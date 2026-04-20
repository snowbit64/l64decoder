-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutomaticArmControlForwarder = {STATE_NONE = 0, STATE_MOVE_UP = 1, STATE_ALIGN_X = 2, STATE_ALIGN_Z = 3, STATE_ALIGN_Y = 4, STATE_FINISHED = 5}
{}[AutomaticArmControlForwarder.STATE_MOVE_UP] = AutomaticArmControlForwarder.STATE_ALIGN_X
{}[AutomaticArmControlForwarder.STATE_ALIGN_X] = AutomaticArmControlForwarder.STATE_ALIGN_Z
{}[AutomaticArmControlForwarder.STATE_ALIGN_Z] = AutomaticArmControlForwarder.STATE_ALIGN_Y
{}[AutomaticArmControlForwarder.STATE_ALIGN_Y] = AutomaticArmControlForwarder.STATE_FINISHED
AutomaticArmControlForwarder.NEXT_STATE = {}
function AutomaticArmControlForwarder.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Cylindered, v0)
end
function AutomaticArmControlForwarder.initSpecialization()
  local v3 = v3:getText("shop_configuration")
  v0:addConfigurationType("automaticArmControlForwarder", v3, "automaticArmControlForwarder", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("AutomaticArmControlForwarder")
  AutomaticArmControlForwarder.registerXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlForwarder")
  AutomaticArmControlForwarder.registerXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlForwarder.automaticArmControlForwarderConfigurations.automaticArmControlForwarderConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.automaticArmControlForwarder.automaticArmControlForwarderConfigurations.automaticArmControlForwarderConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AutomaticArmControlForwarder:registerXMLPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. "#requiresEasyArmControl", "If 'true' then it is only available if easy arm control is enabled", true)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMinLimit", "Min. folding time to activate the automatic control", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMaxLimit", "Max. folding time to activate the automatic control", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rootNode", "Root reference node (placed inside the X alignment arm with Z facing in working direction)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".treeTrigger(?)#node", "Tree detection trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".xAlignment#movingToolNode", "Moving tool to do alignment on X axis (most likely Y-Rot tool)")
  self:register(XMLValueType.FLOAT, v1 .. ".xAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".xAlignment#offset", "X alignment offset from tree detection node", "Automatically calculated with the difference on X between xAlignment and zAlignment node")
  self:register(XMLValueType.ANGLE, v1 .. ".xAlignment#threshold", "X alignment angle threshold (if angle to target is below this value the Y and Z alignment will start)", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".zAlignment#movingToolNode", "Moving tool to do alignment on Z axis (EasyArmControl Z Target)")
  self:register(XMLValueType.FLOAT, v1 .. ".zAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".zAlignment#referenceNode", "Reference node which is tried to be moved right in front of the tree")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".yAlignment#movingToolNode", "Moving tool to do alignment on Y axis (EasyArmControl Y Target)")
  self:register(XMLValueType.FLOAT, v1 .. ".yAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".yAlignment#referenceNode", "Reference node which is tried to be moved right in front of the tree")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".yAlignment.moveUp#referenceNode", "Reference node for the height before X alignment is performed")
  self:register(XMLValueType.FLOAT, v1 .. ".yAlignment.moveUp#maxOffset", "Max. X offset from the referebce node to move up the crane before rotating it out (also the min. x offset when moving the crane in)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".xToolAlignment#movingToolNode", "Moving tool to do alignment on X axis (most likely Y-Rot tool)")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".xToolAlignment#referenceNode", "Reference node for angle offset calculation (needs to be inside the moving tool)")
  self:register(XMLValueType.FLOAT, v1 .. ".xToolAlignment#speedScale", "Speed scale used to control the moving tool", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".xToolAlignment#offset", "X alignment offset from tree detection node", "Automatically calculated with the difference on X between xAlignment and zAlignment node")
  self:register(XMLValueType.ANGLE, v1 .. ".xToolAlignment#threshold", "X alignment angle threshold (if angle to target is below this value the Y and Z alignment will start)", 1)
  TargetTreeMarker.registerXMLPaths(self, v1 .. ".treeMarker")
  self:register(XMLValueType.COLOR, v1 .. ".treeMarker#targetColor", "Color of tree is available to alignment, but not ready for cut yet", "2 2 0")
  self:register(XMLValueType.COLOR, v1 .. ".treeMarker#tooThickColor", "Color of tree is too thick to be cutted", "2 0 0")
end
function AutomaticArmControlForwarder.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "getIsAutoTreeAlignmentAllowed", AutomaticArmControlForwarder.getIsAutoTreeAlignmentAllowed)
  SpecializationUtil.registerFunction(v0, "setTreeArmAlignmentInput", AutomaticArmControlForwarder.setTreeArmAlignmentInput)
  SpecializationUtil.registerFunction(v0, "doTreeArmAlignment", AutomaticArmControlForwarder.doTreeArmAlignment)
  SpecializationUtil.registerFunction(v0, "resetAutomaticAlignment", AutomaticArmControlForwarder.resetAutomaticAlignment)
  SpecializationUtil.registerFunction(v0, "getIsAutomaticAlignmentActive", AutomaticArmControlForwarder.getIsAutomaticAlignmentActive)
  SpecializationUtil.registerFunction(v0, "getIsAutomaticAlignmentFinished", AutomaticArmControlForwarder.getIsAutomaticAlignmentFinished)
  SpecializationUtil.registerFunction(v0, "getAutomaticAlignmentTargetTree", AutomaticArmControlForwarder.getAutomaticAlignmentTargetTree)
  SpecializationUtil.registerFunction(v0, "getAutomaticAlignmentAvailableTargetTree", AutomaticArmControlForwarder.getAutomaticAlignmentAvailableTargetTree)
  SpecializationUtil.registerFunction(v0, "getAutomaticAlignmentCurrentTarget", AutomaticArmControlForwarder.getAutomaticAlignmentCurrentTarget)
  SpecializationUtil.registerFunction(v0, "getBestTreeToAutoAlign", AutomaticArmControlForwarder.getBestTreeToAutoAlign)
  SpecializationUtil.registerFunction(v0, "onTreeAutoTriggerCallback", AutomaticArmControlForwarder.onTreeAutoTriggerCallback)
end
function AutomaticArmControlForwarder.registerOverwrittenFunctions(v0)
end
function AutomaticArmControlForwarder.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onPostLoad", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onDelete", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onReadUpdateStream", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onWriteUpdateStream", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onUpdate", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onAutoLoadForwaderMountedTree", AutomaticArmControlForwarder)
  SpecializationUtil.registerEventListener(v0, "onRegisterActionEvents", AutomaticArmControlForwarder)
end
function AutomaticArmControlForwarder:onLoad(v1)
  local v3 = Utils.getNoNil(self.configurations.automaticArmControlForwarder, 1)
  local v4 = string.format("vehicle.automaticArmControlForwarder.automaticArmControlForwarderConfigurations.automaticArmControlForwarderConfiguration(%d)", v3 - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.automaticArmControlForwarder.automaticArmControlForwarderConfigurations.automaticArmControlForwarderConfiguration", v3, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v2.xAlignment = {}
  v2.zAlignment = {}
  v2.yAlignment = {}
  v2.xToolAlignment = {}
  v5 = v5:getValue(v4 .. "#rootNode", nil, self.components, self.i3dMappings)
  v2.rootNode = v5
  if v2.rootNode ~= nil then
    v2.treeTriggers = {}
    v5:iterate(v4 .. ".treeTrigger", function(self, v1)
      local v2 = v2:getValue(v1 .. "#node", nil, u0.components, u0.i3dMappings)
      if v2 ~= nil then
        addTrigger(v2, "onTreeAutoTriggerCallback", u0)
        table.insert(u1.treeTriggers, v2)
      end
    end)
    v2.foundTrees = {}
    v2.foundValidTargetServer = false
    v2.lastFoundValidTarget = false
    v2.lastTargetRadius = 1
    v2.lastTargetTrans = {0, 0, 0}
    v2.lastTargetDirection = {0, 0, 1}
    v2.lastTreeId = nil
    v2.state = AutomaticArmControlForwarder.STATE_NONE
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
    v6 = v6:getValue(v4 .. ".zAlignment#referenceNode", nil, self.components, self.i3dMappings)
    v2.zAlignment.referenceNode = v6
    v2.yAlignment = {}
    v6 = v6:getValue(v4 .. ".yAlignment#movingToolNode", nil, self.components, self.i3dMappings)
    v2.yAlignment.movingToolNode = v6
    v6 = v6:getValue(v4 .. ".yAlignment#speedScale", 1)
    v2.yAlignment.speedScale = v6
    v6 = v6:getValue(v4 .. ".yAlignment#referenceNode", nil, self.components, self.i3dMappings)
    v2.yAlignment.referenceNode = v6
    v6 = v6:getValue(v4 .. ".yAlignment.moveUp#referenceNode", nil, self.components, self.i3dMappings)
    v2.yAlignment.upReferenceNode = v6
    v6 = v6:getValue(v4 .. ".yAlignment.moveUp#maxOffset", 2)
    v2.yAlignment.upMaxOffset = v6
    v2.xToolAlignment = {}
    v6 = v6:getValue(v4 .. ".xToolAlignment#movingToolNode", nil, self.components, self.i3dMappings)
    v2.xToolAlignment.movingToolNode = v6
    v6 = v6:getValue(v4 .. ".xToolAlignment#referenceNode", nil, self.components, self.i3dMappings)
    v2.xToolAlignment.referenceNode = v6
    v6 = v6:getValue(v4 .. ".xToolAlignment#speedScale", 1)
    v2.xToolAlignment.speedScale = v6
    v6 = v6:getValue(v4 .. ".xToolAlignment#offset")
    v2.xToolAlignment.offset = v6
    v6 = v6:getValue(v4 .. ".xToolAlignment#threshold", 1)
    v2.xToolAlignment.threshold = v6
    v5 = TargetTreeMarker.new(self, self.rootNode)
    v2.treeMarker = v5
    v5:loadFromXML(self.xmlFile, v4 .. ".treeMarker", self.baseDirectory)
    v2.treeMarker.cutColor = {v2.treeMarker.color[1], v2.treeMarker.color[2], v2.treeMarker.color[3]}
    v6 = v6:getValue(v4 .. ".treeMarker#targetColor", "2 2 0", true)
    v2.treeMarker.targetColor = v6
    v6 = v6:getValue(v4 .. ".treeMarker#tooThickColor", "2 0 0", true)
    v2.treeMarker.tooThickColor = v6
    v5 = v5:getValue(v4 .. "#requiresEasyArmControl", true)
    v2.requiresEasyArmControl = v5
    v5 = v5:getValue(v4 .. "#foldMinLimit", 0)
    v2.foldMinLimit = v5
    v5 = v5:getValue(v4 .. "#foldMaxLimit", 1)
    v2.foldMaxLimit = v5
    if v2.xAlignment.offset == nil and v2.yAlignment.referenceNode ~= nil and v2.xAlignment.movingToolNode ~= nil then
      local v5, v6, v7 = localToLocal(v2.yAlignment.referenceNode, v2.xAlignment.movingToolNode, 0, 0, 0)
      v2.xAlignment.offset = -v5
    end
    v2.controlInputLastValue = 0
    v2.controlInputTimer = 0
    v5 = self:getNextDirtyFlag()
    v2.dirtyFlag = v5
    -- if not Platform.gameplay.automaticVehicleControl then goto L574 end
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", AutomaticArmControlForwarder)
    return
  end
  SpecializationUtil.removeEventListener(self, "onDelete", AutomaticArmControlForwarder)
  SpecializationUtil.removeEventListener(self, "onUpdate", AutomaticArmControlForwarder)
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", AutomaticArmControlForwarder)
end
function AutomaticArmControlForwarder:onPostLoad(v1)
  if self.spec_automaticArmControlForwarder.xAlignment.movingToolNode ~= nil then
    local v4 = self:getMovingToolByNode(self.spec_automaticArmControlForwarder.xAlignment.movingToolNode)
    self.spec_automaticArmControlForwarder.xAlignment.movingTool = v4
  end
  if v2.zAlignment.movingToolNode ~= nil then
    v4 = self:getMovingToolByNode(v2.zAlignment.movingToolNode)
    v2.zAlignment.movingTool = v4
  end
  if v2.yAlignment.movingToolNode ~= nil then
    v4 = self:getMovingToolByNode(v2.yAlignment.movingToolNode)
    v2.yAlignment.movingTool = v4
  end
  if v2.xToolAlignment.movingToolNode ~= nil then
    v4 = self:getMovingToolByNode(v2.xToolAlignment.movingToolNode)
    v2.xToolAlignment.movingTool = v4
  end
end
function AutomaticArmControlForwarder:onDelete()
  if self.spec_automaticArmControlForwarder.treeMarker ~= nil then
    v2:delete()
  end
  if v1.treeTriggers ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 20, target 28)
    removeTrigger(v1.treeTriggers[1])
    -- TODO: structure LOP_FORNLOOP (pc 27, target 21)
    v1.treeTriggers = nil
  end
end
function AutomaticArmControlForwarder:onReadUpdateStream(v1, v2, v3)
  if self.spec_automaticArmControlForwarder.rootNode ~= nil then
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
function AutomaticArmControlForwarder:onWriteUpdateStream(v1, v2, v3)
  if self.spec_automaticArmControlForwarder.rootNode ~= nil then
    local v5 = v2:getIsServer()
    if v5 then
      local v8 = bitAND(v3, self.spec_automaticArmControlForwarder.dirtyFlag)
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
function AutomaticArmControlForwarder:onUpdate(v1, v2, v3, v4)
  local v7 = self:getIsAutoTreeAlignmentAllowed()
  if v7 then
    if self.spec_automaticArmControlForwarder.state ~= AutomaticArmControlForwarder.STATE_NONE then
      -- if v0.spec_automaticArmControlForwarder.state ~= AutomaticArmControlForwarder.STATE_FINISHED then goto L34 end
    end
    local v8 = self:getBestTreeToAutoAlign(v5.rootNode, v5.foundTrees)
    -- goto L40  (LOP_JUMP +6)
    if v5.foundTrees[v8] == nil then
    end
    if v7 ~= nil then
      v8 = entityExists(v7)
      if v8 then
        local v15 = v15:getNodeObject(v7)
        if v15 ~= nil then
          local v16, v17, v18 = getWorldTranslation(v7)
          v16, v17, v18 = localDirectionToWorld(v7, 0, 0, 1)
          v16 = getUserAttribute(v7, "logRadius")
        else
          v16, v17, v18 = getWorldTranslation(v7)
          local v16, v17, v18, v19, v20, v21, v22 = SplitShapeUtil.getTreeOffsetPosition(v7, v16, v17, v18, 3)
        end
        if v8 ~= nil then
          v5.lastTreeId = v7
          v5.lastTargetRadius = v14
          v5.lastTargetTrans[1] = v8
          v5.lastTargetTrans[2] = v9
          v5.lastTargetTrans[3] = v10
          v5.lastTargetDirection[1] = v11
          v5.lastTargetDirection[2] = v12
          v5.lastTargetDirection[3] = v13
          -- goto L145  (LOP_JUMP +11)
        end
        v5.lastTreeId = nil
        -- goto L145  (LOP_JUMP +7)
      end
    end
    v5.lastTreeId = nil
  else
    self.spec_automaticArmControlForwarder.lastTreeId = nil
  end
  if self.isClient then
    if v5.foundValidTargetServer and v6 then
    end
    v8:setIsActive(v7)
    if v7 then
      v8:setPosition(v5.lastTargetTrans[1], v5.lastTargetTrans[2], v5.lastTargetTrans[3], v5.lastTargetDirection[1], v5.lastTargetDirection[2], v5.lastTargetDirection[3], v5.lastTargetRadius + 0.005)
    end
    AutomaticArmControlForwarder.updateActionEvents(self, v7)
  end
  if self.isServer then
    if v6 ~= v5.lastFoundValidTarget then
      v5.foundValidTargetServer = v6
      v5.lastFoundValidTarget = v6
      self:raiseDirtyFlags(v5.dirtyFlag)
      v5.state = AutomaticArmControlForwarder.STATE_NONE
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
function AutomaticArmControlForwarder:onAutoLoadForwaderMountedTree(v1)
  self.spec_automaticArmControlForwarder.foundTrees[v1] = nil
end
function AutomaticArmControlForwarder:onRegisterActionEvents(v1, v2)
  if self.isClient then
    self:clearActionEventsTable(self.spec_automaticArmControlForwarder.actionEvents)
    if v2 then
      local v4, v5 = self:addPoweredActionEvent(self.spec_automaticArmControlForwarder.actionEvents, InputAction.TREE_AUTOMATIC_ALIGN, self, AutomaticArmControlForwarder.actionEvent, true, false, true, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_VERY_HIGH)
      AutomaticArmControlForwarder.updateActionEvents(self, false)
    end
  end
end
function AutomaticArmControlForwarder:actionEvent(v1, v2, v3, v4)
  self:setTreeArmAlignmentInput(v2)
end
function AutomaticArmControlForwarder:updateActionEvents(v1)
  if self.spec_automaticArmControlForwarder.actionEvents[InputAction.TREE_AUTOMATIC_ALIGN] ~= nil then
    v4:setActionEventActive(self.spec_automaticArmControlForwarder.actionEvents[InputAction.TREE_AUTOMATIC_ALIGN].actionEventId, v1)
  end
end
function AutomaticArmControlForwarder:getIsAutoTreeAlignmentAllowed()
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
  if self.getFoldAnimTime ~= nil then
    v2 = self:getFoldAnimTime()
    if v2 >= v1.foldMinLimit then
      -- if v1.foldMaxLimit >= v2 then goto L47 end
    end
    return false
  end
  return true
end
function AutomaticArmControlForwarder:setTreeArmAlignmentInput(v1)
  if self.isServer then
    if 0 < v1 and self.spec_automaticArmControlForwarder.state ~= AutomaticArmControlForwarder.STATE_FINISHED and self.spec_automaticArmControlForwarder.foundValidTargetServer then
      self:doTreeArmAlignment(self.spec_automaticArmControlForwarder.lastTargetTrans[1], self.spec_automaticArmControlForwarder.lastTargetTrans[2], self.spec_automaticArmControlForwarder.lastTargetTrans[3], self.spec_automaticArmControlForwarder.lastTargetDirection[1], self.spec_automaticArmControlForwarder.lastTargetDirection[2], self.spec_automaticArmControlForwarder.lastTargetDirection[3], 1)
      return
    end
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000009 -> L61
    v2.state = AutomaticArmControlForwarder.STATE_NONE
    return
  end
  v2.controlInputLastValue = v1
  if 0 < v1 then
    self:raiseDirtyFlags(v2.dirtyFlag)
  end
end
function AutomaticArmControlForwarder:doTreeArmAlignment(v1, v2, v3, v4, v5, v6, v7, v8)
  if self.spec_automaticArmControlForwarder.state == AutomaticArmControlForwarder.STATE_NONE then
    if v8 ~= true then
      if self.spec_automaticArmControlForwarder.yAlignment.referenceNode ~= nil and self.spec_automaticArmControlForwarder.yAlignment.upReferenceNode ~= nil then
        local v10, v11, v12 = localToLocal(self.spec_automaticArmControlForwarder.yAlignment.referenceNode, self.spec_automaticArmControlForwarder.yAlignment.upReferenceNode, 0, 0, 0)
        if v7 == 1 then
          local v13 = math.abs(v10)
          -- if v13 < v0.spec_automaticArmControlForwarder.yAlignment.upMaxOffset then goto L64 end
        end
        if v7 == -1 then
          v13 = math.abs(v10)
          if v9.yAlignment.upMaxOffset < v13 then
            v9.state = AutomaticArmControlForwarder.STATE_MOVE_UP
            -- goto L91  (LOP_JUMP +20)
          end
        end
        v9.state = AutomaticArmControlForwarder.STATE_ALIGN_X
        -- goto L91  (LOP_JUMP +13)
      end
      v9.state = AutomaticArmControlForwarder.STATE_ALIGN_X
    else
      self.spec_automaticArmControlForwarder.state = AutomaticArmControlForwarder.STATE_MOVE_UP
    end
  end
  if v9.xAlignment.movingTool ~= nil and v9.state == AutomaticArmControlForwarder.STATE_ALIGN_X then
    v10, v11 = AutomaticArmControlForwarder.movingToolXAlignment(self, v9.xAlignment.movingTool, v1, v2, v3, v9.xAlignment.referenceNode, v9.xAlignment.threshold, v9.xAlignment.speedScale, v9.xAlignment.offset)
    if v9.xToolAlignment.movingTool ~= nil then
      if not v9.xToolAlignment.referenceNode then
      end
      local v12, v13, v14 = v12(v13)
      local v18, v19 = AutomaticArmControlForwarder.movingToolXAlignment(self, v9.xToolAlignment.movingTool, v12 + v4, v13 + v5, v14 + v6, v9.xToolAlignment.referenceNode, v9.xToolAlignment.threshold, v9.xToolAlignment.speedScale, v9.xToolAlignment.offset, true)
      -- if not v11 then goto L209 end
      -- if not v19 then goto L209 end
      v9.state = AutomaticArmControlForwarder.NEXT_STATE[v9.state]
    elseif v11 then
      v9.state = AutomaticArmControlForwarder.NEXT_STATE[v9.state]
    end
  end
  if v9.zAlignment.movingTool ~= nil and v9.zAlignment.referenceNode ~= nil then
    v10, v11, v12 = worldToLocal(v9.rootNode, v1, v2, v3)
    local v13, v14, v15 = localToLocal(v9.zAlignment.referenceNode, v9.rootNode, 0, 0, 0)
    if v9.state == AutomaticArmControlForwarder.STATE_ALIGN_Z then
      local v17 = math.abs(v15 - v12)
      if v17 < 0.03 then
        v9.state = AutomaticArmControlForwarder.NEXT_STATE[v9.state]
      end
    end
    v17 = math.abs(v16)
    if 0.03 < v17 then
      local v23 = MathUtil.sign(v16)
      v9.zAlignment.movingTool.externalMove = -(v16 + 0.5 * v23) * v9.zAlignment.speedScale
    else
      v9.zAlignment.movingTool.externalMove = 0
    end
  end
  if v9.yAlignment.movingTool ~= nil and v9.yAlignment.referenceNode ~= nil then
    if v9.state ~= AutomaticArmControlForwarder.STATE_ALIGN_Y then
      -- if v9.state ~= AutomaticArmControlForwarder.STATE_MOVE_UP then goto L401 end
    end
    if v9.state == AutomaticArmControlForwarder.STATE_MOVE_UP then
      v11, v12, v13 = getWorldTranslation(v9.yAlignment.upReferenceNode)
    end
    v10, v11, v12 = getWorldTranslation(v9.yAlignment.referenceNode)
    v14 = math.abs(v2 - v11)
    if 0.03 < v14 then
      v19 = MathUtil.sign(v2 - v11)
      v9.yAlignment.movingTool.externalMove = (v2 - v11 + 0.5 * v19) * v9.yAlignment.speedScale
      return
    end
    v9.yAlignment.movingTool.externalMove = 0
    v9.state = AutomaticArmControlForwarder.NEXT_STATE[v9.state]
  end
end
function AutomaticArmControlForwarder.movingToolXAlignment(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if not v5 then
  end
  local v10, v11, v12 = v10(v11, v2, v3, v4)
  local v13, v14 = MathUtil.vector2Normalize(v10, v12)
  v14 = MathUtil.getYRotationFromDirection(v13, v14)
  if v9 == true then
    if math.pi * 0.5 < v14 * v7 then
    elseif v14 * v7 < -(math.pi * 0.5) then
    end
  end
  local v15 = AutomaticArmControlForwarder.calculateMovingToolTargetMove(v0, v1, v1.curRot[v1.rotationAxis] + v13)
  if v15 ~= 0 then
    v1.externalMove = v15
  else
    local v16 = math.abs(v13)
    if v16 < v6 then
      return v15, true
    end
  end
  return v15, false
end
function AutomaticArmControlForwarder.calculateMovingToolTargetMove(v0, v1, v2)
  local v8 = MathUtil.sign(v1.lastRotSpeed / v1.rotAcceleration)
  local v7 = MathUtil.round(v1.lastRotSpeed / v1.rotAcceleration / g_currentDt)
  local v10 = math.abs(v7 * g_currentDt)
  -- TODO: structure LOP_FORNPREP (pc 37, target 41)
  -- TODO: structure LOP_FORNLOOP (pc 40, target 38)
  if v1.rotMin ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L78
    local v11 = Cylindered.getMovingToolState(v0, v1)
    v11 = MathUtil.inverseLerp(v1.rotMin, v1.rotMax, v1.curRot[v1.rotationAxis] + v1.lastRotSpeed + -v1.rotAcceleration * v8)
    v11 = MathUtil.inverseLerp(v1.rotMin, v1.rotMax, v2)
  else
    local v12 = MathUtil.normalizeRotationForShortestPath(v1.curRot[v1.rotationAxis], v2)
    v12 = MathUtil.normalizeRotationForShortestPath(v1.curRot[v1.rotationAxis] + v1.lastRotSpeed + -v1.rotAcceleration * v8, v2)
  end
  if v10 < v8 then
    v12 = MathUtil.sign(v1.rotSpeed)
    -- if v9 >= v10 then goto L123 end
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
function AutomaticArmControlForwarder:resetAutomaticAlignment()
  self.spec_automaticArmControlForwarder.state = AutomaticArmControlForwarder.STATE_NONE
end
function AutomaticArmControlForwarder:getIsAutomaticAlignmentActive()
  if self.spec_automaticArmControlForwarder.state ~= AutomaticArmControlForwarder.STATE_NONE and self.spec_automaticArmControlForwarder.state == AutomaticArmControlForwarder.STATE_FINISHED then
  end
  return v2
end
function AutomaticArmControlForwarder:getIsAutomaticAlignmentFinished()
  if self.spec_automaticArmControlForwarder.state ~= AutomaticArmControlForwarder.STATE_FINISHED then
  end
  return true
end
function AutomaticArmControlForwarder:getAutomaticAlignmentTargetTree()
  return self.spec_automaticArmControlForwarder.lastTreeId
end
function AutomaticArmControlForwarder:getAutomaticAlignmentAvailableTargetTree()
  return self:getBestTreeToAutoAlign(self.spec_automaticArmControlForwarder.rootNode, self.spec_automaticArmControlForwarder.foundTrees)
end
function AutomaticArmControlForwarder:getAutomaticAlignmentCurrentTarget()
  if self.spec_automaticArmControlForwarder.lastFoundValidTarget then
    return self.spec_automaticArmControlForwarder.lastTargetTrans[1], self.spec_automaticArmControlForwarder.lastTargetTrans[2], self.spec_automaticArmControlForwarder.lastTargetTrans[3], self.spec_automaticArmControlForwarder.lastTargetDirection[1], self.spec_automaticArmControlForwarder.lastTargetDirection[2], self.spec_automaticArmControlForwarder.lastTargetDirection[3]
  end
  return nil, nil, nil, nil, nil, nil
end
function AutomaticArmControlForwarder.getBestTreeToAutoAlign(v0, v1, v2)
  for v8, v9 in pairs(v2) do
    if not v9 then
      continue
    end
    local v10 = entityExists(v8)
    if not v10 then
      continue
    end
    v10 = v10:getNodeObject(v8)
    if v10 ~= nil and not (v10.dynamicMountType == MountableObject.MOUNT_TYPE_NONE) then
      continue
    end
    local v11 = calcDistanceFrom(v1, v8)
    local v12, v13, v14 = localToLocal(v8, v1, 0, 0, 0)
    local v15, v16 = MathUtil.vector2Normalize(v12, v14)
    v16 = MathUtil.getYRotationFromDirection(v15, v16)
    v15 = math.abs(...)
    local v18 = math.deg(v15)
    if not (v18 + v11 * 2 - v13 * 10 < v3) then
      continue
    end
  end
  return v4
end
function AutomaticArmControlForwarder:onTreeAutoTriggerCallback(v1, v2, v3, v4, v5, v6)
  local v7 = getHasClassId(v2, ClassIds.MESH_SPLIT_SHAPE)
  if v7 then
    if v3 then
      self.spec_automaticArmControlForwarder.foundTrees[v2] = true
      return
    end
    if v4 then
      v7.foundTrees[v2] = nil
    end
  end
end
function AutomaticArmControlForwarder.drawDebugCircleRange(v0, v1, v2, v3, v4)
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
