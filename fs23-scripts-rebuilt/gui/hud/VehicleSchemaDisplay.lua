-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSchemaDisplay = {}
local VehicleSchemaDisplay_mt = Class(VehicleSchemaDisplay, HUDDisplayElement)
VehicleSchemaDisplay.SCHEMA_OVERLAY_DEFINITIONS_PATH = "dataS/vehicleSchemaOverlays.xml"
VehicleSchemaDisplay.MAX_SCHEMA_COLLECTION_DEPTH = 5
function VehicleSchemaDisplay.new(modManager)
  local backgroundOverlay = VehicleSchemaDisplay.createBackground()
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2:createBackgroundBar()
  v2.modManager = modManager
  v2.vehicle = nil
  v2.isDocked = false
  v2.vehicleSchemaOverlays = {}
  v2.iconSizeX = 0
  v2.iconSizeY = 0
  v2.maxSchemaWidth = 0
  return v2
end
function VehicleSchemaDisplay:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  if self.overlayFront ~= nil then
    v1:delete()
  end
  if self.overlayMiddle ~= nil then
    v1:delete()
  end
  if self.overlayBack ~= nil then
    v1:delete()
  end
  for v4, v5 in pairs(self.vehicleSchemaOverlays) do
    v5:delete()
    self.vehicleSchemaOverlays[v4] = nil
  end
end
function VehicleSchemaDisplay:loadVehicleSchemaOverlays()
  local xmlFile = loadXMLFile("VehicleSchemaDisplayOverlays", VehicleSchemaDisplay.SCHEMA_OVERLAY_DEFINITIONS_PATH)
  self:loadVehicleSchemaOverlaysFromXML(xmlFile)
  delete(xmlFile)
  local v3 = v3:getActiveMods()
  for v5, v6 in ipairs(...) do
    local v7 = loadXMLFile("VehicleSchemaDisplay ModFile", v6.modFile)
    if not (v7 ~= 0) then
      continue
    end
    self:loadVehicleSchemaOverlaysFromXML(v7, v6.modFile)
    delete(v7)
  end
  self:storeScaledValues()
end
function VehicleSchemaDisplay:loadVehicleSchemaOverlaysFromXML(xmlFile, modPath)
  if modPath then
    local v6, v7 = Utils.getModNameAndBaseDirectory(modPath)
  end
  v6 = getXMLString(xmlFile, v3 .. "#filename")
  local v8 = getXMLString(xmlFile, v3 .. "#imageSize")
  v7 = GuiUtils.get2DArray(v8, {1024, 1024})
  while true do
    v9 = string.format("%s.overlay(%d)", v3, v8)
    v10 = hasXMLProperty(xmlFile, v9)
    if not v10 then
      break
    end
    v10 = getXMLString(xmlFile, v9 .. "#name")
    v11 = getXMLString(xmlFile, v9 .. "#uvs")
    if not v11 then
      v11 = string.format("0px 0px %ipx %ipx", v7[1], v7[2])
    end
    v12 = GuiUtils.getUVs(v11, v7)
    v13 = getXMLString(xmlFile, v9 .. "#size")
    if not v13 then
      v13 = string.format("%ipx %ipx", VehicleSchemaDisplay.SIZE.ICON[1], VehicleSchemaDisplay.SIZE.ICON[1])
    end
    v14 = GuiUtils.getNormalizedValues(v13, {1, 1})
    if v10 then
      v16 = Utils.getFilename(v6, v4)
      v17 = Overlay.new(v16, 0, 0, v14[1], v14[2])
      v17:setUVs(v12)
      self.vehicleSchemaOverlays[v5 .. v10] = v17
    end
  end
end
function VehicleSchemaDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
end
function VehicleSchemaDisplay:lateSetDocked(isDocked)
  self.isDocked = isDocked
end
function VehicleSchemaDisplay:setDocked(isDocked, animate)
  local v5 = self:getScale()
  local v3, v4 = VehicleSchemaDisplay.getBackgroundPosition(...)
  if animate then
    v5 = v5:getFinished()
    if v5 then
      local v5, v6 = self:getPosition()
      self:animateDocking(v5, v6, v3, v4, isDocked)
      return
    end
  end
  v5:stop()
  self.isDocked = isDocked
  self:setPosition(v3, v4)
end
function VehicleSchemaDisplay:draw()
  if self.vehicle ~= nil then
    local v2 = v2:superClass()
    v2.draw(self)
    self:drawVehicleSchemaOverlays(self.vehicle)
  end
end
function VehicleSchemaDisplay:animateDocking(startX, startY, targetX, targetY, isDocking)
  local sequence = TweenSequence.new(self)
  if not isDocking then
    sequence:addInterval(HUDDisplayElement.MOVE_ANIMATION_DURATION)
  end
  local v10 = MultiValueTween.new(self.setPosition, {startX, startY}, {targetX, targetY}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:addTween(...)
  sequence:insertCallback(self.lateSetDocked, isDocking, v7)
  sequence:start()
  self.animation = sequence
end
function VehicleSchemaDisplay:collectVehicleSchemaDisplayOverlays(overlays, depth, vehicle, rootVehicle, parentOverlay, x, y, rotation, invertingX)
  if vehicle.getAttachedImplements == nil then
    return
  end
  local attachedImplements = vehicle:getAttachedImplements()
  for v14, v15 in pairs(attachedImplements) do
    if not (v15.object ~= nil) then
      continue
    end
    if not (v15.object.schemaOverlay ~= nil) then
      continue
    end
    local v17 = v15.object:getIsSelected()
    local v18 = v15.object:getUseTurnedOnSchema()
    if not (vehicle.schemaOverlay.attacherJoints[v15.jointDescIndex] ~= nil) then
      continue
    end
    if invertingX == vehicle.schemaOverlay.attacherJoints[v15.jointDescIndex].invertX then
    end
    local v21 = self:getSchemaOverlayForState(v16.schemaOverlay, true)
    if true then
    else
    end
    if v20 then
    else
    end
    local v29 = math.cos(v24)
    local v30 = math.sin(v24)
    v30 = math.sin(v24)
    local v31 = math.cos(v24)
    if v16.getIsLowered ~= nil then
      v29 = v16:getIsLowered(true)
    end
    if not v29 then
      v30, v31 = getNormalizedScreenValues(v19.liftedOffsetX, v19.liftedOffsetY)
    end
    v30 = v16:getAdditionalSchemaText()
    table.insert(overlays, {overlay = v21, additionalText = v30, x = v23, y = v22, rotation = v24, invertX = not v20, invisibleBorderRight = v16.schemaOverlay.invisibleBorderRight, invisibleBorderLeft = v16.schemaOverlay.invisibleBorderLeft, selected = v17, turnedOn = v18})
    if not (depth <= VehicleSchemaDisplay.MAX_SCHEMA_COLLECTION_DEPTH) then
      continue
    end
    self:collectVehicleSchemaDisplayOverlays(overlays, depth + 1, v16, rootVehicle, v21, v23, v22, v24, v20)
  end
end
function VehicleSchemaDisplay:getVehicleSchemaOverlays(vehicle)
  local v2 = self:getSchemaOverlayForState(vehicle.schemaOverlay, false)
  local v3 = vehicle:getAdditionalSchemaText()
  local v8 = vehicle:getUseTurnedOnSchema()
  v8 = vehicle:getIsSelected()
  table.insert({}, {overlay = v2, additionalText = v3, x = 0, y = 0, rotation = 0, invertX = false, invisibleBorderRight = vehicle.schemaOverlay.invisibleBorderRight, invisibleBorderLeft = vehicle.schemaOverlay.invisibleBorderLeft, turnedOn = v8, selected = v8})
  self:collectVehicleSchemaDisplayOverlays({}, 1, vehicle, vehicle, v2, 0, 0, 0, false)
  return {}, v2.height
end
function VehicleSchemaDisplay.getSchemaDelimiters(v0, v1)
  for v7, v8 in pairs(v1) do
    local v10 = math.cos(v8.rotation)
    local v11 = math.sin(v8.rotation)
    local v19 = math.max(v3, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + (v8.overlay.width + (v8.invisibleBorderRight + v8.invisibleBorderLeft) * v8.overlay.width) * v10, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + -v8.overlay.height * v11, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + (v8.overlay.width + (v8.invisibleBorderRight + v8.invisibleBorderLeft) * v8.overlay.width) * v10 + -v8.overlay.height * v11)
    v19 = math.min(v2, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + (v8.overlay.width + (v8.invisibleBorderRight + v8.invisibleBorderLeft) * v8.overlay.width) * v10, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + -v8.overlay.height * v11, v8.x + v8.invisibleBorderLeft * v8.overlay.width * v10 + (v8.overlay.width + (v8.invisibleBorderRight + v8.invisibleBorderLeft) * v8.overlay.width) * v10 + -v8.overlay.height * v11)
  end
  return v2, v3
end
function VehicleSchemaDisplay:drawVehicleSchemaOverlays(vehicle)
  if vehicle.rootVehicle.schemaOverlay ~= nil then
    local v2, v3 = self:getVehicleSchemaOverlays(vehicle.rootVehicle)
    local v4, v5 = self:getPosition()
    local v10 = self:getHeight()
    if self.isDocked then
      local v8 = self:getWidth()
    end
    local v8, v9 = self:getSchemaDelimiters(v2)
    if self.maxSchemaWidth < v9 - v8 then
    end
    local v12 = self:updateBarComponents(v6, v5, v11, self.overlay.height * self.uiScale, self.isDocked)
    v13:render()
    v13:render()
    v13:render()
    if self.isDocked then
    else
    end
    for v17, v18 in pairs(v2) do
      v18.overlay:setInvertX(v18.invertX)
      v18.overlay:setPosition(v13 + v18.x, v7 + v18.y)
      v18.overlay:setRotation(v18.rotation, 0, 0)
      v18.overlay:setDimension(v18.overlay.width * v10, v18.overlay.height * v10)
      if v18.turnedOn then
        -- if VehicleSchemaDisplay.COLOR.TURNED_ON then goto L135 end
      end
      if v18.selected then
      else
      end
      v19:setColor(v25, v26, v27, v28)
      v19:render()
      if v18.additionalText ~= nil then
        setTextBold(false)
        setTextColor(1, 1, 1, 1)
        setTextAlignment(RenderText.ALIGN_CENTER)
        local v28 = getCorrectTextSize(0.008)
        renderText(v13 + v18.x + v20 * v10 * 0.5, v7 + v18.y + v21 * v10 * 0.85, v28, v18.additionalText)
        setTextAlignment(RenderText.ALIGN_LEFT)
        setTextColor(1, 1, 1, 1)
      end
      v19:setDimension(v20, v21)
    end
  end
end
function VehicleSchemaDisplay:getSchemaOverlayForState(schemaOverlayData, isImplement, iconOverride)
  if schemaOverlayData.schemaName == "DEFAULT_IMPLEMENT" then
  elseif schemaOverlayData.schemaName == "DEFAULT_VEHICLE" then
  end
  if v4 and v4 ~= "" then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L25
  end
  if isImplement then
    -- if VehicleSchemaOverlayData.SCHEMA_OVERLAY.IMPLEMENT then goto L24 end
  end
  return self.vehicleSchemaOverlays[VehicleSchemaOverlayData.SCHEMA_OVERLAY.VEHICLE]
end
function VehicleSchemaDisplay:setScale(uiScale)
  local iconOverride = iconOverride:superClass()
  iconOverride.setScale(self, uiScale, uiScale)
  local isImplement, iconOverride = VehicleSchemaDisplay.getBackgroundPosition(self.isDocked, uiScale)
  self:setPosition(isImplement, iconOverride)
  self:storeScaledValues()
  self.uiScale = uiScale
end
function VehicleSchemaDisplay:storeScaledValues()
  local schemaOverlayData, isImplement = self:scalePixelToScreenVector(VehicleSchemaDisplay.SIZE.ICON)
  self.iconSizeX = schemaOverlayData
  self.iconSizeY = isImplement
  schemaOverlayData = self:scalePixelToScreenWidth(VehicleSchemaDisplay.MAX_SCHEMA_WIDTH)
  self.maxSchemaWidth = schemaOverlayData
  for v4, v5 in pairs(self.vehicleSchemaOverlays) do
    v5:resetDimensions()
    local v7, v8 = self:scalePixelToScreenVector({v5.defaultWidth, v5.defaultHeight})
    v5:setDimension(v7, v8)
  end
end
function VehicleSchemaDisplay.getBackgroundPosition(isDocked, uiScale)
  local iconOverride = unpack(VehicleSchemaDisplay.SIZE.SELF)
  local isImplement, iconOverride = getNormalizedScreenValues(...)
  if isDocked then
    local v7 = unpack(VehicleSchemaDisplay.POSITION.SELF_DOCKED)
    local v6, v7 = getNormalizedScreenValues(...)
  end
  return v4, v5
end
function VehicleSchemaDisplay.createBackground()
  local schemaOverlayData = unpack(VehicleSchemaDisplay.SIZE.SELF)
  local v0, schemaOverlayData = getNormalizedScreenValues(...)
  local isImplement, iconOverride = VehicleSchemaDisplay.getBackgroundPosition(false, 1)
  return Overlay.new(nil, isImplement, iconOverride, v0, schemaOverlayData)
end
function VehicleSchemaDisplay:createBackgroundBar()
  local isImplement = unpack(VehicleSchemaDisplay.SIZE.SELF)
  local schemaOverlayData, isImplement = getNormalizedScreenValues(...)
  local iconOverride = Overlay.new(g_baseHUDFilename, 0, 0, schemaOverlayData, isImplement)
  self.overlayFront = iconOverride
  local v5 = GuiUtils.getUVs(VehicleSchemaDisplay.UV.FRONT)
  iconOverride:setUVs(...)
  v5 = unpack(VehicleSchemaDisplay.COLOR.BACKGROUND)
  iconOverride:setColor(...)
  iconOverride = Overlay.new(g_baseHUDFilename, 0, 0, schemaOverlayData, isImplement)
  self.overlayMiddle = iconOverride
  v5 = GuiUtils.getUVs(VehicleSchemaDisplay.UV.MIDDLE)
  iconOverride:setUVs(...)
  v5 = unpack(VehicleSchemaDisplay.COLOR.BACKGROUND)
  iconOverride:setColor(...)
  iconOverride = Overlay.new(g_baseHUDFilename, 0, 0, schemaOverlayData, isImplement)
  self.overlayBack = iconOverride
  v5 = GuiUtils.getUVs(VehicleSchemaDisplay.UV.BACK)
  iconOverride:setUVs(...)
  v5 = unpack(VehicleSchemaDisplay.COLOR.BACKGROUND)
  iconOverride:setColor(...)
end
function VehicleSchemaDisplay:updateBarComponents(x, y, width, height, isDocked)
  local v7, v8 = getNormalizedScreenValues(VehicleSchemaDisplay.UV.FRONT[3], VehicleSchemaDisplay.UV.FRONT[4])
  if isDocked then
  end
  v10:setDimension(v9, height)
  v10:setPosition(x, y)
  v10:setDimension(width, height)
  v10:setPosition(x + v9, y)
  v10:setDimension(v9, height)
  v10:setPosition(x + width + v9, y)
  return v9
end
VehicleSchemaDisplay.MAX_SCHEMA_WIDTH = 180
VehicleSchemaDisplay.SIZE = {SELF = {VehicleSchemaDisplay.MAX_SCHEMA_WIDTH, 30}, ICON = {26, 26}}
VehicleSchemaDisplay.COLOR = {TURNED_ON = {0.0003, 0.5647, 0.9822}, DEFAULT = {1, 1, 1}, BACKGROUND = {0, 0, 0, 0.75}}
VehicleSchemaDisplay.POSITION = {SELF_DOCKED = {InputHelpDisplay.POSITION.FRAME[1] + InputHelpDisplay.SIZE.HEADER[1], 0}}
VehicleSchemaDisplay.UV = {FRONT = {377, 296, 13, 27}, MIDDLE = {400, 296, 1, 27}, BACK = {459, 296, 13, 27}}
