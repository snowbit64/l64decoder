-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ValueDelay = {}
local ValueDelay_mt = Class(ValueDelay)
function ValueDelay.new(duration, direction, customMt)
  if not customMt then
  end
  v4(v5, v6)
  v3.duration = duration
  v3.direction = direction
  v3.values = {}
  local v7 = math.floor(duration / 16.666666666666668)
  -- TODO: structure LOP_FORNPREP (pc 25, target 41)
  table.insert(v3.values, {value = 0, time = -1})
  -- TODO: structure LOP_FORNLOOP (pc 40, target 26)
  v3.insertIndex = 0
  v3.maxFrames = #v3.values
  v3.isReseted = true
  return v3
end
function ValueDelay:add(value, dt)
  self.isReseted = false
  if self.maxFrames == 0 then
    return value
  end
  self.insertIndex = self.insertIndex + 1
  if self.maxFrames < self.insertIndex then
    self.insertIndex = 1
  end
  self.values[self.insertIndex].value = value
  self.values[self.insertIndex].time = g_time
  -- TODO: structure LOP_FORNPREP (pc 43, target 93)
  if self.insertIndex - 1 <= 0 then
  end
  if self.values[v11].time ~= -1 then
    if self.duration - v3.time - self.values[v11].time < v4 then
      -- if 0 >= v0.duration - v3.time - v0.values[v11].time then goto L79 end
    elseif self.duration - v3.time - self.values[v11].time < 0 then
      -- goto L93  (LOP_JUMP +9)
      -- goto L86  (LOP_JUMP +1)
      -- goto L93  (LOP_JUMP +7)
    end
    if v10 == self.maxFrames - 1 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 92, target 44)
  end
  if v5 ~= 0 and v7 then
  end
  if self.direction ~= nil then
    if self.direction == -1 then
      -- if v8 >= v1 then goto L113 end
      return value
      return v8
    end
    if value < v8 then
      return value
    end
  end
  return v8
end
function ValueDelay:reset()
  if not self.isReseted then
    -- TODO: structure LOP_FORNPREP (pc 7, target 21)
    self.values[1].value = 0
    self.values[1].time = -1
    -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
    self.isReseted = true
  end
end
