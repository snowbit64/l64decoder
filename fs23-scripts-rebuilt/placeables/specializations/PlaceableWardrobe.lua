-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWardrobe = {}
function PlaceableWardrobe.prerequisitesPresent(v0)
  return true
end
function PlaceableWardrobe.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "wardrobeTriggerCallback", PlaceableWardrobe.wardrobeTriggerCallback)
end
function PlaceableWardrobe.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableWardrobe)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableWardrobe)
end
function PlaceableWardrobe:registerXMLPaths(v1)
  self:setXMLSpecializationType("Wardrobe")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wardrobe#triggerNode", "Wardrobe trigger node for player")
  self:register(XMLValueType.BOOL, v1 .. ".wardrobe#allowAllFarms", "Allow any farm not just the owner to access the wardrobe", "false if owned by a specific farm, true otherwise")
  self:setXMLSpecializationType()
end
function PlaceableWardrobe:onLoad(savegame)
  local v3 = PlaceableWardrobeActivatable.new(self)
  self.spec_wardrobe.activatable = v3
  v3 = v3:getValue("placeable.wardrobe#triggerNode", nil, self.components, self.i3dMappings)
  self.spec_wardrobe.wardrobeTrigger = v3
  if self.spec_wardrobe.wardrobeTrigger ~= nil then
    v3 = CollisionFlag.getHasFlagSet(self.spec_wardrobe.wardrobeTrigger, CollisionFlag.TRIGGER_PLAYER)
    if not v3 then
      local v7 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      Logging.warning(...)
    end
    addTrigger(v2.wardrobeTrigger, "wardrobeTriggerCallback", self)
  end
  v3 = v3:getValue("placeable.wardrobe#allowAllFarms", false)
  v2.allowAllFarms = v3
end
function PlaceableWardrobe:onDelete()
  v2:removeActivatable(self.spec_wardrobe.activatable)
  if self.spec_wardrobe.wardrobeTrigger ~= nil then
    removeTrigger(self.spec_wardrobe.wardrobeTrigger)
  end
end
function PlaceableWardrobe:wardrobeTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L38 end
  end
  if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
    if not self.spec_wardrobe.allowAllFarms then
      local v8 = self:getOwnerFarmId()
      -- if v8 ~= g_currentMission.player.farmId then goto L38 end
    end
    if onEnter then
      v8:addActivatable(v7.activatable)
      return
    end
    v8:removeActivatable(v7.activatable)
  end
end
PlaceableWardrobeActivatable = {}
local PlaceableWardrobeActivatable_mt = Class(PlaceableWardrobeActivatable)
function PlaceableWardrobeActivatable.new(placeable)
  local v1 = setmetatable({}, u0)
  v1.placeable = placeable
  local v2 = v2:getText("action_openWardrobe")
  v1.activateText = v2
  return v1
end
function PlaceableWardrobeActivatable:getIsActivatable()
  if not self.placeable.spec_wardrobe.allowAllFarms then
    local v2 = v2:getFarmId()
    local v3 = v3:getOwnerFarmId()
    if v2 ~= v3 then
    end
  end
  return v1
end
function PlaceableWardrobeActivatable.run(v0)
  v1:onToggleCharacterCreation()
end
