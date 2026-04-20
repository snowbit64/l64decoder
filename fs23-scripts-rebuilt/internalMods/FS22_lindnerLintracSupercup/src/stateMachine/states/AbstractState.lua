-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AbstractState = {}
local AbstractState_mt = Class(AbstractState)
function AbstractState.new(v0, v1, v2, v3)
  if not v3 then
  end
  local v4 = v4(v5, v6)
  v4.id = v1
  v4.stateMachine = v2
  v4.entryActions = {}
  v4.exitActions = {}
  v4.updateActions = {}
  return v4
end
function AbstractState:delete()
  self.stateMachine = nil
  self.entryActions = {}
  self.exitActions = {}
  self.updateActions = {}
end
function AbstractState:getId()
  return self.id
end
function AbstractState:onEnter(...)
  for v4, v5 in ipairs(self.entryActions) do
    v5(...)
  end
end
function AbstractState:onExit(...)
  for v4, v5 in ipairs(self.exitActions) do
    v5(...)
  end
end
function AbstractState.onUpdate(v0, v1)
end
function AbstractState.onDraw(v0)
end
function AbstractState:addEntryAction(action)
  SuperCupUtil.addToListIfNotExists(action, self.entryActions)
end
function AbstractState:addExitAction(action)
  SuperCupUtil.addToListIfNotExists(action, self.exitActions)
end
function AbstractState:addUpdateAction(action)
  SuperCupUtil.addToListIfNotExists(action, self.updateActions)
end
