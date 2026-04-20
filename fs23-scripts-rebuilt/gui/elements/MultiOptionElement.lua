-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MultiOptionElement = {}
local MultiOptionElement_mt = Class(MultiOptionElement, MultiTextOptionElement)
function MultiOptionElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.options = {}
  return v2
end
function MultiOptionElement.loadFromXML(v0, v1, v2)
  local v4 = v4:superClass()
  v4.loadFromXML(v0, v1, v2)
end
function MultiOptionElement.loadProfile(v0, v1, v2)
  local v4 = v4:superClass()
  v4.loadProfile(v0, v1, v2)
end
function MultiOptionElement.copyAttributes(v0, v1)
  local v3 = v3:superClass()
  v3.copyAttributes(v0, v1)
end
function MultiOptionElement.setState(v0, v1, v2)
  local v4 = v4:superClass()
  v4.setState(v0, v1, v2)
end
function MultiOptionElement:getState()
  return self.state
end
function MultiOptionElement:setOptions(options)
  if not options then
  end
  self.options = v2
  self:updateContents()
end
function MultiOptionElement:updateContents()
  for v5, v6 in ipairs(self.options) do
    table.insert(v1, v6.title)
  end
  self:setTexts(v1)
  if #self.options ~= 0 then
  end
  self:setDisabled(true)
end
function MultiOptionElement:raiseClickCallback(v)
  if self.options[self.state] ~= nil then
    self:raiseCallback("onClickCallback", self.options[self.state], self, v)
  end
end
