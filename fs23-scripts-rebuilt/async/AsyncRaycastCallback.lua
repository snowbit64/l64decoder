-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AsyncRaycastCallback = {}
local v0 = Class(AsyncRaycastCallback)
function AsyncRaycastCallback.new(v0)
  local v1 = setmetatable({}, u0)
  v1.asyncEngineManager = v0
  v1.targetObject = nil
  v1.onRayHitCallback = nil
  v1.onFinishedCallback = nil
  v1.arguments = nil
  v1.isDone = false
  v1.originPositionX = 0
  v1.originPositionY = 0
  v1.originPositionZ = 0
  v1.directionX = 0
  v1.directionY = 0
  v1.directionZ = 0
  v1.maximumDistance = 0
  v1.collisionMask = CollisionMask.ALL
  v1.generateNormals = false
  v1.shouldRaycastAll = false
  v1.isCancelled = false
  v1.cancellationLoopIndex = 0
  return v1
end
function AsyncRaycastCallback:reset()
  self.targetObject = nil
  self.onOverlapCallback = nil
  self.onFinishedCallback = nil
  self.arguments = nil
end
function AsyncRaycastCallback:setRayParameters(v1, v2, v3, v4, v5, v6, v7, v8)
  self.originPositionX = v1
  self.originPositionY = v2
  self.originPositionZ = v3
  self.directionX = v4
  self.directionY = v5
  self.directionZ = v6
  self.collisionMask = v7
  self.maximumDistance = v8
end
function AsyncRaycastCallback:begin()
  if self.isCancelled then
    return
  end
  if self.shouldRaycastAll then
    raycastAll(self.originPositionX, self.originPositionY, self.originPositionZ, self.directionX, self.directionY, self.directionZ, "engineRaycastCallback", self.maximumDistance, self, self.collisionMask, self.generateNormals, true)
    return
  end
  raycastClosest(self.originPositionX, self.originPositionY, self.originPositionZ, self.directionX, self.directionY, self.directionZ, "engineRaycastCallback", self.maximumDistance, self, self.collisionMask, self.generateNormals, true)
end
function AsyncRaycastCallback:cancel()
  if self.isCancelled then
    return
  end
  local v1 = v1:cancelRaycast(self)
  self.isCancelled = v1
  self.cancellationLoopIndex = g_updateLoopIndex
end
function AsyncRaycastCallback:engineRaycastCallback(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
  if self.isCancelled then
    return
  end
  self.isDone = v11
  if self.asyncEngineManager.isDebugViewActive then
    drawDebugPoint(v2, v3, v4, 0, 1, 0, 1, true)
  end
  if self.generateNormals then
    self.onRayHitCallback(self.targetObject, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, self.arguments)
    return
  end
  self.onRayHitCallback(self.targetObject, v1, v2, v3, v4, v5, v9, v10, v11, self.arguments)
end
function AsyncRaycastCallback:executeOnFinishedCallback()
  if self.isCancelled then
    return
  end
  if self.onFinishedCallback then
    self.onFinishedCallback(self.targetObject, self.arguments)
  end
end
function AsyncRaycastCallback:debugDraw(v1, v2, v3)
  drawDebugLine(self.originPositionX, self.originPositionY, self.originPositionZ, 0, 0, 0, self.originPositionX + self.directionX * self.maximumDistance, self.originPositionY + self.directionY * self.maximumDistance, self.originPositionZ + self.directionZ * self.maximumDistance, v1, v2, v3)
end
