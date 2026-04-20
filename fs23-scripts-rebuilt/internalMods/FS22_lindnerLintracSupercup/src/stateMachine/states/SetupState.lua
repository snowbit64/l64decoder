-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetupState = {}
local SetupState_mt = Class(SetupState, AbstractState)
function SetupState.new(v0, v1, v2, v3, v4, v5, v6, v7)
  if not v7 then
  end
  local v8 = v8:new(v10, v11, v12)
  local v9 = v3:getIsServer()
  v8.isServer = v9
  v8.mission = v3
  v8.checkpoints = v4
  v8.vehicles = v5
  v8.vehicleList = v6
  v8.runVehicle = nil
  v8.spawnTimer = nil
  v8.playerUserId = nil
  return v8
end
function SetupState:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  if self.spawnTimer ~= nil then
    v1:delete()
  end
end
function SetupState:onEnter(playerUserId)
  self.playerUserId = playerUserId
  local v3 = v3:superClass()
  v3.onEnter(self)
  for v5, v6 in ipairs(self.checkpoints) do
    v6:reset()
  end
  if self.isServer then
    self:spawn()
  end
end
function SetupState:onExit()
  local v2 = v2:superClass()
  v2.onExit(self)
  if self.spawnTimer ~= nil then
    v1:clear()
  end
end
function SetupState:spawn()
  self:spawnVehicles(function()
    local v1 = Timer.schedule(1000, function()
      local self = NetworkUtil.getObjectId(u0.runVehicle)
      v1:transition(SuperCup.STATES.START, {u0.playerUserId, self})
    end)
    u0.spawnTimer = v1
  end)
end
function SetupState:spawnVehicles(callBack)
  if not self.mission.userIdToPlayer[self.playerUserId].farmId then
  end
  local v5 = table.copy(self.vehicles)
  local v4 = Queue.fromList(...)
  v5 = v4:isEmpty()
  if v5 then
    callBack()
    return
  end
  local v8 = v4:pop()
  self:spawnVehicleAtNode(v8, function(self, callBack, v2, v3)
    if v2 == VehicleLoadingUtil.VEHICLE_LOAD_OK then
      callBack.isVehicleSaved = false
      if callBack.getIsEnterable ~= nil then
        self.runVehicle = callBack
      end
      table.insert(self.vehicleList, callBack)
    else
      Logging.xmlWarning(nil, "Could not spawn super cup vehicle!")
      return
    end
    local v4 = unpack(v3)
    local v5 = v4:isEmpty()
    if not v5 then
      local v7 = v4:pop()
      self:spawnVehicleAtNode(v7, u0, u1, u2)
      return
    end
    u3()
  end, v4, v3)
end
function SetupState.spawnVehicleAtNode(v0, v1, v2, v3, v4)
  local v5, v6, v7 = getWorldTranslation(v1.node)
  local v8, v9, v10 = getRotation(v1.baseNode)
  local v11, v12, v13 = getRotation(v1.node)
  return VehicleLoadingUtil.loadVehicle(v1.filename, {x = v5, y = v6, z = v7, yRot = v9 - v12 + v1.rotation}, true, 0, Vehicle.PROPERTY_STATE_OWNED, v4, nil, nil, v2, v0, {v3})
end
