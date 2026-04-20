-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SpecializationUtil = {}
function SpecializationUtil:raiseEvent(v1, ...)
  if self.eventListeners[v1] == nil then
    local v9 = tostring(v1)
    v9 = tostring(self["type"].name)
    printError("Error: Event '" .. v9 .. "' is not registered for type '" .. v9 .. "'!")
    return
  end
  for v5, v6 in ipairs(self.eventListeners[v1]) do
    v6[v1](...)
  end
end
function SpecializationUtil:registerEvent(v1)
  if self.functions[v1] == nil and self.events[v1] == nil and v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000002 -> L17
  end
  printCallstack()
  if self.functions[v1] ~= nil then
  end
  local v10 = tostring(v1)
  v10 = tostring(self.name)
  assert(true, "Error: Event '" .. v10 .. "' already registered as function in type '" .. v10 .. "'!")
  if self.events[v1] ~= nil then
  end
  v10 = tostring(v1)
  v10 = tostring(self.name)
  assert(true, "Error: Event '" .. v10 .. "' already registered as event in type '" .. v10 .. "'!")
  if v1 ~= nil and v1 == "" then
  end
  local v8 = tostring(v1)
  assert(v3, "Error: Event '" .. v8 .. "' is 'nil' or empty!")
  self.events[v1] = v1
  self.eventListeners[v1] = {}
end
function SpecializationUtil:registerFunction(v1, v2)
  if self.functions[v1] == nil and self.events[v1] == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L15
  end
  printCallstack()
  if self.functions[v1] ~= nil then
  end
  local v11 = tostring(v1)
  v11 = tostring(self.name)
  assert(true, "Error: Function '" .. v11 .. "' already registered as function in type '" .. v11 .. "'!")
  if self.events[v1] ~= nil then
  end
  v11 = tostring(v1)
  v11 = tostring(self.name)
  assert(true, "Error: Function '" .. v11 .. "' already registered as event in type '" .. v11 .. "'!")
  if v2 == nil then
  end
  local v9 = tostring(v1)
  assert(true, "Error: Given reference for Function '" .. v9 .. "' is 'nil'!")
  self.functions[v1] = v2
end
function SpecializationUtil:registerOverwrittenFunction(v1, v2)
  if v2 == nil then
  end
  local v9 = tostring(v1)
  assert(true, "Error: Given reference for OverwrittenFunction '" .. v9 .. "' is 'nil'!")
  if self.functions[v1] ~= nil then
    local v4 = Utils.overwrittenFunction(self.functions[v1], v2)
    self.functions[v1] = v4
  end
end
function SpecializationUtil:registerEventListener(v1, v2)
  local v3 = ClassUtil.getClassName(v2)
  if self.eventListeners == nil then
  end
  local v10 = tostring(v3)
  assert(true, "Error: Invalid type for specialization '" .. v10 .. "'!")
  if self.eventListeners[v1] == nil then
    return
  end
  if v2[v1] == nil then
  end
  local v12 = tostring(v1)
  v12 = tostring(v3)
  assert(true, "Error: Event listener function '" .. v12 .. "' not defined in specialization '" .. v12 .. "'!")
  for v8, v9 in pairs(self.eventListeners[v1]) do
    if not (v9 == v2) then
      continue
    end
    break
  end
  local v13 = tostring(v3)
  assert(not v4, "Error: Eventlistener for '" .. v1 .. "' already registered in specialization '" .. v13 .. "'!")
  table.insert(self.eventListeners[v1], v2)
end
function SpecializationUtil:removeEventListener(v1, v2)
  if self.eventListeners[v1] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 8, target 25)
    local v7 = ClassUtil.getClassName(self.eventListeners[v1][#self.eventListeners[v1]])
    local v8 = ClassUtil.getClassName(v2)
    if v7 == v8 then
      table.remove(self.eventListeners[v1], #self.eventListeners[v1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 24, target 9)
  end
end
function SpecializationUtil.hasSpecialization(v0, v1)
  for v5, v6 in pairs(v1) do
    if not (v6 == v0) then
      continue
    end
    return true
  end
  return false
end
