-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Can = {}
local Can_mt = Class(Can)
function Can.onCreate(v0, v1)
  local v4 = Can.new(v1)
  v2:addUpdateable(...)
end
function Can.new(id)
  setmetatable({}, u0)
  local v2 = getUserAttribute(id, "pickupName")
  if v2 ~= nil then
    local v3 = v3:getText(v2, {customEnvironment = g_currentMission.loadingMapModName, id = id, time = 0, xpGain = 1, pickupName = "Unknown"}.customEnvironment)
  end
  v3 = createSample("SoftDrink")
  v1.drinkSound = v3
  loadSample(v1.drinkSound, "data/maps/sounds/softDrink.wav", false)
  v3 = getChildAt(v1.id, 0)
  v1.triggerId = v3
  if v1.triggerId ~= 0 then
    addTrigger(v1.triggerId, "onCanPickupTrigger", v1)
  end
  v1.deleteTimer = 0
  v3 = CanActivatable.new(v1)
  v1.activatable = v3
  return v1
end
function Can:delete()
  if self.triggerId ~= 0 then
    removeTrigger(self.triggerId)
    self.triggerId = 0
  end
  v1:removeActivatable(self.activatable)
  delete(self.id)
  self.id = 0
  delete(self.drinkSound)
  self.drinkSound = 0
  v1:removeUpdateable(self)
end
function Can:update(dt)
  self.time = self.time + dt
  if self.deleteTimer ~= 0 and self.deleteTimer < self.time then
    self:delete()
  end
end
function Can:pickup()
  playSample(self.drinkSound, 1, 1, 0, 0, 0)
  setVisibility(self.id, false)
  local v4 = getSampleDuration(self.drinkSound)
  self.deleteTimer = self.time + v4 + 200
  if self.triggerId ~= 0 then
    removeTrigger(self.triggerId)
    self.triggerId = 0
  end
  v1:removeActivatable(self.activatable)
end
function Can:onCanPickupTrigger(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L29 end
  end
  if g_currentMission.controlPlayer and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      v7:addActivatable(self.activatable)
      return
    end
    v7:removeActivatable(self.activatable)
  end
end
CanActivatable = {}
local CanActivatable_mt = Class(CanActivatable)
function CanActivatable:new()
  local v1 = setmetatable({}, u0)
  v1.can = self
  local v2 = v2:getText("action_pickupSodaCan", self.customEnvironment)
  v1.activateText = v2
  return v1
end
function CanActivatable:run()
  v1:pickup()
end
