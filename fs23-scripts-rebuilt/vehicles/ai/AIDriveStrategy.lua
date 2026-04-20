-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategy = {}
local AIDriveStrategy_mt = Class(AIDriveStrategy)
function AIDriveStrategy.new(customMt)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  return {lastValidGroundPosX = 0, lastValidGroundPosY = 0, lastValidGroundPosZ = 0, lastHasNoField = false, lookAheadDistanceField = 5}
end
function AIDriveStrategy.delete(v0)
end
function AIDriveStrategy:setAIVehicle(vehicle)
  self.vehicle = vehicle
  local v3 = v3:getAIDirectionNode()
  local v2, v3, v4 = getWorldTranslation(...)
  self.lastValidGroundPosX = v2
  self.lastValidGroundPosY = v3
  self.lastValidGroundPosZ = v4
  self.lastHasNoField = false
end
function AIDriveStrategy.update(v0, v1)
end
function AIDriveStrategy.getDriveData(v0, v1, v2, v3, v4)
  return nil, nil, nil, nil, nil
end
function AIDriveStrategy.updateDriving(v0, v1)
end
function AIDriveStrategy:getDistanceToEndOfField(dt, vX, vY, vZ)
  if self.lastHasNoField then
    local v5 = MathUtil.vector3Length(self.lastValidGroundPosX - vX, self.lastValidGroundPosY - vY, self.lastValidGroundPosZ - vZ)
    return self.distanceToEnd - v5, false, true
  end
  if not self.fieldEndGabDetected then
    -- if not v0.fieldEndGabDetectedByBits then goto L31 end
  end
  return 0, false, true
  local v6 = v6:getAttachedAIImplements()
  -- TODO: structure LOP_FORNPREP (pc 44, target 346)
  local v14, v15, v16 = v14:getAIMarkers()
  if 1 == 1 then
  else
    local v18, v19, v20 = v18:getAIMarkers()
    local v21, v22, v23 = localToLocal(v18, v20, 0, 0, 0)
    local v24, v25, v26 = localToLocal(v18, v14, 0, 0, 0)
    local v31 = v31:getAILookAheadSize()
    local v27 = math.max(0, v26 - v23 - v31)
    if self.turnData ~= nil and self.turnData.allImplementsOfSameType == true then
      local v28 = v28:getAILookAheadSize()
    end
  end
  v20 = v20:getAILookAheadSize()
  v21 = v21:getAIHasNoFullCoverageArea()
  if v21 then
    v21, v22, v23 = localToLocal(v16, v14, 0, 0, 0)
    v21 = math.abs(v23)
  end
  v21, v22, v23 = localToWorld(v14, 0, 0, v19)
  v24, v25, v26 = localToWorld(v15, 0, 0, v19)
  local v33, v34 = AIVehicleUtil.getAIAreaOfVehicle(v13.object, v21 + self.vehicle.aiDriveDirection[1] * v9, v23 + self.vehicle.aiDriveDirection[2] * v9, v24 + self.vehicle.aiDriveDirection[1] * v9, v26 + self.vehicle.aiDriveDirection[2] * v9, v21 + self.vehicle.aiDriveDirection[1] * v9 + self.vehicle.aiDriveDirection[1] * v20, v23 + self.vehicle.aiDriveDirection[2] * v9 + self.vehicle.aiDriveDirection[2] * v20, false)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local v37 = string.format("tool %d: area=%.1f areaTotal=%.1f", v12, v33, v34)
    v35:addAIDebugText(...)
    local v36 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v21 + self.vehicle.aiDriveDirection[1] * v9, 0, v23 + self.vehicle.aiDriveDirection[2] * v9)
    v37 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v24 + self.vehicle.aiDriveDirection[1] * v9, 0, v26 + self.vehicle.aiDriveDirection[2] * v9)
    local v38 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v21 + self.vehicle.aiDriveDirection[1] * v9 + self.vehicle.aiDriveDirection[1] * v20, 0, v23 + self.vehicle.aiDriveDirection[2] * v9 + self.vehicle.aiDriveDirection[2] * v20)
    v38:addAIDebugLine({v21 + self.vehicle.aiDriveDirection[1] * v9, v36 + 2, v23 + self.vehicle.aiDriveDirection[2] * v9}, {v24 + self.vehicle.aiDriveDirection[1] * v9, v37 + 2, v26 + self.vehicle.aiDriveDirection[2] * v9}, {0, 1, 0})
    v38:addAIDebugLine({v21 + self.vehicle.aiDriveDirection[1] * v9, v36 + 2, v23 + self.vehicle.aiDriveDirection[2] * v9}, {v21 + self.vehicle.aiDriveDirection[1] * v9 + self.vehicle.aiDriveDirection[1] * v20, v38 + 2, v23 + self.vehicle.aiDriveDirection[2] * v9 + self.vehicle.aiDriveDirection[2] * v20}, {0, 1, 0})
  end
  if 0 < v33 then
    local v35 = v35:getAIJobFarmId()
    v38 = v38:canFarmAccessLand(v35, (v29 + v31) * 0.5, (v30 + v32) * 0.5)
    if not v38 then
      v38 = v38:getIsMissionWorkAllowed(v35, (v29 + v31) * 0.5, (v30 + v32) * 0.5, nil)
      -- if not v38 then goto L344 end
    end
    -- goto L346  (LOP_JUMP +3)
    -- goto L345  (LOP_JUMP +1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 345, target 45)
  self.lastHasNoField = not v7
  if v7 then
    local v12 = v12:getAIDirectionNode()
    local v11, v12, v13 = localDirectionToWorld(v12, 0, 0, self.vehicle.lastMovedDistance + 0.75)
    self.lastValidGroundPosX = vX + v11
    self.lastValidGroundPosY = vY + v12
    self.lastValidGroundPosZ = vZ + v13
  else
    self.distanceToEnd = v9
    local v10 = MathUtil.vector3Length(self.lastValidGroundPosX - vX, self.lastValidGroundPosY - vY, self.lastValidGroundPosZ - vZ)
  end
  return v5, v7, v8
end
function AIDriveStrategy.debugPrint(v0, v1, ...)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local v5 = string.format(...)
    local v3 = string.format(...)
    print(...)
  end
end
