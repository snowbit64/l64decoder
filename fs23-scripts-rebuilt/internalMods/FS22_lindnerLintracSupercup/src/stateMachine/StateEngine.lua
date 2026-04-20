-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StateEngine = {}
local StateEngine_mt = Class(StateEngine)
function StateEngine.new(v0, v1)
  local v2 = setmetatable({}, u0)
  local v3 = v3:new(v1)
  v2.stateMachine = v3
  v2.states = {}
  return v2
end
function StateEngine:add(stateId, state, params)
  if self.states[stateId] ~= nil then
  end
  assert(true, "State " .. stateId .. " already exists!")
  if not params then
  end
  local v9 = unpack(v10)
  local v5 = state:new(...)
  v4[stateId] = v5
  return self
end
function StateEngine:addEntryAction(stateId, action)
  if self.states[stateId] == nil then
  end
  assert(true, "State must exist!")
  v3:addEntryAction(action)
  return self
end
function StateEngine:addExitAction(stateId, action)
  if self.states[stateId] == nil then
  end
  assert(true, "State must exist!")
  v3:addExitAction(action)
  return self
end
function StateEngine:addUpdateAction(stateId, action)
  if self.states[stateId] == nil then
  end
  assert(true, "State must exist!")
  v3:addUpdateAction(action)
  return self
end
function StateEngine:build()
  if #self.states == 0 then
    log("Please add states first!")
    return nil
  end
  v1:setStates(self.states)
  v2:setInitialState(self.states[1])
  v2:setCurrentState(self.states[1])
  return self.stateMachine
end
