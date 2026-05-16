-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Utils = {}
function Utils.getNoNil(v0, v1)
  if v0 == nil then
    return v1
  end
  return v0
end
function Utils.getNoNilRad(v0, v1)
  if v0 == nil then
    return v1
  end
  return math.rad(v0)
end
function Utils.limitTextToWidth(v0, v1, v2, v3, v4)
  local v5 = getTextWidth(v1, v4)
  local v7 = utf8Strlen(v0)
  if 0 <= v2 then
    local v8 = getTextWidth(v1, v0)
    if v2 < v8 then
      if v3 then
        local v9 = getTextLineLength(v1, v0, v8 - v2 + v5)
        local v10 = utf8Substr(v0, v9)
      else
        v9 = getTextLineLength(v1, v0, v2 - v5)
        local v11 = utf8Substr(v0, 0, v9)
      end
    end
  end
  return v0, v6, v7
end
function Utils.getMovedLimitedValue(v0, v1, v2, v3, v4, v5)
  if v5 then
  end
  if v1 < v2 then
  elseif v1 == v2 then
    return v2
  end
  local v9 = v6(v0 + (v1 - v2) / v3 * v4, v1)
  return v7(v9, v2)
end
function Utils:getMovedLimitedValues(v1, v2, v3, v4, v5, v6)
  -- TODO: structure LOP_FORNPREP (pc 5, target 19)
  local v11 = Utils.getMovedLimitedValue(self[1], v1[1], v2[1], v4, v5, v6)
  {}[1] = v11
  -- TODO: structure LOP_FORNLOOP (pc 18, target 6)
  return {}
end
function Utils:setMovedLimitedValues(v1, v2, v3, v4, v5, v6)
  -- TODO: structure LOP_FORNPREP (pc 4, target 22)
  local v11 = Utils.getMovedLimitedValue(self[1], v1[1], v2[1], v4, v5, v6)
  if v11 ~= self[1] then
    self[1] = v11
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 5)
  return v7
end
function Utils:removeModDirectory()
  if self == nil then
    printCallstack()
  end
  local v4 = self:lower()
  if g_modsDirectory then
    local v5 = v5:len()
    local v6 = v6:lower()
    local v7 = v4:sub(1, v5)
    if v7 == v6 then
      v7 = self:sub(v5 + 1)
    end
    if not v1 then
      v7 = v7:len()
      local v8 = v4:sub(1, v7)
      local v9 = v9:lower()
      if v8 == v9 then
        v8 = self:sub(v7 + 1)
      end
    end
  end
  if not v1 then
    -- TODO: structure LOP_FORNPREP (pc 67, target 95)
    v8 = v8:lower()
    v9 = v8:len()
    local v10 = v4:sub(1, v9)
    if v10 == v8 then
      v10 = self:sub(v9 + 1)
      return v10, v1, true, 1
    end
    -- TODO: structure LOP_FORNLOOP (pc 94, target 68)
  end
  return self, v1, v2, v3
end
function Utils.getModNameAndBaseDirectory(filename)
  local v3, v4, v5, v6 = Utils.removeModDirectory(filename)
  if not v4 then
    -- if not v5 then goto L55 end
  end
  local v7, v8 = v3:find("/")
  if v7 ~= nil and v8 ~= nil and 1 < v7 then
    local v9 = v3:sub(1, v7 - 1)
    if v5 then
      -- if not g_dlcModNameHasPrefix[v9] then goto L55 end
      return g_uniqueDlcNamePrefix .. v9, g_dlcsDirectories[v6].path .. v9 .. "/"
    end
    if not g_modNameToDirectory[v1] then
    end
  end
  return v1, v2
end
function Utils.getVersatileRotation(repr, componentNode, dt, posX, posY, posZ, currentAngle, minAngle, maxAngle)
  local v9, v10, v11 = getVelocityAtLocalPos(componentNode, posX, posY, posZ)
  local v13 = getParent(repr)
  local v12, v13, v14 = worldDirectionToLocal(v13, v9, v10, v11)
  local v15 = MathUtil.vector2Length(v12, v14)
  if 0.15 < v15 then
    local v17 = math.atan2(v12 / v15, v14 / v15)
    if v17 < -math.pi * 0.5 then
    end
  end
  if minAngle ~= nil and minAngle ~= 0 and maxAngle ~= nil and maxAngle ~= 0 then
    if maxAngle < v16 then
    elseif v16 < minAngle then
    end
  end
  v17 = MathUtil.normalizeRotationForShortestPath(v16, currentAngle)
  if currentAngle < v17 then
    v17 = math.min(currentAngle + 0.003 * dt, v17)
    return v17
  end
  v17 = math.max(currentAngle - 0.003 * dt, v16)
  return v17
end
function Utils.getYRotationBetweenNodes(repr, componentNode, dt, posX, posY)
  if dt ~= nil and dt ~= 0 then
    local v9, v10 = MathUtil.getDirectionFromYRotation(dt)
  end
  if posX ~= nil and posX ~= 0 then
    v9, v10 = MathUtil.getDirectionFromYRotation(posX)
  end
  local v9, v10, v11 = localDirectionToWorld(repr, posZ, 0, currentAngle)
  local v12, v13, v14 = localDirectionToWorld(componentNode, minAngle, 0, maxAngle)
  local v15, v16, v17 = worldDirectionToLocal(repr, v9, 0, v11)
  v15, v16, v17 = worldDirectionToLocal(repr, v12, 0, v14)
  if 0 < v15 - v15 then
  end
  v16 = MathUtil.getVectorAngleDifference(v9, 0, v11, v12, 0, v14)
  if posY ~= false then
    v17 = math.abs(v16)
    if math.pi * 0.5 < v17 then
    end
  end
  return v16 * v15
end
function Utils:getPerformanceClassIndex()
  local componentNode = self:lower()
  if componentNode == "medium" then
    return GS_PROFILE_MEDIUM
  end
  if self == "high" then
    return GS_PROFILE_HIGH
  end
  if self == "very high" then
  end
  return componentNode
end
function Utils.getPerformanceClassFromIndex(profileClassIndex)
  if profileClassIndex == GS_PROFILE_MEDIUM then
    return "Medium"
  end
  if profileClassIndex == GS_PROFILE_HIGH then
    return "High"
  end
  if profileClassIndex == GS_PROFILE_VERY_HIGH then
  end
  return componentNode
end
function Utils.getPerformanceClassId()
  local componentNode = getPerformanceClass()
  return Utils.getPerformanceClassIndex(...)
end
function Utils:getStateFromValues(componentNode, dt)
  -- TODO: structure LOP_FORNPREP (pc 4, target 13)
  if dt <= self[1] + componentNode * 0.5 then
    return 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 12, target 5)
  return posX
end
function Utils.getValueIndex(targetValue, values)
  for currentAngle, minAngle in pairs(values) do
    if not (targetValue >= minAngle - 0.0001) then
      break
    end
  end
  return dt
end
function Utils.getNumTimeScales()
  if g_addTestCommands then
  end
  return componentNode
end
function Utils.getTimeScaleString(timeScaleIndex)
  local speed = Utils.getTimeScaleFromIndex(timeScaleIndex)
  if speed == 1 then
    return posX:getText("ui_realTime")
  end
  if #componentNode < timeScaleIndex then
    posX = string.format("%dx (dev only)", speed)
    return posX
  end
  if speed < 1 then
    posX = string.format("%0.2fx", speed)
    return posX
  end
  posX = string.format("%dx", speed)
  return posX
end
function Utils.getTimeScaleIndex(timeScale)
  if g_addTestCommands then
    -- TODO: structure LOP_FORNPREP (pc 10, target 18)
    if Platform.gameplay.timeScaleDevSettings[#Platform.gameplay.timeScaleDevSettings] <= timeScale then
      return #Platform.gameplay.timeScaleDevSettings + #Platform.gameplay.timeScaleSettings
    end
    -- TODO: structure LOP_FORNLOOP (pc 17, target 11)
  end
  -- TODO: structure LOP_FORNPREP (pc 21, target 27)
  if componentNode[#componentNode] <= timeScale then
    return #componentNode
  end
  -- TODO: structure LOP_FORNLOOP (pc 26, target 22)
  return 3
end
function Utils.getTimeScaleFromIndex(timeScaleIndex)
  local dt = math.max(timeScaleIndex, 1)
  if g_addTestCommands and #Platform.gameplay.timeScaleSettings < dt then
    return Platform.gameplay.timeScaleDevSettings[dt - #Platform.gameplay.timeScaleSettings]
  end
  return componentNode[timeScaleIndex]
end
function Utils.getMasterVolumeIndex(masterVolume)
  if 1 <= masterVolume + 0.01 then
    return 11
  end
  if 0.9 <= masterVolume then
    return 10
  end
  if 0.8 <= masterVolume then
    return 9
  end
  if 0.7 <= masterVolume then
    return 8
  end
  if 0.6 <= masterVolume then
    return 7
  end
  if 0.5 <= masterVolume then
    return 6
  end
  if 0.4 <= masterVolume then
    return 5
  end
  if 0.3 <= masterVolume then
    return 4
  end
  if 0.2 <= masterVolume then
    return 3
  end
  if 0.1 <= masterVolume then
  end
  return componentNode
end
function Utils.getMasterVolumeFromIndex(masterVolumeIndex)
  if 1 <= masterVolumeIndex and masterVolumeIndex <= 10 then
    return (masterVolumeIndex - 1) * 0.1
  end
  return 1
end
function Utils.getUIScaleIndex(uiScale)
  if 1.25 <= uiScale + 0.01 then
    return 16
  end
  if 1.2 <= uiScale then
    return 15
  end
  if 1.15 <= uiScale then
    return 14
  end
  if 1.1 <= uiScale then
    return 13
  end
  if 1.05 <= uiScale then
    return 12
  end
  if 1 <= uiScale then
    return 11
  end
  if 0.95 <= uiScale then
    return 10
  end
  if 0.9 <= uiScale then
    return 9
  end
  if 0.85 <= uiScale then
    return 8
  end
  if 0.8 <= uiScale then
    return 7
  end
  if 0.75 <= uiScale then
    return 6
  end
  if 0.7 <= uiScale then
    return 5
  end
  if 0.65 <= uiScale then
    return 4
  end
  if 0.6 <= uiScale then
    return 3
  end
  if 0.55 <= uiScale then
  end
  return componentNode
end
function Utils.getUIScaleFromIndex(uiScaleIndex)
  if 1 <= uiScaleIndex and uiScaleIndex <= 16 then
    return (uiScaleIndex - 1) * 0.05 + 0.5
  end
  return 1
end
function Utils.getRecordingVolumeIndex(volume)
  if 1.5 <= volume + 0.01 then
    return 12
  end
  if 1.4 <= volume then
    return 11
  end
  if 1.3 <= volume then
    return 10
  end
  if 1.2 <= volume then
    return 9
  end
  if 1.1 <= volume then
    return 8
  end
  if 1 <= volume then
    return 7
  end
  if 0.9 <= volume then
    return 6
  end
  if 0.8 <= volume then
    return 5
  end
  if 0.7 <= volume then
    return 4
  end
  if 0.6 <= volume then
    return 3
  end
  if 0 < volume then
    return 2
  end
  return 1
end
function Utils.getRecordingVolumeFromIndex(index)
  if index == 1 then
    return -1
  end
  return (index - 2) * 0.1 + 0.5
end
function Utils:getFilename(componentNode)
  if self == nil then
    return nil
  end
  local dt = type(self)
  if dt ~= "string" then
    Logging.warning("Invalid type for filename in Utils.getFilename")
    printCallstack()
    return nil
  end
  dt = self:sub(1, 1)
  if dt == "$" then
    dt = self:sub(2)
    return dt, false
  end
  if componentNode ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x8000000b -> L40
  end
  return self, false
  if self == "" then
    return self, true
  end
  return componentNode .. self, true
end
function Utils:getFilenameFromPath()
  local componentNode = self:gsub("\\", "/")
  componentNode = componentNode:split("/")
  return componentNode[#componentNode]
end
function Utils:getDirectory()
  local componentNode = self:gsub("\\", "/")
  componentNode = componentNode:split("/")
  if 0 < #componentNode then
    local posZ = table.concat(componentNode, "/", 1, #componentNode - 1)
    return posZ .. "/"
  end
  return self
end
function Utils.getMaxJointForceLimit(forceLimit1, forceLimit2)
  if forceLimit1 >= 0 then
    -- if v1 >= 0 then goto L8 end
  end
  return -1
  return math.max(forceLimit1, forceLimit2)
end
function Utils.appendedFunction(oldFunc, newFunc)
  if oldFunc ~= nil then
    return function(...)
      u0(...)
      u1(...)
    end
  end
  return newFunc
end
function Utils.prependedFunction(oldFunc, newFunc)
  if oldFunc ~= nil then
    return function(...)
      u0(...)
      u1(...)
    end
  end
  return newFunc
end
function Utils.overwrittenFunction(oldFunc, newFunc)
  if oldFunc ~= nil then
    return function(oldFunc, ...)
      return u0(...)
    end
  end
  return function(oldFunc, ...)
    return u0(...)
  end
end
function Utils:shuffle()
  while true do
    if not (2 < componentNode) then
      break
    end
    dt = math.random(componentNode)
    self[componentNode] = self[dt]
    self[dt] = self[componentNode]
  end
  return self
end
function Utils.getFilenameInfo(filename, excludePath)
  local posX, posY, posZ = string.find(filename, "([^.]*)$")
  if posX == 1 then
  else
    local currentAngle = string.sub(filename, 1, posX - 2)
    if excludePath ~= nil and excludePath then
      currentAngle = currentAngle:find("/[^/]*$")
      if currentAngle ~= nil then
        local minAngle = string.sub(currentAngle, currentAngle + 1)
      end
    end
  end
  return dt, posZ
end
function Utils:stringToBoolean()
  if self ~= nil then
    local dt = self:lower()
    if dt ~= "true" then
    end
  end
  return componentNode
end
function Utils.getMinuteOfDayFromTime(value)
  if value ~= nil then
    local sepPos = string.find(value, ":")
    if sepPos ~= nil then
      local posX = string.sub(value, 0, sepPos - 1)
      local dt = tonumber(...)
      local posY = string.sub(value, sepPos + 1)
      posX = tonumber(...)
      if dt ~= nil and posX ~= nil and dt <= 24 and posX < 60 then
        return dt * 60 + posX
      end
    end
  end
  return nil
end
function Utils.formatTime(timeInMinutes)
  local dt = math.floor(timeInMinutes / 60 + 0.0001)
  local posX = math.floor((timeInMinutes / 60 + 0.0001 - dt) * 60)
  return string.format("%02d:%02d", dt, posX)
end
function Utils.renderMultiColumnText(x, y, textSize, texts, spacingX, aligns)
  for v9, v10 in ipairs(texts) do
    if aligns ~= nil then
      -- if v5[v9] then goto L11 end
    end
    setTextAlignment(RenderText.ALIGN_LEFT)
    local v12 = getTextWidth(textSize, v10)
    if RenderText.ALIGN_LEFT == RenderText.ALIGN_RIGHT then
      renderText(x + v12, y, textSize, v10)
    elseif RenderText.ALIGN_LEFT == RenderText.ALIGN_CENTER then
      renderText(x + v12 * 0.5, y, textSize, v10)
    else
      renderText(x, y, textSize, v10)
    end
  end
  setTextAlignment(RenderText.ALIGN_LEFT)
end
function Utils.getCoinToss()
  local y = math.random()
  if 0.5 > y then
  end
  return true
end
function Utils.getNormallyDistributedRandomVariables(mean, sigmaSq)
  while true do
    if 1 > spacingX and not (spacingX <= 0) then
      break
    end
    maxAngle = math.random()
    maxAngle = math.random()
  end
  local v10 = math.log(spacingX)
  local aligns = math.sqrt(-2 * v10 / 1 / spacingX)
  maxAngle = math.sqrt(sigmaSq)
  return mean + maxAngle * textSize * aligns, mean + maxAngle * texts * aligns
end
function Utils.getIntersectionOfLinearMovementAndTerrain(node, speed)
  local aligns, currentAngle, minAngle = getWorldTranslation(node)
  local maxAngle, v9, v10 = localDirectionToWorld(node, 0, -1, 0)
  -- TODO: structure LOP_FORNPREP (pc 25, target 67)
  local v22 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, aligns + maxAngle * speed * 2 * 1 / speed, 0, minAngle + v10 * speed * 2 * 1 / speed)
  if currentAngle + v9 * speed * 2 * 1 / speed - 4.905 * 2 * 1 / speed * 2 * 1 / speed <= v22 then
    return aligns + maxAngle * speed * 2 * 1 / speed, v22, minAngle + v10 * speed * 2 * 1 / speed
  end
  if VehicleDebug.state == VehicleDebug.DEBUG then
    drawDebugPoint(v19, v21, v20, 0, 0, 1, 1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 66, target 26)
  return textSize, texts, spacingX
end
function Utils.clearBit(bitMask, bit)
  local aligns = bitNOT(2 ^ bit)
  return bitAND(...)
end
function Utils.setBit(bitMask, bit)
  return bitOR(bitMask, 2 ^ bit)
end
function Utils.isBitSet(bitMask, bit)
  local spacingX = bitAND(bitMask, 2 ^ bit)
  if spacingX == 0 then
  end
  return true
end
function Utils.randomFloat(lowerValue, upperValue)
  local spacingX = math.random()
  return lowerValue + spacingX * (upperValue - lowerValue)
end
function Utils.renderTextAtWorldPosition(x, y, z, text, textSize, textOffset, color)
  local minAngle, maxAngle, v9 = project(x, y, z)
  if color then
  end
  if -1 < minAngle and minAngle < 2 and -1 < maxAngle and maxAngle < 2 and v9 <= 1 then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextBold(false)
    setTextColor(0, 0, 0, 0.75)
    renderText(minAngle, maxAngle - 0.0015 + textOffset, textSize, text)
    setTextColor(v10, v11, v12, v13)
    renderText(minAngle, maxAngle + textOffset, textSize, text)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextColor(1, 1, 1, 1)
  end
end
function Utils.getGreenRedBlendedColor(factor)
  local r = math.min(2 * factor, 1)
  local g = math.min(2 * (1 - factor), 1)
  return r, g, 0, 1
end
