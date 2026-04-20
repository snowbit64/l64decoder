-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoLoadForwarder = {}
function AutoLoadForwarder.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AutomaticArmControlForwarder, v0)
end
function AutoLoadForwarder.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AutoLoadForwarder")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadForwarder#idlePositionNode", "Crane will move to this position after the tree has been loaded")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadForwarder#dropPositionNode", "Crane will move to this position before the tree is dropped on the loading bay")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadForwarder#craneTreeJointNode", "Tree will be mounted to this node while mounted to the crane")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.autoLoadForwarder.loadPlaces#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoadForwarder.loadPlaces#dropOffset", "Y offset of crane to the load place before dropping the tree", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.autoLoadForwarder.loadPlaces.loadPlace(?)#node", "Load place node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.autoLoadForwarder.grabAnimation#name", "Grab animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoadForwarder.grabAnimation#speedScale", "Animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.autoLoadForwarder.grabAnimation#filledTime", "Target animation time when a tree is grabbed")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).autoLoadForwarder#treeI3DFilename", "Path to i3d file of the tree")
end
function AutoLoadForwarder.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onAutoLoadForwaderMountedTree")
end
function AutoLoadForwarder.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "mountTreeToCrane", AutoLoadForwarder.mountTreeToCrane)
  SpecializationUtil.registerFunction(v0, "addTreeToLoadPlaces", AutoLoadForwarder.addTreeToLoadPlaces)
  SpecializationUtil.registerFunction(v0, "removeMountedObject", AutoLoadForwarder.removeMountedObject)
  SpecializationUtil.registerFunction(v0, "sortLoadedTreeObjects", AutoLoadForwarder.sortLoadedTreeObjects)
end
function AutoLoadForwarder.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "getAreControlledActionsAllowed", AutoLoadForwarder.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(v0, "addToPhysics", AutoLoadForwarder.addToPhysics)
end
function AutoLoadForwarder.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutoLoadForwarder)
  SpecializationUtil.registerEventListener(v0, "onPostLoad", AutoLoadForwarder)
  SpecializationUtil.registerEventListener(v0, "onDelete", AutoLoadForwarder)
  SpecializationUtil.registerEventListener(v0, "onUpdate", AutoLoadForwarder)
  SpecializationUtil.registerEventListener(v0, "onRootVehicleChanged", AutoLoadForwarder)
end
function AutoLoadForwarder:onLoad(v1)
  local v3 = v3:getValue("vehicle.autoLoadForwarder#idlePositionNode", nil, self.components, self.i3dMappings)
  self.spec_autoLoadForwarder.idlePositionNode = v3
  v3 = v3:getValue("vehicle.autoLoadForwarder#dropPositionNode", nil, self.components, self.i3dMappings)
  self.spec_autoLoadForwarder.dropPositionNode = v3
  v3 = v3:getValue("vehicle.autoLoadForwarder#craneTreeJointNode", nil, self.components, self.i3dMappings)
  self.spec_autoLoadForwarder.craneTreeJointNode = v3
  self.spec_autoLoadForwarder.loadPlaces = {}
  v3 = v3:getValue("vehicle.autoLoadForwarder.loadPlaces#fillUnitIndex", 1)
  self.spec_autoLoadForwarder.loadPlaceFillUnitIndex = v3
  v3 = v3:getValue("vehicle.autoLoadForwarder.loadPlaces#dropOffset", 0)
  self.spec_autoLoadForwarder.loadPlaceDropOffset = v3
  v3:iterate("vehicle.autoLoadForwarder.loadPlaces.loadPlace", function(self, v1)
    local v3 = v3:getValue(v1 .. "#node", nil, u0.components, u0.i3dMappings)
    if {node = v3}.node ~= nil then
      table.insert(u1.loadPlaces, {node = v3, treeObject = nil})
    end
  end)
  self.spec_autoLoadForwarder.grabAnimation = {}
  local v4 = v4:getValue("vehicle.autoLoadForwarder.grabAnimation#name")
  self.spec_autoLoadForwarder.grabAnimation.name = v4
  v4 = v4:getValue("vehicle.autoLoadForwarder.grabAnimation#speedScale", 1)
  self.spec_autoLoadForwarder.grabAnimation.speedScale = v4
  v4 = v4:getValue("vehicle.autoLoadForwarder.grabAnimation#filledTime", 0.5)
  self.spec_autoLoadForwarder.grabAnimation.filledTime = v4
  self.spec_autoLoadForwarder.grappleTreeId = nil
  self.spec_autoLoadForwarder.pendingIdleReturn = false
  self.spec_autoLoadForwarder.texts = {}
  v4 = v4:getText("warning_forwarderNoTreeInRange")
  self.spec_autoLoadForwarder.texts.warning_forwarderNoTreeInRange = v4
end
function AutoLoadForwarder:onPostLoad(v1)
  if self.spec_autoLoadForwarder.grabAnimation.name ~= nil then
    self:setAnimationTime(self.spec_autoLoadForwarder.grabAnimation.name, 1, true)
  end
  local v4 = self:getFillUnitFillLevel(v2.loadPlaceFillUnitIndex)
  local v3 = MathUtil.round(...)
  if 0 < v3 and not v1.resetVehicles then
    local v6 = self:getOwnerFarmId()
    local v9 = self:getFillUnitFillType(v2.loadPlaceFillUnitIndex)
    self:addFillUnitFillLevel(v6, v2.loadPlaceFillUnitIndex, -math.huge, v9, ToolType.UNDEFINED, nil)
    v4 = v4:getValue(v1.key .. ".autoLoadForwarder#treeI3DFilename")
    if v4 ~= nil then
      local v5 = NetworkUtil.convertFromNetworkFilename(v4)
      -- TODO: structure LOP_FORNPREP (pc 71, target 93)
      v9 = ForestryLog.new(self.isServer, self.isClient)
      v9:loadFromFilename(v5, 0, 0, 0, 0, 0, 0, function(self, v1, v2, v3)
        if v2 then
          v4:addTreeToLoadPlaces(v1)
        end
      end, self, v9)
      -- TODO: structure LOP_FORNLOOP (pc 92, target 72)
    end
  end
end
function AutoLoadForwarder:onDelete()
  -- TODO: structure LOP_FORNPREP (pc 7, target 24)
  if self.spec_autoLoadForwarder.loadPlaces[#self.spec_autoLoadForwarder.loadPlaces].treeObject ~= nil then
    v6:delete()
    self.spec_autoLoadForwarder.loadPlaces[#self.spec_autoLoadForwarder.loadPlaces].treeObject = nil
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 8)
end
function AutoLoadForwarder:saveToXMLFile(v1, v2, v3)
  local v6 = self:getFillUnitFillLevel(self.spec_autoLoadForwarder.loadPlaceFillUnitIndex)
  local v5 = MathUtil.round(...)
  if 0 < v5 then
    -- TODO: structure LOP_FORNPREP (pc 18, target 44)
    if self.spec_autoLoadForwarder.loadPlaces[1].treeObject ~= nil then
      local v13 = NetworkUtil.convertToNetworkFilename(self.spec_autoLoadForwarder.loadPlaces[1].treeObject.i3dFilename)
      local v12 = HTMLUtil.encodeToHTML(...)
      v1:setValue(...)
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 43, target 19)
  end
end
function AutoLoadForwarder:onUpdate(v1, v2, v3, v4)
  if Platform.gameplay.automaticVehicleControl then
    local v6 = self:getActionControllerDirection()
    if v6 == -1 then
      if self.spec_autoLoadForwarder.grappleTreeId == nil then
        local v6, v7, v8, v9, v10, v11 = self:getAutomaticAlignmentCurrentTarget()
        if v6 ~= nil then
          local v12 = self:getIsAutomaticAlignmentFinished()
          if not v12 then
            self:doTreeArmAlignment(v6, v7, v8, v9, v10, v11, 1)
            if self.spec_autoLoadForwarder.grabAnimation.name ~= nil then
              v12 = self:getIsAnimationPlaying(self.spec_autoLoadForwarder.grabAnimation.name)
              if not v12 then
                v12 = self:getAnimationTime(self.spec_autoLoadForwarder.grabAnimation.name)
                if 0 < v12 then
                  local v16 = self:getAnimationTime(self.spec_autoLoadForwarder.grabAnimation.name)
                  self:playAnimation(...)
                end
              end
            end
            v12 = self:getAutomaticAlignmentTargetTree()
            v5.craneTargetTreeId = v12
            return
          end
          if v5.craneTargetTreeId ~= nil then
            local v13 = entityExists(v5.craneTargetTreeId)
            -- if not v13 then goto L120 end
            v13 = self:mountTreeToCrane(v5.craneTargetTreeId)
            -- if not v13 then goto L120 end
            v5.grappleTreeId = v5.craneTargetTreeId
            self:resetAutomaticAlignment()
            -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L150
            self:setAnimationTime(v5.grabAnimation.name, v5.grabAnimation.filledTime, true)
          else
            v5.grappleTreeId = nil
            self:playControlledActions()
            if v5.grabAnimation.name ~= nil then
              local v17 = self:getAnimationTime(v5.grabAnimation.name)
              self:playAnimation(...)
            end
          end
          v5.craneTargetTreeId = nil
          return
        end
        self:playControlledActions()
        return
      end
      -- TODO: structure LOP_FORNPREP (pc 164, target 175)
      if v5.loadPlaces[1].treeObject == nil then
      else
        -- TODO: structure LOP_FORNLOOP (pc 174, target 165)
      end
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L322
      v7, v8, v9 = getWorldTranslation(v6.node)
      v10, v11, v12 = localDirectionToWorld(v6.node, 0, 0, 1)
      self:doTreeArmAlignment(v7, v8 + v5.loadPlaceDropOffset, v9, v10, v11, v12, -1)
      v13 = self:getIsAutomaticAlignmentFinished()
      -- if not v13 then goto L322 end
      if v5.grappleTreeId ~= nil then
        v13 = entityExists(v5.grappleTreeId)
        if v13 then
          v13 = v13:getNodeObject(v5.grappleTreeId)
          if v13 ~= nil then
            self:addTreeToLoadPlaces(v13)
          end
        end
      end
      v5.grappleTreeId = nil
      self:resetAutomaticAlignment()
      v13 = self:getAutomaticAlignmentAvailableTargetTree()
      if v13 ~= nil then
        local v14 = self:getFillUnitFreeCapacity(v5.loadPlaceFillUnitIndex)
        -- if v14 >= 1 then goto L322 end
      end
      self:playControlledActions()
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L322
      local v18 = self:getAnimationTime(v5.grabAnimation.name)
      self:playAnimation(...)
      return
    end
    if v5.pendingIdleReturn then
      if v5.idlePositionNode ~= nil then
        self:setEasyControlForcedTransMove(-1)
        v6, v7, v8 = getWorldTranslation(v5.idlePositionNode)
        v9, v10, v11 = localDirectionToWorld(v5.idlePositionNode, 0, 0, 1)
        self:doTreeArmAlignment(v6, v7, v8, v9, v10, v11, -1, true)
        v12 = self:getIsAutomaticAlignmentFinished()
        -- if not v12 then goto L322 end
        v5.pendingIdleReturn = false
        return
      end
      v5.pendingIdleReturn = false
    end
  end
end
function AutoLoadForwarder:onRootVehicleChanged(v1)
  if v1.actionController ~= nil then
    if self.spec_autoLoadForwarder.controlledAction ~= nil then
      v4:updateParent(v1.actionController)
      return
    end
    local v4 = v3:registerAction("forwarderLoading", nil, 4)
    v2.controlledAction = v4
    v4:setCallback(self, AutoLoadForwarder.actionControllerEvent)
    v4:setIsAvailableFunction(function()
      if u0.grappleTreeId == nil then
        local v1 = v1:getFillUnitFreeCapacity(u0.loadPlaceFillUnitIndex)
        if 0 >= v1 then
        end
      end
      return self
    end)
    v4:setActionIcons("LOAD_LOG", "LOAD_LOG", true)
    return
  end
  if v2.controlledAction ~= nil then
    v4:remove()
    v2.controlledAction = nil
  end
end
function AutoLoadForwarder:actionControllerEvent(v1)
  if v1 < 0 then
    self.spec_autoLoadForwarder.pendingIdleReturn = true
    self:resetAutomaticAlignment()
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L42
    local v7 = self:getAnimationTime(self.spec_autoLoadForwarder.grabAnimation.name)
    self:playAnimation(...)
  else
    self.spec_autoLoadForwarder.pendingIdleReturn = false
    self:resetAutomaticAlignment()
  end
  return true
end
function AutoLoadForwarder:getAreControlledActionsAllowed(v1)
  local v2 = self:getActionControllerDirection()
  if v2 == 1 then
    v2 = self:getAutomaticAlignmentTargetTree()
    if v2 == nil then
      return false, self.spec_autoLoadForwarder.texts.warning_forwarderNoTreeInRange
    end
  end
  v2 = v1(self)
  return v2
end
function AutoLoadForwarder:addToPhysics(v1)
  local v2 = v1(self)
  -- TODO: structure LOP_FORNPREP (pc 10, target 49)
  if self.spec_autoLoadForwarder.loadPlaces[1].treeObject ~= nil then
    local v8, v9, v10 = getRotation(self.spec_autoLoadForwarder.loadPlaces[1].treeObject.nodeId)
    v11:mountKinematic(self, self.spec_autoLoadForwarder.loadPlaces[1].node, 0, 0, 0, v8, v9, v10)
    SpecializationUtil.raiseEvent(self, "onAutoLoadForwaderMountedTree", self.spec_autoLoadForwarder.loadPlaces[1].treeObject.nodeId)
  end
  -- TODO: structure LOP_FORNLOOP (pc 48, target 11)
  return v2
end
function AutoLoadForwarder:mountTreeToCrane(v1)
  local v2 = v2:getNodeObject(v1)
  if v2 ~= nil then
    local v5 = getUserAttribute(v1, "logRadius")
    local v5, v6, v7 = localRotationToLocal(v1, self.spec_autoLoadForwarder.craneTreeJointNode, 0, 0, 0)
    local v8 = math.abs(v5)
    if v8 < math.pi * 0.5 then
    end
    v2:mountKinematic(self, v3.craneTreeJointNode, 0, -v4, 0, v5, 0, v7)
    SpecializationUtil.raiseEvent(self, "onAutoLoadForwaderMountedTree", v2.nodeId)
    return true
  end
  return false
end
function AutoLoadForwarder:addTreeToLoadPlaces(v1)
  local v5 = self:getOwnerFarmId()
  local v8 = self:getFillUnitFirstSupportedFillType(self.spec_autoLoadForwarder.loadPlaceFillUnitIndex)
  self:addFillUnitFillLevel(v5, self.spec_autoLoadForwarder.loadPlaceFillUnitIndex, 1, v8, ToolType.UNDEFINED, nil)
  -- TODO: structure LOP_FORNPREP (pc 24, target 79)
  if self.spec_autoLoadForwarder.loadPlaces[1].treeObject == nil then
    local v7, v8, v9 = localRotationToLocal(v1.nodeId, self.spec_autoLoadForwarder.loadPlaces[1].node, 0, 0, 0)
    local v10 = math.abs(v7)
    if v10 < math.pi * 0.5 then
    else
    end
    v1:mountKinematic(self, v6.node, 0, 0, 0, v7, 0, v9)
    v6.treeObject = v1
    SpecializationUtil.raiseEvent(self, "onAutoLoadForwaderMountedTree", v1.nodeId)
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 78, target 25)
  v1:delete()
end
function AutoLoadForwarder:removeMountedObject(v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 7, target 36)
  if self.spec_autoLoadForwarder.loadPlaces[1].treeObject == v1 then
    self.spec_autoLoadForwarder.loadPlaces[1].treeObject = nil
    local v10 = self:getOwnerFarmId()
    local v13 = self:getFillUnitFirstSupportedFillType(self.spec_autoLoadForwarder.loadPlaceFillUnitIndex)
    self:addFillUnitFillLevel(v10, self.spec_autoLoadForwarder.loadPlaceFillUnitIndex, -1, v13, ToolType.UNDEFINED, nil)
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 8)
  self:sortLoadedTreeObjects()
end
function AutoLoadForwarder:sortLoadedTreeObjects()
  -- TODO: structure LOP_FORNPREP (pc 7, target 62)
  if self.spec_autoLoadForwarder.loadPlaces[1].treeObject == nil then
    -- TODO: structure LOP_FORNPREP (pc 21, target 60)
    if self.spec_autoLoadForwarder.loadPlaces[1 + 1].treeObject ~= nil then
      local v11, v12, v13 = getRotation(self.spec_autoLoadForwarder.loadPlaces[1 + 1].treeObject.nodeId)
      v14:mountKinematic(self, self.spec_autoLoadForwarder.loadPlaces[1].node, 0, 0, 0, v11, v12, v13)
      self.spec_autoLoadForwarder.loadPlaces[1].treeObject = self.spec_autoLoadForwarder.loadPlaces[1 + 1].treeObject
      self.spec_autoLoadForwarder.loadPlaces[1 + 1].treeObject = nil
    else
      -- TODO: structure LOP_FORNLOOP (pc 59, target 22)
    end
    -- if not v6 then goto L62 end
  end
  -- TODO: structure LOP_FORNLOOP (pc 61, target 8)
end
