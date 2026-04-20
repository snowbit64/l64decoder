-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DynamicMountAttacher = {DYNAMIC_MOUNT_GRAB_XML_PATH = "vehicle.dynamicMountAttacher.grab"}
function DynamicMountAttacher.prerequisitesPresent(v0)
  return true
end
function DynamicMountAttacher.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("DynamicMountAttacher")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher#node", "Attacher node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMountAttacher#forceLimitScale", "Force limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMountAttacher#timeToMount", "No movement time until mounting", 1000)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.dynamicMountAttacher#numObjectBits", "Number of object bits to sync", 5)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher.grab#openMountType", "Open mount type", "TYPE_FORK")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher.grab#closedMountType", "Closed mount type", "TYPE_AUTO_ATTACH_XYZ")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher.mountCollisionMask(?)#node", "Collision node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher.mountCollisionMask(?)#triggerNode", "Trigger node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher.mountCollisionMask(?)#mountType", "Mount type name", "FORK")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMountAttacher.mountCollisionMask(?)#forceLimitScale", "Force limit", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.dynamicMountAttacher.mountCollisionMask(?)#collisionMask", "Collision mask while object mounted")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher#triggerNode", "Trigger node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher#rootNode", "Root node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher#jointNode", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMountAttacher#forceAcceleration", "Force acceleration", 30)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher#mountType", "Mount type", "TYPE_AUTO_ATTACH_XZ")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.dynamicMountAttacher#transferMass", "If this is set to 'true' the mass of the object to mount is tranfered to our own component. This improves phyiscs stability", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher.lockPosition(?)#xmlFilename", "XML filename of vehicle to lock (needs to match only the end of the filename)")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicMountAttacher.lockPosition(?)#jointNode", "Joint node (Representens the position of the other vehicles root node)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.dynamicMountAttacher.lockPosition(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicMountAttacher.animation#name", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dynamicMountAttacher.animation#speed", "Animation speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. ".dynamicMountAttacher#value", "Update dynamic mount attacher joints")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. ".dynamicMountAttacher#value", "Update dynamic mount attacher joints")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function DynamicMountAttacher.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "writeDynamicMountObjectsToStream", DynamicMountAttacher.writeDynamicMountObjectsToStream)
  SpecializationUtil.registerFunction(vehicleType, "readDynamicMountObjectsFromStream", DynamicMountAttacher.readDynamicMountObjectsFromStream)
  SpecializationUtil.registerFunction(vehicleType, "getAllowDynamicMountObjects", DynamicMountAttacher.getAllowDynamicMountObjects)
  SpecializationUtil.registerFunction(vehicleType, "dynamicMountTriggerCallback", DynamicMountAttacher.dynamicMountTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "lockDynamicMountedObject", DynamicMountAttacher.lockDynamicMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "addDynamicMountedObject", DynamicMountAttacher.addDynamicMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "removeDynamicMountedObject", DynamicMountAttacher.removeDynamicMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "setDynamicMountAnimationState", DynamicMountAttacher.setDynamicMountAnimationState)
  SpecializationUtil.registerFunction(vehicleType, "getAllowDynamicMountFillLevelInfo", DynamicMountAttacher.getAllowDynamicMountFillLevelInfo)
  SpecializationUtil.registerFunction(vehicleType, "loadDynamicMountGrabFromXML", DynamicMountAttacher.loadDynamicMountGrabFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsDynamicMountGrabOpened", DynamicMountAttacher.getIsDynamicMountGrabOpened)
  SpecializationUtil.registerFunction(vehicleType, "getDynamicMountTimeToMount", DynamicMountAttacher.getDynamicMountTimeToMount)
  SpecializationUtil.registerFunction(vehicleType, "getHasDynamicMountedObjects", DynamicMountAttacher.getHasDynamicMountedObjects)
  SpecializationUtil.registerFunction(vehicleType, "forceDynamicMountPendingObjects", DynamicMountAttacher.forceDynamicMountPendingObjects)
  SpecializationUtil.registerFunction(vehicleType, "forceUnmountDynamicMountedObjects", DynamicMountAttacher.forceUnmountDynamicMountedObjects)
  SpecializationUtil.registerFunction(vehicleType, "getDynamicMountAttacherSettingsByNode", DynamicMountAttacher.getDynamicMountAttacherSettingsByNode)
end
function DynamicMountAttacher.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillLevelInformation", DynamicMountAttacher.getFillLevelInformation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", DynamicMountAttacher.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", DynamicMountAttacher.removeNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadExtraDependentParts", DynamicMountAttacher.loadExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateExtraDependentParts", DynamicMountAttacher.updateExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAttachedTo", DynamicMountAttacher.getIsAttachedTo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalComponentMass", DynamicMountAttacher.getAdditionalComponentMass)
end
function DynamicMountAttacher.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", DynamicMountAttacher)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", DynamicMountAttacher)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", DynamicMountAttacher)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", DynamicMountAttacher)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", DynamicMountAttacher)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttachImplement", DynamicMountAttacher)
end
function DynamicMountAttacher:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.dynamicMountAttacher#index", "vehicle.dynamicMountAttacher#node")
  local v3 = v3:getValue("vehicle.dynamicMountAttacher#node", nil, self.components, self.i3dMappings)
  self.spec_dynamicMountAttacher.dynamicMountAttacherNode = v3
  v3 = v3:getValue("vehicle.dynamicMountAttacher#forceLimitScale", 1)
  self.spec_dynamicMountAttacher.dynamicMountAttacherForceLimitScale = v3
  v3 = v3:getValue("vehicle.dynamicMountAttacher#timeToMount", 1000)
  self.spec_dynamicMountAttacher.dynamicMountAttacherTimeToMount = v3
  v3 = v3:getValue("vehicle.dynamicMountAttacher#numObjectBits", 5)
  self.spec_dynamicMountAttacher.numObjectBits = v3
  self.spec_dynamicMountAttacher.maxNumObjectsToSend = 2 ^ self.spec_dynamicMountAttacher.numObjectBits - 1
  v3 = v3:hasProperty("vehicle.dynamicMountAttacher.grab")
  if v3 then
    self.spec_dynamicMountAttacher.dynamicMountAttacherGrab = {}
    self:loadDynamicMountGrabFromXML(self.xmlFile, "vehicle.dynamicMountAttacher.grab", self.spec_dynamicMountAttacher.dynamicMountAttacherGrab)
  end
  v2.pendingDynamicMountObjects = {}
  v2.dynamicMountCollisionMasks = {}
  v2.lockPositions = {}
  if self.isServer then
    v3:iterate("vehicle.dynamicMountAttacher.mountCollisionMask", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      v3 = v3:getValue(savegame .. "#triggerNode", nil, u0.components, u0.i3dMappings)
      v3 = v3:getValue(savegame .. "#collisionMask")
      if {node = v3, triggerNode = v3, mountedCollisionMask = v3}.node ~= nil and {node = v3, triggerNode = v3, mountedCollisionMask = v3}.mountedCollisionMask ~= nil then
        v3 = v3:getValue(savegame .. "#mountType", "FORK")
        if not DynamicMountUtil["TYPE_" .. v3] then
        end
        v2.mountType = v4
        local v4 = v4:getValue(savegame .. "#forceLimitScale", u1.dynamicMountAttacherForceLimitScale)
        v2.forceLimitScale = v4
        v4 = getCollisionMask(v2.node)
        v2.unmountedCollisionMask = v4
        table.insert(u1.dynamicMountCollisionMasks, v2)
        return
      end
      Logging.xmlWarning(u0.xmlFile, "Missing node or collisionMask in '%s'", savegame)
    end)
    local v4 = v4:getValue("vehicle.dynamicMountAttacher#triggerNode", nil, self.components, self.i3dMappings)
    v4 = v4:getValue("vehicle.dynamicMountAttacher#rootNode", nil, self.components, self.i3dMappings)
    v4 = v4:getValue("vehicle.dynamicMountAttacher#jointNode", nil, self.components, self.i3dMappings)
    if {triggerNode = v4, rootNode = v4, jointNode = v4}.triggerNode ~= nil and {triggerNode = v4, rootNode = v4, jointNode = v4}.rootNode ~= nil and {triggerNode = v4, rootNode = v4, jointNode = v4}.jointNode ~= nil then
      v4 = getCollisionMask({triggerNode = v4, rootNode = v4, jointNode = v4}.triggerNode)
      if v4 == CollisionMask.TRIGGER_DYNAMIC_MOUNT then
        addTrigger({triggerNode = v4, rootNode = v4, jointNode = v4}.triggerNode, "dynamicMountTriggerCallback", self)
        local v5 = v5:getValue("vehicle.dynamicMountAttacher#forceAcceleration", 30)
        v5 = v5:getValue("vehicle.dynamicMountAttacher#mountType", "TYPE_AUTO_ATTACH_XZ")
        local v6 = Utils.getNoNil(DynamicMountUtil[v5], DynamicMountUtil.TYPE_AUTO_ATTACH_XZ)
        v6 = self:getParentComponent({triggerNode = v4, rootNode = v4, jointNode = v4, forceAcceleration = v5, mountType = v6, currentMountType = {triggerNode = v4, rootNode = v4, jointNode = v4, forceAcceleration = v5, mountType = v6}.mountType}.triggerNode)
        v2.dynamicMountAttacherTrigger = {triggerNode = v4, rootNode = v4, jointNode = v4, forceAcceleration = v5, mountType = v6, currentMountType = {triggerNode = v4, rootNode = v4, jointNode = v4, forceAcceleration = v5, mountType = v6}.mountType, component = v6}
      else
        Logging.xmlWarning(self.xmlFile, "Dynamic Mount trigger has invalid collision mask (should be %d)!", CollisionMask.TRIGGER_DYNAMIC_MOUNT)
      end
    end
    v4 = v4:getValue("vehicle.dynamicMountAttacher#transferMass", false)
    v2.transferMass = v4
    v4:iterate("vehicle.dynamicMountAttacher.lockPosition", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#xmlFilename")
      v3 = v3:getValue(savegame .. "#jointNode", nil, u0.components, u0.i3dMappings)
      if {xmlFilename = v3, jointNode = v3}.xmlFilename ~= nil and {xmlFilename = v3, jointNode = v3}.jointNode ~= nil then
        v3 = v3:gsub("$data", "data")
        ObjectChangeUtil.loadObjectChangeFromXML(u0.xmlFile, savegame, {xmlFilename = v3, jointNode = v3, xmlFilename = v3, objectChanges = {}}.objectChanges, u0.components, u0)
        table.insert(u1.lockPositions, {xmlFilename = v3, jointNode = v3, xmlFilename = v3, objectChanges = {}})
        return
      end
      Logging.xmlWarning(u0.xmlFile, "Invalid lock position '%s'. Missing xmlFilename or jointNode!", savegame)
    end)
  end
  v3 = v3:getValue("vehicle.dynamicMountAttacher.animation#name")
  v2.animationName = v3
  v3 = v3:getValue("vehicle.dynamicMountAttacher.animation#speed", 1)
  v2.animationSpeed = v3
  if v2.animationName ~= nil then
    local v7 = self:getAnimationTime(v2.animationName)
    self:playAnimation(v2.animationName, v2.animationSpeed, v7, true)
  end
  v2.dynamicMountedObjects = {}
  v3 = self:getNextDirtyFlag()
  v2.dynamicMountedObjectsDirtyFlag = v3
end
function DynamicMountAttacher:onDelete()
  if self.isServer and self.spec_dynamicMountAttacher.dynamicMountedObjects ~= nil then
    for v5, v6 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
      v5:unmountDynamic()
    end
  end
  if v1.dynamicMountAttacherTrigger ~= nil then
    removeTrigger(v1.dynamicMountAttacherTrigger.triggerNode)
  end
end
function DynamicMountAttacher:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      v5 = self:readDynamicMountObjectsFromStream(streamId, self.spec_dynamicMountAttacher.dynamicMountedObjects)
      if 0 >= v5 then
      end
      self:setDynamicMountAnimationState(true)
      self:readDynamicMountObjectsFromStream(streamId, v4.pendingDynamicMountObjects)
    end
  end
end
function DynamicMountAttacher:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_dynamicMountAttacher.dynamicMountedObjectsDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      self:writeDynamicMountObjectsToStream(streamId, v4.dynamicMountedObjects)
      self:writeDynamicMountObjectsToStream(streamId, v4.pendingDynamicMountObjects)
    end
  end
end
function DynamicMountAttacher:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    local v6 = self:getAllowDynamicMountObjects()
    if v6 then
      for v9, v10 in pairs(self.spec_dynamicMountAttacher.pendingDynamicMountObjects) do
        self:raiseActive()
        if not (v5.dynamicMountedObjects[v9] == nil) then
          continue
        end
        local v13 = self:getDynamicMountTimeToMount()
        if not (v9.lastMoveTime + v13 < g_currentMission.time) then
          continue
        end
        if v9.components ~= nil then
          if v9.getCanByMounted ~= nil then
            v13 = v9:getCanByMounted()
          else
            v13 = entityExists(v9.components[1].node)
            if v13 then
            end
          end
        end
        if v9.nodeId ~= nil then
          if v9.getCanByMounted ~= nil then
            v13 = v9:getCanByMounted()
          else
            v13 = entityExists(v9.nodeId)
            if v13 then
            end
          end
        end
        if v11 then
          local objectJoint = createTransformGroup("dynamicMountObjectJoint")
          link(v5.dynamicMountAttacherTrigger.jointNode, objectJoint)
          local v17 = getWorldTranslation(v12)
          setWorldTranslation(...)
          local v15 = v9:mountDynamic(self, v5.dynamicMountAttacherTrigger.rootNode, objectJoint, v5.dynamicMountAttacherTrigger.mountType, v5.dynamicMountAttacherTrigger.forceAcceleration)
          if v15 then
            v9.additionalDynamicMountJointNode = objectJoint
            self:addDynamicMountedObject(v9)
            continue
          end
          delete(objectJoint)
        else
          v5.pendingDynamicMountObjects[v9] = nil
          self:raiseDirtyFlags(v5.dynamicMountedObjectsDirtyFlag)
        end
      end
    else
      for v9, v10 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
        self:removeDynamicMountedObject(v9, false)
        v9:unmountDynamic()
        if not (v9.additionalDynamicMountJointNode ~= nil) then
          continue
        end
        delete(v9.additionalDynamicMountJointNode)
        v9.additionalDynamicMountJointNode = nil
      end
    end
    if v5.dynamicMountAttacherGrab ~= nil then
      for v9, v10 in pairs(v5.dynamicMountedObjects) do
        local v12 = self:getIsDynamicMountGrabOpened(v5.dynamicMountAttacherGrab)
        if v12 then
        end
        if not (v5.dynamicMountAttacherGrab.currentMountType ~= v11) then
          continue
        end
        v5.dynamicMountAttacherGrab.currentMountType = v11
        v12, v13, objectJoint = getWorldTranslation(v5.dynamicMountAttacherNode)
        setJointPosition(v9.dynamicMountJointIndex, 1, v12, v13, objectJoint)
        if v11 == DynamicMountUtil.TYPE_FORK then
          setJointRotationLimit(v9.dynamicMountJointIndex, 0, true, 0, 0)
          setJointRotationLimit(v9.dynamicMountJointIndex, 1, true, 0, 0)
          setJointRotationLimit(v9.dynamicMountJointIndex, 2, true, 0, 0)
          if v9.dynamicMountSingleAxisFreeX then
            setJointTranslationLimit(v9.dynamicMountJointIndex, 0, false, 0, 0)
          else
            setJointTranslationLimit(v9.dynamicMountJointIndex, 0, true, -0.01, 0.01)
          end
          if v9.dynamicMountSingleAxisFreeY then
            setJointTranslationLimit(v9.dynamicMountJointIndex, 1, false, 0, 0)
          else
            setJointTranslationLimit(v9.dynamicMountJointIndex, 1, true, -0.01, 0.01)
          end
          setJointTranslationLimit(v9.dynamicMountJointIndex, 2, false, 0, 0)
        else
          setJointRotationLimit(v9.dynamicMountJointIndex, 0, true, 0, 0)
          setJointRotationLimit(v9.dynamicMountJointIndex, 1, true, 0, 0)
          setJointRotationLimit(v9.dynamicMountJointIndex, 2, true, 0, 0)
          if v11 ~= DynamicMountUtil.TYPE_AUTO_ATTACH_XYZ then
            -- if v11 ~= DynamicMountUtil.TYPE_FIX_ATTACH then goto L366 end
          end
          setJointTranslationLimit(v9.dynamicMountJointIndex, 0, true, -0.01, 0.01)
          setJointTranslationLimit(v9.dynamicMountJointIndex, 1, true, -0.01, 0.01)
          setJointTranslationLimit(v9.dynamicMountJointIndex, 2, true, -0.01, 0.01)
          continue
          if v11 == DynamicMountUtil.TYPE_AUTO_ATTACH_XZ then
            setJointTranslationLimit(v9.dynamicMountJointIndex, 0, true, -0.01, 0.01)
            setJointTranslationLimit(v9.dynamicMountJointIndex, 1, false, 0, 0)
            setJointTranslationLimit(v9.dynamicMountJointIndex, 2, true, -0.01, 0.01)
          else
            if not (v11 == DynamicMountUtil.TYPE_AUTO_ATTACH_Y) then
              continue
            end
            setJointTranslationLimit(v9.dynamicMountJointIndex, 0, false, 0, 0)
            setJointTranslationLimit(v9.dynamicMountJointIndex, 1, true, -0.01, 0.01)
            setJointTranslationLimit(v9.dynamicMountJointIndex, 2, false, 0, 0)
          end
        end
      end
    end
  end
end
function DynamicMountAttacher:lockDynamicMountedObject(object, x, y, z, rx, ry, rz)
  DynamicMountUtil.unmountDynamic(object, false)
  object:removeFromPhysics()
  self.spec_dynamicMountAttacher.pendingDynamicMountObjects[object] = nil
  object:setWorldPosition(x, y, z, rx, ry, rz, 1, true)
  object:addToPhysics()
  local v10 = object:mountDynamic(self, self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.rootNode, self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.jointNode, self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.mountType, self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.forceAcceleration)
  if not v10 then
    self:removeDynamicMountedObject(object, false)
  end
end
function DynamicMountAttacher:addDynamicMountedObject(object)
  if self.spec_dynamicMountAttacher.dynamicMountedObjects[object] == nil then
    self.spec_dynamicMountAttacher.dynamicMountedObjects[object] = object
    if object.getMountableLockPositions ~= nil then
      local v4 = object:getMountableLockPositions()
      -- TODO: structure LOP_FORNPREP (pc 21, target 81)
      local v9 = string.endsWith(self.configFileName, v4[1].xmlFilename)
      if v9 then
        v9 = I3DUtil.indexToObject(self.components, v4[1].jointNode, self.i3dMappings)
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L80
        local v10, v11, v12 = localToWorld(v9, v4[1].transOffset[1], v4[1].transOffset[2], v4[1].transOffset[3])
        local v13, v14, v15 = localRotationToWorld(v9, v4[1].rotOffset[1], v4[1].rotOffset[2], v4[1].rotOffset[3])
        self:lockDynamicMountedObject(object, v10, v11, v12, v13, v14, v15)
      else
        -- TODO: structure LOP_FORNLOOP (pc 80, target 22)
      end
    end
    if not v3 then
      v4 = object:isa(Vehicle)
      if v4 then
        -- TODO: structure LOP_FORNPREP (pc 93, target 136)
        local v8 = string.endsWith(object.configFileName, v2.lockPositions[1].xmlFilename)
        if v8 then
          v8, v9, v10 = getWorldTranslation(v2.lockPositions[1].jointNode)
          v11, v12, v13 = getWorldRotation(v2.lockPositions[1].jointNode)
          self:lockDynamicMountedObject(object, v8, v9, v10, v11, v12, v13)
          ObjectChangeUtil.setObjectChanges(v2.lockPositions[1].objectChanges, true, self, self.setMovingToolDirty)
        else
          -- TODO: structure LOP_FORNLOOP (pc 135, target 94)
        end
      end
    end
    for v7, v8 in pairs(v2.dynamicMountCollisionMasks) do
      setCollisionMask(v8.node, v8.mountedCollisionMask)
    end
    if v2.transferMass and object.setReducedComponentMass ~= nil then
      object:setReducedComponentMass(true)
      self:setMassDirty()
    end
    self:setDynamicMountAnimationState(true)
    self:raiseDirtyFlags(v2.dynamicMountedObjectsDirtyFlag)
  end
end
function DynamicMountAttacher:removeDynamicMountedObject(object, isDeleting)
  self.spec_dynamicMountAttacher.dynamicMountedObjects[object] = nil
  if isDeleting then
    self.spec_dynamicMountAttacher.pendingDynamicMountObjects[object] = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 16, target 30)
  ObjectChangeUtil.setObjectChanges(v3.lockPositions[1].objectChanges, false, self, self.setMovingToolDirty)
  -- TODO: structure LOP_FORNLOOP (pc 29, target 17)
  local v4 = next(v3.dynamicMountedObjects)
  if v4 == nil then
    v4 = next(v3.pendingDynamicMountObjects)
    if v4 == nil then
      for v7, v8 in pairs(v3.dynamicMountCollisionMasks) do
        setCollisionMask(v8.node, v8.unmountedCollisionMask)
      end
    end
  end
  if v3.transferMass then
    self:setMassDirty()
  end
  self:setDynamicMountAnimationState(false)
  self:raiseDirtyFlags(v3.dynamicMountedObjectsDirtyFlag)
end
function DynamicMountAttacher:setDynamicMountAnimationState(state)
  if state then
    local v7 = self:getAnimationTime(self.spec_dynamicMountAttacher.animationName)
    self:playAnimation(self.spec_dynamicMountAttacher.animationName, self.spec_dynamicMountAttacher.animationSpeed, v7, true)
    return
  end
  v7 = self:getAnimationTime(v2.animationName)
  self:playAnimation(v2.animationName, -v2.animationSpeed, v7, true)
end
function DynamicMountAttacher:writeDynamicMountObjectsToStream(streamId, objects)
  local v5 = table.size(objects)
  local v4 = math.min(v5, self.spec_dynamicMountAttacher.maxNumObjectsToSend)
  streamWriteUIntN(streamId, v4, self.spec_dynamicMountAttacher.numObjectBits)
  for v9, v10 in pairs(objects) do
    if v5 + 1 <= v4 then
      NetworkUtil.writeNodeObject(streamId, v9)
    else
      Logging.xmlWarning(self.xmlFile, "Not enough bits to send all mounted objects. Please increase '%s'", "vehicle.dynamicMountAttacher#numObjectBits")
    end
  end
end
function DynamicMountAttacher:readDynamicMountObjectsFromStream(streamId, objects)
  local v4 = streamReadUIntN(streamId, self.spec_dynamicMountAttacher.numObjectBits)
  for v8, v9 in pairs(objects) do
    objects[v8] = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 20, target 29)
  v8 = NetworkUtil.readNodeObject(streamId)
  if v8 ~= nil then
    objects[v8] = v8
  end
  -- TODO: structure LOP_FORNLOOP (pc 28, target 21)
  return v4
end
function DynamicMountAttacher.getAllowDynamicMountObjects(v0)
  return true
end
function DynamicMountAttacher:dynamicMountTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  local v8 = getRigidBodyType(otherActorId)
  if v8 == RigidBodyType.DYNAMIC then
    v8 = getHasTrigger(otherActorId)
    if not v8 then
      if onEnter then
        v8 = v8:getNodeObject(otherActorId)
        if v8 == nil then
        end
        if v8 ~= self.rootVehicle then
          -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L42
          -- if v0.spec_attachable.attacherVehicle ~= v8 then goto L42 end
        end
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L163
        -- if nil == v0 then goto L163 end
        if nil.getSupportsMountDynamic ~= nil then
          local v9 = nil:getSupportsMountDynamic()
          if v9 and nil.lastMoveTime == nil then
          end
        end
        if v8.getSupportsTensionBelts ~= nil then
          local v10 = v8:getSupportsTensionBelts()
          if v10 and v8.lastMoveTime == nil then
          end
        end
        if not v9 then
          -- if not v10 then goto L163 end
        end
        local v13 = Utils.getNoNil(v7.pendingDynamicMountObjects[v8], 0)
        v7.pendingDynamicMountObjects[v8] = v13 + 1
        -- cmp-jump LOP_JUMPXEQKN R11 aux=0x80000014 -> L163
        self:raiseDirtyFlags(v7.dynamicMountedObjectsDirtyFlag)
        return
      end
      if onLeave then
        v8 = v8:getNodeObject(otherActorId)
        if v8 == nil then
        end
        if v8 ~= nil and v7.pendingDynamicMountObjects[v8] ~= nil then
          if v7.pendingDynamicMountObjects[v8] - 1 == 0 then
            v7.pendingDynamicMountObjects[v8] = nil
            if v7.dynamicMountedObjects[v8] ~= nil then
              self:removeDynamicMountedObject(v8, false)
              v8:unmountDynamic()
              if v8.additionalDynamicMountJointNode ~= nil then
                delete(v8.additionalDynamicMountJointNode)
                v8.additionalDynamicMountJointNode = nil
              end
            end
            self:raiseDirtyFlags(v7.dynamicMountedObjectsDirtyFlag)
            return
          end
          v7.pendingDynamicMountObjects[v8] = v9
        end
      end
    end
  end
end
function DynamicMountAttacher.getAllowDynamicMountFillLevelInfo(v0)
  return true
end
function DynamicMountAttacher:loadDynamicMountGrabFromXML(xmlFile, key, entry)
  local v4 = v4:getValue(key .. "#openMountType")
  local v5 = Utils.getNoNil(DynamicMountUtil[v4], DynamicMountUtil.TYPE_FORK)
  entry.openMountType = v5
  v5 = v5:getValue(key .. "#closedMountType")
  local v6 = Utils.getNoNil(DynamicMountUtil[v5], DynamicMountUtil.TYPE_AUTO_ATTACH_XYZ)
  entry.closedMountType = v6
  entry.currentMountType = entry.openMountType
  return true
end
function DynamicMountAttacher.getIsDynamicMountGrabOpened(v0, v1)
  return true
end
function DynamicMountAttacher:getDynamicMountTimeToMount()
  return self.spec_dynamicMountAttacher.dynamicMountAttacherTimeToMount
end
function DynamicMountAttacher:getHasDynamicMountedObjects()
  local v2 = next(self.spec_dynamicMountAttacher.dynamicMountedObjects)
  if v2 == nil then
  end
  return true
end
function DynamicMountAttacher:forceDynamicMountPendingObjects(onlyBales)
  local v2 = self:getAllowDynamicMountObjects()
  if v2 then
    for v6, v7 in pairs(self.spec_dynamicMountAttacher.pendingDynamicMountObjects) do
      if not (v2.dynamicMountedObjects[v6] == nil) then
        continue
      end
      if onlyBales then
        local v8 = v6:isa(Bale)
        if not v8 then
          continue
        end
      end
      local v9 = v6:mountDynamic(self, v2.dynamicMountAttacherTrigger.rootNode, v2.dynamicMountAttacherTrigger.jointNode, v2.dynamicMountAttacherTrigger.mountType, v2.dynamicMountAttacherTrigger.forceAcceleration)
      if not v9 then
        continue
      end
      self:addDynamicMountedObject(v6)
    end
  end
end
function DynamicMountAttacher:forceUnmountDynamicMountedObjects()
  for v5, v6 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
    self:removeDynamicMountedObject(v5, false)
    v5:unmountDynamic()
    if not (v5.additionalDynamicMountJointNode ~= nil) then
      continue
    end
    delete(v5.additionalDynamicMountJointNode)
    v5.additionalDynamicMountJointNode = nil
  end
end
function DynamicMountAttacher:getDynamicMountAttacherSettingsByNode(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 21)
  if self.spec_dynamicMountAttacher.dynamicMountCollisionMasks[1].triggerNode == node then
    return self.spec_dynamicMountAttacher.dynamicMountCollisionMasks[1].mountType, self.spec_dynamicMountAttacher.dynamicMountCollisionMasks[1].forceLimitScale
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
  return DynamicMountUtil.TYPE_FORK, 1
end
function DynamicMountAttacher:getFillLevelInformation(superFunc, display)
  superFunc(self, display)
  local v3 = self:getAllowDynamicMountFillLevelInfo()
  if v3 then
    for v7, v8 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
      if v7.getFillLevelInformation ~= nil then
        v7:getFillLevelInformation(display)
      else
        if not (v7.getFillLevel ~= nil) then
          continue
        end
        if not (v7.getFillType ~= nil) then
          continue
        end
        local v9 = v7:getFillType()
        local v10 = v7:getFillLevel()
        if v7.getCapacity ~= nil then
          local v12 = v7:getCapacity()
        end
        display:addFillLevel(v9, v10, v11)
      end
    end
  end
end
function DynamicMountAttacher:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger ~= nil and self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.triggerNode ~= nil then
    list[self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.triggerNode] = self
  end
end
function DynamicMountAttacher:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger ~= nil and self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.triggerNode ~= nil then
    list[self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.triggerNode] = nil
  end
end
function DynamicMountAttacher.loadExtraDependentParts(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. ".dynamicMountAttacher#value")
  v4.updateDynamicMountAttacher = v5
  return true
end
function DynamicMountAttacher:updateExtraDependentParts(superFunc, part, dt)
  superFunc(self, part, dt)
  if self.isServer and part.updateDynamicMountAttacher ~= nil and part.updateDynamicMountAttacher then
    for v8, v9 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
      setJointFrame(v8.dynamicMountJointIndex, 0, v8.dynamicMountJointNode)
    end
  end
end
function DynamicMountAttacher:getIsAttachedTo(superFunc, vehicle)
  local v3 = superFunc(self, vehicle)
  if v3 then
    return true
  end
  for v7, v8 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
    if not (v7 == vehicle) then
      continue
    end
    return true
  end
  for v7, v8 in pairs(v3.pendingDynamicMountObjects) do
    if not (v7 == vehicle) then
      continue
    end
    return true
  end
  return false
end
function DynamicMountAttacher:getAdditionalComponentMass(superFunc, component)
  local additionalMass = superFunc(self, component)
  if self.spec_dynamicMountAttacher.transferMass and self.spec_dynamicMountAttacher.dynamicMountAttacherTrigger.component == component.node then
    for v8, v9 in pairs(self.spec_dynamicMountAttacher.dynamicMountedObjects) do
      if not (v8.getAllowComponentMassReduction ~= nil) then
        continue
      end
      local v10 = v8:getAllowComponentMassReduction()
      if not v10 then
        continue
      end
      local v11 = v8:getDefaultMass()
    end
  end
  return additionalMass
end
function DynamicMountAttacher:onPreAttachImplement(object, inputJointDescIndex, jointDescIndex)
  if object.spec_dynamicMountAttacher ~= nil and self.isServer then
    object.spec_dynamicMountAttacher.pendingDynamicMountObjects[self] = nil
    if object.spec_dynamicMountAttacher.dynamicMountedObjects[self] ~= nil then
      object:removeDynamicMountedObject(self, false)
      self:unmountDynamic()
      if object.additionalDynamicMountJointNode ~= nil then
        delete(object.additionalDynamicMountJointNode)
        object.additionalDynamicMountJointNode = nil
      end
    end
  end
end
function DynamicMountAttacher:updateDebugValues(values)
  if self.isServer then
    local v7 = string.format("%d", self.lastMoveTime + self.spec_dynamicMountAttacher.dynamicMountAttacherTimeToMount - g_currentMission.time)
    table.insert(values, {name = "timeToMount:", value = v7})
    for v7, v8 in pairs(self.spec_dynamicMountAttacher.pendingDynamicMountObjects) do
      local v15 = math.max(v7.lastMoveTime + v2.dynamicMountAttacherTimeToMount - g_currentMission.time, 0)
      local v12 = string.format(...)
      table.insert(values, {name = "pendingDynamicMountObject:", value = v12})
    end
    for v7, v8 in pairs(v2.dynamicMountedObjects) do
      v12 = string.format("%s", v7.configFileName or v7)
      table.insert(values, {name = "dynamicMountedObjects:", value = v12})
    end
  end
  v8 = self:getAllowDynamicMountObjects()
  v6 = string.format(...)
  table.insert(values, {name = "allowMountObjects:", value = v6})
  if v2.dynamicMountAttacherGrab ~= nil then
    v8 = self:getIsDynamicMountGrabOpened(v2.dynamicMountAttacherGrab)
    v6 = string.format(...)
    table.insert(values, {name = "grabOpened:", value = v6})
  end
end
