-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TypeManager = {}
local TypeManager_mt = Class(TypeManager)
function TypeManager.new(typeName, rootElementName, xmlFilename, specializationManager, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  v5.types = {}
  v5.typeName = typeName
  v5.rootElementName = rootElementName
  v5.xmlFilename = xmlFilename
  v5.specializationManager = specializationManager
  return v5
end
function TypeManager:loadMapData()
  local xmlFile = loadXMLFile("typesXML", self.xmlFilename)
  while true do
    v3 = string.format("%s.type(%d)", self.rootElementName, v2)
    v4 = hasXMLProperty(xmlFile, v3)
    if not v4 then
      break
    end
    v4:addSubtask(function()
      self:loadTypeFromXML(u1, u2, nil, nil, nil)
    end)
  end
  v3:addSubtask(function()
    delete(u0)
  end)
  v3:addSubtask(function()
    print("  Loaded " .. u0.typeName .. " types")
  end)
  return true
end
function TypeManager:unloadMapData()
  self.types = {}
end
function TypeManager:addType(typeName, className, filename, customEnvironment, parent)
  if self.types[typeName] ~= nil then
    Logging.error("Multiple specifications of %s type '%s'", self.typeName, typeName)
    return false
  end
  if className == nil then
    Logging.error("No className specified for %s type '%s'", self.typeName, typeName)
    return false
  end
  if filename == nil then
    Logging.error("No filename specified for %s type '%s'", self.typeName, typeName)
    return false
  end
  source(filename, customEnvironment or "")
  self.types[typeName] = {name = typeName, className = className, filename = filename, specializations = {}, specializationNames = {}, specializationsByName = {}, functions = {}, events = {}, eventListeners = {}, customEnvironment = customEnvironment or "", parent = parent}
  return true
end
function TypeManager:loadTypeFromXML(xmlFile, key, isDLC, modDir, modName)
  local v6 = getXMLString(xmlFile, key .. "#name")
  local parentName = getXMLString(xmlFile, key .. "#parent")
  if v6 == nil and parentName == nil then
    Logging.error("Missing name or parent for placeableType '%s'", key)
    return false
  end
  if parentName ~= nil and self.types[parentName] == nil then
    Logging.error("Parent %s type '%s' is not defined!", self.typeName, parentName)
    return false
  end
  local v9 = getXMLString(xmlFile, key .. "#className")
  local v10 = getXMLString(xmlFile, key .. "#filename")
  if v8 ~= nil then
    if not v9 then
    end
    if not v10 then
    end
  end
  if modName ~= nil and modName ~= "" then
  end
  if v9 ~= nil and v10 ~= nil then
    if modDir ~= nil then
      local v13, v14 = Utils.getFilename(v10, modDir)
      if v14 then
      end
    end
    if not Platform.allowsScriptMods and not isDLC then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x80000000 -> L189
    end
    self:addType(v6, v9, v10, v11, v8)
    if v8 ~= nil then
      for v15, v16 in ipairs(v8.specializationNames) do
        self:addSpecialization(v6, v16)
      end
    end
    while true do
      v13 = string.format("%s.specialization(%d)", key, v12)
      v14 = hasXMLProperty(xmlFile, v13)
      if not v14 then
        break
      end
      v14 = getXMLString(xmlFile, v13 .. "#name")
      v15 = v15:getSpecializationByName(v14)
      if v15 == nil then
        if modName ~= nil then
        end
        v16 = v16:getSpecializationByName(v14)
        if v16 == nil then
          Logging.error("Could not find specialization '%s' for %s type '%s'.", v14, self.typeName, v6)
        end
      end
      if v14 ~= nil then
        self:addSpecialization(v6, v14)
      end
    end
    return true
    Logging.error("Can't register %s type '%s' with scripts on consoles.", self.typeName, v6)
  end
  return false
end
function TypeManager:addSpecialization(typeName, specName)
  if self.types[typeName] ~= nil then
    if self.types[typeName].specializationsByName[specName] == nil then
      local v4 = v4:getSpecializationObjectByName(specName)
      if v4 == nil then
        local v8 = tostring(typeName)
        local v9 = tostring(specName)
        Logging.error(...)
        return false
      end
      table.insert(v3.specializations, v4)
      table.insert(v3.specializationNames, specName)
      v3.specializationsByName[specName] = v4
      return
    end
    Logging.error("Specialization '%s' already exists for %s type '%s'!", specName, self.typeName, typeName)
    return
  end
  Logging.error("%s type '%s' is not defined!", self.typeName, typeName)
end
function TypeManager:validateTypes()
  for v4, v5 in pairs(self.types) do
    v6:addSubtask(function()
      for v3, v4 in ipairs(u0.specializationNames) do
        local v6 = u0.specializationsByName[v4].prerequisitesPresent(u0.specializations)
        if not not v6 then
          continue
        end
        Logging.error("Not all prerequisites of specialization '%s' in %s type '%s' are fulfilled", v4, u1.typeName, u2)
        v6:removeType(u2)
      end
    end)
  end
end
function TypeManager:finalizeTypes()
  for v4, v5 in pairs(self.types) do
    v6:addSubtask(function()
      local self = ClassUtil.getClassObject(u0.className)
      if self.registerEvents ~= nil then
        self.registerEvents(u0)
      end
      if self.registerFunctions ~= nil then
        self.registerFunctions(u0)
      end
      for v4, v5 in ipairs(u0.specializations) do
        if not (v5.registerEvents ~= nil) then
          continue
        end
        v5.registerEvents(u0)
      end
      for v4, v5 in ipairs(u0.specializations) do
        if not (v5.registerFunctions ~= nil) then
          continue
        end
        v5.registerFunctions(u0)
      end
      for v4, v5 in ipairs(u0.specializations) do
        if not (v5.registerOverwrittenFunctions ~= nil) then
          continue
        end
        v5.registerOverwrittenFunctions(u0)
      end
      for v4, v5 in ipairs(u0.specializations) do
        if not (v5.registerEventListeners ~= nil) then
          continue
        end
        v5.registerEventListeners(u0)
      end
      if u0.customEnvironment ~= "" then
        v2 = string.format("  Register %s type: %s", u1.typeName, u2)
        print(...)
      end
    end)
  end
  return true
end
function TypeManager:getTypes()
  return self.types
end
function TypeManager:removeType(typeName)
  self.types[typeName] = nil
end
function TypeManager:getTypeByName(typeName)
  if typeName ~= nil then
    return self.types[typeName]
  end
end
local v1 = TypeManager.new("vehicle", "vehicleTypes", "dataS/vehicleTypes.xml", g_specializationManager)
g_vehicleTypeManager = v1
v1 = TypeManager.new("placeable", "placeableTypes", "dataS/placeableTypes.xml", g_placeableSpecializationManager)
g_placeableTypeManager = v1
