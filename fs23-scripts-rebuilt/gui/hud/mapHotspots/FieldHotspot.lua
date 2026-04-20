-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldHotspot = {FILE_RESOLUTION = {1024, 1024}, FILENAME = "dataS/menu/hud/ui_elements.png"}
local FieldHotspot_mt = Class(FieldHotspot, MapHotspot)
function FieldHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v4, v5 = getNormalizedScreenValues(0, 50)
    v4 = MapHotspot.getClickCircle(0.667)
    v1.clickArea = v4
    v4, v5 = getNormalizedScreenValues(90, 90)
    v1.width = v4
    v1.height = v5
    v4 = Overlay.new(FieldHotspot.FILENAME, 0, 0, v1.width, v1.height)
    v1.icon = v4
    local v6 = GuiUtils.getUVs({768, 144, 48, 48}, FieldHotspot.FILE_RESOLUTION)
    v4:setUVs(...)
    v4:setColor(1, 1, 1, 1)
    v4:setScale(v1.scale, v1.scale)
    v1.shadowOffsetX = 2 / g_screenWidth
    v1.shadowOffsetY = -2 / g_screenHeight
  else
    v4, v5 = getNormalizedScreenValues(0, 22)
    v1.shadowOffsetX = 1 / g_screenWidth
    v1.shadowOffsetY = -1 / g_screenHeight
  end
  v1.textSize = v3
  v1.name = ""
  return v1
end
function FieldHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_FIELD
end
function FieldHotspot:getWidth()
  if Platform.isMobile then
    return self.width
  end
  return getTextWidth(self.textSize * self.scale, self.name)
end
function FieldHotspot:getHeight()
  if Platform.isMobile then
    return self.height
  end
  return self.textSize * self.scale
end
function FieldHotspot:setField(field)
  self.field = field
  local v2 = field:getName()
  self.name = v2
  self.worldX = field.posX
  self.worldZ = field.posZ
end
function FieldHotspot:getField()
  return self.field
end
function FieldHotspot:setOwnerFarmId(farmId)
  local v3 = v3:superClass()
  v3.setOwnerFarmId(self, farmId)
  if farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
    local v2 = v2:getFarmById(farmId)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L42
    v3 = v2:getColor()
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L42
    self:setColor(v3[1], v3[2], v3[3], v3[4])
    return
  end
  self:setColor(1, 1, 1, 1)
end
function FieldHotspot:render(x, y, rot)
  local v4 = self:getWidth()
  local v5 = self:getHeight()
  if MapHotspot.DEBUGGING and self.clickArea ~= nil and self.clickArea.areaType == MapHotspot.AREA.CIRCLE then
    drawOutlineCircle2D(x + v4 * 0.5, y + v5 * 0.5, v4 * (self.clickArea.radiusFactor or 1), 0.001, 40, 1, 0, 0, 1)
  end
  if self.field ~= nil and self.name ~= "" then
    local v6, v7, v8, v9 = unpack(self.color)
    if self.isBlinking then
    end
    if Platform.isMobile then
      local v11 = v11:getIsAIActive()
      if v11 then
        -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L178
        self.icon:setPosition(x, y)
        self.icon:setRotation(rot or 0, self.icon.width * 0.5, self.icon.height * 0.5)
        if self.isBlinking then
          local v18 = self:getCanBlink()
          if v18 then
            -- if IngameMap.alpha then goto L101 end
          end
        end
        v11:setColor(v14, v15, v16, 1)
        v11:render()
        return
      end
    end
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextWrapWidth(0)
    if Platform.isMobile then
      setTextBold(true)
    end
    setTextColor(0, 0, 0, v10)
    renderText(x + self.shadowOffsetX, y + self.shadowOffsetY, self.textSize * self.scale, self.name)
    setTextColor(v6, v7, v8, v9 * v10)
    renderText(x, y, self.textSize * self.scale, self.name)
    setTextBold(false)
  end
end
