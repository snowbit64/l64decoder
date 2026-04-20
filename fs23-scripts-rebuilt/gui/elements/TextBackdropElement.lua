-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TextBackdropElement = {}
local TextBackdropElement_mt = Class(TextBackdropElement, BitmapElement)
function TextBackdropElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.padding = {0, 0, 0, 0}
  return v2
end
function TextBackdropElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#padding")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.padding)
  self.padding = v3
end
function TextBackdropElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  v4 = profile:getValue("padding")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.padding)
  self.padding = v3
end
function TextBackdropElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  local v2 = table.copy(src.padding)
  self.padding = v2
end
function TextBackdropElement.clone(v0, v1, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.clone(v0, v1, v2, v3)
  v4:installTextElement()
  return v4
end
function TextBackdropElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  self:installTextElement()
end
function TextBackdropElement:installTextElement()
  if 0 >= #self.elements then
  end
  v1(true)
  self.textElement = self.elements[1]
  local v2 = v2:isa(TextElement)
  assertWithCallstack(...)
  v2 = Utils.overwrittenFunction(self.textElement.setSize, function(self, v1, v2, v3)
    v1(self, v2, v3)
    v4:updateSizeAndContents(v2 * g_aspectScaleX)
  end)
  self.textElement.setSize = v2
  self:updateSizeAndContents(self.textElement.absSize[1])
end
function TextBackdropElement:updateSizeAndContents(textElementWidth)
  self:setSize(textElementWidth + self.padding[1] + self.padding[3], nil)
  v3:setPosition(self.padding[1])
end
