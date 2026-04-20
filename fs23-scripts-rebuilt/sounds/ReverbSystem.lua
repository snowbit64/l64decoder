-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ReverbSystem = {}
local ReverbSystem_mt = Class(ReverbSystem)
function ReverbSystem.getName(index)
  for v4, v5 in pairs(Reverb) do
    if not (v5 == index) then
      continue
    end
    return v4
  end
  return nil
end
function ReverbSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.isDebugViewActive = false
  v2.AREA_TYPE_TO_REVERB_TYPE = {[AreaType.OPEN_FIELD] = Reverb.GS_OPEN_FIELD, [AreaType.HALL] = Reverb.GS_INDOOR_HALL, [AreaType.CITY] = Reverb.GS_CITY, [AreaType.FOREST] = Reverb.GS_FOREST}
  v2.blendFactor = 0
  v2.reverbType1 = Reverb.GS_OPEN_FIELD
  v2.reverbType2 = Reverb.GS_OPEN_FIELD
  v2.targetReverbTypes = {[1] = {["type"] = Reverb.GS_OPEN_FIELD, weight = 1}, [2] = {["type"] = Reverb.GS_OPEN_FIELD, weight = 0}}
  return v2
end
function ReverbSystem:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  local customXmlFilename = getXMLString(mapXmlFile, "map.sounds#reverbFilename")
  if customXmlFilename ~= nil then
    local v6 = Utils.getFilename(customXmlFilename, baseDirectory)
    v6 = fileExists(v6)
    if v6 then
    else
      Logging.warning("ReverbSystem custom config file not found!")
    end
  end
  self.xmlFilename = v4
  addConsoleCommand("gsReverbSystemToggleDebugView", "Toggles the reverb debug view", "consoleCommandToggleDebugView", self)
  addConsoleCommand("gsReverbSystemSettingsReload", "Reloads the reverb settings", "consoleCommandReloadSettings", self)
  v6 = self:loadSettings()
  return v6
end
function ReverbSystem:loadSettings()
  local xmlFile = XMLFile.load("ReverbSettings", self.xmlFilename, nil)
  if xmlFile == nil then
    Logging.xmlWarning(xmlFile, "ReverbSystem could not load configuration xml file!")
    return false
  end
  xmlFile:iterate("reverbSettings.reverbSetting", function(self, xmlFile)
    local v2 = v2:getString(xmlFile .. "#id")
    if v2 == nil then
      Logging.warning("ReverbSystem: missing id for reverb setting '%s'!", xmlFile)
      return true
    end
    local v3 = string.upper(v2)
    if Reverb[v3] == nil then
      Logging.warning("ReverbSystem: Invalid id '%s' for reverb setting '%s'!", v3, xmlFile)
      return true
    end
    local v4, v5 = getLateReverbGainPreset(Reverb[v2])
    local v6 = v6:getFloat(xmlFile .. ".lateReverb#gain", v4)
    v6 = v6:getFloat(xmlFile .. ".lateReverb#delay", v5)
    local v6, v7, v8 = getReverbGainPreset(Reverb[v2])
    local v9 = v9:getFloat(xmlFile .. ".gain#gain", v6)
    v9 = v9:getFloat(xmlFile .. ".gain#gainHF", v7)
    v9 = v9:getFloat(xmlFile .. ".gain#gainLF", v8)
    local v9, v10 = getReverbDecayPreset(Reverb[v2])
    local v11 = v11:getFloat(xmlFile .. ".decay#time", v9)
    v11 = v11:getFloat(xmlFile .. ".decay#ratioHF", v10)
    local v11, v12 = getReverbReflectionPreset(Reverb[v2])
    local v13 = v13:getFloat(xmlFile .. ".reflections#gain", v11)
    v13 = v13:getFloat(xmlFile .. ".reflections#delay", v12)
    local v13, v14 = getReverbReferenceFrequenciesPreset(Reverb[v2])
    local v15 = v15:getFloat(xmlFile .. ".reference#referenceHF", v13)
    v15 = v15:getFloat(xmlFile .. ".reference#referenceLF", v14)
    if v15 <= 0 then
      Logging.xmlError(u0, "Reverb setting 'referenceHF' at '%s' needs to be bigger than 0", xmlFile)
      return true
    end
    if v14 <= 0 then
      Logging.xmlError(u0, "Reverb setting 'referenceLF' at '%s' needs to be bigger than 0", xmlFile)
      return true
    end
    setReverbPreset(v3, v6, v7, v8, v9, v10, v11, v12, v4, v5, v13, v14)
    return true
  end)
  xmlFile:delete()
  return true
end
function ReverbSystem:delete()
  v1:removeDrawable(self)
  removeConsoleCommand("gsReverbSystemToggleDebugView")
  removeConsoleCommand("gsReverbSystemSettingsReload")
  self.mission = nil
end
function ReverbSystem:update(dt)
  if self.mission == nil then
    return
  end
  local v2 = v2:getAreaWeights()
  for v10, v11 in pairs(v2) do
    if not (self.AREA_TYPE_TO_REVERB_TYPE[v10] ~= nil) then
      continue
    end
    if v3 == nil then
    elseif v4 ~= nil then
      -- if v6 >= v11 then goto L37 end
    end
    if not (v3 ~= nil) then
      continue
    end
    if not (v4 ~= nil) then
      continue
    end
    if not (v5 < v6) then
      continue
    end
  end
  if not v3 then
  end
  if not v4 then
  end
  if v5 + v6 == 0 then
  end
  self.targetReverbTypes[1]["type"] = v3
  self.targetReverbTypes[1].weight = v5 / v7
  v10 = ReverbSystem.getName(v3)
  self.targetReverbTypes[1].name = v10
  self.targetReverbTypes[2]["type"] = v4
  v10 = ReverbSystem.getName(v4)
  self.targetReverbTypes[2].name = v10
  self.targetReverbTypes[2].weight = v6 / v7
  if self.reverbType1 ~= self.reverbType2 then
  end
  if self.reverbType1 ~= self.targetReverbTypes[1]["type"] and self.reverbType1 ~= self.targetReverbTypes[2]["type"] then
  end
  if not v9 then
    -- if v0.reverbType2 == v0.targetReverbTypes[1]["type"] then goto L161 end
  end
  if self.reverbType2 ~= self.targetReverbTypes[2]["type"] then
  end
  if v10 then
    -- if not true then goto L216 end
    if self.reverbType1 ~= self.targetReverbTypes[1]["type"] then
    end
    if v14 < self.blendFactor then
      local v15 = math.max(self.blendFactor - v8, v14)
      self.blendFactor = v15
      -- goto L288  (LOP_JUMP +84)
    end
    v15 = math.min(self.blendFactor + v8, v14)
    self.blendFactor = v15
  elseif v10 then
    if self.blendFactor == 0 then
      if self.reverbType1 == self.targetReverbTypes[1]["type"] then
      else
      end
    end
    local v14 = math.max(self.blendFactor - v8, 0)
    self.blendFactor = v14
  else
    if self.blendFactor == 1 then
      if self.reverbType2 == self.targetReverbTypes[1]["type"] then
      else
      end
    end
    v14 = math.min(self.blendFactor + v8, 1)
    self.blendFactor = v14
  end
  self.reverbType1 = v12
  self.reverbType2 = v13
  setReverbEffect(SoundManager.DEFAULT_REVERB_EFFECT, self.reverbType1, self.reverbType2, self.blendFactor)
end
function ReverbSystem:draw()
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
  local v9 = ReverbSystem.getName(self.reverbType1)
  local v11 = ReverbSystem.getName(self.reverbType2)
  local v7 = string.format("Current: %s %.3f -> %s %.3f", v9, 1 - self.blendFactor, v11, self.blendFactor)
  renderText(...)
  v7 = string.format("Target: %s %.3f -> %s %.3f", self.targetReverbTypes[1].name, self.targetReverbTypes[1].weight, self.targetReverbTypes[2].name, self.targetReverbTypes[2].weight)
  renderText(...)
end
function ReverbSystem:consoleCommandToggleDebugView()
  self.isDebugViewActive = not self.isDebugViewActive
  if self.isDebugViewActive then
    dt:addDrawable(self)
    return
  end
  dt:removeDrawable(self)
end
function ReverbSystem:consoleCommandReloadSettings()
  self:loadSettings()
  return "Reloaded settings"
end
