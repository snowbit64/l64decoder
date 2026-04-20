-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RoundStatusBar = {}
local RoundStatusBar_mt = Class(RoundStatusBar)
function RoundStatusBar.new(frontFilename, valueFilename, markerFilename, color, valueColor, bgColor, radius, markerSize, x, y, width, height, valueWidth, valueHeight, custom_mt)
  if custom_mt == nil then
  end
  local v15 = setmetatable({}, custom_mt)
  v15.value = 0
  v15.width = width
  v15.height = height
  v15.radius = radius
  v15.offsetX = (width - valueWidth) / 2
  v15.offsetY = (height - valueHeight) / 2
  v15.x = x
  v15.y = y
  if frontFilename ~= nil then
    local v16 = Overlay.new(frontFilename, x, y, width, height)
    v15.overlayFront = v16
    local v18 = unpack(color)
    v16:setColor(...)
  end
  v16 = Overlay.new(valueFilename, x + v15.offsetX, y + v15.offsetY, valueWidth, valueHeight)
  v15.overlayBackground1 = v16
  v16 = Overlay.new(valueFilename, x + v15.offsetX, y + v15.offsetY, valueWidth, valueHeight)
  v15.overlayBackground2 = v16
  v16 = Overlay.new(valueFilename, x + v15.offsetX, y + v15.offsetY, valueWidth, valueHeight)
  v15.overlayValue1 = v16
  v16 = Overlay.new(valueFilename, x + v15.offsetX, y + v15.offsetY, valueWidth, valueHeight)
  v15.overlayValue2 = v16
  v18 = unpack(bgColor)
  v16:setColor(...)
  v18 = unpack(bgColor)
  v16:setColor(...)
  v18 = unpack(valueColor)
  v16:setColor(...)
  v18 = unpack(valueColor)
  v16:setColor(...)
  if markerFilename ~= nil then
    v16 = Overlay.new(markerFilename, x, y, markerSize[1], markerSize[2])
    v15.overlayMarker = v16
    v18 = unpack(valueColor)
    v16:setColor(...)
  end
  v16:setRotation(3.141592653589793, v15.overlayValue2.width * 0.5, v15.overlayValue2.height * 0.5)
  v15:setValue(0)
  return v15
end
function RoundStatusBar:delete()
  if self.overlayFront ~= nil then
    v1:delete()
  end
  if self.overlayBackground1 ~= nil then
    v1:delete()
  end
  if self.overlayBackground2 ~= nil then
    v1:delete()
  end
  if self.overlayValue1 ~= nil then
    v1:delete()
  end
  if self.overlayValue2 ~= nil then
    v1:delete()
  end
  if self.overlayMarker ~= nil then
    v1:delete()
  end
end
function RoundStatusBar:setPosition(x, y)
  local v3 = Utils.getNoNil(x, self.x)
  self.x = v3
  v3 = Utils.getNoNil(y, self.y)
  self.y = v3
  v3:setPosition(self.x + self.offsetX, self.y + self.offsetY)
  v3:setPosition(self.x + self.offsetX, self.y + self.offsetY)
  v3:setPosition(self.x + self.offsetX, self.y + self.offsetY)
  v3:setPosition(self.x + self.offsetX, self.y + self.offsetY)
  if self.overlayFront ~= nil then
    v3:setPosition(self.x, self.y)
  end
end
function RoundStatusBar:setValue(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.value = v2
  local v4 = math.rad((1 - self.value) * 360)
  v2:setRotation(v4, self.overlayValue1.width * 0.5, self.overlayValue1.height * 0.5)
  v4 = math.rad(180 + -self.value * 360)
  v2:setRotation(v4, self.overlayBackground1.width * 0.5, self.overlayBackground1.height * 0.5)
  if self.overlayMarker ~= nil then
    v4 = math.rad((1 - self.value) * 360 + 90)
    local v3 = math.cos(...)
    local v5 = math.rad((1 - self.value) * 360 + 90)
    v4 = math.sin(...)
    v4:setPosition(self.x + self.width / 2 - self.overlayMarker.width / 2 + v3 * self.radius[1], self.y + self.height / 2 - self.overlayMarker.height / 2 + v4 * self.radius[2])
  end
end
function RoundStatusBar:render()
  if 0.5 < self.value then
    v1:render()
  end
  v1:render()
  if 0.5 < self.value then
    v1:render()
  else
    v1:render()
    v1:render()
  end
  if self.overlayFront ~= nil then
    v1:render()
  end
  if self.overlayMarker ~= nil then
    v1:render()
  end
end
