-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ListItemElement = {}
local ListItemElement_mt = Class(ListItemElement, BitmapElement)
function ListItemElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.mouseEntered = false
  v2.allowSelected = true
  v2.autoSelectChildren = false
  v2.handleFocus = false
  v2.hideSelection = false
  v2.alternateBackgroundColor = nil
  v2.attributes = {}
  return v2
end
function ListItemElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLBool(xmlFile, key .. "#allowSelected")
  local v3 = Utils.getNoNil(v4, self.allowSelected)
  self.allowSelected = v3
  v4 = getXMLBool(xmlFile, key .. "#autoSelectChildren")
  v3 = Utils.getNoNil(v4, self.autoSelectChildren)
  self.autoSelectChildren = v3
  v4 = getXMLBool(xmlFile, key .. "#hideSelection")
  v3 = Utils.getNoNil(v4, self.hideSelection)
  self.hideSelection = v3
  self:addCallback(xmlFile, key .. "#onFocus", "onFocusCallback")
  self:addCallback(xmlFile, key .. "#onLeave", "onLeaveCallback")
  self:addCallback(xmlFile, key .. "#onClick", "onClickCallback")
end
function ListItemElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getBool("allowSelected", self.allowSelected)
  self.allowSelected = v3
  v3 = profile:getBool("autoSelectChildren", self.autoSelectChildren)
  self.autoSelectChildren = v3
  v3 = profile:getBool("hideSelection", self.hideSelection)
  self.hideSelection = v3
  if not self.alternateBackgroundLoaded then
    v4 = GuiOverlay.getOverlayColor(self.overlay, GuiOverlay.STATE_NORMAL)
    v3 = table.copy(...)
    self.backgroundColor = v3
    v4 = profile:getValue("alternateBackgroundColor")
    v3 = GuiUtils.getColorArray(...)
    self.alternateBackgroundColor = v3
    self.alternateBackgroundLoaded = true
  end
end
function ListItemElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.allowSelected = src.allowSelected
  self.isSectionHeader = src.isSectionHeader
  self.autoSelectChildren = src.autoSelectChildren
  self.hideSelection = src.hideSelection
  self.backgroundColor = src.backgroundColor
  self.alternateBackgroundColor = src.alternateBackgroundColor
  self.alternateBackgroundLoaded = src.alternateBackgroundLoaded
  self.onLeaveCallback = src.onLeaveCallback
  self.onFocusCallback = src.onFocusCallback
  self.onClickCallback = src.onClickCallback
end
function ListItemElement:getIsSelected()
  local v1 = self:getOverlayState()
  if v1 == GuiOverlay.STATE_SELECTED then
    return true
  end
  local v2 = v2:superClass()
  v1 = v2.getIsSelected(self)
  return v1
end
function ListItemElement:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self:reset()
end
function ListItemElement.clone(v0, v1, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.clone(v0, v1, v2, v3)
  v4:findAllAttributes()
  return v4
end
function ListItemElement:setSelected(selected)
  if selected and not self.hideSelection then
    if self.allowSelected then
      self:setOverlayState(GuiOverlay.STATE_SELECTED)
      return
    end
    self:setOverlayState(GuiOverlay.STATE_FOCUSED)
    return
  end
  local v2 = self:getOverlayState()
  if v2 ~= GuiOverlay.STATE_HIGHLIGHTED then
    if self.disabled then
      self:setOverlayState(GuiOverlay.STATE_DISABLED)
      return
    end
    self:setOverlayState(GuiOverlay.STATE_NORMAL)
  end
end
function ListItemElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsVisible()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    if not eventUsed then
      v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if v7 then
        if not isDown and not isUp then
          v7 = self:getOverlayState()
          if v7 ~= GuiOverlay.STATE_SELECTED and self.handleFocus then
            v7:setHighlight(self)
          end
          if not self.mouseEntered then
            self.mouseEntered = true
            if self.handleFocus then
              self:raiseCallback("onFocusCallback", self)
            end
          end
        end
        if isDown and button == Input.MOUSE_BUTTON_LEFT then
          self.mouseDown = true
        end
        -- if not v4 then goto L133 end
        -- if v5 ~= Input.MOUSE_BUTTON_LEFT then goto L133 end
        -- if not v0.mouseDown then goto L133 end
        self.mouseDown = false
        self:raiseCallback("onClickCallback", self)
        return eventUsed
      end
    end
    if self.mouseEntered then
      self.mouseEntered = false
      if self.handleFocus then
        self:raiseCallback("onLeaveCallback", self)
      end
    end
    self.mouseDown = false
    if not self.focusActive and self.handleFocus then
      v7 = self:getOverlayState()
      if v7 ~= GuiOverlay.STATE_SELECTED then
        v7:unsetHighlight(self)
      end
    end
  end
  return eventUsed
end
function ListItemElement:touchEvent(v1, v2, v3, v4, v5, v6)
  local v7 = self:getIsVisible()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.touchEvent(self, v1, v2, v3, v4, v5, v6)
    if v7 then
    end
    if not v6 then
      v7 = GuiUtils.checkOverlayOverlap(v1, v2, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
      if v7 then
        if not v3 and not v4 then
          v7 = self:getOverlayState()
          if v7 ~= GuiOverlay.STATE_SELECTED and self.handleFocus then
            v7:setHighlight(self)
          end
        end
        if v3 then
          self.touchDown = true
        end
        -- if not v4 then goto L97 end
        -- if not v0.touchDown then goto L97 end
        self.touchDown = false
        self:raiseCallback("onClickCallback", self)
        return v6
      end
    end
    self.touchDown = false
    if not self.focusActive and self.handleFocus then
      v7 = self:getOverlayState()
      if v7 ~= GuiOverlay.STATE_SELECTED then
        v7:unsetHighlight(self)
      end
    end
  end
  return v6
end
function ListItemElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  self:findAllAttributes()
end
function ListItemElement:getFocusTarget(incomingDirection, moveDirection)
  if self.autoSelectChildren then
    local v4 = v4:superClass()
    return v4.getFocusTarget(self, incomingDirection, moveDirection)
  end
  return self
end
function ListItemElement:findAllAttributes()
  function(self)
    -- TODO: structure LOP_FORNPREP (pc 3, target 19)
    if self[1].name ~= nil then
      u0.attributes[self[1].name] = self[1]
    end
    u1(v4.elements)
    -- TODO: structure LOP_FORNLOOP (pc 18, target 4)
  end(self.elements)
end
function ListItemElement:getAttribute(name)
  return self.attributes[name]
end
function ListItemElement:setAlternating(isAlternate)
  if self.alternateBackgroundColor == nil then
    return
  end
  if isAlternate then
    local v5 = unpack(self.alternateBackgroundColor)
    self:setImageColor(...)
    return
  end
  v5 = unpack(self.backgroundColor)
  self:setImageColor(...)
end
