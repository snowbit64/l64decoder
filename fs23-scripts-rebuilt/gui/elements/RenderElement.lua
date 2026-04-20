-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RenderElement = {}
local RenderElement_mt = Class(RenderElement, GuiElement)
function RenderElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.cameraPath = nil
  v2.isRenderDirty = false
  v2.overlay = 0
  v2.shapesMask = 255
  v2.lightMask = 67108864
  return v2
end
function RenderElement:delete()
  self:destroyScene()
  local v2 = v2:superClass()
  v2.delete(self)
end
function RenderElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#filename")
  self.filename = v3
  v3 = getXMLString(xmlFile, key .. "#cameraNode")
  self.cameraPath = v3
  v3 = getXMLInt(xmlFile, key .. "#superSamplingFactor")
  self.superSamplingFactor = v3
  v3 = getXMLInt(xmlFile, key .. "#shapesMask")
  if not v3 then
  end
  self.shapesMask = v3
  v3 = getXMLInt(xmlFile, key .. "#lightMask")
  if not v3 then
  end
  self.lightMask = v3
  self:addCallback(xmlFile, key .. "#onRenderLoad", "onRenderLoadCallback")
end
function RenderElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getValue("filename")
  self.filename = v3
  v3 = profile:getValue("cameraNode")
  self.cameraPath = v3
  v3 = profile:getNumber("superSamplingFactor")
  self.superSamplingFactor = v3
  if applyProfile then
    self:setScene(self.filename)
  end
end
function RenderElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.filename = src.filename
  self.cameraPath = src.cameraPath
  self.superSamplingFactor = src.superSamplingFactor
  self.onRenderLoadCallback = src.onRenderLoadCallback
end
function RenderElement:createScene()
  self:setScene(self.filename)
end
function RenderElement:destroyScene()
  if self.loadingRequestId ~= nil then
    v1:releaseSharedI3DFile(self.loadingRequestId)
    self.loadingRequestId = nil
  end
  if self.overlay ~= 0 then
    delete(self.overlay)
    self.overlay = 0
  end
  if self.scene then
    delete(self.scene)
    self.scene = nil
  end
end
function RenderElement:setScene(filename)
  if self.scene ~= nil then
    delete(self.scene)
    self.scene = nil
  end
  if self.loadingRequestId ~= nil then
    v2:releaseSharedI3DFile(self.loadingRequestId)
    self.loadingRequestId = nil
  end
  self.isLoading = true
  self.filename = filename
  local v2 = v2:loadSharedI3DFileAsync(filename, false, false, RenderElement.setSceneFinished, self, nil)
  self.loadingRequestId = v2
end
function RenderElement:setSceneFinished(node, failedReason, args)
  self.isLoading = false
  if failedReason ~= LoadI3DFailedReason.FILE_NOT_FOUND then
    -- if v2 ~= LoadI3DFailedReason.UNKNOWN then goto L17 end
  end
  Logging.error("Failed to load character creation scene from '%s'", self.filename)
  if failedReason == LoadI3DFailedReason.NONE then
    self.scene = node
    local v5 = getRootNode()
    link(v5, node)
    self:createOverlay()
    return
  end
  if node ~= 0 then
    delete(node)
  end
end
function RenderElement:createOverlay()
  if self.overlay ~= 0 then
    delete(self.overlay)
    self.overlay = 0
  end
  local v2 = math.ceil(g_screenWidth * self.absSize[1])
  local v3 = math.ceil(g_screenHeight * self.absSize[2])
  local v4 = I3DUtil.indexToObject(self.scene, self.cameraPath)
  if v4 == nil then
    Logging.error("Could not find camera node '%s' in scene", self.cameraPath)
    return
  end
  local v5 = createRenderOverlay(v4, v3, v1, v2, true, self.shapesMask, self.lightMask)
  self.overlay = v5
  self.isRenderDirty = true
  self:raiseCallback("onRenderLoadCallback", self.scene, self.overlay)
end
function RenderElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isRenderDirty and self.overlay ~= 0 then
    updateRenderOverlay(self.overlay)
    self.isRenderDirty = false
  end
end
function RenderElement:draw(clipX1, clipY1, clipX2, clipY2)
  if not self.isLoading and self.overlay ~= 0 then
    if clipX1 ~= nil then
      local v23 = math.max(self.absPosition[1], clipX1)
      v23 = math.max(self.absPosition[2], clipY1)
      local v25 = math.min(self.absPosition[1] + self.size[1], clipX2)
      v23 = math.max(v25 - v23, 0)
      v25 = math.min(self.absPosition[2] + self.size[2], clipY2)
      v23 = math.max(v25 - v23, 0)
    end
    if v9 ~= v13 and v10 ~= v12 then
      setOverlayUVs(self.overlay, v9, v10, v11, v12, v13, v14, v15, v16)
      renderOverlay(self.overlay, v5, v6, v7, v8)
    end
  end
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function RenderElement.canReceiveFocus(v0)
  return false
end
function RenderElement:getSceneRoot()
  return self.scene
end
function RenderElement:setRenderDirty()
  self.isRenderDirty = true
end
