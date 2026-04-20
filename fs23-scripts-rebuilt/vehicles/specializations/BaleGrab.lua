-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleGrab = {}
function BaleGrab.prerequisitesPresent(v0)
  return true
end
function BaleGrab.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("BaleGrab")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleGrab#triggerNode", "Trigger node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleGrab#rootNode", "Root node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.baleGrab#jointNode", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.baleGrab#jointType", "Joint type", "TYPE_AUTO_ATTACH_XYZ")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.baleGrab#forceAcceleration", "Force acceleration", 20)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleGrab#grabRefComponentJointIndex1", "Component joint index of grab 1")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.baleGrab#grabRefComponentJointIndex2", "Component joint index of grab 2")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.baleGrab#rotDiffThreshold1", "Rotation difference between component and joint to mount bale", 2)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.baleGrab#rotDiffThreshold2", "Rotation difference between component and joint to mount bale", 2)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function BaleGrab.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "baleGrabTriggerCallback", BaleGrab.baleGrabTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "addDynamicMountedObject", BaleGrab.addDynamicMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "removeDynamicMountedObject", BaleGrab.removeDynamicMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "isComponentJointOutsideLimit", BaleGrab.isComponentJointOutsideLimit)
  SpecializationUtil.registerFunction(vehicleType, "mountBaleGrabObject", BaleGrab.mountBaleGrabObject)
  SpecializationUtil.registerFunction(vehicleType, "unmountBaleGrabObject", BaleGrab.unmountBaleGrabObject)
end
function BaleGrab.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", BaleGrab.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", BaleGrab.removeNodeObjectMapping)
end
function BaleGrab.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", BaleGrab)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", BaleGrab)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", BaleGrab)
end
function BaleGrab:onLoad(savegame)
  if self.isServer then
    local v4 = v4:getValue("vehicle.baleGrab#triggerNode", nil, self.components, self.i3dMappings)
    v4 = v4:getValue("vehicle.baleGrab#rootNode", nil, self.components, self.i3dMappings)
    v4 = v4:getValue("vehicle.baleGrab#jointNode", nil, self.components, self.i3dMappings)
    v4 = v4:getValue("vehicle.baleGrab#jointType", "TYPE_AUTO_ATTACH_XYZ")
    if DynamicMountUtil[v4] ~= nil then
    end
    if v3.triggerNode ~= nil and v3.rootNode ~= nil and v3.jointNode ~= nil then
      local v5 = v5:getValue("vehicle.baleGrab#forceAcceleration", 20)
      v3.forceAcceleration = v5
      addTrigger(v3.triggerNode, "baleGrabTriggerCallback", self)
      v5 = v5:getValue("vehicle.baleGrab#grabRefComponentJointIndex1")
      local v6 = v6:getValue("vehicle.baleGrab#grabRefComponentJointIndex2")
      if v5 ~= nil then
        v3.componentJoint1 = self.componentJoints[v5 + 1]
      end
      if v6 ~= nil then
        v3.componentJoint2 = self.componentJoints[v6 + 1]
      end
      local v7 = v7:getValue("vehicle.baleGrab#rotDiffThreshold1", 2)
      v3.rotDiffThreshold1 = v7
      v7 = v7:getValue("vehicle.baleGrab#rotDiffThreshold2", 2)
      v3.rotDiffThreshold2 = v7
      v7 = math.cos(v3.rotDiffThreshold1)
      v3.cosRotDiffThreshold1 = v7
      v7 = math.cos(v3.rotDiffThreshold2)
      v3.cosRotDiffThreshold2 = v7
      v2.dynamicMountAttacherTrigger = v3
    end
    v2.dynamicMountedObjects = {}
    v2.pendingDynamicMountObjects = {}
    return
  end
  SpecializationUtil.removeEventListener(self, "onUpdateTick", BaleGrab)
end
function BaleGrab:onDelete()
  if self.isServer and self.spec_baleGrab.dynamicMountedObjects ~= nil then
    for v5, v6 in pairs(self.spec_baleGrab.dynamicMountedObjects) do
      self:unmountBaleGrabObject(v5)
    end
  end
  if v1.dynamicMountAttacherTrigger ~= nil then
    removeTrigger(v1.dynamicMountAttacherTrigger.triggerNode)
  end
end
function BaleGrab:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if self.spec_baleGrab.dynamicMountAttacherTrigger.componentJoint1 ~= nil then
      local v8 = self:isComponentJointOutsideLimit(self.spec_baleGrab.dynamicMountAttacherTrigger.componentJoint1, self.spec_baleGrab.dynamicMountAttacherTrigger.rotDiffThreshold1, self.spec_baleGrab.dynamicMountAttacherTrigger.cosRotDiffThreshold1)
    end
    if v7 and v6.componentJoint2 ~= nil then
      v8 = self:isComponentJointOutsideLimit(v6.componentJoint2, v6.rotDiffThreshold2, v6.cosRotDiffThreshold2)
    end
    if v7 then
      for v11, v12 in pairs(v5.pendingDynamicMountObjects) do
        if not (v5.dynamicMountedObjects[v11] == nil) then
          continue
        end
        self:unmountBaleGrabObject(v11)
        self:mountBaleGrabObject(v11)
      end
      return
    end
    for v11, v12 in pairs(v5.dynamicMountedObjects) do
      self:unmountBaleGrabObject(v11)
    end
  end
end
function BaleGrab:addDynamicMountedObject(object)
  self.spec_baleGrab.dynamicMountedObjects[object] = object
end
function BaleGrab:removeDynamicMountedObject(object, isDeleting)
  self.spec_baleGrab.dynamicMountedObjects[object] = nil
  if isDeleting then
    self.spec_baleGrab.pendingDynamicMountObjects[object] = nil
  end
end
function BaleGrab:onPendingObjectDelete(object)
  if self.spec_baleGrab.pendingDynamicMountObjects[object] == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L17
  end
  self:removeDynamicMountedObject(object, true)
end
function BaleGrab:onPendingObjectMountStateChanged(object, mountState, mountObject)
  if mountState ~= MountableObject.MOUNT_TYPE_NONE and mountObject ~= self then
    if self.spec_baleGrab.pendingDynamicMountObjects[object] == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L23
    end
    self:removeDynamicMountedObject(object, true)
  end
end
function BaleGrab:baleGrabTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  local v7 = getHasTrigger(otherActorId)
  if not v7 then
    if onEnter then
      local v8 = v8:getNodeObject(otherActorId)
      if v8 == nil then
      end
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L126
      -- if v8 == v0 then goto L126 end
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L126
      local v9 = v8:getSupportsMountDynamic()
      -- if not v9 then goto L126 end
      v7.pendingDynamicMountObjects[v8] = (v7.pendingDynamicMountObjects[v8] or 0) + 1
      -- cmp-jump LOP_JUMPXEQKN R9 aux=0x8000000a -> L126
      v8:addDeleteListener(self, BaleGrab.onPendingObjectDelete)
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L126
      v8:addMountStateChangeListener(self, BaleGrab.onPendingObjectMountStateChanged)
      return
    end
    if onLeave then
      v8 = v8:getNodeObject(otherActorId)
      if v8 == nil then
      end
      if v8 ~= nil then
        v7.pendingDynamicMountObjects[v8] = (v7.pendingDynamicMountObjects[v8] or 0) - 1
        if v7.pendingDynamicMountObjects[v8] <= 0 then
          v7.pendingDynamicMountObjects[v8] = nil
          if v7.dynamicMountedObjects[v8] ~= nil then
            self:unmountBaleGrabObject(v8)
          end
          v8:removeDeleteListener(self, BaleGrab.onPendingObjectDelete)
          if v8.removeMountStateChangeListener ~= nil then
            v8:removeMountStateChangeListener(self, BaleGrab.onPendingObjectMountStateChanged)
          end
        end
      end
    end
  end
end
function BaleGrab:isComponentJointOutsideLimit(componentJoint, maxRot, cosMaxRot)
  local v4, v5, v6 = localDirectionToLocal(self.components[componentJoint.componentIndices[2]].node, componentJoint.jointNode, 0, 0, 1)
  if 0 > v4 then
  end
  if 0 > maxRot then
  end
  if v7 == true then
    local v8 = math.sqrt(v4 * v4 + v6 * v6)
    if v6 <= cosMaxRot * v8 then
      return true
    end
  end
  return false
end
function BaleGrab:mountBaleGrabObject(object)
  local v3 = object:mountDynamic(self, self.spec_baleGrab.dynamicMountAttacherTrigger.rootNode, self.spec_baleGrab.dynamicMountAttacherTrigger.jointNode, self.spec_baleGrab.dynamicMountAttacherTrigger.attacherJointType, self.spec_baleGrab.dynamicMountAttacherTrigger.forceAcceleration)
  if v3 then
    self:addDynamicMountedObject(object)
    return true
  end
  return false
end
function BaleGrab:unmountBaleGrabObject(object)
  self:removeDynamicMountedObject(object, false)
  object:unmountDynamic()
  return true
end
function BaleGrab:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_baleGrab.dynamicMountAttacherTrigger ~= nil and self.spec_baleGrab.dynamicMountAttacherTrigger.triggerNode ~= nil then
    list[self.spec_baleGrab.dynamicMountAttacherTrigger.triggerNode] = self
  end
end
function BaleGrab:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_baleGrab.dynamicMountAttacherTrigger ~= nil and self.spec_baleGrab.dynamicMountAttacherTrigger.triggerNode ~= nil then
    list[self.spec_baleGrab.dynamicMountAttacherTrigger.triggerNode] = nil
  end
end
