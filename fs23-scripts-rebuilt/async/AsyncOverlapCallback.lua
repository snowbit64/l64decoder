-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AsyncOverlapCallback = {}
local v0 = Class(AsyncOverlapCallback)
function AsyncOverlapCallback.new(v0)
  local v1 = setmetatable({}, u0)
  v1.asyncEngineManager = v0
  local v2 = DebugCube.new()
  v1.debugCube = v2
  v1.framesSinceStart = 0
  v1.targetObject = nil
  v1.onOverlapCallback = nil
  v1.onFinishedCallback = nil
  v1.arguments = nil
  v1.worldCentreX = 0
  v1.worldCentreY = 0
  v1.worldCentreZ = 0
  v1.extentsX = 0
  v1.extentsY = 0
  v1.extentsZ = 0
  v1.collisionMask = CollisionMask.ALL
  v1.isCancelled = false
  v1.cancellationLoopIndex = 0
  return v1
end
function AsyncOverlapCallback:reset()
  self.targetObject = nil
  self.onOverlapCallback = nil
  self.onFinishedCallback = nil
  self.arguments = nil
end
function AsyncOverlapCallback:setOverlapParameters(v1, v2, v3, v4, v5, v6, v7)
  self.worldCentreX = v1
  self.worldCentreY = v2
  self.worldCentreZ = v3
  self.extentsX = v4
  self.extentsY = v5
  self.extentsZ = v6
  self.collisionMask = v7
  v8:createWithPosAndDir(v1, v2, v3, 0, 0, 1, 0, 1, 0, v4 * 2, v5 * 2, v6 * 2)
end
function AsyncOverlapCallback:begin()
  if self.isCancelled then
    return
  end
  overlapBox(self.worldCentreX, self.worldCentreY, self.worldCentreZ, 0, 0, 0, self.extentsX, self.extentsY, self.extentsZ, "engineOverlapCallback", self, self.collisionMask, true, true, true, true)
end
function AsyncOverlapCallback:cancel()
  if self.isCancelled then
    return
  end
  local v1 = v1:cancelOverlap(self)
  self.isCancelled = v1
  self.cancellationLoopIndex = g_updateLoopIndex
end
function AsyncOverlapCallback:engineOverlapCallback(v1)
  if self.isCancelled then
    return
  end
  self.onOverlapCallback(self.targetObject, v1, self.arguments)
end
function AsyncOverlapCallback:executeOnFinishedCallback()
  if self.isCancelled then
    return
  end
  if self.onFinishedCallback then
    self.onFinishedCallback(self.targetObject, self.arguments)
  end
end
function AsyncOverlapCallback:debugDraw(v1, v2, v3)
  v4:setColor(v1, v2, v3)
  v4:draw()
end
