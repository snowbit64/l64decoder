-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UsageBuffer = {}
local UsageBuffer_mt = Class(UsageBuffer)
function UsageBuffer.new(duration, resolution, numBits)
  setmetatable({}, u0)
  return {time = 0, valueSum = 0, numValues = 0, lastValue = 0, lastAddedValue = 0, duration = duration, lastValueSent = 0, numBits = numBits or 8, maxValue = 2 ^ {time = 0, valueSum = 0, numValues = 0, lastValue = 0, lastAddedValue = 0, duration = duration, lastValueSent = 0, numBits = numBits or 8}.numBits - 1, isDirty = false}
end
function UsageBuffer:add(value, skipBuffer, setDirty)
  if g_server ~= nil then
    if value == nil then
    end
    self.lastAddedValue = value
    if skipBuffer then
      self.lastValue = value
      self.time = 0
      self.valueSum = 0
      self.numValues = 0
      -- if not v3 then goto L37 end
      self.isDirty = true
      return
    end
    self.valueSum = self.valueSum + value
    self.numValues = self.numValues + 1
  end
end
function UsageBuffer:update(dt)
  if g_server ~= nil then
    self.time = self.time + dt
    if self.duration < self.time then
      if 0 < self.numValues then
        self.lastValue = self.valueSum / self.numValues
      else
        self.lastValue = 0
      end
      if self.lastValueSent ~= self.lastValue then
        self.isDirty = true
      end
      self.time = 0
      self.valueSum = 0
      self.numValues = 0
    end
  end
end
function UsageBuffer:get()
  return self.lastValue
end
function UsageBuffer:getLastAdded()
  return self.lastAddedValue
end
function UsageBuffer:reset()
  self.time = 0
  self.valueSum = 0
  self.numValues = 0
  self.lastValue = 0
  self.lastAddedValue = 0
end
function UsageBuffer:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, self.numBits)
  self.lastValue = v3
  self.lastAddedValue = self.lastValue
end
function UsageBuffer:writeStream(streamId, connection)
  local v5 = MathUtil.clamp(self.lastValue, 0, self.maxValue)
  streamWriteUIntN(streamId, v5, self.numBits)
end
function UsageBuffer:resetDirtyState()
  self.lastValueSent = self.lastValue
  self.isDirty = false
end
function UsageBuffer:getIsDirty()
  return self.isDirty
end
