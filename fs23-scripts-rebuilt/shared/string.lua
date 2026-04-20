-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

string.getVector = function(self)
  if self == nil then
    return nil
  end
  local v1 = self:trim()
  v1 = v1:split(" ")
  -- TODO: structure LOP_FORNPREP (pc 14, target 26)
  if v1[1] == "-" then
  else
    local v5 = tonumber(v1[1])
  end
  v1[v4] = v5
  -- TODO: structure LOP_FORNLOOP (pc 25, target 15)
  return unpack(v1)
end
string.getVectorN = function(self, v1)
  if self == nil then
    return nil
  end
  local v2 = self:trim()
  v2 = v2:split(" ")
  if not v1 then
  end
  if v3 == 0 then
    return nil
  end
  if #v2 ~= v1 then
    print("Error: Invalid " .. v1 .. "-vector '" .. self .. "'")
    return nil
  end
  -- TODO: structure LOP_FORNPREP (pc 38, target 55)
  if v2[1] == "-" then
  else
    local v9 = tonumber(v2[1])
  end
  table.insert(v3, v9)
  -- TODO: structure LOP_FORNLOOP (pc 54, target 39)
  return v3
end
string.getRadians = function(self, v1)
  local v2 = self:getVectorN(v1)
  if v2 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 18)
    local v6 = math.rad(v2[1] or 0)
    v2[1] = v6
    -- TODO: structure LOP_FORNLOOP (pc 17, target 10)
  end
  return v2
end
string.parseList = function(self, v1, v2)
  local v3 = self:split(v1)
  if v3 ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 15)
    local v7 = v2(v3[1])
    v3[1] = v7
    -- TODO: structure LOP_FORNLOOP (pc 14, target 10)
  end
  return v3
end
string.split = function(v0, v1)
  if v0 ~= nil and v0 ~= "" then
    local v4, v5 = string.find(v0, v1, 1, true)
    while v4 ~= nil do
      local v8 = string.sub(v0, v3, v4 - 1)
      table.insert(...)
      local v6, v7 = string.find(v0, v1, v5 + 1, true)
    end
    v8 = string.sub(v0, v3)
    table.insert(...)
  end
  return v2
end
string.startsWith = function(self, v1)
  local v6 = v1:len()
  local v3 = self:sub(...)
  if v3 ~= v1 then
  end
  return true
end
string.endsWith = function(self, v1)
  local v7 = self:len()
  local v8 = v1:len()
  local v3 = self:sub(v7 - v8 + 1)
  if v3 ~= v1 then
  end
  return true
end
string.trim = function(self)
  local v1 = self:find("%S")
  if v1 then
    local v2 = self:match(".*%S", v1)
    -- if v2 then goto L12 end
  end
  return ""
end
string.findLast = function(self, v1)
  local v2 = string.len(self)
  while 0 < v2 do
    local v4 = self:find(v1, v3 + 1)
    if v4 == nil then
      return v3
    else
    end
  end
  return v3
end
string.contains = function(self, v1)
  local v3 = self:find(v1)
  if v3 == nil then
  end
  return true
end
string.combine = function(self, v1, v2)
  -- TODO: structure LOP_FORNPREP (pc 4, target 17)
  if self[1] ~= v2 and "" ~= "" then
  end
  -- TODO: structure LOP_FORNLOOP (pc 16, target 5)
  return v3
end
string.toList = function(self, v1)
  for v6 in self:gmatch(v1 or ".") do
    table.insert(v2, v6)
  end
  return v2
end
string.maskToFormat = function(self)
  local v1 = self:gsub("%%", "=")
  local v8 = v1:len()
  -- TODO: structure LOP_FORNPREP (pc 16, target 50)
  v8 = v1:sub(1, 1)
  if v8 == "0" then
  else
    if 0 < 0 then
      if true then
      else
      end
      local v9 = v9(v10, v4)
    end
    v9 = self:sub(v7, v7)
  end
  -- TODO: structure LOP_FORNLOOP (pc 49, target 17)
  if 0 < v4 then
    if v3 then
    else
    end
    local v6 = v6(v7, v4)
  end
  local v5 = v1:gsub("=", "%%%%")
  return v5, v2
end
StringUtil = {}
setmetatable(StringUtil, {__index = function()
  printCallstack()
  print("StringUtil is obsolete! (replaced by: string.getVector, string.getVectorN, string.getRadians, string.parseList, string.split, string.startsWith, string.endsWith, string.trim, string.findLast, string.contains)")
end})
