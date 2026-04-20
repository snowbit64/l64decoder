-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Queue = {}
local Queue_mt = Class(Queue)
function Queue.new()
  local v0 = setmetatable({}, u0)
  v0.size = 0
  v0.first = nil
  v0.last = nil
  return v0
end
function Queue.delete(v0)
end
function Queue:push(value)
  if self.last then
    self.last._next = value
    value._prev = self.last
    self.last = value
  else
    self.first = value
    self.last = value
  end
  self.size = self.size + 1
end
function Queue:pop()
  if not self.first then
    return
  end
  if self.first._next then
    self.first._next._prev = nil
    self.first = self.first._next
    self.first._next = nil
  else
    self.first = nil
    self.last = nil
  end
  self.size = self.size - 1
  return v1
end
function Queue:remove(value)
  if value._next then
    if value._prev then
      value._next._prev = value._prev
      value._prev._next = value._next
      -- goto L48  (LOP_JUMP +29)
    end
    value._next._prev = nil
    self.first = value._next
  elseif value._prev then
    value._prev._next = nil
    self.last = value._prev
  else
    self.first = nil
    self.last = nil
  end
  if mutateIterating ~= true then
    value._next = nil
    value._prev = nil
  end
  self.size = self.size - 1
end
function Queue:isEmpty()
  if self.first ~= nil then
  end
  return true
end
function Queue:iteratePushOrder(func)
  while self.first ~= nil do
    local v4 = func(v3, v2)
    if not (v4 ~= true) then
      break
    end
  end
end
function Queue:iteratePopOrder(func)
  while self.last ~= nil do
    local v4 = func(v3, v2)
    if not (v4 ~= true) then
      break
    end
  end
end
