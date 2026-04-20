-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableAnimalLoadingTrigger = {}
function PlaceableAnimalLoadingTrigger.prerequisitesPresent(v0)
  return true
end
function PlaceableAnimalLoadingTrigger.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableAnimalLoadingTrigger)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableAnimalLoadingTrigger)
end
function PlaceableAnimalLoadingTrigger.registerFunctions(v0)
end
function PlaceableAnimalLoadingTrigger.registerOverwrittenFunctions(v0)
end
function PlaceableAnimalLoadingTrigger:registerXMLPaths(v1)
  self:setXMLSpecializationType("AnimalLoadingTrigger")
  AnimalLoadingTrigger.registerXMLPaths(self, v1 .. ".animalLoadingTrigger")
  self:setXMLSpecializationType()
end
function PlaceableAnimalLoadingTrigger.registerSavegameXMLPaths(v0, v1)
end
function PlaceableAnimalLoadingTrigger:onLoad(v1)
  local v3 = AnimalLoadingTrigger.new(self.isServer, self.isClient)
  self.spec_animalLoadingTrigger.animalLoadingTrigger = v3
  v3 = v3:loadFromXML(self.xmlFile, "placeable.animalLoadingTrigger", self.components, self.i3dMappings)
  if not v3 then
    v3:delete()
    self.spec_animalLoadingTrigger.animalLoadingTrigger = nil
  end
end
function PlaceableAnimalLoadingTrigger:onDelete()
  if self.spec_animalLoadingTrigger.animalLoadingTrigger ~= nil then
    v2:delete()
    self.spec_animalLoadingTrigger.animalLoadingTrigger = nil
  end
end
