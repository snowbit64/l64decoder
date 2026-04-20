-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DigitalDisplay = {}
local DigitalDisplay_mt = Class(DigitalDisplay)
function DigitalDisplay.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function DigitalDisplay:load(components, xmlFile, key, i3dMappings)
  local v5 = xmlFile:getValue(key .. "#baseNode", nil, components, i3dMappings)
  self.baseNode = v5
  if self.baseNode ~= nil then
    v5 = xmlFile:getValue(key .. "#precision", 0)
    self.precision = v5
    v5 = xmlFile:getValue(key .. "#showZero", true)
    self.showZero = v5
    return true
  end
  return false
end
function DigitalDisplay:setValue(value)
  if self.baseNode ~= nil then
    local v4 = math.max(0, value)
    I3DUtil.setNumberShaderByValue(self.baseNode, v4, self.precision, self.showZero)
  end
end
function DigitalDisplay:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#baseNode", "Base node", false)
  self:register(XMLValueType.INT, v1 .. "#precision", "Precision", 0)
  self:register(XMLValueType.BOOL, v1 .. "#showZero", "Show zeros or hide them", true)
end
