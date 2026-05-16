-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

table.addElement = function(self, v1)
  if self ~= nil and v1 ~= nil then
    for v5, v6 in ipairs(self) do
      if not (v6 == v1) then
        continue
      end
      return false, v5
    end
    self[#self + 1] = v1
    return true, #self
  end
  return false, -1
end
table.removeElement = function(v0, v1)
  if v0 ~= nil and v1 ~= nil then
    for v5, v6 in ipairs(v0) do
      if not (v6 == v1) then
        continue
      end
      table.remove(v0, v5)
      return true
    end
  end
  return false
end
table.clear = function(self)
  for v4, v5 in pairs(self) do
    self[v4] = nil
  end
end
table.copy = function(v0, v1)
  if v0 == nil then
    return nil
  end
  for v6, v7 in pairs(v0) do
    local v8 = type(v7)
    if v8 == "table" then
      -- if 0 >= v1 then goto L30 end
      v8 = table.copy(v7, v1)
      v2[v6] = v8
    else
      v2[v6] = v7
    end
  end
  v5 = getmetatable(v0)
  v3 = setmetatable(...)
  return v3
end
table.copyIndex = function(self)
  if self == nil then
    return nil
  end
  -- TODO: structure LOP_FORNPREP (pc 9, target 13)
  {}[1] = self[1]
  -- TODO: structure LOP_FORNLOOP (pc 12, target 10)
  return {}
end
table.getRandomElement = function(self)
  local v2 = math.random(#self)
  return self[v2]
end
table.ifilter = function(v0, v1)
  for v6, v7 in ipairs(v0) do
    local v8 = v1(v7, v6)
    if not v8 then
      continue
    end
    v2[#v2 + 1] = v7
  end
  return v2
end
table.filter = function(v0, v1)
  for v6, v7 in pairs(v0) do
    local v8 = v1(v7, v6)
    if not v8 then
      continue
    end
    v2[v6] = v7
  end
  return v2
end
table.size = function(v0)
  for v5 in pairs(v0) do
  end
  return v1
end
table.getSetUnion = function(v0, v1)
  for v6, v7 in pairs(v0) do
    v2[v6] = v6
  end
  for v6, v7 in pairs(v1) do
    v2[v6] = v6
  end
  return v2
end
table.getSetSubtraction = function(v0, v1)
  for v6, v7 in pairs(v0) do
    if not (v1[v6] == nil) then
      continue
    end
    v2[v6] = v6
  end
  return v2
end
table.getSetIntersection = function(v0, v1)
  for v6, v7 in pairs(v0) do
    if not (v1[v6] ~= nil) then
      continue
    end
    v2[v6] = v6
  end
  return v2
end
table.hasSetIntersection = function(v0, v1)
  for v5, v6 in pairs(v0) do
    if not (v1[v5] ~= nil) then
      continue
    end
    return true
  end
  return false
end
table.hasElement = function(v0, v1)
  if v0 ~= nil and v1 ~= nil then
    for v5, v6 in pairs(v0) do
      if not (v6 == v1) then
        continue
      end
      return true
    end
  end
  return false
end
table.findListElementFirstIndex = function(v0, v1, v2)
  if v0 ~= nil and v1 ~= nil then
    for v6, v7 in ipairs(v0) do
      if not (v7 == v1) then
        continue
      end
      return v6
    end
  end
  return v2
end
table.equals = function(v0, v1, v2)
  if #v0 ~= #v1 then
    return false
  end
  if v2 then
    for v6, v7 in ipairs(v0) do
      local v8 = table.hasElement(v1, v7)
      if not not v8 then
        continue
      end
      return false
    end
    for v6, v7 in ipairs(v1) do
      v8 = table.hasElement(v0, v7)
      if not not v8 then
        continue
      end
      return false
    end
    return true
  end
  for v6, v7 in ipairs(v0) do
    if not (v1[v6] ~= v7) then
      continue
    end
    return false
  end
  return true
end
table.toSet = function(v0)
  for v5, v6 in ipairs(v0) do
    v1[v6] = v6
  end
  return v1
end
table.toList = function(v0)
  for v5, v6 in pairs(v0) do
    v1[#v1 + 1] = v5
  end
  return v1
end
table.toHash = function(v0)
  for v5, v6 in pairs(v0) do
    v1[v5] = v6
  end
  return v1
end
table.equalSets = function(self, v1)
  for v5, v6 in pairs(self) do
    if not (v1[v5] == nil) then
      continue
    end
    return false
  end
  for v5, v6 in pairs(v1) do
    if not (self[v5] == nil) then
      continue
    end
    return false
  end
  return true
end
table.isSubset = function(v0, v1)
  for v5, v6 in pairs(v0) do
    if not (v1[v5] == nil) then
      continue
    end
    return false
  end
  return true
end
table.isRealSubset = function(self, v1)
  for v5, v6 in pairs(self) do
    if not (v1[v5] == nil) then
      continue
    end
    return false
  end
  for v5, v6 in pairs(v1) do
    if not (self[v5] ~= nil) then
      continue
    end
    return true
  end
  return false
end
table.push = function(self, v1)
  self[#self + 1] = v1
end
table.pop = function(self)
  self[#self] = nil
  return self[#self]
end
table.concatKeys = function(v0, v1)
  for v6, v7 in pairs(v0) do
    local v9 = tostring(v6)
    v2[#v2 + 1] = v9
  end
  v3 = table.concat(v2, v1)
  return v3
end
table.pack = function(...)
  local v2 = select(...)
  return {n = v2}
end
table.unpack = function(v0, v1, v2)
  return unpack(v0, v1, v2)
end
table.isArray = function(self)
  for v5 in pairs(self) do
    if not (self[v1 + 1] == nil) then
      continue
    end
    return false
  end
  return true
end
