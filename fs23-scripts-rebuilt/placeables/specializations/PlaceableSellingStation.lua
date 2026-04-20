-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableSellingStation = {}
function PlaceableSellingStation.prerequisitesPresent(v0)
  return true
end
function PlaceableSellingStation.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getSellingStation", PlaceableSellingStation.getSellingStation)
end
function PlaceableSellingStation.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableSellingStation.collectPickObjects)
end
function PlaceableSellingStation.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableSellingStation)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableSellingStation)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableSellingStation)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableSellingStation)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableSellingStation)
end
function PlaceableSellingStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("SellingStation")
  SellingStation.registerXMLPaths(self, v1 .. ".sellingStation")
  self:setXMLSpecializationType()
end
function PlaceableSellingStation:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("SellingStation")
  SellingStation.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableSellingStation.initSpecialization()
  v0:addSpecType("sellingStationFillTypes", "shopListAttributeIconInput", SellingStation.loadSpecValueFillTypes, SellingStation.getSpecValueFillTypes, "placeable")
end
function PlaceableSellingStation:onLoad(savegame)
  local v4 = SellingStation.new(self.isServer, self.isClient)
  self.spec_sellingStation.sellingStation = v4
  v4:load(self.components, self.xmlFile, "placeable.sellingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
  self.spec_sellingStation.sellingStation.owningPlaceable = self
end
function PlaceableSellingStation:onDelete()
  if self.spec_sellingStation.sellingStation ~= nil then
    v2:removeUnloadingStation(self.spec_sellingStation.sellingStation, self)
    v2:removeSellingStation(self.spec_sellingStation.sellingStation)
    v2:delete()
  end
end
function PlaceableSellingStation:onFinalizePlacement()
  v2:register(true)
  v2:addUnloadingStation(self.spec_sellingStation.sellingStation, self)
  v2:addSellingStation(self.spec_sellingStation.sellingStation)
end
function PlaceableSellingStation:onReadStream(streamId, connection)
  local sellingStationId = NetworkUtil.readNodeObjectId(streamId)
  v5:readStream(streamId, connection)
  v5:finishRegisterObject(self.spec_sellingStation.sellingStation, sellingStationId)
end
function PlaceableSellingStation:onWriteStream(streamId, connection)
  local v6 = NetworkUtil.getObjectId(self.spec_sellingStation.sellingStation)
  NetworkUtil.writeNodeObjectId(...)
  v4:writeStream(streamId, connection)
  v4:registerObjectInStream(connection, self.spec_sellingStation.sellingStation)
end
function PlaceableSellingStation:getSellingStation()
  return self.spec_sellingStation.sellingStation
end
function PlaceableSellingStation:collectPickObjects(superFunc, node)
  for v8, v9 in ipairs(self.spec_sellingStation.sellingStation.unloadTriggers) do
    if not (node == v9.exactFillRootNode) then
      continue
    end
    break
  end
  if not v4 then
    superFunc(self, node)
  end
end
function PlaceableSellingStation:loadFromXMLFile(xmlFile, key)
  v4:loadFromXMLFile(xmlFile, key)
end
function PlaceableSellingStation:saveToXMLFile(xmlFile, key, usedModNames)
  v5:saveToXMLFile(xmlFile, key, usedModNames)
end
