-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

for v6, v7 in ipairs({"src/events/FSMStateEvent.lua", "src/events/SuperCupStartEvent.lua", "src/events/SuperCupStopEvent.lua", "src/events/SuperCupDriverEvent.lua", "src/events/SuperCupCheckPointEvent.lua", "src/events/SuperCupPenaltyEvent.lua", "src/events/SuperCupSeeSawEvent.lua", "src/Timer.lua", "src/Queue.lua", "src/stateMachine/states/AbstractState.lua", "src/stateMachine/states/StartState.lua", "src/stateMachine/states/RunState.lua", "src/stateMachine/states/FinishState.lua", "src/stateMachine/states/SetupState.lua", "src/stateMachine/StateEngine.lua", "src/stateMachine/FSM.lua", "src/SuperCupUtil.lua", "src/SuperCup.lua", "src/SuperCupActivatable.lua", "src/gui/hud/SuperCupHUD.lua", "src/objects/Seesaw.lua", "src/objects/TrafficLight.lua", "src/objects/Cone.lua", "src/objects/ConeHandler.lua", "src/objects/Checkpoint.lua", "src/objects/ActionRequiredCheckpoint.lua", "src/checkpointActions/CheckpointAction.lua", "src/checkpointActions/ObjectLowerAction.lua", "src/checkpointActions/ParkAction.lua", "src/checkpointActions/PickupAction.lua", "src/checkpointActions/BalanceSeesawAction.lua"}) do
  local v9 = Utils.getFilename(v7, v0)
  source(...)
end
v7 = Utils.overwrittenFunction(Enterable.setMirrorVisible, function(self, v1, v2)
  if self.spec_enterable.activeCamera == nil then
    return
  end
  return v1(self, v2)
end)
Enterable.setMirrorVisible = v7
v7 = Utils.overwrittenFunction(VehicleLeaveEvent.run, function(self, v1, v2)
  v1(self, v2)
  local v3 = v2:getIsServer()
  if not v3 and self.object ~= nil and self.object.spec_superCupVehicle ~= nil and self.object.spec_superCupVehicle.superCupObject ~= nil then
    v5:stopSuperCup()
  end
end)
VehicleLeaveEvent.run = v7
v7 = Utils.overwrittenFunction(FSBaseMission.createPlayer, function(v0, v1, v2, v3, v4, v5)
  v1(v0, v2, v3, v4, v5)
  local v6 = v6:getPlayerByConnection(v2)
  if g_currentMission.userIdToPlayer == nil then
    g_currentMission.userIdToPlayer = {}
  end
  g_currentMission.userIdToPlayer[v5] = v6
end)
FSBaseMission.createPlayer = v7
