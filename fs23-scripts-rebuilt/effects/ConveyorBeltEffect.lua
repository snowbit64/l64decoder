-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConveyorBeltEffect = {}
local ConveyorBeltEffect_mt = Class(ConveyorBeltEffect, MorphPositionEffect)
function ConveyorBeltEffect.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function ConveyorBeltEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  self.scrollUpdate = true
  return true
end
function ConveyorBeltEffect:update(dt)
  if self.scrollUpdate then
    self.scrollPosition = (self.scrollPosition + dt * self.scrollSpeed) % self.scrollLength
    local v2, v3, v4, v5 = getShaderParameter(self.node, "offsetUV")
    setShaderParameter(self.node, "offsetUV", self.scrollPosition, v3, v4, v5, false)
  end
  setVisibility(self.node, true)
end
function ConveyorBeltEffect:setScrollUpdate(state)
  if state == nil then
    self.scrollUpdate = not self.scrollUpdate
    return
  end
  self.scrollUpdate = state
end
function ConveyorBeltEffect:setMorphPosition(fade1, fade2)
  self.fadeCur[1] = fade1
  self.fadeCur[2] = fade2
  v3:setPrevShaderParameter(self.node, "morphPosition", fade1, fade2, 1, self.speed, false, "prevMorphPosition")
end
