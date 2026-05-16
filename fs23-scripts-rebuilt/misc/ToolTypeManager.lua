-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ToolType = nil
ToolTypeManager = {}
local ToolTypeManager_mt = Class(ToolTypeManager, AbstractManager)
function ToolTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function ToolTypeManager:initDataStructures()
  self.indexToName = {}
  self.nameToInt = {}
  ToolType = self.nameToInt
end
function ToolTypeManager:loadMapData()
  local v2 = v2:superClass()
  v2.loadMapData(self)
  self:addToolType("undefined")
  self:addToolType("dischargeable")
  self:addToolType("pallet")
  self:addToolType("trigger")
  self:addToolType("bale")
  return true
end
function ToolTypeManager:addToolType(name)
  local v2 = string.upper(name)
  v2 = ClassUtil.getIsValidIndexName(v2)
  if not v2 then
    local v7 = tostring(v2)
    print("Warning: '" .. v7 .. "' is not a valid name for a toolType. Ignoring toolType!")
    return nil
  end
  if ToolType[name] == nil then
    table.insert(self.indexToName, name)
    self.nameToInt[name] = #self.indexToName
  end
  return ToolType[name]
end
function ToolTypeManager:getToolTypeNameByIndex(index)
  if self.indexToName[index] ~= nil then
    return self.indexToName[index]
  end
  return "UNDEFINED"
end
function ToolTypeManager:getToolTypeIndexByName(name)
  local v2 = name:upper()
  if self.nameToInt[v2] ~= nil then
    return self.nameToInt[v2]
  end
  return ToolType.UNDEFINED
end
function ToolTypeManager:getNumberOfToolTypes()
  return #self.indexToName
end
local v1 = ToolTypeManager.new()
g_toolTypeManager = v1
