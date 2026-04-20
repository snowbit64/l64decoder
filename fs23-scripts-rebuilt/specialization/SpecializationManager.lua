-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SpecializationManager = {}
local SpecializationManager_mt = Class(SpecializationManager, AbstractManager)
function SpecializationManager.new(typeName, xmlFilename, customMt)
  if not customMt then
  end
  local v3 = v3(v4)
  v3.typeName = typeName
  v3.xmlFilename = xmlFilename
  return v3
end
function SpecializationManager:initDataStructures()
  self.specializations = {}
  self.sortedSpecializations = {}
end
function SpecializationManager:loadMapData()
  local v2 = v2:superClass()
  v2.loadMapData(self)
  local xmlFile = loadXMLFile("SpecializationsXML", self.xmlFilename)
  while true do
    v3 = string.format("specializations.specialization(%d)", v2)
    v4 = getXMLString(xmlFile, v3 .. "#name")
    if not (v4 ~= nil) then
      break
    end
    v5 = getXMLString(xmlFile, v3 .. "#className")
    v6 = getXMLString(xmlFile, v3 .. "#filename")
    v7:addSubtask(function()
      self:addSpecialization(u1, u2, u3, "")
    end)
  end
  delete(xmlFile)
  v3:addSubtask(function()
    local xmlFile = string.format("  Loaded '%s' specializations", u0.typeName)
    print(...)
  end)
  return true
end
function SpecializationManager:addSpecialization(name, className, filename, customEnvironment)
  if self.specializations[name] ~= nil then
    local v7 = tostring(name)
    Logging.error(...)
    return false
  end
  if className == nil then
    v7 = tostring(name)
    Logging.error(...)
    return false
  end
  if filename == nil then
    v7 = tostring(name)
    Logging.error(...)
    return false
  end
  source(filename, customEnvironment)
  local specializationObject = ClassUtil.getClassObject(className)
  if specializationObject ~= nil then
    specializationObject.className = className
  end
  self.specializations[name] = v5
  table.insert(self.sortedSpecializations, v5)
  return true
end
function SpecializationManager:initSpecializations()
  -- TODO: structure LOP_FORNPREP (pc 5, target 24)
  local v4 = self:getSpecializationObjectByName(self.sortedSpecializations[1].name)
  if v4 ~= nil and v4.initSpecialization ~= nil then
    v4.initSpecialization()
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 6)
end
function SpecializationManager:postInitSpecializations()
  -- TODO: structure LOP_FORNPREP (pc 5, target 24)
  local v4 = self:getSpecializationObjectByName(self.sortedSpecializations[1].name)
  if v4 ~= nil and v4.postInitSpecialization ~= nil then
    v4.postInitSpecialization()
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 6)
end
function SpecializationManager:getSpecializationByName(name)
  if name ~= nil then
    return self.specializations[name]
  end
  return nil
end
function SpecializationManager:getSpecializationObjectByName(name)
  if self.specializations[name] == nil then
    return nil
  end
  return ClassUtil.getClassObject(v2.className)
end
function SpecializationManager:getSpecializations()
  return self.specializations
end
local v1 = SpecializationManager.new("vehicle", "dataS/specializations.xml")
g_specializationManager = v1
v1 = SpecializationManager.new("placeable", "dataS/placeableSpecializations.xml")
g_placeableSpecializationManager = v1
