-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDSliderElement = {}
local HUDSliderElement_mt = Class(HUDSliderElement, HUDElement)
function HUDSliderElement:new(v1, v2, v3, v4, v5, v6, v7, v8, v9)
  local v11 = v11:superClass()
  local v10 = v11.new(self, nil, u0)
  v10.position = {self.x, self.y}
  v10.size = {self.width, self.height}
  v10.transAxis = v5
  v10.minTrans = v6
  v10.centerTrans = v7
  v10.maxTrans = v8
  v10.lockTrans = v9
  v10.speed = 0.0002
  v10.backgroundOverlay = v1
  v10.overlay = self
  v10.moveToCenterPosition = false
  v10.moveToCenterSpeedFactor = 1
  v10.snapPositions = {}
  v11 = v11:registerTouchAreaOverlay(v1, v2, v3, TouchHandler.TRIGGER_DOWN, v10.onSliderDown, v10)
  v10.touchAreaDown = v11
  v11 = v11:registerTouchAreaOverlay(v1, v2, v3, TouchHandler.TRIGGER_ALWAYS, v10.onSliderAlways, v10)
  v10.touchAreaAlways = v11
  v11 = v11:registerTouchAreaOverlay(v1, v2, v3, TouchHandler.TRIGGER_UP, v10.onSliderUp, v10)
  v10.touchAreaUp = v11
  v11:setAreaPressedSizeGain(v10.touchAreaDown, v4)
  v11:setAreaPressedSizeGain(v10.touchAreaAlways, v4)
  v11:setAreaPressedSizeGain(v10.touchAreaUp, v4)
  return v10
end
function HUDSliderElement:delete()
  if self.overlay ~= nil then
    local v1 = entityExists(self.overlay.overlayId)
    if not v1 then
      self.overlay = nil
    end
  end
  v1:removeTouchArea(self.touchAreaDown)
  v1:removeTouchArea(self.touchAreaAlways)
  v1:removeTouchArea(self.touchAreaUp)
  local v2 = v2:superClass()
  v2.delete(self)
end
function HUDSliderElement:setTouchIsActive(state)
  v2:setTouchAreaVisibility(self.touchAreaDown, state)
  v2:setTouchAreaVisibility(self.touchAreaAlways, state)
  v2:setTouchAreaVisibility(self.touchAreaUp, state)
end
function HUDSliderElement:setCallback(callback, callbackTarget)
  self.callback = callback
  self.callbackTarget = callbackTarget
end
function HUDSliderElement:addSnapPosition(position)
  table.insert(self.snapPositions, position)
end
function HUDSliderElement:clearSnapPositions()
  -- TODO: structure LOP_FORNPREP (pc 5, target 11)
  self.snapPositions[1] = nil
  -- TODO: structure LOP_FORNLOOP (pc 10, target 6)
end
function HUDSliderElement:resetSlider()
  self.moveToCenterPosition = false
  self:setAxisPosition(self.centerTrans)
end
function HUDSliderElement:onSliderDown(posX, posY, isCancel)
  local v4 = self:getAxisPosition(posX, posY)
  local v11 = v11:getPosition()
  local v9 = self:getAxisPosition(...)
  local v12 = unpack(self.size)
  local v10 = self:getAxisPosition(...)
  self:setAxisPosition(v4 - v9 - v10 / 2)
  local v8 = self:getPosition()
  local v6 = self:getAxisPosition(...)
  v9 = v9:getPosition()
  local v7 = self:getAxisPosition(...)
  self.startOverlayPos = v6 - v7
  local v5 = self:getAxisPosition(posX, posY)
  self.lastTouchPosition = v5
  self.moveToCenterPosition = false
end
function HUDSliderElement:onSliderAlways(posX, posY, isCancel)
  local curTouchPosition = self:getAxisPosition(posX, posY)
  self:setAxisPosition(self.startOverlayPos + curTouchPosition - self.lastTouchPosition)
end
function HUDSliderElement:onSliderUp(posX, posY, isCancel)
  if #self.snapPositions == 0 then
    if self.lockTrans ~= nil then
      local v6 = self:getPosition()
      local v4 = self:getAxisPosition(...)
      local v9 = v9:getPosition()
      local v7 = self:getAxisPosition(...)
      -- if v4 == v0.lockTrans + v7 then goto L31 end
    end
    self.moveToCenterPosition = true
  end
end
function HUDSliderElement:getAxisPosition(posX, posY)
  if self.transAxis == 1 then
    return posX
  end
  if self.transAxis == 2 then
    return posY
  end
  return 0
end
function HUDSliderElement:setAxisPosition(pos, noCallback)
  if 0 < #self.snapPositions then
    -- TODO: structure LOP_FORNPREP (pc 14, target 28)
    local v9 = math.abs(pos - self.snapPositions[1])
    if v9 < math.huge then
    end
    -- TODO: structure LOP_FORNLOOP (pc 27, target 15)
  end
  local v3 = MathUtil.clamp(pos, self.minTrans, self.maxTrans)
  if self.callback ~= nil and noCallback ~= true then
    v3 = self.callback(self.callbackTarget, (v3 - self.minTrans) / (self.maxTrans - self.minTrans))
  end
  local v5 = v5:getPosition()
  v3 = self:getAxisPosition(...)
  if self.transAxis == 1 then
    self:setPosition(v3 + pos, nil)
    return
  end
  if self.transAxis == 2 then
    self:setPosition(nil, pos)
  end
end
function HUDSliderElement:setMoveToCenterSpeedFactor(v1)
  self.moveToCenterSpeedFactor = v1
end
function HUDSliderElement:update(dt)
  if self.moveToCenterPosition then
    local v5 = self:getPosition()
    local v3 = self:getAxisPosition(...)
    local v6 = v6:getPosition()
    local v4 = self:getAxisPosition(...)
    if v3 - v4 == self.centerTrans then
      self.moveToCenterPosition = false
      return
    end
    local v7 = math.abs(self.centerTrans - v2)
    v4 = math.pow(1 + v7, 3)
    v4 = MathUtil.sign(self.centerTrans - v2)
    if v4 == 1 then
      -- if math.min then goto L57 end
    end
    v6 = math.max(v2 + v4 * dt * self.speed * v3, self.centerTrans)
    self:setAxisPosition(v6)
  end
end
function HUDSliderElement:setScale(v1, v2)
  local v4 = v4:superClass()
  v4.setScale(self, v1, v2)
  self.size[1] = self.overlay.width
  self.size[2] = self.overlay.height
end
function HUDSliderElement:setRange(v1, v2, v3, v4)
  self.minTrans = v1
  self.centerTrans = v2
  self.maxTrans = v3
  self.lockTrans = v4
end
