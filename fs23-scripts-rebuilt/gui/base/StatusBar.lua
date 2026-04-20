-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StatusBar = {}
local StatusBar_mt = Class(StatusBar)
function StatusBar.new(filename, uvsBg, uvsMarker, bgColor, valueColor, markerSize, x, y, width, height, custom_mt)
  if custom_mt == nil then
  end
  local v11 = setmetatable({}, custom_mt)
  v11.value = 0
  v11.width = width
  v11.height = height
  v11.isDisabled = false
  v11.x = x
  v11.y = y
  v11.markerSize = markerSize
  local v12 = Overlay.new(filename, x, y, width, height)
  v11.overlayBackground = v12
  local v14 = unpack(bgColor)
  v12:setColor(...)
  v12:setUVs(uvsBg)
  v12 = Overlay.new(filename, x, y, width, height)
  v11.overlayValue = v12
  v14 = unpack(valueColor)
  v12:setColor(...)
  v12:setUVs(uvsBg)
  if uvsMarker ~= nil then
    v12 = Overlay.new(filename, x - markerSize[1] / 2, y + (height - markerSize[2]) / 2, markerSize[1], markerSize[2])
    v11.overlayMarker = v12
    v14 = unpack(valueColor)
    v12:setColor(...)
    v12:setUVs(uvsMarker)
  end
  v11:setValue(0)
  return v11
end
function StatusBar:delete()
  if self.overlayBackground ~= nil then
    v1:delete()
  end
  if self.overlayValue ~= nil then
    v1:delete()
  end
  if self.overlayMarker ~= nil then
    v1:delete()
  end
end
function StatusBar:setDisabled(isDisabled)
  self.isDisabled = isDisabled
end
function StatusBar:setPosition(x, y)
  self.x = x
  self.y = y
  if self.overlayBackground ~= nil then
    v3:setPosition(x, y)
  end
  if self.overlayValue ~= nil then
    v3:setPosition(x, y)
  end
  if self.overlayMarker ~= nil then
    v3:setPosition(x - self.markerSize[1] / 2, y + (self.height - self.markerSize[2]) / 2)
  end
end
function StatusBar:setColor(r, g, b, a)
  if self.overlayMarker ~= nil then
    v5:setColor(r, g, b, a)
  end
  if self.overlayValue ~= nil then
    v5:setColor(r, g, b, a)
  end
end
function StatusBar:setValue(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.value = v2
  v3:setDimension(newValue * self.width, self.overlayValue.height)
  if self.overlayMarker ~= nil then
    v3:setPosition(self.x + newValue * self.width - self.markerSize[1] / 2, self.overlayMarker.y)
  end
end
function StatusBar:render()
  v1:render()
  if not self.isDisabled then
    v1:render()
    if self.overlayMarker ~= nil then
      v1:render()
    end
  end
end
