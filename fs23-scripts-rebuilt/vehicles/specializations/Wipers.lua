-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Wipers = {forcedState = -1}
function Wipers.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Enterable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
  end
  return v1
end
function Wipers.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Wipers")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.wipers.wiper(?)#animName", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wipers.wiper(?).state(?)#animSpeed", "Animation speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.wipers.wiper(?).state(?)#animPause", "Animation pause time (sec.)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Wipers.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadWiperFromXML", Wipers.loadWiperFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsActiveForWipers", Wipers.getIsActiveForWipers)
end
function Wipers.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Wipers)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Wipers)
  SpecializationUtil.registerEventListener(vehicleType, "onFinishAnimation", Wipers)
end
function Wipers:onLoad(savegame)
  self.spec_wipers.wipers = {}
  while true do
    v4 = string.format("vehicle.wipers.wiper(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadWiperFromXML(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.wipers, {lastValidState = 1})
    end
  end
  if 0 >= #v2.wipers then
  end
  v2.hasWipers = true
  v2.lastRainScale = 0
  if not v2.hasWipers then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", Wipers)
  end
end
function Wipers:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6 = self:getIsControlled()
  if v6 then
    v6 = v6:getRainFallScale()
    self.spec_wipers.lastRainScale = v6
    for v9, v10 in pairs(self.spec_wipers.wipers) do
      local v12 = self:getIsActiveForWipers()
      if v12 and 0.01 < v5.lastRainScale then
        for v15, v16 in ipairs(v10.states) do
          if not (v5.lastRainScale <= v16.maxRainValue) then
            continue
          end
          break
        end
      end
      if Wipers.forcedState ~= -1 then
        v12 = MathUtil.clamp(Wipers.forcedState, 0, #v10.states)
      end
      if not (0 < v11) then
        continue
      end
      if v10.nextStartTime ~= nil then
        -- if v10.nextStartTime >= g_currentMission.time then goto L97 end
      end
      v13 = self:getIsAnimationPlaying(v10.animName)
      if not v13 then
        self:playAnimation(v10.animName, v12.animSpeed, 0, true)
        v10.nextStartTime = nil
      end
      if v10.nextStartTime == nil then
        v10.nextStartTime = g_currentMission.time + v10.animDuration / v12.animSpeed * 2 + v12.animPause
      end
      v10.lastValidState = v11
    end
  end
end
function Wipers:onFinishAnimation(name)
  for v6, v7 in pairs(self.spec_wipers.wipers) do
    if not (v7.animName == name) then
      continue
    end
    local v8 = self:getAnimationTime(v7.animName)
    if not (v8 == 1) then
      continue
    end
    self:playAnimation(v7.animName, -v7.states[v7.lastValidState].animSpeed, 1, true)
  end
end
function Wipers:loadWiperFromXML(xmlFile, key, wiper)
  local v4 = xmlFile:getValue(key .. "#animName")
  if v4 ~= nil then
    local v5 = self:getAnimationExists(v4)
    if v5 then
      wiper.animName = v4
      v5 = self:getAnimationDuration(v4)
      wiper.animDuration = v5
      wiper.states = {}
      while true do
        v6 = string.format("%s.state(%d)", key, v5)
        v7 = xmlFile:hasProperty(v6)
        -- if not v7 then goto L99 end
        v8 = xmlFile:getValue(v6 .. "#animSpeed")
        v8 = xmlFile:getValue(v6 .. "#animPause")
        if {animSpeed = v8, animPause = v8}.animSpeed ~= nil and {animSpeed = v8, animPause = v8}.animPause ~= nil then
          table.insert(wiper.states, {animSpeed = v8, animPause = v8, animPause = {animSpeed = v8, animPause = v8}.animPause * 1000})
        end
      end
      -- goto L99  (LOP_JUMP +20)
    end
    Logging.xmlWarning(self.xmlFile, "Animation '%s' not defined for wiper '%s'!", v4, key)
    return false
  else
    Logging.xmlWarning(self.xmlFile, "Missing animation for wiper '%s'!", key)
    return false
  end
  if 0 < #wiper.states then
    for v11, v12 in ipairs(wiper.states) do
      v12.maxRainValue = v7
    end
    wiper.nextStartTime = nil
  else
    Logging.xmlWarning(self.xmlFile, "No states defined for wiper '%s'!", key)
    return false
  end
  return true
end
function Wipers.getIsActiveForWipers(v0)
  return true
end
function Wipers.consoleSetWiperState(v0, v1)
  if v1 == nil then
    return "Error: No arguments given! " .. "Usage: gsWiperStateSet <state> (-1 = use state from weather; 0..n = force specific wiper state)"
  end
  local v2 = tonumber(v1)
  if v2 == nil then
    return "Error: Argument is not a number! " .. "Usage: gsWiperStateSet <state> (-1 = use state from weather; 0..n = force specific wiper state)"
  end
  local v3 = MathUtil.clamp(v1, -1, 999)
  Wipers.forcedState = v3
  if Wipers.forcedState == -1 then
    return " Reset global wiper state, now using weather state"
  end
  v2 = string.format("Set global wiper states to %d.", Wipers.forcedState)
  return v2
end
addConsoleCommand("gsWiperStateSet", "Sets the given wiper state for all vehicles", "consoleSetWiperState", Wipers)
