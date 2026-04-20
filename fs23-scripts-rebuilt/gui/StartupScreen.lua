-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StartupScreen = {EVENTTYPE_VIDEO = 1, EVENTTYPE_PICTURE = 2}
local StartupScreen_mt = Class(StartupScreen, ScreenElement)
function StartupScreen.register()
  local v0 = StartupScreen.new()
  v1:loadGui("dataS/gui/StartupScreen.xml", "StartupScreen", v0)
  return v0
end
function StartupScreen.new(target)
  return FrameElement.new(target, u0)
end
function StartupScreen:onClose()
  v1:disposeVideo()
  v1:setImageFilename(nil)
  self.pictureTimer = nil
  self.eventList = nil
  self.currentEventId = nil
  v1:setGameState(GameState.MENU_MAIN)
end
function StartupScreen:onOpen()
  self.eventList = {}
  local v1 = StartParams.getIsSet("skipStartVideos")
  if not v1 then
    if Platform.showVideoGIANTS then
      self:addStartupVideo("de en cz pl fr es jp ru hu it cs ct nl pt br tr ro kr ea da fi no sv fc", "dataS/videos/GIANTSLogo.ogv", 1, false, {1, 0.5625})
    end
    if Platform.showVideoFS then
      self:addStartupVideo("de en cz pl fr es jp ru hu it cs ct nl pt br tr ro kr ea da fi no sv fc", "dataS/videos/FS22Teaser.ogv", 0.25, false, {1, 0.5625})
    end
  end
  self.currentEventId = 0
  self:showNextEvent()
end
function StartupScreen:addStartupVideo(languagesString, filename, volume, isFullscreen, size)
  local v6 = self:shouldAddEvent(languagesString)
  if v6 then
    table.insert(self.eventList, {filename = filename, volume = volume, fullscreen = isFullscreen, size = size, eventType = StartupScreen.EVENTTYPE_VIDEO})
  end
end
function StartupScreen:addStartupPicture(languagesString, filename, duration)
  local v4 = self:shouldAddEvent(languagesString)
  if v4 then
    table.insert(self.eventList, {filename = filename, duration = duration, eventType = StartupScreen.EVENTTYPE_PICTURE})
  end
end
function StartupScreen.shouldAddEvent(v0, v1)
  if not Platform.isConsole then
    -- if v1 then goto L6 end
  end
  return true
  local v3 = v1:split(" ")
  local v2 = table.toSet(...)
  if v2[g_languageShort] == nil then
  end
  return true
end
function StartupScreen:onVideoElementCreated(videoElement)
  self.videoElement = videoElement
  function self.videoElement.mouseEvent()
  end
  function self.videoElement.keyEvent()
  end
  function self.videoElement.inputEvent()
  end
  self.videoElementCallback = videoElement.onEndVideoCallback
  v2:setVisible(false)
end
function StartupScreen:onPictureElementCreated(pictureElement)
  self.pictureElement = pictureElement
  v2:setVisible(false)
end
function StartupScreen:showNextEvent()
  self.currentEventId = self.currentEventId + 1
  if not self.eventList[self.currentEventId] then
    return self:onStartupEnd()
  end
  if v1.eventType == StartupScreen.EVENTTYPE_VIDEO then
    v2:setVisible(true)
    self.videoElement.onEndVideoCallback = self.videoElementCallback
    v2:setVisible(false)
    self:playVideo(v1)
    return
  end
  v2:setVisible(true)
  v2:setVisible(false)
  self.videoElement.onEndVideoCallback = nil
  self:showPicture(v1)
end
function StartupScreen:playVideo(videoEvent)
  v2:changeVideo(videoEvent.filename, videoEvent.volume)
  if videoEvent.fullscreen then
  else
    local v7 = getScreenMode()
    local v6, v7 = getScreenModeInfo(...)
  end
  v6:setSize(v2, v3)
  v6:setPosition(v4, v5)
  v6:playVideo()
  return true
end
function StartupScreen:showPicture(pictureEvent)
  v2:setImageFilename(pictureEvent.filename)
  local v2 = addTimer(pictureEvent.duration, "onStartupEndEvent", self)
  self.pictureTimer = v2
end
function StartupScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = isGameFullyInstalled()
  if not v2 then
    return
  end
  local v6 = getNumOfGamepads()
  -- TODO: structure LOP_FORNPREP (pc 22, target 43)
  for v8 = 1, Input.MAX_NUM_BUTTONS do
    local v10 = getInputButton(v8 - 1, v5 - 1)
    if 0 >= v10 then
    end
    if true then
    else
      -- TODO: structure LOP_FORNLOOP (pc 41, target 28)
    end
  end
  if not v2 then
    self.handledButtonPress = false
  end
  if not self.handledButtonPress and v2 then
    self.handledButtonPress = true
    self:cancelCurrentEvent()
  end
end
function StartupScreen:mouseEvent(posX, posY, isDown, isUp, button)
  if isDown then
    self:cancelCurrentEvent()
  end
end
function StartupScreen:keyEvent(unicode, sym, modifier, isDown)
  if isDown then
    self:cancelCurrentEvent()
  end
end
function StartupScreen:cancelCurrentEvent()
  if self.eventList[self.currentEventId].eventType == StartupScreen.EVENTTYPE_VIDEO then
    v2:stopVideo()
  else
    removeTimer(self.pictureTimer)
  end
  self:onStartupEndEvent()
end
function StartupScreen:onStartupEndEvent()
  self.pictureTimer = nil
  self:showNextEvent()
end
function StartupScreen.onStartupEnd(v0)
  if Platform.needsSignIn then
    v1:showGui("GamepadSigninScreen")
    return
  end
  v1:showGui("MainScreen")
end
function StartupScreen.exposeControlsAsFields(v0)
end
