-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIVehicle = {}
function AIVehicle.prerequisitesPresent(v0)
  return true
end
function AIVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AIVehicle")
  AIVehicle.registerAgentAttachmentPaths(Vehicle.xmlSchema, "vehicle.ai", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AIVehicle:registerAgentAttachmentPaths(v1, v2)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".agentAttachment(?)#jointNode", "Custom joint node (if not defined the current attacher joint is used)")
  self:register(XMLValueType.VECTOR_N, v1 .. ".agentAttachment(?)#rotCenterWheelIndices", "The center of these wheel indices define the steering center")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".agentAttachment(?)#rotCenterNode", "Custom node to define the steering center")
  self:register(XMLValueType.VECTOR_2, v1 .. ".agentAttachment(?)#rotCenterPosition", "Offset from root component that defines the steering center")
  self:register(XMLValueType.FLOAT, v1 .. ".agentAttachment(?)#width", "Agent attachable width", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".agentAttachment(?)#height", "Agent attachable height", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".agentAttachment(?)#heightOffset", "Agent attachable height offset (only for visual debug)", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".agentAttachment(?)#length", "Agent attachable length", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".agentAttachment(?)#lengthOffset", "Agent attachable length offset from rot center", 0)
  self:register(XMLValueType.BOOL, v1 .. ".agentAttachment(?)#hasCollision", "Agent attachable is doing collision checks", true)
  if v2 then
    AIVehicle.registerAgentAttachmentPaths(self, v1 .. ".agentAttachment(?)", false)
  end
end
function AIVehicle.registerEvents(vehicleType)
end
function AIVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "collectAIAgentAttachments", AIVehicle.collectAIAgentAttachments)
  SpecializationUtil.registerFunction(vehicleType, "registerAIAgentAttachment", AIVehicle.registerAIAgentAttachment)
  SpecializationUtil.registerFunction(vehicleType, "loadAIAgentAttachmentsFromXML", AIVehicle.loadAIAgentAttachmentsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "validateAIAgentAttachments", AIVehicle.validateAIAgentAttachments)
  SpecializationUtil.registerFunction(vehicleType, "drawAIAgentAttachments", AIVehicle.drawAIAgentAttachments)
  SpecializationUtil.registerFunction(vehicleType, "raiseAIEvent", AIVehicle.raiseAIEvent)
  SpecializationUtil.registerFunction(vehicleType, "safeRaiseAIEvent", AIVehicle.safeRaiseAIEvent)
  SpecializationUtil.registerFunction(vehicleType, "getIsAIReadyToDrive", AIVehicle.getIsAIReadyToDrive)
  SpecializationUtil.registerFunction(vehicleType, "getIsAIPreparingToDrive", AIVehicle.getIsAIPreparingToDrive)
end
function AIVehicle.registerOverwrittenFunctions(vehicleType)
end
function AIVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AIVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", AIVehicle)
end
function AIVehicle:onLoad(savegame)
  self.spec_aiVehicle.agentAttachments = {}
  if self.getInputAttacherJoints ~= nil then
    self:loadAIAgentAttachmentsFromXML(self.xmlFile, "vehicle.ai" .. ".agentAttachment", self.spec_aiVehicle.agentAttachments)
  end
  local v3 = DebugCube.new()
  v2.debugSizeBox = v3
  v3:setColor(0, 1, 1)
end
function AIVehicle:onPostLoad(savegame)
  if 0 < #self.spec_aiVehicle.agentAttachments then
    local inputAttacherJoints = self:getInputAttacherJoints()
    self:validateAIAgentAttachments(self.spec_aiVehicle.agentAttachments, inputAttacherJoints)
  end
end
function AIVehicle:collectAIAgentAttachments(aiDrivableVehicle)
  if 0 < #self.spec_aiVehicle.agentAttachments then
    local inputAttacherJointDesc = self:getActiveInputAttacherJoint()
    if inputAttacherJointDesc ~= nil then
      local v4 = self:getAttacherVehicle()
      v4 = v4:getAttacherJointDescFromObject(self)
      -- TODO: structure LOP_FORNPREP (pc 26, target 47)
      if self.spec_aiVehicle.agentAttachments[1].jointNode == inputAttacherJointDesc.node then
        self.spec_aiVehicle.agentAttachments[1].attacherVehicleJointNode = v4.jointTransform
        self:registerAIAgentAttachment(aiDrivableVehicle, self.spec_aiVehicle.agentAttachments[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 46, target 27)
      if not v5 then
        -- TODO: structure LOP_FORNPREP (pc 53, target 75)
        if v2.agentAttachments[1].isDirectAttachment then
          v2.agentAttachments[1].attacherVehicleJointNode = v4.jointTransform
          v2.agentAttachments[1].jointNodeDynamic = inputAttacherJointDesc.node
          self:registerAIAgentAttachment(aiDrivableVehicle, v2.agentAttachments[1])
        else
          -- TODO: structure LOP_FORNLOOP (pc 74, target 54)
        end
      end
      -- TODO: structure LOP_FORNPREP (pc 80, target 93)
      if not v2.agentAttachments[1].isDirectAttachment then
        self:registerAIAgentAttachment(aiDrivableVehicle, v2.agentAttachments[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 92, target 81)
    end
  end
end
function AIVehicle.registerAIAgentAttachment(v0, v1, v2)
  v1:addAIAgentAttachment(v2)
  -- TODO: structure LOP_FORNPREP (pc 9, target 18)
  v1:addAIAgentAttachment(v2.agentAttachments[1])
  -- TODO: structure LOP_FORNLOOP (pc 17, target 10)
end
function AIVehicle.loadAIAgentAttachmentsFromXML(v0, v1, v2, v3, v4, v5)
  v1:iterate(v2, function(v0, v1)
    local v3 = v3:getValue(v1 .. "#jointNode", nil, u1.components, u1.i3dMappings)
    v3 = v3:getValue(v1 .. "#rotCenterNode", nil, u1.components, u1.i3dMappings)
    v3 = v3:getValue(v1 .. "#rotCenterWheelIndices", nil, true)
    v3 = v3:getValue(v1 .. "#rotCenterPosition", nil, true)
    v3 = v3:getValue(v1 .. "#width", 3)
    v3 = v3:getValue(v1 .. "#height", 3)
    v3 = v3:getValue(v1 .. "#heightOffset", 0)
    v3 = v3:getValue(v1 .. "#length", 3)
    v3 = v3:getValue(v1 .. "#lengthOffset", 0)
    v3 = v3:getValue(v1 .. "#hasCollision", true)
    if u2 ~= false then
      v3:loadAIAgentAttachmentsFromXML(u0, v1 .. ".agentAttachment", {jointNode = v3, jointNodeDynamic = nil, rotCenterNode = v3, rotCenterWheelIndices = v3, rotCenterPosition = v3, width = v3, height = v3, heightOffset = v3, length = v3, lengthOffset = v3, hasCollision = v3, isDirectAttachment = false, agentAttachments = {}}.agentAttachments, false, true)
    end
    if u3 == true and v2.jointNode == nil then
      Logging.xmlWarning(u0, "No joint node defined for ai agent sub attachable '%s'!", v1)
      return
    end
    table.insert(u4, v2)
  end)
  if v4 == nil and #v3 == 0 then
    Logging.xmlWarning(v1, "Missing ai agent attachment definition for attachable vehicle")
  end
end
function AIVehicle:validateAIAgentAttachments(agentAttachments, inputAttacherJoints)
  -- TODO: structure LOP_FORNPREP (pc 3, target 211)
  -- TODO: structure LOP_FORNPREP (pc 8, target 24)
  if agentAttachments[1].jointNode ~= nil then
    -- if v1[1].jointNode ~= v2[1].node then goto L23 end
  end
  v6.isDirectAttachment = true
  -- TODO: structure LOP_FORNLOOP (pc 23, target 9)
  if v6.rotCenterNode == nil then
    if v6.rotCenterPosition ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R7 aux=0x80000005 -> L66
      local v7 = createTransformGroup("aiAgentAttachmentRotCenter" .. v5)
      link(self.components[1].node, v7)
      setTranslation(v7, v6.rotCenterPosition[1], 0, v6.rotCenterPosition[2])
      v6.rotCenterNode = v7
    elseif v6.rotCenterWheelIndices ~= nil and 0 < #v6.rotCenterWheelIndices and self.getWheels ~= nil then
      v7 = self:getWheels()
      -- TODO: structure LOP_FORNPREP (pc 96, target 145)
      if v7[v6.rotCenterWheelIndices[1]] ~= nil then
        if not nil then
        end
        local v21, v22, v23 = localToLocal(v20.repr, v21, 0, -v20.radius, 0)
        local v24, v25, v26 = localDirectionToLocal(v20.driveNode, v21, 0, 0, 1)
      else
        Logging.xmlWarning(self.xmlFile, "Unknown wheel index '%d' ground in ai agent attachment entry 'vehicle.ai.agentAttachment(%d)'!", v6.rotCenterWheelIndices[1], v5 - 1)
      end
      -- TODO: structure LOP_FORNLOOP (pc 144, target 97)
      if 0 < v14 then
      end
      local v16 = createTransformGroup("aiAgentAttachmentRotCenter" .. v5)
      link(v15, v16)
      setTranslation(v16, v8, v9, v10)
      v6.rotCenterNode = v16
      if 0 < v14 then
        local v17 = MathUtil.vector3Length(v11, v12, v13)
        if 0 < v17 then
          setDirection(v16, v11, v12, v13, 0, 1, 0)
        end
      end
    end
  end
  if v6.rotCenterNode == nil then
    v6.rootNode = self.rootNode
  end
  self:validateAIAgentAttachments(v6.agentAttachments, inputAttacherJoints)
  -- TODO: structure LOP_FORNLOOP (pc 210, target 4)
end
function AIVehicle:drawAIAgentAttachments(agentAttachments)
  if not agentAttachments then
  end
  -- TODO: structure LOP_FORNPREP (pc 10, target 99)
  if v3[1].rotCenterNode ~= nil then
    v7:setColor(0, 1, 0.25)
    v7:createWithNode(v3[1].rotCenterNode, v3[1].width * 0.5, v3[1].height * 0.5, v3[1].length * 0.5, 0, v3[1].height * 0.5 + v3[1].heightOffset, v3[1].lengthOffset)
    v7:draw()
  else
    v7:setColor(0, 0.15, 1)
    v7:createWithNode(v3[1].rootNode, v3[1].width * 0.5, v3[1].height * 0.5, v3[1].length * 0.5, 0, v3[1].height * 0.5 + v3[1].heightOffset, v3[1].lengthOffset)
    v7:draw()
  end
  self:drawAIAgentAttachments(v6.agentAttachments)
  -- TODO: structure LOP_FORNLOOP (pc 98, target 11)
end
function AIVehicle:raiseAIEvent(eventName, implementName, ...)
  for v7, v8 in ipairs(self.rootVehicle.childVehicles) do
    if not (v8 ~= self) then
      continue
    end
    self:safeRaiseAIEvent(...)
    if not (v3 ~= nil) then
      continue
    end
    v3:onAIEvent(v8, implementName)
  end
  self:safeRaiseAIEvent(...)
  if v3 ~= nil then
    v3:onAIEvent(self, implementName)
  end
  self:safeRaiseAIEvent(...)
  if v3 ~= nil then
    v3:onAIEvent(self, eventName)
  end
end
function AIVehicle.safeRaiseAIEvent(v0, agentAttachments, inputAttacherJoints, ...)
  if agentAttachments.eventListeners[inputAttacherJoints] ~= nil then
    SpecializationUtil.raiseEvent(...)
  end
end
function AIVehicle.getIsAIReadyToDrive(v0)
  return true
end
function AIVehicle.getIsAIPreparingToDrive(v0)
  return false
end
