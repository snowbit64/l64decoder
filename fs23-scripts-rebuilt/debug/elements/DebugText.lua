-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugText = {}
local DebugText_mt = Class(DebugText)
function DebugText.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.x = 0
  v1.y = 0
  v1.z = 0
  v1.rotX = 0
  v1.rotY = 0
  v1.rotZ = 0
  v1.alignment = RenderText.ALIGN_CENTER
  v1.verticalAlignment = RenderText.VERTICAL_ALIGN_MIDDLE
  v1.r = 1
  v1.g = 1
  v1.b = 1
  v1.a = 1
  v1.size = 0.1
  v1.text = nil
  v1.alignToGround = false
  v1.alignToCamera = false
  v1.clipDistance = nil
  return v1
end
function DebugText.delete(v0)
end
function DebugText:update(dt)
  if self.alignToCamera then
    local v2 = self:getRotationToCamera(self.x, self.y, self.z)
    self.rotY = v2
  end
end
function DebugText:draw()
  if self.clipDistance ~= nil then
    local v2 = getCamera()
    local v1, v2, v3 = getWorldTranslation(...)
    local v4 = MathUtil.vector3Length(v1 - self.x, v2 - self.y, v3 - self.z)
    if self.clipDistance < v4 then
      return
    end
  end
  setTextDepthTestEnabled(false)
  setTextAlignment(self.alignment)
  setTextVerticalAlignment(self.verticalAlignment)
  setTextColor(self.r, self.g, self.b, self.a)
  renderText3D(self.x, self.y, self.z, self.rotX, self.rotY, self.rotZ, self.size, self.text)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextDepthTestEnabled(true)
end
function DebugText:createWithNode(node, text, size)
  local v4, v5, v6 = getWorldTranslation(node)
  local v7, v8, v9 = getWorldRotation(node)
  return self:createWithWorldPosAndRot(v4, v5, v6, v7, v8, v9, text, size)
end
function DebugText:createWithNodeToCamera(node, yOffset, text, size)
  self.alignToCamera = true
  local v5, v6, v7 = localToWorld(node, 0, yOffset, 0)
  local v14 = self:getRotationToCamera(v5, v6, v7)
  return self:createWithWorldPosAndRot(v5, v6, v7, 0, v14, 0, text, size)
end
function DebugText:createWithWorldPos(v1, v2, v3, v4, v5)
  self.alignToCamera = true
  self.x = v1
  self.y = v2
  self.z = v3
  self.rotX = 0
  self.rotY = 0
  self.rotZ = 0
  self.text = v4
  self.size = v5
  return self
end
function DebugText:createWithWorldPosAndRot(x, y, z, rotX, rotY, rotZ, text, size)
  self.x = x
  self.y = y
  self.z = z
  self.rotX = rotX
  self.rotY = rotY
  self.rotZ = rotZ
  self.text = text
  self.size = size
  return self
end
function DebugText.getRotationToCamera(v0, v1, v2, v3)
  local v5 = getCamera()
  local v4, v5, v6 = getWorldTranslation(...)
  local v7, v8, v9 = MathUtil.vector3Normalize(v4 - v1, v5 - v2, v6 - v3)
  return MathUtil.getYRotationFromDirection(v7, v9)
end
function DebugText:setColor(r, g, b, a)
  if not r then
  end
  self.r = v5
  if not g then
  end
  self.g = v5
  if not b then
  end
  self.b = v5
  if not a then
  end
  self.a = v5
  return self
end
function DebugText:setClipDistance(clipDistance)
  self.clipDistance = clipDistance
  return self
end
