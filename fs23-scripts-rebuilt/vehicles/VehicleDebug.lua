-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleDebug = {WORKAREA_COLORS = {{1, 0, 0, 1}, {0, 1, 0, 1}, {0, 0, 1, 1}, {1, 1, 0, 1}, {1, 0, 1, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}}, COLOR = {}}
VehicleDebug.COLOR.ACTIVE = {0.5, 1, 0.5, 1}
VehicleDebug.COLOR.INACTIVE = {1, 0.1, 0.1, 1}
VehicleDebug.NONE = 0
VehicleDebug.DEBUG = 1
VehicleDebug.DEBUG_PHYSICS = 2
VehicleDebug.DEBUG_TUNING = 3
VehicleDebug.DEBUG_TRANSMISSION = 4
VehicleDebug.DEBUG_ATTRIBUTES = 5
VehicleDebug.DEBUG_ATTACHER_JOINTS = 6
VehicleDebug.DEBUG_AI = 7
VehicleDebug.DEBUG_SOUNDS = 8
VehicleDebug.DEBUG_ANIMATIONS = 9
VehicleDebug.STATE_NAMES = {[VehicleDebug.NONE] = "None", [VehicleDebug.DEBUG] = "Values", [VehicleDebug.DEBUG_PHYSICS] = "Physics", [VehicleDebug.DEBUG_TUNING] = "Tuning", [VehicleDebug.DEBUG_TRANSMISSION] = "Transmission", [VehicleDebug.DEBUG_ATTRIBUTES] = "Attributes", [VehicleDebug.DEBUG_ATTACHER_JOINTS] = "Attacher Joints", [VehicleDebug.DEBUG_AI] = "AI", [VehicleDebug.DEBUG_SOUNDS] = "Sounds", [VehicleDebug.DEBUG_ANIMATIONS] = "Animations"}
VehicleDebug.NUM_STATES = 9
VehicleDebug.state = 0
VehicleDebug.selectedAnimation = 0
if g_isDevelopmentVersion then
  VehicleDebug.state = 0
end
function VehicleDebug.consoleCommandVehicleDebug(unusedSelf, stateStr)
  if stateStr ~= nil then
    local n = tonumber(stateStr)
    if n == nil then
      for v7, v8 in pairs(VehicleDebug.STATE_NAMES) do
        local v10 = v8:lower()
        local v11 = stateStr:lower()
        local v9 = string.startsWith(...)
        if not v9 then
          continue
        end
      end
    else
    end
  end
  VehicleDebug.setState(v2)
  n = string.format("VehicleDebug set to '%s'", VehicleDebug.STATE_NAMES[VehicleDebug.state])
  return n
end
function VehicleDebug.setState(state)
  if VehicleDebug.state == 0 then
    VehicleDebug.debugActionEvents = {}
    -- TODO: structure LOP_FORNPREP (pc 18, target 81)
    local v4, v5 = v4:registerActionEvent(InputAction["DEBUG_VEHICLE_" .. 1], VehicleDebug, VehicleDebug.debugActionCallback, false, true, false, true, 1)
    v6:setActionEventTextVisibility(v5, false)
    table.insert(VehicleDebug.debugActionEvents, v5)
    -- TODO: structure LOP_FORNLOOP (pc 58, target 19)
  elseif state == 0 then
    -- TODO: structure LOP_FORNPREP (pc 69, target 81)
    v4:removeActionEvent(VehicleDebug.debugActionEvents[1])
    -- TODO: structure LOP_FORNLOOP (pc 80, target 70)
  end
  if state == VehicleDebug.DEBUG_ATTACHER_JOINTS then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L184
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L184
    local v1, v2 = v1:registerActionEvent(InputAction.AXIS_FRONTLOADER_ARM, VehicleDebug, VehicleDebug.moveUpperRotation, false, false, true, true)
    v3:setActionEventTextVisibility(v2, false)
    VehicleDebug.attacherJointUpperEventId = v2
    local v3, v4 = v3:registerActionEvent(InputAction.AXIS_FRONTLOADER_TOOL, VehicleDebug, VehicleDebug.moveLowerRotation, false, false, true, true)
    v5:setActionEventTextVisibility(v4, false)
    VehicleDebug.attacherJointLowerEventId = v4
  else
    v1:removeActionEvent(VehicleDebug.attacherJointUpperEventId)
    v1:removeActionEvent(VehicleDebug.attacherJointLowerEventId)
    VehicleDebug.attacherJointUpperEventId = nil
    VehicleDebug.attacherJointLowerEventId = nil
  end
  if state == VehicleDebug.DEBUG_AI then
    for v4, v5 in pairs(g_currentMission.vehicles) do
      if not (v5.spec_aiDrivable ~= nil) then
        continue
      end
      local v6 = v5:getIsActiveForInput(true, true)
      if not v6 then
        continue
      end
      if not (v5.spec_aiDrivable.agentId ~= nil) then
        continue
      end
      enableVehicleNavigationAgentDebugRendering(v5.spec_aiDrivable.agentId, true)
    end
  end
  if VehicleDebug.state == state then
    VehicleDebug.state = 0
  else
    VehicleDebug.state = state
  end
  if g_currentMission ~= nil then
    for v5, v6 in pairs(g_currentMission.vehicles) do
      v6:updateSelectableObjects()
      v6:updateActionEvents()
      v6:setSelectedVehicle(v6)
    end
  end
  return v1
end
function VehicleDebug:delete()
  if self.isServer then
    if self.spec_wheels ~= nil and self.spec_wheels.wheels ~= nil then
      local v2 = table.getn(self.spec_wheels.wheels)
      if 0 < v2 then
        for v5, v6 in ipairs(self.spec_wheels.wheels) do
          if v6.debugLateralFrictionGraph ~= nil then
            v7:delete()
          end
          if v6.debugLongitudalFrictionGraph ~= nil then
            v7:delete()
          end
          if v6.debugLongitudalFrictionSlipOverlay ~= nil then
            delete(v6.debugLongitudalFrictionSlipOverlay)
          end
          if not (v6.debugLateralFrictionSlipOverlay ~= nil) then
            continue
          end
          delete(v6.debugLateralFrictionSlipOverlay)
        end
      end
    end
    if self.spec_motorized ~= nil and self.spec_motorized.motor ~= nil then
      if self.spec_motorized.motor.debugCurveOverlay ~= nil then
        delete(self.spec_motorized.motor.debugCurveOverlay)
      end
      if v3.debugTorqueGraph ~= nil then
        v4:delete()
      end
      if v3.debugPowerGraph ~= nil then
        v4:delete()
      end
      if v3.debugGraphs ~= nil then
        for v7, v8 in ipairs(v3.debugGraphs) do
          v8:delete()
        end
      end
      if v3.debugLoadGraph ~= nil then
        v4:delete()
      end
      if v3.debugLoadGraphSmooth ~= nil then
        v4:delete()
      end
      if v3.debugLoadGraphSound ~= nil then
        v4:delete()
      end
      if v3.debugRPMGraphSmooth ~= nil then
        v4:delete()
      end
      if v3.debugRPMGraphSound ~= nil then
        v4:delete()
      end
      if v3.debugRPMGraph ~= nil then
        v4:delete()
      end
      if v3.debugAccelerationGraph ~= nil then
        v4:delete()
      end
    end
  end
end
function VehicleDebug.debugActionCallback(state, v1, v2, v3, v4)
  if VehicleDebug.state ~= v3 then
    VehicleDebug.setState(v3)
    local v6 = string.format("VehicleDebug set to '%s'", VehicleDebug.STATE_NAMES[VehicleDebug.state])
    log(...)
  end
end
function VehicleDebug.updateDebug(vehicle, dt)
  if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
    VehicleDebug.drawDebugAttributeRendering(vehicle)
  elseif VehicleDebug.state == VehicleDebug.DEBUG_ATTACHER_JOINTS then
    VehicleDebug.drawDebugAttacherJoints(vehicle)
  else
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      VehicleDebug.drawDebugAIRendering(vehicle)
    elseif VehicleDebug.state == VehicleDebug.DEBUG_TUNING then
      VehicleDebug.updateTuningDebugRendering(vehicle, dt)
    end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG then
    VehicleDebug.drawDebugValues(vehicle)
  end
end
function VehicleDebug:drawDebug()
  if self.getIsEntered ~= nil then
    local dt = self:getIsEntered()
    if dt then
      dt = self:getSelectedVehicle()
      if dt == nil then
      end
      if VehicleDebug.state == VehicleDebug.DEBUG_PHYSICS then
        VehicleDebug.drawDebugRendering(dt)
      elseif VehicleDebug.state == VehicleDebug.DEBUG_SOUNDS then
        VehicleDebug.drawSoundDebugValues(dt)
      else
        if VehicleDebug.state == VehicleDebug.DEBUG_ANIMATIONS then
          VehicleDebug.drawAnimationDebug(dt)
        elseif VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
          VehicleDebug.drawTransmissionDebug(dt)
        else
          if VehicleDebug.state == VehicleDebug.DEBUG_TUNING then
            VehicleDebug.drawTuningDebug(dt)
          end
        end
      end
      if 0 < VehicleDebug.state then
        setTextAlignment(RenderText.ALIGN_CENTER)
        -- TODO: structure LOP_FORNPREP (pc 116, target 178)
        if VehicleDebug.state == 1 then
          setTextColor(0, 1, 0, 1)
          local v11 = string.format("%s", VehicleDebug.STATE_NAMES[1])
          renderText(...)
        else
          setTextColor(1, 1, 0, 1)
          v11 = string.format("SHIFT + %d: '%s'", 1, VehicleDebug.STATE_NAMES[1])
          renderText(...)
        end
        -- TODO: structure LOP_FORNLOOP (pc 177, target 117)
        setTextAlignment(RenderText.ALIGN_LEFT)
      end
    end
  end
end
function VehicleDebug:registerActionEvents()
  if self.getIsEntered ~= nil then
    local dt = self:getIsEntered()
    if dt and VehicleDebug.state == VehicleDebug.DEBUG_ANIMATIONS then
      self:addActionEvent(self.actionEvents, InputAction.DEBUG_PLAYER_ENABLE, self, function()
        VehicleDebug.selectedAnimation = VehicleDebug.selectedAnimation + 1
      end, false, true, false, true, nil)
    end
  end
  if 0 < VehicleDebug.state then
    if VehicleDebug.debugActionEvents ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 52, target 64)
      v4:removeActionEvent(VehicleDebug.debugActionEvents[1])
      -- TODO: structure LOP_FORNLOOP (pc 63, target 53)
    end
    VehicleDebug.debugActionEvents = {}
    -- TODO: structure LOP_FORNPREP (pc 73, target 114)
    local v4, v5 = v4:registerActionEvent(InputAction["DEBUG_VEHICLE_" .. 1], VehicleDebug, VehicleDebug.debugActionCallback, false, true, false, true, 1)
    v6:setActionEventTextVisibility(v5, false)
    table.insert(VehicleDebug.debugActionEvents, v5)
    -- TODO: structure LOP_FORNLOOP (pc 113, target 74)
  end
end
function VehicleDebug:drawBaseDebugRendering(x, y)
  local v3, v4, v5 = getWorldTranslation(self.components[1].node)
  local v8 = v8:getFarmId()
  local v6 = v6:getIsOwnedByFarmAtWorldPosition(v8, v3, v5)
  if self.spec_motorized ~= nil then
    local v14 = self.spec_motorized.motor:getMotorAvailableTorque()
    local v15 = self.spec_motorized.motor:getMotorExternalTorque()
    local v18 = self.spec_motorized.motor:getMotorRotSpeed()
    local v20 = self.spec_motorized.motor:getNonClampedMotorRpm()
    v18 = string.format(...)
    local v22 = self.spec_motorized.motor:getClutchRotSpeed()
    v18 = string.format("%1.2frpm\n", v22 * 30 / math.pi)
    v18 = string.format("%1.2fhp %1.2fkW\n", v18 * (v14 - v15) * 1000 / 735.49875, v18 * (v14 - v15) * 1000 / 1000)
    local v23 = self.spec_motorized.motor:getGearRatio()
    v18 = string.format(...)
    local v21 = self.spec_motorized.motor:getMotorAppliedTorque()
    v18 = string.format(...)
    v20 = self.spec_motorized.motor:getNonClampedMotorRpm()
    local v19 = self.spec_motorized.motor:getPeakTorque()
    v20 = string.format("%.2f%% %.2fhp %.2fkW %1.2fkN\n", v15 / v19 * 100, v20 * math.pi / 30 * v15 * 1.359621, v20 * math.pi / 30 * v15, v15)
    v20 = string.format("%.2f%%\n", self.spec_motorized.smoothedLoadPercentage * 100)
    v22 = self.spec_motorized.motor:getLastMotorRpm()
    v20 = string.format(...)
    if not self.spec_wheels then
    end
    v20 = v20(v21, v23.brakePedal)
    v19 = self:getConsumerFillUnitIndex(FillType.DIESEL)
    if not v19 then
      v19 = self:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
      if not v19 then
        v19 = self:getConsumerFillUnitIndex(FillType.METHANE)
      end
    end
    if v19 ~= nil then
      v20 = self:getFillUnitFillLevel(v19)
      v21 = self:getFillUnitFillType(v19)
      if v21 == FillType.ELECTRICCHARGE then
      elseif v21 == FillType.METHANE then
      else
      end
      local v26 = v26:getFillTypeNameByIndex(v21)
      local v24 = string.format(...)
      v24 = string.format("%.2f%s/h (%.2f%s)\n", v11.lastFuelUsage, v22, v20, v22)
    end
    v20 = self:getConsumerFillUnitIndex(FillType.DEF)
    if v20 ~= nil then
      v21 = self:getFillUnitFillLevel(v20)
      v23 = string.format("%.2fl/h (%.2fl)\n", v11.lastDefUsage, v21)
    end
    v21 = self:getConsumerFillUnitIndex(FillType.AIR)
    if v21 ~= nil then
      v22 = self:getFillUnitFillLevel(v21)
      v24 = string.format("%.2fl/sec (%.2fl)\n", v11.lastAirUsage, v22)
    end
  end
  v14 = string.format("%1.4f\n", self.lastSpeedAcceleration * 1000 * 1000)
  if v12 ~= nil then
    local v16 = self:getLastSpeed()
    v14 = string.format(...)
    if 0.01 < v12 and 0.01 < self.lastSpeedReal * 3600 then
    end
    v16 = string.format("%1.3f (slip: %d%%)\n", v12, v14)
  else
    v16 = self:getLastSpeed()
    v14 = string.format(...)
  end
  v16 = tostring(v6)
  local v17 = self:getTotalMass(true)
  v14 = string.format("%1.1fkg\n", v17 * 1000)
  v17 = self:getTotalMass()
  v14 = string.format("%1.1fkg\n", v17 * 1000)
  if self.spec_attachable ~= nil then
    if self.spec_wheels ~= nil then
    end
    v15 = self:getBrakeForce()
    v16 = string.format("%1.2f / %1.2f\n", v15 / 10 * v13, v15 / 10)
  end
  local v13 = getCorrectTextSize(0.02)
  Utils.renderMultiColumnText(x, y, v13, {v7, v8}, 0.008, {RenderText.ALIGN_RIGHT, RenderText.ALIGN_LEFT})
  Utils.renderMultiColumnText(x + 0.22, y, v13, {v9, v10}, 0.008, {RenderText.ALIGN_RIGHT, RenderText.ALIGN_LEFT})
  v14 = getTextHeight(v13, v7)
  v15 = getTextHeight(v13, v9)
  return v14
end
function VehicleDebug:drawWheelInfoRendering(x, y)
  if self.isServer and self.spec_wheels ~= nil then
    local v4 = table.getn(self.spec_wheels.wheels)
    if 0 < v4 then
      for v8, v9 in ipairs(self.spec_wheels.wheels) do
        if not v9.wheelShapeCreated then
          continue
        end
        local v13 = getWheelShapeAxleSpeed(v9.node, v9.wheelShape)
        local v12, v13 = getWheelShapeSlip(v9.node, v9.wheelShape)
        local v14 = getWheelShapeContactForce(v9.node, v9.wheelShape)
        if v14 ~= nil then
          local v15, v16, v17 = getWheelShapeContactNormal(v9.node, v9.wheelShape)
          local v18, v19, v20 = localDirectionToWorld(v9.node, 0, -1, 0)
          local v22 = MathUtil.dotProduct(v18, v19, v20, v15, v16, v17)
          v22 = math.max(v16 * 9.81, 0)
        else
        end
        v17 = string.format("%d:\n", v8)
        v4[1] = v4[1] .. v17
        v17 = string.format("%2.2f\n", v12)
        v4[2] = v4[2] .. v17
        v17 = string.format("%2.2f\n", v13)
        v4[3] = v4[3] .. v17
        v17 = string.format("%2.2f\n", v14 / 9.81)
        v4[4] = v4[4] .. v17
        v17 = string.format("%2.2f\n", v9.sinkFrictionScaleFactor * v9.frictionScale * v9.tireGroundFrictionCoeff)
        v4[5] = v4[5] .. v17
        v17 = string.format("%1.0f%%\n", v10)
        v4[6] = v4[6] .. v17
        v17 = string.format("%3.1f\n", v11)
        v4[7] = v4[7] .. v17
        v19 = math.deg(v9.steeringAngle)
        v17 = string.format(...)
        v4[8] = v4[8] .. v17
        v17 = string.format("%.2f\n", v9.radius)
        v4[9] = v4[9] .. v17
        v17 = string.format("%.2f\n", v9.sinkFrictionScaleFactor * v9.maxLongStiffness)
        v4[10] = v4[10] .. v17
        v17 = string.format("%.2f\n", v9.sinkLatStiffnessFactor * v9.maxLatStiffness)
        v4[11] = v4[11] .. v17
        if not (4 < #v3.wheels) then
          continue
        end
        v15 = DebugUtil.isNodeInCameraRange(v9.repr, 30)
        if not v15 then
          continue
        end
        v15, v16, v17 = getWorldTranslation(v9.repr)
        if not v9.driveNode then
        end
        local v25 = v25(v26)
        v22 = v22(...)
        local v23 = getCorrectTextSize(0.008)
        v18(...)
      end
      v5 = getCorrectTextSize(0.02)
      Utils.renderMultiColumnText(x, y, v5, v4, 0.008, {RenderText.ALIGN_RIGHT, RenderText.ALIGN_LEFT})
      v6 = getTextHeight(v5, v4[1])
      return v6
    end
  end
  return 0
end
function VehicleDebug:drawWheelSlipGraphs()
  if self.isServer and self.spec_wheels ~= nil then
    local y = table.getn(self.spec_wheels.wheels)
    if 0 < y then
      for v5, v6 in ipairs(self.spec_wheels.wheels) do
        if not v6.wheelShapeCreated then
          continue
        end
        local v7, v8 = getWheelShapeSlip(v6.node, v6.wheelShape)
        local v9 = getWheelShapeContactForce(v6.node, v6.wheelShape)
        if v9 ~= nil then
          local v10, v11, v12 = getWheelShapeContactNormal(v6.node, v6.wheelShape)
          local v13, v14, v15 = localDirectionToWorld(v6.node, 0, -1, 0)
          local v17 = MathUtil.dotProduct(v13, v14, v15, v10, v11, v12)
          v17 = math.max(v11 * 9.81, 0)
        else
        end
        if v6.debugLongitudalFrictionGraph == nil then
          v12 = Graph.new(20, 0.028 + 0.138 * (v5 - 1), 0.837, 0.11, 0.15, 0, 0.0001, true, "", Graph.STYLE_LINES)
          v12:setColor(1, 1, 1, 1)
          v6.debugLongitudalFrictionGraph = v12
        else
          v6.debugLongitudalFrictionGraph.left = 0.028 + 0.138 * (v5 - 1)
          v6.debugLongitudalFrictionGraph.bottom = 0.837
          v6.debugLongitudalFrictionGraph.width = 0.11
          v6.debugLongitudalFrictionGraph.height = 0.15
        end
        v11.maxValue = 0.01
        -- TODO: structure LOP_FORNPREP (pc 130, target 159)
        local v15, v16 = computeWheelShapeTireForces(v6.node, v6.wheelShape, (1 - 1) / 19 * 1, v8, v9)
        v11:setValue(1, v15)
        v17 = math.max(v11.maxValue, v15)
        v11.maxValue = v17
        -- TODO: structure LOP_FORNLOOP (pc 158, target 131)
        if v6.debugLateralFrictionGraph == nil then
          v13 = Graph.new(20, v10, 0.6739999999999999, 0.11, 0.15, 0, 0.0001, true, "", Graph.STYLE_LINES)
          v13:setColor(1, 1, 1, 1)
          v6.debugLateralFrictionGraph = v13
        else
          v6.debugLateralFrictionGraph.left = v10
          v6.debugLateralFrictionGraph.bottom = 0.837
          v6.debugLateralFrictionGraph.width = 0.11
          v6.debugLateralFrictionGraph.height = 0.15
        end
        v12.maxValue = 0.01
        -- TODO: structure LOP_FORNPREP (pc 205, target 240)
        v16, v17 = computeWheelShapeTireForces(v6.node, v6.wheelShape, v7, (1 - 1) / 19 * 0.9, v9)
        local v18 = math.abs(v17)
        v12:setValue(1, v18)
        v18 = math.max(v12.maxValue, v18)
        v12.maxValue = v18
        -- TODO: structure LOP_FORNLOOP (pc 239, target 206)
        if v6.debugLongitudalFrictionSlipOverlay == nil then
          v14 = createImageOverlay("data/shared/graph_pixel.png")
          setOverlayColor(v14, 0, 1, 0, 0.2)
          v6.debugLongitudalFrictionSlipOverlay = v14
        end
        if v6.debugLateralFrictionSlipOverlay == nil then
          v15 = createImageOverlay("data/shared/graph_pixel.png")
          setOverlayColor(v15, 0, 1, 0, 0.2)
          v6.debugLateralFrictionSlipOverlay = v15
        end
        v11:draw()
        v12:draw()
        v15, v16 = computeWheelShapeTireForces(v6.node, v6.wheelShape, v7, v8, v9)
        local v25 = math.abs(v7)
        local v23 = math.min(v25 / 1, 1)
        local v26 = math.abs(v15)
        local v24 = math.min(v26 / v11.maxValue, 1)
        renderOverlay(v13, v10, 0.837, 0.11 * v23, 0.15 * v24)
        v25 = math.abs(v8)
        v23 = math.min(v25 / 0.9, 1)
        v26 = math.abs(v16)
        v24 = math.min(v26 / v12.maxValue, 1)
        renderOverlay(v14, v10, 0.6739999999999999, 0.11 * v23, 0.15 * v24)
      end
    end
  end
end
function VehicleDebug:drawDifferentialInfoRendering(x, y)
  if self.spec_motorized ~= nil and self.spec_motorized.differentials ~= nil then
    for v10, v11 in pairs(self.spec_motorized.differentials) do
      local v14 = string.format("%d:\n", v10)
      v6[1] = v6[1] .. v14
      v14 = string.format("%2.2f\n", v11.torqueRatio)
      v6[2] = v6[2] .. v14
      v14 = string.format("%2.2f\n", v11.maxSpeedRatio)
      v6[3] = v6[3] .. v14
      local v12, v13 = v4(v11)
      local v17 = math.abs(v12)
      local v18 = math.abs(v13)
      local v16 = math.max(...)
      local v19 = math.abs(v12)
      local v20 = math.abs(v13)
      v18 = math.min(...)
      v17 = math.max(v18, 0.001)
      v17 = string.format("%2.2f\n", v16 / v17)
      v6[4] = v6[4] .. v17
    end
    v10 = getCorrectTextSize(0.02)
    Utils.renderMultiColumnText(x, y, v10, v6, 0.008, {RenderText.ALIGN_RIGHT, RenderText.ALIGN_LEFT})
  end
end
function VehicleDebug:drawMotorGraphs(x, y, sizeX, sizeY, horizontal)
  if self.isServer and self.spec_motorized ~= nil then
    if self.spec_motorized.motor.debugCurveOverlay == nil then
      local v9 = createImageOverlay("data/shared/graph_pixel.png")
      setOverlayColor(v9, 0, 1, 0, 0.2)
      self.spec_motorized.motor.debugCurveOverlay = v9
    end
    v9 = v7:getTorqueCurve()
    local v12 = v7:getMinRpm()
    local v11 = math.min(v12, v9.keyframes[1].time)
    local v13 = v7:getMaxRpm()
    v12 = math.max(v13, v9.keyframes[#v9.keyframes].time)
    if v7.debugTorqueGraph == nil then
      local v16 = Graph.new(#v9.keyframes * 32, x, y, sizeX, sizeY, 0, 0.0001, true, "kN", Graph.STYLE_LINES)
      v16:setColor(1, 1, 1, 1)
      v7.debugTorqueGraph = v16
      v16 = Graph.new(#v9.keyframes * 32, x, y, sizeX, sizeY, 0, 0.0001, false, "", Graph.STYLE_LINES)
      v16:setColor(1, 0, 0, 1)
      v7.debugPowerGraph = v16
      v16.maxValue = 0.01
      v16.maxValue = 0.01
      -- TODO: structure LOP_FORNPREP (pc 124, target 218)
      local v20 = v7:getTorqueCurveValue((1 - 1) / (#v9.keyframes * 32 - 1) * (v9.keyframes[#v9.keyframes].time - v9.keyframes[1].time) + v9.keyframes[1].time)
      v16:setValue(1, v20)
      local v24 = math.max(v16.maxValue, v20)
      v16.maxValue = v24
      v16:setXPosition(1, ((1 - 1) / (#v9.keyframes * 32 - 1) * (v9.keyframes[#v9.keyframes].time - v9.keyframes[1].time) + v9.keyframes[1].time - v11) / (v12 - v11))
      v16:setValue(1, v20 * 1000 * ((1 - 1) / (#v9.keyframes * 32 - 1) * (v9.keyframes[#v9.keyframes].time - v9.keyframes[1].time) + v9.keyframes[1].time) * math.pi / 30 / 735.49875)
      v24 = math.max(v16.maxValue, v20 * 1000 * ((1 - 1) / (#v9.keyframes * 32 - 1) * (v9.keyframes[#v9.keyframes].time - v9.keyframes[1].time) + v9.keyframes[1].time) * math.pi / 30 / 735.49875)
      v16.maxValue = v24
      v16:setXPosition(1, ((1 - 1) / (#v9.keyframes * 32 - 1) * (v9.keyframes[#v9.keyframes].time - v9.keyframes[1].time) + v9.keyframes[1].time - v11) / (v12 - v11))
      -- TODO: structure LOP_FORNLOOP (pc 200, target 125)
    else
      v7.debugTorqueGraph.left = x
      v7.debugTorqueGraph.bottom = y
      v7.debugTorqueGraph.width = sizeX
      v7.debugTorqueGraph.height = sizeY
      v7.debugPowerGraph.left = x
      v7.debugPowerGraph.bottom = y
      v7.debugPowerGraph.width = sizeX
      v7.debugPowerGraph.height = sizeY
    end
    v13:draw()
    v14:draw()
    local v23 = v7:getNonClampedMotorRpm()
    v20 = MathUtil.clamp((v23 - v11) / (v12 - v11), 0, 1)
    renderOverlay(v8, x, y, sizeX * v20, sizeY)
    if horizontal then
    else
    end
    local v15 = v7:getMaximumForwardSpeed()
    if v7.debugGraphs == nil then
      if v7.currentDirection < 0 then
      end
      if v7.minForwardGearRatio == nil and v18 ~= nil then
      end
      v7.debugGraphs = {}
      -- TODO: structure LOP_FORNPREP (pc 281, target 532)
      local v22 = Graph.new(20, x, y, sizeX, sizeY, 0, 0.0001, true, "kN", Graph.STYLE_LINES)
      v22:setColor(1, 1, 1, 1)
      table.insert({}, v22)
      v23 = Graph.new(20, x, y, sizeX, sizeY, 0, 0.0001, false, "", Graph.STYLE_LINES)
      v23:setColor(1, 0, 0, 1)
      table.insert({}, v23)
      v24 = Graph.new(20, x, y, sizeX, sizeY, 0, 0.0001, false, "", Graph.STYLE_LINES)
      v24:setColor(0.35, 1, 0.85, 1)
      table.insert({}, v24)
      local v25 = Graph.new(20, x, y, sizeX, sizeY, 0, 0.0001, false, "", Graph.STYLE_LINES)
      v25:setColor(0.18, 0.18, 1, 1)
      table.insert({}, v25)
      v22.maxValue = 0.01
      v23.maxValue = 0.01
      v24.maxValue = 0.01
      v25.maxValue = 0.01
      for v28 = 1, 20 do
        if v17 == 1 then
          local v32, v33 = v7:getBestGear(1, (v28 - 1) / 19 * v15 * 30 / math.pi, 0, math.huge, 0)
        else
        end
        v33 = v9:get(v29 * 30 / math.pi * v31)
        if v11 <= v29 * 30 / math.pi * v31 and v29 * 30 / math.pi * v31 <= v12 then
          v22:setValue(v28, v33)
          local v36 = math.max(v22.maxValue, v33)
          v22.maxValue = v36
          v23:setValue(v28, v33 * 1000 * v29 * 30 / math.pi * v31 * math.pi / 30 / 735.49875)
          v36 = math.max(v23.maxValue, v33 * 1000 * v29 * 30 / math.pi * v31 * math.pi / 30 / 735.49875)
          v23.maxValue = v36
          v24:setValue(v28, v31)
          v36 = math.max(v24.maxValue, v31)
          v24.maxValue = v36
          v25:setValue(v28, v29 * 30 / math.pi * v31)
          v36 = math.max(v25.maxValue, v29 * 30 / math.pi * v31)
          v25.maxValue = v36
        end
        -- TODO: structure LOP_FORNLOOP (pc 515, target 410)
      end
    else
      -- TODO: structure LOP_FORNPREP (pc 521, target 532)
      v7.debugGraphs[1].left = x
      v7.debugGraphs[1].bottom = y
      v7.debugGraphs[1].width = sizeX
      v7.debugGraphs[1].height = sizeY
      -- TODO: structure LOP_FORNLOOP (pc 531, target 522)
    end
    for v20, v21 in pairs(v16) do
      v21:draw()
    end
    v22 = MathUtil.clamp(self.lastSpeedReal * 1000 / v15, 0, 1)
    renderOverlay(v8, x, y, sizeX * v22, sizeY)
    if horizontal then
    else
    end
    VehicleDebug.drawMotorLoadGraph(self, x, y, sizeX, sizeY)
  end
end
function VehicleDebug:drawMotorLoadGraph(x, y, sizeX, sizeY)
  if self.isServer and self.spec_motorized ~= nil then
    if self.spec_motorized.motor.debugLoadGraph == nil then
      local v10 = Graph.new(500, x, y, sizeX, sizeY, 0, 100, true, "%", Graph.STYLE_LINES, 0.1, "time")
      v10:setColor(1, 1, 1, 0.3)
      self.spec_motorized.motor.debugLoadGraph = v10
      v10 = Graph.new(500, x, y, sizeX, sizeY, 0, 100, false, "", Graph.STYLE_LINES)
      v10:setColor(0, 1, 0, 1)
      self.spec_motorized.motor.debugLoadGraphSmooth = v10
      v10 = Graph.new(500, x, y, sizeX, sizeY, 0, 100, false, "", Graph.STYLE_LINES)
      v10:setColor(0, 1, 1, 1)
      self.spec_motorized.motor.debugLoadGraphSound = v10
    else
      self.spec_motorized.motor.debugLoadGraph.left = x
      self.spec_motorized.motor.debugLoadGraph.bottom = y
      self.spec_motorized.motor.debugLoadGraph.width = sizeX
      self.spec_motorized.motor.debugLoadGraph.height = sizeY
      self.spec_motorized.motor.debugLoadGraphSmooth.left = x
      self.spec_motorized.motor.debugLoadGraphSmooth.bottom = y
      self.spec_motorized.motor.debugLoadGraphSmooth.width = sizeX
      self.spec_motorized.motor.debugLoadGraphSmooth.height = sizeY
      self.spec_motorized.motor.debugLoadGraphSound.left = x
      self.spec_motorized.motor.debugLoadGraphSound.bottom = y
      self.spec_motorized.motor.debugLoadGraphSound.width = sizeX
      self.spec_motorized.motor.debugLoadGraphSound.height = sizeY
    end
    if v7 ~= nil and v8 ~= nil and v9 ~= nil then
      local v11 = v6:getMotorAppliedTorque()
      local v13 = v6:getMotorAvailableTorque()
      local v12 = math.max(v13, 0.0001)
      v7:addValue(v11 / v12 * 100, nil, true)
      v8:addValue(v5.smoothedLoadPercentage * 100, nil, true)
      -- TODO: structure LOP_FORNPREP (pc 154, target 174)
      if v5.motorSamples[1].isGlsFile then
        local v18 = getSampleLoopSynthesisLoadFactor(v5.motorSamples[1].soundSample)
        v9:addValue(v18 * 100, nil, true)
      else
        -- TODO: structure LOP_FORNLOOP (pc 173, target 155)
      end
    end
    v7:draw()
    v8:draw()
    v9:draw()
  end
end
function VehicleDebug:drawMotorRPMGraph(x, y, sizeX, sizeY)
  if self.isServer and self.spec_motorized ~= nil then
    if self.spec_motorized.motor.debugRPMGraph == nil then
      local v16 = self.spec_motorized.motor:getMinRpm()
      local v17 = self.spec_motorized.motor:getMaxRpm()
      local v10 = Graph.new(500, x, y, sizeX, sizeY, v16, v17, true, " RPM", Graph.STYLE_LINES, 0.1, "")
      v10:setColor(1, 1, 1, 0.3)
      self.spec_motorized.motor.debugRPMGraph = v10
      v16 = self.spec_motorized.motor:getMinRpm()
      v17 = self.spec_motorized.motor:getMaxRpm()
      v10 = Graph.new(500, x, y, sizeX, sizeY, v16, v17, false, "", Graph.STYLE_LINES)
      v10:setColor(0, 1, 0, 1)
      self.spec_motorized.motor.debugRPMGraphSmooth = v10
      local v12 = self.spec_motorized.motor:getMinRpm()
      local v11 = self.spec_motorized.motor:getMaxRpm()
      -- TODO: structure LOP_FORNPREP (pc 87, target 108)
      if self.spec_motorized.motorSamples[1].isGlsFile then
        v16 = getSampleLoopSynthesisMinRPM(self.spec_motorized.motorSamples[1].soundSample)
        v16 = getSampleLoopSynthesisMaxRPM(self.spec_motorized.motorSamples[1].soundSample)
      else
        -- TODO: structure LOP_FORNLOOP (pc 107, target 88)
      end
      v12 = Graph.new(500, x, y, sizeX, sizeY, v10, v11, false, "", Graph.STYLE_LINES)
      v12:setColor(0, 1, 1, 1)
      v6.debugRPMGraphSound = v12
    else
      self.spec_motorized.motor.debugRPMGraph.left = x
      self.spec_motorized.motor.debugRPMGraph.bottom = y
      self.spec_motorized.motor.debugRPMGraph.width = sizeX
      self.spec_motorized.motor.debugRPMGraph.height = sizeY
      self.spec_motorized.motor.debugRPMGraphSmooth.left = x
      self.spec_motorized.motor.debugRPMGraphSmooth.bottom = y
      self.spec_motorized.motor.debugRPMGraphSmooth.width = sizeX
      self.spec_motorized.motor.debugRPMGraphSmooth.height = sizeY
      self.spec_motorized.motor.debugRPMGraphSound.left = x
      self.spec_motorized.motor.debugRPMGraphSound.bottom = y
      self.spec_motorized.motor.debugRPMGraphSound.width = sizeX
      self.spec_motorized.motor.debugRPMGraphSound.height = sizeY
    end
    if v7 ~= nil and v8 ~= nil and v9 ~= nil then
      v12 = v6:getLastRealMotorRpm()
      v7:addValue(v12, nil, true)
      v12 = v6:getLastModulatedMotorRpm()
      v8:addValue(v12, nil, true)
      -- TODO: structure LOP_FORNPREP (pc 184, target 204)
      if v5.motorSamples[1].isGlsFile then
        v16 = getSampleLoopSynthesisRPM(v5.motorSamples[1].soundSample, false)
        v9:addValue(v16, nil, true)
      else
        -- TODO: structure LOP_FORNLOOP (pc 203, target 185)
      end
    end
    v7:draw()
    v8:draw()
    v9:draw()
  end
end
function VehicleDebug:drawMotorAccelerationGraph(x, y, sizeX, sizeY)
  if self.isServer and self.spec_motorized ~= nil then
    if self.spec_motorized.motor.debugAccelerationGraph == nil then
      local v8 = Graph.new(250, x, y, sizeX, sizeY, 0, 1, true, " Load Factor", Graph.STYLE_LINES, 0.1, "")
      v8:setColor(1, 1, 1, 0.3)
      self.spec_motorized.motor.debugAccelerationGraph = v8
      self.spec_motorized.motor.debugAccelerationGraphAddValue = true
    else
      self.spec_motorized.motor.debugAccelerationGraph.left = x
      self.spec_motorized.motor.debugAccelerationGraph.bottom = y
      self.spec_motorized.motor.debugAccelerationGraph.width = sizeX
      self.spec_motorized.motor.debugAccelerationGraph.height = sizeY
    end
    if v7 ~= nil then
      if v6.debugAccelerationGraphAddValue then
        v7:addValue(v6.constantAccelerationCharge, nil, true)
      end
      v6.debugAccelerationGraphAddValue = not v6.debugAccelerationGraphAddValue
    end
    v7:draw()
  end
end
function VehicleDebug.drawDebugRendering(vehicle)
  local x, y = VehicleDebug.drawBaseDebugRendering(vehicle, 0.015, 0.65)
  local v5 = VehicleDebug.drawWheelInfoRendering(vehicle, 0.015, 0.64 - x - 0.005)
  local v11 = getCorrectTextSize(0.02)
  VehicleDebug.drawDifferentialInfoRendering(vehicle, 0.015, 0.64 - x - 0.005 - v5 + v11)
  VehicleDebug.drawWheelSlipGraphs(vehicle)
  VehicleDebug.drawMotorGraphs(vehicle, 0.65, 0.44, 0.25, 0.2, false)
end
function VehicleDebug.drawTuningDebug(vehicle)
  local x, y = VehicleDebug.drawBaseDebugRendering(vehicle, 0.015, 0.9)
  local v5 = VehicleDebug.drawWheelInfoRendering(vehicle, 0.015, 0.89 - x - 0.005)
  local v11 = getCorrectTextSize(0.02)
  VehicleDebug.drawDifferentialInfoRendering(vehicle, 0.015, 0.89 - x - 0.005 - v5 + v11)
end
function VehicleDebug:drawTransmissionDebug()
  local x, y = VehicleDebug.drawBaseDebugRendering(self, 0.015, 0.65)
  VehicleDebug.drawMotorGraphs(self, 0.01, 0.73, 0.25, 0.2, true)
  if self.spec_motorized ~= nil then
    local v8 = string.format("%d/%dkW\n", self.spec_motorized.motor.startGearValues.availablePower, self.spec_motorized.motor.peakMotorPower)
    v8 = string.format("%.2fkN\n", self.spec_motorized.motor.startGearValues.maxForce)
    v8 = string.format("%.2fto\n", self.spec_motorized.motor.startGearValues.mass)
    local v10 = math.deg(self.spec_motorized.motor.startGearValues.slope)
    v8 = string.format(...)
    local v11 = math.atan(self.spec_motorized.motor.startGearValues.slope)
    v8 = string.format("%.2f%%\n", v11 * 100)
    v8 = string.format("%.2f\n", self.spec_motorized.motor.startGearValues.massDirectionDifferenceXZ)
    v8 = string.format("%.2f\n", self.spec_motorized.motor.startGearValues.massDirectionDifferenceY)
    v8 = string.format("%.2f\n", self.spec_motorized.motor.startGearValues.massDirectionFactor)
    v8 = string.format("%.2f\n", self.spec_motorized.motor.startGearValues.massFactor)
    v11 = self:getSpeedLimit(true)
    v8 = string.format(...)
    v10 = self:getIsAutomaticShiftingAllowed()
    v8 = string.format(...)
    v10 = self.spec_motorized.motor:getIsGearChangeAllowed()
    v11 = self.spec_motorized.motor:getIsGearGroupChangeAllowed()
    v8 = string.format(...)
    v8 = string.format("%.1f/%.1f sec\n", self.spec_motorized.motor.gearGroupUpShiftTimer / 1000, self.spec_motorized.motor.gearGroupUpShiftTime / 1000)
    v8 = string.format("%d ms\n", self.spec_motorized.motor.clutchSlippingTimer)
    v10 = self.spec_motorized.motor:getCanMotorRun()
    v8 = string.format(...)
    v8 = string.format("%.2f\n", self.spec_motorized.motor.stallTimer)
    v8 = string.format("%d%%\n", self.spec_motorized.motor.lastTurboScale * 100)
    v8 = string.format("%d%%\n", self.spec_motorized.motor.blowOffValveState * 100)
    v10 = getCorrectTextSize(0.018)
    Utils.renderMultiColumnText(0.015, 0.65 - x, v10, {"" .. "\ngear start values:\n" .. "peakPower:\n" .. "maxForce:\n" .. "mass:\n" .. "slope angle:\n" .. "slope percentage:\n" .. "dirDiffXZ:\n" .. "dirDiffY:\n" .. "dirFac:\n" .. "massFac:\n" .. "speedLimit:\n" .. "auto shift allowed:\n" .. "gear/group change allowed:\n" .. "gear group shift timer:\n" .. "clutch slipping simer:\n" .. "motor can run:\n" .. "stall timer:\n" .. "turbo scale:\n" .. "blowOffValveState:\n", "" .. "\n\n" .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8 .. v8}, 0.008, {RenderText.ALIGN_RIGHT, RenderText.ALIGN_LEFT})
    if not self.spec_motorized.motor.forwardGears then
      -- if not v0.spec_motorized.motor.backwardGears then goto L879 end
    end
    if v6.currentDirection < 0 then
    end
    drawOutlineRect(0.222, 0.15, #v7 * 0.035 + 0.05, 0.35, 1 / g_screenWidth, 1 / g_screenHeight, 0, 0, 0, 1)
    drawFilledRect(0.222, 0.15, #v7 * 0.035 + 0.05, 0.35, 0, 0, 0, 0.4)
    drawFilledRect(0.272, 0.15, 1 / g_screenWidth, 0.35, 0, 0, 0, 1)
    drawFilledRect(0.272, 0.46499999999999997, #v7 * 0.035 + 0.05 - 0.05, 1 / g_screenHeight, 0, 0, 0, 1)
    drawFilledRect(0.272, 0.255, #v7 * 0.035 + 0.05 - 0.05, 1 / g_screenHeight, 0, 0, 0, 1)
    local v12 = v6:getGearRatioMultiplier()
    local v14 = v6:getGearRatioMultiplier()
    local v13 = math.abs(...)
    -- TODO: structure LOP_FORNPREP (pc 402, target 424)
    local v20 = math.max(1, v6.maxRpm * math.pi / 30 * v7[1].ratio * v13 * 3.6)
    -- TODO: structure LOP_FORNLOOP (pc 423, target 403)
    -- TODO: structure LOP_FORNPREP (pc 429, target 735)
    if not nil then
    end
    if not v18 then
    end
    if v6.gear ~= v21 then
      -- if not v22.lastHasPower then goto L492 end
    else
    end
    if v6.gear ~= v21 then
      -- if not v22.lastHasPower then goto L502 end
    end
    -- goto L503  (LOP_JUMP +1)
    v29(v30, v31, v32, v33, v34, 0.05, 0.05, 0.85)
    setTextAlignment(RenderText.ALIGN_CENTER)
    local v33 = string.format("%.2f", v22.ratio * v13)
    renderText(...)
    local v29 = v6:getStartInGearFactor(v22.ratio * v13)
    if v29 < v6.startGearThreshold then
      setTextColor(0, 1, 0, 1)
    else
      setTextColor(1, 0, 0, 1)
    end
    local v34 = string.format("%.2f", v29)
    renderText(...)
    if v12 ~= v13 then
      local v30 = v6:getStartInGearFactor(v22.ratio * v12)
      if v30 < v6.startGearThreshold then
        setTextColor(0, 1, 0, 1)
      else
        setTextColor(1, 0, 0, 1)
      end
      v34 = string.format("%.2f", v29)
      renderText(...)
    end
    setTextColor(1, 1, 1, 1)
    v34 = string.format("%.2f %.2f", v22.lastPowerFactor or 0, v22.lastRpmFactor or 0)
    renderText(...)
    v34 = string.format("%.2f %.2f", v22.lastGearChangeFactor or 0, v22.lastRpmPreferenceFactor or 0)
    renderText(...)
    if v22.nextPowerValid then
      setTextColor(0, 1, 0, 1)
    else
      setTextColor(1, 0, 0, 1)
    end
    v34 = string.format("%d", v22.lastNextPower or -1)
    renderText(...)
    if v22.nextRpmValid then
      setTextColor(0, 1, 0, 1)
    else
      setTextColor(1, 0, 0, 1)
    end
    v34 = string.format("%d", v22.lastNextRpm or -1)
    renderText(...)
    setTextColor(1, 1, 1, 1)
    v34 = string.format("%.2f", v22.lastTradeoff or 0)
    renderText(...)
    -- TODO: structure LOP_FORNLOOP (pc 734, target 430)
    setTextAlignment(RenderText.ALIGN_CENTER)
    renderText(0.247, 0.255 + v10 + 0.21 - 0.015, 0.015, "startFactor")
    local v19, v20 = v6:getBestStartGear(v6.currentGears)
    local v25 = string.format("best %d>%d", v20, v19)
    renderText(...)
    renderText(0.247, 0.1575, 0.01, "pwr/rpm")
    renderText(0.247, 0.1785, 0.01, "gearC/rpmPref")
    v25 = string.format("nextPwr (%d)", v18 or -1)
    renderText(...)
    renderText(0.247, 0.2205, 0.01, "nextRpm")
    renderText(0.247, 0.2415, 0.01, "tradeoff")
    local v21 = math.abs(v6.differentialRotSpeed * 3.6)
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_CENTER)
    local v27 = string.format("%.2f", v21)
    renderText(...)
    setTextBold(false)
    if v17 ~= nil then
      setTextAlignment(RenderText.ALIGN_LEFT)
      v27 = string.format("Speed after change: %.2fkm/h (%.1f sec)", v17 * 3.6, v6.gearChangeTime / 1000)
      renderText(...)
    end
    drawFilledRect(0.272, v22, v11, v10, 0, 1, 0, 0.5)
  end
end
function VehicleDebug:drawDebugAttributeRendering()
  local x = createTransformGroup("tempVehicleSizeCenter")
  link(self.rootNode, x)
  setTranslation(x, self.size.widthOffset, self.size.heightOffset + self.size.height / 2, self.size.lengthOffset)
  DebugUtil.drawDebugCube(x, self.size.width, self.size.height, self.size.length, 0, 0, 1)
  delete(x)
  if self.spec_attacherJoints ~= nil then
    for v5, v6 in pairs(self.spec_attacherJoints.attachedImplements) do
      if not (v6.object ~= nil) then
        continue
      end
      local v8, v9, v10 = getWorldTranslation(self.spec_attacherJoints.attacherJoints[v6.jointDescIndex].jointTransform)
      drawDebugPoint(v8, v9, v10, 1, 0, 0, 1)
      raycastAll(v8, v9, v10, 0, -1, 0, "raycastCallback", 4, {raycastCallback = function(self, x, y, v3, v4, v5)
        if u0.vehicleNodes[x] == nil and u1.object.vehicleNodes[x] == nil then
          self.groundDistance = v5
          return false
        end
        return true
      end, vehicle = self, object = v6.object, groundDistance = 0})
      drawDebugLine(v8, v9, v10, 0, 1, 0, v8, v9 - {raycastCallback = function(self, x, y, v3, v4, v5)
        if u0.vehicleNodes[x] == nil and u1.object.vehicleNodes[x] == nil then
          self.groundDistance = v5
          return false
        end
        return true
      end, vehicle = self, object = v6.object, groundDistance = 0}.groundDistance, v10, 0, 1, 0)
      drawDebugPoint(v8, v9 - {raycastCallback = function(self, x, y, v3, v4, v5)
        if u0.vehicleNodes[x] == nil and u1.object.vehicleNodes[x] == nil then
          self.groundDistance = v5
          return false
        end
        return true
      end, vehicle = self, object = v6.object, groundDistance = 0}.groundDistance, v10, 1, 0, 0, 1)
      local v16 = string.format("%.4f", {raycastCallback = function(self, x, y, v3, v4, v5)
        if u0.vehicleNodes[x] == nil and u1.object.vehicleNodes[x] == nil then
          self.groundDistance = v5
          return false
        end
        return true
      end, vehicle = self, object = v6.object, groundDistance = 0}.groundDistance)
      local v17 = getCorrectTextSize(0.02)
      Utils.renderTextAtWorldPosition(v8, v9 + 0.1, v10, v16, v17, 0)
      local v12 = v12:getActiveInputAttacherJoint()
      if not (0 < #v12.heightNodes) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 182, target 210)
      local v17, v18, v19 = getWorldTranslation(v12.heightNodes[1].node)
      local v20 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v17, v18, v19)
      local v23 = string.format("HeightNode: %.3f", v18 - v20)
      DebugUtil.drawDebugNode(...)
      -- TODO: structure LOP_FORNLOOP (pc 209, target 183)
    end
    v3 = self:getAttacherJoints()
    for v5, v6 in pairs(...) do
      v9 = getName(v6.jointTransform)
      DebugUtil.drawDebugNode(...)
      if not (v6.bottomArm ~= nil) then
        continue
      end
      if not (v6.bottomArm.referenceDistance ~= nil) then
        continue
      end
      local v7, v8, v9 = localToWorld(v6.bottomArm.translationNode, 0.435, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      local v10, v11, v12 = localToWorld(v6.bottomArm.translationNode, -0.435, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      drawDebugLine(v7, v8 - 0.1, v9, 0, 1, 0, v7, v8 + 0.1, v9, 0, 1, 0, true)
      drawDebugLine(v10, v11 - 0.1, v12, 0, 1, 0, v10, v11 + 0.1, v12, 0, 1, 0, true)
      local v13, v14, v15 = localToWorld(v6.bottomArm.translationNode, 0.359, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      v13, v14, v15 = localToWorld(v6.bottomArm.translationNode, -0.359, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      drawDebugLine(v13, v14 - 0.1, v15, 1, 0, 0, v13, v14 + 0.1, v15, 1, 0, 0, true)
      drawDebugLine(v13, v14 - 0.1, v15, 1, 0, 0, v13, v14 + 0.1, v15, 1, 0, 0, true)
      v13, v14, v15 = localToWorld(v6.bottomArm.translationNode, 0.505, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      v13, v14, v15 = localToWorld(v6.bottomArm.translationNode, -0.505, 0, v6.bottomArm.referenceDistance * v6.bottomArm.zScale)
      drawDebugLine(v13, v14 - 0.1, v15, 0, 0, 1, v13, v14 + 0.1, v15, 0, 0, 1, true)
      drawDebugLine(v13, v14 - 0.1, v15, 0, 0, 1, v13, v14 + 0.1, v15, 0, 0, 1, true)
    end
  end
  if self.spec_attachable ~= nil then
    v3 = self:getInputAttacherJoints()
    for v5, v6 in pairs(...) do
      if not (v6.jointType == AttacherJoints.JOINTTYPE_IMPLEMENT) then
        continue
      end
      v7, v8, v9 = localToWorld(v6.node, 0, 0, 0.435)
      v10, v11, v12 = localToWorld(v6.node, 0, 0, -0.435)
      drawDebugLine(v7, v8 - 0.1, v9, 0, 1, 0, v7, v8 + 0.1, v9, 0, 1, 0, true)
      drawDebugLine(v10, v11 - 0.1, v12, 0, 1, 0, v10, v11 + 0.1, v12, 0, 1, 0, true)
      v13, v14, v15 = localToWorld(v6.node, 0, 0, 0.359)
      v13, v14, v15 = localToWorld(v6.node, 0, 0, -0.359)
      drawDebugLine(v13, v14 - 0.1, v15, 1, 0, 0, v13, v14 + 0.1, v15, 1, 0, 0, true)
      drawDebugLine(v13, v14 - 0.1, v15, 1, 0, 0, v13, v14 + 0.1, v15, 1, 0, 0, true)
      v13, v14, v15 = localToWorld(v6.node, 0, 0, 0.505)
      v13, v14, v15 = localToWorld(v6.node, 0, 0, -0.505)
      drawDebugLine(v13, v14 - 0.1, v15, 0, 0, 1, v13, v14 + 0.1, v15, 0, 0, 1, true)
      drawDebugLine(v13, v14 - 0.1, v15, 0, 0, 1, v13, v14 + 0.1, v15, 0, 0, 1, true)
    end
  end
  if self.spec_wheels ~= nil then
    y = self:getWheels()
    -- TODO: structure LOP_FORNPREP (pc 642, target 795)
    if not y[1].isCareWheel then
      v7, v8, v9 = getWorldTranslation(y[1].destructionStartNode)
      v10, v11, v12 = getWorldTranslation(y[1].destructionWidthNode)
      v13, v14, v15 = getWorldTranslation(y[1].destructionHeightNode)
      local v16, v17, v18, v19, v20, v21 = MathUtil.getXZWidthAndHeight(v7, v9, v10, v12, v13, v15)
      DebugUtil.drawDebugParallelogram(v16, v17, v18, v19, v20, v21, v8, 1, 1, 0, 0.05, true)
      if y[1].additionalWheels ~= nil then
        for v25, v26 in pairs(y[1].additionalWheels) do
          if not v26.wheelShapeCreated then
            continue
          end
          local v28 = math.min(0.5, 0.5 * v26.width)
          if v6.repr ~= v6.driveNode then
          end
          local v30, v31, v32 = localToLocal(v26.wheelTire, v29, 0, 0, 0)
          local v33, v34, v35 = localToWorld(v29, v30 + v27, v31, v32 - v28)
          v33, v34, v35 = localToWorld(v29, v30 - v27, v31, v32 - v28)
          v33, v34, v35 = localToWorld(v29, v30 + v27, v31, v32 + v28)
          local v33, v34, v35, v36, v37, v38 = MathUtil.getXZWidthAndHeight(v33, v35, v33, v35, v33, v35)
          DebugUtil.drawDebugParallelogram(v33, v34, v35, v36, v37, v38, v34, 1, 1, 0, 0.05, true)
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 794, target 643)
  end
  if self.spec_workArea ~= nil then
    for v7, v8 in pairs(self.spec_workArea.workAreas) do
      if y[v8["type"]] == nil then
        y[v8["type"]] = VehicleDebug.WORKAREA_COLORS[v3 + 1]
      end
      v10, v11, v12, v13 = unpack(v9)
      DebugUtil.drawDebugArea(v8.start, v8.width, v8.height, v10, v11, v12, true)
      v14, v15, v16 = getWorldTranslation(v8.width)
      v17, v18, v19 = getWorldTranslation(v8.height)
      v22 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v17 + (v14 - v17) * 0.5, 0, v19 + (v16 - v19) * 0.5)
      v23 = self:getIsWorkAreaActive(v8)
      if v23 then
        -- if VehicleDebug.COLOR.ACTIVE then goto L884 end
      end
      v30 = v30:getWorkAreaTypeNameByIndex(v8["type"])
      local v29 = tostring(...)
      v30 = getCorrectTextSize(0.015)
      v33 = getCorrectTextSize(0.015)
      Utils.renderTextAtWorldPosition(v20, v22 + 0.1, v21, v29, v30, -v33 * 0.5, VehicleDebug.COLOR.INACTIVE)
    end
  end
  if self.getTipOcclusionAreas ~= nil then
    v3 = self:getTipOcclusionAreas()
    for v5, v6 in pairs(...) do
      DebugUtil.drawDebugArea(v6.start, v6.width, v6.height, 1, 1, 0, true, false, false)
    end
  end
  if self.spec_foliageBending ~= nil then
    for v5, v6 in ipairs(self.spec_foliageBending.bendingNodes) do
      if not (v6.id ~= nil) then
        continue
      end
      DebugUtil.drawDebugRectangle(v6.node, v6.minX, v6.maxX, v6.minZ, v6.maxZ, v6.yOffset, 1, 0, 0)
      DebugUtil.drawDebugRectangle(v6.node, v6.minX - 0.25, v6.maxX + 0.25, v6.minZ - 0.25, v6.maxZ + 0.25, v6.yOffset, 0, 1, 0)
    end
  end
  if self.spec_licensePlates ~= nil then
    for v6, v7 in ipairs(self.spec_licensePlates.licensePlates) do
      DebugUtil.drawDebugNode(v7.node, "")
      y(v7, v7.placementArea[2], v7.placementArea[1], v7.placementArea[3], true)
      y(v7, -v7.placementArea[4], v7.placementArea[1], v7.placementArea[3], true)
      y(v7, v7.placementArea[1], v7.placementArea[2], v7.placementArea[4], false)
      y(v7, -v7.placementArea[3], v7.placementArea[2], v7.placementArea[4], false)
    end
  end
  if self.spec_fillUnit ~= nil then
    y = self:getFillUnits()
    -- TODO: structure LOP_FORNPREP (pc 1070, target 1339)
    if y[1].autoAimTarget.node ~= nil and y[1].autoAimTarget.startZ ~= nil and y[1].autoAimTarget.endZ ~= nil then
      v9 = MathUtil.clamp((y[1].fillLevel - y[1].capacity * y[1].autoAimTarget.startPercentage) / (y[1].capacity - y[1].capacity * y[1].autoAimTarget.startPercentage), 0, 1)
      if y[1].autoAimTarget.invert then
      end
      v12 = getParent(v7.node)
      v11, v12, v13 = localToWorld(v12, v7.baseTrans[1], v7.baseTrans[2], v7.startZ)
      v15 = getParent(v7.node)
      v14, v15, v16 = localToWorld(v15, v7.baseTrans[1], v7.baseTrans[2], v7.endZ)
      drawDebugLine(v11, v12, v13, 0, 1, 0, v14, v15, v16, 0, 1, 0, true)
      drawDebugLine(v11, v12, v13, 1, 0, 0, v11, v12 + 0.2, v13, 1, 0, 0, true)
      drawDebugLine(v14, v15, v16, 1, 0, 0, v14, v15 + 0.2, v16, 1, 0, 0, true)
      v18 = getParent(v7.node)
      v17, v18, v19 = localToWorld(v18, v7.baseTrans[1], v7.baseTrans[2], (v7.endZ - v7.startZ) * v9 + v7.startZ)
      drawDebugLine(v17, v18, v19, 0, 0, 1, v17, v18 - 0.5, v19, 0, 0, 1, true)
      v21 = getParent(v7.node)
      v20, v21, v22 = localToWorld(v21, v7.baseTrans[1] - 0.5, v7.baseTrans[2], v7.startZ + 0.75)
      v24 = getParent(v7.node)
      v23, v24, v25 = localToWorld(v24, v7.baseTrans[1] + 0.5, v7.baseTrans[2], v7.startZ + 0.75)
      drawDebugLine(v20, v21, v22, 0, 1, 1, v23, v24, v25, 0, 1, 1, true)
      local v27 = getParent(v7.node)
      v26, v27, v28 = localToWorld(v27, v7.baseTrans[1] - 0.5, v7.baseTrans[2], v7.endZ - 0.75)
      v27 = getParent(v7.node)
      v26, v27, v28 = localToWorld(v27, v7.baseTrans[1] + 0.5, v7.baseTrans[2], v7.endZ - 0.75)
      drawDebugLine(v26, v27, v28, 0, 1, 1, v26, v27, v28, 0, 1, 1, true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 1338, target 1071)
  end
  if self.spec_dischargeable ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 1350, target 1391)
    v8, v9, v10 = localToWorld(self.spec_dischargeable.dischargeNodes[1].info.node, -self.spec_dischargeable.dischargeNodes[1].info.width, 0, self.spec_dischargeable.dischargeNodes[1].info.zOffset)
    v11, v12, v13 = localToWorld(self.spec_dischargeable.dischargeNodes[1].info.node, self.spec_dischargeable.dischargeNodes[1].info.width, 0, self.spec_dischargeable.dischargeNodes[1].info.zOffset)
    drawDebugLine(v8, v9, v10, 1, 0, 1, v11, v12, v13, 1, 0, 1)
    -- TODO: structure LOP_FORNLOOP (pc 1390, target 1351)
  end
  y = self:getIsActiveForInput()
  if y and self.spec_enterable ~= nil and self.spec_enterable.cameras[self.spec_enterable.camIndex] ~= nil then
    v4 = getName(self.spec_enterable.cameras[self.spec_enterable.camIndex].cameraPositionNode)
    v5, v6, v7 = getTranslation(self.spec_enterable.cameras[self.spec_enterable.camIndex].cameraPositionNode)
    if self.spec_enterable.cameras[self.spec_enterable.camIndex].rotateNode ~= nil then
    end
    v9, v10, v11 = getRotation(v8)
    if v3.hasExtraRotationNode then
    end
    v18 = math.deg(v9)
    v19 = math.deg(v10)
    v20 = math.deg(v11)
    v12 = string.format(...)
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextColor(0, 0, 0, 1)
    renderText(0.5 + 1 / g_screenWidth, 0.95 - 1 / g_screenHeight, 0.02, v12)
    renderText(0.5 + 1 / g_screenWidth, 0.98 - 1 / g_screenHeight, 0.05, "______________________________________________________________________")
    setTextColor(1, 1, 1, 1)
    renderText(0.5, 0.95, 0.02, v12)
    renderText(0.5, 0.98, 0.05, "______________________________________________________________________")
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
  for v5, v6 in pairs(self.components) do
    v7, v8, v9 = getCenterOfMass(v6.node)
    v10, v11, v12 = localToWorld(v6.node, v7, v8, v9)
    v10, v11, v12 = localDirectionToWorld(v6.node, 0, 0, 1)
    v13, v14, v15 = localDirectionToWorld(v6.node, 0, 1, 0)
    DebugUtil.drawDebugGizmoAtWorldPos(v10, v11, v12, v10, v11, v12, v13, v14, v15, "CoM comp" .. v5, false)
  end
  if self.spec_ikChains ~= nil then
    IKUtil.debugDrawChains(self.spec_ikChains.chains, true)
  end
  if self.spec_powerTakeOffs ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 1632, target 1700)
    if self.spec_powerTakeOffs.outputPowerTakeOffs[1].outputNode ~= nil then
      v6, v7, v8 = getWorldTranslation(self.spec_powerTakeOffs.outputPowerTakeOffs[1].outputNode)
      v9, v10, v11 = localDirectionToWorld(self.spec_powerTakeOffs.outputPowerTakeOffs[1].outputNode, 0, 0, 1)
      v12, v13, v14 = localDirectionToWorld(self.spec_powerTakeOffs.outputPowerTakeOffs[1].outputNode, 0, 1, 0)
      drawDebugLine(v6, v7, v8, 0, 1, 0, v6 + v12 * 0.25, v7 + v13 * 0.25, v8 + v14 * 0.25, 0, 1, 0)
      drawDebugLine(v6, v7, v8, 0, 0, 1, v6 + v9 * 0.25, v7 + v10 * 0.25, v8 + v11 * 0.25, 0, 0, 1)
    end
    -- TODO: structure LOP_FORNLOOP (pc 1699, target 1633)
  end
  if self.spec_connectionHoses ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 1711, target 1775)
    v6, v7, v8 = getWorldTranslation(self.spec_connectionHoses.targetNodes[1].node)
    v9, v10, v11 = localDirectionToWorld(self.spec_connectionHoses.targetNodes[1].node, 0, 0, -1)
    v12, v13, v14 = localDirectionToWorld(self.spec_connectionHoses.targetNodes[1].node, 0, 1, 0)
    drawDebugLine(v6, v7, v8, 0, 1, 0, v6 + v12 * 0.1, v7 + v13 * 0.1, v8 + v14 * 0.1, 0, 1, 0)
    drawDebugLine(v6, v7, v8, 0, 0, 1, v6 + v9 * 0.1, v7 + v10 * 0.1, v8 + v11 * 0.1, 0, 0, 1)
    -- TODO: structure LOP_FORNLOOP (pc 1774, target 1712)
  end
  if self.spec_mountable ~= nil then
    if self.spec_mountable.dynamicMountJointTransY ~= nil then
      DebugUtil.drawDebugRectangle(self.rootNode, -self.size.width * 0.5, self.size.width * 0.5, -self.size.length * 0.5, self.size.length * 0.5, self.spec_mountable.dynamicMountJointTransY, 0, 1, 0, 0.2, true)
    end
    if self.spec_mountable.additionalMountDistance ~= 0 then
      DebugUtil.drawDebugRectangle(self.rootNode, -self.size.width * 0.5, self.size.width * 0.5, -self.size.length * 0.5, self.size.length * 0.5, self.spec_mountable.additionalMountDistance, 1, 1, 0, 0.2, true)
    end
  end
end
function VehicleDebug:drawDebugAIRendering()
  if self.getAIMarkers ~= nil then
    local x = self:getIsAIActive()
    if x then
      x = self:getCanImplementBeUsedForAI()
      if x then
        local x, y, v3 = self:getAIMarkers()
        DebugUtil.drawDebugNode(x, "aiMarkerLeft", true)
        DebugUtil.drawDebugNode(y, "aiMarkerRight", true)
        DebugUtil.drawDebugNode(v3, "aiMarkerBack", true)
        local v4 = self:getAIToolReverserDirectionNode()
        if v4 ~= nil and v4 ~= v3 then
          local v7 = getName(v4)
          DebugUtil.drawDebugNode(v4, v7, true)
        end
      end
    end
    x = self:getIsAIActive()
    if not x then
      x = self:getAIImplementCollisionTrigger()
      if x ~= nil and x.node ~= nil then
        y, v3, v4 = getWorldTranslation(x.node)
        local v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, y, 0, v4)
        if v3 < 0 then
        end
        DebugUtil.drawDebugCube(x.node, x.width, x.height, x.length, 0, 0, 1, 0, -(v3 - v5 - x.height * 0.5), x.length * 0.5)
      end
    end
    for v5, v6 in ipairs(self.rootVehicle.childVehicles) do
      if not (v6 ~= self) then
        continue
      end
      if not (v6.getCanImplementBeUsedForAI ~= nil) then
        continue
      end
      v7 = v6:getCanImplementBeUsedForAI()
      if not v7 then
        continue
      end
      break
    end
    if not x then
      y = self:getIsSelected()
      -- if not v2 then goto L159 end
    end
    if self.spec_aiImplement ~= nil and self.spec_aiImplement.debugArea ~= nil then
      y:update(g_currentDt)
      y:addFrameElement(self.spec_aiImplement.debugArea)
    end
  end
  if self.drawDebugAIAgent ~= nil then
    self:drawDebugAIAgent()
  end
  if self.drawAIAgentAttachments ~= nil then
    self:drawAIAgentAttachments()
  end
  if Platform.gameplay.automaticVehicleControl and self.rootVehicle.getIsControlled ~= nil then
    y = self.rootVehicle:getIsControlled()
    if y and self.rootVehicle.actionController ~= nil then
      y:drawDebugRendering()
    end
  end
end
function VehicleDebug:drawDebugValues()
  for v5, v6 in ipairs(self.specializations) do
    if not (v6.updateDebugValues ~= nil) then
      continue
    end
    v6.updateDebugValues(self, {})
    if not (0 < #{}) then
      continue
    end
    table.insert(x, {title = self.specializationNames[v5], content = {}})
  end
  y = DebugInfoTable.new()
  y:createWithNodeToCamera(self.rootNode, 4, x, 0.05)
  v3:addFrameElement(y)
end
function VehicleDebug:drawSoundDebugValues()
  setTextColor(1, 1, 1, 1)
  for v11, v12 in pairs(g_soundManager.orderedSamples) do
    for v17, v18 in pairs(g_currentMission.surfaceSounds) do
      if not (v18.name == v12.sampleName) then
        continue
      end
    end
    if not (v12.modifierTargetObject == self) then
      continue
    end
    if not not v13 then
      continue
    end
    if not v12.isGlsFile then
      for v18, v19 in pairs(g_soundManager.modifierTypeIndexToDesc) do
        for v23, v24 in pairs({"volume", "pitch", "lowpassGain"}) do
          local v25, v26, v27 = v25:getSampleModifierValue(v12, v24, v18)
          if not not (v14 or v27) then
            break
          end
        end
      end
    end
    if v14 then
      drawOutlineRect(0.15, v7 - 0.06, v3, 0.06 + y, x, y, 0, 0, 0, 1)
      drawOutlineRect(0.15, v7 - 0.06, 0.7, 0.06 + y, x, y, 0, 0, 0, 1)
      v22 = v22:getIsSamplePlaying(v12)
      if v22 then
      else
      end
      v15(v16, v17, v18, v19, v20, v21, 0, 0.4)
      setTextAlignment(RenderText.ALIGN_CENTER)
      renderText(0.15 + v3 * 0.5, v7 + 0.06 - 0.012 - 0.0075, 0.018, v12.sampleName)
      if v12.isGlsFile then
        v21 = getSampleLoopSynthesisRPM(v12.soundSample, false)
        v23 = getSampleLoopSynthesisLoadFactor(v12.soundSample)
        v19 = string.format("loopSyn: rpm=%d load=%d%%", v21, v23 * 100)
        renderText(...)
      end
      setTextAlignment(RenderText.ALIGN_RIGHT)
      renderText(0.15 + v3 + v3 * 0.6, v7 + 0.06 - 0.015 - 0.0075, 0.015, "volume:")
      renderText(0.15 + v3 + v3 * 0.6, v7 + 0.06 - 0.03 - 0.0075, 0.015, "pitch:")
      renderText(0.15 + v3 + v3 * 0.6, v7 + 0.06 - 0.045 - 0.0075, 0.015, "lowpassGain:")
      v15 = v15:getModifierFactor(v12, "volume")
      v16 = math.max(v12.debugMaxVolume or 1, v12.current.volume * v15, v12.current.volume)
      v12.debugMaxVolume = v16
      v27 = string.format("%.2f", v12.current.volume * v15)
      v4(0.15 + v3 + v3 * 0.7, v7 + 0.06 - 0.015 - 0.0075, v3, 0.015, v12.current.volume * v15 / v12.debugMaxVolume, v12.current.volume / v12.debugMaxVolume, v27, 0, 0.5, 0, 0.4)
      v5(0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1, v7 + 0.06 - 0.015 - 0.0075, 1 - 0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1 - 0.15 - v3 * 0.1, 0.015, v12, "volume")
      v21 = v21:getModifierFactor(v12, "pitch")
      v22 = math.max(v12.debugMaxPitch or 1, v12.current.pitch * v21, v12.current.pitch)
      v12.debugMaxPitch = v22
      local v29 = string.format("%.2f", v12.current.pitch * v21)
      v4(0.15 + v3 + v3 * 0.7, v7 + 0.06 - 0.03 - 0.0075, v3, 0.015, v12.current.pitch * v21 / v12.debugMaxPitch, v12.current.pitch / v12.debugMaxPitch, v29, 0.5, 0.5, 0, 0.4)
      v5(0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1, v7 + 0.06 - 0.03 - 0.0075, 1 - 0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1 - 0.15, 0.015, v12, "pitch")
      v22 = v22:getModifierFactor(v12, "lowpassGain")
      v23 = math.max(v12.debugMaxLowPass or 1, v12.current.lowpassGain * v22, v12.current.lowpassGain)
      v12.debugMaxLowPass = v23
      local v30 = string.format("%.2f", v12.current.lowpassGain * v22)
      v4(0.15 + v3 + v3 * 0.7, v7 + 0.06 - 0.045 - 0.0075, v3, 0.015, v12.current.lowpassGain * v22 / v12.debugMaxLowPass, v12.current.lowpassGain / v12.debugMaxLowPass, v30, 0, 0.5, 0.5, 0.4)
      v5(0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1, v7 + 0.06 - 0.045 - 0.0075, 1 - 0.15 + v3 + v3 * 0.7 + v3 + v3 * 0.1 - 0.15, 0.015, v12, "lowpassGain")
    end
  end
  if self.spec_wheels then
    v9, v10, v11 = getWorldTranslation(self.rootNode)
    if self.spec_wheels.currentSurfaceSound then
      -- if v0.spec_wheels.currentSurfaceSound.sampleName then goto L495 end
    end
    v16 = v16(v17, "none")
    v12(v13, v14, v15, v16, 0.01)
  end
  setTextAlignment(RenderText.ALIGN_LEFT)
  VehicleDebug.drawMotorLoadGraph(self, 0.2, 0.05, 0.25, 0.2)
  VehicleDebug.drawMotorRPMGraph(self, 0.55, 0.05, 0.25, 0.2)
  VehicleDebug.drawMotorAccelerationGraph(self, 0.2, 0.28, 0.25, 0.1)
end
function VehicleDebug:drawAnimationDebug()
  if self.playAnimation ~= nil then
    for v10, v11 in pairs(self.spec_animatedVehicle.animations) do
      if not (0 < #v11.parts) then
        continue
      end
    end
    setTextColor(1, 1, 1, 1)
    for v13, v14 in pairs(v6.animations) do
      if not (0 < #v14.parts) then
        continue
      end
      drawOutlineRect(0.15, v9 - 0.05, 0.7, 0.05 + y, x, y, 0, 0, 0, 1)
      drawFilledRect(0.15, v9 - 0.05, 0.7, 0.05, 0, 0, 0, 0.4)
      drawFilledRect(0.15 + v3 - x, v9 - 0.05, x, 0.05, 0, 0, 0, 1)
      if v14.duration < 2000 then
      end
      if v14.duration < 1000 then
      end
      local v20 = math.floor(v14.duration / v16)
      -- TODO: structure LOP_FORNPREP (pc 128, target 172)
      if 1 * v16 ~= v14.duration then
        setTextAlignment(RenderText.ALIGN_CENTER)
        local v24 = string.format("%.1f", 1 * v16 / 1000)
        renderText(...)
        drawFilledRect(0.15 + v3 + v15 * 1 * v16, v9, x, 0.015, 0, 0, 0, 1)
      end
      -- TODO: structure LOP_FORNLOOP (pc 171, target 129)
      if v7 ~= v8 then
      end
      v17(true)
      setTextAlignment(RenderText.ALIGN_CENTER)
      renderText(0.15 + v3 * 0.5, v9 + 0.025 - 0.0075, 0.015, v13)
      setTextBold(false)
      if v7 == v8 then
        if v14.lineHeightByPart == nil then
          v14.lineHeightByPart = {}
        else
          for v21, v22 in pairs(v14.lineHeightByPart) do
            v14.lineHeightByPart[v21] = nil
          end
        end
        -- TODO: structure LOP_FORNPREP (pc 227, target 335)
        if not v14.parts[1].animationValues[1].node then
        end
        if v23 ~= nil and v14.lineHeightByPart[v23] == nil then
          drawOutlineRect(0.15, v9 - 0.0125, 0.7, 0.0125 + y, x, y, 0, 0, 0, 1)
          drawFilledRect(0.15, v9 - 0.0125, 0.7, 0.0125, 0, 0, 0, 0.2)
          drawFilledRect(0.15 + v3 - x, v9 - 0.0125, x, 0.0125, 0, 0, 0, 1)
          if v22.node ~= nil then
            local v27 = getName(v22.node)
            local v25 = string.format(...)
          elseif v22.componentJoint ~= nil then
            v25 = string.format("compJoint '%d'", v22.componentJoint.index)
          end
          setTextAlignment(RenderText.ALIGN_CENTER)
          renderText(0.15 + v3 * 0.5, v9 + 0.00625 - 0.005 + y * 2, 0.01, v24)
          v14.lineHeightByPart[v23] = v9
        end
        -- TODO: structure LOP_FORNLOOP (pc 334, target 228)
        if 0 < #v14.samples then
          drawOutlineRect(0.15, v9 - 0.018750000000000003, 0.7, 0.018750000000000003 + y, x, y, 0, 0, 0, 1)
          drawFilledRect(0.15, v9 - 0.018750000000000003, 0.7, 0.018750000000000003, 0, 0, 0, 0.2)
          setTextAlignment(RenderText.ALIGN_CENTER)
          renderText(0.5, v9 - 0.018750000000000003 + 0.009375000000000001 - 0.0075 + y * 2, 0.015, "Sounds:")
        end
        -- TODO: structure LOP_FORNPREP (pc 389, target 431)
        if {}[v14.samples[1].filename] == nil then
          {}[v14.samples[1].filename] = {}
        end
        table.insert(v18[v22.filename], {sample = v22, startTime = v22.startTime, endTime = v22.endTime, loops = v22.loops, direction = v22.direction})
        -- TODO: structure LOP_FORNLOOP (pc 430, target 390)
        for v22, v23 in pairs(v18) do
          drawOutlineRect(0.15, v9 - 0.0125, 0.7, 0.0125 + y, x, y, 0, 0, 0, 1)
          drawFilledRect(0.15, v9 - 0.0125, 0.7, 0.0125, 0, 0, 0, 0.2)
          drawFilledRect(0.15 + v3 - x, v9 - 0.0125, x, 0.0125, 0, 0, 0, 1)
          -- TODO: structure LOP_FORNPREP (pc 479, target 666)
          if not v23[1].sample.templateName then
          end
          local v33 = v33:getIsSamplePlaying(v28.sample)
          if v33 and v28.loops == 1 then
          end
          if v28.startTime ~= nil then
            -- cmp-jump LOP_JUMPXEQKNIL R39 aux=0x80000000 -> L552
            local v39 = math.max(0.15 + v3, 0.15 + v3 + v15 * v28.startTime - v15 * 25)
            v39 = math.min(0.85 - v39 + v15 * 50, 0)
          elseif v28.startTime ~= nil then
            -- cmp-jump LOP_JUMPXEQKNIL R39 aux=0x0 -> L581
            -- cmp-jump LOP_JUMPXEQKN R39 aux=0x80000059 -> L581
          else
            if v28.startTime ~= nil and v28.endTime ~= nil and v28.loops == 1 then
              v39 = math.max(0.15 + v3, 0.15 + v3 + v15 * v28.startTime - v15 * 25)
              v39 = math.min(0.85 - v39 + v15 * 50, 0)
              drawFilledRect(v39, v9 + 0.0012500000000000002 + y, v15 * 50 + v39, 0.010000000000000002 - y, v29, v30, 0, 0.9)
              v39 = math.max(0.15 + v3, 0.15 + v3 + v15 * v28.endTime - v15 * 25)
              v39 = math.min(0.85 - v39 + v15 * 50, 0)
            end
          end
          drawFilledRect(v35, v36, v37, v38, v29, v30, 0, 0.9)
          -- TODO: structure LOP_FORNLOOP (pc 665, target 480)
          setTextAlignment(RenderText.ALIGN_CENTER)
          renderText(0.15 + v3 * 0.5, v9 + 0.00625 - 0.005 + y * 2, 0.01, v24)
        end
        -- TODO: structure LOP_FORNPREP (pc 690, target 728)
        if not v14.parts[1].animationValues[1].node then
        end
        if v24 ~= nil then
          drawFilledRect(0.15 + v3 + v15 * v22.startTime, v14.lineHeightByPart[v24] + 0.0012500000000000002 + y, v15 * v22.duration, 0.010000000000000002 - y, 0, 0, 0, 0.9)
        end
        -- TODO: structure LOP_FORNLOOP (pc 727, target 691)
      end
      drawFilledRect(0.15 + v3 + v15 * v14.currentTime, v9, x, v17 - v9 + 0.034999999999999996, 0, 1, 0, 1)
      setTextAlignment(RenderText.ALIGN_CENTER)
      v22 = string.format("%.2f", v14.currentTime / 1000)
      renderText(...)
    end
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
end
function VehicleDebug:updateTuningDebugRendering(x)
  if self.getWheels ~= nil and g_gui.currentGuiName == "ShopConfigScreen" then
    local y = self:getWheels()
    -- TODO: structure LOP_FORNPREP (pc 14, target 117)
    local v7, v8, v9 = getWorldTranslation(y[1].driveNodeDirectionNode)
    if v8 < 50 then
    else
      local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v7, 0, v9)
    end
    local v15 = string.format("%.3f", v10)
    local v16 = getCorrectTextSize(0.012)
    Utils.renderTextAtWorldPosition(v7, v8, v9, v15, v16, 0)
    local v11, v12, v13 = localToLocal(v6.driveNode, v6.node, 0, 0, 0)
    if v6.isLeft then
    else
    end
    local v15, v16, v17 = localToWorld(v6.driveNode, v16 * v17 + v6.widthOffset, 0, 0)
    local v23 = math.abs(v11)
    local v24 = math.abs(v16 * v17 + v6.widthOffset)
    local v19 = string.format("%.3f", (v23 + v24) * 2)
    local v20 = getCorrectTextSize(0.012)
    Utils.renderTextAtWorldPosition(v15, v8 - v6.radius, v17, v19, v20, 0)
    -- TODO: structure LOP_FORNLOOP (pc 116, target 15)
  end
end
function VehicleDebug.consoleCommandAnalyze(unusedSelf)
  if g_currentMission ~= nil and g_currentMission.controlledVehicle ~= nil and g_currentMission.controlledVehicle.isServer then
    local x = x:getSelectedVehicle()
    if x == nil then
    end
    print("Analyzing vehicle '" .. x.configFileName .. "'. Make sure vehicle is standing on a flat plane parallel to xz-plane")
    if x.spec_attacherJoints ~= nil then
      for v6, v7 in ipairs(x.spec_attacherJoints.attacherJoints) do
        local v8, v9, v10 = getRotation(v7.jointTransform)
        local v13 = unpack(v7.jointOrigRot)
        setRotation(...)
        if v7.rotationNode == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L425
        end
        if v7.rotationNode ~= nil then
          local v14, v15, v16 = getRotation(v7.rotationNode)
        end
        if v7.rotationNode2 ~= nil then
          local v17, v18, v19 = getRotation(v7.rotationNode2)
        end
        if v7.rotationNode ~= nil then
          v19 = unpack(v7.lowerRotation)
          setRotation(...)
        end
        if v7.rotationNode2 ~= nil then
          v19 = unpack(v7.lowerRotation2)
          setRotation(...)
        end
        v17, v18, v19 = getWorldTranslation(v7.jointTransform)
        y.groundDistance = 0
        y.vehicle = x
        raycastAll(v17, v18, v19, 0, -1, 0, "raycastCallback", 4, y)
        local v20 = math.abs(y.groundDistance - v7.lowerDistanceToGround)
        if 0.01 < v20 then
          local v24 = MathUtil.round(y.groundDistance, 3)
          local v21 = string.format(" Issue found: Attacher joint %d has invalid lowerDistanceToGround. True value is: %.3f (Value in xml: %.3f)", v6, v24, v7.lowerDistanceToGround)
          print(...)
        end
        if v7.rotationNode ~= nil and v7.rotationNode2 ~= nil then
          local v20, v21, v22 = localDirectionToWorld(v7.jointTransform, 0, 1, 0)
          local v25 = MathUtil.clamp(v21, -1, 1)
          v24 = math.acos(...)
          local v23 = math.deg(...)
          local v24, v25, v26 = localDirectionToWorld(v7.jointTransform, 1, 0, 0)
          if v25 < 0 then
          end
          local v29 = math.deg(v7.lowerRotationOffset)
          local v27 = math.abs(v23 - v29)
          if 1 < v27 then
            local v32 = math.deg(v7.lowerRotationOffset)
            local v28 = string.format(...)
            print(...)
          end
        end
        if v7.rotationNode ~= nil then
          v22 = unpack(v7.upperRotation)
          setRotation(...)
        end
        if v7.rotationNode2 ~= nil then
          v22 = unpack(v7.upperRotation2)
          setRotation(...)
        end
        v20, v21, v22 = getWorldTranslation(v7.jointTransform)
        y.groundDistance = 0
        raycastAll(v20, v21, v22, 0, -1, 0, "raycastCallback", 4, y)
        v20 = math.abs(y.groundDistance - v7.upperDistanceToGround)
        if 0.01 < v20 then
          v24 = MathUtil.round(y.groundDistance, 3)
          v21 = string.format(" Issue found: Attacher joint %d has invalid upperDistanceToGround. True value is: %.3f (Value in xml: %.3f)", v6, v24, v7.upperDistanceToGround)
          print(...)
        end
        if v7.rotationNode ~= nil and v7.rotationNode2 ~= nil then
          v20, v21, v22 = localDirectionToWorld(v7.jointTransform, 0, 1, 0)
          v25 = MathUtil.clamp(v21, -1, 1)
          v24 = math.acos(...)
          v23 = math.deg(...)
          v24, v25, v26 = localDirectionToWorld(v7.jointTransform, 1, 0, 0)
          if v25 < 0 then
          end
          v29 = math.deg(v7.upperRotationOffset)
          v27 = math.abs(v23 - v29)
          if 1 < v27 then
            v32 = math.deg(v7.upperRotationOffset)
            v28 = string.format(...)
            print(...)
          end
        end
        if v7.rotationNode ~= nil then
          setRotation(v7.rotationNode, v11, v12, v13)
        end
        if v7.rotationNode2 ~= nil then
          setRotation(v7.rotationNode2, v14, v15, v16)
        end
        setRotation(v7.jointTransform, v8, v9, v10)
        if not (v7.transNode ~= nil) then
          continue
        end
        local v11, v12, v13 = getTranslation(v7.transNode)
        v16 = getParent(v7.transNode)
        v14, v15, v16 = localToLocal(x.rootNode, v16, 0, v7.transNodeMinY, 0)
        setTranslation(v7.transNode, v11, v15, v13)
        y.groundDistance = 0
        y.vehicle = x
        v17, v18, v19 = getWorldTranslation(v7.transNode)
        raycastAll(v17, v18, v19, 0, -1, 0, "raycastCallback", 4, y)
        v20 = math.abs(y.groundDistance - v7.lowerDistanceToGround)
        if 0.02 < v20 then
          v24 = MathUtil.round(y.groundDistance, 3)
          v21 = string.format(" Issue found: Attacher joint %d has invalid lowerDistanceToGround. True value is: %.3f (Value in xml: %.3f)", v6, v24, v7.lowerDistanceToGround)
          print(...)
        end
        v22 = getParent(v7.transNode)
        v20, v21, v22 = localToLocal(x.rootNode, v22, 0, v7.transNodeMaxY, 0)
        setTranslation(v7.transNode, v11, v21, v13)
        y.groundDistance = 0
        v20, v21, v22 = getWorldTranslation(v7.transNode)
        raycastAll(v20, v21, v22, 0, -1, 0, "raycastCallback", 4, y)
        v20 = math.abs(y.groundDistance - v7.upperDistanceToGround)
        if 0.02 < v20 then
          v24 = MathUtil.round(y.groundDistance, 3)
          v21 = string.format(" Issue found: Attacher joint %d has invalid upperDistanceToGround. True value is: %.3f (Value in xml: %.3f)", v6, v24, v7.upperDistanceToGround)
          print(...)
        end
        setTranslation(v7.transNode, v11, v12, v13)
      end
    end
    if x.spec_wheels ~= nil then
      for v6, v7 in ipairs(x.spec_wheels.wheels) do
        if not v7.wheelShapeCreated then
          continue
        end
        v8, v9, v10 = getCenterOfMass(v7.node)
        if v9 < v7.positionY + v7.deltaY - v7.radius * v7.forcePointRatio then
          v13 = string.format(" Issue found: Wheel %d has force point higher than center of mass. %.2f > %.2f. This can lead to undesired driving behavior (inward-leaning).", v6, v7.positionY + v7.deltaY - v7.radius * v7.forcePointRatio, v9)
          print(...)
        end
        v12 = getWheelShapeContactForce(v7.node, v7.wheelShape)
        if not (v12 ~= nil) then
          continue
        end
        v13, v14, v15 = getWheelShapeContactNormal(v7.node, v7.wheelShape)
        v16, v17, v18 = localDirectionToWorld(v7.node, 0, -1, 0)
        v20 = MathUtil.dotProduct(v16, v17, v18, v13, v14, v15)
        v20 = math.max(v14 * 9.81, 0)
        v19 = math.abs((-v12 * v20 + v20 * v7.mass) / 9.81 - v7.restLoad)
        if not (0.2 < v19) then
          continue
        end
        v20 = string.format(" Issue found: Wheel %d has wrong restLoad. %.2f vs. %.2f in XML. Verify that this leads to the desired behavior.", v6, (-v12 * v20 + v20 * v7.mass) / 9.81, v7.restLoad)
        print(...)
      end
    end
    return "Analyzed vehicle"
  end
  return "Failed to analyze vehicle. Invalid controlled vehicle"
end
function VehicleDebug.moveUpperRotation(vehicle, x, y, v3, v4)
  if VehicleDebug.currentAttacherJointVehicle ~= nil and y ~= 0 and VehicleDebug.currentAttacherJointVehicle.getAttacherVehicle ~= nil then
    local v6 = VehicleDebug.currentAttacherJointVehicle:getAttacherVehicle()
    if v6 ~= nil then
      local v7 = v6:getImplementByObject(VehicleDebug.currentAttacherJointVehicle)
      if v7 ~= nil and v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].rotationNode ~= nil then
        local v13 = math.rad(y * 0.002 * 16)
        v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].upperRotation[1] = v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].upperRotation[1] + v13
        v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].moveAlpha = v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].moveAlpha - 0.001
        v13 = math.deg(v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].upperRotation[1])
        print("upperRotation: " .. v13)
      end
    end
  end
end
function VehicleDebug.moveLowerRotation(vehicle, x, y, v3, v4)
  if VehicleDebug.currentAttacherJointVehicle ~= nil and y ~= 0 and VehicleDebug.currentAttacherJointVehicle.getAttacherVehicle ~= nil then
    local v6 = VehicleDebug.currentAttacherJointVehicle:getAttacherVehicle()
    if v6 ~= nil then
      local v7 = v6:getImplementByObject(VehicleDebug.currentAttacherJointVehicle)
      if v7 ~= nil and v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].rotationNode ~= nil then
        local v13 = math.rad(y * 0.002 * 16)
        v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].lowerRotation[1] = v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].lowerRotation[1] + v13
        v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].moveAlpha = v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].moveAlpha - 0.001
        v13 = math.deg(v6.spec_attacherJoints.attacherJoints[v7.jointDescIndex].lowerRotation[1])
        print("lowerRotation: " .. v13)
      end
    end
  end
end
function VehicleDebug.consoleCommandExportScenegraph(vehicle)
  if g_currentMission ~= nil and g_currentMission.controlledVehicle ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 15, target 68)
    local v6 = getTimeSec()
    local v11 = getUserProfileAppPath()
    local v7 = string.format(v11 .. "scenegraph_%s.xml", g_currentMission.controlledVehicle.childVehicles[1].configFileNameClean)
    local v8 = XMLFile.create("scenegraph", v7, "scenegraph", nil)
    function(vehicle, x)
      local v5 = getNumOfChildren(vehicle)
      -- TODO: structure LOP_FORNPREP (pc 7, target 127)
      v5 = getChildAt(vehicle, 1 - 1)
      if x == nil then
      else
      end
      local v7 = string.format("scenegraph.node(%d)", u0)
      local v11 = getName(v5)
      v8:setString(...)
      v8:setString(v7 .. "#indexPath", v6)
      for v11, v12 in pairs(ClassIds) do
        local v13 = getHasClassId(vehicle, v12)
        if not v13 then
          continue
        end
        v13:setString(v7 .. "#classId", v11)
        break
      end
      v8, v9, v10 = getTranslation(v5)
      v11:setString(v7 .. "#translation", v8 .. " " .. v9 .. " " .. v10)
      v11, v12, v13 = getRotation(v5)
      local v23 = math.deg(v11)
      v23 = math.deg(v12)
      local v22 = math.deg(v13)
      v14:setString(v7 .. "#rotation", v23 .. " " .. v23 .. " " .. v22)
      u0 = u0 + 1
      u2(v5, v6)
      -- TODO: structure LOP_FORNLOOP (pc 126, target 8)
    end(g_currentMission.controlledVehicle.childVehicles[1].rootNode)
    v8:save()
    v8:delete()
    v11 = getTimeSec()
    Logging.info("Exported '%s' in %.1fms", v7, (v11 - v6) * 1000)
    -- TODO: structure LOP_FORNLOOP (pc 67, target 16)
  end
end
function VehicleDebug.drawDebugAttacherJoints(vehicle)
  VehicleDebug.currentAttacherJointVehicle = vehicle
end
addConsoleCommand("gsVehicleAnalyze", "Analyze vehicle", "VehicleDebug.consoleCommandAnalyze", nil)
addConsoleCommand("gsVehicleDebug", "Toggles the vehicle debug values rendering", "VehicleDebug.consoleCommandVehicleDebug", nil)
addConsoleCommand("gsVehicleExportScenegraph", "Exports the vehicle scenegraph to a xml file", "VehicleDebug.consoleCommandExportScenegraph", nil)
local vehicle = StartParams.getIsSet("vehicleDebugMode")
if vehicle then
  local y = StartParams.getValue("vehicleDebugMode")
  VehicleDebug.consoleCommandVehicleDebug(...)
end
