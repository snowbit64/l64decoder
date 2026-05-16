-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Collectible = {}
local Collectible_mt = Class(Collectible)
function Collectible.onCreate(v0, v1)
  local v4 = Collectible.new(v1)
  v2:addNonUpdateable(...)
end
function Collectible.new(node)
  local v1 = setmetatable({}, u0)
  v1.node = node
  local v2 = getUserAttribute(node, "name")
  v1.name = v2
  if v1.name == nil then
    Logging.error("Collectible has no 'name' defined")
    return nil
  end
  v2 = getUserAttribute(node, "triggerIndex")
  if v2 ~= nil then
    local v3 = getChildAt(node, v2)
    v1.triggerNode = v3
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x8000000e -> L52
    Logging.error("Collectible has wrong 'triggerIndex' defined, node does not exist.")
    return nil
  else
    v1.triggerNode = node
  end
  v3 = CollisionFlag.getHasFlagSet(v1.triggerNode, CollisionFlag.TRIGGER_PLAYER)
  if not v3 then
    local v5 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
    local v6 = I3DUtil.getNodePath(v1.triggerNode)
    Logging.warning(...)
  end
  v3 = CollectibleActivatable.new(v1)
  v1.activatable = v3
  v1.isActive = false
  v1.mapHotspotVisible = false
  v3:addCollectible(v1)
  return v1
end
function Collectible:delete()
  self:deactivate()
  v1:removeCollectible(self)
end
function Collectible:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if not onEnter then
    -- if not v4 then goto L32 end
  end
  if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode and g_currentMission.player.farmId ~= FarmManager.SPECTATOR_FARM_ID then
    if onEnter then
      v6:addActivatable(self.activatable)
      return
    end
    v6:removeActivatable(self.activatable)
  end
end
function Collectible:activate()
  if not self.isActive then
    setVisibility(self.node, true)
    addTrigger(self.triggerNode, "triggerCallback", self)
    local v1 = CollectibleHotspot.new(self)
    self.mapHotspot = v1
    v1:setVisible(self.mapHotspotVisible)
    v1:addMapHotspot(self.mapHotspot)
    self.isActive = true
  end
end
function Collectible:deactivate()
  if self.isActive then
    setVisibility(self.node, false)
    removeTrigger(self.triggerNode)
    delete(self.node)
    v1:removeActivatable(self.activatable)
    v1:removeMapHotspot(self.mapHotspot)
    v1:delete()
    self.mapHotspot = nil
    self.isActive = false
  end
end
function Collectible:setHotspotVisible(visible)
  self.mapHotspotVisible = visible
  if self.mapHotspot ~= nil then
    v2:setVisible(visible)
  end
end
CollectibleActivatable = {}
local CollectibleActivatable_mt = Class(CollectibleActivatable)
function CollectibleActivatable.new(collectible)
  local v1 = setmetatable({}, u0)
  v1.collectible = collectible
  local v2 = v2:getText("action_collectibleCollect")
  v1.activateText = v2
  return v1
end
function CollectibleActivatable:run()
  if g_currentMission.player.farmId ~= FarmManager.SPECTATOR_FARM_ID then
    v1:onTriggerCollectible(self.collectible)
  end
end
