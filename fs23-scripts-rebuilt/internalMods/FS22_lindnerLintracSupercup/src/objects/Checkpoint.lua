-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Checkpoint = {}
local Checkpoint_mt = Class(Checkpoint, Object)
InitObjectClass(Checkpoint, "Checkpoint")
function Checkpoint:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".checkpoint(?)#className", "the checkpoint classname")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".checkpoint(?)#triggerNode", "the checkpoint trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".checkpoint(?)#iconNode", "the checkpoint icon node")
end
function Checkpoint.new(v0, v1, v2, v3, v4)
  if not v4 then
  end
  local v5 = v5(v6, v7, v8)
  v5.nodeId = v1
  v5.isServer = v2
  v5.isClient = v3
  v5.isActive = false
  v5.hasEntered = false
  v5.hasEntered = false
  v5.actionOnlyFulfillment = false
  return v5
end
function Checkpoint:delete()
  if self.triggerNode ~= nil then
    removeTrigger(self.triggerNode)
  end
end
function Checkpoint.writeStream(v0, v1, v2)
end
function Checkpoint.readStream(v0, v1, v2)
end
function Checkpoint.writeUpdateStream(v0, v1, v2, v3)
end
function Checkpoint.readUpdateStream(v0, v1, v2, v3)
end
function Checkpoint:reset()
  self:setIsActive(false)
  self.hasEntered = false
  self.hasLeft = false
end
function Checkpoint:setIsActive(isActive, noEventSend)
  self.isActive = isActive
  if self.isServer and not noEventSend then
    local v5 = SuperCupCheckPointEvent.new(self, isActive)
    v3:broadcastEvent(...)
  end
  if self.iconNode ~= nil then
    setVisibility(self.iconNode, isActive)
  end
end
function Checkpoint:hasPassedCheckpoint()
  if self.hasEntered then
    -- if v0.hasLeft then goto L8 end
  end
  return self.actionOnlyFulfillment
end
function Checkpoint:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  local v5 = xmlFile:getValue(baseKey .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v5
  if self.triggerNode ~= nil then
    addTrigger(self.triggerNode, "checkpointTriggerCallback", self)
  end
  v5 = xmlFile:getValue(baseKey .. "#iconNode", nil, components, i3dMappings)
  self.iconNode = v5
  self:setIsActive(false, true)
  return true
end
function Checkpoint:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if self.isActive then
    if onEnter then
      self.hasEntered = true
    end
    if self.hasEntered and onLeave then
      self.hasLeft = true
    end
  end
end
