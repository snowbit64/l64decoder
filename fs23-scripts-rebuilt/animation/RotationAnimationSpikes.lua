-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RotationAnimationSpikes = {}
local RotationAnimationSpikes_mt = Class(RotationAnimationSpikes, RotationAnimation)
function RotationAnimationSpikes.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function RotationAnimationSpikes:load(xmlFile, key, rootNodes, owner, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.load(self, xmlFile, key, rootNodes, owner, i3dMapping)
  if v6 == nil then
    return nil
  end
  v6 = xmlFile:getValue(key .. ".spikes#maxRot", 0)
  self.spikeMaxRot = v6
  v6 = xmlFile:getValue(key .. ".spikes#rotAxis", 3)
  self.spikeRotAxis = v6
  v6 = xmlFile:getValue(key .. ".spikes#moveUpRange", nil, true)
  v7 = xmlFile:getValue(key .. ".spikes#moveDownRange", nil, true)
  self.moveUpStart = v6[1]
  self.moveUpEnd = v6[2]
  self.moveDownStart = v7[1]
  self.moveDownEnd = v7[2]
  self.spikes = {}
  xmlFile:iterate(key .. ".spikes.spike", function(self, xmlFile)
    local rootNodes = rootNodes:getValue(xmlFile .. "#node", nil, u1, u2)
    if {node = rootNodes}.node ~= nil then
      rootNodes = rootNodes:getValue(xmlFile .. "#direction", 1)
      table.insert(u3.spikes, {node = rootNodes, direction = rootNodes})
    end
  end)
  self.rotOffset = 2 * math.pi / #self.spikes
  self:updateSpikes()
  return self
end
function RotationAnimationSpikes:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 < self.currentAlpha then
    self:updateSpikes()
  end
end
function RotationAnimationSpikes:updateSpikes()
  if self.rotSpeed < 0 then
    local v2 = math.abs(2 * math.pi - self.currentRot % 2 * math.pi)
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 135)
  if self.moveUpStart < (v1 - (1 - 1) * self.rotOffset + 2 * math.pi) % 2 * math.pi then
    -- if (v1 - (1 - 1) * v0.rotOffset + 2 * math.pi) % 2 * math.pi > v0.moveUpEnd then goto L67 end
  elseif self.moveDownStart < (v1 - (1 - 1) * self.rotOffset + 2 * math.pi) % 2 * math.pi then
    -- if (v1 - (1 - 1) * v0.rotOffset + 2 * math.pi) % 2 * math.pi > v0.moveDownEnd then goto L85 end
  else
    if self.moveUpEnd < (v1 - (1 - 1) * self.rotOffset + 2 * math.pi) % 2 * math.pi and (v1 - (1 - 1) * self.rotOffset + 2 * math.pi) % 2 * math.pi <= self.moveDownStart then
    end
  end
  if self.spikeRotAxis == 1 then
    setRotation(v5.node, self.spikeMaxRot * v7 * v5.direction, 0, 0)
  elseif self.spikeRotAxis == 2 then
    setRotation(v5.node, 0, self.spikeMaxRot * v7 * v5.direction, 0)
  else
    setRotation(v5.node, 0, 0, self.spikeMaxRot * v7 * v5.direction)
  end
  -- TODO: structure LOP_FORNLOOP (pc 134, target 28)
end
function RotationAnimationSpikes:registerAnimationClassXMLPaths(v1)
  self:register(XMLValueType.VECTOR_ROT_2, v1 .. ".spikes#moveUpRange", "Move up range")
  self:register(XMLValueType.VECTOR_ROT_2, v1 .. ".spikes#moveDownRange", "Move down range")
  self:register(XMLValueType.ANGLE, v1 .. ".spikes#maxRot", "Max. spike rotation")
  self:register(XMLValueType.INT, v1 .. ".spikes#rotAxis", "Rotation axis", 3)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".spikes.spike(?)#node", "Spike node")
  self:register(XMLValueType.INT, v1 .. ".spikes.spike(?)#direction", "Spike rot. direction")
end
