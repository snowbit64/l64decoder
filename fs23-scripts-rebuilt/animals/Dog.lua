-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Dog = {}
local Dog_mt = Class(Dog, Object)
InitStaticObjectClass(Dog, "Dog", ObjectIds.OBJECT_DOG)
function Dog.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.dogInstance = nil
  v3.animalId = nil
  v3.spawner = nil
  v3.xmlFilename = nil
  v3.entityFollow = nil
  v3.entityThrower = nil
  v3.playersInRange = {}
  v3.isStaying = false
  v3.abandonTimer = 0
  v3.abandonTimerDuration = 6000
  v3.abandonRange = 100
  v3.name = ""
  v3.spawnX = 0
  v3.spawnY = 0
  v3.spawnZ = 0
  v3.forcedClipDistance = 80
  registerObjectClassName(v3, "Dog")
  local v4 = v3:getNextDirtyFlag()
  v3.dirtyFlag = v4
  return v3
end
function Dog:load(spawner, xmlFilename, spawnX, spawnY, spawnZ)
  self.spawner = spawner
  self.animalId = 0
  self.spawnX = spawnX
  self.spawnY = spawnY
  self.spawnZ = spawnZ
  self.xmlFilename = xmlFilename
  local v6 = v6:getRandomName()
  self.name = v6
  v6 = createAnimalCompanionManager("dog", self.xmlFilename, "dog", self.spawnX, self.spawnY, self.spawnZ, g_currentMission.terrainRootNode, self.isServer, self.isClient, 1, AudioGroup.ENVIRONMENT)
  self.dogInstance = v6
  if self.dogInstance == 0 then
    return false
  end
  setCompanionTrigger(self.dogInstance, self.animalId, "playerInteractionTriggerCallback", self)
  setCompanionCollisionMask(self.dogInstance, CollisionFlag.TERRAIN + CollisionFlag.STATIC_WORLD + CollisionFlag.STATIC_OBJECT, CollisionFlag.STATIC_OBJECT + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.VEHICLE + CollisionFlag.TRIGGER_VEHICLE, CollisionFlag.WATER)
  v8:addIndoorStateChangedListener(self)
  local v11 = v11:getIsIndoor()
  setCompanionUseOutdoorAudioSetup(self.dogInstance, not v11)
  return true
end
function Dog:delete()
  self.isDeleted = true
  if self.dogInstance ~= nil then
    delete(self.dogInstance)
  end
  if self.isServer then
    v1:unsubscribeAll(self)
  end
  unregisterObjectClassName(self)
  v1:removeIndoorStateChangedListener(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function Dog:loadFromXMLFile(xmlFile, key, resetVehicles)
  local v6 = xmlFile:getValue(key .. "#name", "")
  self:setName(...)
  return true
end
function Dog:saveToXMLFile(xmlFile, key, usedModNames)
  local v7 = HTMLUtil.encodeToHTML(self.name)
  xmlFile:setValue(...)
end
function Dog:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    local v5 = streamReadString(streamId)
    local v4 = NetworkUtil.convertFromNetworkFilename(...)
    v5 = streamReadFloat32(streamId)
    local v6 = streamReadFloat32(streamId)
    local v7 = streamReadFloat32(streamId)
    local v8 = streamReadString(streamId)
    if self.xmlFilename ~= nil then
    end
    if true then
      self:load(v3, v4, v5, v6, v7)
      if v3 ~= nil then
        v3.dog = self
      end
    end
    self:setName(v8)
  end
  v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
end
function Dog:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    NetworkUtil.writeNodeObject(streamId, self.spawner)
    local v5 = NetworkUtil.convertToNetworkFilename(self.xmlFilename)
    streamWriteString(...)
    streamWriteFloat32(streamId, self.spawnX)
    streamWriteFloat32(streamId, self.spawnY)
    streamWriteFloat32(streamId, self.spawnZ)
    streamWriteString(streamId, self.name)
  end
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
end
function Dog:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    writeAnimalCompanionManagerToStream(self.dogInstance, streamId)
  end
end
function Dog:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    readAnimalCompanionManagerFromStream(self.dogInstance, streamId, g_clientInterpDelay, g_packetPhysicsNetworkTime, g_client.tickDuration)
  end
end
function Dog:update(dt)
  if self.isServer then
    if self.isStaying then
      local v2 = self:isAbandoned(dt)
      if v2 then
        self:teleportToSpawn()
      end
    end
    self:raiseActive()
  end
  local v3 = v3:superClass()
  v3.update(self, dt)
end
function Dog:updateTick(dt)
  if self.isServer and self.dogInstance ~= nil then
    local v2 = getAnimalCompanionNeedNetworkUpdate(self.dogInstance)
    if v2 then
      self:raiseDirtyFlags(self.dirtyFlag)
    end
  end
  local v3 = v3:superClass()
  v3.updateTick(self, dt)
end
function Dog:testScope(x, y, z, coeff, isGuiVisible)
  local v6, v7 = getCompanionClosestDistance(self.dogInstance, x, y, z)
  local v8 = math.min(v7 * coeff, self.forcedClipDistance)
  if v6 >= v8 then
  end
  return true
end
function Dog:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  local v8, v9 = getCompanionClosestDistance(self.dogInstance, x, y, z)
  local v10 = math.min(v9 * coeff, self.forcedClipDistance)
  return (1 - v8 / v10) * 0.8 + 0.5 * skipCount * 0.2
end
function Dog:onGhostRemove()
  self:setVisibility(false)
end
function Dog:onGhostAdd()
  self:setVisibility(true)
end
function Dog:hourChanged()
  if not self.isServer then
    return
  end
  if self.dogInstance ~= nil then
    setCompanionDaytime(self.dogInstance, g_currentMission.environment.dayTime)
  end
end
function Dog:setName(name)
  self.name = name or ""
end
function Dog:setVisibility(state)
  if self.dogInstance ~= nil then
    setCompanionsVisibility(self.dogInstance, state)
    setCompanionsPhysicsUpdate(self.dogInstance, state)
  end
end
function Dog:playerInteractionTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if g_currentMission.players[otherId] ~= nil then
    if onEnter then
      local v7 = v7:canFarmAccess(g_currentMission.players[otherId].farmId, self, false)
      -- if not v7 then goto L26 end
      self.playersInRange[otherId] = true
      return
    end
    if onLeave then
      self.playersInRange[otherId] = nil
    end
  end
end
function Dog:followEntity(player)
  self.entityFollow = player.rootNode
  self.entityThrower = nil
  if not self.isServer then
    local v2 = v2:getServerConnection()
    local v4 = DogFollowEvent.new(self, player)
    v2:sendEvent(...)
    return
  end
  setCompanionBehaviorFollowEntity(self.dogInstance, self.animalId, self.entityFollow)
  self.isStaying = false
end
function Dog:goToSpawn()
  self.entityFollow = nil
  self.entityThrower = nil
  if not self.isServer then
    local v1 = v1:getServerConnection()
    local v3 = DogFollowEvent.new(self, nil)
    v1:sendEvent(...)
    return
  end
  local v4 = v4:getSpawnNode()
  setCompanionBehaviorGotoEntity(...)
end
function Dog:onFoodBowlFilled(foodBowlNode)
  self.entityFollow = nil
  self.entityThrower = nil
  setCompanionBehaviorFeed(self.dogInstance, self.animalId, foodBowlNode)
end
function Dog:fetchItem(player, ball)
  if not self.isServer then
    local v3 = v3:getServerConnection()
    local v5 = DogFetchItemEvent.new(self, player, ball)
    v3:sendEvent(...)
    return
  end
  local v3, v4, v5 = getWorldTranslation(ball.nodeId)
  ball.throwPos = {v3, v4, v5}
  setCompanionBehaviorFetch(self.dogInstance, self.animalId, ball.nodeId, player.rootNode)
  self.entityThrower = player.rootNode
end
function Dog:pet()
  if not self.isServer then
    local v1 = v1:getServerConnection()
    local v3 = DogPetEvent.new(self)
    v1:sendEvent(...)
    return
  end
  setCompanionBehaviorPet(self.dogInstance, self.animalId)
  v3 = self:getOwnerFarmId()
  local v1, v2 = v1:updateFarmStats(v3, "petDogCount", 1)
  if v1 ~= nil then
    v3:tryUnlock("PetDog", v1)
  end
end
function Dog:idleStay()
  self.entityFollow = nil
  self.entityThrower = nil
  setCompanionBehaviorDefault(self.dogInstance, self.animalId)
  self.isStaying = true
end
function Dog.idleWander(v0)
end
function Dog:isAbandoned(dt)
  for v6, v7 in pairs(g_currentMission.players) do
    if not v7.isControlled then
      continue
    end
    local v8, v9, v10 = getWorldTranslation(v7.rootNode)
    local v11, v12 = getCompanionClosestDistance(self.dogInstance, v8, v9, v10)
    if not (v11 < self.abandonRange) then
      continue
    end
    break
  end
  if not v2 then
    for v6, v7 in pairs(g_currentMission.enterables) do
      if not (v7.spec_enterable ~= nil) then
        continue
      end
      if not v7.spec_enterable.isControlled then
        continue
      end
      v8, v9, v10 = getWorldTranslation(v7.rootNode)
      v11, v12 = getCompanionClosestDistance(self.dogInstance, v8, v9, v10)
      if not (v11 < self.abandonRange) then
        continue
      end
      break
    end
  end
  if v2 then
    self.abandonTimer = self.abandonTimerDuration
  else
    self.abandonTimer = self.abandonTimer - dt
    if self.abandonTimer <= 0 then
      return true
    end
  end
  return false
end
function Dog.resetSteeringParms(v0)
end
function Dog:teleportToSpawn()
  if self.isServer then
    setCompanionPosition(self.dogInstance, self.animalId, self.spawnX, self.spawnY, self.spawnZ)
    self:idleWander()
    self:resetSteeringParms()
    self.isStaying = false
    self.entityFollow = nil
    self.entityThrower = nil
    local v4 = v4:getText("ingameNotification_dogInDogHouse")
    v1:addIngameNotification(...)
  end
end
function Dog:playerFarmChanged(player)
  if self.isServer then
    if self.entityFollow ~= player.rootNode then
      -- if v0.entityThrower ~= v1.rootNode then goto L18 end
    end
    self:idleStay()
  end
end
function Dog:onPlayerLeave(player)
  if self.isServer then
    if self.entityFollow ~= player.rootNode then
      -- if v0.entityThrower ~= v1.rootNode then goto L18 end
    end
    self:idleStay()
    if self.playersInRange[player.rootNode] ~= nil then
      self.playersInRange[player.rootNode] = nil
    end
  end
end
function Dog:finalizePlacement()
  self:setVisibility(true)
  if self.isServer then
    v1:subscribe(MessageType.HOUR_CHANGED, self.hourChanged, self)
    v1:subscribe(MessageType.PLAYER_FARM_CHANGED, Dog.playerFarmChanged, self)
  end
end
function Dog:onIndoorStateChanged(isIndoor)
  local v5 = v5:getIsIndoor()
  setCompanionUseOutdoorAudioSetup(self.dogInstance, not v5)
end
function Dog:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#name", "Name of dog")
end
