-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ValueBuffer = {}
local ValueBuffer_mt = Class(ValueBuffer)
function ValueBuffer.new(duration, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.duration = duration
  v2.index = 1
  v2.values = {}
  v2.time = 0
  return v2
end
function ValueBuffer:add(value)
  self.values[self.index] = value
  self.index = self.index + 1
  if self.duration < g_time - self.time then
    if self.index < #self.values then
      -- TODO: structure LOP_FORNPREP (pc 32, target 40)
      table.remove(self.values, #self.values)
      -- TODO: structure LOP_FORNLOOP (pc 39, target 33)
    end
    self.time = g_time
    self.index = 1
  end
end
function ValueBuffer:get(duration)
  for v6, v7 in ipairs(self.values) do
  end
  if not duration then
  end
  return v2 * v3 / self.duration
end
function ValueBuffer:getAverage()
  for v5, v6 in ipairs(self.values) do
  end
  return v1 / #self.values
end
