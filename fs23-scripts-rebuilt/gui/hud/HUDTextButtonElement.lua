-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDTextButtonElement = {}
local HUDTextButtonElement_mt = Class(HUDTextButtonElement)
function HUDTextButtonElement.new(posX, posY, width, height, textSize, text, onClickedCallback)
  local v7 = setmetatable({}, u0)
  v7.positionX = posX
  v7.positionY = posY
  v7.width = width
  v7.height = height
  v7.frameNormalColour = {r = 0.0284, g = 0.0284, b = 0.0284, a = 0.85}
  v7.frameHoveredColour = {r = 0.0184, g = 0.0184, b = 0.0184, a = 0.95}
  local v8 = Overlay.new(g_baseUIFilename, posX, posY, width, height)
  v7.frame = v8
  v8:setUVs(g_colorBgUVs)
  v8:setColor(v7.frameNormalColour.r, v7.frameNormalColour.g, v7.frameNormalColour.b, v7.frameNormalColour.a)
  v7.textDisplayOffsetX = width * 0.5
  v7.textDisplayOffsetY = height * 0.5 - textSize * 0.5
  v8 = HUDTextDisplay.new(posX + v7.textDisplayOffsetX, posY + v7.textDisplayOffsetY, textSize * g_referenceScreenHeight, RenderText.ALIGN_CENTER)
  v7.textDisplay = v8
  v8:setText(text)
  v7.onClickedCallback = onClickedCallback
  return v7
end
function HUDTextButtonElement:delete()
  v1:delete()
  v1:delete()
  self.onClickedCallback = nil
end
function HUDTextButtonElement:setText(text, textSize, textAlignment, textColor, textBold)
  v6:setText(text, textSize, textAlignment, textColor, textBold)
end
function HUDTextButtonElement:setPosition(newX, newY)
  if not newX then
  end
  self.positionX = v3
  if not newY then
  end
  self.positionY = v3
  v3:setPosition(self.positionX, self.positionY)
  v3:setPosition(self.positionX + self.textDisplayOffsetX, self.positionY + self.textDisplayOffsetY)
end
function HUDTextButtonElement:setFrameColour(r, g, b, a)
  if not r then
  end
  v5.r = v6
  if not g then
  end
  v5.g = v6
  if not b then
  end
  v5.b = v6
  if not a then
  end
  v5.a = v6
  self.frameNormalColour = v5
  v5:setColor(self.frameNormalColour.r, self.frameNormalColour.g, self.frameNormalColour.b, self.frameNormalColour.a)
end
function HUDTextButtonElement:setFrameHoveredColour(r, g, b, a)
  if not r then
  end
  v5.r = v6
  if not g then
  end
  v5.g = v6
  if not b then
  end
  v5.b = v6
  if not a then
  end
  v5.a = v6
  self.frameHoveredColour = v5
end
HUDTextButtonElement.setFrameColor = HUDTextButtonElement.setFrameColour
HUDTextButtonElement.setFrameHoveredColor = HUDTextButtonElement.setFrameHoveredColour
function HUDTextButtonElement:draw()
  v1:render()
  v1:draw()
end
function HUDTextButtonElement:update(dt)
  v2:update(dt)
end
function HUDTextButtonElement:mouseEvent(posX, posY, isDown, isUp, button)
  if self.positionX <= posX and posX < self.positionX + self.width and self.positionY <= posY and posY < self.positionY + self.height then
    if isDown and button == Input.MOUSE_BUTTON_LEFT and self.onClickedCallback then
      self.onClickedCallback()
    end
    v6:setColor(self.frameHoveredColour.r, self.frameHoveredColour.g, self.frameHoveredColour.b, self.frameHoveredColour.a)
    return
  end
  v6:setColor(self.frameNormalColour.r, self.frameNormalColour.g, self.frameNormalColour.b, self.frameNormalColour.a)
end
