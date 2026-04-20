-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDElement = {}
local HUDElement_mt = Class(HUDElement)
function HUDElement.new(overlay, parentHudElement, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.overlay = overlay
  v3.children = {}
  v3.pivotX = 0
  v3.pivotY = 0
  v3.defaultPivotX = 0
  v3.defaultPivotY = 0
  v3.animation = TweenSequence.NO_SEQUENCE
  v3.parent = nil
  if parentHudElement then
    parentHudElement:addChild(v3)
  end
  return v3
end
function HUDElement:delete()
  if self.overlay ~= nil then
    v1:delete()
    self.overlay = nil
  end
  if self.parent ~= nil then
    v1:removeChild(self)
  end
  self.parent = nil
  for v4, v5 in pairs(self.children) do
    v5.parent = nil
    v5:delete()
    self.children[v4] = nil
  end
end
function HUDElement:addChild(childHudElement)
  if childHudElement.parent == self then
    return
  end
  if childHudElement.parent ~= nil then
    v2:removeChild(childHudElement)
  end
  table.insert(self.children, childHudElement)
  childHudElement.parent = self
end
function HUDElement:removeChild(childHudElement)
  if childHudElement.parent == self then
    for v5, v6 in ipairs(self.children) do
      if not (v6 == childHudElement) then
        continue
      end
      v6.parent = nil
      table.remove(self.children, v5)
      return
    end
  end
end
function HUDElement:setPosition(x, y)
  local v3, v4 = self:getPosition()
  v5:setPosition(x or v3, y or v4)
  if 0 < #self.children then
    for v10, v11 in pairs(self.children) do
      local v12, v13 = v11:getPosition()
      if v13 == nil then
      end
      v14(true)
      v11:setPosition(v12 + v5, v13 + v6)
    end
  end
end
function HUDElement:setRotation(rotation, centerX, centerY)
  if not centerX then
  end
  if not centerY then
  end
  v4:setRotation(v6, v7, v8)
end
function HUDElement:setRotationPivot(pivotX, pivotY)
  if not pivotX then
  end
  if not pivotY then
  end
  self.pivotX = v3
  self.pivotY = v4
  if not pivotX then
  end
  if not pivotY then
  end
  self.defaultPivotX = v3
  self.defaultPivotY = v4
end
function HUDElement:getRotationPivot()
  return self.pivotX, self.pivotY
end
function HUDElement:getPosition()
  return v1:getPosition()
end
function HUDElement:setScale(scaleWidth, scaleHeight)
  local v3, v4 = self:getPosition()
  local v5, v6 = self:getScale()
  v7:setScale(scaleWidth, scaleHeight)
  local v7, v8 = self:getPosition()
  if 0 < #self.children then
    for v14, v15 in pairs(self.children) do
      local v16, v17 = v15:getScale()
      local v18, v19 = v15:getPosition()
      v15:setPosition(v7 + (v18 - v3) * v9, v8 + (v19 - v4) * v10)
      v15:setScale(v16 * v9, v17 * v10)
    end
  end
  self.pivotX = self.defaultPivotX * scaleWidth
  self.pivotY = self.defaultPivotY * scaleHeight
end
function HUDElement:getScale()
  return v1:getScale()
end
function HUDElement:setAlignment(vertical, horizontal)
  v3:setAlignment(vertical, horizontal)
end
function HUDElement:setVisible(isVisible)
  if self.overlay ~= nil then
    self.overlay.visible = isVisible
  end
end
function HUDElement:getVisible()
  return self.overlay.visible
end
function HUDElement:getColor()
  return self.overlay.r, self.overlay.g, self.overlay.b, self.overlay.a
end
function HUDElement:getAlpha()
  return self.overlay.a
end
function HUDElement:getWidth()
  return self.overlay.width
end
function HUDElement:getHeight()
  return self.overlay.height
end
function HUDElement:setDimension(width, height)
  v3:setDimension(width, height)
end
function HUDElement:resetDimensions()
  v1:resetDimensions()
  self.pivotX = self.defaultPivotX
  self.pivotY = self.defaultPivotY
end
function HUDElement:setColor(r, g, b, a)
  v5:setColor(r, g, b, a)
end
function HUDElement:setAlpha(alpha)
  v2:setColor(nil, nil, nil, alpha)
end
function HUDElement:setImage(imageFilename)
  v2:setImage(imageFilename)
end
function HUDElement:setUVs(uvs)
  v2:setUVs(uvs)
end
function HUDElement:update(dt)
  local v2 = v2:getFinished()
  if not v2 then
    v2:update(dt)
  end
end
function HUDElement:draw(v1, v2, v3, v4)
  if self.overlay.visible then
    v5:render(v1, v2, v3, v4)
    for v8, v9 in ipairs(self.children) do
      v9:draw(v1, v2, v3, v4)
    end
  end
end
function HUDElement:scalePixelToScreenVector(vector2D)
  return vector2D[1] * self.overlay.scaleWidth * g_aspectScaleX / g_referenceScreenWidth, vector2D[2] * self.overlay.scaleHeight * g_aspectScaleY / g_referenceScreenHeight
end
function HUDElement:scalePixelToScreenHeight(height)
  return height * self.overlay.scaleHeight * g_aspectScaleY / g_referenceScreenHeight
end
function HUDElement:scalePixelToScreenWidth(width)
  return width * self.overlay.scaleWidth * g_aspectScaleX / g_referenceScreenWidth
end
function HUDElement:normalizeUVPivot(uvPivot, size, uvs)
  local v4 = self:scalePixelToScreenWidth(uvPivot[1] * size[1] / uvs[3])
  local v5 = self:scalePixelToScreenHeight(uvPivot[2] * size[2] / uvs[4])
  return v4
end
HUDElement.UV = {FILL = {8, 8, 1, 1}}
HUDElement.TEXT_SIZE = {DEFAULT_TITLE = "20", DEFAULT_TEXT = "16", DEFAULT_TEXT_MOBILE = "30"}
