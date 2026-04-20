-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiMixin = {}
local GuiMixin_mt = Class(GuiMixin)
function GuiMixin.new(class, mixinType)
  if class == nil then
  end
  if mixinType == nil then
  end
  local v2 = setmetatable({}, class)
  v2.mixinType = mixinType
  return v2
end
function GuiMixin:addTo(guiElement)
  if not guiElement[self.mixinType] then
    guiElement[self.mixinType] = self
    guiElement.hasIncluded = self.hasIncluded
    return true
  end
  return false
end
function GuiMixin:hasIncluded(v1)
  if self[v1] == nil then
  end
  return true
end
function GuiMixin:cloneMixin(v1, v2)
  self:clone(v1, v2)
end
function GuiMixin.clone(v0, v1, v2)
end
