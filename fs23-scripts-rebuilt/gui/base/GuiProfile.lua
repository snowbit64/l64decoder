-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiProfile = {}
local GuiProfile_mt = Class(GuiProfile)
function GuiProfile.new(profiles, traits)
  local v2 = setmetatable({}, u0)
  v2.values = {}
  v2.name = ""
  v2.profiles = profiles
  v2.traits = traits
  v2.parent = nil
  return v2
end
function GuiProfile:loadFromXML(xmlFile, key, presets, isTrait, isVariant)
  local v6 = getXMLString(xmlFile, key .. "#name")
  if v6 == nil then
    return false
  end
  self.name = v6
  self.isTrait = isTrait or false
  local v7 = getXMLString(xmlFile, key .. "#extends")
  self.parent = v7
  self.isVariant = isVariant
  if self.parent == self.name then
    error("Profile " .. v6 .. " extends itself")
  end
  if not isTrait then
    v7 = getXMLString(xmlFile, key .. "#with")
    if v7 ~= nil then
      local v8 = v7:split(" ")
      -- TODO: structure LOP_FORNPREP (pc 57, target 87)
      if self.traits[v8[#v8]] ~= nil then
        for v17, v18 in pairs(self.traits[v8[#v8]].values) do
          self.values[v17] = v18
        end
      else
        print("Warning: Trait-profile '" .. v8[#v8] .. "' not found for trait '" .. self.name .. "'")
      end
      -- TODO: structure LOP_FORNLOOP (pc 86, target 58)
    end
  end
  while true do
    v9 = getXMLString(xmlFile, key .. ".Value(" .. v7 .. ")" .. "#name")
    v10 = getXMLString(xmlFile, key .. ".Value(" .. v7 .. ")" .. "#value")
    if not (v9 ~= nil) then
      break
    end
    if not (v10 ~= nil) then
      break
    end
    v11 = v10:startsWith("$preset_")
    if v11 then
      v11 = string.gsub(v10, "$preset_", "")
      if presets[v11] ~= nil then
      else
        print("Warning: Preset '" .. v11 .. "' is not defined in GuiProfile!")
      end
    end
    self.values[v9] = v10
  end
  return true
end
function GuiProfile:getValue(name, default)
  if self.values[name .. g_baseUIPostfix] ~= nil and self.values[name .. g_baseUIPostfix] ~= "nil" then
    return self.values[name .. g_baseUIPostfix]
  end
  if self.values[name] ~= nil and self.values[name] ~= "nil" then
    return self.values[name]
  end
  if self.parent ~= nil then
    if self.isVariant then
    else
      local v5 = v5:getProfile(self.parent)
    end
    if v4 ~= nil and v4 ~= "nil" then
      v5 = v4:getValue(name, default)
      return v5
    end
    print("Warning: Parent-profile '" .. self.parent .. "' not found for profile '" .. self.name .. "'")
  end
  return v3
end
function GuiProfile:getBool(name, default)
  local value = self:getValue(name)
  if value ~= nil and value ~= "nil" then
    local v5 = value:lower()
    if v5 ~= "true" then
    end
  end
  return v4
end
function GuiProfile:getNumber(name, default)
  local value = self:getValue(name)
  if value ~= nil and value ~= "nil" then
    local v5 = tonumber(value)
  end
  return v4
end
