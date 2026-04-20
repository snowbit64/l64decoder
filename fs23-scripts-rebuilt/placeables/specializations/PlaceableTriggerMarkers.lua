-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableTriggerMarkers = {}
function PlaceableTriggerMarkers.prerequisitesPresent(v0)
  return true
end
function PlaceableTriggerMarkers.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableTriggerMarkers)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableTriggerMarkers)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableTriggerMarkers)
  SpecializationUtil.registerEventListener(v0, "onOwnerChanged", PlaceableTriggerMarkers)
end
function PlaceableTriggerMarkers.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onPlayerFarmChanged", PlaceableTriggerMarkers.onPlayerFarmChanged)
  SpecializationUtil.registerFunction(placeableType, "onMarkerFileLoaded", PlaceableTriggerMarkers.onMarkerFileLoaded)
  SpecializationUtil.registerFunction(placeableType, "getTriggerMarkerPosition", PlaceableTriggerMarkers.getTriggerMarkerPosition)
  SpecializationUtil.registerFunction(placeableType, "setShowMarkers", PlaceableTriggerMarkers.setShowMarkers)
end
function PlaceableTriggerMarkers:registerXMLPaths(v1)
  self:setXMLSpecializationType("TriggerMarkers")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".triggerMarkers.triggerMarker(?)#node", "Trigger marker node")
  self:register(XMLValueType.STRING, v1 .. ".triggerMarkers.triggerMarker(?)#filename", "Trigger marker config file")
  self:register(XMLValueType.STRING, v1 .. ".triggerMarkers.triggerMarker(?)#id", "Trigger marker config file identifier")
  self:register(XMLValueType.BOOL, v1 .. ".triggerMarkers.triggerMarker(?)#adjustToGround", "Trigger marker adjusted to ground")
  self:register(XMLValueType.FLOAT, v1 .. ".triggerMarkers.triggerMarker(?)#groundOffset", "Height of the trigger marker above the ground if adjustToGround is enabled", 0.03)
  self:register(XMLValueType.BOOL, v1 .. ".triggerMarkers.triggerMarker(?)#showAllPlayers", "Show marker for all players even if they do not have access to the placeable", false)
  self:register(XMLValueType.BOOL, v1 .. ".triggerMarkers.triggerMarker(?)#showOnlyIfOwned", "Show marker only if owned", false)
  self:setXMLSpecializationType()
end
function PlaceableTriggerMarkers:onLoad(savegame)
  self.spec_triggerMarkers.sharedLoadRequestIds = {}
  self.spec_triggerMarkers.triggerMarkers = {}
  self.xmlFile:iterate("placeable.triggerMarkers.triggerMarker", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u1.components, u1.i3dMappings)
    if v2 ~= nil then
      local v3 = v3:getValue(savegame .. "#adjustToGround", false)
      local v4 = v4:getValue(savegame .. "#groundOffset")
      if v4 ~= nil and not v3 then
        Logging.xmlWarning(u0, "'groundOffset=%.2f' given but 'adjustToGround' is false for '%s'", v4, savegame)
      end
      local v5 = v5:getValue(savegame .. "#filename")
      if v5 ~= nil then
        local v7 = v7:getValue(savegame .. "#id")
        if v7 == nil then
          Logging.xmlWarning(u0, "Missing marker id for '%s'", savegame)
          return
        end
        local v8 = string.upper(v7)
        v8 = Utils.getFilename(v5, u1.baseDirectory)
        v8 = XMLFile.load("triggerNode", v8, nil)
        if v8 == nil then
          Logging.xmlWarning(u0, "Could not load marker config file '%s'", v8)
          return
        end
        local v9 = v8:getString("markerIcons.filename")
        if v9 == nil then
          Logging.xmlWarning(u0, "Missing marker i3d file in '%s'", v8)
          return
        end
        v9 = v9:createLoadingTask()
        local v10 = Utils.getFilename(v6, u1.baseDirectory)
        local v11 = v11:loadSharedI3DFileAsync(v10, false, false, u1.onMarkerFileLoaded, u1, {markerXMLFile = v8, node = v2, markerId = v7, loadingTask = v9})
        table.insert(u2.sharedLoadRequestIds, v11)
      end
      v7 = v7:getValue(savegame .. "#showAllPlayers", false)
      v8 = v8:getValue(savegame .. "#showOnlyIfOwned", false)
      table.insert(u2.triggerMarkers, {node = v2, i3dFilename = v6, adjustToGround = v3, groundOffset = v4, showAllPlayers = v7, showOnlyIfOwned = v8})
      return
    end
    Logging.xmlWarning(u0, "Missing trigger marker node for '%s'", savegame)
  end)
end
function PlaceableTriggerMarkers:onMarkerFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    args.markerXMLFile:iterate("markerIcons.variations.variation", function(self, i3dNode)
      local failedReason = failedReason:getString(i3dNode .. "#id")
      if failedReason ~= nil then
        local args = string.upper(failedReason)
        if args == u1 then
          local v5 = v5:getString(i3dNode .. "#node")
          args = I3DUtil.indexToObject(...)
          if args ~= nil then
            link(u3, args)
            u4 = true
            return false
          end
          Logging.xmlWarning(u0, "Could not load marker node for marker id '%s'", u1)
        end
      end
    end)
    if not false then
      Logging.xmlWarning(args.markerXMLFile, "Could not find marker id '%s'", args.markerId)
    end
    delete(i3dNode)
  end
  v4:delete()
  self:finishLoadingTask(v7)
end
function PlaceableTriggerMarkers:onDelete()
  if self.spec_triggerMarkers.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(self.spec_triggerMarkers.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
    v1.sharedLoadRequestIds = nil
  end
  if v1.triggerMarkers ~= nil then
    for v5, v6 in ipairs(v1.triggerMarkers) do
      v7:removeTriggerMarker(v6.node)
    end
  end
  v2:unsubscribe(MessageType.PLAYER_FARM_CHANGED, self)
  v2:unsubscribe(MessageType.PLAYER_CREATED, self)
end
function PlaceableTriggerMarkers:onFinalizePlacement()
  for v5, v6 in ipairs(self.spec_triggerMarkers.triggerMarkers) do
    if not v6.adjustToGround then
      continue
    end
    if not (g_currentMission.terrainRootNode ~= nil) then
      continue
    end
    local v7, v8, v9 = getWorldTranslation(v6.node)
    local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v7, 0, v9)
    setWorldTranslation(v6.node, v7, v11 + v6.groundOffset, v9)
  end
  v4 = v4:canPlayerAccess(self)
  self:setShowMarkers(...)
  v2:subscribe(MessageType.PLAYER_FARM_CHANGED, self.onPlayerFarmChanged, self)
  v2:subscribe(MessageType.PLAYER_CREATED, self.onPlayerFarmChanged, self)
end
function PlaceableTriggerMarkers:onOwnerChanged()
  local v3 = v3:canPlayerAccess(self)
  self:setShowMarkers(...)
end
function PlaceableTriggerMarkers:onPlayerFarmChanged()
  local v3 = v3:canPlayerAccess(self)
  self:setShowMarkers(...)
end
function PlaceableTriggerMarkers:setShowMarkers(doShow)
  local v3 = self:getOwnerFarmId()
  if v3 ~= AccessHandler.EVERYONE and v3 == AccessHandler.NOBODY then
  end
  for v8, v9 in ipairs(v2.triggerMarkers) do
    if not doShow then
    end
    if v9.showOnlyIfOwned and not v4 then
    end
    if v10 then
      v11:addTriggerMarker(v9.node)
    else
      v11:removeTriggerMarker(v9.node)
    end
  end
end
function PlaceableTriggerMarkers:getTriggerMarkerPosition(index)
  if self.spec_triggerMarkers.triggerMarkers[index] ~= nil then
    return getWorldTranslation(self.spec_triggerMarkers.triggerMarkers[index].node)
  end
  return nil
end
