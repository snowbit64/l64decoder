-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VendingMachine = {}
local VendingMachine_mt = Class(VendingMachine)
function VendingMachine.onCreate(v0, v1)
  local v4 = VendingMachine.new(v1)
  v2:addUpdateable(...)
end
function VendingMachine.new(name)
  setmetatable({}, u0)
  addTrigger(name, "triggerCallback", {triggerId = name})
  local v2 = createSample("VendingMachine")
  loadSample({triggerId = name, isInTrigger = false, moneyPerObject = 1, time = 0, emitTimer = 0, useSound = v2}.useSound, "data/maps/sounds/vendingMachine.wav", false)
  return {triggerId = name, isInTrigger = false, moneyPerObject = 1, time = 0, emitTimer = 0, useSound = v2, isEnabled = true, activateEventId = "", sharedLoadRequestId = nil}
end
function VendingMachine:delete()
  v1:removeUpdateable(self)
  removeTrigger(self.triggerId)
  if self.useSound ~= nil then
    delete(self.useSound)
  end
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  self.triggerId = 0
end
function VendingMachine:update(dt)
  self.time = self.time + dt
  if self.isInTrigger and self.emitTimer == 0 then
    v2:setActionEventActive(self.activateEventId, true)
  end
  if self.emitTimer ~= 0 and self.emitTimer < self.time then
    self.emitTimer = 0
    local v2, v3 = v2:loadSharedI3DFile("data/maps/models/objects/can/can.i3d", true, false)
    self.sharedLoadRequestId = v3
    local v4 = getChildAt(v2, 0)
    local v6 = getRootNode()
    link(v6, v4)
    delete(v2)
    local v8 = math.random()
    local v9 = math.random()
    local v10 = math.random()
    setRotation(v4, v8 * 6.28, v9 * 6.28, v10 * 6.28)
    local v12 = math.random()
    local v13 = math.random()
    local v7 = localToWorld(self.triggerId, -0.11 + v12 * 0.05, -0.25 + v13 * 0.05, 0.32)
    setTranslation(...)
    v12 = math.random()
    local v5, v6, v7 = localDirectionToWorld(self.triggerId, 0, 0, 0.0005 + v12 * 0.001)
    addImpulse(v4, v5, v6, v7, 0, 0, 0, true)
  end
end
function VendingMachine:onActivate()
  playSample(self.useSound, 1, 1, 0, 0, 0)
  local v3 = math.random(0, 200)
  self.emitTimer = self.time + 1900 + v3
  v1:setActionEventActive(self.activateEventId, false)
end
function VendingMachine:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled and g_currentMission.controlPlayer and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      self.isInTrigger = true
      local v6, v7 = v6:registerActionEvent(InputAction.ENTER, self, self.onActivate, false, true, false, true)
      local v11 = v11:getText("action_activateVendingMachine")
      v8:setActionEventText(...)
      self.activateEventId = v7
      return
    end
    if onLeave then
      self.isInTrigger = false
      v6:removeActionEventsByTarget(self)
    end
  end
end
