-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableAnimatedObjects = {}
function PlaceableAnimatedObjects.prerequisitesPresent(v0)
  return true
end
function PlaceableAnimatedObjects.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "getCanTriggerAnimatedObject", PlaceableAnimatedObjects.getCanTriggerAnimatedObject)
end
function PlaceableAnimatedObjects.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableAnimatedObjects.setOwnerFarmId)
end
function PlaceableAnimatedObjects.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableAnimatedObjects)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableAnimatedObjects)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableAnimatedObjects)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableAnimatedObjects)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableAnimatedObjects)
end
function PlaceableAnimatedObjects:registerXMLPaths(v1)
  self:setXMLSpecializationType("AnimatedObjects")
  AnimatedObject.registerXMLPaths(self, v1 .. ".animatedObjects")
  self:register(XMLValueType.INT, v1 .. ".animatedObjects.animatedObject(?).dependency(?)#animatedObjectIndex", "Animated object index")
  self:register(XMLValueType.FLOAT, v1 .. ".animatedObjects.animatedObject(?).dependency(?)#minTime", "Min Time")
  self:register(XMLValueType.FLOAT, v1 .. ".animatedObjects.animatedObject(?).dependency(?)#maxTime", "Max Time")
  self:setXMLSpecializationType()
end
function PlaceableAnimatedObjects.registerSavegameXMLPaths(schema, basePath)
  AnimatedObject.registerSavegameXMLPaths(schema, basePath .. ".animatedObject(?)")
end
function PlaceableAnimatedObjects:onLoad(savegame)
  self.spec_animatedObjects.animatedObjects = {}
  self.xmlFile:iterate("placeable.animatedObjects.animatedObject", function(self, savegame)
    local v2 = AnimatedObject.new(u0.isServer, u0.isClient)
    v2.dependencies = {}
    v3:iterate(savegame .. ".dependency", function(self, savegame)
      local v2 = v2:getInt(savegame .. "#animatedObjectIndex")
      if v2 ~= nil then
        local v3 = v3:getValue(savegame .. "#minTime", 0)
        local v4 = v4:getValue(savegame .. "#maxTime", 0)
        table.insert(u1.dependencies, {objectIndex = v2, minTime = v3, maxTime = v4})
        return
      end
      Logging.xmlError(u0, "Missing animatedObjectIndex for '%s'", savegame)
    end)
    local v3 = v2:load(u0.components, u1, savegame, u0.configFileName, u0.i3dMappings)
    if v3 then
      table.insert(u2.animatedObjects, v2)
      return
    end
    Logging.xmlError(u1, "Failed to load animated object %i", self)
  end)
  for v7, v8 in ipairs(self.spec_animatedObjects.animatedObjects) do
    local v9 = Utils.overwrittenFunction(v8.getCanBeTriggered, function(self, savegame)
      local v2 = savegame(u0)
      if not v2 then
        return false
      end
      v2 = v2:getCanTriggerAnimatedObject(u0)
      if not v2 then
        return false
      end
      if 0 < #u0.dependencies then
        for v5, v6 in ipairs(u0.dependencies) do
          if u2.animatedObjects[v6.objectIndex] ~= nil then
            if u2.animatedObjects[v6.objectIndex].animation.time >= v6.minTime and not (v6.maxTime < u2.animatedObjects[v6.objectIndex].animation.time) then
              continue
            end
            return false
          else
            Logging.xmlWarning(u3, "Invalid dependency animated object index '%d'", v6.objectIndex)
          end
        end
      end
      return true
    end)
    v8.getCanBeTriggered = v9
  end
end
function PlaceableAnimatedObjects:onDelete()
  if self.spec_animatedObjects.animatedObjects ~= nil then
    for v5, v6 in ipairs(self.spec_animatedObjects.animatedObjects) do
      v6:delete()
      local v9 = self:getOwnerFarmId()
      v6:setOwnerFarmId(v9, false)
    end
    v1.animatedObjects = nil
  end
end
function PlaceableAnimatedObjects:onPostFinalizePlacement()
  for v5, v6 in ipairs(self.spec_animatedObjects.animatedObjects) do
    v6:register(true)
    v6:setOwnerFarmId(self.ownerFarmId, true)
  end
end
function PlaceableAnimatedObjects:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    for v7, v8 in ipairs(self.spec_animatedObjects.animatedObjects) do
      local animatedObjectId = NetworkUtil.readNodeObjectId(streamId)
      v8:readStream(streamId, connection)
      v10:finishRegisterObject(v8, animatedObjectId)
    end
  end
end
function PlaceableAnimatedObjects:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    for v7, v8 in ipairs(self.spec_animatedObjects.animatedObjects) do
      local v11 = NetworkUtil.getObjectId(v8)
      NetworkUtil.writeNodeObjectId(...)
      v8:writeStream(streamId, connection)
      v9:registerObjectInStream(connection, v8)
    end
  end
end
function PlaceableAnimatedObjects:loadFromXMLFile(xmlFile, key)
  for v7, v8 in ipairs(self.spec_animatedObjects.animatedObjects) do
    local v12 = string.format("%s.animatedObject(%d)", key, v7 - 1)
    v8:loadFromXMLFile(...)
  end
end
function PlaceableAnimatedObjects:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in ipairs(self.spec_animatedObjects.animatedObjects) do
    local v13 = string.format("%s.animatedObject(%d)", key, v8 - 1)
    v9:saveToXMLFile(xmlFile, v13, usedModNames)
  end
end
function PlaceableAnimatedObjects.getCanTriggerAnimatedObject(v0, v1)
  return true
end
function PlaceableAnimatedObjects:setOwnerFarmId(superFunc, ownerFarmId, noEventSend)
  superFunc(self, ownerFarmId, noEventSend)
  if self.spec_animatedObjects.animatedObjects ~= nil then
    for v8, v9 in ipairs(self.spec_animatedObjects.animatedObjects) do
      v9:setOwnerFarmId(ownerFarmId, true)
    end
  end
end
