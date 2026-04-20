-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FrameReferenceElement = {}
local FrameReferenceElement_mt = Class(FrameReferenceElement, GuiElement)
function FrameReferenceElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.referencedFrameName = ""
  return v2
end
function FrameReferenceElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#ref")
  self.referencedFrameName = v4 or ""
end
function FrameReferenceElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.referencedFrameName = src.referencedFrameName
end
