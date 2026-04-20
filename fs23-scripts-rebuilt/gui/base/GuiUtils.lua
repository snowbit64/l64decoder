-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiUtils = {}
function GuiUtils:getNormalizedValues(v1, v2)
  if self ~= nil then
    local v5 = type(self)
    if v5 ~= "string" then
    end
    if true then
      v5 = self:split(" ")
    end
    for v9, v10 in pairs(v3) do
      if v4 then
        local v14 = string.find(v10, "px")
        if v14 ~= nil then
          v14 = string.gsub(v10, "px", "")
        else
          v14 = string.find(v10, "dp")
          if v14 ~= nil then
            v14 = string.gsub(v10, "dp", "")
          end
        end
        v14 = tonumber(v11)
        if v13 then
          if (v9 + 1) % 2 == 0 then
            -- goto L90  (LOP_JUMP +16)
          end
          -- goto L90  (LOP_JUMP +12)
        end
        -- if not v12 then goto L90 end
      else
      end
      table.insert(v5, v11)
    end
    if v2 ~= nil and #v3 < #v2 then
      -- TODO: structure LOP_FORNPREP (pc 110, target 122)
      table.insert(v5, v5[(#v3 + 1 - 1) % #v3 + 1])
      -- TODO: structure LOP_FORNLOOP (pc 121, target 111)
    end
    return v5
  end
  return v2
end
function GuiUtils.getNormalizedTextSize(v0, v1, v2)
  if v0 ~= nil then
    local v5 = string.find(v0, "px")
    if v5 ~= nil then
      v5 = string.gsub(v0, "px", "")
    else
      v5 = string.find(v0, "dp")
      if v5 ~= nil then
        v5 = string.gsub(v0, "dp", "")
      end
    end
    v5 = tonumber(v0)
    if v5 == nil then
      printCallstack()
    end
    if v3 then
      if not v1 then
      end
      return v5 / v7
    end
    if v4 then
      return v5 / g_screenHeight
    end
  end
  return v2
end
function GuiUtils:get2DArray(v1)
  if self ~= nil then
    local v2 = self:split(" ")
    local v3, v4 = unpack(v2)
    if v3 ~= nil and v4 ~= nil then
      local v6 = tonumber(v3)
      local v7 = tonumber(v4)
      return {}
    end
  end
  return v1
end
function GuiUtils.get4DArray(v0, v1)
  local v2 = string.getVectorN(v0)
  if v2 ~= nil and #v2 == 4 then
    return v2
  end
  return v1
end
function GuiUtils.getColorArray(v0, v1)
  local v2 = string.getVectorN(v0)
  if v2 ~= nil and #v2 == 4 then
    return v2
  end
  return v1
end
function GuiUtils.getColorGradientArray(v0, v1)
  local v2 = string.getVectorN(v0)
  if v2 ~= nil then
    if #v2 ~= 4 then
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000004 -> L13
    end
    return v2
  end
  return v1
end
function GuiUtils.validateUvs(v0)
  local v1 = string.split(v0, " ")
  if #v1 ~= 2 and #v1 ~= 4 then
    return false, "Needs to be 2- or 4-vector"
  end
  for v5, v6 in ipairs(v1) do
    local v7 = tonumber(v6)
    if v7 ~= nil then
      if v7 >= 0 and not (1 < v7) then
        continue
      end
      return false, "Normalized value (without 'px' or 'dp') needs to be between 0 and 1"
    else
      local v8 = string.endsWith(v6, "px")
      if not v8 then
        v8 = string.endsWith(v6, "dp")
        -- if not v8 then goto L75 end
      end
      local v9 = string.sub(v6, 1, #v6 - 2)
      v8 = tonumber(...)
      if v8 == nil then
        return false, "Missing or invalid number value for 'px' or 'dp' entry"
      end
      v8 = math.floor(v7)
      if not (v7 ~= v8) then
        continue
      end
      return false, "px and dp values need to be integers"
      continue
      return false, "Invalid format"
    end
  end
  return true
end
function GuiUtils.getUVs(str, ref, defaultValue, rotation)
  if str ~= nil then
    if not ref then
    end
    local v4 = v4(v5, v6)
    if v4[1] ~= nil then
      if rotation ~= nil then
        GuiUtils.rotateUVs({v4[1], 1 - v4[2] - v4[4], v4[1], 1 - v4[2], v4[1] + v4[3], 1 - v4[2] - v4[4], v4[1] + v4[3], 1 - v4[2]}, rotation)
      end
      return v5
    end
    Logging.devError("GuiUtils.getUVs() Unable to get uvs for '%s'", str)
  end
  return defaultValue
end
function GuiUtils.checkOverlayOverlap(posX, posY, overlayX, overlayY, overlaySizeX, overlaySizeY, hotspot)
  if hotspot ~= nil and #hotspot == 4 then
    if 0 < overlaySizeX and 0 < overlaySizeY and overlayX + hotspot[1] <= posX and posX <= overlayX + overlaySizeX + hotspot[3] and overlayY + hotspot[2] <= posY and posY > overlayY + overlaySizeY + hotspot[4] then
    end
    return v7
  end
  if 0 < overlaySizeX and 0 < overlaySizeY and overlayX <= posX and posX <= overlayX + overlaySizeX and overlayY <= posY and posY > overlayY + overlaySizeY then
  end
  return v7
end
function GuiUtils:rotateUVs(v1)
  local v2, v3, v4, v5, v6, v7, v8, v9 = unpack(self)
  if v1 == 90 then
    self[1] = v6
    self[2] = v7
    self[3] = v2
    self[4] = v3
    self[5] = v8
    self[6] = v9
    self[7] = v4
    self[8] = v5
    return
  end
  if v1 == -90 then
    self[1] = v4
    self[2] = v5
    self[3] = v8
    self[4] = v9
    self[5] = v2
    self[6] = v3
    self[7] = v6
    self[8] = v7
    return
  end
  if v1 == 180 then
    self[1] = v8
    self[2] = v9
    self[3] = v6
    self[4] = v7
    self[5] = v4
    self[6] = v5
    self[7] = v2
    self[8] = v3
  end
end
function GuiUtils.alignToScreenPixels(x, y)
  local v4 = MathUtil.round(x / 1 / g_screenWidth)
  v4 = MathUtil.round(y / 1 / g_screenHeight)
  return v4 * 1 / g_screenWidth, v4 * 1 / g_screenHeight
end
