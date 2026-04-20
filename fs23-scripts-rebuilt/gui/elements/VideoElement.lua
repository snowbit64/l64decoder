-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VideoElement = {}
local VideoElement_mt = Class(VideoElement, GuiElement)
function VideoElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.videoFilename = nil
  v2.allowStop = true
  v2.isLooping = false
  v2.volume = 1
  return v2
end
function VideoElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#videoFilename")
  local v3 = Utils.getNoNil(v4, self.videoFilename)
  self.videoFilename = v3
  v4 = getXMLFloat(xmlFile, key .. "#volume")
  v3 = Utils.getNoNil(v4, self.volume)
  self.volume = v3
  v4 = getXMLBool(xmlFile, key .. "#allowStop")
  v3 = Utils.getNoNil(v4, self.allowStop)
  self.allowStop = v3
  v4 = getXMLBool(xmlFile, key .. "#isLooping")
  v3 = Utils.getNoNil(v4, self.isLooping)
  self.isLooping = v3
  self:addCallback(xmlFile, key .. "#onEndVideo", "onEndVideoCallback")
  self:changeVideo(self.videoFilename)
end
function VideoElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getValue("videoFilename", self.videoFilename)
  self.videoFilename = v3
  v3 = profile:getNumber("volume", self.volume)
  self.volume = v3
  v3 = profile:getBool("allowStop", self.allowStop)
  self.allowStop = v3
  v3 = profile:getBool("isLooping", self.isLooping)
  self.isLooping = v3
end
function VideoElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self:changeVideo(src.videoFilename)
  self.volume = src.volume
  self.allowStop = src.allowStop
  self.isLooping = src.isLooping
  self.onEndVideoCallback = src.onEndVideoCallback
end
function VideoElement:delete()
  self:disposeVideo()
  local v2 = v2:superClass()
  v2.delete(self)
end
function VideoElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    if v7 then
    end
    if not eventUsed and self.allowStop then
      if isDown and self.overlay ~= nil then
        self:disposeVideo()
        self:onEndVideo()
      end
      return true
    end
  end
  return eventUsed
end
function VideoElement:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  local v6 = self:getIsActive()
  if v6 then
    local v7 = v7:superClass()
    v7.keyEvent(self, unicode, sym, modifier, isDown, eventUsed)
    if isDown and self.overlay ~= nil then
      self:disposeVideo()
      self:onEndVideo()
    end
    return true
  end
  return eventUsed
end
function VideoElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.overlay ~= nil then
    local v2 = isVideoOverlayPlaying(self.overlay)
    if v2 then
      updateVideoOverlay(self.overlay)
      return
    end
  end
  if self.overlay ~= nil then
    self:disposeVideo()
    self:onEndVideo()
  end
end
function VideoElement:draw(clipX1, clipY1, clipX2, clipY2)
  if self.overlay ~= nil then
    local v5 = isVideoOverlayPlaying(self.overlay)
    if v5 then
      renderOverlay(self.overlay, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2])
    end
  end
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function VideoElement:onEndVideo()
  if self.onEndVideoCallback ~= nil then
    if self.target ~= nil then
      self.onEndVideoCallback(self.target)
      return
    end
    self.onEndVideoCallback()
  end
end
function VideoElement:disposeVideo()
  if self.overlay ~= nil then
    self:stopVideo()
    delete(self.overlay)
    self.overlay = nil
  end
end
function VideoElement:getIsActive()
  return self:getIsVisible()
end
function VideoElement:playVideo()
  if self.overlay ~= nil then
    playVideoOverlay(self.overlay)
  end
end
function VideoElement:stopVideo()
  if self.overlay ~= nil then
    local v1 = isVideoOverlayPlaying(self.overlay)
    if v1 then
      stopVideoOverlay(self.overlay)
    end
  end
end
function VideoElement:changeVideo(v1, v2)
  self:disposeVideo()
  self.videoFilename = v1
  if self.videoFilename ~= nil then
    local v3 = string.gsub(self.videoFilename, "$l10nSuffix", g_languageSuffix)
    if not v2 then
    end
    local v4 = v4(v5, v6, v7)
    self.overlay = v4
  end
end
