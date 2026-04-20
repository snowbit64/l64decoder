-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoundMixer = {}
local SoundMixer_mt = Class(SoundMixer)
function SoundMixer.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v2:subscribe(MessageType.GAME_STATE_CHANGED, v1.onGameStateChanged, v1)
  v1.masterVolume = 1
  v1.gameStates = {}
  v1.volumes = {}
  v1.volumeFactors = {}
  v1.volumeChangedListeners = {}
  for v5, v6 in pairs(AudioGroup.groups) do
    v1.volumeFactors[v6] = 1
    v1.volumeChangedListeners[v6] = {}
  end
  addConsoleCommand("gsSoundMixerDebug", "Toggle sound mixer debug mode", "consoleCommandToggleDebug", v1)
  return v1
end
function SoundMixer:loadFromXML(xmlFilepath)
  for v5, v6 in pairs(AudioGroup.groups) do
    self.volumeFactors[v6] = self.volumeFactors[v6] or 1
    if not self.volumeChangedListeners[v6] then
    end
    v7[v6] = v8
  end
  v2 = loadXMLFile("soundMixerXML", xmlFilepath)
  if v2 ~= nil and v2 ~= 0 then
    while true do
      v4 = string.format("soundMixer.gameState(%d)", v3)
      v5 = hasXMLProperty(v2, v4)
      if not v5 then
        break
      end
      v5 = getXMLString(v2, v4 .. "#name")
      v6 = v6:getGameStateIndexByName(v5)
      if v6 ~= nil then
        while true do
          v9 = string.format("%s.audioGroup(%d)", v4, v8)
          v10 = hasXMLProperty(v2, v9)
          if not v10 then
            break
          end
          v10 = getXMLString(v2, v9 .. "#name")
          v12 = getXMLFloat(v2, v9 .. "#volume")
          v14 = getXMLFloat(v2, v9 .. "#fadeOutDuration")
          v15 = getXMLFloat(v2, v9 .. "#fadeOutDuration")
          v14 = AudioGroup.getAudioGroupIndexByName(v10)
          if v14 ~= nil then
            v7[v14] = {volume = v12 or 1, fadeInDuration = (v14 or 0.5) * 1000, fadeOutDuration = (v15 or 0.5) * 1000}
          else
            Logging.xmlWarning(v2, "Audio-Group '%s' in game state '%s' (%s) is not defined!", v10, v5, v4)
          end
        end
        self.gameStates[v6] = v7
      else
        Logging.xmlWarning(v2, "Game-State '%s' is not defined for state '%s'!", v5, v4)
      end
    end
    delete(v2)
  end
  v3 = v3:getGameState()
  if not self.gameStates[v3] then
  end
  for v8, v9 in ipairs(AudioGroup.groups) do
    if v4 then
    end
    if v10 then
      -- if v10.volume then goto L178 end
    end
    self.volumes[v9] = 1
    setAudioGroupVolume(v9, 1)
  end
end
function SoundMixer.delete(v0)
  v1:unsubscribeAll(v0)
  removeConsoleCommand("gsSoundMixerDebug")
end
function SoundMixer:update(dt)
  if self.isDirty then
    local v2 = v2:getGameState()
    if self.gameStates[v2] ~= nil then
      for v8, v9 in pairs(self.gameStates[v2]) do
        if not (self.volumes[v8] ~= v9.volume * self.volumeFactors[v8]) then
          continue
        end
        if v9.volume * self.volumeFactors[v8] < self.volumes[v8] then
        end
        if 0 < v14 then
        end
        local v16 = v13(v10 + v12 * v15, v11)
        setAudioGroupVolume(v8, v16)
        self.volumes[v8] = v16
        for v19, v20 in ipairs(self.volumeChangedListeners[v8]) do
          v20.func(v20.target, v8, v10)
        end
      end
      if v4 then
        self.isDirty = false
      end
    end
  end
end
function SoundMixer:draw()
  local v1 = v1:getGameState()
  for v6, v7 in pairs(GameState) do
    if not (v7 == v1) then
      continue
    end
    break
  end
  v7 = string.format("current GameState: %s (%d)", v2, v1 or -1)
  renderText(...)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  renderText(0.83, 0.7 - 1 * 0.015, 0.015, "AudioGroup")
  setTextAlignment(RenderText.ALIGN_LEFT)
  renderText(0.85, 0.7 - 1 * 0.015, 0.015, "curVol")
  renderText(0.9, 0.7 - 1 * 0.015, 0.015, "targetVol")
  renderText(0.95, 0.7 - 1 * 0.015, 0.015, "volFactor")
  for v8, v9 in pairs(self.gameStates[v1]) do
    setTextAlignment(RenderText.ALIGN_RIGHT)
    local v18 = AudioGroup.getAudioGroupNameByIndex(v8)
    local v16 = string.format("%s (%d)", v18, v8)
    renderText(...)
    setTextAlignment(RenderText.ALIGN_LEFT)
    v16 = string.format("%.2f", self.volumes[v8])
    renderText(...)
    v16 = string.format("%.2f", v9.volume * self.volumeFactors[v8])
    renderText(...)
    v16 = string.format("%.2f", self.volumeFactors[v8])
    renderText(...)
  end
end
function SoundMixer:setAudioGroupVolumeFactor(audioGroupIndex, factor)
  if audioGroupIndex ~= nil and self.volumeFactors[audioGroupIndex] ~= nil then
    self.volumeFactors[audioGroupIndex] = factor
    self.isDirty = true
  end
end
function SoundMixer:setMasterVolume(masterVolume)
  self.masterVolume = masterVolume
  setMasterVolume(masterVolume)
end
function SoundMixer:onGameStateChanged(gameStateId, oldGameState)
  if self.gameStates[gameStateId] ~= nil then
    self.isDirty = true
  end
end
function SoundMixer:addVolumeChangedListener(audioGroupIndex, func, target)
  if self.volumeChangedListeners[audioGroupIndex] == nil then
    self.volumeChangedListeners[audioGroupIndex] = {}
  end
  table.addElement(self.volumeChangedListeners[audioGroupIndex], {func = func, target = target})
end
function SoundMixer:consoleCommandToggleDebug()
  if g_currentMission ~= nil then
    if not self.debugEnabled then
      v1:addDrawable(self)
      self.debugEnabled = true
    else
      v1:removeDrawable(self)
      self.debugEnabled = false
    end
  end
  return string.format("SoundMixer debugEnabled = %s", self.debugEnabled)
end
