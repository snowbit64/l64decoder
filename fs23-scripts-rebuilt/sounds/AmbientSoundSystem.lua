-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AmbientSoundSystem = {}
local AmbientSoundSystem_mt = Class(AmbientSoundSystem)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("ambientSounds")
  AmbientSoundSystem.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.ambient.sample(?)" .. "#filename", "Sample filename")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. "#probability", "Sample probability", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.ambient.sample(?)" .. ".settings#audioGroup", "The audio group the sound will be assigned to", "ENVIRONMENT")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#fadeInTime", "The fade in time in seconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#fadeOutTime", "The fade out time in seconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#minVolume", "The minVolume if the player is outdoor", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#maxVolume", "The maxVolume if the player is outdoor", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#indoorVolume", "The volume if the player is indoor or in a vehicle", 0.8)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.ambient.sample(?)" .. ".settings#minLoops", "The minimum number of loops played once a sound is triggered (0 means it will play one loop)", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.ambient.sample(?)" .. ".settings#maxLoops", "The maximum number of loops played once a sound is triggered", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#minRetriggerDelaySeconds", "The minimum number of seconds until sound can be retriggred", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#maxRetriggerDelaySeconds", "The maximum number of seconds until the sound has to be retriggered", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#minPitch", "The min pitch", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#maxPitch", "The max pitch", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#minDelay", "The min delay in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#maxDelay", "The max delay in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#minLength", "The min length time in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".settings#maxLength", "The max length time in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.ambient.sample(?)" .. ".variation(?)#filename", "Sample filename")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#probability", "Sample probability", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#fadeInTime", "The fade in time in seconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#fadeOutTime", "The fade out time in seconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#minVolume", "The minVolume if the player is outdoor", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#maxVolume", "The maxVolume if the player is outdoor", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#indoorVolume", "The volume if the player is indoor or in a vehicle", 0.8)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.ambient.sample(?)" .. ".variation(?)#minLoops", "The minimum number of loops played once a sound is triggered (0 means it will play one loop)", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.ambient.sample(?)" .. ".variation(?)#maxLoops", "The maximum number of loops played once a sound is triggered", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#minPitch", "The min pitch", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#maxPitch", "The max pitch", 1)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#minDelay", "The min delay in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#maxDelay", "The max delay in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#minLength", "The min length time in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.FLOAT, "sound.ambient.sample(?)" .. ".variation(?)#maxLength", "The max length time in milliseconds", 0)
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.ambient3d#filename", "3d Ambient sound file")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.surface.material(?)" .. "#materialId", "Material id")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.surface.material(?)" .. "#name", "Material name")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.surface.material(?)" .. "#type", "Sample type")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.INT, "sound.surface.material(?)" .. "#loopCount", "Sample loop count")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.surface.material(?)" .. "#template", "Sample template")
  SoundManager.registerSampleXMLPaths(AmbientSoundSystem.xmlSchema, "sound.cutting", "sample(?)")
  AmbientSoundSystem.xmlSchema:register(XMLValueType.STRING, "sound.cutting.sample(?)#name", "Cutting sample name")
end)
function AmbientSoundSystem:loadFlagFromXML(v1, v2, v3, v4)
  local v5 = string.format("%s.prevent#%s", v1, v2.xmlAttributeName)
  local v6 = string.format("%s.required#%s", v1, v2.xmlAttributeName)
  local v7 = self:getBool(v5)
  if v7 then
    local v8 = bitOR(v4, v2.bitflag)
  end
  v8 = self:getBool(v6)
  if v8 then
    local v9 = bitOR(v3, v2.bitflag)
  end
  return v3, v4
end
function AmbientSoundSystem.new(mission, soundPlayer, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.soundPlayerId = nil
  if soundPlayer ~= nil then
    v3.soundPlayerId = soundPlayer.soundPlayerId
  end
  v3.modifiers = {}
  v3.samples = {}
  v3.worldMask = 0
  v3.isDebugViewActive = false
  v3.movingSounds = {}
  v3.isDeleted = false
  local v4 = v3:registerModifier("isIndoor", nil)
  v3.setIsIndoorModifier = v4
  return v3
end
function AmbientSoundSystem:delete()
  self:unloadAmbientSounds()
  removeConsoleCommand("gsAmbientSoundSystemToggleDebugView")
  removeConsoleCommand("gsAmbientSoundSystemReload")
end
function AmbientSoundSystem:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  if self.soundPlayerId == nil then
    return false
  end
  local v5 = getXMLString(mapXmlFile, "map.sounds#filename")
  local v4 = Utils.getFilename(v5, baseDirectory)
  if v4 == nil then
    return false
  end
  v5 = fileExists(v4)
  if not v5 then
    Logging.warning("Warning: AmbientSoundSystem could not load configuration xml file!")
    return false
  end
  self.baseDirectory = baseDirectory
  self.xmlFilename = v4
  addConsoleCommand("gsAmbientSoundSystemToggleDebugView", "Toggles the ambient sound system debug view", "consoleCommandToggleDebugView", self)
  addConsoleCommand("gsAmbientSoundSystemReload", "Reloads the ambient sound system", "consoleCommandReload", self)
  v5 = self:loadFromConfigFile()
  return v5
end
function AmbientSoundSystem:loadFromConfigFile()
  self.isDeleted = false
  local xmlFile = XMLFile.load("Ambient Sounds", self.xmlFilename, AmbientSoundSystem.xmlSchema)
  if xmlFile == nil then
    Logging.xmlWarning(xmlFile, "Warning: AmbientSoundSystem could not load configuration xml file!")
    return false
  end
  xmlFile:iterate("sound.ambient.sample", function(self, xmlFile)
    local v2 = v2:getValue(xmlFile .. "#filename")
    local v3 = v3:getValue(xmlFile .. "#probability", 1)
    local v4 = v4:getValue(xmlFile .. ".settings#audioGroup", "ENVIRONMENT")
    local v5 = v5:getValue(xmlFile .. ".settings#fadeInTime", 0)
    local v6 = v6:getValue(xmlFile .. ".settings#fadeOutTime", 0)
    local v7 = v7:getValue(xmlFile .. ".settings#minVolume", 1)
    local v8 = v8:getValue(xmlFile .. ".settings#maxVolume", 1)
    local v9 = v9:getValue(xmlFile .. ".settings#indoorVolume", 0.8)
    local v10 = v10:getValue(xmlFile .. ".settings#minLoops", 1)
    local v11 = v11:getValue(xmlFile .. ".settings#maxLoops", 1)
    local v12 = v12:getValue(xmlFile .. ".settings#minRetriggerDelaySeconds", 0)
    local v13 = v13:getValue(xmlFile .. ".settings#maxRetriggerDelaySeconds", 0)
    local v14 = v14:getValue(xmlFile .. ".settings#minPitch", 1)
    local v15 = v15:getValue(xmlFile .. ".settings#maxPitch", 1)
    local v16 = v16:getValue(xmlFile .. ".settings#minDelay", 0)
    local v17 = v17:getValue(xmlFile .. ".settings#maxDelay", 0)
    local v18 = v18:getValue(xmlFile .. ".settings#minLength", 0)
    local v19 = v19:getValue(xmlFile .. ".settings#maxLength", 0)
    local v20 = AudioGroup.getAudioGroupIndexByName(v4)
    if v20 == nil then
    end
    local v21 = Utils.getFilename(v2, u1.baseDirectory)
    for v26, v27 in ipairs(u1.modifiers) do
      local v28, v29 = v27.loadFromXMLFunc(u0, xmlFile, v27, v21, v22)
    end
    local v31 = ambientSoundsAddSample(u1.soundPlayerId, v2, v20, v3, {v5, v6}, {v7, v8}, v9, {v10, v11}, {v12, v13}, {v14, v15}, {v16, v17}, {0, 0}, {v18, v19}, v21, v22)
    v32:iterate(xmlFile .. ".variation", function(self, xmlFile)
      local v2 = v2:getValue(xmlFile .. "#filename")
      local v3 = v3:getValue(xmlFile .. "#probability", 1)
      local v4 = v4:getValue(xmlFile .. "#fadeInTime", u1)
      local v5 = v5:getValue(xmlFile .. "#fadeOutTime", u2)
      local v6 = v6:getValue(xmlFile .. "#minVolume", u3)
      local v7 = v7:getValue(xmlFile .. "#maxVolume", u4)
      local v8 = v8:getValue(xmlFile .. "#indoorVolume", u5)
      local v9 = v9:getValue(xmlFile .. "#minLoops", u6)
      local v10 = v10:getValue(xmlFile .. "#maxLoops", u7)
      local v11 = v11:getValue(xmlFile .. "#minPitch", u8)
      local v12 = v12:getValue(xmlFile .. "#maxPitch", u9)
      local v13 = v13:getValue(xmlFile .. "#minDelay", u10)
      local v14 = v14:getValue(xmlFile .. "#maxDelay", u11)
      local v15 = v15:getValue(xmlFile .. "#minLength", u12)
      local v16 = v16:getValue(xmlFile .. "#maxLength", u13)
      local v23 = Utils.getFilename(v2, u14.baseDirectory)
      if ambientSoundsAddSampleVariation ~= nil then
        ambientSoundsAddSampleVariation(u14.soundPlayerId, u15, v23, v3, {v4, v5}, {v6, v7}, v8, {v9, v10}, {v11, v12}, {v13, v14}, u16, {v15, v16})
      end
    end)
    table.insert(u1.samples, {filename = v2, audioGroupId = v20, requiredFlags = v21, preventFlags = v22})
    return true
  end)
  local v2 = xmlFile:getValue("sound.ambient3d#filename")
  if v2 ~= nil then
    local v3 = Utils.getFilename(v2, self.baseDirectory)
    v4:loadI3DFileAsync(v3, true, false, AmbientSoundSystem.sound3DFileLoaded, self, nil)
  end
  xmlFile:delete()
  return true
end
function AmbientSoundSystem:sound3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    if not self.isDeleted then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L16
    end
    delete(i3dNode)
    return
    self.sound3DRootNode = i3dNode
    local v5 = getRootNode()
    link(v5, i3dNode)
  end
end
function AmbientSoundSystem:addMovingSound(node)
  local numChildren = getNumOfChildren(node)
  if numChildren >= 2 then
    -- if 3 >= v2 then goto L19 end
  end
  local v5 = getName(node)
  Logging.devWarning(...)
  return
  local v3 = getChildAt(node, 0)
  local transformNode = getChildAt(node, 1)
  local v6 = getGeometry(v3)
  v5 = getHasClassId(v6, ClassIds.SPLINE)
  if not v5 then
    local v7 = getName(v3)
    local v8 = getName(node)
    Logging.error(...)
    return
  end
  setVisibility(v3, false)
  v5 = getSplineLength(v3)
  if numChildren == 3 then
    v8 = getChildAt(node, 2)
    local v12 = getNumOfChildren(v8)
    -- TODO: structure LOP_FORNPREP (pc 79, target 306)
    v12 = getChildAt(v8, 0)
    local v13 = getChildAt(v12, 0)
    local v14 = getChildAt(v12, 1)
    local v15, v16, v17 = getWorldTranslation(v13)
    local v18, v19, v20, v21 = getClosestSplinePosition(v3, v15, v16, v17, 0.01 / v5)
    local v22, v23, v24 = getWorldTranslation(v14)
    local v25, v26, v27, v28 = getClosestSplinePosition(v3, v22, v23, v24, 0.01 / v5)
    if v28 < v21 then
    end
    local v29 = DebugFlag.new(0, 1, 0)
    v29:create(v15, v16, v17, 1, 0)
    local v30 = DebugFlag.new(1, 0, 0)
    v30:create(v22, v23, v24, 1, 0)
    local v32 = getUserAttribute(v12, "rangeScale")
    local v31 = tonumber(...)
    local v33 = getUserAttribute(v12, "fadeDistance")
    v32 = tonumber(...)
    local v37 = DebugUtil.tableToColor(v29, 1)
    local v36, v37, v38, v39 = unpack(...)
    local v40 = DebugFlag.new(v36, v37, v38)
    local v41, v42, v43 = getSplinePosition(v3, v21)
    v40:create(v41, v42, v43, 1, 0)
    local v44 = DebugFlag.new(v36, v37, v38)
    local v45, v46, v47 = getSplinePosition(v3, v21 + v32 / v5)
    v44:create(v45, v46, v47, 1, 0)
    v45 = DebugFlag.new(v36, v37, v38)
    local v46, v47, v48 = getSplinePosition(v3, v28)
    v45:create(v46, v47, v48, 1, 0)
    v46 = DebugFlag.new(v36, v37, v38)
    local v47, v48, v49 = getSplinePosition(v3, v28 - v32 / v5)
    v46:create(v47, v48, v49, 1, 0)
    table.insert(v7, {startTime = v21, startTimeFadeEnd = v21 + v32 / v5, endTime = v28, endTimeFadeStart = v28 - v32 / v5, startDebug = v29, endDebug = v30, startFadeStartDebug = v40, startFadeEndDebug = v44, endFadeStartDebug = v45, endFadeEndDebug = v46, rangeScale = v31, fadeDistance = v32})
    -- TODO: structure LOP_FORNLOOP (pc 305, target 80)
  end
  table.sort(v7, function(self, node)
    if self.startTime >= node.startTime then
    end
    return true
  end)
  v12 = getNumOfChildren(transformNode)
  -- TODO: structure LOP_FORNPREP (pc 320, target 368)
  v12 = getChildAt(transformNode, 0)
  v13 = getHasClassId(v12, ClassIds.AUDIO_SOURCE)
  if not v13 then
    v15 = getName(transformNode)
    v16 = getName(v12)
    Logging.warning(...)
  else
    v13 = getAudioSourceInnerRange(v12)
    v14 = getAudioSourceRange(v12)
    table.insert({}, {node = v12, innerRange = v13, outerRange = v14})
  end
  -- TODO: structure LOP_FORNLOOP (pc 367, target 321)
  table.insert(self.movingSounds, {spline = v3, node = transformNode, eps = v6, sounds = v8, modifiers = v7})
  return {spline = v3, node = transformNode, eps = v6, sounds = v8, modifiers = v7}
end
function AmbientSoundSystem:removeMovingSound(movingSoundEntry)
  return table.removeElement(self.movingSounds, movingSoundEntry)
end
function AmbientSoundSystem:registerModifier(xmlAttributeName, loadFromXMLFunc)
  local v3 = string.upper(xmlAttributeName)
  for v7, v8 in ipairs(self.modifiers) do
    if not (v8.xmlAttributeName == xmlAttributeName) then
      continue
    end
    Logging.warning("Given ambient sound modifier xml attribute name '%s' already used", xmlAttributeName)
    return v8.updateFunc
  end
  if not loadFromXMLFunc then
  end
  v4.loadFromXMLFunc = v5
  v4.updateFunc = function(self)
    if self then
      local loadFromXMLFunc = bitOR(u0.worldMask, u1.bitflag)
      u0.worldMask = loadFromXMLFunc
      return
    end
    local v4 = bitNOT(u1.bitflag)
    loadFromXMLFunc = bitAND(...)
    u0.worldMask = loadFromXMLFunc
  end
  if loadFromXMLFunc == nil then
    AmbientSoundSystem.xmlSchema:register(XMLValueType.BOOL, "sound.ambient.sample(?)" .. ".prevent#" .. xmlAttributeName, "Prevent flag " .. xmlAttributeName)
    AmbientSoundSystem.xmlSchema:register(XMLValueType.BOOL, "sound.ambient.sample(?)" .. ".required#" .. xmlAttributeName, "Required flag " .. xmlAttributeName)
  end
  table.insert(self.modifiers, v4)
  return v4.updateFunc
end
function AmbientSoundSystem:unloadAmbientSounds()
  if self.soundPlayerId ~= nil then
    ambientSoundsRemoveAllSamples(self.soundPlayerId)
    self.samples = {}
  end
  if self.sound3DRootNode ~= nil then
    delete(self.sound3DRootNode)
    self.sound3DRootNode = nil
  end
  self.movingSounds = {}
  self.isDeleted = true
end
function AmbientSoundSystem:update(dt)
  if self.soundPlayerId ~= nil then
    ambientSoundsUpdate(self.soundPlayerId, dt, self.worldMask)
  end
  local v3 = getCamera()
  local v2, v3, v4 = getWorldTranslation(...)
  for v8, v9 in ipairs(self.movingSounds) do
    local v10, v11, v12, v13 = getClosestSplinePosition(v9.spline, v2, v3, v4, v9.eps)
    setWorldTranslation(v9.node, v10, v11, v12)
    for v18, v19 in ipairs(v9.modifiers) do
      if not (v19.startTime <= v13) then
        continue
      end
      if not (v13 <= v19.endTime) then
        continue
      end
      if v13 <= v19.startTimeFadeEnd then
      end
      if v19.endTimeFadeStart < v13 then
      end
      local v21 = MathUtil.lerp(1, v19.rangeScale, v20)
      break
    end
    if v9.lastScale ~= v14 then
      for v18, v19 in ipairs(v9.sounds) do
        setAudioSourceInnerRange(v19.node, v19.innerRange * v14)
        setAudioSourceRange(v19.node, v19.outerRange * v14)
      end
      v9.lastScale = v14
    end
    if not self.isDebugViewActive then
      continue
    end
    local v30 = getName(v9.node)
    DebugUtil.drawDebugGizmoAtWorldPos(v10, v11, v12, 0, 0, 1, 0, 1, 0, v30 .. " (RangeScale " .. v14 .. ")")
    for v18, v19 in ipairs(v9.modifiers) do
      v20:addFrameElement(v19.startFadeStartDebug)
      v20:addFrameElement(v19.startFadeEndDebug)
      v20:addFrameElement(v19.endFadeStartDebug)
      v20:addFrameElement(v19.endFadeEndDebug)
    end
  end
end
function AmbientSoundSystem:setIsEnabled(isEnabled)
  if self.soundPlayerId ~= nil then
    ambientSoundsSetEnabled(self.soundPlayerId, isEnabled)
  end
end
function AmbientSoundSystem:setIsIndoor(isIndoor)
  self.setIsIndoorModifier(isIndoor)
  if self.soundPlayerId ~= nil then
    ambientSoundsSetIsIndoor(self.soundPlayerId, isIndoor)
  end
end
function AmbientSoundSystem:draw()
  if self.isDebugViewActive then
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextColor(1, 1, 1, 1)
    setTextBold(true)
    local v4 = getCorrectTextSize(0.014)
    renderText(0.1, 0.82, v4, "Possible active ambient sounds:")
    setTextAlignment(RenderText.ALIGN_CENTER)
    v4 = getCorrectTextSize(0.014)
    renderText(0.7, 0.82, v4, "Modifiers:")
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    local textSize = getCorrectTextSize(0.012)
    local textOffset = getCorrectTextSize(0.001)
    for v7, v8 in ipairs(self.samples) do
      local v10 = bitAND(self.worldMask, v8.preventFlags)
      if v10 == 0 then
        v10 = bitAND(self.worldMask, v8.requiredFlags)
        if v10 ~= v8.requiredFlags then
        end
      end
      if not v9 then
        continue
      end
      local v14 = AudioGroup.getAudioGroupNameByIndex(v8.audioGroupId)
      renderText(...)
      renderText(0.2, v1, textSize, v8.filename)
    end
    for v7, v8 in ipairs(self.modifiers) do
      v10 = bitAND(self.worldMask, v8.bitflag)
      if v10 == 0 then
      end
      setTextAlignment(RenderText.ALIGN_RIGHT)
      renderText(0.7, v1, textSize, v8.xmlAttributeName .. ":  ")
      setTextAlignment(RenderText.ALIGN_LEFT)
      v14 = tostring(true)
      renderText(...)
    end
  end
end
function AmbientSoundSystem:consoleCommandReload()
  self:unloadAmbientSounds()
  self:loadFromConfigFile()
end
function AmbientSoundSystem:consoleCommandToggleDebugView()
  self.isDebugViewActive = not self.isDebugViewActive
  if self.isDebugViewActive then
    v1:addDrawable(self)
  else
    v1:removeDrawable(self)
  end
  for v4, v5 in ipairs(self.movingSounds) do
    setVisibility(v5.spline, self.isDebugViewActive)
  end
end
