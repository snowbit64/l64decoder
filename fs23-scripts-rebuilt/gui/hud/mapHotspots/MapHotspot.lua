-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapHotspot = {DEBUGGING = false, CATEGORY_FIELD = 1, CATEGORY_ANIMAL = 2, CATEGORY_MISSION = 3, CATEGORY_TOUR = 4, CATEGORY_STEERABLE = 5, CATEGORY_COMBINE = 6, CATEGORY_TRAILER = 7, CATEGORY_TOOL = 8, CATEGORY_UNLOADING = 9, CATEGORY_LOADING = 10, CATEGORY_PRODUCTION = 11, CATEGORY_SHOP = 12, CATEGORY_OTHER = 13, CATEGORY_AI = 14, CATEGORY_PLAYER = 15, CATEGORY_DEFAULT = MapHotspot.CATEGORY_OTHER, AREA = {}}
MapHotspot.AREA.RECTANGLE = 1
MapHotspot.AREA.CIRCLE = 2
local MapHotspot_mt = Class(MapHotspot)
function MapHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.isVisible = true
  v1.isBlinking = false
  v1.isPersistent = false
  v1.worldX = 0
  v1.worldZ = 0
  v1.worldRotation = 0
  v1.scale = 1
  v1.color = {1, 1, 1, 1}
  v1.lastScreenPositionX = 0
  v1.lastScreenPositionY = 0
  v1.lastScreenRotation = 0
  v1.lastScreenLayout = nil
  v1.icon = nil
  v1.clickArea = nil
  v1.forceNoRotation = false
  v1.ownerFarmId = AccessHandler.EVERYONE
  return v1
end
function MapHotspot:delete()
  if self.icon ~= nil then
    v1:delete()
    self.icon = nil
  end
end
function MapHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_DEFAULT
end
function MapHotspot:getIsPersistent()
  return self.isPersistent
end
function MapHotspot:setPersistent(isPersistent)
  self.isPersistent = isPersistent
end
function MapHotspot.getRenderLast(v0)
  return false
end
function MapHotspot:setVisible(isVisible)
  self.isVisible = isVisible
end
function MapHotspot:getIsVisible()
  return self.isVisible
end
function MapHotspot:setBlinking(isBlinking)
  self.isBlinking = isBlinking
end
function MapHotspot:setWorldPosition(x, z)
  self.worldX = x
  self.worldZ = z
end
function MapHotspot:getWorldPosition()
  return self.worldX, self.worldZ
end
function MapHotspot:setLastRenderInfo(x, y, rotation, layout)
  self.lastScreenPositionX = x
  self.lastScreenPositionY = y
  self.lastScreenRotation = rotation
  self.lastScreenLayout = layout
end
function MapHotspot:getLastScreenPosition()
  return self.lastScreenPositionX, self.lastScreenPositionY, self.lastScreenRotation
end
function MapHotspot:getLastScreenPositionCenter()
  local v4 = self:getWidth()
  local v5 = self:getHeight()
  return self.lastScreenPositionX + v4 * 0.5, self.lastScreenPositionY + v5 * 0.5
end
function MapHotspot:setWorldRotation(rotation)
  self.worldRotation = rotation
end
function MapHotspot:getWorldRotation()
  return self.worldRotation
end
function MapHotspot:getWidth()
  if self.icon ~= nil then
    return self.icon.width
  end
  return 0
end
function MapHotspot:getHeight()
  if self.icon ~= nil then
    return self.icon.height
  end
  return 0
end
function MapHotspot:setScale(scale)
  self.scale = scale
  if self.icon ~= nil then
    v2:setScale(scale, scale)
  end
end
function MapHotspot:setSelected(isSelected)
  self.isSelected = isSelected
end
function MapHotspot:setOwnerFarmId(farmId)
  if farmId == nil then
  end
  self.ownerFarmId = farmId
end
function MapHotspot:getCanBeAccessed()
  if self.ownerFarmId ~= AccessHandler.EVERYONE then
    local v3 = v3:getFarmId()
    local v1 = v1:canFarmAccessOtherId(v3, self.ownerFarmId)
  end
  return v1
end
function MapHotspot.getCanBlink(v0)
  return true
end
function MapHotspot:setColor(r, g, b)
  self.color[1] = r
  self.color[2] = g
  self.color[3] = b
end
function MapHotspot:getColor()
  return self.color
end
function MapHotspot:render(x, y, rotation, small)
  if self.icon ~= nil then
    if self.forceNoRotation then
    end
    v5:setPosition(x, y)
    v5:setRotation(rotation or 0, v5.width * 0.5, v5.height * 0.5)
    local v7 = self:getColor()
    local v6, v7, v8 = unpack(...)
    if self.isBlinking then
      local v15 = self:getCanBlink()
      if v15 then
        -- if IngameMap.alpha then goto L44 end
      end
    end
    v5:setColor(v11, v12, v13, 1)
    v5:render()
  end
  if MapHotspot.DEBUGGING and self.clickArea.areaType == MapHotspot.AREA.CIRCLE then
    v7 = self:getWidth()
    v8 = self:getHeight()
    drawOutlineCircle2D(x + v7 * 0.5, y + v8 * 0.5, v7 * (self.clickArea.radiusFactor or 1), 0.001, 40, 1, 0, 0, 1)
  end
end
function MapHotspot:hasMouseOverlap(x, y)
  if self.clickArea ~= nil then
  end
  if v3 == MapHotspot.AREA.RECTANGLE then
    return self:checkOverlapRectangle(x, y, self.clickArea)
  end
  if v3 == MapHotspot.AREA.CIRCLE then
    v4 = self:checkOverlapCircle(x, y, self.clickArea)
    return v4
  end
  return false, nil
end
function MapHotspot:checkOverlapRectangle(x, y, clickArea)
  local width = self:getWidth()
  local height = self:getHeight()
  local v16 = math.cos(-(self.lastScreenRotation + clickArea.rotation))
  local v17 = math.sin(-(self.lastScreenRotation + clickArea.rotation))
  if self.lastScreenPositionX + clickArea.area[1] * width <= self.lastScreenPositionX + width * 0.5 + (v16 * (x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio - v17 * (y - self.lastScreenPositionY + height * 0.5)) / g_screenAspectRatio and self.lastScreenPositionX + width * 0.5 + (v16 * (x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio - v17 * (y - self.lastScreenPositionY + height * 0.5)) / g_screenAspectRatio <= self.lastScreenPositionX + clickArea.area[1] * width + clickArea.area[3] * width and self.lastScreenPositionY + clickArea.area[2] * height <= self.lastScreenPositionY + height * 0.5 + v17 * (x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio + v16 * (y - self.lastScreenPositionY + height * 0.5) and self.lastScreenPositionY + height * 0.5 + v17 * (x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio + v16 * (y - self.lastScreenPositionY + height * 0.5) > self.lastScreenPositionY + clickArea.area[2] * height + clickArea.area[4] * height then
  end
  local v22 = math.sqrt(v18 * v18 + v14 * v14)
  return v20, v22 / g_screenAspectRatio
end
function MapHotspot:checkOverlapCircle(x, y, clickArea)
  local width = self:getWidth()
  local height = self:getHeight()
  local v13 = math.sqrt((x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio * (x - self.lastScreenPositionX + width * 0.5) * g_screenAspectRatio + (y - self.lastScreenPositionY + height * 0.5) * (y - self.lastScreenPositionY + height * 0.5))
  if v13 / g_screenAspectRatio > width * (clickArea.radiusFactor or 1) then
  end
  return true, v12
end
function MapHotspot:getClickArea(v1, v2)
  return {areaType = MapHotspot.AREA.RECTANGLE, area = {self[1] / v1[1], self[2] / v1[2], self[3] / v1[1], self[4] / v1[2]}, rotation = v2}
end
function MapHotspot.getClickCircle(radiusFactor)
  return {areaType = MapHotspot.AREA.CIRCLE, radiusFactor = radiusFactor}
end
