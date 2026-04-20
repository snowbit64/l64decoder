-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSchemaOverlayData = {}
local VehicleSchemaOverlayData_mt = Class(VehicleSchemaOverlayData)
function VehicleSchemaOverlayData.new(offsetX, offsetY, schemaName, invisibleBorderRight, invisibleBorderLeft)
  local v5 = setmetatable({}, u0)
  v5.offsetX = offsetX or 0
  v5.offsetY = offsetY or 0
  v5.schemaName = schemaName
  v5.invisibleBorderRight = invisibleBorderRight or 0.05
  v5.invisibleBorderLeft = invisibleBorderLeft or 0.05
  v5.attacherJoints = nil
  return v5
end
function VehicleSchemaOverlayData:addAttacherJoint(attacherOffsetX, attacherOffsetY, rotation, invertX, liftedOffsetX, liftedOffsetY)
  if not self.attacherJoints then
    self.attacherJoints = {}
  end
  table.insert(self.attacherJoints, {x = attacherOffsetX or 0, y = attacherOffsetY or 0, rotation = rotation or 0, invertX = not not invertX, liftedOffsetX = liftedOffsetX or 0, liftedOffsetY = liftedOffsetY or 5})
end
VehicleSchemaOverlayData.SCHEMA_OVERLAY = {VEHICLE = "VEHICLE", HARVESTER = "HARVESTER", TRUCK = "TRUCK", CAR = "CAR", LOADER = "LOADER", IMPLEMENT = "IMPLEMENT", TRAILER = "TRAILER", COMBINE_HEADER = "COMBINE_HEADER", FRONTLOADER = "FRONTLOADER"}
