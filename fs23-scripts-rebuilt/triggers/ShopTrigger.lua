-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopTrigger = {}
local ShopTrigger_mt = Class(ShopTrigger)
function ShopTrigger.onCreate(v0, v1)
  local v4 = ShopTrigger.new(v1)
  v2:addNonUpdateable(...)
end
function ShopTrigger.new(node)
  local v1 = setmetatable({}, u0)
  local v2 = v2:getIsClient()
  if v2 then
    v1.triggerId = node
    v2 = CollisionFlag.getHasFlagSet(node, CollisionFlag.TRIGGER_PLAYER)
    if not v2 then
      local v4 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      local v5 = I3DUtil.getNodePath(node)
      Logging.warning(...)
    end
    addTrigger(node, "triggerCallback", v1)
  end
  v2 = getChildAt(node, 0)
  v1.shopSymbol = v2
  v2 = getChildAt(node, 1)
  v1.shopPlayerSpawn = v2
  v1.isEnabled = true
  v2:subscribe(MessageType.PLAYER_FARM_CHANGED, v1.playerFarmChanged, v1)
  v2:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_TRIGGER_MARKER], v1.onTriggerVisbilityChanged, v1)
  v1:updateIconVisibility()
  v2 = ShopTriggerActivatable.new(v1)
  v1.activatable = v2
  return v1
end
function ShopTrigger:delete()
  v1:unsubscribeAll(self)
  if self.triggerId ~= nil then
    removeTrigger(self.triggerId)
  end
  self.shopSymbol = nil
  v1:removeActivatable(self.activatable)
end
function ShopTrigger:openShop()
  local v1 = v1:getIsRunning()
  if v1 then
    local v4 = v4:getText("tour_text_feature_deactivated")
    v1:showInfoDialog({text = v4})
    return
  end
  v1:changeScreen(nil, ShopMenu)
  local v1, v2, v3 = getWorldTranslation(self.shopPlayerSpawn)
  local v4, v5, v6 = localDirectionToWorld(self.shopPlayerSpawn, 0, 0, -1)
  v7:moveToAbsolute(v1, v2, v3)
  local v8 = MathUtil.getYRotationFromDirection(v4, v6)
  g_currentMission.player.rotY = v8
end
function ShopTrigger:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    local v6 = v6:isa(FSCareerMissionInfo)
    if v6 then
      if not onEnter then
        -- if not v4 then goto L52 end
      end
      if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
        if onEnter then
          if Platform.gameplay.autoActivateTrigger then
            v6 = v6:getIsActivatable()
            if v6 then
              v6:run()
              return
            end
          end
          v6:addActivatable(self.activatable)
          return
        end
        v6:removeActivatable(self.activatable)
      end
    end
  end
end
function ShopTrigger:updateIconVisibility()
  if self.shopSymbol ~= nil then
    if self.isEnabled then
      local v1 = v1:isa(FSCareerMissionInfo)
    end
    local v2 = v2:getFarmId()
    if v2 == FarmManager.SPECTATOR_FARM_ID then
    end
    local v4 = v4:getValue(GameSettings.SETTING.SHOW_TRIGGER_MARKER)
    if v1 and true then
    end
    v5(v6, v7)
  end
end
function ShopTrigger:playerFarmChanged(player)
  if player == g_currentMission.player then
    self:updateIconVisibility()
  end
end
function ShopTrigger:onTriggerVisbilityChanged()
  self:updateIconVisibility()
end
ShopTriggerActivatable = {}
local ShopTriggerActivatable_mt = Class(ShopTriggerActivatable)
function ShopTriggerActivatable.new(shopTrigger)
  local v1 = setmetatable({}, u0)
  v1.shopTrigger = shopTrigger
  local v2 = v2:getText("action_activateShop")
  v1.activateText = v2
  return v1
end
function ShopTriggerActivatable:getIsActivatable()
  if self.shopTrigger.isEnabled and g_currentMission.controlPlayer then
    local v2 = v2:getFarmId()
    if v2 == FarmManager.SPECTATOR_FARM_ID then
    end
  end
  return v1
end
function ShopTriggerActivatable:run()
  v1:openShop()
end
