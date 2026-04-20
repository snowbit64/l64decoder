-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIHotspot = {FILE_RESOLUTION = {1024, 1024}, FILENAME = "dataS/menu/hud/mapHotspots.png"}
local v1 = GuiUtils.getUVs({436, 111, 100, 100}, AIHotspot.FILE_RESOLUTION)
AIHotspot.UVS = v1
local AIHotspot_mt = Class(AIHotspot, MapHotspot)
function AIHotspot.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  if Platform.isMobile then
    local v2, v3 = getNormalizedScreenValues(120, 120)
    v1.width = v2
    v1.height = v3
    v2, v3 = getNormalizedScreenValues(0, 20)
    v1.textSize = v3
    local v4, v5 = getNormalizedScreenValues(60, 53)
    v1.textOffsetX = v4
    v1.textOffsetY = v5
    v4 = MapHotspot.getClickCircle(0.667)
    v1.clickArea = v4
  else
    v2, v3 = getNormalizedScreenValues(60, 60)
    v1.width = v2
    v1.height = v3
    v2, v3 = getNormalizedScreenValues(0, 10)
    v1.textSize = v3
    v4, v5 = getNormalizedScreenValues(30, 27)
    v1.textOffsetX = v4
    v1.textOffsetY = v5
    v4 = MapHotspot.getClickCircle(0.333)
    v1.clickArea = v4
  end
  v1.name = nil
  v2 = Overlay.new(AIHotspot.FILENAME, 0, 0, v1.width, v1.height)
  v1.icon = v2
  v2:setUVs(AIHotspot.UVS)
  return v1
end
function AIHotspot.getCategory(v0)
  return MapHotspot.CATEGORY_AI
end
function AIHotspot:setVehicle(vehicle)
  self.vehicle = vehicle
end
function AIHotspot:getVehicle()
  return self.vehicle
end
function AIHotspot:setAIHelperName(name)
  self.name = name
end
function AIHotspot:getWorldPosition()
  if self.vehicle ~= nil then
    local v4 = entityExists(self.vehicle.rootNode)
    if v4 then
      local v4, v5, v6 = getWorldTranslation(self.vehicle.rootNode)
    end
  end
  return v1, v3
end
function AIHotspot:render(x, y, rotation, small)
  local v6 = v6:superClass()
  v6.render(self, x, y, rotation, small)
  if self.name ~= nil then
    if self.isBlinking then
    end
    setTextColor(1, 1, 1, v5)
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextWrapWidth(0)
    setTextBold(false)
    renderText(x + self.textOffsetX * self.scale, y + self.textOffsetY * self.scale, self.textSize * self.scale, self.name)
    setTextColor(1, 1, 1, 1)
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
end
function AIHotspot:setOwnerFarmId(farmId)
  local v3 = v3:superClass()
  v3.setOwnerFarmId(self, farmId)
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    local v2 = v2:getFarmById(farmId)
    if v2 ~= nil and Farm.COLORS[v2.color] ~= nil then
      local v6 = unpack(Farm.COLORS[v2.color])
      self:setColor(...)
    end
  end
end
