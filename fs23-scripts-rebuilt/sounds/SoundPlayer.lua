-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoundPlayer = {}
local SoundPlayer_mt = Class(SoundPlayer)
function SoundPlayer.new(appBasePath, webDataXMLFile, localDataXMLFilename, localFolder, userLocalFolder, languageShort, soundGroup)
  setmetatable({}, u0)
  local v8 = createSoundPlayer("SoundPlayer", appBasePath, webDataXMLFile, localDataXMLFilename, localFolder, userLocalFolder, languageShort, soundGroup)
  if {soundPlayerId = v8}.soundPlayerId ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000006 -> L34
  end
  print("Could not create sound player")
  return nil
  v7.channelNameReplacements = {}
  v7.channelIcons = {}
  v7:loadReplacements({localFolder, userLocalFolder})
  v7.currentChannel = 0
  v7.currentItem = 0
  v7.initialized = false
  v7.currentChannelName = ""
  v7.currentItemName = ""
  v7.updateTimer = 0
  v7.switchInNextFrame = false
  v7.channelItemMapping = {}
  v7.eventListener = {}
  v7.streamingAccessOwner = nil
  return v7
end
function SoundPlayer:delete()
  self.channelNameReplacements = {}
  self.channelIcons = {}
  if self.soundPlayerId ~= nil then
    delete(self.soundPlayerId)
  end
end
function SoundPlayer:update(dt)
  local v2 = isSoundPlayerLoaded(self.soundPlayerId)
  if v2 and self.isPlaying then
    v2 = isSoundPlayerPlaying(self.soundPlayerId)
    if v2 then
      self.updateTimer = self.updateTimer + dt
      if 500 < self.updateTimer then
        v2 = self:getChannelName()
        local itemName = self:getItemName()
        if v2 ~= nil and itemName ~= nil then
          if v2 == self.currentChannelName then
            -- if v3 == v0.currentItemName then goto L60 end
          end
          local v4 = getIsSoundPlayerChannelStreamed(self.soundPlayerId, self.currentChannel)
          self:onChange(v2, itemName, v4)
          self.currentChannelName = v2
          self.currentItemName = itemName
        end
        self.updateTimer = 0
      end
      self.switchInNextFrame = false
      return
    end
    v2 = getIsSoundPlayerChannelStreamed(self.soundPlayerId, self.currentChannel)
    if not v2 then
      if self.switchInNextFrame then
        self:nextItem()
        self.switchInNextFrame = false
        return
      end
      self.switchInNextFrame = true
    end
  end
end
function SoundPlayer.loadReplacements(v0, v1)
  for v5, v6 in ipairs(v1) do
    local v8 = fileExists(v6 .. "/music.xml")
    if not v8 then
      continue
    end
    v8 = XMLFile.load("music", v6 .. "/music.xml")
    v8:iterate("music.radio.channels.channel", function(v0, v1)
      local v2 = v2:getString(v1 .. "#name")
      local v3 = v3:getString(v1 .. "#replacement")
      local v5 = v5:getString(v1 .. "#icon")
      local v4 = Utils.getFilename(...)
      if v2 ~= nil and v3 ~= nil then
        local v6 = v2:lower()
        u1.channelNameReplacements[v6] = v3
        if v4 ~= nil then
          v6 = v2:lower()
          u1.channelIcons[v6] = v4
        end
      end
    end)
    v8:delete()
  end
end
function SoundPlayer:onChange(channelName, itemName, isOnlineStream)
  local name = channelName:lower()
  for v8, v9 in ipairs(self.eventListener) do
    v9:onSoundPlayerChange(channelName, itemName, isOnlineStream, self.channelIcons[name])
  end
end
function SoundPlayer:addEventListener(listener)
  if listener ~= nil then
    table.addElement(self.eventListener, listener)
  end
end
function SoundPlayer:removeEventListener(listener)
  if listener ~= nil then
    table.removeElement(self.eventListener, listener)
  end
end
function SoundPlayer:setStreamingAccessOwner(owner)
  self.streamingAccessOwner = owner
end
function SoundPlayer:updateMetaData()
  local channelName = getSoundPlayerChannelName(self.soundPlayerId, self.currentChannel)
  local itemName = getSoundPlayerItemName(self.soundPlayerId)
  self.currentChannelName = channelName
  self.currentItemName = itemName
  local isOnlineStream = getIsSoundPlayerChannelStreamed(self.soundPlayerId, self.currentChannel)
  self:onChange(channelName, itemName, isOnlineStream)
end
function SoundPlayer:previousChannel()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self.currentChannel = self.currentChannel - 1
    if self.currentChannel < 0 then
      local v3 = getNumSoundPlayerChannels(self.soundPlayerId)
      self.currentChannel = v3 - 1
    end
    if v1 ~= self.currentChannel then
      self:changeChannel(v1)
      return true
    end
  end
  return false
end
function SoundPlayer:nextChannel()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self.currentChannel = self.currentChannel + 1
    local v3 = getNumSoundPlayerChannels(self.soundPlayerId)
    if v3 <= self.currentChannel then
      self.currentChannel = 0
    end
    if v1 ~= self.currentChannel then
      self:changeChannel(v1)
      return true
    end
  end
  return false
end
function SoundPlayer:startChannel()
  local v1 = Utils.getNoNil(self.channelItemMapping[self.currentChannel], 0)
  self.currentItem = v1
  setSoundPlayerChannel(self.soundPlayerId, self.currentChannel)
  setSoundPlayerItem(self.soundPlayerId, self.currentItem)
  self:play()
  self:updateMetaData()
end
function SoundPlayer:changeChannel(lastChannel)
  if self.streamingAccessOwner ~= nil then
    local v2 = getIsSoundPlayerChannelStreamed(self.soundPlayerId, self.currentChannel)
    -- if v2 then goto L16 end
  end
  self:startChannel()
  return
  v2 = getIsSoundPlayerChannelStreamed(self.soundPlayerId, lastChannel)
  if v2 then
    self:pause()
  end
  v2:onSoundPlayerStreamAccess()
end
function SoundPlayer:setStreamAccessAllowed(yes)
  if not yes then
    while true do
      v2 = getIsSoundPlayerChannelStreamed(self.soundPlayerId, self.currentChannel)
      if not v2 then
        break
      end
      self.currentChannel = self.currentChannel + 1
      v3 = getNumSoundPlayerChannels(self.soundPlayerId)
      if not (v3 <= self.currentChannel) then
        continue
      end
      self.currentChannel = 0
    end
  end
  self:startChannel()
end
function SoundPlayer:nextItem()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self.currentItem = self.currentItem + 1
    local v3 = getNumSoundPlayerItems(self.soundPlayerId)
    if v3 <= self.currentItem then
      self.currentItem = 0
    end
    if v1 == self.currentItem then
      local v2 = getNumSoundPlayerItems(self.soundPlayerId)
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000004 -> L58
    end
    setSoundPlayerItem(self.soundPlayerId, self.currentItem)
    self.channelItemMapping[self.currentChannel] = self.currentItem
    self:play()
    self:updateMetaData()
    return true
  end
  return false
end
function SoundPlayer:previousItem()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self.currentItem = self.currentItem - 1
    if self.currentItem < 0 then
      local v3 = getNumSoundPlayerItems(self.soundPlayerId)
      self.currentItem = v3 - 1
    end
    if v1 == self.currentItem then
      local v2 = getNumSoundPlayerItems(self.soundPlayerId)
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000004 -> L59
    end
    setSoundPlayerItem(self.soundPlayerId, self.currentItem)
    self.channelItemMapping[self.currentChannel] = self.currentItem
    self:play()
    self:updateMetaData()
    return true
  end
  return false
end
function SoundPlayer:play()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self:initializeSoundPlayer()
    playSoundPlayer(self.soundPlayerId)
    self:updateMetaData()
    self.isPlaying = true
    return true
  end
  return false
end
function SoundPlayer:pause()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    self.isPlaying = false
    self.switchInNextFrame = false
    self.currentChannelName = ""
    self.currentItemName = ""
    v1 = isSoundPlayerPlaying(self.soundPlayerId)
    if v1 then
      pauseSoundPlayer(self.soundPlayerId)
      return true
    end
  end
  return false
end
function SoundPlayer:getIsPlaying()
  return self.isPlaying
end
function SoundPlayer:getChannelName()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    v1 = getSoundPlayerChannelName(self.soundPlayerId, self.currentChannel)
    return v1
  end
  return nil
end
function SoundPlayer:getItemName()
  local v1 = isSoundPlayerLoaded(self.soundPlayerId)
  if v1 then
    v1 = getSoundPlayerItemName(self.soundPlayerId, self.currentItem)
    return v1
  end
  return nil
end
function SoundPlayer:initializeSoundPlayer()
  if not self.initialized then
    local v1 = isSoundPlayerLoaded(self.soundPlayerId)
    if v1 then
      -- TODO: structure LOP_FORNPREP (pc 12, target 42)
      setSoundPlayerChannel(self.soundPlayerId, 0)
      local v5 = getNumSoundPlayerItems(self.soundPlayerId)
      if 0 <= v5 - 1 then
        local v6 = math.random(0, v5 - 1)
        self.channelItemMapping[0] = v6
      else
        self.channelItemMapping[0] = 0
      end
      -- TODO: structure LOP_FORNLOOP (pc 41, target 13)
      v1 = math.random(0, 3)
      self.currentChannel = v1
      setSoundPlayerChannel(self.soundPlayerId, self.currentChannel)
      self.currentItem = self.channelItemMapping[self.currentChannel]
      setSoundPlayerItem(self.soundPlayerId, self.currentItem)
      self.initialized = true
    end
  end
end
