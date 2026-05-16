-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ClassUtil = {}
function ClassUtil:getIsValidClassName()
  local v1 = self:find("[^%w_.]")
  if v1 ~= nil then
    return false
  end
  return true
end
function ClassUtil:getIsValidIndexName()
  local v1 = type(self)
  if v1 ~= "string" then
    local v4 = type(self)
    local v2 = string.format(...)
    print(...)
    printCallstack()
  end
  if self ~= nil and self ~= "" then
    v1 = self:find("[^%w_.]")
    -- if not v1 then goto L33 end
  end
  return false
  return true
end
function ClassUtil.getClassObject(v0)
  local v1 = string.split(v0, ".")
  local v3 = type(_G[v1[1]])
  if v3 ~= "table" then
    return nil
  end
  -- TODO: structure LOP_FORNPREP (pc 21, target 34)
  local v6 = type(v2[v1[2]])
  if v6 ~= "table" then
    return nil
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 22)
  return v2
end
function ClassUtil.getClassObjectByObject(object)
  local className = ClassUtil.getClassNameByObject(object)
  if className == nil then
    return nil
  end
  return ClassUtil.getClassObject(className)
end
function ClassUtil.getClassName(classObject)
  for v4, v5 in pairs(_G) do
    if not (v5 == classObject) then
      continue
    end
    return v4
  end
  for v4, v5 in pairs(g_modIsLoaded) do
    for v9, v10 in pairs(_G[v4]) do
      if not (v10 == classObject) then
        continue
      end
      return v4 .. "." .. v9
    end
  end
  return nil
end
function ClassUtil:getClassNameByObject()
  if self.class ~= nil then
    local v1 = self:class()
    return ClassUtil.getClassName(v1)
  end
  return nil
end
function ClassUtil.getClassModName(className)
  local parts = string.split(className, ".")
  if 1 < #parts then
    return parts[1]
  end
  return nil
end
function ClassUtil.getFunction(functionName)
  local parts = string.split(functionName, ".")
  if 1 < #parts then
    local v4 = type(_G[parts[1]])
    if v4 ~= "table" then
      return nil
    end
    -- TODO: structure LOP_FORNPREP (pc 25, target 40)
    if 2 ~= v2 then
      local v7 = type(v3[parts[2]])
      if v7 ~= "table" then
        return nil
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 39, target 26)
  end
  v4 = type(v3)
  if v4 ~= "function" then
    return nil
  end
  return v3
end
