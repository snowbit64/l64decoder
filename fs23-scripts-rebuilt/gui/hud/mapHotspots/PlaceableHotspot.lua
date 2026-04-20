-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHotspot = {TYPE = {}}
PlaceableHotspot.TYPE.LOADING = 1
PlaceableHotspot.TYPE.UNLOADING = 2
PlaceableHotspot.TYPE.UNLOADING_TRAIN = 3
PlaceableHotspot.TYPE.PRODUCTION_POINT = 4
PlaceableHotspot.TYPE.SHOP = 5
PlaceableHotspot.TYPE.FARM = 6
PlaceableHotspot.TYPE.FUEL = 7
PlaceableHotspot.TYPE.ELECTRICITY = 8
PlaceableHotspot.TYPE.SHOP_ANIMAL = 9
PlaceableHotspot.TYPE.CHICKEN = 10
PlaceableHotspot.TYPE.PIG = 11
PlaceableHotspot.TYPE.SHEEP = 12
PlaceableHotspot.TYPE.COW = 13
PlaceableHotspot.TYPE.HORSE = 14
PlaceableHotspot.TYPE.TRAIN = 15
PlaceableHotspot.TYPE.BEE = 16
PlaceableHotspot.TYPE.EXCLAMATION_MARK = 17
PlaceableHotspot.TYPE.WASHING_STATION = 18
PlaceableHotspot.TYPE.FARM_SILO = 19
PlaceableHotspot.CATEGORY_MAPPING = {[PlaceableHotspot.TYPE.UNLOADING] = MapHotspot.CATEGORY_UNLOADING, [PlaceableHotspot.TYPE.UNLOADING_TRAIN] = MapHotspot.CATEGORY_UNLOADING, [PlaceableHotspot.TYPE.LOADING] = MapHotspot.CATEGORY_LOADING, [PlaceableHotspot.TYPE.PRODUCTION_POINT] = MapHotspot.CATEGORY_PRODUCTION, [PlaceableHotspot.TYPE.SHOP] = MapHotspot.CATEGORY_SHOP, [PlaceableHotspot.TYPE.FARM] = MapHotspot.CATEGORY_OTHER, [PlaceableHotspot.TYPE.FUEL] = MapHotspot.CATEGORY_LOADING, [PlaceableHotspot.TYPE.ELECTRICITY] = MapHotspot.CATEGORY_LOADING, [PlaceableHotspot.TYPE.EXCLAMATION_MARK] = MapHotspot.CATEGORY_OTHER, [PlaceableHotspot.TYPE.WASHING_STATION] = MapHotspot.CATEGORY_OTHER, [PlaceableHotspot.TYPE.SHOP_ANIMAL] = MapHotspot.CATEGORY_SHOP, [PlaceableHotspot.TYPE.CHICKEN] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.PIG] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.SHEEP] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.COW] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.HORSE] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.TRAIN] = MapHotspot.CATEGORY_OTHER, [PlaceableHotspot.TYPE.BEE] = MapHotspot.CATEGORY_ANIMAL, [PlaceableHotspot.TYPE.FARM_SILO] = MapHotspot.CATEGORY_OTHER}
PlaceableHotspot.FILE_RESOLUTION = {1024, 1024}
PlaceableHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
PlaceableHotspot.UV = {}
local v2 = GuiUtils.getUVs({4, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.UNLOADING] = v2
v2 = GuiUtils.getUVs({112, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.UNLOADING_TRAIN] = v2
v2 = GuiUtils.getUVs({220, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.PRODUCTION_POINT] = v2
v2 = GuiUtils.getUVs({328, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.SHOP] = v2
v2 = GuiUtils.getUVs({436, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.FARM] = v2
v2 = GuiUtils.getUVs({544, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.FUEL] = v2
v2 = GuiUtils.getUVs({652, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.ELECTRICITY] = v2
v2 = GuiUtils.getUVs({760, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.EXCLAMATION_MARK] = v2
v2 = GuiUtils.getUVs({868, 219, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.LOADING] = v2
v2 = GuiUtils.getUVs({4, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.SHOP_ANIMAL] = v2
v2 = GuiUtils.getUVs({112, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.CHICKEN] = v2
v2 = GuiUtils.getUVs({220, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.PIG] = v2
v2 = GuiUtils.getUVs({328, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.SHEEP] = v2
v2 = GuiUtils.getUVs({436, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.COW] = v2
v2 = GuiUtils.getUVs({544, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.HORSE] = v2
v2 = GuiUtils.getUVs({652, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.TRAIN] = v2
v2 = GuiUtils.getUVs({760, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.BEE] = v2
v2 = GuiUtils.getUVs({4, 435, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.WASHING_STATION] = v2
v2 = GuiUtils.getUVs({652, 543, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
PlaceableHotspot.UV[PlaceableHotspot.TYPE.FARM_SILO] = v2
local PlaceableHotspot_mt = Class(PlaceableHotspot, MapHotspot)
function PlaceableHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v2, v3 = getNormalizedScreenValues(90, 90)
    v1.width = v2
    v1.height = v3
    v2 = MapHotspot.getClickCircle(0.667)
    v1.clickArea = v2
  else
    v2, v3 = getNormalizedScreenValues(60, 60)
    v1.width = v2
    v1.height = v3
    v2 = MapHotspot.getClickArea({13, 13, 74, 74}, {100, 100}, 0.7853981633974483)
    v1.clickArea = v2
  end
  v1.placeableType = PlaceableHotspot.TYPE.UNLOADING
  v2 = Overlay.new(PlaceableHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.iconSmall = v2
  local v4 = GuiUtils.getUVs({868, 327, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
  v2:setUVs(...)
  v1.lastRenderedIcon = v1.iconSmall
  v1.teleportWorldX = nil
  v1.teleportWorldY = nil
  v1.teleportWorldZ = nil
  v1.name = nil
  return v1
end
function PlaceableHotspot:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  if self.iconSmall ~= nil then
    v1:delete()
    self.iconSmall = nil
  end
end
function PlaceableHotspot:getCategory()
  return PlaceableHotspot.CATEGORY_MAPPING[self.placeableType]
end
function PlaceableHotspot:setPlaceable(placeable)
  self.placeable = placeable
  self:createIcon()
  self:setPlaceableType(self.placeableType)
end
function PlaceableHotspot:getPlaceable()
  return self.placeable
end
function PlaceableHotspot:setPlaceableType(placeableType)
  self.placeableType = placeableType
  if self.icon ~= nil then
    v2:setUVs(PlaceableHotspot.UV[placeableType])
  end
end
function PlaceableHotspot:createIcon()
  if self.icon ~= nil then
    v1:delete()
  end
  local v1 = Overlay.new(PlaceableHotspot.FILENAME, 0, 0, self.width, self.height)
  self.icon = v1
  local v3 = unpack(self.color)
  v1:setColor(...)
  v1:setScale(self.scale, self.scale)
  v1:setUVs(PlaceableHotspot.UV[self.placeableType])
end
function PlaceableHotspot:setTeleportWorldPosition(x, y, z)
  self.teleportWorldX = x
  self.teleportWorldY = y
  self.teleportWorldZ = z
end
function PlaceableHotspot:getTeleportWorldPosition()
  return self.teleportWorldX, self.teleportWorldY, self.teleportWorldZ
end
function PlaceableHotspot:getBeVisited()
  if self.teleportWorldX == nil then
  end
  return true
end
function PlaceableHotspot:setScale(scale)
  v2:setScale(scale, scale)
  local v3 = v3:superClass()
  v3.setScale(self, scale)
end
function PlaceableHotspot:getWidth()
  return self.lastRenderedIcon.width
end
function PlaceableHotspot:getHeight()
  return self.lastRenderedIcon.height
end
function PlaceableHotspot:render(x, y, rotation, small)
  if small then
  end
  self.lastRenderedIcon = v5
  if v5 ~= nil then
    v5:setPosition(x, y)
    v5:setRotation(rotation or 0, v5.width * 0.5, v5.height * 0.5)
    if self.isBlinking then
      local v12 = self:getCanBlink()
      if v12 then
        -- if IngameMap.alpha then goto L38 end
      end
    end
    v5:setColor(v8, v9, v10, 1)
    v5:render()
  end
  if MapHotspot.DEBUGGING and self.clickArea.areaType == MapHotspot.AREA.CIRCLE then
    local v7 = self:getWidth()
    local v8 = self:getHeight()
    drawOutlineCircle2D(x + v7 * 0.5, y + v8 * 0.5, v7 * (self.clickArea.radiusFactor or 1), 0.001, 40, 1, 0, 0, 1)
  end
end
function PlaceableHotspot:getName()
  if self.name ~= nil then
    return self.name
  end
  if self.placeable ~= nil then
    return v1:getName()
  end
  return nil
end
function PlaceableHotspot:setName(name)
  self.name = name
end
function PlaceableHotspot:getTypeByName()
  if self == nil then
    return nil
  end
  local v1 = self:upper()
  return PlaceableHotspot.TYPE[v1]
end
