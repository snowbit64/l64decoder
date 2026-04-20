-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ToggleButtonElement = {}
local ToggleButtonElement_mt = Class(ToggleButtonElement, BitmapElement)
function ToggleButtonElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = BitmapElement.new(target, custom_mt)
  v2.isChecked = false
  return v2
end
function ToggleButtonElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
  local v6 = getXMLBool(xmlFile, key .. "#isChecked")
  local v5 = Utils.getNoNil(v6, self.isChecked)
  self:setIsChecked(...)
end
function ToggleButtonElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v5 = profile:getBool("isChecked", self.isChecked)
  self:setIsChecked(...)
end
function ToggleButtonElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.isChecked = src.isChecked
  self.onClickCallback = src.onClickCallback
end
function ToggleButtonElement:setIsChecked(isChecked)
  self.isChecked = isChecked
  if self.elements[1] ~= nil then
    v2:setVisible(self.isChecked)
  end
  if self.elements[2] ~= nil then
    v2:setVisible(not self.isChecked)
  end
end
function ToggleButtonElement:addElement(element)
  local v3 = v3:superClass()
  v3.addElement(self, element)
  local v2 = table.getn(self.elements)
  if v2 <= 2 then
    element.target = self
    element:setCallback("onClickCallback", "onButtonClicked")
    self:setIsChecked(self.isChecked)
    self:setDisabled(self.disabled)
  end
end
function ToggleButtonElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2])
      -- if not v7 then goto L30 end
      v7:setHighlight(self)
    else
      v7:unsetHighlight(self)
    end
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    return v7
  end
  return false
end
function ToggleButtonElement:onButtonClicked()
  self:setIsChecked(not self.isChecked)
  if self.onClickCallback ~= nil then
    if self.target ~= nil then
      self.onClickCallback(self.target, self, self.isChecked)
      return
    end
    self.onClickCallback(self, self.isChecked)
  end
end
function ToggleButtonElement:canReceiveFocus()
  if not self.disabled then
    local v3 = self:getIsVisible()
  end
  return not v2
end
function ToggleButtonElement.getFocusTarget(v0)
  return v0
end
function ToggleButtonElement:onFocusLeave()
  if self.elements[1] ~= nil then
    v1:onFocusLeave()
  end
  if self.elements[2] ~= nil then
    v1:onFocusLeave()
  end
end
function ToggleButtonElement:onFocusEnter()
  if self.elements[1] ~= nil then
    v1:onFocusEnter()
  end
  if self.elements[2] ~= nil then
    v1:onFocusEnter()
  end
end
function ToggleButtonElement:onFocusActivate()
  self:onButtonClicked()
end
