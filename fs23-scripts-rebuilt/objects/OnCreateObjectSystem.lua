-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

OnCreateObjectSystem = {}
local OnCreateObjectSystem_mt = Class(OnCreateObjectSystem)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("onCreateObjects")
  OnCreateObjectSystem.xmlSchemaSavegame = v1
end)
v1:addInitSchemaFunction(function()
  OnCreateObjectSystem.xmlSchemaSavegame:register(XMLValueType.STRING, "onCreateLoadedObjects.object(?)#saveId", "SaveID of the object")
end)
function OnCreateObjectSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.objects = {}
  v2.objectsToSave = {}
  v2.numObjectsToSave = 0
  return v2
end
function OnCreateObjectSystem.delete(v0)
end
function OnCreateObjectSystem:save(xmlFilename, usedModNames)
  local xmlFile = XMLFile.create("onCreateObjectsXMLFile", xmlFilename, "onCreateLoadedObjects", OnCreateObjectSystem.xmlSchemaSavegame)
  xmlFile:setTable("onCreateLoadedObjects.object", self.objectsToSave, function(self, xmlFilename, usedModNames)
    xmlFile:setValue(self .. "#saveId", usedModNames)
    xmlFilename:saveToXMLFile(u0, self, u1)
  end)
  xmlFile:save()
  xmlFile:delete()
end
function OnCreateObjectSystem.load(v0, v1)
  local v2 = XMLFile.load("onCreateLoadedObjectsXML", v1, OnCreateObjectSystem.xmlSchemaSavegame)
  v2:iterate("onCreateLoadedObjects.object", function(v0, v1)
    local v2 = v2:getValue(v1 .. "#saveId")
    if v2 ~= nil then
      if u1.objectsToSave[v2] ~= nil then
        if u1.objectsToSave[v2].loadFromXMLFile ~= nil then
          local v4 = u1.objectsToSave[v2]:loadFromXMLFile(u0, v1)
          -- if v4 then goto L38 end
        end
        Logging.warning("Corrupt savegame, onCreateLoadedObject %d with saveId %s could not be loaded", v0, v2)
        return
      end
      Logging.error("Corrupt savegame, onCreateLoadedObject %d has invalid saveId '%s'", v0, v2)
    end
  end)
  v2:delete()
end
function OnCreateObjectSystem:add(object, saved)
  if not self.mission.isLoadingMap then
    Logging.error("OnCreateObjectSystem:add(): only allowed to add objects while loading maps")
    printCallstack()
    return
  end
  local v3 = v3:getNumberOfUsers()
  if 1 < v3 then
    Logging.error("OnCreateObjectSystem:add() is only allowed during map loading when no client is connected")
    printCallstack()
    return
  end
  if saved then
    if object.saveToXMLFile == nil then
      Logging.error("Adding onCreate loaded object so save which does not have a saveToXMLFile function")
      return
    end
    if object.saveId == nil then
      Logging.error("Adding onCreate loaded object with invalid saveId")
      return
    end
    if self.objectsToSave[object.saveId] == object then
      return
    end
    if v3 ~= nil then
      Logging.error("Adding onCreate loaded object with duplicate saveId %s", object.saveId)
      return
    end
    self.objectsToSave[object.saveId] = object
    self.numObjectsToSave = self.numObjectsToSave + 1
  end
  table.insert(self.objects, object)
end
function OnCreateObjectSystem:remove(object)
  table.removeElement(self.objects, object)
  if object.saveId ~= nil and self.objectsToSave[object.saveId] == object then
    self.objectsToSave[object.saveId] = nil
    self.numObjectsToSave = self.numObjectsToSave - 1
  end
end
function OnCreateObjectSystem:getNumObjects()
  return #self.objects
end
function OnCreateObjectSystem:get(index)
  return self.objects[index]
end
