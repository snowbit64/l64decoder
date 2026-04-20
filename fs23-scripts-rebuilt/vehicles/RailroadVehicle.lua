-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RailroadVehicle = {}
local RailroadVehicle_mt = Class(RailroadVehicle, Vehicle)
InitStaticObjectClass(RailroadVehicle, "RailroadVehicle", ObjectIds.OBJECT_RAILROADVEHICLE)
function RailroadVehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setTrainSystem", RailroadVehicle.setTrainSystem)
  local v2 = v2:superClass()
  v2.registerFunctions(vehicleType)
end
function RailroadVehicle.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.trainSystem = nil
  return v3
end
function RailroadVehicle:setTrainSystem(trainSystem)
  self.trainSystem = trainSystem
  self.synchronizePosition = false
end
function RailroadVehicle:update(...)
  if self.isServer and self.trainSystem == nil then
    v1:removeVehicle(self)
    return
  end
  local v2 = v2:superClass()
  v2.update(...)
end
