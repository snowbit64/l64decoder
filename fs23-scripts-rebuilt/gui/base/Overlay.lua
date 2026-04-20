-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Overlay = {}
local Overlay_mt = Class(Overlay)
Overlay.ALIGN_VERTICAL_BOTTOM = 1
Overlay.ALIGN_VERTICAL_MIDDLE = 2
Overlay.ALIGN_VERTICAL_TOP = 3
Overlay.ALIGN_HORIZONTAL_LEFT = 4
Overlay.ALIGN_HORIZONTAL_CENTER = 5
Overlay.ALIGN_HORIZONTAL_RIGHT = 6
Overlay.DEFAULT_UVS = {0, 0, 0, 1, 1, 0, 1, 1}
function Overlay.new(overlayFilename, x, y, width, height, customMt)
  if overlayFilename ~= nil then
    local v7 = createImageOverlay(overlayFilename)
  end
  if not customMt then
  end
  v7 = v7(v8, v9)
  v7.overlayId = v6
  v7.filename = overlayFilename
  local v8 = table.copy(Overlay.DEFAULT_UVS)
  v7.uvs = v8
  v7.x = x
  v7.y = y
  v7.offsetX = 0
  v7.offsetY = 0
  v7.defaultWidth = width
  v7.width = width
  v7.defaultHeight = height
  v7.height = height
  v7.scaleWidth = 1
  v7.scaleHeight = 1
  v7.visible = true
  v7.alignmentVertical = Overlay.ALIGN_VERTICAL_BOTTOM
  v7.alignmentHorizontal = Overlay.ALIGN_HORIZONTAL_LEFT
  v7.invertX = false
  v7.rotation = 0
  v7.rotationCenterX = 0
  v7.rotationCenterY = 0
  v7.r = 1
  v7.g = 1
  v7.b = 1
  v7.a = 1
  v7.debugEnabled = false
  return v7
end
function Overlay:delete()
  if self.overlayId ~= 0 then
    delete(self.overlayId)
  end
end
function Overlay:setColor(r, g, b, a)
  if not r then
  end
  if not g then
  end
  if not b then
  end
  if not a then
  end
  if r == self.r and g == self.g and b == self.b then
    -- if v5 == v0.a then goto L61 end
  end
  self.r = r
  self.g = g
  self.b = b
  self.a = a
  if self.overlayId ~= 0 then
    setOverlayColor(self.overlayId, self.r, self.g, self.b, self.a)
  end
end
function Overlay:setUVs(uvs)
  if self.overlayId ~= 0 then
    self.uvs = uvs
    local v4 = unpack(uvs)
    setOverlayUVs(...)
  end
end
function Overlay:setPosition(x, y)
  if not x then
  end
  self.x = v3
  if not y then
  end
  self.y = v3
end
function Overlay:getPosition()
  return self.x, self.y
end
function Overlay:setDimension(width, height)
  if not width then
  end
  self.width = v3
  if not height then
  end
  self.height = v3
  self:setAlignment(self.alignmentVertical, self.alignmentHorizontal)
end
function Overlay:resetDimensions()
  self.scaleWidth = 1
  self.scaleHeight = 1
  self:setDimension(self.defaultWidth, self.defaultHeight)
end
function Overlay:setInvertX(invertX)
  if self.invertX ~= invertX then
    self.invertX = invertX
    if self.overlayId ~= 0 then
      if invertX then
        setOverlayUVs(self.overlayId, self.uvs[5], self.uvs[6], self.uvs[7], self.uvs[8], self.uvs[1], self.uvs[2], self.uvs[3], self.uvs[4])
        return
      end
      local v4 = unpack(self.uvs)
      setOverlayUVs(...)
    end
  end
end
function Overlay:setRotation(rotation, centerX, centerY)
  if self.rotation == rotation and self.rotationCenterX == centerX then
    -- if v0.rotationCenterY == v3 then goto L30 end
  end
  self.rotation = rotation
  self.rotationCenterX = centerX
  self.rotationCenterY = centerY
  if self.overlayId ~= 0 then
    setOverlayRotation(self.overlayId, rotation, centerX, centerY)
  end
end
function Overlay:setScale(scaleWidth, scaleHeight)
  self.width = self.defaultWidth * scaleWidth
  self.height = self.defaultHeight * scaleHeight
  self.scaleWidth = scaleWidth
  self.scaleHeight = scaleHeight
  self:setAlignment(self.alignmentVertical, self.alignmentHorizontal)
end
function Overlay:getScale()
  return self.scaleWidth, self.scaleHeight
end
function Overlay:render(clipX1, clipY1, clipX2, clipY2)
  if self.visible and self.overlayId ~= 0 and 0 < self.a then
    if clipX1 ~= nil then
      local v9, v10, v11, v12, v13, v14, v15, v16 = unpack(self.uvs)
      local v23 = math.max(self.x + self.offsetX, clipX1)
      v23 = math.max(self.y + self.offsetY, clipY1)
      local v25 = math.min(self.x + self.offsetX + self.width, clipX2)
      v23 = math.max(v25 - v23, 0)
      v25 = math.min(self.y + self.offsetY + self.height, clipY2)
      v23 = math.max(v25 - v23, 0)
      if v23 ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000002 -> L91
      end
      return
      setOverlayUVs(self.overlayId, (v13 - v9) * (v5 - v17) / (v19 - v17) + v9, (v12 - v10) * (v6 - v18) / (v20 - v18) + v10, (v13 - v9) * (v5 - v17) / (v19 - v17) + v9, (v16 - v14) * (v6 + v8 - v18) / (v20 - v18) + v14, (v13 - v9) * (v5 + v7 - v17) / (v19 - v17) + v9, (v12 - v10) * (v6 - v18) / (v20 - v18) + v10, (v15 - v11) * (v5 + v7 - v17) / (v19 - v17) + v11, (v16 - v14) * (v6 + v8 - v18) / (v20 - v18) + v14)
    end
    renderOverlay(self.overlayId, v5, v6, v7, v8)
    if clipX1 ~= nil then
      v11 = unpack(self.uvs)
      setOverlayUVs(...)
    end
  end
end
function Overlay:setAlignment(vertical, horizontal)
  if vertical == Overlay.ALIGN_VERTICAL_TOP then
    self.offsetY = -self.height
  elseif vertical == Overlay.ALIGN_VERTICAL_MIDDLE then
    self.offsetY = -self.height * 0.5
  else
    self.offsetY = 0
  end
  if not vertical then
  end
  self.alignmentVertical = v3
  if horizontal == Overlay.ALIGN_HORIZONTAL_RIGHT then
    self.offsetX = -self.width
  elseif horizontal == Overlay.ALIGN_HORIZONTAL_CENTER then
    self.offsetX = -self.width * 0.5
  else
    self.offsetX = 0
  end
  if not horizontal then
  end
  self.alignmentHorizontal = v3
end
function Overlay:setIsVisible(visible)
  self.visible = visible
end
function Overlay:getIsVisible()
  return self.visible
end
function Overlay:setImage(overlayFilename)
  if self.filename ~= overlayFilename then
    if self.overlayId ~= 0 then
      delete(self.overlayId)
    end
    self.filename = overlayFilename
    local horizontal = createImageOverlay(overlayFilename)
    self.overlayId = horizontal
  end
end
