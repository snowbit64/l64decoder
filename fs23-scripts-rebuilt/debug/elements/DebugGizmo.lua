-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugGizmo = {}
local DebugGizmo_mt = Class(DebugGizmo)
function DebugGizmo.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.x = 0
  v1.y = 0
  v1.z = 0
  v1.normX = 1
  v1.normY = 0
  v1.normZ = 0
  v1.upX = 0
  v1.upY = 1
  v1.upZ = 0
  v1.dirX = 0
  v1.dirY = 0
  v1.dirZ = 1
  v1.scale = 1
  v1.solid = true
  v1.text = nil
  v1.textOffset = {x = 0, y = 0, z = 0}
  v1.textColor = nil
  local v2 = getCorrectTextSize(0.012)
  v1.textSize = v2
  v1.alignToGround = false
  v1.hideWhenGuiIsOpen = false
  return v1
end
function DebugGizmo.delete(v0)
end
function DebugGizmo.update(v0, v1)
end
function DebugGizmo:draw()
  if self.hideWhenGuiIsOpen then
    local v1 = v1:getIsGuiVisible()
    if v1 then
      return
    end
  end
  drawDebugLine(self.x, self.y, self.z, 1, 0, 0, self.x + self.scale * self.normX, self.y + self.scale * self.normY, self.z + self.scale * self.normZ, 1, 0, 0, self.solid)
  drawDebugLine(self.x, self.y, self.z, 0, 1, 0, self.x + self.scale * self.upX, self.y + self.scale * self.upY, self.z + self.scale * self.upZ, 0, 1, 0, self.solid)
  drawDebugLine(self.x, self.y, self.z, 0, 0, 1, self.x + self.scale * self.dirX, self.y + self.scale * self.dirY, self.z + self.scale * self.dirZ, 0, 0, 1, self.solid)
  if self.text ~= nil then
    Utils.renderTextAtWorldPosition(self.x + self.textOffset.x, self.y + self.textOffset.y, self.z + self.textOffset.z, self.text, self.textSize, 0, self.textColor)
  end
end
function DebugGizmo:createWithNode(node, text, alignToGround, textOffset, scale, solid, hideWhenGUIOpen)
  local v8, v9, v10 = getWorldTranslation(node)
  local v11, v12, v13 = localDirectionToWorld(node, 0, 1, 0)
  local v14, v15, v16 = localDirectionToWorld(node, 0, 0, 1)
  return self:createWithWorldPosAndDir(v8, v9, v10, v14, v15, v16, v11, v12, v13, text, alignToGround, textOffset, scale, solid, hideWhenGUIOpen)
end
function DebugGizmo:createWithWorldPosAndDir(x, y, z, dirX, dirY, dirZ, upX, upY, upZ, text, alignToGround, textOffset, scale, solid, hideWhenGUIOpen)
  if alignToGround and g_currentMission.terrainRootNode ~= nil then
    local v16 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  end
  self.x = x
  self.y = y
  self.z = z
  self.dirX = dirX
  self.dirY = dirY
  self.dirZ = dirZ
  self.upX = upX
  self.upY = upY
  self.upZ = upZ
  local v16, v17, v18 = MathUtil.crossProduct(upX, upY, upZ, dirX, dirY, dirZ)
  self.normX = v16
  self.normY = v17
  self.normZ = v18
  v16 = tostring(text)
  self.text = v16
  self.scale = scale or 1
  v16 = Utils.getNoNil(solid, self.solid)
  self.solid = v16
  if textOffset then
    if not textOffset.x then
    end
    v16.x = v17
    if not textOffset.y then
    end
    v16.y = v17
    if not textOffset.z then
    end
    v16.z = v17
  end
  v16 = Utils.getNoNil(alignToGround, self.alignToGround)
  self.alignToGround = v16
  v16 = Utils.getNoNil(hideWhenGUIOpen, self.hideWhenGuiIsOpen)
  self.hideWhenGuiIsOpen = v16
  return self
end
function DebugGizmo:setColor(r, g, b, a)
  self.textColor = {r or 1, g or 1, b or 1, a or 1}
  return self
end
