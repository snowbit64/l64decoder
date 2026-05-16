-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillPlaneUtil = {}
function FillPlaneUtil:registerFillPlaneXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Node")
  self:register(XMLValueType.FLOAT, v1 .. "#maxDelta", "Max. heap size above above input surface [m]", 1)
  self:register(XMLValueType.ANGLE, v1 .. "#maxAllowedHeapAngle", "Max. allowed heap surface slope angle [deg]", 35)
  self:register(XMLValueType.FLOAT, v1 .. "#maxSurfaceDistanceError", "Max. allowed distance from input mesh surface to created fill plane mesh [m]", 0.05)
  self:register(XMLValueType.FLOAT, v1 .. "#maxSubDivEdgeLength", "Max. length of sub division edges [m]", 0.9)
  self:register(XMLValueType.FLOAT, v1 .. "#syncMaxSubDivEdgeLength", "Max. length of sub division edges used to sync in multiplayer [m]", 1.35)
  self:register(XMLValueType.BOOL, v1 .. "#allSidePlanes", "All side planes", true)
  self:register(XMLValueType.BOOL, v1 .. "#retessellateTop", "Retessellate top plane for better triangulation quality", false)
  self:register(XMLValueType.BOOL, v1 .. "#changeColor", "Fillplane supports color change", false)
end
function FillPlaneUtil:createFromXML(v1, v2, v3)
  if v2 == nil then
    Logging.xmlWarning(self, "Missing node for fillplane for '%s'", v1)
    return nil
  end
  local v4 = self:getValue(v1 .. "#maxDelta", 1)
  local v5 = self:getValue(v1 .. "#maxAllowedHeapAngle", 35)
  local v6 = self:getValue(v1 .. "#maxSurfaceDistanceError", 0.05)
  local v7 = self:getValue(v1 .. "#maxSubDivEdgeLength", 0.9)
  local v8 = self:getValue(v1 .. "#syncMaxSubDivEdgeLength", 1.35)
  local v9 = self:getValue(v1 .. "#allSidePlanes", true)
  local v10 = self:getValue(v1 .. "#retessellateTop", false)
  local v11 = createFillPlaneShape(v2, "fillPlane", v3, v4, v5, 0.6108652381980153, v6, v7, v8, v9, v10)
  if v11 ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x80000000 -> L85
  end
  Logging.xmlWarning(self, "Failed to create fillplane for '%s'", v1)
  return nil
  link(v2, v11)
  return v11
end
function FillPlaneUtil.assignDefaultMaterials(v0)
  local v1 = v1:getBaseMaterialByName("fillPlane")
  if v1 ~= nil then
    setMaterial(v0, v1, 0)
    v2:assignFillTypeTextureArrays(v0, true, true, true)
    return
  end
  Logging.error("Failed to assign material to fillplane. Base Material 'fillPlane' not found!")
end
function FillPlaneUtil.setFillType(v0, v1)
  local v2 = v2:getTextureArrayIndexByFillTypeIndex(v1)
  if v2 ~= nil then
    setShaderParameter(v0, "fillTypeId", v2 - 1, 0, 0, 0, false)
  end
end
