-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableBunkerSilo = {}
function PlaceableBunkerSilo.prerequisitesPresent(v0)
  return true
end
function PlaceableBunkerSilo.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableBunkerSilo)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableBunkerSilo)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableBunkerSilo)
  SpecializationUtil.registerEventListener(v0, "onReadStream", PlaceableBunkerSilo)
  SpecializationUtil.registerEventListener(v0, "onWriteStream", PlaceableBunkerSilo)
  SpecializationUtil.registerEventListener(v0, "onSell", PlaceableBunkerSilo)
end
function PlaceableBunkerSilo.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateBunkerSiloWalls", PlaceableBunkerSilo.updateBunkerSiloWalls)
  SpecializationUtil.registerFunction(placeableType, "setWallVisibility", PlaceableBunkerSilo.setWallVisibility)
  SpecializationUtil.registerFunction(placeableType, "getIsBunkerSiloExtendable", PlaceableBunkerSilo.getIsBunkerSiloExtendable)
end
function PlaceableBunkerSilo.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getPlacementPosition", PlaceableBunkerSilo.getPlacementPosition)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getPlacementRotation", PlaceableBunkerSilo.getPlacementRotation)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getHasOverlap", PlaceableBunkerSilo.getHasOverlap)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "startPlacementCheck", PlaceableBunkerSilo.startPlacementCheck)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableBunkerSilo.canBeSold)
end
function PlaceableBunkerSilo:registerXMLPaths(v1)
  self:setXMLSpecializationType("BunkerSilo")
  BunkerSilo.registerXMLPaths(self, v1 .. ".bunkerSilo")
  self:register(XMLValueType.BOOL, v1 .. ".bunkerSilo#isExtendable", "Checks if silo is extendable. If set 'siloToSiloDistance' needs to be provided as well", false)
  self:register(XMLValueType.FLOAT, v1 .. ".bunkerSilo#siloToSiloDistance", "Silo to silo distance required for aligning multiple silos of the same type next to each other")
  self:register(XMLValueType.FLOAT, v1 .. ".bunkerSilo#snapDistance", "Snap distance for building an array of the same silo", "siloToSiloDistance * 1.1")
  self:register(XMLValueType.STRING, v1 .. ".bunkerSilo#sellWarningText", "Sell warning text")
  self:setXMLSpecializationType()
end
function PlaceableBunkerSilo:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("BunkerSilo")
  BunkerSilo.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableBunkerSilo:onLoad(savegame)
  local v3 = BunkerSilo.new(self.isServer, self.isClient)
  self.spec_bunkerSilo.bunkerSilo = v3
  v3 = v3:load(self.components, self.xmlFile, "placeable.bunkerSilo", self.i3dMappings)
  if not v3 then
    v3:delete()
  end
  v3 = v3:getValue("placeable.bunkerSilo#isExtendable", false)
  v2.isExtendable = v3
  if v2.isExtendable then
    v3 = v3:getValue("placeable.bunkerSilo#siloToSiloDistance")
    v2.siloSiloDistance = v3
    if v2.siloSiloDistance == nil then
      Logging.xmlError(self.xmlFile, "Bunker Silo is marked as extendable but 'placeable.bunkerSilo#siloToSiloDistance' is not set")
      self:setLoadingState(Placeable.LOADING_STATE_ERROR)
      return
    end
    v3 = v3:getValue("placeable.bunkerSilo#snapDistance")
    if not v3 then
    end
    v2.snapDistance = v3
  end
  local v5 = v5:getValue("placeable.bunkerSilo#sellWarningText", "$l10n_info_bunkerSiloNotEmpty")
  v3 = v3:convertText(...)
  v2.sellWarningText = v3
end
function PlaceableBunkerSilo:onDelete()
  self:updateBunkerSiloWalls(true)
  if self.spec_bunkerSilo.bunkerSilo ~= nil then
    v2:delete()
  end
  v2:removeBunkerSilo(self)
end
function PlaceableBunkerSilo:onFinalizePlacement()
  local ownerFarmId = self:getOwnerFarmId()
  self:updateBunkerSiloWalls(false)
  v3:register(true)
  v3:setOwnerFarmId(ownerFarmId, true)
  v3:addBunkerSilo(self)
end
function PlaceableBunkerSilo:onReadStream(streamId, connection)
  local bunkerSiloId = NetworkUtil.readNodeObjectId(streamId)
  v5:readStream(streamId, connection)
  v5:finishRegisterObject(self.spec_bunkerSilo.bunkerSilo, bunkerSiloId)
end
function PlaceableBunkerSilo:onWriteStream(streamId, connection)
  local v6 = NetworkUtil.getObjectId(self.spec_bunkerSilo.bunkerSilo)
  NetworkUtil.writeNodeObjectId(...)
  v4:writeStream(streamId, connection)
  v4:registerObjectInStream(connection, self.spec_bunkerSilo.bunkerSilo)
end
function PlaceableBunkerSilo:loadFromXMLFile(xmlFile, key)
  local v4 = v4:loadFromXMLFile(xmlFile, key)
  if not v4 then
    return false
  end
end
function PlaceableBunkerSilo:saveToXMLFile(xmlFile, key, usedModNames)
  v5:saveToXMLFile(xmlFile, key, usedModNames)
end
function PlaceableBunkerSilo:setWallVisibility(isLeftVisible, isRightVisible)
  v4:setWallVisibility(isLeftVisible, isRightVisible)
end
function PlaceableBunkerSilo:getIsBunkerSiloExtendable()
  return self.spec_bunkerSilo.isExtendable
end
function PlaceableBunkerSilo:updateBunkerSiloWalls(isDeleting)
  if self.rootNode ~= nil then
    local v3, v4, v5 = getWorldTranslation(self.rootNode)
    local v8 = g_currentMission.placeableSystem:getBunkerSilos()
    for v10, v11 in ipairs(...) do
      local v12 = v11:getIsBunkerSiloExtendable()
      if not v12 then
        continue
      end
      if not (v11 ~= self) then
        continue
      end
      v12 = v11:getOwnerFarmId()
      local v13 = self:getOwnerFarmId()
      if not (v12 == v13) then
        continue
      end
      if not (v11.configFileName == self.configFileName) then
        continue
      end
      local v12, v13, v14 = worldToLocal(v11.rootNode, v3, v4, v5)
      local v15 = MathUtil.vector2Length(v12, v14)
      if not (v15 < v2.siloSiloDistance + 0.5) then
        continue
      end
      if 0 >= v12 then
      end
      if isDeleting then
        if true then
          v11:setWallVisibility(true, nil)
          continue
        end
        v11:setWallVisibility(nil, true)
      elseif true then
        v11:setWallVisibility(false, nil)
      else
        v11:setWallVisibility(nil, false)
      end
    end
  end
end
function PlaceableBunkerSilo:onSell()
  v2:clearSiloArea()
end
function PlaceableBunkerSilo:canBeSold(superFunc)
  if 0 < self.spec_bunkerSilo.bunkerSilo.fillLevel then
    return true, self.spec_bunkerSilo.sellWarningText
  end
  return true, nil
end
function PlaceableBunkerSilo:startPlacementCheck(superFunc, x, y, z, rotY)
  superFunc(self, x, y, z, rotY)
  if not self.spec_bunkerSilo.isExtendable then
    return
  end
  v6.foundSnappingSilo = nil
  v6.foundSnappingSiloSide = 0
  local v9 = v9:getBunkerSilos()
  for v11, v12 in ipairs(...) do
    local v13 = v12:getOwnerFarmId()
    if not (v13 == g_currentMission.player.farmId) then
      continue
    end
    if not (v12.configFileName == self.configFileName) then
      continue
    end
    local v13, v14, v15 = worldToLocal(v12.rootNode, x, y, z)
    local v16 = MathUtil.vector2Length(v13, v15)
    if not (v16 < v7) then
      continue
    end
    v6.foundSnappingSilo = v12
    local v17 = MathUtil.sign(v13)
    v6.foundSnappingSiloSide = v17
  end
end
function PlaceableBunkerSilo:getHasOverlap(superFunc, x, y, z, rotY, checkFunc)
  if self.spec_bunkerSilo.foundSnappingSilo ~= nil then
  end
  return superFunc(self, x, y, z, rotY, v8)
end
function PlaceableBunkerSilo:getPlacementRotation(superFunc, x, y, z)
  local v5, v6, v7 = superFunc(self, x, y, z)
  if self.spec_bunkerSilo.foundSnappingSilo ~= nil then
    local v6, v7, v8 = localDirectionToWorld(self.spec_bunkerSilo.foundSnappingSilo.rootNode, 0, 0, 1)
    local v9 = MathUtil.getYRotationFromDirection(v6, v8)
  end
  return x, y, z
end
function PlaceableBunkerSilo:getPlacementPosition(superFunc, x, y, z)
  local v5, v6, v7 = superFunc(self, x, y, z)
  if self.spec_bunkerSilo.foundSnappingSilo ~= nil then
    local v6, v7, v8 = localToWorld(self.spec_bunkerSilo.foundSnappingSilo.rootNode, self.spec_bunkerSilo.siloSiloDistance * self.spec_bunkerSilo.foundSnappingSiloSide, 0, 0)
  end
  return x, y, z
end
