-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSM = {EVENT_TRANS = 0, EVENT_UPDATE = 1, ANY_STATE = -1}
local FSM_mt = Class(FSM)
function FSM.new(v0, v1, v2, v3, v4)
  if not v4 then
  end
  local v5 = v5(v6, v7)
  v5.object = v1
  v5.initialState = v2
  v5.state = v2
  if not v3 then
  end
  v5.states = v6
  return v5
end
function FSM:delete()
  if self.state ~= nil then
    v1:delete()
  end
  self.state = nil
  self.states = {}
end
function FSM:run(type, toStateId, params, noEventSend)
  if type == FSM.EVENT_TRANS then
    self:transition(toStateId, params, noEventSend)
    return
  end
  if type == FSM.EVENT_UPDATE then
    self:requestStateUpdate(noEventSend)
  end
end
function FSM:transition(toStateId, params, noEventSend)
  if self.states[toStateId] == nil then
  end
  assert(true)
  if self.object.isServer and not noEventSend then
    local v6 = FSMStateEvent.new(self.object, FSM.EVENT_TRANS, toStateId, params)
    v4:broadcastEvent(...)
  end
  self.state:onExit()
  self:setCurrentState(self.states[toStateId])
  if not params then
  end
  local v8 = unpack(v9)
  v4:onEnter(...)
end
function FSM:requestStateUpdate(noEventSend)
  if self.object.isServer and not noEventSend then
    local v4 = FSMStateEvent.new(self.object, FSM.EVENT_UPDATE)
    state:broadcastEvent(...)
  end
  local state = self:getCurrentState()
  if state.updateActions ~= nil then
    for v6, v7 in ipairs(state.updateActions) do
      v7(state)
    end
  end
end
function FSM:setCurrentState(state)
  self.state = state
end
function FSM:getCurrentState()
  return self.state
end
function FSM:isInState(id)
  if id ~= self.state.id then
  end
  return true
end
function FSM:setInitialState(state)
  self.initialState = state
end
function FSM:getInitialState()
  return self.initialState
end
function FSM:reset()
  local state = self:getInitialState()
  self:transition(state)
end
function FSM:setStates(states)
  self.states = states
end
function FSM:update(dt)
  v2:onUpdate(dt)
end
function FSM:draw()
  v1:onDraw()
end
