-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

function onProfileUiResolutionScalingChanged()
  u0 = 1 / 1 * g_screenWidth
  u1 = 1 / 1 * g_screenHeight
  local v2, v3 = getNormalizedScreenValues(53, 103)
  u2 = v2
  u3 = v3
  v2, v3 = getNormalizedScreenValues(20, 20)
  CORNER_WIDTH = v2
  CORNER_HEIGHT = v3
end
function deleteDrawingOverlays()
  for v3, v4 in pairs(u0) do
    local v5 = type(v4)
    if v5 == "table" then
      v4:delete()
    else
      delete(v4)
    end
  end
  u1 = false
end
function drawFilledRect(x, y, width, height, r, g, b, a, clipX1, clipY1, clipX2, clipY2)
  if not u0 then
    u1()
  end
  if width ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000000 -> L11
  end
  return
  local v13, v14 = GuiUtils.alignToScreenPixels(x, y)
  v13, v14 = GuiUtils.alignToScreenPixels(width, height)
  v13 = math.max(v13, u3)
  v13 = math.max(v14, u4)
  if clipX1 ~= nil then
    local v15 = math.max(v13, clipX1)
    v15 = math.max(v14, clipY1)
    local v17 = math.min(v13 + v13, clipX2)
    v15 = math.max(v17 - v15, 0)
    v17 = math.min(v14 + v13, clipY2)
    v15 = math.max(v17 - v15, 0)
    if v15 ~= 0 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000000 -> L96
    end
    return
  end
  setOverlayColor(v12, r, g, b, a)
  renderOverlay(v12, x, y, width, height)
end
function drawOutlineRect(x, y, width, height, lineWidth, lineHeight, r, g, b, a)
  if not u0 then
    u1()
  end
  setOverlayColor(u2[1], r, g, b, a)
  renderOverlay(u2[1], x, y, width, lineHeight)
  renderOverlay(u2[1], x, y, lineWidth, height)
  renderOverlay(u2[1], x + width - lineWidth, y, lineWidth, height)
  renderOverlay(u2[1], x, y + height - lineHeight, width, lineHeight)
end
function drawPoint(x, y, width, height, r, g, b, a)
  if not u0 then
    u1()
  end
  setOverlayColor(u2[1], r, g, b, a)
  renderOverlay(u2[1], x - width / 2, y - height / 2, width, height)
end
function drawTouchButton(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  if not u0 then
    u1()
  end
  local v14 = math.floor(v0 / u2)
  v14 = math.floor(v2 / u2)
  if v3 then
    local v13 = math.min(1, v5 * 0.8)
    v13 = math.min(1, v6 * 0.8)
    v13 = math.min(1, v7 * 0.8)
  end
  u4[2]:setPosition(v0, v1)
  u4[2]:setDimension(u5, u3)
  u4[2]:setColor(v5, v6, v7, v8)
  u4[2]:render(v9, v10, v11, v12)
  u4[3]:setPosition(v0 + u5, v1)
  u4[3]:setDimension(v2 - 2 * u5, u3)
  u4[3]:setColor(v5, v6, v7, v8)
  u4[3]:render(v9, v10, v11, v12)
  u4[4]:setPosition(v0 + v2 - u5, v1)
  u4[4]:setDimension(u5, u3)
  u4[4]:setColor(v5, v6, v7, v8)
  u4[4]:render(v9, v10, v11, v12)
end
function drawLine2D(startX, startY, endX, endY, thickness, r, g, b, a)
  if not u0 then
    u1()
  end
  setOverlayColor(u2[1], r, g, b, a)
  local v14 = math.sqrt((endX - startX) * (endX - startX) + (endY - startY) / g_screenAspectRatio * (endY - startY) / g_screenAspectRatio)
  local v17 = math.sqrt((endX - startX) * (endX - startX) + (endY - startY) / g_screenAspectRatio * (endY - startY) / g_screenAspectRatio)
  local v15 = math.acos((endX - startX) / v17)
  if (endY - startY) / g_screenAspectRatio < 0 then
  end
  setOverlayRotation(v9, v15, 0, 0)
  renderOverlay(v9, startX, startY, v14, thickness)
  setOverlayRotation(v9, 0, 0, 0)
end
function drawOutlineCircle2D(x, y, radius, thickness, numSegments, r, g, b, a)
  drawPoint(x, y, 4 / g_screenWidth, 4 / g_screenHeight, 0, 0, 1, 1)
  -- TODO: structure LOP_FORNPREP (pc 29, target 59)
  local v18 = math.cos(math.pi * 2 / numSegments * 1)
  local v19 = math.sin(math.pi * 2 / numSegments * 1)
  drawLine2D(x + radius, y, x + radius * v18, y + radius * g_screenAspectRatio * v19, thickness, r, g, b, a)
  -- TODO: structure LOP_FORNLOOP (pc 58, target 30)
end
function drawFilledRectRound(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  if not u0 then
    u1()
  end
  if v2 ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000000 -> L9
  end
  return
  local v13, v14 = GuiUtils.alignToScreenPixels(CORNER_WIDTH * v4, CORNER_HEIGHT * v4)
  local v15, v16 = GuiUtils.alignToScreenPixels(v0, v1)
  v15, v16 = GuiUtils.alignToScreenPixels(v2, v3)
  v15 = math.max(v15, v13 * 2)
  v15 = math.max(v16, v14 * 2)
  drawFilledRect(v15, v16 + v14, v13, v15 - 2 * v14, v5, v6, v7, v8, v9, v10, v11, v12)
  drawFilledRect(v15 + v13, v16, v15 - 2 * v13, v15, v5, v6, v7, v8, v9, v10, v11, v12)
  drawFilledRect(v15 + v15 - v13, v16 + v14, v13, v15 - 2 * v14, v5, v6, v7, v8, v9, v10, v11, v12)
  u2[5]:setPosition(v15, v16 + v15 - v14)
  u2[5]:setDimension(v13, v14)
  u2[5]:setColor(v5, v6, v7, v8)
  u2[5]:render(v9, v10, v11, v12)
  u2[6]:setPosition(v15 + v15 - v13, v16 + v15 - v14)
  u2[6]:setDimension(v13, v14)
  u2[6]:setColor(v5, v6, v7, v8)
  u2[6]:render(v9, v10, v11, v12)
  u2[7]:setPosition(v15, v16)
  u2[7]:setDimension(v13, v14)
  u2[7]:setColor(v5, v6, v7, v8)
  u2[7]:render(v9, v10, v11, v12)
  u2[8]:setPosition(v15 + v15 - v13, v16)
  u2[8]:setDimension(v13, v14)
  u2[8]:setColor(v5, v6, v7, v8)
  u2[8]:render(v9, v10, v11, v12)
end
