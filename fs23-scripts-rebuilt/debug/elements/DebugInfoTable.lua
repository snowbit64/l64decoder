-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugInfoTable = {}
local DebugInfoTable_mt = Class(DebugInfoTable)
function DebugInfoTable.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.x = 0
  v1.y = 0
  v1.z = 0
  v1.rotX = 0
  v1.rotY = 0
  v1.rotZ = 0
  v1.r = 1
  v1.g = 1
  v1.b = 1
  v1.a = 1
  v1.size = 0.25
  v1.text = nil
  v1.alignToGround = false
  return v1
end
function DebugInfoTable.delete(v0)
end
function DebugInfoTable.update(v0, v1)
end
function DebugInfoTable:draw()
  setTextDepthTestEnabled(false)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextColor(self.r, self.g, self.b, self.a)
  setTextBold(false)
  -- TODO: structure LOP_FORNPREP (pc 30, target 180)
  -- TODO: structure LOP_FORNPREP (pc 41, target 137)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  renderText3D(self.x, self.y + 0, self.z, self.rotX, self.rotY, self.rotZ, self.size, self.information[#self.information].content[#self.information[#self.information].content].name)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v14 = type(self.information[#self.information].content[#self.information[#self.information].content].value)
  if v14 == "number" then
    local v24 = string.format("%.4f", self.information[#self.information].content[#self.information[#self.information].content].value)
    renderText3D(self.x, self.y + 0, self.z, self.rotX, self.rotY, self.rotZ, self.size, " " .. v24)
  else
    v24 = tostring(self.information[#self.information].content[#self.information[#self.information].content].value)
    renderText3D(self.x, self.y + 0, self.z, self.rotX, self.rotY, self.rotZ, self.size, " " .. v24)
  end
  -- TODO: structure LOP_FORNLOOP (pc 136, target 42)
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(true)
  renderText3D(self.x, self.y + v1 + self.size, self.z, self.rotX, self.rotY, self.rotZ, self.size, v6)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_LEFT)
  -- TODO: structure LOP_FORNLOOP (pc 179, target 31)
  setTextDepthTestEnabled(true)
end
function DebugInfoTable:createWithNode(node, info, size)
  local v4, v5, v6 = getWorldTranslation(node)
  local v7, v8, v9 = getWorldRotation(node)
  return self:createWithWorldPosAndRot(v4, v5, v6, v7, v8, v9, info, size)
end
function DebugInfoTable:createWithNodeToCamera(node, yOffset, info, size)
  local v5, v6, v7 = localToWorld(node, 0, yOffset, 0)
  local v9 = getCamera()
  local v8, v9, v10 = getWorldTranslation(...)
  local v11, v12, v13 = MathUtil.vector3Normalize(v8 - v5, v9 - v6, v10 - v7)
  local v14 = MathUtil.getYRotationFromDirection(v11, v13)
  return self:createWithWorldPosAndRot(v5, v6, v7, 0, v14, 0, info, size)
end
function DebugInfoTable:createWithWorldPosAndRot(x, y, z, rotX, rotY, rotZ, info, size)
  self.x = x
  self.y = y
  self.z = z
  self.rotX = rotX
  self.rotY = rotY
  self.rotZ = rotZ
  self.information = info
  self.size = size * 2.5
  return self
end
