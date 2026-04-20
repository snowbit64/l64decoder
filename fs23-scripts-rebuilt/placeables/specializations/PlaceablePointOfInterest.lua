-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceablePointOfInterest = {}
function PlaceablePointOfInterest.prerequisitesPresent(v0)
  return true
end
function PlaceablePointOfInterest:registerXMLPaths(v1)
  self:setXMLSpecializationType("PointOfInterest")
  self:register(XMLValueType.STRING, v1 .. ".pointOfInterest.point(?)#class")
  PointOfInterest.registerXMLPaths(self, v1 .. ".pointOfInterest.point(?)")
  self:setXMLSpecializationType()
end
function PlaceablePointOfInterest.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "setOwnerFarmId", PlaceablePointOfInterest.setOwnerFarmId)
end
function PlaceablePointOfInterest.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceablePointOfInterest)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceablePointOfInterest)
end
function PlaceablePointOfInterest:onLoad(v1)
  self.spec_pointOfInterest.points = {}
  v3:iterate("placeable.pointOfInterest.point", function(self, v1)
    local v2 = v2:getValue(v1 .. "#class", "PointOfInterest")
    local v3 = ClassUtil.getClassObject(v2)
    if v3 == nil then
      Logging.xmlError(u0.xmlFile, "PointOfInterest class '%s' not defined", v2, v1)
      return
    end
    local v4 = v3.new(u0, u0.customEnvironment)
    local v5 = v4:load(u0.components, u0.xmlFile, v1, u0.customEnvironment, u0.i3dMappings, u0.rootNode)
    if v5 then
      table.insert(u1.points, v4)
      return
    end
    v4:delete()
  end)
end
function PlaceablePointOfInterest:onDelete()
  if self.spec_pointOfInterest.points ~= nil then
    for v5, v6 in ipairs(self.spec_pointOfInterest.points) do
      v6:delete()
    end
  end
end
function PlaceablePointOfInterest:setOwnerFarmId(v1, v2, v3)
  v1(self, v2, v3)
  for v8, v9 in ipairs(self.spec_pointOfInterest.points) do
    v9:setOwnerFarmId(v2)
  end
end
