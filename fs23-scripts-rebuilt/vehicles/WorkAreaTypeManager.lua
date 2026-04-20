-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WorkAreaTypeManager = {}
WorkAreaType = nil
local WorkAreaTypeManager_mt = Class(WorkAreaTypeManager, AbstractManager)
function WorkAreaTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function WorkAreaTypeManager:initDataStructures()
  self.workAreaTypes = {}
  self.workAreaTypeNameToInt = {}
  self.workAreaTypeNameToDesc = {}
  WorkAreaType = self.workAreaTypeNameToInt
end
function WorkAreaTypeManager:addWorkAreaType(name, attractWildlife)
  if name == nil then
    Logging.error("WorkArea name missing!")
    return
  end
  if self.workAreaTypeNameToInt[name] ~= nil then
    Logging.error("WorkArea name '%s' is already in use!", name)
    return
  end
  local v3 = name:upper()
  local v4 = Utils.getNoNil(attractWildlife, false)
  self.workAreaTypeNameToInt[v3] = {name = v3, index = #self.workAreaTypes + 1, attractWildlife = v4}.index
  self.workAreaTypeNameToDesc[v3] = {name = v3, index = #self.workAreaTypes + 1, attractWildlife = v4}
  table.insert(self.workAreaTypes, {name = v3, index = #self.workAreaTypes + 1, attractWildlife = v4})
  print("  Register workAreaType '" .. v3 .. "'")
end
function WorkAreaTypeManager:getWorkAreaTypeNameByIndex(index)
  if self.workAreaTypes[index] then
    return self.workAreaTypes[index].name
  end
  return nil
end
function WorkAreaTypeManager:getWorkAreaTypeIndexByName(name)
  if name ~= nil then
    local v4 = name:upper()
    return self.workAreaTypeNameToInt[v4]
  end
  return nil
end
function WorkAreaTypeManager:getConfigurationDescByName(name)
  if name ~= nil then
    local v4 = name:upper()
    return self.workAreaTypeNameToDesc[v4]
  end
  return nil
end
function WorkAreaTypeManager:getWorkAreaTypeByIndex(index)
  return self.workAreaTypes[index]
end
local v1 = WorkAreaTypeManager.new()
g_workAreaTypeManager = v1
