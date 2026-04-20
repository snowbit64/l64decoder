-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableBuyingStation = {}
function PlaceableBuyingStation.prerequisitesPresent(v0)
  return true
end
function PlaceableBuyingStation.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getBuyingStation", PlaceableBuyingStation.getBuyingStation)
end
function PlaceableBuyingStation.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableBuyingStation.collectPickObjects)
end
function PlaceableBuyingStation.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableBuyingStation)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableBuyingStation)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableBuyingStation)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableBuyingStation)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableBuyingStation)
end
function PlaceableBuyingStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("BuyingStation")
  BuyingStation.registerXMLPaths(self, v1 .. ".buyingStation")
  self:setXMLSpecializationType()
end
function PlaceableBuyingStation.initSpecialization()
  v0:addSpecType("buyingStationFillTypes", "shopListAttributeIconOutput", BuyingStation.loadSpecValueFillTypes, BuyingStation.getSpecValueFillTypes, "placeable")
end
function PlaceableBuyingStation:onLoad(savegame)
  local v3 = BuyingStation.new(self.isServer, self.isClient)
  local v4 = v3:load(self.components, self.xmlFile, "placeable.buyingStation", self.customEnvironment, self.i3dMappings)
  if v4 then
    self.spec_buyingStation.buyingStation = v3
    self.spec_buyingStation.buyingStation.owningPlaceable = self
    v4:addLoadingStation(self.spec_buyingStation.buyingStation, self.spec_buyingStation.buyingStation.owningPlaceable)
    return
  end
  Logging.xmlError(self.xmlFile, "Could not load buying station")
  v3:delete()
end
function PlaceableBuyingStation:onDelete()
  if self.spec_buyingStation.buyingStation ~= nil then
    v2:removeLoadingStation(self.spec_buyingStation.buyingStation, self.spec_buyingStation.buyingStation.owningPlaceable)
    v2:delete()
  end
end
function PlaceableBuyingStation:onFinalizePlacement()
  if self.spec_buyingStation.buyingStation ~= nil then
    v2:register(true)
  end
end
function PlaceableBuyingStation:onReadStream(streamId, connection)
  if self.spec_buyingStation.buyingStation ~= nil then
    local buyingStationId = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.spec_buyingStation.buyingStation, buyingStationId)
  end
end
function PlaceableBuyingStation:onWriteStream(streamId, connection)
  if self.spec_buyingStation.buyingStation ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_buyingStation.buyingStation)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, self.spec_buyingStation.buyingStation)
  end
end
function PlaceableBuyingStation:collectPickObjects(superFunc, node)
  if self.spec_buyingStation.buyingStation ~= nil then
    for v7, v8 in ipairs(self.spec_buyingStation.buyingStation.loadTriggers) do
      if not (node == v8.triggerNode) then
        continue
      end
      return
    end
  end
  superFunc(self, node)
end
function PlaceableBuyingStation:getBuyingStation()
  return self.spec_buyingStation.buyingStation
end
