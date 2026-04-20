-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionHotspot = {FILE_RESOLUTION = {1024, 1024}}
local v1 = GuiUtils.getUVs({760, 219, 100, 100}, MissionHotspot.FILE_RESOLUTION)
MissionHotspot.UVS = v1
MissionHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
local MissionHotspot_mt = Class(MissionHotspot, MapHotspot)
function MissionHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  local v2, v3 = getNormalizedScreenValues(60, 60)
  v1.width = v2
  v1.height = v3
  v2 = Overlay.new(MissionHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(MissionHotspot.UVS)
  return v1
end
function MissionHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_MISSION
end
function MissionHotspot.getIsPersistent(v0)
  return true
end
function MissionHotspot.getRenderLast(v0)
  return true
end
function MissionHotspot:render(x, y, rotation, small)
  if self.icon ~= nil then
    self.icon:setPosition(x, y)
    if self.isBlinking then
      local v6 = self:getCanBlink()
      if v6 then
        self.icon:setColor(nil, nil, nil, IngameMap.alpha)
      end
    end
    v5:render()
  end
end
