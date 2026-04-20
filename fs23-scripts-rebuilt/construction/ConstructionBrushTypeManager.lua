-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushTypeManager = {}
local ConstructionBrushTypeManager_mt = Class(ConstructionBrushTypeManager, AbstractManager)
function ConstructionBrushTypeManager.new(customMt)
  local v2 = v2:superClass()
  if not customMt then
  end
  return v1(v2)
end
function ConstructionBrushTypeManager:initDataStructures()
  self.brushTypes = {}
  self.brushTypesSorted = {}
end
function ConstructionBrushTypeManager.loadMapData(v0)
  local v2 = v2:superClass()
  v2.loadMapData(v0)
  local v1 = XMLFile.load("BrushTypesXML", "dataS/constructionBrushTypes.xml")
  if v1 ~= nil then
    v1:iterate("constructionBrushTypes.constructionBrushType", function(v0, v1)
      local v2 = v2:getString(v1 .. "#name")
      if v2 == nil then
        return
      end
      local v3 = v3:getString(v1 .. "#className")
      local v4 = v4:getString(v1 .. "#filename")
      v5:addBrushType(v2, v3, v4, "")
    end)
    v1:delete()
    Logging.info("  Loaded construction brush types")
  end
  return true
end
function ConstructionBrushTypeManager:addBrushType(typeName, className, filename, customEnvironment)
  local v5 = ClassUtil.getIsValidClassName(typeName)
  if not v5 then
    local v10 = tostring(typeName)
    print("Warning: Invalid construction brush typeName: " .. v10 .. ". Ignoring type!")
    return false
  end
  if self.brushTypes[typeName] ~= nil then
    v10 = tostring(typeName)
    print("Error: Construction brush type '" .. v10 .. "' already exists. Ignoring it!")
    return false
  end
  if className == nil then
    v10 = tostring(typeName)
    print("Error: No className specified for construction brush type '" .. v10 .. "'. Ignoring it!")
    return false
  end
  if filename == nil then
    v10 = tostring(typeName)
    print("Error: No filename specified for construction brush type '" .. v10 .. "'. Ignoring it!")
    return false
  end
  source(filename, customEnvironment)
  if customEnvironment ~= "" then
    local v9 = tostring(typeName)
    print("  Register construction brush type: " .. v9)
  end
  self.brushTypes[typeName] = v5
  table.insert(self.brushTypesSorted, v5)
  return true
end
function ConstructionBrushTypeManager:getClassObjectByTypeName(typeName)
  if typeName ~= nil and self.brushTypes[typeName] ~= nil then
    return ClassUtil.getClassObject(self.brushTypes[typeName].className)
  end
  return nil
end
function ConstructionBrushTypeManager:initBrushTypes()
  for v4, v5 in pairs(self.brushTypesSorted) do
    local v6 = ClassUtil.getClassObject(v5.className)
    local v7 = rawget(v6, "initBrushType")
    if not v7 then
      continue
    end
    v6.initBrushType()
  end
end
local v1 = ConstructionBrushTypeManager.new()
g_constructionBrushTypeManager = v1
