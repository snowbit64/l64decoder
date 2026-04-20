-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIPlaceableMarkerHotspot = {FILE_RESOLUTION = {1024, 1024}}
local v1 = GuiUtils.getUVs({760, 111, 100, 100}, AIPlaceableMarkerHotspot.FILE_RESOLUTION)
AIPlaceableMarkerHotspot.UVS = v1
AIPlaceableMarkerHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
local AIPlaceableMarkerHotspot_mt = Class(AIPlaceableMarkerHotspot, MapHotspot)
function AIPlaceableMarkerHotspot.new(customMt)
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
  v2 = Overlay.new(AIPlaceableMarkerHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(AIPlaceableMarkerHotspot.UVS)
  v1.isBlinking = not Platform.isMobile
  return v1
end
function AIPlaceableMarkerHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_AI
end
function AIPlaceableMarkerHotspot.getIsPersistent(v0)
  return true
end
function AIPlaceableMarkerHotspot.getRenderLast(v0)
  return true
end
