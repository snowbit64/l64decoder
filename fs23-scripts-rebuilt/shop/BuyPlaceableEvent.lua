-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyPlaceableEvent = {}
local BuyPlaceableEvent_mt = Class(BuyPlaceableEvent, Event)
BuyPlaceableEvent.STATE_SUCCESS = 0
BuyPlaceableEvent.STATE_FAILED_TO_LOAD = 1
BuyPlaceableEvent.STATE_NO_SPACE = 2
BuyPlaceableEvent.STATE_NO_PERMISSION = 3
BuyPlaceableEvent.STATE_NOT_ENOUGH_MONEY = 4
BuyPlaceableEvent.STATE_TERRAIN_DEFORMATION_FAILED = 5
InitStaticEventClass(BuyPlaceableEvent, "BuyPlaceableEvent", EventIds.EVENT_BUY_PLACEABLE)
function BuyPlaceableEvent.emptyNew()
  return Event.new(u0)
end
function BuyPlaceableEvent.new(filename, x, y, z, rx, ry, rz, displacementCosts, ownerFarmId, modifyTerrain, colorIndex, forFree)
  local v12 = BuyPlaceableEvent.emptyNew()
  v12.filename = filename
  v12.x = x
  v12.y = y
  v12.z = z
  v12.rx = rx
  v12.ry = ry
  v12.rz = rz
  v12.displacementCosts = displacementCosts
  v12.ownerFarmId = ownerFarmId
  v12.modifyTerrain = modifyTerrain
  v12.colorIndex = colorIndex or 0
  local v13 = Utils.getNoNil(forFree, false)
  v12.forFree = v13
  return v12
end
function BuyPlaceableEvent.newServerToClient(errorCode, price)
  local v2 = BuyPlaceableEvent.emptyNew()
  v2.errorCode = errorCode
  v2.price = price
  return v2
end
function BuyPlaceableEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    self.filename = v3
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
    v3 = streamReadFloat32(streamId)
    self.rx = v3
    v3 = streamReadFloat32(streamId)
    self.ry = v3
    v3 = streamReadFloat32(streamId)
    self.rz = v3
    v3 = streamReadInt32(streamId)
    self.displacementCosts = v3
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.ownerFarmId = v3
    v3 = streamReadBool(streamId)
    self.modifyTerrain = v3
    v3 = streamReadUInt8(streamId)
    self.colorIndex = v3
    v3 = streamReadBool(streamId)
    self.forFree = v3
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
    v3 = streamReadInt32(streamId)
    self.price = v3
  end
  self:run(connection)
end
function BuyPlaceableEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v5 = NetworkUtil.convertToNetworkFilename(self.filename)
    streamWriteString(...)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
    streamWriteFloat32(streamId, self.rx)
    streamWriteFloat32(streamId, self.ry)
    streamWriteFloat32(streamId, self.rz)
    streamWriteInt32(streamId, self.displacementCosts)
    streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteBool(streamId, self.modifyTerrain)
    streamWriteUInt8(streamId, self.colorIndex)
    streamWriteBool(streamId, self.forFree)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
  streamWriteInt32(streamId, self.price)
end
function BuyPlaceableEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v5 = v5:getHasPlayerPermission("buyPlaceable", connection)
    if not v5 then
    else
      v5 = v5:getItemByXMLFilename(self.filename)
      if v5 ~= nil then
        if not self.forFree then
          local v6 = v6:getBuyPrice(v5)
        end
        v6 = v6:getMoney(self.ownerFarmId)
        if v4 <= v6 then
          PlaceableUtil.loadPlaceable(self.filename, {x = self.x, y = self.y, z = self.z}, {x = self.rx, y = self.ry, z = self.rz}, self.ownerFarmId, nil, self.placeableLoaded, self, {price = v4, connection = connection})
        else
        end
      end
    end
    -- if not v2 then goto L129 end
    local v7 = BuyPlaceableEvent.newServerToClient(v3, v4)
    connection:sendEvent(...)
    return
  end
  v2:publish(BuyPlaceableEvent, self.errorCode, self.price)
end
function BuyPlaceableEvent:placeableLoaded(placeable, loadingState, args)
  if loadingState == Placeable.LOADING_STATE_ERROR then
    local v8 = BuyPlaceableEvent.newServerToClient(BuyPlaceableEvent.STATE_FAILED_TO_LOAD, args.price)
    args.connection:sendEvent(...)
    if placeable ~= nil then
      placeable:delete()
    end
    return
  end
  if placeable ~= nil then
    if GS_IS_CONSOLE_VERSION then
      local v6 = fileExists(self.filename)
      if not v6 then
        placeable:delete()
        return
      end
    end
    if self.modifyTerrain and placeable.applyDeformation ~= nil then
      placeable:applyDeformation(false, function(self, placeable, loadingState)
        if self ~= TerrainDeformation.STATE_SUCCESS then
          args:delete()
          local v5 = BuyPlaceableEvent.newServerToClient(BuyPlaceableEvent.STATE_TERRAIN_DEFORMATION_FAILED, u2)
          args:sendEvent(...)
          return
        end
        if u3.colorIndex ~= 0 and u0.setColor ~= nil then
          args:setColor(u3.colorIndex)
        end
        if 0 < placeable then
          local args = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, u0.position.x, 0, u0.position.z)
          u0.position.y = args
        end
        args:initPose()
        u0.undoTimer = g_time
        args:finalizePlacement()
        args:register()
        args:addMoney(-u2, u4, MoneyType.SHOP_PROPERTY_BUY, true)
        args:onBuy()
        args = args:getFarmId()
        for v10, v11 in ipairs(g_currentMission.placeableSystem.placeables) do
          local v12 = v11:getOwnerFarmId()
          if not (v12 == args) then
            continue
          end
          if v11.spec_beehive ~= nil then
          end
          if v11.spec_productionPoint ~= nil then
          end
        end
        v7:tryUnlock("NumPlaceables", v4)
        v7:tryUnlock("NumBeehives", v5)
        v7:tryUnlock("NumProductionPoints", v6)
        v9 = BuyPlaceableEvent.newServerToClient(BuyPlaceableEvent.STATE_SUCCESS, u2)
        v7:sendEvent(...)
      end)
      return
    end
    v7(TerrainDeformation.STATE_SUCCESS, 0, nil)
    return
  end
  v8 = BuyPlaceableEvent.newServerToClient(BuyPlaceableEvent.STATE_NO_SPACE, v4)
  v5:sendEvent(...)
end
