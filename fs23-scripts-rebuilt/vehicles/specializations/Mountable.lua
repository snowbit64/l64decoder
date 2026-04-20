-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Mountable = {FORCE_LIMIT_UPDATE_TIME = 1000, FORCE_LIMIT_RAYCAST_DISTANCE = 20}
function Mountable.prerequisitesPresent(v0)
  return true
end
function Mountable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Mountable")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMount#forceLimitScale", "Force limit scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMount#triggerNode", "Trigger node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMount#jointNode", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMount#triggerForceAcceleration", "Trigger force acceleration", 4)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dynamicMount#singleAxisFreeY", "Single axis free Y")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dynamicMount#singleAxisFreeX", "Single axis free X")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMount#jointTransY", "Fixed Y translation of local placed joint", "not defined")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dynamicMount#jointLimitToRotY", "Local placed joint will only be adjusted on Y axis to the target mounter object. X and Z will be 0.", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMount#additionalMountDistance", "Distance from root node to the object laying on top (normally height of object). If defined the mass of this object has influence in mounting.", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dynamicMount#allowMassReduction", "Defines if mass can be reduced by the mount vehicle", true)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMount.lockPosition(?)#xmlFilename", "XML filename of vehicle to lock on (needs to match only the end of the filename)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMount.lockPosition(?)#jointNode", "Joint node of other vehicle (path or i3dMapping name)", "vehicle root node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.dynamicMount.lockPosition(?)#transOffset", "Translation offset from joint node", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.dynamicMount.lockPosition(?)#rotOffset", "Rotation offset from joint node", "0 0 0")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Mountable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getSupportsMountDynamic", Mountable.getSupportsMountDynamic)
  SpecializationUtil.registerFunction(vehicleType, "getSupportsMountKinematic", Mountable.getSupportsMountKinematic)
  SpecializationUtil.registerFunction(vehicleType, "onDynamicMountJointBreak", Mountable.onDynamicMountJointBreak)
  SpecializationUtil.registerFunction(vehicleType, "mountableTriggerCallback", Mountable.mountableTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "mount", Mountable.mount)
  SpecializationUtil.registerFunction(vehicleType, "unmount", Mountable.unmount)
  SpecializationUtil.registerFunction(vehicleType, "mountKinematic", Mountable.mountKinematic)
  SpecializationUtil.registerFunction(vehicleType, "unmountKinematic", Mountable.unmountKinematic)
  SpecializationUtil.registerFunction(vehicleType, "mountDynamic", Mountable.mountDynamic)
  SpecializationUtil.registerFunction(vehicleType, "unmountDynamic", Mountable.unmountDynamic)
  SpecializationUtil.registerFunction(vehicleType, "getAdditionalMountingDistance", Mountable.getAdditionalMountingDistance)
  SpecializationUtil.registerFunction(vehicleType, "getAdditionalMountingMass", Mountable.getAdditionalMountingMass)
  SpecializationUtil.registerFunction(vehicleType, "updateDynamicMountJointForceLimit", Mountable.updateDynamicMountJointForceLimit)
  SpecializationUtil.registerFunction(vehicleType, "additionalMountingMassRaycastCallback", Mountable.additionalMountingMassRaycastCallback)
  SpecializationUtil.registerFunction(vehicleType, "getMountObject", Mountable.getMountObject)
  SpecializationUtil.registerFunction(vehicleType, "getDynamicMountObject", Mountable.getDynamicMountObject)
  SpecializationUtil.registerFunction(vehicleType, "setReducedComponentMass", Mountable.setReducedComponentMass)
  SpecializationUtil.registerFunction(vehicleType, "getAllowComponentMassReduction", Mountable.getAllowComponentMassReduction)
  SpecializationUtil.registerFunction(vehicleType, "getDefaultAllowComponentMassReduction", Mountable.getDefaultAllowComponentMassReduction)
  SpecializationUtil.registerFunction(vehicleType, "getMountableLockPositions", Mountable.getMountableLockPositions)
  SpecializationUtil.registerFunction(vehicleType, "setDynamicMountType", Mountable.setDynamicMountType)
  SpecializationUtil.registerFunction(vehicleType, "addMountStateChangeListener", Mountable.addMountStateChangeListener)
  SpecializationUtil.registerFunction(vehicleType, "removeMountStateChangeListener", Mountable.removeMountStateChangeListener)
end
function Mountable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActive", Mountable.getIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getOwner", Mountable.getOwner)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "findRootVehicle", Mountable.findRootVehicle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", Mountable.getIsMapHotspotVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalComponentMass", Mountable.getAdditionalComponentMass)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPositionQuaternion", Mountable.setWorldPositionQuaternion)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addToPhysics", Mountable.addToPhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeFromPhysics", Mountable.removeFromPhysics)
end
function Mountable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Mountable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Mountable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Mountable)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Mountable)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttach", Mountable)
end
function Mountable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.dynamicMount#triggerIndex", "vehicle.dynamicMount#triggerNode")
  self.spec_mountable.dynamicMountJointIndex = nil
  self.spec_mountable.dynamicMountObject = nil
  self.spec_mountable.dynamicMountObjectActorId = nil
  local v3 = v3:getValue("vehicle.dynamicMount#forceLimitScale", 1)
  self.spec_mountable.dynamicMountForceLimitScale = v3
  self.spec_mountable.mountObject = nil
  self.spec_mountable.componentNode = self.rootNode
  v3 = v3:getValue("vehicle.dynamicMount#triggerNode", nil, self.components, self.i3dMappings)
  self.spec_mountable.dynamicMountTriggerId = v3
  if self.spec_mountable.dynamicMountTriggerId ~= nil then
    if self.isServer then
      addTrigger(self.spec_mountable.dynamicMountTriggerId, "mountableTriggerCallback", self)
    end
    v3 = self:getParentComponent(v2.dynamicMountTriggerId)
    v2.componentNode = v3
    if v2.dynamicMountJointNodeDynamic == nil then
      v3 = createTransformGroup("dynamicMountJointNodeDynamic")
      v2.dynamicMountJointNodeDynamic = v3
      link(v2.componentNode, v2.dynamicMountJointNodeDynamic)
    end
    v3 = v3:getValue("vehicle.dynamicMount#jointTransY")
    v2.dynamicMountJointTransY = v3
    v3 = v3:getValue("vehicle.dynamicMount#jointLimitToRotY", false)
    v2.dynamicMountJointLimitToRotY = v3
  end
  v3 = v3:getValue("vehicle.dynamicMount#jointNode", nil, self.components, self.i3dMappings)
  v2.jointNode = v3
  v3 = v3:getValue("vehicle.dynamicMount#triggerForceAcceleration", 4)
  v2.dynamicMountTriggerForceAcceleration = v3
  v3 = v3:getValue("vehicle.dynamicMount#singleAxisFreeY")
  v2.dynamicMountSingleAxisFreeY = v3
  v3 = v3:getValue("vehicle.dynamicMount#singleAxisFreeX")
  v2.dynamicMountSingleAxisFreeX = v3
  v3 = v3:getValue("vehicle.dynamicMount#additionalMountDistance", 0)
  v2.additionalMountDistance = v3
  v2.forceLimitUpdate = {raycastActive = false, timer = 0, lastDistance = 0, nextMountingDistance = 0, additionalMass = 0}
  local v6 = self:getDefaultAllowComponentMassReduction()
  v3 = v3:getValue(...)
  v2.allowMassReduction = v3
  v2.reducedComponentMass = false
  v2.lockPositions = {}
  v3:iterate("vehicle.dynamicMount.lockPosition", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#xmlFilename")
    v3 = v3:getValue(savegame .. "#jointNode", "0>")
    if {xmlFilename = v3, jointNode = v3}.xmlFilename ~= nil and {xmlFilename = v3, jointNode = v3}.jointNode ~= nil then
      v3 = v3:gsub("$data", "data")
      v3 = v3:getValue(savegame .. "#transOffset", "0 0 0", true)
      v3 = v3:getValue(savegame .. "#rotOffset", "0 0 0", true)
      table.insert(u1.lockPositions, {xmlFilename = v3, jointNode = v3, xmlFilename = v3, transOffset = v3, rotOffset = v3})
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Invalid lock position '%s'. Missing xmlFilename or jointNode!", savegame)
  end)
  self.dynamicMountType = MountableObject.MOUNT_TYPE_NONE
  v2.mountStateChangeListeners = {}
end
function Mountable:onDelete()
  if self.spec_mountable.mountObject ~= nil and self.spec_mountable.mountObject.onUnmountObject ~= nil then
    v2:onUnmountObject(self)
  end
  if v1.dynamicMountJointIndex ~= nil then
    removeJointBreakReport(v1.dynamicMountJointIndex)
    removeJoint(v1.dynamicMountJointIndex)
  end
  if v1.dynamicMountObject ~= nil then
    v2:removeDynamicMountedObject(self, true)
  end
  if v1.dynamicMountTriggerId ~= nil then
    removeTrigger(v1.dynamicMountTriggerId)
  end
end
function Mountable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if self.spec_mountable.dynamicMountObjectTriggerCount ~= nil and self.spec_mountable.dynamicMountObjectTriggerCount <= 0 then
      if self.spec_mountable.dynamicMountJointNodeDynamicRefNode ~= nil then
        local v6, v7, v8 = localToLocal(self.spec_mountable.dynamicMountJointNodeDynamic, self.spec_mountable.dynamicMountJointNodeDynamicRefNode, 0, 0, 0)
        if self.spec_mountable.dynamicMountJointNodeDynamicMountOffset < v8 then
          self.spec_mountable.dynamicMountJointNodeDynamicMountOffset = nil
          self.spec_mountable.dynamicMountJointNodeDynamicRefNode = nil
          self:unmountDynamic()
          self.spec_mountable.dynamicMountObjectTriggerCount = nil
          -- goto L55  (LOP_JUMP +10)
        end
        self:raiseActive()
      else
        self:unmountDynamic()
        self.spec_mountable.dynamicMountObjectTriggerCount = nil
      end
    end
    if self.dynamicMountJointIndex ~= nil then
      self:updateDynamicMountJointForceLimit(dt)
    end
  end
end
function Mountable:getSupportsMountDynamic()
  if self.spec_mountable.dynamicMountForceLimitScale == nil then
  end
  return true
end
function Mountable:getSupportsMountKinematic()
  if #self.components ~= 1 then
  end
  return true
end
function Mountable:onDynamicMountJointBreak(jointIndex, breakingImpulse)
  if jointIndex == self.spec_mountable.dynamicMountJointIndex then
    self:unmountDynamic()
  end
  return false
end
function Mountable:mountableTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L117
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L117
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L117
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L117
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L117
    if self.spec_mountable.dynamicMountObjectActorId == nil then
      self:mountDynamic(g_currentMission.nodeToObject[otherActorId], otherActorId, g_currentMission.nodeToObject[otherActorId].spec_dynamicMountAttacher.dynamicMountAttacherNode, DynamicMountUtil.TYPE_FORK, self.spec_mountable.dynamicMountTriggerForceAcceleration * g_currentMission.nodeToObject[otherActorId].spec_dynamicMountAttacher.dynamicMountAttacherForceLimitScale)
      self.spec_mountable.dynamicMountObjectTriggerCount = 1
      return
    end
    if otherActorId ~= v7.dynamicMountObjectActorId and v7.dynamicMountObjectTriggerCount == nil then
      self:unmountDynamic()
      self:mountDynamic(v8, otherActorId, v9.dynamicMountAttacherNode, DynamicMountUtil.TYPE_FORK, v7.dynamicMountTriggerForceAcceleration * v9.dynamicMountAttacherForceLimitScale)
      v7.dynamicMountObjectTriggerCount = 1
      return
    end
    -- if v2 ~= v7.dynamicMountObjectActorId then goto L117 end
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L117
    v7.dynamicMountObjectTriggerCount = v7.dynamicMountObjectTriggerCount + 1
    return
  end
  if onLeave and otherActorId == v7.dynamicMountObjectActorId and v7.dynamicMountObjectTriggerCount ~= nil then
    v7.dynamicMountObjectTriggerCount = v7.dynamicMountObjectTriggerCount - 1
    if v7.dynamicMountJointNodeDynamic == nil and v7.dynamicMountObjectTriggerCount == 0 then
      self:unmountDynamic()
      v7.dynamicMountObjectTriggerCount = nil
    end
  end
end
function Mountable:mount(object, node, x, y, z, rx, ry, rz)
  self:unmountDynamic(true)
  if self.spec_mountable.mountObject == nil then
    removeFromPhysics(self.spec_mountable.componentNode)
  end
  link(node, v9.componentNode)
  local v10, v11, v12 = localToWorld(node, x, y, z)
  local v14 = localRotationToWorld(node, rx, ry, rz)
  local v13, v14, v15, v16 = mathEulerToQuaternion(...)
  self:setWorldPositionQuaternion(v10, v11, v12, v13, v14, v15, v16, 1, true)
  v9.mountObject = object
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_DEFAULT, object)
end
function Mountable:unmount()
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.spec_mountable.mountObject ~= nil then
    if self.spec_mountable.mountObject.onUnmountObject ~= nil then
      v2:onUnmountObject(self)
    end
    v1.mountObject = nil
    local v2, v3, v4 = getWorldTranslation(v1.componentNode)
    local v5, v6, v7, v8 = getWorldQuaternion(v1.componentNode)
    local v10 = getRootNode()
    link(v10, v1.componentNode)
    self:setWorldPositionQuaternion(v2, v3, v4, v5, v6, v7, v8, 1, true)
    addToPhysics(v1.componentNode)
    self:setReducedComponentMass(false)
    return true
  end
  return false
end
function Mountable:mountKinematic(object, node, x, y, z, rx, ry, rz)
  self:unmountDynamic(true)
  removeFromPhysics(self.spec_mountable.componentNode)
  if self.isServer then
    setRigidBodyType(self.spec_mountable.componentNode, RigidBodyType.KINEMATIC)
    self.components[1].isKinematic = true
    self.components[1].isDynamic = false
  end
  link(node, v9.componentNode)
  local v10, v11, v12 = localToWorld(node, x, y, z)
  local v14 = localRotationToWorld(node, rx, ry, rz)
  local v13, v14, v15, v16 = mathEulerToQuaternion(...)
  self:setWorldPositionQuaternion(v10, v11, v12, v13, v14, v15, v16, 1, true)
  addToPhysics(v9.componentNode)
  if object.getParentComponent ~= nil then
    local v17 = object:getParentComponent(node)
    local v18 = getRigidBodyType(v17)
    if v18 == RigidBodyType.DYNAMIC then
      setPairCollision(v17, v9.componentNode, false)
    end
  end
  v9.mountObject = object
  v9.mountJointNode = node
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_KINEMATIC, object)
end
function Mountable:unmountKinematic()
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.spec_mountable.mountObject ~= nil then
    if self.spec_mountable.mountObject.getParentComponent ~= nil then
      local v2 = v2:getParentComponent(self.spec_mountable.mountJointNode)
      local v3 = getRigidBodyType(v2)
      if v3 == RigidBodyType.DYNAMIC then
        setPairCollision(v2, self.spec_mountable.componentNode, true)
      end
    end
    if v1.mountObject.onUnmountObject ~= nil then
      v2:onUnmountObject(self)
    end
    v1.mountObject = nil
    v1.mountJointNode = nil
    local v2, v3, v4 = getWorldTranslation(v1.componentNode)
    local v5, v6, v7, v8 = getWorldQuaternion(v1.componentNode)
    removeFromPhysics(v1.componentNode)
    local v10 = getRootNode()
    link(v10, v1.componentNode)
    self:setWorldPositionQuaternion(v2, v3, v4, v5, v6, v7, v8, 1, true)
    addToPhysics(v1.componentNode)
    if self.isServer then
      setRigidBodyType(v1.componentNode, RigidBodyType.DYNAMIC)
      self.components[1].isKinematic = false
      self.components[1].isDynamic = true
    end
    self:setReducedComponentMass(false)
    return true
  end
  return false
end
function Mountable:mountDynamic(object, objectActorId, jointNode, mountType, forceAcceleration)
  local v7 = self:getSupportsMountDynamic()
  if v7 then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L12
  end
  return false
  if self.spec_dynamicMountAttacher ~= nil then
    for v11, v12 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
      local v13 = v12:isa(Vehicle)
      if not v13 then
        continue
      end
      if not (v12.rootVehicle == object.rootVehicle) then
        continue
      end
      return false
    end
  end
  if object.rootVehicle == self.rootVehicle then
    return false
  end
  if v6.dynamicMountTriggerId ~= nil then
    if mountType == DynamicMountUtil.TYPE_FORK then
      local v15 = getCenterOfMass(v6.componentNode)
      v13 = localToWorld(...)
      v11, v12, v13 = worldToLocal(...)
      local v16 = getParent(v6.dynamicMountJointNodeDynamic)
      local v14, v15, v16 = localToLocal(v6.jointNode or jointNode, v16, 0, 0, v13)
    else
      v13 = getParent(v6.dynamicMountJointNodeDynamic)
      v11, v12, v13 = localToLocal(v6.jointNode or jointNode, v13, 0, 0, 0)
    end
    setTranslation(v6.dynamicMountJointNodeDynamic, v8, v6.dynamicMountJointTransY or v9, v10)
    if v6.dynamicMountJointLimitToRotY then
      v13 = getParent(v6.dynamicMountJointNodeDynamic)
      v11, v12, v13 = localDirectionToLocal(jointNode, v13, 0, 0, 1)
      v14 = math.abs(v12)
      if 0.2 < v14 then
        return false
      end
      v14, v15 = MathUtil.vector2Normalize(v11, v13)
      local v17 = MathUtil.getYRotationFromDirection(v14, v15)
      setRotation(v6.dynamicMountJointNodeDynamic, 0, v17, 0)
      local v19 = getParent(v6.dynamicMountJointNodeDynamic)
      local v17, v18, v19 = localDirectionToLocal(jointNode, v19, 0, 1, 0)
      -- if v18 >= 0 then goto L210 end
      rotateAboutLocalAxis(v6.dynamicMountJointNodeDynamic, math.pi, 0, 0, 1)
    else
      v13 = getParent(v6.dynamicMountJointNodeDynamic)
      v11, v12, v13 = localRotationToLocal(jointNode, v13, 0, 0, 0)
      setRotation(v6.dynamicMountJointNodeDynamic, v11, v12, v13)
    end
    v12, v13, v14 = localToLocal(v6.dynamicMountJointNodeDynamic, jointNode, 0, 0, 0)
    v6.dynamicMountJointNodeDynamicMountOffset = v14
    v6.dynamicMountJointNodeDynamicRefNode = jointNode
  end
  v6.mountBaseForceAcceleration = forceAcceleration
  v8 = self:getTotalMass()
  v6.mountBaseMass = v8
  v8 = DynamicMountUtil.mountDynamic(self, v6.componentNode, object, objectActorId, jointNode, mountType, forceAcceleration * v6.dynamicMountForceLimitScale, v6.dynamicMountJointNodeDynamic)
  if v8 then
    self:setDynamicMountType(MountableObject.MOUNT_TYPE_DYNAMIC, object)
    return true
  end
  return false
end
function Mountable:unmountDynamic(isDelete)
  self:setDynamicMountType(MountableObject.MOUNT_TYPE_NONE)
  if self.spec_mountable.mountObject ~= nil then
    if self.spec_mountable.mountObject.onUnmountObject ~= nil then
      v3:onUnmountObject(self)
    end
    self:setReducedComponentMass(false)
  end
  DynamicMountUtil.unmountDynamic(self, isDelete)
end
function Mountable:addToPhysics(v1)
  local v2 = v1(self)
  if self.dynamicMountType == MountableObject.MOUNT_TYPE_KINEMATIC and self.spec_mountable.mountObject ~= nil and self.spec_mountable.mountObject.getParentComponent ~= nil then
    local v5 = self.spec_mountable.mountObject:getParentComponent(self.spec_mountable.mountJointNode)
    local v6 = getRigidBodyType(v5)
    if v6 == RigidBodyType.DYNAMIC then
      setPairCollision(v5, self.spec_mountable.componentNode, false)
    end
  end
  return v2
end
function Mountable.removeFromPhysics(v0, v1)
  return v1(v0)
end
function Mountable:getAdditionalMountingDistance()
  return self.spec_mountable.additionalMountDistance
end
function Mountable.getAdditionalMountingMass(v0)
  return 0
end
function Mountable:updateDynamicMountJointForceLimit(dt)
  if not self.spec_mountable.forceLimitUpdate.raycastActive then
    self.spec_mountable.forceLimitUpdate.timer = self.spec_mountable.forceLimitUpdate.timer - dt
    if self.spec_mountable.forceLimitUpdate.timer <= 0 then
      self.spec_mountable.forceLimitUpdate.raycastActive = true
      self.spec_mountable.forceLimitUpdate.timer = Mountable.FORCE_LIMIT_UPDATE_TIME
      self.spec_mountable.forceLimitUpdate.lastDistance = 0
      self.spec_mountable.forceLimitUpdate.lastObject = nil
      local v4 = self:getAdditionalMountingDistance()
      self.spec_mountable.forceLimitUpdate.nextMountingDistance = v4
      self.spec_mountable.forceLimitUpdate.additionalMass = 0
      local v3, v4, v5 = getWorldTranslation(self.rootNode)
      raycastAll(v3, v4, v5, 0, 1, 0, "additionalMountingMassRaycastCallback", Mountable.FORCE_LIMIT_RAYCAST_DISTANCE, self, CollisionFlag.DYNAMIC_OBJECT, false, true)
    end
  end
end
function Mountable:additionalMountingMassRaycastCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  self.spec_mountable.forceLimitUpdate.raycastActive = false
  if g_currentMission.nodeToObject[hitObjectId] ~= self and g_currentMission.nodeToObject[hitObjectId] ~= nil then
    local v14 = g_currentMission.nodeToObject[hitObjectId]:isa(Vehicle)
    if v14 and self.getAdditionalMountingDistance ~= nil and g_currentMission.nodeToObject[hitObjectId] ~= self.spec_mountable.forceLimitUpdate.lastObject then
      local v15 = math.abs(distance - self.spec_mountable.forceLimitUpdate.lastDistance - self.spec_mountable.forceLimitUpdate.nextMountingDistance)
      if v15 < 0.25 then
        self.spec_mountable.forceLimitUpdate.lastDistance = distance
        local v16 = self:getAdditionalMountingDistance()
        self.spec_mountable.forceLimitUpdate.nextMountingDistance = v16
        local v18 = g_currentMission.nodeToObject[hitObjectId]:getTotalMass()
        self.spec_mountable.forceLimitUpdate.additionalMass = self.spec_mountable.forceLimitUpdate.additionalMass + v18
        self.spec_mountable.forceLimitUpdate.lastObject = g_currentMission.nodeToObject[hitObjectId]
      end
    end
  end
  if isLast and self.dynamicMountJointIndex ~= nil then
    setJointLinearDrive(self.dynamicMountJointIndex, 2, false, true, 0, 0, v12.mountBaseMass * v12.mountBaseForceAcceleration * (v12.forceLimitUpdate.additionalMass + v12.mountBaseMass) / v12.mountBaseMass, 0, 0)
  end
end
function Mountable:getIsActive(superFunc)
  if self.spec_mountable.dynamicMountObject ~= nil and self.spec_mountable.dynamicMountObject.getIsActive ~= nil then
    local v4 = v4:getIsActive()
  end
  local v5 = superFunc(self)
  return v5 or v2
end
function Mountable:getMountObject()
  return self.spec_mountable.mountObject
end
function Mountable:getDynamicMountObject()
  return self.spec_mountable.dynamicMountObject
end
function Mountable:setReducedComponentMass(state)
  local v3 = self:getAllowComponentMassReduction()
  if v3 then
    if self.spec_mountable.reducedComponentMass ~= state then
      self.spec_mountable.reducedComponentMass = state
      self:setMassDirty()
    end
    return true
  end
  return false
end
function Mountable:getAllowComponentMassReduction()
  return self.spec_mountable.allowMassReduction
end
function Mountable.getDefaultAllowComponentMassReduction(v0)
  return false
end
function Mountable:getMountableLockPositions()
  return self.spec_mountable.lockPositions
end
function Mountable:setDynamicMountType(mountState, mountObject)
  if mountState ~= self.dynamicMountType then
    self.dynamicMountType = mountState
    for v7, v8 in ipairs(self.spec_mountable.mountStateChangeListeners) do
      local v9 = type(v8.callbackFunc)
      if v9 == "string" then
        v8.object[v8.callbackFunc](v8.object, self, mountState, mountObject)
      else
        v9 = type(v8.callbackFunc)
        if not (v9 == "function") then
          continue
        end
        v8.callbackFunc(v8.object, self, mountState, mountObject)
      end
    end
  end
end
function Mountable:addMountStateChangeListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for v7, v8 in ipairs(v3.mountStateChangeListeners) do
    if not (v8.object == object) then
      continue
    end
    if not (v8.callbackFunc == callbackFunc) then
      continue
    end
    return
  end
  table.insert(v3.mountStateChangeListeners, {object = object, callbackFunc = callbackFunc})
end
function Mountable:removeMountStateChangeListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for v8, v9 in ipairs(v3.mountStateChangeListeners) do
    if not (v9.object == object) then
      continue
    end
    if not (v9.callbackFunc == callbackFunc) then
      continue
    end
  end
  if 0 < v4 then
    table.remove(v3.mountStateChangeListeners, v4)
  end
end
function Mountable:getOwner(superFunc)
  if self.spec_mountable.dynamicMountObject ~= nil and self.spec_mountable.dynamicMountObject.getOwner ~= nil then
    return v3:getOwner()
  end
  v3 = superFunc(self)
  return v3
end
function Mountable:findRootVehicle(superFunc)
  local rootAttacherVehicle = superFunc(self)
  if rootAttacherVehicle ~= nil then
    -- if v3 ~= v0 then goto L25 end
  end
  if v2.dynamicMountObject ~= nil and v2.dynamicMountObject.findRootVehicle ~= nil then
    local v4 = v4:findRootVehicle()
  end
  if rootAttacherVehicle == nil then
  end
  return rootAttacherVehicle
end
function Mountable:getIsMapHotspotVisible(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  v2 = self:getMountObject()
  if v2 ~= nil then
    return false
  end
  v2 = self:getDynamicMountObject()
  if v2 ~= nil then
    return false
  end
  return true
end
function Mountable:getAdditionalComponentMass(superFunc, component)
  local additionalMass = superFunc(self, component)
  if self.spec_mountable.reducedComponentMass then
  end
  return additionalMass
end
function Mountable:setWorldPositionQuaternion(superFunc, x, y, z, qx, qy, qz, qw, i, changeInterp)
  if not self.isServer then
    local v11 = self:getMountObject()
    if v11 ~= nil then
      -- if 1 >= v9 then goto L24 end
    end
    v11 = superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
    return v11
    return
  end
  v11 = superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
  return v11
end
function Mountable:onEnterVehicle(isControlling)
  self:unmountDynamic()
end
function Mountable:onPreAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self:unmountDynamic()
end
