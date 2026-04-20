-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RoundCornerElement = {}
local v0 = Class(RoundCornerElement, GuiElement)
function RoundCornerElement.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.color = {1, 1, 1, 1}
  v2.cornerSize = 1
  return v2
end
function RoundCornerElement:loadFromXML(v1, v2)
  local v4 = v4:superClass()
  v4.loadFromXML(self, v1, v2)
  v4 = getXMLString(v1, v2 .. "#color")
  local v3 = GuiUtils.getColorArray(...)
  if v3 ~= nil then
    self.color = v3
  end
  v4 = getXMLFloat(v1, v2 .. "#cornerSize")
  if not v4 then
  end
  self.cornerSize = v4
end
function RoundCornerElement:loadProfile(v1, v2)
  local v4 = v4:superClass()
  v4.loadProfile(self, v1, v2)
  v4 = v1:getValue("color")
  local v3 = GuiUtils.getColorGradientArray(...)
  if v3 ~= nil then
    self.color = v3
  end
  local v5 = v1:getValue("cornerSize")
  v4 = tonumber(...)
  if not v4 then
  end
  self.cornerSize = v4
end
function RoundCornerElement:copyAttributes(v1)
  local v3 = v3:superClass()
  v3.copyAttributes(self, v1)
  local v2 = table.copyIndex(v1.color)
  self.color = v2
  self.cornerSize = v1.cornerSize
end
function RoundCornerElement:draw(v1, v2, v3, v4)
  drawFilledRectRound(self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2], self.cornerSize, self.color[1], self.color[2], self.color[3], self.color[4], v1, v2, v3, v4)
  local v7 = v7:superClass()
  v7.draw(self, v1, v2, v3, v4)
end
