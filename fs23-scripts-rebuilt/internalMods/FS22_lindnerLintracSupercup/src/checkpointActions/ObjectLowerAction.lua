-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectLowerAction = {}
local ObjectLowerAction_mt = Class(ObjectLowerAction, CheckpointAction)
function ObjectLowerAction.new(v0, v1)
  local v2 = v2:new(v1, u0)
  v2.didEnterOnHigherState = false
  return v2
end
function ObjectLowerAction:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.didEnterOnHigherState = false
end
function ObjectLowerAction:checkIfObjectDidEnterLowered(object)
  if object ~= nil and object.getAllowsLowering ~= nil then
    local v2 = object:getAllowsLowering()
    if v2 then
      v2 = object:getIsLowered()
      if not self.didEnterOnHigherState and not v2 then
        self.didEnterOnHigherState = true
      end
    end
  end
end
function ObjectLowerAction:validate(params)
  local object = unpack(params)
  if object ~= nil and object.getAllowsLowering ~= nil then
    local v3 = object:getAllowsLowering()
    if v3 then
      v3 = object:getIsLowered()
      if self.didEnterOnHigherState and v3 and not self.fulfilled then
        self.fulfilled = true
      end
    end
  end
end
function ObjectLowerAction:checkpointTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter and not self.didEnterOnHigherState then
    local v9 = v9:getNodeObject(otherId)
    self:checkIfObjectDidEnterLowered(...)
  end
end
