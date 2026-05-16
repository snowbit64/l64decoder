-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MathUtil = {}
function MathUtil.sign(v0)
  if 0 < v0 then
    return 1
  end
  if v0 < 0 then
    return -1
  end
  return 0
end
function MathUtil.isNan(v0)
  if v0 ~= v0 then
  end
  return not true
end
function MathUtil.round(v0, v1)
  if v0 == nil then
    return nil
  end
  if v1 then
    local v4 = math.floor(v0 * 10 ^ v1 + 0.5)
    return v4 / 10 ^ v1
  end
  return math.floor(v0 + 0.5)
end
function MathUtil.degToRad(v0)
  if v0 ~= nil then
    return math.rad(v0)
  end
  return 0
end
function MathUtil.lerp(v0, v1, v2)
  return v0 + (v1 - v0) * v2
end
function MathUtil.inverseLerp(v1, v2, cv)
  local v3 = math.abs(v1 - v2)
  if v3 < 0.0001 then
    return 0
  end
  v3 = MathUtil.clamp((cv - v1) / (v2 - v1), 0, 1)
  return v3
end
function MathUtil.timeLerp(startTime, endTime, currentTime)
  if startTime == endTime then
    return 0
  end
  if endTime < startTime then
  end
  return (currentTime - startTime) / (endTime - startTime)
end
function MathUtil.clamp(value, minVal, maxVal)
  local v4 = math.max(value, minVal)
  return math.min(v4, maxVal)
end
function MathUtil.getIsOutOfBounds(value, limit1, limit2)
  if limit1 < limit2 then
    if value >= limit1 and limit2 >= value then
    end
    return v3
  end
  if limit1 >= value and value >= limit2 then
  end
  return v3
end
function MathUtil.getFlooredPercent(value, maxValue)
  if 0 < maxValue then
    local v3 = math.floor(value / maxValue * 100)
    if 99 < v3 and value < maxValue then
      return 99
    end
    if v2 < 1 and 0 < value then
    end
  end
  return v2
end
function MathUtil.getFlooredBounded(value, minValue, maxValue)
  if value == minValue then
    return minValue
  end
  if value == maxValue then
    return maxValue
  end
  local v5 = math.floor(value)
  local v4 = math.max(v5, minValue + 1)
  return math.min(v4, maxValue - 1)
end
function MathUtil.getValidLimit(limit)
  while true do
    if not (limit < -math.pi) then
      break
    end
  end
  while true do
    if not (math.pi < limit) then
      break
    end
  end
  return limit
end
function MathUtil.getAngleDifference(alpha, beta)
  return MathUtil.getValidLimit(alpha - beta)
end
function MathUtil.eulerToDirection(yaw, pitch)
  local xzLength = math.cos(-pitch)
  local v4 = math.sin(yaw)
  v4 = math.sin(-pitch)
  local v6 = math.cos(yaw)
  return xzLength * v4, v4, xzLength * v6
end
function MathUtil.vector2Length(x, y)
  return math.sqrt(x * x + y * y)
end
function MathUtil.vector2LengthSq(x, y)
  return x * x + y * y
end
function MathUtil.vector2Normalize(x, y)
  local length = MathUtil.vector2Length(x, y)
  return x / length, y / length
end
function MathUtil.vector3Length(x, y, z)
  return math.sqrt(x * x + y * y + z * z)
end
function MathUtil.vector3LengthSq(x, y, z)
  return x * x + y * y + z * z
end
function MathUtil.vector3Normalize(x, y, z)
  local length = MathUtil.vector3Length(x, y, z)
  return x / length, y / length, z / length
end
function MathUtil.vector3SetLength(x, y, z, length)
  local v4, v5, v6 = MathUtil.vector3Normalize(x, y, z)
  return v4 * length, v5 * length, v6 * length
end
function MathUtil.vector3Clamp(x, y, z, minVal, maxVal)
  local length = MathUtil.vector3Length(x, y, z)
  if 0 < length then
    local v6 = MathUtil.clamp(length, minVal, maxVal)
    local v6, v7, v8 = MathUtil.vector3SetLength(x, y, z, v6)
  end
  return x, y, z
end
function MathUtil.vector3Lerp(x1, y1, z1, x2, y2, z2, alpha)
  return x1 + (x2 - x1) * alpha, y1 + (y2 - y1) * alpha, z1 + (z2 - z1) * alpha
end
MathUtil.lerp3 = MathUtil.vector3Lerp
function MathUtil.inverseVector3Lerp(x1, y1, z1, x2, y2, z2, c1, c2, c3)
  local alpha1 = MathUtil.inverseLerp(x1, x2, c1)
  local alpha2 = MathUtil.inverseLerp(y1, y2, c2)
  local alpha3 = MathUtil.inverseLerp(z1, z2, c3)
  if x1 ~= x2 then
    return alpha1
  end
  if y1 ~= y2 then
    return alpha2
  end
  if z1 ~= z2 then
  end
  return v12
end
function MathUtil:vector3ArrayLerp(v1, v2)
  return self[1] + (v1[1] - self[1]) * v2, self[2] + (v1[2] - self[2]) * v2, self[3] + (v1[3] - self[3]) * v2
end
function MathUtil:inverseVector3ArrayLerp(v1, v2)
  local v3 = MathUtil.inverseLerp(self[1], v1[1], v2[1])
  local v4 = MathUtil.inverseLerp(self[2], v1[2], v2[2])
  local v5 = MathUtil.inverseLerp(self[3], v1[3], v2[3])
  if self[1] ~= v1[1] then
    return v3
  end
  if self[2] ~= v1[2] then
    return v4
  end
  if self[3] ~= v1[3] then
  end
  return v6
end
function MathUtil.vector3Transformation(x, y, z, m11, m12, m13, m21, m22, m23, m31, m32, m33)
  return x * m11 + y * m21 + z * m31, x * m12 + y * m22 + z * m32, x * m13 + y * m23 + z * m33
end
function MathUtil.transform(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, xOffset, yOffset, zOffset)
  local v12, v13, v14 = MathUtil.crossProduct(upX, upY, upZ, dirX, dirY, dirZ)
  return x + v12 * xOffset + upX * yOffset + dirX * zOffset, y + v13 * xOffset + upY * yOffset + dirY * zOffset, z + v14 * xOffset + upZ * yOffset + dirZ * zOffset
end
function MathUtil.dotProduct(ax, ay, az, bx, by, bz)
  return ax * bx + ay * by + az * bz
end
function MathUtil.crossProduct(ax, ay, az, bx, by, bz)
  return ay * bz - az * by, az * bx - ax * bz, ax * by - ay * bx
end
function MathUtil.getVectorAngleDifference(dirX1, dirY1, dirZ1, dirX2, dirY2, dirZ2)
  local length1 = math.sqrt(dirX1 * dirX1 + dirY1 * dirY1 + dirZ1 * dirZ1)
  local length2 = math.sqrt(dirX2 * dirX2 + dirY2 * dirY2 + dirZ2 * dirZ2)
  return math.acos((dirX1 * dirX2 + dirY1 * dirY2 + dirZ1 * dirZ2) / length1 * length2)
end
function MathUtil.getYRotationFromDirection(dx, dz)
  return math.atan2(dx, dz)
end
function MathUtil.getDirectionFromYRotation(rotY)
  local v1 = math.sin(rotY)
  local v2 = math.cos(rotY)
  return v1
end
function MathUtil.getRotationLimitedVector2(x, y, minRot, maxRot)
  local v5 = math.atan2(y, x)
  if -v5 >= minRot then
    -- if v3 >= -v5 then goto L36 end
  end
  if v4 < minRot then
  else
  end
  v5 = math.sqrt(x * x + y * y)
  local v6 = math.cos(-v4)
  v6 = math.sin(-v4)
  return v6 * v5, v6 * v5
end
function MathUtil.quaternionVectorMultiplication(quatX, quatY, quatZ, quatW, vecX, vecY, vecZ)
  return (1 - quatY * quatY * 2 + quatZ * quatZ * 2) * vecX + (quatX * quatY * 2 - quatW * quatZ * 2) * vecY + (quatX * quatZ * 2 + quatW * quatY * 2) * vecZ, (quatX * quatY * 2 + quatW * quatZ * 2) * vecX + (1 - quatX * quatX * 2 + quatZ * quatZ * 2) * vecY + (quatY * quatZ * 2 - quatW * quatX * 2) * vecZ, (quatX * quatZ * 2 - quatW * quatY * 2) * vecX + (quatY * quatZ * 2 + quatW * quatX * 2) * vecY + (1 - quatX * quatX * 2 + quatY * quatY * 2) * vecZ
end
function MathUtil.projectOnLine(px, pz, lineX, lineZ, normlineDirX, normlineDirZ)
  return lineX + normlineDirX * ((px - lineX) * normlineDirX + (pz - lineZ) * normlineDirZ), lineZ + normlineDirZ * ((px - lineX) * normlineDirX + (pz - lineZ) * normlineDirZ)
end
function MathUtil.getProjectOnLineParameter(px, pz, lineX, lineZ, normlineDirX, normlineDirZ)
  return (px - lineX) * normlineDirX + (pz - lineZ) * normlineDirZ
end
function MathUtil.quaternionMult(x, y, z, w, x1, y1, z1, w1)
  return y * z1 - z * y1 + w * x1 + x * w1, z * x1 - x * z1 + w * y1 + y * w1, x * y1 - y * x1 + w * z1 + z * w1, w * w1 - x * x1 - y * y1 - z * z1
end
function MathUtil.quaternionNormalized(x, y, z, w)
  local len = math.sqrt(x * x + y * y + z * z + w * w)
  if 0 < len then
  end
  return x * len, y * len, z * len, w * len
end
function MathUtil.slerpQuaternion(x1, y1, z1, w1, x2, y2, z2, w2, t)
  local v10 = math.acos(x1 * x2 + y1 * y2 + z1 * z2 + w1 * w2)
  local v11 = math.abs(v10)
  if v11 < 0.01 then
    return x1, y1, z1, w1
  end
  v11 = math.sin(v10)
  local v14 = math.sin((1 - t) * v10)
  local v15 = math.sin(t * v10)
  return x1 * v14 * 1 / v11 + x2 * v15 * 1 / v11, y1 * v14 * 1 / v11 + y2 * v15 * 1 / v11, z1 * v14 * 1 / v11 + z2 * v15 * 1 / v11, w1 * v14 * 1 / v11 + w2 * v15 * 1 / v11
end
function MathUtil.normalizeRotationForShortestPath(targetRotation, curRotation)
  while curRotation < targetRotation do
  end
  while targetRotation < curRotation do
  end
  if curRotation + 2 * math.pi - targetRotation < targetRotation - curRotation then
  end
  return targetRotation
end
function MathUtil.nlerpQuaternionShortestPath(x1, y1, z1, w1, x2, y2, z2, w2, t)
  if x1 * x2 + y1 * y2 + z1 * z2 + w1 * w2 < 0 then
  else
  end
  local v16 = math.sqrt(v10 * v10 + v11 * v11 + v12 * v12 + v13 * v13)
  return v10 * 1 / v16, v11 * 1 / v16, v12 * 1 / v16, v13 * 1 / v16
end
function MathUtil.slerpQuaternionShortestPath(x1, y1, z1, w1, x2, y2, z2, w2, t)
  local v11 = MathUtil.clamp(x1 * x2 + y1 * y2 + z1 * z2 + w1 * w2, -1, 1)
  local v10 = math.acos(...)
  v11 = math.abs(v10)
  if v11 < 0.01 then
    return x1, y1, z1, w1
  end
  v11 = math.sin(v10)
  local v14 = math.sin((1 - t) * v10)
  local v15 = math.sin(t * v10)
  if v9 < 0 then
    local v21 = math.sqrt((x1 * -(v14 * 1 / v11) + x2 * v15 * 1 / v11) * (x1 * -(v14 * 1 / v11) + x2 * v15 * 1 / v11) + (y1 * -(v14 * 1 / v11) + y2 * v15 * 1 / v11) * (y1 * -(v14 * 1 / v11) + y2 * v15 * 1 / v11) + (z1 * -(v14 * 1 / v11) + z2 * v15 * 1 / v11) * (z1 * -(v14 * 1 / v11) + z2 * v15 * 1 / v11) + (w1 * -(v14 * 1 / v11) + w2 * v15 * 1 / v11) * (w1 * -(v14 * 1 / v11) + w2 * v15 * 1 / v11))
    return (x1 * -(v14 * 1 / v11) + x2 * v15 * 1 / v11) * 1 / v21, (y1 * -(v14 * 1 / v11) + y2 * v15 * 1 / v11) * 1 / v21, (z1 * -(v14 * 1 / v11) + z2 * v15 * 1 / v11) * 1 / v21, (w1 * -(v14 * 1 / v11) + w2 * v15 * 1 / v11) * 1 / v21
  end
  return x1 * v13 + x2 * v14, y1 * v13 + y2 * v14, z1 * v13 + z2 * v14, w1 * v13 + w2 * v14
end
function MathUtil.quaternionMadShortestPath(x, y, z, w, x1, y1, z1, w1, t)
  if x * x1 + y * y1 + z * z1 + w * w1 < 0 then
    return x - x1 * t, y - y1 * t, z - z1 * t, w - w1 * t
  end
  return x + x1 * t, y + y1 * t, z + z1 * t, w + w1 * t
end
function MathUtil.getDistanceToRectangle2D(posX, posZ, sx, sz, dx, dz, length, widthHalf)
  if 0 <= (posX - sx) * dx + (posZ - sz) * dz and (posX - sx) * dx + (posZ - sz) * dz <= length then
    local v17 = math.abs((posX - sx) * -dz + (posZ - sz) * dx)
    return math.max(v17 - widthHalf, 0)
  end
  if length < v12 then
  end
  if widthHalf < v13 then
    return math.sqrt((v12 - v15) * (v12 - v15) + (v13 - widthHalf) * (v13 - widthHalf))
  end
  if v13 < -widthHalf then
    v16 = math.sqrt((v12 - v15) * (v12 - v15) + (v13 + widthHalf) * (v13 + widthHalf))
    return v16
  end
  v16 = math.abs(v12 - v15)
  return v16
end
function MathUtil.getSignedDistanceToLineSegment2D(x, z, sx, sz, dx, dz, length)
  if 0 <= (x - sx) * dx + (z - sz) * dz and (x - sx) * dx + (z - sz) * dz <= length then
    return (sz - z) * dx - (sx - x) * dz, 0
  end
  if v7 < 0 then
    local v10 = math.sqrt((sx - x) * (sx - x) + (sz - z) * (sz - z))
    return v10, 1
  end
  local v12 = math.sqrt((sx + length * dx - x) * (sx + length * dx - x) + (sz + length * dz - z) * (sz + length * dz - z))
  return v12, 2
end
function MathUtil.getLineLineIntersection2D(x1, z1, dirX1, dirZ1, x2, z2, dirX2, dirZ2)
  local v9 = math.abs(dirX1 * dirZ2 - dirX2 * dirZ1)
  if v9 < 0.00001 then
    return false
  end
  return true, (dirX2 * (z1 - z2) - dirZ2 * (x1 - x2)) / v8, (dirX1 * (z1 - z2) - dirZ1 * (x1 - x2)) / v8
end
function MathUtil.getLineBoundingVolumeIntersect(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)
  local v9 = math.min(ax1, ax2)
  local v10 = math.max(bx1, bx2)
  if v9 <= v10 then
    v9 = math.max(ax1, ax2)
    v10 = math.min(bx1, bx2)
    if v10 <= v9 then
      v9 = math.min(ay1, ay2)
      v10 = math.max(by1, by2)
      if v9 <= v10 then
        v9 = math.max(ay1, ay2)
        v10 = math.min(by1, by2)
        if v10 > v9 then
        end
      end
    end
  end
  return v8
end
function MathUtil.hasRectangleLineIntersection2D(x1, z1, dirX1, dirZ1, dirX2, dirZ2, x3, z3, dirX3, dirZ3)
  local dir1Length = MathUtil.vector2Length(dirX1, dirZ1)
  local dir2Length = MathUtil.vector2Length(dirX2, dirZ2)
  local dir3Length = MathUtil.vector2Length(dirX3, dirZ3)
  local v19, v20, v21 = MathUtil.getLineLineIntersection2D(x3, z3, dirX3 / dir3Length, dirZ3 / dir3Length, x1, z1, dirX1 / dir1Length, dirZ1 / dir1Length)
  if v19 and 0 < v20 and v20 < dir3Length and 0 < v21 and v21 < dir1Length then
    return true
  end
  local v22, v23, v24 = MathUtil.getLineLineIntersection2D(x3, z3, v17, v18, x1, z1, v15, v16)
  if v22 and 0 < v23 and v23 < dir3Length and 0 < v24 and v24 < dir2Length then
    return true
  end
  v22, v23, v24 = MathUtil.getLineLineIntersection2D(x3, z3, v17, v18, x1 + dirX1, z1 + dirZ1, v15, v16)
  if v22 and 0 < v23 and v23 < dir3Length and 0 < v24 and v24 < dir2Length then
    return true
  end
  v22, v23, v24 = MathUtil.getLineLineIntersection2D(x3, z3, v17, v18, x1 + dirX2, z1 + dirZ2, v13, v14)
  if v22 and 0 < v23 and v23 < dir3Length and 0 < v24 and v24 < dir1Length then
    return true
  end
  v22 = MathUtil.getProjectOnLineParameter(x3, z3, x1, z1, v13, v14)
  v23 = MathUtil.getProjectOnLineParameter(x3, z3, x1, z1, v15, v16)
  if 0 < v22 and v22 < dir1Length and 0 < v23 and v23 < dir2Length then
    v24 = MathUtil.getProjectOnLineParameter(x3 + dirX3, z3 + dirZ3, x1, z1, v13, v14)
    v24 = MathUtil.getProjectOnLineParameter(x3 + dirX3, z3 + dirZ3, x1, z1, v15, v16)
    if 0 < v24 and v24 < dir1Length and 0 < v24 and v24 < dir2Length then
      return true
    end
  end
  return false
end
function MathUtil.getCircleCircleIntersection(x1, y1, r1, x2, y2, r2)
  local v8 = MathUtil.vector2Length(x2 - x1, y2 - y1)
  if v8 == 0 and x1 == x2 and y1 == y2 then
    return nil
  end
  if r1 + r2 < v8 then
    return nil
  end
  local v9 = math.abs(r1 - r2)
  if v8 < v9 then
    return nil
  end
  if v8 == r1 + r2 then
    return (x1 - x2) / (r1 + r2) * r1 + x2, (y1 - y2) / (r1 + r2) * r1 + y2
  end
  local v12 = math.sqrt(r1 * r1 - (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8 * (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8)
  return x1 + v6 * (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8 / v8 + -v7 * v12 / v8, y1 + v7 * (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8 / v8 + v6 * v12 / v8, x1 + v6 * (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8 / v8 - -v7 * v12 / v8, y1 + v7 * (r1 * r1 - r2 * r2 + v8 * v8) / 2 * v8 / v8 - v6 * v12 / v8
end
function MathUtil.hasSphereSphereIntersection(x1, y1, z1, r1, x2, y2, z2, r2)
  if (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1) > (r1 + r2) * (r1 + r2) then
  end
  return true
end
function MathUtil.getHasCircleLineIntersection(circleX, circleZ, radius, lineStartX, lineStartZ, lineEndX, lineEndZ)
  local n = math.abs((lineEndX - lineStartX) * (lineStartZ - circleZ) - (lineStartX - circleX) * (lineEndZ - lineStartZ))
  local d = math.sqrt((lineEndX - lineStartX) * (lineEndX - lineStartX) + (lineEndZ - lineStartZ) * (lineEndZ - lineStartZ))
  if radius < n / d then
    return false
  end
  local d1 = math.sqrt((circleX - lineStartX) * (circleX - lineStartX) + (circleZ - lineStartZ) * (circleZ - lineStartZ))
  if d < d1 - radius then
    return false
  end
  local d2 = math.sqrt((circleX - lineEndX) * (circleX - lineEndX) + (circleZ - lineEndZ) * (circleZ - lineEndZ))
  if d < d2 - radius then
    return false
  end
  return true
end
function MathUtil.getCircleLineIntersection(circleX, circleZ, radius, lineStartX, lineStartZ, lineEndX, lineEndZ)
  local v16 = math.pow(radius, 2)
  local v17 = math.pow((lineEndZ - circleZ - lineStartZ - circleZ) / (lineEndX - circleX - lineStartX - circleX), 2)
  v16 = math.pow(radius, 2)
  local v15 = math.pow(lineStartZ - circleZ - (lineEndZ - circleZ - lineStartZ - circleZ) / (lineEndX - circleX - lineStartX - circleX) * (lineStartX - circleX), 2)
  if v16 * v17 + v16 - v15 < 0 then
    return false
  end
  v17 = math.sqrt(v13)
  v17 = math.pow(v11, 2)
  local v18 = math.sqrt(v13)
  v18 = math.pow(v11, 2)
  return true, (-v11 * v12 + v17) / (v17 + 1) + circleX, v11 * (-v11 * v12 + v17) / (v17 + 1) + v12 + circleZ, (-v11 * v12 - v18) / (v18 + 1) + circleX, v11 * (-v11 * v12 - v18) / (v18 + 1) + v12 + circleZ
end
function MathUtil.getClosestPointOnLineSegment(startX, startY, startZ, endX, endY, endZ, targetX, targetY, targetZ)
  local v15 = MathUtil.vector3LengthSq(endX - startX, endY - startY, endZ - startZ)
  local v16 = MathUtil.dotProduct(targetX - startX, targetY - startY, targetZ - startZ, endX - startX, endY - startY, endZ - startZ)
  if v16 / v15 < 0 then
    return startX, startY, startZ, 0
  end
  if 1 < v17 then
    return endX, endY, endZ, 1
  end
  return startX + v12 * v17, startY + v13 * v17, startZ + v14 * v17, v17
end
function MathUtil.getHaveLineSegementsIntersection2D(startX1, start1Z, endX1, endZ1, startX2, start2Z, endX2, endZ2)
  if (endZ2 - start2Z) * (endX1 - startX1) - (endX2 - startX2) * (endZ1 - start1Z) ~= 0 and 0 <= ((endX2 - startX2) * (start1Z - start2Z) - (endZ2 - start2Z) * (startX1 - startX2)) / ((endZ2 - start2Z) * (endX1 - startX1) - (endX2 - startX2) * (endZ1 - start1Z)) and ((endX2 - startX2) * (start1Z - start2Z) - (endZ2 - start2Z) * (startX1 - startX2)) / ((endZ2 - start2Z) * (endX1 - startX1) - (endX2 - startX2) * (endZ1 - start1Z)) <= 1 and 0 <= ((endX1 - startX1) * (start1Z - start2Z) - (endZ1 - start1Z) * (startX1 - startX2)) / ((endZ2 - start2Z) * (endX1 - startX1) - (endX2 - startX2) * (endZ1 - start1Z)) and ((endX1 - startX1) * (start1Z - start2Z) - (endZ1 - start1Z) * (startX1 - startX2)) / ((endZ2 - start2Z) * (endX1 - startX1) - (endX2 - startX2) * (endZ1 - start1Z)) <= 1 then
    return true
  end
  return false
end
function MathUtil.isPointInParallelogram(x, z, startX, startZ, widthX, widthZ, heightX, heightZ)
  if 0 <= -((x - startX) * widthZ - widthX * (z - startZ)) / (widthX * heightZ - heightX * widthZ) and -((x - startX) * widthZ - widthX * (z - startZ)) / (widthX * heightZ - heightX * widthZ) <= 1 and 0 <= ((x - startX) * heightZ - heightX * (z - startZ)) / (widthX * heightZ - heightX * widthZ) and ((x - startX) * heightZ - heightX * (z - startZ)) / (widthX * heightZ - heightX * widthZ) <= 1 then
    return true
  end
  return false
end
function MathUtil.getPointPointDistance(x1, y1, x2, y2)
  return math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
end
function MathUtil.getPointPointDistanceSquared(x1, y1, x2, y2)
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
end
function MathUtil.areaToHa(area, pixelToSqm)
  return area * pixelToSqm / 10000
end
function MathUtil.inchToM(inchValue)
  return inchValue * 0.0254
end
function MathUtil.mToInch(mValue)
  return mValue / 0.0254
end
function MathUtil.msToMinutes(ms)
  return ms / 60000
end
function MathUtil.msToHours(ms)
  return ms / 3600000
end
function MathUtil.msToDays(ms)
  return ms / 86400000
end
function MathUtil.minutesToMs(minutes)
  return minutes * 60 * 1000
end
function MathUtil.hoursToMs(hours)
  return hours * 60 * 60 * 1000
end
function MathUtil.daysToMs(days)
  return days * 24 * 60 * 60 * 1000
end
function MathUtil.mpsToKmh(mps)
  return mps * 3.6
end
function MathUtil.kmhToMps(kmh)
  return kmh / 3.6
end
function MathUtil.rpmToMps(rpm, radius)
  return rpm * radius * 0.00377 / 36
end
function MathUtil.getXZWidthAndHeight(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return startWorldX, startWorldZ, widthWorldX - startWorldX, widthWorldZ - startWorldZ, heightWorldX - startWorldX, heightWorldZ - startWorldZ
end
function MathUtil.getNumOfSetBits(bitmask)
  local v2 = bitShiftRight(bitmask, 1)
  local v1 = bitAND(v2, 1431655765)
  v1 = bitAND(bitmask - v1, 858993459)
  local v3 = bitShiftRight(bitmask - v1, 2)
  v2 = bitAND(v3, 858993459)
  v3 = bitShiftRight(v1 + v2, 4)
  v1 = bitAND(v1 + v2 + v3, 252645135)
  v1 = bitShiftRight(v1 * 16843009, 24)
  return v1
end
function MathUtil.bitsToMask(...)
  for v4, v5 in ipairs({}) do
    local v8 = math.pow(2, v5)
    local v6 = bitOR(...)
  end
  return v0
end
function MathUtil.getBinary(number)
  while true do
    if not (0 < number) then
      break
    end
    table.insert(v1, number % 2)
  end
  return v1
end
function MathUtil.numberToSetBits(number)
  local bits = MathUtil.getBinary(number)
  for v6, v7 in ipairs(bits) do
    if not (v7 == 1) then
      continue
    end
    table.insert(v2, v6 - 1)
  end
  return v2
end
function MathUtil.numberToSetBitsStr(number)
  local setBits = MathUtil.numberToSetBits(number)
  for v6, v7 in ipairs(setBits) do
    if 1 < v6 then
    end
  end
  return v2
end
function MathUtil.getNumRequiredBits(number)
  if 0 > number then
  end
  assert(true)
  while true do
    if not (0 < number) then
      break
    end
    v2 = bitShiftRight(number, 1)
  end
  v2 = math.max(1, v1)
  return v2
end
function MathUtil.getBrightnessFromColor(r, g, b)
  return r * 0.2125 + g * 0.7154 + b * 0.0721
end
function MathUtil.getHorizontalRotationFromDeviceGravity(x, y, z)
  if x == 0 and y == 0 and z == 0 then
    return 0
  end
  if x <= 0 then
    local v4 = math.atan2(y, x)
    if v4 < 0 then
    else
    end
    v4 = MathUtil.clamp(v3, -0.43633222222222223, 0.43633222222222223)
    local v8 = math.abs(z)
    v4 = MathUtil.clamp((0.9 - v8) / 0.25, 0, 1)
  end
  return v3
end
function MathUtil.getSteeringAngleFromDeviceGravity(x, y, z)
  if x == 0 and y == 0 and z == 0 then
    return 0
  end
  local v5 = MathUtil.clamp(y, -1, 1)
  local v4 = math.asin(...)
  if 0.06981315555555556 < -v4 then
    v4 = math.min(-v4, 0.43633222222222223)
  elseif -v4 < -0.06981315555555556 then
    v4 = math.max(-v4, -0.43633222222222223)
  else
  end
  return v3 / 0.36651906666666667
end
function MathUtil.catmullRom(p0, p1, p2, p3, t)
  return 0.5 * (2 * p1 + (-p0 + p2) * t + (2 * p0 - 5 * p1 + 4 * p2 - p3) * t * t + (-p0 + 3 * p1 - 3 * p2 + p3) * t * t * t)
end
function MathUtil.equalEpsilon(a, b, epsilon)
  if a ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L6
  end
  return false
  local v4 = math.abs(a - b)
  if v4 >= epsilon then
  end
  return true
end
function MathUtil.smoothstep(min, max, x)
  local t = MathUtil.clamp((x - min) / (max - min), 0, 1)
  return t * t * (3 - 2 * t)
end
function MathUtil.snapValue(value, step)
  if step == 0 then
    return value
  end
  local v3 = MathUtil.round(value / step)
  return v3 * step
end
function MathUtil.vector2Rotate(x, y, angle)
  local cosValue = math.cos(angle)
  local sinValue = math.sin(angle)
  return x * cosValue - y * sinValue, x * sinValue + y * cosValue
end
