-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SimpleStateMachine = {}
local SimpleStateMachine_mt = Class(SimpleStateMachine)
function SimpleStateMachine.new(custom_mt)
  if not custom_mt then
  end
  v2(v3, v4)
  v1.currentState = nil
  v1.states = {}
  return v1
end
function SimpleStateMachine:delete()
  self:reset()
end
function SimpleStateMachine:addState(stateId, state)
  self.states[stateId] = state
end
function SimpleStateMachine:removeState(stateId)
  if self.currentState == self.states[stateId] then
    self.currentState = nil
  end
  self.states[stateId] = nil
end
function SimpleStateMachine:reset()
  self.states = {}
  self.currentState = nil
end
function SimpleStateMachine:changeState(stateId, parms)
  if self.states[stateId] ~= nil then
    if self.currentState ~= nil then
      v3:deactivate()
    end
    self.currentState = self.states[stateId]
    v3:activate(parms)
  end
end
function SimpleStateMachine:update(dt)
  if self.currentState ~= nil then
    v2:update(dt)
  end
end
