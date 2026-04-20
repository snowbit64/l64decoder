-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TransportMission = {}
local TransportMission_mt = Class(TransportMission, AbstractMission)
InitStaticObjectClass(TransportMission, "TransportMission", ObjectIds.MISSION_TRANSPORT)
TransportMission.CONTRACT_DURATION = 115200000
TransportMission.CONTRACT_DURATION_VAR = 57600000
TransportMission.REWARD_PER_METER = 0.5
TransportMission.REWARD_PER_OBJECT = 350
TransportMission.NUM_OBJECTS_PER_DRIVE = 5
TransportMission.TEST_HEIGHT = 50
function TransportMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.objects = {}
  v3.objectsAtTrigger = {}
  v3.numFinished = 0
  return v3
end
function TransportMission:delete()
  if self.pickup ~= nil and g_missionManager.transportTriggers[self.pickup] ~= nil then
    g_missionManager.transportTriggers[self.pickup]:setMission(nil)
  end
  if self.dropoff ~= nil and g_missionManager.transportTriggers[self.dropoff] ~= nil then
    g_missionManager.transportTriggers[self.dropoff]:setMission(nil)
  end
  for v4, v5 in pairs(self.objects) do
    v5:delete()
  end
  self:destroyHotspots()
  v2 = v2:superClass()
  v2.delete(self)
end
function TransportMission:saveToXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.saveToXMLFile(self, xmlFile, key)
  setXMLInt(xmlFile, key .. "#timeLeft", self.timeLeft)
  setXMLString(xmlFile, key .. "#config", self.missionConfig.name)
  setXMLString(xmlFile, key .. "#pickupTrigger", self.pickup)
  setXMLString(xmlFile, key .. "#dropoffTrigger", self.dropoff)
  local v7 = NetworkUtil.convertToNetworkFilename(self.objectFilename)
  local v6 = HTMLUtil.encodeToHTML(...)
  setXMLString(...)
  setXMLInt(xmlFile, key .. "#numObjects", self.numObjects)
  for v7, v8 in pairs(self.objects) do
    local v9, v10, v11 = getWorldTranslation(v8.nodeId)
    local v12, v13, v14 = getWorldRotation(v8.nodeId)
    local v15 = string.format("%s.object(%d)", key, v3)
    local v19 = string.format("%f %f %f", v9, v10, v11)
    setXMLString(...)
    local v21 = math.deg(v12)
    local v22 = math.deg(v13)
    local v23 = math.deg(v14)
    v19 = string.format(...)
    setXMLString(...)
  end
end
function TransportMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v3 = getXMLInt(xmlFile, key .. "#timeLeft")
  self.timeLeft = v3
  v3 = getXMLString(xmlFile, key .. "#config")
  v4 = v4:getTransportMissionConfig(v3)
  self.missionConfig = v4
  if self.missionConfig == nil then
    return false
  end
  v4 = getXMLString(xmlFile, key .. "#pickupTrigger")
  self.pickup = v4
  v4 = getXMLString(xmlFile, key .. "#dropoffTrigger")
  self.dropoff = v4
  local v5 = getXMLString(xmlFile, key .. "#objectFilename")
  v4 = NetworkUtil.convertFromNetworkFilename(...)
  self.objectFilename = v4
  v4 = getXMLInt(xmlFile, key .. "#numObjects")
  self.numObjects = v4
  if self.status == AbstractMission.STATUS_RUNNING then
    while true do
      v5 = string.format("%s.object(%d)", key, v4)
      v6 = hasXMLProperty(xmlFile, v5)
      if not v6 then
        break
      end
      v8 = getXMLString(xmlFile, v5 .. "#translation")
      v7 = string.getVectorN(v8, 3)
      v6, v7, v8 = unpack(...)
      v11 = getXMLString(xmlFile, v5 .. "#rotation")
      v10 = string.getVectorN(v11, 3)
      v9, v10, v11 = unpack(...)
      v12 = self:createObject(v6, v7, v8, v9, v10, v11)
      self.objects[v12.nodeId] = v12
    end
  end
  v4 = self:getPickupTrigger()
  v5 = self:getDropoffTrigger()
  if v4 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L160
  end
  return false
  v4:setMission(self)
  v5:setMission(self)
  return true
end
function TransportMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteString(streamId, self.pickup)
  streamWriteString(streamId, self.dropoff)
  local v5 = NetworkUtil.convertToNetworkFilename(self.objectFilename)
  streamWriteString(...)
  streamWriteUInt8(streamId, self.numObjects)
  streamWriteUInt8(streamId, self.missionConfig.id)
end
function TransportMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = streamReadString(streamId)
  self.pickup = v3
  v3 = streamReadString(streamId)
  self.dropoff = v3
  v4 = streamReadString(streamId)
  v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.objectFilename = v3
  v3 = streamReadUInt8(streamId)
  self.numObjects = v3
  local v5 = streamReadUInt8(streamId)
  v3 = v3:getTransportMissionConfigById(...)
  self.missionConfig = v3
  g_missionManager.transportTriggers[self.pickup]:setMission(self)
  g_missionManager.transportTriggers[self.dropoff]:setMission(self)
end
function TransportMission:init(args)
  local v3 = v3:superClass()
  local v2 = v3.init(self)
  if not v2 then
    return false
  end
  v2 = table.getRandomElement(g_missionManager.transportMissions)
  local v8 = table.getn(v2.pickupTriggers)
  -- TODO: structure LOP_FORNPREP (pc 27, target 51)
  v8 = table.getRandomElement(v2.pickupTriggers)
  if g_missionManager.transportTriggers[v8.index] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L50
    g_missionManager.transportTriggers[v8.index]:setMission(self)
  else
    -- TODO: structure LOP_FORNLOOP (pc 50, target 28)
  end
  if v3 == nil then
    return false
  end
  v8 = table.getn(v2.dropoffTriggers)
  -- TODO: structure LOP_FORNPREP (pc 63, target 87)
  v8 = table.getRandomElement(v2.dropoffTriggers)
  if g_missionManager.transportTriggers[v8.index] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L86
    g_missionManager.transportTriggers[v8.index]:setMission(self)
  else
    -- TODO: structure LOP_FORNLOOP (pc 86, target 64)
  end
  if v4 ~= nil then
    -- if v3.index ~= v4.index then goto L97 end
  end
  return false
  local v5 = table.getRandomElement(v2.objects)
  local v6 = math.random(v5.min, v5.max)
  self.numObjects = v6
  self.pickup = v3.index
  self.dropoff = v4.index
  self.objectFilename = v5.filename
  self.missionConfig = v2
  local v12 = math.random()
  self.timeLeft = TransportMission.CONTRACT_DURATION + (2 * v12 - 1) * TransportMission.CONTRACT_DURATION_VAR
  local v7 = self:calculateReward(v3.rewardScale * v4.rewardScale * v5.rewardScale)
  self.reward = v7
  return true
end
function TransportMission:calculateReward(multiplier)
  local v4 = calcDistanceFrom(g_missionManager.transportTriggers[self.pickup].triggerId, g_missionManager.transportTriggers[self.dropoff].triggerId)
  local v7 = math.ceil(self.numObjects / TransportMission.NUM_OBJECTS_PER_DRIVE)
  return (v7 * TransportMission.REWARD_PER_METER * v4 + self.numObjects * TransportMission.REWARD_PER_OBJECT) * multiplier
end
function TransportMission:getReward()
  if self.mission.missionInfo.economicDifficulty == 2 then
  elseif self.mission.missionInfo.economicDifficulty == 1 then
  end
  return self.reward * v1
end
function TransportMission:start()
  local v2 = v2:superClass()
  local v1 = v2.start(self)
  if not v1 then
    return false
  end
  v1 = self:loadObjects()
  if not v1 then
    return false
  end
  return true
end
function TransportMission:finish(success)
  local v3 = v3:superClass()
  v3.finish(self, success)
  local v2 = v2:getIsServer()
  if v2 then
    self:destroyHotspots()
    if success then
      v3 = v3:getFarmById(self.farmId)
      v2:updateTransportJobsDone()
    end
  end
  if success then
    local v5 = v5:getText("fieldJob_transportFinished")
    v2:addIngameNotification(...)
    return
  end
  v5 = v5:getText("fieldJob_transportFailed")
  v2:addIngameNotification(...)
end
function TransportMission:dismiss()
  local v2 = v2:superClass()
  v2.dismiss(self)
  for v4, v5 in pairs(self.objects) do
    v5:delete()
  end
  self.objects = {}
end
function TransportMission:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = self:hasHotspots()
  if not v2 and self.status == AbstractMission.STATUS_RUNNING then
    self:createHotspots()
    self:updateTriggerVisibility()
  end
end
function TransportMission:hasHotspots()
  if self.pickupHotspot ~= nil and self.dropoffHotspot == nil then
  end
  return v1
end
function TransportMission:createHotspots()
  local v3 = self:getPickupTrigger()
  local v1 = self:createHotspot(...)
  self.pickupHotspot = v1
  v3 = self:getDropoffTrigger()
  v1 = self:createHotspot(...)
  self.dropoffHotspot = v1
end
function TransportMission:destroyHotspots()
  if self.pickupHotspot ~= nil then
    v1:removeMapHotspot(self.pickupHotspot)
    v1:delete()
    self.pickupHotspot = nil
  end
  if self.dropoffHotspot ~= nil then
    v1:removeMapHotspot(self.dropoffHotspot)
    v1:delete()
    self.dropoffHotspot = nil
  end
end
function TransportMission:getPickupTrigger()
  return g_missionManager.transportTriggers[self.pickup]
end
function TransportMission:getDropoffTrigger()
  return g_missionManager.transportTriggers[self.dropoff]
end
function TransportMission:createHotspot(trigger)
  local v2, v3, v4 = getWorldTranslation(trigger.triggerId)
  local mapHotspot = MissionHotspot.new()
  mapHotspot:setWorldPosition(v2, v4)
  v6:addMapHotspot(mapHotspot)
  return mapHotspot
end
function TransportMission:updateTriggerVisibility()
  g_missionManager.transportTriggers[self.pickup]:onMissionUpdated()
  g_missionManager.transportTriggers[self.dropoff]:onMissionUpdated()
end
function TransportMission:loadObjects()
  local v1 = self:getPickupTrigger()
  for v6, v7 in pairs(self.missionConfig.objects) do
    if not (v7.filename == self.objectFilename) then
      continue
    end
    break
  end
  if v2 == nil then
    return false
  end
  v3, v4, v5 = unpack(v2.size)
  local v6, v7, v8 = getWorldRotation(v1.triggerId)
  local v9, v10, v11 = getWorldTranslation(v1.triggerId)
  local v14, v15 = MathUtil.getDirectionFromYRotation(v7)
  local v16 = math.atan2(v15, v14)
  local v19 = math.cos(v16)
  local v18 = math.sin(v16)
  v19 = self:isTriggerEmpty(v1, v3, v5)
  if not v19 then
    return false
  end
  -- TODO: structure LOP_FORNPREP (pc 80, target 118)
  if 5 <= 1 then
  elseif 3 <= 1 then
  end
  if v21 % 2 == 0 then
  end
  local v24 = self:createObject(v9 + v17 * v22 - v18 * v23, v10, v11 + v18 * v22 + v17 * v23, v6, v7, v8)
  self.objects[v24.nodeId] = v24
  -- TODO: structure LOP_FORNLOOP (pc 117, target 81)
  return true
end
function TransportMission:isTriggerEmpty(trigger, objectSizeX, objectSizeZ)
  local v4, v5, v6 = getWorldRotation(trigger.triggerId)
  local v7, v8, v9 = getWorldTranslation(trigger.triggerId)
  self.tempHasCollision = false
  overlapBox(v7, v8, v9, v4, v5, v6, 3 * (objectSizeX + 0.1), TransportMission.TEST_HEIGHT * 0.5, 2 * (objectSizeZ + 0.1), "collisionTestCallback", self, 537087)
  return not self.tempHasCollision
end
function TransportMission:collisionTestCallback(transformId)
  if self.mission.nodeToObject[transformId] == nil and self.mission.players[transformId] == nil then
    local v2 = v2:getNodeObject(transformId)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L25
  end
  self.tempHasCollision = true
end
function TransportMission:createObject(x, y, z, rx, ry, rz)
  local v8 = v8:getIsServer()
  local v9 = v9:getIsClient()
  local v7 = MissionPhysicsObject.new(...)
  v8 = v7:load(self.objectFilename, x, y, z, rx, ry, rz)
  if v8 then
    v7:register()
    v7.mission = self
    return v7
  end
  v7:delete()
  return nil
end
function TransportMission:objectEnteredTrigger(trigger, objectId)
  if self.objects[objectId] ~= nil then
    local v3 = self:getDropoffTrigger()
    if trigger == v3 and self.objectsAtTrigger[objectId] ~= true then
      self.objectsAtTrigger[objectId] = true
      self.numFinished = self.numFinished + 1
    end
  end
end
function TransportMission:objectLeftTrigger(trigger, objectId)
  if self.objects[objectId] ~= nil then
    local v3 = self:getDropoffTrigger()
    if trigger == v3 and self.objectsAtTrigger[objectId] == true then
      self.objectsAtTrigger[objectId] = false
      self.numFinished = self.numFinished - 1
    end
  end
end
function TransportMission:getTriggerInfo(index, isPickup)
  if isPickup then
  end
  for v7, v8 in ipairs(v3) do
    if not (v8.index == index) then
      continue
    end
    return v8
  end
  return {}
end
function TransportMission:getTriggerTitle(index, isPickup)
  local info = self:getTriggerInfo(index, isPickup)
  if info ~= nil then
    local v6 = Utils.getNoNil(info.title, "")
    return v4:convertText(...)
  end
  return ""
end
function TransportMission:getData()
  local v1 = self:getTriggerTitle(self.pickup, true)
  local v2 = self:getTriggerTitle(self.dropoff, false)
  local v4 = v4:getText("fieldJob_jobType_transporting")
  if not self.missionConfig.description then
    local v5 = v5:getText("fieldJob_desc_transporting_generic")
    v4 = string.format(v5, v1, v2)
  end
  v3.description = v4
  return v3
end
function TransportMission:getNPC()
  return v1:getNPCByIndex(self.missionConfig.npcIndex)
end
function TransportMission:getCompletion()
  return self.numFinished / self.numObjects
end
function TransportMission.canRun()
  if g_missionManager.numTransportTriggers < 2 then
    return false
  end
  local v0 = table.getn(g_missionManager.transportMissions)
  if v0 == 0 then
    return false
  end
  return true
end
v1:registerMissionType(TransportMission, "transport", MissionManager.CATEGORY_TRANSPORT, 1)
