-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MixerWagonHUDExtension = {}
local MixerWagonHUDExtension_mt = Class(MixerWagonHUDExtension, VehicleHUDExtension)
VehicleHUDExtension.registerHUDExtension(MixerWagon, MixerWagonHUDExtension)
function MixerWagonHUDExtension:new(v1, v2, v3)
  local v4 = VehicleHUDExtension.new(u0, self, v1, v2, v3)
  v4.mixerWagon = self.spec_mixerWagon
  v4.fillTypeStatus = {}
  for v8, v9 in ipairs(v4.mixerWagon.mixerWagonFillTypes) do
    local v12 = next(v9.fillTypes)
    local v10 = v10:getFillTypeByIndex(...)
    if not (v10 ~= nil) then
      continue
    end
    local v12, v13 = getNormalizedScreenValues(30 * v1, 30 * v1)
    local v14 = Overlay.new(v10.hudOverlayFilename, 0, 0, v12, v13)
    local v16 = unpack(v2)
    v14:setColor(...)
    v4:addComponentForCleanup({fillType = v10, overlay = nil, statusBar = nil, statusBarColor = nil, statusBarColor2 = nil, minPercentage = 0, maxPercentage = 0, fillLevel = 0, minPercentage = v9.minPercentage, maxPercentage = v9.maxPercentage, overlay = v14}.overlay)
    local v14, v15 = getNormalizedScreenValues(315 * v1, 12 * v1)
    v14 = StatusBar.new(g_baseUIFilename, g_colorBgUVs, nil, MixerWagonHUDExtension.COLOR.STATUS_BAR_BG, {fillType = v10, overlay = nil, statusBar = nil, statusBarColor = nil, statusBarColor2 = nil, minPercentage = 0, maxPercentage = 0, fillLevel = 0, minPercentage = v9.minPercentage, maxPercentage = v9.maxPercentage, overlay = v14, statusBarColor = MixerWagonHUDExtension.COLOR.STATUS_BAR_GOOD, statusBarColor2 = MixerWagonHUDExtension.COLOR.STATUS_BAR_BAD}.statusBarColor2, nil, 0, 0, v14, v15)
    v4:addComponentForCleanup({fillType = v10, overlay = nil, statusBar = nil, statusBarColor = nil, statusBarColor2 = nil, minPercentage = 0, maxPercentage = 0, fillLevel = 0, minPercentage = v9.minPercentage, maxPercentage = v9.maxPercentage, overlay = v14, statusBarColor = MixerWagonHUDExtension.COLOR.STATUS_BAR_GOOD, statusBarColor2 = MixerWagonHUDExtension.COLOR.STATUS_BAR_BAD, statusBar = v14}.statusBar)
    table.insert(v4.fillTypeStatus, {fillType = v10, overlay = nil, statusBar = nil, statusBarColor = nil, statusBarColor2 = nil, minPercentage = 0, maxPercentage = 0, fillLevel = 0, minPercentage = v9.minPercentage, maxPercentage = v9.maxPercentage, overlay = v14, statusBarColor = MixerWagonHUDExtension.COLOR.STATUS_BAR_GOOD, statusBarColor2 = MixerWagonHUDExtension.COLOR.STATUS_BAR_BAD, statusBar = v14})
  end
  v6, v7 = getNormalizedScreenValues(105 * v1, 7 * v1)
  v4.fillLevelTextOffsetX = v6
  v4.fillLevelTextOffsetY = v7
  v6, v7 = getNormalizedScreenValues(0, 28 * v1)
  v4.helpHeightPerFruit = v7
  v6, v7 = getNormalizedScreenValues(0, 12 * v1)
  v4.helpHeightOffset = v7
  v6, v7 = getNormalizedScreenValues(9 * v1, 12.5 * v1)
  v8 = Overlay.new(g_baseUIFilename, 0, 0, v6, v7)
  v4.fillRangeMarkerOverlay = v8
  v8:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_LEFT)
  v10 = GuiUtils.getUVs(MixerWagonHUDExtension.UV.RANGE_MARKER_ARROW)
  v8:setUVs(...)
  v10 = unpack(v2)
  v8:setColor(...)
  v4:addComponentForCleanup(v4.fillRangeMarkerOverlay)
  v4.displayHeight = (#v4.mixerWagon.mixerWagonFillTypes + 1) * v4.helpHeightPerFruit + v4.helpHeightOffset
  return v4
end
function MixerWagonHUDExtension:canDraw()
  return v1:getIsActiveForInput(true)
end
function MixerWagonHUDExtension:getDisplayHeight()
  local v2 = self:canDraw()
  if v2 then
    -- if v0.displayHeight then goto L8 end
  end
  return 0
end
function MixerWagonHUDExtension:draw(leftPosX, rightPosX, posY)
  local v5 = unpack(self.uiTextColor)
  setTextColor(...)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v6 = v6:getText("info_mixingRatio")
  local v7 = v7:getFullName()
  local v4 = string.format(...)
  renderText(leftPosX, posY + self.displayHeight - self.uiTextSize * 1.5, self.uiTextSize, v4)
  setTextBold(false)
  v6 = v6:getFillUnitFillLevel(self.mixerWagon.fillUnitIndex)
  if 0 < v6 then
    for v9, v10 in ipairs(self.mixerWagon.mixerWagonFillTypes) do
      self.fillTypeStatus[v9].fillLevel = v10.fillLevel
    end
  end
  for v10, v11 in ipairs(self.fillTypeStatus) do
    local v13 = v13:getFillUnitFillLevel(self.mixerWagon.fillUnitIndex)
    if 0 < v13 then
    end
    if 0 < v11.fillLevel then
      v13 = v13:getFillUnitFillType(self.mixerWagon.fillUnitIndex)
      if v13 == FillType.FORAGE_MIXING then
        -- if v11.minPercentage > v12 then goto L158 end
        -- if v12 > v11.maxPercentage then goto L158 end
      end
      local v15 = unpack(v11.statusBarColor)
      v13:setColor(...)
      -- goto L169  (LOP_JUMP +11)
      v15 = unpack(v11.statusBarColor2)
      v13:setColor(...)
    end
    v13:setPosition(rightPosX - v11.statusBar.width, v6 + (self.helpHeightPerFruit - v11.statusBar.height) * 0.5)
    v13:setValue(v12)
    v13:render()
    if v11.overlay ~= nil then
      v13:setPosition(leftPosX, v6 + (self.helpHeightPerFruit - v11.overlay.height) * 0.5)
      v13:render()
    end
    setTextAlignment(RenderText.ALIGN_RIGHT)
    local v17 = string.format("%1.1f%%", v12 * 100)
    renderText(...)
    setTextAlignment(RenderText.ALIGN_LEFT)
    v15 = math.min(v11.statusBar.x + v11.statusBar.width * v11.minPercentage, v11.statusBar.x + v11.statusBar.width)
    local v16 = math.min(v11.statusBar.x + v11.statusBar.width * v11.maxPercentage, v11.statusBar.x + v11.statusBar.width)
    v17:setInvertX(false)
    v17:setPosition(v15, v11.statusBar.y + v11.statusBar.height * 0.5)
    v17:render()
    v17:setInvertX(true)
    v17:setPosition(v16 - self.fillRangeMarkerOverlay.width, v11.statusBar.y + v11.statusBar.height * 0.5)
    v17:render()
  end
  return posY
end
MixerWagonHUDExtension.COLOR = {STATUS_BAR_BG = {0.8, 0.8, 0.8, 0.5}, STATUS_BAR_GOOD = {0.3763, 0.6038, 0.0782, 1}, STATUS_BAR_BAD = {0.8069, 0.0097, 0.0097, 1}}
MixerWagonHUDExtension.UV = {RANGE_MARKER_ARROW = {880, 395, 18, 25}}
