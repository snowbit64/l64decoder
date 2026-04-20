-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Animation = {}
local Animation_mt = Class(Animation)
function Animation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.duplicates = {}
  return v1
end
function Animation:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 11)
  self.duplicates[#self.duplicates] = nil
  -- TODO: structure LOP_FORNLOOP (pc 10, target 6)
end
function Animation.update(v0, v1)
end
function Animation.isRunning(v0)
  return false
end
function Animation.start(v0)
  return false
end
function Animation.stop(v0)
  return false
end
function Animation.reset(v0)
end
function Animation.setFillType(v0, v1)
end
function Animation.isDuplicate(v0, v1)
  return false
end
function Animation:addDuplicate(otherAnimation)
  table.insert(self.duplicates, otherAnimation)
end
function Animation:updateDuplicates()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self:updateDuplicate(self.duplicates[1])
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
end
function Animation.updateDuplicate(v0, v1)
end
function Animation.calculateTurnOffFadeTime(currentSpeedFactor, currentSpeed, direction, position, targetPosition, originalFadeOut, wrapPosition, subDevisions)
  -- TODO: structure LOP_FORNPREP (pc 7, target 19)
  local v13 = math.max(currentSpeedFactor - 1 / originalFadeOut, 0)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 8)
  local v10, v11 = math.modf((position + currentSpeed * v13 - targetPosition) / wrapPosition / subDevisions)
  if 0 < direction then
    v13 = math.abs(v11)
    -- if 0.2 < v13 then goto L57 end
  end
  if direction < 0 then
    v13 = math.abs(v11)
    -- if v13 < 0.2 then goto L57 end
  end
  v13 = math.abs(v12 - position)
  if v13 < wrapPosition * 0.5 then
  end
  return (position - v10 * wrapPosition + targetPosition) / (position - v8) * originalFadeOut
end
