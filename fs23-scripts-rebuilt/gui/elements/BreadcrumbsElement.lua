-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BreadcrumbsElement = {}
local BreadcrumbsElement_mt = Class(BreadcrumbsElement, FlowLayoutElement)
function BreadcrumbsElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.crumbs = {}
  return v2
end
function BreadcrumbsElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.textTemplate = src.textTemplate
  self.arrowTemplate = src.arrowTemplate
  self.ownsTemplates = false
end
function BreadcrumbsElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if self.textTemplate ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L50
  end
  self.ownsTemplates = true
  local v1 = self:getFirstDescendant(function(self)
    return self:isa(TextBackdropElement)
  end)
  self.textTemplate = v1
  if self.textTemplate ~= nil then
    v1:unlinkElement()
  end
  v1 = self:getFirstDescendant(function(self)
    return self:isa(BitmapElement)
  end)
  self.arrowTemplate = v1
  if self.arrowTemplate ~= nil then
    v1:unlinkElement()
  end
end
function BreadcrumbsElement:delete()
  if self.ownsTemplates then
    if self.textTemplate ~= nil then
      v1:delete()
    end
    if self.arrowTemplate ~= nil then
      v1:delete()
    end
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function BreadcrumbsElement:setBreadcrumbs(crumbs)
  self.crumbs = crumbs
  self:updateElements()
end
function BreadcrumbsElement:updateElements()
  -- TODO: structure LOP_FORNPREP (pc 6, target 14)
  v5:delete()
  -- TODO: structure LOP_FORNLOOP (pc 13, target 7)
  -- TODO: structure LOP_FORNPREP (pc 20, target 66)
  if 1 == #self.crumbs then
  elseif 1 == #self.crumbs - 1 then
  else
  end
  local v9 = v9:clone(self)
  v9:applyProfile(v7)
  v10:setText(v6)
  local v10 = v10:clone(self)
  v10:applyProfile(v8)
  -- TODO: structure LOP_FORNLOOP (pc 65, target 21)
  self:invalidateLayout()
end
