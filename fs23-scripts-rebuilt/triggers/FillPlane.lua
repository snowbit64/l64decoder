-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillPlane = {}
local FillPlane_mt = Class(FillPlane)
function FillPlane.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.node = nil
  v1.maxCapacity = 0
  v1.moveMinY = 0
  v1.moveMaxY = 0
  v1.loaded = false
  v1.colorChange = false
  return v1
end
function FillPlane.delete(v0)
end
function FillPlane:load(components, xmlFile, xmlNode, i3dMappings)
  local fillPlaneNode = xmlFile:getValue(xmlNode .. "#node", nil, components, i3dMappings)
  if fillPlaneNode ~= nil then
    self.node = fillPlaneNode
    local v6, v7, v8 = getTranslation(self.node)
    local v9 = xmlFile:getValue(xmlNode .. "#minY", v7)
    self.moveMinY = v9
    v9 = xmlFile:getValue(xmlNode .. "#maxY", v7)
    self.moveMaxY = v9
    v9 = xmlFile:getValue(xmlNode .. "#colorChange", false)
    self.colorChange = v9
    if self.colorChange then
      v9 = getHasShaderParameter(self.node, "colorScale")
      if not v9 then
        local v11 = getName(self.node)
        Logging.warning(...)
        self.colorChange = false
      end
    end
    if self.moveMaxY < self.moveMinY then
      self.moveMinY = self.moveMaxY
      self.moveMaxY = self.moveMinY
      v11 = getName(self.node)
      Logging.warning(...)
    end
    self.loaded = true
    setTranslation(self.node, v6, self.moveMinY, v8)
    local v9, v10, v11 = getRotation(self.node)
    local v12 = xmlFile:getValue(xmlNode .. "#minRotX", v9)
    self.rotMinX = v12
    v12 = xmlFile:getValue(xmlNode .. "#maxRotX", v9)
    self.rotMaxX = v12
    v12 = xmlFile:getValue(xmlNode .. "#changeVisibility", false)
    self.changeVisibility = v12
    return true
  end
  return false
end
function FillPlane:setState(state)
  if self.loaded then
    local y = MathUtil.lerp(self.moveMinY, self.moveMaxY, state)
    local v3, v4, v5 = getTranslation(self.node)
    setTranslation(self.node, v3, y, v5)
    local rotX = MathUtil.lerp(self.rotMinX, self.rotMaxX, state)
    setRotation(self.node, rotX, 0, 0)
    if not not self.changeVisibility and 0 >= state then
    end
    v7(v8, v9)
    if v4 == y then
    end
    return true
  end
  return false
end
function FillPlane:setFillType(v1)
  if self.loaded then
    FillPlaneUtil.assignDefaultMaterials(self.node)
    FillPlaneUtil.setFillType(self.node, v1)
    setShaderParameter(self.node, "isCustomShape", 1, 0, 0, 0, false)
  end
end
function FillPlane:setColorScale(colorScale)
  if self.loaded then
    setShaderParameter(self.node, "colorScale", colorScale[1], colorScale[2], colorScale[3], 0, false)
  end
end
function FillPlane:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Fill plane node")
  self:register(XMLValueType.FLOAT, v1 .. "#minY", "Fill plane min y")
  self:register(XMLValueType.FLOAT, v1 .. "#maxY", "Fill plane max y")
  self:register(XMLValueType.ANGLE, v1 .. "#minRotX", "Fill plane min rotation x")
  self:register(XMLValueType.ANGLE, v1 .. "#maxRotX", "Fill plane max rotation x")
  self:register(XMLValueType.BOOL, v1 .. "#changeVisibility", "Hide node if state is zero")
  self:register(XMLValueType.BOOL, v1 .. "#colorChange", "Fill plane color change", false)
end
