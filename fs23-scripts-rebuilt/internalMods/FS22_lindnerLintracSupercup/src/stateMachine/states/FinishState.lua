-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FinishState = {}
local FinishState_mt = Class(FinishState, AbstractState)
function FinishState.new(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  if not v10 then
  end
  local v11 = v11:new(v13, v14, v15)
  v11.isServer = v4
  v11.isClient = v5
  v11.superCup = v6
  v11.mission = v3
  v11.vehicleList = v7
  v11.trafficLight = v8
  v11.hud = v9
  return v11
end
function FinishState.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function FinishState:onEnter(playerUserId, elapsedTime, penalty)
  v4:reset()
  if self.isServer then
    for v7, v8 in ipairs(self.vehicleList) do
      if not (v8 ~= nil) then
        continue
      end
      if not not v8.isDeleted then
        continue
      end
      v9:removeVehicle(v8, false)
      v8:delete()
    end
  end
  self.vehicleList = {}
  if elapsedTime ~= nil and penalty ~= nil then
    v4 = v4:getUserByUserId(playerUserId)
    if v4 ~= nil then
      v6 = v4:getNickname()
      v6 = SuperCupUtil.millisecondsToClockString(elapsedTime)
      v6 = v4:getId()
      v6 = v4:getUniqueUserId()
      v6 = v6:getText("info_score")
      v6 = v6:format({playerNickname = v6, time = v6, penalties = penalty, playerId = v6, uuid = v6}.playerNickname, {playerNickname = v6, time = v6, penalties = penalty, playerId = v6, uuid = v6}.time, {playerNickname = v6, time = v6, penalties = penalty, playerId = v6, uuid = v6}.penalties)
      if self.mission.playerUserId == playerUserId then
        -- if not v0.isClient then goto L130 end
        v7:showInfoDialog({dialogType = DialogElement.TYPE_INFO, text = v6})
      elseif self.mission.player.farmId == self.superCup.farmId then
        v7:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_OK, v6)
      end
      v7:saveResult(v5)
    end
  end
  v4:setIsActive(false)
  v5 = v5:superClass()
  v5.onEnter(self)
end
