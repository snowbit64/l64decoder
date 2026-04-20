-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollectibleHotspot = {}
local CollectibleHotspot_mt = Class(CollectibleHotspot, MapHotspot)
function CollectibleHotspot:new()
  local v1 = MapHotspot.new(u0)
  local v2, v3 = getNormalizedScreenValues(40, 40)
  v1.width = v2
  v1.height = v3
  v2 = Overlay.new(PlaceableHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  local v4 = GuiUtils.getUVs({652, 4, 100, 100}, PlaceableHotspot.FILE_RESOLUTION)
  v2:setUVs(...)
  v1.color[1] = 0.8
  v1.color[2] = 0.5
  v1.color[3] = 0
  local v3, v4, v5 = getWorldTranslation(self.node)
  v1.worldX = v3
  v1.worldZ = v5
  return v1
end
function CollectibleHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_OTHER
end
