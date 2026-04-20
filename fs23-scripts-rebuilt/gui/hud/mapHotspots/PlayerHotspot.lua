-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerHotspot = {FILE_RESOLUTION = {1024, 1024}}
local v1 = GuiUtils.getUVs({4, 4, 100, 100}, PlayerHotspot.FILE_RESOLUTION)
PlayerHotspot.UVS = v1
PlayerHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
local PlayerHotspot_mt = Class(PlayerHotspot, MapHotspot)
function PlayerHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v2, v3 = getNormalizedScreenValues(120, 120)
    v1.width = v2
    v1.height = v3
  else
    v2, v3 = getNormalizedScreenValues(60, 60)
    v1.width = v2
    v1.height = v3
  end
  v1.color = {1, 1, 1, 1}
  v2 = Overlay.new(PlayerHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(PlayerHotspot.UVS)
  local v4 = unpack(v1.color)
  v2:setColor(...)
  v1.vehicle = nil
  v1.player = nil
  v1.isBlinking = not Platform.isMobile
  if Platform.isMobile then
    v2 = MapHotspot.getClickCircle(0.5)
    v1.clickArea = v2
    return v1
  end
  v2 = MapHotspot.getClickArea({32, 40, 36, 46}, {100, 100}, 0)
  v1.clickArea = v2
  return v1
end
function PlayerHotspot:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.vehicle = nil
  self.player = nil
end
function PlayerHotspot.getRenderLast(v0)
  return true
end
function PlayerHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_PLAYER
end
function PlayerHotspot:getWorldPosition()
  if self.vehicle ~= nil then
    local v4 = entityExists(self.vehicle.rootNode)
    -- if not v4 then goto L26 end
    local v4, v5, v6 = getWorldTranslation(self.vehicle.rootNode)
  elseif self.player ~= nil then
    local v4, v5, v6, v7 = v4:getPositionData()
  end
  return v1, v3
end
function PlayerHotspot:getWorldRotation()
  if self.vehicle ~= nil then
    return v1:getMapHotspotRotation(true)
  end
  if self.player ~= nil then
    local v1, v2, v3, v4 = v1:getPositionData()
    return v4
  end
  return 0
end
function PlayerHotspot:setVehicle(vehicle)
  self.vehicle = vehicle
end
function PlayerHotspot:getVehicle()
  return self.vehicle
end
function PlayerHotspot:setPlayer(player)
  self.player = player
end
function PlayerHotspot:getPlayer()
  return self.player
end
function PlayerHotspot:getColor()
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    local v1 = v1:getFarmById(self.ownerFarmId)
    if v1 ~= nil and Farm.COLORS[v1.color] ~= nil then
      return Farm.COLORS[v1.color]
    end
  end
  return self.color
end
function PlayerHotspot:getCanBlink()
  local v2 = v2:getBlinkPlayerArrow()
  if v2 then
    -- if v0.player == g_currentMission.player then goto L22 end
  end
  if Platform.isMobile and self.vehicle == nil then
  end
  return v1
end
