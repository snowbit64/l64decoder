-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleHUDExtension = {}
local VehicleHUDExtension_mt = Class(VehicleHUDExtension)
function VehicleHUDExtension.new(class_mt, vehicle, uiScale, uiTextColor, uiTextSize)
  if not class_mt then
  end
  local v5 = v5(v6, v7)
  v5.vehicle = vehicle
  v5.uiTextColor = uiTextColor
  v5.uiTextSize = uiTextSize
  v5.uiScale = uiScale
  v5.displayComponents = {}
  return v5
end
function VehicleHUDExtension:delete()
  for v4, v5 in pairs(self.displayComponents) do
    v5:delete()
    self.displayComponents[v4] = nil
  end
end
function VehicleHUDExtension:addComponentForCleanup(component)
  if component.delete then
    table.insert(self.displayComponents, component)
  end
end
function VehicleHUDExtension.getDisplayHeight(v0)
  return 0
end
function VehicleHUDExtension.canDraw(v0)
  return true
end
function VehicleHUDExtension.draw(v0, v1, v2, v3)
end
function VehicleHUDExtension.getPriority(v0)
  return 0
end
function VehicleHUDExtension.registerHUDExtension(spec, hudExtensionType)
  u0[spec] = hudExtensionType
end
function VehicleHUDExtension.createHUDExtensionForSpecialization(spec, vehicle, uiScale, uiTextColor, uiTextSize)
  if u0[spec] then
    local v7 = u0[spec].new(vehicle, uiScale, uiTextColor, uiTextSize)
  end
  return v6
end
function VehicleHUDExtension.hasHUDExtensionForSpecialization(spec)
  return not not u0[spec]
end
function VehicleHUDExtension:sortHUDExtensions(v1)
  local v3 = self:getPriority()
  local v4 = v1:getPriority()
  if v4 >= v3 then
  end
  return true
end
