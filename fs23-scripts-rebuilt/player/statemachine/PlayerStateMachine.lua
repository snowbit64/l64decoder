-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateMachine = {}
local PlayerStateMachine_mt = Class(PlayerStateMachine)
function PlayerStateMachine.new(player, custom_mt)
  if custom_mt == nil then
  end
  local v2 = setmetatable({}, custom_mt)
  v2.player = player
  local v3 = PlayerStateIdle.new(v2.player, v2)
  v2.playerStateIdle = v3
  v3 = PlayerStateWalk.new(v2.player, v2)
  v2.playerStateWalk = v3
  v3 = PlayerStateRun.new(v2.player, v2)
  v2.playerStateRun = v3
  v3 = PlayerStateJump.new(v2.player, v2)
  v2.playerStateJump = v3
  v3 = PlayerStateSwim.new(v2.player, v2)
  v2.playerStateSwim = v3
  v3 = PlayerStateFall.new(v2.player, v2)
  v2.playerStateFall = v3
  v3 = PlayerStateCrouch.new(v2.player, v2)
  v2.playerStateCrouch = v3
  v3 = PlayerStateAnimalInteract.new(v2.player, v2)
  v2.playerStateAnimalInteract = v3
  v3 = PlayerStateAnimalRide.new(v2.player, v2)
  v2.playerStateAnimalRide = v3
  v3 = PlayerStateAnimalPet.new(v2.player, v2)
  v2.playerStateAnimalPet = v3
  v3 = PlayerStatePickup.new(v2.player, v2)
  v2.playerStatePickup = v3
  v3 = PlayerStateDrop.new(v2.player, v2)
  v2.playerStateDrop = v3
  v3 = PlayerStateThrow.new(v2.player, v2)
  v2.playerStateThrow = v3
  v3 = PlayerStateUseLight.new(v2.player, v2)
  v2.playerStateUseLight = v3
  v3 = PlayerStateCycleHandtool.new(v2.player, v2)
  v2.playerStateCycleHandtool = v3
  v2.stateList = {idle = v2.playerStateIdle, walk = v2.playerStateWalk, run = v2.playerStateRun, jump = v2.playerStateJump, swim = v2.playerStateSwim, fall = v2.playerStateFall, crouch = v2.playerStateCrouch, animalInteract = v2.playerStateAnimalInteract, animalRide = v2.playerStateAnimalRide, animalPet = v2.playerStateAnimalPet, pickup = v2.playerStatePickup, drop = v2.playerStateDrop, throw = v2.playerStateThrow, useLight = v2.playerStateUseLight, cycleHandtool = v2.playerStateCycleHandtool}
  v2.fsmTable = {walk = {}}
  v2.fsmTable.walk.jump = true
  v2.fsmTable.walk.run = true
  v2.fsmTable.walk.swim = true
  v2.fsmTable.walk.crouch = true
  v2.fsmTable.walk.pickup = true
  v2.fsmTable.walk.drop = true
  v2.fsmTable.walk.throw = true
  v2.fsmTable.walk.useLight = true
  v2.fsmTable.walk.cycleHandtool = true
  v2.fsmTable.run = {jump = true, swim = true, pickup = true, drop = true, throw = true, useLight = true, cycleHandtool = true, crouch = true}
  v2.fsmTable.crouch = {walk = true, jump = true, swim = true, animalInteract = true, animalRide = true, animalPet = true, pickup = true, drop = true, throw = true, useLight = true, cycleHandtool = true}
  v2.fsmTable.fall = {swim = true, useLight = true}
  v2.fsmTable.jump = {}
  v2.fsmTable.idle = {jump = true, crouch = true, walk = true, run = true, animalInteract = true, animalRide = true, animalPet = true, pickup = true, drop = true, throw = true, useLight = true, cycleHandtool = true}
  v2.fsmTable.swim = {walk = true, run = true, useLight = true}
  v2.fsmTable.animalInteract = {crouch = true, idle = true, walk = true, run = true}
  v2.fsmTable.animalPet = {crouch = true, idle = true, walk = true, run = true}
  v2.debugMode = false
  return v2
end
function PlayerStateMachine:delete()
  if self.player.isOwner then
    removeConsoleCommand("gsPlayerFsmDebug")
  end
  for v4, v5 in pairs(self.stateList) do
    v5:delete()
  end
end
function PlayerStateMachine:getState(stateName)
  return self.stateList[stateName]
end
function PlayerStateMachine:isAvailable(stateName)
  if self.stateList[stateName] ~= nil then
    if self.stateList[stateName].isActive == false then
      local v2 = v2:isAvailable()
    end
    return v2
  end
  return false
end
function PlayerStateMachine:isActive(stateName)
  if self.stateList[stateName] ~= nil then
    return self.stateList[stateName].isActive
  end
  return false
end
function PlayerStateMachine:update(dt)
  for v5, v6 in pairs(self.stateList) do
    if not v6.isActive then
      continue
    end
    v6:update(dt)
  end
end
function PlayerStateMachine:updateTick(dt)
  for v5, v6 in pairs(self.stateList) do
    if not v6.isActive then
      continue
    end
    v6:updateTick(dt)
  end
end
function PlayerStateMachine:debugDraw(dt)
  if self.debugMode then
    setTextColor(1, 1, 0, 1)
    renderText(0.05, 0.6, 0.02, "[state machine]")
    for v6, v7 in pairs(self.stateList) do
      local v15 = tostring(v7.isActive)
      local v17 = v7:isAvailable()
      local v16 = tostring(...)
      local v12 = string.format(...)
      renderText(...)
    end
  end
  for v5, v6 in pairs(self.stateList) do
    v7 = v6.inDebugMode(self)
    if not v7 then
      continue
    end
    v6:debugDraw(dt)
  end
end
function PlayerStateMachine:activateState(stateNameTo)
  for v6, v7 in pairs(self.stateList) do
    if not v7.isActive then
      continue
    end
    if self.fsmTable[v6] ~= nil and not not self.fsmTable[v6][stateNameTo] then
      continue
    end
    break
  end
  if v2 and self.stateList[stateNameTo] ~= nil and self.stateList[stateNameTo].isActive == false then
    v3:activate()
  end
end
function PlayerStateMachine:deactivateState(stateName)
  if self.stateList[stateName] ~= nil and self.stateList[stateName].isActive == true then
    v2:deactivate()
  end
end
function PlayerStateMachine:load()
  for v4, v5 in pairs(self.stateList) do
    v5:load()
  end
  if self.player.isOwner then
    addConsoleCommand("gsPlayerFsmDebug", "Toggle debug mode for player state machine", "consoleCommandDebugFinalStateMachine", self)
  end
end
function PlayerStateMachine:consoleCommandDebugFinalStateMachine()
  if self.debugMode then
    self.debugMode = false
    return
  end
  self.debugMode = true
end
