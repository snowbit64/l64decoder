-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BrandColorManager = {}
local BrandColorManager_mt = Class(BrandColorManager, AbstractManager)
function BrandColorManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function BrandColorManager:initDataStructures()
  self.brandColors = {}
  self:loadDefaultTypes()
end
function BrandColorManager:loadDefaultTypes()
  local xmlFile = loadXMLFile("brandColors", "data/shared/brandColors.xml")
  if xmlFile ~= 0 then
    self:loadBrandColors(xmlFile, true)
    delete(xmlFile)
  end
end
function BrandColorManager:loadBrandColors(xmlFile, isBaseType)
  while true do
    v4 = string.format("brandColors.color(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    self:loadBrandColorFromXML(xmlFile, v4)
  end
  return true
end
function BrandColorManager:loadBrandColorFromXML(xmlFile, key, isBaseType)
  local v4 = getXMLString(xmlFile, key .. "#name")
  local v5 = getXMLString(xmlFile, key .. "#value")
  if v4 ~= nil and v5 ~= nil then
    return self:addBrandColor(v4, v5, isBaseType)
  end
  Logging.warning("Failed to load BrandColor '%s' ", key)
end
function BrandColorManager:addBrandColor(name, value, isBaseType)
  local v4 = ClassUtil.getIsValidIndexName(name)
  if not v4 then
    local v9 = tostring(name)
    print("Warning: '" .. v9 .. "' is not a valid name for a brand color. Ignoring brand color!")
    return nil
  end
  v4 = name:upper()
  if isBaseType and self.nameToBrandColor[v4] ~= nil then
    v9 = tostring(v4)
    print("Warning: BrandColor '" .. v9 .. "' already exists. Ignoring brandColor!")
    return nil
  end
  v4 = value:getVectorN(4)
  if v4 == nil then
    local v10 = tostring(name)
    print("Warning: BrandColor '" .. v10 .. "' has invalid format. Should be '1 1 1 1'. Ignoring brandColor!")
    return nil
  end
  self.brandColors[name] = v4
  return v4
end
function BrandColorManager:getBrandColorByName(name)
  if name ~= nil then
    local v2 = ClassUtil.getIsValidIndexName(name)
    if v2 then
      v2 = name:upper()
      if self.brandColors[v2] ~= nil then
        return {self.brandColors[v2][1], self.brandColors[v2][2], self.brandColors[v2][3], self.brandColors[v2][4]}
      end
    end
  end
  return nil
end
function BrandColorManager.loadColorAndMaterialFromXML(v0, v1, v2, v3, v4, v5, v6)
  local v7 = v1:getValue(v4 .. "#" .. (v5 or "value"), nil, true)
  if v7 == nil then
    return nil
  end
  local v9 = v1:getValue(v4 .. "#material")
  if v9 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L31
    local v10, v11, v12, v13 = getShaderParameter(v2, v3)
  else
    v10 = tonumber(v9)
  end
  if not v8 and not v7[4] then
  end
  v7[4] = v10
  return v7
end
local v1 = BrandColorManager.new()
g_brandColorManager = v1
