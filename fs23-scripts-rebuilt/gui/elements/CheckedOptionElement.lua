-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CheckedOptionElement = {STATE_UNCHECKED = 1, STATE_CHECKED = 2}
local CheckedOptionElement_mt = Class(CheckedOptionElement, MultiTextOptionElement)
function CheckedOptionElement.new(target, custom_mt)
  if not custom_mt then
  end
  return v2(v3, v4)
end
function CheckedOptionElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  if #self.elements == 3 then
    local v5 = v5:getText("ui_off")
    local v6 = v6:getText("ui_on")
    self:setTexts({})
    self:setIsChecked(self.isChecked)
  end
end
function CheckedOptionElement:getIsChecked()
  if self.state ~= CheckedOptionElement.STATE_CHECKED then
  end
  return true
end
function CheckedOptionElement:setIsChecked(isChecked)
  if isChecked then
    self:setState(CheckedOptionElement.STATE_CHECKED)
    return
  end
  self:setState(CheckedOptionElement.STATE_UNCHECKED)
end
