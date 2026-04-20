-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiElement = {}
local GuiElement_mt = Class(GuiElement)
GuiElement.SCREEN_ALIGN_LEFT = 1
GuiElement.SCREEN_ALIGN_CENTER = 2
GuiElement.SCREEN_ALIGN_RIGHT = 4
GuiElement.SCREEN_ALIGN_BOTTOM = 8
GuiElement.SCREEN_ALIGN_MIDDLE = 16
GuiElement.SCREEN_ALIGN_TOP = 32
GuiElement.SCREEN_ALIGN_XNONE = 64
GuiElement.SCREEN_ALIGN_YNONE = 128
GuiElement.ORIGIN_LEFT = 1
GuiElement.ORIGIN_CENTER = 2
GuiElement.ORIGIN_RIGHT = 4
GuiElement.ORIGIN_BOTTOM = 8
GuiElement.ORIGIN_MIDDLE = 16
GuiElement.ORIGIN_TOP = 32
GuiElement.MARGIN_LEFT = 1
GuiElement.MARGIN_TOP = 2
GuiElement.MARGIN_RIGHT = 3
GuiElement.MARGIN_BOTTOM = 4
GuiElement.FRAME_LEFT = 1
GuiElement.FRAME_TOP = 2
GuiElement.FRAME_RIGHT = 3
GuiElement.FRAME_BOTTOM = 4
local v2 = createImageOverlay("data/shared/graph_pixel.png")
GuiElement.debugOverlay = v2
function GuiElement:new(v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:include(GuiMixin)
  v2.elements = {}
  v2.target = self
  if self ~= nil then
    v2.targetName = self.name
  end
  v2.profile = ""
  v2.name = nil
  v2.screenAlign = 0
  v2.screenAlignStr = nil
  v2.positionOrigin = 0
  v2.positionOriginStr = nil
  v2.debugEnabled = false
  v2.position = {0, 0}
  v2.absPosition = {0, 0}
  v2.absSize = {1, 1}
  v2.size = {1 * g_aspectScaleX, 1 * g_aspectScaleY}
  v2.margin = {0, 0, 0, 0}
  v2.anchors = {0, 1, 0, 1}
  v2.borders = {0, 0, 1, 1}
  v2.parentBorders = {0, 0, 1, 1}
  v2.center = {0, 0}
  v2.outputSize = {g_referenceScreenWidth, g_referenceScreenHeight}
  v2.imageSize = {1024, 1024}
  v2.visible = true
  v2.disabled = false
  v2.thinLineProtection = true
  v2.disallowFlowCut = false
  v2.alpha = 1
  v2.fadeInTime = 0
  v2.fadeOutTime = 0
  v2.fadeDirection = 0
  v2.newLayer = false
  v2.toolTipText = nil
  v2.toolTipElementId = nil
  v2.toolTipElement = nil
  v2.layoutIgnore = false
  v2.focusFallthrough = false
  v2.clipping = false
  v2.hasFrame = false
  v2.frameThickness = {0, 0, 0, 0}
  {}[GuiElement.FRAME_LEFT] = {1, 1, 1, 1}
  {}[GuiElement.FRAME_TOP] = {1, 1, 1, 1}
  {}[GuiElement.FRAME_RIGHT] = {1, 1, 1, 1}
  {}[GuiElement.FRAME_BOTTOM] = {1, 1, 1, 1}
  v2.frameColors = {}
  v2.frameOverlayVisible = {true, true, true, true}
  v2.updateChildrenOverlayState = true
  v2.overlayState = GuiOverlay.STATE_NORMAL
  v2.previousOverlayState = nil
  v2.isSoundSuppressed = false
  v2.soundDisabled = false
  v2.handleFocus = true
  v2.focusChangeData = {}
  v2.focusId = nil
  v2.focusActive = false
  return v2
end
function GuiElement:loadFromXML(xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#profile")
  if v3 ~= nil then
    self.profile = v3
    local v4 = v4:getProfile(v3)
    self:loadProfile(v4)
  end
  self:setId(xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#onCreateArgs")
  self.onCreateArgs = v4
  self:addCallback(xmlFile, key .. "#onCreate", "onCreateCallback")
  self:addCallback(xmlFile, key .. "#onOpen", "onOpenCallback")
  self:addCallback(xmlFile, key .. "#onClose", "onCloseCallback")
  self:addCallback(xmlFile, key .. "#onDraw", "onDrawCallback")
  local v5 = getXMLString(xmlFile, key .. "#name")
  v4 = Utils.getNoNil(v5, self.name)
  self.name = v4
  v5 = getXMLString(xmlFile, key .. "#imageSize")
  v4 = GuiUtils.get2DArray(v5, self.imageSize)
  self.imageSize = v4
  v5 = getXMLString(xmlFile, key .. "#outputSize")
  v4 = GuiUtils.get2DArray(v5, self.outputSize)
  self.outputSize = v4
  v5 = getXMLString(xmlFile, key .. "#position")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.position)
  self.position = v4
  v5 = getXMLString(xmlFile, key .. "#size")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.size)
  self.size = v4
  v5 = getXMLString(xmlFile, key .. "#margin")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.margin)
  self.margin = v4
  v5 = getXMLString(xmlFile, key .. "#pivot")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.pivot)
  self.pivot = v4
  v5 = getXMLString(xmlFile, key .. "#anchors")
  v4 = GuiUtils.get4DArray(v5, self.anchors)
  self.anchors = v4
  v5 = getXMLBool(xmlFile, key .. "#thinLineProtection")
  v4 = Utils.getNoNil(v5, self.thinLineProtection)
  self.thinLineProtection = v4
  v5 = getXMLString(xmlFile, key .. "#positionOrigin")
  v4 = Utils.getNoNil(v5, self.positionOriginStr)
  self.positionOriginStr = v4
  v5 = getXMLString(xmlFile, key .. "#screenAlign")
  v4 = Utils.getNoNil(v5, self.screenAlignStr)
  self.screenAlignStr = v4
  v5 = getXMLBool(xmlFile, key .. "#visible")
  v4 = Utils.getNoNil(v5, self.visible)
  self.visible = v4
  v5 = getXMLBool(xmlFile, key .. "#disabled")
  v4 = Utils.getNoNil(v5, self.disabled)
  self.disabled = v4
  v5 = getXMLBool(xmlFile, key .. "#newLayer")
  v4 = Utils.getNoNil(v5, self.newLayer)
  self.newLayer = v4
  v5 = getXMLBool(xmlFile, key .. "#debugEnabled")
  v4 = Utils.getNoNil(v5, self.debugEnabled)
  self.debugEnabled = v4
  v5 = getXMLBool(xmlFile, key .. "#updateChildrenOverlayState")
  v4 = Utils.getNoNil(v5, self.updateChildrenOverlayState)
  self.updateChildrenOverlayState = v4
  v4 = getXMLString(xmlFile, key .. "#toolTipText")
  self.toolTipText = v4
  v4 = getXMLString(xmlFile, key .. "#toolTipElementId")
  self.toolTipElementId = v4
  v5 = getXMLBool(xmlFile, key .. "#layoutIgnore")
  v4 = Utils.getNoNil(v5, self.layoutIgnore)
  self.layoutIgnore = v4
  v5 = getXMLBool(xmlFile, key .. "#clipping")
  v4 = Utils.getNoNil(v5, self.clipping)
  self.clipping = v4
  v5 = getXMLBool(xmlFile, key .. "#handleFocus")
  v4 = Utils.getNoNil(v5, self.handleFocus)
  self.handleFocus = v4
  v5 = getXMLBool(xmlFile, key .. "#soundDisabled")
  v4 = Utils.getNoNil(v5, self.soundDisabled)
  self.soundDisabled = v4
  v5 = getXMLBool(xmlFile, key .. "#focusFallthrough")
  v4 = Utils.getNoNil(v5, self.focusFallthrough)
  self.focusFallthrough = v4
  v5 = getXMLBool(xmlFile, key .. "#disallowFlowCut")
  v4 = Utils.getNoNil(v5, self.disallowFlowCut)
  self.disallowFlowCut = v4
  v5 = getXMLBool(xmlFile, key .. "#hasFrame")
  v4 = Utils.getNoNil(v5, self.hasFrame)
  self.hasFrame = v4
  if self.hasFrame then
    v4 = getXMLString(xmlFile, key .. "#frameThickness")
    v5 = GuiUtils.getNormalizedValues(v4, self.outputSize)
    if not v5 then
    end
    self.frameThickness = v5
    v5 = getXMLString(xmlFile, key .. "#frameLeftColor")
    local v8 = GuiUtils.getColorArray(v5)
    if not v8 then
    end
    v6[v7] = v8
    local v6 = getXMLString(xmlFile, key .. "#frameTopColor")
    v8 = GuiUtils.getColorArray(v6)
    if not v8 then
    end
    v6[v7] = v8
    v6 = getXMLString(xmlFile, key .. "#frameRightColor")
    v8 = GuiUtils.getColorArray(v6)
    if not v8 then
    end
    v6[v7] = v8
    v6 = getXMLString(xmlFile, key .. "#frameBottomColor")
    v8 = GuiUtils.getColorArray(v6)
    if not v8 then
    end
    v6[v7] = v8
  end
  v4 = getXMLFloat(xmlFile, key .. "#fadeInTime")
  if v4 ~= nil then
    self.fadeInTime = v4 * 1000
  end
  v5 = getXMLFloat(xmlFile, key .. "#fadeOutTime")
  if v5 ~= nil then
    self.fadeOutTime = v5 * 1000
  end
  if self.toolTipText ~= nil then
    v6 = v6:sub(1, 6)
    if v6 == "$l10n_" then
      v8 = v8:sub(7)
      v6 = v6:getText(v8, self.customEnvironment)
      self.toolTipText = v6
    end
  end
  v6:loadElementFromXML(xmlFile, key, self)
  self:verifyConfiguration()
end
function GuiElement:loadProfile(profile, applyProfile)
  local v3 = profile:getValue("imageSize")
  if v3 ~= nil then
    local v4, v5 = v3:getVector()
    if v4 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L22
      self.imageSize = {v4, v5}
    else
      Logging.devWarning("Invalid imageSize format for profile '%s'", self.profile)
    end
  end
  v4 = profile:getValue("outputSize")
  if v4 ~= nil then
    local v5, v6 = v4:getVector()
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L50
      self.outputSize = {v5, v6}
    else
      Logging.devWarning("Invalid outputSize format for profile '%s'", self.profile)
    end
  end
  v5 = profile:getValue("position")
  v6 = GuiUtils.getNormalizedValues(v5, self.outputSize, self.position)
  self.position = v6
  local v7 = profile:getValue("size")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.size)
  self.size = v6
  v7 = profile:getValue("pivot")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.pivot)
  self.pivot = v6
  v7 = profile:getValue("margin")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.margin)
  self.margin = v6
  v6 = profile:getValue("anchors")
  if v6 ~= nil then
    v7 = GuiUtils.get4DArray(v6, self.anchors)
    self.anchors = v7
  end
  v7 = profile:getValue("name", self.name)
  self.name = v7
  v7 = profile:getValue("positionOrigin", self.positionOriginStr)
  self.positionOriginStr = v7
  v7 = profile:getValue("screenAlign", self.screenAlignStr)
  self.screenAlignStr = v7
  v7 = profile:getBool("visible", self.visible)
  self.visible = v7
  v7 = profile:getBool("disabled", self.disabled)
  self.disabled = v7
  v7 = profile:getBool("newLayer", self.newLayer)
  self.newLayer = v7
  v7 = profile:getBool("debugEnabled", self.debugEnabled)
  self.debugEnabled = v7
  v7 = profile:getBool("updateChildrenOverlayState", self.updateChildrenOverlayState)
  self.updateChildrenOverlayState = v7
  v7 = profile:getValue("toolTipText", self.toolTipText)
  self.toolTipText = v7
  v7 = profile:getBool("layoutIgnore", self.layoutIgnore)
  self.layoutIgnore = v7
  v7 = profile:getBool("thinLineProtection", self.thinLineProtection)
  self.thinLineProtection = v7
  v7 = profile:getBool("clipping", self.clipping)
  self.clipping = v7
  v7 = profile:getBool("focusFallthrough", self.focusFallthrough)
  self.focusFallthrough = v7
  v7 = profile:getBool("disallowFlowCut", self.disallowFlowCut)
  self.disallowFlowCut = v7
  v7 = profile:getBool("hasFrame", self.hasFrame)
  self.hasFrame = v7
  if self.hasFrame then
    local v8 = profile:getValue("frameThickness")
    v7 = GuiUtils.getNormalizedValues(v8, self.outputSize)
    if not v7 then
    end
    self.frameThickness = v7
    local v10 = profile:getValue("frameLeftColor")
    local v9 = GuiUtils.getColorArray(v10, self.frameColors[GuiElement.FRAME_LEFT])
    self.frameColors[GuiElement.FRAME_LEFT] = v9
    v10 = profile:getValue("frameTopColor")
    v9 = GuiUtils.getColorArray(v10, self.frameColors[GuiElement.FRAME_TOP])
    self.frameColors[GuiElement.FRAME_TOP] = v9
    v10 = profile:getValue("frameRightColor")
    v9 = GuiUtils.getColorArray(v10, self.frameColors[GuiElement.FRAME_RIGHT])
    self.frameColors[GuiElement.FRAME_RIGHT] = v9
    v10 = profile:getValue("frameBottomColor")
    v9 = GuiUtils.getColorArray(v10, self.frameColors[GuiElement.FRAME_BOTTOM])
    self.frameColors[GuiElement.FRAME_BOTTOM] = v9
  end
  v7 = profile:getBool("handleFocus", self.handleFocus)
  self.handleFocus = v7
  v7 = profile:getBool("soundDisabled", self.soundDisabled)
  self.soundDisabled = v7
  v7 = profile:getValue("fadeInTime")
  if v7 ~= nil then
    v8 = tonumber(v7)
    if v8 ~= nil then
      self.fadeInTime = v8 * 1000
    else
      Logging.devWarning("Invalid fadeInTime format for profile '%s'", self.profile)
    end
  end
  v8 = profile:getValue("fadeOutTime")
  if v8 ~= nil then
    v9 = tonumber(v8)
    if v9 ~= nil then
      self.fadeOutTime = v9 * 1000
    else
      Logging.devWarning("Invalid fadeOutTime format for profile '%s'", self.profile)
    end
  end
  if applyProfile then
    if v5 ~= nil then
    end
    self:applyElementAspectScale(true)
    self:fixThinLines()
    self:updateAbsolutePosition()
  end
end
function GuiElement:applyProfile(profileName, force)
  if profileName then
    local v3 = v3:getProfile(profileName)
    if v3 ~= nil then
      self.profile = profileName
      self:loadProfile(v3, not force)
    end
  end
end
function GuiElement:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 19)
  self.elements[#self.elements].parent = nil
  v4:delete()
  -- TODO: structure LOP_FORNLOOP (pc 18, target 6)
  if self.parent ~= nil then
    v1:removeElement(self)
  end
  v1:removeElement(self)
end
function GuiElement:clone(parent, includeId, suppressOnCreate)
  local ret = self.new()
  ret:copyAttributes(self)
  if parent ~= nil then
    parent:addElement(ret)
  end
  -- TODO: structure LOP_FORNPREP (pc 18, target 37)
  local v8 = v8:clone(ret, includeId, suppressOnCreate)
  if includeId then
    v8.id = self.elements[1].id
  end
  -- TODO: structure LOP_FORNLOOP (pc 36, target 19)
  if not suppressOnCreate then
    ret:raiseCallback("onCreateCallback", ret, ret.onCreateArgs)
  end
  return ret
end
function GuiElement:copyAttributes(src)
  self.visible = src.visible
  self.name = src.name
  self.typeName = src.typeName
  self.disabled = src.disabled
  self.positionOrigin = src.positionOrigin
  self.screenAlign = src.screenAlign
  self.newLayer = src.newLayer
  self.debugEnabled = src.debugEnabled
  local v2 = table.copy(src.size)
  self.size = v2
  v2 = table.copy(src.margin)
  self.margin = v2
  self.onCreateCallback = src.onCreateCallback
  self.onCreateArgs = src.onCreateArgs
  self.onCloseCallback = src.onCloseCallback
  self.onOpenCallback = src.onOpenCallback
  self.onDrawCallback = src.onDrawCallback
  self.target = src.target
  self.targetName = src.targetName
  self.profile = src.profile
  v2 = table.copy(src.outputSize)
  self.outputSize = v2
  v2 = table.copy(src.imageSize)
  self.imageSize = v2
  self.fadeInTime = src.fadeInTime
  self.fadeOutTime = src.fadeOutTime
  self.alpha = src.alpha
  self.fadeDirection = src.fadeDirection
  self.updateChildrenOverlayState = src.updateChildrenOverlayState
  self.toolTipElementId = src.toolTipElementId
  self.toolTipText = src.toolTipText
  self.handleFocus = src.handleFocus
  self.clipping = src.clipping
  self.focusFallthrough = src.focusFallthrough
  self.disallowFlowCut = src.disallowFlowCut
  self.ignoreLayout = src.ignoreLayout
  self.soundDisabled = src.soundDisabled
  self.hasFrame = src.hasFrame
  self.frameThickness = src.frameThickness
  v2 = table.copy(src.frameColors, math.huge)
  self.frameColors = v2
  v2 = table.copy(src.frameOverlayVisible)
  self.frameOverlayVisible = v2
  self.focusId = src.focusId
  v2 = table.copy(src.focusChangeData)
  self.focusChangeData = v2
  self.focusActive = src.focusActive
  self.isAlwaysFocusedOnOpen = src.isAlwaysFocusedOnOpen
  v2 = table.copy(src.position)
  self.position = v2
  v2 = table.copy(src.absPosition)
  self.absPosition = v2
  v2 = table.copy(src.absSize)
  self.absSize = v2
  v2 = table.copy(src.anchors)
  self.anchors = v2
  v2 = table.copy(src.pivot)
  self.pivot = v2
end
function GuiElement:onGuiSetupFinished()
  for v4, v5 in ipairs(self.elements) do
    v5:onGuiSetupFinished()
  end
  if self.toolTipElementId ~= nil then
    v1 = v1:getDescendantById(self.toolTipElementId)
    if v1 ~= nil then
      self.toolTipElement = v1
      return
    end
    Logging.warning("toolTipElementId '%s' not found for '%s'!", self.toolTipElementId, self.target.name)
  end
end
function GuiElement:toggleFrameSide(sideIndex, isVisible)
  if self.hasFrame then
    self.frameOverlayVisible[sideIndex] = isVisible
  end
end
function GuiElement:updateFramePosition()
  local v1, v2 = unpack(self.absPosition)
  local v3, v4 = unpack(self.absSize)
  local v7 = math.max(v3, 1 / g_screenWidth)
  v7 = math.max(v4, 1 / g_screenHeight)
  if self.frameBounds == nil then
    self.frameBounds = {{}, {}, {}, {}}
  end
  self.frameBounds[GuiElement.FRAME_LEFT].x = v1
  self.frameBounds[GuiElement.FRAME_LEFT].y = v2
  self.frameBounds[GuiElement.FRAME_LEFT].width = self.frameThickness[GuiElement.FRAME_LEFT]
  self.frameBounds[GuiElement.FRAME_LEFT].height = v4
  self.frameBounds[GuiElement.FRAME_TOP].x = v1
  self.frameBounds[GuiElement.FRAME_TOP].y = v2 + v4 - self.frameThickness[GuiElement.FRAME_TOP]
  self.frameBounds[GuiElement.FRAME_TOP].width = v3
  self.frameBounds[GuiElement.FRAME_TOP].height = self.frameThickness[GuiElement.FRAME_TOP]
  self.frameBounds[GuiElement.FRAME_RIGHT].x = v1 + v3 - self.frameThickness[GuiElement.FRAME_RIGHT]
  self.frameBounds[GuiElement.FRAME_RIGHT].y = v2
  self.frameBounds[GuiElement.FRAME_RIGHT].width = self.frameThickness[GuiElement.FRAME_RIGHT]
  self.frameBounds[GuiElement.FRAME_RIGHT].height = v4
  self.frameBounds[GuiElement.FRAME_BOTTOM].x = v1
  self.frameBounds[GuiElement.FRAME_BOTTOM].y = v2
  self.frameBounds[GuiElement.FRAME_BOTTOM].width = v3
  self.frameBounds[GuiElement.FRAME_BOTTOM].height = self.frameThickness[GuiElement.FRAME_BOTTOM]
  self:cutFrameBordersHorizontal(self.frameBounds[GuiElement.FRAME_LEFT], self.frameBounds[GuiElement.FRAME_TOP], true)
  self:cutFrameBordersHorizontal(self.frameBounds[GuiElement.FRAME_LEFT], self.frameBounds[GuiElement.FRAME_BOTTOM], true)
  self:cutFrameBordersHorizontal(self.frameBounds[GuiElement.FRAME_RIGHT], self.frameBounds[GuiElement.FRAME_TOP], false)
  self:cutFrameBordersHorizontal(self.frameBounds[GuiElement.FRAME_RIGHT], self.frameBounds[GuiElement.FRAME_BOTTOM], false)
  self:cutFrameBordersVertical(self.frameBounds[GuiElement.FRAME_BOTTOM], self.frameBounds[GuiElement.FRAME_LEFT], true)
  self:cutFrameBordersVertical(self.frameBounds[GuiElement.FRAME_BOTTOM], self.frameBounds[GuiElement.FRAME_RIGHT], true)
  self:cutFrameBordersVertical(self.frameBounds[GuiElement.FRAME_TOP], self.frameBounds[GuiElement.FRAME_LEFT], false)
  self:cutFrameBordersVertical(self.frameBounds[GuiElement.FRAME_TOP], self.frameBounds[GuiElement.FRAME_RIGHT], false)
end
function GuiElement.cutFrameBordersHorizontal(v0, v1, v2, v3)
  if v2.height < v1.width then
    if v3 then
      v2.x = v2.x + v1.width
    end
    v2.width = v2.width - v1.width
  end
end
function GuiElement.cutFrameBordersVertical(v0, v1, v2, v3)
  if v2.height <= v1.width then
    if v3 then
      v2.y = v2.y + v1.height
    end
    v2.height = v2.height - v1.height
  end
end
function GuiElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  if eventUsed == nil then
  end
  if self.visible then
    -- TODO: structure LOP_FORNPREP (pc 11, target 27)
    local v11 = self.elements[#self.elements]:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
    if v11 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 26, target 12)
  end
  return eventUsed
end
function GuiElement:touchEvent(posX, posY, isDown, isUp, touchId, eventUsed)
  if eventUsed == nil then
  end
  if self.visible then
    -- TODO: structure LOP_FORNPREP (pc 11, target 27)
    local v11 = self.elements[#self.elements]:touchEvent(posX, posY, isDown, isUp, touchId, eventUsed)
    if v11 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 26, target 12)
  end
  return eventUsed
end
function GuiElement:inputEvent(action, value, eventUsed)
  if not eventUsed then
    if self.parent then
      local v4 = v4:inputEvent(action, value, eventUsed)
    end
    if v4 == nil then
    end
  end
  return eventUsed
end
function GuiElement:inputReleaseEvent(action, eventUsed)
  if not eventUsed then
    if self.parent then
      local v3 = v3:inputReleaseEvent(action, eventUsed)
    end
    if v3 == nil then
    end
  end
  return eventUsed
end
function GuiElement:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  if eventUsed == nil then
  end
  if self.visible then
    -- TODO: structure LOP_FORNPREP (pc 11, target 26)
    local v10 = self.elements[#self.elements]:keyEvent(unicode, sym, modifier, isDown, eventUsed)
    if v10 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 25, target 12)
  end
  return eventUsed
end
function GuiElement:update(dt)
  if self.fadeDirection ~= 0 then
    if 0 < self.fadeDirection then
      self:setAlpha(self.alpha + self.fadeDirection * dt / self.fadeInTime)
    else
      self:setAlpha(self.alpha + self.fadeDirection * dt / self.fadeOutTime)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 39, target 52)
  local v6 = self.elements[1]:getIsActiveNonRec()
  if v6 then
    self.elements[1]:update(dt)
  end
  -- TODO: structure LOP_FORNLOOP (pc 51, target 40)
end
function GuiElement:draw(clipX1, clipY1, clipX2, clipY2)
  if self.newLayer then
    new2DLayer()
  end
  local v5, v6, v7, v8 = self:getClipArea(clipX1, clipY1, clipX2, clipY2)
  self:raiseCallback("onDrawCallback", self)
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L240 end
  end
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth, self.absPosition[2] - 1 / g_screenHeight, self.absSize[1] + 2 * 1 / g_screenWidth, 1 / g_screenHeight, 1, 0, 0, 1)
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth, self.absPosition[2] + self.absSize[2], self.absSize[1] + 2 * 1 / g_screenWidth, 1 / g_screenHeight, 1, 0, 0, 1)
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth, self.absPosition[2], 1 / g_screenWidth, self.absSize[2], 1, 0, 0, 1)
  drawFilledRect(self.absPosition[1] + self.absSize[1], self.absPosition[2], 1 / g_screenWidth, self.absSize[2], 1, 0, 0, 1)
  drawFilledRect(self.absPosition[1], self.absPosition[2], self.absSize[1], 1 / g_screenHeight, 0, 1, 0, 1)
  drawFilledRect(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 1 / g_screenHeight, self.absSize[1], 1 / g_screenHeight, 0, 1, 0, 1)
  drawFilledRect(self.absPosition[1], self.absPosition[2], 1 / g_screenWidth, self.absSize[2], 0, 1, 0, 1)
  drawFilledRect(self.absPosition[1] + self.absSize[1] - 1 / g_screenWidth, self.absPosition[2], 1 / g_screenWidth, self.absSize[2], 0, 1, 0, 1)
  local v11 = string.format("%.1f %.1f <%.1f %.1f>", self.absPosition[1] * g_screenWidth, self.absPosition[2] * g_screenHeight, self.absSize[1] * g_screenWidth, self.absSize[2] * g_screenHeight)
  renderText(...)
  -- TODO: structure LOP_FORNPREP (pc 245, target 264)
  local v9 = self.elements[1]:getIsVisibleNonRec()
  if v9 then
    v11 = self.elements[1]:getClipArea(clipX1, clipY1, clipX2, clipY2)
    self.elements[1]:draw(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 263, target 246)
  if self.hasFrame then
    -- TODO: structure LOP_FORNPREP (pc 270, target 301)
    if self.frameOverlayVisible[1] then
      drawFilledRect(self.frameBounds[1].x, self.frameBounds[1].y, self.frameBounds[1].width, self.frameBounds[1].height, self.frameColors[1][1], self.frameColors[1][2], self.frameColors[1][3], self.frameColors[1][4], clipX1, clipY1, clipX2, clipY2)
    end
    -- TODO: structure LOP_FORNLOOP (pc 300, target 271)
  end
  if g_uiFocusDebugEnabled and self.focusId ~= nil then
    v5 = self:canReceiveFocus()
    if v5 then
      setTextColor(1, 0, 0, 1)
      local v15 = tostring(self.focusId)
      v15 = ClassUtil.getClassNameByObject(self)
      local v14 = tostring(...)
      renderText(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 0.008, 0.008, " FocusId: " .. v15 .. " " .. v14)
      local v12 = tostring(self.focusChangeData[FocusManager.TOP])
      renderText(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 0.016, 0.008, " T: " .. v12)
      v12 = tostring(self.focusChangeData[FocusManager.BOTTOM])
      renderText(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 0.024, 0.008, " B: " .. v12)
      v12 = tostring(self.focusChangeData[FocusManager.LEFT])
      renderText(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 0.032, 0.008, " L: " .. v12)
      v12 = tostring(self.focusChangeData[FocusManager.RIGHT])
      renderText(self.absPosition[1], self.absPosition[2] + self.absSize[2] - 0.04, 0.008, " R: " .. v12)
      setTextColor(1, 1, 1, 1)
    end
  end
end
function GuiElement:onOpen()
  self:raiseCallback("onOpenCallback", self)
  -- TODO: structure LOP_FORNPREP (pc 10, target 18)
  self.elements[1]:onOpen()
  -- TODO: structure LOP_FORNLOOP (pc 17, target 11)
end
function GuiElement:onClose()
  self:raiseCallback("onCloseCallback", self)
  -- TODO: structure LOP_FORNPREP (pc 10, target 18)
  self.elements[1]:onClose()
  -- TODO: structure LOP_FORNLOOP (pc 17, target 11)
end
function GuiElement:shouldFocusChange(direction)
  for v5, v6 in ipairs(self.elements) do
    local v7 = v6:shouldFocusChange(direction)
    if not not v7 then
      continue
    end
    return false
  end
  return true
end
function GuiElement.canReceiveFocus(v0)
  return false
end
function GuiElement:onFocusLeave()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self.elements[1]:onFocusLeave()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if self.toolTipElement ~= nil and self.toolTipText ~= nil then
    v1:setText("")
  end
end
function GuiElement:onFocusEnter()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self.elements[1]:onFocusEnter()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if self.toolTipElement ~= nil and self.toolTipText ~= nil then
    v1:setText(self.toolTipText)
  end
end
function GuiElement:onFocusActivate()
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  if self.elements[1].handleFocus then
    self.elements[1]:onFocusActivate()
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
end
function GuiElement:onHighlight()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self.elements[1]:onHighlight()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if self.toolTipElement ~= nil and self.toolTipText ~= nil then
    v1:setText(self.toolTipText)
  end
end
function GuiElement:onHighlightRemove()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self.elements[1]:onHighlightRemove()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if self.toolTipElement ~= nil and self.toolTipText ~= nil then
    v1:setText("")
  end
end
function GuiElement:storeOverlayState()
  local v1 = self:getOverlayState()
  self.previousOverlayState = v1
end
function GuiElement:restoreOverlayState()
  if self.previousOverlayState then
    self:setOverlayState(self.previousOverlayState)
    self.previousOverlayState = nil
  end
end
function GuiElement:getHandleFocus()
  return self.handleFocus
end
function GuiElement:setHandleFocus(handleFocus)
  self.handleFocus = handleFocus
end
function GuiElement:addElement(element)
  if element.parent ~= nil then
    v2:removeElement(element)
  end
  table.insert(self.elements, element)
  element.parent = self
end
function GuiElement:removeElement(element)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  if self.elements[1] == element then
    table.remove(self.elements, 1)
    element.parent = nil
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
end
function GuiElement:unlinkElement()
  if self.parent ~= nil then
    v1:removeElement(self)
  end
end
function GuiElement:updateAbsolutePosition()
  local borders = self:getParentBorders()
  if self.anchors[1] >= self.anchors[2] then
  end
  if self.anchors[3] >= self.anchors[4] then
  end
  if not v10 then
    if self.pivot ~= nil then
    else
    end
  end
  if not v11 then
    if self.pivot ~= nil then
    else
    end
  end
  self.absPosition[1] = v6
  self.absPosition[2] = v7
  self.absSize[1] = v8 - v6
  self.absSize[2] = v9 - v7
  -- TODO: structure LOP_FORNPREP (pc 156, target 164)
  v17:updateAbsolutePosition()
  -- TODO: structure LOP_FORNLOOP (pc 163, target 157)
  if self.hasFrame then
    self:updateFramePosition()
  end
end
function GuiElement:reset()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v4:reset()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
end
function GuiElement:isChildOf(element)
  if element == self then
    return false
  end
  while self.parent do
    if v2 == self then
      return false
    end
    if v2 == element then
      return true
    end
  end
  return false
end
function GuiElement.getFocusTarget(v0, v1, v2)
  return v0
end
function GuiElement:setPosition(x, y)
  local v4 = Utils.getNoNil(x, self.position[1])
  self.position[1] = v4
  v4 = Utils.getNoNil(y, self.position[2])
  self.position[2] = v4
  self:updateAbsolutePosition()
end
function GuiElement:move(dx, dy)
  self.position[1] = self.position[1] + dx
  self.position[2] = self.position[2] + dy
  self:updateAbsolutePosition()
end
function GuiElement:setAbsolutePosition(x, y)
  self.absPosition[1] = x
  self.absPosition[2] = y
  -- TODO: structure LOP_FORNPREP (pc 19, target 35)
  self.elements[1]:setAbsolutePosition(self.elements[1].absPosition[1] + x - self.absPosition[1], self.elements[1].absPosition[2] + y - self.absPosition[2])
  -- TODO: structure LOP_FORNLOOP (pc 34, target 20)
  if self.hasFrame then
    self:updateFramePosition()
  end
end
function GuiElement:setSize(x, y)
  local v3 = Utils.getNoNil(x, self.size[1])
  v3 = Utils.getNoNil(y, self.size[2])
  if self.thinLineProtection then
    if v3 ~= 0 then
      v3 = math.max(v3, 1 / g_screenWidth)
    end
    if y ~= 0 then
      v3 = math.max(y, 1 / g_screenHeight)
    end
  end
  self.size[1] = x
  self.size[2] = y
  self:updateAbsolutePosition()
end
function GuiElement:setVisible(visible)
  self.visible = visible
end
function GuiElement:getIsVisible()
  if self.visible then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000002 -> L9
  end
  return false
  if self.parent ~= nil then
    return v1:getIsVisible()
  end
  return true
end
function GuiElement:getIsVisibleNonRec()
  if self.visible and 0 >= self.alpha then
  end
  return v1
end
function GuiElement:setDisabled(disabled, doNotUpdateChildren)
  self.disabled = disabled
  if doNotUpdateChildren ~= nil then
    -- if v2 then goto L19 end
  end
  -- TODO: structure LOP_FORNPREP (pc 10, target 19)
  v6:setDisabled(disabled)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 11)
end
function GuiElement:getIsDisabled()
  return self.disabled
end
function GuiElement:getIsSelected()
  if self.parent ~= nil then
    return v1:getIsSelected()
  end
  return false
end
function GuiElement:getIsHighlighted()
  if self.parent ~= nil then
    return v1:getIsHighlighted()
  end
  return false
end
function GuiElement:fadeIn(factor)
  if 0 < self.fadeInTime then
    local v4 = Utils.getNoNil(factor, 1)
    self.fadeDirection = 1 * v4
    v4 = math.max(self.alpha, 0.0001)
    self:setAlpha(...)
    return
  end
  self.fadeDirection = 0
  self:setAlpha(1)
end
function GuiElement:fadeOut(factor)
  if 0 < self.fadeOutTime then
    local v4 = Utils.getNoNil(factor, 1)
    self.fadeDirection = -1 * v4
    return
  end
  self.fadeDirection = 0
  self:setAlpha(0)
end
function GuiElement:setAlpha(alpha)
  if alpha ~= self.alpha then
    local v2 = MathUtil.clamp(alpha, 0, 1)
    self.alpha = v2
    for v5, v6 in pairs(self.elements) do
      v6:setAlpha(self.alpha)
    end
    if self.alpha ~= 1 then
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000009 -> L36
    end
    self.fadeDirection = 0
  end
end
function GuiElement:getIsActive()
  if not self.disabled then
    local v1 = self:getIsVisible()
  end
  return v1
end
function GuiElement:getIsActiveNonRec()
  if not self.disabled then
    local v1 = self:getIsVisibleNonRec()
  end
  return v1
end
function GuiElement:getClipArea(clipX1, clipY1, clipX2, clipY2)
  if self.clipping then
    local v5 = math.max(clipX1 or 0, self.absPosition[1])
    v5 = math.max(clipY1 or 0, self.absPosition[2])
    v5 = math.min(clipX2 or 1, self.absPosition[1] + self.absSize[1])
    v5 = math.min(clipY2 or 1, self.absPosition[2] + self.absSize[2])
  end
  return clipX1, clipY1, clipX2, clipY2
end
function GuiElement:setSoundSuppressed(doSuppress)
  self.isSoundSuppressed = doSuppress
  for v5, v6 in pairs(self.elements) do
    v6:setSoundSuppressed(doSuppress)
  end
end
function GuiElement:getSoundSuppressed()
  return self.isSoundSuppressed
end
function GuiElement:findDescendantsRec(accumulator, rootElement, predicateFunction)
  if not rootElement then
    return
  end
  for v7, v8 in ipairs(rootElement.elements) do
    self:findDescendantsRec(accumulator, v8, predicateFunction)
    if predicateFunction then
      local v9 = predicateFunction(v8)
      if not v9 then
        continue
      end
    end
    table.insert(accumulator, v8)
  end
end
function GuiElement:getDescendants(predicateFunction)
  self:findDescendantsRec({}, self, predicateFunction)
  return {}
end
function GuiElement:setTarget(target, originalTarget, callOnCreate)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  v7:setTarget(target, originalTarget, callOnCreate)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  if self.target == originalTarget then
    self.target = target
    self.targetName = target.name
    if callOnCreate then
      self:raiseCallback("onCreateCallback", self, self.onCreateArgs)
    end
  end
end
function GuiElement:getFirstDescendant(predicateFunction)
  local res = self:getDescendants(predicateFunction)
  if 0 < #res then
  end
  return v2
end
function GuiElement:getDescendantById(id)
  if id then
    local v4 = self:getFirstDescendant(function(self)
      if self.id and self.id ~= u0 then
      end
      return id
    end)
  end
  return v2
end
function GuiElement:getDescendantByName(name)
  if name then
    local v4 = self:getFirstDescendant(function(self)
      if self.name and self.name ~= u0 then
      end
      return name
    end)
  end
  return v2
end
function GuiElement:updatePositionForOrigin(origin)
  if origin == "topLeft" then
    self.pivot = {0, 0}
    return
  end
  if origin == "topCenter" then
    self.pivot = {0.5, 0}
    return
  end
  if origin == "topRight" then
    self.pivot = {1, 0}
    return
  end
  if origin == "middleLeft" then
    self.pivot = {0, 0.5}
    return
  end
  if origin == "middleCenter" then
    self.pivot = {0.5, 0.5}
    return
  end
  if origin == "middleRight" then
    self.pivot = {1, 0.5}
    return
  end
  if origin == "bottomCenter" then
    self.pivot = {0, 1}
    return
  end
  if origin == "bottomRight" then
    self.pivot = {0.5, 1}
    return
  end
  self.pivot = {1, 1}
end
function GuiElement:updateScreenAlign(align)
  if align == "topLeft" then
    self:setAnchor(0, 1)
    return
  end
  if align == "topCenter" then
    self:setAnchor(0.5, 1)
    return
  end
  if align == "topRight" then
    self:setAnchor(1, 1)
    return
  end
  if align == "middleLeft" then
    self:setAnchor(0, 0.5)
    return
  end
  if align == "middleCenter" then
    self:setAnchor(0.5, 0.5)
    return
  end
  if align == "middleRight" then
    self:setAnchor(1, 0.5)
    return
  end
  if align == "bottomLeft" then
    self:setAnchor(0, 0)
    return
  end
  if align == "bottomCenter" then
    self:setAnchor(0.5, 0)
    return
  end
  if align == "bottomRight" then
    self:setAnchor(1, 0)
    return
  end
  self:setAnchors(0, 1, 0, 1)
end
function GuiElement:setAnchor(x, y)
  return self:setAnchors(x, x, y, y)
end
function GuiElement:setAnchors(minX, maxX, minY, maxY)
  self.anchors[1] = minX
  self.anchors[2] = maxX
  self.anchors[3] = minY
  self.anchors[4] = maxY
end
function GuiElement:fixThinLines()
  if self.thinLineProtection then
    if self.size[1] ~= 0 then
      local v2 = math.max(self.size[1], 1 / g_screenWidth)
      self.size[1] = v2
    end
    if self.size[2] ~= 0 then
      v2 = math.max(self.size[2], 1 / g_screenHeight)
      self.size[2] = v2
    end
    self:updateAbsolutePosition()
  end
end
function GuiElement:getParentBorders()
  if self.parent ~= nil then
    return v1:getBorders()
  end
  return self.parentBorders
end
function GuiElement:getBorders()
  self.borders[1] = self.absPosition[1]
  self.borders[2] = self.absPosition[2]
  self.borders[3] = self.absPosition[1] + self.absSize[1]
  self.borders[4] = self.absPosition[2] + self.absSize[2]
  return self.borders
end
function GuiElement:getCenter()
  self.center[1] = self.absPosition[1] + self.absSize[1] * 0.5
  self.center[2] = self.absPosition[2] + self.absSize[2] * 0.5
  return self.center
end
function GuiElement.getAspectScale(v0)
  return g_aspectScaleX, g_aspectScaleY
end
function GuiElement:applyElementAspectScale(ignorePosition)
  local v2, v3 = self:getAspectScale()
  self.size[1] = self.size[1] * v2
  self.margin[1] = self.margin[1] * v2
  self.margin[3] = self.margin[3] * v2
  self.size[2] = self.size[2] * v3
  self.margin[2] = self.margin[2] * v3
  self.margin[4] = self.margin[4] * v3
  if not ignorePosition then
    self.position[1] = self.position[1] * v2
    self.position[2] = self.position[2] * v3
  end
end
function GuiElement:applyScreenAlignment()
  self:applyElementAspectScale()
  for v4, v5 in ipairs(self.elements) do
    v5:applyScreenAlignment()
  end
end
function GuiElement:setOverlayState(overlayState)
  self.overlayState = overlayState
  if self.updateChildrenOverlayState then
    for v5, v6 in ipairs(self.elements) do
      v6:setOverlayState(overlayState)
    end
  end
end
function GuiElement:getOverlayState()
  return self.overlayState
end
function GuiElement:addCallback(xmlFile, key, funcName)
  local callbackName = getXMLString(xmlFile, key)
  if callbackName ~= nil then
    if self.target ~= nil then
      self[funcName] = self.target[callbackName]
      return
    end
    local v5 = ClassUtil.getFunction(callbackName)
    self[funcName] = v5
  end
end
function GuiElement:setCallback(funcName, callbackName)
  if self.target ~= nil then
    self[funcName] = self.target[callbackName]
    return
  end
  local v3 = ClassUtil.getFunction(callbackName)
  self[funcName] = v3
end
function GuiElement:raiseCallback(name, ...)
  if self[name] ~= nil then
    if self.target ~= nil then
      return self[name](...)
    end
    v2 = self[name](...)
    return v2
  end
  return nil
end
function GuiElement:extractIndexAndNameFromID()
  local v1 = self:len()
  if 4 <= v1 then
    local v4 = self:sub(v1, v1)
    if v4 == "]" then
      v4 = self:find("[", 1, true)
      if v4 ~= nil and 1 < v4 and v4 < v1 - 1 then
        local v6 = self:sub(v4 + 1, v1 - 1)
        local v5 = tonumber(...)
        if v5 ~= nil then
          v5 = self:sub(1, v4 - 1)
        end
      end
    end
  end
  return v3, v2
end
function GuiElement:setId(xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#id")
  if v3 ~= nil then
    local v5, v6 = GuiElement.extractIndexAndNameFromID(v3)
    local v7 = v6:find("[^%w_]")
    if v7 ~= nil then
      print("Error: Invalid gui element id " .. v3)
    end
    if v4 then
      self.id = v3
    end
  end
end
function GuiElement.include(v0, v1)
  local v2 = v1.new()
  v2:addTo(v0)
end
function GuiElement.verifyConfiguration(v0)
end
function GuiElement:reloadFocusHandling(reloadIds)
  if reloadIds then
    self.focusId = nil
    -- TODO: structure LOP_FORNPREP (pc 11, target 18)
    function(self)
      self.focusId = nil
      -- TODO: structure LOP_FORNPREP (pc 8, target 15)
      u0(self.elements[1])
      -- TODO: structure LOP_FORNLOOP (pc 14, target 9)
    end(self.elements[1])
    -- TODO: structure LOP_FORNLOOP (pc 17, target 12)
  end
  v2:loadElementFromCustomValues(self)
end
function GuiElement.findFirstFocusable(v0, v1)
  local v2 = u0(v0, v1)
  if v2 == nil then
  end
  return v2
end
function GuiElement:toString()
  local v3 = tostring(self.id)
  local v4 = tostring(self.focusId)
  local v5 = tostring(self.profile)
  return string.format("[ID: %s, FocusID: %s, GuiProfile: %s, Position: %g, %g]", v3, v4, v5, self.absPosition[1], self.absPosition[2])
end
