-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

OptionToggleElement = {}
local OptionToggleElement_mt = Class(OptionToggleElement, MultiTextOptionElement)
function OptionToggleElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.dataSouce = nil
  return v2
end
function OptionToggleElement:delete()
  self.dataSource = nil
  local v2 = v2:superClass()
  v2.delete(self)
end
function OptionToggleElement:setDataSource(dataSource)
  self.dataSource = dataSource
  self:updateTitle()
end
function OptionToggleElement:updateTitle()
  local v2 = v2:getString()
  self.texts = {}
  self:setState(1)
end
function OptionToggleElement:onRightButtonClicked(steps, noFocus)
  if self.dataSource ~= nil then
    v3:setNextItem()
    local v4 = v4:getString()
    self.texts[1] = v4
  end
  v4 = v4:superClass()
  v4.onRightButtonClicked(self, steps, noFocus)
end
function OptionToggleElement:onLeftButtonClicked(steps, noFocus)
  if self.dataSource ~= nil then
    v3:setPreviousItem()
    local v4 = v4:getString()
    self.texts[1] = v4
  end
  v4 = v4:superClass()
  v4.onLeftButtonClicked(self, steps, noFocus)
end
