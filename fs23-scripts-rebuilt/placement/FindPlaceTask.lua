-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FindPlaceTask = {}
local FindPlaceTask_mt = Class(FindPlaceTask)
function FindPlaceTask.new(places, size, callback, callbackTarget, filterFunction)
  local v5 = setmetatable({}, u0)
  v5.places = places
  v5.size = size
  v5.halfWidth = size.width / 2
  v5.halfLength = size.length / 2
  v5.halfHeight = size.height / 2
  v5.callback = callback
  v5.callbackTarget = callbackTarget
  v5.filterFunction = filterFunction
  v5.curPlaceIndex = 1
  v5.currentPlace = nil
  v5.currentPositionOffset = 0
  return v5
end
function FindPlaceTask:getPlaceFulfillsSizeRequirements()
  if self.currentPlace.maxWidth >= self.size.width and self.currentPlace.maxLength >= self.size.length then
    -- if v0.currentPlace.maxHeight >= v0.size.height then goto L32 end
  end
  return false
  return true
end
function FindPlaceTask:getNextPosition()
  if not self.currentPlace then
    local v1 = self:nextPlace()
    if not v1 then
      Logging.devWarning("FindPlaceTask: no place available for requested size w=%f:.2, l=%f:.2, h=%f:.2", self.size.width, self.size.length, self.size.height)
      return
    end
  end
  if self.currentPlace.width - self.halfWidth <= self.currentPositionOffset then
    v1 = self:nextPlace()
    if not v1 then
      return
    end
  end
  local v4 = math.max(self.halfWidth, PlacementUtil.TEST_STEP_SIZE)
  self.currentPositionOffset = self.currentPositionOffset + v4
  return {x = self.currentPlace.startX + (self.halfWidth + self.currentPositionOffset) * self.currentPlace.dirX, y = self.currentPlace.startY + (self.halfWidth + self.currentPositionOffset) * self.currentPlace.dirY, z = self.currentPlace.startZ + (self.halfWidth + self.currentPositionOffset) * self.currentPlace.dirZ, xRot = self.currentPlace.rotX, yRot = self.currentPlace.rotY, zRot = self.currentPlace.rotZ}
end
function FindPlaceTask:nextPlace()
  self.currentPositionOffset = 0
  while true do
    self.currentPlace = self.places[self.curPlaceIndex]
    if not self.currentPlace then
      return false
    end
    v1 = self:getPlaceFulfillsSizeRequirements()
    if v1 then
      self.curPlaceIndex = self.curPlaceIndex + 1
      return true
    end
    self.curPlaceIndex = self.curPlaceIndex + 1
  end
end
