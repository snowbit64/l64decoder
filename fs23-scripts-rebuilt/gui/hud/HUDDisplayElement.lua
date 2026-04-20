-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDDisplayElement = {}
local HUDDisplayElement_mt = Class(HUDDisplayElement, HUDElement)
HUDDisplayElement.MOVE_ANIMATION_DURATION = 150
function HUDDisplayElement.new(overlay, parentHudElement, customMt)
  local v4 = v4:superClass()
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.origX = 0
  v3.origY = 0
  v3.animationState = nil
  return v3
end
function HUDDisplayElement:setVisible(isVisible, animate)
  if animate then
    local v3 = v3:getFinished()
    -- if not v3 then goto L16 end
    if isVisible then
      self:animateShow()
      -- goto L51  (LOP_JUMP +39)
    end
    self:animateHide()
  else
    v3:stop()
    local v4 = v4:superClass()
    v4.setVisible(self, isVisible)
    v3, v4 = self:getPosition()
    local v5, v6 = self:getHidingTranslation()
    if isVisible then
      self:setPosition(self.origX, self.origY)
    else
      self:setPosition(v3 + v5, v4 + v6)
    end
  end
  self.animationState = isVisible
end
function HUDDisplayElement.setScale(v0, v1)
  local v3 = v3:superClass()
  v3.setScale(v0, v1, v1)
end
function HUDDisplayElement:storeOriginalPosition()
  local v1, v2 = self:getPosition()
  self.origX = v1
  self.origY = v2
end
function HUDDisplayElement.getHidingTranslation(v0)
  return 0, -0.5
end
function HUDDisplayElement:animationSetPositionX(x)
  self:setPosition(x, nil)
end
function HUDDisplayElement:animationSetPositionY(y)
  self:setPosition(nil, y)
end
function HUDDisplayElement:animateHide()
  local v1, v2 = self:getHidingTranslation()
  local v3, v4 = self:getPosition()
  local sequence = TweenSequence.new(self)
  local v8 = MultiValueTween.new(self.setPosition, {v3, v4}, {v3 + v1, v4 + v2}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:insertTween(v8, 0)
  sequence:addCallback(self.onAnimateVisibilityFinished, false)
  sequence:start()
  self.animation = sequence
end
function HUDDisplayElement:animateShow()
  local v2 = v2:superClass()
  v2.setVisible(self, true)
  local v1, v2 = self:getPosition()
  local sequence = TweenSequence.new(self)
  local v6 = MultiValueTween.new(self.setPosition, {v1, v2}, {self.origX, self.origY}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:insertTween(v6, 0)
  sequence:addCallback(self.onAnimateVisibilityFinished, true)
  sequence:start()
  self.animation = sequence
end
function HUDDisplayElement.onAnimateVisibilityFinished(v0, v1)
  if not v1 then
    local v3 = v3:superClass()
    v3.setVisible(v0, v1)
  end
end
