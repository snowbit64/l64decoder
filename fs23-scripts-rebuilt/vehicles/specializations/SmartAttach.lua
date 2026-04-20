-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SmartAttach = {DISTANCE_THRESHOLD = 3.5, ABS_ANGLE_THRESHOLD = 0.3490658503988659}
function SmartAttach.prerequisitesPresent(v0)
  return true
end
function SmartAttach.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("SmartAttach")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.smartAttach#jointType", "Joint type name")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.smartAttach#trigger", "Trigger node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SmartAttach.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "smartAttachCallback", SmartAttach.smartAttachCallback)
  SpecializationUtil.registerFunction(vehicleType, "getCanBeSmartAttached", SmartAttach.getCanBeSmartAttached)
  SpecializationUtil.registerFunction(vehicleType, "doSmartAttach", SmartAttach.doSmartAttach)
end
function SmartAttach.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SmartAttach)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", SmartAttach)
  SpecializationUtil.registerEventListener(vehicleType, "onPreAttach", SmartAttach)
end
function SmartAttach:onLoad(savegame)
  self.spec_smartAttach.inputJointDescIndex = nil
  local v3 = v3:getValue("vehicle.smartAttach#jointType")
  if v3 ~= nil then
    if AttacherJoints.jointTypeNameToInt[v3] ~= nil then
      local v6 = self:getInputAttacherJoints()
      for v8, v9 in pairs(...) do
        if not (v9.jointType == v4) then
          continue
        end
        v2.inputJointDescIndex = v8
        break
      end
      v2.jointType = v4
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L55
      print("Warning: SmartAttach jointType not defined in '" .. self.configFileName .. "'!")
    else
      print("Warning: invalid jointType " .. v3)
    end
  end
  local v4 = v4:getValue("vehicle.smartAttach#trigger", nil, self.components, self.i3dMappings)
  if v4 ~= nil then
    v2.trigger = v4
    addTrigger(v2.trigger, "smartAttachCallback", self)
  end
  v2.targetVehicle = nil
  v2.targetVehicleCount = 0
  v2.jointDescIndex = nil
  v5 = SmartAttachActivatable.new(self)
  v2.activatable = v5
end
function SmartAttach:onDelete()
  if self.spec_smartAttach.activatable ~= nil then
    v2:removeActivatable(self.spec_smartAttach.activatable)
    self.spec_smartAttach.activatable = nil
  end
  if v1.trigger ~= nil then
    removeTrigger(v1.trigger)
    v1.trigger = nil
  end
end
function SmartAttach:doSmartAttach(targetVehicle, inputJointDescIndex, jointDescIndex, noEventSend)
  SmartAttachEvent.sendEvent(self, targetVehicle, inputJointDescIndex, jointDescIndex, noEventSend)
  if self.isServer then
    local attacherVehicle = self:getAttacherVehicle()
    if attacherVehicle ~= nil then
      attacherVehicle:detachImplementByObject(self)
    end
    targetVehicle:attachImplement(self, inputJointDescIndex, jointDescIndex, false)
  end
end
function SmartAttach:getCanBeSmartAttached()
  if self.spec_smartAttach.targetVehicle == nil then
    return false
  end
  local v3 = self:getIsActiveForInput(true)
  if not v3 then
    v3 = v3:getIsActiveForInput(true)
  end
  if not v3 then
    return false
  end
  local v6 = v2:getAttacherJoints()
  local v7 = self:getInputAttacherJoints()
  local v6, v7, v8 = getWorldTranslation(v6[v1.jointDescIndex].jointTransform)
  local v9, v10, v11 = getWorldTranslation(v7[v1.inputJointDescIndex].node)
  local v12 = MathUtil.vector2Length(v6 - v9, v8 - v11)
  local v13 = Utils.getYRotationBetweenNodes(v6[v1.jointDescIndex].jointTransform, v7[v1.inputJointDescIndex].node)
  if v12 < SmartAttach.DISTANCE_THRESHOLD then
    local v15 = math.abs(v13)
    if v15 >= SmartAttach.ABS_ANGLE_THRESHOLD then
    end
  end
  return v14
end
function SmartAttach:onPreAttach()
  self.spec_smartAttach.targetVehicle = nil
  self.spec_smartAttach.targetVehicleCount = 0
end
function SmartAttach:smartAttachCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L159
    if self.spec_smartAttach.targetVehicle == nil and g_currentMission.nodeToObject[otherActorId] ~= nil and g_currentMission.nodeToObject[otherActorId] ~= self and g_currentMission.nodeToObject[otherActorId].getAttacherJoints ~= nil then
      local v10 = g_currentMission.nodeToObject[otherActorId]:getAttacherJoints()
      for v12, v13 in ipairs(...) do
        if not (v13.jointIndex == 0) then
          continue
        end
        if not (v13.jointType == v7.jointType) then
          continue
        end
        v7.targetVehicle = v8
        v7.jointDescIndex = v12
        v7.targetVehicleCount = 0
        local name = Utils.getNoNil(self.typeDesc, "")
        local v17 = v17:lower()
        local v15 = v15:getItemByXMLFilename(...)
        if v15 ~= nil then
        end
        local v16 = self:getAttacherVehicle()
        if v16 == nil then
          local v18 = v18:getText("action_doSmartAttachGround", self.customEnvironment)
          v17 = string.format(v18, name)
          v7.activatable.activateText = v17
        else
          v18 = v18:getText("action_doSmartAttachTransform", self.customEnvironment)
          v17 = string.format(v18, name)
          v7.activatable.activateText = v17
        end
        v16:addActivatable(v7.activatable)
        break
      end
    end
    -- if v8 ~= v7.targetVehicle then goto L159 end
    v7.targetVehicleCount = v7.targetVehicleCount + 1
    return
  end
  if onLeave and v7.targetVehicle ~= nil and g_currentMission.nodeToObject[otherActorId] ~= nil and g_currentMission.nodeToObject[otherActorId] == v7.targetVehicle then
    v7.targetVehicleCount = v7.targetVehicleCount - 1
    if v7.targetVehicleCount <= 0 then
      v7.targetVehicle = nil
      v9:removeActivatable(v7.activatable)
      v7.targetVehicleCount = 0
    end
  end
end
SmartAttachActivatable = {}
local SmartAttachActivatable_mt = Class(SmartAttachActivatable)
function SmartAttachActivatable.new(smartAttachVehicle)
  setmetatable({}, u0)
  return {smartAttachVehicle = smartAttachVehicle, activateText = ""}
end
function SmartAttachActivatable:getIsActivatable()
  return v1:getCanBeSmartAttached()
end
function SmartAttachActivatable:run()
  self.smartAttachVehicle:doSmartAttach(self.smartAttachVehicle.spec_smartAttach.targetVehicle, self.smartAttachVehicle.spec_smartAttach.inputJointDescIndex, self.smartAttachVehicle.spec_smartAttach.jointDescIndex)
end
SmartAttachEvent = {}
local SmartAttachEvent_mt = Class(SmartAttachEvent, Event)
InitEventClass(SmartAttachEvent, "SmartAttachEvent")
function SmartAttachEvent.emptyNew()
  return Event.new(u0)
end
function SmartAttachEvent.new(vehicle, targetVehicle, inputJointDescIndex, jointDescIndex)
  local v4 = SmartAttachEvent.emptyNew()
  v4.vehicle = vehicle
  v4.targetVehicle = targetVehicle
  v4.inputJointDescIndex = inputJointDescIndex
  v4.jointDescIndex = jointDescIndex
  return v4
end
function SmartAttachEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.targetVehicle = v3
  v3 = streamReadUIntN(streamId, 7)
  self.inputJointDescIndex = v3
  v3 = streamReadUIntN(streamId, 7)
  self.jointDescIndex = v3
  self:run(connection)
end
function SmartAttachEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  NetworkUtil.writeNodeObject(streamId, self.targetVehicle)
  streamWriteUIntN(streamId, self.inputJointDescIndex, 7)
  streamWriteUIntN(streamId, self.jointDescIndex, 7)
end
function SmartAttachEvent:run(connection)
  v2:doSmartAttach(self.targetVehicle, self.inputJointDescIndex, self.jointDescIndex, true)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = SmartAttachEvent.new(self.vehicle, self.targetVehicle, self.inputJointDescIndex, self.jointDescIndex)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function SmartAttachEvent.sendEvent(vehicle, targetVehicle, inputJointDescIndex, jointDescIndex, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L43
  end
  if g_server ~= nil then
    local v7 = SmartAttachEvent.new(vehicle, targetVehicle, inputJointDescIndex, jointDescIndex)
    v5:broadcastEvent(v7, nil, nil, vehicle)
    return
  end
  local v5 = v5:getServerConnection()
  v7 = SmartAttachEvent.new(vehicle, targetVehicle, inputJointDescIndex, jointDescIndex)
  v5:sendEvent(...)
end
