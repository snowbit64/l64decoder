-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StartState = {COUNT_DOWN_TIME = 10000, COUNT_DOWN_THRESHOLD = 5000}
local StartState_mt = Class(StartState, AbstractState)
function StartState.new(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  if not v8 then
  end
  local v9 = v9:new(v11, v12, v13)
  v9.mission = v3
  v9.isServer = v4
  v9.coneHandler = v5
  v9.trafficLight = v6
  v9.hud = v7
  local v10 = v10:new(StartState.COUNT_DOWN_TIME, function()
    v0:startSuperCup()
  end)
  v9.timer = v10
  v9.playerUserId = nil
  v9.playerFarmId = nil
  return v9
end
function StartState.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function StartState:onEnter(playerUserId, vehicleId)
  self.playerUserId = playerUserId
  self.playerFarmId = self.mission.player.farmId
  if playerUserId == self.mission.playerUserId then
    local vehicle = NetworkUtil.getObject(vehicleId)
    local v5 = self.mission.player:getStyle()
    local v6 = v6:getServerConnection()
    local v8 = VehicleEnterRequestEvent.new(vehicle, v5, self.mission.player.farmId)
    v6:sendEvent(...)
  end
  v5 = v5:superClass()
  v5.onEnter(self)
  vehicle:setIsActive(false)
  vehicle:reset()
  vehicle:reset()
  vehicle:start()
end
function StartState:onExit()
  local v2 = v2:superClass()
  v2.onExit(self)
  local v1 = v1:isRunning()
  if v1 then
    v1:clear()
  end
end
function StartState:onUpdate(dt)
  local v2 = v2:isRunning()
  if v2 then
    v2 = v2:getElapsedTime()
    if v2 < StartState.COUNT_DOWN_THRESHOLD then
      local v3 = math.floor(v2 * 0.001 + 1)
      -- if v3 == v0.lastText then goto L50 end
      self.lastText = v3
      if v3 == 3 then
        v4:next()
      end
      v4:playCountdownSample()
    else
      v3 = v3:getText("info_getReady")
      self.lastText = v3
    end
    v3 = v3:canInteractWithFarm(self.playerFarmId)
    if v3 then
      local v6 = tostring(self.lastText)
      v3:drawTextElement({x = 0.5, y = 0.85, textSize = 0.04, text = v6, bold = true})
    end
  end
end
function StartState:startSuperCup()
  v1:playGoSample()
  if self.isServer then
    v1:transition(SuperCup.STATES.RUN, {self.playerUserId})
  end
end
