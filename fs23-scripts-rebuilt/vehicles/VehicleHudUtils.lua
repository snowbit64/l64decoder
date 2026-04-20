-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleHudUtils = {}
function VehicleHudUtils:loadHud(v1, v2, v3, v4)
  local v5 = Utils.getNoNil(v3, "vehicle.indoorHud")
  v5 = Utils.getNoNil(v4, 0)
  while true do
    v7 = string.format(v3 .. "." .. v2 .. "(%d)", v5)
    v8 = v1:hasProperty(v7)
    if not v8 then
      break
    end
    v11 = getXMLString(v1, v7 .. "#numbers")
    v9 = I3DUtil.indexToObject(self.components, v11, self.i3dMappings)
    v9 = getXMLString(v1, v7 .. "#numberColor")
    colorStr = v9
    v9 = v9:getBrandColorByName(colorStr)
    if {numbers = v9, numberColor = v9}.numberColor == nil then
      v9 = string.getVectorN(colorStr, 4)
    end
    if v8.numbers ~= nil and v8.numberColor ~= nil then
      v10 = I3DUtil.getNodesByShaderParam(v8.numbers, "numberColor")
      for v12, v13 in pairs(...) do
        setShaderParameter(v12, "numberColor", v8.numberColor[1], v8.numberColor[2], v8.numberColor[3], 1, false)
      end
    end
    v9 = getXMLString(v1, v7 .. "#animName")
    v8.animName = v9
    v9 = getXMLString(v1, v7 .. "#visibleFunc")
    v8.visibleFunc = v9
    v10 = getXMLBool(v1, v7 .. "#inverseVisibleFunc")
    v9 = Utils.getNoNil(v10, false)
    v8.inverseVisibleFunc = v9
    if v8.numbers == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L233
    end
    v9 = getXMLFloat(v1, v7 .. "#minValueAnim")
    v8.minValueAnim = v9
    v9 = getXMLFloat(v1, v7 .. "#maxValueAnim")
    v8.maxValueAnim = v9
    if v8.numbers ~= nil then
      v10 = getXMLInt(v1, v7 .. "#precision")
      v9 = Utils.getNoNil(v10, 1)
      v8.precision = v9
      v9 = getNumOfChildren(v8.numbers)
      v8.numChilds = v9
      if v8.numChilds - v8.precision <= 0 then
        Logging.xmlWarning(v1, "Not enough number meshes for vehicle hud '%s'", v7)
      end
      v8.numChilds = v8.numChilds - v8.precision
      v8.maxValue = 10 ^ v8.numChilds - 1 / 10 ^ v8.precision
    end
    table.insert(v6, v8)
    if not (v4 == nil) then
      break
    end
  end
  v7 = table.getn(v6)
  if 0 < v7 then
    VehicleHudUtils.setHudValue(self, v6, 0, 1)
    return v6
  end
  return nil
end
function VehicleHudUtils:setHudValue(v1, v2, v3)
  for v7, v8 in ipairs(v1) do
    if self[v8.visibleFunc] ~= nil then
      local v11 = self[v8.visibleFunc](self)
      if v11 == v8.inverseVisibleFunc then
      end
    end
    if v8.numbers ~= nil then
      local v13 = math.max(0, v10)
      v11 = math.min(...)
      v13 = string.format("%." .. v8.precision .. "f", v11)
      local v12 = tonumber(...)
      I3DUtil.setNumberShaderByValue(v8.numbers, v12, v8.precision, v9)
    end
    if not (v8.animName ~= nil) then
      continue
    end
    if not (self.setAnimationTime ~= nil) then
      continue
    end
    v11 = self:getAnimationExists(v8.animName)
    if v11 then
      if v3 ~= 0 then
        if v8.minValueAnim ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L110
          v12 = MathUtil.clamp(v10, v8.minValueAnim, v8.maxValueAnim)
          v12 = MathUtil.round((v12 - v8.minValueAnim) / (v8.maxValueAnim - v8.minValueAnim), 3)
        else
          v12 = MathUtil.round(v10 / v3, 3)
        end
      end
      self:setAnimationTime(v8.animName, v11, true)
    else
      Logging.xmlWarning(self.xmlFile, "Unknown animation name '%s' for indoor hud!", v8.animName)
    end
  end
end
