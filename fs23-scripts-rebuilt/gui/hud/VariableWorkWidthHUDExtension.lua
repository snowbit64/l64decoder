-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VariableWorkWidthHUDExtension = {}
local VariableWorkWidthHUDExtension_mt = Class(VariableWorkWidthHUDExtension, VehicleHUDExtension)
VehicleHUDExtension.registerHUDExtension(VariableWorkWidth, VariableWorkWidthHUDExtension)
function VariableWorkWidthHUDExtension:new(v1, v2, v3)
  local v4 = VehicleHUDExtension.new(u0, self, v1, v2, v3)
  v4.variableWorkWidth = self.spec_variableWorkWidth
  local v5, v6 = getNormalizedScreenValues(0, 15 * v1)
  v4.sectionOverlays = {}
  -- TODO: structure LOP_FORNPREP (pc 30, target 169)
  local v13 = Overlay.new(g_baseHUDFilename, 0, 0, 0, v6)
  v13:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_LEFT)
  local v16 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v13:setUVs(...)
  v16 = unpack(v2)
  v13:setColor(...)
  v4:addComponentForCleanup(v13)
  if 1 < #v4.variableWorkWidth.sections then
    -- if v4.variableWorkWidth.sections[1 + 1].isCenter then goto L100 end
  end
  if not v11.isCenter then
    -- if v4.variableWorkWidth.hasCenter then goto L160 end
    -- if v10 ~= v7 / 2 then goto L160 end
  end
  local v14, v15 = getNormalizedScreenValues(1, 35 * v1)
  v16 = math.max(v14, 1 / g_screenWidth)
  v16 = Overlay.new(g_baseHUDFilename, 0, 0, v16, v15)
  v16:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_LEFT)
  local v19 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v16:setUVs(...)
  v19 = unpack(VariableWorkWidthHUDExtension.COLOR.SEPARATOR)
  v16:setColor(...)
  v4:addComponentForCleanup(v16)
  v12.separator = v16
  table.insert(v4.sectionOverlays, v12)
  -- TODO: structure LOP_FORNLOOP (pc 168, target 31)
  local v8, v9 = getNormalizedScreenValues(0, 75 * v1)
  v4.displayHeight = v9
  return v4
end
function VariableWorkWidthHUDExtension:canDraw()
  local v1 = v1:getIsActiveForInput(true)
  if v1 then
  end
  return v1
end
function VariableWorkWidthHUDExtension:getDisplayHeight()
  local v2 = self:canDraw()
  if v2 then
    -- if v0.displayHeight then goto L8 end
  end
  return 0
end
function VariableWorkWidthHUDExtension:getHelpEntryCountReduction()
  local v2 = self:canDraw()
  if v2 then
    return 1
  end
  return 0
end
function VariableWorkWidthHUDExtension:draw(leftPosX, rightPosX, posY)
  local v5 = unpack(self.uiTextColor)
  setTextColor(...)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v8 = v8:getText("info_partialWorkingWidth")
  renderText(...)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v4 = v4:getVariableWorkWidthUsage()
  if v4 ~= nil then
    v5 = MathUtil.round(v4)
    local v10 = v10:getText("info_workWidthAndUsage")
    local v12 = v12:getWorkAreaWidth(self.variableWorkWidth.widthReferenceWorkArea)
    local v9 = string.format(...)
    renderText(...)
  else
    v10 = v10:getText("info_workWidth")
    local v11 = v11:getWorkAreaWidth(self.variableWorkWidth.widthReferenceWorkArea)
    v9 = string.format(...)
    renderText(...)
  end
  local v6, v7 = getNormalizedScreenValues(0, 25 * self.uiScale)
  -- TODO: structure LOP_FORNPREP (pc 139, target 215)
  if not self.sectionOverlays[1].section.isActive then
  end
  v14:setPosition(leftPosX + v9 * (v13 - 1) * (1 + v9 * 0.2 / v8), posY + v7)
  v14:setDimension(v9 * 0.8)
  local v20 = unpack(v15)
  v14:setColor(...)
  v14:render()
  if self.sectionOverlays[v13].separator ~= nil then
    self.sectionOverlays[v13].separator:setPosition(leftPosX + v9 * (v13 - 1) * (1 + v9 * 0.2 / v8) + v9 * 0.8 + v10 - self.sectionOverlays[v13].separator.width * 0.5, posY + v7)
    self.sectionOverlays[v13].separator:render()
  end
  -- TODO: structure LOP_FORNLOOP (pc 214, target 140)
  return posY
end
VariableWorkWidthHUDExtension.COLOR = {SECTION_ACTIVE = {0.0003, 0.5647, 0.9822, 1}, SECTION_INACTIVE = {0.0003, 0.5647, 0.9822, 0.25}, SEPARATOR = {1, 1, 1, 0.3}}
VariableWorkWidthHUDExtension.UV = {}
