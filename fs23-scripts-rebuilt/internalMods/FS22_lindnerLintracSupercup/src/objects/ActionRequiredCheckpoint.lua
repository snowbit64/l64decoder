-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ActionRequiredCheckpoint = {}
local ActionRequiredCheckpoint_mt = Class(ActionRequiredCheckpoint, Checkpoint)
function ActionRequiredCheckpoint:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".checkpoint(?)#actionClass", "the checkpoint action classname")
  self:register(XMLValueType.FLOAT, v1 .. ".checkpoint(?)#vehicleDistance", "the vehicle interaction distance")
  Seesaw.registerXMLPaths(self, v1 .. ".checkpoint(?).seesaw")
end
function ActionRequiredCheckpoint.new(v0, v1, v2, v3, v4)
  local v5 = v5:new(v1, v2, v3, u0)
  v5.action = v4
  v5.object = nil
  return v5
end
function ActionRequiredCheckpoint:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  if self.action ~= nil then
    v1:delete()
  end
end
function ActionRequiredCheckpoint:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  if self.action ~= nil then
    v3:writeStream(streamId, connection)
  end
end
function ActionRequiredCheckpoint:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  if self.action ~= nil then
    v3:readStream(streamId, connection)
  end
end
function ActionRequiredCheckpoint:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  if self.action ~= nil then
    v4:writeUpdateStream(streamId, connection, dirtyMask)
  end
end
function ActionRequiredCheckpoint:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  if self.action ~= nil then
    v4:readUpdateStream(streamId, timestamp, connection)
  end
end
function ActionRequiredCheckpoint:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  if self.action ~= nil then
    v1:reset()
  end
end
function ActionRequiredCheckpoint:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  local v6 = v6:superClass()
  local v5 = v6.loadFromXML(self, xmlFile, baseKey, components, i3dMappings)
  if not v5 then
    return false
  end
  v5 = xmlFile:getValue(baseKey .. "#actionClass", "CheckpointAction")
  v6 = SuperCupUtil.getClassObject(v5)
  if v6 ~= nil then
    local v7 = v6:new(self)
    local v8 = v7:loadFromXML(xmlFile, baseKey, components, i3dMappings)
    if v8 then
      self:setRequiredAction(v7)
    end
  end
  return true
end
function ActionRequiredCheckpoint:setRequiredAction(action)
  self.action = action
end
function ActionRequiredCheckpoint:hasPassedCheckpoint()
  if self.action ~= nil then
    v1:validate({self.object})
    local v1 = v1:isFulfilled()
    if not v1 then
      return false
    end
  end
  local v2 = v2:superClass()
  v1 = v2.hasPassedCheckpoint(self)
  if not v1 then
    return false
  end
  return true
end
function ActionRequiredCheckpoint:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  local v8 = v8:superClass()
  v8.checkpointTriggerCallback(self, triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if self.action ~= nil and self.action.checkpointTriggerCallback ~= nil then
    v7:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  end
  if self.isActive and otherId ~= 0 then
    if onEnter then
      local v7 = v7:getNodeObject(otherId)
      self.object = v7
      return
    end
    if onLeave then
      self.object = nil
    end
  end
end
