-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RingBuffer = {}
local RingBuffer_mt = Class(RingBuffer)
function RingBuffer.new(size, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.size = size
  v2.index = 1
  v2.values = {[1] = 0}
  return v2
end
function RingBuffer:add(value)
  self.values[self.index] = value
  self.index = self.index + 1
  if self.size < self.index then
    self.index = 1
  end
end
function RingBuffer:getAverage()
  for v5, v6 in ipairs(self.values) do
  end
  return v1 / #self.values
end
