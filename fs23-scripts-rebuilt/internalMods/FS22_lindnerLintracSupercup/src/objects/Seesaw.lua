-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Seesaw = {ANGLE_THRESHOLD = 1}
local Seesaw_mt = Class(Seesaw, Object)
InitObjectClass(Seesaw, "Seesaw")
function Seesaw:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#rootNode", "the seesaw root node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ramps.ramp(?)#node", "the ramp node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ramps.ramp(?)#jointTransform", "the ramp joint transform")
  self:register(XMLValueType.ANGLE, v1 .. ".ramps.ramp(?)#maxAngle", "the ramp max rotation angle")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".beaconLight#node", "the beacon light node")
  self:register(XMLValueType.STRING, v1 .. ".beaconLight#filename", "the beacon light filename")
end
function Seesaw.new(v0, v1, v2, v3)
  local v4 = Object.new(v2, v3, u0)
  v4.nodeId = v1
  v4.ramps = {}
  v4.isServer = v2
  v4.isClient = v3
  v4.beaconLightsActive = false
  local v5 = InterpolationTime.new(1.2)
  v4.networkTimeInterpolator = v5
  v5 = v4:getNextDirtyFlag()
  v4.physicsObjectDirtyFlag = v5
  registerObjectClassName(v4, "Seesaw")
  return v4
end
function Seesaw:delete()
  if self.beaconLight ~= nil and self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  for v4, v5 in ipairs(self.ramps) do
    self:removeChildrenFromNodeObject(v5.nodeId)
    delete(v5.nodeId)
    v5.nodeId = 0
  end
  self.ramps = {}
  unregisterObjectClassName(self)
  v2 = v2:superClass()
  v2.delete(self)
end
function Seesaw:writeStream(streamId, connection)
  streamWriteBool(streamId, self.beaconLightsActive)
  for v8, v9 in ipairs(self.ramps) do
    local v10, v11, v12 = getWorldTranslation(v9.nodeId)
    local v13, v14, v15 = getRotation(v9.nodeId)
    NetworkUtil.writeCompressedWorldPosition(streamId, v10, v3)
    NetworkUtil.writeCompressedWorldPosition(streamId, v11, v4)
    NetworkUtil.writeCompressedWorldPosition(streamId, v12, v3)
    NetworkUtil.writeCompressedAngle(streamId, v15)
  end
end
function Seesaw:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.beaconLightsActive = v3
  v3:reset()
  for v8, v9 in ipairs(self.ramps) do
    local v10 = NetworkUtil.readCompressedWorldPosition(streamId, v3)
    local v11 = NetworkUtil.readCompressedWorldPosition(streamId, v4)
    local v12 = NetworkUtil.readCompressedWorldPosition(streamId, v3)
    local zRot = NetworkUtil.readCompressedAngle(streamId)
    self:setPosition(v9, v10, v11, v12, zRot, true)
  end
  self:raiseActive()
end
function Seesaw:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.physicsObjectDirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      for v9, v10 in ipairs(self.ramps) do
        NetworkUtil.writeCompressedWorldPosition(streamId, v10.sendPosX, v4)
        NetworkUtil.writeCompressedWorldPosition(streamId, v10.sendPosY, v5)
        NetworkUtil.writeCompressedWorldPosition(streamId, v10.sendPosZ, v4)
        NetworkUtil.writeCompressedAngle(streamId, v10.sendRotZ)
      end
    end
  end
end
function Seesaw:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4:startNewPhaseNetwork()
      for v9, v10 in ipairs(self.ramps) do
        local v11 = NetworkUtil.readCompressedWorldPosition(streamId, v4)
        local v12 = NetworkUtil.readCompressedWorldPosition(streamId, v5)
        local v13 = NetworkUtil.readCompressedWorldPosition(streamId, v4)
        local zRot = NetworkUtil.readCompressedAngle(streamId)
        v15:setTargetPosition(v11, v12, v13)
        v15:setTargetAngle(zRot)
      end
      self:raiseActive()
    end
  end
end
function Seesaw:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  local v5 = xmlFile:getValue(baseKey .. ".seesaw#rootNode", nil, components, i3dMappings)
  self.rootNode = v5
  if self.rootNode == nil then
  end
  assert(true, "Seesaw requires a rootNode!")
  local v7 = getRigidBodyType(self.rootNode)
  if v7 == RigidBodyType.NONE then
  end
  assert(true, "Seesaw rootNode needs to be a rigid body!")
  while true do
    v6 = v6:format(baseKey, v5)
    v7 = xmlFile:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = self:loadRampFromXML(xmlFile, v6, {}, components, i3dMappings)
    if v8 then
      table.insert(self.ramps, {})
    end
  end
  self:loadBeaconLightFromXML(xmlFile, baseKey, components, i3dMappings)
  self:removeFromPhysics()
  return true
end
function Seesaw:loadRampFromXML(xmlFile, baseKey, ramp, components, i3dMappings)
  local v6 = xmlFile:getValue(baseKey .. "#node", nil, components, i3dMappings)
  local v7 = xmlFile:getValue(baseKey .. "#jointTransform", nil, components, i3dMappings)
  if v6 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L24
  end
  return false
  ramp.nodeId = v6
  local v10 = self:getDefaultRigidBodyType()
  setRigidBodyType(...)
  local v8 = xmlFile:getValue(baseKey .. "#maxAngle", 10)
  ramp.maxAngle = v8
  ramp.jointTransform = v7
  ramp.jointIndex = 0
  local v8, v9, v10 = getTranslation(ramp.nodeId)
  local v11, v12, v13 = getRotation(ramp.nodeId)
  ramp.orgTranslation = {v8, v9, v10}
  ramp.orgRotation = {v11, v12, v13}
  local v14, v15, v16 = getWorldTranslation(ramp.nodeId)
  ramp.sendPosZ = v16
  ramp.sendPosY = v15
  ramp.sendPosX = v14
  ramp.sendRotZ = v13
  if not self.isServer then
    v14 = InterpolatorPosition.new(v14, v15, v16)
    ramp.positionInterpolator = v14
    v14 = InterpolatorAngle.new(v13)
    ramp.angleInterpolator = v14
  end
  self:addChildrenToNodeObject(ramp.nodeId)
  return true
end
function Seesaw:addChildrenToNodeObject(nodeId)
  local v5 = getNumOfChildren(nodeId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  local v7 = getChildAt(nodeId, 0)
  self:addChildrenToNodeObject(...)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  local rigidBodyType = getRigidBodyType(nodeId)
  if rigidBodyType ~= RigidBodyType.NONE and self.isServer then
    addWakeUpReport(nodeId, "onPhysicObjectWakeUpCallback", self)
  end
end
function Seesaw:removeChildrenFromNodeObject(nodeId)
  local v5 = getNumOfChildren(nodeId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 17)
  local v7 = getChildAt(nodeId, 0)
  self:removeChildrenFromNodeObject(...)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 8)
  local rigidBodyType = getRigidBodyType(nodeId)
  if rigidBodyType ~= RigidBodyType.NONE then
    v3:removeNodeObject(nodeId, self)
    if self.isServer then
      removeWakeUpReport(nodeId)
    end
  end
end
function Seesaw:onPhysicObjectWakeUpCallback(id)
  self:raiseActive()
end
function Seesaw:setPosition(ramp, x, y, z, zRot, changeInterp)
  setWorldTranslation(ramp.nodeId, x, y, z)
  setRotation(ramp.nodeId, 0, 0, zRot)
  if changeInterp then
    if not self.isServer then
      v7:setPosition(x, y, z)
      v7:setAngle(zRot)
      return
    end
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
    ramp.sendPosZ = z
    ramp.sendPosY = y
    ramp.sendPosX = x
    ramp.sendRotZ = zRot
  end
end
function Seesaw:setLocalPosition(ramp, x, y, z, zRot, changeInterp)
  setTranslation(ramp.nodeId, x, y, z)
  setRotation(ramp.nodeId, 0, 0, zRot)
  if changeInterp then
    if not self.isServer then
      local v9 = getWorldTranslation(ramp.nodeId)
      v7:setPosition(...)
      v7:setAngle(zRot)
      return
    end
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
    local v7, v8, v9 = getWorldTranslation(ramp.nodeId)
    ramp.sendPosX = v7
    ramp.sendPosY = v8
    ramp.sendPosZ = v9
    ramp.sendRotZ = zRot
  end
end
function Seesaw:loadBeaconLightFromXML(xmlFile, baseKey, components, i3dMappings)
  local v5 = xmlFile:getValue(baseKey .. ".seesaw.beaconLight#node", nil, components, i3dMappings)
  if v5 ~= nil then
    local lightXmlFilename = xmlFile:getValue(baseKey .. ".seesaw.beaconLight#filename")
    if lightXmlFilename ~= nil then
      local v7 = Utils.getFilename(lightXmlFilename)
      v7 = loadXMLFile("beaconLightXML", v7)
      if v7 ~= nil and v7 ~= 0 then
        local v8 = getXMLString(v7, "beaconLight.filename")
        if v8 ~= nil then
          local v11 = Utils.getFilename(v8)
          local v9, v10 = v9:loadSharedI3DFile(v11, false, false)
          self.sharedLoadRequestId = v10
          if v9 ~= nil and v9 ~= 0 then
            local v13 = getXMLString(v7, "beaconLight.rootNode#node")
            v11 = I3DUtil.indexToObject(...)
            local v14 = getXMLString(v7, "beaconLight.rotator#node")
            local v12 = I3DUtil.indexToObject(...)
            v14 = getXMLFloat(v7, "beaconLight.rotator#speed")
            local v16 = getXMLString(v7, "beaconLight.light#node")
            v14 = I3DUtil.indexToObject(...)
            local v17 = getXMLString(v7, "beaconLight.light#shaderNode")
            local v15 = I3DUtil.indexToObject(...)
            v17 = getXMLFloat(v7, "beaconLight.light#intensity")
            local v19 = getXMLString(v7, "beaconLight.realLight#node")
            v17 = I3DUtil.indexToObject(...)
            if v11 ~= nil then
              if v14 == nil then
                -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L216
              end
              link(v5, v11)
              setTranslation(v11, 0, 0, 0)
              if v17 ~= nil then
                local v20 = getLightColor(v17)
                setVisibility(v17, false)
              end
              if v14 ~= nil then
                setVisibility(v14, false)
              end
              if v15 ~= nil then
                local v19, v20, v21, v22 = getShaderParameter(v15, "lightControl")
                setShaderParameter(v15, "lightControl", 0, v20, v21, v22, false)
              end
              if 0 < v18.speed then
                v19 = math.random(0, math.pi * 2)
                if v18.rotatorNode ~= nil then
                  setRotation(v18.rotatorNode, 0, v19, 0)
                end
              end
              self.beaconLight = v18
            end
            delete(v9)
          end
        end
        delete(v7)
      end
    end
  end
  self.beaconLightsActive = false
end
function Seesaw:createRampJoint(ramp)
  local constructor = JointConstructor.new()
  constructor:setActors(self.rootNode, ramp.nodeId)
  constructor:setJointTransforms(ramp.jointTransform, ramp.jointTransform)
  constructor:setEnableCollision(false)
  constructor:setRotationLimitSpring(10500, 5500, 10500, 5500, 10500, 5500)
  constructor:setTranslationLimitSpring(10500, 5500, 10500, 5500, 10500, 5500)
  constructor:setTranslationLimit(0, true, 0, 0)
  constructor:setTranslationLimit(1, true, 0, 0)
  constructor:setTranslationLimit(2, true, 0, 0)
  constructor:setRotationLimit(0, 0, 0)
  constructor:setRotationLimit(1, 0, 0)
  constructor:setRotationLimit(2, -ramp.maxAngle, ramp.maxAngle)
  return constructor:finalize()
end
function Seesaw:reset()
  self:removeFromPhysics()
  for v4, v5 in ipairs(self.ramps) do
    local v6, v7, v8 = unpack(v5.orgTranslation)
    local v9, v10, v11 = unpack(v5.orgRotation)
    self:setLocalPosition(v5, v6, v7, v8, v11, true)
  end
  self:addToPhysics()
  for v4, v5 in ipairs(self.ramps) do
    v6, v7, v8 = unpack(v5.orgTranslation)
    self:setLocalPosition(v5, v6, v7, v8, v5.maxAngle, true)
    setJointFrame(v5.jointIndex, 0, v5.jointTransform)
  end
end
function Seesaw:addToPhysics()
  if not self.isAddedToPhysics then
    addToPhysics(self.rootNode)
    for v4, v5 in ipairs(self.ramps) do
      local v8 = self:getDefaultRigidBodyType()
      setRigidBodyType(...)
      addToPhysics(v5.nodeId)
      if not self.isServer then
        continue
      end
      local v6 = self:createRampJoint(v5)
      v5.jointIndex = v6
    end
    self.isAddedToPhysics = true
  end
end
function Seesaw:removeFromPhysics()
  removeFromPhysics(self.rootNode)
  for v4, v5 in ipairs(self.ramps) do
    removeFromPhysics(v5.nodeId)
    if not self.isServer then
      continue
    end
    v5.jointIndex = 0
  end
  self.isAddedToPhysics = false
end
function Seesaw:getDefaultRigidBodyType()
  if self.isServer then
    return RigidBodyType.DYNAMIC
  end
  return RigidBodyType.KINEMATIC
end
function Seesaw:isHorizontal()
  local v1, v2 = unpack(self.ramps)
  local v3, v4, v5 = getRotation(v1.nodeId)
  local v6, v7, v8 = getRotation(v2.nodeId)
  local v10 = math.deg(v5)
  local v9 = math.abs(...)
  if v9 <= Seesaw.ANGLE_THRESHOLD then
    v10 = math.deg(v8)
    v9 = math.abs(...)
    if v9 <= Seesaw.ANGLE_THRESHOLD then
      return true
    end
  end
  return false
end
function Seesaw:update(dt)
  if self.beaconLightsActive then
    if self.beaconLight.rotatorNode ~= nil then
      rotate(self.beaconLight.rotatorNode, 0, self.beaconLight.speed * dt, 0)
    end
    self:raiseActive()
  end
  if not self.isServer then
    v2:update(dt)
    local v2 = v2:getAlpha()
    for v6, v7 in ipairs(self.ramps) do
      local v8, v9, v10 = v8:getInterpolatedValues(v2)
      local v11 = v11:getInterpolatedValue(v2)
      self:setPosition(v7, v8, v9, v10, v11, false)
    end
    v3 = v3:isInterpolating()
    if v3 then
      self:raiseActive()
    end
  end
end
function Seesaw:updateMove()
  for v5, v6 in ipairs(self.ramps) do
    local v7, v8, v9 = getWorldTranslation(v6.nodeId)
    local v10, v11, v12 = getRotation(v6.nodeId)
    if not v1 then
      local v13 = math.abs(v6.sendRotZ - v12)
      if 0.01 >= v13 then
      end
    end
    if not v1 then
      continue
    end
    v6.sendPosX = v7
    v6.sendPosY = v8
    v6.sendPosZ = v9
    v6.sendRotZ = v12
  end
  if v1 then
    self:raiseDirtyFlags(self.physicsObjectDirtyFlag)
  end
  return v1
end
function Seesaw:updateTick(dt)
  if self.isServer then
    self:updateMove()
    self:raiseActive()
  end
end
function Seesaw:setBeaconLightVisibility(visibility, force, noEventSend)
  if visibility == self.beaconLightsActive then
    -- if not v2 then goto L84 end
  end
  if self.isServer and not noEventSend then
    local v6 = SuperCupSeeSawEvent.new(self, visibility, force)
    v4:broadcastEvent(...)
  end
  self.beaconLightsActive = visibility
  if self.beaconLight ~= nil then
    local v5 = v5:getValue("realBeaconLights")
    if v5 and self.beaconLight.realLightNode ~= nil then
      setVisibility(self.beaconLight.realLightNode, visibility)
    end
    if v4.lightNode ~= nil then
      setVisibility(v4.lightNode, visibility)
    end
    if v4.lightShaderNode ~= nil then
      if visibility then
        -- if 1 * v4.intensity then goto L64 end
      end
      local v7, v8, v9, v10 = getShaderParameter(v4.lightShaderNode, "lightControl")
      setShaderParameter(v4.lightShaderNode, "lightControl", 0, v8, v9, v10, false)
    end
  end
  self:raiseActive()
  return true
end
