-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryFeedingRobot = {}
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobot.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotState.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateLoading.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStatePaused.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateFilling.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateStarting.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateDriving.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateFinished.lua")
source("dataS/scripts/animals/husbandry/objects/feedingRobot/FeedingRobotStateEvent.lua")
function PlaceableHusbandryFeedingRobot.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(PlaceableHusbandryFood, specializations)
end
function PlaceableHusbandryFeedingRobot.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onFeedingRobotLoaded", PlaceableHusbandryFeedingRobot.onFeedingRobotLoaded)
end
function PlaceableHusbandryFeedingRobot.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableHusbandryFeedingRobot.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateFeeding", PlaceableHusbandryFeedingRobot.updateFeeding)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableHusbandryFeedingRobot.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryFeedingRobot.updateInfo)
end
function PlaceableHusbandryFeedingRobot.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryFeedingRobot)
  SpecializationUtil.registerEventListener(placeableType, "onPostLoad", PlaceableHusbandryFeedingRobot)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryFeedingRobot)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryFeedingRobot)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryFeedingRobot)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandryFeedingRobot)
end
function PlaceableHusbandryFeedingRobot:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.feedingRobot" .. "#linkNode", "Feedingrobot link node")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.feedingRobot" .. "#class", "Feedingrobot class name")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.feedingRobot" .. "#filename", "Feedingrobot config file")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.feedingRobot" .. ".splines.spline(?)#node", "Feedingrobot spline")
  self:register(XMLValueType.INT, v1 .. ".husbandry.feedingRobot" .. ".splines.spline(?)#direction", "Feedingrobot spline direction")
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.feedingRobot" .. ".splines.spline(?)#isFeeding", "Feedingrobot spline feeding part")
  self:register(XMLValueType.INT, v1 .. ".husbandry.feedingRobot" .. ".animatedObjects.animatedObject(?)#index", "Dependend animated object index")
  self:register(XMLValueType.INT, v1 .. ".husbandry.feedingRobot" .. ".animatedObjects.animatedObject(?)#direction", "Dependend animated object direction")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryFeedingRobot:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  FeedingRobot.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableHusbandryFeedingRobot:onLoad(savegame)
  local v3 = v3:hasProperty("placeable.husbandry.feedingRobot")
  if not v3 then
    return
  end
  v3 = v3:getValue("placeable.husbandry.feedingRobot#filename")
  if v3 == nil then
    Logging.xmlError(self.xmlFile, "Feedingrobot filename missing")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  local v4 = Utils.getFilename(v3, self.baseDirectory)
  v4 = v4:getValue("placeable.husbandry.feedingRobot#class", "")
  local v5 = ClassUtil.getClassObject(v4)
  if v5 == nil then
    Logging.xmlError(self.xmlFile, "Feedingrobot class '%s' not defined", v4)
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  local v6 = v6:getValue("placeable.husbandry.feedingRobot#linkNode", nil, self.components, self.i3dMappings)
  if v6 == nil then
    Logging.xmlError(self.xmlFile, "Feedingrobot linkNode not defined")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  local v7 = self:createLoadingTask(self)
  local v8 = v5.new(self.isServer, self.isClient, self, self.baseDirectory)
  v2.feedingRobot = v8
  v8:load(v6, v3, self.onFeedingRobotLoaded, self, {loadingTask = v7})
  v8:register(true)
  v8:iterate("placeable.husbandry.feedingRobot.splines.spline", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if v2 == nil then
      Logging.xmlWarning(u0.xmlFile, "Feedingrobot spline not defined for '%s'", savegame)
      return false
    end
    local v4 = getGeometry(v2)
    local v3 = getHasClassId(v4, ClassIds.SPLINE)
    if not v3 then
      Logging.xmlWarning(u0.xmlFile, "Given node is not a spline for '%s'", savegame)
      return false
    end
    v3 = v3:getValue(savegame .. "#direction", 1)
    v4 = v4:getValue(savegame .. "#isFeeding", false)
    v5:addSpline(v2, v3, v4)
  end)
  v2.dependedAnimatedObjects = {}
  v8:iterate("placeable.husbandry.feedingRobot.animatedObjects.animatedObject", function(self, savegame)
    local v2 = v2:getInt(savegame .. "#index")
    local v3 = v3:getInt(savegame .. "#direction", 1)
    table.insert(u1.dependedAnimatedObjects, {animatedObjectIndex = v2, direction = v3})
  end)
end
function PlaceableHusbandryFeedingRobot:onPostLoad(savegame)
  if self.spec_husbandryFeedingRobot.dependedAnimatedObjects ~= nil and self.spec_animatedObjects ~= nil then
    for v7, v8 in ipairs(self.spec_husbandryFeedingRobot.dependedAnimatedObjects) do
      if not (v3[v8.animatedObjectIndex] ~= nil) then
        continue
      end
      local v10 = Utils.overwrittenFunction(v3[v8.animatedObjectIndex].getCanBeTriggered, function(self, savegame)
        local v2 = savegame(u0)
        if not v2 then
          return false
        end
        local v3 = v3:getIsDriving()
        return not v3
      end)
      v3[v8.animatedObjectIndex].getCanBeTriggered = v10
      v10:addStateChangedListener(function(self)
        local savegame = savegame:getIsDriving()
        if savegame and u1.animation.direction ~= u2.direction then
          savegame:setDirection(u2.direction)
        end
      end)
    end
  end
end
function PlaceableHusbandryFeedingRobot:onFeedingRobotLoaded(robot, args)
  self:finishLoadingTask(args.loadingTask)
end
function PlaceableHusbandryFeedingRobot:onDelete()
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v2:delete()
  end
end
function PlaceableHusbandryFeedingRobot:onFinalizePlacement()
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v2:finalizePlacement()
  end
end
function PlaceableHusbandryFeedingRobot:onReadStream(streamId, connection)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    local feedingRobotId = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.spec_husbandryFeedingRobot.feedingRobot, feedingRobotId)
  end
end
function PlaceableHusbandryFeedingRobot:onWriteStream(streamId, connection)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_husbandryFeedingRobot.feedingRobot)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, self.spec_husbandryFeedingRobot.feedingRobot)
  end
end
function PlaceableHusbandryFeedingRobot:loadFromXMLFile(xmlFile, key)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v4:loadFromXMLFile(xmlFile, key)
  end
end
function PlaceableHusbandryFeedingRobot:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v5:saveToXMLFile(xmlFile, key, usedModNames)
  end
end
function PlaceableHusbandryFeedingRobot:setOwnerFarmId(superFunc, farmId)
  superFunc(self, farmId)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v4:setOwnerFarmId(farmId, true)
  end
end
function PlaceableHusbandryFeedingRobot:updateFeeding(superFunc)
  if self.isServer and self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v3:createFoodMixture()
  end
  return superFunc(self)
end
function PlaceableHusbandryFeedingRobot:collectPickObjects(superFunc, node)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    local v4 = v4:getIsNodeUsed(node)
    if v4 then
      return
    end
  end
  superFunc(self, node)
end
function PlaceableHusbandryFeedingRobot:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  if self.spec_husbandryFeedingRobot.feedingRobot ~= nil then
    v4:updateInfo(infoTable)
  end
end
