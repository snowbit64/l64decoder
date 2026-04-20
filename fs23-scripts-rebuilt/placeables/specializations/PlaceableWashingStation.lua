-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWashingStation = {}
function PlaceableWashingStation.prerequisitesPresent(v0)
  return true
end
function PlaceableWashingStation.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "setOwnerFarmId", PlaceableWashingStation.setOwnerFarmId)
end
function PlaceableWashingStation.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableWashingStation)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableWashingStation)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableWashingStation)
  SpecializationUtil.registerEventListener(v0, "onReadStream", PlaceableWashingStation)
  SpecializationUtil.registerEventListener(v0, "onWriteStream", PlaceableWashingStation)
end
function PlaceableWashingStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("WashingStation")
  WashingStation.registerXMLPaths(self, v1 .. ".washingStation.station(?)")
  self:setXMLSpecializationType()
end
function PlaceableWashingStation:onLoad(v1)
  self.spec_washingStation.washingStations = {}
  v3:iterate("placeable.washingStation.station", function(self, v1)
    local v2 = WashingStation.new(u0.isServer, u0.isClient)
    local v3 = v2:load(u0.components, u0.xmlFile, v1, u0.customEnvironment, u0.i3dMappings, u0.rootNode)
    if v3 then
      table.insert(u1.washingStations, v2)
      return
    end
    v2:delete()
  end)
end
function PlaceableWashingStation:onDelete()
  if self.spec_washingStation.washingStations ~= nil then
    for v5, v6 in ipairs(self.spec_washingStation.washingStations) do
      v6:delete()
    end
  end
end
function PlaceableWashingStation:onFinalizePlacement()
  if self.spec_washingStation.washingStations ~= nil then
    for v5, v6 in ipairs(self.spec_washingStation.washingStations) do
      local v9 = self:getOwnerFarmId()
      v6:setOwnerFarmId(v9, true)
      v6:register(true)
    end
  end
end
function PlaceableWashingStation:onReadStream(v1, v2)
  if self.spec_washingStation.washingStations ~= nil then
    for v7, v8 in ipairs(self.spec_washingStation.washingStations) do
      local v9 = NetworkUtil.readNodeObjectId(v1)
      v8:readStream(v1, v2)
      v10:finishRegisterObject(v8, v9)
    end
  end
end
function PlaceableWashingStation:onWriteStream(v1, v2)
  if self.spec_washingStation.washingStations ~= nil then
    for v7, v8 in ipairs(self.spec_washingStation.washingStations) do
      local v11 = NetworkUtil.getObjectId(v8)
      NetworkUtil.writeNodeObjectId(...)
      v8:writeStream(v1, v2)
      v9:registerObjectInStream(v2, v8)
    end
  end
end
function PlaceableWashingStation:setOwnerFarmId(v1, v2, v3)
  v1(self, v2, v3)
  if self.spec_washingStation.washingStations ~= nil then
    for v8, v9 in ipairs(self.spec_washingStation.washingStations) do
      v9:setOwnerFarmId(v2, true)
    end
  end
end
