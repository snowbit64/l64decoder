-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TourHotspot = {FILE_RESOLUTION = {1024, 1024}}
local v1 = GuiUtils.getUVs({760, 219, 100, 100}, TourHotspot.FILE_RESOLUTION)
TourHotspot.UVS = v1
TourHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
local TourHotspot_mt = Class(TourHotspot, MapHotspot)
function TourHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v2, v3 = getNormalizedScreenValues(90, 90)
    v1.width = v2
    v1.height = v3
  else
    v2, v3 = getNormalizedScreenValues(60, 60)
    v1.width = v2
    v1.height = v3
  end
  v2 = Overlay.new(TourHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(TourHotspot.UVS)
  v1.isVisible = false
  v1.forceNoRotation = true
  return v1
end
function TourHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_TOUR
end
function TourHotspot.getIsPersistent(v0)
  return true
end
function TourHotspot.getRenderLast(v0)
  return true
end
