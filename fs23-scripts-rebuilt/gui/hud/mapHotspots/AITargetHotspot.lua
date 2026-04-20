-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITargetHotspot = {FILE_RESOLUTION = {1024, 1024}}
local v1 = GuiUtils.getUVs({868, 4, 100, 100}, AITargetHotspot.FILE_RESOLUTION)
AITargetHotspot.UVS = v1
AITargetHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
local AITargetHotspot_mt = Class(AITargetHotspot, MapHotspot)
function AITargetHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v2, v3 = getNormalizedScreenValues(150, 150)
    v1.width = v2
    v1.height = v3
  else
    v2, v3 = getNormalizedScreenValues(80, 80)
    v1.width = v2
    v1.height = v3
  end
  v2 = Overlay.new(AITargetHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(AITargetHotspot.UVS)
  return v1
end
function AITargetHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_AI
end
function AITargetHotspot.getIsPersistent(v0)
  return true
end
function AITargetHotspot.getRenderLast(v0)
  return true
end
