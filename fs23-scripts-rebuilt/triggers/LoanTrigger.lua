-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LoanTrigger = {}
local LoanTrigger_mt = Class(LoanTrigger)
function LoanTrigger.onCreate(v0, v1)
  local v4 = LoanTrigger.new(v1)
  v2:addNonUpdateable(...)
end
function LoanTrigger.new(name)
  setmetatable({}, u0)
  local v2 = v2:getIsClient()
  if v2 then
    addTrigger(name, "triggerCallback", {triggerId = name})
  end
  v2 = getChildAt(name, 0)
  v1.loanSymbol = v2
  v2 = LoanTriggerActivatable.new(v1)
  v1.activatable = v2
  v1.isEnabled = true
  v2:subscribe(MessageType.PLAYER_FARM_CHANGED, v1.playerFarmChanged, v1)
  v1:updateIconVisibility()
  return v1
end
function LoanTrigger:delete()
  v1:unsubscribeAll(self)
  if self.triggerId ~= nil then
    removeTrigger(self.triggerId)
  end
  self.loanSymbol = nil
  v1:removeActivatable(self.activatable)
end
function LoanTrigger.openFinanceMenu(v0)
  v1:showGui("InGameMenu")
  v1:publish(MessageType.GUI_INGAME_OPEN_FINANCES_SCREEN)
end
function LoanTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    local v6 = v6:isa(FSCareerMissionInfo)
    if v6 then
      if not onEnter then
        -- if not v4 then goto L37 end
      end
      if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
        if onEnter then
          v6:addActivatable(self.activatable)
          return
        end
        v6:removeActivatable(self.activatable)
      end
    end
  end
end
function LoanTrigger:updateIconVisibility()
  if self.loanSymbol ~= nil then
    if self.isEnabled then
      local v1 = v1:isa(FSCareerMissionInfo)
    end
    local v2 = v2:getFarmId()
    if v2 == FarmManager.SPECTATOR_FARM_ID then
    end
    setVisibility(self.loanSymbol, v1 and true)
  end
end
function LoanTrigger:playerFarmChanged(player)
  if player == g_currentMission.player then
    self:updateIconVisibility()
  end
end
LoanTriggerActivatable = {}
local LoanTriggerActivatable_mt = Class(LoanTriggerActivatable)
function LoanTriggerActivatable.new(loanTrigger)
  local v1 = setmetatable({}, u0)
  v1.loanTrigger = loanTrigger
  local v2 = v2:getText("action_checkFinances")
  v1.activateText = v2
  return v1
end
function LoanTriggerActivatable:getIsActivatable()
  if self.loanTrigger.isEnabled and g_currentMission.controlPlayer then
    local v2 = v2:getFarmId()
    if v2 == FarmManager.SPECTATOR_FARM_ID then
    end
  end
  return v1
end
function LoanTriggerActivatable:run()
  v1:openFinanceMenu()
end
