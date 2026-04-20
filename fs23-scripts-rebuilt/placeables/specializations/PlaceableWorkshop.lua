-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWorkshop = {}
function PlaceableWorkshop.prerequisitesPresent(v0)
  return true
end
function PlaceableWorkshop.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableWorkshop.setOwnerFarmId)
end
function PlaceableWorkshop.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableWorkshop)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableWorkshop)
end
function PlaceableWorkshop:registerXMLPaths(v1)
  self:setXMLSpecializationType("Workshop")
  VehicleSellingPoint.registerXMLPaths(self, v1 .. ".workshop.sellingPoint")
  self:setXMLSpecializationType()
end
function PlaceableWorkshop:onLoad(savegame)
  local v3 = VehicleSellingPoint.new()
  self.spec_workshop.sellingPoint = v3
  v3:load(self.components, self.xmlFile, "placeable.workshop.sellingPoint", self.i3dMappings)
  local v5 = self:getOwnerFarmId()
  v3:setOwnerFarmId(...)
  self.spec_workshop.sellingPoint.owningPlaceable = self
end
function PlaceableWorkshop:onDelete()
  if self.spec_workshop.sellingPoint ~= nil then
    v2:delete()
  end
end
function PlaceableWorkshop:setOwnerFarmId(superFunc, ownerFarmId, noEventSend)
  superFunc(self, ownerFarmId, noEventSend)
  if self.spec_workshop.sellingPoint ~= nil then
    v5:setOwnerFarmId(ownerFarmId)
  end
end
