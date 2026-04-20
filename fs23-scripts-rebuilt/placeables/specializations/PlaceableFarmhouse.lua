-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableFarmhouse = {}
function PlaceableFarmhouse.prerequisitesPresent(v0)
  return true
end
function PlaceableFarmhouse.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "farmhouseSleepingTriggerCallback", PlaceableFarmhouse.farmhouseSleepingTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "getSleepCamera", PlaceableFarmhouse.getSleepCamera)
  SpecializationUtil.registerFunction(placeableType, "getSpawnWorldPosition", PlaceableFarmhouse.getSpawnWorldPosition)
  SpecializationUtil.registerFunction(placeableType, "getSpawnPoint", PlaceableFarmhouse.getSpawnPoint)
end
function PlaceableFarmhouse.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableFarmhouse)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableFarmhouse)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableFarmhouse)
end
function PlaceableFarmhouse:registerXMLPaths(v1)
  self:setXMLSpecializationType("Farmhouse")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".farmhouse#spawnNode", "Player spawn node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".farmhouse.sleeping#triggerNode", "Sleeping trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".farmhouse.sleeping#cameraNode", "Camera while sleeping")
  self:setXMLSpecializationType()
end
function PlaceableFarmhouse:onLoad(savegame)
  local v3 = PlaceableFarmhouseActivatable.new(self)
  self.spec_farmhouse.activatable = v3
  v3 = v3:getValue("placeable.farmhouse#spawnNode", nil, self.components, self.i3dMappings)
  self.spec_farmhouse.spawnNode = v3
  if self.spec_farmhouse.spawnNode == nil then
    Logging.xmlError(self.xmlFile, "No spawn node defined for farmhouse")
    self.spec_farmhouse.spawnNode = self.rootNode
  end
  v3 = v3:getValue("placeable.farmhouse.sleeping#triggerNode", nil, self.components, self.i3dMappings)
  v2.sleepingTrigger = v3
  if v2.sleepingTrigger ~= nil then
    v3 = CollisionFlag.getHasFlagSet(v2.sleepingTrigger, CollisionFlag.TRIGGER_PLAYER)
    if not v3 then
      local v7 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      Logging.warning(...)
    end
    addTrigger(v2.sleepingTrigger, "farmhouseSleepingTriggerCallback", self)
  end
  v3 = v3:getValue("placeable.farmhouse.sleeping#cameraNode", nil, self.components, self.i3dMappings)
  if v3 then
    local v4 = getHasClassId(v3, ClassIds.CAMERA)
    if v4 then
      v2.sleepingCamera = v3
      return
    end
    v7 = getName(v3)
    Logging.xmlError(self.xmlFile, "Sleeping camera node '%s' (%s) is not a camera!", v7, "placeable.farmhouse.sleeping#cameraNode")
  end
end
function PlaceableFarmhouse.onFinalizePlacement(v0)
  v1:addFarmhouse(v0)
end
function PlaceableFarmhouse:onDelete()
  v2:removeActivatable(self.spec_farmhouse.activatable)
  v2:removeFarmhouse(self)
  if self.spec_farmhouse.sleepingTrigger ~= nil then
    removeTrigger(self.spec_farmhouse.sleepingTrigger)
  end
end
function PlaceableFarmhouse:getSpawnPoint()
  return self.spec_farmhouse.spawnNode
end
function PlaceableFarmhouse:getSpawnWorldPosition()
  return getWorldTranslation(self.spec_farmhouse.spawnNode)
end
function PlaceableFarmhouse:getSleepCamera()
  return self.spec_farmhouse.sleepingCamera
end
function PlaceableFarmhouse:farmhouseSleepingTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L34 end
  end
  if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
    if onEnter then
      v7:onEnterFarmhouse()
    end
    if onEnter then
      v8:addActivatable(self.spec_farmhouse.activatable)
      return
    end
    v8:removeActivatable(v7.activatable)
  end
end
PlaceableFarmhouseActivatable = {}
local PlaceableFarmhouseActivatable_mt = Class(PlaceableFarmhouseActivatable)
function PlaceableFarmhouseActivatable.new(placeable)
  local v1 = setmetatable({}, u0)
  v1.placeable = placeable
  local v2 = v2:getText("ui_inGameSleep")
  v1.activateText = v2
  return v1
end
function PlaceableFarmhouseActivatable:getIsActivatable()
  local v2 = v2:getFarmId()
  local v3 = v3:getOwnerFarmId()
  if v2 == v3 then
  end
  return v1
end
function PlaceableFarmhouseActivatable.run(v0)
  v1:showDialog()
end
