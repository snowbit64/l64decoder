-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RunState = {PENALTY_TIME = 5000}
local RunState_mt = Class(RunState, AbstractState)
function RunState.new(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
  if not v11 then
  end
  local v12 = v12:new(v14, v15, v16)
  v12.action = function(v0)
    v1:onPenaltyCountChanged(v0)
  end
  v12.mission = v3
  v12.isServer = v4
  v12.coneHandler = v5
  v12.trafficLight = v6
  v12.checkpoints = v7
  v12.hud = v8
  v12.vehicleList = v9
  v12.object = v10
  v12.playerUserId = nil
  local v13 = v13:new()
  v12.queue = v13
  v13 = v13:new()
  v12.timer = v13
  v13:setIsStopWatch(true)
  return v12
end
function RunState.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function RunState:onEnter(playerUserId)
  self.playerUserId = playerUserId
  local v3 = v3:superClass()
  v3.onEnter(self)
  v2:next()
  if self.isServer then
    for v5, v6 in ipairs(self.vehicleList) do
      if not (v6.setAllowDriveSuperCup ~= nil) then
        continue
      end
      v6:setAllowDriveSuperCup(true, self.object)
    end
  end
  v2:addActionListener(self.action)
  v3 = v3:canInteractWithFarm(self.mission.player.farmId)
  if v3 then
    v3:setIsActive(true)
    v3:setTimer(self.timer)
    v3:setPenaltyPoints(0)
  end
  v3:start()
  if self.isServer then
    v4 = table.copy(self.checkpoints)
    v3 = Queue.fromList(...)
    self.queue = v3
    v3 = v3:pop()
    self.currentCheckpoint = v3
    if self.currentCheckpoint ~= nil then
      v3:setIsActive(true)
    end
  end
end
function RunState:onExit()
  local v2 = v2:superClass()
  v2.onExit(self)
  v1:removeActionListener(self.action)
  v1:stop()
end
function RunState:onUpdate(dt)
  v2:update(dt)
  if self.isServer then
    if self.currentCheckpoint ~= nil then
      local v2 = v2:hasPassedCheckpoint()
      -- if not v2 then goto L66 end
      v2:setIsActive(false)
      v2 = v2:pop()
      self.currentCheckpoint = v2
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L66
      v2:setIsActive(true)
      return
    end
    local v7 = v7:getElapsedTime()
    local v8 = v8:getLostBallCount()
    v2:transition(SuperCup.STATES.FINISHED, {})
  end
end
function RunState:onPenaltyCountChanged(count)
  self.timer.elapsedDelay = self.timer.elapsedDelay + RunState.PENALTY_TIME
  v2:setPenaltyPoints(count)
end
