-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TargetTreeMarker = {}
local v0 = Class(TargetTreeMarker)
function TargetTreeMarker.new(v0, v1, v2)
  if not v2 then
  end
  local v3 = v3(v4, v5)
  v3.vehicle = v0
  v3.linkNode = v1
  v3.isActive = false
  v3.isFlashing = false
  v3.flashingMinIntensity = 0.1
  v3.flashingTime = 0
  return v3
end
function TargetTreeMarker:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to tree marker file", "$data/shared/forestry/targetTreeMarker.i3d")
  self:register(XMLValueType.FLOAT, v1 .. "#width", "Marker width", 0.05)
  self:register(XMLValueType.FLOAT, v1 .. "#offset", "Marker offset from tree", 0.01)
  self:register(XMLValueType.COLOR, v1 .. "#color", "Marker emissive color", "0 2 0")
end
function TargetTreeMarker:loadFromXML(v1, v2, v3)
  local v4 = v1:getValue(v2 .. "#filename", "$data/shared/forestry/targetTreeMarker.i3d")
  self.filename = v4
  v4 = v1:getValue(v2 .. "#width", 0.05)
  self.width = v4
  v4 = v1:getValue(v2 .. "#offset", 0.01)
  self.offset = v4
  v4 = v1:getValue(v2 .. "#color", "0 2 0", true)
  self.color = v4
  if self.filename ~= nil then
    v4 = Utils.getFilename(self.filename, v3)
    self.filename = v4
    if self.vehicle ~= nil then
      v4 = v4:loadSubSharedI3DFile(self.filename, false, false, self.onI3DLoaded, self, self)
      self.sharedLoadRequestId = v4
      return
    end
    v4 = v4:loadSharedI3DFileAsync(self.filename, false, false, self.onI3DLoaded, self, self)
    self.sharedLoadRequestId = v4
  end
end
function TargetTreeMarker:delete()
  if self.markerId ~= nil then
    delete(self.markerId)
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
  end
  v1:removeUpdateable(self)
end
function TargetTreeMarker:setIsActive(v1)
  self.isActive = v1
  if self.markerId ~= nil then
    setVisibility(self.markerId, v1)
  end
end
function TargetTreeMarker:setColor(v1, v2, v3, v4, v5)
  self.color[1] = v1
  self.color[2] = v2
  self.color[3] = v3
  if self.markerId ~= nil then
    setShaderParameter(self.markerId, "ropeEmissiveColor", self.color[1], self.color[2], self.color[3], 1, false)
  end
  if v4 ~= nil and v4 ~= self.isFlashing then
    self.isFlashing = v4
    if not v5 then
    end
    self.flashingMinIntensity = v6
    if self.isFlashing then
      self.flashingTime = 0
      v6:removeUpdateable(self)
      v6:addUpdateable(self)
      return
    end
    v6:removeUpdateable(self)
  end
end
function TargetTreeMarker:update(v1)
  if self.markerId ~= nil then
    self.flashingTime = self.flashingTime + v1
    local v4 = math.sin(self.flashingTime * 0.005 % math.pi)
    setShaderParameter(self.markerId, "ropeEmissiveColor", self.color[1] * (v4 * (1 - self.flashingMinIntensity) + self.flashingMinIntensity), self.color[2] * (v4 * (1 - self.flashingMinIntensity) + self.flashingMinIntensity), self.color[3] * (v4 * (1 - self.flashingMinIntensity) + self.flashingMinIntensity), v4 * (1 - self.flashingMinIntensity) + self.flashingMinIntensity, false)
  end
end
function TargetTreeMarker:setPosition(v1, v2, v3, v4, v5, v6, v7, v8)
  if self.markerId ~= nil then
    if not v8 then
    end
    setWorldTranslation(self.markerId, v1 + v4 * v9, v2 + v5 * v9, v3 + v6 * v9)
    I3DUtil.setWorldDirection(self.markerId, v4, v5, v6, 0, 1, 0)
    v9:setPrevShaderParameter(self.markerId, "ropeLengthBendSizeUv", self.width, 0, v7 * 2, 1, false, "prevRopeLengthBendSizeUv")
  end
end
function TargetTreeMarker:onI3DLoaded(v1, v2)
  if v1 ~= 0 then
    local v4 = getChildAt(v1, 0)
    local v3 = getChildAt(v4, 0)
    self.markerId = v3
    link(self.linkNode, self.markerId)
    setVisibility(self.markerId, self.isActive)
    setShaderParameter(self.markerId, "ropeEmissiveColor", self.color[1], self.color[2], self.color[3], 1, false)
    delete(v1)
  end
end
