-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/placeables/specializations/events/PlaceableDoghouseFoodBowlStateEvent.lua")
PlaceableDoghouse = {}
function PlaceableDoghouse.prerequisitesPresent(v0)
  return true
end
function PlaceableDoghouse.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "dogInteractionTriggerCallback", PlaceableDoghouse.dogInteractionTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "drawDogName", PlaceableDoghouse.drawDogName)
  SpecializationUtil.registerFunction(placeableType, "isDoghouseRegistered", PlaceableDoghouse.isDoghouseRegistered)
  SpecializationUtil.registerFunction(placeableType, "registerDoghouseToMission", PlaceableDoghouse.registerDoghouseToMission)
  SpecializationUtil.registerFunction(placeableType, "unregisterDoghouseToMission", PlaceableDoghouse.unregisterDoghouseToMission)
  SpecializationUtil.registerFunction(placeableType, "setFoodBowlState", PlaceableDoghouse.setFoodBowlState)
  SpecializationUtil.registerFunction(placeableType, "getDog", PlaceableDoghouse.getDog)
  SpecializationUtil.registerFunction(placeableType, "getSpawnNode", PlaceableDoghouse.getSpawnNode)
end
function PlaceableDoghouse.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableDoghouse.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBuy", PlaceableDoghouse.canBuy)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getCanBePlacedAt", PlaceableDoghouse.getCanBePlacedAt)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedHourChanged", PlaceableDoghouse.getNeedHourChanged)
end
function PlaceableDoghouse.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableDoghouse)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableDoghouse)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableDoghouse)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableDoghouse)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableDoghouse)
  SpecializationUtil.registerEventListener(placeableType, "onHourChanged", PlaceableDoghouse)
end
function PlaceableDoghouse:registerXMLPaths(v1)
  self:setXMLSpecializationType("Doghouse")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dogHouse.dog#node", "Dog link node")
  self:register(XMLValueType.STRING, v1 .. ".dogHouse.dog#xmlFilename", "Dog xml filename")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dogHouse.nameplate#node", "Name plate node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dogHouse.ball#node", "Ball node")
  self:register(XMLValueType.STRING, v1 .. ".dogHouse.ball#filename", "Ball 3d file")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dogHouse.playerInteractionTrigger#node", "Interaction trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dogHouse.bowl#foodNode", "Food node in bowl")
  self:setXMLSpecializationType()
end
function PlaceableDoghouse:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Doghouse")
  Dog.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableDoghouse:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.dogHouse.dog#node", nil, self.components, self.i3dMappings)
  self.spec_doghouse.spawnNode = v4
  if self.isServer then
    local v4, v5, v6 = getWorldTranslation(self.spec_doghouse.spawnNode)
    local v8 = self.xmlFile:getValue("placeable.dogHouse.dog#xmlFilename")
    local v7 = Utils.getFilename(v8, self.baseDirectory)
    v8 = Dog.new(self.isServer, self.isClient)
    self.spec_doghouse.dog = v8
    local v10 = self:getOwnerFarmId()
    v8:setOwnerFarmId(v10, true)
    v8 = v8:load(self, v7, v4, v5, v6)
    if v8 then
      v8:register()
    else
      Logging.xmlWarning(self.xmlFile, "Could not load dog!")
    end
  end
  v4 = v3:getValue("placeable.dogHouse.nameplate#node", nil, self.components, self.i3dMappings)
  v2.namePlateNode = v4
  v4 = v3:getValue("placeable.dogHouse.ball#node", nil, self.components, self.i3dMappings)
  v2.ballSpawnNode = v4
  if self.isServer then
    v5 = v3:getValue("placeable.dogHouse.ball#filename")
    v4 = Utils.getFilename(v5, self.baseDirectory)
    v5, v6, v7 = getWorldTranslation(v2.ballSpawnNode)
    local v8, v9, v10 = getWorldRotation(v2.ballSpawnNode)
    local v11 = DogBall.new(self.isServer, self.isClient)
    v2.dogBall = v11
    local v13 = self:getOwnerFarmId()
    v11:setOwnerFarmId(v13, true)
    v11:load(v4, v5, v6, v7, v8, v9, v10, self)
    v11:register()
  end
  v4 = v3:getValue("placeable.dogHouse.playerInteractionTrigger#node", nil, self.components, self.i3dMappings)
  v2.triggerNode = v4
  if v2.triggerNode ~= nil then
    addTrigger(v2.triggerNode, "dogInteractionTriggerCallback", self)
  end
  v4 = v3:getValue("placeable.dogHouse.bowl#foodNode", nil, self.components, self.i3dMappings)
  v2.foodNode = v4
  if v2.foodNode == nil then
    Logging.xmlWarning(v3, "Missing bowl food node in 'placeable.dogHouse.bowl#foodNode'!")
  else
    setVisibility(v2.foodNode, false)
  end
  v4 = PlaceableDoghouseActivatable.new(self)
  v2.activatable = v4
end
function PlaceableDoghouse:onDelete()
  v2:removeActivatable(self.spec_doghouse.activatable)
  self:unregisterDoghouseToMission()
  if self.isServer then
    if self.spec_doghouse.dogBall ~= nil and not self.spec_doghouse.dogBall.isDeleted then
      v2:delete()
      self.spec_doghouse.dogBall = nil
    end
    if v1.dog ~= nil and not v1.dog.isDeleted then
      v2:delete()
      v1.dog = nil
    end
  end
  if v1.triggerNode ~= nil then
    removeTrigger(v1.triggerNode)
  end
end
function PlaceableDoghouse:onFinalizePlacement()
  if self.isServer and self.spec_doghouse.dog ~= nil then
    v2:finalizePlacement()
  end
  self:registerDoghouseToMission()
end
function PlaceableDoghouse:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v4 = NetworkUtil.readNodeObject(streamId)
    self.spec_doghouse.dog = v4
    if self.spec_doghouse.dog ~= nil then
      self.spec_doghouse.dog.spawner = self
    end
    if v3.foodNode ~= nil then
      local v6 = streamReadBool(streamId)
      setVisibility(...)
    end
  end
end
function PlaceableDoghouse:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    NetworkUtil.writeNodeObject(streamId, self.spec_doghouse.dog)
    if self.spec_doghouse.foodNode ~= nil then
      local v6 = getVisibility(self.spec_doghouse.foodNode)
      streamWriteBool(...)
    end
  end
end
function PlaceableDoghouse:loadFromXMLFile(xmlFile, key)
  if self.spec_doghouse.dog ~= nil then
    v4:loadFromXMLFile(xmlFile, key)
  end
end
function PlaceableDoghouse:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_doghouse.dog ~= nil then
    v5:saveToXMLFile(xmlFile, key, usedModNames)
  end
end
function PlaceableDoghouse:dogInteractionTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.spec_doghouse.dog ~= nil and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    local v8 = self:getOwnerFarmId()
    if g_currentMission.player.farmId == v8 then
      if onEnter then
        v7:addActivatable(self.spec_doghouse.activatable)
        return
      end
      if onLeave then
        v7:removeActivatable(v6.activatable)
      end
    end
  end
end
function PlaceableDoghouse:drawDogName()
  if self.spec_doghouse.dog ~= nil and self.spec_doghouse.namePlateNode ~= nil then
    setTextColor(0.843, 0.745, 0.705, 1)
    setTextAlignment(RenderText.ALIGN_CENTER)
    local v2, v3, v4 = getWorldTranslation(self.spec_doghouse.namePlateNode)
    local v5, v6, v7 = getWorldRotation(self.spec_doghouse.namePlateNode)
    renderText3D(v2, v3, v4, v5, v6, v7, 0.04, self.spec_doghouse.dog.name)
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
end
function PlaceableDoghouse:isDoghouseRegistered()
  local v3 = self:getOwnerFarmId()
  local v1 = v1:getDoghouse(...)
  if v1 == nil then
  end
  return true
end
function PlaceableDoghouse:registerDoghouseToMission()
  local v1 = self:isDoghouseRegistered()
  if not v1 then
    g_currentMission.doghouses[self] = self
    return true
  end
  return false
end
function PlaceableDoghouse.unregisterDoghouseToMission(v0)
  g_currentMission.doghouses[v0] = nil
  return true
end
function PlaceableDoghouse:setOwnerFarmId(superFunc, farmId, noEventSend)
  superFunc(self, farmId, noEventSend)
  if self.isServer then
    if self.spec_doghouse.dog ~= nil then
      v5:setOwnerFarmId(farmId, noEventSend)
    end
    if v4.dogBall ~= nil then
      v5:setOwnerFarmId(farmId, noEventSend)
    end
  end
end
function PlaceableDoghouse:setFoodBowlState(isFilled, noEventSend)
  if self.spec_doghouse.foodNode ~= nil then
    PlaceableDoghouseFoodBowlStateEvent.sendEvent(self, isFilled, noEventSend)
    setVisibility(self.spec_doghouse.foodNode, isFilled)
    if isFilled and self.spec_doghouse.dog ~= nil then
      v4:onFoodBowlFilled(self.spec_doghouse.foodNode)
    end
  end
end
function PlaceableDoghouse:getDog()
  return self.spec_doghouse.dog
end
function PlaceableDoghouse:getSpawnNode()
  return self.spec_doghouse.spawnNode
end
function PlaceableDoghouse:getCanBePlacedAt(superFunc, x, y, z, farmId)
  local v6 = self:isDoghouseRegistered()
  if v6 then
    local v7 = v7:getText("warning_onlyOneOfThisItemAllowedPerFarm")
    return false
  end
  v6 = superFunc(self, x, y, z, farmId)
  return v6
end
function PlaceableDoghouse:canBuy(superFunc)
  local v2, v3 = superFunc(self)
  if not v2 then
    return false, v3
  end
  local v4 = self:isDoghouseRegistered()
  if v4 then
    local v5 = v5:getText("warning_onlyOneOfThisItemAllowedPerFarm")
    return false
  end
  return true, nil
end
function PlaceableDoghouse.getNeedHourChanged(v0, v1)
  return true
end
function PlaceableDoghouse:onHourChanged()
  self:setFoodBowlState(false, true)
end
PlaceableDoghouseActivatable = {}
local PlaceableDoghouseActivatable_mt = Class(PlaceableDoghouseActivatable)
function PlaceableDoghouseActivatable.new(doghousePlaceable)
  local v1 = setmetatable({}, u0)
  v1.doghousePlaceable = doghousePlaceable
  local v2 = v2:getText("action_doghouseFillbowl")
  v1.activateText = v2
  return v1
end
function PlaceableDoghouseActivatable:run()
  v1:setFoodBowlState(true)
end
function PlaceableDoghouseActivatable:draw()
  local v1 = v1:getDog()
  if v1 ~= nil then
  end
  v3:showFillDogBowlContext(v2)
end
function PlaceableDoghouseActivatable.activate(v0)
  v1:addDrawable(v0)
end
function PlaceableDoghouseActivatable.deactivate(v0)
  v1:removeDrawable(v0)
end
