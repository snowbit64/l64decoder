-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleHotspot = {TYPE = {}}
VehicleHotspot.TYPE.TRACTOR = 1
VehicleHotspot.TYPE.TRUCK = 2
VehicleHotspot.TYPE.CAR = 3
VehicleHotspot.TYPE.HARVESTER = 4
VehicleHotspot.TYPE.WHEELLOADER = 5
VehicleHotspot.TYPE.TRAILER = 6
VehicleHotspot.TYPE.TOOL = 7
VehicleHotspot.TYPE.TOOL_TRAILED = 8
VehicleHotspot.TYPE.CUTTER = 9
VehicleHotspot.TYPE.OTHER = 10
VehicleHotspot.TYPE.HORSE = 11
VehicleHotspot.TYPE.TRAIN = 12
VehicleHotspot.CATEGORY_MAPPING = {[VehicleHotspot.TYPE.TRACTOR] = MapHotspot.CATEGORY_STEERABLE, [VehicleHotspot.TYPE.TRUCK] = MapHotspot.CATEGORY_STEERABLE, [VehicleHotspot.TYPE.CAR] = MapHotspot.CATEGORY_STEERABLE, [VehicleHotspot.TYPE.HARVESTER] = MapHotspot.CATEGORY_COMBINE, [VehicleHotspot.TYPE.WHEELLOADER] = MapHotspot.CATEGORY_STEERABLE, [VehicleHotspot.TYPE.TRAILER] = MapHotspot.CATEGORY_TRAILER, [VehicleHotspot.TYPE.TOOL] = MapHotspot.CATEGORY_TOOL, [VehicleHotspot.TYPE.TOOL_TRAILED] = MapHotspot.CATEGORY_TOOL, [VehicleHotspot.TYPE.CUTTER] = MapHotspot.CATEGORY_TOOL, [VehicleHotspot.TYPE.OTHER] = MapHotspot.CATEGORY_TOOL, [VehicleHotspot.TYPE.HORSE] = MapHotspot.CATEGORY_ANIMAL, [VehicleHotspot.TYPE.TRAIN] = MapHotspot.CATEGORY_STEERABLE}
VehicleHotspot.FILE_RESOLUTION = {1024, 1024}
VehicleHotspot.FILENAME = "dataS/menu/hud/mapHotspots.png"
VehicleHotspot.UV = {}
local v2 = GuiUtils.getUVs({112, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TRUCK] = v2
v2 = GuiUtils.getUVs({220, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TRACTOR] = v2
v2 = GuiUtils.getUVs({328, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.HARVESTER] = v2
v2 = GuiUtils.getUVs({436, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.CAR] = v2
v2 = GuiUtils.getUVs({544, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.WHEELLOADER] = v2
v2 = GuiUtils.getUVs({652, 4, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.OTHER] = v2
v2 = GuiUtils.getUVs({4, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.CUTTER] = v2
v2 = GuiUtils.getUVs({112, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TRAILER] = v2
v2 = GuiUtils.getUVs({220, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TOOL] = v2
v2 = GuiUtils.getUVs({328, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TOOL_TRAILED] = v2
v2 = GuiUtils.getUVs({544, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.HORSE] = v2
v2 = GuiUtils.getUVs({652, 111, 100, 100}, VehicleHotspot.FILE_RESOLUTION)
VehicleHotspot.UV[VehicleHotspot.TYPE.TRAIN] = v2
VehicleHotspot.CLICK_AREAS = {}
local v3 = MapHotspot.getClickArea({29, 18, 42, 64}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TRACTOR] = v3
v3 = MapHotspot.getClickArea({32, 5, 40, 90}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TRUCK] = v3
v3 = MapHotspot.getClickArea({33, 23, 34, 54}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.CAR] = v3
v3 = MapHotspot.getClickArea({28, 3, 44, 94}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.HARVESTER] = v3
v3 = MapHotspot.getClickArea({30, 8, 40, 84}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.WHEELLOADER] = v3
v3 = MapHotspot.getClickArea({15, 37, 70, 26}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TRAILER] = v3
v3 = MapHotspot.getClickArea({35, 37, 30, 26}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TOOL] = v3
v3 = MapHotspot.getClickArea({31, 18, 38, 64}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TOOL_TRAILED] = v3
v3 = MapHotspot.getClickArea({32, 29, 36, 42}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.CUTTER] = v3
v3 = MapHotspot.getClickArea({34, 34, 32, 32}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.OTHER] = v3
v3 = MapHotspot.getClickArea({30, 11, 40, 78}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.HORSE] = v3
v3 = MapHotspot.getClickArea({35, 6, 30, 88}, {100, 100}, 0)
VehicleHotspot.CLICK_AREAS[VehicleHotspot.TYPE.TRAIN] = v3
local VehicleHotspot_mt = Class(VehicleHotspot, MapHotspot)
function VehicleHotspot.new(customMt)
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
  v1.vehicleType = VehicleHotspot.TYPE.OTHER
  return v1
end
function VehicleHotspot:getCategory()
  return VehicleHotspot.CATEGORY_MAPPING[self.vehicleType]
end
function VehicleHotspot:setVehicle(vehicle)
  self.vehicle = vehicle
  if self.icon ~= nil then
    v2:delete()
  end
  local v2 = Overlay.new(VehicleHotspot.FILENAME, 0, 0, self.width, self.height)
  self.icon = v2
  local v4 = unpack(self.color)
  v2:setColor(...)
  v2:setScale(self.scale, self.scale)
  self:setVehicleType(self.vehicleType)
end
function VehicleHotspot:getVehicle()
  return self.vehicle
end
function VehicleHotspot:setVehicleType(vehicleType)
  self.vehicleType = vehicleType
  if self.icon ~= nil then
    v2:setUVs(VehicleHotspot.UV[vehicleType])
  end
  if Platform.isMobile then
    local v2 = MapHotspot.getClickCircle(0.5)
    self.clickArea = v2
    return
  end
  self.clickArea = VehicleHotspot.CLICK_AREAS[vehicleType]
end
function VehicleHotspot:getWorldPosition()
  if self.vehicle ~= nil then
    local v4 = entityExists(self.vehicle.rootNode)
    if v4 then
      local v4, v5, v6 = getWorldTranslation(self.vehicle.rootNode)
    end
  end
  return v1, v3
end
function VehicleHotspot:getWorldRotation()
  if self.vehicle == nil then
    return 0
  end
  return v1:getMapHotspotRotation(false)
end
function VehicleHotspot:getTypeByName()
  if self == nil then
    return nil
  end
  local v1 = self:upper()
  return VehicleHotspot.TYPE[v1]
end
function VehicleHotspot:getColor()
  if g_currentMission.missionDynamicInfo.isMultiplayer then
    local v1 = v1:getFarmById(self.ownerFarmId)
    if v1 ~= nil and Farm.COLORS[v1.color] ~= nil then
      return Farm.COLORS[v1.color]
    end
  end
  return self.color
end
