-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Queue = {}
local Queue_mt = Class(Queue)
function Queue.new(v0)
  return setmetatable({list = {}}, u0)
end
function Queue:push(item)
  table.insert(self.list, item)
end
function Queue:pop()
  return table.remove(self.list, 1)
end
function Queue:isEmpty()
  if #self.list ~= 0 then
  end
  return true
end
function Queue:size()
  return #self.list
end
function Queue:clear()
  self.list = {}
end
function Queue.fromList(list)
  local v1 = v1:new()
  v1.list = list
  return v1
end
