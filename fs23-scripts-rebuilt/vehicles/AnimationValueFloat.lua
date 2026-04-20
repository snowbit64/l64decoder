-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimationValueFloat = {}
local AnimationValueFloat_mt = Class(AnimationValueFloat)
AnimationValueFloat.TANGENT_TYPE_LINEAR = 0
AnimationValueFloat.TANGENT_TYPE_SPLINE = 1
AnimationValueFloat.TANGENT_TYPE_STEP = 2
function AnimationValueFloat.new(vehicle, animation, part, startName, endName, name, initialUpdate, get, set, extraLoad, customMt)
  if not customMt then
  end
  local v11 = v11(v12, v13)
  v11.vehicle = vehicle
  v11.animation = animation
  v11.part = part
  v11.startName = startName
  v11.endName = endName
  v11.name = name
  v11.initialUpdate = initialUpdate
  v11.get = get
  v11.set = set
  v11.extraLoad = extraLoad
  v11.warningInfo = v11.name
  v11.compareParams = {}
  v11.oldCurValues = {}
  v11.oldSpeed = {}
  v11.curValue = nil
  v11.speed = nil
  return v11
end
function AnimationValueFloat:load(xmlFile, key)
  if self.startName ~= "" then
    local v3 = xmlFile:getValue(key .. "#" .. self.startName, nil, true)
    self.startValue = v3
    v3 = type(self.startValue)
    if v3 == "number" then
      self.startValue = {self.startValue}
    else
      v3 = type(self.startValue)
      if v3 == "boolean" then
        if self.startValue then
        else
        end
        self.startValue = {tangentTypeStr}
      end
    end
  end
  if self.endName ~= "" then
    v3 = xmlFile:getValue(key .. "#" .. self.endName, nil, true)
    self.endValue = v3
    v3 = type(self.endValue)
    if v3 == "number" then
      self.endValue = {self.endValue}
    else
      v3 = type(self.endValue)
      if v3 == "boolean" then
        if self.endValue then
        else
        end
        self.endValue = {tangentTypeStr}
      end
    end
  end
  if self.endValue == nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000001 -> L181
  end
  self.warningInfo = key
  self.xmlFile = xmlFile
  v3 = self:extraLoad(xmlFile, key)
  if v3 then
    local tangentTypeStr = xmlFile:getValue(key .. "#tangentType", "linear")
    local v6 = tangentTypeStr:upper()
    if AnimationValueFloat["TANGENT_TYPE_" .. v6] ~= nil then
      self.tangentType = AnimationValueFloat["TANGENT_TYPE_" .. v6]
    else
      self.tangentType = AnimationValueFloat.TANGENT_TYPE_LINEAR
    end
    self.curStartValue = {}
    self.curRealValue = {}
    if not self.startValue then
    end
    -- TODO: structure LOP_FORNPREP (pc 169, target 179)
    self.curStartValue[v7] = 0
    self.curRealValue[v7] = 0
    -- TODO: structure LOP_FORNLOOP (pc 178, target 170)
    return true
  end
  return false
end
function AnimationValueFloat:addCompareParameters(...)
  for v4, v5 in pairs({}) do
    table.insert(self.compareParams, v5)
  end
end
function AnimationValueFloat:setWarningInformation(info)
  self.warningInfo = info
end
function AnimationValueFloat:init(index, numParts)
  -- TODO: structure LOP_FORNPREP (pc 3, target 108)
  if self.part.direction == self.animation.parts[index + 1].direction then
    -- TODO: structure LOP_FORNPREP (pc 23, target 52)
    if self.animation.parts[index + 1].animationValues[1].endName == self.endName then
      -- TODO: structure LOP_FORNPREP (pc 39, target 49)
      if self.animation.parts[index + 1].animationValues[1][self.compareParams[1]] ~= self[self.compareParams[1]] then
      end
      -- TODO: structure LOP_FORNLOOP (pc 48, target 40)
      if v12 then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 51, target 24)
    if v7 ~= nil then
      if v6.startTime + 0.001 < self.part.startTime + self.part.duration then
        Logging.xmlWarning(self.xmlFile, "Overlapping %s parts for '%s' in animation '%s'", self.name, self.warningInfo, self.animation.name)
      end
      self.nextPart = v7.part
      v7.prevPart = self.part
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L108
      local v9 = unpack(self.endValue)
      v7.startValue = {}
      return
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 107, target 4)
end
function AnimationValueFloat:postInit()
  if self.endValue ~= nil and self.startValue == nil then
    local v2 = self:get()
    self.startValue = {}
  end
end
function AnimationValueFloat:reset()
  if not self.curValue then
  end
  self.oldCurValues = v1
  if not self.speed then
  end
  self.oldSpeed = v1
  self.curValue = nil
  self.speed = nil
end
function AnimationValueFloat:initValues(targetValue, durationToEnd, fixedTimeUpdate, ...)
  if not self.curValue then
  end
  self.curValue = v4
  local v4 = select(...)
  -- TODO: structure LOP_FORNPREP (pc 17, target 28)
  local v9 = select(...)
  self.curValue[1] = v9
  -- TODO: structure LOP_FORNLOOP (pc 27, target 18)
  local v7 = math.max(durationToEnd, 0.001)
  self.speed = {}
  -- TODO: structure LOP_FORNPREP (pc 46, target 69)
  self.speed[1] = (targetValue[1] - self.curValue[1]) * 1 / v7
  self.curStartValue[1] = self.curValue[1]
  self.curRealValue[1] = self.curValue[1]
  -- TODO: structure LOP_FORNLOOP (pc 68, target 47)
  if fixedTimeUpdate == true then
    if self.animation.currentSpeed < 0 then
      -- TODO: structure LOP_FORNPREP (pc 81, target 101)
      self.curStartValue[1] = self.endValue[1]
      -- TODO: structure LOP_FORNLOOP (pc 88, target 82)
    else
      -- TODO: structure LOP_FORNPREP (pc 93, target 101)
      self.curStartValue[1] = self.startValue[1]
      -- TODO: structure LOP_FORNLOOP (pc 100, target 94)
    end
  end
  self.curTargetValue = targetValue
  return self.initialUpdate
end
function AnimationValueFloat:update(durationToEnd, dtToUse, realDt, fixedTimeUpdate)
  if self.startValue ~= nil then
    if 0 >= durationToEnd then
      local v5 = AnimatedVehicle.getNextPartIsPlaying(self.nextPart, self.prevPart, self.animation, true)
      -- if not v5 then goto L243 end
    end
    if self.animation.currentSpeed < 0 then
    end
    if self.curValue == nil then
      local v12 = self:get()
      local v7 = self:initValues(...)
    end
    v7 = AnimatedVehicle.setMovedLimitedValuesN(#self.curValue, self.curValue, v5, self.speed, realDt)
    if not v7 then
      -- if not v6 then goto L243 end
    end
    if self.tangentType == AnimationValueFloat.TANGENT_TYPE_LINEAR then
      local v9 = unpack(self.curValue)
      self:set(...)
    elseif self.tangentType == AnimationValueFloat.TANGENT_TYPE_SPLINE then
      -- TODO: structure LOP_FORNPREP (pc 89, target 176)
      if fixedTimeUpdate ~= true then
        -- cmp-jump LOP_JUMPXEQKN R11 aux=0x18 -> L130
      elseif self.part.duration ~= 0 then
        v12 = MathUtil.clamp((durationToEnd - realDt) / self.part.duration, 0, 1)
      end
      if 0 <= v10 then
        -- if v10 > 1 then goto L169 end
        local v18 = math.cos(math.pi * v10 / 2)
        local v17 = math.pow(v18, 2)
        self.curRealValue[v9] = (1 - v17) * (self.curTargetValue[v9] - self.curStartValue[v9]) + self.curStartValue[v9]
      else
        self.curRealValue[v9] = self.curValue[v9]
      end
      -- TODO: structure LOP_FORNLOOP (pc 175, target 90)
      v9 = unpack(self.curRealValue)
      self:set(...)
    else
      if self.tangentType == AnimationValueFloat.TANGENT_TYPE_STEP then
        -- TODO: structure LOP_FORNPREP (pc 199, target 232)
        if 1 <= (self.curValue[1] - self.curStartValue[1]) / (self.curTargetValue[1] - self.curStartValue[1]) then
          self.curRealValue[1] = self.curValue[1]
        else
          self.curRealValue[1] = self.curStartValue[1]
        end
        -- TODO: structure LOP_FORNLOOP (pc 231, target 200)
        v9 = unpack(self.curRealValue)
        self:set(...)
      end
    end
    return true
  end
  return false
end
