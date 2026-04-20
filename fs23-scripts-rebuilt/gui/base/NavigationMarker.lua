-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if g_currentMission ~= nil and g_currentMission.guidedTour ~= nil and g_currentMission.guidedTour.navigationMarker ~= nil then
  g_currentMission.guidedTour.navigationMarker:delete()
end
NavigationMarker = {}
local v1 = Class(NavigationMarker)
function NavigationMarker.new(v0)
  if not v0 then
  end
  local v1 = v1(v2, v3)
  v1.isVisible = false
  v1.worldPosX = 0
  v1.worldPosY = 0
  v1.worldPosZ = 0
  local v2, v3 = getNormalizedScreenValues(96, 96)
  v1.width = v2
  v1.height = v3
  local v4 = Overlay.new(g_baseHUDFilename, 0, 0, v2, v3)
  v1.overlayMarker = v4
  local v6 = GuiUtils.getUVs({672, 48, 96, 96})
  v4:setUVs(...)
  v4:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  v4 = Overlay.new(g_baseHUDFilename, 0, 0, v2, v3)
  v1.overlayMarkerArrow = v4
  v6 = GuiUtils.getUVs({768, 144, 96, 96})
  v4:setUVs(...)
  v4:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v4, v5 = getNormalizedScreenValues(0, 28.799999999999997)
  v1.textSize = v5
  local v6, v7 = getNormalizedScreenValues(86.4, 86.4)
  v1.borderX = v6
  v1.borderY = v7
  v1.minDistance = 3
  return v1
end
function NavigationMarker:delete()
  v1:delete()
  v1:delete()
end
function NavigationMarker:setVisibility(v1)
  self.isVisible = v1
end
function NavigationMarker:setWorldPosition(v1, v2, v3)
  self.worldPosX = v1
  self.worldPosY = v2
  self.worldPosZ = v3
end
function NavigationMarker:render()
  if not self.isVisible then
    return
  end
  new2DLayer()
  if g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L53
    -- if not g_currentMission.player.isControlled then goto L53 end
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L53
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x9 -> L53
    local v6, v7, v8 = getWorldTranslation(g_currentMission.player.rootNode)
  elseif g_currentMission.controlledVehicle ~= nil then
    local v5, v6, v7 = getWorldTranslation(g_currentMission.controlledVehicle.rootNode)
  end
  v5 = MathUtil.vector3Length(self.worldPosX - v1, self.worldPosY - v2, self.worldPosZ - v3)
  if v5 < self.minDistance then
    return
  end
  local v10 = math.min(1, v5 - self.minDistance)
  v7 = MathUtil.lerp(...)
  local v9 = getCamera()
  v8, v9, v10 = worldToLocal(v9, self.worldPosX, self.worldPosY, self.worldPosZ)
  local v12 = getCamera()
  local v11 = getNearClip(...)
  if -v11 < v10 then
    local v17 = getCamera()
    local v16 = getFovY(...)
    local v14 = math.sin(v16 * 0.5)
    v14 = math.sqrt(--v11 * -v11 + -v11 / v14 * -v11 / v14)
    local v15 = MathUtil.sign(v8)
    local v19 = getCamera()
    local v18 = getFovY(...)
    v15 = math.sin(v18 * 0.5 * g_screenAspectRatio)
    v15 = math.sqrt(--v11 * -v11 + -v11 / v15 * -v11 / v15)
    v15 = MathUtil.sign(v9)
  end
  v12 = math.min(v10, -v11)
  local v13 = getCamera()
  v12, v13, v14 = localToWorld(v13, v8, v9, v12)
  v15, v16, v17 = project(v12, v13, v14)
  if v15 >= self.borderX then
    -- if 1 - v0.borderX >= v15 then goto L209 end
  end
  local v20 = MathUtil.clamp(v15, self.borderX, 1 - self.borderX)
  if v16 >= self.borderY then
    -- if 1 - v0.borderY >= v16 then goto L233 end
  end
  local v22 = MathUtil.clamp(v16, self.borderY, 1 - self.borderY)
  local v26 = math.sin(g_time / 700)
  local v25 = math.abs(...)
  v22 = MathUtil.lerp(...)
  v23:setColor(nil, nil, nil, v22 * v7)
  v23:setPosition(v18, v22)
  v23:render()
  if v19 or true then
    local v24, v25 = MathUtil.vector2Normalize(v15 - 0.5, v16 - 0.5)
    local v28 = math.atan2(v24, v25)
    v27:setColor(nil, nil, nil, v22 * v7)
    v27:setRotation(-v28 + math.pi * 0.5, self.overlayMarkerArrow.width * 0.5, self.overlayMarkerArrow.height * 0.5)
    v27:setPosition(v18 + v24 * self.width * 0.7, v22 + v25 * self.height * 0.7)
    v27:render()
  end
  setTextColor(1, 1, 1, v22 * v7)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextLineHeightScale(0.8)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
  setTextWrapWidth(self.width * 0.1, false)
  v28 = string.format("%d m", v5)
  renderText(...)
  setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
  setTextBold(false)
  setTextWrapWidth(0)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
end
if v0 ~= nil then
  local v2 = NavigationMarker.new()
  v2:setWorldPosition(v0[1], v0[2], v0[3])
  v2:setVisibility(v0[4])
  g_currentMission.guidedTour.navigationMarker = v2
end
