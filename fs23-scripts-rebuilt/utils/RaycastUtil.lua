-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RaycastUtil = {}
function RaycastUtil.getCameraPickingRay(v0, v1, v2)
  local v3, v4, v5 = getWorldTranslation(v2)
  local v6, v7, v8 = unProject(v0, v1, 1)
  return v3, v4, v5, v6 - v3, v7 - v4, v8 - v5
end
function RaycastUtil.raycastClosest(x, y, z, dx, dy, dz, maxDistance, collisionMask)
  RaycastUtil.closestId = nil
  RaycastUtil.closestX = nil
  RaycastUtil.closestY = nil
  RaycastUtil.closestZ = nil
  raycastClosest(x, y, z, dx, dy, dz, "raycastClosestCallback", maxDistance, RaycastUtil, collisionMask)
  return RaycastUtil.closestId, RaycastUtil.closestX, RaycastUtil.closestY, RaycastUtil.closestZ, RaycastUtil.distance
end
function RaycastUtil.raycastClosestCallback(_, hitObjectId, x, y, z, distance)
  RaycastUtil.closestId = hitObjectId
  RaycastUtil.distance = distance
  RaycastUtil.closestX = x
  RaycastUtil.closestY = y
  RaycastUtil.closestZ = z
end
function RaycastUtil.raycastBox(x, y, z, rx, ry, rz, ex, ey, ez, collisionMask)
  overlapBox(x, y, z, rx, ry, rz, ex, ey, ez, "boxOverlapCallback", RaycastUtil, collisionMask, true, true, true)
end
function RaycastUtil.boxOverlapCallback(_, hitObjectId, x, y, z, distance)
  log("BOX HIT", hitObjectId, x, y, z, distance)
end
function RaycastUtil.raycastSphere(x, y, z, radius, collisionMask)
  overlapBox(x, y, z, radius, "sphereOverlapCallback", RaycastUtil, collisionMask, true, true, true)
end
function RaycastUtil.sphereOverlapCallback(_, hitObjectId, x, y, z, distance)
  log("SPHERE HIT", hitObjectId, x, y, z, distance)
end
