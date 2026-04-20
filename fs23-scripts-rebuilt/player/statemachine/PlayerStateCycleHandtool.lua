-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateCycleHandtool = {}
local PlayerStateCycleHandtool_mt = Class(PlayerStateCycleHandtool, PlayerStateBase)
function PlayerStateCycleHandtool.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.cycleDirection = 1
  return v2
end
function PlayerStateCycleHandtool:isAvailable()
  local v1 = v1:getFarmById(self.player.farmId)
  if 0 < #v1.handTools and not self.player.baseInformation.isInWater then
  end
  return v3
end
function PlayerStateCycleHandtool:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  local v1 = v1:getFarmById(self.player.farmId)
  local v4 = v4:hasHandtoolEquipped()
  if v4 then
    for v8, v9 in pairs(v1.handTools) do
      local v10 = v9:lower()
      local v11 = v4:lower()
      if not (v10 == v11) then
        continue
      end
      break
    end
  end
  if #v2 < v3 + self.cycleDirection then
  elseif v3 + self.cycleDirection < 0 then
  end
  if v3 == 0 then
    v4:equipHandtool("", false)
  else
    v4:equipHandtool(v2[v3], false)
  end
  self:deactivate()
end
