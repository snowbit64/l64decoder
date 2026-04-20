-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoundModifierType = nil
SoundManager = {DEFAULT_REVERB_EFFECT = 0, MAX_SAMPLES_PER_FRAME = 5, DEFAULT_SOUND_TEMPLATES = "data/sounds/soundTemplates.xml", SAMPLE_MODIFIER_ATTRIBUTES = {"volume", "pitch", "lowpassGain", "loopSynthesisRpm", "loopSynthesisLoad"}, SAMPLE_RANDOMIZATIONS = {"randomizationsIn", "randomizationsOut"}, GLOBAL_DEBUG_ENABLED = false}
local SoundManager_mt = Class(SoundManager, AbstractManager)
function SoundManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  addConsoleCommand("gsSoundManagerDebug", "Toggle SoundManager global debug mode", "consoleCommandToggleDebug", v1)
  return v1
end
function SoundManager:initDataStructures()
  self.samples = {}
  self.orderedSamples = {}
  self.activeSamples = {}
  self.activeSamplesSet = {}
  self.debugSamplesFlagged = {}
  self.debugSamples = {}
  self.debugSamplesLinkNodes = {}
  self.currentSampleIndex = 1
  self.oldRandomizationIndex = 1
  self.isIndoor = false
  self.isInsideBuilding = false
  self.soundTemplates = {}
  self.soundTemplateXMLFile = nil
  self:loadSoundTemplates(SoundManager.DEFAULT_SOUND_TEMPLATES)
  self.modifierTypeNameToIndex = {}
  self.modifierTypeIndexToDesc = {}
  SoundModifierType = self.modifierTypeNameToIndex
  setReverbEffect(0, Reverb.GS_OPEN_FIELD, Reverb.GS_OPEN_FIELD, 1)
  self.indoorStateChangedListeners = {}
end
function SoundManager:delete()
  if self.soundTemplateXMLFile ~= nil then
    delete(self.soundTemplateXMLFile)
    self.soundTemplateXMLFile = nil
  end
end
function SoundManager:registerModifierType(typeName, func, minFunc, maxFunc)
  local v5 = typeName:upper()
  if SoundModifierType[v5] == nil then
    v5 = type(func)
    if v5 ~= "function" then
      local v7 = type(func)
      Logging.error(...)
      printCallstack()
      return
    end
    SoundModifierType[typeName] = {name = typeName, index = #self.modifierTypeIndexToDesc + 1, func = func, minFunc = minFunc, maxFunc = maxFunc}.index
    table.insert(self.modifierTypeIndexToDesc, {name = typeName, index = #self.modifierTypeIndexToDesc + 1, func = func, minFunc = minFunc, maxFunc = maxFunc})
  end
  return SoundModifierType[typeName]
end
function SoundManager:loadSoundTemplates(xmlFilename)
  local xmlFile = loadXMLFile("soundTemplates", xmlFilename)
  if xmlFile ~= 0 then
    while true do
      v4 = string.format("soundTemplates.template(%d)", v3)
      v5 = hasXMLProperty(xmlFile, v4)
      if not v5 then
        break
      end
      v5 = getXMLString(xmlFile, v4 .. "#name")
      if v5 ~= nil then
        if self.soundTemplates[v5] == nil then
          self.soundTemplates[v5] = v4
        else
          v7 = string.format("Warning: Sound template '%s' already exists!", v5)
          print(...)
        end
      end
    end
    self.soundTemplateXMLFile = xmlFile
    return true
  end
  return false
end
function SoundManager:reloadSoundTemplates()
  for v4, v5 in pairs(self.soundTemplates) do
    self.soundTemplates[v4] = nil
  end
  v1 = entityExists(self.soundTemplateXMLFile)
  if v1 then
    delete(self.soundTemplateXMLFile)
    self.soundTemplateXMLFile = nil
  end
  self:loadSoundTemplates(SoundManager.DEFAULT_SOUND_TEMPLATES)
end
function SoundManager:cloneSample(sample, linkNode, modifierTargetObject)
  local newSample = table.copy(sample)
  local v5 = table.copy(sample.modifiers)
  newSample.modifiers = v5
  if not sample.is2D then
    v5 = createAudioSource(newSample.sampleName, newSample.filename, newSample.outerRadius, newSample.innerRadius, newSample.current.volume, newSample.loops)
    newSample.soundNode = v5
    v5 = getAudioSourceSample(newSample.soundNode)
    newSample.soundSample = v5
    setAudioSourceAutoPlay(newSample.soundNode, false)
    link(linkNode, newSample.soundNode)
    newSample.linkNode = linkNode
    if newSample.linkNodeOffset == nil then
      setTranslation(newSample.soundNode, 0, 0, 0)
    else
      setTranslation(newSample.soundNode, newSample.linkNodeOffset[1], newSample.linkNodeOffset[2], newSample.linkNodeOffset[3])
    end
  end
  setSampleGroup(newSample.soundSample, sample.audioGroup)
  newSample.audioGroup = sample.audioGroup
  if sample.supportsReverb then
    addSampleEffect(newSample.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
  else
    removeSampleEffect(sample.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
  end
  if modifierTargetObject ~= nil then
    newSample.modifierTargetObject = modifierTargetObject
  end
  newSample.sourceRandomizations = {}
  -- TODO: structure LOP_FORNPREP (pc 127, target 146)
  local v9 = self:getRandomSample(sample, sample.sourceRandomizations[1].filename)
  table.insert(newSample.sourceRandomizations, v9)
  -- TODO: structure LOP_FORNLOOP (pc 145, target 128)
  self.samples[newSample] = newSample
  table.insert(self.orderedSamples, newSample)
  return newSample
end
function SoundManager:cloneSample2D(sample, linkNode, modifierTargetObject)
  local newSample = table.copy(sample)
  local v5 = table.copy(sample.modifiers)
  newSample.modifiers = v5
  newSample.audioGroup = sample.audioGroup
  newSample.linkNode = nil
  newSample.soundNode = nil
  newSample.is2D = true
  v5 = createSample(newSample.sampleName)
  newSample.soundSample = v5
  newSample.orgSoundSample = newSample.soundSample
  loadSample(newSample.soundSample, newSample.filename, false)
  v5 = getSampleDuration(newSample.soundSample)
  newSample.duration = v5
  setSampleGroup(newSample.soundSample, sample.audioGroup)
  newSample.audioGroup = sample.audioGroup
  if modifierTargetObject ~= nil then
    newSample.modifierTargetObject = modifierTargetObject
  end
  newSample.sourceRandomizations = {}
  -- TODO: structure LOP_FORNPREP (pc 74, target 118)
  if not sample.sourceRandomizations[1].isEmpty then
    local v10 = createSample(newSample.sampleName)
    loadSample({filename = sample.sourceRandomizations[1].filename, isEmpty = sample.sourceRandomizations[1].isEmpty, is2D = true, soundSample = v10}.soundSample, {filename = sample.sourceRandomizations[1].filename, isEmpty = sample.sourceRandomizations[1].isEmpty, is2D = true, soundSample = v10}.filename, false)
  end
  table.insert(newSample.sourceRandomizations, v9)
  -- TODO: structure LOP_FORNLOOP (pc 117, target 75)
  self.samples[newSample] = newSample
  table.insert(self.orderedSamples, newSample)
  return newSample
end
function SoundManager.validateSampleDefinition(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if v3 ~= nil then
    local v15 = AudioGroup.getIsValidAudioGroup(v5)
    if not v15 then
      local v20 = tostring(v5)
      print("Warning: Invalid audioGroup index '" .. v20 .. "'.")
    end
    if v9 ~= nil then
      v15 = hasXMLProperty(v12, v2 .. "." .. v3)
      if not v15 then
        v15 = v15:replaceRootName(v2 .. "." .. v3)
      end
    end
    v15 = v15:getFileByHandle(v1)
    if v15 ~= nil then
      XMLUtil.checkDeprecatedXMLElements(v15, v2 .. "#externalSoundFile", "vehicle.base.sounds#filename")
    end
    if v12 ~= nil then
      local v16 = hasXMLProperty(v12, v13)
      -- if not v16 then goto L137 end
      -- if v6 then goto L137 end
      local v18 = getXMLString(v12, v13 .. "#linkNode")
      v16 = I3DUtil.indexToObject(v7, v18, v8)
      -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L137
      v16 = type(v7)
      if v16 == "number" then
        return true, v11, v12, v13, v7
      end
      v16 = type(v7)
      if v16 == "table" then
        return v10, v11, v12, v13, v7[1].node
      end
      local v24 = getXMLString(v12, v13 .. "#linkNode")
      local v23 = tostring(...)
      v23 = tostring(v3)
      print("Warning: Could not find linkNode (" .. v23 .. ") for sample '" .. v23 .. "'. Ignoring it!")
      return false, v11, v12, v13, v14
    end
    Logging.warning("Unable to load sample '%s' from internal or given external sound file '%s'!", v3, v9)
  end
  return v10, v11, v12, v13, v14
end
function SoundManager:loadSample2DFromXML(xmlFile, baseKey, sampleName, baseDir, loops, audioGroup)
  local v8, v9, v10, v11 = self:validateSampleDefinition(xmlFile, baseKey, sampleName, baseDir, audioGroup, true)
  if v8 then
    local v12 = getXMLString(v10, v11 .. "#template")
    if v12 ~= nil then
      local v13 = self:loadSampleAttributesFromTemplate({is2D = true, sampleName = sampleName}, v12, baseDir, loops, v10, v11)
    end
    v13 = self:loadSampleAttributesFromXML(v7, v10, v11, baseDir, loops)
    if not v13 then
      return nil
    end
    v13 = Utils.getFilename(v7.filename, baseDir)
    v7.filename = v13
    v7.linkNode = nil
    v7.current = v7.outdoorAttributes
    v7.audioGroup = audioGroup
    local v14 = getXMLBool(xmlFile, v11 .. "#supportsReverb")
    v13 = Utils.getNoNil(v14, true)
    v7.supportsReverb = v13
    v13 = createSample(v7.sampleName)
    v7.soundSample = v13
    v7.orgSoundSample = v7.soundSample
    loadSample(v7.soundSample, v7.filename, false)
    v13 = getSampleDuration(v7.soundSample)
    v7.duration = v13
    setSampleGroup(v7.soundSample, v7.audioGroup)
    setSampleVolume(v7.soundSample, v7.current.volume)
    setSamplePitch(v7.soundSample, v7.current.pitch)
    setSampleFrequencyFilter(v7.soundSample, 1, v7.current.lowpassGain, 0, v7.current.lowpassCutoffFrequency, 0, v7.current.lowpassResonance)
    if v7.supportsReverb then
      addSampleEffect(v7.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
    else
      removeSampleEffect(v7.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
    end
    v7.offsets = {volume = 0, pitch = 0, lowpassGain = 0}
    self.samples[v7] = v7
    table.insert(self.orderedSamples, v7)
  end
  if v9 then
    delete(v10)
  end
  return v7
end
function SoundManager:loadSampleFromXML(xmlFile, baseKey, sampleName, baseDir, components, loops, audioGroup, i3dMappings, modifierTargetObject)
  local v11 = type(xmlFile)
  if v11 == "table" then
  end
  if modifierTargetObject ~= nil then
  end
  local v13, v14, v15, v16, v17 = self:validateSampleDefinition(xmlFile, baseKey, sampleName, baseDir, audioGroup, false, components, i3dMappings, v11)
  if v13 then
    local v18 = getXMLString(v15, v16 .. "#template")
    if v18 ~= nil then
      local v19 = self:loadSampleAttributesFromTemplate({is2D = false, sampleName = sampleName}, v18, baseDir, loops, v15, v16)
    end
    v19 = self:loadSampleAttributesFromXML(v10, v15, v16, baseDir, loops)
    if not v19 then
      return nil
    end
    v19 = Utils.getFilename(v10.filename, baseDir)
    v10.filename = v19
    local v20 = v20:find(".gls")
    if v20 == nil then
    end
    v10.isGlsFile = true
    v10.linkNode = v17
    v10.modifierTargetObject = modifierTargetObject
    v10.current = v10.outdoorAttributes
    v10.audioGroup = audioGroup
    if v12 ~= nil then
      v10.volumeScale = v10.volumeScale * v12
    end
    self:createAudioSource(v10, v10.filename)
    v10.offsets = {volume = 0, pitch = 0, lowpassGain = 0}
    self.samples[v10] = v10
    table.insert(self.orderedSamples, v10)
  end
  return v10
end
function SoundManager.loadSamplesFromXML(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  if not v10 then
  end
  while true do
    v16 = string.format("%s(%d)", v3, v11)
    v12 = v12:loadSampleFromXML(v1, v2, v16, v4, v5, v6, v7, v8, v9)
    if not (v12 ~= nil) then
      break
    end
    table.insert(v10, v12)
  end
  return v10
end
function SoundManager:createAudioSource(sample, filename)
  if sample.soundNode ~= nil then
    delete(sample.soundNode)
  end
  local v3 = createAudioSource(sample.sampleName, filename, sample.outerRadius, sample.innerRadius, sample.current.volume, sample.loops)
  sample.soundNode = v3
  v3 = getAudioSourceSample(sample.soundNode)
  sample.soundSample = v3
  self:onCreateAudioSource(sample)
end
function SoundManager.onCreateAudioSource(v0, v1, v2)
  local v3 = getAudioSourceSample(v1.soundNode)
  v1.soundSample = v3
  v3 = getSampleDuration(v1.soundSample)
  v1.duration = v3
  v3 = getAudioSourceRange(v1.soundNode)
  v1.outerRange = v3
  v3 = getAudioSourceInnerRange(v1.soundNode)
  v1.innerRange = v3
  v1.isDirty = true
  setSampleGroup(v1.soundSample, v1.audioGroup)
  setSampleVolume(v1.soundSample, v1.current.volume)
  setSamplePitch(v1.soundSample, v1.current.pitch)
  setSampleFrequencyFilter(v1.soundSample, 1, v1.current.lowpassGain, 0, v1.current.lowpassCutoffFrequency, 0, v1.current.lowpassResonance)
  if not v2 then
    if v1.supportsReverb then
      addSampleEffect(v1.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
    else
      removeSampleEffect(v1.soundSample, SoundManager.DEFAULT_REVERB_EFFECT)
    end
  end
  setAudioSourceAutoPlay(v1.soundNode, false)
  link(v1.linkNode, v1.soundNode)
  if v1.linkNodeOffset == nil then
    setTranslation(v1.soundNode, 0, 0, 0)
    return
  end
  setTranslation(v1.soundNode, v1.linkNodeOffset[1], v1.linkNodeOffset[2], v1.linkNodeOffset[3])
end
function SoundManager:createAudio2d(sample, filename)
  if sample.soundSample ~= nil then
    delete(sample.soundSample)
  end
  local v3 = createSample(sample.sampleName)
  sample.soundSample = v3
  sample.orgSoundSample = sample.soundSample
  loadSample(sample.soundSample, filename, false)
  self:onCreateAudio2d(sample)
end
function SoundManager.onCreateAudio2d(v0, v1)
  local v2 = getSampleDuration(v1.soundSample)
  v1.duration = v2
  setSampleGroup(v1.soundSample, v1.audioGroup)
  setSampleVolume(v1.soundSample, v1.current.volume)
  setSamplePitch(v1.soundSample, v1.current.pitch)
  setSampleFrequencyFilter(v1.soundSample, 1, v1.current.lowpassGain, 0, v1.current.lowpassCutoffFrequency, 0, v1.current.lowpassResonance)
end
function SoundManager:loadSampleAttributesFromTemplate(sample, templateName, baseDir, defaultLoops, xmlFile, sampleKey)
  if self.soundTemplates[templateName] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L57
    local v9 = self:loadSampleAttributesFromXML({is2D = sample.is2D, sampleName = sample.sampleName, templateName = templateName}, self.soundTemplateXMLFile, self.soundTemplates[templateName], baseDir, defaultLoops, false)
    if not v9 then
      return sample
    end
    return v8
    return sample
  end
  local v8 = v8:getFileByHandle(xmlFile)
  if v8 ~= nil then
    Logging.xmlError(v8, "Sound template '%s' was not found in %s", templateName, sampleKey)
    return sample
  end
  Logging.error("Sound template '%s' was not found in %s", templateName, sampleKey)
  return sample
end
function SoundManager:loadSampleAttributesFromXML(sample, xmlFile, key, baseDir, defaultLoops, requiresFile)
  local v7 = getXMLString(xmlFile, key .. "#parent")
  if v7 ~= nil and self.soundTemplates[v7] ~= nil then
    self:loadSampleAttributesFromXML(sample, self.soundTemplateXMLFile, self.soundTemplates[v7], baseDir, defaultLoops, false)
  end
  local v9 = getXMLString(xmlFile, key .. "#file")
  local v8 = Utils.getNoNil(v9, sample.filename)
  sample.filename = v8
  if sample.filename == nil then
    if requiresFile ~= nil then
      -- if not v6 then goto L58 end
    end
    local v13 = tostring(key)
    print("Warning: Filename not defined in '" .. v13 .. "'. Ignoring it!")
    return false
  end
  v9 = getXMLString(xmlFile, key .. "#linkNodeOffset")
  v8 = Utils.getNoNil(v9, "0 0 0")
  v8 = v8:getVectorN(3)
  sample.linkNodeOffset = v8
  local v10 = getXMLFloat(xmlFile, key .. "#innerRadius")
  v9 = Utils.getNoNil(v10, sample.innerRadius)
  v8 = Utils.getNoNil(v9, 5)
  sample.innerRadius = v8
  v10 = getXMLFloat(xmlFile, key .. "#outerRadius")
  v9 = Utils.getNoNil(v10, sample.outerRadius)
  v8 = Utils.getNoNil(v9, 80)
  sample.outerRadius = v8
  v10 = getXMLFloat(xmlFile, key .. "#volumeScale")
  v9 = Utils.getNoNil(v10, sample.volumeScale)
  v8 = Utils.getNoNil(v9, 1)
  sample.volumeScale = v8
  v10 = getXMLFloat(xmlFile, key .. "#pitchScale")
  v9 = Utils.getNoNil(v10, sample.pitchScale)
  v8 = Utils.getNoNil(v9, 1)
  sample.pitchScale = v8
  v10 = getXMLFloat(xmlFile, key .. "#lowpassGainScale")
  v9 = Utils.getNoNil(v10, sample.lowpassGainScale)
  v8 = Utils.getNoNil(v9, 1)
  sample.lowpassGainScale = v8
  v10 = getXMLFloat(xmlFile, key .. "#loopSynthesisRPMRatio")
  v9 = Utils.getNoNil(v10, sample.loopSynthesisRPMRatio)
  v8 = Utils.getNoNil(v9, 1)
  sample.loopSynthesisRPMRatio = v8
  v8 = Utils.getNoNil(sample.indoorAttributes, {})
  sample.indoorAttributes = v8
  local v11 = getXMLFloat(xmlFile, key .. ".volume#indoor")
  v10 = Utils.getNoNil(v11, sample.indoorAttributes.volume)
  v9 = Utils.getNoNil(v10, 0.8)
  sample.indoorAttributes.volume = v9
  v11 = getXMLFloat(xmlFile, key .. ".pitch#indoor")
  v10 = Utils.getNoNil(v11, sample.indoorAttributes.pitch)
  v9 = Utils.getNoNil(v10, 1)
  sample.indoorAttributes.pitch = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassGain#indoor")
  v10 = Utils.getNoNil(v11, sample.indoorAttributes.lowpassGain)
  v9 = Utils.getNoNil(v10, 0.8)
  sample.indoorAttributes.lowpassGain = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassCutoffFrequency#indoor")
  v10 = Utils.getNoNil(v11, sample.indoorAttributes.lowpassCutoffFrequency)
  v9 = Utils.getNoNil(v10, 0)
  sample.indoorAttributes.lowpassCutoffFrequency = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassResonance#indoor")
  v10 = Utils.getNoNil(v11, sample.indoorAttributes.lowpassResonance)
  v9 = Utils.getNoNil(v10, 0)
  sample.indoorAttributes.lowpassResonance = v9
  v8 = Utils.getNoNil(sample.outdoorAttributes, {})
  sample.outdoorAttributes = v8
  v11 = getXMLFloat(xmlFile, key .. ".volume#outdoor")
  v10 = Utils.getNoNil(v11, sample.outdoorAttributes.volume)
  v9 = Utils.getNoNil(v10, 1)
  sample.outdoorAttributes.volume = v9
  v11 = getXMLFloat(xmlFile, key .. ".pitch#outdoor")
  v10 = Utils.getNoNil(v11, sample.outdoorAttributes.pitch)
  v9 = Utils.getNoNil(v10, 1)
  sample.outdoorAttributes.pitch = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassGain#outdoor")
  v10 = Utils.getNoNil(v11, sample.outdoorAttributes.lowpassGain)
  v9 = Utils.getNoNil(v10, 1)
  sample.outdoorAttributes.lowpassGain = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassCutoffFrequency#outdoor")
  v10 = Utils.getNoNil(v11, sample.outdoorAttributes.lowpassCutoffFrequency)
  v9 = Utils.getNoNil(v10, 0)
  sample.outdoorAttributes.lowpassCutoffFrequency = v9
  v11 = getXMLFloat(xmlFile, key .. ".lowpassResonance#outdoor")
  v10 = Utils.getNoNil(v11, sample.outdoorAttributes.lowpassResonance)
  v9 = Utils.getNoNil(v10, 0)
  sample.outdoorAttributes.lowpassResonance = v9
  v10 = getXMLInt(xmlFile, key .. "#loops")
  v9 = Utils.getNoNil(v10, sample.loops)
  v10 = Utils.getNoNil(defaultLoops, 1)
  v8 = Utils.getNoNil(...)
  sample.loops = v8
  v10 = getXMLBool(xmlFile, key .. "#supportsReverb")
  v9 = Utils.getNoNil(v10, sample.supportsReverb)
  v8 = Utils.getNoNil(v9, true)
  sample.supportsReverb = v8
  v10 = getXMLBool(xmlFile, key .. "#isLocalSound")
  v9 = Utils.getNoNil(v10, sample.isLocalSound)
  v8 = Utils.getNoNil(v9, false)
  sample.isLocalSound = v8
  v10 = getXMLBool(xmlFile, key .. "#debug")
  v9 = Utils.getNoNil(v10, sample.debug)
  v8 = Utils.getNoNil(v9, false)
  sample.debug = v8
  if not sample.debug then
    -- if not SoundManager.GLOBAL_DEBUG_ENABLED then goto L523 end
  end
  if sample.debug then
    table.insert(self.debugSamplesFlagged, sample)
  end
  self.debugSamples[sample] = true
  sample.debug = nil
  v8 = getXMLFloat(xmlFile, key .. "#fadeIn")
  if v8 ~= nil then
  end
  v10 = Utils.getNoNil(v8, sample.fadeIn)
  v9 = Utils.getNoNil(v10, 0)
  sample.fadeIn = v9
  v9 = getXMLFloat(xmlFile, key .. "#fadeOut")
  if v9 ~= nil then
  end
  v11 = Utils.getNoNil(v9, sample.fadeOut)
  v10 = Utils.getNoNil(v11, 0)
  sample.fadeOut = v10
  sample.fade = 0
  sample.isIndoor = false
  self:loadModifiersFromXML(sample, xmlFile, key)
  self:loadRandomizationsFromXML(sample, xmlFile, key, baseDir)
  return true
end
function SoundManager.loadModifiersFromXML(v0, v1, v2, v3)
  local v4 = Utils.getNoNil(v1.modifiers, {})
  v1.modifiers = v4
  for v7, v8 in pairs(SoundManager.SAMPLE_MODIFIER_ATTRIBUTES) do
    local v9 = Utils.getNoNil(v1.modifiers[v8], {})
    local v10 = Utils.getNoNil(v9.hasModification, false)
    v9.hasModification = v10
    while true do
      v11 = string.format("%s.%s.modifier(%d)", v3, v8, v10)
      v12 = hasXMLProperty(v2, v11)
      if not v12 then
        break
      end
      v12 = getXMLString(v2, v11 .. "#type")
      if SoundModifierType[v12] ~= nil then
        if v9[SoundModifierType[v12]] == nil then
          v14 = AnimCurve.new(linearInterpolator1)
          v9[SoundModifierType[v12]] = v14
        end
        v14 = getXMLFloat(v2, v11 .. "#value")
        v15 = getXMLFloat(v2, v11 .. "#modifiedValue")
        v16:addKeyframe({v15, time = v14}, v2, v11)
        v9.hasModification = true
      end
    end
    v9.currentValue = nil
    v1.modifiers[v8] = v9
  end
end
function SoundManager:loadRandomizationsFromXML(sample, xmlFile, key, baseDir)
  if not sample.randomizationsIn then
  end
  sample.randomizationsIn = v5
  if not sample.randomizationsOut then
  end
  sample.randomizationsOut = v5
  while true do
    v6 = string.format("%s.randomization(%d)", key, v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v8 = getXMLFloat(xmlFile, v6 .. "#minVolume")
    v8 = getXMLFloat(xmlFile, v6 .. "#maxVolume")
    v8 = getXMLFloat(xmlFile, v6 .. "#minPitch")
    v8 = getXMLFloat(xmlFile, v6 .. "#maxPitch")
    v8 = getXMLFloat(xmlFile, v6 .. "#minLowpassGain")
    v8 = getXMLFloat(xmlFile, v6 .. "#maxLowpassGain")
    v9 = getXMLBool(xmlFile, v6 .. "#isInside")
    v8 = Utils.getNoNil(v9, true)
    v9 = getXMLBool(xmlFile, v6 .. "#isOutside")
    v8 = Utils.getNoNil(v9, true)
    if {minVolume = v8, maxVolume = v8, minPitch = v8, maxPitch = v8, minLowpassGain = v8, maxLowpassGain = v8, isInside = v8, isOutside = v8}.isInside then
      if {minVolume = v8, maxVolume = v8, minPitch = v8, maxPitch = v8, minLowpassGain = v8, maxLowpassGain = v8, isInside = v8, isOutside = v8}.minVolume ~= nil and sample.indoorAttributes.volume + {minVolume = v8, maxVolume = v8, minPitch = v8, maxPitch = v8, minLowpassGain = v8, maxLowpassGain = v8, isInside = v8, isOutside = v8}.minVolume <= 0 then
        if not sample.templateName then
        end
        v8(v9, v10, v11, v6)
      end
      table.insert(sample.randomizationsIn, v7)
    end
    if v7.isOutside then
      if v7.minVolume ~= nil and sample.outdoorAttributes.volume + v7.minVolume <= 0 then
        if not sample.templateName then
        end
        v8(v9, v10, v11, v6)
      end
      table.insert(sample.randomizationsOut, v7)
    end
  end
  if not sample.sourceRandomizations then
  end
  sample.sourceRandomizations = v6
  while true do
    v6 = string.format("%s.sourceRandomization(%d)", key, v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#file")
    if v7 ~= nil then
      if v7 ~= "-" then
        v8 = Utils.getFilename(v7, baseDir)
      end
      v8 = self:getRandomSample(sample, v7)
      table.insert(sample.sourceRandomizations, v8)
    end
  end
  if 0 < #sample.sourceRandomizations and not sample.addedBaseFileToRandomizations then
    v6 = Utils.getFilename(sample.filename, baseDir)
    v7 = self:getRandomSample(sample, v6)
    table.insert(sample.sourceRandomizations, v7)
    sample.addedBaseFileToRandomizations = true
  end
end
function SoundManager.getRandomSample(v0, v1, v2)
  if v2 ~= "-" then
    if not v1.is2D then
      local v4 = createAudioSource(v1.sampleName, v2, v1.outerRadius, v1.innerRadius, 1, v1.loops)
      -- cmp-jump LOP_JUMPXEQKN R4 aux=0x9 -> L75
      local v5 = getAudioSourceSample({filename = v2, soundNode = v4}.soundNode)
      if v1.supportsReverb then
        addSampleEffect(v5, SoundManager.DEFAULT_REVERB_EFFECT)
        return {filename = v2, soundNode = v4}
      end
      removeSampleEffect(v5, SoundManager.DEFAULT_REVERB_EFFECT)
      return v3
    end
    v4 = createSample(v1.sampleName)
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x9 -> L75
    v5 = loadSample(v4, v2, false)
    -- if not v5 then goto L75 end
    v3.soundSample = v4
    v3.is2D = true
    return v3
  end
  v3.isEmpty = true
  return v3
end
function SoundManager:update(dt)
  -- TODO: structure LOP_FORNPREP (pc 6, target 55)
  if #self.activeSamples < self.currentSampleIndex then
    self.currentSampleIndex = 1
  else
    local v7 = self:getIsSamplePlaying(self.activeSamples[self.currentSampleIndex])
    if v7 then
      self:updateSampleFade(self.activeSamples[self.currentSampleIndex], dt)
      self:updateSampleModifiers(self.activeSamples[self.currentSampleIndex])
      self:updateSampleAttributes(self.activeSamples[self.currentSampleIndex])
    else
      table.removeElement(self.activeSamples, self.activeSamples[self.currentSampleIndex])
      self.activeSamples[self.currentSampleIndex].fade = 0
    end
    self.currentSampleIndex = self.currentSampleIndex + 1
    -- TODO: structure LOP_FORNLOOP (pc 54, target 7)
  end
  table.clear(self.debugSamplesLinkNodes)
  for v5 in pairs(self.debugSamples) do
    if not (v5.linkNode ~= nil) then
      continue
    end
    v7 = entityExists(v5.linkNode)
    if not v7 then
      continue
    end
    local v8 = getCamera()
    v7 = calcDistanceFrom(v8, v5.linkNode)
    if v7 >= 15 and not (v7 < v5.outerRadius * 1.5) then
      continue
    end
    if self.debugSamplesLinkNodes[v5.linkNode] == nil then
      self.debugSamplesLinkNodes[v5.linkNode] = {}
    end
    table.insert(self.debugSamplesLinkNodes[v5.linkNode], v5)
  end
end
function SoundManager:draw()
  for v4, v5 in pairs(self.debugSamplesLinkNodes) do
    local v6, v7, v8 = getWorldTranslation(v4)
    local debugNode = createTransformGroup("sampleDebugNode")
    setTranslation(debugNode, v6, v7, v8)
    local v12 = getName(v4)
    local v13 = getEffectiveVisibility(v4)
    local v10 = string.format(...)
    DebugUtil.drawDebugNode(v4, v10, false)
    -- TODO: structure LOP_FORNPREP (pc 42, target 136)
    local v22 = self:getIsSamplePlaying(v5[1])
    local v17 = string.format("AudioSample '%s'  IR=%d  OR=%d  isPlaying=%s  tmpl=%s", v5[1].sampleName or 1, v5[1].innerRadius, v5[1].outerRadius, v22, v5[1].templateName)
    local v18 = DebugUtil.tableToColor(v5[1])
    setRotation(debugNode, 0, 1 / 100, 0)
    local v24 = getCorrectTextSize(0.016)
    local v26 = getCorrectTextSize(0.016)
    Utils.renderTextAtWorldPosition(v6, v7, v8, v17, v24, 1 * v26, v18)
    DebugUtil.drawDebugCircleAtNode(debugNode, v5[1].innerRadius, 20, v18, true)
    DebugUtil.drawDebugCircleAtNode(debugNode, v5[1].outerRadius, 20, v18, true)
    setRotation(debugNode, 0, 1.5707963267948966 + 1 / 100, 0)
    DebugUtil.drawDebugCircleAtNode(debugNode, v5[1].innerRadius, 20, v18, true)
    DebugUtil.drawDebugCircleAtNode(debugNode, v5[1].outerRadius, 20, v18, true)
    -- TODO: structure LOP_FORNLOOP (pc 135, target 43)
    delete(debugNode)
  end
end
function SoundManager.updateSampleFade(v0, v1, v2)
  if v1 ~= nil and v1.fadeIn ~= 0 then
    local v3 = math.min(v1.fade + v2, v1.fadeIn)
    v1.fade = v3
  end
end
function SoundManager:updateSampleModifiers(sample)
  if sample ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L7
  end
  return
  for v5, v6 in pairs(SoundManager.SAMPLE_MODIFIER_ATTRIBUTES) do
    if not (sample.modifiers[v6] ~= nil) then
      continue
    end
    for v12, v13 in pairs(SoundModifierType) do
      local v14, v15, v16 = self:getSampleModifierValue(sample, v6, v13)
      if not v16 then
        continue
      end
    end
    v7.currentValue = v8
  end
end
function SoundManager:updateSampleAttributes(sample, force)
  if sample ~= nil then
    if sample.isIndoor == self.isIndoor then
      -- if not v2 then goto L19 end
    end
    self:setCurrentSampleAttributes(sample, self.isIndoor)
    sample.isIndoor = self.isIndoor
    local volumeFactor = self:getModifierFactor(sample, "volume")
    local pitchFactor = self:getModifierFactor(sample, "pitch")
    local lowpassGainFactor = self:getModifierFactor(sample, "lowpassGain")
    local v9 = self:getCurrentSampleVolume(sample)
    setSampleVolume(sample.soundSample, volumeFactor * v9)
    v9 = self:getCurrentSamplePitch(sample)
    setSamplePitch(sample.soundSample, pitchFactor * v9)
    local v10 = self:getCurrentSampleLowpassGain(sample)
    setSampleFrequencyFilter(sample.soundSample, 1, lowpassGainFactor * v10, 0, sample.current.lowpassCutoffFrequency, 0, sample.current.lowpassResonance)
    if sample.modifiers.loopSynthesisRpm.hasModification then
      local loopSynthesisRpmFactor = self:getModifierFactor(sample, "loopSynthesisRpm")
      v9 = MathUtil.clamp(loopSynthesisRpmFactor, 0, 1)
      setSampleLoopSynthesisRPM(sample.soundSample, v9, true)
    end
    if sample.modifiers.loopSynthesisLoad.hasModification then
      loopSynthesisRpmFactor = self:getModifierFactor(sample, "loopSynthesisLoad")
      v9 = MathUtil.clamp(loopSynthesisRpmFactor, 0, 1)
      setSampleLoopSynthesisLoadFactor(...)
    end
  end
end
function SoundManager:updateSampleRandomizations(sample)
  if sample ~= nil then
    for v5, v6 in ipairs(SoundManager.SAMPLE_RANDOMIZATIONS) do
      if v6 ~= "randomizationsIn" then
      end
      if not (true == sample.isIndoor) then
        continue
      end
      if not (0 < #sample[v6]) then
        continue
      end
      local v10 = math.random(#sample[v6])
      local v9 = math.floor(...)
      local v8 = math.max(v9, 1)
      if sample[v6][v8].minVolume ~= nil and sample[v6][v8].maxVolume then
        local v13 = math.random()
        sample[v6].volume = v13 * (sample[v6][v8].maxVolume - sample[v6][v8].minVolume) + sample[v6][v8].minVolume
      end
      if v9.minPitch ~= nil and v9.maxPitch then
        v13 = math.random()
        sample[v6].pitch = v13 * (v9.maxPitch - v9.minPitch) + v9.minPitch
      end
      if not (v9.minLowpassGain ~= nil) then
        continue
      end
      if not v9.maxLowpassGain then
        continue
      end
      v13 = math.random()
      sample[v6].lowpassGain = v13 * (v9.maxLowpassGain - v9.minLowpassGain) + v9.minLowpassGain
    end
    if 0 < #sample.sourceRandomizations then
      -- TODO: structure LOP_FORNPREP (pc 117, target 138)
      v9 = math.random(#sample.sourceRandomizations)
      v8 = math.floor(...)
      local v7 = math.max(v8, 1)
      if self.oldRandomizationIndex == v7 then
        -- TODO: structure LOP_FORNLOOP (pc 137, target 118)
      end
      self.oldRandomizationIndex = v3
      if not sample.is2D then
        if sample.soundSample ~= nil then
          stopSample(sample.soundSample, 0, sample.fadeOut)
        end
        if not v4.isEmpty then
          sample.soundNode = v4.soundNode
          self:onCreateAudioSource(sample, true)
          sample.isEmptySample = false
          return
        end
        sample.isEmptySample = true
        return
      end
      if sample.soundSample ~= nil then
        stopSample(sample.soundSample, 0, sample.fadeOut)
      end
      if not v4.isEmpty then
        sample.soundSample = v4.soundSample
        self:onCreateAudio2d(sample)
        sample.isEmptySample = false
        return
      end
      sample.isEmptySample = true
    end
  end
end
function SoundManager:getSampleModifierValue(sample, attribute, typeIndex)
  if sample.modifiers[attribute] ~= nil and sample.modifiers[attribute][typeIndex] ~= nil then
    local v7 = self.modifierTypeIndexToDesc[typeIndex].func(sample.modifierTargetObject)
    if self.modifierTypeIndexToDesc[typeIndex].maxFunc ~= nil and self.modifierTypeIndexToDesc[typeIndex].minFunc ~= nil then
      local v8 = self.modifierTypeIndexToDesc[typeIndex].minFunc(sample.modifierTargetObject)
      local v13 = self.modifierTypeIndexToDesc[typeIndex].maxFunc(sample.modifierTargetObject)
      local v9 = MathUtil.clamp((v7 - v8) / (v13 - v8), 0, 1)
    end
    v8 = v5:get(v7)
    return v8, v7, true
  end
  return 0, 0, false
end
function SoundManager:deleteSample(sample)
  if sample ~= nil and sample.filename ~= nil then
    local v2 = self:getIsSamplePlaying(sample)
    if v2 then
      self:stopSample(sample)
    end
    self.samples[sample] = nil
    table.removeElement(self.activeSamples, sample)
    table.removeElement(self.orderedSamples, sample)
    self.debugSamples[sample] = nil
    table.removeElement(self.debugSamplesFlagged, sample)
    if sample.soundNode ~= nil then
      delete(sample.soundNode)
    end
    if sample.is2D and sample.orgSoundSample ~= nil then
      delete(sample.orgSoundSample)
    end
    -- TODO: structure LOP_FORNPREP (pc 67, target 98)
    if not sample.sourceRandomizations[1].isEmpty then
      if sample.sourceRandomizations[1].soundNode ~= nil and sample.sourceRandomizations[1].soundNode ~= sample.soundNode then
        delete(sample.sourceRandomizations[1].soundNode)
      end
      if v5.is2D then
        delete(v5.soundSample)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 97, target 68)
    sample.sourceRandomizations = {}
    sample.soundSample = nil
    sample.soundNode = nil
  end
end
function SoundManager:deleteSamples(samples, delay, afterSample)
  if samples ~= nil then
    for v7, v8 in pairs(samples) do
      self:deleteSample(v8, delay, afterSample)
    end
  end
end
function SoundManager:playSample(sample, delay, afterSample)
  if sample ~= nil then
    if sample.isLocalSound and sample.modifierTargetObject ~= nil then
      -- if not v1.isLocalSound then goto L65 end
      -- if not v1.modifierTargetObject.isActiveForLocalSound then goto L65 end
    end
    self:updateSampleRandomizations(sample)
    self:updateSampleModifiers(sample)
    self:updateSampleAttributes(sample, true)
    if not sample.isEmptySample then
      if afterSample ~= nil then
      end
      local v9 = self:getModifierFactor(sample, "volume")
      local v10 = self:getCurrentSampleVolume(sample)
      playSample(sample.soundSample, sample.loops, v9 * v10, 0, delay, v4)
      table.addElement(self.activeSamples, sample)
    end
  end
end
function SoundManager:playSamples(samples, delay, afterSample)
  for v7, v8 in pairs(samples) do
    self:playSample(v8, delay, afterSample)
  end
end
function SoundManager.stopSample(v0, v1, v2, v3)
  if v1 ~= nil and v1.soundSample ~= nil then
    if not v2 then
      local v6 = getSampleLoopSynthesisStopDuration(v1.soundSample)
    end
    if not v3 then
    end
    v4(v5, v6, v7)
  end
end
function SoundManager:stopSamples(samples)
  for v5, v6 in pairs(samples) do
    self:stopSample(v6)
  end
end
function SoundManager.setSampleVolumeOffset(v0, v1, v2)
  if v1 ~= nil then
    v1.offsets.volume = v2
  end
end
function SoundManager.setSamplePitchOffset(v0, v1, v2)
  if v1 ~= nil then
    v1.offsets.pitch = v2
  end
end
function SoundManager.setSampleLowpassGainOffset(v0, v1, v2)
  if v1 ~= nil then
    v1.offsets.lowpassGain = v2
  end
end
function SoundManager.setSampleVolume(v0, v1, v2)
  if v1 ~= nil then
    setSampleVolume(v1.soundSample, v2)
  end
end
function SoundManager.setSamplePitch(v0, v1, v2)
  if v1 ~= nil then
    setSamplePitch(v1.soundSample, v2)
  end
end
function SoundManager.getIsSamplePlaying(v0, v1, v2)
  if v1 ~= nil and v1.soundSample ~= nil then
    return isSamplePlaying(v1.soundSample)
  end
  return false
end
function SoundManager.setSampleLoopSynthesisParameters(v0, v1, v2, v3)
  if v1 ~= nil then
    if v2 ~= nil then
      if v1.loopSynthesisRPMRatio ~= 1 then
        local v5 = math.min(v2 / v1.loopSynthesisRPMRatio, 1)
        local v4 = math.max(v5, 0)
      end
      setSampleLoopSynthesisRPM(v1.soundSample, v2, true)
    end
    if v3 ~= nil then
      setSampleLoopSynthesisLoadFactor(v1.soundSample, v3)
    end
  end
end
function SoundManager:setSamplesLoopSynthesisParameters(samples, rpm, loadFactor)
  for v7, v8 in pairs(samples) do
    self:setSampleLoopSynthesisParameters(v8, rpm, loadFactor)
  end
end
function SoundManager.setCurrentSampleAttributes(v0, v1, v2)
  if v2 then
    v1.current = v1.indoorAttributes
    v1.randomizations = v1.randomizationsIn
    return
  end
  v1.current = v1.outdoorAttributes
  v1.randomizations = v1.randomizationsOut
end
function SoundManager:getCurrentSampleVolume(sample)
  local v8 = self:getCurrentRandomizationValue(sample, "volume")
  local v7 = self:getCurrentFadeFactor(sample)
  return math.max((sample.current.volume + v8) * v7 * sample.volumeScale + sample.offsets.volume, 0)
end
function SoundManager:getCurrentSamplePitch(sample)
  local v6 = self:getCurrentRandomizationValue(sample, "pitch")
  return (sample.current.pitch + v6) * sample.pitchScale + sample.offsets.pitch
end
function SoundManager:getCurrentSampleLowpassGain(sample)
  local v6 = self:getCurrentRandomizationValue(sample, "lowpassGain")
  return (sample.current.lowpassGain + v6) * sample.lowpassGainScale + sample.offsets.lowpassGain
end
function SoundManager.getCurrentRandomizationValue(v0, v1, v2)
  if v1.randomizations ~= nil and v1.randomizations[v2] ~= nil then
    return v1.randomizations[v2]
  end
  return 0
end
function SoundManager.getCurrentFadeFactor(v0, v1)
  if v1.fadeIn ~= 0 then
  end
  return v2
end
function SoundManager:setIsIndoor(isIndoor)
  if self.isIndoor ~= isIndoor then
    self.isIndoor = isIndoor
    -- TODO: structure LOP_FORNPREP (pc 11, target 25)
    local v6 = self:getIsSamplePlaying(self.activeSamples[1])
    if v6 then
      self:updateSampleAttributes(self.activeSamples[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 24, target 12)
    for v5, v6 in ipairs(self.indoorStateChangedListeners) do
      v6:onIndoorStateChanged(isIndoor)
    end
  end
end
function SoundManager:addIndoorStateChangedListener(target)
  table.addElement(self.indoorStateChangedListeners, target)
end
function SoundManager:removeIndoorStateChangedListener(target)
  table.removeElement(self.indoorStateChangedListeners, target)
end
function SoundManager:getIsIndoor()
  return self.isIndoor
end
function SoundManager:setIsInsideBuilding(isInsideBuilding)
  if self.isInsideBuilding ~= isInsideBuilding then
    self.isInsideBuilding = isInsideBuilding
  end
end
function SoundManager:getIsInsideBuilding()
  return self.isInsideBuilding
end
function SoundManager.getModifierFactor(v0, v1, v2)
  if v1.modifiers ~= nil and v1.modifiers[v2] ~= nil and v1.modifiers[v2].currentValue ~= nil then
    return v1.modifiers[v2].currentValue
  end
  return 1
end
function SoundManager:consoleCommandToggleDebug()
  SoundManager.GLOBAL_DEBUG_ENABLED = not SoundManager.GLOBAL_DEBUG_ENABLED
  if SoundManager.GLOBAL_DEBUG_ENABLED then
    for v4, v5 in pairs(self.orderedSamples) do
      if not (v5.linkNode ~= nil) then
        continue
      end
      self.debugSamples[v5] = true
    end
  else
    table.clear(self.debugSamples)
    for v4, v5 in pairs(self.debugSamplesFlagged) do
      self.debugSamples[v5] = true
    end
  end
  v1 = string.format("SoundManager.GLOBAL_DEBUG_ENABLED=%s", SoundManager.GLOBAL_DEBUG_ENABLED)
  return v1
end
function SoundManager:registerModifierXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".modifier(?)#type", "Modifier type")
  self:register(XMLValueType.FLOAT, v1 .. ".modifier(?)#value", "Source value of modifier type")
  self:register(XMLValueType.FLOAT, v1 .. ".modifier(?)#modifiedValue", "Change that is applied on sample value")
end
function SoundManager:registerSampleXMLPaths(v1, v2)
  self:setSubSchemaIdentifier("sounds")
  if v2 == nil then
    Logging.error("Failed to register sound sample xml paths! No sound name given.")
    printCallstack()
  end
  self:setXMLSharedRegistration("SoundManager_sound", v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "." .. v2 .. "#linkNode", "Link node for 3d sound")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "." .. v2 .. "#linkNodeOffset", "Sound source will be offset by this value to the link node")
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#template", "Sound template name")
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#parent", "Parent sample for heredity")
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. "#file", "Path to sound sample")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#outerRadius", "Outer radius", 5)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#innerRadius", "Inner radius", 80)
  self:register(XMLValueType.INT, v1 .. "." .. v2 .. "#loops", "Number of loops (0 = infinite)", 1)
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#supportsReverb", "Flag to disable reverb", true)
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#isLocalSound", "While set for vehicle sounds it will only play for the player currently using the vehicle", false)
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. "#debug", "Flag to enable debug rendering", false)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#fadeIn", "Fade in time in seconds", 0)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#fadeOut", "Fade out time in seconds", 0)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".volume#indoor", "Indoor volume", 0.8)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".pitch#indoor", "Indoor pitch", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassGain#indoor", "Indoor lowpass gain", 0.8)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassCutoffFrequency#indoor", "Indoor lowpass cutoff frequency", 5000)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassResonance#indoor", "Indoor lowpass resonance", 2)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassCutoffFrequency#outdoor", "Outdoor lowpass cutoff frequency", 5000)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassResonance#outdoor", "Outdoor lowpass resonance", 2)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".volume#outdoor", "Outdoor volume", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".pitch#outdoor", "Outdoor pitch", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".lowpassGain#outdoor", "Outdoor lowpass gain", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#volumeScale", "Additional scale that is applied on the volume attributes", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#pitchScale", "Additional pitch that is applied on the volume attributes", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#lowpassGainScale", "Additional lowpass gain that is applied on the volume attributes", 1)
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. "#loopSynthesisRPMRatio", "Ratio between rpm in the gls file and actual rpm of the motor (e.g. 0.9: max. rpm in the gls file will be reached at 90% of motor rpm)", 1)
  SoundManager.registerModifierXMLPaths(self, v1 .. "." .. v2 .. ".volume")
  SoundManager.registerModifierXMLPaths(self, v1 .. "." .. v2 .. ".pitch")
  SoundManager.registerModifierXMLPaths(self, v1 .. "." .. v2 .. ".lowpassGain")
  SoundManager.registerModifierXMLPaths(self, v1 .. "." .. v2 .. ".loopSynthesisRpm")
  SoundManager.registerModifierXMLPaths(self, v1 .. "." .. v2 .. ".loopSynthesisLoad")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#minVolume", "Min volume")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#maxVolume", "Max volume")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#minPitch", "Max pitch")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#maxPitch", "Max pitch")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#minLowpassGain", "Max lowpass gain")
  self:register(XMLValueType.FLOAT, v1 .. "." .. v2 .. ".randomization(?)#maxLowpassGain", "Max lowpass gain")
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. ".randomization(?)#isInside", "Randomization is applied inside", true)
  self:register(XMLValueType.BOOL, v1 .. "." .. v2 .. ".randomization(?)#isOutside", "Randomization is applied outside", true)
  self:register(XMLValueType.STRING, v1 .. "." .. v2 .. ".sourceRandomization(?)#file", "Path to sound sample")
  self:setXMLSharedRegistration()
  self:setSubSchemaIdentifier()
end
local v1 = SoundManager.new()
g_soundManager = v1
